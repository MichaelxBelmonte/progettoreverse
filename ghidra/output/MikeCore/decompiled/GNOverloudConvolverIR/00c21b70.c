// Function: FUN_00c21b70
// Address: 00c21b70
// Size: 995 bytes
// Class: GNOverloudConvolverIR
// String references:
//   "_samples"
//   "GNOverloudConvolverIR"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00c21b70(undefined8 param_1,longlong *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong *unaff_RDI;
  undefined4 uVar5;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  longlong local_88;
  char local_80;
  longlong local_78;
  char local_70;
  longlong local_68;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  if ((DAT_028a5e88 != 0) && (DAT_028a5e91 != '\0')) goto LAB_00c21dc3;
  uVar5 = FUN_00e8cb50();
  if (DAT_028a5e88 != 0) {
    DAT_028a5e91 = '\x01';
    FUN_00e8cb70();
    goto LAB_00c21dc3;
  }
  local_88 = *param_2;
  local_80 = '\0';
  FUN_00d630a0(uVar5,&local_88);
  local_60 = local_50;
  local_58 = 0;
  if (local_48 == '\0') {
    if (local_50 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_48 = '\0';
  }
  local_58 = '\x01';
  uVar5 = FUN_01e33cd0();
  lVar4 = DAT_028a5e88;
  if (DAT_028a5e88 != local_40) {
    if (local_38 == '\0') {
      if (local_40 == 0) {
        lVar4 = 0;
      }
      else {
        uVar5 = FUN_00d50b00();
        lVar4 = local_40;
      }
    }
    else {
      local_38 = '\0';
      lVar4 = local_40;
    }
    bVar1 = DAT_028a5e88 != 0;
    DAT_028a5e88 = lVar4;
    if (bVar1) {
      uVar5 = FUN_00d50b20();
      lVar4 = local_40;
    }
  }
  if ((lVar4 != 0) && (DAT_028a5e90 == '\0')) {
    DAT_028a5e90 = '\x01';
    uVar5 = FUN_00e8cb90();
    lVar4 = local_40;
  }
  if ((local_38 != '\0') && (lVar4 != 0)) {
    uVar5 = FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    uVar5 = FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    uVar5 = FUN_00d50b20();
  }
  if ((local_80 != '\0') && (local_88 != 0)) {
    uVar5 = FUN_00d50b20();
  }
  if ((DAT_0276df80 == '\0') &&
     (iVar3 = ___cxa_guard_acquire(), uVar5 = extraout_XMM0_Da_01, iVar3 != 0)) {
    _DAT_0276ded0 = FUN_00d4fe50();
    _DAT_0276deb8 = "GNOverloudConvolverIR";
    _DAT_0276dec0 = 0x38;
    _DAT_0276dec8 = FUN_00c40fb0;
    _DAT_0276ded8 = 0;
    uRam000000000276dee0 = 0;
    _DAT_0276dee8 = 0;
    uRam000000000276def0 = 0;
    _DAT_0276def8 = 0;
    uRam000000000276df00 = 0;
    _DAT_0276df08 = 0;
    uRam000000000276df10 = 0;
    _DAT_0276df18 = 0;
    uRam000000000276df20 = 0;
    _DAT_0276df28 = 0;
    uRam000000000276df30 = 0;
    _DAT_0276df38 = 0;
    uRam000000000276df40 = 0;
    _DAT_0276df48 = 0;
    uRam000000000276df50 = 0;
    _DAT_0276df58 = 0;
    uRam000000000276df60 = 0;
    _DAT_0276df68 = 0;
    uRam000000000276df70 = 0;
    _DAT_0276df78 = 0;
    uVar5 = ___cxa_guard_release();
  }
  lVar4 = FUN_00e85ef0(uVar5,1);
  if (lVar4 == 0) {
    lVar4 = FUN_00e858c0(extraout_XMM0_Da,1);
    if (lVar4 == 0) {
      local_68 = 0;
    }
    else {
      lVar4 = *(longlong *)(lVar4 + 0x28);
      local_68 = lVar4;
      if (lVar4 != 0) goto LAB_00c21d32;
    }
LAB_00c21d78:
    bVar1 = true;
    lVar4 = 0;
  }
  else {
    lVar4 = *(longlong *)(lVar4 + 0x30);
    local_68 = lVar4;
    if (lVar4 == 0) goto LAB_00c21d78;
LAB_00c21d32:
    FUN_00d50b00();
    bVar1 = false;
    local_68 = lVar4;
  }
  local_38 = '\0';
  local_40 = lVar4;
  FUN_00d23f50();
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (!bVar1) {
    FUN_00d50b20();
  }
  DAT_028a5e91 = '\x01';
  FUN_00e8cb70();
LAB_00c21dc3:
  (**(code **)(*(longlong *)*param_2 + 0x5e0))();
  lVar4 = DAT_0276ca08;
  if (DAT_0276ca08 != 0) {
    FUN_00d50b00();
  }
  local_40 = lVar4;
  local_38 = '\0';
  cVar2 = FUN_00c9ff50();
  uVar5 = extraout_XMM0_Da_00;
  if ((local_38 != '\0') && (local_40 != 0)) {
    uVar5 = FUN_00d50b20();
  }
  if (lVar4 != 0) {
    uVar5 = FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    uVar5 = FUN_00d50b20();
  }
  if (cVar2 == '\0') {
    local_78 = *param_2;
    local_70 = '\0';
    FUN_00d630a0(uVar5,&local_78);
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    lVar4 = DAT_028a5e88;
    if (DAT_028a5e88 != 0) {
      FUN_00d50b00();
    }
    *unaff_RDI = lVar4;
    *(undefined1 *)(unaff_RDI + 1) = 1;
  }
  return;
}


