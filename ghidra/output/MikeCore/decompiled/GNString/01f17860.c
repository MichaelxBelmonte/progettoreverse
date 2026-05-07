// Function: FUN_01f17860
// Address: 01f17860
// Size: 1229 bytes
// Class: GNString


/* WARNING: Removing unreachable block (ram,0x01f17bad) */
/* WARNING: Removing unreachable block (ram,0x01f17bb9) */
/* WARNING: Removing unreachable block (ram,0x01f17b06) */
/* WARNING: Removing unreachable block (ram,0x01f17b16) */

void FUN_01f17860(void)

{
  longlong *plVar1;
  undefined8 in_RAX;
  undefined8 uVar2;
  char *pcVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *unaff_RDI;
  longlong lVar6;
  longlong *plVar7;
  longlong local_f0;
  char local_e8;
  longlong *local_e0;
  char local_d8;
  longlong local_d0;
  char local_c8;
  longlong local_c0;
  char local_b8;
  longlong local_b0;
  char local_a8;
  longlong local_a0;
  char local_98;
  longlong local_80;
  char local_78;
  longlong *local_70;
  char local_68;
  longlong *local_60;
  char local_58 [8];
  undefined8 local_50;
  longlong local_48;
  undefined4 local_3c;
  char local_38 [8];
  
  local_48 = unaff_RDI[0x29];
  if (local_48 == 0) {
    local_3c = 0;
    lVar4 = unaff_RDI[0x2b];
    if (*(int *)(lVar4 + 0xc) != 1) goto LAB_01f1795c;
LAB_01f178b6:
    lVar6 = local_48;
    local_a8 = 0;
    FUN_00d50b00();
    local_a8 = '\x01';
    local_b0 = lVar4;
    FUN_00d23310();
    pcVar3 = local_38;
    if (local_58[0] != '\0') {
      pcVar3 = local_58;
    }
    local_38[0] = local_58[0];
    *pcVar3 = '\0';
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
    (**(code **)(*unaff_RDI + 0x938))();
    local_80 = local_d0;
    local_78 = 0;
    if (local_c8 == '\0') {
      if (local_d0 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_c8 = '\0';
    }
    local_78 = '\x01';
    uVar2 = FUN_01f04a00(&local_80,&local_b0);
    plVar7 = local_e0;
    if (local_e0 == (longlong *)0x0) {
      local_50 = 0;
    }
    else if (local_d8 == '\0') {
      uVar2 = FUN_00d50b00();
      local_50 = CONCAT71((int7)((ulonglong)uVar2 >> 8),1);
      if ((local_d8 != '\0') && (local_e0 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_d8 = '\0';
      local_50 = CONCAT71((int7)((ulonglong)uVar2 >> 8),1);
    }
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    if ((local_c8 != '\0') && (local_d0 != 0)) {
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
    local_3c = (undefined4)CONCAT71((int7)((ulonglong)in_RAX >> 8),1);
    local_50 = 0;
    FUN_00d50b00();
    lVar4 = unaff_RDI[0x2b];
    if (*(int *)(lVar4 + 0xc) == 1) goto LAB_01f178b6;
LAB_01f1795c:
    lVar6 = local_48;
    local_98 = 0;
    FUN_00d50b00();
    local_98 = '\x01';
    local_f0 = 0;
    local_e8 = '\0';
    local_a0 = lVar4;
    uVar2 = FUN_01f04a00(&local_f0,&local_a0);
    plVar7 = local_60;
    if (local_60 == (longlong *)0x0) {
      local_50 = 0;
    }
    else if (local_58[0] == '\0') {
      uVar2 = FUN_00d50b00();
      local_50 = CONCAT71((int7)((ulonglong)uVar2 >> 8),1);
      if ((local_58[0] != '\0') && (local_60 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_58[0] = '\0';
      local_50 = CONCAT71((int7)((ulonglong)uVar2 >> 8),1);
    }
    if ((local_e8 != '\0') && (local_f0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_98 != '\0') && (local_a0 != 0)) {
      FUN_00d50b20();
    }
  }
  plVar5 = (longlong *)unaff_RDI[0x2a];
  if (plVar5 == plVar7) goto LAB_01f17c97;
  if (plVar5 == (longlong *)0x0) {
    plVar5 = (longlong *)0x0;
    plVar1 = plVar5;
    lVar6 = local_48;
    if (plVar7 != (longlong *)0x0) goto LAB_01f17bf9;
  }
  else {
    (**(code **)(*plVar5 + 0x4d0))(local_3c);
    plVar5 = (longlong *)unaff_RDI[0x2a];
    plVar1 = plVar5;
    lVar6 = local_48;
    if (plVar5 != plVar7) {
LAB_01f17bf9:
      if (plVar7 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      unaff_RDI[0x2a] = (longlong)plVar7;
      plVar1 = plVar7;
      lVar6 = local_48;
      if (plVar5 != (longlong *)0x0) {
        FUN_00d50b20();
        plVar1 = (longlong *)unaff_RDI[0x2a];
        lVar6 = local_48;
      }
    }
  }
  local_48 = lVar6;
  if (plVar1 != (longlong *)0x0) {
    FUN_00d50b00();
    FUN_01e3f820();
    (**(code **)(*plVar1 + 0x4c8))();
    if (unaff_RDI != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
LAB_01f17c97:
  plVar5 = (longlong *)unaff_RDI[0x2a];
  if (plVar5 != (longlong *)0x0) {
    local_b8 = 0;
    lVar4 = unaff_RDI[0x2b];
    if (lVar4 != 0) {
      FUN_00d50b00();
    }
    local_b8 = '\x01';
    local_c0 = lVar4;
    (**(code **)(*plVar5 + 0x620))();
    if ((local_b8 != '\0') && (local_c0 != 0)) {
      FUN_00d50b20();
    }
  }
  if (((char)local_50 != '\0') && (plVar7 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (lVar6 != 0) {
    FUN_00d50b20();
  }
  return;
}


