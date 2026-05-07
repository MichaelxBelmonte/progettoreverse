// Function: FUN_00506830
// Address: 00506830
// Size: 1651 bytes
// Class: MUPercussivePitchSystem


/* WARNING: Removing unreachable block (ram,0x00506870) */
/* WARNING: Removing unreachable block (ram,0x0050687c) */

void FUN_00506830(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined8 *unaff_RSI;
  longlong *unaff_RDI;
  undefined4 uVar4;
  float fVar5;
  undefined4 extraout_XMM0_Db;
  float extraout_XMM0_Db_00;
  float extraout_XMM0_Db_01;
  float fVar7;
  float extraout_XMM0_Db_02;
  float extraout_XMM0_Db_03;
  undefined8 uVar6;
  float extraout_XMM0_Db_04;
  float extraout_XMM0_Db_05;
  undefined4 extraout_XMM0_Dc;
  float extraout_XMM0_Dd;
  float extraout_XMM0_Dd_00;
  float extraout_XMM0_Dd_01;
  float extraout_XMM0_Dd_02;
  float fVar8;
  float fVar9;
  float fVar10;
  float in_XMM1_Dc;
  float fVar11;
  float fVar12;
  longlong *local_c8;
  char local_c0;
  longlong *local_b8;
  char local_b0;
  longlong local_98;
  char local_90;
  longlong local_88;
  char local_80;
  longlong *local_78;
  char local_70;
  undefined8 local_68;
  longlong *local_50;
  char local_48;
  longlong *local_40;
  char local_38;
  
  fVar7 = (float)((ulonglong)param_2 >> 0x20);
  fVar8 = (float)param_2;
  FUN_01d96f70();
  uVar4 = (**(code **)(*unaff_RDI + 0x640))();
  plVar2 = local_50;
  local_98 = DAT_026e41f0;
  if (DAT_026e41f0 != 0) {
    uVar4 = FUN_00d50b00();
  }
  local_90 = '\x01';
  (**(code **)(*plVar2 + 0x3b0))(uVar4,&local_98);
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
  FUN_01d488d0();
  if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_90 != '\0') && (local_98 != 0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01d48b40(DAT_02390124);
  lVar1 = unaff_RDI[0x49];
  if (lVar1 == 0) {
    puVar3 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar3 = &DAT_02680400;
    *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
    puVar3[6] = 0;
    puVar3[7] = 0;
    *(undefined8 *)((longlong)puVar3 + 0x39) = 0;
    *(undefined8 *)((longlong)puVar3 + 0x41) = 0;
    (*DAT_02680418)();
    lVar1 = unaff_RDI[0x49];
    unaff_RDI[0x49] = (longlong)puVar3;
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    FUN_01d9aea0();
    plVar2 = local_40;
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar2 == (longlong *)0x0) {
      FUN_01d97e80();
      local_68 = (**(code **)(*local_40 + 0x4d8))();
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      FUN_01d9aea0();
      local_68 = (**(code **)(*local_40 + 0x4d8))();
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    FUN_01d97e80();
    (**(code **)(*local_40 + 0x4d8))();
    FUN_01d39400((float)local_68,extraout_XMM0_Db);
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_01d97ec0();
    uVar6 = (**(code **)(*local_40 + 0x4d8))();
    local_68 = uVar6;
    FUN_01d97e80();
    (**(code **)(*local_50 + 0x4d8))();
    fVar7 = extraout_XMM0_Db_00;
    in_XMM1_Dc = extraout_XMM0_Dd;
    FUN_01d38ba0((float)local_68,extraout_XMM0_Db_00);
    if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_01d97ec0();
    uVar6 = (**(code **)(*local_40 + 0x4d8))();
    local_68 = uVar6;
    (**(code **)(*unaff_RDI + 0xa08))();
    (**(code **)(*local_50 + 0x4d8))();
    fVar7 = extraout_XMM0_Db_01 + fVar7;
    in_XMM1_Dc = extraout_XMM0_Dd_00 + in_XMM1_Dc;
    FUN_01d38ba0((float)local_68,fVar7 + DAT_02390d00);
    if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    (**(code **)(*unaff_RDI + 0xa08))();
    uVar6 = (**(code **)(*local_40 + 0x4d8))();
    local_68 = uVar6;
    (**(code **)(*unaff_RDI + 0xa08))();
    (**(code **)(*local_50 + 0x4d8))();
    fVar7 = extraout_XMM0_Db_02 + fVar7;
    in_XMM1_Dc = extraout_XMM0_Dd_01 + in_XMM1_Dc;
    FUN_01d38ba0((float)local_68,fVar7 + DAT_02390d00);
    if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    (**(code **)(*unaff_RDI + 0xa08))();
    uVar6 = (**(code **)(*local_40 + 0x4d8))();
    local_68 = uVar6;
    (**(code **)(*unaff_RDI + 0xa08))();
    (**(code **)(*local_50 + 0x4d8))();
    fVar7 = extraout_XMM0_Db_03 + fVar7;
    in_XMM1_Dc = extraout_XMM0_Dd_02 + in_XMM1_Dc;
    fVar8 = fVar7 + DAT_02390d00 + DAT_023b2664;
    FUN_01d38ba0((float)local_68);
    if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    lVar1 = unaff_RDI[0x49];
    plVar2 = (longlong *)*unaff_RSI;
  }
  else {
    plVar2 = (longlong *)*unaff_RSI;
  }
  if (lVar1 != 0) {
    local_80 = 0;
    FUN_00d50b00();
  }
  local_80 = '\x01';
  local_88 = lVar1;
  (**(code **)(*plVar2 + 0x3a8))();
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  plVar2 = (longlong *)*unaff_RSI;
  (**(code **)(*unaff_RDI + 0x950))();
  uVar6 = (**(code **)(*local_40 + 0x4d8))();
  fVar9 = fVar8;
  local_68 = uVar6;
  (**(code **)(*unaff_RDI + 0x950))();
  (**(code **)(*local_50 + 0x4d8))();
  fVar10 = fVar7;
  fVar11 = fVar9;
  fVar12 = in_XMM1_Dc;
  (**(code **)(*unaff_RDI + 0x950))();
  fVar5 = (float)(**(code **)(*local_c8 + 0x4d8))();
  uVar4 = extraout_XMM0_Dc;
  (**(code **)(*unaff_RDI + 0x950))();
  (**(code **)(*local_b8 + 0x4d8))();
  (**(code **)(*plVar2 + 0x3e0))
            ((float)local_68 + fVar8 + DAT_02390d00,extraout_XMM0_Db_04 + fVar7 + DAT_02390d00,
             fVar5 + fVar9 + DAT_02390d00,extraout_XMM0_Db_05 + fVar10 + DAT_02390d00 + DAT_023b2664
             ,fVar11,fVar12,fVar5,uVar4,fVar9,in_XMM1_Dc);
  if ((local_b0 != '\0') && (local_b8 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_c0 != '\0') && (local_c8 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  return;
}


