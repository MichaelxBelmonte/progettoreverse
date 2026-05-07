// Function: FUN_0054e050
// Address: 0054e050
// Size: 1966 bytes
// Class: MDURLOpenedController


/* WARNING: Removing unreachable block (ram,0x0054e7bd) */
/* WARNING: Removing unreachable block (ram,0x0054e7c9) */

void FUN_0054e050(ulonglong param_1)

{
  double dVar1;
  bool bVar2;
  ulonglong uVar3;
  char cVar4;
  int iVar5;
  char *pcVar6;
  void *pvVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong unaff_RDI;
  longlong lVar12;
  double dVar13;
  double dVar14;
  double local_98;
  longlong local_90;
  longlong local_88;
  char local_80 [8];
  double local_78;
  undefined8 uStack_70;
  ulonglong local_68;
  ulonglong local_58;
  ulonglong local_48;
  ulonglong local_40;
  char local_38 [8];
  
  iVar5 = *(int *)(*(longlong *)(unaff_RDI + 0x38) + 0xc);
  if (iVar5 == 1) {
    FUN_00d23310();
    local_38[0] = local_80[0];
    pcVar6 = local_80;
    if (local_80[0] == '\0') {
      pcVar6 = local_38;
    }
    *pcVar6 = '\0';
    if ((local_80[0] != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    pvVar7 = _pthread_getspecific((pthread_key_t)param_1);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    cVar4 = FUN_003629a0();
    if ((local_38[0] != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    if (cVar4 != '\0') {
      FUN_00d23310();
      pcVar6 = local_80;
      if (local_80[0] == '\0') {
        pcVar6 = local_38;
      }
      local_38[0] = local_80[0];
      *pcVar6 = '\0';
      if ((local_80[0] != '\0') && (local_88 != 0)) {
        FUN_00d50b20();
      }
      if ((local_38[0] == '\0') && (local_88 != 0)) {
        FUN_00d50b00();
      }
      FUN_0054df20();
      if (local_88 == 0) {
        return;
      }
      FUN_00d50b20();
      return;
    }
  }
  if (1 < iVar5) {
    local_40 = 0;
    local_48 = 0;
    lVar12 = 0;
    bVar2 = false;
    do {
      local_90 = 1;
      local_68 = 0;
      local_58 = 0;
      do {
        local_48 = local_48 & 0xffffffff;
        uVar11 = *(ulonglong *)
                  (*(longlong *)(*(longlong *)(unaff_RDI + 0x38) + 0x10) + local_68 * 8);
        cVar4 = (char)local_48;
        if (local_40 == uVar11) {
          uVar3 = local_40;
          if ((cVar4 == '\0') && (local_40 != 0)) {
            local_48 = CONCAT71((int7)(uVar11 >> 8),1);
            FUN_00d50b00();
          }
        }
        else {
          uVar8 = 0;
          param_1 = uVar11;
          if (uVar11 != 0) {
            uVar8 = FUN_00d50b00();
          }
          local_48 = CONCAT71((int7)((ulonglong)uVar8 >> 8),1);
          uVar3 = uVar11;
          if ((cVar4 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
        }
        local_40 = uVar3;
        pvVar7 = _pthread_getspecific((pthread_key_t)param_1);
        if ((pvVar7 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
          param_1 = local_40;
        }
        cVar4 = FUN_003629a0();
        if (cVar4 != '\0') {
          FUN_0054df20();
          local_68 = local_68 + 1;
          local_58 = CONCAT71((int7)(param_1 >> 8),1);
          param_1 = local_58;
          iVar5 = iVar5 + -1;
          break;
        }
        pvVar7 = _pthread_getspecific((pthread_key_t)param_1);
        uVar11 = local_40;
        if ((pvVar7 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
          uVar11 = *(ulonglong *)(local_40 + 0x20 + (ulonglong)(*(uint *)(lVar9 + 0x154) & 1) * 8);
          param_1 = local_40;
        }
        local_78 = *(double *)(uVar11 + 0x38);
        dVar13 = *(double *)(uVar11 + 0x48);
        if ((*(double *)(uVar11 + 0x40) <= local_78) ||
           ((dVar13 < *(double *)(uVar11 + 0x50) && (dVar13 < local_78)))) {
          local_78 = dVar13;
        }
        uStack_70 = 0;
        pvVar7 = _pthread_getspecific((pthread_key_t)param_1);
        if ((pvVar7 == (void *)0x0) || (lVar9 = FUN_00e8b990(), lVar9 == 0)) {
          dVar13 = *(double *)(local_40 + 0x40);
          uVar11 = local_40;
          if (dVar13 <= *(double *)(local_40 + 0x38)) goto LAB_0054e3b9;
LAB_0054e3d4:
          dVar14 = *(double *)(uVar11 + 0x50);
          if ((*(double *)(uVar11 + 0x48) <= dVar14 && dVar14 != *(double *)(uVar11 + 0x48)) &&
             (dVar13 < dVar14)) goto LAB_0054e3e6;
        }
        else {
          uVar11 = *(ulonglong *)(local_40 + 0x20 + (ulonglong)(*(uint *)(lVar9 + 0x154) & 1) * 8);
          dVar13 = *(double *)(uVar11 + 0x40);
          if (*(double *)(uVar11 + 0x38) < dVar13) goto LAB_0054e3d4;
LAB_0054e3b9:
          dVar14 = *(double *)(uVar11 + 0x50);
LAB_0054e3e6:
          dVar13 = dVar14;
        }
        local_98 = dVar13 + DAT_02391030;
        if (dVar13 <= local_78) {
          local_98 = dVar13;
        }
        uVar11 = local_68 + 1;
        local_68 = uVar11;
        if ((longlong)uVar11 < (longlong)iVar5) {
          dVar13 = (double)(~-(ulonglong)(local_78 < dVar13) & (ulonglong)local_78 |
                           (ulonglong)(local_78 + DAT_023944d8) & -(ulonglong)(local_78 < dVar13));
          lVar9 = local_90;
          if (local_98 <= dVar13) {
            do {
              lVar10 = *(longlong *)
                        (*(longlong *)(*(longlong *)(unaff_RDI + 0x38) + 0x10) + lVar9 * 8);
              if (lVar12 == lVar10) {
                if ((!bVar2) && (lVar12 != 0)) {
                  bVar2 = true;
                  FUN_00d50b00();
                }
              }
              else {
                if (lVar10 != 0) {
                  FUN_00d50b00();
                }
                if ((bVar2) && (lVar12 != 0)) {
                  FUN_00d50b20();
                  bVar2 = true;
                  lVar12 = lVar10;
                }
                else {
                  bVar2 = true;
                  lVar12 = lVar10;
                }
              }
              pvVar7 = _pthread_getspecific((pthread_key_t)uVar11);
              if (pvVar7 != (void *)0x0) {
                FUN_00e8b990();
              }
              pvVar7 = _pthread_getspecific((pthread_key_t)uVar11);
              if (pvVar7 != (void *)0x0) {
                FUN_00e8b990();
              }
              lVar9 = lVar9 + 1;
            } while ((int)lVar9 < iVar5);
          }
          else {
            do {
              lVar10 = *(longlong *)
                        (*(longlong *)(*(longlong *)(unaff_RDI + 0x38) + 0x10) + lVar9 * 8);
              if (lVar12 == lVar10) {
                if ((!bVar2) && (lVar12 != 0)) {
                  bVar2 = true;
                  FUN_00d50b00();
                }
              }
              else {
                if (lVar10 != 0) {
                  FUN_00d50b00();
                }
                if ((bVar2) && (lVar12 != 0)) {
                  FUN_00d50b20();
                  bVar2 = true;
                  lVar12 = lVar10;
                }
                else {
                  bVar2 = true;
                  lVar12 = lVar10;
                }
              }
              pvVar7 = _pthread_getspecific((pthread_key_t)uVar11);
              if ((pvVar7 == (void *)0x0) || (lVar10 = FUN_00e8b990(), lVar10 == 0)) {
                local_78 = *(double *)(lVar12 + 0x38);
                dVar14 = *(double *)(lVar12 + 0x48);
                lVar10 = lVar12;
                if (local_78 < *(double *)(lVar12 + 0x40)) goto LAB_0054e554;
LAB_0054e56d:
                local_78 = dVar14;
              }
              else {
                lVar10 = *(longlong *)
                          (lVar12 + 0x20 + (ulonglong)(*(uint *)(lVar10 + 0x154) & 1) * 8);
                local_78 = *(double *)(lVar10 + 0x38);
                dVar14 = *(double *)(lVar10 + 0x48);
                if (*(double *)(lVar10 + 0x40) <= local_78) goto LAB_0054e56d;
LAB_0054e554:
                if ((dVar14 < *(double *)(lVar10 + 0x50)) && (dVar14 < local_78)) goto LAB_0054e56d;
              }
              pvVar7 = _pthread_getspecific((pthread_key_t)uVar11);
              if ((pvVar7 == (void *)0x0) || (lVar10 = FUN_00e8b990(), lVar10 == 0)) {
                dVar14 = *(double *)(lVar12 + 0x40);
                lVar10 = lVar12;
                if (dVar14 <= *(double *)(lVar12 + 0x38)) goto LAB_0054e5b5;
LAB_0054e5d3:
                dVar1 = *(double *)(lVar10 + 0x50);
                if ((*(double *)(lVar10 + 0x48) <= dVar1 && dVar1 != *(double *)(lVar10 + 0x48)) &&
                   (dVar14 < dVar1)) goto LAB_0054e5e5;
              }
              else {
                lVar10 = *(longlong *)
                          (lVar12 + 0x20 + (ulonglong)(*(uint *)(lVar10 + 0x154) & 1) * 8);
                dVar14 = *(double *)(lVar10 + 0x40);
                if (*(double *)(lVar10 + 0x38) < dVar14) goto LAB_0054e5d3;
LAB_0054e5b5:
                dVar1 = *(double *)(lVar10 + 0x50);
LAB_0054e5e5:
                dVar14 = dVar1;
              }
              if ((local_78 < dVar14) &&
                 (((local_78 <= dVar13 && (dVar13 < dVar14)) ||
                  ((local_78 < local_98 && (dVar13 <= dVar14)))))) {
                pvVar7 = _pthread_getspecific((pthread_key_t)uVar11);
                if ((pvVar7 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
                  uVar11 = local_40;
                }
                FUN_00362540();
                FUN_0054df20();
                iVar5 = iVar5 + -1;
                local_58 = CONCAT71((int7)(uVar11 >> 8),1);
                param_1 = local_58;
                goto LAB_0054e810;
              }
              lVar9 = lVar9 + 1;
            } while ((int)lVar9 < iVar5);
          }
        }
        local_90 = local_90 + 1;
        param_1 = local_48;
      } while ((longlong)local_68 < (longlong)(iVar5 + -1));
LAB_0054e810:
    } while (((local_58 & 1) != 0) && (1 < iVar5));
    if ((bVar2) && (lVar12 != 0)) {
      FUN_00d50b20();
    }
    if (((char)local_48 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  return;
}


