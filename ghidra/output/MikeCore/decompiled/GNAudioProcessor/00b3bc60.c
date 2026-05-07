// Function: FUN_00b3bc60
// Address: 00b3bc60
// Size: 1305 bytes
// Class: GNAudioProcessor


/* WARNING: Removing unreachable block (ram,0x00b3bf8a) */
/* WARNING: Removing unreachable block (ram,0x00b3bf96) */
/* WARNING: Removing unreachable block (ram,0x00b3bf2a) */
/* WARNING: Removing unreachable block (ram,0x00b3bf36) */
/* WARNING: Removing unreachable block (ram,0x00b3bfc2) */
/* WARNING: Removing unreachable block (ram,0x00b3bfce) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_00b3bc60(void)

{
  char cVar1;
  longlong *plVar2;
  undefined1 auVar3 [16];
  longlong *plVar4;
  int iVar5;
  longlong *plVar6;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong *plVar7;
  int iVar8;
  bool bVar9;
  bool bVar10;
  undefined4 uVar11;
  float extraout_XMM0_Db;
  float extraout_XMM0_Db_00;
  undefined8 uVar12;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dc_01;
  undefined4 extraout_XMM0_Dc_02;
  undefined4 extraout_XMM0_Dc_03;
  undefined4 extraout_XMM0_Dc_04;
  undefined4 extraout_XMM0_Dc_05;
  float extraout_XMM0_Dc_06;
  float extraout_XMM0_Dc_07;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  undefined4 extraout_XMM0_Dd_01;
  undefined4 extraout_XMM0_Dd_02;
  undefined4 extraout_XMM0_Dd_03;
  undefined4 extraout_XMM0_Dd_04;
  undefined4 extraout_XMM0_Dd_05;
  undefined4 extraout_XMM0_Dd_06;
  float extraout_XMM0_Dd_07;
  float extraout_XMM0_Dd_08;
  float fVar15;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  longlong local_e0;
  char local_d8;
  undefined1 local_c8 [16];
  longlong *local_88;
  char local_80;
  undefined1 local_78 [16];
  undefined1 local_68 [8];
  float fStack_60;
  float fStack_5c;
  longlong *local_50;
  undefined8 local_48;
  longlong *local_38;
  
  plVar6 = (longlong *)*unaff_RSI;
  cVar1 = (char)unaff_RSI[1];
  bVar9 = cVar1 == '\0';
  bVar10 = plVar6 == (longlong *)0x0;
  plVar7 = plVar6;
  if (!bVar10 && !bVar9) {
    FUN_00d50b00();
    plVar7 = (longlong *)*unaff_RSI;
  }
  local_50 = plVar6;
  (**(code **)(*plVar7 + 0x570))();
  iVar5 = (**(code **)(*(longlong *)unaff_RDI[0xf] + 0x448))();
  local_68 = (undefined1  [8])(**(code **)(*unaff_RDI + 0x618))();
  fStack_60 = (float)extraout_XMM0_Dc;
  fStack_5c = (float)extraout_XMM0_Dd;
  (**(code **)(*unaff_RDI + 0x620))();
  local_48 = (**(code **)(*unaff_RDI + 0x620))();
  local_78._0_8_ = (**(code **)(*unaff_RDI + 0x628))();
  local_78._8_4_ = extraout_XMM0_Dc_00;
  local_78._12_4_ = extraout_XMM0_Dd_00;
  (**(code **)(*unaff_RDI + 0x628))();
  plVar6 = (longlong *)FUN_00e8fc40();
  FUN_00074c30();
  (**(code **)(*plVar6 + 0x18))();
  local_38 = plVar6;
  plVar6 = (longlong *)FUN_00e8fc40();
  FUN_0006daf0();
  (**(code **)(*plVar6 + 0x18))();
  fVar15 = extraout_XMM0_Db + (float)local_68._4_4_;
  local_78._0_4_ = local_78._0_4_ + local_78._0_4_ + (float)local_68._0_4_;
  auVar13._4_4_ = extraout_XMM0_Db_00;
  auVar13._0_4_ = extraout_XMM0_Db_00;
  auVar13._8_4_ = extraout_XMM0_Dd_01;
  auVar13._12_4_ = extraout_XMM0_Dd_01;
  register0x00001284 = auVar13._4_12_;
  local_68._0_4_ =
       extraout_XMM0_Db_00 + extraout_XMM0_Db_00 + ((float)iVar5 * fVar15 - local_48._4_4_);
  insertps(local_78,_local_68,0x10);
  (**(code **)(*plVar6 + 0x4d0))(0);
  if ((float)local_68._0_4_ <= DAT_0241b640) {
    FUN_01d94ee0();
    FUN_01d95060();
    (**(code **)(*local_38 + 0x4d0))(0);
    if (local_50 != plVar6) {
      FUN_00d50b00();
      local_48._0_4_ = CONCAT31(local_48._1_3_,1);
      local_50 = plVar6;
      if (!bVar10 && !bVar9) {
        FUN_00d50b20();
      }
      goto LAB_00b3beec;
    }
    uVar12 = local_48;
    if ((cVar1 == '\0') && (local_50 != (longlong *)0x0)) {
      local_48._0_4_ = CONCAT31(local_48._1_3_,1);
      FUN_00d50b00();
      goto LAB_00b3beec;
    }
  }
  else {
    uVar11 = FUN_01d91900();
    local_68._0_4_ = uVar11;
    FUN_01d94ee0();
    FUN_01d95060();
    auVar14._4_12_ = local_78._4_12_;
    auVar14._0_4_ = local_78._0_4_ + (float)local_68._0_4_;
    auVar13 = blendps(auVar14,_DAT_023d5dd0,0xe);
    (**(code **)(*local_38 + 0x4d0))(0,auVar13._0_8_);
    if (local_50 != local_38) {
      FUN_00d50b00();
      local_48._0_4_ = CONCAT31(local_48._1_3_,1);
      if (bVar10 || bVar9) {
        local_50 = local_38;
      }
      else {
        local_50 = local_38;
        FUN_00d50b20();
      }
      goto LAB_00b3beec;
    }
    uVar12 = local_48;
    if ((cVar1 == '\0') && (local_50 != (longlong *)0x0)) {
      local_48._0_4_ = CONCAT31(local_48._1_3_,1);
      FUN_00d50b00();
      goto LAB_00b3beec;
    }
  }
  local_48._4_4_ = (float)((ulonglong)uVar12 >> 0x20);
  local_48._1_3_ = (undefined3)((ulonglong)uVar12 >> 8);
  local_48._0_4_ = CONCAT31(local_48._1_3_,cVar1);
LAB_00b3beec:
  FUN_01d97870();
  FUN_01cf3e00();
  if ((local_d8 != '\0') && (local_e0 != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(*(longlong *)*unaff_RSI + 0x450))();
  FUN_01d978b0();
  local_68 = (undefined1  [8])(**(code **)(*unaff_RDI + 0x628))();
  fStack_60 = (float)extraout_XMM0_Dc_01;
  fStack_5c = (float)extraout_XMM0_Dd_02;
  local_c8._0_8_ = (**(code **)(*unaff_RDI + 0x628))();
  local_c8._8_4_ = extraout_XMM0_Dc_02;
  local_c8._12_4_ = extraout_XMM0_Dd_03;
  local_78._0_8_ = (**(code **)(*unaff_RDI + 0x618))();
  local_78._8_4_ = extraout_XMM0_Dc_03;
  local_78._12_4_ = extraout_XMM0_Dd_04;
  uVar12 = (**(code **)(*unaff_RDI + 0x618))();
  auVar13 = blendps(_local_68,local_c8,2);
  if (0 < iVar5) {
    auVar3._8_4_ = extraout_XMM0_Dc_04;
    auVar3._0_8_ = uVar12;
    auVar3._12_4_ = extraout_XMM0_Dd_05;
    auVar14 = blendps(local_78,auVar3,2);
    iVar8 = 0;
    do {
      local_80 = '\0';
      local_88 = plVar6;
      local_68 = (undefined1  [8])(**(code **)(*unaff_RDI + 0x638))(auVar13._0_4_,&local_88);
      fStack_60 = (float)extraout_XMM0_Dc_05;
      fStack_5c = (float)extraout_XMM0_Dd_06;
      local_78 = auVar14;
      if ((local_80 != '\0') && (local_88 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      uVar12 = (**(code **)(*unaff_RDI + 0x620))();
      auVar16._0_4_ = (float)uVar12 + local_78._0_4_ + local_68._0_4_;
      auVar16._4_4_ = (float)((ulonglong)uVar12 >> 0x20) + local_78._4_4_ + local_68._4_4_;
      auVar16._8_4_ = extraout_XMM0_Dc_06 + local_78._8_4_ + local_68._8_4_;
      auVar16._12_4_ = extraout_XMM0_Dd_07 + local_78._12_4_ + local_68._12_4_;
      auVar13 = blendps(auVar16,_local_68,0xd);
      iVar8 = iVar8 + 1;
      auVar14 = local_78;
    } while (iVar5 != iVar8);
  }
  _local_68 = auVar13;
  (**(code **)(*plVar6 + 0x4d8))();
  plVar4 = local_38;
  plVar7 = local_50;
  uVar12 = (**(code **)(*unaff_RDI + 0x628))();
  auVar17._0_4_ = (float)local_68._0_4_ + (float)uVar12;
  auVar17._4_4_ = (float)local_68._4_4_ + (float)((ulonglong)uVar12 >> 0x20);
  auVar17._8_4_ = fStack_60 + extraout_XMM0_Dc_07;
  auVar17._12_4_ = fStack_5c + extraout_XMM0_Dd_08;
  auVar13 = blendps(local_78,auVar17,2);
  (**(code **)(*plVar6 + 0x4d0))(0);
  if (plVar6 == plVar7) {
    (**(code **)(*plVar6 + 0x4d8))();
    (**(code **)(*plVar4 + 0x4d0))();
    plVar2 = (longlong *)*unaff_RSI;
    (**(code **)(*plVar6 + 0x4d8))();
    (**(code **)(*plVar2 + 0x4d0))();
  }
  (**(code **)(*plVar7 + 0x4d8))();
  local_78 = auVar13;
  FUN_00d50b20();
  if ((char)local_48 != '\0') {
    FUN_00d50b20();
  }
  if (plVar4 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return local_78._0_8_;
}


