// Function: FUN_013f5760
// Address: 013f5760
// Size: 653 bytes
// Class: MUDataPointFunction


double FUN_013f5760(void)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  longlong lVar6;
  void *pvVar7;
  pthread_key_t pVar8;
  pthread_key_t pVar9;
  ulonglong uVar10;
  longlong unaff_RDI;
  longlong lVar11;
  double dVar12;
  double dVar13;
  ulonglong local_58;
  longlong local_48;
  double local_40;
  
  lVar6 = *(longlong *)(unaff_RDI + 0x48);
  uVar1 = *(uint *)(lVar6 + 0xc);
  local_58 = (ulonglong)uVar1;
  local_40 = 0.0;
  if (1 < (int)uVar1) {
    uVar10 = (ulonglong)(uVar1 - 1);
    local_40 = 0.0;
    local_48 = 0;
    bVar2 = false;
    lVar11 = 0;
    bVar3 = false;
    while( true ) {
      pVar9 = (pthread_key_t)uVar10;
      lVar6 = *(longlong *)(*(longlong *)(lVar6 + 0x10) + uVar10 * 8);
      pVar8 = pVar9;
      if (local_48 == lVar6) {
        lVar6 = local_48;
        bVar4 = bVar2;
        if ((!bVar2) && (local_48 != 0)) {
          FUN_00d50b00();
          bVar4 = true;
        }
      }
      else {
        if (lVar6 != 0) {
          FUN_00d50b00();
        }
        bVar4 = true;
        if ((bVar2) && (local_48 != 0)) {
          FUN_00d50b20();
        }
      }
      bVar2 = bVar4;
      local_48 = lVar6;
      uVar10 = (ulonglong)(pVar9 - 1);
      lVar6 = *(longlong *)(*(longlong *)(*(longlong *)(unaff_RDI + 0x48) + 0x10) + uVar10 * 8);
      if (lVar11 == lVar6) {
        lVar6 = lVar11;
        bVar4 = bVar3;
        if ((!bVar3) && (lVar11 != 0)) {
          FUN_00d50b00();
          bVar4 = true;
        }
      }
      else {
        if (lVar6 != 0) {
          FUN_00d50b00();
        }
        bVar4 = true;
        if ((bVar3) && (lVar11 != 0)) {
          FUN_00d50b20();
        }
      }
      lVar11 = lVar6;
      pvVar7 = _pthread_getspecific(pVar8);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      cVar5 = FUN_013faf30();
      dVar12 = DAT_02391030;
      if (cVar5 != '\0') {
        pvVar7 = _pthread_getspecific(pVar8);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar12 = (double)FUN_013faed0();
        pvVar7 = _pthread_getspecific(pVar8);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar13 = (double)FUN_013faed0();
        dVar12 = dVar12 - dVar13;
      }
      local_40 = local_40 + dVar12;
      if ((longlong)local_58 < 3) break;
      local_58 = local_58 - 1;
      lVar6 = *(longlong *)(unaff_RDI + 0x48);
      bVar3 = bVar4;
    }
    if ((bVar4) && (lVar11 != 0)) {
      FUN_00d50b20();
    }
    if ((bVar2) && (local_48 != 0)) {
      FUN_00d50b20();
    }
  }
  return local_40;
}


