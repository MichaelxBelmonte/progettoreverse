// Function: FUN_014ee5f0
// Address: 014ee5f0
// Size: 534 bytes
// Class: GNInt


void FUN_014ee5f0(undefined8 param_1,char param_2)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  
  *(undefined4 *)(unaff_RDI + 0xc) = *(undefined4 *)(*unaff_RSI + 0xc);
  *(undefined4 *)(unaff_RDI + 0x14) = *(undefined4 *)(*unaff_RSI + 0x14);
  *(undefined4 *)(unaff_RDI + 0x18) = *(undefined4 *)(*unaff_RSI + 0x18);
  *(undefined4 *)(unaff_RDI + 0x1c) = *(undefined4 *)(*unaff_RSI + 0x1c);
  *(undefined4 *)(unaff_RDI + 0x24) = *(undefined4 *)(*unaff_RSI + 0x24);
  *(undefined4 *)(unaff_RDI + 0x28) = *(undefined4 *)(*unaff_RSI + 0x28);
  *(undefined4 *)(unaff_RDI + 0x40) = *(undefined4 *)(*unaff_RSI + 0x40);
  *(undefined4 *)(unaff_RDI + 0x44) = *(undefined4 *)(*unaff_RSI + 0x44);
  *(undefined4 *)(unaff_RDI + 0x48) = *(undefined4 *)(*unaff_RSI + 0x48);
  *(undefined4 *)(unaff_RDI + 0x4c) = *(undefined4 *)(*unaff_RSI + 0x4c);
  lVar4 = *unaff_RSI;
  fVar1 = *(float *)(lVar4 + 0x20);
  if (NAN(fVar1)) {
    *(undefined4 *)(unaff_RDI + 0x20) = 0x7fc00000;
    fVar1 = *(float *)(lVar4 + 0x10);
  }
  else {
    *(float *)(unaff_RDI + 0x20) = fVar1;
    fVar1 = *(float *)(*unaff_RSI + 0x10);
  }
  if (NAN(fVar1)) {
    *(undefined4 *)(unaff_RDI + 0x10) = 0x7fc00000;
  }
  else {
    *(float *)(unaff_RDI + 0x10) = fVar1;
  }
  if ((param_2 != '\0') && (lVar4 = *(longlong *)(*unaff_RSI + 0x30), lVar4 != 0)) {
    uVar3 = *(undefined4 *)(lVar4 + 0xc);
    uVar2 = *(undefined4 *)(lVar4 + 0x10);
    puVar5 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar5 = &DAT_025f1b78;
    *(undefined8 *)((longlong)puVar5 + 0xc) = 0;
    (*DAT_025f1b90)();
    puVar6 = *(undefined8 **)(unaff_RDI + 0x30);
    if (puVar6 == puVar5) {
      FUN_00d50b20();
    }
    else {
      *(undefined8 **)(unaff_RDI + 0x30) = puVar5;
      if (puVar6 != (undefined8 *)0x0) {
        FUN_00d50b20();
      }
    }
    lVar4 = *(longlong *)(unaff_RDI + 0x30);
    *(undefined4 *)(lVar4 + 0xc) = uVar3;
    *(undefined4 *)(lVar4 + 0x10) = uVar2;
  }
  if (*(longlong *)(*unaff_RSI + 0x38) != 0) {
    puVar6 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar6 = &DAT_025f1ef0;
    *(undefined8 *)((longlong)puVar6 + 0xc) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x14) = 0;
    (*DAT_025f1f08)();
    *(undefined4 *)((longlong)puVar6 + 0xc) =
         *(undefined4 *)(*(longlong *)(*unaff_RSI + 0x38) + 0xc);
    *(undefined4 *)((longlong)puVar6 + 0x14) =
         *(undefined4 *)(*(longlong *)(*unaff_RSI + 0x38) + 0x14);
    *(undefined4 *)(puVar6 + 2) = *(undefined4 *)(*(longlong *)(*unaff_RSI + 0x38) + 0x10);
    *(undefined4 *)(puVar6 + 3) = *(undefined4 *)(*(longlong *)(*unaff_RSI + 0x38) + 0x18);
    if (*(undefined8 **)(unaff_RDI + 0x38) != puVar6) {
      FUN_00d64850();
      puVar5 = *(undefined8 **)(unaff_RDI + 0x38);
      if (puVar5 != puVar6) {
        FUN_00d50b00();
        *(undefined8 **)(unaff_RDI + 0x38) = puVar6;
        if (puVar5 != (undefined8 *)0x0) {
          FUN_00d50b20();
        }
      }
      FUN_00d64910();
    }
    FUN_00d50b20();
  }
  return;
}


