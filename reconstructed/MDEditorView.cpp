// Reconstructed implementation of MDEditorView
// From MikeCore binary — reverse-engineered pseudocode

#include "MDEditorView.h"

// ============================================================
// @005bda10 — 1159 bytes
// str: ""MDEditorView""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005bda10(void)

{
  int iVar1;
  undefined8 *unaff_RDI;
  
  FUN_0059ed40();
  *unaff_RDI = &DAT_024ee5b8;
  unaff_RDI[2] = &DAT_024efc60;
  unaff_RDI[0x28] = &DAT_024efca0;
  unaff_RDI[0x29] = &DAT_024efcf0;
  unaff_RDI[0x2a] = &DAT_024efd20;
  FUN_005bdee0();
  *(undefined1 *)(unaff_RDI + 0xa8) = 0;
  if (DAT_0271a0b0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_0272a1e8 = FUN_000914a0();
      _DAT_0272a1d0 = "MDEditorView";
      _DAT_0272a1d8 = 0x560;
      _DAT_0272a1e0 = FUN_0034df50;
      _DAT_0272a1f0 = 0;
      uRam000000000272a1f8 = 0;
      _DAT_0272a200 = 0;
      _DAT_0272a278 = 0;
      uRam000000000272a280 = 0;
      _DAT_0272a288 = 0;
      DAT_0272a28a = 1;
      _DAT_0272a208 = 0;
      uRam000000000272a210 = 0;
      _DAT_0272a218 = 0;
      uRam000000000272a220 = 0;
      _DAT_0272a228 = 0;
      uRam000000000272a230 = 0;
      _DAT_0272a238 = 0;
      uRam000000000272a240 = 0;
      _DAT_0272a248 = 0;
      uRam000000000272a250 = 0;
      _DAT_0272a258 = 0;
      uRam000000000272a260 = 0;
      _DAT_0272a268 = 0;
      uRam000000000272a270 = 0;
      DAT_0272a293 = 0;
      _DAT_0272a28b = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_0272a28b == '\0') {
    FUN_005be210();
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x541) = 0;
  if (DAT_0271a0b0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_0272a1e8 = FUN_000914a0();
      _DAT_0272a1d0 = "MDEditorView";
      _DAT_0272a1d8 = 0x560;
      _DAT_0272a1e0 = FUN_0034df50;
      _DAT_0272a1f0 = 0;
      uRam000000000272a1f8 = 0;
      _DAT_0272a200 = 0;
      _DAT_0272a278 = 0;
      uRam000000000272a280 = 0;
      _DAT_0272a288 = 0;
      DAT_0272a28a = 1;
      _DAT_0272a208 = 0;
      uRam000000000272a210 = 0;
      _DAT_0272a218 = 0;
      uRam000000000272a220 = 0;
      _DAT_0272a228 = 0;
      uRam000000000272a230 = 0;
      _DAT_0272a238 = 0;
      uRam000000000272a240 = 0;
      _DAT_0272a248 = 0;
      uRam000000000272a250 = 0;
      _DAT_0272a258 = 0;
      uRam000000000272a260 = 0;
      _DAT_0272a268 = 0;
      uRam000000000272a270 = 0;
      DAT_0272a293 = 0;
      _DAT_0272a28b = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_0272a28b == '\0') {
    FUN_005be3a0();
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x544) = 0;
  if (DAT_0271a0b0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_0272a1e8 = FUN_000914a0();
      _DAT_0272a1d0 = "MDEditorView";
      _DAT_0272a1d8 = 0x560;
      _DAT_0272a1e0 = FUN_0034df50;
      _DAT_0272a1f0 = 0;
      uRam000000000272a1f8 = 0;
      _DAT_0272a200 = 0;
      _DAT_0272a278 = 0;
      uRam000000000272a280 = 0;
      _DAT_0272a288 = 0;
      DAT_0272a28a = 1;
      _DAT_0272a208 = 0;
      uRam000000000272a210 = 0;
      _DAT_0272a218 = 0;
      uRam000000000272a220 = 0;
      _DAT_0272a228 = 0;
      uRam000000000272a230 = 0;
      _DAT_0272a238 = 0;
      uRam000000000272a240 = 0;
      _DAT_0272a248 = 0;
      uRam000000000272a250 = 0;
      _DAT_0272a258 = 0;
      uRam000000000272a260 = 0;
      _DAT_0272a268 = 0;
      uRam000000000272a270 = 0;
      DAT_0272a293 = 0;
      _DAT_0272a28b = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_0272a28b == '\0') {
    FUN_005be530();
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 0xa9) = 0;
  if (DAT_0271a0b0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_0272a1e8 = FUN_000914a0();
      _DAT_0272a1d0 = "MDEditorView";
      _DAT_0272a1d8 = 0x560;
      _DAT_0272a1e0 = FUN_0034df50;
      _DAT_0272a1f0 = 0;
      uRam000000000272a1f8 = 0;
      _DAT_0272a200 = 0;
      _DAT_0272a278 = 0;
      uRam000000000272a280 = 0;
      _DAT_0272a288 = 0;
      DAT_0272a28a = 1;
      _DAT_0272a208 = 0;
      uRam000000000272a210 = 0;
      _DAT_0272a218 = 0;
      uRam000000000272a220 = 0;
      _DAT_0272a228 = 0;
      uRam000000000272a230 = 0;
      _DAT_0272a238 = 0;
      uRam000000000272a240 = 0;
      _DAT_0272a248 = 0;
      uRam000000000272a250 = 0;
      _DAT_0272a258 = 0;
      uRam000000000272a260 = 0;
      _DAT_0272a268 = 0;
      uRam000000000272a270 = 0;
      DAT_0272a293 = 0;
      _DAT_0272a28b = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_0272a28b == '\0') {
    FUN_005be780();
    FUN_00e87980();
  }
  FUN_005be9d0();
  FUN_005becf0();
  return;
}




// ============================================================
// @00770390 — 871 bytes
// str: ""_endRecordingOnUndo""
// str: ""_endTransferOnUndo""
// ============================================================

/* WARNING: Removing unreachable block (ram,0x007704ff) */
/* WARNING: Removing unreachable block (ram,0x0077050b) */

void FUN_00770390(pthread_key_t param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  void *pvVar4;
  char *pcVar5;
  longlong *unaff_RDI;
  longlong **pplVar6;
  longlong *local_80;
  char local_78;
  longlong local_60;
  char local_58;
  longlong *local_50;
  undefined4 local_48;
  longlong *local_40;
  char local_38;
  
  pplVar6 = &local_50;
  FUN_00d3ecf0();
  plVar1 = local_50;
  FUN_000fe4b0();
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 != '\0') goto LAB_007703e9;
  }
  pplVar6 = (longlong **)&DAT_02802688;
LAB_007703e9:
  plVar1 = *pplVar6;
  if (*(char *)(pplVar6 + 1) == '\0') {
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar6 + 1) = 0;
  }
  if (((char)local_48 != '\0') && (local_50 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 != (longlong *)0x0) {
    FUN_013fe9a0();
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e8920();
    FUN_00757c60();
    plVar2 = local_50;
    if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (((char)local_48 != '\0') && (local_50 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if (plVar2 == local_80) {
      *(int *)((longlong)unaff_RDI + 0x16c) = *(int *)((longlong)unaff_RDI + 0x16c) + 1;
      if (unaff_RDI[0x29] != 0) {
        FUN_00100160();
      }
      (**(code **)(*plVar1 + 0x3e0))();
      FUN_013fe9d0();
      plVar2 = local_50;
      if (((((char)local_48 == '\0') && (local_50 != (longlong *)0x0)) &&
          (FUN_00d50b00(), (char)local_48 != '\0')) && (local_50 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (unaff_RDI[0x29] == 0) {
        FUN_007647b0();
      }
      FUN_01f27fe0();
      cVar3 = (**(code **)(*local_50 + 0x788))();
      if (((char)local_48 != '\0') && (local_50 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (cVar3 == '\0') {
        FUN_00770960();
      }
      FUN_01f27fe0();
      cVar3 = (**(code **)(*local_50 + 0x450))();
      pcVar5 = "_endTransferOnUndo";
      if (cVar3 != '\0') {
        pcVar5 = "_endRecordingOnUndo";
      }
      if (((char)local_48 != '\0') && (local_50 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      (**(code **)(*unaff_RDI + 0x498))();
      FUN_00cb1f10();
      FUN_00d50b00();
      local_48 = 1;
      local_50 = &DAT_024c5048;
      local_38 = 0;
      FUN_00d50b00();
      local_38 = '\x01';
      local_40 = plVar1;
      FUN_00db2810(&DAT_0272a2a0,pcVar5,&local_50);
      local_50 = &DAT_024c5048;
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (unaff_RDI != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar2 != (longlong *)0x0) {
        FUN_00d50b20();
      }
    }
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @0076ffb0 — 705 bytes
// str: ""MDEditorView""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0076ffb0(void)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  longlong unaff_RDI;
  longlong **pplVar5;
  longlong *local_40;
  char local_38;
  
  if (*(longlong *)(unaff_RDI + 0x70) == 0) {
    return;
  }
  FUN_00d50b00();
  FUN_00d50b20();
  pplVar5 = &local_40;
  FUN_00d3ecf0();
  plVar1 = local_40;
  FUN_000829c0();
  if (plVar1 == (longlong *)0x0) {
LAB_0077001f:
    pplVar5 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') goto LAB_0077001f;
  }
  plVar1 = *pplVar5;
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 != (longlong *)0x0) {
    lVar2 = *(longlong *)(unaff_RDI + 0x70);
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    FUN_00324fe0();
    if (lVar2 == 0) {
      return;
    }
    FUN_00d50b20();
    return;
  }
  pplVar5 = &local_40;
  FUN_00d3ecf0();
  plVar1 = local_40;
  if ((DAT_0271a0b0 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
    _DAT_0272a1e8 = FUN_000914a0();
    _DAT_0272a1d0 = "MDEditorView";
    _DAT_0272a1d8 = 0x560;
    _DAT_0272a1e0 = FUN_0034df50;
    _DAT_0272a1f0 = 0;
    uRam000000000272a1f8 = 0;
    _DAT_0272a200 = 0;
    _DAT_0272a278 = 0;
    uRam000000000272a280 = 0;
    _DAT_0272a288 = 0;
    DAT_0272a28a = 1;
    _DAT_0272a208 = 0;
    uRam000000000272a210 = 0;
    _DAT_0272a218 = 0;
    uRam000000000272a220 = 0;
    _DAT_0272a228 = 0;
    uRam000000000272a230 = 0;
    _DAT_0272a238 = 0;
    uRam000000000272a240 = 0;
    _DAT_0272a248 = 0;
    uRam000000000272a250 = 0;
    _DAT_0272a258 = 0;
    uRam000000000272a260 = 0;
    _DAT_0272a268 = 0;
    uRam000000000272a270 = 0;
    DAT_0272a293 = 0;
    _DAT_0272a28b = 0;
    ___cxa_guard_release();
  }
  if (plVar1 == (longlong *)0x0) {
LAB_007700ba:
    pplVar5 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') goto LAB_007700ba;
  }
  plVar1 = *pplVar5;
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 != (longlong *)0x0) {
    lVar2 = *(longlong *)(unaff_RDI + 0x70);
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    FUN_00324fe0();
    if (lVar2 == 0) {
      return;
    }
    FUN_00d50b20();
    return;
  }
  pplVar5 = &local_40;
  FUN_00d3ecf0();
  plVar1 = local_40;
  FUN_0034d920();
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 != '\0') goto LAB_00770154;
  }
  pplVar5 = (longlong **)&DAT_02802688;
LAB_00770154:
  plVar1 = *pplVar5;
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 != (longlong *)0x0) {
    lVar2 = *(longlong *)(unaff_RDI + 0x70);
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    FUN_00324fe0();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  return;
}




// ============================================================
// @005631a0 — 638 bytes
// str: ""MDEditorView""
// ============================================================

/* WARNING: Removing unreachable block (ram,0x00563327) */
/* WARNING: Removing unreachable block (ram,0x00563335) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005631a0(void)

{
  int iVar1;
  undefined4 uVar2;
  longlong local_5c0;
  longlong local_5a0;
  
  if ((DAT_0271a0b0 == '\0') && (iVar1 = ___cxa_guard_acquire(), iVar1 != 0)) {
    _DAT_0272a1e8 = FUN_000914a0();
    _DAT_0272a1d0 = "MDEditorView";
    _DAT_0272a1d8 = 0x560;
    _DAT_0272a1e0 = FUN_0034df50;
    _DAT_0272a1f0 = 0;
    uRam000000000272a1f8 = 0;
    _DAT_0272a200 = 0;
    _DAT_0272a278 = 0;
    uRam000000000272a280 = 0;
    _DAT_0272a288 = 0;
    DAT_0272a28a = 1;
    _DAT_0272a208 = 0;
    uRam000000000272a210 = 0;
    _DAT_0272a218 = 0;
    uRam000000000272a220 = 0;
    _DAT_0272a228 = 0;
    uRam000000000272a230 = 0;
    _DAT_0272a238 = 0;
    uRam000000000272a240 = 0;
    _DAT_0272a248 = 0;
    uRam000000000272a250 = 0;
    _DAT_0272a258 = 0;
    uRam000000000272a260 = 0;
    _DAT_0272a268 = 0;
    uRam000000000272a270 = 0;
    DAT_0272a293 = 0;
    _DAT_0272a28b = 0;
    ___cxa_guard_release();
  }
  if (DAT_0272a28b == '\0') {
    FUN_0059e680();
    FUN_00e87760();
    FUN_000916b0();
    FUN_00d50c00();
    FUN_005bda10();
    FUN_00d50c00();
    FUN_00e87770();
    uVar2 = FUN_00392400();
    FUN_00e87920(uVar2,0);
    if (local_5a0 != 0) {
      FUN_00d50b20();
    }
    if (local_5c0 != 0) {
      FUN_00d50b20();
    }
    FUN_0034d310();
    FUN_0034d310();
  }
  return;
}




// ============================================================
// @005be780 — 547 bytes
// str: ""MDEditorView""
// str: ""MUScaleRulerViewDisplayMode""
// str: ""_toMode""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_005be780(void)

{
  int iVar1;
  
  if (DAT_0270f508 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_0270f4f0 = _DAT_0238fcc0;
      uRam000000000270f4f4 = _UNK_0238fcc4;
      uRam000000000270f4f8 = _UNK_0238fcc8;
      uRam000000000270f4fc = _UNK_0238fccc;
      DAT_0270f500 = 1;
      ___cxa_guard_release();
    }
  }
  if (DAT_0270f540 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_0270f510 = "MUScaleRulerViewDisplayMode";
      _DAT_0270f518 = 4;
      DAT_0270f51c = DAT_0270f500;
      _DAT_0270f520 = &DAT_0270f4f0;
      _DAT_0270f528 = &DAT_0270f4c0;
      _DAT_0270f530 = 0;
      uRam000000000270f538 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e876a0();
  if (DAT_0271a218 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_0271a0b0 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_0272a1e8 = FUN_000914a0();
          _DAT_0272a1d0 = "MDEditorView";
          _DAT_0272a1d8 = 0x560;
          _DAT_0272a1e0 = FUN_0034df50;
          _DAT_0272a1f0 = 0;
          uRam000000000272a1f8 = 0;
          _DAT_0272a200 = 0;
          _DAT_0272a278 = 0;
          uRam000000000272a280 = 0;
          _DAT_0272a288 = 0;
          DAT_0272a28a = 1;
          _DAT_0272a208 = 0;
          uRam000000000272a210 = 0;
          _DAT_0272a218 = 0;
          uRam000000000272a220 = 0;
          _DAT_0272a228 = 0;
          uRam000000000272a230 = 0;
          _DAT_0272a238 = 0;
          uRam000000000272a240 = 0;
          _DAT_0272a248 = 0;
          uRam000000000272a250 = 0;
          _DAT_0272a258 = 0;
          uRam000000000272a260 = 0;
          _DAT_0272a268 = 0;
          uRam000000000272a270 = 0;
          DAT_0272a293 = 0;
          _DAT_0272a28b = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_0271a1d8 = "_toMode";
      _DAT_0271a1e0 = &DAT_0272a1d0;
      _DAT_0271a1e8 = 0;
      _DAT_0271a1f0 = 0x6500;
      _DAT_0271a1f8 = "MUScaleRulerViewDisplayMode";
      _DAT_0271a200 = &DAT_0270f510;
      _DAT_0271a208 = 0;
      uRam000000000271a210 = 0;
      ___cxa_guard_release();
    }
  }
  return &DAT_0271a1d8;
}




// ============================================================
// @005be530 — 547 bytes
// str: ""MDEditorView""
// str: ""MUScaleRulerViewDisplayMode""
// str: ""_fromMode""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_005be530(void)

{
  int iVar1;
  
  if (DAT_0270f508 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_0270f4f0 = _DAT_0238fcc0;
      uRam000000000270f4f4 = _UNK_0238fcc4;
      uRam000000000270f4f8 = _UNK_0238fcc8;
      uRam000000000270f4fc = _UNK_0238fccc;
      DAT_0270f500 = 1;
      ___cxa_guard_release();
    }
  }
  if (DAT_0270f540 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_0270f510 = "MUScaleRulerViewDisplayMode";
      _DAT_0270f518 = 4;
      DAT_0270f51c = DAT_0270f500;
      _DAT_0270f520 = &DAT_0270f4f0;
      _DAT_0270f528 = &DAT_0270f4c0;
      _DAT_0270f530 = 0;
      uRam000000000270f538 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e876a0();
  if (DAT_0271a1d0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_0271a0b0 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_0272a1e8 = FUN_000914a0();
          _DAT_0272a1d0 = "MDEditorView";
          _DAT_0272a1d8 = 0x560;
          _DAT_0272a1e0 = FUN_0034df50;
          _DAT_0272a1f0 = 0;
          uRam000000000272a1f8 = 0;
          _DAT_0272a200 = 0;
          _DAT_0272a278 = 0;
          uRam000000000272a280 = 0;
          _DAT_0272a288 = 0;
          DAT_0272a28a = 1;
          _DAT_0272a208 = 0;
          uRam000000000272a210 = 0;
          _DAT_0272a218 = 0;
          uRam000000000272a220 = 0;
          _DAT_0272a228 = 0;
          uRam000000000272a230 = 0;
          _DAT_0272a238 = 0;
          uRam000000000272a240 = 0;
          _DAT_0272a248 = 0;
          uRam000000000272a250 = 0;
          _DAT_0272a258 = 0;
          uRam000000000272a260 = 0;
          _DAT_0272a268 = 0;
          uRam000000000272a270 = 0;
          DAT_0272a293 = 0;
          _DAT_0272a28b = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_0271a190 = "_fromMode";
      _DAT_0271a198 = &DAT_0272a1d0;
      _DAT_0271a1a0 = 0;
      _DAT_0271a1a8 = 0x6500;
      _DAT_0271a1b0 = "MUScaleRulerViewDisplayMode";
      _DAT_0271a1b8 = &DAT_0270f510;
      _DAT_0271a1c0 = 0;
      uRam000000000271a1c8 = 0;
      ___cxa_guard_release();
    }
  }
  return &DAT_0271a190;
}



