// Function: FUN_012a2e80
// Address: 012a2e80
// Size: 1132 bytes
// Class: MUFader


ulonglong FUN_012a2e80(double param_1,double param_2)

{
  double dVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  char cVar5;
  undefined7 uVar10;
  void *pvVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  pthread_key_t pVar11;
  int iVar12;
  uint uVar13;
  undefined8 unaff_RBX;
  ulonglong uVar14;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong *plVar15;
  uint uVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  longlong *local_c0;
  char local_b8;
  uint local_44;
  double local_40;
  
  iVar2 = *(int *)(*unaff_RDI + 0x18);
  iVar12 = iVar2 + 3;
  if (-1 < iVar2) {
    iVar12 = iVar2;
  }
  lVar3 = *unaff_RSI;
  if (lVar3 == 0) {
    uVar14 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
  }
  else {
    uVar10 = (undefined7)((ulonglong)*unaff_RDI >> 8);
    if (*(int *)(lVar3 + 0xc) < 1) {
      bVar4 = true;
      local_44 = (uint)CONCAT71(uVar10,1);
    }
    else {
      dVar20 = param_2 / (double)(iVar12 >> 2);
      local_44 = (uint)CONCAT71(uVar10,1);
      uVar16 = 0;
      bVar4 = true;
      do {
        lVar9 = *(longlong *)(*(longlong *)(lVar3 + 0x10) + (ulonglong)uVar16 * 8);
        pVar11 = uVar16;
        pvVar6 = _pthread_getspecific(uVar16);
        if ((pvVar6 == (void *)0x0) || (lVar7 = FUN_00e8b990(), lVar7 == 0)) {
          cVar5 = *(char *)(lVar9 + 0xb0);
        }
        else {
          cVar5 = *(char *)(*(longlong *)
                             (lVar9 + 0x20 + (ulonglong)(*(uint *)(lVar7 + 0x154) & 1) * 8) + 0xb0);
        }
        if (cVar5 == '\0') {
          pvVar6 = _pthread_getspecific(pVar11);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0126bcd0();
          if (local_b8 == '\0') {
            if (local_c0 != (longlong *)0x0) {
              FUN_00d50b00();
              goto LAB_012a301a;
            }
          }
          else if (local_c0 != (longlong *)0x0) {
LAB_012a301a:
            pvVar6 = _pthread_getspecific(pVar11);
            lVar7 = lVar9;
            if ((pvVar6 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
              lVar7 = *(longlong *)(lVar9 + 0x20 + (ulonglong)(*(uint *)(lVar8 + 0x154) & 1) * 8);
            }
            dVar18 = *(double *)(lVar7 + 0xe8);
            pvVar6 = _pthread_getspecific(pVar11);
            if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
              lVar9 = *(longlong *)(lVar9 + 0x20 + (ulonglong)(*(uint *)(lVar7 + 0x154) & 1) * 8);
            }
            dVar1 = *(double *)(lVar9 + 0xf0);
            dVar19 = dVar1;
            dVar17 = (double)FUN_00e7b500(dVar18);
            cVar5 = FUN_00e7b560();
            if (cVar5 != '\0') {
              if ((bVar4) && ((param_1 < dVar17 || (dVar17 + dVar19 < param_1 + param_2)))) {
                ___bzero();
                bVar4 = false;
              }
              uVar13 = (uint)((dVar18 - param_1) / dVar20);
              local_40 = 0.0;
              if ((int)uVar13 < 0) {
                local_40 = (double)(int)-uVar13 * dVar20 + 0.0;
              }
              if (local_40 < dVar1) {
                if ((int)uVar13 < 0) {
                  uVar13 = 0;
                }
                uVar14 = (ulonglong)uVar13;
                lVar9 = *unaff_RDI;
                if (bVar4) {
                  do {
                    iVar2 = *(int *)(lVar9 + 0x18);
                    iVar12 = iVar2 + 3;
                    if (-1 < iVar2) {
                      iVar12 = iVar2;
                    }
                    if ((longlong)(iVar12 >> 2) <= (longlong)uVar14) break;
                    pvVar6 = _pthread_getspecific(iVar12 >> 2);
                    plVar15 = local_c0;
                    if ((pvVar6 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
                      plVar15 = (longlong *)local_c0[(ulonglong)(*(uint *)(lVar9 + 0x154) & 1) + 4];
                    }
                    local_40 = dVar20 + local_40;
                    dVar18 = (double)(**(code **)(*plVar15 + 0x3a8))();
                    lVar9 = *unaff_RDI;
                    *(float *)(*(longlong *)(lVar9 + 0x10) + uVar14 * 4) = (float)dVar18;
                    uVar14 = uVar14 + 1;
                  } while (local_40 < dVar1);
                }
                else {
                  do {
                    iVar2 = *(int *)(lVar9 + 0x18);
                    iVar12 = iVar2 + 3;
                    if (-1 < iVar2) {
                      iVar12 = iVar2;
                    }
                    if ((longlong)(iVar12 >> 2) <= (longlong)uVar14) break;
                    pvVar6 = _pthread_getspecific(iVar12 >> 2);
                    plVar15 = local_c0;
                    if ((pvVar6 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
                      plVar15 = (longlong *)local_c0[(ulonglong)(*(uint *)(lVar9 + 0x154) & 1) + 4];
                    }
                    local_40 = dVar20 + local_40;
                    dVar18 = (double)(**(code **)(*plVar15 + 0x3a8))();
                    lVar9 = *unaff_RDI;
                    *(float *)(*(longlong *)(lVar9 + 0x10) + uVar14 * 4) =
                         (float)dVar18 + *(float *)(*(longlong *)(lVar9 + 0x10) + uVar14 * 4);
                    uVar14 = uVar14 + 1;
                  } while (local_40 < dVar1);
                }
              }
              bVar4 = false;
            }
            FUN_00d50b20();
            goto LAB_012a2f44;
          }
          local_44 = 0;
        }
LAB_012a2f44:
        uVar16 = uVar16 + 1;
      } while ((int)uVar16 < *(int *)(lVar3 + 0xc));
    }
    FUN_001159b0();
    if (!bVar4) {
      uVar14 = (ulonglong)local_44;
      goto LAB_012a32ff;
    }
    iVar2 = *(int *)(*unaff_RDI + 0x18);
    uVar14 = (ulonglong)local_44;
  }
  ___bzero(iVar2);
LAB_012a32ff:
  return uVar14 & 0xffffff01;
}


