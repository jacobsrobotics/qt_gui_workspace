#include <ros/ros.h>
#include <QQmlApplication>

#include "include/gui/mainapplication.h"


int main(int argc, char **argv)
{
  ros::init(argc, argv, "guiMain");
  ros::NodeHandle nh;

  ROS_INFO("Hello world!");

  QGuiApplication app(argc, argv);

      MainApplication engine;

      engine.run();

      return app.exec();
}
