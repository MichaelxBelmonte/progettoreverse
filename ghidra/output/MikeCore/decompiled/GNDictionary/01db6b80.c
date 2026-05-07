// Function: FUN_01db6b80
// Address: 01db6b80
// Size: 1265 bytes
// Class: GNDictionary


/* WARNING: Removing unreachable block (ram,0x01db7033) */
/* WARNING: Removing unreachable block (ram,0x01db703c) */

void FUN_01db6b80(void)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *unaff_RDI;
  int iVar4;
  longlong lVar5;
  float fVar6;
  undefined8 uVar7;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  float fVar9;
  undefined1 in_XMM1 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  float fVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  float local_f8;
  float fStack_f4;
  float local_e8;
  undefined1 local_d8 [16];
  float local_c8;
  float fStack_c4;
  float local_b8;
  float fStack_b4;
  float local_a8;
  undefined1 local_88 [16];
  float local_68;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  float fVar8;
  
  FUN_01db2340();
  if ((local_38 == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
  }
  (**(code **)(*unaff_RDI + 0x4d8))();
  iVar4 = *(int *)(local_40 + 0xc);
  if (iVar4 < 1) {
    local_b8 = 0.0;
    lVar3 = 0;
    local_e8 = 0.0;
    local_d8 = ZEXT816(0);
    local_88._0_4_ = 0.0;
    local_c8 = 0.0;
    local_68 = 0.0;
  }
  else {
    local_b8 = 0.0;
    fStack_b4 = 0.0;
    local_68 = 0.0;
    lVar5 = 0;
    local_a8 = 0.0;
    lVar3 = 0;
    local_88 = ZEXT816(0);
    local_d8 = in_XMM1;
    do {
      lVar1 = *(longlong *)(*(longlong *)(local_40 + 0x10) + lVar5 * 8);
      if (lVar3 == lVar1) {
        plVar2 = *(longlong **)(lVar3 + 0x20);
        auVar15 = local_d8;
      }
      else {
        if (lVar1 != 0) {
          FUN_00d50b00();
        }
        if (lVar3 != 0) {
          FUN_00d50b20();
        }
        plVar2 = *(longlong **)(lVar1 + 0x20);
        lVar3 = lVar1;
        auVar15 = local_d8;
      }
      if (plVar2 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      (**(code **)(*plVar2 + 0x4d8))();
      FUN_00d50b20();
      local_d8._0_8_ = *(ulonglong *)(lVar3 + 0x10);
      local_d8._8_8_ = 0;
      FUN_01db1970();
      local_c8 = auVar15._0_4_;
      fStack_c4 = auVar15._4_4_;
      if (local_c8 <= local_a8) {
        local_c8 = local_a8;
      }
      local_68 = local_68 + fStack_c4;
      local_b8 = local_b8 + (float)local_d8._0_8_;
      fStack_b4 = fStack_b4 + (float)((ulonglong)local_d8._0_8_ >> 0x20);
      local_d8 = maxps(local_d8,local_88);
      lVar5 = lVar5 + 1;
      iVar4 = *(int *)(local_40 + 0xc);
      local_a8 = local_c8;
      local_88 = local_d8;
    } while (lVar5 < iVar4);
    local_e8 = local_d8._4_4_;
    local_88._0_4_ = fStack_b4;
  }
  FUN_01e42030();
  FUN_01d8c6e0();
  uVar7 = FUN_01e59910();
  fVar8 = (float)((ulonglong)uVar7 >> 0x20);
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  fVar9 = ((float)iVar4 + DAT_02390d00) * DAT_023b36b0;
  local_f8 = in_XMM1._0_4_;
  local_c8 = local_c8 - local_f8;
  fVar6 = (float)uVar7 + local_c8;
  if ((local_c8 == 0.0) && (!NAN(local_c8))) {
    fVar6 = (float)uVar7;
  }
  fStack_f4 = in_XMM1._4_4_;
  fStack_f4 = (local_68 + fVar9) - fStack_f4;
  auVar15._4_4_ = fVar8;
  auVar15._0_4_ = fVar8;
  auVar15._8_4_ = extraout_XMM0_Dd;
  auVar15._12_4_ = extraout_XMM0_Dd;
  auVar10._4_12_ = auVar15._4_12_;
  auVar10._0_4_ = fVar8 + fStack_f4;
  auVar14._4_4_ = fVar8;
  auVar14._0_4_ = fVar6;
  auVar14._8_4_ = extraout_XMM0_Dc;
  auVar14._12_4_ = extraout_XMM0_Dd;
  auVar15 = insertps(auVar14,auVar10,0x10);
  local_68 = auVar15._0_4_;
  if ((fStack_f4 == 0.0) && (!NAN(fStack_f4))) {
    local_68 = fVar6;
  }
  FUN_01e42030();
  FUN_01d8c6e0();
  FUN_01e5bc80(local_68);
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  FUN_01e42030();
  FUN_01d8c6e0();
  uVar7 = FUN_01e59080();
  fVar8 = (float)((ulonglong)uVar7 >> 0x20);
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  fVar13 = (float)local_d8._0_4_ - (local_b8 + fVar9);
  fVar6 = (float)uVar7 + fVar13;
  if ((fVar13 == 0.0) && (!NAN(fVar13))) {
    fVar6 = (float)uVar7;
  }
  local_e8 = ((float)local_88._0_4_ + fVar9) - local_e8;
  auVar11._4_4_ = fVar8;
  auVar11._0_4_ = fVar8;
  auVar11._8_4_ = extraout_XMM0_Dd_00;
  auVar11._12_4_ = extraout_XMM0_Dd_00;
  auVar12._4_12_ = auVar11._4_12_;
  auVar12._0_4_ = fVar8 + local_e8;
  auVar16._4_4_ = fVar8;
  auVar16._0_4_ = fVar6;
  auVar16._8_4_ = extraout_XMM0_Dc_00;
  auVar16._12_4_ = extraout_XMM0_Dd_00;
  auVar15 = insertps(auVar16,auVar12,0x10);
  local_68 = auVar15._0_4_;
  if ((local_e8 == 0.0) && (!NAN(local_e8))) {
    local_68 = fVar6;
  }
  FUN_01e42030();
  FUN_01d8c6e0();
  FUN_01e5bc90(local_68);
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((char)unaff_RDI[0x27] == '\x01') {
    *(undefined1 *)(unaff_RDI + 0x27) = 0;
    (**(code **)(*unaff_RDI + 0x920))();
    (**(code **)(*unaff_RDI + 0x620))();
  }
  if (0 < *(int *)(local_40 + 0xc)) {
    lVar5 = 0;
    do {
      lVar1 = *(longlong *)(*(longlong *)(local_40 + 0x10) + lVar5 * 8);
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(local_40 + 0xc));
  }
  (**(code **)(*unaff_RDI + 0x920))();
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}


