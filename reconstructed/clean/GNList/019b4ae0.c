// Function: FUN_019b4ae0
// Address: 019b4ae0
// Size: 2648 bytes
// Class: GNList
// === GNList properties ===
//   GNInt           _archiveVersion
//   bool            _awakesObjectsAfterDecoding
//   bool            _isCancelled
//   GNInt           _currentObjectGraphIdx
//   GNInt           _predictedDecodedValuesIndex


void FUN_019b4ae0(void* param_1)

{
  int64_t lVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  void *pvVar5;
  uint64_t uVar6;
  void* pVar7;
  int64_t *plVar8;
  byte bVar9;
  int64_t *this_ptr;
  int64_t lVar10;
  float fVar11;
  float fVar12;
  uint64_t uVar13;
  uint64_t uVar14;
  uint64_t uVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  uint32_t extraout_XMM0_Dd;
  uint64_t extraout_XMM0_Qb;
  uint8_t auVar19 [16];
  uint64_t extraout_XMM0_Qb_00;
  uint8_t auVar20 [16];
  uint8_t auVar21 [16];
  uint8_t auVar22 [16];
  float fVar23;
  uint8_t auVar24 [16];
  uint8_t auVar25 [16];
  float local_d8;
  float fStack_d4;
  uint8_t local_88 [28];
  float local_6c;
  uint8_t local_68 [16];
  int64_t *local_50;
  char local_48;
  uint64_t extraout_XMM0_Qb_01;
  
  (**(code **)(*this_ptr + 0x7b0))();
  if ((local_48 == '\0') && (local_50 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  uVar13 = (**(code **)(*this_ptr + 0xa50))();
  uVar14 = (**(code **)(*this_ptr + 0xa98))();
  uVar15 = (**(code **)(*this_ptr + 0x9b0))(uVar14,0);
  if ((local_48 == '\0') && (local_50 != (int64_t *)0x0)) {
    uVar15 = FUN_00d50b00();
  }
  uVar15 = (**(code **)(*this_ptr + 0x9d0))(uVar15,0);
  if (local_48 == '\0') {
    if (local_50 != (int64_t *)0x0) {
      uVar15 = FUN_00d50b00();
      goto LAB_019b4be2;
    }
  }
  else if (local_50 != (int64_t *)0x0) {
LAB_019b4be2:
    if (local_50 == (int64_t *)0x0) {
      FUN_00d50b00();
    }
    else {
      local_48 = '\0';
      FUN_00d214d0(uVar15,*(void*)((int64_t)local_50 + 0xc));
    }
    FUN_00d50b20();
  }
  (**(code **)(*this_ptr + 0xa18))();
  if (local_48 == '\0') {
    if (local_50 == (int64_t *)0x0) goto LAB_019b4d3e;
    FUN_00d50b00();
LAB_019b4c80:
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar16 = (double)FUN_016c9870();
    dVar17 = (double)(**(code **)(*this_ptr + 0x940))();
    bVar4 = false;
    bVar2 = false;
    if (dVar16 + g_023b19a0 < dVar17) {
      pvVar5 = _pthread_getspecific(param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      auVar19._0_8_ = FUN_016c9870();
      auVar19._8_8_ = extraout_XMM0_Qb;
      auVar19 = roundsd(auVar19,auVar19,9);
      bVar2 = true;
      bVar4 = false;
      (**(code **)(*this_ptr + 0x948))(auVar19._0_8_ + g_0241b688);
    }
  }
  else {
    if (local_50 != (int64_t *)0x0) goto LAB_019b4c80;
LAB_019b4d3e:
    bVar4 = true;
    bVar2 = false;
  }
  if ((local_50 != (int64_t *)0x0) && (*(int *)((int64_t)local_50 + 0xc) != 0)) {
    lVar10 = *(int64_t *)local_50[2];
    if (lVar10 != 0) {
      FUN_00d50b00();
    }
    fVar11 = (float)(**(code **)(*this_ptr + 0xc38))();
    if (lVar10 != 0) {
      FUN_00d50b20();
    }
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar16 = (double)FUN_01259520();
    fVar12 = fVar11;
    if (1 < *(int *)((int64_t)local_50 + 0xc)) {
      lVar10 = 1;
      local_6c = fVar11;
      local_88._0_8_ = dVar16;
      local_68._0_4_ = fVar11;
      do {
        lVar1 = *(int64_t *)(local_50[2] + lVar10 * 8);
        plVar8 = local_50;
        if (lVar1 != 0) {
          FUN_00d50b00();
        }
        pVar7 = (void*)plVar8;
        fVar11 = (float)(**(code **)(*this_ptr + 0xc38))();
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
        pvVar5 = _pthread_getspecific(pVar7);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar16 = (double)FUN_01259520();
        fVar12 = fVar11;
        if ((float)local_68._0_4_ <= fVar11) {
          fVar12 = (float)local_68._0_4_;
        }
        if (fVar11 <= local_6c) {
          fVar11 = local_6c;
        }
        if (dVar16 <= (double)local_88._0_8_) {
          dVar16 = (double)local_88._0_8_;
        }
        lVar10 = lVar10 + 1;
        local_6c = fVar11;
        local_88._0_8_ = dVar16;
        local_68._0_4_ = fVar12;
      } while (lVar10 < *(int *)((int64_t)local_50 + 0xc));
    }
    fVar23 = *(float *)(this_ptr + 0x44);
    if (fVar12 + g_0241b648 < fVar23) {
      do {
        fVar23 = fVar23 + g_02394218;
      } while (fVar12 + g_0241b648 < fVar23);
      *(float *)(this_ptr + 0x44) = fVar23;
      bVar2 = true;
    }
    fVar12 = *(float *)((int64_t)this_ptr + 0x224);
    if (fVar12 < fVar11 + g_0241b640) {
      do {
        fVar12 = fVar12 + g_0239394c;
      } while (fVar12 < fVar11 + g_0241b640);
      *(float *)((int64_t)this_ptr + 0x224) = fVar12;
      bVar2 = true;
    }
    dVar17 = (double)(**(code **)(*this_ptr + 0x918))();
    dVar18 = (double)(**(code **)(*this_ptr + 0x940))();
    if (dVar17 + dVar18 < dVar16) {
      dVar17 = (double)(**(code **)(*this_ptr + 0x940))();
      bVar2 = true;
      FUN_01a196e0((dVar16 + g_024111c0) - dVar17);
    }
  }
  dVar16 = (double)(**(code **)(*this_ptr + 0x918))();
  dVar17 = (double)(**(code **)(*this_ptr + 0x940))();
  auVar24._0_8_ = dVar16 + dVar17;
  auVar24._8_8_ = 0;
  fVar12 = (float)(**(code **)(*this_ptr + 0x938))(auVar24._0_8_);
  (**(code **)(*this_ptr + 0x940))();
  fVar11 = (float)(**(code **)(*this_ptr + 0x938))();
  FUN_01e3f820();
  fVar12 = fVar12 - fVar11;
  if (g_02390124 < (float)((uint)(fVar12 - auVar24._0_4_) & g_02390140)) {
LAB_019b5113:
    fVar11 = (float)(**(code **)(*this_ptr + 0xbc0))();
    fVar23 = (float)(**(code **)(*this_ptr + 3000))();
    local_88._0_16_ = roundss(ZEXT416((uint)fVar12),ZEXT416((uint)fVar12),9);
    auVar25 = ZEXT416((uint)(fVar11 * fVar23));
    local_68 = roundss(ZEXT816(0),auVar25,9);
    if (local_50 != (int64_t *)0x0) {
      FUN_01e3f820();
      bVar2 = (float)local_88._0_4_ < auVar25._0_4_;
      if (bVar2) {
        FUN_01e3f820();
        dVar16 = (double)(**(code **)(*this_ptr + 0x930))();
        dVar17 = (double)(**(code **)(*this_ptr + 0x940))();
        auVar25._0_8_ = dVar16 - dVar17;
        auVar25._8_8_ = 0;
        FUN_01a196e0(auVar25._0_8_);
        FUN_01e3f820();
        local_88._0_16_ = auVar25;
      }
      bVar9 = 1;
      while( true ) {
        FUN_01e3f820();
        if (auVar25._4_4_ <= (float)local_68._0_4_) break;
        uVar6 = (uint64_t)!(bool)(bVar9 & 1);
        *(float *)((int64_t)this_ptr + uVar6 * 4 + 0x220) =
             *(float *)((int64_t)this_ptr + uVar6 * 4 + 0x220) +
             *(float *)(&g_0241b690 + uVar6 * 4);
        fVar11 = (float)(**(code **)(*this_ptr + 0xbc0))();
        fVar12 = (float)(**(code **)(*this_ptr + 3000))();
        auVar25 = ZEXT416((uint)(fVar11 * fVar12));
        local_68 = roundss(ZEXT816(0),auVar25,9);
        bVar9 = bVar9 + 1;
      }
    }
    auVar19 = insertps(local_88._0_16_,local_68._0_4_,0x10);
    (**(code **)(*this_ptr + 0x4e8))(auVar19._0_8_);
    if (local_50 != (int64_t *)0x0) {
      local_68._0_8_ = (**(code **)(*this_ptr + 0x938))(uVar13);
      local_68._8_8_ = extraout_XMM0_Qb_00;
      local_d8 = (float)uVar14;
      fStack_d4 = (float)((uint64_t)uVar14 >> 0x20);
      auVar20._4_4_ = fStack_d4;
      auVar20._0_4_ = fStack_d4;
      auVar20._8_4_ = extraout_XMM0_Dd;
      auVar20._12_4_ = extraout_XMM0_Dd;
      auVar21._4_12_ = auVar20._4_12_;
      auVar21._0_4_ = fStack_d4 + local_d8;
      auVar22._0_8_ = (**(code **)(*this_ptr + 0xbf8))(auVar21._0_8_);
      auVar22._8_8_ = extraout_XMM0_Qb_01;
      auVar19 = insertps(local_68,auVar22,0x10);
      auVar19 = roundps(auVar22,auVar19,9);
      FUN_01cf5c80(auVar19._0_8_);
    }
    bVar3 = false;
  }
  else {
    fVar11 = (float)(**(code **)(*this_ptr + 0xbc0))();
    fVar23 = (float)(**(code **)(*this_ptr + 3000))();
    FUN_01e3f820();
    if (g_02390124 < (float)((uint)(fVar11 * fVar23 - auVar24._4_4_) & g_02390140))
    goto LAB_019b5113;
    if ((!bVar2) && (local_50 != (int64_t *)0x0)) {
      FUN_01e3f820();
      auVar19 = auVar24;
      FUN_01e3f820();
      local_88._0_4_ = auVar24._0_4_;
      if ((float)local_88._0_4_ <= auVar19._0_4_) {
        FUN_01e3f820();
        auVar24 = auVar19;
        FUN_01e3f820();
        local_88._4_4_ = auVar19._4_4_;
        bVar3 = true;
        if ((float)local_88._4_4_ <= auVar24._4_4_) goto LAB_019b52ac;
      }
      goto LAB_019b5113;
    }
    bVar3 = true;
    if (bVar2) goto LAB_019b5113;
  }
LAB_019b52ac:
  if (g_02390d28 <= *(float *)(this_ptr + 0x43) * g_023908e0) {
    if (g_02390d28 < *(float *)(this_ptr + 0x43) * g_023908e0) {
      (**(code **)(&UNK_00001648 + *this_ptr))();
      goto LAB_019b52f8;
    }
  }
  else {
    (**(code **)(&UNK_00001648 + *this_ptr))();
LAB_019b52f8:
    fVar11 = *(float *)(this_ptr + 0x2c);
    if ((*(float *)((int64_t)this_ptr + 0x15c) != fVar11) ||
       (NAN(*(float *)((int64_t)this_ptr + 0x15c)) || NAN(fVar11))) {
      *(float *)((int64_t)this_ptr + 0x15c) = fVar11;
    }
  }
  if (bVar3) goto LAB_019b54fd;
  (**(code **)(*this_ptr + 0x970))();
  if (local_48 == '\0') {
    if (local_50 == (int64_t *)0x0) goto LAB_019b53ed;
    FUN_00d50b00();
LAB_019b53d0:
    FUN_0197c2b0();
    if (local_48 == '\0') {
      if (local_50 == (int64_t *)0x0) goto LAB_019b5432;
      FUN_00d50b00();
LAB_019b5426:
      FUN_01a182c0();
      bVar2 = false;
    }
    else {
      if (local_50 != (int64_t *)0x0) goto LAB_019b5426;
LAB_019b5432:
      bVar2 = true;
    }
    FUN_0197c480();
    if (local_48 == '\0') {
      if (local_50 != (int64_t *)0x0) {
        FUN_00d50b00();
        goto LAB_019b5473;
      }
    }
    else if (local_50 != (int64_t *)0x0) {
LAB_019b5473:
      FUN_01a182c0();
      FUN_00d50b20();
    }
    if (!bVar2) {
      FUN_00d50b20();
    }
    bVar2 = false;
  }
  else {
    if (local_50 != (int64_t *)0x0) goto LAB_019b53d0;
LAB_019b53ed:
    bVar2 = true;
  }
  (**(code **)(*this_ptr + 0x978))();
  if (local_48 == '\0') {
    if (local_50 != (int64_t *)0x0) {
      FUN_00d50b00();
      goto LAB_019b54d4;
    }
  }
  else if (local_50 != (int64_t *)0x0) {
LAB_019b54d4:
    (**(code **)(*local_50 + 0x620))();
    FUN_00d50b20();
  }
  if (!bVar2) {
    FUN_00d50b20();
  }
LAB_019b54fd:
  if (!bVar4) {
    FUN_00d50b20();
  }
  if (local_50 != (int64_t *)0x0) {
    FUN_00d50b20();
    FUN_00d50b20();
  }
  return;
}

