// Function: FUN_019164b0
// Address: 019164b0
// Size: 965 bytes
// Class: GNUni


/* WARNING: Removing unreachable block (ram,0x0191674f) */
/* WARNING: Removing unreachable block (ram,0x0191675c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_019164b0(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 in_ECX;
  undefined8 *in_RDX;
  int unaff_ESI;
  longlong unaff_RDI;
  longlong *in_R8;
  byte bVar3;
  float fVar4;
  undefined8 uVar5;
  longlong lVar6;
  float fVar12;
  undefined8 in_XMM0_Qb;
  undefined8 extraout_XMM0_Qb;
  uint uVar13;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined8 extraout_XMM0_Qb_00;
  undefined1 auVar11 [16];
  undefined8 extraout_XMM0_Qb_01;
  float fVar14;
  float fVar15;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  undefined8 uVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 local_c8 [16];
  undefined1 local_a8 [16];
  longlong local_90;
  undefined8 uStack_88;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  int local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  
  local_c8._8_4_ = in_XMM1_Dc;
  local_c8._0_8_ = param_2;
  local_c8._12_4_ = in_XMM1_Dd;
  local_a8._8_8_ = in_XMM0_Qb;
  local_a8._0_8_ = param_1;
  local_3c = param_4;
  local_38 = param_3;
  local_34 = in_ECX;
  auVar9._0_8_ = (**(code **)(**(longlong **)(unaff_RDI + 0x10) + 0x18))();
  auVar9._8_8_ = extraout_XMM0_Qb;
  fVar4 = (float)((ulonglong)auVar9._0_8_ >> 0x20);
  uVar13 = (uint)((ulonglong)extraout_XMM0_Qb >> 0x20);
  blendps(local_c8,auVar9,2);
  fVar14 = fVar4 * DAT_0239011c;
  (**(code **)(*(longlong *)*in_RDX + 0x370))();
  auVar7._0_4_ = (uint)fVar14 ^ _DAT_023945e0;
  auVar7._4_4_ = (uint)fVar4 ^ _UNK_023945e4;
  auVar7._8_4_ = uVar13 ^ _UNK_023945e8;
  auVar7._12_4_ = uVar13 ^ _UNK_023945ec;
  auVar7 = insertps(local_a8,auVar7,0x10);
  auVar8._4_12_ = local_a8._4_12_;
  auVar8._0_4_ = (float)param_1 / DAT_023908dc;
  iVar2 = FUN_00e7d780(auVar8._0_8_);
  auVar9 = blendps(auVar9,_DAT_0241aed0,0xd);
  auVar10._0_4_ = (float)param_1 + (float)param_2 + DAT_02390d00;
  auVar10._4_12_ = auVar8._4_12_;
  auVar11 = auVar10;
  local_40 = unaff_ESI;
  do {
    iVar1 = local_40;
    FUN_019169f0(auVar11._0_8_,iVar2);
    if ((char)uStack_88 == '\0') {
      if (local_90 == 0) break;
      FUN_00d50b00();
    }
    else if (local_90 == 0) break;
    uVar5 = (**(code **)(**(longlong **)(unaff_RDI + 0x10) + 0x18))();
    auVar17._8_4_ = (int)extraout_XMM0_Qb_00;
    auVar17._0_8_ = uVar5;
    auVar17._12_4_ = (int)((ulonglong)extraout_XMM0_Qb_00 >> 0x20);
    fVar14 = (float)(iVar2 * 500);
    fVar4 = fVar14 + DAT_023908dc + DAT_02390d00;
    auVar18._4_12_ = auVar17._4_12_;
    uVar16 = auVar9._0_8_;
    if ((float)uVar5 < fVar4) {
      auVar18._0_4_ = ((float)uVar5 - fVar4) + DAT_023908dc;
      auVar11 = blendps(auVar18,auVar9,0xe);
      uVar16 = auVar11._0_8_;
    }
    auVar11 = blendps(auVar7,ZEXT416((uint)fVar14),1);
    fVar15 = (float)((ulonglong)uVar16 >> 0x20);
    fVar4 = (float)uVar16;
    lVar6 = FUN_00d05360(auVar11._0_8_);
    fVar12 = (float)((ulonglong)lVar6 >> 0x20);
    uStack_88 = CONCAT44(fVar15,fVar4);
    if ((((((float)DAT_023dccec != (float)lVar6) || (NAN((float)DAT_023dccec) || NAN((float)lVar6)))
         || (fVar12 != DAT_023dccec._4_4_)) ||
        ((NAN(fVar12) || NAN(DAT_023dccec._4_4_) || ((float)DAT_023dccf4 != fVar4)))) ||
       (NAN((float)DAT_023dccf4) || NAN(fVar4))) {
LAB_019166ab:
      FUN_01d48370();
      (**(code **)(*(longlong *)*in_RDX + 0x390))(lVar6,fVar4);
      if (iVar1 == 2) {
        local_50 = local_90;
        local_48 = '\0';
        (**(code **)(*(longlong *)*in_RDX + 0x3a8))();
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
      }
      else if (iVar1 == 1) {
        local_60 = local_90;
        local_58 = '\0';
        (**(code **)(*(longlong *)*in_RDX + 0x3a0))();
        if ((local_58 != '\0') && (local_60 != 0)) {
          FUN_00d50b20();
        }
      }
      else if (iVar1 == 0) {
        local_70 = *in_R8;
        local_68 = '\0';
        FUN_01d4a550((undefined1)local_34,local_3c,&local_70);
        if ((local_68 != '\0') && (local_70 != 0)) {
          FUN_00d50b20();
        }
      }
      FUN_01d48390();
      if (auVar10._0_4_ <= (float)uVar16 + fVar14 + DAT_02390d00) goto LAB_01916850;
      iVar2 = iVar2 + 1;
      bVar3 = 1;
    }
    else {
      if ((fVar15 != DAT_023dccf4._4_4_) || (NAN(fVar15) || NAN(DAT_023dccf4._4_4_)))
      goto LAB_019166ab;
LAB_01916850:
      bVar3 = 0;
    }
    auVar11._0_8_ = FUN_00d50b20();
    auVar11._8_8_ = extraout_XMM0_Qb_01;
    local_90 = lVar6;
  } while ((bool)(bVar3 & 0 < iVar2));
  (**(code **)(*(longlong *)*in_RDX + 0x370))();
  return;
}


