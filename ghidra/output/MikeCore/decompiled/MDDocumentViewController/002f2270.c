// Function: FUN_002f2270
// Address: 002f2270
// Size: 1400 bytes
// Class: MDDocumentViewController
// String references:
//   "MDDocumentViewController"


/* WARNING: Removing unreachable block (ram,0x002f264e) */
/* WARNING: Removing unreachable block (ram,0x002f273c) */
/* WARNING: Removing unreachable block (ram,0x002f27bc) */
/* WARNING: Removing unreachable block (ram,0x002f27c5) */
/* WARNING: Removing unreachable block (ram,0x002f23b4) */
/* WARNING: Removing unreachable block (ram,0x002f23c1) */
/* WARNING: Removing unreachable block (ram,0x002f23fa) */
/* WARNING: Removing unreachable block (ram,0x002f240a) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_002f2270(void)

{
  bool bVar1;
  longlong *plVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  char *pcVar6;
  longlong *plVar7;
  longlong *unaff_RDI;
  longlong in_stack_ffffffffffffffa8;
  longlong *plVar8;
  char local_50;
  longlong *local_48;
  char local_40 [8];
  char local_38 [8];
  
  FUN_01f27fe0();
  cVar3 = (**(code **)(*local_48 + 0x450))();
  if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar3 == '\0') {
    uVar4 = FUN_01ddf370();
    return uVar4;
  }
  if ((unaff_RDI[0x5d] != 0) && (FUN_01c023b0(), unaff_RDI[0x5d] != 0)) {
    unaff_RDI[0x5d] = 0;
    FUN_00d50b20();
  }
  FUN_01d384d0();
  FUN_01ca8220();
  if (local_40[0] == '\0') {
    if (((local_48 != (longlong *)0x0) && (FUN_00d50b00(), local_40[0] != '\0')) &&
       (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_40[0] = '\0';
  }
  if ((local_50 != '\0') && (in_stack_ffffffffffffffa8 != 0)) {
    FUN_00d50b20();
  }
  plVar2 = DAT_027f29d0;
  if (DAT_027f29d0 != (longlong *)0x0) {
    FUN_00d50b00();
  }
  local_40[0] = '\0';
  cVar3 = FUN_00d23d70();
  if ((local_40[0] != '\0') && (plVar2 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  *(char *)(unaff_RDI + 0x5c) = cVar3;
  if (plVar2 != (longlong *)0x0) {
    FUN_00d50b20();
    cVar3 = (char)unaff_RDI[0x5c];
  }
  if (cVar3 != '\0') {
    uVar4 = FUN_01ddf370();
    goto LAB_002f27ca;
  }
  FUN_00d50b00();
  local_38[0] = '\0';
  plVar8 = unaff_RDI;
  do {
    (**(code **)(*plVar8 + 0x370))();
    if (plVar2 == plVar8) {
      if (((local_38[0] == '\0') && (plVar2 != (longlong *)0x0)) && (local_40[0] != '\0')) {
        local_38[0] = '\x01';
        goto LAB_002f24c7;
      }
    }
    else {
      plVar8 = plVar2;
      if (local_40[0] == '\0') {
        if (local_38[0] == '\0') {
          pcVar6 = local_38;
        }
        else {
          FUN_00d50b20();
          pcVar6 = local_38;
        }
      }
      else {
        if (local_38[0] != '\0') {
          FUN_00d50b20();
        }
        local_38[0] = '\x01';
LAB_002f24c7:
        local_38[0] = '\x01';
        pcVar6 = local_40;
      }
      *pcVar6 = '\0';
    }
    if ((local_40[0] != '\0') && (plVar2 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((DAT_026d8470 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
      _DAT_026fe6b8 = FUN_00015ff0();
      _DAT_026fe6a0 = "MDDocumentViewController";
      _DAT_026fe6a8 = 0x100;
      _DAT_026fe6b0 = FUN_00082e10;
      _DAT_026fe6c0 = 0;
      uRam00000000026fe6c8 = 0;
      _DAT_026fe6d0 = 0;
      _DAT_026fe748 = 0;
      uRam00000000026fe750 = 0;
      _DAT_026fe758 = 0;
      DAT_026fe75a = 1;
      _DAT_026fe6d8 = 0;
      uRam00000000026fe6e0 = 0;
      _DAT_026fe6e8 = 0;
      uRam00000000026fe6f0 = 0;
      _DAT_026fe6f8 = 0;
      uRam00000000026fe700 = 0;
      _DAT_026fe708 = 0;
      uRam00000000026fe710 = 0;
      _DAT_026fe718 = 0;
      uRam00000000026fe720 = 0;
      _DAT_026fe728 = 0;
      uRam00000000026fe730 = 0;
      _DAT_026fe738 = 0;
      uRam00000000026fe740 = 0;
      DAT_026fe763 = 0;
      _DAT_026fe75b = 0;
      ___cxa_guard_release();
    }
    plVar7 = &DAT_02802688;
    if (plVar8 != (longlong *)0x0) {
      (**(code **)(*plVar8 + 0x360))();
      cVar3 = FUN_00e85ea0();
      plVar7 = (longlong *)&stack0xffffffffffffffa8;
      if (cVar3 == '\0') {
        plVar7 = &DAT_02802688;
      }
    }
    if (*plVar7 != 0) {
      bVar1 = false;
      plVar7 = plVar8;
      if (local_38[0] == '\0') {
        if (plVar8 == (longlong *)0x0) goto LAB_002f2659;
        FUN_00d50b00();
        unaff_RDI[0x5e] = (longlong)plVar8;
      }
      else {
        unaff_RDI[0x5e] = (longlong)plVar8;
      }
      goto LAB_002f2665;
    }
  } while (plVar8 != (longlong *)0x0);
  bVar1 = true;
  plVar7 = (longlong *)0x0;
LAB_002f2659:
  unaff_RDI[0x5e] = (longlong)plVar7;
  if (!bVar1) {
LAB_002f2665:
    if (plVar7 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  FUN_00d50b20();
  if (unaff_RDI[0x5e] != 0) {
    FUN_006f4810();
    FUN_01be8270();
    pcVar6 = local_38;
    if (local_40[0] != '\0') {
      pcVar6 = local_40;
    }
    local_38[0] = local_40[0];
    *pcVar6 = '\0';
    if ((local_40[0] != '\0') && (plVar2 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (plVar8 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar2 != (longlong *)0x0) {
      FUN_01bcee20();
      plVar8 = (longlong *)unaff_RDI[0x5d];
      plVar7 = plVar8;
      if (plVar8 != plVar2) {
        plVar7 = plVar2;
        if (local_40[0] == '\0') {
          if (plVar2 == (longlong *)0x0) {
            plVar7 = (longlong *)0x0;
            goto LAB_002f2713;
          }
          FUN_00d50b00();
          plVar8 = (longlong *)unaff_RDI[0x5d];
          unaff_RDI[0x5d] = (longlong)plVar2;
        }
        else {
          local_40[0] = '\0';
LAB_002f2713:
          unaff_RDI[0x5d] = (longlong)plVar7;
        }
        if (plVar8 != (longlong *)0x0) {
          FUN_00d50b20();
          plVar7 = plVar2;
        }
      }
      if ((local_40[0] != '\0') && (plVar7 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (local_38[0] != '\0') {
        FUN_00d50b20();
      }
    }
  }
  uVar4 = (**(code **)(*unaff_RDI + 0x3d0))();
LAB_002f27ca:
  if (local_48 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return uVar4;
}


