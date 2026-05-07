// Function: FUN_013f4fc0
// Address: 013f4fc0
// Size: 1539 bytes
// Class: MUDataPointFunction


/* WARNING: Removing unreachable block (ram,0x013f54dd) */
/* WARNING: Removing unreachable block (ram,0x013f54e9) */
/* WARNING: Removing unreachable block (ram,0x013f553d) */
/* WARNING: Removing unreachable block (ram,0x013f5549) */

void FUN_013f4fc0(double param_1)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  void *pvVar6;
  longlong lVar7;
  undefined8 *puVar8;
  pthread_key_t pVar9;
  longlong lVar10;
  uint uVar11;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong lVar12;
  longlong lVar13;
  double dVar14;
  double dVar15;
  double local_80;
  ulonglong local_78;
  double local_70;
  double local_68;
  longlong local_38;
  
  lVar7 = *unaff_RSI;
  if (*(int *)(lVar7 + 0xc) < 2) {
    return;
  }
  local_68 = 0.0;
  lVar13 = 1;
  local_38 = 0;
  bVar2 = false;
  lVar12 = 0;
  lVar10 = 0;
  bVar3 = false;
  do {
    pVar9 = (pthread_key_t)lVar10;
    lVar7 = *(longlong *)(*(longlong *)(lVar7 + 0x10) + lVar13 * 8);
    if (local_38 == lVar7) {
      if ((!bVar2) && (local_38 != 0)) {
        bVar2 = true;
        FUN_00d50b00();
      }
    }
    else {
      if (lVar7 != 0) {
        FUN_00d50b00();
      }
      if ((bVar2) && (local_38 != 0)) {
        FUN_00d50b20();
        bVar2 = true;
        local_38 = lVar7;
      }
      else {
        bVar2 = true;
        local_38 = lVar7;
      }
    }
    lVar7 = *(longlong *)(*(longlong *)(*unaff_RSI + 0x10) + -8 + lVar13 * 8);
    if (lVar12 == lVar7) {
      if ((!bVar3) && (lVar12 != 0)) {
        bVar3 = true;
        FUN_00d50b00();
      }
    }
    else {
      if (lVar7 != 0) {
        FUN_00d50b00();
      }
      if ((bVar3) && (lVar12 != 0)) {
        FUN_00d50b20();
        bVar3 = true;
        lVar12 = lVar7;
      }
      else {
        bVar3 = true;
        lVar12 = lVar7;
      }
    }
    pvVar6 = _pthread_getspecific(pVar9);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    cVar5 = FUN_013faf30();
    if (cVar5 == '\0') {
      pvVar6 = _pthread_getspecific(pVar9);
      if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
        pVar9 = (pthread_key_t)local_38;
      }
      dVar15 = (double)FUN_013faed0();
      pvVar6 = _pthread_getspecific(pVar9);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar14 = (double)FUN_013faed0();
      local_68 = local_68 + (dVar15 - dVar14);
    }
    lVar13 = lVar13 + 1;
    lVar7 = *unaff_RSI;
    lVar10 = (longlong)*(int *)(lVar7 + 0xc);
  } while (lVar13 < lVar10);
  if ((local_68 != 0.0) || (NAN(local_68))) {
    puVar8 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar8 = &DAT_02572358;
    (*DAT_02572370)();
    lVar7 = *unaff_RSI;
    uVar1 = *(uint *)(lVar7 + 0xc);
    local_78 = (ulonglong)uVar1;
    if (1 < (int)uVar1) {
      local_70 = 0.0;
      local_80 = local_68;
      lVar10 = lVar12;
      while( true ) {
        uVar11 = uVar1 - 1;
        lVar7 = *(longlong *)(*(longlong *)(lVar7 + 0x10) + (ulonglong)uVar11 * 8);
        if (local_38 == lVar7) {
          lVar7 = local_38;
          bVar4 = bVar2;
          if ((!bVar2) && (local_38 != 0)) {
            FUN_00d50b00();
            bVar4 = true;
          }
        }
        else {
          if (lVar7 != 0) {
            FUN_00d50b00(lVar7);
          }
          bVar4 = true;
          if ((bVar2) && (local_38 != 0)) {
            FUN_00d50b20();
          }
        }
        bVar2 = bVar4;
        local_38 = lVar7;
        pVar9 = uVar1 - 2;
        lVar12 = *(longlong *)(*(longlong *)(*unaff_RSI + 0x10) + (ulonglong)pVar9 * 8);
        if (lVar10 == lVar12) {
          lVar12 = lVar10;
          bVar4 = bVar3;
          if ((!bVar3) && (lVar10 != 0)) {
            FUN_00d50b00();
            bVar4 = true;
          }
        }
        else {
          if (lVar12 != 0) {
            FUN_00d50b00();
          }
          bVar4 = true;
          if ((bVar3) && (lVar10 != 0)) {
            FUN_00d50b20();
          }
        }
        bVar3 = bVar4;
        pvVar6 = _pthread_getspecific(pVar9);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        cVar5 = FUN_013faf30();
        if (cVar5 == '\0') {
          pvVar6 = _pthread_getspecific(pVar9);
          if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
            pVar9 = (pthread_key_t)local_38;
          }
          local_70 = (double)FUN_013faed0();
          pvVar6 = _pthread_getspecific(pVar9);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          dVar15 = (double)FUN_013faed0();
          local_70 = local_70 - dVar15;
        }
        lVar7 = *(longlong *)(*(longlong *)(unaff_RDI[9] + 0x10) + (ulonglong)uVar11 * 8);
        if (lVar7 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar7 != 0) {
          FUN_00d50b20();
        }
        (**(code **)(*unaff_RDI + 0x428))((local_80 * param_1) / local_68,0);
        FUN_00d23740();
        pvVar6 = _pthread_getspecific(pVar9);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        cVar5 = FUN_013faf30();
        if ((longlong)local_78 < 3) break;
        if (cVar5 == '\0') {
          local_80 = local_80 - local_70;
        }
        local_78 = local_78 - 1;
        lVar7 = *unaff_RSI;
        lVar10 = lVar12;
        uVar1 = uVar11;
      }
      if (puVar8 == (undefined8 *)0x0) goto LAB_013f55d9;
    }
    FUN_00d50b20();
  }
LAB_013f55d9:
  if ((bVar3) && (lVar12 != 0)) {
    FUN_00d50b20();
  }
  if ((bVar2) && (local_38 != 0)) {
    FUN_00d50b20();
  }
  return;
}


