// Function: FUN_015287d0
// Address: 015287d0
// Size: 516 bytes
// Class: GNFraction


/* WARNING: Removing unreachable block (ram,0x015288f1) */
/* WARNING: Removing unreachable block (ram,0x015288fa) */

void FUN_015287d0(void)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  void *pvVar4;
  pthread_key_t pVar5;
  longlong lVar6;
  longlong unaff_RDI;
  ulonglong uVar7;
  bool bVar8;
  uint uVar9;
  longlong local_60;
  char local_58;
  
  lVar3 = *(longlong *)(unaff_RDI + 0x48);
  uVar9 = *(uint *)(lVar3 + 0xc);
  uVar7 = (ulonglong)uVar9;
  if ((int)uVar9 < 1) {
    bVar8 = false;
    lVar6 = 0;
  }
  else {
    lVar6 = 0;
    bVar8 = false;
    while( true ) {
      uVar9 = uVar9 - 1;
      lVar3 = *(longlong *)(*(longlong *)(lVar3 + 0x10) + (ulonglong)uVar9 * 8);
      pVar5 = uVar9;
      if (lVar6 == lVar3) {
        lVar3 = lVar6;
        bVar1 = bVar8;
        if ((!bVar8) && (lVar6 != 0)) {
          FUN_00d50b00();
          bVar1 = true;
        }
      }
      else {
        if (lVar3 != 0) {
          FUN_00d50b00();
        }
        bVar1 = true;
        if ((bVar8) && (lVar6 != 0)) {
          FUN_00d50b20();
        }
      }
      bVar8 = bVar1;
      lVar6 = lVar3;
      pvVar4 = _pthread_getspecific(pVar5);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0152aa70();
      iVar2 = FUN_00d237a0();
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      if (iVar2 != -1) {
        pvVar4 = _pthread_getspecific(pVar5);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0152abd0();
        pvVar4 = _pthread_getspecific(pVar5);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0152b730();
      }
      if ((longlong)uVar7 < 2) break;
      uVar7 = uVar7 - 1;
      lVar3 = *(longlong *)(unaff_RDI + 0x48);
    }
  }
  FUN_01528450();
  if ((bVar8) && (lVar6 != 0)) {
    FUN_00d50b20();
  }
  return;
}


