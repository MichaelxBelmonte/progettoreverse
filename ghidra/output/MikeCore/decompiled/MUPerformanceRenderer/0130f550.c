// Function: FUN_0130f550
// Address: 0130f550
// Size: 7432 bytes
// Class: MUPerformanceRenderer


void FUN_0130f550(void)

{
  double dVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  undefined1 uVar5;
  uint uVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  void *pvVar12;
  longlong lVar13;
  undefined8 uVar14;
  longlong *plVar15;
  double dVar16;
  longlong lVar17;
  longlong *plVar18;
  pthread_key_t pVar19;
  longlong *plVar20;
  longlong *plVar21;
  double dVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  longlong *plVar26;
  ulonglong unaff_RSI;
  ulonglong uVar27;
  longlong lVar28;
  longlong lVar29;
  longlong *unaff_RDI;
  longlong *plVar30;
  double dVar31;
  bool bVar32;
  bool bVar33;
  longlong lVar34;
  double dVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  longlong lVar38;
  double dVar39;
  double dVar40;
  undefined1 local_113c [4];
  longlong local_1138;
  char local_1130;
  longlong local_1128;
  char local_1120;
  double local_1118;
  double local_1110;
  longlong local_1108;
  char local_1100;
  longlong local_10f8;
  char local_10f0;
  longlong local_10e8;
  longlong *local_10e0;
  char local_10d8;
  longlong *local_10d0;
  char local_10c8;
  longlong *local_10c0;
  char local_10b8;
  undefined8 local_10b0;
  undefined4 local_10a4;
  double local_10a0;
  longlong *local_1088;
  longlong local_1078;
  pthread_key_t local_1064;
  undefined8 local_1060;
  longlong local_1058;
  longlong *local_1050;
  longlong *local_1048;
  longlong local_1040;
  longlong *local_1038;
  char local_1030;
  longlong local_838 [256];
  longlong local_38;
  
  local_38 = *(longlong *)PTR____stack_chk_guard_024a9898;
  lVar17 = unaff_RDI[0x1e];
  if (lVar17 != 0) {
    FUN_00d50b00();
  }
  local_10a0 = (double)FUN_00e7b4e0();
  if (lVar17 == 0) {
    cVar4 = '\0';
    local_1058 = 0;
    goto LAB_01310f36;
  }
  local_10b0 = 0;
  local_1060 = 0;
  local_1058 = 0;
  uVar6 = (**(code **)(*unaff_RDI + 0x3b0))();
  if (uVar6 != 0) {
    uVar27 = (ulonglong)(int)uVar6;
    if ((unaff_RSI | uVar27) >> 0x20 == 0) {
      uVar11 = (unaff_RSI & 0xffffffff) / (ulonglong)uVar6;
      uVar24 = (unaff_RSI & 0xffffffff) % (ulonglong)uVar6;
    }
    else {
      uVar11 = (longlong)unaff_RSI / (longlong)uVar27;
      uVar24 = (longlong)unaff_RSI % (longlong)uVar27;
    }
    if (uVar24 != 0) {
      unaff_RSI = (uVar11 + 1) * uVar27;
    }
  }
  local_10e8 = unaff_RSI - unaff_RDI[0x12];
  if ((int)local_10e8 < 1) {
    local_10b0 = 0;
    local_1088 = (longlong *)0x0;
    local_1050 = (longlong *)0x0;
    local_1048 = (longlong *)0x0;
    cVar4 = '\0';
    local_1058 = 0;
  }
  else {
    FUN_012ddd50();
    local_1088 = local_1038;
    plVar15 = local_1038;
    if (local_1038 == (longlong *)0x0) {
      local_10b0 = 0;
    }
    else {
      local_10b0 = CONCAT71((int7)((ulonglong)local_1038 >> 8),1);
      if (((local_1030 == '\0') && (FUN_00d50b00(), local_1030 != '\0')) &&
         (local_1038 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    pVar19 = (pthread_key_t)plVar15;
    FUN_012ddc30();
    lVar34 = (**(code **)(*local_1038 + 0x5f0))();
    unaff_RDI[0x16] = lVar34;
    if ((local_1030 != '\0') && (local_1038 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_012ddc30();
    lVar34 = (**(code **)(*local_1038 + 0x5e0))();
    unaff_RDI[0x15] = lVar34;
    if ((local_1030 != '\0') && (local_1038 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_012ddc30();
    lVar34 = (**(code **)(*local_1038 + 0x5f8))();
    unaff_RDI[0x17] = lVar34;
    if ((local_1030 != '\0') && (local_1038 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_012dde10();
    plVar15 = local_1038;
    if (local_1030 == '\0') {
      if (local_1038 != (longlong *)0x0) {
        FUN_00d50b00();
        if ((local_1030 != '\0') && (local_1038 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        goto LAB_0130f81d;
      }
LAB_0130f8e7:
      if ((char)unaff_RDI[0x2d] == '\0') {
        bVar32 = false;
      }
      else {
        local_1060 = 0;
        local_1058 = 0;
        pvVar12 = _pthread_getspecific(pVar19);
        lVar34 = lVar17;
        if (pvVar12 != (void *)0x0) {
          local_1060 = 0;
          local_1058 = 0;
          lVar13 = FUN_00e8b990();
          if (lVar13 != 0) {
            lVar34 = *(longlong *)(lVar17 + 0x20 + (ulonglong)(*(uint *)(lVar13 + 0x154) & 1) * 8);
          }
        }
        bVar32 = *(longlong *)(lVar34 + 0x128) != 0;
      }
    }
    else {
      if (local_1038 == (longlong *)0x0) goto LAB_0130f8e7;
LAB_0130f81d:
      pvVar12 = _pthread_getspecific(pVar19);
      if ((pvVar12 == (void *)0x0) || (lVar34 = FUN_00e8b990(), lVar34 == 0)) {
        if ((char)plVar15[7] != '\0') goto LAB_0130f85d;
LAB_0130f88f:
        cVar4 = '\0';
      }
      else {
        if (*(char *)(plVar15[(ulonglong)(*(uint *)(lVar34 + 0x154) & 1) + 4] + 0x38) == '\0')
        goto LAB_0130f88f;
LAB_0130f85d:
        pvVar12 = _pthread_getspecific(pVar19);
        if ((pvVar12 == (void *)0x0) || (lVar34 = FUN_00e8b990(), lVar34 == 0)) {
          lVar34 = *(longlong *)(lVar17 + 0x128);
        }
        else {
          lVar34 = *(longlong *)
                    (*(longlong *)(lVar17 + 0x20 + (ulonglong)(*(uint *)(lVar34 + 0x154) & 1) * 8) +
                    0x128);
        }
        if (lVar34 == 0) goto LAB_0130f88f;
        pvVar12 = _pthread_getspecific(pVar19);
        if (pvVar12 != (void *)0x0) {
          FUN_00e8b990();
        }
        cVar4 = FUN_012f4aa0();
      }
      FUN_00d50b20();
      bVar32 = true;
      if (cVar4 == '\0') goto LAB_0130f8e7;
    }
    local_1060 = 0;
    local_1058 = 0;
    uVar14 = (**(code **)(*unaff_RDI + 0x5e8))();
    if ((((byte)uVar14 & bVar32) == 1) && (unaff_RDI[0x24] == 0)) {
      plVar15 = *(longlong **)
                 (*(longlong *)(unaff_RDI[0x25] + 0x10) + (longlong)(int)unaff_RDI[0x27] * 8);
      lVar34 = 0;
      local_1040 = lVar17;
      if (plVar15 != (longlong *)0x0) {
        FUN_00d50b00();
        lVar34 = unaff_RDI[0x24];
      }
      unaff_RDI[0x24] = (longlong)plVar15;
      if (lVar34 != 0) {
        FUN_00d50b20();
        plVar15 = (longlong *)unaff_RDI[0x24];
      }
      local_1060 = 0;
      lVar34 = 0;
      local_1058 = 0;
      (**(code **)(*plVar15 + 0x1c0))();
      FUN_012ddba0();
      local_10e0 = local_1038;
      local_10d8 = 0;
      if (local_1030 == '\0') {
        if (local_1038 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_1030 = '\0';
      }
      local_10d8 = '\x01';
      FUN_013fba30();
      if ((local_10d8 != '\0') && (local_10e0 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_1030 != '\0') && (local_1038 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      local_1060 = 0;
      local_1058 = 0;
      FUN_013fbb90(unaff_RDI[3]);
      local_1060 = 0;
      local_1058 = 0;
      FUN_00d50b00();
      local_1078 = lVar17;
      while( true ) {
        pvVar12 = _pthread_getspecific((pthread_key_t)lVar34);
        if ((pvVar12 == (void *)0x0) || (lVar17 = FUN_00e8b990(), lVar17 == 0)) {
          lVar17 = *(longlong *)(local_1078 + 0x110);
        }
        else {
          lVar17 = *(longlong *)
                    (*(longlong *)
                      (local_1078 + 0x20 + (ulonglong)(*(uint *)(lVar17 + 0x154) & 1) * 8) + 0x110);
          lVar34 = local_1078;
        }
        if (lVar17 == 0) break;
        pvVar12 = _pthread_getspecific((pthread_key_t)lVar34);
        if (pvVar12 == (void *)0x0) {
          lVar17 = *(longlong *)(local_1078 + 0x110);
        }
        else {
          lVar17 = FUN_00e8b990();
          if (lVar17 == 0) {
            lVar17 = *(longlong *)(local_1078 + 0x110);
          }
          else {
            lVar17 = *(longlong *)
                      (*(longlong *)
                        (local_1078 + 0x20 + (ulonglong)(*(uint *)(lVar17 + 0x154) & 1) * 8) + 0x110
                      );
          }
        }
        lVar34 = local_1078;
        if (lVar17 != local_1078) {
          if (lVar17 != 0) {
            FUN_00d50b00();
          }
          bVar33 = local_1078 != 0;
          local_1078 = lVar17;
          if (bVar33) {
            FUN_00d50b20();
          }
        }
      }
      pVar19 = *(pthread_key_t *)(unaff_RDI + 0x27);
      lVar34 = (longlong)(int)pVar19;
      lVar17 = *(longlong *)(*(longlong *)(unaff_RDI[0x26] + 0x10) + lVar34 * 8);
      if (lVar17 != 0) {
        FUN_00d50b00();
        pVar19 = (pthread_key_t)lVar34;
      }
      pvVar12 = _pthread_getspecific(pVar19);
      if ((pvVar12 != (void *)0x0) && (lVar34 = FUN_00e8b990(), lVar34 != 0)) {
        pVar19 = (pthread_key_t)local_1078;
      }
      pvVar12 = _pthread_getspecific(pVar19);
      if (pvVar12 != (void *)0x0) {
        FUN_00e8b990();
      }
      pvVar12 = _pthread_getspecific(pVar19);
      if (pvVar12 != (void *)0x0) {
        FUN_00e8b990();
      }
      pvVar12 = _pthread_getspecific(pVar19);
      if (pvVar12 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012e8b20();
      local_10d0 = local_1038;
      local_10c8 = 0;
      if (local_1030 == '\0') {
        if (local_1038 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_1030 = '\0';
      }
      local_10c8 = '\x01';
      local_1130 = '\0';
      local_1138 = lVar17;
      FUN_01240c70();
      if ((local_1130 != '\0') && (local_1138 != 0)) {
        FUN_00d50b20();
      }
      if ((local_10c8 != '\0') && (local_10d0 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_1030 != '\0') && (local_1038 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      local_1120 = '\0';
      local_1128 = lVar17;
      FUN_013fb6b0();
      if ((local_1120 != '\0') && (local_1128 != 0)) {
        FUN_00d50b20();
      }
      local_1100 = 0;
      lVar34 = unaff_RDI[0x1e];
      if (lVar34 != 0) {
        FUN_00d50b00();
      }
      local_1100 = '\x01';
      local_1108 = lVar34;
      FUN_013fe950();
      if ((local_1100 != '\0') && (local_1108 != 0)) {
        FUN_00d50b20();
      }
      FUN_012ddbf0();
      FUN_013fb690();
      FUN_013fe940(unaff_RDI[0x15]);
      (**(code **)(*(longlong *)unaff_RDI[0x24] + 0x398))();
      iVar10 = (int)unaff_RDI[0x27] + 1;
      if (2 < (int)unaff_RDI[0x27]) {
        iVar10 = 0;
      }
      *(int *)(unaff_RDI + 0x27) = iVar10;
      if (lVar17 == 0) {
        local_10a4 = 0;
        lVar17 = local_1040;
      }
      else {
        FUN_00d50b20();
        local_10a4 = 0;
        lVar17 = local_1040;
      }
    }
    else {
      local_10a4 = (undefined4)CONCAT71((int7)((ulonglong)uVar14 >> 8),1);
      local_1078 = 0;
    }
    lVar34 = unaff_RDI[0x24];
    if (bVar32 == false) {
      if (lVar34 != 0) {
LAB_0130fa2f:
        local_1060 = 0;
        local_1058 = 0;
        FUN_012ddbf0();
        local_1060 = 0;
        local_1058 = 0;
        FUN_013fb6a0();
        if (unaff_RDI[0x24] != 0) {
          unaff_RDI[0x24] = 0;
          local_1060 = 0;
          local_1058 = 0;
          FUN_00d50b20();
        }
      }
    }
    else if (lVar34 != 0) {
      local_1060 = 0;
      local_1058 = 0;
      cVar4 = (**(code **)(*unaff_RDI + 0x638))();
      if (cVar4 != '\0') {
        lVar34 = unaff_RDI[0x24];
        goto LAB_0130fa2f;
      }
    }
    local_1058 = unaff_RDI[0x22];
    if (local_1058 == 0) {
      local_1058 = 0;
      uVar14 = 0;
      if ((longlong)unaff_RSI <= unaff_RDI[0x12]) goto LAB_0130fbcd;
LAB_0130fad0:
      local_1060 = uVar14;
      FUN_011eded0(&local_1038,&local_1064,local_113c,local_10e8);
      pVar19 = local_1064;
      uVar7 = FUN_00b33590();
      FUN_00ae9740(uVar7,pVar19);
      if (unaff_RDI[0x20] != 0) {
        cVar4 = (**(code **)(*unaff_RDI + 0x600))();
        if (cVar4 != '\0') {
          cVar4 = (**(code **)(*unaff_RDI + 0x620))();
          plVar15 = (longlong *)unaff_RDI[0x20];
          if (cVar4 == '\0') {
            (**(code **)(*plVar15 + 0x678))();
          }
          else {
            (**(code **)(*unaff_RDI + 0x618))();
            local_10c0 = local_1038;
            local_10b8 = 0;
            if (local_1030 == '\0') {
              if (local_1038 != (longlong *)0x0) {
                FUN_00d50b00();
              }
            }
            else {
              local_1030 = '\0';
            }
            local_10b8 = '\x01';
            (**(code **)(*plVar15 + 0x698))();
            if ((local_10b8 != '\0') && (local_10c0 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_1030 != '\0') && (local_1038 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
          lVar34 = unaff_RDI[0x2a];
          lVar13 = unaff_RDI[0x2b];
          if (lVar34 != lVar13) {
            if (lVar13 != 0) {
              FUN_00d50b00();
            }
            unaff_RDI[0x2a] = lVar13;
            if (lVar34 != 0) {
              FUN_00d50b20();
            }
          }
          local_10f0 = 0;
          lVar34 = unaff_RDI[0x1e];
          if (lVar34 != 0) {
            FUN_00d50b00();
          }
          local_10f0 = '\x01';
          local_10f8 = lVar34;
          FUN_0190a130();
          plVar15 = (longlong *)unaff_RDI[0x2b];
          plVar18 = plVar15;
          if (plVar15 != local_1038) {
            if (local_1030 == '\0') {
              if (local_1038 == (longlong *)0x0) {
                plVar18 = (longlong *)0x0;
                goto LAB_013102be;
              }
              FUN_00d50b00();
              plVar15 = (longlong *)unaff_RDI[0x2b];
              unaff_RDI[0x2b] = (longlong)local_1038;
              plVar18 = local_1038;
            }
            else {
              local_1030 = '\0';
              plVar18 = local_1038;
LAB_013102be:
              unaff_RDI[0x2b] = (longlong)plVar18;
            }
            if (plVar15 != (longlong *)0x0) {
              FUN_00d50b20();
              plVar18 = local_1038;
            }
          }
          if ((local_1030 != '\0') && (plVar18 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_10f0 != '\0') && (local_10f8 != 0)) {
            FUN_00d50b20();
          }
        }
        FUN_0130b770(unaff_RDI[0x15],
                     (double)(int)local_1064 * (double)unaff_RDI[4] * (double)unaff_RDI[0x17]);
        pVar19 = local_1064;
        (**(code **)(*(longlong *)unaff_RDI[0x20] + 0x400))(local_1064,local_838);
        local_10a0 = (double)(**(code **)(*(longlong *)unaff_RDI[0x20] + 0x410))();
        (**(code **)(*unaff_RDI + 0x5d0))();
        if (local_1030 == '\0') {
          if (local_1038 != (longlong *)0x0) {
            local_1050 = local_1038;
            FUN_00d50b00();
            if ((local_1030 != '\0') && (local_1038 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            goto LAB_013103fd;
          }
        }
        else {
          local_1050 = local_1038;
          if (local_1038 != (longlong *)0x0) {
LAB_013103fd:
            iVar10 = FUN_0130efc0();
            iVar9 = FUN_0130f0e0();
            if ((iVar10 == 2) || (iVar9 == 2)) {
              pvVar12 = _pthread_getspecific(pVar19);
              if (pvVar12 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_012eb770();
              plVar15 = local_1038;
              if ((local_1030 != '\0') && (local_1038 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              if (plVar15 != (longlong *)0x0) {
                pvVar12 = _pthread_getspecific(pVar19);
                if (pvVar12 != (void *)0x0) {
                  FUN_00e8b990();
                }
                local_1048 = (longlong *)FUN_012f7cb0();
                pvVar12 = _pthread_getspecific(pVar19);
                if (pvVar12 != (void *)0x0) {
                  FUN_00e8b990();
                }
                dVar35 = (double)FUN_012f7d90();
                pVar19 = local_1064;
                dVar31 = (double)unaff_RDI[0x15];
                dVar16 = (double)unaff_RDI[0x16];
                dVar22 = dVar31;
                if (dVar31 <= dVar16) {
                  dVar22 = dVar16;
                }
                if ((double)local_1048 < dVar22) {
                  local_1118 = dVar35 + (double)local_1048;
                  if (dVar31 <= dVar16) {
                    dVar16 = dVar31;
                  }
                  if (dVar16 <= local_1118) {
                    if ((dVar16 != dVar22) || (NAN(dVar16) || NAN(dVar22))) {
                      local_1110 = dVar16;
                      if ((iVar10 == 2) &&
                         ((((dVar16 <= (double)local_1048 && ((double)local_1048 < dVar22)) &&
                           (iVar10 = FUN_00e7d850((double)(int)local_1064 *
                                                  (((double)local_1048 - dVar16) / (dVar22 - dVar16)
                                                  )), -1 < iVar10)) && (iVar10 < (int)local_1064))))
                      {
                        uVar7 = FUN_00b33590();
                        FUN_00ae9740(uVar7,iVar10);
                      }
                      if (((iVar9 == 2) && (local_1110 <= local_1118)) &&
                         ((local_1118 < dVar22 &&
                          ((uVar6 = FUN_00e7d850((double)(int)local_1064 *
                                                 ((local_1118 - local_1110) / (dVar22 - local_1110))
                                                ), -1 < (int)uVar6 &&
                           (iVar10 = local_1064 - uVar6,
                           iVar10 != 0 && (int)uVar6 <= (int)local_1064)))))) {
                        uVar8 = FUN_00b33120();
                        uVar11 = (ulonglong)uVar6;
                        uVar27 = (ulonglong)uVar8;
                        if (0 < (int)uVar8) {
                          if (uVar8 < 4) {
                            uVar24 = 0;
                          }
                          else {
                            uVar24 = (ulonglong)(uVar8 & 0xfffffffc);
                            uVar25 = (uVar24 - 4 >> 2) + 1;
                            uVar23 = (ulonglong)((uint)uVar25 & 3);
                            if (uVar24 - 4 < 0xc) {
                              lVar13 = 0;
                            }
                            else {
                              lVar34 = -(uVar25 & 0xfffffffffffffffc);
                              lVar13 = 0;
                              lVar28 = (ulonglong)uVar6 * 4;
                              lVar29 = (ulonglong)uVar6 * 4;
                              do {
                                local_838[lVar13] = local_838[lVar13] + lVar28;
                                local_838[lVar13 + 1] = local_838[lVar13 + 1] + lVar29;
                                local_838[lVar13 + 2] = local_838[lVar13 + 2] + lVar28;
                                local_838[lVar13 + 3] = local_838[lVar13 + 3] + lVar29;
                                local_838[lVar13 + 4] = local_838[lVar13 + 4] + lVar28;
                                local_838[lVar13 + 5] = local_838[lVar13 + 5] + lVar29;
                                local_838[lVar13 + 6] = local_838[lVar13 + 6] + lVar28;
                                local_838[lVar13 + 7] = local_838[lVar13 + 7] + lVar29;
                                local_838[lVar13 + 8] = local_838[lVar13 + 8] + lVar28;
                                local_838[lVar13 + 9] = local_838[lVar13 + 9] + lVar29;
                                local_838[lVar13 + 10] = local_838[lVar13 + 10] + lVar28;
                                local_838[lVar13 + 0xb] = local_838[lVar13 + 0xb] + lVar29;
                                local_838[lVar13 + 0xc] = local_838[lVar13 + 0xc] + lVar28;
                                local_838[lVar13 + 0xd] = local_838[lVar13 + 0xd] + lVar29;
                                local_838[lVar13 + 0xe] = local_838[lVar13 + 0xe] + lVar28;
                                local_838[lVar13 + 0xf] = local_838[lVar13 + 0xf] + lVar29;
                                lVar13 = lVar13 + 0x10;
                                lVar34 = lVar34 + 4;
                              } while (lVar34 != 0);
                            }
                            if (uVar23 != 0) {
                              lVar34 = lVar13 * 8 + -0x820;
                              lVar13 = lVar13 * 8 + -0x828;
                              lVar28 = 0;
                              do {
                                plVar18 = (longlong *)
                                          ((longlong)local_838 + lVar28 + lVar34 + 0x820);
                                lVar29 = plVar18[1];
                                plVar15 = (longlong *)
                                          ((longlong)local_838 + lVar28 + lVar13 + 0x838);
                                lVar38 = *plVar15;
                                lVar2 = plVar15[1];
                                plVar15 = (longlong *)
                                          ((longlong)local_838 + lVar28 + lVar34 + 0x820);
                                *plVar15 = *plVar18 + (ulonglong)uVar6 * 4;
                                plVar15[1] = lVar29 + (ulonglong)uVar6 * 4;
                                plVar15 = (longlong *)
                                          ((longlong)local_838 + lVar28 + lVar13 + 0x838);
                                *plVar15 = lVar38 + (ulonglong)uVar6 * 4;
                                plVar15[1] = lVar2 + (ulonglong)uVar6 * 4;
                                lVar28 = lVar28 + 0x20;
                              } while (uVar23 << 5 != lVar28);
                            }
                            if (uVar24 == uVar27) goto LAB_013110ec;
                          }
                          do {
                            local_838[uVar24] = local_838[uVar24] + uVar11 * 4;
                            uVar24 = uVar24 + 1;
                          } while (uVar27 != uVar24);
                        }
LAB_013110ec:
                        uVar7 = FUN_00b33590();
                        FUN_00ae9740(uVar7,iVar10);
                        if (0 < (int)uVar8) {
                          lVar34 = -uVar11;
                          if (uVar8 < 4) {
                            uVar24 = 0;
                          }
                          else {
                            uVar24 = (ulonglong)(uVar8 & 0xfffffffc);
                            uVar25 = (uVar24 - 4 >> 2) + 1;
                            uVar23 = (ulonglong)((uint)uVar25 & 3);
                            uVar7 = (undefined4)((ulonglong)lVar34 >> 0x20);
                            if (uVar24 - 4 < 0xc) {
                              lVar28 = 0;
                            }
                            else {
                              lVar13 = -(uVar25 & 0xfffffffffffffffc);
                              lVar28 = 0;
                              auVar37._8_4_ = (int)lVar34;
                              auVar37._0_8_ = lVar34;
                              auVar37._12_4_ = uVar7;
                              lVar29 = uVar11 * -4;
                              lVar38 = auVar37._8_8_ * 4;
                              do {
                                local_838[lVar28] = local_838[lVar28] + lVar29;
                                local_838[lVar28 + 1] = local_838[lVar28 + 1] + lVar38;
                                local_838[lVar28 + 2] = local_838[lVar28 + 2] + lVar29;
                                local_838[lVar28 + 3] = local_838[lVar28 + 3] + lVar38;
                                local_838[lVar28 + 4] = local_838[lVar28 + 4] + lVar29;
                                local_838[lVar28 + 5] = local_838[lVar28 + 5] + lVar38;
                                local_838[lVar28 + 6] = local_838[lVar28 + 6] + lVar29;
                                local_838[lVar28 + 7] = local_838[lVar28 + 7] + lVar38;
                                local_838[lVar28 + 8] = local_838[lVar28 + 8] + lVar29;
                                local_838[lVar28 + 9] = local_838[lVar28 + 9] + lVar38;
                                local_838[lVar28 + 10] = local_838[lVar28 + 10] + lVar29;
                                local_838[lVar28 + 0xb] = local_838[lVar28 + 0xb] + lVar38;
                                local_838[lVar28 + 0xc] = local_838[lVar28 + 0xc] + lVar29;
                                local_838[lVar28 + 0xd] = local_838[lVar28 + 0xd] + lVar38;
                                local_838[lVar28 + 0xe] = local_838[lVar28 + 0xe] + lVar29;
                                local_838[lVar28 + 0xf] = local_838[lVar28 + 0xf] + lVar38;
                                lVar28 = lVar28 + 0x10;
                                lVar13 = lVar13 + 4;
                              } while (lVar13 != 0);
                            }
                            if (uVar23 != 0) {
                              lVar13 = lVar28 * 8 + -0x820;
                              lVar28 = lVar28 * 8 + -0x828;
                              lVar29 = 0;
                              auVar36._8_4_ = (int)lVar34;
                              auVar36._0_8_ = lVar34;
                              auVar36._12_4_ = uVar7;
                              lVar34 = auVar36._8_8_ * 4;
                              do {
                                plVar18 = (longlong *)
                                          ((longlong)local_838 + lVar29 + lVar13 + 0x820);
                                lVar38 = plVar18[1];
                                plVar15 = (longlong *)
                                          ((longlong)local_838 + lVar29 + lVar28 + 0x838);
                                lVar2 = *plVar15;
                                lVar3 = plVar15[1];
                                plVar15 = (longlong *)
                                          ((longlong)local_838 + lVar29 + lVar13 + 0x820);
                                *plVar15 = *plVar18 + uVar11 * -4;
                                plVar15[1] = lVar38 + lVar34;
                                plVar15 = (longlong *)
                                          ((longlong)local_838 + lVar29 + lVar28 + 0x838);
                                *plVar15 = lVar2 + uVar11 * -4;
                                plVar15[1] = lVar3 + lVar34;
                                lVar29 = lVar29 + 0x20;
                              } while (uVar23 << 5 != lVar29);
                            }
                            if (uVar24 == uVar27) goto LAB_013106fe;
                          }
                          do {
                            local_838[uVar24] = local_838[uVar24] + uVar11 * -4;
                            uVar24 = uVar24 + 1;
                          } while (uVar27 != uVar24);
                        }
                      }
                    }
                    goto LAB_013106fe;
                  }
                }
                uVar7 = FUN_00b33590();
                FUN_00ae9740(uVar7,pVar19);
              }
            }
LAB_013106fe:
            FUN_00d50b20();
          }
        }
      }
      dVar31 = (double)((ulonglong)local_10a0 >> 0x20);
      iVar10 = (int)((ulonglong)local_10a0 >> 0x20);
      uVar6 = *(uint *)(unaff_RDI[0x1f] + 0xc);
      if (0 < (int)uVar6) {
        plVar20 = (longlong *)((ulonglong)uVar6 - 1);
        plVar30 = (longlong *)0x0;
        plVar26 = (longlong *)0x0;
        uVar27 = 0;
        uVar6 = 0;
        plVar15 = *(longlong **)(unaff_RDI[0x1f] + 0x10);
        plVar18 = (longlong *)*plVar15;
        plVar21 = plVar20;
        local_1040 = lVar17;
        if (plVar18 == (longlong *)0x0) goto LAB_01310790;
        do {
          if (plVar18 != (longlong *)0x0) {
            plVar15 = (longlong *)FUN_00d50b00();
          }
          local_1050 = (longlong *)CONCAT71((int7)((ulonglong)plVar15 >> 8),1);
          if (((char)uVar27 != '\0') && (plVar26 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          while( true ) {
            pVar19 = (pthread_key_t)plVar21;
            FUN_0130f550();
            plVar26 = plVar18;
            if (plVar18[0x1e] != 0) {
              local_1048 = plVar18;
              FUN_00d50b00();
              lVar17 = plVar18[0x1e];
              if (lVar17 != 0) {
                FUN_00d50b00();
              }
              pvVar12 = _pthread_getspecific(pVar19);
              if (pvVar12 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_012e8a60();
              plVar15 = local_1038;
              if ((local_1030 != '\0') && (local_1038 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              if (lVar17 != 0) {
                FUN_00d50b20();
              }
              FUN_00d50b20();
              plVar26 = local_1048;
              if (plVar15 == (longlong *)0x0) {
                lVar17 = local_1048[0x22];
                if (lVar17 != 0) {
                  FUN_00d50b00();
                }
                lVar34 = unaff_RDI[0x12];
                uVar7 = FUN_00b33590();
                FUN_011ee630(local_10e8,lVar34,uVar7);
                plVar26 = local_1048;
                if (lVar17 != 0) {
                  FUN_00d50b20();
                }
              }
            }
            dVar16 = (double)(**(code **)(*plVar26 + 0x410))();
            dVar22 = (double)((ulonglong)dVar16 >> 0x20);
            iVar9 = SUB84(dVar31,0);
            iVar10 = (int)((ulonglong)dVar16 >> 0x20);
            if ((iVar9 == 0) || (iVar10 == 0)) {
              if (iVar10 == 0) {
                dVar16 = local_10a0;
              }
              if (iVar9 != 0) {
                dVar16 = local_10a0;
              }
              if (iVar9 == 0) {
                dVar31 = dVar22;
              }
              iVar10 = SUB84(dVar31,0);
              local_10a0 = (double)((ulonglong)dVar16 & 0xffffffff);
              plVar21 = local_1050;
            }
            else {
              dVar22 = (double)FUN_00e7b670();
              dVar31 = (double)((ulonglong)dVar22 >> 0x20);
              iVar10 = (int)((ulonglong)dVar22 >> 0x20);
              local_10a0 = dVar22;
              plVar21 = local_1050;
            }
            local_1050 = plVar21;
            if (plVar20 == plVar30) {
              uVar6 = SUB84(dVar22,0);
              goto LAB_013109bf;
            }
            plVar30 = (longlong *)((longlong)plVar30 + 1);
            uVar27 = (ulonglong)plVar21 & 0xffffffff;
            uVar6 = (uint)plVar21;
            plVar15 = *(longlong **)(unaff_RDI[0x1f] + 0x10);
            plVar18 = (longlong *)plVar15[(longlong)plVar30];
            if (plVar26 != plVar18) break;
LAB_01310790:
            plVar18 = plVar26;
            if (((char)uVar6 == '\0') && (plVar18 != (longlong *)0x0)) {
              local_1050 = (longlong *)CONCAT71((int7)((ulonglong)plVar15 >> 8),1);
              FUN_00d50b00();
            }
            else {
              local_1050 = (longlong *)(ulonglong)uVar6;
            }
          }
        } while( true );
      }
      local_1050 = (longlong *)0x0;
      plVar26 = (longlong *)0x0;
LAB_013109bf:
      local_1048 = plVar26;
      (**(code **)(*unaff_RDI + 0x5d0))();
      plVar15 = local_1038;
      if (local_1030 == '\0') {
        if (local_1038 != (longlong *)0x0) {
          FUN_00d50b00();
          if ((local_1030 != '\0') && (local_1038 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          goto LAB_01310a22;
        }
      }
      else if (local_1038 != (longlong *)0x0) {
LAB_01310a22:
        if ((char)plVar15[0x40] != '\0') {
          pvVar12 = _pthread_getspecific(uVar6);
          if (pvVar12 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012f51f0();
          plVar15 = local_1038;
          if ((local_1030 != '\0') && (local_1038 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((plVar15 != (longlong *)0x0) && (iVar9 = FUN_0130f0e0(), iVar9 == 2)) {
            pvVar12 = _pthread_getspecific(uVar6);
            if (pvVar12 != (void *)0x0) {
              FUN_00e8b990();
            }
            dVar31 = (double)FUN_012f7cb0();
            pvVar12 = _pthread_getspecific(uVar6);
            if (pvVar12 != (void *)0x0) {
              FUN_00e8b990();
            }
            dVar35 = (double)FUN_012f7d90();
            uVar6 = FUN_00b33120();
            dVar22 = DAT_0240d380;
            dVar16 = DAT_0238fee8;
            dVar35 = dVar31 + dVar35 + DAT_0240d380;
            dVar31 = (double)unaff_RDI[0x16];
            if (((dVar35 < dVar31) && (0 < (int)local_1064)) && (0 < (int)uVar6)) {
              dVar1 = (double)unaff_RDI[0x15];
              uVar27 = 0;
              do {
                dVar39 = ((double)(int)uVar27 * (dVar31 - dVar1)) / (double)(int)local_1064 + dVar1;
                if (dVar35 <= dVar39) {
                  dVar40 = (dVar39 - dVar35) / dVar22 + dVar16;
                  dVar39 = 0.0;
                  if (0.0 <= dVar40) {
                    dVar39 = dVar40;
                  }
                  uVar11 = 0;
                  if (uVar6 != 1) {
                    do {
                      *(float *)(local_838[uVar11] + uVar27 * 4) =
                           (float)((double)*(float *)(local_838[uVar11] + uVar27 * 4) * dVar39);
                      *(float *)(local_838[uVar11 + 1] + uVar27 * 4) =
                           (float)((double)*(float *)(local_838[uVar11 + 1] + uVar27 * 4) * dVar39);
                      uVar11 = uVar11 + 2;
                    } while ((uVar6 & 0xfffffffe) != uVar11);
                  }
                  if ((uVar6 & 1) != 0) {
                    *(float *)(local_838[uVar11] + uVar27 * 4) =
                         (float)(dVar39 * (double)*(float *)(local_838[uVar11] + uVar27 * 4));
                  }
                }
                uVar27 = uVar27 + 1;
              } while (uVar27 != local_1064);
            }
          }
        }
        FUN_00d50b20();
      }
      (**(code **)(*unaff_RDI + 0x408))();
      if (unaff_RDI[0x21] != 0) {
        if ((iVar10 == 0) && (lVar17 = FUN_012dd9d0(), lVar17 != 0)) {
          if (*(char *)((longlong)unaff_RDI + 0x16b) != '\0') {
            *(undefined1 *)((longlong)unaff_RDI + 0x16b) = 0;
            local_10a0 = (double)(**(code **)(*(longlong *)unaff_RDI[0x21] + 0x3d0))();
            dVar31 = (double)FUN_00b335d0();
            iVar10 = (**(code **)(*unaff_RDI + 0x3a8))();
            pVar19 = iVar10 + (int)(local_10a0 * dVar31);
            *(pthread_key_t *)(unaff_RDI + 0x2e) = pVar19;
            goto joined_r0x01310dc9;
          }
          if (0 < (int)unaff_RDI[0x2e]) goto LAB_01310d0b;
LAB_01310dcf:
          uVar5 = 0;
        }
        else {
          *(undefined1 *)((longlong)unaff_RDI + 0x16b) = 1;
          *(pthread_key_t *)(unaff_RDI + 0x2e) = local_1064;
          pVar19 = local_1064;
joined_r0x01310dc9:
          if ((int)pVar19 < 1) goto LAB_01310dcf;
LAB_01310d0b:
          if (*(char *)((longlong)unaff_RDI + 0x16c) == '\0') {
            (**(code **)(*(longlong *)unaff_RDI[0x21] + 0x388))();
          }
          (**(code **)(*(longlong *)unaff_RDI[0x21] + 0x400))(local_1064,local_838);
          *(pthread_key_t *)(unaff_RDI + 0x2e) = (int)unaff_RDI[0x2e] - local_1064;
          uVar5 = 1;
        }
        *(undefined1 *)((longlong)unaff_RDI + 0x16c) = uVar5;
      }
      if ((longlong *)unaff_RDI[0x2f] != (longlong *)0x0) {
        (**(code **)(*(longlong *)unaff_RDI[0x2f] + 0x400))(local_1064,local_838);
      }
      FUN_011ee2d0();
      if (unaff_RDI[0x2c] != 0) {
        cVar4 = (**(code **)(*unaff_RDI + 0x5e8))();
        if (cVar4 == '\0') {
          if (((unaff_RDI[0x2c] != 0) && (*(char *)((longlong)unaff_RDI + 0x169) != '\0')) &&
             (FUN_013fb6a0(), unaff_RDI[0x2c] != 0)) {
            unaff_RDI[0x2c] = 0;
            FUN_00d50b20();
          }
        }
        else {
          uVar14 = FUN_013fba80();
          FUN_011ee3f0(uVar14,local_1064);
          if ((local_1030 != '\0') && (local_1038 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          *(undefined1 *)((longlong)unaff_RDI + 0x169) = 1;
        }
      }
      unaff_RDI[0x12] = unaff_RDI[0x12] + (longlong)(int)local_10e8;
      unaff_RDI[0x15] = unaff_RDI[0x16];
      cVar4 = (char)local_1060;
    }
    else {
      FUN_00d50b00();
      uVar14 = CONCAT71((int7)((ulonglong)lVar34 >> 8),1);
      if (unaff_RDI[0x12] < (longlong)unaff_RSI) goto LAB_0130fad0;
LAB_0130fbcd:
      cVar4 = (char)uVar14;
      local_1050 = (longlong *)0x0;
      local_1048 = (longlong *)0x0;
    }
    if ((char)local_10a4 == '\0' && local_1078 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_00d50b20();
  if (((char)local_10b0 != '\0') && (local_1088 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_1050 != '\0') && (local_1048 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
LAB_01310f36:
  if ((cVar4 != '\0') && (local_1058 != 0)) {
    FUN_00d50b20();
  }
  if (*(longlong *)PTR____stack_chk_guard_024a9898 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}


