// Reconstructed from MikeCore — 17 properties

struct GNMidiEvent {
    bool                     _notifiesOnReceipt;
    bool                     _copiesOnReceipt;
    GNMidiTimeStamp*         _currentTime;
    /*  */ void*             _parameterIndex;
    /*  */ void*             _parameterValue;
    /*  */ void*             _isSequenced;
    /*  */ void*             _songTime;
    /*  */ void*             _tempo;
    /*  */ void*             _cycleStartQuarter;
    /*  */ void*             _cycleEndQuarter;
    /*  */ void*             _quarter;
    /*  */ void*             _hostRenderSampleIndex;
    /*  */ void*             _numerator;
    /*  */ void*             _denominator;
    /*  */ void*             _transportPlaying;
    /*  */ void*             _cycleIsActive;
    /*  */ void*             _validity;
};