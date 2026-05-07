// Function: FUN_01a21920
// Address: 01a21920
// Size: 781 bytes
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


void FUN_01a21920(void)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  char cVar4;
  char cVar5;
  int iVar6;
  int64_t *this_ptr;
  bool bVar7;
  int64_t *local_b8;
  char local_b0;
  int64_t *local_38;
  char local_30;
  
  FUN_00d3ecc0();
  if ((local_30 == '\0') && (local_38 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  lVar1 = g_02709dd0;
  if (g_02709dd0 != 0) {
    FUN_00d50b00();
  }
  cVar4 = (**(code **)(*local_38 + 0x50))();
  lVar2 = g_027e1450;
  cVar5 = '\x01';
  if (cVar4 == '\0') {
    if (g_027e1450 != 0) {
      FUN_00d50b00();
    }
    cVar4 = (**(code **)(*local_38 + 0x50))();
    lVar3 = g_027e3bc0;
    cVar5 = '\x01';
    if (cVar4 == '\0') {
      if (g_027e3bc0 != 0) {
        FUN_00d50b00();
      }
      cVar5 = (**(code **)(*local_38 + 0x50))();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = g_026fc738;
  if (cVar5 == '\0') {
    if (g_026fc738 != 0) {
      FUN_00d50b00();
    }
    cVar4 = (**(code **)(*local_38 + 0x50))();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    lVar1 = g_026fce70;
    if (cVar4 == '\0') {
      if (g_026fce70 != 0) {
        FUN_00d50b00();
      }
      cVar4 = (**(code **)(*local_38 + 0x50))();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = g_027e13d8;
      if (cVar4 == '\0') {
        if (g_027e13d8 != 0) {
          FUN_00d50b00();
        }
        cVar4 = (**(code **)(*local_38 + 0x50))();
        if (cVar4 == '\0') {
          bVar7 = false;
        }
        else {
          FUN_00d3ecf0();
          FUN_01a1d6e0();
          bVar7 = local_38 == local_b8;
          if ((local_b0 != '\0') && (local_b8 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
        if (bVar7) {
          (**(code **)(*this_ptr + 0x958))();
          (**(code **)(*this_ptr + 0x620))();
        }
      }
      else {
        (**(code **)(*this_ptr + 0x620))();
      }
      FUN_00d530a0();
    }
    else {
      iVar6 = FUN_01a1dbe0();
      if (iVar6 != (int)this_ptr[0x29]) {
        *(int *)(this_ptr + 0x29) = iVar6;
        (**(code **)(*this_ptr + 0x620))();
      }
    }
  }
  else {
    (**(code **)(*this_ptr + 0x620))();
  }
  FUN_00d50b20();
  return;
}

