// Function: FUN_00865db0
// Address: 00865db0
// Size: 512 bytes
// Class: MUTempoEditorView
// String references:
//   "MUTempoEditorView"
//   "MUTempoEditorDelegate"
//   "_tempoEditorDelegate"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_00865db0(void)

{
  int iVar1;
  int iVar2;
  
  if (DAT_0273da70 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      iVar1 = FUN_00e7ddf0();
      if (DAT_027ebf10 == '\0') {
        iVar2 = ___cxa_guard_acquire();
        if (iVar2 != 0) {
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
      }
      DAT_0273da50 = (iVar1 != 0) << 6 | 0x80;
      _DAT_0273da38 = "_tempoEditorDelegate";
      _DAT_0273da40 = &DAT_0273cec0;
      _DAT_0273da48 = 0;
      _DAT_0273da58 = 0;
      uRam000000000273da60 = 0;
      _DAT_0273da68 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_0273da78 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_027195c8 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_027195b0 = "MUTempoEditorDelegate";
          DAT_027195c0 = 0;
          _DAT_027195b8 = 0;
          ___cxa_guard_release();
        }
      }
      FUN_00e87b80();
      ___cxa_guard_release();
    }
  }
  return &DAT_0273da38;
}


