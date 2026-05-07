// Function: FUN_013231f0
// Address: 013231f0
// Size: 647 bytes
// Class: MUPercussivePitchSystem


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_013231f0(void)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  void *pvVar7;
  longlong lVar8;
  pthread_key_t pVar9;
  longlong unaff_RDI;
  longlong local_30;
  char local_28;
  
  FUN_00e8b7a0();
  uVar4 = _UNK_0240d41c;
  uVar3 = _UNK_0240d418;
  uVar2 = _UNK_0240d414;
  *(undefined4 *)(unaff_RDI + 0x78) = _DAT_0240d410;
  *(undefined4 *)(unaff_RDI + 0x7c) = uVar2;
  *(undefined4 *)(unaff_RDI + 0x80) = uVar3;
  *(undefined4 *)(unaff_RDI + 0x84) = uVar4;
  *(undefined4 *)(unaff_RDI + 0x94) = 4;
  *(undefined1 *)(unaff_RDI + 0x1a9) = 0;
  *(undefined2 *)(unaff_RDI + 0x171) = 0x100;
  *(undefined1 *)(unaff_RDI + 0x130) = 1;
  *(undefined4 *)(unaff_RDI + 0x180) = 0xffffffff;
  *(undefined8 *)(unaff_RDI + 0x70) = 0x4628c00044960000;
  puVar5 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  pVar9 = (pthread_key_t)&DAT_025f0698;
  *puVar5 = &DAT_025f0698;
  *(undefined4 *)(puVar5 + 7) = 0;
  *(undefined1 *)((longlong)puVar5 + 0x3c) = 0;
  puVar5[8] = 0;
  puVar5[9] = 0;
  *(undefined4 *)(puVar5 + 10) = 0;
  (*DAT_025f06b0)();
  lVar1 = *(longlong *)(unaff_RDI + 0x138);
  *(undefined8 **)(unaff_RDI + 0x138) = puVar5;
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  *(undefined4 *)(unaff_RDI + 0x21c) = 0;
  *(undefined8 *)(unaff_RDI + 0x8c) = 0x3ccccccd3f000000;
  FUN_016c0a70();
  lVar1 = *(longlong *)(unaff_RDI + 0x58);
  lVar8 = lVar1;
  if (lVar1 == local_30) goto LAB_01323327;
  lVar8 = local_30;
  if (local_28 == '\0') {
    if (local_30 == 0) {
      lVar8 = 0;
      goto LAB_013232e5;
    }
    FUN_00d50b00();
    lVar1 = *(longlong *)(unaff_RDI + 0x58);
    *(longlong *)(unaff_RDI + 0x58) = local_30;
  }
  else {
    local_28 = '\0';
LAB_013232e5:
    *(longlong *)(unaff_RDI + 0x58) = lVar8;
  }
  pVar9 = (pthread_key_t)lVar1;
  if (lVar1 != 0) {
    FUN_00d50b20();
    lVar8 = local_30;
  }
LAB_01323327:
  if ((local_28 != '\0') && (lVar8 != 0)) {
    FUN_00d50b20();
  }
  plVar6 = (longlong *)FUN_00e8fc40();
  FUN_0013dd30();
  (**(code **)(*plVar6 + 0x18))();
  lVar1 = *(longlong *)(unaff_RDI + 0x68);
  *(longlong **)(unaff_RDI + 0x68) = plVar6;
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  plVar6 = (longlong *)FUN_00e8fc40();
  FUN_0013dd30();
  (**(code **)(*plVar6 + 0x18))();
  lVar1 = *(longlong *)(unaff_RDI + 0x60);
  *(longlong **)(unaff_RDI + 0x60) = plVar6;
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  pvVar7 = _pthread_getspecific(pVar9);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0150cac0();
  pvVar7 = _pthread_getspecific(pVar9);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0150cb90();
  *(undefined1 *)(unaff_RDI + 0x1aa) = 0;
  puVar5 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar5 = &DAT_025eec60;
  puVar5[7] = 0;
  puVar5[8] = 0;
  *(undefined4 *)(puVar5 + 9) = 0;
  (*DAT_025eec78)();
  lVar1 = *(longlong *)(unaff_RDI + 0x150);
  *(undefined8 **)(unaff_RDI + 0x150) = puVar5;
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  return;
}


