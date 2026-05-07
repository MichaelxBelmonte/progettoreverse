// Function: FUN_00bba6c0
// Address: 00bba6c0
// Size: 588 bytes
// Class: GNSoundFileChunk


/* WARNING: Removing unreachable block (ram,0x00bba8f3) */
/* WARNING: Removing unreachable block (ram,0x00bba8fc) */
/* WARNING: Removing unreachable block (ram,0x00bba7f4) */
/* WARNING: Removing unreachable block (ram,0x00bba7fd) */

void FUN_00bba6c0(undefined8 param_1,int param_2)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined8 *unaff_RSI;
  longlong unaff_RDI;
  longlong lVar9;
  longlong local_48;
  char local_40;
  
  iVar5 = FUN_00ae7ec0();
  uVar1 = *(uint *)(unaff_RDI + 0x30);
  uVar7 = (ulonglong)uVar1;
  iVar5 = uVar1 * param_2 * iVar5;
  if (uVar7 == 1) {
    if (*(int *)(unaff_RDI + 0x34) == 0x13) {
      (**(code **)(**(longlong **)(unaff_RDI + 0x18) + 0x388))(iVar5,*unaff_RSI);
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      lVar9 = DAT_027653a0;
      if (local_48 == 0) {
        return;
      }
      if (DAT_027653a0 != 0) {
        FUN_00d50b00();
      }
      FUN_00cc78b0();
      if (lVar9 == 0) {
        return;
      }
      FUN_00d50b20();
      return;
    }
  }
  else if ((int)uVar1 < 1) {
    bVar4 = false;
    goto LAB_00bba7be;
  }
  uVar8 = 1;
  bVar3 = false;
  do {
    lVar9 = uVar8 - 1;
    bVar4 = (bool)(unaff_RSI[lVar9] == 0 | bVar3);
    if (uVar7 <= uVar8) break;
    uVar8 = uVar8 + 1;
    bVar2 = !bVar3;
    bVar3 = bVar4;
  } while (unaff_RSI[lVar9] != 0 && bVar2);
LAB_00bba7be:
  FUN_00b7be00(uVar7,bVar4);
  if ((local_40 == '\0') && (local_48 != 0)) {
    FUN_00d50b00();
  }
  iVar6 = *(int *)(unaff_RDI + 0x30);
  if (0 < iVar6) {
    lVar9 = 0;
    do {
      if (unaff_RSI[lVar9] != 0) {
        FUN_00ae80c0(0,1,*(undefined8 *)(local_48 + 0x10),*(undefined4 *)(unaff_RDI + 0x34));
        iVar6 = *(int *)(unaff_RDI + 0x30);
      }
      lVar9 = lVar9 + 1;
    } while (lVar9 < iVar6);
  }
  (**(code **)(**(longlong **)(unaff_RDI + 0x18) + 0x388))(iVar5,*(undefined8 *)(local_48 + 0x10));
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  lVar9 = DAT_027653a0;
  if (local_48 != 0) {
    if (DAT_027653a0 != 0) {
      FUN_00d50b00();
    }
    FUN_00cc78b0();
    if (lVar9 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_00b7c2b0();
  FUN_00d50b20();
  return;
}


