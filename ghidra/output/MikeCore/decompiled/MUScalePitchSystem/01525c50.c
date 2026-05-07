// Function: FUN_01525c50
// Address: 01525c50
// Size: 747 bytes
// Class: MUScalePitchSystem


void FUN_01525c50(undefined8 param_1,longlong *param_2)

{
  double dVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  void *pvVar5;
  longlong lVar6;
  ulonglong uVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  longlong *unaff_RSI;
  ulonglong uVar11;
  longlong unaff_RDI;
  ulonglong uVar12;
  double dVar13;
  double local_48;
  ulonglong local_40;
  
  if (*(int *)(*param_2 + 0xc) != 0) {
    lVar6 = *unaff_RSI;
    iVar2 = *(int *)(lVar6 + 0x18);
    FUN_00c8e340(param_1,1);
    *(undefined4 *)(*(longlong *)(lVar6 + 0x10) + (longlong)iVar2) = 0;
    lVar6 = *param_2;
    if (0 < *(int *)(lVar6 + 0xc)) {
      iVar2 = *(int *)(*unaff_RSI + 0x18);
      iVar8 = iVar2 + 3;
      if (-1 < iVar2) {
        iVar8 = iVar2;
      }
      uVar9 = (iVar8 >> 2) * *(int *)(unaff_RDI + 0x58);
      uVar11 = (ulonglong)uVar9;
      local_48 = (double)(int)uVar9;
      local_40 = 0;
      uVar12 = 0;
      lVar10 = 0;
      bVar3 = false;
      do {
        lVar6 = *(longlong *)(*(longlong *)(lVar6 + 0x10) + local_40 * 8);
        uVar7 = local_40;
        if (lVar10 == lVar6) {
          lVar6 = lVar10;
          bVar4 = bVar3;
          if ((!bVar3) && (lVar10 != 0)) {
            FUN_00d50b00(local_40,uVar11);
            bVar4 = true;
          }
        }
        else {
          if (lVar6 != 0) {
            FUN_00d50b00(local_40,uVar11);
          }
          bVar4 = true;
          if ((bVar3) && (lVar10 != 0)) {
            FUN_00d50b20();
          }
        }
        bVar3 = bVar4;
        lVar10 = lVar6;
        pvVar5 = _pthread_getspecific((pthread_key_t)uVar7);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar13 = (double)FUN_01524a20();
        if ((dVar13 == DAT_02390448) && (!NAN(dVar13) && !NAN(DAT_02390448))) break;
        pvVar5 = _pthread_getspecific((pthread_key_t)uVar7);
        if ((pvVar5 == (void *)0x0) || (lVar6 = FUN_00e8b990(), lVar6 == 0)) {
          dVar1 = *(double *)(lVar10 + 0x38);
        }
        else {
          dVar1 = *(double *)
                   (*(longlong *)(lVar10 + 0x20 + (ulonglong)(*(uint *)(lVar6 + 0x154) & 1) * 8) +
                   0x38);
        }
        if (local_48 <= dVar1) {
          lVar6 = *unaff_RSI;
          iVar2 = *(int *)(lVar6 + 0x18);
          FUN_00c8e340(dVar1,1);
          *(int *)(*(longlong *)(lVar6 + 0x10) + (longlong)iVar2) = (int)local_40;
          iVar2 = *(int *)(*unaff_RSI + 0x18);
          iVar8 = iVar2 + 3;
          if (-1 < iVar2) {
            iVar8 = iVar2;
          }
          uVar9 = (iVar8 >> 2) * *(int *)(unaff_RDI + 0x58);
          uVar7 = (ulonglong)uVar9;
          local_48 = (double)(int)uVar9;
          uVar12 = local_40 & 0xffffffff;
        }
        while( true ) {
          pvVar5 = _pthread_getspecific((pthread_key_t)uVar7);
          if ((pvVar5 == (void *)0x0) || (lVar6 = FUN_00e8b990(), lVar6 == 0)) {
            dVar1 = *(double *)(lVar10 + 0x38);
          }
          else {
            dVar1 = *(double *)
                     (*(longlong *)(lVar10 + 0x20 + (ulonglong)(*(uint *)(lVar6 + 0x154) & 1) * 8) +
                     0x38);
          }
          if (dVar1 + dVar13 <= local_48) break;
          lVar6 = *unaff_RSI;
          iVar2 = *(int *)(lVar6 + 0x18);
          FUN_00c8e340(dVar1 + dVar13,1);
          *(int *)(*(longlong *)(lVar6 + 0x10) + (longlong)iVar2) = (int)uVar12;
          iVar2 = *(int *)(*unaff_RSI + 0x18);
          iVar8 = iVar2 + 3;
          if (-1 < iVar2) {
            iVar8 = iVar2;
          }
          uVar9 = (iVar8 >> 2) * *(int *)(unaff_RDI + 0x58);
          uVar7 = (ulonglong)uVar9;
          local_48 = (double)(int)uVar9;
        }
        uVar11 = local_40 + 1;
        lVar6 = *param_2;
        local_40 = uVar11;
      } while ((longlong)uVar11 < (longlong)*(int *)(lVar6 + 0xc));
      if ((bVar3) && (lVar10 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  return;
}


