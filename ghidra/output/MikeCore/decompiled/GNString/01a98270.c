// Function: FUN_01a98270
// Address: 01a98270
// Size: 2504 bytes
// Class: GNString


/* WARNING: Removing unreachable block (ram,0x01a98305) */
/* WARNING: Removing unreachable block (ram,0x01a98311) */
/* WARNING: Removing unreachable block (ram,0x01a985ad) */
/* WARNING: Removing unreachable block (ram,0x01a985b9) */
/* WARNING: Removing unreachable block (ram,0x01a989e0) */
/* WARNING: Removing unreachable block (ram,0x01a989ec) */

void FUN_01a98270(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined1 auVar2 [16];
  bool bVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  void *pvVar7;
  longlong lVar8;
  byte bVar9;
  longlong *plVar11;
  undefined8 *unaff_RSI;
  longlong *unaff_RDI;
  float fVar12;
  undefined1 auVar15 [16];
  double dVar13;
  double dVar14;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar16 [16];
  float fVar17;
  float fVar18;
  undefined4 in_XMM1_Dd;
  longlong *local_60;
  char local_58;
  byte local_50;
  undefined7 uStack_4f;
  longlong *local_40;
  char local_38;
  undefined *puVar10;
  
  fVar17 = (float)((ulonglong)param_2 >> 0x20);
  fVar12 = (float)param_2;
  FUN_01e3f820();
  (**(code **)(*unaff_RDI + 0x640))();
  FUN_01e3f820();
  (**(code **)(*local_40 + 0x3f0))(8,0x11,0,1);
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  plVar1 = (longlong *)unaff_RDI[0x3c];
  if (plVar1 != (longlong *)0x0) {
    FUN_00d50b00();
    FUN_01d48370();
    plVar11 = (longlong *)*unaff_RSI;
    FUN_01e3f820();
    auVar15._4_4_ = fVar17;
    auVar15._0_4_ = fVar17;
    auVar15._8_4_ = in_XMM1_Dd;
    auVar15._12_4_ = in_XMM1_Dd;
    auVar15 = insertps(auVar15,ZEXT416((uint)((*(float *)(unaff_RDI + 0x3b) /
                                              (*(float *)(unaff_RDI + 0x3b) -
                                              *(float *)((longlong)unaff_RDI + 0x1dc))) * fVar17)),
                       0x1d);
    (**(code **)(*plVar11 + 0x368))(auVar15._0_8_);
    (**(code **)(*(longlong *)*unaff_RSI + 0x380))();
    FUN_01d48b40();
    (**(code **)(*unaff_RDI + 0x640))();
    (**(code **)(*local_60 + 0x3a8))();
    if (local_38 == '\0') {
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    FUN_01d488d0();
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    bVar3 = true;
    if ((0.0 < *(float *)((longlong)unaff_RDI + 0x1dc) ||
         *(float *)((longlong)unaff_RDI + 0x1dc) == 0.0) || (*(float *)(unaff_RDI + 0x3b) <= 0.0)) {
      local_50 = 0;
      uStack_4f = 0;
      puVar4 = (undefined8 *)0x0;
    }
    else {
      puVar4 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar4 = &DAT_02680400;
      *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
      puVar4[6] = 0;
      puVar4[7] = 0;
      *(undefined8 *)((longlong)puVar4 + 0x39) = 0;
      *(undefined8 *)((longlong)puVar4 + 0x41) = 0;
      (*DAT_02680418)();
      FUN_01d39400();
      FUN_01d38ba0();
      uVar5 = (**(code **)(*(longlong *)*unaff_RSI + 0x3a8))();
      bVar3 = false;
      uStack_4f = (undefined7)((ulonglong)uVar5 >> 8);
      local_50 = 1;
    }
    (**(code **)(*unaff_RDI + 0x640))();
    (**(code **)(*local_60 + 0x390))();
    if (local_38 == '\0') {
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    FUN_01d488d0();
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    puVar6 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    puVar10 = &DAT_02680400;
    *puVar6 = &DAT_02680400;
    *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
    puVar6[6] = 0;
    puVar6[7] = 0;
    *(undefined8 *)((longlong)puVar6 + 0x39) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x41) = 0;
    (*DAT_02680418)();
    if (puVar6 == puVar4) {
      puVar6 = puVar4;
      if (bVar3) {
        local_50 = 1;
      }
      else {
        FUN_00d50b20();
      }
    }
    else {
      bVar9 = local_50 & puVar4 != (undefined8 *)0x0;
      puVar10 = (undefined *)CONCAT71(uStack_4f,bVar9);
      local_50 = 1;
      if (bVar9 == 1) {
        FUN_00d50b20();
      }
    }
    if (0.0 < fVar12) {
      fVar17 = 0.0;
      do {
        fVar18 = fVar17;
        pvVar7 = _pthread_getspecific((pthread_key_t)puVar10);
        plVar11 = plVar1;
        if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
          plVar11 = (longlong *)plVar1[(ulonglong)(*(uint *)(lVar8 + 0x154) & 1) + 4];
        }
        dVar13 = (double)(**(code **)(*unaff_RDI + 0xad0))();
        FUN_01e3f820();
        dVar14 = (double)(**(code **)(*unaff_RDI + 0xad0))();
        (**(code **)(*plVar11 + 0x390))
                  ((float)(((double)fVar17 - dVar13) /
                          (((double)fVar18 - (dVar14 + dVar14)) /
                          (double)(*(float *)(unaff_RDI + 0x3a) -
                                  *(float *)((longlong)unaff_RDI + 0x1d4)))));
        FUN_01e3f820();
        (**(code **)(*unaff_RDI + 0xad0))();
        (**(code **)(*unaff_RDI + 0xad0))();
        if ((fVar17 != DAT_0239424c) || (NAN(fVar17) || NAN(DAT_0239424c))) {
          FUN_01d38ba0();
        }
        else {
          FUN_01d39400();
        }
        fVar17 = fVar17 + DAT_02390d34;
      } while (fVar17 < fVar12);
    }
    (**(code **)(*unaff_RDI + 0x640))();
    (**(code **)(*local_60 + 0x390))();
    if (local_38 == '\0') {
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    FUN_01d488d0();
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    (**(code **)(*(longlong *)*unaff_RSI + 0x3a8))();
    FUN_01d48390();
    if (DAT_028b3108 != 0) {
      (**(code **)(*unaff_RDI + 0x640))();
      (**(code **)(*local_60 + 0x3a0))();
      if (local_38 == '\0') {
        if (local_40 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      FUN_01d488d0();
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      (**(code **)(*unaff_RDI + 0x640))();
      (**(code **)(*local_60 + 0x378))();
      if (local_38 == '\0') {
        if (local_40 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      FUN_01d48a10();
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      lVar8 = DAT_028b3108;
      plVar1 = (longlong *)*unaff_RSI;
      if (DAT_028b3108 != 0) {
        FUN_00d50b00();
      }
      uVar5 = FUN_01e436c0();
      fVar12 = (float)FUN_01e436c0();
      auVar2._8_8_ = extraout_XMM0_Qb;
      auVar2._0_8_ = uVar5;
      auVar16._4_12_ = auVar2._4_12_;
      auVar16._0_4_ = (float)uVar5 + DAT_023908ec;
      (**(code **)(*plVar1 + 0x3f0))(auVar16._0_8_,fVar12 + DAT_02390d28);
      if (lVar8 != 0) {
        FUN_00d50b20();
      }
    }
    FUN_00d50b20();
    if ((local_50 != 0) && (puVar6 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
  }
  return;
}


