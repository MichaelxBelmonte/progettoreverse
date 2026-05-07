// Function: FUN_01b05350
// Address: 01b05350
// Size: 731 bytes
// Class: MUScalePitchSystem


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b05350(float param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  char cVar3;
  int iVar4;
  void *pvVar5;
  longlong lVar6;
  pthread_key_t in_ECX;
  longlong *unaff_RDI;
  longlong *plVar7;
  float fVar8;
  undefined8 uVar9;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined4 uVar12;
  undefined4 uVar13;
  float fVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 in_XMM1_Dc;
  undefined4 uVar17;
  undefined4 in_XMM1_Dd;
  undefined4 uVar18;
  float fVar19;
  ulonglong uVar20;
  undefined1 auVar21 [16];
  longlong *local_40;
  char local_38;
  
  uVar15 = (undefined4)((ulonglong)param_2 >> 0x20);
  uVar12 = (undefined4)param_2;
  FUN_01ad3cb0();
  if ((local_38 == '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  pvVar5 = _pthread_getspecific(in_ECX);
  plVar7 = local_40;
  if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
    plVar7 = (longlong *)local_40[(ulonglong)(*(uint *)(lVar6 + 0x154) & 1) + 4];
  }
  (**(code **)(*plVar7 + 0x3a0))();
  pvVar5 = _pthread_getspecific(in_ECX);
  plVar7 = local_40;
  if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
    plVar7 = (longlong *)local_40[(ulonglong)(*(uint *)(lVar6 + 0x154) & 1) + 4];
  }
  fVar8 = (float)(**(code **)(*plVar7 + 0x3a0))();
  pvVar5 = _pthread_getspecific(in_ECX);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  cVar3 = FUN_01749eb0();
  if (cVar3 != '\0') {
    FUN_01ad6350();
    pvVar5 = _pthread_getspecific(in_ECX);
    plVar7 = local_40;
    if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
      plVar7 = (longlong *)local_40[(ulonglong)(*(uint *)(lVar6 + 0x154) & 1) + 4];
    }
    iVar4 = (**(code **)(*plVar7 + 0x3a8))();
    if (*(int *)((longlong)unaff_RDI + 0x184) != iVar4) {
      *(int *)((longlong)unaff_RDI + 0x184) = iVar4;
      uVar20 = DAT_023dccf4;
      uVar9 = DAT_023dccec;
      if ((*(int *)((longlong)unaff_RDI + 0x284) != 1) &&
         (*(int *)((longlong)unaff_RDI + 0x284) != 0)) {
        uVar9 = FUN_01e3f820();
        if (*(int *)((longlong)unaff_RDI + 0x284) == 3) {
          uVar13 = uVar12;
          uVar16 = uVar15;
          uVar17 = in_XMM1_Dc;
          uVar18 = in_XMM1_Dd;
          FUN_01e3f820();
          auVar21._4_4_ = uVar16;
          auVar21._0_4_ = uVar13;
          auVar21._8_4_ = uVar17;
          auVar21._12_4_ = uVar18;
          auVar10 = blendps(auVar21,_DAT_0241c700,0xd);
        }
        else {
          auVar10._8_8_ = 0;
          auVar10._0_8_ = DAT_023dccf4;
        }
        auVar1._8_8_ = extraout_XMM0_Qb;
        auVar1._0_8_ = uVar9;
        auVar11._0_4_ = auVar10._0_4_ + (float)uVar9;
        auVar11._4_4_ = auVar10._4_4_ + (float)((ulonglong)uVar9 >> 0x20);
        auVar11._8_4_ = auVar10._8_4_ + (float)extraout_XMM0_Qb;
        auVar11._12_4_ = auVar10._12_4_ + (float)((ulonglong)extraout_XMM0_Qb >> 0x20);
        auVar10 = blendps(auVar11,auVar1,2);
        auVar2._4_4_ = uVar15;
        auVar2._0_4_ = uVar12;
        auVar2._8_4_ = in_XMM1_Dc;
        auVar2._12_4_ = in_XMM1_Dd;
        auVar21 = blendps(auVar2,_DAT_0241c710,0xd);
        uVar20 = auVar21._0_8_;
        uVar9 = auVar10._0_8_;
      }
      fVar19 = (float)uVar20;
      fVar14 = fVar19 * DAT_0239011c;
      if ((fVar19 == 0.0) && (!NAN(fVar19))) {
        fVar14 = fVar19;
      }
      (**(code **)(*unaff_RDI + 0x618))(uVar9,fVar14);
    }
    pvVar5 = _pthread_getspecific(in_ECX);
    plVar7 = local_40;
    if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
      plVar7 = (longlong *)local_40[(ulonglong)(*(uint *)(lVar6 + 0x154) & 1) + 4];
    }
    iVar4 = (**(code **)(*plVar7 + 0x3a8))(fVar8 + param_1);
    *(int *)((longlong)unaff_RDI + 0x194) = iVar4;
    FUN_01ad3320();
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (local_40 == (longlong *)0x0) {
      iVar4 = -1000000;
    }
    if ((int)unaff_RDI[0x32] != iVar4) {
      *(int *)(unaff_RDI + 0x32) = iVar4;
      (**(code **)(*unaff_RDI + 0x620))();
    }
    FUN_01ad71a0();
    FUN_01b03750();
    FUN_01ad37a0();
    FUN_01ad6540();
  }
  if (local_40 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}


