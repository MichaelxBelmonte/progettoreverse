// Function: FUN_0061fbe0
// Address: 0061fbe0
// Size: 901 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


uint64_t FUN_0061fbe0(uint64_t param_1,uint32_t param_2)

{
  uint64_t uVar1;
  int64_t lVar2;
  uint64_t uVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  int64_t *arg1;
  uint64_t uVar7;
  uint64_t uVar8;
  uint64_t extraout_XMM0_Qa;
  int64_t local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  uint32_t local_5c;
  uint64_t local_58;
  int64_t local_50;
  char local_48;
  uint64_t local_40;
  char local_38;
  
  FUN_01caeae0();
  uVar7 = local_40;
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (uVar7 != 0) {
    FUN_01caeae0();
    FUN_01d66ab0();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  local_5c = param_2;
  FUN_0063f230();
  uVar7 = local_40;
  if ((local_38 == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
  }
  cVar4 = FUN_002416c0();
  lVar2 = g_026d8938;
  if (cVar4 == '\0') {
    uVar8 = 0;
    uVar1 = uVar7;
  }
  else {
    local_58 = uVar7;
    if (g_026d8938 != 0) {
      FUN_00d50b00();
    }
    FUN_00e7d6f0();
    uVar8 = FUN_0071a120();
    if ((((local_38 == '\0') && (local_40 != 0)) && (uVar8 = FUN_00d50b00(), local_38 != '\0')) &&
       (local_40 != 0)) {
      uVar8 = FUN_00d50b20();
    }
    local_50 = lVar2;
    local_48 = '\0';
    FUN_000175c0(uVar8,&local_50);
    uVar3 = local_40;
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
    if (uVar3 != 0) {
      local_38 = '\0';
      local_40 = uVar3;
      uVar5 = FUN_00c70bc0();
      uVar7 = (uint64_t)uVar5;
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    FUN_00d50b20();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    uVar1 = local_58;
    if ((uVar3 != 0 & (byte)uVar7) == 0) {
      uVar8 = 0;
    }
    else {
      if ((char)local_5c != '\0') {
        iVar6 = FUN_00228b30();
        uVar8 = extraout_XMM0_Qa;
        if (iVar6 != 2) {
          local_88 = '\0';
          local_90 = 0;
          local_80 = 0;
          local_78 = '\0';
          uVar8 = FUN_00228b40(&local_80,&local_90);
          if ((local_78 != '\0') && (local_80 != 0)) {
            uVar8 = FUN_00d50b20();
          }
          if ((local_88 != '\0') && (local_90 != 0)) {
            uVar8 = FUN_00d50b20();
          }
        }
        local_70 = *arg1;
        local_68 = '\0';
        FUN_00248590(uVar8,1);
        if ((local_68 != '\0') && (local_70 != 0)) {
          FUN_00d50b20();
        }
      }
      FUN_01caeae0();
      if (local_40 == 0) {
        uVar8 = 1;
      }
      else {
        iVar6 = FUN_00228b30();
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        uVar8 = 1;
        if (iVar6 == 2) {
          FUN_01caeae0();
          FUN_0021e4e0();
          FUN_01d66ab0();
          if ((local_48 != '\0') && (local_50 != 0)) {
            FUN_00d50b20();
          }
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
        }
      }
    }
  }
  if (uVar1 != 0) {
    FUN_00d50b20();
  }
  return uVar8;
}

