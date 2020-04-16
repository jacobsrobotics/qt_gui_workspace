

import QtQuick 2.0

import QtQuick.Window 2.2

Window {

    id: window1

    visible: true

    Text {
        id: element
        x: 242
        y: 167
        width: 146
        height: 92
        text: qsTr("Hello World")
        verticalAlignment: Text.AlignVCenter
        horizontalAlignment: Text.AlignHCenter
        font.pixelSize: 21
    }


}

/*##^## Designer {
    D{i:0;autoSize:true;height:480;width:640}
}
 ##^##*/
