// Function: FUN_015c91d0
// Address: 015c91d0
// Size: 680 bytes
// Class: MUSpectralTimeSlice


/* WARNING: Removing unreachable block (ram,0x015c92b4) */
/* WARNING: Removing unreachable block (ram,0x015c92bd) */
/* WARNING: Removing unreachable block (ram,0x015c9241) */
/* WARNING: Removing unreachable block (ram,0x015c924a) */
/* WARNING: Removing unreachable block (ram,0x015c93e2) */
/* WARNING: Removing unreachable block (ram,0x015c93eb) */

undefined8 * FUN_015c91d0(void)

{
  bool bVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  longlong lVar4;
  bool bVar5;
  
  puVar2 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar2 = &DAT_02572358;
  (*DAT_02572370)();
  if (unaff_RSI != 0) {
    FUN_00d50b00();
  }
  FUN_00d21140();
  if (unaff_RSI == 0) {
    bVar5 = false;
    lVar4 = 0;
    lVar3 = segment_command_00000020._0_8_;
    if (segment_command_00000020._0_8_ == 0) goto LAB_015c9367;
LAB_015c9290:
    do {
      FUN_00d50b00();
      FUN_00d23370();
      if (lVar3 == lVar4) {
        bVar1 = bVar5;
        if (!bVar5) {
          FUN_00d50b00();
          bVar1 = true;
        }
      }
      else {
        FUN_00d50b00();
        lVar4 = lVar3;
        bVar1 = true;
        if (bVar5) {
          FUN_00d50b20();
        }
      }
      bVar5 = bVar1;
      FUN_00d50b20();
      lVar3 = *(longlong *)(lVar4 + 0x20);
    } while (*(longlong *)(lVar4 + 0x20) != 0);
    if (lVar4 != unaff_RSI) goto LAB_015c9331;
LAB_015c9373:
    bVar1 = bVar5;
    if (bVar5) {
      lVar3 = *(longlong *)(unaff_RSI + 0x18);
      goto joined_r0x015c9466;
    }
    if (unaff_RSI != 0) {
      bVar1 = true;
      FUN_00d50b00();
    }
  }
  else {
    FUN_00d50b20();
    FUN_00d50b00();
    bVar5 = true;
    lVar3 = *(longlong *)(unaff_RSI + 0x20);
    lVar4 = unaff_RSI;
    if (*(longlong *)(unaff_RSI + 0x20) != 0) goto LAB_015c9290;
LAB_015c9367:
    if (lVar4 == unaff_RSI) goto LAB_015c9373;
LAB_015c9331:
    if (unaff_RSI != 0) {
      FUN_00d50b00();
    }
    bVar1 = true;
    if (bVar5) {
      FUN_00d50b20();
    }
  }
  lVar3 = *(longlong *)(unaff_RSI + 0x18);
joined_r0x015c9466:
  for (; lVar3 != 0; lVar3 = *(longlong *)(lVar3 + 0x18)) {
    FUN_00d50b00();
    FUN_00d21140();
    if (lVar3 == unaff_RSI) {
      lVar3 = unaff_RSI;
      bVar5 = bVar1;
      if (!bVar1) {
        FUN_00d50b00();
        bVar5 = true;
      }
    }
    else {
      FUN_00d50b00();
      bVar5 = true;
      if (bVar1) {
        FUN_00d50b20();
      }
    }
    FUN_00d50b20();
    unaff_RSI = lVar3;
    bVar1 = bVar5;
  }
  *unaff_RDI = puVar2;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  if (bVar1) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}


