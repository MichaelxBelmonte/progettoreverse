// Function: FUN_004f6020
// Address: 004f6020
// Size: 2305 bytes
// Class: MUMultiTrackItem
// String references:
//   "MUMultiTrackItem"
//   "MDTransferPluginTrackHeaderViewController"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_004f6020(undefined8 param_1,byte param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  uint uVar6;
  longlong lVar7;
  longlong **pplVar8;
  int iVar9;
  ulonglong uVar10;
  longlong unaff_RDI;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar11;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  longlong local_f0;
  char local_e8;
  longlong *local_e0;
  char local_d8;
  longlong local_d0;
  char local_c8;
  longlong *local_c0;
  longlong *local_b8;
  undefined4 local_ac;
  longlong *local_a8;
  char local_a0;
  longlong *local_98;
  char local_90;
  longlong local_88;
  char local_80;
  longlong *local_78;
  char local_70;
  longlong *local_68;
  undefined8 local_60;
  int local_58;
  longlong *local_50;
  longlong *local_48;
  longlong *local_40;
  char local_38;
  
  FUN_004f5840();
  if (local_70 == '\0') {
    if (local_78 == (longlong *)0x0) {
      return 0;
    }
    local_c0 = local_78;
    FUN_00d50b00();
    if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_c0 = local_78;
    if (local_78 == (longlong *)0x0) {
      return 0;
    }
  }
  if (*(longlong *)(unaff_RDI + 0xd0) == 0) {
LAB_004f61d8:
    uVar10 = 0;
    goto LAB_004f68e8;
  }
  uVar6 = FUN_004f5d60();
  uVar10 = (ulonglong)uVar6;
  if ((param_2 & (byte)uVar6) != 1) goto LAB_004f68e8;
  FUN_01c00e50();
  FUN_01bbfb40();
  plVar1 = local_40;
  FUN_000829c0();
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x360))();
    FUN_00e85ea0();
  }
  FUN_002efed0();
  plVar1 = local_78;
  if (local_70 == '\0') {
    if (((local_78 != (longlong *)0x0) && (FUN_00d50b00(), local_70 != '\0')) &&
       (local_78 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_70 = '\0';
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  if (plVar1 == (longlong *)0x0) goto LAB_004f61d8;
  FUN_01c00e50();
  FUN_01bbfb40();
  FUN_01beea30();
  local_50 = local_78;
  if (local_70 == '\0') {
    if (((local_78 != (longlong *)0x0) && (FUN_00d50b00(), local_70 != '\0')) &&
       (local_78 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_70 = '\0';
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  FUN_01c00e50();
  plVar2 = local_40;
  if (local_38 == '\0') {
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  local_78 = plVar2;
  local_70 = '\0';
  cVar3 = FUN_00d23d70();
  if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar2 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar3 == '\0') {
    FUN_01c00e50();
    local_a8 = local_40;
    local_a0 = 0;
    if (local_38 == '\0') {
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_a0 = '\x01';
    FUN_003bc740();
    plVar2 = local_78;
    if (local_50 == local_78) {
LAB_004f6356:
      if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      if (local_70 == '\0') {
        if (local_78 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        if (local_50 == (longlong *)0x0) {
          local_50 = plVar2;
        }
        else {
          local_50 = plVar2;
          FUN_00d50b20();
        }
        goto LAB_004f6356;
      }
      if (local_50 != (longlong *)0x0) {
        local_50 = local_78;
        FUN_00d50b20();
      }
      local_70 = '\0';
      local_50 = plVar2;
    }
    if ((local_a0 != '\0') && (local_a8 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  local_e0 = local_50;
  local_d8 = '\0';
  FUN_01c00e50();
  FUN_01bbfb40();
  FUN_01beead0();
  local_98 = local_40;
  local_90 = 0;
  if (local_38 == '\0') {
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  local_90 = '\x01';
  uVar4 = FUN_0071fb80();
  uVar5 = FUN_0071fab0();
  local_c8 = '\0';
  local_d0 = 0;
  FUN_004b0830(&local_98,&local_e0,uVar4,uVar5);
  plVar2 = local_78;
  if (local_70 == '\0') {
    if (((local_78 != (longlong *)0x0) && (FUN_00d50b00(), local_70 != '\0')) &&
       (local_78 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_70 = '\0';
  }
  if ((local_c8 != '\0') && (local_d0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_90 != '\0') && (local_98 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  if ((local_e8 != '\0') && (local_f0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_d8 != '\0') && (local_e0 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  local_ac = (**(code **)(**(longlong **)(unaff_RDI + 0xd0) + 0x920))();
  uVar10 = 0;
  if (plVar2 != (longlong *)0x0) {
    local_48 = plVar1;
    local_70 = '\0';
    local_78 = (longlong *)0x0;
    local_b8 = plVar2;
    local_68 = plVar2;
    local_60 = 0xffffffff;
    local_58 = 0;
    uVar10 = 0;
    uVar11 = extraout_XMM0_Da;
    while( true ) {
      iVar9 = (int)uVar10;
      if (iVar9 != 0) {
        if (iVar9 < 1) {
          uVar10 = (ulonglong)(uint)-iVar9;
        }
        else {
          local_60 = CONCAT44(local_60._4_4_,(int)local_60 - iVar9);
          FUN_00d23690(uVar11,uVar10);
          local_58 = local_58 + iVar9;
          uVar10 = 0;
        }
        local_60 = CONCAT44((int)uVar10,(int)local_60);
      }
      lVar7 = (longlong)(int)local_60;
      iVar9 = (int)local_60 + 1;
      local_60 = CONCAT44(local_60._4_4_,iVar9);
      if (*(int *)((longlong)local_68 + 0xc) <= iVar9) break;
      plVar1 = *(longlong **)(local_68[2] + 8 + lVar7 * 8);
      local_78 = plVar1;
      if ((DAT_026fe4e0 == '\0') && (iVar9 = ___cxa_guard_acquire(), iVar9 != 0)) {
        _DAT_026d7a88 = FUN_00d4fe50();
        _DAT_026d7a70 = "MUMultiTrackItem";
        _DAT_026d7a78 = 0x60;
        _DAT_026d7a80 = FUN_0006eae0;
        _DAT_026d7a90 = 0;
        uRam00000000026d7a98 = 0;
        _DAT_026d7aa0 = 0;
        _DAT_026d7b18 = 0;
        uRam00000000026d7b20 = 0;
        _DAT_026d7b28 = 0;
        DAT_026d7b2a = 1;
        _DAT_026d7aa8 = 0;
        uRam00000000026d7ab0 = 0;
        _DAT_026d7ab8 = 0;
        uRam00000000026d7ac0 = 0;
        _DAT_026d7ac8 = 0;
        uRam00000000026d7ad0 = 0;
        _DAT_026d7ad8 = 0;
        uRam00000000026d7ae0 = 0;
        _DAT_026d7ae8 = 0;
        uRam00000000026d7af0 = 0;
        _DAT_026d7af8 = 0;
        uRam00000000026d7b00 = 0;
        _DAT_026d7b08 = 0;
        uRam00000000026d7b10 = 0;
        DAT_026d7b33 = 0;
        _DAT_026d7b2b = 0;
        ___cxa_guard_release();
      }
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x360))();
        FUN_00e85ea0();
      }
      uVar11 = FUN_01bc1260();
      plVar1 = local_40;
      if ((DAT_02700410 == '\0') &&
         (iVar9 = ___cxa_guard_acquire(), uVar11 = extraout_XMM0_Da_01, iVar9 != 0)) {
        _DAT_02700360 = FUN_00138900();
        _DAT_02700348 = "MDTransferPluginTrackHeaderViewController";
        _DAT_02700350 = 0xd8;
        _DAT_02700358 = FUN_00306f50;
        _DAT_02700368 = 0;
        uRam0000000002700370 = 0;
        _DAT_02700378 = 0;
        _DAT_027003f0 = 0;
        uRam00000000027003f8 = 0;
        _DAT_02700400 = 0;
        DAT_02700402 = 1;
        _DAT_02700380 = 0;
        uRam0000000002700388 = 0;
        _DAT_02700390 = 0;
        uRam0000000002700398 = 0;
        _DAT_027003a0 = 0;
        uRam00000000027003a8 = 0;
        _DAT_027003b0 = 0;
        uRam00000000027003b8 = 0;
        _DAT_027003c0 = 0;
        uRam00000000027003c8 = 0;
        _DAT_027003d0 = 0;
        uRam00000000027003d8 = 0;
        _DAT_027003e0 = 0;
        uRam00000000027003e8 = 0;
        DAT_0270040b = 0;
        _DAT_02700403 = 0;
        uVar11 = ___cxa_guard_release();
      }
      pplVar8 = (longlong **)&DAT_02802688;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x360))();
        cVar3 = FUN_00e85ea0();
        pplVar8 = &local_40;
        uVar11 = extraout_XMM0_Da_00;
        if (cVar3 == '\0') {
          pplVar8 = (longlong **)&DAT_02802688;
        }
      }
      plVar1 = *pplVar8;
      if (*(char *)(pplVar8 + 1) == '\0') {
        if (plVar1 != (longlong *)0x0) {
          uVar11 = FUN_00d50b00();
        }
      }
      else {
        *(undefined1 *)(pplVar8 + 1) = 0;
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        uVar11 = FUN_00d50b20();
      }
      if (plVar1 != (longlong *)0x0) {
        FUN_004f5840();
        if (local_38 == '\0') {
          if (local_40 != (longlong *)0x0) {
            FUN_00d50b00();
            if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            goto LAB_004f66e0;
          }
        }
        else if (local_40 != (longlong *)0x0) {
LAB_004f66e0:
          if (plVar1[0x1a] != 0) {
            FUN_005366c0();
            FUN_004f5aa0();
            FUN_01cee390();
          }
          FUN_00d50b20();
        }
        uVar11 = FUN_00d50b20();
      }
      uVar10 = local_60 >> 0x20;
    }
    FUN_00083b20();
    FUN_00d50b20();
  }
  if (local_50 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  uVar10 = CONCAT71((int7)(uVar10 >> 8),1);
  FUN_00d50b20();
LAB_004f68e8:
  FUN_00d50b20();
  return uVar10;
}


