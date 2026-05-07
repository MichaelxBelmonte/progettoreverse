// Function: FUN_007db7b0
// Address: 007db7b0
// Size: 2271 bytes
// Class: GNData
// === GNData properties ===
//   double          _firstSpectrumTime
//   double          _spectraTimeDistance


void FUN_007db7b0(uint64_t param_1)

{
  double dVar1;
  double dVar2;
  bool bVar3;
  bool bVar4;
  uint64_t uVar5;
  int iVar6;
  char *pcVar7;
  void *pvVar8;
  int64_t lVar9;
  uint64_t uVar10;
  int64_t lVar11;
  int64_t lVar12;
  uint64_t uVar13;
  int64_t this_ptr;
  char cVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double local_98;
  int64_t local_90;
  int64_t local_88;
  char local_80 [8];
  double local_78;
  uint64_t uStack_70;
  uint64_t local_68;
  uint64_t local_58;
  uint64_t local_48;
  uint64_t local_40;
  char local_38 [8];
  
  iVar6 = *(int *)(*(int64_t *)(this_ptr + 0x38) + 0xc);
  if (iVar6 != 1) goto LAB_007db970;
  FUN_00d23310();
  local_38[0] = local_80[0];
  pcVar7 = local_80;
  if (local_80[0] == '\0') {
    pcVar7 = local_38;
  }
  *pcVar7 = '\0';
  if ((local_80[0] != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  pvVar8 = _pthread_getspecific((void*)param_1);
  if ((pvVar8 == (void *)0x0) || (lVar9 = FUN_00e8b990(), lVar9 == 0)) {
    dVar16 = *(double *)(local_88 + 0x38);
    dVar15 = *(double *)(local_88 + 0x40);
    lVar9 = local_88;
    if (dVar15 <= dVar16) goto LAB_007db869;
LAB_007db875:
    if (dVar15 <= dVar16) {
      if (g_023b2ef0 <= *(double *)(lVar9 + 0x50) - *(double *)(lVar9 + 0x48)) goto LAB_007db8c0;
      goto LAB_007db8d8;
    }
    dVar1 = *(double *)(lVar9 + 0x48);
    dVar2 = *(double *)(lVar9 + 0x50);
    dVar17 = dVar2;
    if (dVar2 <= dVar15) {
      dVar17 = dVar15;
    }
    if ((dVar1 < dVar2) && (dVar1 < dVar16)) {
      dVar16 = dVar1;
    }
    if ((double)(~-(uint64_t)(dVar1 < dVar2) & (uint64_t)dVar15 |
                (uint64_t)dVar17 & -(uint64_t)(dVar1 < dVar2)) - dVar16 < g_023b2ef0)
    goto LAB_007db8d8;
LAB_007db8c0:
    bVar4 = false;
    bVar3 = false;
  }
  else {
    lVar9 = *(int64_t *)(local_88 + 0x20 + (uint64_t)(*(uint *)(lVar9 + 0x154) & 1) * 8);
    dVar16 = *(double *)(lVar9 + 0x38);
    dVar15 = *(double *)(lVar9 + 0x40);
    if (dVar16 < dVar15) goto LAB_007db875;
LAB_007db869:
    if (*(double *)(lVar9 + 0x48) <= *(double *)(lVar9 + 0x50) &&
        *(double *)(lVar9 + 0x50) != *(double *)(lVar9 + 0x48)) goto LAB_007db875;
LAB_007db8d8:
    bVar4 = true;
    bVar3 = true;
  }
  if ((local_38[0] != '\0') && (bVar3 = bVar4, local_88 != 0)) {
    FUN_00d50b20();
  }
  if (bVar3) {
    FUN_00d23310();
    pcVar7 = local_80;
    if (local_80[0] == '\0') {
      pcVar7 = local_38;
    }
    local_38[0] = local_80[0];
    *pcVar7 = '\0';
    if ((local_80[0] != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38[0] == '\0') && (local_88 != 0)) {
      FUN_00d50b00();
    }
    FUN_007db680();
    if (local_88 == 0) {
      return;
    }
    FUN_00d50b20();
    return;
  }
LAB_007db970:
  if (1 < iVar6) {
    local_40 = 0;
    local_48 = 0;
    lVar9 = 0;
    bVar3 = false;
    do {
      local_90 = 1;
      local_68 = 0;
      local_58 = 0;
      do {
        local_48 = local_48 & 0xffffffff;
        uVar13 = *(uint64_t *)
                  (*(int64_t *)(*(int64_t *)(this_ptr + 0x38) + 0x10) + local_68 * 8);
        cVar14 = (char)local_48;
        if (local_40 == uVar13) {
          uVar5 = local_40;
          if ((cVar14 == '\0') && (local_40 != 0)) {
            local_48 = CONCAT71((int7)(uVar13 >> 8),1);
            FUN_00d50b00();
          }
        }
        else {
          uVar10 = 0;
          param_1 = uVar13;
          if (uVar13 != 0) {
            uVar10 = FUN_00d50b00();
          }
          local_48 = CONCAT71((int7)((uint64_t)uVar10 >> 8),1);
          uVar5 = uVar13;
          if ((cVar14 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
        }
        local_40 = uVar5;
        pvVar8 = _pthread_getspecific((void*)param_1);
        if ((pvVar8 != (void *)0x0) && (lVar11 = FUN_00e8b990(), lVar11 != 0)) {
          uVar13 = *(uint64_t *)(local_40 + 0x20 + (uint64_t)(*(uint *)(lVar11 + 0x154) & 1) * 8);
          dVar16 = *(double *)(uVar13 + 0x38);
          dVar15 = *(double *)(uVar13 + 0x40);
          param_1 = local_40;
          if (dVar16 < dVar15) goto LAB_007dbab4;
LAB_007dbaa4:
          if (*(double *)(uVar13 + 0x48) <= *(double *)(uVar13 + 0x50) &&
              *(double *)(uVar13 + 0x50) != *(double *)(uVar13 + 0x48)) goto LAB_007dbab4;
LAB_007dbb4e:
          FUN_007db680();
          local_68 = local_68 + 1;
          local_58 = CONCAT71((int7)(param_1 >> 8),1);
          param_1 = local_58;
          iVar6 = iVar6 + -1;
          break;
        }
        dVar16 = *(double *)(local_40 + 0x38);
        dVar15 = *(double *)(local_40 + 0x40);
        uVar13 = local_40;
        if (dVar15 <= dVar16) goto LAB_007dbaa4;
LAB_007dbab4:
        if (dVar15 <= dVar16) {
          dVar16 = *(double *)(uVar13 + 0x50) - *(double *)(uVar13 + 0x48);
        }
        else {
          dVar1 = *(double *)(uVar13 + 0x48);
          dVar2 = *(double *)(uVar13 + 0x50);
          dVar17 = dVar2;
          if (dVar2 <= dVar15) {
            dVar17 = dVar15;
          }
          if ((dVar1 < dVar2) && (dVar1 < dVar16)) {
            dVar16 = dVar1;
          }
          dVar16 = (double)(~-(uint64_t)(dVar1 < dVar2) & (uint64_t)dVar15 |
                           (uint64_t)dVar17 & -(uint64_t)(dVar1 < dVar2)) - dVar16;
        }
        if (dVar16 < g_023b2ef0) goto LAB_007dbb4e;
        pvVar8 = _pthread_getspecific((void*)param_1);
        uVar13 = local_40;
        if ((pvVar8 != (void *)0x0) && (lVar11 = FUN_00e8b990(), lVar11 != 0)) {
          uVar13 = *(uint64_t *)(local_40 + 0x20 + (uint64_t)(*(uint *)(lVar11 + 0x154) & 1) * 8);
          param_1 = local_40;
        }
        local_78 = *(double *)(uVar13 + 0x38);
        dVar16 = *(double *)(uVar13 + 0x48);
        if ((*(double *)(uVar13 + 0x40) <= local_78) ||
           ((dVar16 < *(double *)(uVar13 + 0x50) && (dVar16 < local_78)))) {
          local_78 = dVar16;
        }
        uStack_70 = 0;
        pvVar8 = _pthread_getspecific((void*)param_1);
        if ((pvVar8 == (void *)0x0) || (lVar11 = FUN_00e8b990(), lVar11 == 0)) {
          dVar16 = *(double *)(local_40 + 0x40);
          uVar13 = local_40;
          if (*(double *)(local_40 + 0x38) < dVar16) goto LAB_007dbc64;
LAB_007dbc49:
          dVar15 = *(double *)(uVar13 + 0x50);
LAB_007dbc76:
          dVar16 = dVar15;
        }
        else {
          uVar13 = *(uint64_t *)(local_40 + 0x20 + (uint64_t)(*(uint *)(lVar11 + 0x154) & 1) * 8);
          dVar16 = *(double *)(uVar13 + 0x40);
          if (dVar16 <= *(double *)(uVar13 + 0x38)) goto LAB_007dbc49;
LAB_007dbc64:
          dVar15 = *(double *)(uVar13 + 0x50);
          if ((*(double *)(uVar13 + 0x48) <= dVar15 && dVar15 != *(double *)(uVar13 + 0x48)) &&
             (dVar16 < dVar15)) goto LAB_007dbc76;
        }
        local_98 = dVar16 + g_02391030;
        if (dVar16 <= local_78) {
          local_98 = dVar16;
        }
        uVar13 = local_68 + 1;
        local_68 = uVar13;
        if ((int64_t)uVar13 < (int64_t)iVar6) {
          dVar16 = (double)(~-(uint64_t)(local_78 < dVar16) & (uint64_t)local_78 |
                           (uint64_t)(local_78 + g_023944d8) & -(uint64_t)(local_78 < dVar16));
          lVar11 = local_90;
          if (local_98 <= dVar16) {
            do {
              lVar12 = *(int64_t *)
                        (*(int64_t *)(*(int64_t *)(this_ptr + 0x38) + 0x10) + lVar11 * 8);
              if (lVar9 == lVar12) {
                if ((!bVar3) && (lVar9 != 0)) {
                  bVar3 = true;
                  FUN_00d50b00();
                }
              }
              else {
                if (lVar12 != 0) {
                  FUN_00d50b00();
                }
                if ((bVar3) && (lVar9 != 0)) {
                  FUN_00d50b20();
                  bVar3 = true;
                  lVar9 = lVar12;
                }
                else {
                  bVar3 = true;
                  lVar9 = lVar12;
                }
              }
              pvVar8 = _pthread_getspecific((void*)uVar13);
              if (pvVar8 != (void *)0x0) {
                FUN_00e8b990();
              }
              pvVar8 = _pthread_getspecific((void*)uVar13);
              if (pvVar8 != (void *)0x0) {
                FUN_00e8b990();
              }
              lVar11 = lVar11 + 1;
            } while ((int)lVar11 < iVar6);
          }
          else {
            do {
              lVar12 = *(int64_t *)
                        (*(int64_t *)(*(int64_t *)(this_ptr + 0x38) + 0x10) + lVar11 * 8);
              if (lVar9 == lVar12) {
                if ((!bVar3) && (lVar9 != 0)) {
                  bVar3 = true;
                  FUN_00d50b00();
                }
              }
              else {
                if (lVar12 != 0) {
                  FUN_00d50b00();
                }
                if ((bVar3) && (lVar9 != 0)) {
                  FUN_00d50b20();
                  bVar3 = true;
                  lVar9 = lVar12;
                }
                else {
                  bVar3 = true;
                  lVar9 = lVar12;
                }
              }
              pvVar8 = _pthread_getspecific((void*)uVar13);
              if ((pvVar8 == (void *)0x0) || (lVar12 = FUN_00e8b990(), lVar12 == 0)) {
                local_78 = *(double *)(lVar9 + 0x38);
                dVar15 = *(double *)(lVar9 + 0x48);
                lVar12 = lVar9;
                if (local_78 < *(double *)(lVar9 + 0x40)) goto LAB_007dbde4;
LAB_007dbdfd:
                local_78 = dVar15;
              }
              else {
                lVar12 = *(int64_t *)
                          (lVar9 + 0x20 + (uint64_t)(*(uint *)(lVar12 + 0x154) & 1) * 8);
                local_78 = *(double *)(lVar12 + 0x38);
                dVar15 = *(double *)(lVar12 + 0x48);
                if (*(double *)(lVar12 + 0x40) <= local_78) goto LAB_007dbdfd;
LAB_007dbde4:
                if ((dVar15 < *(double *)(lVar12 + 0x50)) && (dVar15 < local_78)) goto LAB_007dbdfd;
              }
              pvVar8 = _pthread_getspecific((void*)uVar13);
              if ((pvVar8 == (void *)0x0) || (lVar12 = FUN_00e8b990(), lVar12 == 0)) {
                dVar15 = *(double *)(lVar9 + 0x40);
                lVar12 = lVar9;
                if (*(double *)(lVar9 + 0x38) < dVar15) goto LAB_007dbe63;
LAB_007dbe45:
                dVar1 = *(double *)(lVar12 + 0x50);
LAB_007dbe75:
                dVar15 = dVar1;
              }
              else {
                lVar12 = *(int64_t *)
                          (lVar9 + 0x20 + (uint64_t)(*(uint *)(lVar12 + 0x154) & 1) * 8);
                dVar15 = *(double *)(lVar12 + 0x40);
                if (dVar15 <= *(double *)(lVar12 + 0x38)) goto LAB_007dbe45;
LAB_007dbe63:
                dVar1 = *(double *)(lVar12 + 0x50);
                if ((*(double *)(lVar12 + 0x48) <= dVar1 && dVar1 != *(double *)(lVar12 + 0x48)) &&
                   (dVar15 < dVar1)) goto LAB_007dbe75;
              }
              if ((local_78 < dVar15) &&
                 (((local_78 <= dVar16 && (dVar16 < dVar15)) ||
                  ((local_78 < local_98 && (dVar16 <= dVar15)))))) {
                pvVar8 = _pthread_getspecific((void*)uVar13);
                if ((pvVar8 != (void *)0x0) && (lVar11 = FUN_00e8b990(), lVar11 != 0)) {
                  uVar13 = local_40;
                }
                FUN_007db2b0();
                FUN_007db680();
                local_58 = CONCAT71((int7)(uVar13 >> 8),1);
                param_1 = local_58;
                iVar6 = iVar6 + -1;
                goto LAB_007dc080;
              }
              lVar11 = lVar11 + 1;
            } while ((int)lVar11 < iVar6);
          }
        }
        local_90 = local_90 + 1;
        param_1 = local_48;
      } while ((int64_t)local_68 < (int64_t)(iVar6 + -1));
LAB_007dc080:
    } while (((local_58 & 1) != 0) && (1 < iVar6));
    if ((bVar3) && (lVar9 != 0)) {
      FUN_00d50b20();
    }
    if (((char)local_48 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  return;
}

