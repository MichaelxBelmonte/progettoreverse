// Function: FUN_00e3cd10
// Address: 00e3cd10
// Size: 589 bytes
// Class: GNData
// String references:
//   "GNData"
//   "%@"
//   ", "


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00e3cd10(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  undefined8 *puVar7;
  int iVar8;
  undefined8 *unaff_RDI;
  longlong lVar9;
  undefined4 uVar10;
  undefined8 *local_68;
  undefined4 local_60;
  longlong local_58;
  char local_50;
  longlong local_48;
  char local_40;
  undefined4 local_34;
  
  puVar7 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar7 = &DAT_025795a8;
  (*DAT_025795c0)();
  plVar1 = (longlong *)*param_2;
  if (DAT_026d0220 == '\0') {
    iVar6 = ___cxa_guard_acquire();
    if (iVar6 != 0) {
      _DAT_02789148 = FUN_00d4fe50();
      DAT_02789130 = "GNData";
      _DAT_02789138 = 0x28;
      _DAT_02789140 = FUN_000378a0;
      _DAT_02789150 = 0;
      uRam0000000002789158 = 0;
      _DAT_02789160 = 0;
      uRam0000000002789168 = 0;
      _DAT_02789170 = 0;
      uRam0000000002789178 = 0;
      _DAT_02789180 = 0;
      uRam0000000002789188 = 0;
      _DAT_02789190 = 0;
      uRam0000000002789198 = 0;
      _DAT_027891a0 = 0;
      uRam00000000027891a8 = 0;
      _DAT_027891b0 = 0;
      uRam00000000027891b8 = 0;
      _DAT_027891c0 = 0;
      uRam00000000027891c8 = 0;
      _DAT_027891d0 = 0;
      uRam00000000027891d8 = 0;
      _DAT_027891e0 = 0;
      uRam00000000027891e8 = 0;
      _DAT_027891f0 = 0;
      ___cxa_guard_release();
    }
  }
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x360))();
    cVar5 = FUN_00e85ea0();
    if (cVar5 != '\0') goto LAB_00e3cd90;
  }
  param_2 = &DAT_02802688;
LAB_00e3cd90:
  uVar3 = DAT_025908a0;
  lVar2 = *param_2;
  if ((lVar2 != 0) && (3 < *(int *)(lVar2 + 0x18))) {
    lVar9 = 0;
    do {
      local_34 = *(undefined4 *)(*(longlong *)(lVar2 + 0x10) + lVar9 * 4);
      if ((int)lVar9 != 0) {
        FUN_00d94d80(local_34,uVar3);
      }
      uVar10 = (**(code **)(*DAT_028a8be0 + 0x378))(local_34);
      lVar4 = local_48;
      local_60 = 1;
      local_68 = &DAT_024c5048;
      local_50 = 0;
      if (local_48 != 0) {
        uVar10 = FUN_00d50b00();
      }
      local_58 = lVar4;
      local_50 = '\x01';
      FUN_00d94d80(uVar10,&local_68);
      local_68 = &DAT_024c5048;
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      iVar6 = *(int *)(lVar2 + 0x18);
      iVar8 = iVar6 + 3;
      if (-1 < iVar6) {
        iVar8 = iVar6;
      }
      lVar9 = lVar9 + 1;
    } while ((int)lVar9 < iVar8 >> 2);
  }
  FUN_00d8c7d0();
  *unaff_RDI = puVar7;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}


