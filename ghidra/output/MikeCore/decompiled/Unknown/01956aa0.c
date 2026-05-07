// Function: FUN_01956aa0
// Address: 01956aa0
// Size: 1013 bytes
// Class: Unknown


void FUN_01956aa0(pthread_key_t param_1)

{
  double dVar1;
  double dVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  double dVar5;
  bool bVar6;
  void *pvVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *unaff_RDI;
  float fVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dc_01;
  undefined4 extraout_XMM0_Dc_02;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  undefined4 extraout_XMM0_Dd_01;
  undefined4 extraout_XMM0_Dd_02;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  float local_88;
  float fStack_84;
  longlong local_70;
  char local_68;
  longlong *local_40;
  char local_38;
  
  plVar9 = (longlong *)unaff_RDI[0x2e];
  if (plVar9 != (longlong *)0x0) {
    pvVar7 = _pthread_getspecific(param_1);
    if (pvVar7 != (void *)0x0) {
      plVar9 = (longlong *)unaff_RDI[0x2e];
      lVar8 = FUN_00e8b990();
      if (lVar8 != 0) {
        plVar9 = (longlong *)plVar9[(ulonglong)(*(uint *)(lVar8 + 0x154) & 1) + 4];
      }
    }
    (**(code **)(*plVar9 + 0x378))();
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (local_40 != (longlong *)0x0) {
      plVar9 = (longlong *)unaff_RDI[0x2e];
      pvVar7 = _pthread_getspecific(param_1);
      if (pvVar7 != (void *)0x0) {
        plVar9 = (longlong *)unaff_RDI[0x2e];
        lVar8 = FUN_00e8b990();
        if (lVar8 != 0) {
          plVar9 = (longlong *)plVar9[(ulonglong)(*(uint *)(lVar8 + 0x154) & 1) + 4];
        }
      }
      (**(code **)(*plVar9 + 0x378))();
      pvVar7 = _pthread_getspecific(param_1);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01320d00();
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      if (local_40 != (longlong *)0x0) {
        FUN_01956250();
        if (local_40 == (longlong *)0x0) {
          bVar6 = true;
          local_40 = (longlong *)0x0;
        }
        else {
          if (local_38 == '\0') {
            FUN_00d50b00();
          }
          bVar6 = false;
        }
        pvVar7 = _pthread_getspecific(param_1);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar5 = (double)FUN_014bb3e0();
        dVar1 = (double)(**(code **)(&UNK_000016a8 + *local_40))();
        uVar11 = (**(code **)(*local_40 + 0x938))(SUB84(dVar5 + dVar1,0));
        pvVar7 = _pthread_getspecific(param_1);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar5 = (double)FUN_014bb3e0();
        dVar1 = (double)(**(code **)(&UNK_000016a8 + *local_40))();
        pvVar7 = _pthread_getspecific(param_1);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar2 = (double)FUN_014bb310();
        uVar12 = (**(code **)(*local_40 + 0x938))(SUB84(dVar5 + dVar1 + dVar2,0));
        plVar9 = (longlong *)unaff_RDI[0x2e];
        pvVar7 = _pthread_getspecific(param_1);
        if (pvVar7 != (void *)0x0) {
          plVar9 = (longlong *)unaff_RDI[0x2e];
          lVar8 = FUN_00e8b990();
          if (lVar8 != 0) {
            plVar9 = (longlong *)plVar9[(ulonglong)(*(uint *)(lVar8 + 0x154) & 1) + 4];
          }
        }
        fVar10 = (float)(**(code **)(*plVar9 + 0x3e0))();
        uVar13 = FUN_0198a7d0(~-(uint)(!NAN(fVar10) && !NAN(fVar10)) & DAT_024112ac |
                              -(uint)(!NAN(fVar10) && !NAN(fVar10)) & (uint)fVar10);
        fVar10 = (float)(**(code **)(*local_40 + 3000))();
        uVar14 = (**(code **)(*local_40 + 3000))();
        auVar4._8_4_ = extraout_XMM0_Dc;
        auVar4._0_8_ = uVar11;
        auVar4._12_4_ = extraout_XMM0_Dd;
        auVar16._8_4_ = extraout_XMM0_Dc_00;
        auVar16._0_8_ = uVar12;
        auVar16._12_4_ = extraout_XMM0_Dd_00;
        auVar15._4_12_ = auVar16._4_12_;
        auVar15._0_4_ = (float)uVar12 - (float)uVar11;
        auVar17._4_4_ = (int)((ulonglong)uVar14 >> 0x20);
        auVar17._0_4_ = (float)uVar14 * DAT_023908e0;
        auVar17._8_4_ = extraout_XMM0_Dc_02;
        auVar17._12_4_ = extraout_XMM0_Dd_02;
        auVar16 = insertps(auVar15,auVar17,0x10);
        auVar3._4_4_ = (int)((ulonglong)uVar13 >> 0x20);
        auVar3._0_4_ = (float)uVar13 + fVar10 * DAT_0241b660;
        auVar3._8_4_ = extraout_XMM0_Dc_01;
        auVar3._12_4_ = extraout_XMM0_Dd_01;
        auVar17 = insertps(auVar4,auVar3,0x10);
        uVar11 = FUN_00d051c0(auVar17._0_4_);
        fVar10 = (float)uVar11;
        auVar17 = auVar16;
        uVar12 = (**(code **)(*unaff_RDI + 0x4d8))();
        local_88 = auVar16._0_4_;
        fStack_84 = auVar16._4_4_;
        if ((((((float)uVar12 != fVar10) || (NAN((float)uVar12) || NAN(fVar10))) ||
             ((float)((ulonglong)uVar12 >> 0x20) != (float)((ulonglong)uVar11 >> 0x20))) ||
            (((auVar17._0_4_ != local_88 || (NAN(auVar17._0_4_) || NAN(local_88))) ||
             (auVar17._4_4_ != fStack_84)))) &&
           ((**(code **)(*unaff_RDI + 0x4d0))(fVar10), unaff_RDI[0x2f] != 0)) {
          unaff_RDI[0x2f] = 0;
          FUN_00d50b20();
        }
        if (!bVar6) {
          FUN_00d50b20();
        }
      }
    }
  }
  return;
}


