// Function: FUN_01b05670
// Address: 01b05670
// Size: 570 bytes
// Class: MUScalePitchSystem


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b05670(pthread_key_t param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  int iVar3;
  void *pvVar4;
  longlong lVar5;
  longlong *unaff_RDI;
  longlong *plVar6;
  undefined8 uVar7;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined4 uVar10;
  undefined4 uVar11;
  float fVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 in_XMM1_Dc;
  undefined4 uVar15;
  undefined4 in_XMM1_Dd;
  undefined4 uVar16;
  float fVar17;
  ulonglong uVar18;
  undefined1 auVar19 [16];
  longlong *local_38;
  char local_30;
  
  uVar13 = (undefined4)((ulonglong)param_2 >> 0x20);
  uVar10 = (undefined4)param_2;
  FUN_01ad3cb0();
  if (local_30 == '\0') {
    if (local_38 == (longlong *)0x0) {
      return;
    }
    FUN_00d50b00();
  }
  else if (local_38 == (longlong *)0x0) {
    return;
  }
  FUN_01ad6350();
  pvVar4 = _pthread_getspecific(param_1);
  plVar6 = local_38;
  if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
    plVar6 = (longlong *)local_38[(ulonglong)(*(uint *)(lVar5 + 0x154) & 1) + 4];
  }
  (**(code **)(*plVar6 + 0x3a0))();
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0174aa60();
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  iVar3 = FUN_017423e0();
  if (*(int *)((longlong)unaff_RDI + 0x184) != iVar3) {
    *(int *)((longlong)unaff_RDI + 0x184) = iVar3;
    uVar18 = DAT_023dccf4;
    uVar7 = DAT_023dccec;
    if ((*(int *)((longlong)unaff_RDI + 0x284) != 1) && (*(int *)((longlong)unaff_RDI + 0x284) != 0)
       ) {
      uVar7 = FUN_01e3f820();
      if (*(int *)((longlong)unaff_RDI + 0x284) == 3) {
        uVar11 = uVar10;
        uVar14 = uVar13;
        uVar15 = in_XMM1_Dc;
        uVar16 = in_XMM1_Dd;
        FUN_01e3f820();
        auVar19._4_4_ = uVar14;
        auVar19._0_4_ = uVar11;
        auVar19._8_4_ = uVar15;
        auVar19._12_4_ = uVar16;
        auVar8 = blendps(auVar19,_DAT_0241c700,0xd);
      }
      else {
        auVar8._8_8_ = 0;
        auVar8._0_8_ = DAT_023dccf4;
      }
      auVar1._8_8_ = extraout_XMM0_Qb;
      auVar1._0_8_ = uVar7;
      auVar9._0_4_ = auVar8._0_4_ + (float)uVar7;
      auVar9._4_4_ = auVar8._4_4_ + (float)((ulonglong)uVar7 >> 0x20);
      auVar9._8_4_ = auVar8._8_4_ + (float)extraout_XMM0_Qb;
      auVar9._12_4_ = auVar8._12_4_ + (float)((ulonglong)extraout_XMM0_Qb >> 0x20);
      auVar8 = blendps(auVar9,auVar1,2);
      auVar2._4_4_ = uVar13;
      auVar2._0_4_ = uVar10;
      auVar2._8_4_ = in_XMM1_Dc;
      auVar2._12_4_ = in_XMM1_Dd;
      auVar19 = blendps(auVar2,_DAT_0241c710,0xd);
      uVar18 = auVar19._0_8_;
      uVar7 = auVar8._0_8_;
    }
    fVar17 = (float)uVar18;
    fVar12 = fVar17 * DAT_0239011c;
    if ((fVar17 == 0.0) && (!NAN(fVar17))) {
      fVar12 = fVar17;
    }
    (**(code **)(*unaff_RDI + 0x618))(uVar7,fVar12);
  }
  FUN_01ad3320();
  if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((int)unaff_RDI[0x32] != -1000000) {
    *(undefined4 *)(unaff_RDI + 0x32) = 0xfff0bdc0;
    (**(code **)(*unaff_RDI + 0x620))();
  }
  FUN_01ad71a0();
  FUN_01ad37a0();
  FUN_01ad6540();
  FUN_00d50b20();
  return;
}


