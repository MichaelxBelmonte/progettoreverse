// Function: FUN_00bce900
// Address: 00bce900
// Size: 3626 bytes
// Class: GNPlugInWrapperDelegate
// String references:
//   "GNPlugInWrapperDelegate"


/* WARNING: Removing unreachable block (ram,0x00bcf2d3) */
/* WARNING: Removing unreachable block (ram,0x00bcf2df) */
/* WARNING: Removing unreachable block (ram,0x00bcf5a3) */
/* WARNING: Removing unreachable block (ram,0x00bcf5ac) */
/* WARNING: Removing unreachable block (ram,0x00bcf4e1) */
/* WARNING: Removing unreachable block (ram,0x00bcf4ea) */
/* WARNING: Removing unreachable block (ram,0x00bcf41f) */
/* WARNING: Removing unreachable block (ram,0x00bcf428) */
/* WARNING: Removing unreachable block (ram,0x00bcf44c) */
/* WARNING: Removing unreachable block (ram,0x00bcf50e) */
/* WARNING: Removing unreachable block (ram,0x00bcf65a) */
/* WARNING: Removing unreachable block (ram,0x00bcf663) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00bce900(void)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  bool bVar11;
  undefined8 uVar12;
  longlong *local_a8;
  char local_a0;
  longlong local_40;
  char local_38;
  
  unaff_RDI[0xd] = (longlong)unaff_RSI;
  FUN_01f27fe0();
  if ((DAT_026cbca0 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
    _DAT_026cbc88 = "GNPlugInWrapperDelegate";
    DAT_026cbc98 = 0;
    _DAT_026cbc90 = 0;
    ___cxa_guard_release();
  }
  if (local_a8 == (longlong *)0x0) {
    lVar6 = 0;
  }
  else {
    uVar12 = (**(code **)(*local_a8 + 0x360))();
    lVar6 = FUN_00e86120(uVar12,1);
  }
  (**(code **)(*(longlong *)((longlong)local_a8 + lVar6) + 0x20))();
  lVar6 = unaff_RDI[5];
  lVar7 = lVar6;
  if (lVar6 != local_40) {
    lVar7 = local_40;
    if (local_38 == '\0') {
      if (local_40 == 0) {
        lVar7 = 0;
        goto LAB_00bce991;
      }
      FUN_00d50b00();
      lVar6 = unaff_RDI[5];
      unaff_RDI[5] = local_40;
    }
    else {
      local_38 = '\0';
LAB_00bce991:
      unaff_RDI[5] = lVar7;
    }
    if (lVar6 != 0) {
      FUN_00d50b20();
      lVar7 = local_40;
    }
  }
  if ((local_38 != '\0') && (lVar7 != 0)) {
    FUN_00d50b20();
  }
  if ((local_a0 != '\0') && (local_a8 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((DAT_028a5780 == (longlong *)0x0) || (DAT_028a5789 == '\0')) {
    FUN_00e8cb50();
    if (DAT_028a5780 == (longlong *)0x0) {
      plVar10 = (longlong *)FUN_00e8fc40();
      FUN_00d4ff40();
      *plVar10 = (longlong)&DAT_02573318;
      (*DAT_02573330)();
      if (DAT_028a5770 == plVar10) {
        bVar2 = false;
        bVar1 = false;
      }
      else {
        bVar2 = true;
        bVar1 = true;
        bVar11 = DAT_028a5770 != (longlong *)0x0;
        DAT_028a5770 = plVar10;
        if (bVar11) {
          FUN_00d50b20();
        }
      }
      if (DAT_028a5778 == '\0') {
        DAT_028a5778 = '\x01';
        FUN_00e8cb90();
        bVar1 = bVar2;
      }
      if (!bVar1) {
        FUN_00d50b20();
      }
      plVar10 = (longlong *)FUN_00e8fc40();
      FUN_00bdab20();
      (**(code **)(*plVar10 + 0x18))();
      if (DAT_028a5780 == plVar10) {
        bVar2 = false;
        bVar1 = false;
      }
      else {
        bVar2 = true;
        bVar1 = true;
        bVar11 = DAT_028a5780 != (longlong *)0x0;
        DAT_028a5780 = plVar10;
        if (bVar11) {
          FUN_00d50b20();
        }
      }
      if (DAT_028a5788 == '\0') {
        DAT_028a5788 = '\x01';
        FUN_00e8cb90();
        bVar1 = bVar2;
      }
      if (!bVar1) {
        FUN_00d50b20();
      }
      puVar8 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar8 = &DAT_02578b00;
      (*DAT_02578b18)();
      if (DAT_028a5790 == puVar8) {
        bVar2 = false;
        bVar1 = false;
      }
      else {
        bVar2 = true;
        bVar1 = true;
        bVar11 = DAT_028a5790 != (undefined8 *)0x0;
        DAT_028a5790 = puVar8;
        if (bVar11) {
          FUN_00d50b20();
        }
      }
      if (DAT_028a5798 == '\0') {
        DAT_028a5798 = '\x01';
        FUN_00e8cb90();
        bVar1 = bVar2;
      }
      if (!bVar1) {
        FUN_00d50b20();
      }
      DAT_028a5789 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028a5789 = '\x01';
      FUN_00e8cb70();
    }
  }
  plVar9 = DAT_028a5780;
  plVar10 = (longlong *)unaff_RDI[0xb];
  if (plVar10 != DAT_028a5780) {
    if (DAT_028a5780 != (longlong *)0x0) {
      FUN_00d50b00();
    }
    unaff_RDI[0xb] = (longlong)plVar9;
    if (plVar10 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  plVar9 = (longlong *)FUN_00e8fc40();
  FUN_00bdbf50();
  (**(code **)(*plVar9 + 0x18))();
  plVar10 = (longlong *)unaff_RDI[0xc];
  if (plVar10 == plVar9) {
    FUN_00d50b20();
  }
  else {
    unaff_RDI[0xc] = (longlong)plVar9;
    if (plVar10 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  lVar6 = unaff_RDI[5];
  if (lVar6 != 0) {
    FUN_00d50b00();
  }
  FUN_00b690f0();
  if (lVar6 != 0) {
    FUN_00d50b20();
  }
  (**(code **)(*DAT_028a5770 + 0x368))();
  lVar6 = unaff_RDI[0xc];
  if (lVar6 != 0) {
    FUN_00d50b00();
  }
  FUN_00b68030();
  if (lVar6 != 0) {
    FUN_00d50b20();
  }
  (**(code **)(*DAT_028a5770 + 0x378))();
  FUN_00b33530();
  FUN_00b335a0();
  (**(code **)(*(longlong *)unaff_RDI[5] + 0x3a0))();
  (**(code **)(*(longlong *)unaff_RDI[5] + 0x398))(DAT_02410f78);
  (**(code **)(unaff_RDI[2] + 0x10))();
  FUN_00d50b00();
  FUN_00b32c10();
  if (unaff_RDI + 2 != (longlong *)0x0) {
    (**(code **)(unaff_RDI[2] + 0x10))();
    FUN_00d50b20();
  }
  (**(code **)(unaff_RDI[3] + 0x10))();
  FUN_00d50b00();
  FUN_00b34cd0();
  if (unaff_RDI + 3 != (longlong *)0x0) {
    (**(code **)(unaff_RDI[3] + 0x10))();
    FUN_00d50b20();
  }
  if (unaff_RDI[0xd] == 0) {
    return;
  }
  plVar10 = (longlong *)FUN_00e8fc40();
  FUN_0000ee70();
  (**(code **)(*plVar10 + 0x18))();
  FUN_00b30410();
  uVar12 = FUN_00003080();
  FUN_00d91a70(uVar12,1);
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  FUN_00b30350();
  if (local_40 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  uVar12 = FUN_00003040();
  FUN_00d91a70(uVar12,1);
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  FUN_00b303c0();
  if (local_40 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  uVar3 = (**(code **)(*unaff_RSI + 0x68))();
  switch(uVar3) {
  case 0xb:
    FUN_00b303b0();
    lVar6 = DAT_027662b8;
    if (DAT_027662b8 != 0) {
      FUN_00d50b00();
    }
    lVar7 = DAT_026fb928;
    if (DAT_026fb928 != 0) {
      FUN_00d50b00();
    }
    FUN_00e7e120();
    if (lVar7 != 0) {
      FUN_00d50b20();
    }
    if (lVar6 != 0) {
      FUN_00d50b20();
    }
    break;
  case 0xc:
    FUN_00b303b0();
    lVar6 = DAT_027662a8;
    if (DAT_027662a8 != 0) {
      FUN_00d50b00();
    }
    lVar7 = DAT_026fb928;
    if (DAT_026fb928 != 0) {
      FUN_00d50b00();
    }
    FUN_00e7e120();
    if (lVar7 != 0) {
      FUN_00d50b20();
    }
    if (lVar6 != 0) {
      FUN_00d50b20();
    }
    break;
  default:
    FUN_00d50b20();
    lVar6 = DAT_02766278;
    if (DAT_02766278 != 0) {
      FUN_00d50b00();
    }
    lVar7 = DAT_026fb928;
    if (DAT_026fb928 != 0) {
      FUN_00d50b00();
    }
    FUN_00e7e120();
    if (lVar7 != 0) {
      FUN_00d50b20();
    }
    bVar1 = true;
    if (lVar6 != 0) {
      FUN_00d50b20();
    }
    plVar10 = (longlong *)0x0;
    goto LAB_00bcf2ac;
  case 0xf:
    FUN_00b303b0();
    lVar6 = DAT_027662c0;
    if (DAT_027662c0 != 0) {
      FUN_00d50b00();
    }
    lVar7 = DAT_026fb928;
    if (DAT_026fb928 != 0) {
      FUN_00d50b00();
    }
    FUN_00e7e120();
    if (lVar7 != 0) {
      FUN_00d50b20();
    }
    if (lVar6 != 0) {
      FUN_00d50b20();
    }
    break;
  case 0x10:
    FUN_00b303b0();
    lVar6 = DAT_027662b0;
    if (DAT_027662b0 != 0) {
      FUN_00d50b00();
    }
    lVar7 = DAT_026fb928;
    if (DAT_026fb928 != 0) {
      FUN_00d50b00();
    }
    FUN_00e7e120();
    if (lVar7 != 0) {
      FUN_00d50b20();
    }
    if (lVar6 != 0) {
      FUN_00d50b20();
    }
  }
  bVar1 = false;
LAB_00bcf2ac:
  uVar12 = FUN_00b34ba0();
  FUN_00bcdd30(uVar12,0x200);
  lVar6 = unaff_RDI[7];
  lVar7 = lVar6;
  if (lVar6 == local_40) goto LAB_00bcf352;
  lVar7 = local_40;
  if (local_38 == '\0') {
    if (local_40 == 0) {
      lVar7 = 0;
      goto LAB_00bcf310;
    }
    FUN_00d50b00();
    lVar6 = unaff_RDI[7];
    unaff_RDI[7] = local_40;
  }
  else {
    local_38 = '\0';
LAB_00bcf310:
    unaff_RDI[7] = lVar7;
  }
  if (lVar6 != 0) {
    FUN_00d50b20();
    lVar7 = local_40;
  }
LAB_00bcf352:
  if ((local_38 != '\0') && (lVar7 != 0)) {
    FUN_00d50b20();
  }
  FUN_00b34c20();
  (**(code **)(*unaff_RDI + 0x3d0))();
  lVar6 = DAT_027662c8;
  if ((local_38 == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
    lVar6 = DAT_027662c8;
  }
  DAT_027662c8 = lVar6;
  if (lVar6 != 0) {
    FUN_00d50b00();
  }
  FUN_00e7e120();
  if (lVar6 != 0) {
    FUN_00d50b20();
  }
  if (local_40 != 0) {
    FUN_00d50b20();
  }
  (**(code **)(*unaff_RDI + 0x3d8))();
  if (local_40 != 0) {
    FUN_00d50b00();
  }
  lVar6 = DAT_027662d0;
  if (DAT_027662d0 != 0) {
    FUN_00d50b00();
  }
  FUN_00e7e120();
  if (lVar6 != 0) {
    FUN_00d50b20();
  }
  if (local_40 != 0) {
    FUN_00d50b20();
  }
  (**(code **)(*unaff_RDI + 0x3e0))();
  if (local_40 != 0) {
    FUN_00d50b00();
  }
  lVar6 = DAT_027662d8;
  if (DAT_027662d8 != 0) {
    FUN_00d50b00();
  }
  FUN_00e7e120();
  if (lVar6 != 0) {
    FUN_00d50b20();
  }
  if (local_40 != 0) {
    FUN_00d50b20();
  }
  if ((DAT_02802504 == 0) &&
     (DAT_02802504 = (**(code **)(*(longlong *)unaff_RDI[0xd] + 0xb8))(), DAT_02802504 == 0)) {
    (**(code **)(*unaff_RDI + 0x3d0))();
    FUN_00d99d60();
    lVar6 = DAT_027662e0;
    if (DAT_027662e0 != 0) {
      FUN_00d50b00();
    }
    uVar4 = FUN_00d90eb0();
    if (lVar6 != 0) {
      FUN_00d50b20();
    }
    if ((local_a0 != '\0') && (local_a8 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    DAT_02802504 = (uVar4 & 0xff) * 2 + -1;
  }
  iVar5 = (**(code **)(*(longlong *)unaff_RDI[0xd] + 0xb0))();
  if ((iVar5 == 1) || (DAT_02802510 != '\0')) {
    FUN_00b67ff0();
  }
  if (!bVar1 && plVar10 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}


