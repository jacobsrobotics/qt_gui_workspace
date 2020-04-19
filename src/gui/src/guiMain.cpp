#include <ros/ros.h>
#include <QGuiApplication>
#include <QQuickView>

#include "../include/gui/mainapplication.h"


int main(int argc, char **argv)
{
  ros::init(argc, argv, "guiMain");
  ros::NodeHandle nh;

  ROS_INFO("Hello world!");


  QGuiApplication app(argc, argv);
  QGuiApplication::setAttribute(Qt::AA_EnableHighDpiScaling);


  MainApplication engine;
  engine.addImportPath(QStringLiteral("qrc:/"));
  engine.load(QUrl(QStringLiteral("qrc:/window1.qml")));


//  QQuickView view;
//  view.engine()->addImportPath("qrc:/uiFiles/imports");
//  view.setSource(QUrl("qrc:/uiFiles/Screen01.ui.qml"));
//  if (!view.errors().isEmpty())
//      return -1;
//  view.show();

//  engine.run();
  return app.exec();

}
