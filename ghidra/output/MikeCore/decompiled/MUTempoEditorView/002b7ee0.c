// Function: FUN_002b7ee0
// Address: 002b7ee0
// Size: 1540 bytes
// Class: MUTempoEditorView
// String references:
//   "MUTempoEditorView"


/* WARNING: Removing unreachable block (ram,0x002b7f98) */
/* WARNING: Removing unreachable block (ram,0x002b82e1) */
/* WARNING: Removing unreachable block (ram,0x002b82ed) */
/* WARNING: Removing unreachable block (ram,0x002b82fb) */
/* WARNING: Removing unreachable block (ram,0x002b8307) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_002b7ee0(void)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  char cVar6;
  undefined1 uVar7;
  longlong lVar8;
  longlong lVar9;
  char *pcVar10;
  longlong **pplVar11;
  int iVar12;
  longlong *unaff_RDI;
  longlong *plVar13;
  bool bVar14;
  longlong local_f8;
  char local_f0;
  longlong local_b8;
  char local_b0;
  longlong local_a8;
  char local_a0;
  longlong *local_68;
  char local_60 [8];
  longlong *local_58;
  undefined8 local_50;
  int local_48;
  char local_40 [8];
  char local_38 [8];
  
  lVar8 = (**(code **)(*unaff_RDI + 0x10))();
  if (lVar8 != 0) {
    FUN_00d50b00();
  }
  FUN_01d99a50();
  plVar13 = local_68;
  if (local_60[0] == '\0') {
    if (local_68 == (longlong *)0x0) goto LAB_002b80f8;
    FUN_00d50b00();
    if ((local_60[0] != '\0') && (local_68 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else if (local_68 == (longlong *)0x0) {
LAB_002b80f8:
    plVar13 = (longlong *)0x0;
    bVar2 = false;
    goto LAB_002b813f;
  }
  local_60[0] = '\0';
  local_68 = (longlong *)0x0;
  local_58 = plVar13;
  local_50 = 0xffffffff;
  local_48 = 0;
  while( true ) {
    lVar9 = (longlong)(int)local_50;
    iVar12 = (int)local_50 + 1;
    local_50 = CONCAT44(local_50._4_4_,iVar12);
    if (*(int *)((longlong)local_58 + 0xc) <= iVar12) break;
    plVar13 = *(longlong **)(local_58[2] + 8 + lVar9 * 8);
    local_68 = plVar13;
    if ((DAT_027ebf10 == '\0') && (iVar12 = ___cxa_guard_acquire(), iVar12 != 0)) {
      _DAT_0273ced8 = FUN_0006d940();
      _DAT_0273cec0 = "MUTempoEditorView";
      _DAT_0273cec8 = 0x2e8;
      _DAT_0273ced0 = FUN_0010c150;
      _DAT_0273cee0 = 0;
      uRam000000000273cee8 = 0;
      _DAT_0273cef0 = 0;
      _DAT_0273cf68 = 0;
      uRam000000000273cf70 = 0;
      _DAT_0273cf78 = 0;
      DAT_0273cf7a = 1;
      _DAT_0273cef8 = 0;
      uRam000000000273cf00 = 0;
      _DAT_0273cf08 = 0;
      uRam000000000273cf10 = 0;
      _DAT_0273cf18 = 0;
      uRam000000000273cf20 = 0;
      _DAT_0273cf28 = 0;
      uRam000000000273cf30 = 0;
      _DAT_0273cf38 = 0;
      uRam000000000273cf40 = 0;
      _DAT_0273cf48 = 0;
      uRam000000000273cf50 = 0;
      _DAT_0273cf58 = 0;
      uRam000000000273cf60 = 0;
      DAT_0273cf83 = 0;
      _DAT_0273cf7b = 0;
      ___cxa_guard_release();
    }
    pplVar11 = (longlong **)&DAT_02802688;
    if (plVar13 != (longlong *)0x0) {
      (**(code **)(*plVar13 + 0x360))();
      cVar6 = FUN_00e85ea0();
      pplVar11 = &local_68;
      if (cVar6 == '\0') {
        pplVar11 = (longlong **)&DAT_02802688;
      }
    }
    plVar13 = *pplVar11;
    if (plVar13 != (longlong *)0x0) {
      if (*(char *)(pplVar11 + 1) == '\0') {
        FUN_00d50b00();
        bVar2 = true;
      }
      else {
        *(undefined1 *)(pplVar11 + 1) = 0;
        bVar2 = true;
      }
      goto LAB_002b812d;
    }
    if (local_50._4_4_ != 0) {
      if (local_50._4_4_ < 1) {
        iVar12 = -local_50._4_4_;
      }
      else {
        local_50 = CONCAT44(local_50._4_4_,(int)local_50 - local_50._4_4_);
        FUN_00d23690();
        local_48 = local_48 + local_50._4_4_;
        iVar12 = 0;
      }
      local_50 = CONCAT44(iVar12,(int)local_50);
    }
  }
  bVar2 = false;
  plVar13 = (longlong *)0x0;
LAB_002b812d:
  FUN_000a9680();
  FUN_00d50b20();
LAB_002b813f:
  (**(code **)(*unaff_RDI + 0x58))();
  plVar4 = local_68;
  local_40[0] = local_60[0];
  pcVar10 = local_40;
  if (local_60[0] != '\0') {
    pcVar10 = local_60;
  }
  *pcVar10 = '\0';
  if ((local_60[0] != '\0') && (local_68 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  cVar6 = (**(code **)(*unaff_RDI + 0x48))();
  if (cVar6 != '\0') {
    (**(code **)(*plVar4 + 0x4a0))();
    plVar1 = *(longlong **)(local_68[2] + 8);
    if (local_60[0] != '\0') {
      FUN_00d50b20();
    }
    (**(code **)(*plVar1 + 0x918))();
  }
  (**(code **)(*plVar4 + 0x4a0))();
  plVar1 = *(longlong **)local_68[2];
  if (local_60[0] != '\0') {
    FUN_00d50b20();
  }
  (**(code **)(*unaff_RDI + 0x30))();
  plVar5 = local_68;
  pcVar10 = local_60;
  if (local_60[0] == '\0') {
    pcVar10 = local_38;
  }
  local_38[0] = local_60[0];
  *pcVar10 = '\0';
  if ((local_60[0] != '\0') && (local_68 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar5 != (longlong *)0x0) {
    FUN_001060a0();
    if (local_68 == (longlong *)0x0) {
      bVar14 = false;
    }
    else {
      FUN_01d77a20();
      bVar14 = local_f8 != 0;
      if ((local_f0 != '\0') && (local_f8 != 0)) {
        FUN_00d50b20();
      }
    }
    if ((local_60[0] != '\0') && (local_68 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (bVar14) {
      FUN_00556e50();
      FUN_001060a0();
      uVar7 = (**(code **)(*local_68 + 0x3c8))();
      *(undefined1 *)(plVar4 + 0x29) = uVar7;
      if ((local_60[0] != '\0') && (local_68 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      lVar9 = DAT_026f6f70;
      if (DAT_026f6f70 != 0) {
        FUN_00d50b00();
      }
      lVar3 = DAT_026fc528;
      if (DAT_026fc528 != 0) {
        FUN_00d50b00();
      }
      local_b8 = lVar3;
      local_b0 = '\x01';
      local_a8 = 0;
      local_a0 = '\0';
      FUN_00d31230(&local_a8,&local_b8);
      plVar4 = local_68;
      if (local_60[0] == '\0') {
        if (local_68 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_60[0] = '\0';
      }
      (**(code **)(*plVar1 + 0x6a8))();
      if (plVar4 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if ((local_60[0] != '\0') && (local_68 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_a0 != '\0') && (local_a8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_b0 != '\0') && (local_b8 != 0)) {
        FUN_00d50b20();
      }
      if (lVar9 != 0) {
        FUN_00d50b20();
      }
    }
    if (local_38[0] != '\0') {
      FUN_00d50b20();
    }
  }
  if (local_40[0] != '\0') {
    FUN_00d50b20();
  }
  if ((bVar2) && (plVar13 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (lVar8 != 0) {
    FUN_00d50b20();
  }
  return;
}


