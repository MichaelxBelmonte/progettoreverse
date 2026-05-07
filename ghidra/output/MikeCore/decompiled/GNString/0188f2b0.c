// Function: FUN_0188f2b0
// Address: 0188f2b0
// Size: 567 bytes
// Class: GNString


void FUN_0188f2b0(void)

{
  longlong unaff_RDI;
  float fVar1;
  float fVar2;
  
  if ((*(float *)(unaff_RDI + 0x44) != DAT_02390124) ||
     (NAN(*(float *)(unaff_RDI + 0x44)) || NAN(DAT_02390124))) {
    FUN_00d64850();
    *(undefined4 *)(unaff_RDI + 0x44) = 0x3f800000;
    FUN_00d64910();
  }
  if ((*(float *)(unaff_RDI + 0x48) != 0.0) || (NAN(*(float *)(unaff_RDI + 0x48)))) {
    FUN_00d64850();
    *(undefined4 *)(unaff_RDI + 0x48) = 0;
    FUN_00d64910();
  }
  if ((*(float *)(unaff_RDI + 0x4c) != DAT_02390124) ||
     (NAN(*(float *)(unaff_RDI + 0x4c)) || NAN(DAT_02390124))) {
    FUN_00d64850();
    *(undefined4 *)(unaff_RDI + 0x4c) = 0x3f800000;
    FUN_00d64910();
  }
  if ((*(float *)(unaff_RDI + 0x50) != 0.0) || (NAN(*(float *)(unaff_RDI + 0x50)))) {
    FUN_00d64850();
    *(undefined4 *)(unaff_RDI + 0x50) = 0;
    FUN_00d64910();
    fVar1 = 0.0;
    fVar2 = (*(float *)(unaff_RDI + 0x54) - *(float *)(unaff_RDI + 0x50)) * DAT_02393944;
    if (DAT_02394274 <= fVar2) {
      fVar1 = (float)_expf(DAT_024178e4 / fVar2);
    }
    if ((*(float *)(unaff_RDI + 0x58) != fVar1) || (NAN(*(float *)(unaff_RDI + 0x58)) || NAN(fVar1))
       ) {
      FUN_00d64850();
      *(float *)(unaff_RDI + 0x58) = fVar1;
      FUN_00d64910();
    }
  }
  if ((*(float *)(unaff_RDI + 0x54) != DAT_0239011c) ||
     (NAN(*(float *)(unaff_RDI + 0x54)) || NAN(DAT_0239011c))) {
    FUN_00d64850();
    *(undefined4 *)(unaff_RDI + 0x54) = 0x3f000000;
    FUN_00d64910();
    fVar2 = (*(float *)(unaff_RDI + 0x54) - *(float *)(unaff_RDI + 0x50)) * DAT_02393944;
    fVar1 = 0.0;
    if (DAT_02394274 <= fVar2) {
      fVar1 = (float)_expf(DAT_024178e4 / fVar2);
    }
    if ((*(float *)(unaff_RDI + 0x58) != fVar1) || (NAN(*(float *)(unaff_RDI + 0x58)) || NAN(fVar1))
       ) {
      FUN_00d64850();
      *(float *)(unaff_RDI + 0x58) = fVar1;
      FUN_00d64910();
    }
  }
  if ((*(float *)(unaff_RDI + 0x5c) != DAT_02390124) ||
     (NAN(*(float *)(unaff_RDI + 0x5c)) || NAN(DAT_02390124))) {
    FUN_00d64850();
    *(undefined4 *)(unaff_RDI + 0x5c) = 0x3f800000;
    FUN_00d64910();
  }
  if (*(char *)(unaff_RDI + 0x60) != '\0') {
    FUN_00d64850();
    *(undefined1 *)(unaff_RDI + 0x60) = 0;
    FUN_00d64910();
    return;
  }
  return;
}


