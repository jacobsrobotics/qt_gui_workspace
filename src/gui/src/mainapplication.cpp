#include "../include/gui/mainapplication.h"

#include <QTimer>

MainApplication::MainApplication() {


}


void MainApplication::run() {


    //this loads the qml file we are about to create

    this->load(QUrl(QStringLiteral("qrc:/window1.qml")));


    //Setup a timer to get the application's idle loop

    QTimer *timer = new QTimer(this);

    connect(timer, SIGNAL(timeout()), this, SLOT(mainLoop()));

    timer->start(0);

}

void MainApplication::mainLoop() {

    ros::spinOnce();

}


//The main thing
