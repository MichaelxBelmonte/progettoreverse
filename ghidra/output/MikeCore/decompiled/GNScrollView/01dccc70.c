// Function: FUN_01dccc70
// Address: 01dccc70
// Size: 743 bytes
// Class: GNScrollView
// String references:
//   "GNScrollView"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_01dccc70(void)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  longlong **pplVar5;
  undefined8 *unaff_RDI;
  longlong *plVar6;
  longlong *local_58;
  char local_50;
  longlong *local_48;
  char local_40;
  char local_31;
  
  FUN_01e40eb0();
  plVar6 = local_48;
  if (local_40 == '\0') {
    if (local_48 != (longlong *)0x0) {
      FUN_00d50b00();
      local_58 = plVar6;
      local_50 = '\x01';
      if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_01dccc9f;
    }
    local_58 = (longlong *)0x0;
    local_50 = '\x01';
    plVar6 = (longlong *)0x0;
  }
  else {
    local_58 = local_48;
    local_50 = '\x01';
LAB_01dccc9f:
    if (plVar6 != (longlong *)0x0) {
      FUN_01e40eb0();
      plVar2 = local_48;
      plVar1 = plVar6;
      if (plVar6 != local_48) {
        plVar6 = plVar2;
        if (local_40 != '\0') {
          local_58 = local_48;
          FUN_00d50b20();
          local_50 = '\x01';
          goto LAB_01dccd54;
        }
        if (local_48 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        local_58 = plVar2;
        FUN_00d50b20();
        local_50 = '\x01';
        plVar1 = local_48;
      }
      if ((local_40 != '\0') && (plVar1 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
LAB_01dccd54:
  if ((DAT_026f0e00 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
    _DAT_026f8e78 = FUN_0006d940();
    _DAT_026f8e60 = "GNScrollView";
    _DAT_026f8e68 = 0x1c0;
    _DAT_026f8e70 = FUN_00074e80;
    _DAT_026f8e80 = 0;
    uRam00000000026f8e88 = 0;
    _DAT_026f8e90 = 0;
    uRam00000000026f8e98 = 0;
    _DAT_026f8ea0 = 0;
    uRam00000000026f8ea8 = 0;
    _DAT_026f8eb0 = 0;
    uRam00000000026f8eb8 = 0;
    _DAT_026f8ec0 = 0;
    uRam00000000026f8ec8 = 0;
    _DAT_026f8ed0 = 0;
    uRam00000000026f8ed8 = 0;
    _DAT_026f8ee0 = 0;
    uRam00000000026f8ee8 = 0;
    _DAT_026f8ef0 = 0;
    uRam00000000026f8ef8 = 0;
    _DAT_026f8f00 = 0;
    uRam00000000026f8f08 = 0;
    _DAT_026f8f10 = 0;
    uRam00000000026f8f18 = 0;
    _DAT_026f8f20 = 0;
    ___cxa_guard_release();
  }
  if (plVar6 == (longlong *)0x0) {
LAB_01dccd86:
    pplVar5 = &DAT_02802688;
  }
  else {
    (**(code **)(*plVar6 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') goto LAB_01dccd86;
    pplVar5 = &local_58;
  }
  local_31 = *(char *)(pplVar5 + 1);
  if ((local_31 == '\0') || (*pplVar5 == (longlong *)0x0)) {
    if (*pplVar5 == (longlong *)0x0) {
      *(undefined1 *)(unaff_RDI + 1) = 0;
      *unaff_RDI = 0;
      goto joined_r0x01dccea9;
    }
  }
  else {
    FUN_00d50b00();
  }
  pplVar5 = &local_48;
  FUN_01d982e0();
  plVar6 = local_48;
  FUN_001f33a0();
  if (plVar6 == (longlong *)0x0) {
    pplVar5 = &DAT_02802688;
    *(undefined1 *)(unaff_RDI + 1) = 0;
    plVar6 = DAT_02802688;
    if (DAT_02802690 != '\0') goto LAB_01dcce0c;
LAB_01dcce3c:
    if (plVar6 != (longlong *)0x0) {
      FUN_00d50b00();
    }
    *unaff_RDI = plVar6;
    *(undefined1 *)(unaff_RDI + 1) = 1;
  }
  else {
    (**(code **)(*plVar6 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') {
      pplVar5 = &DAT_02802688;
    }
    *(undefined1 *)(unaff_RDI + 1) = 0;
    plVar6 = *pplVar5;
    if (*(char *)(pplVar5 + 1) == '\0') goto LAB_01dcce3c;
LAB_01dcce0c:
    *unaff_RDI = plVar6;
    *(undefined1 *)(unaff_RDI + 1) = 1;
    *(undefined1 *)(pplVar5 + 1) = 0;
  }
  if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (local_31 != '\0') {
    FUN_00d50b20();
  }
joined_r0x01dccea9:
  if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}


