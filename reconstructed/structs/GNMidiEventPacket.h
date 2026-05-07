// Reconstructed from MikeCore — 8 properties

struct GNMidiEventPacket {
    bool                     _isSource;
    bool                     _isDestination;
    GNMidiValue*             _currentStatus;
    bool                     _closeMonitor;
    bool                     _isActive;
    bool                     _forwardsActiveSense;
    bool                     _sendsNoteOffsOnActiveSenseLeaks;
    char                     _receivedActiveSense;
};