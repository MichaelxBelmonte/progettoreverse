// Function: FUN_01c41970
// Address: 01c41970
// Size: 2514 bytes
// Class: MUAdvancedTempoDetectionDialog
// === MUAdvancedTempoDetectionDialog properties ===
//                   _highlightedBeatValuePoint
//                   _setCursorTimeDisabled
//                   _zoomToFitAverageTempoDisabled
//                   _skipZoomToFitAverageTempo


void FUN_01c41970(int64_t param_1)

{
  int64_t *plVar1;
  int64_t lVar2;
  uint8_t auVar3 [16];
  bool bVar4;
  int64_t lVar5;
  char cVar6;
  void *pvVar7;
  int64_t lVar8;
  uint64_t uVar9;
  void* pVar10;
  int64_t lVar11;
  int64_t this_ptr;
  uint32_t uVar12;
  float fVar13;
  uint64_t uVar14;
  float extraout_XMM0_Db;
  uint64_t uVar15;
  double dVar16;
  uint64_t uVar17;
  float extraout_XMM0_Db_00;
  float fVar19;
  double dVar18;
  uint64_t extraout_XMM0_Qb;
  float extraout_XMM0_Dd;
  float fVar20;
  float fVar21;
  uint8_t in_XMM1 [16];
  uint8_t auVar22 [16];
  uint32_t local_118;
  uint64_t local_c0;
  int64_t local_70;
  char local_68;
  int local_58;
  int64_t local_48;
  char local_40;
  
  lVar5 = local_70;
  if (*(char *)(this_ptr + 0x1d0) != '\0') {
    *(void*)(this_ptr + 0x1d0) = 0;
    FUN_00d216c0();
    FUN_00d216c0();
    plVar1 = *(int64_t **)(this_ptr + 0x170);
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    lVar2 = *(int64_t *)(this_ptr + 0x188);
    if (lVar2 != 0) {
      FUN_00d50b00();
      if (plVar1 != (int64_t *)0x0) {
        pvVar7 = _pthread_getspecific((void*)param_1);
        if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
          param_1 = lVar2;
        }
        FUN_016c2660();
        if ((local_68 == '\0') && (local_70 != 0)) {
          FUN_00d50b00();
        }
        if (*(int *)(local_70 + 0xc) != 0) {
          pvVar7 = _pthread_getspecific((void*)param_1);
          if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
            param_1 = lVar2;
          }
          pvVar7 = _pthread_getspecific((void*)param_1);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_019079b0();
          local_c0 = FUN_017048a0();
        }
        local_70 = 0;
        local_58 = -1;
        while( true ) {
          lVar8 = (int64_t)local_58;
          local_58 = local_58 + 1;
          if (*(int *)(lVar5 + 0xc) <= local_58) break;
          lVar11 = *(int64_t *)(lVar5 + 0x10);
          local_70 = *(int64_t *)(lVar11 + 8 + lVar8 * 8);
          FUN_01c82a20();
          pVar10 = (void*)lVar11;
          if ((local_40 == '\0') && (local_48 != 0)) {
            FUN_00d50b00();
          }
          pvVar7 = _pthread_getspecific(pVar10);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          uVar9 = FUN_019079b0();
          pvVar7 = _pthread_getspecific(pVar10);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          uVar14 = FUN_01907950();
          pvVar7 = _pthread_getspecific(pVar10);
          if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
            pVar10 = (void*)lVar2;
          }
          dVar16 = (double)FUN_016d2000();
          uVar12 = (**(code **)(*plVar1 + 0x390))(uVar14);
          FUN_01e3f820();
          fVar13 = extraout_XMM0_Db + in_XMM1._4_4_ + g_02390d00;
          fVar21 = fVar13 + g_0241c6e8;
          if (*(int *)(this_ptr + 0x1c8) != 1) {
            fVar21 = fVar13;
          }
          dVar18 = dVar16 / *(double *)(this_ptr + 0x1c0);
          fVar13 = (float)_logf(CONCAT44((int)((uint64_t)dVar18 >> 0x20),(float)dVar18));
          fVar21 = fVar21 - (fVar13 / *(float *)(this_ptr + 0x2a8)) * fVar21;
          in_XMM1 = ZEXT416((uint)fVar21);
          *(void*)(local_48 + 0x38) = uVar14;
          *(void*)(local_48 + 0xc) = uVar12;
          *(float *)(local_48 + 0x10) = fVar21;
          *(double *)(local_48 + 0x30) = dVar16;
          *(uint64_t *)(local_48 + 0x40) = uVar9;
          *(void*)(local_48 + 0x48) = 0;
          if (((local_c0._4_4_ != 0) && (uVar9 >> 0x20 != 0)) &&
             (cVar6 = FUN_00e7c000(), cVar6 != '\0')) {
            *(void*)(local_48 + 0x48) = 1;
            pvVar7 = _pthread_getspecific(pVar10);
            if (pvVar7 != (void *)0x0) {
              FUN_00e8b990();
            }
            local_c0 = FUN_017048a0();
          }
          local_40 = '\0';
          FUN_00d21140();
          FUN_00d50b20();
        }
        lVar8 = lVar5;
        FUN_000beb10();
        pvVar7 = _pthread_getspecific((void*)lVar8);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_016d8130();
        if (local_70 == 0) {
          bVar4 = true;
        }
        else {
          FUN_00d50b00();
          local_58 = -1;
          while (local_58 = local_58 + 1, local_58 < *(int *)(local_70 + 0xc)) {
            pVar10 = (void*)*(void*)(local_70 + 0x10);
            FUN_01c829a0();
            if (local_40 == '\0') {
              if (local_48 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_40 = '\0';
            }
            uVar14 = g_023dccf4;
            FUN_01c82aa0();
            pvVar7 = _pthread_getspecific(pVar10);
            if (pvVar7 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_01909dc0();
            if ((local_40 != '\0') && (local_48 != 0)) {
              FUN_00d50b20();
            }
            pvVar7 = _pthread_getspecific(pVar10);
            if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
              pVar10 = (void*)lVar2;
            }
            uVar15 = FUN_016c98e0();
            pvVar7 = _pthread_getspecific(pVar10);
            if (pvVar7 != (void *)0x0) {
              FUN_00e8b990();
            }
            dVar16 = (double)FUN_016c9410();
            uVar17 = (**(code **)(*plVar1 + 0x390))(uVar15);
            local_118 = (uint32_t)uVar17;
            FUN_01e3f820();
            fVar19 = extraout_XMM0_Db_00 + in_XMM1._4_4_;
            fVar20 = extraout_XMM0_Dd + in_XMM1._12_4_;
            fVar13 = fVar19 + g_02390d00;
            fVar21 = fVar13 + g_0241c6e8;
            if (*(int *)(this_ptr + 0x1c8) != 1) {
              fVar21 = fVar13;
            }
            dVar18 = dVar16 / *(double *)(this_ptr + 0x1c0);
            fVar13 = (float)_logf(CONCAT44((int)((uint64_t)dVar18 >> 0x20),(float)dVar18));
            fVar21 = fVar21 - (fVar13 / *(float *)(this_ptr + 0x2a8)) * fVar21;
            *(void*)(local_48 + 0x38) = uVar15;
            auVar3._8_8_ = extraout_XMM0_Qb;
            auVar3._0_8_ = uVar17;
            *(void*)(local_48 + 0xc) = local_118;
            *(float *)(local_48 + 0x10) = fVar21;
            *(double *)(local_48 + 0x30) = dVar16;
            in_XMM1 = ZEXT416((uint)((uint64_t)uVar14 >> 0x20));
            auVar22._4_4_ = fVar19;
            auVar22._0_4_ = fVar21;
            auVar22._8_4_ = fVar20;
            auVar22._12_4_ = fVar20;
            auVar22 = insertps(auVar3,auVar22,0x10);
            auVar22 = insertps(auVar22,ZEXT416((uint)uVar14),0x20);
            auVar22 = insertps(auVar22,in_XMM1,0x30);
            fVar21 = auVar22._4_4_ + _UNK_0241e9b4;
            fVar13 = auVar22._8_4_ + _UNK_0241e9b8;
            fVar19 = auVar22._12_4_ + _UNK_0241e9bc;
            *(float *)(local_48 + 0x1c) = auVar22._0_4_ + g_0241e9b0;
            *(float *)(local_48 + 0x20) = fVar21;
            *(float *)(local_48 + 0x24) = fVar13;
            *(float *)(local_48 + 0x28) = fVar19;
            FUN_01c82aa0();
            if (local_40 == '\0') {
              if (local_48 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_40 = '\0';
            }
            cVar6 = FUN_00d23d70();
            if (local_48 != 0) {
              FUN_00d50b20();
            }
            if ((local_40 != '\0') && (local_48 != 0)) {
              FUN_00d50b20();
            }
            if (cVar6 != '\0') {
              FUN_01c82ae0();
            }
            local_40 = '\0';
            FUN_00d21140();
            FUN_00d50b20();
          }
          FUN_01708ee0();
          bVar4 = false;
        }
        FUN_01c45dc0();
        FUN_01e436c0();
        FUN_01c4d670();
        if (!bVar4) {
          FUN_00d50b20();
        }
        if (lVar5 != 0) {
          FUN_00d50b20();
        }
      }
      FUN_00d50b20();
    }
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  return;
}

