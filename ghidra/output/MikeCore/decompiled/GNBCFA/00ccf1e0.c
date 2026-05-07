// Function: FUN_00ccf1e0
// Address: 00ccf1e0
// Size: 716 bytes
// Class: GNBCFA


/* WARNING: Removing unreachable block (ram,0x00ccf402) */
/* WARNING: Removing unreachable block (ram,0x00ccf40b) */
/* WARNING: Removing unreachable block (ram,0x00ccf35f) */
/* WARNING: Removing unreachable block (ram,0x00ccf365) */
/* WARNING: Removing unreachable block (ram,0x00ccf36a) */
/* WARNING: Removing unreachable block (ram,0x00ccf36f) */
/* WARNING: Removing unreachable block (ram,0x00ccf3b0) */
/* WARNING: Removing unreachable block (ram,0x00ccf3b9) */
/* WARNING: Removing unreachable block (ram,0x00ccf3c1) */
/* WARNING: Removing unreachable block (ram,0x00ccf3ca) */
/* WARNING: Removing unreachable block (ram,0x00ccf3cf) */
/* WARNING: Removing unreachable block (ram,0x00ccf49a) */
/* WARNING: Removing unreachable block (ram,0x00ccf4a3) */
/* WARNING: Removing unreachable block (ram,0x00ccf2a1) */
/* WARNING: Removing unreachable block (ram,0x00ccf2aa) */

longlong * FUN_00ccf1e0(undefined8 param_1,int param_2)

{
  longlong lVar1;
  bool bVar2;
  ulonglong uVar3;
  int iVar4;
  ulonglong uVar5;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong lVar6;
  longlong local_78;
  char local_70;
  longlong local_48;
  char local_40;
  
  lVar1 = DAT_02704060;
  if (param_2 == 0) {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    *unaff_RDI = lVar1;
    *(undefined1 *)(unaff_RDI + 1) = 1;
  }
  else {
    lVar1 = *(longlong *)(*(longlong *)(*unaff_RSI + 0x20) + 0x10);
    lVar6 = (ulonglong)(param_2 - 1) * 0x23c;
    uVar3 = 0;
    do {
      uVar5 = uVar3;
      if (*(short *)(lVar1 + lVar6 + 0x24 + uVar5 * 2) == 0) break;
      uVar3 = uVar5 + 1;
    } while (uVar5 < 0x100);
    if ((int)(uVar5 + 1) == 1) {
      FUN_00d8ede0();
    }
    else {
      FUN_00d920f0(param_1,uVar5);
    }
    if (local_48 == 0) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
      if (local_40 == '\0') {
        FUN_00d50b00();
      }
    }
    iVar4 = *(int *)(lVar1 + 0x20 + lVar6);
    while (lVar1 = DAT_02704060, iVar4 != 0) {
      lVar1 = *(longlong *)(*(longlong *)(*unaff_RSI + 0x20) + 0x10);
      lVar6 = (ulonglong)(iVar4 - 1) * 0x23c;
      uVar3 = 0;
      do {
        uVar5 = uVar3;
        if (*(short *)(lVar1 + lVar6 + 0x24 + uVar5 * 2) == 0) break;
        uVar3 = uVar5 + 1;
      } while (uVar5 < 0x100);
      if ((int)(uVar5 + 1) == 1) {
        FUN_00d8ede0();
      }
      else {
        FUN_00d920f0(*(longlong *)(*unaff_RSI + 0x20),uVar5);
      }
      FUN_00d8ef00();
      if ((bVar2) || (local_48 == 0)) {
        if ((local_40 != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
      }
      else if (local_40 == '\0') {
        FUN_00d50b00();
        bVar2 = true;
      }
      else {
        local_40 = '\0';
        bVar2 = true;
      }
      if ((local_70 != '\0') && (local_78 != 0)) {
        FUN_00d50b20();
      }
      iVar4 = *(int *)(lVar1 + 0x20 + lVar6);
    }
    if (DAT_02704060 != 0) {
      FUN_00d50b00();
    }
    FUN_00d8ef00();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if ((bVar2) && (local_48 != 0)) {
      FUN_00d50b20();
    }
  }
  return unaff_RDI;
}


