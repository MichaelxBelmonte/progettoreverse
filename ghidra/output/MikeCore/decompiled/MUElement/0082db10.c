// Function: FUN_0082db10
// Address: 0082db10
// Size: 1738 bytes
// Class: MUElement
// String references:
//   "bool"
//   "MUElement"
//   "GNPropertyObserver"
//   "MUAudioSourceComponent"
//   "_showsLeftSeparator"
//   "_feedbacksEditing"
//   "_showsLeftDisjoinArrows"
//   "_showsRightDisjoinArrows"
//   "_selected"
//   "_feedbackDisconnected"
//   "_flagsDirty"
//   "GNInt"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0082db10(void)

{
  int iVar1;
  longlong lVar2;
  char *pcVar3;
  undefined8 *unaff_RDI;
  
  FUN_0059c6c0();
  unaff_RDI[0x2d] = &DAT_025768d0;
  if (DAT_026ea710 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026f7680 = "GNPropertyObserver";
      DAT_026f7690 = 0;
      _DAT_026f7688 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c40();
  *unaff_RDI = &DAT_026251e0;
  unaff_RDI[2] = &DAT_02625b68;
  unaff_RDI[0x27] = &DAT_02625ba8;
  unaff_RDI[0x2d] = &DAT_02625bd8;
  unaff_RDI[0x2e] = 0;
  lVar2 = FUN_0082d880();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0082e360();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUElement");
  }
  unaff_RDI[0x2f] = 0;
  lVar2 = FUN_0082d880();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0082e450();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUElement");
  }
  unaff_RDI[0x30] = 0;
  lVar2 = FUN_0082d880();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0082e540();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUAudioSourceComponent");
  }
  *(undefined1 *)(unaff_RDI + 0x31) = 0;
  lVar2 = FUN_0082d880();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_02734568 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_02734530 = FUN_0082d880();
        _DAT_02734528 = "_showsLeftSeparator";
        _DAT_02734538 = 0;
        _DAT_02734540 = 0x6200;
        _DAT_02734548 = "bool";
        _DAT_02734550 = 0;
        uRam0000000002734558 = 0;
        _DAT_02734560 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x189) = 0;
  lVar2 = FUN_0082d880();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_027345b0 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_02734578 = FUN_0082d880();
        _DAT_02734570 = "_feedbacksEditing";
        _DAT_02734580 = 0;
        _DAT_02734588 = 0x6200;
        _DAT_02734590 = "bool";
        _DAT_02734598 = 0;
        uRam00000000027345a0 = 0;
        _DAT_027345a8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x18a) = 0;
  lVar2 = FUN_0082d880();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_027345f8 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_027345c0 = FUN_0082d880();
        _DAT_027345b8 = "_showsLeftDisjoinArrows";
        _DAT_027345c8 = 0;
        _DAT_027345d0 = 0x6200;
        _DAT_027345d8 = "bool";
        _DAT_027345e0 = 0;
        uRam00000000027345e8 = 0;
        _DAT_027345f0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x18b) = 0;
  lVar2 = FUN_0082d880();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_02734640 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_02734608 = FUN_0082d880();
        _DAT_02734600 = "_showsRightDisjoinArrows";
        _DAT_02734610 = 0;
        _DAT_02734618 = 0x6200;
        _DAT_02734620 = "bool";
        _DAT_02734628 = 0;
        uRam0000000002734630 = 0;
        _DAT_02734638 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x18c) = 0;
  lVar2 = FUN_0082d880();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_02734688 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_02734650 = FUN_0082d880();
        _DAT_02734648 = "_selected";
        _DAT_02734658 = 0;
        _DAT_02734660 = 0x6200;
        _DAT_02734668 = "bool";
        _DAT_02734670 = 0;
        uRam0000000002734678 = 0;
        _DAT_02734680 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 0x32) = 0;
  lVar2 = FUN_0082d880();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_027346d0 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_02734698 = FUN_0082d880();
        _DAT_02734690 = "_feedbackDisconnected";
        _DAT_027346a0 = 0;
        _DAT_027346a8 = 0x6900;
        _DAT_027346b0 = "GNInt";
        _DAT_027346b8 = 0;
        uRam00000000027346c0 = 0;
        _DAT_027346c8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x194) = 0;
  lVar2 = FUN_0082d880();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_02734718 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_027346e0 = FUN_0082d880();
        _DAT_027346d8 = "_flagsDirty";
        _DAT_027346e8 = 0;
        _DAT_027346f0 = 0x6200;
        _DAT_027346f8 = "bool";
        _DAT_02734700 = 0;
        uRam0000000002734708 = 0;
        _DAT_02734710 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 0x33) = 0;
  lVar2 = FUN_0082d880();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0082e630();
    FUN_00e87980();
  }
  return;
}


