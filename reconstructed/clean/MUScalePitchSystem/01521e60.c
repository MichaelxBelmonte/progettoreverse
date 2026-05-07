// Function: FUN_01521e60
// Address: 01521e60
// Size: 589 bytes
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


int FUN_01521e60(uint64_t param_1,void*param_2)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int unaff_ESI;
  int iVar4;
  uint uVar5;
  int iVar6;
  int64_t *this_ptr;
  uint32_t uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  
  uVar10 = unaff_ESI - 0x3c;
  uVar8 = 0;
  if (unaff_ESI < 0x3c) {
    uVar8 = 0xfffffff4;
    if (-0xc < (int)uVar10) {
      uVar8 = uVar10;
    }
    iVar1 = (uVar8 - unaff_ESI) + 0x3c;
    uVar8 = (uint)(iVar1 != 0);
    uVar8 = (iVar1 - uVar8) / 0xc + uVar8;
    uVar10 = (unaff_ESI + uVar8 * 0xc) - 0x30;
    uVar8 = ~uVar8;
  }
  uVar9 = uVar10 % 0xc;
  iVar1 = (**(code **)(*this_ptr + 0x408))();
  uVar5 = uVar10 % 0xc - 1;
  if (iVar1 < 0) {
    iVar4 = 0;
    uVar7 = 0;
    iVar2 = 0;
    if (uVar5 < 0xb) {
      uVar7 = *(void*)(&g_0240e8ec + (int64_t)(int)uVar5 * 4);
      iVar2 = *(int *)(&g_0240e918 + (int64_t)(int)uVar5 * 4);
    }
    iVar6 = 1;
    if (1 < -iVar1) {
      iVar6 = -iVar1;
    }
    do {
      iVar4 = iVar4 + 5;
      iVar4 = iVar4 + (((uint)(iVar4 / 6 + (iVar4 >> 0x1f)) >> 1) - (iVar4 >> 0x1f)) * -0xc;
      cVar3 = (char)iVar4 + '\x05';
      uVar5 = cVar3 * 0x2b;
      if (uVar9 == (int)(char)(cVar3 + ((char)((uVar5 & 0xffff) >> 0xf) + (char)(uVar5 >> 9)) * -0xc
                              )) {
        uVar7 = 0;
        break;
      }
      cVar3 = (char)iVar4 + '\x06';
      uVar5 = cVar3 * 0x2b;
      if (uVar9 == (int)(char)(cVar3 + ((char)((uVar5 & 0xffff) >> 0xf) + (char)(uVar5 >> 9)) * -0xc
                              )) goto LAB_01522057;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  else {
    uVar7 = 0;
    iVar2 = 0;
    if (uVar5 < 0xb) {
      uVar7 = *(void*)(&g_0240e944 + (int64_t)(int)uVar5 * 4);
      iVar2 = *(int *)(&g_0240e970 + (int64_t)(int)uVar5 * 4);
    }
    if (0 < iVar1) {
      iVar4 = 0;
      do {
        iVar4 = iVar4 + 7;
        iVar4 = iVar4 + (((uint)(iVar4 / 6 + (iVar4 >> 0x1f)) >> 1) - (iVar4 >> 0x1f)) * -0xc;
        if (uVar9 == (byte)((char)(iVar4 + 0xbU) + ((byte)((iVar4 + 0xbU & 0xff) / 3) & 0xfc) * -3))
        {
          uVar7 = 0;
          break;
        }
        cVar3 = (char)iVar4 + '\n';
        uVar5 = cVar3 * 0x2b;
        if (uVar9 == (byte)(cVar3 + ((char)((uVar5 & 0xffff) >> 0xf) + (char)(uVar5 >> 9)) * -0xc))
        goto LAB_01522057;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
  }
joined_r0x015220a9:
  if (param_2 != (void*)0x0) {
    *param_2 = uVar7;
  }
  return iVar2 + ((int)uVar10 / 0xc + uVar8) * 7;
LAB_01522057:
  uVar7 = 3;
  goto joined_r0x015220a9;
}

