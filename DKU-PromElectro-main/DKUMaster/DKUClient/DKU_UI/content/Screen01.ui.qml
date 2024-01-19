

/*
This is a UI file (.ui.qml) that is intended to be edited in Qt Design Studio only.
It is supposed to be strictly declarative and only uses a subset of QML. If you edit
this file manually, you might introduce QML code that is not supported by Qt Design Studio.
Check out https://doc.qt.io/qtcreator/creator-quick-ui-forms.html for details on .ui.qml files.
*/
import QtQuick 6.4
import QtQuick.Controls 6.4
import DKU_UI

Rectangle {
    id: rectangle
    width: Constants.width
    height: Constants.height
    color: "#15151a"

    Button {
        id: button
        x: 361
        y: 542
        visible: true
        text: qsTr("Button")
        clip: false
        focus: false
        layer.enabled: false
        highlighted: true
        flat: false
        layer.format: ShaderEffectSource.RGB
        scale: 1
    }

    states: [
        State {
            name: "clicked"
        }
    ]
}
