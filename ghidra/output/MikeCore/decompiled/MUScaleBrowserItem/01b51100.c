// Function: FUN_01b51100
// Address: 01b51100
// Size: 1967 bytes
// Class: MUScaleBrowserItem
// String references:
//   "MUScaleBrowserItem"


/* WARNING: Removing unreachable block (ram,0x01b51306) */
/* WARNING: Removing unreachable block (ram,0x01b51312) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_01b51100(undefined8 param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  char *pcVar5;
  longlong **pplVar6;
  longlong unaff_RDI;
  undefined8 unaff_R14;
  ulonglong uVar7;
  bool bVar8;
  undefined4 uVar9;
  longlong *local_c0;
  char local_b8;
  longlong local_a0;
  char local_98;
  longlong local_90;
  char local_88;
  longlong local_80;
  char local_78;
  longlong *local_70;
  char local_68;
  longlong local_60;
  char local_58;
  char local_50;
  undefined7 uStack_4f;
  char local_48;
  longlong *local_40;
  char local_38 [8];
  
  uVar7 = CONCAT71((int7)((ulonglong)unaff_R14 >> 8),1);
  if (param_2 == 0) goto LAB_01b51746;
  if (*(char *)(unaff_RDI + 200) != '\0') {
    uVar7 = 0;
    goto LAB_01b51746;
  }
  *(undefined1 *)(unaff_RDI + 200) = 1;
  pplVar6 = &local_40;
  FUN_01ceb020();
  plVar1 = local_40;
  if ((DAT_02737920 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
    _DAT_027e2e88 = FUN_00d4fe50();
    _DAT_027e2e70 = "MUScaleBrowserItem";
    _DAT_027e2e78 = 0x20;
    _DAT_027e2e80 = FUN_00841ad0;
    _DAT_027e2e90 = 0;
    uRam00000000027e2e98 = 0;
    _DAT_027e2ea0 = 0;
    uRam00000000027e2ea8 = 0;
    _DAT_027e2eb0 = 0;
    uRam00000000027e2eb8 = 0;
    _DAT_027e2ec0 = 0;
    uRam00000000027e2ec8 = 0;
    _DAT_027e2ed0 = 0;
    uRam00000000027e2ed8 = 0;
    _DAT_027e2ee0 = 0;
    uRam00000000027e2ee8 = 0;
    _DAT_027e2ef0 = 0;
    uRam00000000027e2ef8 = 0;
    _DAT_027e2f00 = 0;
    uRam00000000027e2f08 = 0;
    _DAT_027e2f10 = 0;
    uRam00000000027e2f18 = 0;
    _DAT_027e2f20 = 0;
    uRam00000000027e2f28 = 0;
    _DAT_027e2f30 = 0;
    ___cxa_guard_release();
  }
  if (plVar1 == (longlong *)0x0) {
LAB_01b51181:
    pplVar6 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') goto LAB_01b51181;
  }
  plVar1 = *pplVar6;
  if (*(char *)(pplVar6 + 1) == '\0') {
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar6 + 1) = 0;
  }
  if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 != (longlong *)0x0) {
    FUN_01aa3f90();
    cVar3 = (**(code **)(*local_40 + 0x398))();
    if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (cVar3 != '\0') {
      plVar1 = *(longlong **)(unaff_RDI + 0x98);
      FUN_01aa3f10();
      local_70 = local_40;
      local_68 = 0;
      if (local_38[0] == '\0') {
        if (local_40 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38[0] = '\0';
      }
      local_68 = '\x01';
      (**(code **)(*plVar1 + 0x968))();
      if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((-1 < *(int *)(unaff_RDI + 0xc0)) && (-1 < *(int *)(unaff_RDI + 0xc4))) {
        FUN_01cecec0();
        if ((local_38[0] == '\0') &&
           (((local_40 != (longlong *)0x0 && (FUN_00d50b00(), local_38[0] != '\0')) &&
            (local_40 != (longlong *)0x0)))) {
          FUN_00d50b20();
        }
        FUN_01dd3d10();
        (**(code **)(**(longlong **)(unaff_RDI + 0x78) + 0x958))();
        FUN_00d50b20();
      }
    }
    FUN_00d50b20();
  }
  FUN_01b4c2c0();
  *(undefined8 *)(unaff_RDI + 0xc0) = 0xffffffffffffffff;
  FUN_01ce9490();
  if (local_40 == (longlong *)0x0) {
    bVar8 = false;
  }
  else {
    FUN_01ce9490();
    bVar8 = *(int *)(CONCAT71(uStack_4f,local_50) + 0xc) != 0;
    if (local_48 != '\0') {
      FUN_00d50b20();
    }
  }
  if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (bVar8) {
    FUN_01ce9490();
    iVar4 = *(int *)((longlong)local_40 + 0xc) + -1;
    *(int *)(unaff_RDI + 0xc0) = iVar4;
    if (local_38[0] != '\0') {
      FUN_00d50b20();
      iVar4 = *(int *)(unaff_RDI + 0xc0);
    }
    FUN_01cecec0(iVar4,iVar4);
    lVar2 = local_40[5];
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_01dd4a30();
    plVar1 = local_40;
    if (local_38[0] == '\0') {
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
        if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        goto LAB_01b51444;
      }
    }
    else if (local_40 != (longlong *)0x0) {
LAB_01b51444:
      if (*(int *)((longlong)plVar1 + 0xc) == 1) {
        FUN_00d23340();
        plVar1 = local_40;
        pcVar5 = &local_50;
        if (local_38[0] != '\0') {
          pcVar5 = local_38;
        }
        local_50 = local_38[0];
        *pcVar5 = '\0';
        if ((local_38[0] != '\0') && (plVar1 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        uVar9 = FUN_00d45870();
        *(undefined4 *)(unaff_RDI + 0xc4) = uVar9;
        if ((local_50 != '\0') && (plVar1 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      FUN_00d50b20();
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_01b4c850();
  pplVar6 = &local_40;
  FUN_01ceb020();
  plVar1 = local_40;
  if ((DAT_02737920 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
    _DAT_027e2e88 = FUN_00d4fe50();
    _DAT_027e2e70 = "MUScaleBrowserItem";
    _DAT_027e2e78 = 0x20;
    _DAT_027e2e80 = FUN_00841ad0;
    _DAT_027e2e90 = 0;
    uRam00000000027e2e98 = 0;
    _DAT_027e2ea0 = 0;
    uRam00000000027e2ea8 = 0;
    _DAT_027e2eb0 = 0;
    uRam00000000027e2eb8 = 0;
    _DAT_027e2ec0 = 0;
    uRam00000000027e2ec8 = 0;
    _DAT_027e2ed0 = 0;
    uRam00000000027e2ed8 = 0;
    _DAT_027e2ee0 = 0;
    uRam00000000027e2ee8 = 0;
    _DAT_027e2ef0 = 0;
    uRam00000000027e2ef8 = 0;
    _DAT_027e2f00 = 0;
    uRam00000000027e2f08 = 0;
    _DAT_027e2f10 = 0;
    uRam00000000027e2f18 = 0;
    _DAT_027e2f20 = 0;
    uRam00000000027e2f28 = 0;
    _DAT_027e2f30 = 0;
    ___cxa_guard_release();
  }
  if (plVar1 == (longlong *)0x0) {
LAB_01b5150b:
    pplVar6 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') goto LAB_01b5150b;
  }
  plVar1 = *pplVar6;
  if (*(char *)(pplVar6 + 1) == '\0') {
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar6 + 1) = 0;
  }
  if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 == (longlong *)0x0) {
    uVar9 = FUN_00d6f370();
    local_80 = DAT_027e47d8;
    local_90 = 0;
    local_88 = '\0';
    if (DAT_027e47d8 != 0) {
      uVar9 = FUN_00d50b00();
    }
    local_78 = '\x01';
    FUN_00d6f570(uVar9,&local_80);
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    FUN_01aa3f90();
    cVar3 = (**(code **)(*local_40 + 0x3a0))();
    if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (cVar3 != '\0') {
      FUN_00d6f370();
      FUN_01aa3f90();
      uVar9 = (**(code **)(*local_c0 + 0x368))();
      local_58 = 0;
      local_60 = CONCAT71(uStack_4f,local_50);
      local_a0 = DAT_027e47d8;
      if (local_48 == '\0') {
        if (local_60 != 0) {
          uVar9 = FUN_00d50b00();
          local_a0 = DAT_027e47d8;
        }
      }
      else {
        local_48 = '\0';
      }
      local_58 = '\x01';
      DAT_027e47d8 = local_a0;
      if (local_a0 != 0) {
        local_58 = '\x01';
        uVar9 = FUN_00d50b00();
      }
      local_98 = '\x01';
      FUN_00d6f570(uVar9,&local_a0);
      if ((local_98 != '\0') && (local_a0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (CONCAT71(uStack_4f,local_50) != 0)) {
        FUN_00d50b20();
      }
      if ((local_b8 != '\0') && (local_c0 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    FUN_00d50b20();
  }
  *(undefined1 *)(unaff_RDI + 200) = 0;
LAB_01b51746:
  return uVar7 & 0xffffffff;
}


