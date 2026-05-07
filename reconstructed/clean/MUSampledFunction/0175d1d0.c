// Function: FUN_0175d1d0
// Address: 0175d1d0
// Size: 6878 bytes
// Class: MUSampledFunction
// String references:
//   "MUSampledFunction"
//   "MUAudioSourcePrincipalItem"

void* FUN_0175d1d0(uint param_1,char param_2,int param_3,int param_4)

{
  float fVar1;
  int64_t lVar2;
  double dVar3;
  uint8_t auVar4 [16];
  uint8_t auVar5 [16];
  char cVar6;
  char cVar7;
  bool bVar8;
  char cVar9;
  char cVar10;
  uint uVar11;
  int iVar13;
  uint uVar14;
  int64_t **pplVar15;
  void *pvVar16;
  int64_t *plVar17;
  undefined7 uVar20;
  int64_t lVar18;
  uint64_t uVar19;
  void* pVar21;
  uint uVar22;
  int64_t *plVar23;
  int iVar24;
  int64_t *arg1;
  void*this_ptr;
  bool bVar25;
  int64_t *plVar26;
  int64_t lVar27;
  uint64_t uVar28;
  bool bVar29;
  float fVar30;
  float fVar31;
  int64_t local_f0;
  char local_e8;
  int64_t local_e0;
  char local_d8;
  uint8_t local_c8 [16];
  int64_t *local_b8;
  int64_t *local_a0;
  char local_98;
  int64_t *local_90;
  int64_t *local_88;
  int64_t *local_80;
  int64_t *local_70;
  int64_t *local_68;
  int64_t *local_60;
  int64_t *local_58;
  int64_t *local_50;
  int64_t *local_48;
  char local_40;
  char local_36;
  char local_35;
  char local_34;
  char local_33;
  char local_32;
  char local_31;
  int iVar12;
  
  if (*(int *)(*arg1 + 0xc) == 0) {
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
    return this_ptr;
  }
  uVar22 = (param_4 - param_3) + 1;
  if (param_2 != '\0') {
    uVar22 = param_1;
  }
  plVar26 = (int64_t *)**(int64_t **)(*arg1 + 0x10);
  local_48 = plVar26;
  if ((g_027c0170 == '\0') && (iVar13 = ___cxa_guard_acquire(), iVar13 != 0)) {
    g_02790158 = FUN_007ef2d0();
    g_02790140 = "MUAudioSourcePrincipalItem";
    g_02790148 = 0x138;
    g_02790150 = FUN_010fe5c0;
    g_02790160 = 0;
    ram_0000000002790168 = 0;
    g_02790170 = 0;
    ram_0000000002790178 = 0;
    g_02790180 = 0;
    ram_0000000002790188 = 0;
    g_02790190 = 0;
    ram_0000000002790198 = 0;
    g_027901a0 = 0;
    ram_00000000027901a8 = 0;
    g_027901b0 = 0;
    ram_00000000027901b8 = 0;
    g_027901c0 = 0;
    ram_00000000027901c8 = 0;
    g_027901d0 = 0;
    ram_00000000027901d8 = 0;
    g_027901e0 = 0;
    ram_00000000027901e8 = 0;
    g_027901f0 = 0;
    ram_00000000027901f8 = 0;
    g_02790200 = 0;
    ___cxa_guard_release();
  }
  if (plVar26 == (int64_t *)0x0) {
LAB_0175d254:
    pplVar15 = &g_02802688;
  }
  else {
    (**(code **)(*plVar26 + 0x360))();
    cVar9 = FUN_00e85ea0();
    if (cVar9 == '\0') goto LAB_0175d254;
    pplVar15 = &local_48;
  }
  plVar26 = *pplVar15;
  if (plVar26 == (int64_t *)0x0) {
    lVar18 = *arg1;
    bVar8 = false;
    local_b8 = (int64_t *)0x0;
  }
  else {
    FUN_00c8e690();
    local_b8 = local_48;
    if ((((local_40 == '\0') && (local_48 != (int64_t *)0x0)) && (FUN_00d50b00(), local_40 != '\0')
        ) && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00c92170();
    FUN_00c92160();
    ___bzero();
    lVar18 = *arg1;
    bVar8 = true;
    if (0 < *(int *)(lVar18 + 0xc)) {
      lVar27 = 0;
      bVar25 = false;
      do {
        plVar17 = *(int64_t **)(*(int64_t *)(lVar18 + 0x10) + lVar27 * 8);
        local_48 = plVar17;
        local_40 = '\0';
        if ((g_027c0170 == '\0') && (iVar13 = ___cxa_guard_acquire(), iVar13 != 0)) {
          g_02790158 = FUN_007ef2d0();
          g_02790140 = "MUAudioSourcePrincipalItem";
          g_02790148 = 0x138;
          g_02790150 = FUN_010fe5c0;
          g_02790160 = 0;
          ram_0000000002790168 = 0;
          g_02790170 = 0;
          ram_0000000002790178 = 0;
          g_02790180 = 0;
          ram_0000000002790188 = 0;
          g_02790190 = 0;
          ram_0000000002790198 = 0;
          g_027901a0 = 0;
          ram_00000000027901a8 = 0;
          g_027901b0 = 0;
          ram_00000000027901b8 = 0;
          g_027901c0 = 0;
          ram_00000000027901c8 = 0;
          g_027901d0 = 0;
          ram_00000000027901d8 = 0;
          g_027901e0 = 0;
          ram_00000000027901e8 = 0;
          g_027901f0 = 0;
          ram_00000000027901f8 = 0;
          g_02790200 = 0;
          ___cxa_guard_release();
        }
        pplVar15 = &g_02802688;
        if (plVar17 != (int64_t *)0x0) {
          (**(code **)(*plVar17 + 0x360))();
          cVar9 = FUN_00e85ea0();
          pplVar15 = &local_48;
          if (cVar9 == '\0') {
            pplVar15 = &g_02802688;
          }
        }
        plVar17 = *pplVar15;
        if (*(char *)(pplVar15 + 1) == '\0') {
          if (plVar17 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          *(void*)(pplVar15 + 1) = 0;
        }
        pVar21 = (void*)pplVar15;
        if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar17 != (int64_t *)0x0) {
          pvVar16 = _pthread_getspecific(pVar21);
          if (pvVar16 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_014c2a40();
          plVar17 = local_48;
          if (local_40 == '\0') {
            if (local_48 == (int64_t *)0x0) goto LAB_0175d530;
            FUN_00d50b00();
            if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
LAB_0175d490:
            if (*(int *)((int64_t)plVar17 + 0xc) == 0) {
              bVar29 = false;
            }
            else if (*(int *)((int64_t)plVar17 + 0xc) < 1) {
              bVar29 = false;
              if (!bVar25) {
                *(void*)(this_ptr + 1) = 0;
                *this_ptr = 0;
                bVar29 = true;
              }
            }
            else if (param_2 == '\0') {
              lVar18 = 0;
              do {
                lVar2 = *(int64_t *)(plVar17[2] + lVar18 * 8);
                if (lVar2 != 0) {
                  FUN_00d50b00();
                }
                iVar13 = FUN_00e7d780(*(void*)(lVar2 + 0x14));
                uVar11 = iVar13 - param_3;
                if ((-1 < (int)uVar11) && ((int)uVar11 < (int)uVar22)) {
                  *(float *)(local_b8[2] + (uint64_t)uVar11 * 4) =
                       (float)(-(uint)(0.0 <= *(float *)(lVar2 + 0x10)) &
                              (uint)*(float *)(lVar2 + 0x10)) +
                       *(float *)(local_b8[2] + (uint64_t)uVar11 * 4);
                }
                FUN_00d50b20();
                lVar18 = lVar18 + 1;
              } while (lVar18 < *(int *)((int64_t)plVar17 + 0xc));
              bVar29 = false;
              bVar25 = true;
            }
            else {
              lVar18 = 0;
              do {
                lVar2 = *(int64_t *)(plVar17[2] + lVar18 * 8);
                if (lVar2 != 0) {
                  FUN_00d50b00();
                }
                iVar13 = FUN_00e7d780(*(void*)(lVar2 + 0x14));
                if (-1 < (int)((uint)((int64_t)iVar13 % (int64_t)(int)uVar22) | uVar22)) {
                  uVar28 = (int64_t)iVar13 % (int64_t)(int)uVar22 & 0xffffffff;
                  *(float *)(local_b8[2] + uVar28 * 4) =
                       (float)(-(uint)(0.0 <= *(float *)(lVar2 + 0x10)) &
                              (uint)*(float *)(lVar2 + 0x10)) + *(float *)(local_b8[2] + uVar28 * 4)
                  ;
                }
                FUN_00d50b20();
                lVar18 = lVar18 + 1;
              } while (lVar18 < *(int *)((int64_t)plVar17 + 0xc));
              bVar29 = false;
              bVar25 = true;
            }
            FUN_00d50b20();
          }
          else {
            if (local_48 != (int64_t *)0x0) goto LAB_0175d490;
LAB_0175d530:
            bVar29 = false;
          }
          FUN_00d50b20();
          if (bVar29) goto joined_r0x0175ec09;
        }
        lVar27 = lVar27 + 1;
        lVar18 = *arg1;
      } while (lVar27 < *(int *)(lVar18 + 0xc));
    }
  }
  plVar17 = (int64_t *)**(void**)(lVar18 + 0x10);
  local_48 = plVar17;
  FUN_0006e1c0();
  plVar23 = g_02802688;
  if (plVar17 != (int64_t *)0x0) {
    (**(code **)(*plVar17 + 0x360))();
    cVar9 = FUN_00e85ea0();
    plVar23 = g_02802688;
    if (cVar9 != '\0') {
      plVar23 = local_48;
    }
  }
  if (plVar23 == (int64_t *)0x0) goto LAB_0175ebc5;
  FUN_00c8e690();
  plVar17 = local_48;
  if ((((local_40 == '\0') && (local_48 != (int64_t *)0x0)) && (FUN_00d50b00(), local_40 != '\0'))
     && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00c92170();
  FUN_00c92160();
  ___bzero();
  if (plVar17 == local_b8) {
    if (plVar26 != (int64_t *)0x0) {
      FUN_00d50b20();
      goto LAB_0175d7f4;
    }
    bVar8 = true;
    lVar18 = *arg1;
    if (0 < *(int *)(lVar18 + 0xc)) goto LAB_0175d808;
LAB_0175eaae:
    cVar7 = '\0';
    local_90 = (int64_t *)0x0;
    cVar6 = '\0';
    local_88 = (int64_t *)0x0;
    local_98 = '\0';
    local_80 = (int64_t *)0x0;
    cVar9 = '\0';
    local_60 = (int64_t *)0x0;
    local_70._0_1_ = '\0';
    local_58 = (int64_t *)0x0;
    auVar5._8_8_ = 0;
    auVar5._0_8_ = local_c8._8_8_;
    local_c8 = auVar5 << 0x40;
    plVar26 = (int64_t *)0x0;
LAB_0175eafb:
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
    bVar29 = true;
    bVar25 = true;
  }
  else {
    bVar8 = true;
    if (plVar26 == (int64_t *)0x0 || local_b8 == (int64_t *)0x0) {
      lVar18 = *arg1;
      iVar13 = *(int *)(lVar18 + 0xc);
      local_b8 = plVar17;
    }
    else {
      FUN_00d50b20();
      local_b8 = plVar17;
LAB_0175d7f4:
      lVar18 = *arg1;
      iVar13 = *(int *)(lVar18 + 0xc);
    }
    if (iVar13 < 1) goto LAB_0175eaae;
LAB_0175d808:
    lVar27 = 0;
    bVar25 = false;
    cVar7 = '\0';
    local_90 = (int64_t *)0x0;
    cVar6 = '\0';
    local_88 = (int64_t *)0x0;
    local_98 = '\0';
    local_80 = (int64_t *)0x0;
    cVar9 = '\0';
    local_60 = (int64_t *)0x0;
    local_70 = (int64_t *)0x0;
    local_58 = (int64_t *)0x0;
    auVar4._8_8_ = 0;
    auVar4._0_8_ = local_c8._8_8_;
    local_c8 = auVar4 << 0x40;
    plVar26 = (int64_t *)0x0;
    do {
      plVar17 = *(int64_t **)(*(int64_t *)(lVar18 + 0x10) + lVar27 * 8);
      local_40 = '\0';
      local_48 = plVar17;
      FUN_0006e1c0();
      pplVar15 = &g_02802688;
      if (plVar17 != (int64_t *)0x0) {
        (**(code **)(*plVar17 + 0x360))();
        cVar10 = FUN_00e85ea0();
        pplVar15 = &local_48;
        if (cVar10 == '\0') {
          pplVar15 = &g_02802688;
        }
      }
      plVar23 = *pplVar15;
      if (*(char *)(pplVar15 + 1) == '\0') {
        if (plVar23 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        *(void*)(pplVar15 + 1) = 0;
        if ((local_40 != '\0') && (plVar17 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      pVar21 = (void*)pplVar15;
      if (plVar23 != (int64_t *)0x0) {
        pvVar16 = _pthread_getspecific(pVar21);
        if (pvVar16 != (void *)0x0) {
          FUN_00e8b990();
        }
        cVar10 = FUN_01263cf0();
        if (cVar10 == '\0') {
          pvVar16 = _pthread_getspecific(pVar21);
          if (pvVar16 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0125a560();
          if (local_48 == (int64_t *)0x0) {
            bVar29 = false;
          }
          else {
            pvVar16 = _pthread_getspecific(pVar21);
            if (pvVar16 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0125a560();
            pvVar16 = _pthread_getspecific(pVar21);
            if (pvVar16 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_011ef460();
            bVar29 = local_e0 != 0;
            if ((local_d8 != '\0') && (local_e0 != 0)) {
              FUN_00d50b20();
            }
            if ((local_e8 != '\0') && (local_f0 != 0)) {
              FUN_00d50b20();
            }
          }
          if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (bVar29) {
            pvVar16 = _pthread_getspecific(pVar21);
            if (pvVar16 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0125a560();
            pvVar16 = _pthread_getspecific(pVar21);
            if (pvVar16 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_011ef460();
            pvVar16 = _pthread_getspecific(pVar21);
            if (pvVar16 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_013ddc00();
            plVar17 = local_48;
            if ((g_027c01a0 == '\0') && (iVar13 = ___cxa_guard_acquire(), iVar13 != 0)) {
              g_027af248 = FUN_001016a0();
              g_027af230 = "MUSampledFunction";
              g_027af238 = 0x58;
              pVar21 = 0x101650;
              g_027af240 = FUN_00101650;
              g_027af250 = 0;
              ram_00000000027af258 = 0;
              g_027af260 = 0;
              ram_00000000027af268 = 0;
              g_027af270 = 0;
              ram_00000000027af278 = 0;
              g_027af280 = 0;
              ram_00000000027af288 = 0;
              g_027af290 = 0;
              ram_00000000027af298 = 0;
              g_027af2a0 = 0;
              ram_00000000027af2a8 = 0;
              g_027af2b0 = 0;
              ram_00000000027af2b8 = 0;
              g_027af2c0 = 0;
              ram_00000000027af2c8 = 0;
              g_027af2d0 = 0;
              ram_00000000027af2d8 = 0;
              g_027af2e0 = 0;
              ram_00000000027af2e8 = 0;
              g_027af2f0 = 0;
              ___cxa_guard_release();
            }
            pplVar15 = &g_02802688;
            if (plVar17 != (int64_t *)0x0) {
              (**(code **)(*plVar17 + 0x360))();
              cVar10 = FUN_00e85ea0();
              pplVar15 = &local_48;
              if (cVar10 == '\0') {
                pplVar15 = &g_02802688;
              }
            }
            local_50 = *pplVar15;
            if (local_50 == plVar26) {
              plVar17 = plVar26;
              local_31 = local_c8[0];
              if ((local_c8[0] == '\0') && (local_50 != (int64_t *)0x0)) {
                local_50 = plVar26;
                if (*(char *)(pplVar15 + 1) != '\0') goto LAB_0175dc78;
                local_31 = '\x01';
                FUN_00d50b00();
              }
            }
            else if (*(char *)(pplVar15 + 1) == '\0') {
              if (local_50 != (int64_t *)0x0) {
                FUN_00d50b00();
              }
              local_31 = '\x01';
              plVar17 = local_50;
              if ((local_c8[0] != '\0') && (plVar26 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
            }
            else {
              if ((local_c8[0] != '\0') && (plVar26 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
LAB_0175dc78:
              *(void*)(pplVar15 + 1) = 0;
              local_31 = '\x01';
              plVar17 = local_50;
            }
            plVar26 = plVar17;
            if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_d8 != '\0') && (local_e0 != 0)) {
              FUN_00d50b20();
            }
            if ((local_e8 != '\0') && (local_f0 != 0)) {
              FUN_00d50b20();
            }
            pvVar16 = _pthread_getspecific(pVar21);
            if (pvVar16 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0125a560();
            pvVar16 = _pthread_getspecific(pVar21);
            if (pvVar16 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_011ef460();
            pvVar16 = _pthread_getspecific(pVar21);
            if (pvVar16 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_013ddc80();
            plVar17 = local_48;
            if ((g_027c01a0 == '\0') && (iVar13 = ___cxa_guard_acquire(), iVar13 != 0)) {
              g_027af248 = FUN_001016a0();
              g_027af230 = "MUSampledFunction";
              g_027af238 = 0x58;
              pVar21 = 0x101650;
              g_027af240 = FUN_00101650;
              g_027af250 = 0;
              ram_00000000027af258 = 0;
              g_027af260 = 0;
              ram_00000000027af268 = 0;
              g_027af270 = 0;
              ram_00000000027af278 = 0;
              g_027af280 = 0;
              ram_00000000027af288 = 0;
              g_027af290 = 0;
              ram_00000000027af298 = 0;
              g_027af2a0 = 0;
              ram_00000000027af2a8 = 0;
              g_027af2b0 = 0;
              ram_00000000027af2b8 = 0;
              g_027af2c0 = 0;
              ram_00000000027af2c8 = 0;
              g_027af2d0 = 0;
              ram_00000000027af2d8 = 0;
              g_027af2e0 = 0;
              ram_00000000027af2e8 = 0;
              g_027af2f0 = 0;
              ___cxa_guard_release();
            }
            pplVar15 = &g_02802688;
            if (plVar17 != (int64_t *)0x0) {
              (**(code **)(*plVar17 + 0x360))();
              cVar10 = FUN_00e85ea0();
              pplVar15 = &local_48;
              if (cVar10 == '\0') {
                pplVar15 = &g_02802688;
              }
            }
            plVar17 = *pplVar15;
            if (plVar17 == local_58) {
              plVar23 = local_58;
              local_32 = (char)local_70;
              if (((char)local_70 == '\0') && (plVar17 != (int64_t *)0x0)) {
                plVar17 = local_58;
                if (*(char *)(pplVar15 + 1) != '\0') goto LAB_0175de6c;
                local_32 = '\x01';
                FUN_00d50b00();
              }
            }
            else if (*(char *)(pplVar15 + 1) == '\0') {
              if (plVar17 != (int64_t *)0x0) {
                FUN_00d50b00();
              }
              local_32 = '\x01';
              plVar23 = plVar17;
              if (((char)local_70 != '\0') && (local_58 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
            }
            else {
              if (((char)local_70 != '\0') && (local_58 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
LAB_0175de6c:
              *(void*)(pplVar15 + 1) = 0;
              local_32 = '\x01';
              plVar23 = plVar17;
            }
            local_58 = plVar23;
            if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_d8 != '\0') && (local_e0 != 0)) {
              FUN_00d50b20();
            }
            if ((local_e8 != '\0') && (local_f0 != 0)) {
              FUN_00d50b20();
            }
            pvVar16 = _pthread_getspecific(pVar21);
            if (pvVar16 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0125ebb0();
            plVar17 = local_48;
            if ((g_027c01a0 == '\0') && (iVar13 = ___cxa_guard_acquire(), iVar13 != 0)) {
              g_027af248 = FUN_001016a0();
              g_027af230 = "MUSampledFunction";
              g_027af238 = 0x58;
              pVar21 = 0x101650;
              g_027af240 = FUN_00101650;
              g_027af250 = 0;
              ram_00000000027af258 = 0;
              g_027af260 = 0;
              ram_00000000027af268 = 0;
              g_027af270 = 0;
              ram_00000000027af278 = 0;
              g_027af280 = 0;
              ram_00000000027af288 = 0;
              g_027af290 = 0;
              ram_00000000027af298 = 0;
              g_027af2a0 = 0;
              ram_00000000027af2a8 = 0;
              g_027af2b0 = 0;
              ram_00000000027af2b8 = 0;
              g_027af2c0 = 0;
              ram_00000000027af2c8 = 0;
              g_027af2d0 = 0;
              ram_00000000027af2d8 = 0;
              g_027af2e0 = 0;
              ram_00000000027af2e8 = 0;
              g_027af2f0 = 0;
              ___cxa_guard_release();
            }
            pplVar15 = &g_02802688;
            if (plVar17 != (int64_t *)0x0) {
              (**(code **)(*plVar17 + 0x360))();
              cVar10 = FUN_00e85ea0();
              pplVar15 = &local_48;
              if (cVar10 == '\0') {
                pplVar15 = &g_02802688;
              }
            }
            local_68 = *pplVar15;
            if (local_68 == local_60) {
              plVar17 = local_60;
              local_33 = cVar9;
              if ((cVar9 == '\0') && (local_68 != (int64_t *)0x0)) {
                if (*(char *)(pplVar15 + 1) != '\0') {
                  local_68 = local_60;
                  goto LAB_0175dfcc;
                }
                local_33 = '\x01';
                FUN_00d50b00();
              }
            }
            else if (*(char *)(pplVar15 + 1) == '\0') {
              if (local_68 != (int64_t *)0x0) {
                FUN_00d50b00();
              }
              local_33 = '\x01';
              plVar17 = local_68;
              if ((cVar9 != '\0') && (plVar17 = local_68, local_60 != (int64_t *)0x0)) {
                FUN_00d50b20();
                plVar17 = local_68;
              }
            }
            else {
              if ((cVar9 != '\0') && (local_60 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
LAB_0175dfcc:
              *(void*)(pplVar15 + 1) = 0;
              local_33 = '\x01';
              plVar17 = local_68;
            }
            local_60 = plVar17;
            if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            pvVar16 = _pthread_getspecific(pVar21);
            if (pvVar16 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0125a560();
            pvVar16 = _pthread_getspecific(pVar21);
            if (pvVar16 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_011ef460();
            pvVar16 = _pthread_getspecific(pVar21);
            if (pvVar16 != (void *)0x0) {
              FUN_00e8b990();
            }
            dVar3 = (double)FUN_013dd730();
            if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_d8 != '\0') && (local_e0 != 0)) {
              FUN_00d50b20();
            }
            uVar20 = (undefined7)((uint64_t)local_60 >> 8);
            if (((plVar26 == (int64_t *)0x0) || (local_58 == (int64_t *)0x0)) ||
               (local_60 == (int64_t *)0x0)) {
LAB_0175d8a3:
              plVar17 = (int64_t *)CONCAT71(uVar20,local_32);
              local_70 = plVar17;
            }
            else {
              pvVar16 = _pthread_getspecific(pVar21);
              if ((pvVar16 != (void *)0x0) && (lVar18 = FUN_00e8b990(), lVar18 != 0)) {
                pVar21 = (void*)plVar26;
              }
              FUN_013eb920();
              plVar17 = local_48;
              if (local_48 == local_80) {
                plVar17 = local_80;
                local_34 = local_98;
                if ((local_98 != '\0') || (local_48 == (int64_t *)0x0)) goto LAB_0175e262;
                if (local_40 == '\0') {
                  local_34 = '\x01';
                  FUN_00d50b00();
                  if (local_40 == '\0') goto LAB_0175e276;
                  goto LAB_0175e268;
                }
                local_34 = '\x01';
              }
              else {
                if (local_40 != '\0') {
                  local_34 = '\x01';
                  if ((local_98 != '\0') && (local_80 != (int64_t *)0x0)) {
                    FUN_00d50b20();
                  }
                  goto LAB_0175e276;
                }
                if (local_48 != (int64_t *)0x0) {
                  FUN_00d50b00();
                }
                local_34 = '\x01';
                if ((local_98 != '\0') && (local_80 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
LAB_0175e262:
                local_80 = plVar17;
                plVar17 = local_80;
                if (local_40 != '\0') {
LAB_0175e268:
                  plVar17 = local_80;
                  if (local_48 != (int64_t *)0x0) {
                    FUN_00d50b20();
                  }
                }
              }
LAB_0175e276:
              pvVar16 = _pthread_getspecific(pVar21);
              if (pvVar16 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_013eb920();
              local_a0 = local_48;
              if (local_48 == local_88) {
                if ((cVar6 != '\0') || (local_48 == (int64_t *)0x0)) {
                  local_a0 = local_88;
                  local_35 = cVar6;
                  goto LAB_0175e363;
                }
                local_35 = '\x01';
                if (local_40 == '\0') {
                  local_35 = '\x01';
                  local_a0 = local_88;
                  FUN_00d50b00();
                  if (local_40 == '\0') goto LAB_0175e377;
                  goto LAB_0175e369;
                }
                local_a0 = local_88;
              }
              else {
                if (local_40 != '\0') {
                  local_35 = '\x01';
                  if ((cVar6 != '\0') && (local_88 != (int64_t *)0x0)) {
                    FUN_00d50b20();
                  }
                  goto LAB_0175e377;
                }
                if (local_48 != (int64_t *)0x0) {
                  FUN_00d50b00();
                }
                local_35 = '\x01';
                if ((cVar6 != '\0') && (local_88 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
LAB_0175e363:
                if (local_40 != '\0') {
LAB_0175e369:
                  if (local_48 != (int64_t *)0x0) {
                    FUN_00d50b20();
                  }
                }
              }
LAB_0175e377:
              pvVar16 = _pthread_getspecific(pVar21);
              if (pvVar16 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_013eb920();
              plVar23 = local_48;
              if (local_48 == local_90) {
                plVar23 = local_90;
                local_36 = cVar7;
                if ((cVar7 == '\0') && (local_48 != (int64_t *)0x0)) {
                  if (local_40 != '\0') {
                    local_36 = '\x01';
                    goto LAB_0175e541;
                  }
                  local_36 = '\x01';
                  FUN_00d50b00();
                }
LAB_0175e52d:
                if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
              }
              else {
                if (local_40 == '\0') {
                  if (local_48 != (int64_t *)0x0) {
                    FUN_00d50b00();
                  }
                  local_36 = '\x01';
                  if ((cVar7 != '\0') && (local_90 != (int64_t *)0x0)) {
                    FUN_00d50b20();
                  }
                  goto LAB_0175e52d;
                }
                local_36 = '\x01';
                if ((cVar7 != '\0') && (local_90 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
              }
LAB_0175e541:
              iVar13 = (int)plVar17[3];
              iVar12 = iVar13 + 3;
              if (-1 < iVar13) {
                iVar12 = iVar13;
              }
              uVar11 = iVar12 >> 2;
              iVar12 = (int)local_a0[3];
              iVar24 = iVar12 + 3;
              if (-1 < iVar12) {
                iVar24 = iVar12;
              }
              local_90 = plVar23;
              local_80 = plVar17;
              if (iVar24 >> 2 != uVar11) {
LAB_0175d895:
                local_88 = local_a0;
                local_98 = local_34;
                cVar6 = local_35;
                cVar7 = local_36;
                goto LAB_0175d8a3;
              }
              iVar12 = (int)plVar23[3];
              iVar24 = iVar12 + 3;
              if (-1 < iVar12) {
                iVar24 = iVar12;
              }
              if ((iVar24 >> 2 != uVar11) || (bVar25 = true, iVar13 < 4)) goto LAB_0175d895;
              if (param_2 != '\0') {
                uVar28 = 0;
                do {
                  fVar30 = (float)_logf(((float)dVar3 / *(float *)(plVar17[2] + uVar28 * 4)) *
                                        g_02394204);
                  fVar30 = fVar30 * g_02394208;
                  fVar1 = *(float *)(local_a0[2] + uVar28 * 4);
                  fVar31 = (float)_logf(*(void*)(plVar23[2] + uVar28 * 4));
                  iVar13 = FUN_00e7d780(fVar31 * g_02394208 + fVar30);
                  if (-1 < (int)((uint)((int64_t)iVar13 % (int64_t)(int)uVar22) | uVar22)) {
                    uVar19 = (int64_t)iVar13 % (int64_t)(int)uVar22 & 0xffffffff;
                    *(float *)(local_b8[2] + uVar19 * 4) =
                         (float)(~-(uint)(fVar1 < g_0239424c) & (uint)fVar1 |
                                ((uint)fVar1 ^ g_023945e0) & -(uint)(fVar1 < g_0239424c)) +
                         *(float *)(local_b8[2] + uVar19 * 4);
                  }
                  uVar28 = uVar28 + 1;
                } while (uVar11 != uVar28);
                local_88 = local_a0;
                local_98 = local_34;
                local_70 = (int64_t *)CONCAT71(uVar20,local_32);
                local_c8._1_7_ = (int7)((uint64_t)local_58 >> 8);
                local_c8[0] = local_31;
                local_c8._8_8_ = 0;
                cVar9 = local_33;
                cVar6 = local_35;
                cVar7 = local_36;
                goto LAB_0175d8cb;
              }
              uVar28 = 0;
              do {
                fVar30 = (float)_logf(((float)dVar3 / *(float *)(plVar17[2] + uVar28 * 4)) *
                                      g_02394204);
                fVar30 = fVar30 * g_02394208;
                fVar1 = *(float *)(local_a0[2] + uVar28 * 4);
                local_c8 = ZEXT416((uint)fVar1);
                fVar31 = (float)_logf(*(void*)(plVar23[2] + uVar28 * 4));
                iVar13 = FUN_00e7d780(fVar31 * g_02394208 + fVar30);
                uVar14 = iVar13 - param_3;
                if ((-1 < (int)uVar14) && ((int)uVar14 < (int)uVar22)) {
                  *(float *)(local_b8[2] + (uint64_t)uVar14 * 4) =
                       (float)(~-(uint)(fVar1 < g_0239424c) & (uint)fVar1 |
                              ((uint)fVar1 ^ g_023945e0) & -(uint)(fVar1 < g_0239424c)) +
                       *(float *)(local_b8[2] + (uint64_t)uVar14 * 4);
                }
                uVar28 = uVar28 + 1;
              } while (uVar11 != uVar28);
              local_88 = local_a0;
              local_98 = local_34;
              plVar17 = local_58;
              local_70 = (int64_t *)CONCAT71(uVar20,local_32);
              cVar6 = local_35;
              cVar7 = local_36;
            }
            auVar4 = local_c8;
            local_c8._1_7_ = (int7)((uint64_t)plVar17 >> 8);
            local_c8[0] = local_31;
            local_c8._8_8_ = auVar4._8_8_;
            cVar9 = local_33;
          }
        }
LAB_0175d8cb:
        FUN_00d50b20();
      }
      lVar27 = lVar27 + 1;
      lVar18 = *arg1;
    } while (lVar27 < *(int *)(lVar18 + 0xc));
    if (!bVar25) goto LAB_0175eafb;
    bVar29 = false;
    bVar25 = false;
  }
  if ((cVar7 != '\0') && (bVar25 = bVar29, local_90 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((cVar6 != '\0') && (local_88 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_98 != '\0') && (local_80 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((cVar9 != '\0') && (local_60 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_70 != '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_c8[0] != '\0') && (plVar26 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (bVar25) {
    if (!bVar8) {
      return this_ptr;
    }
joined_r0x0175ec09:
    if (local_b8 == (int64_t *)0x0) {
      return this_ptr;
    }
    FUN_00d50b20();
    return this_ptr;
  }
LAB_0175ebc5:
  *(void*)(this_ptr + 1) = 0;
  if (bVar8) {
    *this_ptr = local_b8;
  }
  else {
    if (local_b8 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    *this_ptr = local_b8;
  }
  *(void*)(this_ptr + 1) = 1;
  return this_ptr;
}

