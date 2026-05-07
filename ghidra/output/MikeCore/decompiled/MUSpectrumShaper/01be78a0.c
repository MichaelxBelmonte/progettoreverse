// Function: FUN_01be78a0
// Address: 01be78a0
// Size: 884 bytes
// Class: MUSpectrumShaper


/* WARNING: Removing unreachable block (ram,0x01be7bc5) */
/* WARNING: Removing unreachable block (ram,0x01be7bce) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01be78a0(void)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  undefined1 auVar4 [16];
  longlong local_38;
  char local_30;
  
  if (unaff_RSI[0x35] != 0) goto LAB_01be7bdb;
  (**(code **)(*unaff_RSI + 0x968))();
  lVar1 = unaff_RSI[0x35];
  lVar3 = lVar1;
  if (lVar1 != local_38) {
    lVar3 = local_38;
    if (local_30 == '\0') {
      if (local_38 == 0) {
        lVar3 = 0;
        goto LAB_01be78ef;
      }
      FUN_00d50b00();
      lVar1 = unaff_RSI[0x35];
      unaff_RSI[0x35] = local_38;
    }
    else {
      local_30 = '\0';
LAB_01be78ef:
      unaff_RSI[0x35] = lVar3;
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
      lVar3 = local_38;
    }
  }
  if ((local_30 != '\0') && (lVar3 != 0)) {
    FUN_00d50b20();
  }
  FUN_01dcea50();
  FUN_01ed4f00(0);
  FUN_01dca0e0();
  FUN_01dd3cf0();
  FUN_01de0990();
  FUN_01de09a0();
  auVar4 = blendps(ZEXT416(*(uint *)((longlong)unaff_RSI + 0x204)),_DAT_0241e1f0,0xe);
  (**(code **)(*(longlong *)unaff_RSI[0x35] + 0x4d0))(0,auVar4._0_8_);
  FUN_01dce4c0(DAT_0241e220);
  FUN_01dd07d0();
  FUN_01dcc8a0();
  FUN_01de5a60();
  (**(code **)(*(longlong *)unaff_RSI[0x35] + 0x548))();
  FUN_01dce590();
  puVar2 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar2 = &DAT_02692468;
  puVar2[2] = &DAT_026927f8;
  puVar2[0xc] = 0;
  puVar2[3] = 0;
  puVar2[4] = 0;
  *(undefined8 *)((longlong)puVar2 + 0x24) = 0;
  *(undefined8 *)((longlong)puVar2 + 0x2c) = 0;
  puVar2[7] = 0;
  puVar2[8] = 0;
  puVar2[9] = 0;
  puVar2[10] = 0;
  *(undefined2 *)(puVar2 + 0xb) = 0;
  (*DAT_02692480)();
  FUN_01db9690(*(undefined4 *)((longlong)unaff_RSI + 0x204));
  FUN_01db99b0();
  puVar2 = (undefined8 *)FUN_00e8fc40();
  FUN_0006daf0();
  *(undefined4 *)(puVar2 + 0x27) = 0;
  puVar2[0x2e] = 0;
  *(undefined4 *)(puVar2 + 0x2f) = 0;
  puVar2[0x30] = 0;
  *(undefined1 *)(puVar2 + 0x31) = 0;
  puVar2[0x28] = 0;
  puVar2[0x29] = 0;
  *(undefined4 *)(puVar2 + 0x2a) = 0;
  puVar2[0x2b] = 0;
  puVar2[0x2c] = 0;
  *(undefined8 *)((longlong)puVar2 + 0x165) = 0;
  *(undefined8 *)((longlong)puVar2 + 0x18c) = 0;
  *(undefined8 *)((longlong)puVar2 + 0x194) = 0;
  *(undefined8 *)((longlong)puVar2 + 0x199) = 0;
  puVar2[0x35] = 0;
  puVar2[0x36] = 0;
  puVar2[0x37] = 0;
  puVar2[0x38] = 0;
  *puVar2 = &DAT_026611e8;
  puVar2[2] = &DAT_02661cb0;
  puVar2[0x39] = 0;
  *(undefined4 *)(puVar2 + 0x3a) = 0;
  (*DAT_02661200)();
  FUN_01db9640();
  if (puVar2 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  FUN_01dcbe90();
  FUN_00d50b20();
LAB_01be7bdb:
  *(undefined1 *)(unaff_RDI + 1) = 0;
  lVar1 = unaff_RSI[0x35];
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  *unaff_RDI = lVar1;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}


