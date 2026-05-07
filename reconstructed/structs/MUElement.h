// Reconstructed from MikeCore — 26 properties

struct MUElement {
    bool                     _showsLeftSeparator;
    bool                     _feedbacksEditing;
    bool                     _showsLeftDisjoinArrows;
    bool                     _showsRightDisjoinArrows;
    bool                     _selected;
    int32_t                  _feedbackDisconnected;
    bool                     _flagsDirty;
    GNTimeInterval*          _intervalPreviewStartDelay;
    int32_t                  _referencePitchIndex;
    int32_t                  _selectedPitchIndex;
    double                   _startTime;
    double                   _stopTime;
    int32_t                  _toolMode;
    bool                     _inRegionCheck;
    double                   _originalAnchorTime;
    double                   _timeQuantization;
    float                    _originalPitchDeviation;
    float                    _pitchQuantization;
    bool                     _pitchWasSetManually;
    bool                     _timeWasSetManually;
    float                    _manuallySetAmpFactor;
    bool                     _pitchDriftWasSetManually;
    int32_t                  _westernStandardScaleSnapOffset;
    int32_t                  _startMargin;
    int32_t                  _endMargin;
    double                   _performanceTime;
};