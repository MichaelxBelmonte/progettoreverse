// Function: FUN_01bd1950
// Address: 01bd1950
// Size: 874 bytes
// Class: MUSpectrumShaper


/* WARNING: Removing unreachable block (ram,0x01bd19a2) */
/* WARNING: Removing unreachable block (ram,0x01bd19ae) */
/* WARNING: Removing unreachable block (ram,0x01bd1c72) */
/* WARNING: Removing unreachable block (ram,0x01bd1c7e) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01bd1950(undefined4 param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *unaff_RDI;
  longlong lVar4;
  undefined4 uVar5;
  longlong local_78;
  char local_70;
  longlong local_68;
  char local_60;
  longlong local_58;
  char local_50;
  longlong local_48;
  char local_40;
  longlong local_38;
  char local_30;
  
  FUN_01d51a40();
  lVar4 = local_38;
  if (local_30 == '\0') {
    if (((local_38 != 0) && (FUN_00d50b00(), local_30 != '\0')) && (local_38 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_30 = '\0';
  }
  if (lVar4 == 0) goto LAB_01bd1c8f;
  if ((DAT_028b5f10 == 0) || (DAT_028b5f19 == '\0')) {
    FUN_00e8cb50();
    if (DAT_028b5f10 == 0) {
      FUN_01cfc6a0(_DAT_023b294c);
      local_40 = 0;
      if (local_70 == '\0') {
        if (local_78 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_70 = '\0';
      }
      local_40 = '\x01';
      local_48 = local_78;
      FUN_01d553b0();
      lVar3 = DAT_028b5f10;
      if (DAT_028b5f10 != local_38) {
        if (local_30 == '\0') {
          if (local_38 == 0) {
            lVar3 = 0;
          }
          else {
            FUN_00d50b00();
            lVar3 = local_38;
          }
        }
        else {
          local_30 = '\0';
          lVar3 = local_38;
        }
        bVar1 = DAT_028b5f10 != 0;
        DAT_028b5f10 = lVar3;
        if (bVar1) {
          FUN_00d50b20();
          lVar3 = local_38;
        }
      }
      if ((lVar3 != 0) && (DAT_028b5f18 == '\0')) {
        DAT_028b5f18 = '\x01';
        FUN_00e8cb90();
        lVar3 = local_38;
      }
      if ((local_30 != '\0') && (lVar3 != 0)) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if ((local_70 != '\0') && (local_78 != 0)) {
        FUN_00d50b20();
      }
      DAT_028b5f19 = '\x01';
      uVar5 = FUN_00e8cb70();
    }
    else {
      DAT_028b5f19 = '\x01';
      uVar5 = FUN_00e8cb70();
    }
    if (DAT_028b5f10 != 0) goto LAB_01bd1b52;
    lVar3 = 0;
  }
  else {
LAB_01bd1b52:
    lVar3 = DAT_028b5f10;
    local_50 = 0;
    uVar5 = FUN_00d50b00();
  }
  local_50 = '\x01';
  local_58 = lVar3;
  FUN_01d534b0(uVar5,&local_58);
  lVar3 = local_38;
  lVar2 = lVar4;
  if (lVar4 == local_38) {
joined_r0x01bd1b99:
    lVar3 = lVar2;
    if ((local_30 != '\0') && (lVar4 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    if (local_30 == '\0') {
      if (local_38 != 0) {
        FUN_00d50b00();
      }
      FUN_00d50b20();
      lVar2 = lVar3;
      lVar4 = local_38;
      goto joined_r0x01bd1b99;
    }
    FUN_00d50b20();
    local_30 = '\0';
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  uVar5 = FUN_00d46dc0(param_1);
  local_68 = local_38;
  local_60 = 0;
  if (local_30 == '\0') {
    if (local_38 != 0) {
      uVar5 = FUN_00d50b00();
    }
  }
  else {
    local_30 = '\0';
  }
  local_60 = '\x01';
  FUN_01bd1f20(uVar5,&local_68);
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(*unaff_RDI + 0x620))();
  lVar4 = lVar3;
LAB_01bd1c8f:
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  return;
}


