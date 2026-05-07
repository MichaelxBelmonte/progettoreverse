// Function: FUN_000ea4c0
// Address: 000ea4c0
// Size: 992 bytes
// Class: MUMultiTrackView
// String references:
//   "MUMultiTrackView"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000ea4c0(void)

{
  longlong lVar1;
  bool bVar2;
  bool bVar3;
  longlong *plVar4;
  char cVar5;
  int iVar6;
  longlong **pplVar7;
  undefined8 uVar8;
  longlong unaff_RDI;
  longlong *plVar9;
  undefined4 uVar10;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  longlong local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong *local_50;
  undefined8 local_48;
  longlong *local_40;
  char local_38;
  
  if (*(longlong *)(unaff_RDI + 0xb8) == 0) {
    return;
  }
  FUN_01e561b0();
  if (local_38 == '\0') {
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b00();
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_000ea524;
    }
LAB_000ea57a:
    bVar2 = true;
    local_48 = 0;
  }
  else {
    if (local_40 == (longlong *)0x0) goto LAB_000ea57a;
LAB_000ea524:
    FUN_01d8b220();
    plVar9 = local_40;
    local_50 = local_40;
    if (local_38 == '\0') {
      if (local_40 == (longlong *)0x0) {
        local_50 = (longlong *)0x0;
        plVar9 = (longlong *)0x0;
      }
      else {
        FUN_00d50b00();
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    else {
    }
    uVar10 = FUN_000914a0();
    if (plVar9 == (longlong *)0x0) {
LAB_000ea567:
      if (DAT_02802688 != (longlong *)0x0) goto LAB_000ea609;
LAB_000ea5bd:
      if ((DAT_026fe4d0 == '\0') &&
         (iVar6 = ___cxa_guard_acquire(), uVar10 = extraout_XMM0_Da_01, iVar6 != 0)) {
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
        uVar10 = ___cxa_guard_release();
      }
      plVar4 = DAT_02802688;
      if (plVar9 != (longlong *)0x0) {
        (**(code **)(*plVar9 + 0x360))();
        cVar5 = FUN_00e85ea0();
        uVar10 = extraout_XMM0_Da_00;
        plVar4 = DAT_02802688;
        if (cVar5 != '\0') {
          plVar4 = local_50;
        }
      }
      plVar9 = local_50;
      local_50 = plVar9;
      if (plVar4 != (longlong *)0x0) goto LAB_000ea609;
      if (plVar9 != (longlong *)0x0) {
        plVar9 = (longlong *)0x0;
        uVar8 = 0;
        goto LAB_000ea6f1;
      }
      local_48 = 0;
    }
    else {
      (**(code **)(*plVar9 + 0x360))();
      cVar5 = FUN_00e85ea0();
      uVar10 = extraout_XMM0_Da;
      if (cVar5 == '\0') goto LAB_000ea567;
      if (local_50 == (longlong *)0x0) goto LAB_000ea5bd;
LAB_000ea609:
      lVar1 = DAT_026defa8;
      if (DAT_026defa8 != 0) {
        uVar10 = FUN_00d50b00();
      }
      local_80 = lVar1;
      local_78 = '\x01';
      pplVar7 = &local_40;
      (**(code **)(*plVar9 + 0x88))(uVar10,&local_80);
      plVar9 = local_40;
      FUN_00083c20();
      if (plVar9 == (longlong *)0x0) {
LAB_000ea669:
        pplVar7 = &DAT_02802688;
      }
      else {
        (**(code **)(*plVar9 + 0x360))();
        cVar5 = FUN_00e85ea0();
        if (cVar5 == '\0') goto LAB_000ea669;
      }
      plVar9 = *pplVar7;
      if (plVar9 == (longlong *)0x0) {
        uVar8 = 0;
        plVar9 = (longlong *)0x0;
      }
      else {
        if (*(char *)(pplVar7 + 1) == '\0') {
          FUN_00d50b00();
        }
        else {
          *(undefined1 *)(pplVar7 + 1) = 0;
        }
        uVar8 = CONCAT71((int7)((ulonglong)pplVar7 >> 8),1);
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_78 != '\0') && (local_80 != 0)) {
        FUN_00d50b20();
      }
LAB_000ea6f1:
      FUN_00d50b20();
      local_48 = uVar8;
      if (plVar9 != (longlong *)0x0) {
        local_68 = 0;
        lVar1 = *(longlong *)(unaff_RDI + 0xd0);
        if (lVar1 != 0) {
          FUN_00d50b00();
        }
        local_68 = '\x01';
        local_70 = lVar1;
        FUN_01e058f0();
        if ((local_68 != '\0') && (local_70 != 0)) {
          FUN_00d50b20();
        }
        bVar3 = false;
        bVar2 = false;
        goto LAB_000ea7aa;
      }
    }
    bVar2 = false;
  }
  local_58 = 0;
  lVar1 = *(longlong *)(unaff_RDI + 200);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  local_58 = '\x01';
  local_60 = lVar1;
  FUN_01e058f0();
  bVar3 = true;
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
LAB_000ea7aa:
  if (!bVar2) {
    FUN_00d50b20();
  }
  if ((char)local_48 != '\0' && !bVar3) {
    FUN_00d50b20();
  }
  return;
}


