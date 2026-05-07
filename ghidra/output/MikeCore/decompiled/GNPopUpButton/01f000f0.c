// Function: FUN_01f000f0
// Address: 01f000f0
// Size: 1289 bytes
// Class: GNPopUpButton


/* WARNING: Removing unreachable block (ram,0x01f00473) */
/* WARNING: Removing unreachable block (ram,0x01f0047f) */
/* WARNING: Removing unreachable block (ram,0x01f003d5) */
/* WARNING: Removing unreachable block (ram,0x01f003e5) */

void FUN_01f000f0(void)

{
  longlong lVar1;
  bool bVar2;
  longlong *plVar3;
  char *pcVar4;
  longlong *plVar5;
  longlong *unaff_RDI;
  undefined8 unaff_R13;
  ulonglong uVar6;
  longlong *plVar7;
  longlong local_e8;
  char local_e0;
  longlong local_d8;
  char local_d0;
  longlong local_c8;
  char local_c0;
  longlong *local_b8;
  longlong local_b0;
  char local_a8;
  longlong local_a0;
  char local_98;
  longlong local_90;
  char local_88;
  longlong local_80;
  char local_78;
  longlong *local_70;
  char local_68;
  longlong *local_60;
  char local_58 [8];
  longlong *local_50;
  char local_48;
  uint local_3c;
  char local_38 [8];
  
  (**(code **)(*unaff_RDI + 0x5d8))();
  plVar7 = local_50;
  if (local_48 == '\0') {
    if (local_50 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_48 = '\0';
  }
  FUN_01efeef0();
  plVar5 = local_60;
  if (local_60 == (longlong *)0x0) {
    uVar6 = CONCAT71((int7)((ulonglong)unaff_R13 >> 8),1);
  }
  else {
    if (local_58[0] == '\0') {
      FUN_00d50b00();
    }
    uVar6 = 0;
  }
  if (plVar7 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  lVar1 = unaff_RDI[0x10];
  local_b8 = plVar5;
  if (*(int *)(lVar1 + 0xc) == 1) {
    local_a8 = 0;
    FUN_00d50b00();
    local_a8 = '\x01';
    local_b0 = lVar1;
    FUN_00d23310();
    pcVar4 = local_38;
    if (local_58[0] != '\0') {
      pcVar4 = local_58;
    }
    local_38[0] = local_58[0];
    *pcVar4 = '\0';
    if ((local_58[0] != '\0') && (local_60 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    local_68 = 0;
    if (local_38[0] == '\0') {
      if (local_60 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38[0] = '\0';
    }
    local_68 = '\x01';
    local_70 = local_60;
    (**(code **)(*unaff_RDI + 0x660))();
    local_80 = local_d8;
    local_78 = 0;
    if (local_d0 == '\0') {
      if (local_d8 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_d0 = '\0';
    }
    local_78 = '\x01';
    FUN_01f04a00(&local_80,&local_b0);
    plVar7 = local_50;
    if (local_50 == (longlong *)0x0) {
      bVar2 = false;
    }
    else if (local_48 == '\0') {
      FUN_00d50b00();
      bVar2 = true;
      if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_48 = '\0';
      bVar2 = true;
    }
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    if ((local_d0 != '\0') && (local_d8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_a8 != '\0') && (local_b0 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_98 = 0;
    FUN_00d50b00();
    local_98 = '\x01';
    local_e8 = 0;
    local_e0 = '\0';
    local_a0 = lVar1;
    FUN_01f04a00(&local_e8,&local_a0);
    plVar7 = local_60;
    if (local_60 == (longlong *)0x0) {
      bVar2 = false;
    }
    else if (local_58[0] == '\0') {
      FUN_00d50b00();
      bVar2 = true;
      if ((local_58[0] != '\0') && (local_60 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_58[0] = '\0';
      bVar2 = true;
    }
    if ((local_e0 != '\0') && (local_e8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_98 != '\0') && (local_a0 != 0)) {
      FUN_00d50b20();
    }
  }
  plVar5 = (longlong *)unaff_RDI[0x13];
  if (plVar5 == plVar7) goto LAB_01f0055a;
  if (plVar5 == (longlong *)0x0) {
    plVar5 = (longlong *)0x0;
    plVar3 = plVar5;
    if (plVar7 != (longlong *)0x0) goto LAB_01f004b9;
  }
  else {
    (**(code **)(*plVar5 + 0x4d0))();
    plVar5 = (longlong *)unaff_RDI[0x13];
    plVar3 = plVar5;
    if (plVar5 != plVar7) {
LAB_01f004b9:
      if (plVar7 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      unaff_RDI[0x13] = (longlong)plVar7;
      plVar3 = plVar7;
      if (plVar5 != (longlong *)0x0) {
        FUN_00d50b20();
        plVar3 = (longlong *)unaff_RDI[0x13];
      }
    }
  }
  if (plVar3 != (longlong *)0x0) {
    local_3c = (uint)uVar6;
    local_88 = 0;
    lVar1 = unaff_RDI[0x11];
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    local_88 = '\x01';
    local_90 = lVar1;
    FUN_01e3f820();
    (**(code **)(*plVar3 + 0x4c8))();
    uVar6 = (ulonglong)local_3c;
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
  }
LAB_01f0055a:
  plVar5 = (longlong *)unaff_RDI[0x13];
  if (plVar5 != (longlong *)0x0) {
    local_c0 = 0;
    lVar1 = unaff_RDI[0x10];
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    local_c0 = '\x01';
    local_c8 = lVar1;
    (**(code **)(*plVar5 + 0x620))();
    if ((local_c0 != '\0') && (local_c8 != 0)) {
      FUN_00d50b20();
    }
  }
  if ((bVar2) && (plVar7 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((char)uVar6 == '\0' && local_b8 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}


