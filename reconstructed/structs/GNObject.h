// Reconstructed from MikeCore — 24 properties

struct GNObject {
    int32_t                  _state;
    bool                     _coding;
    bool                     _isSecureSaveEnabled;
    bool                     _encodesGlobalIDsOfReferredObjects;
    bool                     _reflectsOwnerTree;
    int32_t                  _usedCompressorIndex;
    bool                     _gatherOnly;
    bool                     _decoding;
    bool                     _emtpySelectionAllowed;
    bool                     _autoselectNewObjects;
    bool                     _autoselectObjects;
    bool                     _autofetchEnabled;
    bool                     _fetchesOnDemand;
    bool                     _selectionDidUpdateAssociations;
    bool                     _isAddingObjectsEnabled;
    bool                     _isRemovingObjectsEnabled;
    bool                     _revertsObjectsByKeepingGlobalIDs;
    bool                     _revertsObjectsByRefetching;
    int32_t                  _lastSelectedRow;
    int32_t                  _changeKindMask;
    int32_t                  _currentBatchIndex;
    int32_t                  _numberOfObjectsPerBatch;
    bool                     _awakesObjectsAfterDecodig;
    int32_t                  _predictedDecodedValuesIndex;
};