// Function: FUN_0178a800
// Address: 0178a800
// Size: 5681 bytes
// Class: MUBarSignature

void* FUN_0178a800(void*param_1,int64_t *param_2,void*param_3)

{
  void*puVar1;
  uint uVar2;
  code *pcVar3;
  char cVar4;
  bool bVar5;
  uint32_t uVar6;
  void*puVar7;
  int64_t lVar8;
  void *pvVar9;
  int extraout_var;
  int extraout_var_00;
  void**ppuVar10;
  uint64_t uVar11;
  int64_t *plVar12;
  void*puVar13;
  int extraout_var_01;
  void**ppuVar14;
  int64_t *plVar15;
  void*puVar16;
  uint64_t uVar17;
  void* pVar18;
  int64_t lVar19;
  int iVar20;
  int iVar21;
  int64_t arg1;
  void*this_ptr;
  byte bVar22;
  int iStack_124;
  int iStack_11c;
  uint64_t local_108;
  char local_100;
  uint64_t local_f8;
  uint64_t local_f0;
  void*local_e8;
  void*local_e0;
  void*local_d8;
  uint local_cc;
  uint64_t local_c8;
  void*local_c0;
  void*local_b8;
  void*local_b0;
  uint64_t local_a8;
  int local_a0;
  uint64_t local_98;
  int64_t *local_90;
  char local_81;
  int64_t *local_80;
  void*local_78;
  void*local_70;
  char local_68;
  int64_t *local_60;
  char local_58 [8];
  void*local_50;
  uint64_t local_48;
  int local_40;
  void*local_38;
  
  puVar7 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar7 = &g_02572358;
  pcVar3 = g_02572370;
  local_d8 = puVar7;
  (*g_02572370)();
  puVar7 = (void*)*param_2;
  if ((puVar7 != (void*)0x0) && (*(int *)((int64_t)puVar7 + 0xc) != 0)) {
    local_b8._0_1_ = '\0';
    local_c0 = (void*)0x0;
    local_a8 = 0xffffffff;
    local_a0 = 0;
    local_a8._4_4_ = 0;
    local_b0 = puVar7;
    local_80 = param_2;
    while( true ) {
      if (local_a8._4_4_ != 0) {
        if (local_a8._4_4_ < 1) {
          iVar20 = -local_a8._4_4_;
        }
        else {
          iVar20 = (void*)local_a8 - local_a8._4_4_;
          local_a8 = CONCAT44(local_a8._4_4_,iVar20);
          FUN_00d23690();
          local_a0 = local_a0 + local_a8._4_4_;
          iVar20 = 0;
        }
        local_a8 = CONCAT44(iVar20,(void*)local_a8);
      }
      lVar8 = (int64_t)(int)(void*)local_a8;
      iVar20 = (void*)local_a8 + 1;
      local_a8 = CONCAT44(local_a8._4_4_,iVar20);
      if (*(int *)((int64_t)local_b0 + 0xc) <= iVar20) break;
      lVar19 = local_b0[2];
      local_c0 = *(void**)(lVar19 + 8 + lVar8 * 8);
      pvVar9 = _pthread_getspecific((void*)lVar19);
      pVar18 = (void*)lVar19;
      if (pvVar9 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0125e930();
      plVar15 = local_60;
      if ((local_58[0] != '\0') && (local_60 != (void*)0x0)) {
        FUN_00d50b20();
      }
      if (plVar15 != (void*)0x0) {
        pvVar9 = _pthread_getspecific(pVar18);
        if (pvVar9 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0125e930();
        pvVar9 = _pthread_getspecific(pVar18);
        if (pvVar9 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0152ebe0();
        puVar7 = local_70;
        if (local_68 == '\0') {
          if (local_70 != (void*)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_68 = '\0';
        }
        local_60 = puVar7;
        local_58[0] = '\0';
        FUN_00d21140();
        if ((local_58[0] != '\0') && (local_60 != (void*)0x0)) {
          FUN_00d50b20();
        }
        if (puVar7 != (void*)0x0) {
          FUN_00d50b20();
        }
        if ((local_68 != '\0') && (local_70 != (void*)0x0)) {
          FUN_00d50b20();
        }
        if ((local_100 != '\0') && (local_108 != (void*)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    FUN_001159b0();
    if (*(int *)((int64_t)local_d8 + 0xc) != 0) {
      FUN_00d23310();
      puVar7 = local_c0;
      ppuVar14 = &local_b8;
      ppuVar10 = (void**)&local_108;
      if ((char)local_b8 != '\0') {
        ppuVar10 = ppuVar14;
      }
      local_108 = (void*)CONCAT71(local_108._1_7_,(char)local_b8);
      *(void*)ppuVar10 = 0;
      if (((char)local_b8 != '\0') && (puVar7 != (void*)0x0)) {
        FUN_00d50b20();
      }
      pVar18 = (void*)ppuVar14;
      pvVar9 = _pthread_getspecific(pVar18);
      if (pvVar9 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01267000();
      pvVar9 = _pthread_getspecific(pVar18);
      if (pvVar9 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012caf10();
      local_38 = local_60;
      if (local_58[0] == '\0') {
        if (((local_60 != (void*)0x0) && (FUN_00d50b00(), local_58[0] != '\0')) &&
           (local_60 != (void*)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_58[0] = '\0';
      }
      if ((local_68 != '\0') && (local_70 != (void*)0x0)) {
        FUN_00d50b20();
      }
      if (((char)local_108 != '\0') && (puVar7 != (void*)0x0)) {
        FUN_00d50b20();
      }
      iStack_124 = (int)((uint64_t)param_1 >> 0x20);
      if (iStack_124 == 0) {
        local_108 = (void*)FUN_00e7bdb0();
      }
      else {
        pvVar9 = _pthread_getspecific(pVar18);
        if ((pvVar9 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
          pVar18 = (void*)local_38;
        }
        local_108 = (void*)FUN_016caaa0();
      }
      iStack_11c = (int)((uint64_t)param_3 >> 0x20);
      if (iStack_11c == 0) {
        FUN_00e7bdb0();
        iVar20 = extraout_var;
      }
      else {
        pvVar9 = _pthread_getspecific(pVar18);
        if (pvVar9 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_016caaa0();
        iVar20 = extraout_var_00;
      }
      FUN_00d23310();
      puVar7 = local_c0;
      local_70 = (void*)CONCAT71(local_70._1_7_,(char)local_b8);
      ppuVar14 = &local_70;
      ppuVar10 = &local_b8;
      if ((char)local_b8 == '\0') {
        ppuVar10 = ppuVar14;
      }
      *(void*)ppuVar10 = 0;
      if (((char)local_b8 != '\0') && (local_c0 != (void*)0x0)) {
        FUN_00d50b20();
      }
      pvVar9 = _pthread_getspecific((void*)ppuVar14);
      if (pvVar9 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01508450();
      plVar15 = local_60;
      if (local_58[0] == '\0') {
        if (local_60 != (void*)0x0) {
          FUN_00d50b00();
          goto LAB_0178adae;
        }
        if (*(int64_t *)(arg1 + 0x30) != 0) {
          *(void*)(arg1 + 0x30) = 0;
          local_78 = (void*)CONCAT71(local_78._1_7_,1);
          goto LAB_0178ade4;
        }
      }
      else {
        local_58[0] = '\0';
LAB_0178adae:
        puVar13 = *(void**)(arg1 + 0x30);
        if (puVar13 != plVar15) {
          local_78 = (void*)CONCAT71(local_78._1_7_,plVar15 == (void*)0x0);
          if (plVar15 != (void*)0x0) {
            FUN_00d50b00();
          }
          *(int64_t **)(arg1 + 0x30) = plVar15;
          if (puVar13 != (void*)0x0) {
LAB_0178ade4:
            FUN_00d50b20();
          }
        }
        if (plVar15 != (void*)0x0) {
          FUN_00d50b20();
        }
      }
      if ((local_58[0] != '\0') && (local_60 != (void*)0x0)) {
        FUN_00d50b20();
      }
      if (((char)local_70 != '\0') && (puVar7 != (void*)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d23310();
      puVar7 = local_c0;
      ppuVar14 = &local_70;
      ppuVar10 = &local_b8;
      if ((char)local_b8 == '\0') {
        ppuVar10 = ppuVar14;
      }
      local_70 = (void*)CONCAT71(local_70._1_7_,(char)local_b8);
      *(void*)ppuVar10 = 0;
      if (((char)local_b8 != '\0') && (local_c0 != (void*)0x0)) {
        FUN_00d50b20();
      }
      pvVar9 = _pthread_getspecific((void*)ppuVar14);
      if (pvVar9 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01267000();
      puVar13 = *(void**)(arg1 + 0x38);
      plVar15 = puVar13;
      if (puVar13 != local_60) {
        if (local_58[0] == '\0') {
          if (local_60 == (void*)0x0) {
            plVar15 = (void*)0x0;
            goto LAB_0178aebb;
          }
          FUN_00d50b00();
          puVar13 = *(void**)(arg1 + 0x38);
          *(int64_t **)(arg1 + 0x38) = local_60;
          plVar15 = local_60;
        }
        else {
          local_58[0] = '\0';
          plVar15 = local_60;
LAB_0178aebb:
          *(int64_t **)(arg1 + 0x38) = plVar15;
        }
        if (puVar13 != (void*)0x0) {
          FUN_00d50b20();
          plVar15 = local_60;
        }
      }
      if ((local_58[0] != '\0') && (plVar15 != (void*)0x0)) {
        FUN_00d50b20();
      }
      if (((char)local_70 != '\0') && (puVar7 != (void*)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d242c0();
      uVar11 = FUN_00d216c0();
      local_cc = (uint)CONCAT71((int7)((uint64_t)uVar11 >> 8),1);
      bVar5 = false;
      bVar22 = 0;
      plVar15 = (int64_t *)0x0;
      do {
        plVar12 = (int64_t *)FUN_00e8fc40();
        FUN_0111d0d0();
        (**(code **)(*plVar12 + 0x18))();
        local_80 = plVar12;
        if ((bool)(bVar22 & plVar15 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        puVar7 = (void*)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar7 = &g_02572358;
        (*pcVar3)();
        local_78 = puVar7;
        puVar7 = (void*)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar7 = &g_02572358;
        (*pcVar3)();
        puVar13 = (void*)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar13 = &g_02572358;
        (*pcVar3)();
        local_e0 = puVar13;
        FUN_00e7bcc0();
        FUN_00e7bcc0();
        FUN_00e7bcc0();
        FUN_00e7bcc0();
        puVar13 = (void*)FUN_00e7bcc0();
        local_f0 = FUN_00e7bcc0();
        local_b8._0_1_ = '\0';
        local_c0 = (void*)0x0;
        local_b0 = local_d8;
        local_a8 = 0xffffffff;
        local_a0 = 0;
        local_a8._4_4_ = 0;
        while( true ) {
          if (local_a8._4_4_ != 0) {
            if (local_a8._4_4_ < 1) {
              iVar21 = -local_a8._4_4_;
            }
            else {
              iVar21 = (void*)local_a8 - local_a8._4_4_;
              local_a8 = CONCAT44(local_a8._4_4_,iVar21);
              FUN_00d23690();
              local_a0 = local_a0 + local_a8._4_4_;
              iVar21 = 0;
            }
            local_a8 = CONCAT44(iVar21,(void*)local_a8);
          }
          lVar8 = (int64_t)(int)(void*)local_a8;
          iVar21 = (void*)local_a8 + 1;
          local_a8 = CONCAT44(local_a8._4_4_,iVar21);
          if (*(int *)((int64_t)local_b0 + 0xc) <= iVar21) break;
          lVar19 = local_b0[2];
          local_c0 = *(void**)(lVar19 + 8 + lVar8 * 8);
          local_f8 = FUN_0178c570(lVar19,0);
          if (*(int *)((int64_t)local_78 + 0xc) == 0) {
LAB_0178bc1c:
            if (local_81 != '\0') {
LAB_0178bc26:
              if ((local_108._4_4_ != 0) && (local_f8._4_4_ != 0)) {
                cVar4 = FUN_00e7c020();
                if (cVar4 != '\0') goto LAB_0178b0e0;
              }
              if (((iVar20 == 0) || (local_f8._4_4_ == 0)) ||
                 (cVar4 = FUN_00e7c020(), cVar4 != '\0')) {
                local_60 = local_c0;
                local_58[0] = '\0';
                FUN_00d21140();
                if ((local_58[0] != '\0') && (local_60 != (void*)0x0)) {
                  FUN_00d50b20();
                }
              }
            }
          }
          else {
            pvVar9 = _pthread_getspecific((void*)lVar19);
            if (pvVar9 != (void *)0x0) {
              FUN_00e8b990();
            }
            uVar11 = FUN_00d23310();
            plVar15 = local_60;
            local_70 = (void*)CONCAT71(local_70._1_7_,local_58[0]);
            ppuVar14 = (void**)local_58;
            if (local_58[0] == '\0') {
              ppuVar14 = &local_70;
            }
            *(char *)ppuVar14 = '\0';
            if ((local_58[0] != '\0') && (plVar15 != (void*)0x0)) {
              uVar11 = FUN_00d50b20();
            }
            if (((char)local_70 == '\0') && (plVar15 != (void*)0x0)) {
              uVar11 = FUN_00d50b00();
            }
            FUN_0178c570(uVar11,0);
            pVar18 = 0;
            local_98 = (void*)FUN_016c4630(0,1);
            if (plVar15 != (void*)0x0) {
              FUN_00d50b20();
            }
            pvVar9 = _pthread_getspecific(pVar18);
            if (pvVar9 != (void *)0x0) {
              FUN_00e8b990();
            }
            local_c8 = (void*)FUN_016c4630(0,1);
            if ((((uint64_t)local_c8 >> 0x20 == 0) || (local_98._4_4_ == 0)) ||
               (cVar4 = FUN_00e7c020(), cVar4 == '\0')) {
              pVar18 = *(int *)((int64_t)local_b0 + 0xc) - 1;
              if ((void*)local_a8 != pVar18) goto LAB_0178bc1c;
            }
            else {
              pVar18 = *(int *)((int64_t)local_b0 + 0xc) - 1;
            }
            if ((void*)local_a8 == pVar18) {
              pvVar9 = _pthread_getspecific(pVar18);
              if (pvVar9 != (void *)0x0) {
                FUN_00e8b990();
              }
              pVar18 = 0;
              FUN_016c47d0(0,local_f8);
              uVar6 = FUN_0123ffa0();
              local_e8 = (void*)CONCAT44(local_e8._4_4_,uVar6);
              local_70 = local_98;
              FUN_00e7c260();
              local_c8 = local_70;
              if ((local_58[0] != '\0') && (local_60 != (void*)0x0)) {
                FUN_00d50b20();
              }
            }
            if (((iStack_124 != 0) && (local_98._4_4_ != 0)) &&
               (cVar4 = FUN_00e7c020(), cVar4 != '\0')) {
              local_98 = param_1;
            }
            iVar21 = local_c8._4_4_;
            puVar16 = local_c8;
            if (((iStack_11c != 0) && (local_c8._4_4_ != 0)) &&
               (cVar4 = FUN_00e7c020(), iVar21 = iStack_11c, puVar16 = param_3, cVar4 == '\0')) {
              iVar21 = local_c8._4_4_;
              if (local_98._4_4_ != 0) goto LAB_0178b41e;
LAB_0178b450:
              plVar15 = (int64_t *)FUN_00e8fc40();
              FUN_01794ea0();
              (**(code **)(*plVar15 + 0x18))();
              *(void**)((int64_t)plVar15 + 0xc) = local_98;
              *(void**)((int64_t)plVar15 + 0x14) = local_c8;
              puVar16 = *(void**)(arg1 + 0x50);
              local_90 = plVar15;
              if (puVar16 != local_78) {
                FUN_00d50b00();
                *(void**)(arg1 + 0x50) = local_78;
                if (puVar16 != (void*)0x0) {
                  FUN_00d50b20();
                }
              }
              if (*(int64_t *)(arg1 + 0x48) != 0) {
                *(void*)(arg1 + 0x48) = 0;
                FUN_00d50b20();
              }
              if (((*(int64_t *)(arg1 + 0x30) != 0) && (local_f0 >> 0x20 != 0)) &&
                 ((local_98._4_4_ != 0 &&
                  ((local_f0 >> 0x20 != 0 && (cVar4 = FUN_00e7c020(), cVar4 == '\0')))))) {
                pvVar9 = _pthread_getspecific(pVar18);
                if (pvVar9 != (void *)0x0) {
                  FUN_00e8b990();
                }
                pvVar9 = _pthread_getspecific(pVar18);
                if (pvVar9 != (void *)0x0) {
                  FUN_00e8b990();
                }
                uVar11 = FUN_016c4760();
                pVar18 = 0;
                FUN_01510b20(0,uVar11,&local_f0,0);
                puVar16 = *(void**)(arg1 + 0x28);
                plVar15 = puVar16;
                if (puVar16 != local_60) {
                  if (local_58[0] == '\0') {
                    if (local_60 == (void*)0x0) {
                      plVar15 = (void*)0x0;
                      goto LAB_0178b5bb;
                    }
                    FUN_00d50b00();
                    puVar16 = *(void**)(arg1 + 0x28);
                    *(int64_t **)(arg1 + 0x28) = local_60;
                    plVar15 = local_60;
                  }
                  else {
                    local_58[0] = '\0';
                    plVar15 = local_60;
LAB_0178b5bb:
                    *(int64_t **)(arg1 + 0x28) = plVar15;
                  }
                  pVar18 = (void*)puVar16;
                  if (puVar16 != (void*)0x0) {
                    FUN_00d50b20();
                    plVar15 = local_60;
                  }
                }
                if ((local_58[0] != '\0') && (plVar15 != (void*)0x0)) {
                  FUN_00d50b20();
                }
                if (local_f0._4_4_ != 0) {
                  pvVar9 = _pthread_getspecific(pVar18);
                  if ((pvVar9 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
                    pVar18 = (void*)local_38;
                  }
                  local_f0 = FUN_016caaa0();
                }
              }
              FUN_0178c910();
              plVar15 = local_60;
              if ((local_58[0] == '\0') && (local_60 != (void*)0x0)) {
                FUN_00d50b00();
              }
              local_60 = local_90;
              local_58[0] = '\0';
              FUN_00d21140();
              if ((local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              if (!bVar5) {
                FUN_01790bd0();
              }
              puVar16 = (void*)FUN_00e8fc40();
              FUN_00d4ff40();
              *puVar16 = &g_02572358;
              (*pcVar3)();
              FUN_01787bb0();
              if (*(char *)(arg1 + 0x40) == '\0') {
                local_58[0] = 0;
                local_60 = (int64_t *)0x0;
                local_48 = 0xffffffff;
                local_40 = 0;
                local_48._4_4_ = 0;
                local_50 = puVar16;
                while( true ) {
                  if (local_48._4_4_ != 0) {
                    if (local_48._4_4_ < 1) {
                      iVar21 = -local_48._4_4_;
                    }
                    else {
                      iVar21 = (int)local_48 - local_48._4_4_;
                      local_48 = CONCAT44(local_48._4_4_,iVar21);
                      FUN_00d23690();
                      local_40 = local_40 + local_48._4_4_;
                      iVar21 = 0;
                    }
                    local_48 = CONCAT44(iVar21,(int)local_48);
                  }
                  lVar8 = (int64_t)(int)local_48;
                  iVar21 = (int)local_48 + 1;
                  local_48 = CONCAT44(local_48._4_4_,iVar21);
                  if (*(int *)((int64_t)local_50 + 0xc) <= iVar21) break;
                  lVar19 = local_50[2];
                  local_60 = *(int64_t **)(lVar19 + 8 + lVar8 * 8);
                  pvVar9 = _pthread_getspecific((void*)lVar19);
                  pVar18 = (void*)lVar19;
                  if ((pvVar9 == (void *)0x0) || (lVar8 = FUN_00e8b990(), lVar8 == 0)) {
                    puVar1 = *(void**)((int64_t)local_60 + 0x20);
                  }
                  else {
                    pVar18 = (void*)local_80;
                    puVar1 = *(void**)((int64_t)local_60 + 0x20);
                  }
                  if (puVar1 != (void*)0x0) {
                    FUN_00d50b00();
                  }
                  pvVar9 = _pthread_getspecific(pVar18);
                  if ((pvVar9 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
                    pVar18 = (void*)local_38;
                  }
                  uVar11 = FUN_016c4760();
                  pvVar9 = _pthread_getspecific(pVar18);
                  if (pvVar9 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  uVar17 = FUN_016c4760();
                  local_68 = '\0';
                  local_70 = puVar1;
                  FUN_012502a0(uVar17,uVar11,(int)local_48 != 0 || local_40 != 0);
                  if ((local_68 != '\0') && (local_70 != (void*)0x0)) {
                    FUN_00d50b20();
                  }
                  if (puVar1 != (void*)0x0) {
                    FUN_00d50b20();
                  }
                  local_70 = *(void**)((int64_t)local_60 + 0x14);
                  FUN_00e7b970();
                  local_e8 = local_70;
                  if (*(char *)((int64_t)local_60 + 0x50) != '\0') {
                    FUN_00e7b820();
                  }
                  if (*(char *)((int64_t)local_60 + 0x51) != '\0') {
                    FUN_00e7b820();
                  }
                  FUN_00e7b820();
                  iVar21 = 0;
                  do {
                    cVar4 = FUN_01716980();
                    if (cVar4 != '\0') {
                      plVar12 = *(int64_t **)(arg1 + 0x28);
                      pvVar9 = _pthread_getspecific((void*)uVar17);
                      if (pvVar9 != (void *)0x0) {
                        plVar12 = *(int64_t **)(arg1 + 0x28);
                        lVar8 = FUN_00e8b990();
                        if (lVar8 != 0) {
                          plVar12 = (int64_t *)
                                    plVar12[(uint64_t)(*(uint *)(lVar8 + 0x154) & 1) + 4];
                        }
                      }
                      cVar4 = (**(code **)(*plVar12 + 0x3b8))();
                      if (cVar4 == '\0') goto LAB_0178b8c3;
                    }
                    iVar21 = iVar21 + 1;
                  } while (iVar21 != 0xc);
                  FUN_00e7b820();
LAB_0178b8c3:
                }
                FUN_01798230();
                if (*(int *)((int64_t)puVar16 + 0xc) == 1) {
                  local_60 = local_c8;
                  FUN_00e7b970();
                  local_70 = local_60;
                  FUN_00e7b820();
                }
              }
              else {
                pvVar9 = _pthread_getspecific(pVar18);
                if ((pvVar9 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
                  pVar18 = (void*)local_80;
                }
                pvVar9 = _pthread_getspecific(pVar18);
                if ((pvVar9 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
                  pVar18 = (void*)local_38;
                }
                uVar11 = FUN_016c4760();
                pvVar9 = _pthread_getspecific(pVar18);
                if (pvVar9 != (void *)0x0) {
                  FUN_00e8b990();
                }
                uVar17 = FUN_016c4760();
                local_58[0] = '\0';
                local_60 = plVar15;
                FUN_012502a0(uVar17,uVar11,0);
                if ((local_58[0] != '\0') && (local_60 != (void*)0x0)) {
                  FUN_00d50b20();
                }
              }
              local_60 = local_78;
              local_58[0] = '\0';
              FUN_00d21140();
              if ((local_58[0] != '\0') && (local_60 != (void*)0x0)) {
                FUN_00d50b20();
              }
              puVar16 = (void*)FUN_00e8fc40();
              FUN_00d4ff40();
              *puVar16 = &g_02572358;
              (*pcVar3)();
              if (local_78 != (void*)0x0) {
                FUN_00d50b20();
              }
              FUN_00d50b20();
              if (plVar15 != (void*)0x0) {
                FUN_00d50b20();
              }
              if (local_90 != (int64_t *)0x0) {
                FUN_00d50b20();
                local_78 = puVar16;
                goto LAB_0178bc1c;
              }
              local_78 = puVar16;
              if (local_81 == '\0') goto LAB_0178b0e0;
              goto LAB_0178bc26;
            }
            local_c8 = puVar16;
            if (local_98._4_4_ == 0) goto LAB_0178b450;
LAB_0178b41e:
            if ((iVar21 == 0) || (cVar4 = FUN_00e7c020(), cVar4 != '\0')) goto LAB_0178b450;
          }
LAB_0178b0e0:
        }
        FUN_0015ed50();
        if (*(int *)((int64_t)local_78 + 0xc) != 0) {
          local_c0 = local_78;
          local_b8._0_1_ = '\0';
          FUN_00d21140();
          if (((char)local_b8 != '\0') && (local_c0 != (void*)0x0)) {
            FUN_00d50b20();
          }
        }
        local_70 = (void*)((uint64_t)local_70 & 0xffffffff00000000);
        local_90 = (int64_t *)((uint64_t)local_90 & 0xffffffff00000000);
        if ((extraout_var_01 != 0) && (cVar4 = FUN_00e7c650(), cVar4 != '\0')) {
          local_c0 = puVar13;
          FUN_00e7bdc0();
          local_60 = local_c0;
          uVar6 = FUN_00e7c810();
          local_90 = (int64_t *)CONCAT44(local_90._4_4_,uVar6);
        }
        puVar13 = local_e0;
        pVar18 = 1;
        if (g_023b1e88 < (double)local_90._0_4_) {
          bVar5 = true;
        }
        puVar16 = *(void**)(arg1 + 0x68);
        if (puVar16 != local_e0) {
          pVar18 = 1;
          if (local_e0 != (void*)0x0) {
            pVar18 = 1;
            FUN_00d50b00();
          }
          *(void**)(arg1 + 0x68) = puVar13;
          if (puVar16 != (void*)0x0) {
            FUN_00d50b20();
          }
        }
        if (puVar13 != (void*)0x0) {
          FUN_00d50b20();
        }
        if (puVar7 != (void*)0x0) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
        plVar15 = local_80;
        bVar22 = 1;
        uVar2 = local_cc & 1;
        local_cc = 0;
      } while (uVar2 != 0);
      pvVar9 = _pthread_getspecific(pVar18);
      if (pvVar9 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_018847e0();
      *this_ptr = plVar15;
      *(void*)(this_ptr + 1) = 1;
      if (local_38 != (void*)0x0) {
        FUN_00d50b20();
      }
      goto LAB_0178ac38;
    }
  }
  *(void*)(this_ptr + 1) = 0;
  *this_ptr = 0;
LAB_0178ac38:
  FUN_00d50b20();
  return this_ptr;
}

