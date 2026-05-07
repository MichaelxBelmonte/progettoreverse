// Function: FUN_01eacf20
// Address: 01eacf20
// Size: 784 bytes
// Class: GNList


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01eacf20(float param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  char cVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  longlong *unaff_RDI;
  int iVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  uint in_XMM1_Dc;
  uint in_XMM1_Dd;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  float fStack_c4;
  uint uStack_c0;
  uint uStack_bc;
  float local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  float local_68;
  float fStack_64;
  uint uStack_60;
  uint uStack_5c;
  longlong local_50;
  char local_48 [8];
  longlong local_40;
  char local_38 [8];
  
  fStack_64 = (float)((ulonglong)param_2 >> 0x20);
  local_68 = (float)param_2;
  uStack_60 = in_XMM1_Dc;
  uStack_5c = in_XMM1_Dd;
  iVar5 = FUN_01eacdb0();
  if (iVar5 != -1) {
    lVar1 = *(longlong *)(*(longlong *)(unaff_RDI[9] + 0x10) + (longlong)iVar5 * 8);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    iVar5 = *(int *)(lVar1 + 0x24);
    iVar8 = iVar5;
    if (0 < *(int *)(lVar1 + 0x28)) {
      iVar9 = 0;
      local_40 = lVar1;
      do {
        uVar13 = (**(code **)(*unaff_RDI + 1000))();
        fVar10 = (float)uVar13 + DAT_0239011c;
        fVar11 = (float)(**(code **)(*(longlong *)unaff_RDI[8] + 0x390))();
        uVar14 = (**(code **)(*(longlong *)unaff_RDI[8] + 0x390))();
        fVar12 = fStack_64 + DAT_0239011c;
        (**(code **)(*unaff_RDI + 0x378))();
        sVar4 = FUN_00d8cbc0();
        if ((local_48[0] != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        fStack_c4 = (float)((ulonglong)uVar13 >> 0x20);
        uStack_c0 = (uint)extraout_XMM0_Qb;
        uStack_bc = (uint)((ulonglong)extraout_XMM0_Qb >> 0x20);
        auVar15._0_4_ = (uint)fVar10 & _DAT_023945e0;
        auVar15._4_4_ = (uint)fStack_c4 & _UNK_023945e4;
        auVar15._8_4_ = uStack_c0 & _UNK_023945e8;
        auVar15._12_4_ = uStack_bc & _UNK_023945ec;
        auVar17._4_12_ = SUB1612(auVar15 | _DAT_023945f0,4);
        auVar17._0_4_ = SUB164(auVar15 | _DAT_023945f0,0) + fVar10;
        auVar15 = roundss(auVar17,auVar17,0xb);
        fVar11 = (fStack_c4 + DAT_0239011c) - fVar11;
        auVar18._0_4_ = (uint)fVar11 & _DAT_023945e0;
        auVar18._4_4_ = (uint)fStack_c4 & _UNK_023945e4;
        auVar18._8_4_ = uStack_bc & _UNK_023945e8;
        auVar18._12_4_ = uStack_bc & _UNK_023945ec;
        auVar26._4_12_ = SUB1612(auVar18 | ZEXT416(DAT_02394dc8),4);
        auVar26._0_4_ = SUB164(auVar18 | ZEXT416(DAT_02394dc8),0) + fVar11;
        auVar17 = roundss(auVar26,auVar26,0xb);
        auVar17 = insertps(auVar15,auVar17,0x10);
        auVar22._0_4_ = (uint)(local_68 + DAT_0239011c) & _DAT_023945e0;
        auVar22._4_4_ = (uint)fStack_64 & _UNK_023945e4;
        auVar22._8_4_ = uStack_60 & _UNK_023945e8;
        auVar22._12_4_ = uStack_5c & _UNK_023945ec;
        auVar23._4_12_ = SUB1612(auVar22 | ZEXT416(DAT_02394dc8),4);
        auVar23._0_4_ = SUB164(auVar22 | ZEXT416(DAT_02394dc8),0) + local_68 + DAT_0239011c;
        auVar21._0_12_ = ZEXT812(0);
        auVar21._12_4_ = 0;
        auVar18 = roundss(auVar21,auVar23,0xb);
        auVar24._0_4_ = (uint)fVar12 & _DAT_023945e0;
        auVar24._4_4_ = (uint)fStack_64 & _UNK_023945e4;
        auVar24._8_4_ = uStack_5c & _UNK_023945e8;
        auVar24._12_4_ = uStack_5c & _UNK_023945ec;
        auVar25._4_12_ = SUB1612(auVar24 | _DAT_023945f0,4);
        auVar25._0_4_ = SUB164(auVar24 | _DAT_023945f0,0) + fVar12;
        auVar26 = roundss(auVar25,auVar25,0xb);
        local_b8 = (float)uVar14;
        uStack_b4 = (undefined4)((ulonglong)uVar14 >> 0x20);
        uStack_b0 = (undefined4)extraout_XMM0_Qb_00;
        uStack_ac = (undefined4)((ulonglong)extraout_XMM0_Qb_00 >> 0x20);
        fVar10 = auVar18._0_4_ * DAT_0239011c;
        if (sVar4 != 9) {
          auVar19._0_4_ = (uint)fVar10 & _DAT_023945e0;
          auVar19._4_4_ = auVar18._4_4_ & _UNK_023945e4;
          auVar19._8_4_ = auVar18._8_4_ & _UNK_023945e8;
          auVar19._12_4_ = auVar18._12_4_ & _UNK_023945ec;
          auVar20._4_12_ = SUB1612(auVar19 | _DAT_023945f0,4);
          auVar20._0_4_ = SUB164(auVar19 | _DAT_023945f0,0) + fVar10;
          auVar21 = roundss(auVar20,auVar20,0xb);
          auVar16._4_12_ = auVar15._4_12_;
          auVar16._0_4_ = auVar15._0_4_ - auVar21._0_4_;
          auVar17 = blendps(auVar17,auVar16,1);
        }
        auVar2._4_4_ = uStack_b4;
        auVar2._0_4_ = local_b8 + local_b8 + auVar26._0_4_;
        auVar2._8_4_ = uStack_b0;
        auVar2._12_4_ = uStack_ac;
        insertps(auVar18,auVar2,0x10);
        cVar3 = FUN_00d05410();
        local_68 = auVar17._0_4_;
        fStack_64 = auVar17._4_4_;
        uStack_60 = auVar17._8_4_;
        uStack_5c = auVar17._12_4_;
        if (cVar3 != '\0' || param_1 < local_68) break;
        iVar9 = iVar9 + 1;
        iVar6 = *(int *)(local_40 + 0x28);
        if ((iVar9 == iVar6) && (local_68 <= param_1)) {
          uVar13 = FUN_00d8cbc0();
          cVar3 = FUN_01e9c7e0(uVar13,0);
          lVar1 = local_40;
          if (cVar3 != '\0') goto joined_r0x01ead23b;
          iVar6 = *(int *)(local_40 + 0x28);
        }
        iVar8 = iVar8 + 1;
      } while (iVar9 < iVar6);
      iVar8 = iVar5 + iVar9;
      lVar1 = local_40;
    }
joined_r0x01ead23b:
    if (lVar1 == 0) {
      return iVar8;
    }
    FUN_00d50b20();
    return iVar8;
  }
  FUN_00d23340();
  pcVar7 = local_38;
  if (local_48[0] != '\0') {
    pcVar7 = local_48;
  }
  local_38[0] = local_48[0];
  *pcVar7 = '\0';
  if ((local_48[0] != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if (local_38[0] == '\0') {
    if (local_50 != 0) {
      FUN_00d50b00();
      goto LAB_01ead204;
    }
  }
  else if (local_50 != 0) {
LAB_01ead204:
    iVar5 = *(int *)(local_50 + 0x28);
    iVar8 = *(int *)(local_50 + 0x24);
    FUN_00d50b20();
    return iVar5 + iVar8;
  }
  return -1;
}


