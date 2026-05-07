// Function: FUN_012879b0
// Address: 012879b0
// Size: 551 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x01287bb7) */
/* WARNING: Removing unreachable block (ram,0x01287bc0) */

void FUN_012879b0(void)

{
  bool bVar1;
  void *pvVar2;
  longlong lVar3;
  pthread_key_t pVar4;
  bool bVar5;
  longlong lVar6;
  longlong *unaff_RDI;
  ulonglong uVar7;
  uint uVar8;
  
  lVar3 = *unaff_RDI;
  if (lVar3 != 0) {
    uVar8 = *(uint *)(lVar3 + 0xc);
    uVar7 = (ulonglong)uVar8;
    if ((int)uVar8 < 1) {
      bVar5 = false;
      lVar6 = 0;
    }
    else {
      lVar6 = 0;
      bVar5 = false;
      while( true ) {
        uVar8 = uVar8 - 1;
        lVar3 = *(longlong *)(*(longlong *)(lVar3 + 0x10) + (ulonglong)uVar8 * 8);
        pVar4 = uVar8;
        if (lVar6 == lVar3) {
          lVar3 = lVar6;
          bVar1 = bVar5;
          if ((!bVar5) && (lVar6 != 0)) {
            FUN_00d50b00();
            bVar1 = true;
          }
        }
        else {
          if (lVar3 != 0) {
            FUN_00d50b00();
          }
          bVar1 = true;
          if ((bVar5) && (lVar6 != 0)) {
            FUN_00d50b20();
          }
        }
        bVar5 = bVar1;
        lVar6 = lVar3;
        pvVar2 = _pthread_getspecific(pVar4);
        if ((pvVar2 == (void *)0x0) || (lVar3 = FUN_00e8b990(), lVar3 == 0)) {
          lVar3 = *(longlong *)(lVar6 + 200);
        }
        else {
          lVar3 = *(longlong *)
                   (*(longlong *)(lVar6 + 0x20 + (ulonglong)(*(uint *)(lVar3 + 0x154) & 1) * 8) +
                   200);
        }
        if (lVar3 != 0) {
          FUN_00d50b00();
          FUN_00d50b20();
          pvVar2 = _pthread_getspecific(pVar4);
          if ((pvVar2 == (void *)0x0) || (lVar3 = FUN_00e8b990(), lVar3 == 0)) {
            lVar3 = *(longlong *)(lVar6 + 200);
          }
          else {
            lVar3 = *(longlong *)
                     (*(longlong *)(lVar6 + 0x20 + (ulonglong)(*(uint *)(lVar3 + 0x154) & 1) * 8) +
                     200);
          }
          if (lVar3 != 0) {
            FUN_00d50b00();
          }
          pvVar2 = _pthread_getspecific(pVar4);
          if (pvVar2 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0152ec70();
          if (lVar3 != 0) {
            FUN_00d50b20();
          }
        }
        if ((longlong)uVar7 < 2) break;
        uVar7 = uVar7 - 1;
        lVar3 = *unaff_RDI;
      }
    }
    FUN_0152f340();
    if ((bVar5) && (lVar6 != 0)) {
      FUN_00d50b20();
    }
  }
  return;
}


