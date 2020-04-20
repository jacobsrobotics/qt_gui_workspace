

#include <ros_video_components/rosvideocomponent.h>

ROSVideoComponent::ROSVideoComponent(QQuickItem * parent) : QQuickPaintedItem(parent), currentImage(NULL), currentBuffer(NULL) {


}

void ROSVideoComponent::setup(ros::NodeHandle *nh) {

    image_transport::ImageTransport imgTrans(*nh);

    imageSub = imgTrans.subscribe("/cam0", 1, &ROSVideoComponent::receiveImage, this, image_transport::TransportHints("compressed"));

    ROS_INFO("setup");

}

void ROSVideoComponent::receiveImage(const sensor_msgs::Image::ConstPtr &msg) {

    // check to see if we already have an image frame, if we do then we need to delete it

    // to avoid memory leaks

    if(currentImage) {

        delete currentImage;

    }

    // allocate a buffer of sufficient size to contain our video frame

    uchar * tempBuffer = (uchar *) malloc(sizeof(uchar) * msg->data.size());


    // and copy the message into the buffer

    // we need to do this because the QImage api requires the buffer we pass in to continue to exist

    // whilst the image is in use, but the msg and it's data will be lost once we leave this context.

    memcpy(tempBuffer, msg->data.data(), msg->data.size());


    // we then create a new QImage, this code below matches the spec of an image produced by the ros gscam module

    currentImage = new QImage(tempBuffer, msg->width, msg->height, QImage::Format_RGB888);


    ROS_INFO("Recieved");


    // We then swap out of buffer to avoid memory leaks

    if(currentBuffer) {

        delete currentBuffer;

        currentBuffer = tempBuffer;

    }

    // And re-render the component to display the new image.

    update();

}



void ROSVideoComponent::paint(QPainter *painter) {

    if(currentImage) {

        painter->drawImage(QPoint(0,0), *(this->currentImage));

    }

}
