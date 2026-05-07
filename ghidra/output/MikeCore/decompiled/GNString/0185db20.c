// Function: FUN_0185db20
// Address: 0185db20
// Size: 709 bytes
// Class: GNString


/* WARNING: Removing unreachable block (ram,0x0185dc51) */
/* WARNING: Removing unreachable block (ram,0x0185dc5a) */
/* WARNING: Removing unreachable block (ram,0x0185db96) */
/* WARNING: Removing unreachable block (ram,0x0185db9f) */
/* WARNING: Removing unreachable block (ram,0x0185dd99) */
/* WARNING: Removing unreachable block (ram,0x0185dda2) */
/* WARNING: Removing unreachable block (ram,0x0185dbea) */
/* WARNING: Removing unreachable block (ram,0x0185dbf3) */
/* WARNING: Removing unreachable block (ram,0x0185dca5) */
/* WARNING: Removing unreachable block (ram,0x0185dcae) */

void FUN_0185db20(undefined8 param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  longlong lVar7;
  longlong local_40;
  char local_38;
  
  if (param_2 != 0) {
    *(undefined4 *)(unaff_RDI + 0xc) = *(undefined4 *)(*unaff_RSI + 0xc);
    *(undefined4 *)(unaff_RDI + 0x10) = *(undefined4 *)(*unaff_RSI + 0x10);
    *(undefined4 *)(unaff_RDI + 0x14) = *(undefined4 *)(*unaff_RSI + 0x14);
  }
  lVar4 = *(longlong *)(*unaff_RSI + 0x28);
  if (lVar4 != 0) {
    FUN_00d50b00();
  }
  FUN_00c8e4f0();
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  FUN_00c92170();
  FUN_00c92160();
  lVar7 = *(longlong *)(unaff_RDI + 0x28);
  if (lVar7 == local_40) {
    if (local_40 != 0) {
      FUN_00d50b20();
    }
  }
  else {
    *(longlong *)(unaff_RDI + 0x28) = local_40;
    if (lVar7 != 0) {
      FUN_00d50b20();
    }
  }
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  lVar4 = *(longlong *)(*unaff_RSI + 0x20);
  if (lVar4 != 0) {
    FUN_00d50b00();
  }
  FUN_00c8e4f0();
  if ((local_38 == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  lVar7 = *(longlong *)(unaff_RDI + 0x20);
  if (lVar7 == local_40) {
    if (local_40 != 0) {
      FUN_00d50b20();
    }
  }
  else {
    *(longlong *)(unaff_RDI + 0x20) = local_40;
    if (lVar7 != 0) {
      FUN_00d50b20();
    }
  }
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  *(undefined4 *)(unaff_RDI + 0x30) = *(undefined4 *)(*unaff_RSI + 0x30);
  *(undefined4 *)(unaff_RDI + 0x34) = *(undefined4 *)(*unaff_RSI + 0x34);
  FUN_00d216c0();
  lVar4 = *(longlong *)(*unaff_RSI + 0x18);
  if (lVar4 != 0) {
    FUN_00d50b00();
  }
  if (0 < *(int *)(lVar4 + 0xc)) {
    lVar7 = 0;
    do {
      lVar5 = *(longlong *)(*(longlong *)(lVar4 + 0x10) + lVar7 * 8);
      uVar2 = *(undefined4 *)(lVar5 + 0xc);
      uVar3 = *(undefined4 *)(lVar5 + 0x10);
      uVar1 = *(undefined4 *)(lVar5 + 0x14);
      puVar6 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar6 = &DAT_0260d210;
      *(undefined8 *)((longlong)puVar6 + 0xc) = 0;
      *(undefined8 *)((longlong)puVar6 + 0x14) = 0;
      FUN_00d500e0();
      *(undefined4 *)((longlong)puVar6 + 0xc) = uVar2;
      *(undefined4 *)(puVar6 + 2) = uVar3;
      *(undefined4 *)((longlong)puVar6 + 0x14) = uVar1;
      FUN_00d21140();
      FUN_00d50b20();
      lVar7 = lVar7 + 1;
    } while (lVar7 < *(int *)(lVar4 + 0xc));
  }
  *(undefined4 *)(unaff_RDI + 0x38) = *(undefined4 *)(*unaff_RSI + 0x38);
  FUN_00d50b20();
  return;
}


