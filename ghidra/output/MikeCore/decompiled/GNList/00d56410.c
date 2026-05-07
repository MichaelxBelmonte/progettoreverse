// Function: FUN_00d56410
// Address: 00d56410
// Size: 1556 bytes
// Class: GNList
// String references:
//   "GNList"
//   "GNObject"


/* WARNING: Removing unreachable block (ram,0x00d5653b) */
/* WARNING: Removing unreachable block (ram,0x00d567ea) */
/* WARNING: Removing unreachable block (ram,0x00d567ef) */
/* WARNING: Removing unreachable block (ram,0x00d5680d) */
/* WARNING: Removing unreachable block (ram,0x00d567f5) */
/* WARNING: Removing unreachable block (ram,0x00d56808) */
/* WARNING: Removing unreachable block (ram,0x00d56690) */
/* WARNING: Removing unreachable block (ram,0x00d56699) */
/* WARNING: Removing unreachable block (ram,0x00d566a0) */
/* WARNING: Removing unreachable block (ram,0x00d569f0) */
/* WARNING: Removing unreachable block (ram,0x00d569f5) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_00d56410(undefined4 param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  undefined8 in_RCX;
  longlong *plVar5;
  char *pcVar6;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  undefined4 uVar7;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  longlong local_b0;
  undefined1 local_a8;
  longlong local_a0;
  char local_98;
  longlong local_90;
  char local_88;
  longlong local_80;
  char local_78 [8];
  longlong local_70;
  int local_68;
  int iStack_64;
  int local_60;
  longlong *local_58;
  char local_50;
  longlong *plVar8;
  
  local_70 = *param_2;
  if (*(int *)(local_70 + 0xc) == 1) {
    uVar7 = FUN_00d23310();
    cVar2 = local_78[0];
    pcVar6 = &stack0xffffffffffffffc0;
    if (local_78[0] != '\0') {
      pcVar6 = local_78;
    }
    *pcVar6 = '\0';
    if ((local_78[0] != '\0') && (local_80 != 0)) {
      uVar7 = FUN_00d50b20();
    }
    if ((cVar2 == '\0') && (local_80 != 0)) {
      uVar7 = FUN_00e31530(uVar7,0);
    }
    local_90 = local_80;
    local_88 = '\x01';
    (**(code **)(*unaff_RSI + 0x88))(uVar7,&local_90);
    if (local_88 == '\0') {
      return unaff_RDI;
    }
    if (local_90 == 0) {
      return unaff_RDI;
    }
    FUN_00d50b20();
    return unaff_RDI;
  }
  if (unaff_RSI != (longlong *)0x0) {
    param_1 = FUN_00e31530(in_RCX,0);
    local_70 = *param_2;
    if (local_70 == 0) {
      *(undefined1 *)(unaff_RDI + 1) = 0;
      goto LAB_00d56a3a;
    }
  }
  local_78[0] = '\0';
  local_80 = 0;
  local_68 = -1;
  iStack_64 = 0;
  local_60 = 0;
  plVar8 = unaff_RSI;
  while( true ) {
    lVar4 = (longlong)local_68;
    local_68 = local_68 + 1;
    if (*(int *)(local_70 + 0xc) <= local_68) break;
    local_80 = *(longlong *)(*(longlong *)(local_70 + 0x10) + 8 + lVar4 * 8);
    if ((DAT_027048b0 == '\0') &&
       (iVar3 = ___cxa_guard_acquire(), param_1 = extraout_XMM0_Da_00, iVar3 != 0)) {
      if ((DAT_028a7d98 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
        DAT_028a7cd0 = "GNObject";
        _DAT_028a7cd8 = 0x10;
        _DAT_028a7ce0 = FUN_00d4ff10;
        _DAT_028a7ce8 = 0;
        uRam00000000028a7cf0 = 0;
        _DAT_028a7cf8 = 0;
        uRam00000000028a7d00 = 0;
        _DAT_028a7d08 = 0;
        uRam00000000028a7d10 = 0;
        _DAT_028a7d18 = 0;
        uRam00000000028a7d20 = 0;
        _DAT_028a7d28 = 0;
        uRam00000000028a7d30 = 0;
        _DAT_028a7d38 = 0;
        uRam00000000028a7d40 = 0;
        _DAT_028a7d48 = 0;
        uRam00000000028a7d50 = 0;
        _DAT_028a7d58 = 0;
        uRam00000000028a7d60 = 0;
        _DAT_028a7d68 = 0;
        uRam00000000028a7d70 = 0;
        _DAT_028a7d78 = 0;
        uRam00000000028a7d80 = 0;
        _DAT_028a7d84 = 0;
        uRam00000000028a7d88 = 0;
        uRam00000000028a7d8c = 0;
        ___cxa_guard_release();
      }
      DAT_026cd460 = "GNList";
      _DAT_026cd468 = 0x20;
      _DAT_026cd470 = FUN_00018210;
      _DAT_026cd478 = &DAT_028a7cd0;
      _DAT_026cd480 = 0;
      uRam00000000026cd488 = 0;
      _DAT_026cd490 = 0;
      _DAT_026cd508 = 0;
      uRam00000000026cd510 = 0;
      _DAT_026cd518 = 0;
      DAT_026cd51a = 6;
      _DAT_026cd498 = 0;
      uRam00000000026cd4a0 = 0;
      _DAT_026cd4a8 = 0;
      uRam00000000026cd4b0 = 0;
      _DAT_026cd4b8 = 0;
      uRam00000000026cd4c0 = 0;
      _DAT_026cd4c8 = 0;
      uRam00000000026cd4d0 = 0;
      _DAT_026cd4d8 = 0;
      uRam00000000026cd4e0 = 0;
      _DAT_026cd4e8 = 0;
      uRam00000000026cd4f0 = 0;
      _DAT_026cd4f8 = 0;
      uRam00000000026cd500 = 0;
      DAT_026cd523 = 0;
      _DAT_026cd51b = 0;
      param_1 = ___cxa_guard_release();
    }
    plVar5 = &DAT_02802688;
    if (plVar8 != (longlong *)0x0) {
      (**(code **)(*plVar8 + 0x360))();
      cVar2 = FUN_00e85ea0();
      plVar5 = (longlong *)&stack0xffffffffffffffc0;
      param_1 = extraout_XMM0_Da;
      if (cVar2 == '\0') {
        plVar5 = &DAT_02802688;
      }
    }
    lVar4 = *plVar5;
    lVar1 = plVar5[1];
    if (((char)lVar1 == '\0') || (lVar4 == 0)) {
      if (lVar4 != 0) goto LAB_00d56609;
      local_a0 = local_80;
      local_98 = '\0';
      param_1 = (**(code **)(*plVar8 + 0x88))(plVar5,&local_a0);
      unaff_RSI = local_58;
      if (local_58 == plVar8) {
joined_r0x00d567bb:
        unaff_RSI = plVar8;
        if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
          param_1 = FUN_00d50b20();
        }
      }
      else {
        if (local_50 == '\0') {
          if (local_58 != (longlong *)0x0) {
            FUN_00e31530(param_1,0);
          }
          param_1 = FUN_00d50b20();
          plVar8 = unaff_RSI;
          goto joined_r0x00d567bb;
        }
        param_1 = FUN_00d50b20();
        local_50 = '\0';
      }
      if ((local_98 != '\0') && (local_a0 != 0)) {
        param_1 = FUN_00d50b20();
      }
      plVar8 = unaff_RSI;
      if (unaff_RSI == (longlong *)0x0) {
        unaff_RSI = (longlong *)0x0;
        goto LAB_00d56a0b;
      }
    }
    else {
      param_1 = FUN_00e31530(plVar5,0);
LAB_00d56609:
      local_a8 = 0;
      local_b0 = lVar4;
      param_1 = FUN_00d56b80(param_1,&local_b0);
      unaff_RSI = local_58;
      if (plVar8 == local_58) {
        plVar5 = plVar8;
        if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
          param_1 = FUN_00d50b20();
        }
      }
      else {
        plVar5 = unaff_RSI;
        if (local_50 == '\0') {
          if (local_58 != (longlong *)0x0) {
            param_1 = FUN_00e31530(param_1,0);
          }
          if (plVar8 != (longlong *)0x0) {
            param_1 = FUN_00d50b20();
          }
        }
        else if (plVar8 != (longlong *)0x0) {
          param_1 = FUN_00d50b20();
        }
      }
      if ((char)lVar1 != '\0') {
        param_1 = FUN_00d50b20();
      }
      plVar8 = plVar5;
      if (plVar5 == (longlong *)0x0) {
LAB_00d56a0b:
        *(undefined1 *)(unaff_RDI + 1) = 0;
        *unaff_RDI = 0;
        FUN_00018280();
        if (unaff_RSI == (longlong *)0x0) {
          return unaff_RDI;
        }
        FUN_00d50b20();
        return unaff_RDI;
      }
    }
    iVar3 = iStack_64;
    if (iStack_64 != 0) {
      if (iStack_64 < 1) {
        iStack_64 = -iStack_64;
      }
      else {
        local_68 = local_68 - iStack_64;
        param_1 = FUN_00d23690(param_1,iStack_64);
        local_60 = local_60 + iVar3;
        iStack_64 = 0;
      }
    }
  }
  FUN_00018280();
  *(undefined1 *)(unaff_RDI + 1) = 0;
LAB_00d56a3a:
  *unaff_RDI = unaff_RSI;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return unaff_RDI;
}


