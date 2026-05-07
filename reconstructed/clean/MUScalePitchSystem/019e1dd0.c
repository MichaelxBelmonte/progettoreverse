// Function: FUN_019e1dd0
// Address: 019e1dd0
// Size: 667 bytes
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


uint64_t FUN_019e1dd0(uint64_t param_1,int param_2)

{
  char *pcVar1;
  int64_t *this_ptr;
  uint64_t unaff_R14;
  uint64_t uVar2;
  int64_t lVar3;
  int64_t local_98;
  char local_90;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  char local_40 [8];
  char local_38 [8];
  
  uVar2 = CONCAT71((int7)((uint64_t)unaff_R14 >> 8),1);
  if (param_2 == 0) goto LAB_019e2044;
  (**(code **)(*this_ptr + 0xe20))();
  lVar3 = local_48;
  if (*(int *)(local_58 + 0xc) == 0) {
    lVar3 = 0;
  }
  else {
    (**(code **)(*this_ptr + 0xe20))();
    FUN_00d23340();
    pcVar1 = local_38;
    if (local_40[0] != '\0') {
      pcVar1 = local_40;
    }
    local_38[0] = local_40[0];
    *pcVar1 = '\0';
    if ((local_40[0] != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if (local_38[0] == '\0') {
      if (local_48 == 0) {
        lVar3 = 0;
      }
      else {
        FUN_00d50b00();
      }
    }
    else {
      local_38[0] = '\0';
    }
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if (lVar3 != 0) {
    (**(code **)("/System/Library/Frameworks/CoreFoundation.framework/Versions/A/CoreFoundation" +
                *this_ptr))();
    if (local_48 == lVar3) {
LAB_019e1f0c:
      if ((local_40[0] != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      if (local_40[0] == '\0') {
        if (local_48 != 0) {
          FUN_00d50b00();
        }
        FUN_00d50b20();
        lVar3 = local_48;
        goto LAB_019e1f0c;
      }
      FUN_00d50b20();
      lVar3 = local_48;
    }
    if (lVar3 != 0) {
      FUN_01caec40();
      lVar3 = g_027e1458;
      if (g_027e1458 != 0) {
        FUN_00d50b00();
      }
      FUN_000175c0();
      if ((local_40[0] != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if (local_48 == 0) {
        (**(code **)(*this_ptr + 0xda0))();
      }
      (**(code **)(*this_ptr + 0xda8))();
      (**(code **)("/usr/lib/libobjc.A.dylib" + *this_ptr + 8))();
      FUN_019e1580();
      FUN_00d50b20();
      goto LAB_019e2044;
    }
  }
  uVar2 = 0;
LAB_019e2044:
  return uVar2 & 0xffffffff;
}

