// Function: FUN_002dc360
// Address: 002dc360
// Size: 543 bytes
// Class: MDMetaWindowController


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_002dc360(void)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  void *pvVar8;
  pthread_key_t pVar9;
  longlong unaff_RDI;
  
  FUN_00e8b7a0();
  puVar6 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar6 = &DAT_02509790;
  *(undefined8 *)((longlong)puVar6 + 0xc) = 0;
  puVar6[0xf] = 0;
  *(undefined1 *)(puVar6 + 0x10) = 0;
  puVar6[3] = 0;
  puVar6[4] = 0;
  *(undefined4 *)(puVar6 + 5) = 0;
  puVar6[6] = 0;
  puVar6[7] = 0;
  puVar6[8] = 0;
  puVar6[9] = 0;
  *(undefined8 *)((longlong)puVar6 + 0x4e) = 0;
  puVar6[0xb] = 0;
  puVar6[0xc] = 0;
  *(undefined8 *)((longlong)puVar6 + 100) = 0;
  *(undefined8 *)((longlong)puVar6 + 0x6c) = 0;
  (*DAT_025097a8)();
  puVar1 = *(undefined8 **)(unaff_RDI + 0x48);
  if (puVar1 != puVar6) {
    FUN_00d50b00();
    *(undefined8 **)(unaff_RDI + 0x48) = puVar6;
    if (puVar1 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
  }
  FUN_00d50b20();
  puVar6 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar6 = &DAT_024f4960;
  *(undefined8 *)((longlong)puVar6 + 100) = 0;
  puVar6[0xe] = 0;
  *(undefined4 *)(puVar6 + 0xf) = 0;
  puVar6[0x10] = 0;
  puVar6[2] = 0;
  puVar6[3] = 0;
  *(undefined1 *)(puVar6 + 4) = 0;
  puVar6[5] = 0;
  puVar6[6] = 0;
  puVar6[7] = 0;
  puVar6[8] = 0;
  puVar6[9] = 0;
  puVar6[10] = 0;
  *(undefined8 *)((longlong)puVar6 + 0x51) = 0;
  *(undefined8 *)((longlong)puVar6 + 0x59) = 0;
  (*DAT_024f4978)();
  puVar1 = *(undefined8 **)(unaff_RDI + 0x40);
  if (puVar1 != puVar6) {
    FUN_00d50b00();
    *(undefined8 **)(unaff_RDI + 0x40) = puVar6;
    if (puVar1 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
  }
  FUN_00d50b20();
  uVar5 = _UNK_023b1e2c;
  uVar4 = _UNK_023b1e28;
  uVar3 = _UNK_023b1e24;
  *(undefined4 *)(unaff_RDI + 0x50) = _DAT_023b1e20;
  *(undefined4 *)(unaff_RDI + 0x54) = uVar3;
  *(undefined4 *)(unaff_RDI + 0x58) = uVar4;
  *(undefined4 *)(unaff_RDI + 0x5c) = uVar5;
  *(undefined4 *)(unaff_RDI + 0x60) = 0x41c00000;
  puVar6 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  pVar9 = 0x25d84d8;
  *puVar6 = &DAT_025d84d8;
  puVar6[7] = 0;
  puVar6[8] = 0;
  (*DAT_025d84f0)();
  puVar1 = *(undefined8 **)(unaff_RDI + 0x68);
  if (puVar1 == puVar6) {
    FUN_00d50b20();
  }
  else {
    *(undefined8 **)(unaff_RDI + 0x68) = puVar6;
    if (puVar1 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
  }
  *(undefined1 *)(unaff_RDI + 0x70) = 0;
  plVar7 = (longlong *)FUN_002dd0f0();
  (**(code **)(*plVar7 + 0x18))();
  plVar2 = *(longlong **)(unaff_RDI + 0x78);
  if (plVar2 == plVar7) {
    FUN_00d50b20();
  }
  else {
    *(longlong **)(unaff_RDI + 0x78) = plVar7;
    if (plVar2 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  pvVar8 = _pthread_getspecific(pVar9);
  if (pvVar8 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_00aea5e0(0);
  FUN_01530a20();
  return;
}


