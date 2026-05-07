// Function: FUN_01600720
// Address: 01600720
// Size: 2532 bytes
// Class: MUTempoAnalyzerEvent
// === MUTempoAnalyzerEvent properties ===
//                   _elementTempoEvents
//                   _mergedTimeline
//                   _elementAnalyzer
//                   _sourceDuration
//                   _maxUsedPeriod
//                   _elementsAreTonal


void FUN_01600720(void)

{
  uint8_t auVar1 [16];
  uint uVar2;
  int64_t lVar3;
  uint8_t (*pauVar4) [16];
  int64_t *plVar5;
  int64_t *plVar6;
  uint8_t auVar7 [16];
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  code *pcVar20;
  int64_t lVar21;
  int64_t lVar22;
  int64_t lVar23;
  int64_t lVar24;
  int64_t lVar25;
  int64_t lVar26;
  int64_t lVar27;
  int64_t lVar28;
  int64_t lVar29;
  int64_t lVar30;
  int64_t lVar31;
  int64_t lVar32;
  int64_t lVar33;
  int64_t lVar34;
  int64_t *plVar35;
  char cVar36;
  char cVar37;
  void*puVar38;
  int64_t *plVar39;
  void *pvVar40;
  int64_t lVar41;
  int64_t *plVar42;
  void* pVar43;
  uint8_t (*pauVar44) [16];
  int64_t *plVar45;
  uint64_t uVar46;
  bool bVar47;
  uint8_t auVar48 [16];
  uint8_t auVar49 [16];
  uint8_t auVar50 [16];
  uint8_t auVar51 [16];
  uint8_t auVar52 [16];
  uint8_t auVar53 [16];
  uint8_t auVar54 [16];
  uint8_t auVar55 [16];
  uint8_t auVar56 [16];
  int64_t *local_40;
  char local_38;
  
  plVar35 = local_40;
  puVar38 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar38 = &g_02572358;
  pcVar20 = g_02572370;
  (*g_02572370)();
  bVar47 = g_028ad750 == (void*)0x0;
  g_028ad750 = puVar38;
  if (((bVar47) || (FUN_00d50b20(), g_028ad750 != (void*)0x0)) && (g_028ad758 == '\0')) {
    g_028ad758 = '\x01';
    FUN_00e8cb90();
  }
  puVar38 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar38 = &g_02572358;
  (*pcVar20)();
  bVar47 = g_028ad760 == (void*)0x0;
  g_028ad760 = puVar38;
  if (((bVar47) || (FUN_00d50b20(), g_028ad760 != (void*)0x0)) && (g_028ad768 == '\0')) {
    g_028ad768 = '\x01';
    FUN_00e8cb90();
  }
  FUN_018d8790();
  if ((local_38 == '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  uVar2 = *(uint *)((int64_t)local_40 + 0xc);
  if (0 < (int)uVar2) {
    uVar46 = 0;
    do {
      lVar3 = *(int64_t *)(plVar35[2] + uVar46 * 8);
      if (lVar3 != 0) {
        FUN_00d50b00();
      }
      FUN_018d8750();
      if ((local_38 == '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b00();
      }
      FUN_018d86f0();
      if ((local_38 == '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b00();
      }
      FUN_00c8e690();
      if ((local_38 == '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b00();
      }
      FUN_00c92170();
      FUN_00c92160();
      ___bzero();
      iVar19 = _UNK_0241134c;
      iVar18 = _UNK_02411348;
      iVar17 = _UNK_02411344;
      iVar16 = g_02411340;
      iVar15 = _UNK_0241133c;
      iVar14 = _UNK_02411338;
      iVar13 = _UNK_02411334;
      iVar12 = g_02411330;
      auVar52 = g_02411320;
      iVar11 = _UNK_023de2bc;
      iVar10 = _UNK_023de2b8;
      iVar9 = _UNK_023de2b4;
      iVar8 = g_023de2b0;
      auVar7 = g_023b2d50;
      pauVar44 = (uint8_t (*) [16])local_40[2];
      pauVar4 = (uint8_t (*) [16])local_40[2];
      auVar1 = *pauVar44;
      auVar49 = auVar1 & g_02411320;
      auVar50._0_4_ = -(uint)(auVar49._0_4_ == g_023de2b0);
      auVar50._4_4_ = -(uint)(auVar49._4_4_ == _UNK_023de2b4);
      auVar50._8_4_ = -(uint)(auVar49._8_4_ == _UNK_023de2b8);
      auVar50._12_4_ = -(uint)(auVar49._12_4_ == _UNK_023de2bc);
      auVar54._0_4_ = -(uint)(auVar1._0_4_ == g_02411330);
      auVar54._4_4_ = -(uint)(auVar1._4_4_ == _UNK_02411334);
      auVar54._8_4_ = -(uint)(auVar1._8_4_ == _UNK_02411338);
      auVar54._12_4_ = -(uint)(auVar1._12_4_ == _UNK_0241133c);
      auVar49._0_4_ = -(uint)(auVar1._0_4_ == g_02411340);
      auVar49._4_4_ = -(uint)(auVar1._4_4_ == _UNK_02411344);
      auVar49._8_4_ = -(uint)(auVar1._8_4_ == _UNK_02411348);
      auVar49._12_4_ = -(uint)(auVar1._12_4_ == _UNK_0241134c);
      *pauVar4 = (auVar49 | auVar54 | auVar50) & g_023b2d50;
      auVar1 = pauVar44[1];
      auVar49 = auVar1 & auVar52;
      auVar51._0_4_ = -(uint)(auVar49._0_4_ == iVar8);
      auVar51._4_4_ = -(uint)(auVar49._4_4_ == iVar9);
      auVar51._8_4_ = -(uint)(auVar49._8_4_ == iVar10);
      auVar51._12_4_ = -(uint)(auVar49._12_4_ == iVar11);
      auVar55._0_4_ = -(uint)(auVar1._0_4_ == iVar12);
      auVar55._4_4_ = -(uint)(auVar1._4_4_ == iVar13);
      auVar55._8_4_ = -(uint)(auVar1._8_4_ == iVar14);
      auVar55._12_4_ = -(uint)(auVar1._12_4_ == iVar15);
      auVar48._0_4_ = -(uint)(auVar1._0_4_ == iVar16);
      auVar48._4_4_ = -(uint)(auVar1._4_4_ == iVar17);
      auVar48._8_4_ = -(uint)(auVar1._8_4_ == iVar18);
      auVar48._12_4_ = -(uint)(auVar1._12_4_ == iVar19);
      pauVar4[1] = (auVar48 | auVar55 | auVar51) & auVar7;
      auVar1 = pauVar44[2];
      auVar52 = auVar1 & auVar52;
      auVar53._0_4_ = -(uint)(auVar52._0_4_ == iVar8);
      auVar53._4_4_ = -(uint)(auVar52._4_4_ == iVar9);
      auVar53._8_4_ = -(uint)(auVar52._8_4_ == iVar10);
      auVar53._12_4_ = -(uint)(auVar52._12_4_ == iVar11);
      auVar56._0_4_ = -(uint)(auVar1._0_4_ == iVar12);
      auVar56._4_4_ = -(uint)(auVar1._4_4_ == iVar13);
      auVar56._8_4_ = -(uint)(auVar1._8_4_ == iVar14);
      auVar56._12_4_ = -(uint)(auVar1._12_4_ == iVar15);
      auVar52._0_4_ = -(uint)(auVar1._0_4_ == iVar16);
      auVar52._4_4_ = -(uint)(auVar1._4_4_ == iVar17);
      auVar52._8_4_ = -(uint)(auVar1._8_4_ == iVar18);
      auVar52._12_4_ = -(uint)(auVar1._12_4_ == iVar19);
      pauVar4[2] = (auVar52 | auVar56 | auVar53) & auVar7;
      plVar39 = (int64_t *)FUN_00e8fc40();
      pVar43 = (void*)pauVar44;
      FUN_00d4ff40();
      *plVar39 = (int64_t)&g_025f4940;
      *(uint8_t (*) [16])(plVar39 + 7) = (uint8_t  [16])0x0;
      plVar39[9] = 0;
      FUN_00d500e0();
      pvVar40 = _pthread_getspecific(pVar43);
      if (pvVar40 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_015ff220();
      FUN_018d8720();
      pvVar40 = _pthread_getspecific(pVar43);
      if ((pvVar40 == (void *)0x0) || (lVar41 = FUN_00e8b990(), lVar41 == 0)) {
        plVar45 = (int64_t *)plVar39[8];
        plVar5 = plVar39;
      }
      else {
        plVar5 = (int64_t *)plVar39[(uint64_t)(*(uint *)(lVar41 + 0x154) & 1) + 4];
        plVar45 = (int64_t *)plVar5[8];
      }
      if (plVar45 != local_40) {
        plVar42 = local_40;
        if (local_38 == '\0') {
          if (local_40 == (int64_t *)0x0) {
            plVar42 = (int64_t *)0x0;
            goto LAB_01600b0a;
          }
          FUN_00d50b00();
          plVar6 = (int64_t *)plVar5[8];
          plVar5[8] = (int64_t)local_40;
        }
        else {
          local_38 = '\0';
LAB_01600b0a:
          plVar5[8] = (int64_t)plVar42;
          plVar6 = plVar45;
        }
        plVar45 = plVar42;
        if (plVar6 != (int64_t *)0x0) {
          FUN_00d50b20();
          plVar45 = local_40;
        }
      }
      if ((local_38 != '\0') && (plVar45 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d21140();
      lVar41 = g_027cc8f0;
      if (g_027cc8f0 != 0) {
        FUN_00d50b00();
      }
      cVar36 = (**(code **)(*local_40 + 0x50))();
      lVar24 = g_02781708;
      cVar37 = '\x01';
      if (cVar36 == '\0') {
        if (g_02781708 != 0) {
          FUN_00d50b00();
        }
        cVar36 = (**(code **)(*local_40 + 0x50))();
        lVar23 = g_02781678;
        cVar37 = '\x01';
        if (cVar36 == '\0') {
          if (g_02781678 != 0) {
            FUN_00d50b00();
          }
          cVar36 = (**(code **)(*local_40 + 0x50))();
          lVar34 = g_027cc8a0;
          cVar37 = '\x01';
          if (cVar36 == '\0') {
            if (g_027cc8a0 != 0) {
              FUN_00d50b00();
            }
            cVar36 = (**(code **)(*local_40 + 0x50))();
            lVar21 = g_026fce10;
            cVar37 = '\x01';
            if (cVar36 == '\0') {
              if (g_026fce10 != 0) {
                FUN_00d50b00();
              }
              cVar36 = (**(code **)(*local_40 + 0x50))();
              lVar25 = g_027c7dd8;
              cVar37 = '\x01';
              if (cVar36 == '\0') {
                if (g_027c7dd8 != 0) {
                  FUN_00d50b00();
                }
                cVar36 = (**(code **)(*local_40 + 0x50))();
                lVar26 = g_027c7de0;
                cVar37 = '\x01';
                if (cVar36 == '\0') {
                  if (g_027c7de0 != 0) {
                    FUN_00d50b00();
                  }
                  cVar36 = (**(code **)(*local_40 + 0x50))();
                  lVar27 = g_027c7de8;
                  cVar37 = '\x01';
                  if (cVar36 == '\0') {
                    if (g_027c7de8 != 0) {
                      FUN_00d50b00();
                    }
                    cVar36 = (**(code **)(*local_40 + 0x50))();
                    lVar28 = g_027c7df0;
                    cVar37 = '\x01';
                    if (cVar36 == '\0') {
                      if (g_027c7df0 != 0) {
                        FUN_00d50b00();
                      }
                      cVar36 = (**(code **)(*local_40 + 0x50))();
                      lVar29 = g_027c7df8;
                      cVar37 = '\x01';
                      if (cVar36 == '\0') {
                        if (g_027c7df8 != 0) {
                          FUN_00d50b00();
                        }
                        cVar36 = (**(code **)(*local_40 + 0x50))();
                        lVar22 = g_0270b790;
                        cVar37 = '\x01';
                        if (cVar36 == '\0') {
                          if (g_0270b790 != 0) {
                            FUN_00d50b00();
                          }
                          cVar36 = (**(code **)(*local_40 + 0x50))();
                          lVar30 = g_027c7e00;
                          cVar37 = '\x01';
                          if (cVar36 == '\0') {
                            if (g_027c7e00 != 0) {
                              FUN_00d50b00();
                            }
                            cVar36 = (**(code **)(*local_40 + 0x50))();
                            lVar31 = g_027c7e08;
                            cVar37 = '\x01';
                            if (cVar36 == '\0') {
                              if (g_027c7e08 != 0) {
                                FUN_00d50b00();
                              }
                              cVar36 = (**(code **)(*local_40 + 0x50))();
                              lVar32 = g_027c7e10;
                              cVar37 = '\x01';
                              if (cVar36 == '\0') {
                                if (g_027c7e10 != 0) {
                                  FUN_00d50b00();
                                }
                                cVar36 = (**(code **)(*local_40 + 0x50))();
                                lVar33 = g_027c7e18;
                                cVar37 = '\x01';
                                if (cVar36 == '\0') {
                                  if (g_027c7e18 != 0) {
                                    FUN_00d50b00();
                                  }
                                  cVar37 = (**(code **)(*local_40 + 0x50))();
                                  if (lVar33 != 0) {
                                    FUN_00d50b20();
                                  }
                                }
                                if (lVar32 != 0) {
                                  FUN_00d50b20();
                                }
                              }
                              if (lVar31 != 0) {
                                FUN_00d50b20();
                              }
                            }
                            if (lVar30 != 0) {
                              FUN_00d50b20();
                            }
                          }
                          if (lVar22 != 0) {
                            FUN_00d50b20();
                          }
                        }
                        if (lVar29 != 0) {
                          FUN_00d50b20();
                        }
                      }
                      if (lVar28 != 0) {
                        FUN_00d50b20();
                      }
                    }
                    if (lVar27 != 0) {
                      FUN_00d50b20();
                    }
                  }
                  if (lVar26 != 0) {
                    FUN_00d50b20();
                  }
                }
                if (lVar25 != 0) {
                  FUN_00d50b20();
                }
              }
              if (lVar21 != 0) {
                FUN_00d50b20();
              }
            }
            if (lVar34 != 0) {
              FUN_00d50b20();
            }
          }
          if (lVar23 != 0) {
            FUN_00d50b20();
          }
        }
        if (lVar24 != 0) {
          FUN_00d50b20();
        }
      }
      if (lVar41 != 0) {
        FUN_00d50b20();
      }
      if (cVar37 != '\0') {
        FUN_00d21140();
      }
      local_38 = '\0';
      FUN_00d50b20();
      FUN_00d50b20();
      FUN_00d50b20();
      FUN_00d50b20();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      uVar46 = uVar46 + 1;
      local_40 = plVar39;
    } while (uVar2 != uVar46);
  }
  FUN_00d50b20();
  return;
}

