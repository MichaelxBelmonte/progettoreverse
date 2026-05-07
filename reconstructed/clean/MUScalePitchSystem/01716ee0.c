// Function: FUN_01716ee0
// Address: 01716ee0
// Size: 896 bytes
// Class: MUScalePitchSystem
// === MUScalePitchSystem properties ===
//   bool            _tuningIsSuggestedRelevant
//   bool            _modeIsSuggestedRelevant
//   bool            _tuningPitchAnchorIsSuggestedRelevant
//   bool            _modeFundamentalOffsetIsSuggestedRelevant
//   bool            _stretchingIsSuggestedRelevant
//   double          _startPulse
//   double          _startTime
//   double          _width
//   double          _scope


uint64_t FUN_01716ee0(void)

{
  uint64_t uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  char cVar7;
  char cVar8;
  uint uVar9;
  int unaff_ESI;
  int64_t this_ptr;
  uint uVar10;
  
  uVar3 = 0xffffffff;
  uVar10 = 0xffffffff;
  if (unaff_ESI != -1) {
    uVar10 = (unaff_ESI % 7 >> 0x1f & 7U) + unaff_ESI % 7;
  }
  uVar1 = *(uint64_t *)(this_ptr + 0x18);
  uVar2 = (uint)uVar1 & 0xf;
  if (uVar2 != 0xf) {
    cVar7 = (char)(uVar2 * 0x25 >> 8);
    uVar3 = (uint)(byte)((char)uVar2 +
                        ((byte)(((byte)((char)uVar2 - cVar7) >> 1) + cVar7) >> 2) * -7);
  }
  uVar5 = 0;
  if (uVar3 != uVar10) {
    uVar3 = (uint)(uVar1 >> 4) & 0xf;
    uVar2 = 0xffffffff;
    if (uVar3 != 0xf) {
      cVar7 = (char)(uVar3 * 0x25 >> 8);
      uVar2 = (uint)(byte)((char)uVar3 +
                          ((byte)(((byte)((char)uVar3 - cVar7) >> 1) + cVar7) >> 2) * -7);
    }
    uVar5 = 1;
    if (uVar2 != uVar10) {
      uVar3 = (uint)(uVar1 >> 8) & 0xf;
      uVar2 = 0xffffffff;
      if (uVar3 != 0xf) {
        cVar7 = (char)(uVar3 * 0x25 >> 8);
        uVar2 = (uint)(byte)((char)uVar3 +
                            ((byte)(((byte)((char)uVar3 - cVar7) >> 1) + cVar7) >> 2) * -7);
      }
      uVar5 = 2;
      if (uVar2 != uVar10) {
        uVar3 = (uint)(uVar1 >> 0xc) & 0xf;
        uVar2 = 0xffffffff;
        if (uVar3 != 0xf) {
          cVar7 = (char)(uVar3 * 0x25 >> 8);
          uVar2 = (uint)(byte)((char)uVar3 +
                              ((byte)(((byte)((char)uVar3 - cVar7) >> 1) + cVar7) >> 2) * -7);
        }
        uVar5 = 3;
        if (uVar2 != uVar10) {
          uVar3 = (uint)(uVar1 >> 0x10) & 0xf;
          uVar2 = 0xffffffff;
          if (uVar3 != 0xf) {
            cVar7 = (char)(uVar3 * 0x25 >> 8);
            uVar2 = (uint)(byte)((char)uVar3 +
                                ((byte)(((byte)((char)uVar3 - cVar7) >> 1) + cVar7) >> 2) * -7);
          }
          uVar5 = 4;
          if (uVar2 != uVar10) {
            uVar3 = (uint)(uVar1 >> 0x14) & 0xf;
            uVar2 = 0xffffffff;
            if (uVar3 != 0xf) {
              cVar7 = (char)(uVar3 * 0x25 >> 8);
              uVar2 = (uint)(byte)((char)uVar3 +
                                  ((byte)(((byte)((char)uVar3 - cVar7) >> 1) + cVar7) >> 2) * -7);
            }
            uVar5 = 5;
            if (uVar2 != uVar10) {
              uVar3 = (uint)(uVar1 >> 0x18) & 0xf;
              uVar2 = 0xffffffff;
              if (uVar3 != 0xf) {
                cVar7 = (char)(uVar3 * 0x25 >> 8);
                uVar2 = (uint)(byte)((char)uVar3 +
                                    ((byte)(((byte)((char)uVar3 - cVar7) >> 1) + cVar7) >> 2) * -7);
              }
              uVar5 = 6;
              if (uVar2 != uVar10) {
                uVar6 = uVar1 >> 0x1c & 0xf;
                uVar3 = 0xffffffff;
                iVar4 = (int)uVar6;
                if (iVar4 != 0xf) {
                  cVar7 = (char)((uint)(iVar4 * 0x25) >> 8);
                  cVar8 = (char)uVar6;
                  uVar3 = (uint)(byte)(cVar8 + ((byte)(((byte)(cVar8 - cVar7) >> 1) + cVar7) >> 2) *
                                               -7);
                }
                uVar5 = 7;
                if (uVar3 != uVar10) {
                  uVar2 = (uint)(uVar1 >> 0x20);
                  uVar3 = uVar2 & 0xf;
                  uVar9 = 0xffffffff;
                  if (uVar3 != 0xf) {
                    cVar7 = (char)(uVar3 * 0x25 >> 8);
                    uVar9 = (uint)(byte)((char)uVar3 +
                                        ((byte)(((byte)((char)uVar3 - cVar7) >> 1) + cVar7) >> 2) *
                                        -7);
                  }
                  uVar5 = 8;
                  if (uVar9 != uVar10) {
                    uVar3 = uVar2 >> 4 & 0xf;
                    uVar9 = 0xffffffff;
                    if (uVar3 != 0xf) {
                      cVar7 = (char)(uVar3 * 0x25 >> 8);
                      uVar9 = (uint)(byte)((char)uVar3 +
                                          ((byte)(((byte)((char)uVar3 - cVar7) >> 1) + cVar7) >> 2)
                                          * -7);
                    }
                    uVar5 = 9;
                    if (uVar9 != uVar10) {
                      uVar3 = uVar2 >> 8 & 0xf;
                      uVar9 = 0xffffffff;
                      if (uVar3 != 0xf) {
                        cVar7 = (char)(uVar3 * 0x25 >> 8);
                        uVar9 = (uint)(byte)((char)uVar3 +
                                            ((byte)(((byte)((char)uVar3 - cVar7) >> 1) + cVar7) >> 2
                                            ) * -7);
                      }
                      uVar5 = 10;
                      if (uVar9 != uVar10) {
                        uVar2 = uVar2 >> 0xc & 0xf;
                        uVar3 = 0xffffffff;
                        if (uVar2 != 0xf) {
                          cVar7 = (char)(uVar2 * 0x25 >> 8);
                          uVar3 = (uint)(byte)((char)uVar2 +
                                              ((byte)(((byte)((char)uVar2 - cVar7) >> 1) + cVar7) >>
                                              2) * -7);
                        }
                        uVar5 = 0xffffffff;
                        if (uVar3 == uVar10) {
                          uVar5 = 0xb;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return uVar5;
}

