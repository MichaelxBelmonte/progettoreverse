// Function: FUN_00316de0
// Address: 00316de0
// Size: 1096 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x00316e79) */
/* WARNING: Removing unreachable block (ram,0x00316e85) */
/* WARNING: Removing unreachable block (ram,0x00316fc6) */
/* WARNING: Removing unreachable block (ram,0x00316fd2) */
/* WARNING: Removing unreachable block (ram,0x00316e62) */
/* WARNING: Removing unreachable block (ram,0x00316e6b) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float FUN_00316de0(float param_1,int param_2)

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
  float fVar10;
  undefined1 in_XMM1 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  float fVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [12];
  undefined1 auVar21 [16];
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
          fVar17 = (float)(**(code **)(*plVar2 + 0x530))();
          auVar14 = roundss(ZEXT816(0),ZEXT416((uint)(local_34 / (float)(iVar1 + iVar5))),0xb);
          fVar9 = in_XMM1._0_4_;
          fVar10 = auVar14._0_4_ + fVar9;
          auVar19._0_4_ = (uint)fVar10 & _DAT_023945e0;
          auVar19._4_4_ = auVar14._4_4_ & _UNK_023945e4;
          auVar19._8_4_ = auVar14._8_4_ & _UNK_023945e8;
          auVar19._12_4_ = auVar14._12_4_ & _UNK_023945ec;
          auVar18._4_12_ = SUB1612(auVar19 | ZEXT416(DAT_02394dc8),4);
          auVar18._0_4_ = SUB164(auVar19 | ZEXT416(DAT_02394dc8),0) + fVar10;
          auVar19 = roundss(auVar18,auVar18,0xb);
          uVar7 = -(uint)(auVar19._0_4_ < fVar17);
          fVar10 = 0.0;
          if (fVar17 - fVar9 <= 0.0) {
            fVar10 = fVar17 - fVar9;
          }
          fVar10 = (float)(~uVar7 & (uint)auVar14._0_4_ | (uint)fVar10 & uVar7);
          fVar9 = fVar9 + fVar10;
          auVar14._0_4_ = (uint)fVar9 & _DAT_023945e0;
          auVar14._4_4_ = in_XMM1._4_4_ & _UNK_023945e4;
          auVar14._8_4_ = in_XMM1._8_4_ & _UNK_023945e8;
          auVar14._12_4_ = in_XMM1._12_4_ & _UNK_023945ec;
          auVar11._4_12_ = SUB1612(auVar14 | ZEXT416(DAT_02394dc8),4);
          auVar11._0_4_ = SUB164(auVar14 | ZEXT416(DAT_02394dc8),0) + fVar9;
          auVar14 = roundss(auVar11,auVar11,0xb);
          in_XMM1 = blendps(auVar14,in_XMM1,0xe);
          (**(code **)(*plVar2 + 0x4d0))(uVar8);
          local_34 = local_34 - fVar10;
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
        fVar9 = (float)(**(code **)(*plVar2 + 0x530))();
        auVar21 = roundss(ZEXT816(0),ZEXT416((uint)(local_34 / (float)(iVar1 + iVar5))),0xb);
        fVar10 = in_XMM1._0_4_;
        fVar17 = auVar21._0_4_ + fVar10;
        auVar12._0_4_ = (uint)fVar17 & _DAT_023945e0;
        auVar12._4_4_ = auVar21._4_4_ & _UNK_023945e4;
        auVar12._8_4_ = auVar21._8_4_ & _UNK_023945e8;
        auVar12._12_4_ = auVar21._12_4_ & _UNK_023945ec;
        auVar13._4_12_ = SUB1612(auVar12 | _DAT_023945f0,4);
        auVar13._0_4_ = SUB164(auVar12 | _DAT_023945f0,0) + fVar17;
        auVar14 = roundss(auVar13,auVar13,0xb);
        if (auVar14._0_4_ < fVar9) {
          FUN_00d23f50();
          auVar20 = ZEXT812(0);
          if (fVar9 - fVar10 <= 0.0) {
            auVar20._4_8_ = 0;
            auVar20._0_4_ = fVar9 - fVar10;
          }
          auVar21._12_4_ = 0;
          auVar21._0_12_ = auVar20;
          fVar10 = fVar10 + auVar20._0_4_;
          auVar15._0_4_ = (uint)fVar10 & _DAT_023945e0;
          auVar15._4_4_ = in_XMM1._4_4_ & _UNK_023945e4;
          auVar15._8_4_ = in_XMM1._8_4_ & _UNK_023945e8;
          auVar15._12_4_ = in_XMM1._12_4_ & _UNK_023945ec;
          auVar16._4_12_ = SUB1612(auVar15 | _DAT_023945f0,4);
          auVar16._0_4_ = SUB164(auVar15 | _DAT_023945f0,0) + fVar10;
          auVar14 = roundss(auVar16,auVar16,0xb);
        }
        in_XMM1 = blendps(in_XMM1,auVar14,1);
        (**(code **)(*plVar2 + 0x4d0))(uVar8);
        local_34 = local_34 - auVar21._0_4_;
        lVar4 = lVar4 + 1;
        iVar5 = iVar5 + -1;
      } while ((int)lVar4 < *(int *)(lVar6 + 0xc));
    }
    FUN_00318710();
  }
  if (local_80 != 0) {
    if ((*(int *)(local_80 + 0xc) != 0) && ((local_34 != 0.0 || (NAN(local_34))))) {
      if ((local_34 != param_1) || (NAN(local_34) || NAN(param_1))) {
        local_34 = (float)FUN_00316de0(local_34,param_2 + 1);
      }
    }
    if (bVar3) {
      FUN_00d50b20();
    }
  }
  return local_34;
}


