// Function: FUN_0175f840
// Address: 0175f840
// Size: 14292 bytes
// Class: Unknown

void* FUN_0175f840(float param_1,uint64_t param_2,char param_3,int *param_4)

{
  int *piVar1;
  int64_t *plVar2;
  int64_t *plVar3;
  uint8_t auVar4 [16];
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  code *pcVar9;
  code *pcVar10;
  int64_t lVar11;
  int64_t *plVar12;
  bool bVar13;
  bool bVar14;
  char cVar15;
  byte bVar16;
  byte bVar17;
  char cVar18;
  int iVar19;
  int iVar20;
  void *pvVar21;
  int64_t lVar22;
  int64_t *plVar23;
  void*puVar24;
  int64_t *plVar25;
  int64_t *plVar26;
  void*puVar27;
  undefined7 uVar32;
  int64_t lVar28;
  int64_t *plVar29;
  int64_t *plVar30;
  int64_t *plVar31;
  void* pVar33;
  int64_t *in_RCX;
  int64_t *plVar34;
  int64_t lVar35;
  int64_t *arg1;
  int64_t *plVar36;
  void*this_ptr;
  uint uVar37;
  void* pVar38;
  int64_t lVar39;
  uint64_t uVar40;
  uint64_t uVar41;
  void*puVar42;
  bool bVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  uint64_t uVar50;
  uint64_t extraout_XMM0_Qa;
  uint64_t extraout_XMM0_Qa_00;
  uint64_t extraout_XMM0_Qb;
  uint8_t auVar51 [16];
  uint64_t extraout_XMM0_Qb_00;
  uint8_t auVar52 [16];
  uint8_t auVar53 [16];
  uint64_t extraout_XMM0_Qb_02;
  uint8_t auVar54 [16];
  uint8_t auVar55 [16];
  uint8_t auVar56 [16];
  uint8_t auVar57 [16];
  uint8_t auVar58 [16];
  uint8_t auVar59 [16];
  uint64_t extraout_XMM0_Qb_05;
  uint8_t auVar60 [16];
  uint8_t auVar61 [16];
  uint8_t auVar62 [16];
  uint8_t auVar63 [16];
  uint8_t auVar64 [16];
  uint8_t auVar65 [16];
  uint8_t auVar66 [16];
  uint8_t auVar67 [16];
  uint8_t auVar68 [16];
  uint8_t auVar69 [16];
  uint8_t auVar70 [16];
  uint8_t auVar71 [16];
  uint8_t auVar72 [16];
  float fVar73;
  uint *local_res8;
  int64_t *local_178;
  float local_164;
  float local_f8;
  int64_t *local_d8;
  void*local_c8;
  uint8_t local_98 [16];
  void*local_80;
  int64_t local_78;
  void*local_68;
  int64_t *local_58;
  int64_t *local_50;
  int64_t *local_48;
  char local_40;
  uint64_t extraout_XMM0_Qb_01;
  uint64_t extraout_XMM0_Qb_03;
  uint64_t extraout_XMM0_Qb_04;
  uint64_t extraout_XMM0_Qb_06;
  uint64_t extraout_XMM0_Qb_07;
  
  plVar12 = local_48;
  lVar35 = *arg1;
  plVar34 = in_RCX;
  pvVar21 = _pthread_getspecific((void*)in_RCX);
  if (pvVar21 != (void *)0x0) {
    lVar35 = *arg1;
    lVar22 = FUN_00e8b990();
    if (lVar22 != 0) {
      lVar35 = *(int64_t *)(lVar35 + 0x20 + (uint64_t)(*(uint *)(lVar22 + 0x154) & 1) * 8);
    }
  }
  lVar35 = *(int64_t *)(lVar35 + 0x60);
  if (lVar35 != 0) {
    FUN_00d50b00();
  }
  FUN_017658e0();
  if ((local_40 == '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  FUN_00d23740();
  FUN_01766120();
  if ((local_40 == '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  FUN_00c8e690();
  if ((local_40 == '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  FUN_00c8e690();
  if ((local_40 == '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  plVar29 = (int64_t *)((int64_t)local_48 + 0x10);
  if (*(int *)((int64_t)local_48 + 0xc) < 1) {
    local_80 = (void*)0x0;
  }
  else {
    fVar45 = 0.0;
    uVar40 = 0;
    local_80 = (void*)0x0;
    do {
      pvVar21 = _pthread_getspecific((void*)plVar34);
      if (pvVar21 != (void *)0x0) {
        FUN_00e8b990();
      }
      fVar44 = (float)FUN_01779a50();
      if (fVar45 < fVar44) {
        pvVar21 = _pthread_getspecific((void*)plVar34);
        if (pvVar21 != (void *)0x0) {
          FUN_00e8b990();
        }
        fVar45 = (float)FUN_01779a50();
        local_80 = (void*)(uVar40 & 0xffffffff);
      }
      uVar40 = uVar40 + 1;
    } while ((int64_t)uVar40 < (int64_t)*(int *)((int64_t)local_48 + 0xc));
  }
  if (*(int *)((int64_t)local_48 + 0xc) < 1) {
    bVar5 = false;
    local_58 = (int64_t *)0x0;
LAB_017602d6:
    local_d8 = (int64_t *)0x0;
    bVar13 = false;
    bVar6 = false;
    plVar36 = (int64_t *)0x0;
  }
  else {
    lVar22 = 0;
    bVar5 = false;
    plVar34 = (int64_t *)0x0;
    do {
      local_58 = *(int64_t **)(*(int64_t *)((int64_t)local_48 + 0x10) + lVar22 * 8);
      if (plVar34 == local_58) {
        local_58 = plVar34;
        bVar13 = bVar5;
        if ((!bVar5) && (plVar34 != (int64_t *)0x0)) {
          FUN_00d50b00();
          bVar13 = true;
        }
      }
      else {
        if (local_58 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        bVar13 = true;
        if ((bVar5) && (plVar34 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      bVar5 = bVar13;
      pvVar21 = _pthread_getspecific((void*)local_58[2]);
      if (pvVar21 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar50 = FUN_01779ec0();
      fVar45 = (float)uVar50 / g_023908e0;
      auVar51._0_4_ = (uint)fVar45 & g_023945e0;
      auVar51._4_4_ = (uint)((uint64_t)uVar50 >> 0x20) & _UNK_023945e4;
      auVar51._8_4_ = (uint)extraout_XMM0_Qb & _UNK_023945e8;
      auVar51._12_4_ = (uint)((uint64_t)extraout_XMM0_Qb >> 0x20) & _UNK_023945ec;
      auVar65._4_12_ = SUB1612(auVar51 | g_023945f0,4);
      auVar65._0_4_ = SUB164(auVar51 | g_023945f0,0) + fVar45;
      auVar51 = roundss(ZEXT816(0),auVar65,0xb);
      fVar44 = (float)uVar50 - auVar51._0_4_ * g_023908e0;
      fVar45 = fVar44 + g_0241b660;
      fVar44 = fVar44 + g_02394240;
      if (*(int *)((int64_t)local_58 + 0xc) < 1) {
        local_68._0_4_ = 0.0;
        local_98 = ZEXT816(0);
        local_f8 = 0.0;
      }
      else {
        local_f8 = 0.0;
        lVar39 = 0;
        local_98 = ZEXT816(0);
        local_68._0_4_ = 0.0;
        do {
          pVar38 = (void*)local_58;
          pvVar21 = _pthread_getspecific(pVar38);
          if (pvVar21 != (void *)0x0) {
            FUN_00e8b990();
          }
          uVar50 = FUN_01779ec0();
          fVar73 = (float)uVar50 / g_023908e0;
          auVar66._0_4_ = (uint)fVar73 & g_023945e0;
          auVar66._4_4_ = (uint)((uint64_t)uVar50 >> 0x20) & _UNK_023945e4;
          auVar66._8_4_ = (uint)extraout_XMM0_Qb_00 & _UNK_023945e8;
          auVar66._12_4_ = (uint)((uint64_t)extraout_XMM0_Qb_00 >> 0x20) & _UNK_023945ec;
          auVar67._4_12_ = SUB1612(auVar66 | g_023945f0,4);
          auVar67._0_4_ = SUB164(auVar66 | g_023945f0,0) + fVar73;
          auVar51 = roundss(ZEXT816(0),auVar67,0xb);
          for (fVar73 = (float)uVar50 - auVar51._0_4_ * g_023908e0; fVar73 < fVar45;
              fVar73 = fVar73 + g_023908e0) {
          }
          for (; fVar44 < fVar73; fVar73 = fVar73 + g_0241b664) {
          }
          pvVar21 = _pthread_getspecific(pVar38);
          if (pvVar21 != (void *)0x0) {
            FUN_00e8b990();
          }
          fVar46 = (float)FUN_01779a50();
          pvVar21 = _pthread_getspecific(pVar38);
          if (pvVar21 != (void *)0x0) {
            FUN_00e8b990();
          }
          fVar47 = (float)FUN_01779cc0();
          pvVar21 = _pthread_getspecific(pVar38);
          if (pvVar21 != (void *)0x0) {
            FUN_00e8b990();
          }
          fVar48 = (float)FUN_01779a50();
          fVar49 = g_02394254;
          if (g_02394254 <= fVar46 * fVar47) {
            fVar49 = fVar46 * fVar47;
          }
          fVar46 = g_02394254;
          if (g_02394254 <= fVar48) {
            fVar46 = fVar48;
          }
          local_68._0_4_ = local_68._0_4_ + fVar46;
          local_98._4_4_ = 0;
          local_98._0_4_ = (float)local_98._0_4_ + fVar49;
          local_f8 = local_f8 + fVar73 * fVar49;
          lVar39 = lVar39 + 1;
        } while (lVar39 < *(int *)((int64_t)local_58 + 0xc));
      }
      iVar20 = *(int *)((int64_t)local_48 + 0x18);
      FUN_00c8e340();
      local_f8 = local_f8 / (float)local_98._0_4_;
      fVar45 = local_f8 + g_023908e0;
      *(uint *)(*(int64_t *)((int64_t)local_48 + 0x10) + (int64_t)iVar20) =
           ~-(uint)(g_0241b660 < local_f8) & (uint)fVar45 |
           (uint)local_f8 & -(uint)(g_0241b660 < local_f8);
      iVar20 = *(int *)((int64_t)local_58 + 0xc);
      iVar19 = *(int *)((int64_t)local_48 + 0x18);
      FUN_00c8e340(fVar45,1);
      *(float *)(*(int64_t *)((int64_t)local_48 + 0x10) + (int64_t)iVar19) =
           local_68._0_4_ / (float)((uint)SQRT((float)iVar20) & g_02390140);
      lVar22 = lVar22 + 1;
      plVar34 = local_58;
    } while (lVar22 < *(int *)((int64_t)local_48 + 0xc));
    plVar34 = (int64_t *)0x0;
    iVar20 = 0;
    if (*(int *)((int64_t)local_48 + 0xc) < 1) goto LAB_017602d6;
    lVar22 = 0;
    plVar36 = (int64_t *)0x0;
    bVar6 = false;
    local_d8 = (int64_t *)0x0;
    bVar43 = false;
    do {
      plVar23 = *(int64_t **)(*(int64_t *)((int64_t)local_48 + 0x10) + lVar22 * 8);
      if (local_58 == plVar23) {
        if (!bVar5) {
          bVar5 = true;
          FUN_00d50b00();
        }
LAB_01760020:
        iVar19 = *(int *)((int64_t)local_58 + 0xc);
      }
      else {
        if (plVar23 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        local_58 = plVar23;
        if (bVar5) {
          FUN_00d50b20();
          bVar5 = true;
          goto LAB_01760020;
        }
        bVar5 = true;
        iVar19 = *(int *)((int64_t)plVar23 + 0xc);
      }
      plVar23 = local_d8;
      bVar13 = bVar43;
      if (iVar20 < iVar19) {
        iVar20 = iVar19;
        if (local_d8 == local_58) {
          if (!bVar43) {
            FUN_00d50b00();
            bVar13 = true;
          }
        }
        else {
          FUN_00d50b00();
          plVar23 = local_58;
          bVar13 = bVar5;
          if ((bVar43) && (local_d8 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
      }
      local_d8 = plVar23;
      if (0 < *(int *)((int64_t)local_58 + 0xc)) {
        if (bVar5) {
          lVar39 = 0;
          plVar23 = plVar36;
          do {
            pvVar21 = _pthread_getspecific((void*)plVar34);
            if (pvVar21 != (void *)0x0) {
              FUN_00e8b990();
            }
            iVar19 = FUN_01779ac0();
            plVar36 = plVar23;
            bVar43 = bVar6;
            if (iVar19 == (uint)local_80) {
              if (plVar23 == local_58) {
                plVar36 = local_58;
                if (!bVar6) {
                  FUN_00d50b00();
                  bVar43 = true;
                }
              }
              else {
                FUN_00d50b00();
                plVar36 = local_58;
                bVar43 = bVar5;
                if ((bVar6) && (plVar23 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
              }
            }
            bVar6 = bVar43;
            lVar39 = lVar39 + 1;
            plVar23 = plVar36;
          } while (lVar39 < *(int *)((int64_t)local_58 + 0xc));
        }
        else {
          lVar39 = 0;
          do {
            pvVar21 = _pthread_getspecific((void*)local_58);
            if (pvVar21 != (void *)0x0) {
              FUN_00e8b990();
            }
            iVar19 = FUN_01779ac0();
            if ((iVar19 == (uint)local_80) && (plVar36 != local_58)) {
              if (bVar6) {
                bVar43 = plVar36 == (int64_t *)0x0;
                plVar36 = local_58;
                bVar6 = false;
                if (bVar43) goto LAB_017601f7;
                FUN_00d50b20();
              }
              bVar6 = false;
              plVar36 = local_58;
            }
LAB_017601f7:
            lVar39 = lVar39 + 1;
            plVar34 = local_58;
          } while (lVar39 < *(int *)((int64_t)local_58 + 0xc));
        }
      }
      lVar22 = lVar22 + 1;
      bVar43 = bVar13;
    } while (lVar22 < *(int *)((int64_t)local_48 + 0xc));
  }
  iVar20 = FUN_00d237a0();
  fVar45 = *(float *)(*(int64_t *)((int64_t)local_48 + 0x10) + (int64_t)iVar20 * 4);
  iVar20 = FUN_00d237a0();
  if (fVar45 <= *(float *)(*(int64_t *)((int64_t)local_48 + 0x10) + (int64_t)iVar20 * 4) *
                g_02390120) {
    if (local_d8 == (int64_t *)0x0) goto LAB_017603ef;
    plVar34 = local_d8;
    bVar43 = bVar13;
    if (bVar13) {
      FUN_00d50b00();
    }
  }
  else if (plVar36 == (int64_t *)0x0) {
LAB_017603ef:
    plVar34 = (int64_t *)0x0;
    bVar43 = false;
  }
  else {
    plVar34 = plVar36;
    bVar43 = bVar6;
    if (bVar6) {
      FUN_00d50b00();
    }
  }
  iVar20 = FUN_00d237a0();
  lVar22 = *(int64_t *)((int64_t)local_48 + 0x10);
  fVar45 = *(float *)(lVar22 + (int64_t)iVar20 * 4);
  if (0 < *(int *)((int64_t)local_48 + 0xc)) {
    lVar39 = 0;
    do {
      pvVar21 = _pthread_getspecific((void*)lVar22);
      if (pvVar21 != (void *)0x0) {
        FUN_00e8b990();
      }
      pvVar21 = _pthread_getspecific((void*)lVar22);
      if (pvVar21 != (void *)0x0) {
        FUN_00e8b990();
      }
      auVar52._0_8_ = FUN_01779ec0();
      auVar52._8_8_ = extraout_XMM0_Qb_01;
      auVar53._4_12_ = auVar52._4_12_;
      auVar53._0_4_ = (float)auVar52._0_8_ - fVar45;
      FUN_01779ed0(auVar53._0_8_);
      lVar39 = lVar39 + 1;
    } while (lVar39 < *(int *)((int64_t)local_48 + 0xc));
  }
  plVar23 = (int64_t *)FUN_00e8fc40();
  FUN_00d4ff40();
  *plVar23 = (int64_t)&g_02572358;
  pcVar9 = g_02572370;
  (*g_02572370)();
  puVar24 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar24 = &g_02572358;
  (*pcVar9)();
  piVar1 = (int *)((int64_t)local_48 + 0xc);
  local_48 = plVar34;
  if (0 < *piVar1) {
    lVar22 = 0;
    do {
      plVar2 = *(int64_t **)(*(int64_t *)((int64_t)plVar12 + 0x10) + lVar22 * 8);
      if (local_58 == plVar2) {
        if ((!bVar5) && (local_58 != (int64_t *)0x0)) {
          bVar5 = true;
          FUN_00d50b00();
        }
      }
      else {
        if (plVar2 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        if ((bVar5) && (local_58 != (int64_t *)0x0)) {
          FUN_00d50b20();
          bVar5 = true;
          local_58 = plVar2;
        }
        else {
          bVar5 = true;
          local_58 = plVar2;
        }
      }
      if (g_023945a4 <=
          (float)((uint)(fVar45 - *(float *)(*(int64_t *)((int64_t)plVar12 + 0x10) + lVar22 * 4))
                 & g_02390140)) {
        FUN_00d214d0();
      }
      else {
        FUN_00d214d0();
      }
      local_48 = local_58;
      lVar22 = lVar22 + 1;
    } while (lVar22 < *(int *)((int64_t)plVar12 + 0xc));
  }
  plVar2 = local_48;
  if (0 < *(int *)((int64_t)plVar34 + 0xc)) {
    lVar22 = 0;
    do {
      pvVar21 = _pthread_getspecific((void*)plVar34);
      if (pvVar21 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01779c20();
      lVar22 = lVar22 + 1;
    } while (lVar22 < *(int *)((int64_t)plVar34 + 0xc));
  }
  if (0 < *(int *)((int64_t)plVar23 + 0xc)) {
    lVar22 = 0;
    do {
      pvVar21 = _pthread_getspecific((void*)plVar23);
      if (pvVar21 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01779c70();
      lVar22 = lVar22 + 1;
    } while (lVar22 < *(int *)((int64_t)plVar23 + 0xc));
  }
  iVar20 = *(int *)((int64_t)plVar12 + 0xc);
  local_178 = plVar23;
  if (0 < iVar20) {
    local_98._0_4_ = 0.0;
    lVar22 = 0;
    do {
      pvVar21 = _pthread_getspecific((void*)local_178);
      if (pvVar21 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01779bc0();
      local_178 = *(int64_t **)((int64_t)plVar12 + 0x10);
      pvVar21 = _pthread_getspecific((void*)local_178);
      if (pvVar21 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01779a50();
      fVar44 = (float)_powf();
      pvVar21 = _pthread_getspecific((void*)local_178);
      if (pvVar21 != (void *)0x0) {
        FUN_00e8b990();
      }
      fVar73 = (float)FUN_01779a50();
      pvVar21 = _pthread_getspecific((void*)local_178);
      if (pvVar21 != (void *)0x0) {
        FUN_00e8b990();
      }
      fVar44 = fVar44 * fVar73;
      FUN_01779d40();
      if ((float)local_98._0_4_ < fVar44) {
        local_80._0_4_ = (uint)lVar22;
      }
      local_80 = (void*)(uint64_t)(uint)local_80;
      if (fVar44 <= (float)local_98._0_4_) {
        fVar44 = (float)local_98._0_4_;
      }
      lVar22 = lVar22 + 1;
      iVar20 = *(int *)((int64_t)plVar12 + 0xc);
      local_98._0_4_ = fVar44;
    } while (lVar22 < iVar20);
  }
  if (!NAN(param_1)) {
    for (; param_1 < 0.0; param_1 = param_1 + g_0239394c) {
    }
    for (; g_0239394c < param_1; param_1 = param_1 + g_02394218) {
    }
    if (0 < iVar20) {
      uVar40 = 0xffffffff;
      uVar41 = 0;
      fVar44 = g_02394240;
      do {
        pvVar21 = _pthread_getspecific((void*)local_178);
        if (pvVar21 != (void *)0x0) {
          FUN_00e8b990();
        }
        for (fVar73 = (float)FUN_01779ec0(); fVar73 < 0.0; fVar73 = fVar73 + g_0239394c) {
        }
        for (; g_0239394c < fVar73; fVar73 = fVar73 + g_02394218) {
        }
        fVar73 = (float)((uint)(param_1 - fVar73) & g_02390140);
        fVar73 = (float)(~-(uint)(g_0241b640 < fVar73) & (uint)fVar73 |
                        (uint)(g_0239394c - fVar73) & -(uint)(g_0241b640 < fVar73));
        if (fVar73 < fVar44) {
          uVar40 = uVar41 & 0xffffffff;
          fVar44 = fVar73;
        }
        uVar41 = uVar41 + 1;
      } while ((int64_t)uVar41 < (int64_t)*(int *)((int64_t)plVar12 + 0xc));
      if ((int)uVar40 != -1) {
        local_178 = (int64_t *)*plVar29;
        pvVar21 = _pthread_getspecific((void*)local_178);
        if (pvVar21 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01779d40();
        local_80 = (void*)uVar40;
      }
    }
  }
  FUN_01767920();
  if (local_48 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  while (7 < *(int *)((int64_t)local_48 + 0xc)) {
    lVar22 = 0;
    fVar44 = g_02394264;
    do {
      pvVar21 = _pthread_getspecific((void*)local_178);
      if (pvVar21 != (void *)0x0) {
        FUN_00e8b990();
      }
      fVar73 = (float)FUN_01779d30();
      if (fVar73 < fVar44) {
        pvVar21 = _pthread_getspecific((void*)local_178);
        if (pvVar21 != (void *)0x0) {
          FUN_00e8b990();
        }
        fVar44 = (float)FUN_01779d30();
      }
      lVar22 = lVar22 + 1;
    } while (lVar22 < *(int *)((int64_t)local_48 + 0xc));
    FUN_00d23620();
  }
  if (0 < (int)local_80) {
    do {
      local_48 = *(int64_t **)*plVar29;
      if (local_48 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      FUN_00d23620();
      FUN_00d21140();
      if (local_48 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      uVar37 = (int)local_80 - 1;
      local_80 = (void*)(uint64_t)uVar37;
    } while (uVar37 != 0);
  }
  if (!NAN(param_1)) goto LAB_01760d31;
  plVar25 = (int64_t *)FUN_00e8fc40();
  FUN_01a016a0();
  (**(code **)(*plVar25 + 0x18))();
  plVar26 = (int64_t *)FUN_00e8fc40();
  FUN_0013e060();
  (**(code **)(*plVar26 + 0x18))();
  pvVar21 = _pthread_getspecific((void*)local_178);
  if (pvVar21 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar50 = FUN_01779ec0();
  pcVar10 = g_025ffd78;
  pcVar9 = g_025fe688;
  if (*(int *)((int64_t)plVar12 + 0xc) < 1) {
    bVar7 = false;
    local_80 = (void*)0x0;
    bVar8 = false;
    local_50 = (int64_t *)0x0;
  }
  else {
    fVar44 = (float)uVar50 / g_023908e0;
    auVar71._0_4_ = g_023945e0 & (uint)fVar44;
    auVar71._4_4_ = _UNK_023945e4 & (uint)((uint64_t)uVar50 >> 0x20);
    auVar71._8_4_ = _UNK_023945e8 & (uint)extraout_XMM0_Qb_05;
    auVar71._12_4_ = _UNK_023945ec & (uint)((uint64_t)extraout_XMM0_Qb_05 >> 0x20);
    auVar72._4_12_ = SUB1612(auVar71 | g_023945f0,4);
    auVar72._0_4_ = SUB164(auVar71 | g_023945f0,0) + fVar44;
    auVar60._0_12_ = ZEXT812(0);
    auVar60._12_4_ = 0;
    auVar51 = roundss(auVar60,auVar72,0xb);
    fVar73 = auVar51._0_4_ * g_023908e0;
    local_178 = (int64_t *)&g_025fe670;
    local_50 = (int64_t *)0x0;
    local_80 = (void*)0x0;
    bVar7 = false;
    plVar31 = (int64_t *)0x0;
    fVar44 = 0.0;
    bVar14 = false;
    do {
      pVar38 = (void*)local_178;
      plVar30 = (int64_t *)FUN_00e8fc40();
      FUN_00d4ff40();
      *plVar30 = (int64_t)&g_025ffd60;
      plVar30[7] = 0;
      plVar30[8] = 0;
      (*pcVar10)();
      if (plVar30 == local_50) {
        plVar30 = local_50;
        if (bVar14) {
          FUN_00d50b20();
          bVar8 = bVar14;
        }
        else {
          bVar8 = true;
        }
      }
      else {
        bVar8 = true;
        if ((bVar14) && (local_50 != (int64_t *)0x0)) {
          FUN_00d50b20();
          bVar8 = true;
        }
      }
      local_50 = plVar30;
      pvVar21 = _pthread_getspecific(pVar38);
      if (pvVar21 != (void *)0x0) {
        FUN_00e8b990();
      }
      fVar46 = (float)FUN_01779ec0();
      fVar46 = fVar46 - fVar73;
      if (plVar31 != (int64_t *)0x0) {
        for (; fVar46 < fVar44; fVar46 = fVar46 + g_0239394c) {
        }
      }
      pvVar21 = _pthread_getspecific(pVar38);
      pVar33 = (void*)local_50;
      if ((pvVar21 != (void *)0x0) && (lVar22 = FUN_00e8b990(), lVar22 != 0)) {
        pVar38 = pVar33;
      }
      FUN_01779ed0();
      pvVar21 = _pthread_getspecific(pVar38);
      if ((pvVar21 != (void *)0x0) && (lVar22 = FUN_00e8b990(), lVar22 != 0)) {
        pVar38 = pVar33;
      }
      auVar61._0_8_ = FUN_01779ec0();
      auVar61._8_8_ = extraout_XMM0_Qb_06;
      auVar62._4_12_ = auVar61._4_12_;
      auVar62._0_4_ = (float)auVar61._0_8_ / g_023908e0;
      FUN_00e7d780(auVar62._0_8_);
      pvVar21 = _pthread_getspecific(pVar38);
      if ((pvVar21 != (void *)0x0) && (lVar22 = FUN_00e8b990(), lVar22 != 0)) {
        pVar38 = pVar33;
      }
      FUN_01779f40();
      pvVar21 = _pthread_getspecific(pVar38);
      if ((pvVar21 != (void *)0x0) && (lVar22 = FUN_00e8b990(), lVar22 != 0)) {
        pVar38 = (void*)plVar25;
      }
      FUN_0176fde0();
      puVar27 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar27 = &g_025fe670;
      puVar27[7] = 0;
      puVar27[8] = 0;
      puVar27[9] = 0;
      (*pcVar9)();
      if (puVar27 == local_80) {
        puVar27 = local_80;
        if (bVar7) {
          FUN_00d50b20();
          bVar14 = bVar7;
        }
        else {
          bVar14 = true;
        }
      }
      else {
        bVar14 = true;
        if ((bVar7) && (local_80 != (void*)0x0)) {
          FUN_00d50b20();
        }
      }
      bVar7 = bVar14;
      local_80 = puVar27;
      local_48 = *(int64_t **)(*plVar29 + (int64_t)plVar31 * 8);
      if (local_48 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      cVar15 = FUN_00d23d70();
      if (local_48 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if (cVar15 != '\0') {
        pvVar21 = _pthread_getspecific(pVar38);
        if ((pvVar21 != (void *)0x0) && (lVar22 = FUN_00e8b990(), lVar22 != 0)) {
          pVar38 = (void*)local_80;
        }
        lVar22 = g_027cd560;
        if (g_027cd560 != 0) {
          FUN_00d50b00();
        }
        FUN_017395b0();
        if (lVar22 != 0) {
          FUN_00d50b20();
        }
      }
      pvVar21 = _pthread_getspecific(pVar38);
      if (pvVar21 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01735cb0();
      local_178 = (int64_t *)((int64_t)plVar31 + 1);
      plVar31 = local_178;
      fVar44 = fVar46;
      bVar14 = bVar8;
    } while ((int64_t)local_178 < (int64_t)*(int *)((int64_t)plVar12 + 0xc));
  }
  plVar31 = (int64_t *)FUN_00e8fc40();
  FUN_00d4ff40();
  *plVar31 = (int64_t)&g_025ffd60;
  plVar31[7] = 0;
  plVar31[8] = 0;
  (*pcVar10)();
  if (plVar31 == local_50) {
    plVar31 = local_50;
    if (bVar8) {
      FUN_00d50b20();
    }
  }
  else if ((bVar8) && (local_50 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  local_50 = plVar31;
  pvVar21 = _pthread_getspecific((void*)local_178);
  if ((pvVar21 != (void *)0x0) && (lVar22 = FUN_00e8b990(), lVar22 != 0)) {
    local_178 = local_50;
  }
  pvVar21 = _pthread_getspecific((void*)local_178);
  if ((pvVar21 != (void *)0x0) && (lVar22 = FUN_00e8b990(), lVar22 != 0)) {
    local_178 = plVar25;
  }
  FUN_01770f00();
  pvVar21 = _pthread_getspecific((void*)local_178);
  if (pvVar21 != (void *)0x0) {
    FUN_00e8b990();
  }
  auVar63._0_8_ = FUN_01779ec0();
  auVar63._8_8_ = extraout_XMM0_Qb_07;
  auVar64._4_12_ = auVar63._4_12_;
  auVar64._0_4_ = (float)auVar63._0_8_ + g_0239394c;
  FUN_01779ed0(auVar64._0_8_);
  pvVar21 = _pthread_getspecific((void*)local_178);
  if ((pvVar21 != (void *)0x0) && (lVar22 = FUN_00e8b990(), lVar22 != 0)) {
    local_178 = local_50;
  }
  FUN_01779f40();
  pvVar21 = _pthread_getspecific((void*)local_178);
  if ((pvVar21 != (void *)0x0) && (lVar22 = FUN_00e8b990(), lVar22 != 0)) {
    local_178 = plVar25;
  }
  FUN_0176fde0();
  plVar30 = (int64_t *)FUN_00e8fc40();
  FUN_00d4ff40();
  plVar30[10] = 0;
  plVar30[7] = 0;
  plVar30[8] = 0;
  *(void*)(plVar30 + 9) = 0;
  *plVar30 = (int64_t)&g_025fee18;
  *(void*)((int64_t)plVar30 + 0x6c) = 0;
  plVar30[0xb] = 0;
  plVar30[0xc] = 0;
  *(void*)(plVar30 + 0xd) = 0;
  FUN_00d500e0();
  pvVar21 = _pthread_getspecific((void*)local_178);
  plVar31 = plVar30;
  if ((pvVar21 != (void *)0x0) && (lVar22 = FUN_00e8b990(), lVar22 != 0)) {
    local_178 = plVar30;
    plVar31 = (int64_t *)plVar30[(uint64_t)(*(uint *)(lVar22 + 0x154) & 1) + 4];
  }
  pVar38 = (void*)local_178;
  if ((int64_t *)plVar31[0xc] != plVar25) {
    FUN_00d64850();
    plVar3 = (int64_t *)plVar31[0xc];
    if (plVar3 != plVar25) {
      if (plVar25 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      plVar31[0xc] = (int64_t)plVar25;
      if (plVar3 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
    }
    FUN_00d64910();
  }
  pvVar21 = _pthread_getspecific(pVar38);
  plVar31 = plVar30;
  if ((pvVar21 != (void *)0x0) && (lVar22 = FUN_00e8b990(), lVar22 != 0)) {
    plVar31 = (int64_t *)plVar30[(uint64_t)(*(uint *)(lVar22 + 0x154) & 1) + 4];
  }
  if ((int64_t *)plVar31[0xb] != plVar26) {
    FUN_00d64850();
    plVar3 = (int64_t *)plVar31[0xb];
    if (plVar3 != plVar26) {
      if (plVar26 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      plVar31[0xb] = (int64_t)plVar26;
      if (plVar3 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
    }
    FUN_00d64910();
  }
  puVar27 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  pVar38 = 0x25683c0;
  *puVar27 = &g_025683c0;
  (*g_025683d8)();
  FUN_00c92170();
  FUN_00c92160();
  pvVar21 = _pthread_getspecific(pVar38);
  if (pvVar21 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar50 = FUN_017517b0();
  if (local_48 != (int64_t *)0x0) {
    uVar50 = FUN_00d50b00();
  }
  if (*(int *)(*(int64_t *)local_48[2] + 0xc) != 0) {
    iVar20 = *(int *)(puVar27 + 3);
    FUN_00c8e340(uVar50,1);
    *(void*)(puVar27[2] + (int64_t)iVar20) = 0;
  }
  uVar40 = (uint64_t)*(uint *)((int64_t)local_48 + 0xc);
  if (1 < (int)*(uint *)((int64_t)local_48 + 0xc)) {
    local_78 = 1;
    do {
      lVar22 = *(int64_t *)(local_48[2] + local_78 * 8);
      lVar39 = local_78;
      if (lVar22 != 0) {
        FUN_00d50b00();
      }
      if (0 < *(int *)(lVar22 + 0xc)) {
        lVar28 = 0;
        do {
          pvVar21 = _pthread_getspecific((void*)lVar39);
          if (pvVar21 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_017aabf0();
          if (local_48 != (int64_t *)0x0) {
            pvVar21 = _pthread_getspecific((void*)lVar39);
            if (pvVar21 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_017aabf0();
            lVar11 = g_027e3bd8;
            if (g_027e3bd8 != 0) {
              FUN_00d50b00();
            }
            cVar15 = (**(code **)(*local_48 + 0x50))();
            uVar50 = extraout_XMM0_Qa;
            if (lVar11 != 0) {
              uVar50 = FUN_00d50b20();
            }
            if (cVar15 == '\0') {
              pvVar21 = _pthread_getspecific((void*)lVar39);
              if (pvVar21 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_017aabf0();
              lVar11 = g_027e3be0;
              if (g_027e3be0 != 0) {
                FUN_00d50b00();
              }
              cVar15 = (**(code **)(*local_48 + 0x50))();
              uVar50 = extraout_XMM0_Qa_00;
              if (lVar11 != 0) {
                uVar50 = FUN_00d50b20();
              }
              if (cVar15 == '\0') goto LAB_017628d4;
              iVar20 = *(int *)(puVar27 + 3);
              FUN_00c8e340(uVar50,1);
            }
            else {
              iVar20 = *(int *)(puVar27 + 3);
              FUN_00c8e340(uVar50,1);
            }
            lVar39 = (int64_t)iVar20;
            *(int *)(puVar27[2] + lVar39) = (int)local_78;
          }
LAB_017628d4:
          lVar28 = lVar28 + 1;
        } while (lVar28 < *(int *)(lVar22 + 0xc));
      }
      FUN_00d50b20();
      local_78 = local_78 + 1;
      uVar40 = (uint64_t)*(int *)((int64_t)local_48 + 0xc);
    } while (local_78 < (int64_t)uVar40);
  }
  local_178 = (int64_t *)(uint64_t)*(uint *)(puVar27 + 3);
  if (*(uint *)(puVar27 + 3) + 3 < 7) {
    if ((int)uVar40 < 1) {
      pVar38 = 0;
    }
    else {
      lVar22 = 0;
      do {
        lVar39 = *(int64_t *)(local_48[2] + lVar22 * 8);
        if (*(int *)(lVar39 + 0xc) != 0) {
          iVar20 = *(int *)(puVar27 + 3);
          FUN_00c8e340(lVar39,1);
          *(int *)(puVar27[2] + (int64_t)iVar20) = (int)lVar22;
          uVar40 = (uint64_t)*(uint *)((int64_t)local_48 + 0xc);
        }
        lVar22 = lVar22 + 1;
      } while (lVar22 < (int)uVar40);
      local_178 = (int64_t *)(uint64_t)*(uint *)(puVar27 + 3);
      pVar38 = 0;
      if (6 < *(uint *)(puVar27 + 3) + 3) goto LAB_01762b8c;
    }
  }
  else {
LAB_01762b8c:
    if ((int)local_178 < 8) {
      pVar38 = *(void* *)puVar27[2];
    }
    else {
      local_164 = g_02394254;
      local_178 = (int64_t *)0x0;
      pVar38 = 0;
      do {
        pVar33 = *(void* *)(puVar27[2] + (int64_t)local_178 * 4);
        lVar22 = (int64_t)(int)pVar33;
        pvVar21 = _pthread_getspecific(pVar33);
        if (pvVar21 != (void *)0x0) {
          FUN_00e8b990();
        }
        fVar44 = (float)FUN_01779a50();
        lVar39 = lVar22;
        pvVar21 = _pthread_getspecific(pVar33);
        if (pvVar21 != (void *)0x0) {
          FUN_00e8b990();
        }
        fVar46 = (float)FUN_01779da0();
        for (fVar73 = fVar46 + g_02411dec; fVar73 < 0.0; fVar73 = fVar73 + g_0239394c) {
        }
        for (; g_0239394c < fVar73; fVar73 = fVar73 + g_02394218) {
        }
        for (fVar46 = fVar46 + g_023908dc; fVar46 < 0.0; fVar46 = fVar46 + g_0239394c) {
        }
        for (; g_0239394c < fVar46; fVar46 = fVar46 + g_02394218) {
        }
        if (0 < *(int *)((int64_t)plVar12 + 0xc)) {
          lVar28 = 0;
          do {
            pvVar21 = _pthread_getspecific((void*)lVar39);
            if (pvVar21 != (void *)0x0) {
              FUN_00e8b990();
            }
            for (fVar47 = (float)FUN_01779da0(); fVar47 < 0.0; fVar47 = fVar47 + g_0239394c) {
            }
            for (; g_0239394c < fVar47; fVar47 = fVar47 + g_02394218) {
            }
            fVar49 = (float)((uint)(fVar47 - fVar73) & g_02390140);
            if ((float)(-(uint)(g_0241b640 < fVar49) &
                        (uint)(g_0239394c - fVar49) & g_02390140 |
                       ~-(uint)(g_0241b640 < fVar49) & (uint)fVar49) < g_02394240) {
              pvVar21 = _pthread_getspecific((void*)lVar39);
              if (pvVar21 != (void *)0x0) {
                FUN_00e8b990();
              }
              fVar49 = (float)FUN_01779a50();
              fVar44 = fVar44 + fVar49 * g_02390120;
            }
            fVar47 = (float)((uint)(fVar47 - fVar46) & g_02390140);
            if ((float)(-(uint)(g_0241b640 < fVar47) &
                        (uint)(g_0239394c - fVar47) & g_02390140 |
                       ~-(uint)(g_0241b640 < fVar47) & (uint)fVar47) < g_02394240) {
              pvVar21 = _pthread_getspecific((void*)lVar39);
              if (pvVar21 != (void *)0x0) {
                FUN_00e8b990();
              }
              fVar47 = (float)FUN_01779a50();
              fVar44 = fVar44 + fVar47 * g_023b294c;
            }
            lVar28 = lVar28 + 1;
          } while (lVar28 < *(int *)((int64_t)plVar12 + 0xc));
        }
        lVar39 = *(int64_t *)(local_48[2] + lVar22 * 8);
        if (lVar39 != 0) {
          FUN_00d50b00();
        }
        cVar15 = FUN_01754520();
        cVar18 = '\x01';
        if (cVar15 == '\0') {
          lVar22 = *(int64_t *)(local_48[2] + lVar22 * 8);
          if (lVar22 != 0) {
            FUN_00d50b00();
          }
          cVar18 = FUN_01754700();
          if (lVar22 != 0) {
            FUN_00d50b20();
          }
        }
        if (lVar39 != 0) {
          FUN_00d50b20();
        }
        fVar73 = fVar44 * g_02411290;
        if (cVar18 == '\0') {
          fVar73 = fVar44;
        }
        if (local_164 < fVar73) {
          pVar38 = pVar33;
        }
        local_178 = (int64_t *)((int64_t)local_178 + 1);
        iVar20 = *(int *)(puVar27 + 3);
        iVar19 = iVar20 + 3;
        if (-1 < iVar20) {
          iVar19 = iVar20;
        }
        if (fVar73 <= local_164) {
          fVar73 = local_164;
        }
        local_164 = fVar73;
      } while ((int64_t)local_178 < (int64_t)(iVar19 >> 2));
    }
  }
  FUN_00d50b20();
  FUN_00d50b20();
  if (plVar30 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((bVar7) && (local_80 != (void*)0x0)) {
    FUN_00d50b20();
  }
  if (local_50 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (plVar26 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (plVar25 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (0 < (int)pVar38) {
    do {
      local_48 = *(int64_t **)*plVar29;
      if (local_48 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      FUN_00d23620();
      FUN_00d21140();
      if (local_48 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      pVar38 = pVar38 - 1;
    } while (pVar38 != 0);
  }
LAB_01760d31:
  pvVar21 = _pthread_getspecific((void*)local_178);
  if (pvVar21 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar50 = FUN_01779ec0();
  fVar44 = (float)uVar50 / g_023908e0;
  auVar68._0_4_ = g_023945e0 & (uint)fVar44;
  auVar68._4_4_ = _UNK_023945e4 & (uint)((uint64_t)uVar50 >> 0x20);
  auVar68._8_4_ = _UNK_023945e8 & (uint)extraout_XMM0_Qb_02;
  auVar68._12_4_ = _UNK_023945ec & (uint)((uint64_t)extraout_XMM0_Qb_02 >> 0x20);
  auVar69._4_12_ = SUB1612(auVar68 | g_023945f0,4);
  auVar69._0_4_ = SUB164(auVar68 | g_023945f0,0) + fVar44;
  auVar54._0_12_ = ZEXT812(0);
  auVar54._12_4_ = 0;
  auVar51 = roundss(auVar54,auVar69,0xb);
  fVar44 = auVar51._0_4_ * g_023908e0;
  if (0 < *(int *)((int64_t)plVar12 + 0xc)) {
    lVar22 = 0;
    fVar73 = 0.0;
    do {
      pvVar21 = _pthread_getspecific((void*)local_178);
      if (pvVar21 != (void *)0x0) {
        FUN_00e8b990();
      }
      fVar46 = (float)FUN_01779ec0();
      fVar46 = fVar46 - fVar44;
      if (lVar22 != 0) {
        for (; fVar46 < fVar73; fVar46 = fVar46 + g_0239394c) {
        }
      }
      pvVar21 = _pthread_getspecific((void*)local_178);
      if (pvVar21 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01779ed0();
      lVar22 = lVar22 + 1;
      fVar73 = fVar46;
    } while (lVar22 < *(int *)((int64_t)plVar12 + 0xc));
  }
  local_98._4_4_ = auVar51._4_4_;
  local_98._8_4_ = auVar51._8_4_;
  local_98._12_4_ = auVar51._12_4_;
  auVar70._0_4_ = ~-(uint)(g_0241b640 < fVar44) & (uint)fVar44;
  auVar70._4_4_ = local_98._4_4_;
  auVar70._8_4_ = local_98._8_4_;
  auVar70._12_4_ = local_98._12_4_;
  auVar70 = auVar70 | ZEXT416((uint)(g_02394218 + fVar44) & -(uint)(g_0241b640 < fVar44));
  fVar44 = auVar70._0_4_;
  auVar55._4_12_ = auVar70._4_12_;
  auVar55._0_4_ = fVar44 / g_023908e0;
  FUN_00e7d780(auVar55._0_8_);
  plVar25 = (int64_t *)FUN_00e8fc40();
  FUN_01a016a0();
  (**(code **)(*plVar25 + 0x18))();
  plVar26 = (int64_t *)FUN_00e8fc40();
  FUN_0013e060();
  (**(code **)(*plVar26 + 0x18))();
  pcVar10 = g_025ffd78;
  pcVar9 = g_025fe688;
  local_98._8_8_ = auVar51._8_8_;
  pVar38 = (void*)plVar25;
  if (*(int *)((int64_t)plVar12 + 0xc) < 1) {
    local_68 = (void*)0x0;
    local_c8._0_4_ = 0;
    local_98._0_8_ = (int64_t *)0x0;
    bVar7 = false;
  }
  else {
    lVar22 = 0;
    local_c8 = &g_025ffd60;
    bVar7 = false;
    auVar4._8_8_ = 0;
    auVar4._0_8_ = local_98._8_8_;
    local_98 = auVar4 << 0x40;
    puVar42 = (void*)0x0;
    local_68 = (void*)0x0;
    do {
      pVar33 = (void*)local_c8;
      puVar27 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar27 = &g_025ffd60;
      puVar27[7] = 0;
      puVar27[8] = 0;
      uVar50 = (*pcVar10)();
      uVar32 = (undefined7)((uint64_t)uVar50 >> 8);
      if (puVar27 == local_68) {
        puVar27 = local_68;
        if ((char)puVar42 == '\0') {
          local_c8 = (void*)CONCAT71(uVar32,1);
        }
        else {
          FUN_00d50b20();
          local_c8 = puVar42;
        }
      }
      else {
        local_c8 = (void*)CONCAT71(uVar32,1);
        if (((char)puVar42 != '\0') && (local_68 != (void*)0x0)) {
          FUN_00d50b20();
        }
      }
      local_68 = puVar27;
      pvVar21 = _pthread_getspecific(pVar33);
      if ((pvVar21 != (void *)0x0) && (lVar39 = FUN_00e8b990(), lVar39 != 0)) {
        pVar33 = (void*)local_68;
      }
      pvVar21 = _pthread_getspecific(pVar33);
      if (pvVar21 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01779ec0();
      FUN_01779ed0();
      pvVar21 = _pthread_getspecific(pVar33);
      if (pvVar21 != (void *)0x0) {
        FUN_00e8b990();
      }
      auVar56._0_8_ = FUN_01779ec0();
      auVar56._8_8_ = extraout_XMM0_Qb_03;
      auVar57._4_12_ = auVar56._4_12_;
      auVar57._0_4_ = (float)auVar56._0_8_ / g_023908e0;
      FUN_00e7d780(auVar57._0_8_);
      pvVar21 = _pthread_getspecific(pVar33);
      if ((pvVar21 != (void *)0x0) && (lVar39 = FUN_00e8b990(), lVar39 != 0)) {
        pVar33 = (void*)local_68;
      }
      FUN_01779f40();
      pvVar21 = _pthread_getspecific(pVar33);
      if ((pvVar21 != (void *)0x0) && (lVar39 = FUN_00e8b990(), lVar39 != 0)) {
        pVar33 = pVar38;
      }
      FUN_0176fde0();
      puVar27 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar27 = &g_025fe670;
      puVar27[7] = 0;
      puVar27[8] = 0;
      puVar27[9] = 0;
      (*pcVar9)();
      if (puVar27 == (void*)local_98._0_8_) {
        if (bVar7) {
          FUN_00d50b20();
        }
        else {
          bVar7 = true;
        }
      }
      else if ((bVar7) && ((void*)local_98._0_8_ != (void*)0x0)) {
        FUN_00d50b20();
        local_98._0_8_ = puVar27;
        bVar7 = true;
      }
      else {
        local_98._0_8_ = puVar27;
        bVar7 = true;
      }
      local_48 = *(int64_t **)(*plVar29 + lVar22 * 8);
      if (local_48 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      cVar15 = FUN_00d23d70();
      if (local_48 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if (cVar15 != '\0') {
        pvVar21 = _pthread_getspecific(pVar33);
        lVar39 = g_027cd560;
        if ((pvVar21 != (void *)0x0) &&
           (lVar28 = FUN_00e8b990(), lVar39 = g_027cd560, lVar28 != 0)) {
          pVar33 = local_98._0_4_;
        }
        g_027cd560 = lVar39;
        if (lVar39 != 0) {
          FUN_00d50b00();
        }
        FUN_017395b0();
        if (lVar39 != 0) {
          FUN_00d50b20();
        }
      }
      pvVar21 = _pthread_getspecific(pVar33);
      if (pvVar21 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01735cb0();
      if (*in_RCX != 0) {
        local_48 = (int64_t *)local_98._0_8_;
        FUN_00d21140();
      }
      lVar22 = lVar22 + 1;
      puVar42 = (void*)((uint64_t)local_c8 & 0xffffffff);
    } while (lVar22 < *(int *)((int64_t)plVar12 + 0xc));
  }
  cVar15 = (char)(void*)local_c8;
  puVar27 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar27 = &g_025ffd60;
  puVar27[7] = 0;
  puVar27[8] = 0;
  (*pcVar10)();
  if (puVar27 == local_68) {
    puVar27 = local_68;
    if (cVar15 != '\0') {
      FUN_00d50b20();
    }
  }
  else if ((cVar15 != '\0') && (local_68 != (void*)0x0)) {
    FUN_00d50b20();
  }
  local_68 = puVar27;
  pvVar21 = _pthread_getspecific((void*)local_c8);
  if ((pvVar21 != (void *)0x0) && (lVar22 = FUN_00e8b990(), lVar22 != 0)) {
    local_c8._0_4_ = (void*)local_68;
  }
  pvVar21 = _pthread_getspecific((void*)local_c8);
  if (pvVar21 != (void *)0x0) {
    FUN_00e8b990();
  }
  auVar58._0_8_ = FUN_01779ec0();
  auVar58._8_8_ = extraout_XMM0_Qb_04;
  auVar59._4_12_ = auVar58._4_12_;
  auVar59._0_4_ = (float)auVar58._0_8_ + g_0239394c;
  FUN_01779ed0(auVar59._0_8_);
  pvVar21 = _pthread_getspecific((void*)local_c8);
  if ((pvVar21 != (void *)0x0) && (lVar22 = FUN_00e8b990(), lVar22 != 0)) {
    local_c8._0_4_ = (void*)local_68;
  }
  FUN_01779f40();
  pvVar21 = _pthread_getspecific((void*)local_c8);
  if ((pvVar21 != (void *)0x0) && (lVar22 = FUN_00e8b990(), lVar22 != 0)) {
    local_c8._0_4_ = pVar38;
  }
  FUN_0176fde0();
  plVar29 = (int64_t *)FUN_00e8fc40();
  FUN_00d4ff40();
  plVar29[10] = 0;
  plVar29[7] = 0;
  plVar29[8] = 0;
  *(void*)(plVar29 + 9) = 0;
  *plVar29 = (int64_t)&g_025fee18;
  *(void*)((int64_t)plVar29 + 0x6c) = 0;
  plVar29[0xb] = 0;
  plVar29[0xc] = 0;
  *(void*)(plVar29 + 0xd) = 0;
  FUN_00d500e0();
  pvVar21 = _pthread_getspecific((void*)local_c8);
  if ((pvVar21 == (void *)0x0) || (lVar22 = FUN_00e8b990(), lVar22 == 0)) {
    plVar30 = (int64_t *)plVar29[0xc];
    plVar31 = plVar29;
  }
  else {
    plVar31 = (int64_t *)plVar29[(uint64_t)(*(uint *)(lVar22 + 0x154) & 1) + 4];
    plVar30 = (int64_t *)plVar31[0xc];
  }
  if (plVar30 != plVar25) {
    FUN_00d64850();
    plVar30 = (int64_t *)plVar31[0xc];
    if (plVar30 != plVar25) {
      if (plVar25 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      plVar31[0xc] = (int64_t)plVar25;
      if (plVar30 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
    }
    FUN_00d64910();
  }
  pvVar21 = _pthread_getspecific((void*)local_c8);
  if ((pvVar21 == (void *)0x0) || (lVar22 = FUN_00e8b990(), lVar22 == 0)) {
    plVar30 = (int64_t *)plVar29[0xb];
    plVar31 = plVar29;
  }
  else {
    plVar31 = (int64_t *)plVar29[(uint64_t)(*(uint *)(lVar22 + 0x154) & 1) + 4];
    plVar30 = (int64_t *)plVar31[0xb];
  }
  if (plVar30 != plVar26) {
    FUN_00d64850();
    plVar30 = (int64_t *)plVar31[0xb];
    if (plVar30 != plVar26) {
      if (plVar26 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      plVar31[0xb] = (int64_t)plVar26;
      if (plVar30 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
    }
    FUN_00d64910();
  }
  if (param_3 != '\0') {
    pvVar21 = _pthread_getspecific((void*)local_c8);
    if (pvVar21 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_017583c0();
  }
  pvVar21 = _pthread_getspecific((void*)local_c8);
  if ((pvVar21 != (void *)0x0) && (lVar22 = FUN_00e8b990(), lVar22 != 0)) {
    local_c8._0_4_ = pVar38;
  }
  FUN_01770230(fVar45 + fVar44);
  pvVar21 = _pthread_getspecific((void*)local_c8);
  if ((pvVar21 != (void *)0x0) && (lVar22 = FUN_00e8b990(), lVar22 != 0)) {
    local_c8._0_4_ = pVar38;
  }
  FUN_01770300();
  pvVar21 = _pthread_getspecific((void*)local_c8);
  if ((pvVar21 == (void *)0x0) || (lVar22 = FUN_00e8b990(), lVar22 == 0)) {
    lVar22 = plVar29[0xc];
  }
  else {
    lVar22 = *(int64_t *)(plVar29[(uint64_t)(*(uint *)(lVar22 + 0x154) & 1) + 4] + 0x60);
  }
  if (lVar22 != 0) {
    FUN_00d50b00();
  }
  pvVar21 = _pthread_getspecific((void*)local_c8);
  if (pvVar21 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01775c40();
  if (lVar22 != 0) {
    FUN_00d50b20();
  }
  pvVar21 = _pthread_getspecific((void*)local_c8);
  if (pvVar21 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0174bd90();
  pvVar21 = _pthread_getspecific((void*)local_c8);
  if (pvVar21 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0173bbf0();
  pvVar21 = _pthread_getspecific((void*)local_c8);
  if (pvVar21 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_017517b0();
  if (local_48 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  lVar22 = *(int64_t *)local_48[2];
  if (lVar22 != 0) {
    FUN_00d50b00();
  }
  bVar16 = FUN_01754520();
  if (lVar22 != 0) {
    FUN_00d50b20();
  }
  lVar22 = *(int64_t *)local_48[2];
  if (lVar22 != 0) {
    FUN_00d50b00();
  }
  bVar17 = FUN_01754700();
  if (lVar22 != 0) {
    FUN_00d50b20();
  }
  if ((bVar17 | bVar16) == 1) {
    pvVar21 = _pthread_getspecific((void*)local_c8);
    plVar31 = plVar29;
    if ((pvVar21 != (void *)0x0) && (lVar22 = FUN_00e8b990(), lVar22 != 0)) {
      plVar31 = (int64_t *)plVar29[(uint64_t)(*(uint *)(lVar22 + 0x154) & 1) + 4];
    }
    pvVar21 = _pthread_getspecific((void*)local_c8);
    if ((pvVar21 == (void *)0x0) || (lVar22 = FUN_00e8b990(), lVar22 == 0)) {
      lVar22 = plVar29[0xb];
    }
    else {
      lVar22 = *(int64_t *)(plVar29[(uint64_t)(*(uint *)(lVar22 + 0x154) & 1) + 4] + 0x58);
    }
    if (lVar22 != 0) {
      FUN_00d50b00();
    }
    pvVar21 = _pthread_getspecific((void*)local_c8);
    if (pvVar21 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01736c50();
    iVar20 = (**(code **)(*plVar31 + 0x370))();
    if (lVar22 != 0) {
      FUN_00d50b20();
    }
    iVar19 = 0;
    if (0 < iVar20) {
      iVar19 = iVar20;
    }
    uVar37 = (uint)(iVar19 - iVar20 != 0);
    iVar20 = iVar20 + (((iVar19 - iVar20) - uVar37) / 0xc + uVar37) * 0xc;
    iVar19 = 0xb;
    if (iVar20 < 0xb) {
      iVar19 = iVar20;
    }
    *param_4 = (((iVar20 - iVar19) + 0xbU) / 0xc) * -0xc + iVar20;
    *local_res8 = (uint)bVar16;
  }
  *this_ptr = plVar29;
  *(void*)(this_ptr + 1) = 1;
  FUN_00d50b20();
  if ((bVar7) && ((int64_t *)local_98._0_8_ != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (local_68 != (void*)0x0) {
    FUN_00d50b20();
  }
  if (plVar26 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (plVar25 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (plVar2 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (puVar24 != (void*)0x0) {
    FUN_00d50b20();
  }
  if (plVar23 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((bVar43) && (plVar34 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((bVar13) && (local_d8 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((bVar6) && (plVar36 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar12 != (int64_t *)0x0) {
    FUN_00d50b20();
    FUN_00d50b20();
  }
  if ((bVar5) && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar12 != (int64_t *)0x0) {
    FUN_00d50b20();
    FUN_00d50b20();
  }
  if (lVar35 != 0) {
    FUN_00d50b20();
  }
  return this_ptr;
}

