import bluerov.owr 1.0


import QtQuick 2.0

import QtQuick.Window 2.2

Window {

    id: window1

    visible: true

    height: 600
    width: 800




    ROSVideoComponent {

       // @disable-check M16

       objectName: "videoStream"

       id: videoStream

       // @disable-check M16

       anchors.bottom: parent.bottom

       // @disable-check M16

       anchors.bottomMargin: 0

       // @disable-check M16

       anchors.top: image1.bottom

       // @disable-check M16

       anchors.topMargin: 0

       // @disable-check M16

       width: 320

       // @disable-check M16

       height: 240

    }
}
