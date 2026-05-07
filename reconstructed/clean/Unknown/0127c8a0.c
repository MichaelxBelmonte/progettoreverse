// Function: FUN_0127c8a0
// Address: 0127c8a0
// Size: 5981 bytes
// Class: Unknown

void FUN_0127c8a0(double param_1,uint64_t param_2,uint64_t *param_3)

{
  double dVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  uint64_t uVar6;
  code *pcVar7;
  uint64_t *puVar8;
  char cVar9;
  void*puVar10;
  void*puVar11;
  void*puVar12;
  int64_t lVar13;
  void *pvVar14;
  int64_t lVar15;
  uint64_t uVar16;
  void* pVar17;
  uint64_t in_RCX;
  int64_t lVar18;
  uint64_t uVar19;
  int iVar20;
  int64_t *this_ptr;
  void* pVar21;
  int iVar22;
  uint64_t *puVar23;
  int64_t lVar24;
  uint64_t extraout_XMM0_Qa;
  uint64_t extraout_XMM0_Qa_00;
  double dVar25;
  double dVar26;
  uint64_t uVar27;
  double dVar28;
  uint64_t local_118;
  uint64_t local_110;
  uint64_t local_f8;
  double local_f0;
  uint64_t local_e8;
  char local_e0;
  uint32_t local_d4;
  double local_d0;
  double local_c8;
  uint64_t *local_c0;
  double local_b8;
  uint64_t local_b0;
  char local_a8;
  uint64_t local_a0;
  uint64_t local_98;
  int local_90;
  void*local_88;
  double local_68;
  double local_58;
  double local_50;
  double local_40;
  int64_t local_38;
  
  local_f8 = in_RCX;
  local_c8 = param_1;
  local_d0 = (double)FUN_00e7c860();
  local_c0 = param_3;
  if (*param_3 == 0) {
    local_b8 = g_0238fee8;
    local_d4 = (uint32_t)CONCAT71((int7)((uint64_t)&local_f8 >> 8),1);
    local_88 = (void*)0x0;
    puVar11 = (void*)0x0;
    puVar10 = (void*)0x0;
    goto LAB_0127d146;
  }
  puVar10 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar10 = &g_025683c0;
  pcVar7 = g_025683d8;
  (*g_025683d8)();
  FUN_00c92170();
  FUN_00c92160();
  puVar11 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar11 = &g_025683c0;
  (*pcVar7)();
  FUN_00c92170();
  FUN_00c92160();
  puVar12 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar12 = &g_025683c0;
  (*pcVar7)();
  FUN_00c92170();
  FUN_00c92160();
  puVar8 = local_c0;
  local_88 = puVar12;
  FUN_004f2260(0);
  uVar19 = local_b0;
  uVar16 = *puVar8;
  if (uVar16 == local_b0) {
    if (((char)puVar8[1] == '\0') && (local_b0 != 0)) {
      puVar23 = local_c0 + 1;
      if (local_a8 != '\0') goto LAB_0127cb3b;
      FUN_00d50b00();
      goto LAB_0127cb74;
    }
LAB_0127cb78:
    if ((local_a8 != '\0') && (local_b0 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    puVar23 = puVar8 + 1;
    uVar6 = puVar8[1];
    if (local_a8 == '\0') {
      if (local_b0 != 0) {
        FUN_00d50b00();
      }
      *local_c0 = uVar19;
      if (((char)uVar6 != '\0') && (uVar16 != 0)) {
        FUN_00d50b20();
      }
LAB_0127cb74:
      *(void*)puVar23 = 1;
      goto LAB_0127cb78;
    }
    *puVar8 = local_b0;
    if (((char)uVar6 != '\0') && (uVar16 != 0)) {
      FUN_00d50b20();
    }
LAB_0127cb3b:
    *(void*)puVar23 = 1;
  }
  FUN_00c8e710();
  uVar16 = local_b0;
  if ((((local_a8 == '\0') && (local_b0 != 0)) && (FUN_00d50b00(), local_a8 != '\0')) &&
     (local_b0 != 0)) {
    FUN_00d50b20();
  }
  FUN_00c92170();
  FUN_00c92160();
  local_b8 = g_0238fee8;
  if (*local_c0 != 0) {
    local_a8 = '\0';
    local_b0 = 0;
    local_98 = 0xffffffff;
    local_90 = 0;
    local_58 = g_023908c8;
    local_98._4_4_ = 0;
    local_a0 = *local_c0;
    while( true ) {
      if (local_98._4_4_ != 0) {
        if (local_98._4_4_ < 1) {
          iVar20 = -local_98._4_4_;
        }
        else {
          iVar20 = (int)local_98 - local_98._4_4_;
          local_98 = CONCAT44(local_98._4_4_,iVar20);
          FUN_00d23690();
          local_90 = local_90 + local_98._4_4_;
          iVar20 = 0;
        }
        local_98 = CONCAT44(iVar20,(int)local_98);
      }
      lVar13 = (int64_t)(int)local_98;
      iVar20 = (int)local_98 + 1;
      local_98 = CONCAT44(local_98._4_4_,iVar20);
      if (*(int *)(local_a0 + 0xc) <= iVar20) break;
      lVar18 = *(int64_t *)(local_a0 + 0x10);
      uVar19 = *(uint64_t *)(lVar18 + 8 + lVar13 * 8);
      local_b0 = uVar19;
      pvVar14 = _pthread_getspecific((void*)lVar18);
      uVar6 = local_b0;
      pVar17 = (void*)lVar18;
      if ((pvVar14 != (void *)0x0) && (lVar13 = FUN_00e8b990(), uVar19 = uVar6, lVar13 != 0)) {
        uVar19 = *(uint64_t *)(uVar6 + 0x20 + (uint64_t)(*(uint *)(lVar13 + 0x154) & 1) * 8);
      }
      if (*(int64_t *)(uVar19 + 200) != 0) {
        pvVar14 = _pthread_getspecific(pVar17);
        if (pvVar14 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0152ebe0();
        if (local_e0 == '\0') {
          if (local_e8 != 0) {
            FUN_00d50b00();
            if ((local_e0 != '\0') && (local_e8 != 0)) {
              FUN_00d50b20();
            }
            goto LAB_0127cdf0;
          }
        }
        else if (local_e8 != 0) {
LAB_0127cdf0:
          pvVar14 = _pthread_getspecific(pVar17);
          if (pvVar14 != (void *)0x0) {
            FUN_00e8b990();
          }
          local_e8 = FUN_01507970();
          pVar17 = *(void* *)(uVar16 + 0x18);
          pVar21 = pVar17 + 7;
          if (-1 < (int)pVar17) {
            pVar21 = pVar17;
          }
          uVar27 = extraout_XMM0_Qa;
          if (7 < (int)pVar17) {
            iVar22 = (int)pVar21 >> 3;
            uVar19 = local_e8 >> 0x20;
            iVar20 = *(int *)(*(int64_t *)(uVar16 + 0x10) + 4);
            lVar13 = *(int64_t *)(uVar16 + 0x10);
            while( true ) {
              iVar22 = iVar22 + -1;
              if (((iVar20 != 0) && ((int)uVar19 != 0)) &&
                 (cVar9 = FUN_00e7c000(), uVar27 = extraout_XMM0_Qa_00, cVar9 != '\0'))
              goto LAB_0127ccb0;
              if (iVar22 == 0) break;
              uVar19 = local_e8 >> 0x20;
              iVar20 = *(int *)(lVar13 + 0xc);
              lVar13 = lVar13 + 8;
            }
            pVar17 = *(void* *)(uVar16 + 0x18);
          }
          FUN_00c8e340(uVar27,1);
          uVar19 = local_b0;
          lVar13 = (int64_t)(int)pVar17;
          *(uint64_t *)(*(int64_t *)(uVar16 + 0x10) + lVar13) = local_e8;
          pvVar14 = _pthread_getspecific(pVar17);
          uVar6 = local_b0;
          pVar17 = (void*)lVar13;
          if ((pvVar14 != (void *)0x0) && (lVar13 = FUN_00e8b990(), uVar19 = uVar6, lVar13 != 0)) {
            uVar19 = *(uint64_t *)(uVar6 + 0x20 + (uint64_t)(*(uint *)(lVar13 + 0x154) & 1) * 8);
          }
          dVar25 = *(double *)(uVar19 + 0xe8) + *(double *)(uVar19 + 0xb8);
          pvVar14 = _pthread_getspecific(pVar17);
          if (pvVar14 != (void *)0x0) {
            FUN_00e8b990();
          }
          dVar26 = (double)FUN_016c25f0(dVar25);
          pvVar14 = _pthread_getspecific(pVar17);
          if (pvVar14 != (void *)0x0) {
            FUN_00e8b990();
          }
          uVar27 = FUN_016c26c0(dVar26 * local_c8 + local_d0);
          iVar20 = *(int *)(puVar10 + 3);
          FUN_00c8e340(uVar27,1);
          *(uint64_t *)(puVar10[2] + (int64_t)iVar20) = local_e8;
          iVar20 = *(int *)(puVar11 + 3);
          uVar19 = local_e8;
          FUN_00c8e340(local_e8,1);
          pVar17 = (void*)uVar19;
          *(double *)(puVar11[2] + (int64_t)iVar20) = dVar25;
          iVar20 = *(int *)(local_88 + 3);
          FUN_00c8e340(dVar25,1);
          *(void*)(local_88[2] + (int64_t)iVar20) = uVar27;
          if (NAN(local_58)) {
            pvVar14 = _pthread_getspecific(pVar17);
            if (pvVar14 != (void *)0x0) {
              FUN_00e8b990();
            }
            dVar26 = (double)FUN_016c9480(uVar27);
            pvVar14 = _pthread_getspecific(pVar17);
            if (pvVar14 != (void *)0x0) {
              FUN_00e8b990();
            }
            dVar25 = (double)FUN_016c9480(dVar25);
            local_58 = (dVar26 / dVar25) / local_c8;
            local_b8 = g_0238fee8;
            if ((g_023b1e80 <= local_58) && (local_b8 = local_58, local_58 <= g_024110e8)) {
              local_b8 = local_58 * g_0240cff8 + g_024110e8 + g_02411070;
            }
          }
LAB_0127ccb0:
          FUN_00d50b20();
        }
      }
    }
    FUN_001159b0();
  }
  if (uVar16 != 0) {
    FUN_00d50b20();
  }
  local_d4 = 0;
LAB_0127d146:
  lVar13 = *this_ptr;
  if (*(int *)(lVar13 + 0xc) < 1) {
    bVar3 = false;
    local_38 = 0;
    bVar5 = false;
    lVar18 = 0;
  }
  else {
    lVar24 = 0;
    local_118 = 0;
    local_110 = 0;
    lVar18 = 0;
    bVar5 = false;
    lVar15 = 0;
    local_38 = 0;
    bVar3 = false;
    do {
      pVar17 = (void*)lVar15;
      lVar13 = *(int64_t *)(*(int64_t *)(lVar13 + 0x10) + lVar24 * 8);
      if (lVar18 == lVar13) {
        if ((!bVar5) && (lVar18 != 0)) {
          bVar5 = true;
          FUN_00d50b00();
        }
      }
      else {
        if (lVar13 != 0) {
          FUN_00d50b00();
        }
        if ((bVar5) && (lVar18 != 0)) {
          FUN_00d50b20();
          bVar5 = true;
          lVar18 = lVar13;
        }
        else {
          bVar5 = true;
          lVar18 = lVar13;
        }
      }
      pvVar14 = _pthread_getspecific(pVar17);
      if ((pvVar14 == (void *)0x0) || (lVar13 = FUN_00e8b990(), lVar13 == 0)) {
        lVar13 = *(int64_t *)(lVar18 + 200);
      }
      else {
        lVar13 = *(int64_t *)
                  (*(int64_t *)(lVar18 + 0x20 + (uint64_t)(*(uint *)(lVar13 + 0x154) & 1) * 8) +
                  200);
      }
      if (lVar13 != 0) {
        FUN_00d50b00();
      }
      if (lVar13 == local_38) {
        pVar17 = 1;
        bVar4 = bVar3;
        if (lVar13 != 0) {
          bVar4 = true;
        }
        lVar15 = local_38;
        if ((bVar3) && (bVar4 = bVar3, lVar13 != 0)) {
          pVar17 = 1;
          FUN_00d50b20();
        }
      }
      else {
        bVar4 = true;
        lVar15 = lVar13;
        if ((bVar3) && (local_38 != 0)) {
          FUN_00d50b20();
        }
      }
      bVar3 = bVar4;
      local_38 = lVar15;
      pvVar14 = _pthread_getspecific(pVar17);
      if (pvVar14 != (void *)0x0) {
        FUN_00e8b990();
      }
      pvVar14 = _pthread_getspecific(pVar17);
      lVar13 = lVar18;
      if ((pvVar14 != (void *)0x0) && (lVar15 = FUN_00e8b990(), lVar15 != 0)) {
        lVar13 = *(int64_t *)(lVar18 + 0x20 + (uint64_t)(*(uint *)(lVar15 + 0x154) & 1) * 8);
      }
      local_f0 = *(double *)(lVar13 + 0xe8) + *(double *)(lVar13 + 0xf0);
      pvVar14 = _pthread_getspecific(pVar17);
      lVar13 = lVar18;
      if ((pvVar14 != (void *)0x0) && (lVar15 = FUN_00e8b990(), lVar15 != 0)) {
        lVar13 = *(int64_t *)(lVar18 + 0x20 + (uint64_t)(*(uint *)(lVar15 + 0x154) & 1) * 8);
      }
      dVar25 = *(double *)(lVar13 + 0xe8) + *(double *)(lVar13 + 0xb8);
      pvVar14 = _pthread_getspecific(pVar17);
      lVar13 = lVar18;
      if ((pvVar14 != (void *)0x0) && (lVar15 = FUN_00e8b990(), lVar15 != 0)) {
        lVar13 = *(int64_t *)(lVar18 + 0x20 + (uint64_t)(*(uint *)(lVar15 + 0x154) & 1) * 8);
      }
      dVar26 = *(double *)(lVar13 + 0xe8);
      dVar1 = *(double *)(lVar13 + 0xc0);
      if (local_38 != 0) {
        pvVar14 = _pthread_getspecific(pVar17);
        if ((pvVar14 != (void *)0x0) && (lVar13 = FUN_00e8b990(), lVar13 != 0)) {
          pVar17 = (void*)local_38;
        }
        local_118 = FUN_0152ea80();
      }
      pvVar14 = _pthread_getspecific(pVar17);
      if (pvVar14 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar28 = (double)FUN_016c25f0(dVar25);
      pvVar14 = _pthread_getspecific(pVar17);
      if (pvVar14 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_50 = (double)FUN_016c26c0(dVar28 * local_c8 + local_d0);
      if (*local_c0 != 0) {
        pvVar14 = _pthread_getspecific(pVar17);
        if ((pvVar14 == (void *)0x0) || (lVar13 = FUN_00e8b990(), lVar13 == 0)) {
          lVar13 = *(int64_t *)(lVar18 + 200);
        }
        else {
          lVar13 = *(int64_t *)
                    (*(int64_t *)(lVar18 + 0x20 + (uint64_t)(*(uint *)(lVar13 + 0x154) & 1) * 8) +
                    200);
        }
        if (lVar13 != 0) {
          pvVar14 = _pthread_getspecific(pVar17);
          if (pvVar14 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0152ebe0();
          if (local_a8 == '\0') {
            if (local_b0 != 0) {
              FUN_00d50b00();
              if ((local_a8 != '\0') && (local_b0 != 0)) {
                FUN_00d50b20();
              }
              goto LAB_0127d60f;
            }
          }
          else if (local_b0 != 0) {
LAB_0127d60f:
            pvVar14 = _pthread_getspecific(pVar17);
            if (pvVar14 != (void *)0x0) {
              FUN_00e8b990();
            }
            local_b0 = FUN_01507970();
            uVar2 = *(uint *)(puVar10 + 3);
            puVar12 = puVar10;
            if (7 < (int)uVar2) {
              uVar16 = local_b0 >> 0x20;
              lVar13 = 0;
              iVar20 = *(int *)(puVar10[2] + 4);
              while (((puVar12 = puVar10, iVar20 == 0 || ((int)uVar16 == 0)) ||
                     (cVar9 = FUN_00e7c000(), cVar9 == '\0'))) {
                if ((uint64_t)(uVar2 & 0xfffffff8) - 8 == lVar13) goto LAB_0127d709;
                uVar16 = local_b0 >> 0x20;
                lVar13 = lVar13 + 8;
                iVar20 = *(int *)(puVar10[2] + 4 + lVar13);
              }
              local_50 = (dVar25 - *(double *)(puVar11[2] + lVar13)) / local_b8 +
                         *(double *)(local_88[2] + lVar13);
            }
LAB_0127d709:
            pVar17 = (void*)puVar12;
            FUN_00d50b20();
          }
        }
      }
      pvVar14 = _pthread_getspecific(pVar17);
      if (pvVar14 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar25 = (double)FUN_016c25f0(dVar26 + dVar1);
      pvVar14 = _pthread_getspecific(pVar17);
      if (pvVar14 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_68 = (double)FUN_016c26c0(dVar25 * local_c8 + local_d0);
      if (local_38 != 0) {
        pvVar14 = _pthread_getspecific(pVar17);
        if (pvVar14 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar25 = (double)FUN_016c25f0(local_118);
        pvVar14 = _pthread_getspecific(pVar17);
        if (pvVar14 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_110 = FUN_016c26c0(dVar25 * local_c8 + local_d0);
      }
      pvVar14 = _pthread_getspecific(pVar17);
      lVar13 = lVar18;
      if ((pvVar14 != (void *)0x0) && (lVar15 = FUN_00e8b990(), lVar15 != 0)) {
        lVar13 = *(int64_t *)(lVar18 + 0x20 + (uint64_t)(*(uint *)(lVar15 + 0x154) & 1) * 8);
      }
      local_50 = local_50 - *(double *)(lVar13 + 0xb8);
      pvVar14 = _pthread_getspecific(pVar17);
      if (pvVar14 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar25 = (double)FUN_016c25f0(local_f0);
      pvVar14 = _pthread_getspecific(pVar17);
      if (pvVar14 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_40 = (double)FUN_016c26c0(dVar25 * local_c8 + local_d0);
      pvVar14 = _pthread_getspecific(pVar17);
      if (pvVar14 != (void *)0x0) {
        FUN_00e8b990();
      }
      if (local_40 - local_50 < g_0241b6a8) {
        pvVar14 = _pthread_getspecific(pVar17);
        if (pvVar14 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_f0 = local_50 + g_0241b6a8;
        pvVar14 = _pthread_getspecific(pVar17);
        lVar13 = lVar18;
        if ((pvVar14 != (void *)0x0) && (lVar15 = FUN_00e8b990(), lVar15 != 0)) {
          lVar13 = *(int64_t *)(lVar18 + 0x20 + (uint64_t)(*(uint *)(lVar15 + 0x154) & 1) * 8);
        }
        dVar25 = local_f0 - local_40;
        local_40 = local_40 + dVar25;
        local_68 = local_68 + dVar25;
        if (*(int64_t *)(lVar13 + 0xa0) != 0) {
          FUN_00d50b00();
          FUN_00d50b20();
          pvVar14 = _pthread_getspecific(pVar17);
          if ((pvVar14 == (void *)0x0) || (lVar13 = FUN_00e8b990(), lVar13 == 0)) {
            lVar13 = *(int64_t *)(lVar18 + 0xa0);
          }
          else {
            lVar13 = *(int64_t *)
                      (*(int64_t *)(lVar18 + 0x20 + (uint64_t)(*(uint *)(lVar13 + 0x154) & 1) * 8)
                      + 0xa0);
          }
          if (lVar13 != 0) {
            FUN_00d50b00();
          }
          pvVar14 = _pthread_getspecific(pVar17);
          if (pvVar14 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012dffb0();
          if (lVar13 != 0) {
            FUN_00d50b20();
          }
        }
      }
      pvVar14 = _pthread_getspecific(pVar17);
      if ((pvVar14 == (void *)0x0) || (lVar13 = FUN_00e8b990(), lVar13 == 0)) {
        lVar13 = lVar18;
        if ((*(double *)(lVar18 + 0xe8) != local_50) ||
           (NAN(*(double *)(lVar18 + 0xe8)) || NAN(local_50))) goto LAB_0127db84;
      }
      else {
        lVar13 = *(int64_t *)(lVar18 + 0x20 + (uint64_t)(*(uint *)(lVar13 + 0x154) & 1) * 8);
        if ((*(double *)(lVar13 + 0xe8) != local_50) ||
           (NAN(*(double *)(lVar13 + 0xe8)) || NAN(local_50))) {
LAB_0127db84:
          FUN_00d64850();
          *(double *)(lVar13 + 0xe8) = local_50;
          FUN_00d64910();
        }
      }
      pvVar14 = _pthread_getspecific(pVar17);
      lVar13 = lVar18;
      if ((pvVar14 != (void *)0x0) && (lVar15 = FUN_00e8b990(), lVar15 != 0)) {
        lVar13 = *(int64_t *)(lVar18 + 0x20 + (uint64_t)(*(uint *)(lVar15 + 0x154) & 1) * 8);
      }
      local_40 = local_40 - local_50;
      if ((*(double *)(lVar13 + 0xf0) != local_40) ||
         (NAN(*(double *)(lVar13 + 0xf0)) || NAN(local_40))) {
        FUN_00d64850();
        *(double *)(lVar13 + 0xf0) = local_40;
        FUN_00d64910();
      }
      pvVar14 = _pthread_getspecific(pVar17);
      lVar13 = lVar18;
      if ((pvVar14 != (void *)0x0) && (lVar15 = FUN_00e8b990(), lVar15 != 0)) {
        lVar13 = *(int64_t *)(lVar18 + 0x20 + (uint64_t)(*(uint *)(lVar15 + 0x154) & 1) * 8);
      }
      local_68 = local_68 - local_50;
      if ((*(double *)(lVar13 + 0xc0) != local_68) ||
         (NAN(*(double *)(lVar13 + 0xc0)) || NAN(local_68))) {
        FUN_00d64850();
        *(double *)(lVar13 + 0xc0) = local_68;
        FUN_00d64910();
      }
      pvVar14 = _pthread_getspecific(pVar17);
      if (pvVar14 != (void *)0x0) {
        FUN_00e8b990();
      }
      if (local_38 != 0) {
        pvVar14 = _pthread_getspecific(pVar17);
        if ((pvVar14 != (void *)0x0) && (lVar13 = FUN_00e8b990(), lVar13 != 0)) {
          pVar17 = (void*)local_38;
        }
        FUN_0152e950(local_110);
        if ((local_d0 != g_02390448) || (NAN(local_d0) || NAN(g_02390448))) {
          pvVar14 = _pthread_getspecific(pVar17);
          if ((pvVar14 == (void *)0x0) || (lVar13 = FUN_00e8b990(), lVar13 == 0)) {
            lVar13 = *(int64_t *)(lVar18 + 200);
          }
          else {
            lVar13 = *(int64_t *)
                      (*(int64_t *)(lVar18 + 0x20 + (uint64_t)(*(uint *)(lVar13 + 0x154) & 1) * 8)
                      + 200);
          }
          if (lVar13 != 0) {
            FUN_00d50b00();
          }
          pvVar14 = _pthread_getspecific(pVar17);
          if (pvVar14 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0152ebe0();
          uVar16 = local_b0;
          if (local_a8 == '\0') {
            if (((local_b0 != 0) && (FUN_00d50b00(), local_a8 != '\0')) && (local_b0 != 0)) {
              FUN_00d50b20();
            }
          }
          else {
            local_a8 = '\0';
          }
          if (lVar13 != 0) {
            FUN_00d50b20();
          }
          pvVar14 = _pthread_getspecific(pVar17);
          if (pvVar14 != (void *)0x0) {
            FUN_00e8b990();
          }
          uVar19 = FUN_01507970();
          if (uVar19 >> 0x20 != 0) {
            pvVar14 = _pthread_getspecific(pVar17);
            if (pvVar14 != (void *)0x0) {
              FUN_00e8b990();
            }
            uVar19 = FUN_01508610();
            if (uVar19 >> 0x20 != 0) {
              pvVar14 = _pthread_getspecific(pVar17);
              if (pvVar14 != (void *)0x0) {
                FUN_00e8b990();
              }
              pvVar14 = _pthread_getspecific(pVar17);
              if (pvVar14 != (void *)0x0) {
                FUN_00e8b990();
              }
              local_b0 = FUN_01507970();
              FUN_00e7b820();
              FUN_015084d0();
              pvVar14 = _pthread_getspecific(pVar17);
              if (pvVar14 != (void *)0x0) {
                FUN_00e8b990();
              }
              pvVar14 = _pthread_getspecific(pVar17);
              if (pvVar14 != (void *)0x0) {
                FUN_00e8b990();
              }
              local_b0 = FUN_01508610();
              FUN_00e7b820();
              FUN_015085a0();
            }
          }
          if (uVar16 != 0) {
            FUN_00d50b20();
          }
        }
      }
      lVar24 = lVar24 + 1;
      lVar13 = *this_ptr;
      lVar15 = (int64_t)*(int *)(lVar13 + 0xc);
    } while (lVar24 < lVar15);
  }
  cVar9 = (char)local_d4;
  if (local_88 != (void*)0x0 && cVar9 == '\0') {
    FUN_00d50b20();
  }
  if (puVar11 != (void*)0x0 && cVar9 == '\0') {
    FUN_00d50b20();
  }
  if (cVar9 == '\0' && puVar10 != (void*)0x0) {
    FUN_00d50b20();
  }
  if ((bVar3) && (local_38 != 0)) {
    FUN_00d50b20();
  }
  if ((bVar5) && (lVar18 != 0)) {
    FUN_00d50b20();
  }
  return;
}

