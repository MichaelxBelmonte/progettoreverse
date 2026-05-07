// Function: FUN_01db6450
// Address: 01db6450
// Size: 1235 bytes
// Class: GNDictionary


/* WARNING: Removing unreachable block (ram,0x01db68e3) */
/* WARNING: Removing unreachable block (ram,0x01db68ec) */

void FUN_01db6450(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  undefined1 auVar3 [16];
  longlong lVar4;
  longlong *unaff_RDI;
  int iVar5;
  longlong lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 uVar10;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  float fVar11;
  float fVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  float local_d8;
  undefined1 local_c8 [16];
  float local_b8;
  undefined1 local_a8 [16];
  float local_88;
  undefined1 local_78 [8];
  float fStack_70;
  float fStack_6c;
  undefined1 local_68 [16];
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  fVar9 = (float)((ulonglong)param_2 >> 0x20);
  fVar11 = (float)param_2;
  FUN_01db2340();
  if ((local_38 == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
  }
  (**(code **)(*unaff_RDI + 0x4d8))();
  iVar5 = *(int *)(local_40 + 0xc);
  if (iVar5 < 1) {
    local_c8 = ZEXT816(0);
    lVar4 = 0;
    local_88 = 0.0;
    _local_78 = ZEXT816(0);
    local_d8 = 0.0;
    local_68 = ZEXT816(0);
    local_b8 = 0.0;
  }
  else {
    _local_78 = ZEXT816(0);
    lVar6 = 0;
    local_68 = ZEXT816(0);
    lVar4 = 0;
    local_a8 = ZEXT816(0);
    local_b8 = fVar11;
    fVar8 = fVar9;
    fVar12 = 0.0;
    do {
      lVar1 = *(longlong *)(*(longlong *)(local_40 + 0x10) + lVar6 * 8);
      if (lVar4 == lVar1) {
        plVar2 = *(longlong **)(lVar4 + 0x20);
        fVar7 = local_b8;
      }
      else {
        if (lVar1 != 0) {
          FUN_00d50b00();
        }
        if (lVar4 != 0) {
          FUN_00d50b20();
        }
        plVar2 = *(longlong **)(lVar1 + 0x20);
        lVar4 = lVar1;
        fVar7 = local_b8;
      }
      if (plVar2 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      (**(code **)(*plVar2 + 0x4d8))();
      FUN_00d50b20();
      local_c8._0_8_ = *(ulonglong *)(lVar4 + 0x10);
      local_c8._8_8_ = 0;
      FUN_01db1970();
      local_b8 = fVar8;
      if (fVar8 <= fVar12) {
        local_b8 = fVar12;
      }
      local_68._4_4_ = 0;
      local_68._0_4_ = (float)local_68._0_4_ + fVar7;
      local_88 = (float)local_78._4_4_ + (float)((ulonglong)local_c8._0_8_ >> 0x20);
      local_78._4_4_ = local_88;
      local_78._0_4_ = (float)local_78._0_4_ + (float)local_c8._0_8_;
      fStack_70 = fStack_70 + 0.0;
      fStack_6c = fStack_6c + 0.0;
      local_c8 = maxps(local_c8,local_a8);
      lVar6 = lVar6 + 1;
      iVar5 = *(int *)(local_40 + 0xc);
      local_a8 = local_c8;
      fVar12 = local_b8;
    } while (lVar6 < iVar5);
    local_d8 = local_c8._4_4_;
  }
  FUN_01e42030();
  FUN_01d8c6e0();
  uVar10 = FUN_01e59910();
  fVar12 = (float)((ulonglong)uVar10 >> 0x20);
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  fVar7 = ((float)iVar5 + DAT_02390d00) * DAT_023b36b0;
  fVar11 = ((float)local_68._0_4_ + fVar7) - fVar11;
  fVar8 = (float)uVar10 + fVar11;
  if ((fVar11 == 0.0) && (!NAN(fVar11))) {
    fVar8 = (float)uVar10;
  }
  local_b8 = local_b8 - fVar9;
  auVar13._4_4_ = fVar12;
  auVar13._0_4_ = fVar8;
  auVar13._8_4_ = extraout_XMM0_Dc;
  auVar13._12_4_ = extraout_XMM0_Dd;
  auVar14._4_4_ = fVar12;
  auVar14._0_4_ = fVar12 + local_b8;
  auVar14._8_4_ = extraout_XMM0_Dd;
  auVar14._12_4_ = extraout_XMM0_Dd;
  auVar14 = insertps(auVar13,auVar14,0x10);
  local_68._0_4_ = auVar14._0_4_;
  if ((local_b8 == 0.0) && (!NAN(local_b8))) {
    local_68._0_4_ = fVar8;
  }
  FUN_01e42030();
  FUN_01d8c6e0();
  FUN_01e5bc80(local_68._0_4_);
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  FUN_01e42030();
  FUN_01d8c6e0();
  uVar10 = FUN_01e59080();
  fVar11 = (float)((ulonglong)uVar10 >> 0x20);
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  fVar12 = ((float)local_78._0_4_ + fVar7 + DAT_023908ec) - (float)local_c8._0_4_;
  fVar9 = (float)uVar10 + fVar12;
  if ((fVar12 == 0.0) && (!NAN(fVar12))) {
    fVar9 = (float)uVar10;
  }
  local_d8 = local_d8 - (local_88 + fVar7);
  auVar15._4_4_ = fVar11;
  auVar15._0_4_ = fVar9;
  auVar15._8_4_ = extraout_XMM0_Dc_00;
  auVar15._12_4_ = extraout_XMM0_Dd_00;
  auVar3._4_4_ = fVar11;
  auVar3._0_4_ = fVar11 + local_d8;
  auVar3._8_4_ = extraout_XMM0_Dd_00;
  auVar3._12_4_ = extraout_XMM0_Dd_00;
  auVar14 = insertps(auVar15,auVar3,0x10);
  local_78._0_4_ = auVar14._0_4_;
  if ((local_d8 == 0.0) && (!NAN(local_d8))) {
    local_78._0_4_ = fVar9;
  }
  FUN_01e42030();
  FUN_01d8c6e0();
  FUN_01e5bc90(local_78._0_4_);
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((char)unaff_RDI[0x27] != '\x01') {
    *(undefined1 *)(unaff_RDI + 0x27) = 1;
    (**(code **)(*unaff_RDI + 0x920))();
    (**(code **)(*unaff_RDI + 0x620))();
  }
  if (0 < *(int *)(local_40 + 0xc)) {
    lVar6 = 0;
    do {
      lVar1 = *(longlong *)(*(longlong *)(local_40 + 0x10) + lVar6 * 8);
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 < *(int *)(local_40 + 0xc));
  }
  (**(code **)(*unaff_RDI + 0x920))();
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}


