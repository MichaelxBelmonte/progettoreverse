// Function: FUN_01bf3db0
// Address: 01bf3db0
// Size: 1841 bytes
// Class: GNList
// String references:
//   "GNList"
//   "MUMultiTrackItem"
//   "MUMultiTrackView"


/* WARNING: Removing unreachable block (ram,0x01bf4288) */
/* WARNING: Removing unreachable block (ram,0x01bf40e9) */
/* WARNING: Removing unreachable block (ram,0x01bf40f5) */
/* WARNING: Removing unreachable block (ram,0x01bf4294) */
/* WARNING: Removing unreachable block (ram,0x01bf421d) */
/* WARNING: Removing unreachable block (ram,0x01bf4229) */
/* WARNING: Removing unreachable block (ram,0x01bf3eb8) */
/* WARNING: Removing unreachable block (ram,0x01bf3ec8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01bf3db0(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong **pplVar5;
  longlong *unaff_RSI;
  undefined8 unaff_R13;
  longlong *plVar6;
  undefined4 uVar7;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 uVar8;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  longlong local_80;
  char local_78;
  longlong *local_70;
  longlong *local_68;
  longlong *local_60;
  char local_58;
  longlong *local_50;
  undefined8 local_48;
  int local_40;
  undefined4 local_38;
  char local_31;
  
  local_68 = param_2;
  uVar7 = FUN_01d26010();
  if (local_60 == (longlong *)0x0) {
    plVar3 = (longlong *)0x0;
  }
  else {
    plVar3 = (longlong *)(**(code **)(*local_60 + 0x10))();
    uVar7 = extraout_XMM0_Da;
  }
  if ((DAT_026fe4d0 == '\0') &&
     (iVar2 = ___cxa_guard_acquire(), uVar7 = extraout_XMM0_Da_03, iVar2 != 0)) {
    _DAT_02726438 = FUN_0006d940();
    _DAT_02726420 = "MUMultiTrackView";
    _DAT_02726428 = 0x228;
    _DAT_02726430 = FUN_00082de0;
    _DAT_02726440 = 0;
    uRam0000000002726448 = 0;
    _DAT_02726450 = 0;
    _DAT_027264c8 = 0;
    uRam00000000027264d0 = 0;
    _DAT_027264d8 = 0;
    DAT_027264da = 1;
    _DAT_02726458 = 0;
    uRam0000000002726460 = 0;
    _DAT_02726468 = 0;
    uRam0000000002726470 = 0;
    _DAT_02726478 = 0;
    uRam0000000002726480 = 0;
    _DAT_02726488 = 0;
    uRam0000000002726490 = 0;
    _DAT_02726498 = 0;
    uRam00000000027264a0 = 0;
    _DAT_027264a8 = 0;
    uRam00000000027264b0 = 0;
    _DAT_027264b8 = 0;
    uRam00000000027264c0 = 0;
    DAT_027264e3 = 0;
    _DAT_027264db = 0;
    uVar7 = ___cxa_guard_release();
  }
  uVar8 = (undefined4)CONCAT71((int7)((ulonglong)unaff_R13 >> 8),1);
  if (plVar3 == (longlong *)0x0) {
LAB_01bf3e45:
    plVar3 = (longlong *)0x0;
  }
  else {
    (**(code **)(*plVar3 + 0x360))();
    cVar1 = FUN_00e85ea0();
    uVar7 = extraout_XMM0_Da_00;
    if (cVar1 == '\0') goto LAB_01bf3e45;
    uVar7 = FUN_00d50b00();
    uVar8 = 0;
  }
  if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
    (**(code **)(*local_60 + 0x10))();
    uVar7 = FUN_00d50b20();
  }
  if ((char)uVar8 != '\0') {
    local_80 = *local_68;
    local_78 = '\0';
    FUN_01df91e0(uVar7,&local_80);
    if (local_78 == '\0') {
      return;
    }
    if (local_80 == 0) {
      return;
    }
    FUN_00d50b20();
    return;
  }
  plVar6 = (longlong *)*unaff_RSI;
  local_70 = plVar3;
  local_38 = uVar8;
  if ((DAT_027048b0 == '\0') && (iVar2 = ___cxa_guard_acquire(), iVar2 != 0)) {
    _DAT_026cd478 = FUN_00d4fe50();
    DAT_026cd460 = "GNList";
    _DAT_026cd468 = 0x20;
    _DAT_026cd470 = FUN_00018210;
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
    ___cxa_guard_release();
  }
  plVar3 = &DAT_02802688;
  if (plVar6 != (longlong *)0x0) {
    (**(code **)(*plVar6 + 0x360))();
    cVar1 = FUN_00e85ea0();
    if (cVar1 != '\0') {
      if ((DAT_026fe4e0 == '\0') && (iVar2 = ___cxa_guard_acquire(), iVar2 != 0)) {
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
      cVar1 = FUN_00e8da30();
      plVar3 = unaff_RSI;
      if (cVar1 == '\0') {
        plVar3 = &DAT_02802688;
      }
    }
  }
  plVar6 = local_70;
  cVar1 = (char)plVar3[1];
  if ((cVar1 == '\0') || (*plVar3 == 0)) {
    if (*plVar3 == 0) {
      (**(code **)(*local_70 + 0x9d0))();
      goto LAB_01bf4240;
    }
  }
  else {
    FUN_00d50b00();
  }
  uVar7 = local_38;
  uVar8 = FUN_01d2b630();
  plVar3 = local_60;
  if (local_58 == '\0') {
    if (local_60 != (longlong *)0x0) {
      uVar8 = FUN_00d50b00();
      if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
        uVar8 = FUN_00d50b20();
      }
      goto LAB_01bf3fc0;
    }
  }
  else if (local_60 != (longlong *)0x0) {
LAB_01bf3fc0:
    local_31 = cVar1;
    local_58 = '\0';
    local_60 = (longlong *)0x0;
    local_68 = plVar3;
    local_50 = plVar3;
    local_48 = 0xffffffff;
    local_40 = 0;
    iVar2 = 0;
    while( true ) {
      if (iVar2 != 0) {
        if (iVar2 < 1) {
          iVar2 = -iVar2;
        }
        else {
          local_48 = CONCAT44(local_48._4_4_,(int)local_48 - iVar2);
          uVar8 = FUN_00d23690(uVar8,iVar2);
          local_40 = local_40 + iVar2;
          iVar2 = 0;
        }
        local_48 = CONCAT44(iVar2,(int)local_48);
      }
      lVar4 = (longlong)(int)local_48;
      iVar2 = (int)local_48 + 1;
      local_48 = CONCAT44(local_48._4_4_,iVar2);
      if (*(int *)((longlong)local_50 + 0xc) <= iVar2) break;
      plVar3 = *(longlong **)(local_50[2] + 8 + lVar4 * 8);
      local_60 = plVar3;
      if ((DAT_026fe4e0 == '\0') &&
         (iVar2 = ___cxa_guard_acquire(), uVar8 = extraout_XMM0_Da_02, iVar2 != 0)) {
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
        uVar8 = ___cxa_guard_release();
      }
      pplVar5 = (longlong **)&DAT_02802688;
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x360))();
        cVar1 = FUN_00e85ea0();
        pplVar5 = &local_60;
        uVar8 = extraout_XMM0_Da_01;
        if (cVar1 == '\0') {
          pplVar5 = (longlong **)&DAT_02802688;
        }
      }
      if (*(char *)(pplVar5 + 1) == '\0') {
        if (*pplVar5 != (longlong *)0x0) {
          FUN_00d50b00();
          goto LAB_01bf40c1;
        }
      }
      else {
        *(undefined1 *)(pplVar5 + 1) = 0;
        if (*pplVar5 != (longlong *)0x0) {
LAB_01bf40c1:
          cVar1 = FUN_00d23d70();
          if (cVar1 == '\0') {
            FUN_01bc08b0();
          }
          uVar8 = FUN_00d50b20();
        }
      }
      iVar2 = local_48._4_4_;
    }
    FUN_00083b20();
    FUN_00d50b20();
    plVar6 = local_70;
    cVar1 = local_31;
    uVar7 = local_38;
  }
  (**(code **)(*plVar6 + 0x9d0))();
  if (cVar1 != '\0') {
    FUN_00d50b20();
  }
  if ((char)uVar7 != '\0') {
    return;
  }
LAB_01bf4240:
  FUN_00d50b20();
  return;
}


