// Function: FUN_01525fb0
// Address: 01525fb0
// Size: 778 bytes
// Class: MUScalePitchSystem


void FUN_01525fb0(undefined8 param_1,longlong *param_2)

{
  double dVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  void *pvVar5;
  longlong lVar6;
  longlong lVar7;
  pthread_key_t pVar8;
  uint uVar9;
  ulonglong uVar10;
  int iVar11;
  longlong lVar12;
  longlong *unaff_RSI;
  ulonglong unaff_RDI;
  ulonglong uVar13;
  ulonglong uVar14;
  double dVar15;
  double dVar16;
  double local_48;
  
  if (*(int *)(*param_2 + 0xc) != 0) {
    lVar6 = *unaff_RSI;
    iVar2 = *(int *)(lVar6 + 0x18);
    FUN_00c8e340(param_1,1);
    *(undefined4 *)(*(longlong *)(lVar6 + 0x10) + (longlong)iVar2) = 0;
    lVar6 = *param_2;
    if (0 < *(int *)(lVar6 + 0xc)) {
      iVar2 = *(int *)(*unaff_RSI + 0x18);
      iVar11 = iVar2 + 3;
      if (-1 < iVar2) {
        iVar11 = iVar2;
      }
      local_48 = (double)((iVar11 >> 2) * *(int *)(unaff_RDI + 0x70));
      uVar13 = 0;
      uVar14 = 0;
      lVar12 = 0;
      bVar3 = false;
      uVar10 = unaff_RDI;
      do {
        lVar6 = *(longlong *)(*(longlong *)(lVar6 + 0x10) + uVar13 * 8);
        if (lVar12 == lVar6) {
          lVar6 = lVar12;
          bVar4 = bVar3;
          if ((!bVar3) && (lVar12 != 0)) {
            FUN_00d50b00();
            bVar4 = true;
          }
        }
        else {
          if (lVar6 != 0) {
            FUN_00d50b00();
          }
          bVar4 = true;
          if ((bVar3) && (lVar12 != 0)) {
            FUN_00d50b20();
          }
        }
        bVar3 = bVar4;
        lVar12 = lVar6;
        pvVar5 = _pthread_getspecific((pthread_key_t)uVar10);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar15 = (double)FUN_01524a20();
        if ((dVar15 == DAT_02390448) && (!NAN(dVar15) && !NAN(DAT_02390448))) break;
        pvVar5 = _pthread_getspecific((pthread_key_t)uVar10);
        if ((pvVar5 == (void *)0x0) || (lVar6 = FUN_00e8b990(), lVar6 == 0)) {
          dVar1 = *(double *)(lVar12 + 0x40);
        }
        else {
          dVar1 = *(double *)
                   (*(longlong *)(lVar12 + 0x20 + (ulonglong)(*(uint *)(lVar6 + 0x154) & 1) * 8) +
                   0x40);
        }
        if (local_48 <= dVar1) {
          lVar6 = *unaff_RSI;
          iVar2 = *(int *)(lVar6 + 0x18);
          FUN_00c8e340(dVar1,1);
          *(int *)(*(longlong *)(lVar6 + 0x10) + (longlong)iVar2) = (int)uVar13;
          iVar2 = *(int *)(*unaff_RSI + 0x18);
          iVar11 = iVar2 + 3;
          if (-1 < iVar2) {
            iVar11 = iVar2;
          }
          uVar9 = (iVar11 >> 2) * *(int *)(unaff_RDI + 0x70);
          uVar10 = (ulonglong)uVar9;
          local_48 = (double)(int)uVar9;
          uVar14 = uVar13 & 0xffffffff;
        }
        while( true ) {
          pVar8 = (pthread_key_t)uVar10;
          pvVar5 = _pthread_getspecific(pVar8);
          lVar6 = lVar12;
          if ((pvVar5 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
            lVar6 = *(longlong *)(lVar12 + 0x20 + (ulonglong)(*(uint *)(lVar7 + 0x154) & 1) * 8);
          }
          dVar1 = *(double *)(lVar6 + 0x40);
          pvVar5 = _pthread_getspecific(pVar8);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          dVar16 = (double)FUN_01524a10();
          if (dVar1 + dVar16 * dVar15 <= local_48) break;
          lVar6 = *unaff_RSI;
          iVar2 = *(int *)(lVar6 + 0x18);
          FUN_00c8e340(dVar16 * dVar15,1);
          *(int *)(*(longlong *)(lVar6 + 0x10) + (longlong)iVar2) = (int)uVar14;
          iVar2 = *(int *)(*unaff_RSI + 0x18);
          iVar11 = iVar2 + 3;
          if (-1 < iVar2) {
            iVar11 = iVar2;
          }
          uVar9 = (iVar11 >> 2) * *(int *)(unaff_RDI + 0x70);
          uVar10 = (ulonglong)uVar9;
          local_48 = (double)(int)uVar9;
        }
        uVar13 = uVar13 + 1;
        lVar6 = *param_2;
        uVar10 = (ulonglong)*(int *)(lVar6 + 0xc);
      } while ((longlong)uVar13 < (longlong)uVar10);
      if ((bVar3) && (lVar12 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  return;
}


