import QtQuick 1.0

Item{
    id: vumetre
    width: 60
    height: 550
    Rectangle {
        id: rectVuMetre
        width: 60
        height: 550
        color: "black"
        radius: 30
        smooth: true
        anchors.horizontalCenter: vumetre.horizontalCenter
        Rectangle{
            id: vmBar
            width: 10
            height: 30
            color: "grey"
            radius: 3
            smooth: true
            anchors.horizontalCenter: rectVuMetre.horizontalCenter
            anchors.bottom: rectVuMetre.bottom
            anchors.bottomMargin: 10
            gradient: Gradient {
                GradientStop { position: 0.0; color: "red" }
                GradientStop { position: 0.2; color: "yellow" }
                GradientStop { position: 1.0; color: "green" }
            }
            PropertyAnimation { id: animation; objectName: "vmAnim"; target: vmBar; property: "height"; to: 500; duration: 100 }
            MouseArea { anchors.fill: parent; onClicked: animation.running = true }
        } // rec_repeat
    } // rectVuMetre
    function animationValues(valueAnim) {
        animation.to = valueAnim
        animation.running = true
    }
} // VuMetre item

