// Function: FUN_007f4cf0
// Address: 007f4cf0
// Size: 658 bytes
// Class: MDEditorScrollView
// String references:
//   "MDEditorScrollView"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_007f4cf0(void)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  longlong *plVar4;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  longlong *plVar5;
  longlong *local_48;
  char local_40 [8];
  char local_38 [8];
  
  if (unaff_RSI != (longlong *)0x0) {
    FUN_00d50b00();
  }
  local_38[0] = '\0';
  plVar5 = unaff_RSI;
  do {
    (**(code **)(*plVar5 + 0x370))();
    if (local_48 == plVar5) {
      if (((local_38[0] == '\0') && (local_48 != (longlong *)0x0)) && (local_40[0] != '\0')) {
        local_38[0] = '\x01';
        goto LAB_007f4d87;
      }
    }
    else {
      plVar5 = local_48;
      if (local_40[0] == '\0') {
        if (local_38[0] == '\0') {
          pcVar3 = local_38;
        }
        else {
          FUN_00d50b20();
          pcVar3 = local_38;
        }
      }
      else {
        if (local_38[0] != '\0') {
          FUN_00d50b20();
        }
        local_38[0] = '\x01';
LAB_007f4d87:
        local_38[0] = '\x01';
        pcVar3 = local_40;
      }
      *pcVar3 = '\0';
    }
    if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((DAT_02709e70 == '\0') && (iVar2 = ___cxa_guard_acquire(), iVar2 != 0)) {
      _DAT_026f8cd8 = FUN_00074a70();
      _DAT_026f8cc0 = "MDEditorScrollView";
      _DAT_026f8cc8 = 0x260;
      _DAT_026f8cd0 = FUN_000749b0;
      _DAT_026f8ce0 = 0;
      uRam00000000026f8ce8 = 0;
      _DAT_026f8cf0 = 0;
      _DAT_026f8d68 = 0;
      uRam00000000026f8d70 = 0;
      _DAT_026f8d78 = 0;
      DAT_026f8d7a = 1;
      _DAT_026f8cf8 = 0;
      uRam00000000026f8d00 = 0;
      _DAT_026f8d08 = 0;
      uRam00000000026f8d10 = 0;
      _DAT_026f8d18 = 0;
      uRam00000000026f8d20 = 0;
      _DAT_026f8d28 = 0;
      uRam00000000026f8d30 = 0;
      _DAT_026f8d38 = 0;
      uRam00000000026f8d40 = 0;
      _DAT_026f8d48 = 0;
      uRam00000000026f8d50 = 0;
      _DAT_026f8d58 = 0;
      uRam00000000026f8d60 = 0;
      DAT_026f8d83 = 0;
      _DAT_026f8d7b = 0;
      ___cxa_guard_release();
    }
    plVar4 = &DAT_02802688;
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x360))();
      cVar1 = FUN_00e85ea0();
      plVar4 = (longlong *)&stack0xffffffffffffffa8;
      if (cVar1 == '\0') {
        plVar4 = &DAT_02802688;
      }
    }
    if (*plVar4 != 0) {
      if ((local_38[0] == '\0') && (plVar5 != (longlong *)0x0)) {
        FUN_00d50b00();
      }
      if (unaff_RSI == (longlong *)0x0) goto LAB_007f4f19;
      goto LAB_007f4f14;
    }
  } while (plVar5 != (longlong *)0x0);
  plVar5 = (longlong *)0x0;
  if (unaff_RSI != (longlong *)0x0) {
LAB_007f4f14:
    FUN_00d50b20();
  }
LAB_007f4f19:
  FUN_0197b900();
  *(undefined1 *)(unaff_RDI + 1) = 0;
  if (local_40[0] == '\0') {
    if (local_48 != (longlong *)0x0) {
      FUN_00d50b00();
      *unaff_RDI = local_48;
      *(undefined1 *)(unaff_RDI + 1) = 1;
      if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_007f4f3c;
    }
    local_48 = (longlong *)0x0;
  }
  *unaff_RDI = local_48;
  *(undefined1 *)(unaff_RDI + 1) = 1;
LAB_007f4f3c:
  if (plVar5 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}


