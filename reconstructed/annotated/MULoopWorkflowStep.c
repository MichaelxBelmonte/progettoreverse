// ===== MULoopWorkflowStep — Annotated small functions =====
// 1 readable functions
// Known properties: 1
//   MULoopWorkflowStep _workflowStep

// ==================================================
// @011554e0 (571 bytes) — calculation
// Known properties of MULoopWorkflowStep:
// _workflowStep

{
  int iVar1;
  uint uVar2;
  
  if (DAT_027a0600 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_027a05e0 = -(uint)(*DAT_027a05a0 == '=');
      uVar2 = (uint)(*DAT_027a05a0 != '=');
      _DAT_027a05e4 = 0;
      if (*DAT_027a05a8 != '=') {
        _DAT_027a05e4 = uVar2;
      }
      _DAT_027a05e8 = 1;
      if (*DAT_027a05b0 != '=') {
        _DAT_027a05e8 = _DAT_027a05e4 + 1;
      }
      _DAT_027a05ec = 2;
      if (*DAT_027a05b8 != '=') {
        _DAT_027a05ec = _DAT_027a05e8 + 1;
      }
      _DAT_027a05f0 = 3;
      if (*DAT_027a05c0 != '=') {
        _DAT_027a05f0 = _DAT_027a05ec + 1;
      }
      _DAT_027a05f4 = 4;
      if (*DAT_027a05c8 != '=') {
        _DAT_027a05f4 = _DAT_027a05f0 + 1;
      }
      _DAT_027a05f8 = 5;
      if (*DAT_027a05d0 != '=') {
        _DAT_027a05f8 = _DAT_027a05f4 + 1;
      }
      DAT_027a05fc = _DAT_027a05e4 == uVar2 &&
                     ((_DAT_027a05e8 == _DAT_027a05e4 + 1 &&
                      (_DAT_027a05ec == _DAT_027a05e8 + 1 &&
                      (_DAT_027a05f0 == _DAT_027a05ec + 1 && _DAT_027a05f4 == _DAT_027a05f0 + 1)))
                     && _DAT_027a05f8 == _DAT_027a05f4 + 1);
      ___cxa_guard_release();
    }
  }
  if (DAT_027a0638 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_027a0608 = "MULoopWorkflowStep";
      _DAT_027a0610 = 7;
      DAT_027a0614 = DAT_027a05fc;
      _DAT_027a0618 = &DAT_027a05e0;
      _DAT_027a0620 = &DAT_027a05a0;
      _DAT_027a0628 = 0;
      uRam00000000027a0630 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e876a0();
  if (DAT_027a0598 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_027a0560 = FUN_01152ba0();
      _DAT_027a0558 = "_workflowStep";
      _DAT_027a0568 = 0;
      _DAT_027a0570 = 0x6500;
      _DAT_027a0578 = "MULoopWorkflowStep";
      _DAT_027a0580 = &DAT_027a0608;
      _DAT_027a0588 = 0;
      uRam00000000027a0590 = 0;
      ___cxa_guard_release();
    }
  }
  return &DAT_027a0558;
}



