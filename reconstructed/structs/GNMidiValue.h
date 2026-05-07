// Reconstructed from MikeCore — 8 properties

struct GNMidiValue {
    GNMidiValue*             _noteNumber;
    GNMidiValue*             _startVelocity;
    GNMidiValue*             _stopVelocity;
    GNMidiValue*             _aftertouch;
    GNMidiValue*             _programNumber;
    bool                     _stopping;
    bool                     _playing;
    int32_t                  _signalSize;
};