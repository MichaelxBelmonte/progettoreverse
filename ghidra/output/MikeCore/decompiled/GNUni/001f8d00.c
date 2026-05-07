// Function: FUN_001f8d00
// Address: 001f8d00
// Size: 3614 bytes
// Class: GNUni
// String references:
//   "bool"
//   "GNUni"
//   "GNFormatter"
//   "_isEditable"
//   "GNTextField"
//   "_isBordered"
//   "GNTextView"
//   "GNTextViewDelegate"
//   "GNMultipleValuePresenter"
//   "_dragAndEditEnabled"
//   "_isEditingByDragging"
//   "_isEditing"
//   "GNTextFieldArrows"
//   "_isSendingActionsWhileTyping"
//   "_isValidatingWhileTyping"
//   "_isAccpectingInvalidValuesWhenFinishingEditing"
//   "_isFinishing"
//   "_isRelativeEditingEnabled"
//   "_isSelectable"
//   "_maskCharacters"
//   ... +4 more


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001f8d00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  char *pcVar3;
  undefined8 *unaff_RDI;
  undefined8 *puVar4;
  
  FUN_000f62d0();
  unaff_RDI[0x39] = &DAT_0269d6b8;
  if (DAT_026ea700 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_027399d0 = "GNTextViewDelegate";
      DAT_027399e0 = 0;
      _DAT_027399d8 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c40();
  *unaff_RDI = &DAT_0269c118;
  unaff_RDI[2] = &DAT_0269cc70;
  unaff_RDI[0x39] = &DAT_0269ccb0;
  unaff_RDI[0x3a] = 0;
  lVar2 = FUN_001f8a30();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_001f9e00();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNFormatter");
  }
  unaff_RDI[0x3b] = 0;
  lVar2 = FUN_001f8a30();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_001f9ef0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNMultipleValuePresenter");
  }
  *(undefined1 *)(unaff_RDI + 0x3c) = 0;
  lVar2 = FUN_001f8a30();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_02739a90 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_02739a58 = FUN_001f8a30();
        _DAT_02739a50 = "_dragAndEditEnabled";
        _DAT_02739a60 = 0;
        _DAT_02739a68 = 0x6200;
        _DAT_02739a70 = "bool";
        _DAT_02739a78 = 0;
        uRam0000000002739a80 = 0;
        _DAT_02739a88 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x1e1) = 0;
  lVar2 = FUN_001f8a30();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_026f2da0 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_026f2d68 = FUN_001f8a30();
        _DAT_026f2d60 = "_isEditingByDragging";
        _DAT_026f2d70 = 0;
        _DAT_026f2d78 = 0x6201;
        _DAT_026f2d80 = "bool";
        _DAT_026f2d88 = 0;
        uRam00000000026f2d90 = 0;
        _DAT_026f2d98 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x1e2) = 0;
  lVar2 = FUN_001f8a30();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_02739ae0 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_02739aa8 = FUN_001f8a30();
        _DAT_02739aa0 = "_isEditing";
        _DAT_02739ab0 = 0;
        _DAT_02739ab8 = 0x6201;
        _DAT_02739ac0 = "bool";
        _DAT_02739ac8 = 0;
        uRam0000000002739ad0 = 0;
        _DAT_02739ad8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x1e3) = 0;
  lVar2 = FUN_001f8a30();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_026f2df0 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_026f2db8 = FUN_001f8a30();
        _DAT_026f2db0 = "_isEditable";
        _DAT_026f2dc0 = 0;
        _DAT_026f2dc8 = 0x6200;
        _DAT_026f2dd0 = "bool";
        _DAT_026f2dd8 = 0;
        uRam00000000026f2de0 = 0;
        _DAT_026f2de8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[0x3d] = 0;
  lVar2 = FUN_001f8a30();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_001f9fe0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNTextField");
  }
  puVar4 = unaff_RDI + 0x3e;
  unaff_RDI[0x3e] = 0;
  lVar2 = FUN_001f8a30();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_001fa0d0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNTextField",param_3,param_4,puVar4);
  }
  unaff_RDI[0x3f] = 0;
  lVar2 = FUN_001f8a30();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_001fa1c0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNTextFieldArrows");
  }
  unaff_RDI[0x40] = 0;
  lVar2 = FUN_001f8a30();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_001fa2b0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNTextView");
  }
  *(undefined1 *)(unaff_RDI + 0x41) = 0;
  lVar2 = FUN_001f8a30();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_02739bf0 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_02739bb8 = FUN_001f8a30();
        _DAT_02739bb0 = "_isBordered";
        _DAT_02739bc0 = 0;
        _DAT_02739bc8 = 0x6200;
        _DAT_02739bd0 = "bool";
        _DAT_02739bd8 = 0;
        uRam0000000002739be0 = 0;
        _DAT_02739be8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x209) = 0;
  lVar2 = FUN_001f8a30();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_026f2f00 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_026f2ec8 = FUN_001f8a30();
        _DAT_026f2ec0 = "_isSendingActionsWhileTyping";
        _DAT_026f2ed0 = 0;
        _DAT_026f2ed8 = 0x6200;
        _DAT_026f2ee0 = "bool";
        _DAT_026f2ee8 = 0;
        uRam00000000026f2ef0 = 0;
        _DAT_026f2ef8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x20a) = 0;
  lVar2 = FUN_001f8a30();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_02739c40 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_02739c08 = FUN_001f8a30();
        _DAT_02739c00 = "_isValidatingWhileTyping";
        _DAT_02739c10 = 0;
        _DAT_02739c18 = 0x6200;
        _DAT_02739c20 = "bool";
        _DAT_02739c28 = 0;
        uRam0000000002739c30 = 0;
        _DAT_02739c38 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x20b) = 0;
  lVar2 = FUN_001f8a30();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_026f2f50 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_026f2f18 = FUN_001f8a30();
        _DAT_026f2f10 = "_isAccpectingInvalidValuesWhenFinishingEditing";
        _DAT_026f2f20 = 0;
        _DAT_026f2f28 = 0x6200;
        _DAT_026f2f30 = "bool";
        _DAT_026f2f38 = 0;
        uRam00000000026f2f40 = 0;
        _DAT_026f2f48 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x20c) = 0;
  lVar2 = FUN_001f8a30();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_02739c90 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_02739c58 = FUN_001f8a30();
        _DAT_02739c50 = "_isFinishing";
        _DAT_02739c60 = 0;
        _DAT_02739c68 = 0x6201;
        _DAT_02739c70 = "bool";
        _DAT_02739c78 = 0;
        uRam0000000002739c80 = 0;
        _DAT_02739c88 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  FUN_001fa3a0();
  FUN_001fa480();
  *(undefined1 *)(unaff_RDI + 0x44) = 0;
  lVar2 = FUN_001f8a30();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_026f3000 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_026f2fc8 = FUN_001f8a30();
        _DAT_026f2fc0 = "_isRelativeEditingEnabled";
        _DAT_026f2fd0 = 0;
        _DAT_026f2fd8 = 0x6200;
        _DAT_026f2fe0 = "bool";
        _DAT_026f2fe8 = 0;
        uRam00000000026f2ff0 = 0;
        _DAT_026f2ff8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x221) = 0;
  lVar2 = FUN_001f8a30();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_02739d30 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_02739cf8 = FUN_001f8a30();
        _DAT_02739cf0 = "_isSelectable";
        _DAT_02739d00 = 0;
        _DAT_02739d08 = 0x6200;
        _DAT_02739d10 = "bool";
        _DAT_02739d18 = 0;
        uRam0000000002739d20 = 0;
        _DAT_02739d28 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x222) = 0;
  lVar2 = FUN_001f8a30();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_026f3050 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_026f3018 = FUN_001f8a30();
        _DAT_026f3010 = "_maskCharacters";
        _DAT_026f3020 = 0;
        _DAT_026f3028 = 0x6200;
        _DAT_026f3030 = "bool";
        _DAT_026f3038 = 0;
        uRam00000000026f3040 = 0;
        _DAT_026f3048 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x223) = 0;
  lVar2 = FUN_001f8a30();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_02739d80 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_02739d48 = FUN_001f8a30();
        _DAT_02739d40 = "_selectOnlyCompleteContent";
        _DAT_02739d50 = 0;
        _DAT_02739d58 = 0x6200;
        _DAT_02739d60 = "bool";
        _DAT_02739d68 = 0;
        uRam0000000002739d70 = 0;
        _DAT_02739d78 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x224) = 0;
  lVar2 = FUN_001f8a30();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_026f30a0 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_026f3068 = FUN_001f8a30();
        _DAT_026f3060 = "_cancelsEditingWhenResigningFirstResponder";
        _DAT_026f3070 = 0;
        _DAT_026f3078 = 0x6200;
        _DAT_026f3080 = "bool";
        _DAT_026f3088 = 0;
        uRam00000000026f3090 = 0;
        _DAT_026f3098 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  FUN_001fa650();
  *(undefined1 *)(unaff_RDI + 0x46) = 0;
  lVar2 = FUN_001f8a30();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_026f30f0 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_026f30b8 = FUN_001f8a30();
        _DAT_026f30b0 = "_deleteButtonEnabled";
        _DAT_026f30c0 = 0;
        _DAT_026f30c8 = 0x6200;
        _DAT_026f30d0 = "bool";
        _DAT_026f30d8 = 0;
        uRam00000000026f30e0 = 0;
        _DAT_026f30e8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x231) = 0;
  lVar2 = FUN_001f8a30();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_02739e20 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_02739de8 = FUN_001f8a30();
        _DAT_02739de0 = "_wasClicked";
        _DAT_02739df0 = 0;
        _DAT_02739df8 = 0x6201;
        _DAT_02739e00 = "bool";
        _DAT_02739e08 = 0;
        uRam0000000002739e10 = 0;
        _DAT_02739e18 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  FUN_001fa730();
  return;
}


