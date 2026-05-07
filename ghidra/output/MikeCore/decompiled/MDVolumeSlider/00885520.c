// Function: FUN_00885520
// Address: 00885520
// Size: 1078 bytes
// Class: MDVolumeSlider


/* WARNING: Removing unreachable block (ram,0x008855b3) */
/* WARNING: Removing unreachable block (ram,0x008855bf) */
/* WARNING: Removing unreachable block (ram,0x00885702) */
/* WARNING: Removing unreachable block (ram,0x0088570e) */
/* WARNING: Removing unreachable block (ram,0x0088559f) */
/* WARNING: Removing unreachable block (ram,0x008855a8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00885520(float param_1)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  longlong lVar4;
  longlong *unaff_RSI;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  float extraout_XMM0_Db;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  float extraout_XMM0_Db_00;
  undefined1 auVar10 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 unaff_XMM7 [16];
  float fStack_c4;
  uint uStack_bc;
  longlong local_80;
  char local_78;
  float local_34;
  
  lVar6 = *unaff_RSI;
  if (*(int *)(lVar6 + 0xc) < 2) {
    bVar3 = false;
    local_80 = 0;
  }
  else {
    FUN_003167d0();
    if (local_80 == 0) {
      local_80 = 0;
      bVar3 = false;
    }
    else if (local_78 == '\0') {
      FUN_00d50b00();
      bVar3 = true;
    }
    else {
      bVar3 = true;
    }
    lVar6 = *unaff_RSI;
  }
  local_34 = param_1;
  if (lVar6 != 0) {
    if (local_80 == 0) {
      if (0 < *(int *)(lVar6 + 0xc)) {
        lVar4 = 0;
        iVar5 = 0;
        do {
          plVar2 = *(longlong **)(*(longlong *)(lVar6 + 0x10) + lVar4 * 8);
          iVar1 = *(int *)(*unaff_RSI + 0xc);
          (**(code **)(*plVar2 + 0x4d8))();
          (**(code **)(*plVar2 + 0x528))();
          unaff_XMM7 = roundss(unaff_XMM7,ZEXT416((uint)(local_34 / (float)(iVar1 + iVar5))),0xb);
          fVar13 = in_XMM1._4_4_;
          fVar14 = unaff_XMM7._0_4_ + fVar13;
          auVar18._0_4_ = (uint)fVar14 & _DAT_023945e0;
          auVar18._4_4_ = unaff_XMM7._4_4_ & _UNK_023945e4;
          auVar18._8_4_ = unaff_XMM7._8_4_ & _UNK_023945e8;
          auVar18._12_4_ = unaff_XMM7._12_4_ & _UNK_023945ec;
          auVar19._4_12_ = SUB1612(auVar18 | ZEXT416(DAT_02394dc8),4);
          auVar19._0_4_ = SUB164(auVar18 | ZEXT416(DAT_02394dc8),0) + fVar14;
          auVar17._0_12_ = ZEXT812(0);
          auVar17._12_4_ = 0;
          auVar16 = roundss(auVar17,auVar19,0xb);
          uVar7 = -(uint)(auVar16._0_4_ < extraout_XMM0_Db_00);
          fVar15 = (float)(~uVar7 & (uint)unaff_XMM7._0_4_ |
                          (uint)(extraout_XMM0_Db_00 - fVar13) & uVar7);
          fVar14 = fVar13 + fVar15;
          auVar16._0_4_ = (uint)fVar14 & _DAT_023945e0;
          auVar16._4_4_ = (uint)fVar13 & _UNK_023945e4;
          auVar16._8_4_ = in_XMM1._12_4_ & _UNK_023945e8;
          auVar16._12_4_ = in_XMM1._12_4_ & _UNK_023945ec;
          auVar10._4_12_ = SUB1612(auVar16 | ZEXT416(DAT_02394dc8),4);
          auVar10._0_4_ = SUB164(auVar16 | ZEXT416(DAT_02394dc8),0) + fVar14;
          auVar16 = roundss(auVar10,auVar10,0xb);
          in_XMM1 = insertps(in_XMM1,auVar16,0x10);
          (**(code **)(*plVar2 + 0x4d0))();
          local_34 = local_34 - fVar15;
          lVar4 = lVar4 + 1;
          iVar5 = iVar5 + -1;
        } while ((int)lVar4 < *(int *)(lVar6 + 0xc));
      }
    }
    else if (0 < *(int *)(lVar6 + 0xc)) {
      lVar4 = 0;
      iVar5 = 0;
      do {
        plVar2 = *(longlong **)(*(longlong *)(lVar6 + 0x10) + lVar4 * 8);
        iVar1 = *(int *)(*unaff_RSI + 0xc);
        (**(code **)(*plVar2 + 0x4d8))();
        (**(code **)(*plVar2 + 0x528))();
        auVar16 = roundss(ZEXT816(0),ZEXT416((uint)(local_34 / (float)(iVar1 + iVar5))),0xb);
        fStack_c4 = in_XMM1._4_4_;
        uStack_bc = in_XMM1._12_4_;
        fVar13 = auVar16._0_4_;
        auVar11._0_4_ = (uint)(fVar13 + fStack_c4) & _DAT_023945e0;
        auVar11._4_4_ = auVar16._4_4_ & _UNK_023945e4;
        auVar11._8_4_ = auVar16._8_4_ & _UNK_023945e8;
        auVar11._12_4_ = auVar16._12_4_ & _UNK_023945ec;
        auVar12._4_12_ = SUB1612(auVar11 | _DAT_023945f0,4);
        auVar12._0_4_ = SUB164(auVar11 | _DAT_023945f0,0) + fVar13 + fStack_c4;
        auVar16 = roundss(auVar12,auVar12,0xb);
        if (auVar16._0_4_ < extraout_XMM0_Db) {
          FUN_00d23f50();
          fVar13 = extraout_XMM0_Db - fStack_c4;
          auVar8._0_4_ = (uint)(fStack_c4 + fVar13) & _DAT_023945e0;
          auVar8._4_4_ = (uint)fStack_c4 & _UNK_023945e4;
          auVar8._8_4_ = uStack_bc & _UNK_023945e8;
          auVar8._12_4_ = uStack_bc & _UNK_023945ec;
          auVar9._4_12_ = SUB1612(auVar8 | _DAT_023945f0,4);
          auVar9._0_4_ = SUB164(auVar8 | _DAT_023945f0,0) + fStack_c4 + fVar13;
          auVar16 = roundss(ZEXT816(0),auVar9,0xb);
        }
        in_XMM1 = insertps(in_XMM1,auVar16,0x10);
        (**(code **)(*plVar2 + 0x4d0))();
        local_34 = local_34 - fVar13;
        lVar4 = lVar4 + 1;
        iVar5 = iVar5 + -1;
      } while ((int)lVar4 < *(int *)(lVar6 + 0xc));
    }
    FUN_00318710();
  }
  if (local_80 != 0) {
    if ((*(int *)(local_80 + 0xc) != 0) && ((local_34 != 0.0 || (NAN(local_34))))) {
      if ((local_34 != param_1) || (NAN(local_34) || NAN(param_1))) {
        FUN_00885520();
      }
    }
    if (bVar3) {
      FUN_00d50b20();
    }
  }
  return;
}


