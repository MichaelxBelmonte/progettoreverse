// Function: FUN_019a6410
// Address: 019a6410
// Size: 654 bytes
// Class: MUEditorElementView
// String references:
//   "MUEditorElementView"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_019a6410(undefined4 param_1)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  longlong *plVar6;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  longlong **pplVar7;
  ulonglong uVar8;
  bool bVar9;
  longlong *local_48;
  char local_40;
  char local_38 [8];
  
  local_38[0] = '\0';
  lVar4 = *(longlong *)(unaff_RSI + 0x38);
  uVar5 = *(uint *)(lVar4 + 0xc);
  uVar8 = (ulonglong)uVar5;
  if ((int)uVar5 < 1) {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
    return;
  }
  plVar6 = (longlong *)0x0;
  do {
    uVar5 = uVar5 - 1;
    plVar1 = *(longlong **)(*(longlong *)(lVar4 + 0x10) + (ulonglong)uVar5 * 8);
    local_48 = plVar1;
    local_40 = '\0';
    if ((DAT_02733c90 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
      _DAT_02714138 = FUN_0034cf20();
      _DAT_02714120 = "MUEditorElementView";
      _DAT_02714128 = 0x1f8;
      _DAT_02714130 = FUN_0034ceb0;
      _DAT_02714140 = 0;
      uRam0000000002714148 = 0;
      _DAT_02714150 = 0;
      _DAT_027141c8 = 0;
      uRam00000000027141d0 = 0;
      _DAT_027141d8 = 0;
      DAT_027141da = 1;
      _DAT_02714158 = 0;
      uRam0000000002714160 = 0;
      _DAT_02714168 = 0;
      uRam0000000002714170 = 0;
      _DAT_02714178 = 0;
      uRam0000000002714180 = 0;
      _DAT_02714188 = 0;
      uRam0000000002714190 = 0;
      _DAT_02714198 = 0;
      uRam00000000027141a0 = 0;
      _DAT_027141a8 = 0;
      uRam00000000027141b0 = 0;
      _DAT_027141b8 = 0;
      uRam00000000027141c0 = 0;
      DAT_027141e3 = 0;
      _DAT_027141db = 0;
      ___cxa_guard_release();
    }
    pplVar7 = (longlong **)&DAT_02802688;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x360))();
      cVar2 = FUN_00e85ea0();
      pplVar7 = &local_48;
      if (cVar2 == '\0') {
        pplVar7 = (longlong **)&DAT_02802688;
      }
    }
    plVar1 = *pplVar7;
    pplVar7 = pplVar7 + 1;
    if (plVar1 == plVar6) {
      if (((local_38[0] == '\0') && (plVar1 != (longlong *)0x0)) && (*(char *)pplVar7 != '\0')) {
        local_38[0] = '\x01';
        goto LAB_019a6520;
      }
    }
    else {
      bVar9 = plVar6 != (longlong *)0x0;
      plVar6 = plVar1;
      if (*(char *)pplVar7 == '\0') {
        pplVar7 = (longlong **)local_38;
        if (bVar9 && local_38[0] != '\0') {
          FUN_00d50b20();
          pplVar7 = (longlong **)local_38;
        }
      }
      else {
        if (bVar9 && local_38[0] != '\0') {
          FUN_00d50b20();
        }
        local_38[0] = '\x01';
      }
LAB_019a6520:
      *(char *)pplVar7 = '\0';
    }
    if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((plVar6 != (longlong *)0x0) &&
       (cVar2 = (**(code **)(*plVar6 + 0x960))(param_1), cVar2 != '\0')) {
      *(undefined1 *)(unaff_RDI + 1) = 0;
      if (local_38[0] == '\0') {
        FUN_00d50b00();
      }
      *unaff_RDI = plVar6;
      *(undefined1 *)(unaff_RDI + 1) = 1;
      return;
    }
    if ((longlong)uVar8 < 2) {
      *(undefined1 *)(unaff_RDI + 1) = 0;
      *unaff_RDI = 0;
      if (local_38[0] == '\0') {
        return;
      }
      if (plVar6 == (longlong *)0x0) {
        return;
      }
      FUN_00d50b20();
      return;
    }
    uVar8 = uVar8 - 1;
    lVar4 = *(longlong *)(unaff_RSI + 0x38);
  } while( true );
}


