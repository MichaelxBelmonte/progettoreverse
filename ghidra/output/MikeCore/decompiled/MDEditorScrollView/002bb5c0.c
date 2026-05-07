// Function: FUN_002bb5c0
// Address: 002bb5c0
// Size: 1057 bytes
// Class: MDEditorScrollView
// String references:
//   "MDEditorScrollView"
//   "MDEditorViewController"


/* WARNING: Removing unreachable block (ram,0x002bb8e5) */
/* WARNING: Removing unreachable block (ram,0x002bb8ee) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_002bb5c0(void)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  char *pcVar5;
  longlong **pplVar6;
  longlong *plVar7;
  longlong **pplVar8;
  longlong *unaff_RDI;
  longlong *plVar9;
  char local_68;
  longlong *local_50;
  char local_48 [8];
  char local_40 [8];
  char local_38 [8];
  
  pplVar8 = &local_50;
  FUN_00d3ecf0();
  plVar9 = local_50;
  if ((DAT_026f7020 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
    _DAT_0270aa58 = FUN_00015ff0();
    _DAT_0270aa40 = "MDEditorViewController";
    _DAT_0270aa48 = 0x1e8;
    _DAT_0270aa50 = FUN_00074eb0;
    _DAT_0270aa60 = 0;
    uRam000000000270aa68 = 0;
    _DAT_0270aa70 = 0;
    _DAT_0270aae8 = 0;
    uRam000000000270aaf0 = 0;
    _DAT_0270aaf8 = 0;
    DAT_0270aafa = 1;
    _DAT_0270aa78 = 0;
    uRam000000000270aa80 = 0;
    _DAT_0270aa88 = 0;
    uRam000000000270aa90 = 0;
    _DAT_0270aa98 = 0;
    uRam000000000270aaa0 = 0;
    _DAT_0270aaa8 = 0;
    uRam000000000270aab0 = 0;
    _DAT_0270aab8 = 0;
    uRam000000000270aac0 = 0;
    _DAT_0270aac8 = 0;
    uRam000000000270aad0 = 0;
    _DAT_0270aad8 = 0;
    uRam000000000270aae0 = 0;
    DAT_0270ab03 = 0;
    _DAT_0270aafb = 0;
    ___cxa_guard_release();
  }
  if (plVar9 != (longlong *)0x0) {
    (**(code **)(*plVar9 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 != '\0') goto LAB_002bb620;
  }
  pplVar8 = (longlong **)&DAT_02802688;
LAB_002bb620:
  plVar9 = *pplVar8;
  local_40[0] = *(char *)(pplVar8 + 1);
  pplVar6 = (longlong **)local_40;
  if (local_40[0] != '\0') {
    pplVar6 = pplVar8 + 1;
  }
  *(undefined1 *)pplVar6 = 0;
  if ((local_48[0] != '\0') && (local_50 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar9 != (longlong *)0x0) {
    if (unaff_RDI != (longlong *)0x0) {
      FUN_00d50b00();
    }
    local_38[0] = '\0';
    plVar9 = unaff_RDI;
    do {
      (**(code **)(*plVar9 + 0x370))();
      plVar7 = local_50;
      if (local_50 == plVar9) {
        if (((local_38[0] == '\0') && (local_50 != (longlong *)0x0)) && (local_48[0] != '\0')) {
          local_38[0] = '\x01';
          goto LAB_002bb6e7;
        }
      }
      else {
        if (local_48[0] == '\0') {
          if (local_38[0] == '\0') {
            pcVar5 = local_38;
          }
          else {
            FUN_00d50b20();
            pcVar5 = local_38;
          }
        }
        else {
          if (local_38[0] != '\0') {
            FUN_00d50b20();
          }
          local_38[0] = '\x01';
          plVar9 = plVar7;
LAB_002bb6e7:
          local_38[0] = '\x01';
          pcVar5 = local_48;
          plVar7 = plVar9;
        }
        *pcVar5 = '\0';
        plVar9 = plVar7;
      }
      if ((local_48[0] != '\0') && (local_50 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((DAT_02709e70 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
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
      plVar7 = &DAT_02802688;
      if (plVar9 != (longlong *)0x0) {
        (**(code **)(*plVar9 + 0x360))();
        cVar3 = FUN_00e85ea0();
        plVar7 = (longlong *)&stack0xffffffffffffff90;
        if (cVar3 == '\0') {
          plVar7 = &DAT_02802688;
        }
      }
      lVar1 = *plVar7;
      if (lVar1 != 0) {
        if ((local_38[0] == '\0') && (plVar9 != (longlong *)0x0)) {
          FUN_00d50b00();
        }
        plVar7 = plVar9;
        if (unaff_RDI == (longlong *)0x0) goto LAB_002bb874;
        goto LAB_002bb86f;
      }
    } while (plVar9 != (longlong *)0x0);
    plVar7 = (longlong *)0x0;
    if (unaff_RDI != (longlong *)0x0) {
LAB_002bb86f:
      FUN_00d50b20();
    }
LAB_002bb874:
    if (plVar7 != (longlong *)0x0) {
      FUN_0021a630();
      FUN_0197b900();
      plVar2 = local_50;
      if ((local_68 != '\0') && (plVar9 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_48[0] != '\0') && (local_50 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar2 == plVar9) {
        (**(code **)(*unaff_RDI + 0x918))();
      }
    }
    if ((lVar1 != 0) && (plVar7 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (local_40[0] != '\0') {
      FUN_00d50b20();
    }
  }
  return;
}


