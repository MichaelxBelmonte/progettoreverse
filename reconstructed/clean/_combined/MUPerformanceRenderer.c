// ===================================================================
// MUPerformanceRenderer — Complete reconstructed pseudocode
// 5 functions
// ===================================================================

// Registered properties (19):
//   MUSlaveTrackStartAndEndFadeMode _slaveTrackEndFadeMode
//   MUSlaveTrackStartAndEndFadeMode _slaveTrackStartFadeMode
//                   _soundFile
//   float**         _buffers
//                   _samples
//                   _proceededSamples
//                   _exportSetup
//                   _isReRunningExport
//                   _rerunExportOnClip
//                   _askOnClip
//                   _send
//                   _isCanceled
//                   _failed
//                   _currentIndex
//                   _originalFaderVolume
//                   _volumeScale
//                   _runsAlertPanel
//                   _isExportingMix
//                   _includeTails


// ============================================================
// 0130f550
// ============================================================
// Function: FUN_0130f550
// Address: 0130f550
// Size: 7432 bytes
// Class: MUPerformanceRenderer
// === MUPerformanceRenderer properties ===
//   MUSlaveTrackStartAndEndFadeMode _slaveTrackEndFadeMode
//   MUSlaveTrackStartAndEndFadeMode _slaveTrackStartFadeMode
//                   _soundFile
//   float**         _buffers
//                   _samples
//                   _proceededSamples
//                   _exportSetup
//                   _isReRunningExport
//                   _rerunExportOnClip
//                   _askOnClip
//                   _send
//                   _isCanceled
//                   _failed
//                   _currentIndex
//                   _originalFaderVolume
//                   _volumeScale
//                   _runsAlertPanel
//                   _isExportingMix
//                   _includeTails


void FUN_0130f550(void)

{
  double dVar1;
  int64_t lVar2;
  int64_t lVar3;
  char cVar4;
  uint8_t uVar5;
  uint uVar6;
  uint32_t uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint64_t uVar11;
  void *pvVar12;
  int64_t lVar13;
  uint64_t uVar14;
  int64_t *plVar15;
  double dVar16;
  int64_t lVar17;
  int64_t *plVar18;
  void* pVar19;
  int64_t *plVar20;
  int64_t *plVar21;
  double dVar22;
  uint64_t uVar23;
  uint64_t uVar24;
  uint64_t uVar25;
  int64_t *plVar26;
  uint64_t arg1;
  uint64_t uVar27;
  int64_t lVar28;
  int64_t lVar29;
  int64_t *this_ptr;
  int64_t *plVar30;
  double dVar31;
  bool bVar32;
  bool bVar33;
  int64_t lVar34;
  double dVar35;
  uint8_t auVar36 [16];
  uint8_t auVar37 [16];
  int64_t lVar38;
  double dVar39;
  double dVar40;
  uint8_t local_113c [4];
  int64_t local_1138;
  char local_1130;
  int64_t local_1128;
  char local_1120;
  double local_1118;
  double local_1110;
  int64_t local_1108;
  char local_1100;
  int64_t local_10f8;
  char local_10f0;
  int64_t local_10e8;
  int64_t *local_10e0;
  char local_10d8;
  int64_t *local_10d0;
  char local_10c8;
  int64_t *local_10c0;
  char local_10b8;
  uint64_t local_10b0;
  uint32_t local_10a4;
  double local_10a0;
  int64_t *local_1088;
  int64_t local_1078;
  void* local_1064;
  uint64_t local_1060;
  int64_t local_1058;
  int64_t *local_1050;
  int64_t *local_1048;
  int64_t local_1040;
  int64_t *local_1038;
  char local_1030;
  int64_t local_838 [256];
  int64_t local_38;
  
  local_38 = *(int64_t *)PTR____stack_chk_guard_024a9898;
  lVar17 = this_ptr[0x1e];
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
  uVar6 = (**(code **)(*this_ptr + 0x3b0))();
  if (uVar6 != 0) {
    uVar27 = (uint64_t)(int)uVar6;
    if ((arg1 | uVar27) >> 0x20 == 0) {
      uVar11 = (arg1 & 0xffffffff) / (uint64_t)uVar6;
      uVar24 = (arg1 & 0xffffffff) % (uint64_t)uVar6;
    }
    else {
      uVar11 = (int64_t)arg1 / (int64_t)uVar27;
      uVar24 = (int64_t)arg1 % (int64_t)uVar27;
    }
    if (uVar24 != 0) {
      arg1 = (uVar11 + 1) * uVar27;
    }
  }
  local_10e8 = arg1 - this_ptr[0x12];
  if ((int)local_10e8 < 1) {
    local_10b0 = 0;
    local_1088 = (int64_t *)0x0;
    local_1050 = (int64_t *)0x0;
    local_1048 = (int64_t *)0x0;
    cVar4 = '\0';
    local_1058 = 0;
  }
  else {
    FUN_012ddd50();
    local_1088 = local_1038;
    plVar15 = local_1038;
    if (local_1038 == (int64_t *)0x0) {
      local_10b0 = 0;
    }
    else {
      local_10b0 = CONCAT71((int7)((uint64_t)local_1038 >> 8),1);
      if (((local_1030 == '\0') && (FUN_00d50b00(), local_1030 != '\0')) &&
         (local_1038 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    pVar19 = (void*)plVar15;
    FUN_012ddc30();
    lVar34 = (**(code **)(*local_1038 + 0x5f0))();
    this_ptr[0x16] = lVar34;
    if ((local_1030 != '\0') && (local_1038 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_012ddc30();
    lVar34 = (**(code **)(*local_1038 + 0x5e0))();
    this_ptr[0x15] = lVar34;
    if ((local_1030 != '\0') && (local_1038 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_012ddc30();
    lVar34 = (**(code **)(*local_1038 + 0x5f8))();
    this_ptr[0x17] = lVar34;
    if ((local_1030 != '\0') && (local_1038 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_012dde10();
    plVar15 = local_1038;
    if (local_1030 == '\0') {
      if (local_1038 != (int64_t *)0x0) {
        FUN_00d50b00();
        if ((local_1030 != '\0') && (local_1038 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        goto LAB_0130f81d;
      }
LAB_0130f8e7:
      if ((char)this_ptr[0x2d] == '\0') {
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
            lVar34 = *(int64_t *)(lVar17 + 0x20 + (uint64_t)(*(uint *)(lVar13 + 0x154) & 1) * 8);
          }
        }
        bVar32 = *(int64_t *)(lVar34 + 0x128) != 0;
      }
    }
    else {
      if (local_1038 == (int64_t *)0x0) goto LAB_0130f8e7;
LAB_0130f81d:
      pvVar12 = _pthread_getspecific(pVar19);
      if ((pvVar12 == (void *)0x0) || (lVar34 = FUN_00e8b990(), lVar34 == 0)) {
        if ((char)plVar15[7] != '\0') goto LAB_0130f85d;
LAB_0130f88f:
        cVar4 = '\0';
      }
      else {
        if (*(char *)(plVar15[(uint64_t)(*(uint *)(lVar34 + 0x154) & 1) + 4] + 0x38) == '\0')
        goto LAB_0130f88f;
LAB_0130f85d:
        pvVar12 = _pthread_getspecific(pVar19);
        if ((pvVar12 == (void *)0x0) || (lVar34 = FUN_00e8b990(), lVar34 == 0)) {
          lVar34 = *(int64_t *)(lVar17 + 0x128);
        }
        else {
          lVar34 = *(int64_t *)
                    (*(int64_t *)(lVar17 + 0x20 + (uint64_t)(*(uint *)(lVar34 + 0x154) & 1) * 8) +
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
    uVar14 = (**(code **)(*this_ptr + 0x5e8))();
    if ((((byte)uVar14 & bVar32) == 1) && (this_ptr[0x24] == 0)) {
      plVar15 = *(int64_t **)
                 (*(int64_t *)(this_ptr[0x25] + 0x10) + (int64_t)(int)this_ptr[0x27] * 8);
      lVar34 = 0;
      local_1040 = lVar17;
      if (plVar15 != (int64_t *)0x0) {
        FUN_00d50b00();
        lVar34 = this_ptr[0x24];
      }
      this_ptr[0x24] = (int64_t)plVar15;
      if (lVar34 != 0) {
        FUN_00d50b20();
        plVar15 = (int64_t *)this_ptr[0x24];
      }
      local_1060 = 0;
      lVar34 = 0;
      local_1058 = 0;
      (**(code **)(*plVar15 + 0x1c0))();
      FUN_012ddba0();
      local_10e0 = local_1038;
      local_10d8 = 0;
      if (local_1030 == '\0') {
        if (local_1038 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_1030 = '\0';
      }
      local_10d8 = '\x01';
      FUN_013fba30();
      if ((local_10d8 != '\0') && (local_10e0 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_1030 != '\0') && (local_1038 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      local_1060 = 0;
      local_1058 = 0;
      FUN_013fbb90(this_ptr[3]);
      local_1060 = 0;
      local_1058 = 0;
      FUN_00d50b00();
      local_1078 = lVar17;
      while( true ) {
        pvVar12 = _pthread_getspecific((void*)lVar34);
        if ((pvVar12 == (void *)0x0) || (lVar17 = FUN_00e8b990(), lVar17 == 0)) {
          lVar17 = *(int64_t *)(local_1078 + 0x110);
        }
        else {
          lVar17 = *(int64_t *)
                    (*(int64_t *)
                      (local_1078 + 0x20 + (uint64_t)(*(uint *)(lVar17 + 0x154) & 1) * 8) + 0x110);
          lVar34 = local_1078;
        }
        if (lVar17 == 0) break;
        pvVar12 = _pthread_getspecific((void*)lVar34);
        if (pvVar12 == (void *)0x0) {
          lVar17 = *(int64_t *)(local_1078 + 0x110);
        }
        else {
          lVar17 = FUN_00e8b990();
          if (lVar17 == 0) {
            lVar17 = *(int64_t *)(local_1078 + 0x110);
          }
          else {
            lVar17 = *(int64_t *)
                      (*(int64_t *)
                        (local_1078 + 0x20 + (uint64_t)(*(uint *)(lVar17 + 0x154) & 1) * 8) + 0x110
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
      pVar19 = *(void* *)(this_ptr + 0x27);
      lVar34 = (int64_t)(int)pVar19;
      lVar17 = *(int64_t *)(*(int64_t *)(this_ptr[0x26] + 0x10) + lVar34 * 8);
      if (lVar17 != 0) {
        FUN_00d50b00();
        pVar19 = (void*)lVar34;
      }
      pvVar12 = _pthread_getspecific(pVar19);
      if ((pvVar12 != (void *)0x0) && (lVar34 = FUN_00e8b990(), lVar34 != 0)) {
        pVar19 = (void*)local_1078;
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
        if (local_1038 != (int64_t *)0x0) {
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
      if ((local_10c8 != '\0') && (local_10d0 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_1030 != '\0') && (local_1038 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      local_1120 = '\0';
      local_1128 = lVar17;
      FUN_013fb6b0();
      if ((local_1120 != '\0') && (local_1128 != 0)) {
        FUN_00d50b20();
      }
      local_1100 = 0;
      lVar34 = this_ptr[0x1e];
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
      FUN_013fe940(this_ptr[0x15]);
      (**(code **)(*(int64_t *)this_ptr[0x24] + 0x398))();
      iVar10 = (int)this_ptr[0x27] + 1;
      if (2 < (int)this_ptr[0x27]) {
        iVar10 = 0;
      }
      *(int *)(this_ptr + 0x27) = iVar10;
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
      local_10a4 = (uint32_t)CONCAT71((int7)((uint64_t)uVar14 >> 8),1);
      local_1078 = 0;
    }
    lVar34 = this_ptr[0x24];
    if (bVar32 == false) {
      if (lVar34 != 0) {
LAB_0130fa2f:
        local_1060 = 0;
        local_1058 = 0;
        FUN_012ddbf0();
        local_1060 = 0;
        local_1058 = 0;
        FUN_013fb6a0();
        if (this_ptr[0x24] != 0) {
          this_ptr[0x24] = 0;
          local_1060 = 0;
          local_1058 = 0;
          FUN_00d50b20();
        }
      }
    }
    else if (lVar34 != 0) {
      local_1060 = 0;
      local_1058 = 0;
      cVar4 = (**(code **)(*this_ptr + 0x638))();
      if (cVar4 != '\0') {
        lVar34 = this_ptr[0x24];
        goto LAB_0130fa2f;
      }
    }
    local_1058 = this_ptr[0x22];
    if (local_1058 == 0) {
      local_1058 = 0;
      uVar14 = 0;
      if ((int64_t)arg1 <= this_ptr[0x12]) goto LAB_0130fbcd;
LAB_0130fad0:
      local_1060 = uVar14;
      FUN_011eded0(&local_1038,&local_1064,local_113c,local_10e8);
      pVar19 = local_1064;
      uVar7 = FUN_00b33590();
      FUN_00ae9740(uVar7,pVar19);
      if (this_ptr[0x20] != 0) {
        cVar4 = (**(code **)(*this_ptr + 0x600))();
        if (cVar4 != '\0') {
          cVar4 = (**(code **)(*this_ptr + 0x620))();
          plVar15 = (int64_t *)this_ptr[0x20];
          if (cVar4 == '\0') {
            (**(code **)(*plVar15 + 0x678))();
          }
          else {
            (**(code **)(*this_ptr + 0x618))();
            local_10c0 = local_1038;
            local_10b8 = 0;
            if (local_1030 == '\0') {
              if (local_1038 != (int64_t *)0x0) {
                FUN_00d50b00();
              }
            }
            else {
              local_1030 = '\0';
            }
            local_10b8 = '\x01';
            (**(code **)(*plVar15 + 0x698))();
            if ((local_10b8 != '\0') && (local_10c0 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_1030 != '\0') && (local_1038 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
          lVar34 = this_ptr[0x2a];
          lVar13 = this_ptr[0x2b];
          if (lVar34 != lVar13) {
            if (lVar13 != 0) {
              FUN_00d50b00();
            }
            this_ptr[0x2a] = lVar13;
            if (lVar34 != 0) {
              FUN_00d50b20();
            }
          }
          local_10f0 = 0;
          lVar34 = this_ptr[0x1e];
          if (lVar34 != 0) {
            FUN_00d50b00();
          }
          local_10f0 = '\x01';
          local_10f8 = lVar34;
          FUN_0190a130();
          plVar15 = (int64_t *)this_ptr[0x2b];
          plVar18 = plVar15;
          if (plVar15 != local_1038) {
            if (local_1030 == '\0') {
              if (local_1038 == (int64_t *)0x0) {
                plVar18 = (int64_t *)0x0;
                goto LAB_013102be;
              }
              FUN_00d50b00();
              plVar15 = (int64_t *)this_ptr[0x2b];
              this_ptr[0x2b] = (int64_t)local_1038;
              plVar18 = local_1038;
            }
            else {
              local_1030 = '\0';
              plVar18 = local_1038;
LAB_013102be:
              this_ptr[0x2b] = (int64_t)plVar18;
            }
            if (plVar15 != (int64_t *)0x0) {
              FUN_00d50b20();
              plVar18 = local_1038;
            }
          }
          if ((local_1030 != '\0') && (plVar18 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_10f0 != '\0') && (local_10f8 != 0)) {
            FUN_00d50b20();
          }
        }
        FUN_0130b770(this_ptr[0x15],
                     (double)(int)local_1064 * (double)this_ptr[4] * (double)this_ptr[0x17]);
        pVar19 = local_1064;
        (**(code **)(*(int64_t *)this_ptr[0x20] + 0x400))(local_1064,local_838);
        local_10a0 = (double)(**(code **)(*(int64_t *)this_ptr[0x20] + 0x410))();
        (**(code **)(*this_ptr + 0x5d0))();
        if (local_1030 == '\0') {
          if (local_1038 != (int64_t *)0x0) {
            local_1050 = local_1038;
            FUN_00d50b00();
            if ((local_1030 != '\0') && (local_1038 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            goto LAB_013103fd;
          }
        }
        else {
          local_1050 = local_1038;
          if (local_1038 != (int64_t *)0x0) {
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
              if ((local_1030 != '\0') && (local_1038 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              if (plVar15 != (int64_t *)0x0) {
                pvVar12 = _pthread_getspecific(pVar19);
                if (pvVar12 != (void *)0x0) {
                  FUN_00e8b990();
                }
                local_1048 = (int64_t *)FUN_012f7cb0();
                pvVar12 = _pthread_getspecific(pVar19);
                if (pvVar12 != (void *)0x0) {
                  FUN_00e8b990();
                }
                dVar35 = (double)FUN_012f7d90();
                pVar19 = local_1064;
                dVar31 = (double)this_ptr[0x15];
                dVar16 = (double)this_ptr[0x16];
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
                        uVar11 = (uint64_t)uVar6;
                        uVar27 = (uint64_t)uVar8;
                        if (0 < (int)uVar8) {
                          if (uVar8 < 4) {
                            uVar24 = 0;
                          }
                          else {
                            uVar24 = (uint64_t)(uVar8 & 0xfffffffc);
                            uVar25 = (uVar24 - 4 >> 2) + 1;
                            uVar23 = (uint64_t)((uint)uVar25 & 3);
                            if (uVar24 - 4 < 0xc) {
                              lVar13 = 0;
                            }
                            else {
                              lVar34 = -(uVar25 & 0xfffffffffffffffc);
                              lVar13 = 0;
                              lVar28 = (uint64_t)uVar6 * 4;
                              lVar29 = (uint64_t)uVar6 * 4;
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
                                plVar18 = (int64_t *)
                                          ((int64_t)local_838 + lVar28 + lVar34 + 0x820);
                                lVar29 = plVar18[1];
                                plVar15 = (int64_t *)
                                          ((int64_t)local_838 + lVar28 + lVar13 + 0x838);
                                lVar38 = *plVar15;
                                lVar2 = plVar15[1];
                                plVar15 = (int64_t *)
                                          ((int64_t)local_838 + lVar28 + lVar34 + 0x820);
                                *plVar15 = *plVar18 + (uint64_t)uVar6 * 4;
                                plVar15[1] = lVar29 + (uint64_t)uVar6 * 4;
                                plVar15 = (int64_t *)
                                          ((int64_t)local_838 + lVar28 + lVar13 + 0x838);
                                *plVar15 = lVar38 + (uint64_t)uVar6 * 4;
                                plVar15[1] = lVar2 + (uint64_t)uVar6 * 4;
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
                            uVar24 = (uint64_t)(uVar8 & 0xfffffffc);
                            uVar25 = (uVar24 - 4 >> 2) + 1;
                            uVar23 = (uint64_t)((uint)uVar25 & 3);
                            uVar7 = (uint32_t)((uint64_t)lVar34 >> 0x20);
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
                                plVar18 = (int64_t *)
                                          ((int64_t)local_838 + lVar29 + lVar13 + 0x820);
                                lVar38 = plVar18[1];
                                plVar15 = (int64_t *)
                                          ((int64_t)local_838 + lVar29 + lVar28 + 0x838);
                                lVar2 = *plVar15;
                                lVar3 = plVar15[1];
                                plVar15 = (int64_t *)
                                          ((int64_t)local_838 + lVar29 + lVar13 + 0x820);
                                *plVar15 = *plVar18 + uVar11 * -4;
                                plVar15[1] = lVar38 + lVar34;
                                plVar15 = (int64_t *)
                                          ((int64_t)local_838 + lVar29 + lVar28 + 0x838);
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
      dVar31 = (double)((uint64_t)local_10a0 >> 0x20);
      iVar10 = (int)((uint64_t)local_10a0 >> 0x20);
      uVar6 = *(uint *)(this_ptr[0x1f] + 0xc);
      if (0 < (int)uVar6) {
        plVar20 = (int64_t *)((uint64_t)uVar6 - 1);
        plVar30 = (int64_t *)0x0;
        plVar26 = (int64_t *)0x0;
        uVar27 = 0;
        uVar6 = 0;
        plVar15 = *(int64_t **)(this_ptr[0x1f] + 0x10);
        plVar18 = (int64_t *)*plVar15;
        plVar21 = plVar20;
        local_1040 = lVar17;
        if (plVar18 == (int64_t *)0x0) goto LAB_01310790;
        do {
          if (plVar18 != (int64_t *)0x0) {
            plVar15 = (int64_t *)FUN_00d50b00();
          }
          local_1050 = (int64_t *)CONCAT71((int7)((uint64_t)plVar15 >> 8),1);
          if (((char)uVar27 != '\0') && (plVar26 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          while( true ) {
            pVar19 = (void*)plVar21;
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
              if ((local_1030 != '\0') && (local_1038 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              if (lVar17 != 0) {
                FUN_00d50b20();
              }
              FUN_00d50b20();
              plVar26 = local_1048;
              if (plVar15 == (int64_t *)0x0) {
                lVar17 = local_1048[0x22];
                if (lVar17 != 0) {
                  FUN_00d50b00();
                }
                lVar34 = this_ptr[0x12];
                uVar7 = FUN_00b33590();
                FUN_011ee630(local_10e8,lVar34,uVar7);
                plVar26 = local_1048;
                if (lVar17 != 0) {
                  FUN_00d50b20();
                }
              }
            }
            dVar16 = (double)(**(code **)(*plVar26 + 0x410))();
            dVar22 = (double)((uint64_t)dVar16 >> 0x20);
            iVar9 = SUB84(dVar31,0);
            iVar10 = (int)((uint64_t)dVar16 >> 0x20);
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
              local_10a0 = (double)((uint64_t)dVar16 & 0xffffffff);
              plVar21 = local_1050;
            }
            else {
              dVar22 = (double)FUN_00e7b670();
              dVar31 = (double)((uint64_t)dVar22 >> 0x20);
              iVar10 = (int)((uint64_t)dVar22 >> 0x20);
              local_10a0 = dVar22;
              plVar21 = local_1050;
            }
            local_1050 = plVar21;
            if (plVar20 == plVar30) {
              uVar6 = SUB84(dVar22,0);
              goto LAB_013109bf;
            }
            plVar30 = (int64_t *)((int64_t)plVar30 + 1);
            uVar27 = (uint64_t)plVar21 & 0xffffffff;
            uVar6 = (uint)plVar21;
            plVar15 = *(int64_t **)(this_ptr[0x1f] + 0x10);
            plVar18 = (int64_t *)plVar15[(int64_t)plVar30];
            if (plVar26 != plVar18) break;
LAB_01310790:
            plVar18 = plVar26;
            if (((char)uVar6 == '\0') && (plVar18 != (int64_t *)0x0)) {
              local_1050 = (int64_t *)CONCAT71((int7)((uint64_t)plVar15 >> 8),1);
              FUN_00d50b00();
            }
            else {
              local_1050 = (int64_t *)(uint64_t)uVar6;
            }
          }
        } while( true );
      }
      local_1050 = (int64_t *)0x0;
      plVar26 = (int64_t *)0x0;
LAB_013109bf:
      local_1048 = plVar26;
      (**(code **)(*this_ptr + 0x5d0))();
      plVar15 = local_1038;
      if (local_1030 == '\0') {
        if (local_1038 != (int64_t *)0x0) {
          FUN_00d50b00();
          if ((local_1030 != '\0') && (local_1038 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          goto LAB_01310a22;
        }
      }
      else if (local_1038 != (int64_t *)0x0) {
LAB_01310a22:
        if ((char)plVar15[0x40] != '\0') {
          pvVar12 = _pthread_getspecific(uVar6);
          if (pvVar12 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012f51f0();
          plVar15 = local_1038;
          if ((local_1030 != '\0') && (local_1038 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((plVar15 != (int64_t *)0x0) && (iVar9 = FUN_0130f0e0(), iVar9 == 2)) {
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
            dVar22 = g_0240d380;
            dVar16 = g_0238fee8;
            dVar35 = dVar31 + dVar35 + g_0240d380;
            dVar31 = (double)this_ptr[0x16];
            if (((dVar35 < dVar31) && (0 < (int)local_1064)) && (0 < (int)uVar6)) {
              dVar1 = (double)this_ptr[0x15];
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
      (**(code **)(*this_ptr + 0x408))();
      if (this_ptr[0x21] != 0) {
        if ((iVar10 == 0) && (lVar17 = FUN_012dd9d0(), lVar17 != 0)) {
          if (*(char *)((int64_t)this_ptr + 0x16b) != '\0') {
            *(void*)((int64_t)this_ptr + 0x16b) = 0;
            local_10a0 = (double)(**(code **)(*(int64_t *)this_ptr[0x21] + 0x3d0))();
            dVar31 = (double)FUN_00b335d0();
            iVar10 = (**(code **)(*this_ptr + 0x3a8))();
            pVar19 = iVar10 + (int)(local_10a0 * dVar31);
            *(void* *)(this_ptr + 0x2e) = pVar19;
            goto joined_r0x01310dc9;
          }
          if (0 < (int)this_ptr[0x2e]) goto LAB_01310d0b;
LAB_01310dcf:
          uVar5 = 0;
        }
        else {
          *(void*)((int64_t)this_ptr + 0x16b) = 1;
          *(void* *)(this_ptr + 0x2e) = local_1064;
          pVar19 = local_1064;
joined_r0x01310dc9:
          if ((int)pVar19 < 1) goto LAB_01310dcf;
LAB_01310d0b:
          if (*(char *)((int64_t)this_ptr + 0x16c) == '\0') {
            (**(code **)(*(int64_t *)this_ptr[0x21] + 0x388))();
          }
          (**(code **)(*(int64_t *)this_ptr[0x21] + 0x400))(local_1064,local_838);
          *(void* *)(this_ptr + 0x2e) = (int)this_ptr[0x2e] - local_1064;
          uVar5 = 1;
        }
        *(void*)((int64_t)this_ptr + 0x16c) = uVar5;
      }
      if ((int64_t *)this_ptr[0x2f] != (int64_t *)0x0) {
        (**(code **)(*(int64_t *)this_ptr[0x2f] + 0x400))(local_1064,local_838);
      }
      FUN_011ee2d0();
      if (this_ptr[0x2c] != 0) {
        cVar4 = (**(code **)(*this_ptr + 0x5e8))();
        if (cVar4 == '\0') {
          if (((this_ptr[0x2c] != 0) && (*(char *)((int64_t)this_ptr + 0x169) != '\0')) &&
             (FUN_013fb6a0(), this_ptr[0x2c] != 0)) {
            this_ptr[0x2c] = 0;
            FUN_00d50b20();
          }
        }
        else {
          uVar14 = FUN_013fba80();
          FUN_011ee3f0(uVar14,local_1064);
          if ((local_1030 != '\0') && (local_1038 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          *(void*)((int64_t)this_ptr + 0x169) = 1;
        }
      }
      this_ptr[0x12] = this_ptr[0x12] + (int64_t)(int)local_10e8;
      this_ptr[0x15] = this_ptr[0x16];
      cVar4 = (char)local_1060;
    }
    else {
      FUN_00d50b00();
      uVar14 = CONCAT71((int7)((uint64_t)lVar34 >> 8),1);
      if (this_ptr[0x12] < (int64_t)arg1) goto LAB_0130fad0;
LAB_0130fbcd:
      cVar4 = (char)uVar14;
      local_1050 = (int64_t *)0x0;
      local_1048 = (int64_t *)0x0;
    }
    if ((char)local_10a4 == '\0' && local_1078 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_00d50b20();
  if (((char)local_10b0 != '\0') && (local_1088 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_1050 != '\0') && (local_1048 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
LAB_01310f36:
  if ((cVar4 != '\0') && (local_1058 != 0)) {
    FUN_00d50b20();
  }
  if (*(int64_t *)PTR____stack_chk_guard_024a9898 == local_38) {
    return;
  }
                      ___stack_chk_fail();
}



// ============================================================
// 0130f200
// ============================================================
// Function: FUN_0130f200
// Address: 0130f200
// Size: 733 bytes
// Class: MUPerformanceRenderer
// String references:
//   "MUPerformanceRenderer"
//   "MUTrackRenderer"
// === MUPerformanceRenderer properties ===
//   MUSlaveTrackStartAndEndFadeMode _slaveTrackEndFadeMode
//   MUSlaveTrackStartAndEndFadeMode _slaveTrackStartFadeMode
//                   _soundFile
//   float**         _buffers
//                   _samples
//                   _proceededSamples
//                   _exportSetup
//                   _isReRunningExport
//                   _rerunExportOnClip
//                   _askOnClip
//                   _send
//                   _isCanceled
//                   _failed
//                   _currentIndex
//                   _originalFaderVolume
//                   _volumeScale
//                   _runsAlertPanel
//                   _isExportingMix
//                   _includeTails


uint64_t FUN_0130f200(void* param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  void *pvVar4;
  int64_t *plVar5;
  int64_t this_ptr;
  uint64_t unaff_R13;
  uint64_t uVar6;
  int64_t *plVar7;
  
  uVar6 = CONCAT71((int7)((uint64_t)unaff_R13 >> 8),1);
  if (*(char *)(this_ptr + 0x16a) != '\0') goto LAB_0130f371;
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  cVar1 = FUN_0126cd60();
  if (cVar1 != '\0') goto LAB_0130f371;
  plVar5 = *(int64_t **)(this_ptr + 0xa0);
  if ((g_027ab028 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
    g_027aaf78 = FUN_010f2dd0();
    g_027aaf60 = "MUPerformanceRenderer";
    g_027aaf68 = 0x218;
    g_027aaf70 = FUN_0118be20;
    g_027aaf80 = 0;
    ram_00000000027aaf88 = 0;
    g_027aaf90 = 0;
    ram_00000000027aaf98 = 0;
    g_027aafa0 = 0;
    ram_00000000027aafa8 = 0;
    g_027aafb0 = 0;
    ram_00000000027aafb8 = 0;
    g_027aafc0 = 0;
    ram_00000000027aafc8 = 0;
    g_027aafd0 = 0;
    ram_00000000027aafd8 = 0;
    g_027aafe0 = 0;
    ram_00000000027aafe8 = 0;
    g_027aaff0 = 0;
    ram_00000000027aaff8 = 0;
    g_027ab000 = 0;
    ram_00000000027ab008 = 0;
    g_027ab010 = 0;
    ram_00000000027ab018 = 0;
    g_027ab020 = 0;
    ___cxa_guard_release();
  }
  plVar7 = (int64_t *)(this_ptr + 0xa0);
  if (plVar5 == (int64_t *)0x0) {
LAB_0130f2af:
    plVar5 = &g_02802688;
  }
  else {
    (**(code **)(*plVar5 + 0x360))();
    cVar1 = FUN_00e85ea0();
    plVar5 = plVar7;
    if (cVar1 == '\0') goto LAB_0130f2af;
  }
  if (*plVar5 != 0) {
    FUN_00d50b00();
    uVar2 = FUN_012da350();
    uVar6 = (uint64_t)uVar2;
    FUN_00d50b20();
    goto LAB_0130f371;
  }
  plVar5 = (int64_t *)*plVar7;
  if ((g_027b87a8 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
    g_027b86f8 = FUN_010f2dd0();
    g_027b86e0 = "MUTrackRenderer";
    g_027b86e8 = 0x180;
    g_027b86f0 = FUN_011ce1c0;
    g_027b8700 = 0;
    ram_00000000027b8708 = 0;
    g_027b8710 = 0;
    ram_00000000027b8718 = 0;
    g_027b8720 = 0;
    ram_00000000027b8728 = 0;
    g_027b8730 = 0;
    ram_00000000027b8738 = 0;
    g_027b8740 = 0;
    ram_00000000027b8748 = 0;
    g_027b8750 = 0;
    ram_00000000027b8758 = 0;
    g_027b8760 = 0;
    ram_00000000027b8768 = 0;
    g_027b8770 = 0;
    ram_00000000027b8778 = 0;
    g_027b8780 = 0;
    ram_00000000027b8788 = 0;
    g_027b8790 = 0;
    ram_00000000027b8798 = 0;
    g_027b87a0 = 0;
    ___cxa_guard_release();
  }
  if (plVar5 == (int64_t *)0x0) {
LAB_0130f333:
    plVar7 = &g_02802688;
  }
  else {
    (**(code **)(*plVar5 + 0x360))();
    cVar1 = FUN_00e85ea0();
    if (cVar1 == '\0') goto LAB_0130f333;
  }
  if (*plVar7 == 0) {
    uVar6 = 0;
  }
  else {
    FUN_00d50b00();
    uVar2 = FUN_0130f200();
    uVar6 = (uint64_t)uVar2;
    FUN_00d50b20();
  }
LAB_0130f371:
  return uVar6 & 0xffffffff;
}



// ============================================================
// 00318bb0
// ============================================================
// Function: FUN_00318bb0
// Address: 00318bb0
// Size: 850 bytes
// Class: MUPerformanceRenderer
// === MUPerformanceRenderer properties ===
//   MUSlaveTrackStartAndEndFadeMode _slaveTrackEndFadeMode
//   MUSlaveTrackStartAndEndFadeMode _slaveTrackStartFadeMode
//                   _soundFile
//   float**         _buffers
//                   _samples
//                   _proceededSamples
//                   _exportSetup
//                   _isReRunningExport
//                   _rerunExportOnClip
//                   _askOnClip
//                   _send
//                   _isCanceled
//                   _failed
//                   _currentIndex
//                   _originalFaderVolume
//                   _volumeScale
//                   _runsAlertPanel
//                   _isExportingMix
//                   _includeTails


void FUN_00318bb0(void* param_1)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  void *pvVar4;
  int64_t lVar5;
  int64_t *this_ptr;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  int64_t local_58;
  char local_50;
  
  if (this_ptr[0xd] == 0) {
    return;
  }
  FUN_003187b0();
  if (local_50 == '\0') {
    if (local_58 == 0) goto LAB_00318ce5;
    FUN_00d50b00();
  }
  else if (local_58 == 0) {
LAB_00318ce5:
    bVar2 = true;
    bVar1 = true;
    lVar5 = this_ptr[0xd];
    goto joined_r0x00318cef;
  }
  pvVar4 = _pthread_getspecific(param_1);
  if ((pvVar4 == (void *)0x0) || (lVar5 = FUN_00e8b990(), lVar5 == 0)) {
    lVar5 = this_ptr[0xd];
  }
  else {
    lVar5 = this_ptr[0xd];
  }
  if (lVar5 != 0) {
    FUN_00d50b00();
  }
  cVar3 = FUN_016ccf50();
  if (lVar5 != 0) {
    FUN_00d50b20();
  }
  if (cVar3 == '\0') {
    dVar6 = (double)(**(code **)(*this_ptr + 0x3b0))();
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_016c25f0(dVar6);
    dVar7 = (double)FUN_016c26c0();
    dVar8 = (double)(**(code **)(*this_ptr + 0x408))();
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_016c25f0(dVar8);
    dVar9 = (double)FUN_016c26c0();
    dVar10 = (double)(**(code **)(*this_ptr + 0x418))();
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_016c25f0(dVar10);
    dVar11 = (double)FUN_016c26c0();
    if ((dVar6 != dVar7) || (NAN(dVar6) || NAN(dVar7))) {
      (**(code **)(*this_ptr + 0x3a8))(dVar7);
    }
    if ((dVar8 == dVar9) && (!NAN(dVar8) && !NAN(dVar9))) {
      if ((dVar10 == dVar11) && (!NAN(dVar10) && !NAN(dVar11))) goto LAB_00318ecd;
    }
    (**(code **)(*this_ptr + 0x428))(dVar9,dVar11);
  }
LAB_00318ecd:
  bVar2 = false;
  bVar1 = false;
  lVar5 = this_ptr[0xd];
joined_r0x00318cef:
  if (lVar5 != 0) {
    this_ptr[0xd] = 0;
    FUN_00d50b20();
    bVar1 = bVar2;
  }
  if (!bVar1) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 01190a80
// ============================================================
// Function: FUN_01190a80
// Address: 01190a80
// Size: 532 bytes
// Class: MUPerformanceRenderer
// String references:
//   "MUPerformanceRenderer"
//   "MUSlaveTrackStartAndEndFadeMode"
//   "_slaveTrackStartFadeMode"
// === MUPerformanceRenderer properties ===
//   MUSlaveTrackStartAndEndFadeMode _slaveTrackEndFadeMode
//   MUSlaveTrackStartAndEndFadeMode _slaveTrackStartFadeMode
//                   _soundFile
//   float**         _buffers
//                   _samples
//                   _proceededSamples
//                   _exportSetup
//                   _isReRunningExport
//                   _rerunExportOnClip
//                   _askOnClip
//                   _send
//                   _isCanceled
//                   _failed
//                   _currentIndex
//                   _originalFaderVolume
//                   _volumeScale
//                   _runsAlertPanel
//                   _isExportingMix
//                   _includeTails


void* FUN_01190a80(void)

{
  int iVar1;
  
  // [STATIC_INIT: property registration]
  // [STATIC_INIT: property registration]
  FUN_00e876a0();
  // [STATIC_INIT: property registration]
      g_027ab5a8 = "_slaveTrackStartFadeMode";
      g_027ab5b0 = &g_027aaf60;
      g_027ab5b8 = 0;
      g_027ab5c0 = 0x6500;
      g_027ab5c8 = "MUSlaveTrackStartAndEndFadeMode";
      g_027ab5d0 = &g_027ab628;
      g_027ab5d8 = 0;
      ram_00000000027ab5e0 = 0;
      ___cxa_guard_release();
    }
  }
  return &g_027ab5a8;
}



// ============================================================
// 01190cc0
// ============================================================
// Function: FUN_01190cc0
// Address: 01190cc0
// Size: 532 bytes
// Class: MUPerformanceRenderer
// String references:
//   "MUPerformanceRenderer"
//   "MUSlaveTrackStartAndEndFadeMode"
//   "_slaveTrackEndFadeMode"
// === MUPerformanceRenderer properties ===
//   MUSlaveTrackStartAndEndFadeMode _slaveTrackEndFadeMode
//   MUSlaveTrackStartAndEndFadeMode _slaveTrackStartFadeMode
//                   _soundFile
//   float**         _buffers
//                   _samples
//                   _proceededSamples
//                   _exportSetup
//                   _isReRunningExport
//                   _rerunExportOnClip
//                   _askOnClip
//                   _send
//                   _isCanceled
//                   _failed
//                   _currentIndex
//                   _originalFaderVolume
//                   _volumeScale
//                   _runsAlertPanel
//                   _isExportingMix
//                   _includeTails


void* FUN_01190cc0(void)

{
  int iVar1;
  
  // [STATIC_INIT: property registration]
  // [STATIC_INIT: property registration]
  FUN_00e876a0();
  // [STATIC_INIT: property registration]
      g_027ab660 = "_slaveTrackEndFadeMode";
      g_027ab668 = &g_027aaf60;
      g_027ab670 = 0;
      g_027ab678 = 0x6500;
      g_027ab680 = "MUSlaveTrackStartAndEndFadeMode";
      g_027ab688 = &g_027ab628;
      g_027ab690 = 0;
      ram_00000000027ab698 = 0;
      ___cxa_guard_release();
    }
  }
  return &g_027ab660;
}

