// Function: FUN_003168c0
// Address: 003168c0
// Size: 1102 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x00316959) */
/* WARNING: Removing unreachable block (ram,0x00316965) */
/* WARNING: Removing unreachable block (ram,0x00316aa6) */
/* WARNING: Removing unreachable block (ram,0x00316ab2) */
/* WARNING: Removing unreachable block (ram,0x00316942) */
/* WARNING: Removing unreachable block (ram,0x0031694b) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_003168c0(float param_1)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  longlong lVar4;
  longlong *unaff_RSI;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  undefined1 in_XMM1 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  float fVar19;
  undefined1 auVar20 [12];
  undefined1 auVar21 [16];
  undefined1 unaff_XMM6 [16];
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
          fVar19 = (float)(**(code **)(*plVar2 + 0x530))();
          unaff_XMM6 = roundss(unaff_XMM6,ZEXT416((uint)(local_34 / (float)(iVar1 + iVar5))),0xb);
          fVar8 = in_XMM1._0_4_;
          fVar9 = unaff_XMM6._0_4_ + fVar8;
          auVar17._0_4_ = (uint)fVar9 & _DAT_023945e0;
          auVar17._4_4_ = unaff_XMM6._4_4_ & _UNK_023945e4;
          auVar17._8_4_ = unaff_XMM6._8_4_ & _UNK_023945e8;
          auVar17._12_4_ = unaff_XMM6._12_4_ & _UNK_023945ec;
          auVar18._4_12_ = SUB1612(auVar17 | ZEXT416(DAT_02394dc8),4);
          auVar18._0_4_ = SUB164(auVar17 | ZEXT416(DAT_02394dc8),0) + fVar9;
          auVar14._0_12_ = ZEXT812(0);
          auVar14._12_4_ = 0;
          auVar14 = roundss(auVar14,auVar18,0xb);
          fVar9 = 0.0;
          if (0.0 <= fVar19 - fVar8) {
            fVar9 = fVar19 - fVar8;
          }
          uVar7 = -(uint)(fVar19 < auVar14._0_4_);
          fVar9 = (float)(~uVar7 & (uint)unaff_XMM6._0_4_ | (uint)fVar9 & uVar7);
          fVar8 = fVar8 + fVar9;
          auVar10._0_4_ = (uint)fVar8 & _DAT_023945e0;
          auVar10._4_4_ = in_XMM1._4_4_ & _UNK_023945e4;
          auVar10._8_4_ = in_XMM1._8_4_ & _UNK_023945e8;
          auVar10._12_4_ = in_XMM1._12_4_ & _UNK_023945ec;
          auVar11._4_12_ = SUB1612(auVar10 | ZEXT416(DAT_02394dc8),4);
          auVar11._0_4_ = SUB164(auVar10 | ZEXT416(DAT_02394dc8),0) + fVar8;
          auVar14 = roundss(auVar11,auVar11,0xb);
          blendps(auVar14,in_XMM1,0xe);
          (**(code **)(*plVar2 + 0x4d0))();
          local_34 = local_34 - fVar9;
          in_XMM1 = ZEXT416((uint)local_34);
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
        fVar8 = (float)(**(code **)(*plVar2 + 0x530))();
        auVar21 = roundss(ZEXT816(0),ZEXT416((uint)(local_34 / (float)(iVar1 + iVar5))),0xb);
        fVar9 = in_XMM1._0_4_;
        fVar19 = auVar21._0_4_ + fVar9;
        auVar12._0_4_ = (uint)fVar19 & _DAT_023945e0;
        auVar12._4_4_ = auVar21._4_4_ & _UNK_023945e4;
        auVar12._8_4_ = auVar21._8_4_ & _UNK_023945e8;
        auVar12._12_4_ = auVar21._12_4_ & _UNK_023945ec;
        auVar13._4_12_ = SUB1612(auVar12 | _DAT_023945f0,4);
        auVar13._0_4_ = SUB164(auVar12 | _DAT_023945f0,0) + fVar19;
        auVar14 = roundss(auVar13,auVar13,0xb);
        if (fVar8 < auVar14._0_4_) {
          FUN_00d23f50();
          auVar20 = ZEXT812(0);
          if (0.0 <= fVar8 - fVar9) {
            auVar20._4_8_ = 0;
            auVar20._0_4_ = fVar8 - fVar9;
          }
          auVar21._12_4_ = 0;
          auVar21._0_12_ = auVar20;
          fVar9 = fVar9 + auVar20._0_4_;
          auVar15._0_4_ = (uint)fVar9 & _DAT_023945e0;
          auVar15._4_4_ = in_XMM1._4_4_ & _UNK_023945e4;
          auVar15._8_4_ = in_XMM1._8_4_ & _UNK_023945e8;
          auVar15._12_4_ = in_XMM1._12_4_ & _UNK_023945ec;
          auVar16._4_12_ = SUB1612(auVar15 | _DAT_023945f0,4);
          auVar16._0_4_ = SUB164(auVar15 | _DAT_023945f0,0) + fVar9;
          auVar14 = roundss(auVar16,auVar16,0xb);
        }
        in_XMM1 = blendps(in_XMM1,auVar14,1);
        (**(code **)(*plVar2 + 0x4d0))();
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
        FUN_003168c0();
      }
    }
    if (bVar3) {
      FUN_00d50b20();
    }
  }
  return;
}


