

#include <ros_video_components/owrroscomponents.h>

#include <ros_video_components/rosvideocomponent.h>

void OWRRosComponents::registerTypes(const char *uri) {

    qmlRegisterType<ROSVideoComponent>("bluerov.owr",1,0,"ROSVideoComponent");

}
