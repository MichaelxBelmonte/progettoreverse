// Function: FUN_005039a0
// Address: 005039a0
// Size: 2394 bytes
// Class: MUPercussivePitchSystem
// String references:
//   "MUPercussivePitchSystem"
//   "MUScalePitchSystem"


/* WARNING: Removing unreachable block (ram,0x0050412a) */
/* WARNING: Removing unreachable block (ram,0x00504133) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005039a0(undefined8 param_1,byte param_2)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong **pplVar7;
  undefined4 unaff_ESI;
  longlong *unaff_RDI;
  undefined8 uVar8;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar9 [16];
  longlong *local_60;
  char local_58;
  longlong *local_50;
  longlong *local_48;
  longlong *local_40;
  char local_38;
  
  local_50 = (longlong *)CONCAT44(local_50._4_4_,unaff_ESI);
  FUN_0197b900();
  (**(code **)(*local_60 + 0xa28))();
  plVar5 = local_40;
  local_48 = local_40;
  if (local_38 == '\0') {
    if (local_40 == (longlong *)0x0) {
      local_48 = (longlong *)0x0;
      plVar5 = (longlong *)0x0;
    }
    else {
      FUN_00d50b00();
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((DAT_027c0160 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
    _DAT_0270ab28 = FUN_0015ea50();
    _DAT_0270ab10 = "MUScalePitchSystem";
    _DAT_0270ab18 = 0x78;
    _DAT_0270ab20 = FUN_0015ecf0;
    _DAT_0270ab30 = 0;
    uRam000000000270ab38 = 0;
    _DAT_0270ab40 = 0;
    uRam000000000270ab48 = 0;
    _DAT_0270ab50 = 0;
    uRam000000000270ab58 = 0;
    _DAT_0270ab60 = 0;
    uRam000000000270ab68 = 0;
    _DAT_0270ab70 = 0;
    uRam000000000270ab78 = 0;
    _DAT_0270ab80 = 0;
    uRam000000000270ab88 = 0;
    _DAT_0270ab90 = 0;
    uRam000000000270ab98 = 0;
    _DAT_0270aba0 = 0;
    uRam000000000270aba8 = 0;
    _DAT_0270abb0 = 0;
    uRam000000000270abb8 = 0;
    _DAT_0270abc0 = 0;
    uRam000000000270abc8 = 0;
    _DAT_0270abd0 = 0;
    ___cxa_guard_release();
  }
  if (plVar5 == (longlong *)0x0) {
LAB_00503a43:
    if (DAT_02802688 != 0) goto LAB_00503a54;
LAB_00503b0a:
    plVar5 = local_48;
    if ((DAT_027c0150 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
      _DAT_0270acc8 = FUN_0015ea50();
      _DAT_0270acb0 = "MUPercussivePitchSystem";
      _DAT_0270acb8 = 0x58;
      _DAT_0270acc0 = FUN_0015eca0;
      _DAT_0270acd0 = 0;
      uRam000000000270acd8 = 0;
      _DAT_0270ace0 = 0;
      uRam000000000270ace8 = 0;
      _DAT_0270acf0 = 0;
      uRam000000000270acf8 = 0;
      _DAT_0270ad00 = 0;
      uRam000000000270ad08 = 0;
      _DAT_0270ad10 = 0;
      uRam000000000270ad18 = 0;
      _DAT_0270ad20 = 0;
      uRam000000000270ad28 = 0;
      _DAT_0270ad30 = 0;
      uRam000000000270ad38 = 0;
      _DAT_0270ad40 = 0;
      uRam000000000270ad48 = 0;
      _DAT_0270ad50 = 0;
      uRam000000000270ad58 = 0;
      _DAT_0270ad60 = 0;
      uRam000000000270ad68 = 0;
      _DAT_0270ad70 = 0;
      ___cxa_guard_release();
    }
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x360))();
      cVar3 = FUN_00e85ea0();
      if (cVar3 == '\0') goto LAB_00503b50;
      if (local_48 != (longlong *)0x0) goto LAB_00503ea8;
      goto LAB_00503f0c;
    }
LAB_00503b50:
    if (DAT_02802688 == 0) goto LAB_00503f0c;
LAB_00503ea8:
    pplVar7 = &local_40;
    FUN_01d98320();
    plVar5 = local_40;
    FUN_0050ef30();
    if (plVar5 == (longlong *)0x0) {
LAB_00503ee4:
      pplVar7 = (longlong **)&DAT_02802688;
    }
    else {
      (**(code **)(*plVar5 + 0x360))();
      cVar3 = FUN_00e85ea0();
      if (cVar3 == '\0') goto LAB_00503ee4;
    }
    plVar5 = *pplVar7;
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar5 != (longlong *)0x0) goto LAB_00503f0c;
    plVar5 = (longlong *)FUN_00e8fc40();
    FUN_0006daf0();
    plVar5[0x28] = 0;
    *(undefined4 *)(plVar5 + 0x29) = 0;
    plVar5[0x2a] = 0;
    plVar5[0x2b] = 0;
    *(undefined4 *)(plVar5 + 0x2c) = 0;
    *plVar5 = (longlong)&DAT_02656f08;
    plVar5[2] = (longlong)&DAT_02657878;
    plVar5[0x27] = (longlong)&DAT_026578b8;
    (*DAT_02656f20)();
  }
  else {
    (**(code **)(*plVar5 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') goto LAB_00503a43;
    if (local_48 == (longlong *)0x0) goto LAB_00503b0a;
LAB_00503a54:
    pplVar7 = &local_40;
    FUN_01d98320();
    plVar5 = local_40;
    FUN_00275460();
    if (plVar5 == (longlong *)0x0) {
LAB_00503a90:
      pplVar7 = (longlong **)&DAT_02802688;
    }
    else {
      (**(code **)(*plVar5 + 0x360))();
      cVar3 = FUN_00e85ea0();
      if (cVar3 == '\0') goto LAB_00503a90;
    }
    plVar5 = *pplVar7;
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((plVar5 != (longlong *)0x0 & (param_2 ^ 1)) != 0) {
LAB_00503f0c:
      bVar2 = true;
      bVar1 = true;
      plVar5 = (longlong *)0x0;
      goto joined_r0x00504168;
    }
    plVar5 = (longlong *)FUN_00e8fc40();
    FUN_0006daf0();
    plVar5[0x28] = 0;
    *(undefined4 *)(plVar5 + 0x29) = 0;
    plVar5[0x2a] = 0;
    plVar5[0x2b] = 0;
    *(undefined4 *)(plVar5 + 0x2c) = 0;
    *plVar5 = (longlong)&DAT_026449b8;
    plVar5[2] = (longlong)&DAT_02645458;
    plVar5[0x27] = (longlong)&DAT_02645498;
    plVar5[0x2d] = (longlong)&DAT_026454e8;
    plVar5[0x2e] = (longlong)&DAT_02645518;
    plVar5[0x2f] = (longlong)&DAT_02645550;
    *(undefined4 *)((longlong)plVar5 + 0x1dc) = 0;
    *(undefined2 *)(plVar5 + 0x3c) = 0;
    plVar5[99] = 0;
    plVar5[0x30] = 0;
    *(undefined1 *)(plVar5 + 0x31) = 0;
    *(undefined8 *)((longlong)plVar5 + 0x18c) = 0;
    *(undefined8 *)((longlong)plVar5 + 0x194) = 0;
    *(undefined1 *)((longlong)plVar5 + 0x19c) = 0;
    plVar5[0x34] = 0;
    plVar5[0x35] = 0;
    *(undefined8 *)((longlong)plVar5 + 0x1a9) = 0;
    *(undefined8 *)((longlong)plVar5 + 0x1b1) = 0;
    *(undefined8 *)((longlong)plVar5 + 0x1cb) = 0;
    *(undefined8 *)((longlong)plVar5 + 0x1d3) = 0;
    *(undefined8 *)((longlong)plVar5 + 0x1bc) = 0;
    *(undefined8 *)((longlong)plVar5 + 0x1c4) = 0;
    *(undefined8 *)((longlong)plVar5 + 500) = 0;
    *(undefined8 *)((longlong)plVar5 + 0x1fc) = 0;
    *(undefined8 *)((longlong)plVar5 + 0x1e4) = 0;
    *(undefined8 *)((longlong)plVar5 + 0x1ec) = 0;
    *(undefined8 *)((longlong)plVar5 + 0x203) = 0;
    *(undefined8 *)((longlong)plVar5 + 0x279) = 0;
    *(undefined8 *)((longlong)plVar5 + 0x281) = 0;
    *(undefined8 *)((longlong)plVar5 + 0x26c) = 0;
    *(undefined8 *)((longlong)plVar5 + 0x274) = 0;
    *(undefined8 *)((longlong)plVar5 + 0x25c) = 0;
    *(undefined8 *)((longlong)plVar5 + 0x264) = 0;
    *(undefined8 *)((longlong)plVar5 + 0x24c) = 0;
    *(undefined8 *)((longlong)plVar5 + 0x254) = 0;
    *(undefined8 *)((longlong)plVar5 + 0x23c) = 0;
    *(undefined8 *)((longlong)plVar5 + 0x244) = 0;
    *(undefined8 *)((longlong)plVar5 + 0x22c) = 0;
    *(undefined8 *)((longlong)plVar5 + 0x234) = 0;
    *(undefined8 *)((longlong)plVar5 + 0x21c) = 0;
    *(undefined8 *)((longlong)plVar5 + 0x224) = 0;
    *(undefined8 *)((longlong)plVar5 + 0x20c) = 0;
    *(undefined8 *)((longlong)plVar5 + 0x214) = 0;
    plVar5[0x54] = 0;
    plVar5[0x55] = 0;
    plVar5[0x52] = 0;
    plVar5[0x53] = 0;
    *(undefined1 *)(plVar5 + 0x56) = 0;
    plVar5[0x57] = 0;
    plVar5[0x58] = 0;
    *(undefined8 *)((longlong)plVar5 + 0x2c1) = 0;
    *(undefined8 *)((longlong)plVar5 + 0x2c9) = 0;
    plVar5[0x5f] = 0;
    plVar5[0x60] = 0;
    plVar5[0x5d] = 0;
    plVar5[0x5e] = 0;
    plVar5[0x5b] = 0;
    plVar5[0x5c] = 0;
    *(undefined8 *)((longlong)plVar5 + 0x305) = 0;
    *(undefined4 *)((longlong)plVar5 + 0x313) = 0;
    *(undefined4 *)(plVar5 + 0x62) = 0;
    (*DAT_026449d0)();
    FUN_01b150d0();
    FUN_01b15090();
    FUN_01b28220();
    FUN_01b182c0();
    plVar6 = DAT_02709e30;
    if (DAT_02709e30 != (longlong *)0x0) {
      FUN_00d50b00();
    }
    local_50 = plVar6;
    FUN_00e7d6f0();
    uVar8 = FUN_0071a120();
    if ((((local_38 == '\0') && (local_40 != (longlong *)0x0)) &&
        (uVar8 = FUN_00d50b00(), local_38 != '\0')) && (local_40 != (longlong *)0x0)) {
      uVar8 = FUN_00d50b20();
    }
    local_60 = local_50;
    local_58 = '\0';
    FUN_000175c0(uVar8,&local_60);
    plVar6 = local_40;
    if (local_38 == '\0') {
      if (((local_40 != (longlong *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
         (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
    }
    if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar6 != (longlong *)0x0) {
      local_38 = '\0';
      local_40 = plVar6;
      FUN_00c70bc0();
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    FUN_00d50b20();
    FUN_01b28af0();
    if (local_50 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if (unaff_RDI[0x3f] != 0) {
      FUN_00249410();
      FUN_01b15090();
      FUN_00248dc0();
      FUN_01b150d0();
    }
  }
  FUN_01d98320();
  plVar6 = local_40;
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar6 != (longlong *)0x0) {
    FUN_01d98320();
    FUN_00d50130();
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  plVar6 = (longlong *)FUN_00e8fc40();
  FUN_0006daf0();
  (**(code **)(*plVar6 + 0x18))();
  FUN_00504610();
  FUN_00d50b20();
  if ((unaff_RDI[0x45] != 0) && (FUN_00d50130(), unaff_RDI[0x45] != 0)) {
    unaff_RDI[0x45] = 0;
    FUN_00d50b20();
  }
  uVar8 = (**(code **)(*plVar5 + 0x938))();
  auVar9._8_8_ = extraout_XMM0_Qb;
  auVar9._0_8_ = uVar8;
  auVar9 = blendps(auVar9,_DAT_023b4a30,0xe);
  (**(code **)(*plVar5 + 0x4d0))(0,auVar9._0_8_);
  FUN_01d980f0();
  (**(code **)(*unaff_RDI + 0x9f8))();
  (**(code **)(*unaff_RDI + 0x928))();
  FUN_00504770();
  bVar2 = false;
  bVar1 = false;
joined_r0x00504168:
  if (local_48 != (longlong *)0x0) {
    FUN_00d50b20();
    bVar1 = bVar2;
  }
  if (!bVar1 && plVar5 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}


