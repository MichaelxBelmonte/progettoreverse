// Function: FUN_00885a30
// Address: 00885a30
// Size: 1107 bytes
// Class: MDVolumeSlider


/* WARNING: Removing unreachable block (ram,0x00885ac3) */
/* WARNING: Removing unreachable block (ram,0x00885acf) */
/* WARNING: Removing unreachable block (ram,0x00885c12) */
/* WARNING: Removing unreachable block (ram,0x00885c1e) */
/* WARNING: Removing unreachable block (ram,0x00885aaf) */
/* WARNING: Removing unreachable block (ram,0x00885ab8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00885a30(float param_1)

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
  undefined1 auVar11 [16];
  float fVar12;
  float fVar13;
  undefined1 in_XMM1 [16];
  float fVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [12];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
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
          (**(code **)(*plVar2 + 0x530))();
          unaff_XMM7 = roundss(unaff_XMM7,ZEXT416((uint)(local_34 / (float)(iVar1 + iVar5))),0xb);
          fVar13 = in_XMM1._4_4_;
          fVar12 = unaff_XMM7._0_4_ + fVar13;
          auVar20._0_4_ = (uint)fVar12 & _DAT_023945e0;
          auVar20._4_4_ = unaff_XMM7._4_4_ & _UNK_023945e4;
          auVar20._8_4_ = unaff_XMM7._8_4_ & _UNK_023945e8;
          auVar20._12_4_ = unaff_XMM7._12_4_ & _UNK_023945ec;
          auVar21._4_12_ = SUB1612(auVar20 | ZEXT416(DAT_02394dc8),4);
          auVar21._0_4_ = SUB164(auVar20 | ZEXT416(DAT_02394dc8),0) + fVar12;
          auVar17._0_12_ = ZEXT812(0);
          auVar17._12_4_ = 0;
          auVar17 = roundss(auVar17,auVar21,0xb);
          fVar12 = 0.0;
          if (0.0 <= extraout_XMM0_Db_00 - fVar13) {
            fVar12 = extraout_XMM0_Db_00 - fVar13;
          }
          uVar7 = -(uint)(extraout_XMM0_Db_00 < auVar17._0_4_);
          fVar12 = (float)(~uVar7 & (uint)unaff_XMM7._0_4_ | (uint)fVar12 & uVar7);
          fVar14 = fVar13 + fVar12;
          auVar10._0_4_ = (uint)fVar14 & _DAT_023945e0;
          auVar10._4_4_ = (uint)fVar13 & _UNK_023945e4;
          auVar10._8_4_ = in_XMM1._12_4_ & _UNK_023945e8;
          auVar10._12_4_ = in_XMM1._12_4_ & _UNK_023945ec;
          auVar11._4_12_ = SUB1612(auVar10 | ZEXT416(DAT_02394dc8),4);
          auVar11._0_4_ = SUB164(auVar10 | ZEXT416(DAT_02394dc8),0) + fVar14;
          auVar17 = roundss(auVar11,auVar11,0xb);
          in_XMM1 = insertps(in_XMM1,auVar17,0x10);
          (**(code **)(*plVar2 + 0x4d0))();
          local_34 = local_34 - fVar12;
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
        (**(code **)(*plVar2 + 0x530))();
        auVar19 = roundss(ZEXT816(0),ZEXT416((uint)(local_34 / (float)(iVar1 + iVar5))),0xb);
        fStack_c4 = in_XMM1._4_4_;
        uStack_bc = in_XMM1._12_4_;
        fVar12 = auVar19._0_4_ + fStack_c4;
        auVar15._0_4_ = (uint)fVar12 & _DAT_023945e0;
        auVar15._4_4_ = auVar19._4_4_ & _UNK_023945e4;
        auVar15._8_4_ = auVar19._8_4_ & _UNK_023945e8;
        auVar15._12_4_ = auVar19._12_4_ & _UNK_023945ec;
        auVar16._4_12_ = SUB1612(auVar15 | _DAT_023945f0,4);
        auVar16._0_4_ = SUB164(auVar15 | _DAT_023945f0,0) + fVar12;
        auVar17 = roundss(auVar16,auVar16,0xb);
        if (extraout_XMM0_Db < auVar17._0_4_) {
          FUN_00d23f50();
          auVar18 = ZEXT812(0);
          if (0.0 <= extraout_XMM0_Db - fStack_c4) {
            auVar18._4_8_ = 0;
            auVar18._0_4_ = extraout_XMM0_Db - fStack_c4;
          }
          auVar19._12_4_ = 0;
          auVar19._0_12_ = auVar18;
          fVar12 = fStack_c4 + auVar18._0_4_;
          auVar8._0_4_ = (uint)fVar12 & _DAT_023945e0;
          auVar8._4_4_ = (uint)fStack_c4 & _UNK_023945e4;
          auVar8._8_4_ = uStack_bc & _UNK_023945e8;
          auVar8._12_4_ = uStack_bc & _UNK_023945ec;
          auVar9._4_12_ = SUB1612(auVar8 | _DAT_023945f0,4);
          auVar9._0_4_ = SUB164(auVar8 | _DAT_023945f0,0) + fVar12;
          auVar17 = roundss(ZEXT816(0),auVar9,0xb);
        }
        in_XMM1 = insertps(in_XMM1,auVar17,0x10);
        (**(code **)(*plVar2 + 0x4d0))();
        local_34 = local_34 - auVar19._0_4_;
        lVar4 = lVar4 + 1;
        iVar5 = iVar5 + -1;
      } while ((int)lVar4 < *(int *)(lVar6 + 0xc));
    }
    FUN_00318710();
  }
  if (local_80 != 0) {
    if ((*(int *)(local_80 + 0xc) != 0) && ((local_34 != 0.0 || (NAN(local_34))))) {
      if ((local_34 != param_1) || (NAN(local_34) || NAN(param_1))) {
        FUN_00885a30();
      }
    }
    if (bVar3) {
      FUN_00d50b20();
    }
  }
  return;
}


