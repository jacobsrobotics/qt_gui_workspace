

#ifndef MAINAPPLICATION_H

#define MAINAPPLICATION_H

#include <ros/ros.h>

#include <QQmlApplicationEngine>


class MainApplication : public QQmlApplicationEngine {

    Q_OBJECT

    public:

        MainApplication();

        //this method is used to setup all the ROS functionality we need, before the application starts running

        void run();


    //this defines a slot that will be called when the application is idle.

    public slots:

        void mainLoop();


   private:

        ros::NodeHandle nh;

};


#endif // MAINAPPLICATION_H
