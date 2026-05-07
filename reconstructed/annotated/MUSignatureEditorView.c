// ===== MUSignatureEditorView — Annotated small functions =====
// 2 readable functions
// Known properties: 1
//   MUEditTimelineMode _editTimelineMode

// ==================================================
// @0085d370 (626 bytes) — calculation
// Known properties of MUSignatureEditorView:
// _editTimelineMode

{
  bool bVar1;
  int iVar2;
  
  if (DAT_0271ad90 == '\0') {
    iVar2 = ___cxa_guard_acquire();
    if (iVar2 != 0) {
      bVar1 = *DAT_0271ad60 != '=';
      _DAT_0271ad80 = -(uint)(*DAT_0271ad60 == '=');
      _DAT_0271ad84 = 0;
      if (*DAT_0271ad68 != '=') {
        _DAT_0271ad84 = (uint)bVar1;
      }
      _DAT_0271ad88 = 1;
      if (*DAT_0271ad70 != '=') {
        _DAT_0271ad88 = _DAT_0271ad84 + 1;
      }
      DAT_0271ad8c = _DAT_0271ad84 == bVar1 && _DAT_0271ad88 == _DAT_0271ad84 + 1;
      ___cxa_guard_release();
    }
  }
  if (DAT_0271adc8 == '\0') {
    iVar2 = ___cxa_guard_acquire();
    if (iVar2 != 0) {
      _DAT_0271ad98 = "MUEditTimelineMode";
      _DAT_0271ada0 = 3;
      DAT_0271ada4 = DAT_0271ad8c;
      _DAT_0271ada8 = &DAT_0271ad80;
      _DAT_0271adb0 = &DAT_0271ad60;
      _DAT_0271adb8 = 0;
      uRam000000000271adc0 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e876a0();
  if (DAT_0273cc30 == '\0') {
    iVar2 = ___cxa_guard_acquire();
    if (iVar2 != 0) {
      if (DAT_026e11d8 == '\0') {
        iVar2 = ___cxa_guard_acquire();
        if (iVar2 != 0) {
          _DAT_0273c748 = FUN_0006d940();
          _DAT_0273c730 = "MUSignatureEditorView";
          _DAT_0273c738 = 0x1b0;
          _DAT_0273c740 = FUN_0010c5e0;
          _DAT_0273c750 = 0;
          uRam000000000273c758 = 0;
          _DAT_0273c760 = 0;
          _DAT_0273c7d8 = 0;
          uRam000000000273c7e0 = 0;
          _DAT_0273c7e8 = 0;
          DAT_0273c7ea = 1;
          _DAT_0273c768 = 0;
          uRam000000000273c770 = 0;
          _DAT_0273c778 = 0;
          uRam000000000273c780 = 0;
          _DAT_0273c788 = 0;
          uRam000000000273c790 = 0;
          _DAT_0273c798 = 0;
          uRam000000000273c7a0 = 0;
          _DAT_0273c7a8 = 0;
          uRam000000000273c7b0 = 0;
          _DAT_0273c7b8 = 0;
          uRam000000000273c7c0 = 0;
          _DAT_0273c7c8 = 0;
          uRam000000000273c7d0 = 0;
          DAT_0273c7f3 = 0;
          _DAT_0273c7eb = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_0273cbf0 = "_editTimelineMode";
      _DAT_0273cbf8 = &DAT_0273c730;
      _DAT_0273cc00 = 0;
      _DAT_0273cc08 = 0x6500;
      _DAT_0273cc10 = "MUEditTimelineMode";
      _DAT_0273cc18 = &DAT_0271ad98;
      _DAT_0273cc20 = 0;
      uRam000000000273cc28 = 0;
      ___cxa_guard_release();
    }
  }
  return &DAT_0273cbf0;
}




// ==================================================
// @008149f0 (503 bytes) — logic_branch
// Known properties of MUSignatureEditorView:
// _editTimelineMode

{
  int iVar1;
  undefined4 uVar2;
  
  if (DAT_026e11d8 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_0273c748 = FUN_0006d940();
      _DAT_0273c730 = "MUSignatureEditorView";
      _DAT_0273c738 = 0x1b0;
      _DAT_0273c740 = FUN_0010c5e0;
      _DAT_0273c750 = 0;
      uRam000000000273c758 = 0;
      _DAT_0273c760 = 0;
      _DAT_0273c7d8 = 0;
      uRam000000000273c7e0 = 0;
      _DAT_0273c7e8 = 0;
      DAT_0273c7ea = 1;
      _DAT_0273c768 = 0;
      uRam000000000273c770 = 0;
      _DAT_0273c778 = 0;
      uRam000000000273c780 = 0;
      _DAT_0273c788 = 0;
      uRam000000000273c790 = 0;
      _DAT_0273c798 = 0;
      uRam000000000273c7a0 = 0;
      _DAT_0273c7a8 = 0;
      uRam000000000273c7b0 = 0;
      _DAT_0273c7b8 = 0;
      uRam000000000273c7c0 = 0;
      _DAT_0273c7c8 = 0;
      uRam000000000273c7d0 = 0;
      DAT_0273c7f3 = 0;
      _DAT_0273c7eb = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_0273c7eb != '\0') {
    return;
  }
  FUN_000a31d0();
  FUN_00e87760();
  FUN_0006daf0();
  FUN_00d50c00();
  FUN_0085a740();
  FUN_00d50c00();
  FUN_00e87770();
  uVar2 = FUN_01c86590();
  FUN_00e87920(uVar2,0);
  FUN_01c86750();
  FUN_0085d930();
  FUN_0085d930();
  return;
}



