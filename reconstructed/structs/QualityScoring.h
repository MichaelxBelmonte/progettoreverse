// Reconstructed from MikeCore — 19 properties

struct QualityScoring {
    GNFilterQuality*         _filterQuality;
    bool                     _detectsBassNote;
    bool                     _detectsChordExtensions;
    bool                     _detectsChurchModes;
    bool                     _omitDoubtedThirds;
    bool                     _detectsDetailedModeChanges;
    bool                     _detectsSingleMode;
    bool                     _reflectsPitchSystem;
    bool                     _detectsPitchSystem;
    bool                     _assumesLowestPitchAsRoot;
    bool                     _assumesClosePosition;
    bool                     _suggestsMissingThird;
    bool                     _suggestsMissingFifth;
    bool                     _reflectsBeatStrength;
    bool                     _reflectsPitch;
    bool                     _reflectsDynamic;
    bool                     _reflectsDetectionQuality;
    int32_t                  _extensionLimit;
    GNFraction*              _granularity;
};