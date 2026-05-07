// Function: FUN_01c0b840
// Address: 01c0b840
// Size: 1428 bytes
// Class: GNString


/* WARNING: Removing unreachable block (ram,0x01c0bd37) */
/* WARNING: Removing unreachable block (ram,0x01c0bd40) */
/* WARNING: Removing unreachable block (ram,0x01c0b9ce) */
/* WARNING: Removing unreachable block (ram,0x01c0b9d7) */
/* WARNING: Removing unreachable block (ram,0x01c0b8db) */
/* WARNING: Removing unreachable block (ram,0x01c0b8e4) */
/* WARNING: Removing unreachable block (ram,0x01c0bafa) */
/* WARNING: Removing unreachable block (ram,0x01c0bb03) */
/* WARNING: Removing unreachable block (ram,0x01c0bc45) */
/* WARNING: Removing unreachable block (ram,0x01c0bc4e) */

void FUN_01c0b840(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  char cVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  undefined8 *unaff_RDI;
  undefined1 local_120 [8];
  undefined1 local_118;
  longlong local_110;
  undefined1 local_108;
  undefined1 local_f8;
  longlong local_f0;
  undefined1 local_e8;
  longlong local_e0;
  char local_d8;
  longlong local_d0;
  undefined1 local_c8;
  longlong local_c0;
  char local_b8;
  longlong local_b0;
  char local_a8;
  longlong local_a0;
  char local_98;
  longlong local_90;
  char local_88;
  undefined8 *local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong *local_48;
  char local_40;
  
  FUN_01c1a2a0();
  if (local_40 == '\0') {
    if (local_48 == (longlong *)0x0) goto LAB_01c0bb89;
    FUN_00d50b00();
  }
  local_c8 = 1;
  if (local_48 == (longlong *)0x0) {
LAB_01c0bb89:
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
    return;
  }
  FUN_0004a6e0();
  (**(code **)(*local_48 + 0x360))();
  cVar4 = FUN_00e85ea0();
  if (cVar4 == '\0') {
    plVar6 = &DAT_02802688;
  }
  else {
    plVar6 = &local_d0;
  }
  plVar1 = (longlong *)*plVar6;
  cVar4 = (char)plVar6[1];
  plVar6 = local_48;
  if ((cVar4 == '\0') || (plVar1 == (longlong *)0x0)) {
    if (plVar1 != (longlong *)0x0) goto LAB_01c0b91b;
LAB_01c0bbb6:
    local_90 = *param_2;
    local_88 = '\0';
    FUN_01c0d370();
    if (local_48 == (longlong *)0x0) {
      bVar2 = true;
      plVar6 = (longlong *)0x0;
      bVar3 = false;
    }
    else if (local_40 == '\0') {
      FUN_00d50b00();
      bVar2 = false;
      bVar3 = true;
    }
    else {
      bVar3 = true;
      bVar2 = false;
    }
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
    if (!bVar2) goto LAB_01c0bda9;
    puVar7 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar7 = &DAT_02572358;
    (*DAT_02572370)();
    local_78 = '\x01';
    local_70 = *param_2;
    local_68 = '\0';
    local_80 = puVar7;
    FUN_01c0d420();
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    if ((local_78 != '\0') && (local_80 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
    local_f0 = *param_2;
    local_e8 = 0;
    FUN_01c0d4d0();
  }
  else {
    FUN_00d50b00();
LAB_01c0b91b:
    (**(code **)(*plVar1 + 0x3d0))();
    local_c0 = DAT_027e8d70;
    if (DAT_027e8d70 != 0) {
      FUN_00d50b00();
    }
    local_b8 = '\x01';
    cVar5 = (**(code **)(*local_48 + 0x50))();
    if ((local_b8 != '\0') && (local_c0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (cVar5 == '\0') {
      (**(code **)(*plVar1 + 0x3d0))();
      local_b0 = DAT_027e7c10;
      if (DAT_027e7c10 != 0) {
        FUN_00d50b00();
      }
      local_a8 = '\x01';
      cVar5 = (**(code **)(*local_48 + 0x50))();
      if ((local_a8 != '\0') && (local_b0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (cVar5 == '\0') {
        if (cVar4 != '\0') {
          FUN_00d50b20();
        }
        goto LAB_01c0bbb6;
      }
      (**(code **)(*plVar1 + 0x3f0))();
      if ((local_40 == '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b00();
      }
      local_f8 = 0;
      FUN_01c0cd20();
      local_a0 = local_e0;
      local_98 = '\0';
      FUN_01c0cc30();
      if (local_48 == (longlong *)0x0) {
        plVar6 = (longlong *)0x0;
        bVar3 = false;
      }
      else if (local_40 == '\0') {
        FUN_00d50b00();
        bVar3 = true;
      }
      else {
        bVar3 = true;
      }
      if ((local_98 != '\0') && (local_a0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_d8 != '\0') && (local_e0 != 0)) {
        FUN_00d50b20();
      }
      if (local_48 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if (cVar4 != '\0') {
        FUN_00d50b20();
      }
    }
    else {
      (**(code **)(*plVar1 + 0x3f0))();
      if ((local_40 == '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b00();
      }
      local_118 = 0;
      local_110 = *param_2;
      local_108 = 0;
      FUN_01c0c140(&local_110,local_120);
      if (local_48 == (longlong *)0x0) {
        bVar3 = false;
        plVar6 = (longlong *)0x0;
      }
      else {
        bVar3 = true;
        if (local_40 == '\0') {
          FUN_00d50b00();
        }
        if (local_48 != (longlong *)0x0) {
          bVar3 = true;
          FUN_00d50b20();
        }
      }
      if (cVar4 != '\0') {
        FUN_00d50b20();
      }
    }
  }
  *(undefined1 *)(unaff_RDI + 1) = 0;
  if ((!bVar3) && (plVar6 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
LAB_01c0bda9:
  *unaff_RDI = plVar6;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  if (local_48 == (longlong *)0x0) {
    return;
  }
  FUN_00d50b20();
  return;
}


