// Reconstructed from MikeCore — 7 properties

struct GNAudioProcessorEventCache {
    /*  */ void*             _processingLock;
    /*  */ void*             _stateIsModified;
    /*  */ void*             _isSettingParameterState;
    /*  */ void*             _isSongPositionWhileStoppedWorkaroundDisabled;
    /*  */ void*             _lastRenderTransportWasPlaying;
    int64_t                  _expectedNextPlaybackSampleIndex;
    /*  */ void*             _hostDocument;
};