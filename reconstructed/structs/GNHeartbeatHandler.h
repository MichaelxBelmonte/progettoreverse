// Reconstructed from MikeCore — 31 properties

struct GNHeartbeatHandler {
    bool                     _isPlaybackButtonPressed;
    double                   _lastShouldObserverOurselfTime;
    bool                     _didRequestPlayBack;
    bool                     _isBordered;
    bool                     _isDefaultButton;
    GNPoint*                 _imageOffset;
    double                   _flashingTime;
    bool                     _showsStereo;
    bool                     _timerRegistered;
    GNCoord*                 _left;
    GNCoord*                 _right;
    GNCoord*                 _length;
    double                   _leftTime;
    double                   _rightTime;
    double                   _delay;
    bool                     _showRatios;
    bool                     _showAllRatios;
    bool                     _showRatioModeButton;
    float                    _minFloatValue;
    float                    _maxFloatValue;
    float                    _slideRuleAnchorOffset;
    float                    _lastAnchorOffsetChangeRatio;
    float                    _slideRuleAnchorOffsetMinRatio;
    float                    _slideRuleAnchorOffsetMaxRatio;
    float                    _movingResolutionRatio;
    float                    _movingFineResolutionRatio;
    /*  */ void*             _currentLabel1;
    /*  */ void*             _currentLabel2;
    /*  */ void*             _maxLabel1;
    /*  */ void*             _maxLabel2;
    /*  */ void*             _elapsedTime;
};