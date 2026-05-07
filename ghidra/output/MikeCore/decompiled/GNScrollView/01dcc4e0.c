// Function: FUN_01dcc4e0
// Address: 01dcc4e0
// Size: 706 bytes
// Class: GNScrollView
// String references:
//   "GNScrollView"


/* WARNING: Removing unreachable block (ram,0x01dcc6be) */
/* WARNING: Removing unreachable block (ram,0x01dcc559) */
/* WARNING: Removing unreachable block (ram,0x01dcc5a3) */
/* WARNING: Removing unreachable block (ram,0x01dcc5a8) */
/* WARNING: Removing unreachable block (ram,0x01dcc5b0) */
/* WARNING: Removing unreachable block (ram,0x01dcc55f) */
/* WARNING: Removing unreachable block (ram,0x01dcc6c7) */
/* WARNING: Removing unreachable block (ram,0x01dcc587) */
/* WARNING: Removing unreachable block (ram,0x01dcc590) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01dcc4e0(void)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  undefined8 *puVar4;
  char unaff_SIL;
  longlong *local_38;
  char local_30;
  longlong *local_28;
  
  FUN_01dccc70();
  if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38 != (longlong *)0x0) == (bool)unaff_SIL) {
    return;
  }
  FUN_01e40eb0();
  if (local_30 == '\0') {
    if (local_38 != (longlong *)0x0) {
      FUN_00d50b00();
      goto LAB_01dcc53f;
    }
    local_28 = (longlong *)0x0;
  }
  else {
LAB_01dcc53f:
    local_28 = local_38;
    if (local_38 != (longlong *)0x0) {
      FUN_01e40eb0();
      if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_01dcc5d6;
    }
  }
  local_38 = (longlong *)0x0;
LAB_01dcc5d6:
  if ((DAT_026f0e00 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
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
  plVar1 = DAT_02802688;
  if (local_38 != (longlong *)0x0) {
    (**(code **)(*local_38 + 0x360))();
    cVar2 = FUN_00e85ea0();
    plVar1 = DAT_02802688;
    if (cVar2 != '\0') {
      plVar1 = local_28;
    }
  }
  if (plVar1 != (longlong *)0x0) {
    if (unaff_SIL == '\0') {
      FUN_01d97f00();
    }
    else {
      puVar4 = (undefined8 *)FUN_00e8fc40();
      FUN_0006daf0();
      *(undefined4 *)(puVar4 + 0x27) = 0;
      *puVar4 = &DAT_02697bb0;
      puVar4[2] = &DAT_026984e8;
      puVar4[0x28] = 0;
      *(undefined1 *)(puVar4 + 0x29) = 0;
      (*DAT_02697bc8)();
      FUN_01d97f00();
      if (puVar4 != (undefined8 *)0x0) {
        FUN_00d50b20();
      }
    }
  }
  if (local_28 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}


