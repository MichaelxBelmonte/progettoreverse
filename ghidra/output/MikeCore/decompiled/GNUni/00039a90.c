// Function: FUN_00039a90
// Address: 00039a90
// Size: 4091 bytes
// Class: GNUni
// String references:
//   "bool"
//   "GNUni"
//   "GNList"
//   "GNObject"
//   "GNRunLoopObserverDelegate"
//   "GNUndoManager"
//   "GNAccessRightManager"
//   "_autovalidationDisableLevel"
//   "GNRunLoopObserver"
//   "_runLoopObserverDidLockModel"
//   "GNCoalescedPropertyObserverNotificationStore"
//   "_knownRegisteredPropertyObserverRegistrationsCount"
//   "_delayedObserverRegistrationsChangesRequired"
//   "GNPropertyObserverRegistration"
//   "_propertyObservationDisableLevel"
//   "_hasObserverRegistrations"
//   "_registersMethodInvocationsForObjectChanges"
//   "_lockModelInMainthreadCounter"
//   "_lockModelInBackgroundthreadCounter"
//   "_isPostingChangeNotifications"
//   ... +11 more


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00039a90(void)

{
  int iVar1;
  longlong lVar2;
  char *pcVar3;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  
  FUN_00d4ff80();
  *unaff_RDI = &DAT_0257f798;
  FUN_000392d0();
  unaff_RDI[3] = &DAT_02582380;
  if (DAT_026d0a20 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_02732cb0 = "GNRunLoopObserverDelegate";
      DAT_02732cc0 = 0;
      _DAT_02732cb8 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c40();
  *unaff_RDI = &DAT_02569280;
  unaff_RDI[3] = &DAT_025697c0;
  FUN_0003b160();
  FUN_0003b240();
  FUN_0003b320();
  FUN_0003b400();
  unaff_RDI[8] = 0;
  lVar2 = FUN_000390b0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0003b4e0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNUndoManager");
  }
  unaff_RDI[9] = 0;
  lVar2 = FUN_000390b0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0003b5d0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNString");
  }
  unaff_RDI[10] = 0;
  lVar2 = FUN_000390b0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0003b6c0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNAccessRightManager");
  }
  FUN_0003b7b0();
  *(undefined4 *)(unaff_RDI + 0xc) = 0;
  lVar2 = FUN_000390b0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_027770b0 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_02777078 = FUN_000390b0();
        _DAT_02777070 = "_autovalidationDisableLevel";
        _DAT_02777080 = 0;
        _DAT_02777088 = 0x6901;
        _DAT_02777090 = "GNInt";
        _DAT_02777098 = 0;
        uRam00000000027770a0 = 0;
        _DAT_027770a8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[0xd] = 0;
  lVar2 = FUN_000390b0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0003b890();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNRunLoopObserver");
  }
  *(undefined4 *)(unaff_RDI + 0xe) = 0;
  lVar2 = FUN_000390b0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_02777110 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_027770d8 = FUN_000390b0();
        _DAT_027770d0 = "_runLoopObserverDidLockModel";
        _DAT_027770e0 = 0;
        _DAT_027770e8 = 0x6901;
        _DAT_027770f0 = "GNInt";
        _DAT_027770f8 = 0;
        uRam0000000002777100 = 0;
        _DAT_02777108 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[0xf] = 0;
  lVar2 = FUN_000390b0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0003b980();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNObject");
  }
  unaff_RDI[0x10] = 0;
  lVar2 = FUN_000390b0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0003ba70();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNDictionary");
  }
  unaff_RDI[0x11] = 0;
  lVar2 = FUN_000390b0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0003bb60();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNCoalescedPropertyObserverNotificationStore");
  }
  FUN_0003bc50();
  FUN_0003bd30();
  unaff_RDI[0x14] = *(undefined8 *)(unaff_RSI + 0xa0);
  *(undefined4 *)(unaff_RDI + 0x15) = 0;
  lVar2 = FUN_000390b0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_02777220 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_027771e8 = FUN_000390b0();
        _DAT_027771e0 = "_knownRegisteredPropertyObserverRegistrationsCount";
        _DAT_027771f0 = 0;
        _DAT_027771f8 = 0x6901;
        _DAT_02777200 = "GNInt";
        _DAT_02777208 = 0;
        uRam0000000002777210 = 0;
        _DAT_02777218 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0xac) = 0;
  lVar2 = FUN_000390b0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_026d0d20 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_026d0ce8 = FUN_000390b0();
        _DAT_026d0ce0 = "_delayedObserverRegistrationsChangesRequired";
        _DAT_026d0cf0 = 0;
        _DAT_026d0cf8 = 0x6901;
        _DAT_026d0d00 = "GNInt";
        _DAT_026d0d08 = 0;
        uRam00000000026d0d10 = 0;
        _DAT_026d0d18 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[0x16] = 0;
  lVar2 = FUN_000390b0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0003be10();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNPropertyObserverRegistration");
  }
  unaff_RDI[0x17] = *(undefined8 *)(unaff_RSI + 0xb8);
  unaff_RDI[0x18] = 0;
  lVar2 = FUN_000390b0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0003bf00();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNRecursiveLock");
  }
  FUN_0003bff0();
  *(undefined4 *)(unaff_RDI + 0x1a) = 0;
  lVar2 = FUN_000390b0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_026d0dd0 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_026d0d98 = FUN_000390b0();
        _DAT_026d0d90 = "_propertyObservationDisableLevel";
        _DAT_026d0da0 = 0;
        _DAT_026d0da8 = 0x6901;
        _DAT_026d0db0 = "GNInt";
        _DAT_026d0db8 = 0;
        uRam00000000026d0dc0 = 0;
        _DAT_026d0dc8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[0x1b] = 0;
  lVar2 = FUN_000390b0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0003c0d0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNRecursiveLock");
  }
  *(undefined1 *)(unaff_RDI + 0x1c) = 0;
  lVar2 = FUN_000390b0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_026d0e30 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_026d0df8 = FUN_000390b0();
        _DAT_026d0df0 = "_hasObserverRegistrations";
        _DAT_026d0e00 = 0;
        _DAT_026d0e08 = 0x6201;
        _DAT_026d0e10 = "bool";
        _DAT_026d0e18 = 0;
        uRam00000000026d0e20 = 0;
        _DAT_026d0e28 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0xe1) = 0;
  lVar2 = FUN_000390b0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_02777370 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_02777338 = FUN_000390b0();
        _DAT_02777330 = "_registersMethodInvocationsForObjectChanges";
        _DAT_02777340 = 0;
        _DAT_02777348 = 0x6201;
        _DAT_02777350 = "bool";
        _DAT_02777358 = 0;
        uRam0000000002777360 = 0;
        _DAT_02777368 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0xe4) = 0;
  lVar2 = FUN_000390b0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_026d0e80 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_026d0e48 = FUN_000390b0();
        _DAT_026d0e40 = "_lockModelInMainthreadCounter";
        _DAT_026d0e50 = 0;
        _DAT_026d0e58 = 0x6901;
        _DAT_026d0e60 = "GNInt";
        _DAT_026d0e68 = 0;
        uRam00000000026d0e70 = 0;
        _DAT_026d0e78 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 0x1d) = 0;
  lVar2 = FUN_000390b0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_027773c0 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_02777388 = FUN_000390b0();
        _DAT_02777380 = "_lockModelInBackgroundthreadCounter";
        _DAT_02777390 = 0;
        _DAT_02777398 = 0x6901;
        _DAT_027773a0 = "GNInt";
        _DAT_027773a8 = 0;
        uRam00000000027773b0 = 0;
        _DAT_027773b8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  FUN_0003c1c0();
  FUN_0003c2a0();
  *(undefined1 *)(unaff_RDI + 0x20) = 0;
  lVar2 = FUN_000390b0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_026d0f20 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_026d0ee8 = FUN_000390b0();
        _DAT_026d0ee0 = "_isPostingChangeNotifications";
        _DAT_026d0ef0 = 0;
        _DAT_026d0ef8 = 0x6200;
        _DAT_026d0f00 = "bool";
        _DAT_026d0f08 = 0;
        uRam00000000026d0f10 = 0;
        _DAT_026d0f18 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  FUN_0003c380();
  unaff_RDI[0x22] = 0;
  lVar2 = FUN_000390b0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0003c460();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNError");
  }
  unaff_RDI[0x23] = 0;
  lVar2 = FUN_000390b0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0003c550();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNString");
  }
  unaff_RDI[0x24] = 0;
  lVar2 = FUN_000390b0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0003c640();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "_editingContext";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNEditingSyncServer");
  }
  unaff_RDI[0x25] = 0;
  lVar2 = FUN_000390b0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0003c730();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "_editingContext";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNEditingSyncClient");
  }
  unaff_RDI[0x26] = 0;
  lVar2 = FUN_000390b0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0003c820();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNEditingChangeSet");
  }
  *(undefined4 *)(unaff_RDI + 0x27) = 0;
  lVar2 = FUN_000390b0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_02777580 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_02777548 = FUN_000390b0();
        _DAT_02777540 = "_isValidatingObjectCaches";
        _DAT_02777550 = 0;
        _DAT_02777558 = 0x6900;
        _DAT_02777560 = "GNInt";
        _DAT_02777568 = 0;
        uRam0000000002777570 = 0;
        _DAT_02777578 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[0x28] = 0;
  lVar2 = FUN_000390b0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0003c910();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNEditingContextReadCopySyncObserver");
  }
  unaff_RDI[0x29] = 0;
  lVar2 = FUN_000390b0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0003ca50();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNRecursiveLock");
  }
  unaff_RDI[0x2a] = *(undefined8 *)(unaff_RSI + 0x150);
  unaff_RDI[0x2b] = 0;
  lVar2 = FUN_000390b0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0003cb40();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNList");
  }
  return;
}


