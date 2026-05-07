// Function: FUN_01d713c0
// Address: 01d713c0
// Size: 2097 bytes
// Class: GNMultipleValue


/* WARNING: Removing unreachable block (ram,0x01d71a0d) */
/* WARNING: Removing unreachable block (ram,0x01d71a19) */
/* WARNING: Removing unreachable block (ram,0x01d715da) */
/* WARNING: Removing unreachable block (ram,0x01d715e6) */
/* WARNING: Removing unreachable block (ram,0x01d714f6) */
/* WARNING: Removing unreachable block (ram,0x01d71502) */
/* WARNING: Removing unreachable block (ram,0x01d71bc5) */
/* WARNING: Removing unreachable block (ram,0x01d71bd1) */
/* WARNING: Removing unreachable block (ram,0x01d71677) */
/* WARNING: Removing unreachable block (ram,0x01d71683) */
/* WARNING: Removing unreachable block (ram,0x01d71a8a) */
/* WARNING: Removing unreachable block (ram,0x01d71a9a) */

void FUN_01d713c0(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  longlong *plVar6;
  char cVar7;
  undefined1 uVar8;
  undefined4 uVar9;
  undefined8 *unaff_RSI;
  longlong *unaff_RDI;
  undefined8 uVar10;
  undefined8 uVar11;
  float extraout_XMM0_Db;
  float extraout_XMM0_Db_01;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  float extraout_XMM0_Dd;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  float extraout_XMM0_Db_00;
  undefined8 extraout_XMM0_Qb_01;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  float fVar16;
  undefined4 in_XMM1_Dc;
  float in_XMM1_Dd;
  undefined4 uVar17;
  undefined4 uVar18;
  float local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  longlong *local_78;
  char local_70;
  longlong local_68;
  char local_60;
  longlong local_58;
  char local_50;
  longlong *local_48;
  longlong *local_40;
  char local_38;
  
  fVar16 = (float)((ulonglong)param_2 >> 0x20);
  uVar18 = (undefined4)param_2;
  (**(code **)(*unaff_RDI + 0x640))();
  local_48 = local_40;
  if ((((local_38 == '\0') && (local_40 != (longlong *)0x0)) && (FUN_00d50b00(), local_38 != '\0'))
     && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  cVar7 = FUN_01e420b0();
  if (cVar7 != '\0') {
    (**(code **)(*unaff_RDI + 0x878))();
  }
  cVar7 = FUN_01cef4b0();
  if (cVar7 == '\0') {
    uVar8 = (**(code **)(*unaff_RDI + 0x9a0))();
    (**(code **)(*unaff_RDI + 0xa70))();
    fVar16 = 0.0;
    uVar17 = 0;
    (**(code **)(*local_48 + 0x3f0))(0,0,0,uVar8);
    uVar18 = *(undefined4 *)((longlong)unaff_RDI + 0x18c);
    lVar1 = unaff_RDI[0x2d];
    uVar9 = (**(code **)(*unaff_RDI + 0xa70))();
    (**(code **)(*local_48 + 0x490))((char)lVar1,uVar18,uVar9);
    plVar2 = local_40;
    if (local_38 == '\0') {
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    FUN_01d488d0();
    if (plVar2 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    (**(code **)(*local_48 + 0x370))();
    plVar2 = local_40;
    if (local_38 == '\0') {
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    FUN_01d48a10();
    if (plVar2 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    plVar2 = (longlong *)*unaff_RSI;
    (**(code **)(*unaff_RDI + 0x960))();
    plVar6 = local_40;
    if (local_38 == '\0') {
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    uVar11 = FUN_01e3f820();
    (**(code **)(*plVar2 + 0x3f8))(uVar11,0);
    if (plVar6 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    (**(code **)(*local_48 + 0x370))();
    (**(code **)(*unaff_RDI + 0x960))();
    lVar1 = local_58;
    if (local_50 == '\0') {
      if (local_58 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_50 = '\0';
    }
    uVar11 = FUN_01d43d10();
    local_c8 = (float)uVar11;
    uStack_c4 = (undefined4)((ulonglong)uVar11 >> 0x20);
    uStack_c0 = (undefined4)extraout_XMM0_Qb_01;
    uStack_bc = (undefined4)((ulonglong)extraout_XMM0_Qb_01 >> 0x20);
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_01e3f820();
    local_c8 = local_c8 + DAT_023908d8;
    auVar14._4_4_ = uStack_c4;
    auVar14._0_4_ = local_c8;
    auVar14._8_4_ = uStack_c0;
    auVar14._12_4_ = uStack_bc;
    auVar15._4_4_ = fVar16;
    auVar15._0_4_ = fVar16 * DAT_0239011c + extraout_XMM0_Db_00 + DAT_02390d00;
    auVar15._8_4_ = uVar17;
    auVar15._12_4_ = uVar17;
    auVar15 = insertps(auVar14,auVar15,0x10);
    fVar16 = 0.0;
    uVar18 = 0;
    FUN_01cb3a60(auVar15._0_8_,DAT_02394298);
    FUN_01e3f820();
    auVar5._4_4_ = uStack_c4;
    auVar5._0_4_ = local_c8;
    auVar5._8_4_ = uStack_c0;
    auVar5._12_4_ = uStack_bc;
    auVar3._4_4_ = fVar16;
    auVar3._0_4_ = fVar16 * DAT_0239011c + extraout_XMM0_Db_01 + DAT_02390124;
    auVar3._8_4_ = uVar18;
    auVar3._12_4_ = uVar18;
    auVar15 = insertps(auVar5,auVar3,0x10);
    FUN_01cb3a60(auVar15._0_8_,DAT_02394298);
  }
  else {
    uVar9 = *(undefined4 *)((longlong)unaff_RDI + 0x18c);
    uVar10 = FUN_01e3f820();
    uVar17 = *(undefined4 *)((longlong)unaff_RDI + 0x1fc);
    uVar11 = extraout_XMM0_Qb;
    uVar8 = (**(code **)(*unaff_RDI + 0x9a0))();
    (**(code **)(*unaff_RDI + 0xa70))();
    (**(code **)(*local_48 + 0x3f0))(uVar17,uVar9,0,uVar8,uVar18,in_XMM1_Dc,uVar10,uVar11);
    if (*(int *)(unaff_RDI[0x46] + 0xc) == 0) {
      FUN_01e3f820();
      (**(code **)(*unaff_RDI + 0x960))();
      local_78 = local_40;
      local_70 = 0;
      if (local_38 == '\0') {
        if (local_40 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      local_70 = '\x01';
      (**(code **)(*unaff_RDI + 0x9e0))();
      local_68 = local_58;
      local_60 = 0;
      if (local_50 == '\0') {
        if (local_58 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_50 = '\0';
      }
      local_60 = '\x01';
      uVar9 = *(undefined4 *)((longlong)unaff_RDI + 0x174);
      (**(code **)(*unaff_RDI + 0x9a0))();
      (**(code **)(*unaff_RDI + 0xa70))();
      (**(code **)(*local_48 + 0x400))(&local_78,uVar18,&local_68,uVar9);
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else if ((longlong)(int)unaff_RDI[0x45] != -1) {
      lVar1 = *(longlong *)
               (*(longlong *)(unaff_RDI[0x46] + 0x10) + (longlong)(int)unaff_RDI[0x45] * 8);
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      FUN_01e3f820();
      uVar11 = (**(code **)(*local_48 + 0x548))();
      uStack_c0 = (undefined4)extraout_XMM0_Qb_00;
      uStack_bc = (undefined4)((ulonglong)extraout_XMM0_Qb_00 >> 0x20);
      FUN_01d526f0();
      auVar4._8_4_ = uStack_c0;
      auVar4._0_8_ = uVar11;
      auVar4._12_4_ = uStack_bc;
      fVar16 = fVar16 - extraout_XMM0_Db;
      auVar12._4_4_ = fVar16;
      auVar12._0_4_ = fVar16;
      auVar12._8_4_ = in_XMM1_Dd - extraout_XMM0_Dd;
      auVar12._12_4_ = in_XMM1_Dd - extraout_XMM0_Dd;
      auVar13._4_12_ = auVar12._4_12_;
      auVar13._0_4_ = fVar16 * DAT_0239011c + DAT_02390124 + (float)((ulonglong)uVar11 >> 0x20);
      insertps(auVar4,auVar13,0x10);
      FUN_01d49110();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
    }
  }
  FUN_00d50b20();
  return;
}


