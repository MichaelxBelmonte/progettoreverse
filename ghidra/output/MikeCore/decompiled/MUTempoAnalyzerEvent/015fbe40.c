// Function: FUN_015fbe40
// Address: 015fbe40
// Size: 525 bytes
// Class: MUTempoAnalyzerEvent


/* WARNING: Removing unreachable block (ram,0x015fbed8) */
/* WARNING: Removing unreachable block (ram,0x015fbee1) */
/* WARNING: Removing unreachable block (ram,0x015fbfb6) */
/* WARNING: Removing unreachable block (ram,0x015fbfbf) */

undefined8 * FUN_015fbe40(undefined8 param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  code *pcVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  uint uVar10;
  
  puVar5 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar5 = &DAT_02572358;
  pcVar4 = DAT_02572370;
  (*DAT_02572370)();
  uVar10 = param_2;
  if (0 < (int)param_2) {
    do {
      puVar6 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar6 = &DAT_02572358;
      (*pcVar4)();
      FUN_00d21140();
      FUN_00d50b20();
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  lVar7 = *unaff_RSI;
  if (0 < *(int *)(lVar7 + 0xc)) {
    lVar8 = 0;
    do {
      lVar7 = *(longlong *)(*(longlong *)(lVar7 + 0x10) + lVar8 * 8);
      if (lVar7 != 0) {
        FUN_00d50b00();
      }
      lVar2 = *(longlong *)(lVar7 + 0x10);
      if (lVar2 != 0) {
        FUN_00d50b00();
      }
      uVar10 = *(uint *)(lVar2 + 0xc);
      if (0 < (int)uVar10) {
        uVar9 = 0;
        do {
          lVar3 = *(longlong *)(*(longlong *)(lVar2 + 0x10) + uVar9 * 8);
          if (lVar3 != 0) {
            FUN_00d50b00();
          }
          iVar1 = *(int *)(lVar3 + 0xc);
          if ((-1 < iVar1) && (iVar1 < (int)param_2)) {
            FUN_00d21140();
          }
          FUN_00d50b20();
          uVar9 = uVar9 + 1;
        } while (uVar10 != uVar9);
      }
      FUN_00d50b20();
      if (lVar7 != 0) {
        FUN_00d50b20();
      }
      lVar8 = lVar8 + 1;
      lVar7 = *unaff_RSI;
    } while (lVar8 < *(int *)(lVar7 + 0xc));
  }
  if (0 < (int)param_2) {
    uVar9 = 0;
    do {
      FUN_00d242c0();
      uVar9 = uVar9 + 1;
    } while (param_2 != uVar9);
  }
  *unaff_RDI = puVar5;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return unaff_RDI;
}


