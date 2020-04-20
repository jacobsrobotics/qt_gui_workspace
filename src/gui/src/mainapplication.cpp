#include "../include/gui/mainapplication.h"
#include <ros_video_components/rosvideocomponent.h>

#include <QTimer>

MainApplication::MainApplication() {


}


void MainApplication::run() {


    qmlRegisterType<ROSVideoComponent>("bluerov.owr",1,0,"ROSVideoComponent");

    //this loads the qml file we are about to create

    this->load(QUrl(QStringLiteral("qrc:/window1.qml")));


    //Setup a timer to get the application's idle loop

    QTimer *timer = new QTimer(this);

    connect(timer, SIGNAL(timeout()), this, SLOT(mainLoop()));

    timer->start(0);

    ROSVideoComponent * video = this->rootObjects()[0]->findChild<ROSVideoComponent*>(QString("videoStream"));

    video->setup(&nh);

}

void MainApplication::mainLoop() {

    ros::spinOnce();

}


//The main thing
