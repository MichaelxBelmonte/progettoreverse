// Function: FUN_0127c8a0
// Address: 0127c8a0
// Size: 5981 bytes
// Class: Unknown


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0127c8a0(double param_1,undefined8 param_2,ulonglong *param_3)

{
  double dVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  ulonglong uVar6;
  code *pcVar7;
  ulonglong *puVar8;
  char cVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  longlong lVar13;
  void *pvVar14;
  longlong lVar15;
  ulonglong uVar16;
  pthread_key_t pVar17;
  undefined8 in_RCX;
  longlong lVar18;
  ulonglong uVar19;
  int iVar20;
  longlong *unaff_RDI;
  pthread_key_t pVar21;
  int iVar22;
  ulonglong *puVar23;
  longlong lVar24;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  double dVar25;
  double dVar26;
  undefined8 uVar27;
  double dVar28;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_f8;
  double local_f0;
  ulonglong local_e8;
  char local_e0;
  undefined4 local_d4;
  double local_d0;
  double local_c8;
  ulonglong *local_c0;
  double local_b8;
  ulonglong local_b0;
  char local_a8;
  ulonglong local_a0;
  undefined8 local_98;
  int local_90;
  undefined8 *local_88;
  double local_68;
  double local_58;
  double local_50;
  double local_40;
  longlong local_38;
  
  local_f8 = in_RCX;
  local_c8 = param_1;
  local_d0 = (double)FUN_00e7c860();
  local_c0 = param_3;
  if (*param_3 == 0) {
    local_b8 = DAT_0238fee8;
    local_d4 = (undefined4)CONCAT71((int7)((ulonglong)&local_f8 >> 8),1);
    local_88 = (undefined8 *)0x0;
    puVar11 = (undefined8 *)0x0;
    puVar10 = (undefined8 *)0x0;
    goto LAB_0127d146;
  }
  puVar10 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar10 = &DAT_025683c0;
  pcVar7 = DAT_025683d8;
  (*DAT_025683d8)();
  FUN_00c92170();
  FUN_00c92160();
  puVar11 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar11 = &DAT_025683c0;
  (*pcVar7)();
  FUN_00c92170();
  FUN_00c92160();
  puVar12 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar12 = &DAT_025683c0;
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
      *(undefined1 *)puVar23 = 1;
      goto LAB_0127cb78;
    }
    *puVar8 = local_b0;
    if (((char)uVar6 != '\0') && (uVar16 != 0)) {
      FUN_00d50b20();
    }
LAB_0127cb3b:
    *(undefined1 *)puVar23 = 1;
  }
  FUN_00c8e710();
  uVar16 = local_b0;
  if ((((local_a8 == '\0') && (local_b0 != 0)) && (FUN_00d50b00(), local_a8 != '\0')) &&
     (local_b0 != 0)) {
    FUN_00d50b20();
  }
  FUN_00c92170();
  FUN_00c92160();
  local_b8 = DAT_0238fee8;
  if (*local_c0 != 0) {
    local_a8 = '\0';
    local_b0 = 0;
    local_98 = 0xffffffff;
    local_90 = 0;
    local_58 = DAT_023908c8;
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
      lVar13 = (longlong)(int)local_98;
      iVar20 = (int)local_98 + 1;
      local_98 = CONCAT44(local_98._4_4_,iVar20);
      if (*(int *)(local_a0 + 0xc) <= iVar20) break;
      lVar18 = *(longlong *)(local_a0 + 0x10);
      uVar19 = *(ulonglong *)(lVar18 + 8 + lVar13 * 8);
      local_b0 = uVar19;
      pvVar14 = _pthread_getspecific((pthread_key_t)lVar18);
      uVar6 = local_b0;
      pVar17 = (pthread_key_t)lVar18;
      if ((pvVar14 != (void *)0x0) && (lVar13 = FUN_00e8b990(), uVar19 = uVar6, lVar13 != 0)) {
        uVar19 = *(ulonglong *)(uVar6 + 0x20 + (ulonglong)(*(uint *)(lVar13 + 0x154) & 1) * 8);
      }
      if (*(longlong *)(uVar19 + 200) != 0) {
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
          pVar17 = *(pthread_key_t *)(uVar16 + 0x18);
          pVar21 = pVar17 + 7;
          if (-1 < (int)pVar17) {
            pVar21 = pVar17;
          }
          uVar27 = extraout_XMM0_Qa;
          if (7 < (int)pVar17) {
            iVar22 = (int)pVar21 >> 3;
            uVar19 = local_e8 >> 0x20;
            iVar20 = *(int *)(*(longlong *)(uVar16 + 0x10) + 4);
            lVar13 = *(longlong *)(uVar16 + 0x10);
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
            pVar17 = *(pthread_key_t *)(uVar16 + 0x18);
          }
          FUN_00c8e340(uVar27,1);
          uVar19 = local_b0;
          lVar13 = (longlong)(int)pVar17;
          *(ulonglong *)(*(longlong *)(uVar16 + 0x10) + lVar13) = local_e8;
          pvVar14 = _pthread_getspecific(pVar17);
          uVar6 = local_b0;
          pVar17 = (pthread_key_t)lVar13;
          if ((pvVar14 != (void *)0x0) && (lVar13 = FUN_00e8b990(), uVar19 = uVar6, lVar13 != 0)) {
            uVar19 = *(ulonglong *)(uVar6 + 0x20 + (ulonglong)(*(uint *)(lVar13 + 0x154) & 1) * 8);
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
          *(ulonglong *)(puVar10[2] + (longlong)iVar20) = local_e8;
          iVar20 = *(int *)(puVar11 + 3);
          uVar19 = local_e8;
          FUN_00c8e340(local_e8,1);
          pVar17 = (pthread_key_t)uVar19;
          *(double *)(puVar11[2] + (longlong)iVar20) = dVar25;
          iVar20 = *(int *)(local_88 + 3);
          FUN_00c8e340(dVar25,1);
          *(undefined8 *)(local_88[2] + (longlong)iVar20) = uVar27;
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
            local_b8 = DAT_0238fee8;
            if ((DAT_023b1e80 <= local_58) && (local_b8 = local_58, local_58 <= DAT_024110e8)) {
              local_b8 = local_58 * _DAT_0240cff8 + DAT_024110e8 + DAT_02411070;
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
  lVar13 = *unaff_RDI;
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
      pVar17 = (pthread_key_t)lVar15;
      lVar13 = *(longlong *)(*(longlong *)(lVar13 + 0x10) + lVar24 * 8);
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
        lVar13 = *(longlong *)(lVar18 + 200);
      }
      else {
        lVar13 = *(longlong *)
                  (*(longlong *)(lVar18 + 0x20 + (ulonglong)(*(uint *)(lVar13 + 0x154) & 1) * 8) +
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
        lVar13 = *(longlong *)(lVar18 + 0x20 + (ulonglong)(*(uint *)(lVar15 + 0x154) & 1) * 8);
      }
      local_f0 = *(double *)(lVar13 + 0xe8) + *(double *)(lVar13 + 0xf0);
      pvVar14 = _pthread_getspecific(pVar17);
      lVar13 = lVar18;
      if ((pvVar14 != (void *)0x0) && (lVar15 = FUN_00e8b990(), lVar15 != 0)) {
        lVar13 = *(longlong *)(lVar18 + 0x20 + (ulonglong)(*(uint *)(lVar15 + 0x154) & 1) * 8);
      }
      dVar25 = *(double *)(lVar13 + 0xe8) + *(double *)(lVar13 + 0xb8);
      pvVar14 = _pthread_getspecific(pVar17);
      lVar13 = lVar18;
      if ((pvVar14 != (void *)0x0) && (lVar15 = FUN_00e8b990(), lVar15 != 0)) {
        lVar13 = *(longlong *)(lVar18 + 0x20 + (ulonglong)(*(uint *)(lVar15 + 0x154) & 1) * 8);
      }
      dVar26 = *(double *)(lVar13 + 0xe8);
      dVar1 = *(double *)(lVar13 + 0xc0);
      if (local_38 != 0) {
        pvVar14 = _pthread_getspecific(pVar17);
        if ((pvVar14 != (void *)0x0) && (lVar13 = FUN_00e8b990(), lVar13 != 0)) {
          pVar17 = (pthread_key_t)local_38;
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
          lVar13 = *(longlong *)(lVar18 + 200);
        }
        else {
          lVar13 = *(longlong *)
                    (*(longlong *)(lVar18 + 0x20 + (ulonglong)(*(uint *)(lVar13 + 0x154) & 1) * 8) +
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
                if ((ulonglong)(uVar2 & 0xfffffff8) - 8 == lVar13) goto LAB_0127d709;
                uVar16 = local_b0 >> 0x20;
                lVar13 = lVar13 + 8;
                iVar20 = *(int *)(puVar10[2] + 4 + lVar13);
              }
              local_50 = (dVar25 - *(double *)(puVar11[2] + lVar13)) / local_b8 +
                         *(double *)(local_88[2] + lVar13);
            }
LAB_0127d709:
            pVar17 = (pthread_key_t)puVar12;
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
        lVar13 = *(longlong *)(lVar18 + 0x20 + (ulonglong)(*(uint *)(lVar15 + 0x154) & 1) * 8);
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
      if (local_40 - local_50 < DAT_0241b6a8) {
        pvVar14 = _pthread_getspecific(pVar17);
        if (pvVar14 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_f0 = local_50 + DAT_0241b6a8;
        pvVar14 = _pthread_getspecific(pVar17);
        lVar13 = lVar18;
        if ((pvVar14 != (void *)0x0) && (lVar15 = FUN_00e8b990(), lVar15 != 0)) {
          lVar13 = *(longlong *)(lVar18 + 0x20 + (ulonglong)(*(uint *)(lVar15 + 0x154) & 1) * 8);
        }
        dVar25 = local_f0 - local_40;
        local_40 = local_40 + dVar25;
        local_68 = local_68 + dVar25;
        if (*(longlong *)(lVar13 + 0xa0) != 0) {
          FUN_00d50b00();
          FUN_00d50b20();
          pvVar14 = _pthread_getspecific(pVar17);
          if ((pvVar14 == (void *)0x0) || (lVar13 = FUN_00e8b990(), lVar13 == 0)) {
            lVar13 = *(longlong *)(lVar18 + 0xa0);
          }
          else {
            lVar13 = *(longlong *)
                      (*(longlong *)(lVar18 + 0x20 + (ulonglong)(*(uint *)(lVar13 + 0x154) & 1) * 8)
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
        lVar13 = *(longlong *)(lVar18 + 0x20 + (ulonglong)(*(uint *)(lVar13 + 0x154) & 1) * 8);
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
        lVar13 = *(longlong *)(lVar18 + 0x20 + (ulonglong)(*(uint *)(lVar15 + 0x154) & 1) * 8);
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
        lVar13 = *(longlong *)(lVar18 + 0x20 + (ulonglong)(*(uint *)(lVar15 + 0x154) & 1) * 8);
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
          pVar17 = (pthread_key_t)local_38;
        }
        FUN_0152e950(local_110);
        if ((local_d0 != DAT_02390448) || (NAN(local_d0) || NAN(DAT_02390448))) {
          pvVar14 = _pthread_getspecific(pVar17);
          if ((pvVar14 == (void *)0x0) || (lVar13 = FUN_00e8b990(), lVar13 == 0)) {
            lVar13 = *(longlong *)(lVar18 + 200);
          }
          else {
            lVar13 = *(longlong *)
                      (*(longlong *)(lVar18 + 0x20 + (ulonglong)(*(uint *)(lVar13 + 0x154) & 1) * 8)
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
      lVar13 = *unaff_RDI;
      lVar15 = (longlong)*(int *)(lVar13 + 0xc);
    } while (lVar24 < lVar15);
  }
  cVar9 = (char)local_d4;
  if (local_88 != (undefined8 *)0x0 && cVar9 == '\0') {
    FUN_00d50b20();
  }
  if (puVar11 != (undefined8 *)0x0 && cVar9 == '\0') {
    FUN_00d50b20();
  }
  if (cVar9 == '\0' && puVar10 != (undefined8 *)0x0) {
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


