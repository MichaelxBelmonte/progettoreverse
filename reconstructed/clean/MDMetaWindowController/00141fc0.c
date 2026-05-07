// Function: FUN_00141fc0
// Address: 00141fc0
// Size: 15500 bytes
// Class: MDMetaWindowController

void FUN_00141fc0(void* param_1)

{
  void*puVar1;
  float *pfVar2;
  uint uVar3;
  int64_t lVar4;
  uint8_t auVar5 [12];
  uint uVar6;
  uint8_t auVar7 [16];
  uint8_t auVar8 [16];
  uint8_t auVar9 [16];
  uint8_t auVar10 [16];
  bool bVar11;
  bool bVar12;
  int64_t *plVar13;
  bool bVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  void *pvVar23;
  int64_t *plVar24;
  int64_t *plVar25;
  uint64_t uVar26;
  int64_t lVar27;
  uint64_t uVar28;
  uint uVar29;
  void* pVar30;
  uint8_t auVar31 [8];
  uint8_t auVar32 [8];
  int64_t lVar33;
  int64_t lVar34;
  int iVar35;
  int iVar36;
  int iVar37;
  uint uVar38;
  int iVar39;
  int64_t *this_ptr;
  int64_t lVar40;
  int iVar41;
  int iVar42;
  int64_t lVar43;
  char cVar44;
  uint uVar45;
  int64_t lVar46;
  uint uVar47;
  bool bVar48;
  bool bVar49;
  bool bVar50;
  bool bVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  double dVar56;
  double dVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  uint8_t auVar61 [16];
  uint8_t auVar62 [16];
  uint64_t uVar63;
  float fVar64;
  int64_t local_1d0;
  char local_1c8;
  int local_1b8;
  int64_t local_1a8;
  char local_1a0;
  uint32_t uStack_134;
  uint32_t uStack_130;
  uint32_t uStack_12c;
  int64_t local_118;
  int64_t local_108;
  char local_100;
  int local_f0;
  int64_t *local_e0;
  int64_t local_b8;
  int64_t local_98;
  uint8_t local_88 [8];
  uint64_t uStack_80;
  int64_t *local_68;
  int64_t *local_60;
  char local_58;
  int local_48;
  
  plVar13 = local_60;
  if (this_ptr[0x2a] != 0) {
    this_ptr[0x2a] = 0;
    FUN_00d50b20();
  }
  (**(code **)(*this_ptr + 0x948))();
  if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (local_60 == (int64_t *)0x0) {
    return;
  }
  fVar52 = (float)(**(code **)(*(int64_t *)this_ptr[0x4b] + 0x930))();
  (**(code **)(*(int64_t *)this_ptr[0x4c] + 0x930))();
  iVar15 = (**(code **)(*(int64_t *)this_ptr[0x3e] + 0x920))();
  fVar53 = (float)(**(code **)(*(int64_t *)this_ptr[0x4d] + 0x930))();
  fVar54 = g_02394218;
  if (g_023942b8 <= (double)fVar53) {
    fVar55 = (float)(**(code **)(*(int64_t *)this_ptr[0x4d] + 0x930))();
    fVar53 = 0.0;
    fVar54 = g_0239394c;
    if (g_023942c0 < (double)fVar55) goto LAB_001420c7;
  }
  else {
LAB_001420c7:
    fVar53 = fVar54;
  }
  iVar16 = (**(code **)(*(int64_t *)this_ptr[0x3f] + 0x920))();
  bVar48 = iVar16 != 0;
  (**(code **)(*(int64_t *)this_ptr[0x43] + 0x920))();
  iVar17 = (**(code **)(*(int64_t *)this_ptr[0x44] + 0x920))();
  iVar18 = (**(code **)(*(int64_t *)this_ptr[0x43] + 0x920))();
  iVar19 = (**(code **)(*(int64_t *)this_ptr[0x47] + 0x920))();
  (**(code **)(*this_ptr + 0x948))();
  pvVar23 = _pthread_getspecific(param_1);
  if (pvVar23 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01327990();
  if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(*this_ptr + 0x948))();
  pvVar23 = _pthread_getspecific(param_1);
  if (pvVar23 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01327a50();
  if (local_60 == (int64_t *)0x0) {
    bVar11 = true;
  }
  else if (local_58 == '\0') {
    FUN_00d50b00();
    bVar11 = false;
  }
  else {
    local_58 = '\0';
    bVar11 = false;
  }
  if ((local_100 != '\0') && (local_108 != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(*this_ptr + 0x948))();
  pvVar23 = _pthread_getspecific(param_1);
  if (pvVar23 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0132d790();
  if (local_58 == '\0') {
    if (local_60 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_58 = '\0';
  }
  if ((local_100 != '\0') && (local_108 != 0)) {
    FUN_00d50b20();
  }
  dVar56 = (double)local_60[7];
  (**(code **)(*this_ptr + 0x948))();
  pvVar23 = _pthread_getspecific(param_1);
  if (pvVar23 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0132d610();
  if (local_58 == '\0') {
    if (local_60 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_58 = '\0';
  }
  if ((local_100 != '\0') && (local_108 != 0)) {
    FUN_00d50b20();
  }
  fVar58 = *(float *)((int64_t)this_ptr + 0x15c) * (float)dVar56;
  fVar54 = 0.0;
  FUN_01e3f820();
  fVar54 = fVar54 / g_023941e0;
  fVar59 = g_023941e0 * fVar54;
  _local_88 = ZEXT416((uint)fVar59);
  *(float *)(this_ptr + 0x2b) = fVar59;
  *(float *)(this_ptr + 0x2c) = fVar59 / g_0239421c;
  fVar55 = fVar58 / (float)dVar56;
  *(float *)((int64_t)this_ptr + 0x15c) = fVar55;
  iVar20 = (int)((float)(double)this_ptr[0x2d] * fVar55);
  iVar21 = 8000;
  if (iVar20 < 8000) {
    iVar21 = iVar20;
  }
  plVar24 = (int64_t *)FUN_00e8fc40();
  FUN_00152930();
  (**(code **)(*plVar24 + 0x18))();
  plVar25 = (int64_t *)this_ptr[0x2a];
  if (plVar25 == plVar24) {
    FUN_00d50b20();
  }
  else {
    this_ptr[0x2a] = (int64_t)plVar24;
    if (plVar25 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  fVar55 = (float)(int)fVar59;
  insertps(ZEXT416((uint)(float)iVar21),ZEXT416((uint)fVar55),0x10);
  FUN_01d4ed60();
  FUN_01d52700();
  FUN_01d52740();
  local_68 = local_60;
  auVar31 = (uint8_t  [8])local_60;
  if (local_60 == (int64_t *)0x0) {
    bVar12 = true;
    local_68 = (int64_t *)0x0;
  }
  else if (local_58 == '\0') {
    FUN_00d50b00();
    bVar12 = false;
  }
  else {
    bVar12 = false;
  }
  FUN_01cfbee0();
  if (local_58 == '\0') {
    if (local_60 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_58 = '\0';
  }
  FUN_01d488d0();
  if (local_60 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  auVar61 = insertps(ZEXT416((uint)(float)iVar21),fVar55,0x10);
  (**(code **)(*local_68 + 0x3b0))();
  if ((int64_t *)this_ptr[0x3c] == (int64_t *)0x0) {
    iVar20 = 0;
    if (g_02801608 == (int64_t *)0x0) goto LAB_0014278e;
LAB_001426cb:
    FUN_00e83070();
    g_02801608 = (int64_t *)0x0;
    if (1 < iVar20 - 9U) goto LAB_001426f0;
LAB_001427a3:
    (**(code **)(*this_ptr + 0x958))();
    if (((local_60 != (int64_t *)0x0) && ((**(code **)(*this_ptr + 0x958))(), local_100 != '\0'))
       && (local_108 != 0)) {
      FUN_00d50b20();
    }
    bVar51 = local_60 != (int64_t *)0x0;
    if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    bVar48 = iVar16 != 0 && local_60 == (int64_t *)0x0;
    auVar31 = (uint8_t  [8])CONCAT71((int7)((uint64_t)auVar31 >> 8),bVar48);
    bVar49 = false;
  }
  else {
    iVar20 = (**(code **)(*(int64_t *)this_ptr[0x3c] + 0x920))();
    if (g_02801608 != (int64_t *)0x0) goto LAB_001426cb;
LAB_0014278e:
    if (iVar20 - 9U < 2) goto LAB_001427a3;
LAB_001426f0:
    if (iVar20 == 8) {
      (**(code **)(*this_ptr + 0x958))();
      if (((local_60 != (int64_t *)0x0) && ((**(code **)(*this_ptr + 0x958))(), local_100 != '\0')
          ) && (local_108 != 0)) {
        FUN_00d50b20();
      }
      bVar49 = local_60 != (int64_t *)0x0;
      if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      bVar48 = iVar16 != 0 && local_60 == (int64_t *)0x0;
      auVar31 = (uint8_t  [8])CONCAT71((int7)((uint64_t)auVar31 >> 8),bVar48);
    }
    else {
      bVar49 = false;
    }
    bVar51 = false;
  }
  iVar16 = *(int *)((int64_t)local_60 + 0x24);
  (**(code **)(*this_ptr + 0x948))();
  pvVar23 = _pthread_getspecific(SUB84(auVar31,0));
  if (pvVar23 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0134a740();
  if (local_58 == '\0') {
    if (local_60 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_58 = '\0';
  }
  if ((local_100 != '\0') && (local_108 != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(*this_ptr + 0x958))();
  bVar50 = true;
  if (local_60 == (int64_t *)0x0) {
    (**(code **)(*this_ptr + 0x938))();
    bVar50 = local_108 != 0;
    if ((local_100 != '\0') && (local_108 != 0)) {
      FUN_00d50b20();
    }
  }
  if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (bVar50) {
    (**(code **)(*this_ptr + 0x958))();
    if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (local_60 == (int64_t *)0x0) {
      (**(code **)(*this_ptr + 0x938))();
      goto LAB_001454d6;
    }
    (**(code **)(*this_ptr + 0x958))();
    uVar3 = *(uint *)((int64_t)local_60 + 0x19c);
    if (local_58 != '\0') {
      FUN_00d50b20();
    }
    (**(code **)(*this_ptr + 0x958))();
    (**(code **)(*(int64_t *)this_ptr[0x4e] + 0x930))();
    (**(code **)(*(int64_t *)this_ptr[0x4f] + 0x930))();
    (**(code **)(*(int64_t *)this_ptr[0x50] + 0x930))();
    (**(code **)(*(int64_t *)this_ptr[0x51] + 0x930))();
    plVar25 = (int64_t *)FUN_0162a940();
    if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    *(void*)((int64_t)this_ptr + 0x189) = 0;
    if (plVar25 == (int64_t *)0x0) goto LAB_001454d6;
    (**(code **)(*this_ptr + 0x928))();
    if (local_60 == (int64_t *)0x0) {
      bVar50 = false;
    }
    else {
      (**(code **)(*this_ptr + 0x928))();
      bVar50 = *(char *)(local_108 + 0xac) != '\0';
      if (local_100 != '\0') {
        FUN_00d50b20();
      }
    }
    if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (bVar50) {
      fVar58 = g_0239011c * fVar58;
    }
    iVar37 = (int)fVar59;
    if (bVar50) {
      uVar3 = uVar3 * 2 - 1;
    }
    if (g_02801608 != (int64_t *)0x0) {
      plVar25 = g_02801608;
      iVar20 = 0;
    }
    if (iVar20 == 0x13) {
      (**(code **)(*this_ptr + 0x958))();
      if (local_60 == (int64_t *)0x0) {
        bVar50 = false;
      }
      else {
        (**(code **)(*this_ptr + 0x958))();
        bVar50 = *(int64_t *)(local_108 + 0x150) != 0;
        if (local_100 != '\0') {
          FUN_00d50b20();
        }
      }
      if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (bVar50) {
        (**(code **)(*this_ptr + 0x958))();
        lVar27 = local_60[0x2a];
        if (local_58 != '\0') {
          FUN_00d50b20();
        }
        (**(code **)(*this_ptr + 0x958))();
        uVar3 = *(uint *)(local_60 + 0x29);
        if (local_58 != '\0') {
          FUN_00d50b20();
        }
        (**(code **)(*this_ptr + 0x958))();
        lVar43 = local_60[0x2b];
        if (lVar43 != 0) {
          FUN_00d50b00();
        }
        if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        auVar62 = ZEXT816(0);
        FUN_01cfbee0();
        if (local_58 == '\0') {
          if (local_60 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_58 = '\0';
        }
        FUN_01d488d0();
        if (local_60 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        uVar63 = auVar62._8_8_;
        if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
          FUN_00d50b20();
          uVar63 = auVar62._8_8_;
        }
        uStack_134 = auVar61._4_4_;
        uStack_130 = auVar61._8_4_;
        uStack_12c = auVar61._12_4_;
        auVar5._4_8_ = uVar63;
        auVar5._0_4_ = uStack_134;
        auVar61._0_8_ = auVar5._0_8_ << 0x20;
        auVar61._8_4_ = uStack_130;
        auVar61._12_4_ = uStack_12c;
        (**(code **)(*local_68 + 0x3b0))();
        FUN_01d52770();
        fVar54 = (float)(double)local_60[9] * *(float *)((int64_t)this_ptr + 0x15c);
        FUN_01e3f820();
        if ((int)uVar3 < 1) {
LAB_00145d18:
          bVar50 = false;
          lVar27 = 0;
          local_e0 = (int64_t *)0x0;
          local_98 = 0;
        }
        else {
          fVar58 = auVar61._4_4_ / g_02394224;
          uVar28 = 0;
          fVar52 = g_02390124;
          fVar55 = g_02390d00;
          do {
            iVar19 = (int)uVar28;
            iVar20 = (int)((float)iVar19 * fVar54);
            if (iVar21 <= iVar20) break;
            uVar28 = uVar28 + 1;
            iVar35 = (int)((float)(int)uVar28 * fVar54);
            if (iVar21 < iVar35) {
              iVar35 = iVar21;
            }
            if (iVar20 < iVar35) {
              iVar22 = -1;
              fVar59 = 0.0;
              lVar40 = 0;
              do {
                iVar41 = (int)((float)(0x1e0 - (int)lVar40) * fVar58);
                if (iVar41 < iVar37) {
                  iVar36 = (int)((float)(0x1df - (int)lVar40) * fVar58);
                  if (iVar36 < 0) {
                    iVar36 = -1;
                  }
                  local_88._0_4_ = iVar36;
                  fVar64 = *(float *)(lVar27 + ((uint64_t)(uint)(iVar19 * 0x1e0) + lVar40) * 4);
                  fVar60 = fVar52;
                  if (fVar64 <= fVar52) {
                    fVar60 = fVar64;
                  }
                  fVar64 = fVar55;
                  if (fVar55 <= fVar60) {
                    fVar64 = fVar60;
                  }
                  if (iVar22 == iVar41) {
                    fVar64 = fVar64 + fVar59;
                  }
                  fVar59 = fVar64;
                  iVar22 = iVar41;
                  if (fVar64 <= g_0239424c) {
                    if (g_02394228 <= fVar64) goto LAB_0014571d;
                    fVar55 = (fVar64 * g_02394230 + g_0239011c) * g_02394220;
                    fVar52 = g_02394220;
                    if (fVar55 <= g_02394220) {
                      fVar52 = fVar55;
                    }
                    uVar45 = (uint)fVar52;
                    uVar29 = 0xff;
                  }
                  else {
                    fVar55 = (fVar64 * g_02390120 + g_02391094) * g_02394220;
                    fVar52 = g_02394220;
                    if (fVar55 <= g_02394220) {
                      fVar52 = fVar55;
                    }
                    uVar45 = (uint)fVar52;
                    uVar29 = uVar45;
                  }
                  fVar52 = g_02390124;
                  fVar55 = g_02390d00;
                  iVar42 = iVar41;
                  iVar39 = iVar20;
                  if (iVar36 < iVar41) {
                    do {
                      do {
                        FUN_01d53270(uVar29 & 0xff,uVar45 & 0xff,0xff,iVar39);
                        iVar42 = iVar42 + -1;
                      } while (iVar36 < iVar42);
                      iVar39 = iVar39 + 1;
                      fVar52 = g_02390124;
                      fVar55 = g_02390d00;
                      iVar42 = iVar41;
                    } while (iVar39 != iVar35);
                  }
                }
LAB_0014571d:
                lVar40 = lVar40 + 1;
              } while (lVar40 != 0x1e0);
            }
            else {
              lVar40 = 0x1e0;
              do {
                lVar40 = lVar40 + -1;
              } while (lVar40 != 0);
            }
          } while (uVar28 != uVar3);
          if (lVar43 == 0) goto LAB_00145d18;
          local_98 = 0;
          lVar27 = 0;
          bVar50 = false;
          uVar28 = 0;
          plVar25 = (int64_t *)0x0;
          do {
            local_e0 = plVar25;
            iVar19 = (int)((float)(int)uVar28 * fVar54);
            if (iVar21 <= iVar19) break;
            uVar26 = uVar28 + 1;
            iVar20 = (int)((float)(int)uVar26 * fVar54);
            if (iVar21 < iVar20) {
              iVar20 = iVar21;
            }
            lVar40 = *(int64_t *)(*(int64_t *)(lVar43 + 0x10) + uVar28 * 8);
            cVar44 = (char)local_e0;
            if (local_98 == lVar40) {
              lVar40 = local_98;
              if ((cVar44 != '\0') || (local_98 == 0)) goto LAB_00145a66;
              local_e0 = (int64_t *)CONCAT71((int7)(uVar28 >> 8),1);
              FUN_00d50b00();
LAB_00145a76:
              if (0 < *(int *)(local_98 + 0xc)) {
                lVar40 = 0;
                do {
                  lVar33 = *(int64_t *)(*(int64_t *)(local_98 + 0x10) + lVar40 * 8);
                  if (lVar27 == lVar33) {
                    if ((!bVar50) && (lVar27 != 0)) {
                      FUN_00d50b00();
                      lVar33 = lVar27;
                      goto LAB_00145b10;
                    }
                  }
                  else {
                    if (lVar33 != 0) {
                      FUN_00d50b00();
                    }
                    if ((bVar50) && (lVar27 != 0)) {
                      FUN_00d50b20();
                    }
LAB_00145b10:
                    bVar50 = true;
                    lVar27 = lVar33;
                  }
                  if (iVar19 < iVar20) {
                    iVar22 = (int)((float)(0x1e0 - *(int *)(lVar27 + 0x10)) * fVar58);
                    iVar41 = iVar22 + -1;
                    local_88._0_4_ = iVar41;
                    iVar35 = iVar22 + 2;
                    if (iVar22 + 2 < iVar22) {
                      iVar35 = iVar22;
                    }
                    iVar22 = iVar19;
                    iVar36 = iVar41;
                    if ((int)lVar40 == 0) {
                      do {
                        if ((-1 < iVar36) && (iVar36 < iVar37)) {
                          FUN_01d53270(0,0,0xff,iVar22);
                        }
                        iVar36 = iVar36 + 1;
                      } while ((iVar35 != iVar36) ||
                              (iVar22 = iVar22 + 1, iVar36 = iVar41, iVar22 != iVar20));
                    }
                    else {
                      do {
                        iVar36 = iVar41;
                        if ((int)lVar40 == 1) {
                          do {
                            if ((-1 < iVar36) && (iVar36 < iVar37)) {
                              FUN_01d53270(0,0xff,0xff,iVar22);
                            }
                            iVar36 = iVar36 + 1;
                          } while (iVar35 != iVar36);
                        }
                        else {
                          do {
                            if (((-1 < iVar36) && (iVar36 < iVar37)) && (lVar40 == 2)) {
                              FUN_01d53270(0,0xff,0xff,iVar22);
                            }
                            iVar36 = iVar36 + 1;
                          } while (iVar35 != iVar36);
                        }
                        iVar22 = iVar22 + 1;
                      } while (iVar22 != iVar20);
                    }
                  }
                  lVar40 = lVar40 + 1;
                } while ((lVar40 != 3) && (lVar40 < *(int *)(local_98 + 0xc)));
              }
            }
            else {
              if (lVar40 != 0) {
                uVar28 = FUN_00d50b00();
              }
              local_e0 = (int64_t *)CONCAT71((int7)(uVar28 >> 8),1);
              if ((cVar44 != '\0') && (local_98 != 0)) {
                FUN_00d50b20();
              }
LAB_00145a66:
              local_98 = lVar40;
              if (lVar40 != 0) goto LAB_00145a76;
              local_98 = 0;
            }
            uVar28 = uVar26;
            plVar25 = (int64_t *)((uint64_t)local_e0 & 0xffffffff);
          } while (uVar26 != uVar3);
        }
        auVar31 = (uint8_t  [8])local_e0;
        FUN_01d52700();
        if ((bVar50) && (lVar27 != 0)) {
          FUN_00d50b20();
        }
        if (((char)local_e0 != '\0') && (local_98 != 0)) {
          FUN_00d50b20();
        }
        if (lVar43 != 0) {
          FUN_00d50b20();
        }
        goto LAB_0014330b;
      }
    }
    (**(code **)(*this_ptr + 0x938))();
    if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    auVar31 = (uint8_t  [8])CONCAT71((int7)((uint64_t)auVar31 >> 8),iVar20 < 8);
    fVar59 = g_02390124;
    if (local_60 == (int64_t *)0x0) {
      auVar31 = (uint8_t  [8])&g_023942b0;
      fVar59 = *(float *)(&g_023942b0 + (uint64_t)(iVar20 < 8) * 4);
    }
    _local_88 = ZEXT416((uint)fVar59);
    fVar52 = (float)_powf(auVar31,fVar52 + g_02390d00);
    FUN_01d52770();
    if (0 < (int)uVar3) {
      fVar52 = fVar52 * fVar59 + fVar52 * fVar59;
      uVar45 = iVar21 - 1;
      iVar21 = iVar37 + -1;
      uVar28 = 0;
      do {
        iVar20 = (int)uVar28;
        uVar29 = (uint)((float)iVar20 * fVar58);
        auVar31 = (uint8_t  [8])(uint64_t)uVar29;
        local_88._0_4_ = uVar29;
        if ((int)uVar45 <= (int)uVar29) break;
        uVar28 = uVar28 + 1;
        iVar35 = (int)((float)(int)uVar28 * fVar58);
        uVar6 = iVar35 + 1;
        if ((int)uVar45 <= iVar35) {
          uVar6 = uVar45;
        }
        uVar26 = (uint64_t)(uint)(iVar20 * 0x7e4);
        if (iVar19 == 0) {
          lVar27 = 0;
          do {
            iVar20 = (int)(fVar55 - ((float)(int)lVar27 * fVar54 + g_0239011c));
            lVar43 = uVar26 + lVar27;
            if (iVar20 < 0) {
              iVar20 = 0;
            }
            if (iVar37 <= iVar20) {
              iVar20 = iVar21;
            }
            lVar27 = lVar27 + 1;
            iVar35 = (int)(fVar55 - ((float)(int)lVar27 * fVar54 + g_0239011c));
            if (iVar35 < 0) {
              iVar35 = 0;
            }
            if (iVar37 <= iVar35) {
              iVar35 = iVar21;
            }
            fVar59 = *(float *)((int64_t)plVar25 + lVar43 * 4);
            fVar60 = (float)((uint)fVar59 & g_02390140) * fVar52;
            fVar64 = 0.0;
            if (0.0 <= fVar60) {
              fVar64 = fVar60;
            }
            fVar60 = g_02390124;
            if (fVar64 <= g_02390124) {
              fVar60 = fVar64;
            }
            if (0.0 <= fVar59) {
              uVar47 = (uint)((g_02390124 - fVar60) * g_02394220);
            }
            else {
              uVar47 = 0xff;
            }
            auVar31 = (uint8_t  [8])plVar25;
            if ((iVar35 <= iVar20) && (uVar38 = uVar29, (int)uVar29 < (int)uVar6)) {
              do {
                do {
                  auVar31 = (uint8_t  [8])(uint64_t)(uVar47 & 0xff);
                  FUN_01d53270(auVar31,uVar47 & 0xff,0xff,uVar38);
                  uVar38 = uVar38 + 1;
                } while (uVar6 != uVar38);
                bVar50 = iVar35 < iVar20;
                uVar38 = uVar29;
                iVar20 = iVar20 + -1;
              } while (bVar50);
            }
          } while (lVar27 != 0x7e4);
        }
        else {
          plVar24 = (int64_t *)0x0;
          do {
            puVar1 = (void*)((int64_t)plVar24 + uVar26);
            fVar59 = *(float *)((int64_t)plVar25 + (int64_t)puVar1 * 4);
            fVar60 = (float)((uint)fVar59 & g_02390140) * fVar52;
            iVar20 = (int)(fVar55 - ((float)(int)plVar24 * fVar54 + g_0239011c));
            auVar31 = (uint8_t  [8])((int64_t)plVar24 + 1);
            fVar64 = 0.0;
            if (0.0 <= fVar60) {
              fVar64 = fVar60;
            }
            if (iVar20 < 0) {
              iVar20 = 0;
            }
            if (iVar37 <= iVar20) {
              iVar20 = iVar21;
            }
            iVar35 = (int)(fVar55 - ((float)SUB84(auVar31,0) * fVar54 + g_0239011c));
            fVar60 = g_02390124;
            if (fVar64 <= g_02390124) {
              fVar60 = fVar64;
            }
            if (iVar35 < 0) {
              iVar35 = 0;
            }
            if (iVar37 <= iVar35) {
              iVar35 = iVar21;
            }
            if ((((plVar24 != (int64_t *)0x0) &&
                 (plVar24 != (int64_t *)(section_000007e0.sectname + 3))) &&
                (pfVar2 = (float *)((int64_t)plVar25 +
                                   (((int64_t)puVar1 << 0x20) + -0x100000000 >> 0x1e)),
                *pfVar2 <= fVar59 && fVar59 != *pfVar2)) &&
               (*(float *)((int64_t)plVar25 + (int64_t)puVar1 * 4 + 4) <= fVar59)) {
              fVar60 = 0.0;
            }
            if (0.0 <= fVar59) {
              uVar47 = (uint)((g_02390124 - fVar60) * g_02394220);
            }
            else {
              uVar47 = 0xff;
            }
            if ((iVar35 <= iVar20) && (uVar38 = uVar29, (int)uVar29 < (int)uVar6)) {
              do {
                do {
                  FUN_01d53270(uVar47 & 0xff,uVar47 & 0xff,0xff,uVar38);
                  uVar38 = uVar38 + 1;
                } while (uVar6 != uVar38);
                bVar50 = iVar35 < iVar20;
                uVar38 = uVar29;
                iVar20 = iVar20 + -1;
              } while (bVar50);
            }
            plVar24 = (int64_t *)auVar31;
          } while (auVar31 != (uint8_t  [8])(section_000007e0.sectname + 4));
        }
      } while (uVar28 != uVar3);
    }
    FUN_01d52700();
  }
LAB_0014330b:
  if (bVar48) {
    FUN_01d48b40();
    FUN_01cfbee0();
    if (local_58 == '\0') {
      if (local_60 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_58 = '\0';
    }
    FUN_01d488d0();
    if (local_60 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (9 < iVar16) {
      iVar16 = iVar16 / 5;
      dVar56 = (double)local_60[10];
      local_88._0_4_ = (float)dVar56;
      iVar19 = 2;
      if (2 < iVar16) {
        iVar19 = iVar16;
      }
      iVar16 = 1;
      auVar31 = (uint8_t  [8])local_60;
      do {
        fVar54 = (float)_logf((float)iVar16 * (float)dVar56 * g_02394204);
        if (g_02394238 < fVar54 * g_02394208) break;
        if (g_0239423c < fVar54 * g_02394208) {
          FUN_01cfbee0();
          if (local_58 == '\0') {
            if (local_60 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_58 = '\0';
          }
          FUN_01d488d0();
          if (local_60 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
          if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          (**(code **)(*local_68 + 0x3e0))();
        }
        (**(code **)(*this_ptr + 0x958))();
        lVar27 = local_60[0x2c];
        if (lVar27 != 0) {
          FUN_00d50b00();
        }
        if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (lVar27 != 0) {
          if (**(int64_t **)(lVar27 + 0x10) != 0) {
            FUN_015c6c20();
          }
          FUN_00d50b20();
        }
        iVar16 = iVar16 + 1;
      } while (iVar19 != iVar16);
    }
  }
  if (iVar17 != 0) {
    (**(code **)(*this_ptr + 0x958))();
    lVar27 = local_60[0x2e];
    if (lVar27 != 0) {
      FUN_00d50b00();
    }
    if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_01d48b40();
    FUN_01cfbee0();
    if (local_58 == '\0') {
      if (local_60 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_58 = '\0';
    }
    FUN_01d488d0();
    if (local_60 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_01d48b40();
    if (*(int *)(lVar27 + 0xc) < 1) {
      plVar25 = (int64_t *)0x0;
      auVar32 = (uint8_t  [8])(int64_t *)0x0;
    }
    else {
      lVar43 = 0;
      plVar25 = (int64_t *)0x0;
      auVar32 = (uint8_t  [8])(int64_t *)0x0;
      do {
        pVar30 = SUB84(auVar31,0);
        lVar40 = *(int64_t *)(lVar27 + 0x10);
        plVar24 = *(int64_t **)(lVar40 + lVar43 * 8);
        if (plVar25 == plVar24) {
          plVar24 = plVar25;
          if ((SUB81(auVar32,0) == '\0') && (plVar25 != (int64_t *)0x0)) {
            local_88._1_7_ = (int7)((uint64_t)lVar40 >> 8);
            local_88[0] = 1;
            FUN_00d50b00();
          }
          else {
            local_88 = (uint8_t  [8])((uint64_t)auVar32 & 0xffffffff);
          }
        }
        else {
          if (plVar24 != (int64_t *)0x0) {
            lVar40 = FUN_00d50b00();
          }
          local_88._1_7_ = (int7)((uint64_t)lVar40 >> 8);
          local_88[0] = 1;
          if ((SUB81(auVar32,0) != '\0') && (plVar25 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        plVar25 = plVar24;
        pvVar23 = _pthread_getspecific(pVar30);
        plVar24 = plVar25;
        if ((pvVar23 != (void *)0x0) && (lVar40 = FUN_00e8b990(), lVar40 != 0)) {
          plVar24 = (int64_t *)plVar25[(uint64_t)(*(uint *)(lVar40 + 0x154) & 1) + 4];
        }
        (**(code **)(*plVar24 + 0x3a0))();
        (**(code **)(*local_68 + 0x3e0))();
        lVar43 = lVar43 + 1;
        auVar31 = local_88;
        auVar32 = local_88;
      } while (lVar43 < *(int *)(lVar27 + 0xc));
    }
    auVar31 = auVar32;
    FUN_00d50b20();
    if ((SUB81(auVar32,0) != '\0') && (plVar25 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  if (bVar51) {
    (**(code **)(*this_ptr + 0x9a8))();
  }
  else if (bVar49) {
    (**(code **)(*this_ptr + 0x9b0))();
  }
  else {
    (**(code **)(*this_ptr + 0x948))();
    pvVar23 = _pthread_getspecific(SUB84(auVar31,0));
    if (pvVar23 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013293b0();
    if (local_58 == '\0') {
      if (local_60 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_58 = '\0';
    }
    if ((local_100 != '\0') && (local_108 != 0)) {
      FUN_00d50b20();
    }
    if ((iVar15 != 0) && (local_60 != (int64_t *)0x0)) {
      fVar54 = *(float *)(this_ptr + 0x2c);
      pvVar23 = _pthread_getspecific(SUB84(auVar31,0));
      if ((pvVar23 != (void *)0x0) && (lVar27 = FUN_00e8b990(), lVar27 != 0)) {
        auVar31 = (uint8_t  [8])local_60;
      }
      pVar30 = SUB84(auVar31,0);
      FUN_01313ad0();
      pvVar23 = _pthread_getspecific(pVar30);
      if (pvVar23 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012cb110();
      pvVar23 = _pthread_getspecific(pVar30);
      if (pvVar23 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012e6160();
      if (local_58 == '\0') {
        if (local_60 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_58 = '\0';
      }
      if ((local_100 != '\0') && (local_108 != 0)) {
        FUN_00d50b20();
      }
      if ((local_1c8 != '\0') && (local_1d0 != 0)) {
        FUN_00d50b20();
      }
      if (local_60 != (int64_t *)0x0) {
        fVar54 = fVar54 * g_02394240;
        local_58 = '\0';
        local_60 = (int64_t *)0x0;
        local_48 = -1;
LAB_00143b6b:
        while( true ) {
          lVar27 = local_108;
          lVar43 = (int64_t)local_48;
          local_48 = local_48 + 1;
          if (*(int *)((int64_t)plVar13 + 0xc) <= local_48) break;
          local_60 = *(int64_t **)(plVar13[2] + 8 + lVar43 * 8);
          pvVar23 = _pthread_getspecific((void*)plVar13[2]);
          if (pvVar23 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012e6160();
          if (local_100 == '\0') goto LAB_00143c10;
          if (local_108 != 0) goto LAB_00143c3e;
        }
        FUN_000be170();
        FUN_00d50b20();
      }
    }
    (**(code **)(*this_ptr + 0x928))();
    if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (local_60 == (int64_t *)0x0) {
      bVar48 = false;
      local_b8 = 0;
      bVar51 = false;
      lVar27 = 0;
    }
    else {
      (**(code **)(*this_ptr + 0x928))();
      lVar27 = local_60[0x1d];
      bVar51 = lVar27 != 0;
      if (bVar51) {
        FUN_00d50b00();
      }
      if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      (**(code **)(*this_ptr + 0x928))();
      local_b8 = local_60[0x1e];
      bVar48 = local_b8 != 0;
      if (bVar48) {
        FUN_00d50b00();
      }
      if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    (**(code **)(*this_ptr + 0x958))();
    if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (local_60 != (int64_t *)0x0) {
      (**(code **)(*this_ptr + 0x958))();
      if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      (**(code **)(*this_ptr + 0x928))();
      if ((local_60 != (int64_t *)0x0) && ((**(code **)(*this_ptr + 0x928))(), local_100 != '\0'))
      {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      (**(code **)(*this_ptr + 0x958))();
      lVar43 = local_60[0x4c];
      if (lVar43 == 0) {
        lVar40 = 0;
      }
      else {
        FUN_00d50b00();
        lVar40 = lVar43;
      }
      if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (lVar40 != 0) {
        if (0 < *(int *)(lVar40 + 0xc)) {
          lVar34 = 0;
          local_118 = 0;
          bVar50 = false;
          lVar33 = 0;
          bVar49 = false;
          do {
            lVar46 = *(int64_t *)(*(int64_t *)(lVar40 + 0x10) + lVar34 * 8);
            if (local_118 == lVar46) {
              if ((!bVar50) && (local_118 != 0)) {
                bVar50 = true;
                FUN_00d50b00();
              }
            }
            else {
              if (lVar46 != 0) {
                FUN_00d50b00();
              }
              if ((bVar50) && (local_118 != 0)) {
                FUN_00d50b20();
                bVar50 = true;
                local_118 = lVar46;
              }
              else {
                bVar50 = true;
                local_118 = lVar46;
              }
            }
            if (0 < *(int *)(local_118 + 0xc)) {
              lVar46 = 0;
              do {
                lVar4 = *(int64_t *)(*(int64_t *)(local_118 + 0x10) + lVar46 * 8);
                if (lVar33 == lVar4) {
                  if ((!bVar49) && (lVar33 != 0)) {
                    bVar49 = true;
                    FUN_00d50b00();
                  }
                }
                else {
                  if (lVar4 != 0) {
                    FUN_00d50b00();
                  }
                  if ((bVar49) && (lVar33 != 0)) {
                    FUN_00d50b20();
                    bVar49 = true;
                    lVar33 = lVar4;
                  }
                  else {
                    bVar49 = true;
                    lVar33 = lVar4;
                  }
                }
                FUN_014b2ea0();
                if (lVar46 != 0) {
                  auVar62._12_4_ = 0;
                  auVar62._0_12_ = stack0xffffffffffffff7c;
                  _local_88 = auVar62 << 0x20;
                  FUN_01cfcdc0();
                  if (local_58 == '\0') {
                    if (local_60 != (int64_t *)0x0) {
                      FUN_00d50b00();
                    }
                  }
                  else {
                    local_58 = '\0';
                  }
                  FUN_01d488d0();
                  if (local_60 != (int64_t *)0x0) {
                    FUN_00d50b20();
                  }
                  if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
                    FUN_00d50b20();
                  }
                  (**(code **)(*local_68 + 0x3e0))();
                }
                lVar46 = lVar46 + 1;
              } while (lVar46 < *(int *)(local_118 + 0xc));
            }
            lVar34 = lVar34 + 1;
          } while (lVar34 < *(int *)(lVar40 + 0xc));
          if ((bVar49) && (lVar33 != 0)) {
            FUN_00d50b20();
          }
          if (bVar50) {
            FUN_00d50b20();
          }
        }
        if (lVar43 != 0) {
          FUN_00d50b20();
        }
      }
    }
    if (iVar18 != 0) {
      (**(code **)(*this_ptr + 0x958))();
      if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (local_60 != (int64_t *)0x0) {
        (**(code **)(*this_ptr + 0x958))();
        if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        (**(code **)(*this_ptr + 0x928))();
        if ((local_60 != (int64_t *)0x0) &&
           ((**(code **)(*this_ptr + 0x928))(), local_100 != '\0')) {
          FUN_00d50b20();
        }
        if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        (**(code **)(*this_ptr + 0x958))();
        lVar43 = local_60[0x31];
        if (lVar43 == 0) {
          lVar40 = 0;
        }
        else {
          FUN_00d50b00();
          lVar40 = lVar43;
        }
        if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (lVar40 != 0) {
          FUN_01d48b10();
          FUN_01d48b40();
          if (0 < *(int *)(lVar40 + 0xc)) {
            lVar34 = 0;
            local_118 = 0;
            bVar50 = false;
            auVar7._8_8_ = 0;
            auVar7._0_8_ = uStack_80;
            _local_88 = auVar7 << 0x40;
            bVar14 = false;
            lVar33 = 0;
            bVar49 = false;
            do {
              lVar46 = *(int64_t *)(*(int64_t *)(lVar40 + 0x10) + lVar34 * 8);
              if (local_118 == lVar46) {
                if ((!bVar50) && (local_118 != 0)) {
                  bVar50 = true;
                  FUN_00d50b00();
                }
              }
              else {
                if (lVar46 != 0) {
                  FUN_00d50b00();
                }
                if ((bVar50) && (local_118 != 0)) {
                  FUN_00d50b20();
                  bVar50 = true;
                  local_118 = lVar46;
                }
                else {
                  bVar50 = true;
                  local_118 = lVar46;
                }
              }
              FUN_015f8890();
              if ((uint8_t  [8])local_60 == local_88) {
                if ((!bVar14) && (local_60 != (int64_t *)0x0)) {
                  bVar14 = true;
                  if (local_58 != '\0') goto LAB_00144bc5;
                  bVar14 = true;
                  FUN_00d50b00();
                }
LAB_00144bb1:
                if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
              }
              else if (local_58 == '\0') {
                if (local_60 != (int64_t *)0x0) {
                  FUN_00d50b00();
                }
                if ((bVar14) && (local_88 != (uint8_t  [8])0x0)) {
                  FUN_00d50b20();
                  local_88 = (uint8_t  [8])local_60;
                  bVar14 = true;
                  goto LAB_00144bb1;
                }
                local_88 = (uint8_t  [8])local_60;
                bVar14 = true;
              }
              else if ((bVar14) && (local_88 != (uint8_t  [8])0x0)) {
                FUN_00d50b20();
                local_88 = (uint8_t  [8])local_60;
                bVar14 = true;
              }
              else {
                local_88 = (uint8_t  [8])local_60;
                bVar14 = true;
              }
LAB_00144bc5:
              FUN_01cfcdc0();
              if (local_58 == '\0') {
                if (local_60 != (int64_t *)0x0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_58 = '\0';
              }
              FUN_01d488d0();
              if (local_60 != (int64_t *)0x0) {
                FUN_00d50b20();
              }
              if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              if (0 < *(int *)((int64_t)local_88 + 0xc)) {
                lVar46 = 0;
                do {
                  lVar4 = *(int64_t *)(*(int64_t *)((int64_t)local_88 + 0x10) + lVar46 * 8);
                  if (lVar33 == lVar4) {
                    if ((!bVar49) && (lVar33 != 0)) {
                      bVar49 = true;
                      FUN_00d50b00();
                    }
                  }
                  else {
                    if (lVar4 != 0) {
                      FUN_00d50b00();
                    }
                    if ((bVar49) && (lVar33 != 0)) {
                      FUN_00d50b20();
                      bVar49 = true;
                      lVar33 = lVar4;
                    }
                    else {
                      bVar49 = true;
                      lVar33 = lVar4;
                    }
                  }
                  FUN_014b2ea0();
                  if (lVar46 == 0) {
                    (**(code **)(*local_68 + 0x4d8))();
                  }
                  else {
                    (**(code **)(*local_68 + 0x4e8))();
                  }
                  lVar46 = lVar46 + 1;
                } while (lVar46 < *(int *)((int64_t)local_88 + 0xc));
              }
              (**(code **)(*local_68 + 0x4e8))();
              (**(code **)(*local_68 + 0x520))();
              if (*(int *)((int64_t)local_88 + 0xc) != 0) {
                lVar46 = **(int64_t **)((int64_t)local_88 + 0x10);
                if (lVar33 == lVar46) {
                  if ((!bVar49) && (lVar33 != 0)) {
                    bVar49 = true;
                    FUN_00d50b00();
                  }
                }
                else {
                  if (lVar46 != 0) {
                    FUN_00d50b00();
                  }
                  if ((bVar49) && (lVar33 != 0)) {
                    FUN_00d50b20();
                    bVar49 = true;
                    lVar33 = lVar46;
                  }
                  else {
                    bVar49 = true;
                    lVar33 = lVar46;
                  }
                }
                FUN_014b2ea0();
                (**(code **)(*local_68 + 0x3e0))();
              }
              lVar34 = lVar34 + 1;
            } while (lVar34 < *(int *)(lVar40 + 0xc));
            if ((bVar49) && (lVar33 != 0)) {
              FUN_00d50b20();
            }
            if (bVar14) {
              FUN_00d50b20();
            }
            if ((bVar50) && (local_118 != 0)) {
              FUN_00d50b20();
            }
          }
          if (lVar43 != 0) {
            FUN_00d50b20();
          }
        }
      }
    }
    (**(code **)(*this_ptr + 0x958))();
    if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (local_60 != (int64_t *)0x0) {
      (**(code **)(*this_ptr + 0x958))();
      if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      (**(code **)(*this_ptr + 0x928))();
      if ((local_60 != (int64_t *)0x0) && ((**(code **)(*this_ptr + 0x928))(), local_100 != '\0'))
      {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_01d48b10();
      iVar15 = 0;
      do {
        if (iVar15 == 2) {
          (**(code **)(*this_ptr + 0x958))();
          lVar43 = local_60[0x4f];
          if (lVar43 == 0) {
            auVar10._8_8_ = 0;
            auVar10._0_8_ = uStack_80;
            _local_88 = auVar10 << 0x40;
          }
          else {
            local_88 = (uint8_t  [8])lVar43;
            FUN_00d50b00();
          }
          bVar49 = lVar43 != 0;
          if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          FUN_01cfcdc0();
          if (local_58 == '\0') {
            if (local_60 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_58 = '\0';
          }
          FUN_01d488d0();
          if (local_60 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
          if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
LAB_00145300:
          if (local_88 != (uint8_t  [8])0x0) {
            if ((*(int *)((int64_t)local_88 + 0xc) != 0) &&
               (FUN_01d48b40(), 0 < *(int *)((int64_t)local_88 + 0xc))) {
              lVar40 = 0;
              bVar50 = false;
              lVar43 = 0;
              do {
                lVar33 = *(int64_t *)(*(int64_t *)((int64_t)local_88 + 0x10) + lVar40 * 8);
                if (lVar43 == lVar33) {
                  lVar33 = lVar43;
                  bVar14 = bVar50;
                  if ((!bVar50) && (lVar43 != 0)) {
                    FUN_00d50b00();
                    bVar14 = true;
                  }
                }
                else {
                  if (lVar33 != 0) {
                    FUN_00d50b00();
                  }
                  bVar14 = true;
                  if ((bVar50) && (lVar43 != 0)) {
                    FUN_00d50b20();
                  }
                }
                bVar50 = bVar14;
                FUN_014b2ec0(CONCAT44((int)((uint64_t)*(double *)(lVar33 + 0x18) >> 0x20),
                                      (float)*(double *)(lVar33 + 0x18)));
                (**(code **)(*local_68 + 0x3e0))();
                lVar40 = lVar40 + 1;
                lVar43 = lVar33;
              } while (lVar40 < *(int *)((int64_t)local_88 + 0xc));
              if (bVar50) {
                FUN_00d50b20();
              }
            }
            if (bVar49) {
              FUN_00d50b20();
            }
          }
        }
        else {
          if (iVar15 == 1) {
            (**(code **)(*this_ptr + 0x958))();
            lVar43 = local_60[0x4e];
            if (lVar43 == 0) {
              auVar8._8_8_ = 0;
              auVar8._0_8_ = uStack_80;
              _local_88 = auVar8 << 0x40;
            }
            else {
              local_88 = (uint8_t  [8])lVar43;
              FUN_00d50b00();
            }
            bVar49 = lVar43 != 0;
            if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            FUN_01cfcdc0();
            if (local_58 == '\0') {
              if (local_60 != (int64_t *)0x0) {
                FUN_00d50b00();
              }
            }
            else {
              local_58 = '\0';
            }
            FUN_01d488d0();
            if (local_60 != (int64_t *)0x0) {
              FUN_00d50b20();
            }
            if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            goto LAB_00145300;
          }
          if (iVar15 == 0) {
            (**(code **)(*this_ptr + 0x958))();
            lVar43 = local_60[0x4d];
            if (lVar43 == 0) {
              auVar9._8_8_ = 0;
              auVar9._0_8_ = uStack_80;
              _local_88 = auVar9 << 0x40;
            }
            else {
              local_88 = (uint8_t  [8])lVar43;
              FUN_00d50b00();
            }
            bVar49 = lVar43 != 0;
            if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            FUN_01cfcdc0();
            if (local_58 == '\0') {
              if (local_60 != (int64_t *)0x0) {
                FUN_00d50b00();
              }
            }
            else {
              local_58 = '\0';
            }
            FUN_01d488d0();
            if (local_60 != (int64_t *)0x0) {
              FUN_00d50b20();
            }
            if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            goto LAB_00145300;
          }
        }
        iVar15 = iVar15 + 1;
      } while (iVar15 != 3);
    }
    (**(code **)(*(int64_t *)this_ptr[0x40] + 0x920))();
    FUN_01d52770();
    if ((bVar48) && (local_b8 != 0)) {
      FUN_00d50b20();
    }
    if ((bVar51) && (lVar27 != 0)) {
      FUN_00d50b20();
    }
    if (plVar13 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
LAB_001454d6:
  if (plVar13 != (int64_t *)0x0) {
    FUN_00d50b20();
    FUN_00d50b20();
    FUN_00d50b20();
  }
  if (!bVar11 && plVar13 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (!bVar12 && local_68 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
LAB_00143c10:
  if (local_108 != 0) {
    FUN_00d50b00();
LAB_00143c3e:
    local_100 = '\0';
    local_108 = 0;
    local_f0 = -1;
LAB_00143c86:
    while( true ) {
      lVar43 = local_1d0;
      lVar40 = (int64_t)local_f0;
      local_f0 = local_f0 + 1;
      if (*(int *)(lVar27 + 0xc) <= local_f0) break;
      lVar33 = *(int64_t *)(lVar27 + 0x10);
      local_108 = *(int64_t *)(lVar33 + 8 + lVar40 * 8);
      pvVar23 = _pthread_getspecific((void*)lVar33);
      if (pvVar23 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012e5ae0();
      if (local_1c8 == '\0') goto LAB_00143d50;
      if (local_1d0 != 0) goto LAB_00143d80;
    }
    FUN_000be170();
    FUN_00d50b20();
  }
  goto LAB_00143b6b;
LAB_00143d50:
  if (local_1d0 != 0) {
    FUN_00d50b00();
LAB_00143d80:
    local_1c8 = '\0';
    local_1d0 = 0;
    local_1b8 = -1;
    while( true ) {
      lVar40 = (int64_t)local_1b8;
      local_1b8 = local_1b8 + 1;
      if (*(int *)(lVar43 + 0xc) <= local_1b8) break;
      lVar33 = *(int64_t *)(lVar43 + 0x10);
      local_1d0 = *(int64_t *)(lVar33 + 8 + lVar40 * 8);
      fVar52 = *(float *)((int64_t)this_ptr + 0x15c);
      pvVar23 = _pthread_getspecific((void*)lVar33);
      pVar30 = (void*)lVar33;
      if (pvVar23 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar56 = (double)FUN_0125a280();
      fVar55 = *(float *)((int64_t)this_ptr + 0x15c);
      pvVar23 = _pthread_getspecific(pVar30);
      if (pvVar23 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar57 = (double)FUN_01264170();
      pvVar23 = _pthread_getspecific(pVar30);
      if (pvVar23 != (void *)0x0) {
        FUN_00e8b990();
      }
      fVar59 = (float)FUN_0125a2c0();
      fVar58 = *(float *)(this_ptr + 0x2b);
      fVar64 = fVar59 + fVar53 + g_0239420c;
      fVar59 = *(float *)(this_ptr + 0x2c);
      local_88._0_4_ = (uint32_t)(int)(fVar52 * (float)dVar56);
      (**(code **)(*local_68 + 0x4d8))();
      (**(code **)(*local_68 + 0x4e8))();
      fVar55 = fVar55 * (float)dVar57;
      fVar52 = g_023908d8;
      if (g_023908d8 <= fVar55) {
        fVar52 = fVar55;
      }
      (**(code **)(*local_68 + 0x4e8))
                (fVar52 + (float)local_88._0_4_,fVar54 + (float)(int)(fVar58 - fVar64 * fVar59));
      (**(code **)(*local_68 + 0x4e8))();
      (**(code **)(*local_68 + 0x4e8))();
      FUN_01cfcdc0();
      if (local_1a0 == '\0') {
        if (local_1a8 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_1a0 = '\0';
      }
      FUN_01d488d0();
      if (local_1a8 != 0) {
        FUN_00d50b20();
      }
      if ((local_1a0 != '\0') && (local_1a8 != 0)) {
        FUN_00d50b20();
      }
      (**(code **)(*local_68 + 0x518))();
      (**(code **)(*local_68 + 0x4d8))();
      (**(code **)(*local_68 + 0x4e8))();
      (**(code **)(*local_68 + 0x4e8))();
      (**(code **)(*local_68 + 0x4e8))();
      (**(code **)(*local_68 + 0x4e8))();
      FUN_01cfcdc0();
      if (local_1a0 == '\0') {
        if (local_1a8 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_1a0 = '\0';
      }
      FUN_01d488d0();
      if (local_1a8 != 0) {
        FUN_00d50b20();
      }
      if ((local_1a0 != '\0') && (local_1a8 != 0)) {
        FUN_00d50b20();
      }
      (**(code **)(*local_68 + 0x518))();
    }
    FUN_001159b0();
    FUN_00d50b20();
  }
  goto LAB_00143c86;
}

