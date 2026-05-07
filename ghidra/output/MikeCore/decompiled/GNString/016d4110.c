// Function: FUN_016d4110
// Address: 016d4110
// Size: 845 bytes
// Class: GNString


/* WARNING: Removing unreachable block (ram,0x016d42aa) */
/* WARNING: Removing unreachable block (ram,0x016d42b3) */
/* WARNING: Removing unreachable block (ram,0x016d4450) */
/* WARNING: Removing unreachable block (ram,0x016d445d) */

void FUN_016d4110(void)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  void *pvVar7;
  int extraout_var;
  int extraout_var_00;
  pthread_key_t pVar8;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  longlong lVar9;
  ulonglong local_40;
  char local_38;
  
  uVar3 = local_40;
  if (((*(int *)(*unaff_RSI + 0x10) == 0) || (*(int *)(*unaff_RSI + 0x18) == 0)) ||
     (cVar4 = FUN_00e7c000(), cVar4 == '\0')) {
    pVar8 = 0;
    FUN_016ce9f0();
    if ((local_38 == '\0') && (local_40 != 0)) {
      FUN_00d50b00();
    }
    if (*(ulonglong *)(local_40 + 0xc) >> 0x20 == 0) {
      FUN_00e7bdb0();
    }
    pvVar7 = _pthread_getspecific(pVar8);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0165d690();
    uVar2 = *(ulonglong *)(local_40 + 0x14);
    pVar8 = (pthread_key_t)(uVar2 >> 0x20);
    if (uVar2 >> 0x20 == 0) {
      FUN_00e7bdb0();
    }
    else {
      FUN_00e7c280();
      local_40 = uVar2;
    }
    pvVar7 = _pthread_getspecific(pVar8);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0165d690();
    lVar9 = *(longlong *)(unaff_RDI + 0x70);
    if (lVar9 != 0) {
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
    if (lVar9 != 0) {
      FUN_00d50b20();
    }
    iVar1 = *(int *)(local_40 + 0x18);
    iVar5 = iVar1 + 7;
    if (-1 < iVar1) {
      iVar5 = iVar1;
    }
    if (7 < iVar1) {
      uVar6 = iVar5 >> 3;
      lVar9 = (ulonglong)uVar6 + 1;
      do {
        uVar6 = uVar6 - 1;
        if (((*(int *)(*(longlong *)(local_40 + 0x10) + 4 + (ulonglong)uVar6 * 8) != 0) &&
            (extraout_var != 0)) &&
           ((cVar4 = FUN_00e7c020(), cVar4 == '\0' &&
            (((*(int *)(*(longlong *)(local_40 + 0x10) + 4 + (ulonglong)uVar6 * 8) != 0 &&
              (extraout_var_00 != 0)) && (cVar4 = FUN_00e7c020(), cVar4 == '\0')))))) {
          FUN_016ebc80();
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
          if (local_40 == 0) {
            FUN_00e7b4e0();
            FUN_00c921e0();
          }
        }
        lVar9 = lVar9 + -1;
      } while (1 < lVar9);
    }
    FUN_00d64850();
    uVar2 = *(ulonglong *)(unaff_RDI + 0x70);
    if (uVar2 != local_40) {
      FUN_00d50b00();
      *(ulonglong *)(unaff_RDI + 0x70) = local_40;
      if (uVar2 != 0) {
        FUN_00d50b20();
      }
    }
    FUN_00d64910();
    FUN_00d50b20();
    if (uVar3 != 0) {
      FUN_00d50b20();
    }
  }
  return;
}


