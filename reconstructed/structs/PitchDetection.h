// Reconstructed from MikeCore — 33 properties

struct PitchDetection {
    bool                     _isSlaveElementValid;
    bool                     _isSlaveElementEndTimeValid;
    int32_t                  _isSyncingToMasterOrValidatingCaches;
    double                   _decayStartPoint;
    double                   _decayEndPoint;
    float                    _pitchModulationFactor;
    float                    _pitchDriftFactor;
    bool                     _isMuted;
    double                   _anchorPoint;
    double                   _releasePoint;
    double                   _startTime;
    double                   _duration;
    float                    _pitchCenter;
    float                    _amplitudeFactor;
    double                   _amplitudeFadeInEndSourceTime;
    double                   _amplitudeFadeOutStartSourceTime;
    double                   _amplitudeFadeInShapePow;
    double                   _amplitudeFadeOutShapePow;
    float                    _sibilantBalance;
    float                    _formantOffset;
    double                   _attackDuration;
    double                   _sourceTimeForElementTimeFunctionAttackSlope;
    double                   _attackSlopeFactor;
    double                   _fadeInTime;
    double                   _fadeOutTime;
    bool                     _sourceTimeForElementTimeFunctionExceedsDuration;
    bool                     _didRequestCacheValidation;
    double                   _initialTimeStretchingOffset;
    bool                     _didFixDetection;
    bool                     _didFixTime;
    bool                     _didFixPitch;
    bool                     _didAddAndMute;
    bool                     _didShiftTime;
};