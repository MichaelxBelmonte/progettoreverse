// Function: FUN_01b03750
// Address: 01b03750
// Size: 1183 bytes
// Class: MUScalePitchSystem


/* WARNING: Removing unreachable block (ram,0x01b037e6) */
/* WARNING: Removing unreachable block (ram,0x01b037ef) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b03750(pthread_key_t param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  longlong lVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  void *pvVar8;
  int iVar9;
  longlong *unaff_RDI;
  bool bVar10;
  undefined8 uVar11;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined8 extraout_XMM0_Qb_00;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined8 extraout_XMM0_Qb_01;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  float fVar19;
  undefined1 in_XMM1 [16];
  undefined1 auVar20 [16];
  longlong local_48;
  char local_40;
  
  FUN_01ad3cb0();
  if ((local_40 == '\0') && (local_48 != 0)) {
    FUN_00d50b00();
  }
  pvVar8 = _pthread_getspecific(param_1);
  if (pvVar8 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0173b790();
  if ((local_40 == '\0') && (local_48 != 0)) {
    FUN_00d50b00();
  }
  pvVar8 = _pthread_getspecific(param_1);
  if (pvVar8 != (void *)0x0) {
    FUN_00e8b990();
  }
  cVar5 = FUN_01770870();
  if (((cVar5 != '\0') && ((char)unaff_RDI[0x31] == '\0')) &&
     (iVar9 = (int)unaff_RDI[0x32], iVar9 != -1000000)) {
    while( true ) {
      iVar7 = *(int *)((longlong)unaff_RDI + 0x184);
      pvVar8 = _pthread_getspecific(param_1);
      if (pvVar8 != (void *)0x0) {
        FUN_00e8b990();
      }
      iVar6 = FUN_01770c70();
      if (iVar9 - iVar7 < iVar6) break;
      iVar9 = *(int *)((longlong)unaff_RDI + 0x184);
      pvVar8 = _pthread_getspecific(param_1);
      if (pvVar8 != (void *)0x0) {
        FUN_00e8b990();
      }
      iVar7 = FUN_01770c70();
      iVar7 = iVar7 + iVar9;
      if (*(int *)((longlong)unaff_RDI + 0x184) != iVar7) {
        *(int *)((longlong)unaff_RDI + 0x184) = iVar7;
        if ((*(int *)((longlong)unaff_RDI + 0x284) == 1) ||
           (*(int *)((longlong)unaff_RDI + 0x284) == 0)) {
          fVar19 = (float)DAT_023dccf4;
          bVar10 = NAN(fVar19) || NAN(DAT_0239424c);
          auVar20._8_8_ = 0;
          auVar20._0_8_ = DAT_023dccf4;
          in_XMM1._0_4_ = fVar19 * DAT_0239011c;
          in_XMM1._4_4_ = (int)(DAT_023dccf4 >> 0x20);
          in_XMM1._8_8_ = 0;
          uVar11 = DAT_023dccec;
          if (fVar19 == DAT_0239424c) goto LAB_01b039e8;
        }
        else {
          uVar11 = FUN_01e3f820();
          if (*(int *)((longlong)unaff_RDI + 0x284) == 3) {
            auVar18 = in_XMM1;
            FUN_01e3f820();
            auVar12 = blendps(auVar18,_DAT_0241c700,0xd);
          }
          else {
            auVar12._8_8_ = 0;
            auVar12._0_8_ = DAT_023dccf4;
          }
          auVar1._8_8_ = extraout_XMM0_Qb;
          auVar1._0_8_ = uVar11;
          auVar13._0_4_ = auVar12._0_4_ + (float)uVar11;
          auVar13._4_4_ = auVar12._4_4_ + (float)((ulonglong)uVar11 >> 0x20);
          auVar13._8_4_ = auVar12._8_4_ + (float)extraout_XMM0_Qb;
          auVar13._12_4_ = auVar12._12_4_ + (float)((ulonglong)extraout_XMM0_Qb >> 0x20);
          auVar18 = blendps(auVar13,auVar1,2);
          uVar11 = auVar18._0_8_;
          auVar20 = blendps(in_XMM1,_DAT_0241c710,0xd);
          fVar19 = auVar20._0_4_;
          bVar10 = NAN(fVar19) || NAN(DAT_0239424c);
          in_XMM1._4_12_ = auVar20._4_12_;
          in_XMM1._0_4_ = fVar19 * DAT_0239011c;
          if (fVar19 == DAT_0239424c) {
LAB_01b039e8:
            if (!bVar10) {
              in_XMM1 = auVar20;
            }
          }
        }
        (**(code **)(*unaff_RDI + 0x618))(uVar11);
      }
      iVar9 = (int)unaff_RDI[0x32];
    }
    while( true ) {
      iVar9 = *(int *)((longlong)unaff_RDI + 0x184);
      lVar4 = unaff_RDI[0x32];
      pvVar8 = _pthread_getspecific(param_1);
      if (pvVar8 != (void *)0x0) {
        FUN_00e8b990();
      }
      iVar7 = FUN_01770c70();
      if (iVar9 - (int)lVar4 < iVar7) break;
      iVar9 = *(int *)((longlong)unaff_RDI + 0x184);
      pvVar8 = _pthread_getspecific(param_1);
      if (pvVar8 != (void *)0x0) {
        FUN_00e8b990();
      }
      iVar7 = FUN_01770c70();
      iVar9 = iVar9 - iVar7;
      if (*(int *)((longlong)unaff_RDI + 0x184) != iVar9) {
        *(int *)((longlong)unaff_RDI + 0x184) = iVar9;
        if ((*(int *)((longlong)unaff_RDI + 0x284) == 1) ||
           (*(int *)((longlong)unaff_RDI + 0x284) == 0)) {
          fVar19 = (float)DAT_023dccf4;
          bVar10 = NAN(fVar19) || NAN(DAT_0239424c);
          auVar18._8_8_ = 0;
          auVar18._0_8_ = DAT_023dccf4;
          in_XMM1._0_4_ = fVar19 * DAT_0239011c;
          in_XMM1._4_4_ = (int)(DAT_023dccf4 >> 0x20);
          in_XMM1._8_8_ = 0;
          uVar11 = DAT_023dccec;
          if (fVar19 == DAT_0239424c) goto LAB_01b03b68;
        }
        else {
          uVar11 = FUN_01e3f820();
          if (*(int *)((longlong)unaff_RDI + 0x284) == 3) {
            auVar18 = in_XMM1;
            FUN_01e3f820();
            auVar14 = blendps(auVar18,_DAT_0241c700,0xd);
          }
          else {
            auVar14._8_8_ = 0;
            auVar14._0_8_ = DAT_023dccf4;
          }
          auVar2._8_8_ = extraout_XMM0_Qb_00;
          auVar2._0_8_ = uVar11;
          auVar15._0_4_ = auVar14._0_4_ + (float)uVar11;
          auVar15._4_4_ = auVar14._4_4_ + (float)((ulonglong)uVar11 >> 0x20);
          auVar15._8_4_ = auVar14._8_4_ + (float)extraout_XMM0_Qb_00;
          auVar15._12_4_ = auVar14._12_4_ + (float)((ulonglong)extraout_XMM0_Qb_00 >> 0x20);
          auVar18 = blendps(auVar15,auVar2,2);
          uVar11 = auVar18._0_8_;
          auVar18 = blendps(in_XMM1,_DAT_0241c710,0xd);
          fVar19 = auVar18._0_4_;
          bVar10 = NAN(fVar19) || NAN(DAT_0239424c);
          in_XMM1._4_12_ = auVar18._4_12_;
          in_XMM1._0_4_ = fVar19 * DAT_0239011c;
          if (fVar19 == DAT_0239424c) {
LAB_01b03b68:
            if (!bVar10) {
              in_XMM1 = auVar18;
            }
          }
        }
        (**(code **)(*unaff_RDI + 0x618))(uVar11);
      }
    }
  }
  uVar11 = DAT_023dccec;
  if ((*(int *)((longlong)unaff_RDI + 0x284) != 1) && (*(int *)((longlong)unaff_RDI + 0x284) != 0))
  {
    uVar11 = FUN_01e3f820();
    if (*(int *)((longlong)unaff_RDI + 0x284) == 3) {
      auVar18 = in_XMM1;
      FUN_01e3f820();
      auVar16 = blendps(auVar18,_DAT_0241c700,0xd);
    }
    else {
      auVar16._8_8_ = 0;
      auVar16._0_8_ = DAT_023dccf4;
    }
    auVar3._8_8_ = extraout_XMM0_Qb_01;
    auVar3._0_8_ = uVar11;
    auVar17._0_4_ = auVar16._0_4_ + (float)uVar11;
    auVar17._4_4_ = auVar16._4_4_ + (float)((ulonglong)uVar11 >> 0x20);
    auVar17._8_4_ = auVar16._8_4_ + (float)extraout_XMM0_Qb_01;
    auVar17._12_4_ = auVar16._12_4_ + (float)((ulonglong)extraout_XMM0_Qb_01 >> 0x20);
    auVar18 = blendps(auVar17,auVar3,2);
    blendps(in_XMM1,_DAT_0241c710,0xd);
    uVar11 = auVar18._0_8_;
  }
  (**(code **)(*unaff_RDI + 0x618))(uVar11);
  if (local_48 != 0) {
    FUN_00d50b20();
    FUN_00d50b20();
  }
  return;
}


