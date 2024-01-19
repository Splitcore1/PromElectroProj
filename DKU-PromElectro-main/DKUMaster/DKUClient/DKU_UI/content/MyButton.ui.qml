import QtQuick 6.4
import QtQuick.Controls 6.4

Button {
    id: button
    text: qsTr("Button")
    layer.enabled: false
    highlighted: true
    flat: false
    layer.format: ShaderEffectSource.RGB
    scale: 1
}
