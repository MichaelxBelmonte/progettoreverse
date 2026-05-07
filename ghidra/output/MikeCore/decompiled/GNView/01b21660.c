// Function: FUN_01b21660
// Address: 01b21660
// Size: 1960 bytes
// Class: GNView


/* WARNING: Removing unreachable block (ram,0x01b21d83) */
/* WARNING: Removing unreachable block (ram,0x01b21d8f) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b21660(double param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  char cVar3;
  int iVar4;
  longlong *unaff_RDI;
  float fVar5;
  undefined8 uVar6;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined8 extraout_XMM0_Qb_01;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 local_58 [16];
  longlong local_30;
  char local_28;
  
  if ((((char)unaff_RDI[0x41] != '\0') || (*(char *)((longlong)unaff_RDI + 0x209) != '\0')) ||
     (*(char *)((longlong)unaff_RDI + 0x20a) != '\0')) {
    auVar10._0_8_ = (double)unaff_RDI[0x40] - param_1;
    auVar10._8_8_ = 0;
    unaff_RDI[0x40] = (longlong)auVar10._0_8_;
    if (auVar10._0_8_ <= 0.0) {
      FUN_01f27fe0();
      (**(code **)(unaff_RDI[0x2d] + 0x10))();
      FUN_00d50b00();
      FUN_01f474f0();
      if (unaff_RDI + 0x2d != (longlong *)0x0) {
        (**(code **)(unaff_RDI[0x2d] + 0x10))();
        FUN_00d50b20();
      }
      if ((local_28 != '\0') && (local_30 != 0)) {
        FUN_00d50b20();
      }
      iVar4 = *(int *)((longlong)unaff_RDI + 0x284);
      uVar6 = DAT_023dccec;
      if (*(char *)((longlong)unaff_RDI + 0x20a) == '\0') {
        if ((iVar4 != 1) && (iVar4 != 0)) {
          uVar6 = FUN_01e3f820();
          auVar9._8_8_ = extraout_XMM0_Qb_01;
          auVar9._0_8_ = uVar6;
          if (*(int *)((longlong)unaff_RDI + 0x284) == 3) {
            auVar7 = auVar10;
            FUN_01e3f820();
            auVar7 = blendps(auVar7,_DAT_0241c700,0xd);
          }
          else {
            auVar7._8_8_ = 0;
            auVar7._0_8_ = DAT_023dccf4;
          }
          auVar8._0_4_ = auVar7._0_4_ + (float)uVar6;
          auVar8._4_4_ = auVar7._4_4_ + (float)((ulonglong)uVar6 >> 0x20);
          auVar8._8_4_ = auVar7._8_4_ + (float)extraout_XMM0_Qb_01;
          auVar8._12_4_ = auVar7._12_4_ + (float)((ulonglong)extraout_XMM0_Qb_01 >> 0x20);
          auVar9 = blendps(auVar8,auVar9,2);
          blendps(auVar10,_DAT_0241c710,0xd);
          uVar6 = auVar9._0_8_;
        }
      }
      else if (iVar4 == 3) {
        uVar6 = FUN_01e3f820();
        blendps(auVar10,_DAT_0241c700,0xd);
      }
      (**(code **)(*unaff_RDI + 0x618))(uVar6);
    }
  }
  fVar5 = *(float *)((longlong)unaff_RDI + 0x1e4);
  if ((fVar5 != 0.0) || (NAN(fVar5))) {
    if ((float)(_DAT_02390140 & (uint)fVar5) <= DAT_02390124) {
      FUN_01f27fe0();
      (**(code **)(unaff_RDI[0x2d] + 0x10))();
      FUN_00d50b00();
      FUN_01f474f0();
      if (unaff_RDI + 0x2d != (longlong *)0x0) {
        (**(code **)(unaff_RDI[0x2d] + 0x10))();
        FUN_00d50b20();
      }
      if ((local_28 != '\0') && (local_30 != 0)) {
        FUN_00d50b20();
      }
      *(undefined4 *)((longlong)unaff_RDI + 0x1e4) = 0;
      (**(code **)(*unaff_RDI + 0x620))();
      FUN_01b08e50();
      *(undefined1 *)((longlong)unaff_RDI + 0x1e1) = 0;
      return;
    }
    *(float *)((longlong)unaff_RDI + 0x1e4) = DAT_02390118 * fVar5 + fVar5;
    (**(code **)(*unaff_RDI + 0x620))();
  }
  fVar5 = *(float *)(unaff_RDI + 0x3f);
  if ((fVar5 != 0.0) || (NAN(fVar5))) {
    if ((fVar5 == DAT_02390124) && (!NAN(fVar5) && !NAN(DAT_02390124))) {
      *(undefined4 *)(unaff_RDI + 0x3f) = 0x3f733333;
      fVar5 = DAT_02394234;
    }
    if (DAT_024119e0 < (double)fVar5) {
      fVar5 = fVar5 - ((DAT_02390124 - fVar5) + (DAT_02390124 - fVar5));
    }
    else {
      fVar5 = fVar5 * DAT_0239011c;
    }
    *(float *)(unaff_RDI + 0x3f) = fVar5;
    local_58._0_8_ = DAT_023934c8;
    local_58._8_8_ = 0;
    if ((double)fVar5 < DAT_023934c8) {
      *(undefined4 *)(unaff_RDI + 0x3f) = 0;
      FUN_01f27fe0();
      (**(code **)(unaff_RDI[0x2d] + 0x10))();
      FUN_00d50b00();
      FUN_01f474f0();
      if (unaff_RDI + 0x2d != (longlong *)0x0) {
        (**(code **)(unaff_RDI[0x2d] + 0x10))();
        FUN_00d50b20();
      }
      if ((local_28 != '\0') && (local_30 != 0)) {
        FUN_00d50b20();
      }
    }
    FUN_01adabe0();
    FUN_01adad50();
    FUN_00d052e0();
    if (*(int *)((longlong)unaff_RDI + 0x284) != 0) {
      auVar10 = local_58;
      uVar6 = FUN_01e3f820();
      fVar5 = (float)((ulonglong)extraout_XMM0_Qb >> 0x20);
      iVar4 = *(int *)((longlong)unaff_RDI + 0x284);
      if (iVar4 == 3) {
        auVar9 = auVar10;
        FUN_01e3f820();
        auVar11 = blendps(auVar9,_DAT_0241c700,0xd);
        iVar4 = *(int *)((longlong)unaff_RDI + 0x284);
      }
      else {
        auVar11._8_8_ = 0;
        auVar11._0_8_ = DAT_023dccf4;
      }
      if ((iVar4 == 1) || (iVar4 == 0)) {
        auVar15._8_8_ = 0;
        auVar15._0_8_ = DAT_023dccf4;
      }
      else {
        FUN_01e3f820();
        if (*(int *)((longlong)unaff_RDI + 0x284) == 3) {
          FUN_01e3f820();
        }
        auVar15 = blendps(local_58,_DAT_0241c710,0xd);
      }
      auVar12._0_4_ = auVar11._0_4_ + (float)uVar6 + auVar15._0_4_;
      auVar12._4_4_ = auVar11._4_4_ + (float)((ulonglong)uVar6 >> 0x20) + auVar15._4_4_;
      auVar12._8_4_ = auVar11._8_4_ + (float)extraout_XMM0_Qb + auVar15._8_4_;
      auVar12._12_4_ = auVar11._12_4_ + fVar5 + auVar15._12_4_;
      auVar1._8_4_ = (float)extraout_XMM0_Qb;
      auVar1._0_8_ = uVar6;
      auVar1._12_4_ = fVar5;
      blendps(auVar12,auVar1,2);
      blendps(auVar10,_DAT_0241c720,0xd);
    }
    FUN_00d052e0();
    (**(code **)(*unaff_RDI + 0x618))();
  }
  fVar5 = *(float *)((longlong)unaff_RDI + 0x1fc);
  if ((fVar5 != 0.0) || (NAN(fVar5))) {
    fVar5 = fVar5 * DAT_0239011c;
    *(float *)((longlong)unaff_RDI + 0x1fc) = fVar5;
    local_58._0_8_ = DAT_023934c8;
    local_58._8_8_ = 0;
    if ((double)fVar5 < DAT_023934c8) {
      *(undefined4 *)((longlong)unaff_RDI + 0x1fc) = 0;
      FUN_01f27fe0();
      (**(code **)(unaff_RDI[0x2d] + 0x10))();
      FUN_00d50b00();
      FUN_01f474f0();
      if (unaff_RDI + 0x2d != (longlong *)0x0) {
        (**(code **)(unaff_RDI[0x2d] + 0x10))();
        FUN_00d50b20();
      }
      if ((local_28 != '\0') && (local_30 != 0)) {
        FUN_00d50b20();
      }
    }
    FUN_01adabe0();
    FUN_01adad50();
    FUN_00d052e0();
    if (*(int *)((longlong)unaff_RDI + 0x284) != 0) {
      auVar10 = local_58;
      uVar6 = FUN_01e3f820();
      fVar5 = (float)((ulonglong)extraout_XMM0_Qb_00 >> 0x20);
      iVar4 = *(int *)((longlong)unaff_RDI + 0x284);
      if (iVar4 == 3) {
        auVar9 = auVar10;
        FUN_01e3f820();
        auVar13 = blendps(auVar9,_DAT_0241c700,0xd);
        iVar4 = *(int *)((longlong)unaff_RDI + 0x284);
      }
      else {
        auVar13._8_8_ = 0;
        auVar13._0_8_ = DAT_023dccf4;
      }
      if ((iVar4 == 1) || (iVar4 == 0)) {
        auVar16._8_8_ = 0;
        auVar16._0_8_ = DAT_023dccf4;
      }
      else {
        FUN_01e3f820();
        if (*(int *)((longlong)unaff_RDI + 0x284) == 3) {
          FUN_01e3f820();
        }
        auVar16 = blendps(local_58,_DAT_0241c710,0xd);
      }
      auVar14._0_4_ = auVar13._0_4_ + (float)uVar6 + auVar16._0_4_;
      auVar14._4_4_ = auVar13._4_4_ + (float)((ulonglong)uVar6 >> 0x20) + auVar16._4_4_;
      auVar14._8_4_ = auVar13._8_4_ + (float)extraout_XMM0_Qb_00 + auVar16._8_4_;
      auVar14._12_4_ = auVar13._12_4_ + fVar5 + auVar16._12_4_;
      auVar2._8_4_ = (float)extraout_XMM0_Qb_00;
      auVar2._0_8_ = uVar6;
      auVar2._12_4_ = fVar5;
      blendps(auVar14,auVar2,2);
      blendps(auVar10,_DAT_0241c720,0xd);
    }
    FUN_00d052e0();
    (**(code **)(*unaff_RDI + 0x618))();
  }
  if ((char)unaff_RDI[0x5a] != '\0') {
    fVar5 = (float)FUN_01aade90();
    if ((DAT_02390124 <= fVar5) || (cVar3 = FUN_01aa7eb0(), cVar3 == '\0')) {
      (**(code **)(*unaff_RDI + 0x9b8))();
    }
    else if ((longlong *)unaff_RDI[0x5d] != (longlong *)0x0) {
      (**(code **)(*(longlong *)unaff_RDI[0x5d] + 0x928))();
    }
  }
  return;
}


