// Function: FUN_01a25050
// Address: 01a25050
// Size: 546 bytes
// Class: MUScalePitchSystem


/* WARNING: Removing unreachable block (ram,0x01a2526d) */
/* WARNING: Removing unreachable block (ram,0x01a25096) */
/* WARNING: Removing unreachable block (ram,0x01a2509f) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01a25050(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  int iVar2;
  longlong unaff_RDI;
  bool bVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  longlong local_68;
  char local_60;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 local_48 [8];
  undefined4 uStack_40;
  float fStack_3c;
  longlong local_38;
  char local_30;
  undefined8 extraout_XMM0_Qb_00;
  undefined8 extraout_XMM0_Qb_01;
  
  fVar4 = (float)((ulonglong)param_2 >> 0x20);
  local_48._0_4_ = (undefined4)param_2;
  bVar3 = true;
  if ((*(longlong *)(unaff_RDI + 0x1d8) == 0) || (FUN_01bcc520(), local_38 == 0)) {
    bVar1 = false;
  }
  else {
    if (local_30 == '\0') {
      FUN_00d50b00();
    }
    iVar2 = FUN_01bead40();
    bVar1 = true;
    if ((iVar2 == 0) && (*(longlong *)(unaff_RDI + 0x138) != 0)) {
      FUN_01e40eb0();
      if (local_38 == unaff_RDI) {
        FUN_01cf3f40();
        bVar3 = local_68 != 0;
        if ((local_60 != '\0') && (local_68 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        bVar3 = false;
      }
      if ((local_30 != '\0') && (local_38 != 0)) {
        FUN_00d50b20();
      }
      if (bVar3) {
        uVar6 = (**(code **)(**(longlong **)(unaff_RDI + 0x138) + 0x4d8))();
        uStack_50 = (undefined4)extraout_XMM0_Qb;
        uStack_4c = (undefined4)((ulonglong)extraout_XMM0_Qb >> 0x20);
        local_48._4_4_ = fVar4;
        uStack_40 = in_XMM1_Dc;
        fStack_3c = (float)in_XMM1_Dd;
        FUN_01e3f820();
        auVar11._4_4_ = fVar4;
        auVar11._0_4_ = fVar4;
        auVar11._8_4_ = in_XMM1_Dd;
        auVar11._12_4_ = in_XMM1_Dd;
        auVar7._4_12_ = auVar11._4_12_;
        auVar7._0_4_ = fVar4 + DAT_023b1608;
        auVar11 = insertps(_local_48,auVar7,0x10);
        auVar8._8_4_ = uStack_50;
        auVar8._0_8_ = uVar6;
        auVar8._12_4_ = uStack_4c;
        auVar8 = blendps(auVar8,_DAT_023b1620,0xe);
        (**(code **)(**(longlong **)(unaff_RDI + 0x138) + 0x4d0))(auVar8._0_8_);
        FUN_01cf3f40();
        FUN_01e3f820();
        auVar8 = auVar11;
        if ((local_30 != '\0') && (local_38 != 0)) {
          FUN_00d50b20();
        }
        FUN_01e3f820();
        local_48._4_4_ = auVar11._4_4_;
        fStack_3c = auVar11._12_4_;
        fVar4 = (float)-(uint)(auVar8._4_4_ < (float)local_48._4_4_);
        fVar5 = (float)-(uint)(auVar8._12_4_ < fStack_3c);
        if (((uint)fVar4 & 1) == 0) {
          auVar10._0_8_ = FUN_01cf5cf0();
          auVar10._8_8_ = extraout_XMM0_Qb_01;
          auVar8 = blendps(auVar10,ZEXT816(0),2);
          FUN_01cf5c80(auVar8._0_8_);
        }
        else {
          FUN_01e3f820();
          auVar9._0_8_ = FUN_01cf5cf0();
          auVar9._8_8_ = extraout_XMM0_Qb_00;
          auVar12._4_4_ = (float)local_48._4_4_ - fVar4;
          auVar12._12_4_ = fStack_3c - fVar5;
          auVar12._0_4_ = auVar12._4_4_;
          auVar12._8_4_ = auVar12._12_4_;
          auVar13._4_12_ = auVar12._4_12_;
          auVar13._0_4_ = auVar12._4_4_ + DAT_02390d00;
          if (auVar13._0_4_ < (float)((ulonglong)auVar9._0_8_ >> 0x20)) {
            auVar8 = insertps(auVar9,auVar13,0x10);
            FUN_01cf5c80(auVar8._0_8_);
          }
        }
        bVar3 = false;
        goto LAB_01a250cf;
      }
    }
    bVar3 = false;
  }
  FUN_01d9cbc0();
  if (!bVar1) {
    return;
  }
LAB_01a250cf:
  if (!bVar3) {
    FUN_00d50b20();
  }
  return;
}


