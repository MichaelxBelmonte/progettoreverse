// Function: FUN_006c3b00
// Address: 006c3b00
// Size: 2328 bytes
// Class: MDWorkspaceView
// String references:
//   "MDWorkspaceView"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006c3b00(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  longlong **pplVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  int unaff_ESI;
  longlong unaff_RDI;
  longlong lVar7;
  longlong *plVar8;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 uVar9;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  longlong *local_e8;
  char local_e0;
  longlong *local_d8;
  char local_d0;
  longlong *local_c8;
  char local_c0;
  undefined8 *local_b8;
  char local_b0;
  longlong *local_a8;
  char local_a0;
  longlong *local_98;
  char local_90;
  undefined8 *local_88;
  char local_80;
  longlong *local_78;
  int local_6c;
  longlong *local_68;
  char local_60;
  longlong *local_58;
  char local_50;
  longlong *local_40;
  char local_38;
  
  lVar7 = (longlong)unaff_ESI;
  plVar6 = *(longlong **)(*(longlong *)(*(longlong *)(unaff_RDI + 0x38) + 0x10) + lVar7 * 8);
  local_38 = '\0';
  local_40 = plVar6;
  if ((DAT_026fddd0 == '\0') && (iVar2 = ___cxa_guard_acquire(), iVar2 != 0)) {
    _DAT_026d9988 = FUN_0006d940();
    _DAT_026d9970 = "MDWorkspaceView";
    _DAT_026d9978 = 0x188;
    _DAT_026d9980 = FUN_000a3150;
    _DAT_026d9990 = 0;
    uRam00000000026d9998 = 0;
    _DAT_026d99a0 = 0;
    _DAT_026d9a18 = 0;
    uRam00000000026d9a20 = 0;
    _DAT_026d9a28 = 0;
    DAT_026d9a2a = 1;
    _DAT_026d99a8 = 0;
    uRam00000000026d99b0 = 0;
    _DAT_026d99b8 = 0;
    uRam00000000026d99c0 = 0;
    _DAT_026d99c8 = 0;
    uRam00000000026d99d0 = 0;
    _DAT_026d99d8 = 0;
    uRam00000000026d99e0 = 0;
    _DAT_026d99e8 = 0;
    uRam00000000026d99f0 = 0;
    _DAT_026d99f8 = 0;
    uRam00000000026d9a00 = 0;
    _DAT_026d9a08 = 0;
    uRam00000000026d9a10 = 0;
    DAT_026d9a33 = 0;
    _DAT_026d9a2b = 0;
    ___cxa_guard_release();
  }
  if (plVar6 == (longlong *)0x0) {
LAB_006c3b63:
    pplVar4 = &DAT_02802688;
    plVar6 = DAT_02802688;
    if (DAT_02802690 != '\0') goto LAB_006c3b73;
LAB_006c3b94:
    if (plVar6 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    (**(code **)(*plVar6 + 0x360))();
    cVar1 = FUN_00e85ea0();
    if (cVar1 == '\0') goto LAB_006c3b63;
    pplVar4 = &local_40;
    plVar6 = local_40;
    if (local_38 == '\0') goto LAB_006c3b94;
LAB_006c3b73:
    *(undefined1 *)(pplVar4 + 1) = 0;
  }
  local_78 = plVar6;
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar6 == (longlong *)0x0) goto LAB_006c40d8;
  local_6c = unaff_ESI;
  FUN_003b6560();
  (**(code **)(*plVar6 + 0x360))();
  cVar1 = FUN_00e85ea0();
  plVar8 = plVar6;
  if (cVar1 == '\0') {
    plVar8 = DAT_02802688;
  }
  if (plVar8 == (longlong *)0x0) {
    local_d0 = '\0';
    local_d8 = plVar6;
    cVar1 = (**(code **)(**(longlong **)(unaff_RDI + 400) + 0x378))();
    iVar2 = local_6c;
    if ((local_d0 != '\0') && (local_d8 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (cVar1 == '\0') goto LAB_006c40d8;
    plVar6 = *(longlong **)(*(longlong *)(*(longlong *)(unaff_RDI + 0x38) + 0x10) + 8 + lVar7 * 8);
    local_38 = '\0';
    local_40 = plVar6;
    if ((DAT_026fddd0 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
      _DAT_026d9988 = FUN_0006d940();
      _DAT_026d9970 = "MDWorkspaceView";
      _DAT_026d9978 = 0x188;
      _DAT_026d9980 = FUN_000a3150;
      _DAT_026d9990 = 0;
      uRam00000000026d9998 = 0;
      _DAT_026d99a0 = 0;
      _DAT_026d9a18 = 0;
      uRam00000000026d9a20 = 0;
      _DAT_026d9a28 = 0;
      DAT_026d9a2a = 1;
      _DAT_026d99a8 = 0;
      uRam00000000026d99b0 = 0;
      _DAT_026d99b8 = 0;
      uRam00000000026d99c0 = 0;
      _DAT_026d99c8 = 0;
      uRam00000000026d99d0 = 0;
      _DAT_026d99d8 = 0;
      uRam00000000026d99e0 = 0;
      _DAT_026d99e8 = 0;
      uRam00000000026d99f0 = 0;
      _DAT_026d99f8 = 0;
      uRam00000000026d9a00 = 0;
      _DAT_026d9a08 = 0;
      uRam00000000026d9a10 = 0;
      DAT_026d9a33 = 0;
      _DAT_026d9a2b = 0;
      ___cxa_guard_release();
      iVar2 = local_6c;
    }
    if (plVar6 == (longlong *)0x0) {
      pplVar4 = &DAT_02802688;
      plVar6 = DAT_02802688;
      cVar1 = DAT_02802690;
joined_r0x006c3e82:
      if (cVar1 != '\0') goto LAB_006c3e84;
LAB_006c3e97:
      if (plVar6 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      (**(code **)(*plVar6 + 0x360))();
      cVar1 = FUN_00e85ea0();
      if (cVar1 != '\0') {
        pplVar4 = &local_40;
        plVar6 = local_40;
        cVar1 = local_38;
        goto joined_r0x006c3e82;
      }
      pplVar4 = &DAT_02802688;
      plVar6 = DAT_02802688;
      if (DAT_02802690 == '\0') goto LAB_006c3e97;
LAB_006c3e84:
      *(undefined1 *)(pplVar4 + 1) = 0;
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    local_c0 = '\0';
    local_c8 = plVar6;
    cVar1 = (**(code **)(**(longlong **)(unaff_RDI + 400) + 0x378))();
    if ((local_c0 != '\0') && (local_c8 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (cVar1 != '\0') {
      puVar5 = (undefined8 *)FUN_00e8fc40();
      FUN_0006daf0();
      *(undefined4 *)((longlong)puVar5 + 0x13b) = 0;
      *(undefined4 *)(puVar5 + 0x27) = 0;
      puVar5[0x28] = 0;
      puVar5[0x29] = 0;
      puVar5[0x2a] = 0;
      puVar5[0x2b] = 0;
      puVar5[0x2c] = 0;
      puVar5[0x2d] = 0;
      puVar5[0x2e] = 0;
      puVar5[0x2f] = 0;
      puVar5[0x30] = 0;
      *puVar5 = &DAT_02501bf8;
      puVar5[2] = &DAT_025025f0;
      *(undefined1 *)(puVar5 + 0x31) = 0;
      *(undefined8 *)((longlong)puVar5 + 0x1a4) = 0;
      puVar5[0x32] = 0;
      puVar5[0x33] = 0;
      *(undefined1 *)(puVar5 + 0x34) = 0;
      (*DAT_02501c10)();
      if (*(longlong **)(unaff_RDI + 0x1a0) != (longlong *)0x0) {
        local_b0 = '\0';
        local_b8 = puVar5;
        (**(code **)(**(longlong **)(unaff_RDI + 0x1a0) + 0x20))();
        if ((local_b0 != '\0') && (local_b8 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
      }
      (**(code **)(**(longlong **)(unaff_RDI + 400) + 0x3a0))();
      uVar9 = FUN_00542140();
      local_a8 = local_78;
      local_a0 = '\0';
      local_90 = '\0';
      local_98 = plVar6;
      uVar9 = FUN_00542190(uVar9,&local_98);
      if ((local_90 != '\0') && (local_98 != (longlong *)0x0)) {
        uVar9 = FUN_00d50b20();
      }
      if ((local_a0 != '\0') && (local_a8 != (longlong *)0x0)) {
        uVar9 = FUN_00d50b20();
      }
      FUN_006c4780(uVar9,iVar2 + 1);
      local_80 = '\0';
      local_88 = puVar5;
      (**(code **)(**(longlong **)(unaff_RDI + 400) + 0x398))();
      if ((local_80 != '\0') && (local_88 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    if (plVar6 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    goto LAB_006c40d8;
  }
  plVar6 = *(longlong **)(*(longlong *)(*(longlong *)(unaff_RDI + 0x38) + 0x10) + -8 + lVar7 * 8);
  local_38 = '\0';
  uVar9 = extraout_XMM0_Da;
  local_40 = plVar6;
  if ((DAT_026fddd0 == '\0') &&
     (iVar2 = ___cxa_guard_acquire(), uVar9 = extraout_XMM0_Da_02, iVar2 != 0)) {
    _DAT_026d9988 = FUN_0006d940();
    _DAT_026d9970 = "MDWorkspaceView";
    _DAT_026d9978 = 0x188;
    _DAT_026d9980 = FUN_000a3150;
    _DAT_026d9990 = 0;
    uRam00000000026d9998 = 0;
    _DAT_026d99a0 = 0;
    _DAT_026d9a18 = 0;
    uRam00000000026d9a20 = 0;
    _DAT_026d9a28 = 0;
    DAT_026d9a2a = 1;
    _DAT_026d99a8 = 0;
    uRam00000000026d99b0 = 0;
    _DAT_026d99b8 = 0;
    uRam00000000026d99c0 = 0;
    _DAT_026d99c8 = 0;
    uRam00000000026d99d0 = 0;
    _DAT_026d99d8 = 0;
    uRam00000000026d99e0 = 0;
    _DAT_026d99e8 = 0;
    uRam00000000026d99f0 = 0;
    _DAT_026d99f8 = 0;
    uRam00000000026d9a00 = 0;
    _DAT_026d9a08 = 0;
    uRam00000000026d9a10 = 0;
    DAT_026d9a33 = 0;
    _DAT_026d9a2b = 0;
    uVar9 = ___cxa_guard_release();
  }
  if (plVar6 == (longlong *)0x0) {
LAB_006c3c55:
    pplVar4 = &DAT_02802688;
    local_68 = DAT_02802688;
    if (DAT_02802690 != '\0') goto LAB_006c3c67;
LAB_006c3d50:
    local_60 = 0;
    if (local_68 != (longlong *)0x0) {
      uVar9 = FUN_00d50b00();
    }
  }
  else {
    (**(code **)(*plVar6 + 0x360))();
    cVar1 = FUN_00e85ea0();
    uVar9 = extraout_XMM0_Da_00;
    if (cVar1 == '\0') goto LAB_006c3c55;
    pplVar4 = &local_40;
    local_68 = local_40;
    if (local_38 == '\0') goto LAB_006c3d50;
LAB_006c3c67:
    *(undefined1 *)(pplVar4 + 1) = 0;
  }
  local_60 = '\x01';
  plVar6 = *(longlong **)(*(longlong *)(*(longlong *)(unaff_RDI + 0x38) + 0x10) + 8 + lVar7 * 8);
  local_e0 = '\0';
  local_e8 = plVar6;
  if ((DAT_026fddd0 == '\0') &&
     (iVar2 = ___cxa_guard_acquire(), uVar9 = extraout_XMM0_Da_03, iVar2 != 0)) {
    _DAT_026d9988 = FUN_0006d940();
    _DAT_026d9970 = "MDWorkspaceView";
    _DAT_026d9978 = 0x188;
    _DAT_026d9980 = FUN_000a3150;
    _DAT_026d9990 = 0;
    uRam00000000026d9998 = 0;
    _DAT_026d99a0 = 0;
    _DAT_026d9a18 = 0;
    uRam00000000026d9a20 = 0;
    _DAT_026d9a28 = 0;
    DAT_026d9a2a = 1;
    _DAT_026d99a8 = 0;
    uRam00000000026d99b0 = 0;
    _DAT_026d99b8 = 0;
    uRam00000000026d99c0 = 0;
    _DAT_026d99c8 = 0;
    uRam00000000026d99d0 = 0;
    _DAT_026d99d8 = 0;
    uRam00000000026d99e0 = 0;
    _DAT_026d99e8 = 0;
    uRam00000000026d99f0 = 0;
    _DAT_026d99f8 = 0;
    uRam00000000026d9a00 = 0;
    _DAT_026d9a08 = 0;
    uRam00000000026d9a10 = 0;
    DAT_026d9a33 = 0;
    _DAT_026d9a2b = 0;
    uVar9 = ___cxa_guard_release();
  }
  if (plVar6 == (longlong *)0x0) {
LAB_006c3db2:
    pplVar4 = &DAT_02802688;
    plVar6 = DAT_02802688;
    local_58 = DAT_02802688;
    if (DAT_02802690 != '\0') goto LAB_006c3dc6;
LAB_006c3de8:
    local_50 = 0;
    if (plVar6 != (longlong *)0x0) {
      uVar9 = FUN_00d50b00();
    }
    local_50 = '\x01';
    local_58 = plVar6;
  }
  else {
    (**(code **)(*plVar6 + 0x360))();
    cVar1 = FUN_00e85ea0();
    uVar9 = extraout_XMM0_Da_01;
    if (cVar1 == '\0') goto LAB_006c3db2;
    pplVar4 = &local_e8;
    plVar6 = local_e8;
    local_58 = local_e8;
    if (local_e0 == '\0') goto LAB_006c3de8;
LAB_006c3dc6:
    local_50 = '\x01';
    *(undefined1 *)(pplVar4 + 1) = 0;
  }
  FUN_00542190(uVar9,&local_58);
  if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_e0 != '\0') && (local_e8 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
LAB_006c40d8:
  if (local_78 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}


