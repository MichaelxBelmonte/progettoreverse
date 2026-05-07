// Function: FUN_00624670
// Address: 00624670
// Size: 730 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


uint64_t FUN_00624670(uint64_t param_1,char param_2)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  byte unaff_DIL;
  uint64_t uVar4;
  uint64_t uVar5;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  FUN_00637870();
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      goto LAB_006246ce;
    }
  }
  else if (local_40 != 0) {
LAB_006246ce:
    lVar1 = g_026de5d8;
    if (g_026de5d8 != 0) {
      FUN_00d50b00();
    }
    FUN_00e7d6f0();
    uVar5 = FUN_0071a120();
    lVar2 = local_40;
    if ((((local_38 == '\0') && (local_40 != 0)) && (uVar5 = FUN_00d50b00(), local_38 != '\0')) &&
       (local_40 != 0)) {
      uVar5 = FUN_00d50b20();
    }
    local_50 = lVar1;
    local_48 = '\0';
    FUN_000175c0(uVar5,&local_50);
    lVar3 = local_40;
    if (local_38 == '\0') {
      if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if (lVar3 != 0) {
      local_38 = '\0';
      local_40 = lVar3;
      unaff_DIL = FUN_00c70bc0();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    FUN_00d50b20();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if ((lVar3 != 0 & unaff_DIL) == 0) {
      uVar4 = 0;
    }
    else {
      if (param_2 != '\0') {
        FUN_00637870();
        FUN_00637870();
        FUN_006e67f0();
        FUN_006e6b30();
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        FUN_0064c7a0();
      }
      FUN_01caeae0();
      lVar1 = local_40;
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      uVar4 = CONCAT71((int7)((uint64_t)lVar2 >> 8),1);
      if (lVar1 != 0) {
        FUN_01caeae0();
        FUN_00637870();
        FUN_006e67f0();
        FUN_01d66ab0();
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
      }
    }
    FUN_00d50b20();
    goto LAB_00624938;
  }
  uVar4 = 0;
LAB_00624938:
  return uVar4 & 0xffffffff;
}

