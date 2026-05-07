// Function: FUN_00516170
// Address: 00516170
// Size: 1891 bytes
// Class: MDPluginDocument


/* WARNING: Removing unreachable block (ram,0x005162ba) */
/* WARNING: Removing unreachable block (ram,0x005162c6) */

void FUN_00516170(void)

{
  longlong lVar1;
  undefined8 uVar2;
  bool bVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong unaff_RDI;
  bool bVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  longlong local_90;
  char local_88;
  longlong local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong *local_60;
  char local_58;
  longlong local_30;
  char local_28;
  
  FUN_00b31790();
  ___bzero();
  *(undefined2 *)(unaff_RDI + 0x2d1) = 0x101;
  *(undefined4 *)(unaff_RDI + 0x2e0) = 0;
  *(undefined1 *)(unaff_RDI + 0x2e4) = 0;
  if ((DAT_02809fb0 == (undefined8 *)0x0) || (DAT_02809fb9 == '\0')) {
    FUN_00e8cb50();
    if (DAT_02809fb0 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar5 = &DAT_02576110;
      *(undefined8 *)((longlong)puVar5 + 0xc) = 0;
      *(undefined8 *)((longlong)puVar5 + 0x14) = 0;
      *(undefined8 *)((longlong)puVar5 + 0x1a) = 0;
      puVar5[5] = 0;
      puVar5[6] = 0;
      puVar5[7] = 0;
      puVar5[8] = 0;
      puVar5[9] = 0;
      (*DAT_02576128)();
      if (DAT_02809fc0 == puVar5) {
        bVar4 = false;
        bVar3 = false;
      }
      else {
        bVar4 = true;
        bVar3 = true;
        bVar8 = DAT_02809fc0 != (undefined8 *)0x0;
        DAT_02809fc0 = puVar5;
        if (bVar8) {
          FUN_00d50b20();
        }
      }
      if (DAT_02809fc8 == '\0') {
        DAT_02809fc8 = '\x01';
        FUN_00e8cb90();
        bVar3 = bVar4;
      }
      if (!bVar3) {
        FUN_00d50b20();
      }
      FUN_00d48b20();
      lVar1 = DAT_0270b790;
      if (DAT_0270b790 != 0) {
        FUN_00d50b00();
      }
      FUN_00d48c60();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      FUN_00d48d00();
      FUN_00d48ac0();
      puVar5 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *(undefined8 *)((longlong)puVar5 + 0xc) = 0;
      *(undefined8 *)((longlong)puVar5 + 0x14) = 0;
      *(undefined8 *)((longlong)puVar5 + 0x1a) = 0;
      puVar5[5] = 0;
      puVar5[6] = 0;
      puVar5[7] = 0;
      puVar5[8] = 0;
      puVar5[9] = 0;
      *puVar5 = &DAT_02568b20;
      *(undefined4 *)(puVar5 + 10) = 0;
      (*DAT_02568b38)();
      if (DAT_02809fb0 == puVar5) {
        bVar4 = false;
        bVar3 = false;
      }
      else {
        bVar4 = true;
        bVar3 = true;
        bVar8 = DAT_02809fb0 != (undefined8 *)0x0;
        DAT_02809fb0 = puVar5;
        if (bVar8) {
          FUN_00d50b20();
        }
      }
      if (DAT_02809fb8 == '\0') {
        DAT_02809fb8 = '\x01';
        FUN_00e8cb90();
        bVar3 = bVar4;
      }
      if (!bVar3) {
        FUN_00d50b20();
      }
      FUN_00d48ac0();
      lVar1 = DAT_0270b790;
      if (DAT_0270b790 != 0) {
        FUN_00d50b00();
      }
      FUN_00d48c60();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      FUN_00d48d00();
      DAT_02809fb9 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_02809fb9 = '\x01';
      FUN_00e8cb70();
    }
  }
  puVar6 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar6 = &DAT_025d84d8;
  puVar6[7] = 0;
  puVar6[8] = 0;
  (*DAT_025d84f0)();
  puVar5 = *(undefined8 **)(unaff_RDI + 0x298);
  if (puVar5 == puVar6) {
    FUN_00d50b20();
  }
  else {
    *(undefined8 **)(unaff_RDI + 0x298) = puVar6;
    if (puVar5 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
  }
  FUN_01f27fe0();
  local_58 = 0;
  (**(code **)(*(longlong *)(unaff_RDI + 0x90) + 0x10))();
  uVar9 = FUN_00d50b00();
  local_58 = '\x01';
  local_90 = 0;
  local_88 = '\0';
  local_60 = (longlong *)(unaff_RDI + 0x90);
  FUN_01f47190(uVar9,&local_90);
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
    (**(code **)(*local_60 + 0x10))();
    FUN_00d50b20();
  }
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
  }
  FUN_00516c90();
  lVar1 = *(longlong *)(unaff_RDI + 0x2b8);
  lVar7 = lVar1;
  if (lVar1 != local_30) {
    lVar7 = local_30;
    if (local_28 == '\0') {
      if (local_30 == 0) {
        lVar7 = 0;
        goto LAB_00516584;
      }
      FUN_00d50b00();
      lVar1 = *(longlong *)(unaff_RDI + 0x2b8);
      *(longlong *)(unaff_RDI + 0x2b8) = local_30;
    }
    else {
      local_28 = '\0';
LAB_00516584:
      *(longlong *)(unaff_RDI + 0x2b8) = lVar7;
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
      lVar7 = local_30;
    }
  }
  if ((local_28 != '\0') && (lVar7 != 0)) {
    FUN_00d50b20();
  }
  uVar9 = FUN_012d6040();
  FUN_00516d30(uVar9,0x24);
  FUN_00d21370();
  FUN_00d21370();
  FUN_00d21370();
  FUN_005170f0();
  lVar1 = *(longlong *)(unaff_RDI + 0x2f0);
  lVar7 = lVar1;
  if (lVar1 != local_30) {
    lVar7 = local_30;
    if (local_28 == '\0') {
      if (local_30 == 0) {
        lVar7 = 0;
        goto LAB_0051664e;
      }
      FUN_00d50b00();
      lVar1 = *(longlong *)(unaff_RDI + 0x2f0);
      *(longlong *)(unaff_RDI + 0x2f0) = local_30;
    }
    else {
      local_28 = '\0';
LAB_0051664e:
      *(longlong *)(unaff_RDI + 0x2f0) = lVar7;
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
      lVar7 = local_30;
    }
  }
  if ((local_28 != '\0') && (lVar7 != 0)) {
    FUN_00d50b20();
  }
  FUN_005170f0();
  lVar1 = *(longlong *)(unaff_RDI + 0x2f8);
  lVar7 = lVar1;
  if (lVar1 != local_30) {
    lVar7 = local_30;
    if (local_28 == '\0') {
      if (local_30 == 0) {
        lVar7 = 0;
        goto LAB_005166d1;
      }
      FUN_00d50b00();
      lVar1 = *(longlong *)(unaff_RDI + 0x2f8);
      *(longlong *)(unaff_RDI + 0x2f8) = local_30;
    }
    else {
      local_28 = '\0';
LAB_005166d1:
      *(longlong *)(unaff_RDI + 0x2f8) = lVar7;
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
      lVar7 = local_30;
    }
  }
  if ((local_28 != '\0') && (lVar7 != 0)) {
    FUN_00d50b20();
  }
  *(undefined4 *)(unaff_RDI + 0x290) = 0x3f800000;
  FUN_00d50b00();
  local_80 = DAT_0270b798;
  if (DAT_0270b798 != 0) {
    FUN_00d50b00();
  }
  lVar1 = DAT_0270b7a0;
  local_78 = '\x01';
  if (DAT_0270b7a0 != 0) {
    FUN_00d50b00();
  }
  local_70 = lVar1;
  local_68 = '\x01';
  FUN_00d50b00();
  FUN_000bf690(&local_70,&local_80,&stack0xffffffffffffffc0);
  lVar1 = *(longlong *)(unaff_RDI + 0x380);
  lVar7 = lVar1;
  if (lVar1 == local_30) goto LAB_00516815;
  lVar7 = local_30;
  if (local_28 == '\0') {
    if (local_30 == 0) {
      lVar7 = 0;
      goto LAB_005167ca;
    }
    FUN_00d50b00();
    lVar1 = *(longlong *)(unaff_RDI + 0x380);
    *(longlong *)(unaff_RDI + 0x380) = local_30;
  }
  else {
    local_28 = '\0';
LAB_005167ca:
    *(longlong *)(unaff_RDI + 0x380) = lVar7;
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
    lVar7 = local_30;
  }
LAB_00516815:
  if ((local_28 != '\0') && (lVar7 != 0)) {
    FUN_00d50b20();
  }
  if (unaff_RDI != 0) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  if (unaff_RDI != 0) {
    FUN_00d50b20();
  }
  *(undefined2 *)(unaff_RDI + 0x358) = 0x101;
  *(undefined1 *)(unaff_RDI + 0x35a) = 1;
  uVar9 = 0;
  uVar10 = 0;
  uVar2 = FUN_00e7b500((int)DAT_023908c8);
  *(undefined8 *)(unaff_RDI + 0x348) = uVar2;
  *(ulonglong *)(unaff_RDI + 0x350) = CONCAT44(uVar10,uVar9);
  return;
}


