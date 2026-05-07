// Function: FUN_003162c0
// Address: 003162c0
// Size: 1076 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x00316359) */
/* WARNING: Removing unreachable block (ram,0x00316365) */
/* WARNING: Removing unreachable block (ram,0x003164a6) */
/* WARNING: Removing unreachable block (ram,0x003164b2) */
/* WARNING: Removing unreachable block (ram,0x00316342) */
/* WARNING: Removing unreachable block (ram,0x0031634b) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float FUN_003162c0(float param_1,int param_2)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  longlong lVar4;
  longlong *unaff_RSI;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  undefined4 uVar8;
  float fVar9;
  undefined8 uVar10;
  float extraout_XMM0_Dc;
  float extraout_XMM0_Dd;
  undefined1 in_XMM1 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  float fVar18;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar24 [16];
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
          uVar8 = (**(code **)(*plVar2 + 0x4d8))();
          fVar18 = (float)(**(code **)(*plVar2 + 0x528))();
          auVar13 = roundss(ZEXT816(0),ZEXT416((uint)(local_34 / (float)(iVar1 + iVar5))),0xb);
          fVar9 = in_XMM1._0_4_;
          fVar21 = auVar13._0_4_ + fVar9;
          auVar19._0_4_ = (uint)fVar21 & _DAT_023945e0;
          auVar19._4_4_ = auVar13._4_4_ & _UNK_023945e4;
          auVar19._8_4_ = auVar13._8_4_ & _UNK_023945e8;
          auVar19._12_4_ = auVar13._12_4_ & _UNK_023945ec;
          auVar20._4_12_ = SUB1612(auVar19 | ZEXT416(DAT_02394dc8),4);
          auVar20._0_4_ = SUB164(auVar19 | ZEXT416(DAT_02394dc8),0) + fVar21;
          auVar16._0_12_ = ZEXT812(0);
          auVar16._12_4_ = 0;
          auVar17 = roundss(auVar16,auVar20,0xb);
          uVar7 = -(uint)(auVar17._0_4_ < fVar18);
          fVar18 = (float)(~uVar7 & (uint)auVar13._0_4_ | (uint)(fVar18 - fVar9) & uVar7);
          fVar9 = fVar9 + fVar18;
          auVar13._0_4_ = (uint)fVar9 & _DAT_023945e0;
          auVar13._4_4_ = in_XMM1._4_4_ & _UNK_023945e4;
          auVar13._8_4_ = in_XMM1._8_4_ & _UNK_023945e8;
          auVar13._12_4_ = in_XMM1._12_4_ & _UNK_023945ec;
          auVar17._4_12_ = SUB1612(auVar13 | ZEXT416(DAT_02394dc8),4);
          auVar17._0_4_ = SUB164(auVar13 | ZEXT416(DAT_02394dc8),0) + fVar9;
          auVar13 = roundss(auVar17,auVar17,0xb);
          in_XMM1 = blendps(auVar13,in_XMM1,0xe);
          (**(code **)(*plVar2 + 0x4d0))(uVar8);
          local_34 = local_34 - fVar18;
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
        uVar8 = (**(code **)(*plVar2 + 0x4d8))();
        uVar10 = (**(code **)(*plVar2 + 0x528))();
        auVar24 = roundss(ZEXT816(0),ZEXT416((uint)(local_34 / (float)(iVar1 + iVar5))),0xb);
        fVar9 = in_XMM1._0_4_;
        fVar18 = auVar24._0_4_ + fVar9;
        auVar11._0_4_ = (uint)fVar18 & _DAT_023945e0;
        auVar11._4_4_ = auVar24._4_4_ & _UNK_023945e4;
        auVar11._8_4_ = auVar24._8_4_ & _UNK_023945e8;
        auVar11._12_4_ = auVar24._12_4_ & _UNK_023945ec;
        auVar12._4_12_ = SUB1612(auVar11 | _DAT_023945f0,4);
        auVar12._0_4_ = SUB164(auVar11 | _DAT_023945f0,0) + fVar18;
        auVar13 = roundss(auVar12,auVar12,0xb);
        if (auVar13._0_4_ < (float)uVar10) {
          FUN_00d23f50();
          fVar18 = (float)uVar10 - fVar9;
          fVar21 = (float)((ulonglong)uVar10 >> 0x20) - in_XMM1._4_4_;
          auVar24._4_4_ = fVar21;
          auVar24._0_4_ = fVar18;
          fVar22 = extraout_XMM0_Dc - in_XMM1._8_4_;
          fVar23 = extraout_XMM0_Dd - in_XMM1._12_4_;
          fVar18 = fVar18 + fVar9;
          auVar14._0_4_ = (uint)fVar18 & _DAT_023945e0;
          auVar14._4_4_ = (uint)fVar21 & _UNK_023945e4;
          auVar14._8_4_ = (uint)fVar22 & _UNK_023945e8;
          auVar14._12_4_ = (uint)fVar23 & _UNK_023945ec;
          auVar15._4_12_ = SUB1612(auVar14 | _DAT_023945f0,4);
          auVar15._0_4_ = SUB164(auVar14 | _DAT_023945f0,0) + fVar18;
          auVar13 = roundss(auVar15,auVar15,0xb);
          auVar24._8_4_ = fVar22;
          auVar24._12_4_ = fVar23;
        }
        in_XMM1 = blendps(in_XMM1,auVar13,1);
        (**(code **)(*plVar2 + 0x4d0))(uVar8);
        local_34 = local_34 - auVar24._0_4_;
        lVar4 = lVar4 + 1;
        iVar5 = iVar5 + -1;
      } while ((int)lVar4 < *(int *)(lVar6 + 0xc));
    }
    FUN_00318710();
  }
  if (local_80 != 0) {
    if ((*(int *)(local_80 + 0xc) != 0) && ((local_34 != 0.0 || (NAN(local_34))))) {
      if ((local_34 != param_1) || (NAN(local_34) || NAN(param_1))) {
        local_34 = (float)FUN_003162c0(local_34,param_2 + 1);
      }
    }
    if (bVar3) {
      FUN_00d50b20();
    }
  }
  return local_34;
}


