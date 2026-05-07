// Function: FUN_015fab90
// Address: 015fab90
// Size: 524 bytes
// Class: MUTempoAnalyzerEvent


/* WARNING: Removing unreachable block (ram,0x015facf1) */
/* WARNING: Removing unreachable block (ram,0x015facfa) */
/* WARNING: Removing unreachable block (ram,0x015fad73) */
/* WARNING: Removing unreachable block (ram,0x015fad7c) */

undefined8 * FUN_015fab90(void)

{
  uint uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  byte bVar6;
  bool bVar7;
  undefined8 *puVar8;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  ulonglong uVar9;
  longlong lVar10;
  bool bVar11;
  longlong local_40;
  char local_38;
  
  puVar8 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar8 = &DAT_02572358;
  (*DAT_02572370)();
  if (unaff_RSI != 0) {
    FUN_00d50b00();
  }
  while( true ) {
    lVar3 = *(longlong *)(unaff_RSI + 0x10);
    if (lVar3 != 0) {
      FUN_00d50b00();
    }
    uVar1 = *(uint *)(lVar3 + 0xc);
    if ((int)uVar1 < 1) break;
    uVar9 = 0;
    bVar7 = false;
    do {
      lVar4 = *(longlong *)(*(longlong *)(lVar3 + 0x10) + uVar9 * 8);
      if (lVar4 != 0) {
        FUN_00d50b00();
      }
      lVar5 = *(longlong *)(lVar4 + 0x78);
      lVar10 = unaff_RSI;
      if ((lVar5 == 0) || (*(longlong *)(lVar5 + 0x10) != 0)) {
LAB_015fac5d:
        bVar6 = 0;
      }
      else {
        uVar2 = *(undefined4 *)(lVar5 + 0xc);
        *(undefined8 *)(lVar4 + 0x78) = 0;
        FUN_00d50b20();
        FUN_015faee0(uVar2,uVar9 & 0xffffffff);
        if (local_38 == '\0') {
          if (local_40 == 0) goto LAB_015fac5d;
          FUN_00d50b00();
        }
        else if (local_40 == 0) goto LAB_015fac5d;
        local_38 = '\0';
        FUN_00d21140();
        if ((local_40 != unaff_RSI) && (FUN_00d50b00(), lVar10 = local_40, unaff_RSI != 0)) {
          FUN_00d50b20();
        }
        bVar7 = true;
        FUN_00d50b20();
        bVar6 = 1;
        local_40 = unaff_RSI;
      }
      unaff_RSI = lVar10;
      FUN_00d50b20();
      bVar11 = (ulonglong)uVar1 - 1 == uVar9;
      uVar9 = uVar9 + 1;
    } while (!(bool)(bVar6 | bVar11));
    if (!bVar7) break;
    FUN_00d50b20();
  }
  FUN_00d21140();
  FUN_00d50b20();
  *unaff_RDI = puVar8;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  if (unaff_RSI != 0) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}


