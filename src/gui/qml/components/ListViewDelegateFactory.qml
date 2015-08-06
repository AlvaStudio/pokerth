import QtQuick 2.2
import QtQuick.Layouts 1.1
import QtQuick.Window 2.0
import QtQuick.Dialogs 1.2
import QtQuick.Controls 1.2
import QtQuick.Controls.Styles 1.2

Item {
    id: root
    property int myListViewsHeight: 0
    property int myListViewsWidth: 0
    property var componentMap: {
        "ComboBox": myComboBox,
        "SpinBox": mySpinBox
    }
    width: myListViewsWidth

    Loader {
        id: listViewFactoryLoader
        function setSourceComponent(comp) {
            sourceComponent = comp;
        }

    }

    Component {
        id: myComboBox
        Rectangle {
            color: mouse.pressed ? "#11000000" : "white"
            width: root.width
            height: Math.round(comboBoxTitle.contentHeight*2.1 + comboBoxValue.contentHeight*1.0)
            Text {
                id: comboBoxTitle
                anchors.left: parent.left
                anchors.margins: 30
                y: myValue != "" ? Math.round(parent.height*0.5 - contentHeight*0.9) : Math.round(parent.height*0.5 - contentHeight*0.5)
                color: "black"
                font.pixelSize: Math.round(myListViewsHeight*0.06)
                text: myTitle
            }
            Text {
                id: comboBoxValue
                anchors.left: parent.left
                anchors.margins: 30
                y: Math.round(parent.height*0.5 + contentHeight*0.15)
                color: "grey"
                font.pixelSize: myValue != "" ? Math.round(myListViewsHeight*0.05) : 0
                text: myValue
            }
            Rectangle {
                anchors.horizontalCenter: parent.horizontalCenter
                anchors.bottom: parent.bottom
                width: parent.width - 30
                height: 1
                color: "lightgrey"
            }
            MouseArea {
                id: mouse
                anchors.fill: parent
                onClicked: {
                    myComboBoxSelector.show(myTitle, myValuesList)
                }
            }

            Component.onCompleted: {
                root.height = Qt.binding(function() { return height })
            }
        }
    }

    Component {
        id: mySpinBox
        Rectangle {
            width: root.width
            height: Math.round(comboBoxTitle.contentHeight*2.1 + comboBoxValue.contentHeight*1.0)
            Text {
                id: comboBoxTitle
                anchors.left: parent.left
                anchors.margins: 30
                y: myValue != "" ? Math.round(parent.height*0.5 - contentHeight*0.9) : Math.round(parent.height*0.5 - contentHeight*0.5)
                color: "black"
                font.pixelSize: Math.round(myListViewsHeight*0.06)
                text: myTitle
            }
            Text {
                id: comboBoxValue
                anchors.left: parent.left
                anchors.margins: 30
                y: Math.round(parent.height*0.5 + contentHeight*0.15)
                color: "grey"
                font.pixelSize: myValue != "" ? Math.round(myListViewsHeight*0.05) : 0
                text: myValue
            }
            Rectangle {
                anchors.horizontalCenter: parent.horizontalCenter
                anchors.bottom: parent.bottom
                width: parent.width - 30
                height: 1
                color: "lightgrey"
            }
            MouseArea {
                anchors.fill: parent
            }
            Component.onCompleted: {
                root.height = Qt.binding(function() { return height })
            }
        }
    }

    Component.onCompleted: {
        listViewFactoryLoader.setSourceComponent(componentMap[myType])
    }
}

//        Column {
//            anchors.verticalCenter: parent.verticalCenter
//            anchors.left: parent.left
//            anchors.leftMargin: 30
//            Text {
//                id: comboBoxTitle
//                color: "#0F0F0F"
//                font.pixelSize: parent.height*0.30
//                renderType: Text.NativeRendering
//                text: title
//                anchors.left: parent.left
//            }
//            Text {
//                id: comboBoxValue
//                color: "#0F0F0F"
//                font.pixelSize: parent.height*0.30
//                renderType: Text.NativeRendering
//                text: value
//                anchors.left: parent.left
//            }
//        }
//        Rectangle { //seperator
//            anchors.horizontalCenter: parent.horizontalCenter
//            anchors.bottom: parent.bottom
//            width: parent.width - 30
//            height: 1
//            color: "lightgrey"
//        }
//        MouseArea {
//            id: mouse
//            anchors.fill: parent
//            onClicked: root.clicked()

//        }


//    Image {
//        anchors.right: parent.right
//        anchors.rightMargin: 20
//        anchors.verticalCenter: parent.verticalCenter
//        source: "../../images/navigation_next_item.png"
//    }

////                CheckBox {
////                    id: myCheckBox
////                    anchors.verticalCenter: parent.verticalCenter
////                    x: rect1.width-rect1.width*0.10
////                    style: CheckBoxStyle {
////                        indicator: Rectangle {
////                            color: "#FAFAFA"
////                            implicitWidth: rect1.width*0.04
////                            implicitHeight: rect1.width*0.04
////                            radius: 3
////                            border.color: control.activeFocus ? "darkblue" : "gray"
////                            border.width: 1
////                            Rectangle {
////                                visible: control.checked
////                                color: "#555"
////                                border.color: "#333"
////                                radius: 1
////                                anchors.margins: 4
////                                anchors.fill: parent
////                            }
////                        }
////                    }
////                }


