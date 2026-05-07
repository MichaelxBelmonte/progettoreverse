// Function: FUN_019e0e60
// Address: 019e0e60
// Size: 1120 bytes
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


uint64_t FUN_019e0e60(uint64_t param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  char *pcVar3;
  int64_t *this_ptr;
  uint64_t unaff_R14;
  uint64_t uVar4;
  int64_t lVar5;
  bool bVar6;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  char local_40 [8];
  char local_38 [8];
  
  uVar4 = CONCAT71((int7)((uint64_t)unaff_R14 >> 8),1);
  if (param_2 == 0) goto LAB_019e12ab;
  (**(code **)(*this_ptr + 0xe20))();
  iVar1 = *(int *)(local_48 + 0xc);
  if (local_40[0] != '\0') {
    FUN_00d50b20();
  }
  lVar5 = local_48;
  if (iVar1 == 0) {
    (**(code **)(*this_ptr + 0x9b0))();
    if (local_48 == 0) {
      bVar6 = false;
    }
    else {
      (**(code **)(*this_ptr + 0x9b0))();
      bVar6 = *(int *)(local_58 + 0xc) != 0;
      if (local_50 != '\0') {
        FUN_00d50b20();
      }
    }
    if ((local_40[0] != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if (bVar6) {
      (**(code **)(*this_ptr + 0x9b0))();
      if (local_50 == '\0') {
        if (local_58 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_50 = '\0';
      }
      FUN_01266b80();
      if (local_48 == 0) {
        lVar5 = 0;
        bVar6 = false;
      }
      else if (local_40[0] == '\0') {
        FUN_00d50b00();
        bVar6 = true;
        if ((local_40[0] != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_40[0] = '\0';
        bVar6 = true;
      }
      if (local_58 != 0) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      (**(code **)(*this_ptr + 0xda8))();
      goto LAB_019e10af;
    }
  }
  else {
    (**(code **)(*this_ptr + 0xe20))();
    FUN_00d23340();
    pcVar3 = local_38;
    if (local_40[0] != '\0') {
      pcVar3 = local_40;
    }
    local_38[0] = local_40[0];
    *pcVar3 = '\0';
    if ((local_40[0] != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if (local_48 == 0) {
      bVar6 = false;
      lVar5 = 0;
    }
    else {
      bVar6 = true;
      if (local_38[0] == '\0') {
        FUN_00d50b00();
      }
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
LAB_019e10af:
    if (lVar5 != 0) {
      (**(code **)((int64_t)&dylib_command_00001150.dylib.current_version + *this_ptr))();
      if (local_48 == lVar5) {
        bVar2 = bVar6;
        if ((bVar6) || (local_48 == 0)) {
LAB_019e1144:
          if ((local_40[0] != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
          goto LAB_019e1158;
        }
        if (local_40[0] == '\0') {
          FUN_00d50b00();
          bVar2 = true;
          goto LAB_019e1144;
        }
        bVar2 = true;
      }
      else {
        if (local_40[0] == '\0') {
          if (local_48 != 0) {
            FUN_00d50b00();
          }
          bVar2 = true;
          lVar5 = local_48;
          if (bVar6) {
            FUN_00d50b20();
          }
          goto LAB_019e1144;
        }
        bVar2 = true;
        lVar5 = local_48;
        if (bVar6) {
          FUN_00d50b20();
        }
LAB_019e1158:
        if (lVar5 == 0) goto LAB_019e12a8;
      }
      FUN_01caec40();
      lVar5 = g_027e1458;
      if (g_027e1458 != 0) {
        FUN_00d50b00();
      }
      FUN_000175c0();
      if ((local_40[0] != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if (lVar5 != 0) {
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
      if (bVar2) {
        FUN_00d50b20();
      }
      goto LAB_019e12ab;
    }
  }
LAB_019e12a8:
  uVar4 = 0;
LAB_019e12ab:
  return uVar4 & 0xffffffff;
}

