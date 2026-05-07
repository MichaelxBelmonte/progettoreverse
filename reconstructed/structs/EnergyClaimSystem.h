// Reconstructed from MikeCore — 11 properties

struct EnergyClaimSystem {
    GNRect*                  _drawingBounds;
    bool                     _needsUpdateFrame;
    float                    _pixelPerCent;
    float                    _playingAnimation;
    bool                     _notOnTrack;
    bool                     _showsPitchCurve;
    double                   _time;
    float                    _displayPitchCenterTransition;
    double                   _envelopeParamsLastUpdateTime;
    bool                     _feedsbackEnergyClaimFactor;
    float                    _energyClaimFactor;
};