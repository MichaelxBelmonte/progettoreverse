// Function: FUN_019b4ae0
// Address: 019b4ae0
// Size: 2648 bytes
// Class: GNList


/* WARNING: Removing unreachable block (ram,0x019b4c05) */
/* WARNING: Removing unreachable block (ram,0x019b4c0e) */
/* WARNING: Removing unreachable block (ram,0x019b5465) */
/* WARNING: Removing unreachable block (ram,0x019b546e) */
/* WARNING: Removing unreachable block (ram,0x019b53c2) */
/* WARNING: Removing unreachable block (ram,0x019b53cb) */
/* WARNING: Removing unreachable block (ram,0x019b4bd4) */
/* WARNING: Removing unreachable block (ram,0x019b4bdd) */
/* WARNING: Removing unreachable block (ram,0x019b4b24) */
/* WARNING: Removing unreachable block (ram,0x019b4b2d) */
/* WARNING: Removing unreachable block (ram,0x019b4b90) */
/* WARNING: Removing unreachable block (ram,0x019b4b99) */
/* WARNING: Removing unreachable block (ram,0x019b4c72) */
/* WARNING: Removing unreachable block (ram,0x019b4c7b) */
/* WARNING: Removing unreachable block (ram,0x019b5418) */
/* WARNING: Removing unreachable block (ram,0x019b5421) */
/* WARNING: Removing unreachable block (ram,0x019b54c6) */
/* WARNING: Removing unreachable block (ram,0x019b54cf) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_019b4ae0(pthread_key_t param_1)

{
  longlong lVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  void *pvVar5;
  ulonglong uVar6;
  pthread_key_t pVar7;
  longlong *plVar8;
  byte bVar9;
  longlong *unaff_RDI;
  longlong lVar10;
  float fVar11;
  float fVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  undefined4 extraout_XMM0_Dd;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar19 [16];
  undefined8 extraout_XMM0_Qb_00;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  float fVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  float local_d8;
  float fStack_d4;
  undefined1 local_88 [28];
  float local_6c;
  undefined1 local_68 [16];
  longlong *local_50;
  char local_48;
  undefined8 extraout_XMM0_Qb_01;
  
  (**(code **)(*unaff_RDI + 0x7b0))();
  if ((local_48 == '\0') && (local_50 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  uVar13 = (**(code **)(*unaff_RDI + 0xa50))();
  uVar14 = (**(code **)(*unaff_RDI + 0xa98))();
  uVar15 = (**(code **)(*unaff_RDI + 0x9b0))(uVar14,0);
  if ((local_48 == '\0') && (local_50 != (longlong *)0x0)) {
    uVar15 = FUN_00d50b00();
  }
  uVar15 = (**(code **)(*unaff_RDI + 0x9d0))(uVar15,0);
  if (local_48 == '\0') {
    if (local_50 != (longlong *)0x0) {
      uVar15 = FUN_00d50b00();
      goto LAB_019b4be2;
    }
  }
  else if (local_50 != (longlong *)0x0) {
LAB_019b4be2:
    if (local_50 == (longlong *)0x0) {
      FUN_00d50b00();
    }
    else {
      local_48 = '\0';
      FUN_00d214d0(uVar15,*(undefined4 *)((longlong)local_50 + 0xc));
    }
    FUN_00d50b20();
  }
  (**(code **)(*unaff_RDI + 0xa18))();
  if (local_48 == '\0') {
    if (local_50 == (longlong *)0x0) goto LAB_019b4d3e;
    FUN_00d50b00();
LAB_019b4c80:
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar16 = (double)FUN_016c9870();
    dVar17 = (double)(**(code **)(*unaff_RDI + 0x940))();
    bVar4 = false;
    bVar2 = false;
    if (dVar16 + DAT_023b19a0 < dVar17) {
      pvVar5 = _pthread_getspecific(param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      auVar19._0_8_ = FUN_016c9870();
      auVar19._8_8_ = extraout_XMM0_Qb;
      auVar19 = roundsd(auVar19,auVar19,9);
      bVar2 = true;
      bVar4 = false;
      (**(code **)(*unaff_RDI + 0x948))(auVar19._0_8_ + _DAT_0241b688);
    }
  }
  else {
    if (local_50 != (longlong *)0x0) goto LAB_019b4c80;
LAB_019b4d3e:
    bVar4 = true;
    bVar2 = false;
  }
  if ((local_50 != (longlong *)0x0) && (*(int *)((longlong)local_50 + 0xc) != 0)) {
    lVar10 = *(longlong *)local_50[2];
    if (lVar10 != 0) {
      FUN_00d50b00();
    }
    fVar11 = (float)(**(code **)(*unaff_RDI + 0xc38))();
    if (lVar10 != 0) {
      FUN_00d50b20();
    }
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar16 = (double)FUN_01259520();
    fVar12 = fVar11;
    if (1 < *(int *)((longlong)local_50 + 0xc)) {
      lVar10 = 1;
      local_6c = fVar11;
      local_88._0_8_ = dVar16;
      local_68._0_4_ = fVar11;
      do {
        lVar1 = *(longlong *)(local_50[2] + lVar10 * 8);
        plVar8 = local_50;
        if (lVar1 != 0) {
          FUN_00d50b00();
        }
        pVar7 = (pthread_key_t)plVar8;
        fVar11 = (float)(**(code **)(*unaff_RDI + 0xc38))();
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
      } while (lVar10 < *(int *)((longlong)local_50 + 0xc));
    }
    fVar23 = *(float *)(unaff_RDI + 0x44);
    if (fVar12 + _DAT_0241b648 < fVar23) {
      do {
        fVar23 = fVar23 + DAT_02394218;
      } while (fVar12 + _DAT_0241b648 < fVar23);
      *(float *)(unaff_RDI + 0x44) = fVar23;
      bVar2 = true;
    }
    fVar12 = *(float *)((longlong)unaff_RDI + 0x224);
    if (fVar12 < fVar11 + DAT_0241b640) {
      do {
        fVar12 = fVar12 + DAT_0239394c;
      } while (fVar12 < fVar11 + DAT_0241b640);
      *(float *)((longlong)unaff_RDI + 0x224) = fVar12;
      bVar2 = true;
    }
    dVar17 = (double)(**(code **)(*unaff_RDI + 0x918))();
    dVar18 = (double)(**(code **)(*unaff_RDI + 0x940))();
    if (dVar17 + dVar18 < dVar16) {
      dVar17 = (double)(**(code **)(*unaff_RDI + 0x940))();
      bVar2 = true;
      FUN_01a196e0((dVar16 + DAT_024111c0) - dVar17);
    }
  }
  dVar16 = (double)(**(code **)(*unaff_RDI + 0x918))();
  dVar17 = (double)(**(code **)(*unaff_RDI + 0x940))();
  auVar24._0_8_ = dVar16 + dVar17;
  auVar24._8_8_ = 0;
  fVar12 = (float)(**(code **)(*unaff_RDI + 0x938))(auVar24._0_8_);
  (**(code **)(*unaff_RDI + 0x940))();
  fVar11 = (float)(**(code **)(*unaff_RDI + 0x938))();
  FUN_01e3f820();
  fVar12 = fVar12 - fVar11;
  if (DAT_02390124 < (float)((uint)(fVar12 - auVar24._0_4_) & _DAT_02390140)) {
LAB_019b5113:
    fVar11 = (float)(**(code **)(*unaff_RDI + 0xbc0))();
    fVar23 = (float)(**(code **)(*unaff_RDI + 3000))();
    local_88._0_16_ = roundss(ZEXT416((uint)fVar12),ZEXT416((uint)fVar12),9);
    auVar25 = ZEXT416((uint)(fVar11 * fVar23));
    local_68 = roundss(ZEXT816(0),auVar25,9);
    if (local_50 != (longlong *)0x0) {
      FUN_01e3f820();
      bVar2 = (float)local_88._0_4_ < auVar25._0_4_;
      if (bVar2) {
        FUN_01e3f820();
        dVar16 = (double)(**(code **)(*unaff_RDI + 0x930))();
        dVar17 = (double)(**(code **)(*unaff_RDI + 0x940))();
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
        uVar6 = (ulonglong)!(bool)(bVar9 & 1);
        *(float *)((longlong)unaff_RDI + uVar6 * 4 + 0x220) =
             *(float *)((longlong)unaff_RDI + uVar6 * 4 + 0x220) +
             *(float *)(&DAT_0241b690 + uVar6 * 4);
        fVar11 = (float)(**(code **)(*unaff_RDI + 0xbc0))();
        fVar12 = (float)(**(code **)(*unaff_RDI + 3000))();
        auVar25 = ZEXT416((uint)(fVar11 * fVar12));
        local_68 = roundss(ZEXT816(0),auVar25,9);
        bVar9 = bVar9 + 1;
      }
    }
    auVar19 = insertps(local_88._0_16_,local_68._0_4_,0x10);
    (**(code **)(*unaff_RDI + 0x4e8))(auVar19._0_8_);
    if (local_50 != (longlong *)0x0) {
      local_68._0_8_ = (**(code **)(*unaff_RDI + 0x938))(uVar13);
      local_68._8_8_ = extraout_XMM0_Qb_00;
      local_d8 = (float)uVar14;
      fStack_d4 = (float)((ulonglong)uVar14 >> 0x20);
      auVar20._4_4_ = fStack_d4;
      auVar20._0_4_ = fStack_d4;
      auVar20._8_4_ = extraout_XMM0_Dd;
      auVar20._12_4_ = extraout_XMM0_Dd;
      auVar21._4_12_ = auVar20._4_12_;
      auVar21._0_4_ = fStack_d4 + local_d8;
      auVar22._0_8_ = (**(code **)(*unaff_RDI + 0xbf8))(auVar21._0_8_);
      auVar22._8_8_ = extraout_XMM0_Qb_01;
      auVar19 = insertps(local_68,auVar22,0x10);
      auVar19 = roundps(auVar22,auVar19,9);
      FUN_01cf5c80(auVar19._0_8_);
    }
    bVar3 = false;
  }
  else {
    fVar11 = (float)(**(code **)(*unaff_RDI + 0xbc0))();
    fVar23 = (float)(**(code **)(*unaff_RDI + 3000))();
    FUN_01e3f820();
    if (DAT_02390124 < (float)((uint)(fVar11 * fVar23 - auVar24._4_4_) & _DAT_02390140))
    goto LAB_019b5113;
    if ((!bVar2) && (local_50 != (longlong *)0x0)) {
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
  if (DAT_02390d28 <= *(float *)(unaff_RDI + 0x43) * DAT_023908e0) {
    if (DAT_02390d28 < *(float *)(unaff_RDI + 0x43) * DAT_023908e0) {
      (**(code **)(&UNK_00001648 + *unaff_RDI))();
      goto LAB_019b52f8;
    }
  }
  else {
    (**(code **)(&UNK_00001648 + *unaff_RDI))();
LAB_019b52f8:
    fVar11 = *(float *)(unaff_RDI + 0x2c);
    if ((*(float *)((longlong)unaff_RDI + 0x15c) != fVar11) ||
       (NAN(*(float *)((longlong)unaff_RDI + 0x15c)) || NAN(fVar11))) {
      *(float *)((longlong)unaff_RDI + 0x15c) = fVar11;
    }
  }
  if (bVar3) goto LAB_019b54fd;
  (**(code **)(*unaff_RDI + 0x970))();
  if (local_48 == '\0') {
    if (local_50 == (longlong *)0x0) goto LAB_019b53ed;
    FUN_00d50b00();
LAB_019b53d0:
    FUN_0197c2b0();
    if (local_48 == '\0') {
      if (local_50 == (longlong *)0x0) goto LAB_019b5432;
      FUN_00d50b00();
LAB_019b5426:
      FUN_01a182c0();
      bVar2 = false;
    }
    else {
      if (local_50 != (longlong *)0x0) goto LAB_019b5426;
LAB_019b5432:
      bVar2 = true;
    }
    FUN_0197c480();
    if (local_48 == '\0') {
      if (local_50 != (longlong *)0x0) {
        FUN_00d50b00();
        goto LAB_019b5473;
      }
    }
    else if (local_50 != (longlong *)0x0) {
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
    if (local_50 != (longlong *)0x0) goto LAB_019b53d0;
LAB_019b53ed:
    bVar2 = true;
  }
  (**(code **)(*unaff_RDI + 0x978))();
  if (local_48 == '\0') {
    if (local_50 != (longlong *)0x0) {
      FUN_00d50b00();
      goto LAB_019b54d4;
    }
  }
  else if (local_50 != (longlong *)0x0) {
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
  if (local_50 != (longlong *)0x0) {
    FUN_00d50b20();
    FUN_00d50b20();
  }
  return;
}


