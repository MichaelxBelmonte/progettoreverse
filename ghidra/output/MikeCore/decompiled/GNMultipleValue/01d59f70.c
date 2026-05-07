// Function: FUN_01d59f70
// Address: 01d59f70
// Size: 1026 bytes
// Class: GNMultipleValue


/* WARNING: Removing unreachable block (ram,0x01d5a10b) */
/* WARNING: Removing unreachable block (ram,0x01d5a117) */

void FUN_01d59f70(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong *plVar4;
  longlong *plVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 extraout_XMM0_Dc;
  undefined4 uVar8;
  undefined4 uVar9;
  longlong local_b8;
  char local_b0;
  longlong *local_a8;
  char local_a0;
  longlong local_98;
  char local_90;
  longlong local_88;
  char local_80;
  longlong *local_78;
  char local_70;
  undefined8 local_68;
  longlong *local_50;
  char local_48;
  longlong *local_40;
  char local_38;
  
  uVar9 = (undefined4)((ulonglong)param_2 >> 0x20);
  uVar8 = (undefined4)param_2;
  plVar5 = (longlong *)unaff_RDI[0x2b];
  if (plVar5 != (longlong *)0x0) {
    FUN_00d50b00();
  }
  (**(code **)(*unaff_RDI + 0x640))();
  plVar2 = local_40;
  if ((((local_38 == '\0') && (local_40 != (longlong *)0x0)) && (FUN_00d50b00(), local_38 != '\0'))
     && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  iVar3 = (**(code **)(*unaff_RDI + 0x9f8))();
  if ((iVar3 == 0) || (plVar5 == (longlong *)0x0)) goto LAB_01d5a21f;
  FUN_01e3f820();
  (**(code **)(*plVar2 + 0x548))();
  uVar7 = uVar8;
  uVar6 = FUN_00d92190();
  plVar4 = local_40;
  if (((local_38 == '\0') &&
      ((local_40 != (longlong *)0x0 && (uVar6 = FUN_00d50b00(), local_38 != '\0')))) &&
     (local_40 != (longlong *)0x0)) {
    uVar6 = FUN_00d50b20();
  }
  lVar1 = DAT_027259e0;
  local_68 = plVar4;
  if (DAT_027259e0 != 0) {
    uVar6 = FUN_00d50b00();
  }
  local_b8 = lVar1;
  local_b0 = '\x01';
  FUN_00d95130(uVar6,&local_b8);
  plVar4 = plVar5;
  if (plVar5 == local_40) {
LAB_01d5a0d4:
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    plVar4 = local_40;
    if (local_38 == '\0') {
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      FUN_00d50b20();
      goto LAB_01d5a0d4;
    }
    FUN_00d50b20();
    local_38 = '\0';
  }
  if ((local_b0 != '\0') && (local_b8 != 0)) {
    FUN_00d50b20();
  }
  local_a0 = '\0';
  local_98 = *unaff_RSI;
  local_90 = '\0';
  local_a8 = plVar4;
  (**(code **)(*unaff_RDI + 0xa00))(uVar7,&local_a8);
  plVar5 = plVar4;
  if (local_40 == plVar4) {
joined_r0x01d5a1ac:
    plVar4 = local_68;
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
      plVar4 = local_68;
    }
  }
  else {
    plVar5 = local_40;
    if (local_38 == '\0') {
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      if (plVar4 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      goto joined_r0x01d5a1ac;
    }
    if (plVar4 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    local_38 = '\0';
    plVar4 = local_68;
  }
  local_68 = plVar4;
  if ((local_90 != '\0') && (local_98 != 0)) {
    FUN_00d50b20();
  }
  if ((local_a0 != '\0') && (local_a8 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar4 != (longlong *)0x0) {
    FUN_00d50b20();
  }
LAB_01d5a21f:
  FUN_01d48370();
  plVar4 = (longlong *)*unaff_RSI;
  FUN_01e3f820();
  (**(code **)(*plVar4 + 0x390))();
  local_88 = *unaff_RSI;
  local_80 = '\0';
  uVar7 = FUN_01e3f820();
  local_68 = (longlong *)CONCAT44(uVar9,uVar8);
  local_70 = '\0';
  uVar8 = extraout_XMM0_Dc;
  local_78 = plVar5;
  (**(code **)(*unaff_RDI + 0x9e0))();
  local_50 = local_40;
  local_48 = 0;
  if (local_38 == '\0') {
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  local_48 = '\x01';
  (**(code **)(*plVar2 + 0x400))
            (uVar7,(undefined4)local_68,&local_50,*(undefined4 *)((longlong)unaff_RDI + 0x174),uVar7
             ,uVar8);
  if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  FUN_01d48390();
  FUN_00d50b20();
  if (plVar5 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}


