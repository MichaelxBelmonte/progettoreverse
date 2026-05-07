// Reconstructed from MikeCore — 10 properties

struct GNSoundFileALACWriter {
    int64_t                  _dataSize;
    UInt32*                  _formatID;
    UInt32*                  _bytesPerPacket;
    UInt64*                  _time;
    UInt32*                  _sampleRate;
    /* short */ void*        _bitsPerSample;
    /*  */ void*             _sampleFramesLeft;
    /*  */ void*             _frameSizes;
    /*  */ void*             _numberValidFrames;
    /*  */ void*             _theMagicCookie;
};