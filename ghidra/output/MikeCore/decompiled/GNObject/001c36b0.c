// Function: FUN_001c36b0
// Address: 001c36b0
// Size: 3837 bytes
// Class: GNObject
// String references:
//   "bool"
//   "GNObject"
//   "GNQualifier"
//   "GNClassDescription"
//   "GNEditingContext"
//   "GNObjectProvider"
//   "GNView"
//   "GNSortOrdering"
//   "_lastSelectedRow"
//   "GNAssociation"
//   "_emtpySelectionAllowed"
//   "_autoselectNewObjects"
//   "_autoselectObjects"
//   "_autofetchEnabled"
//   "_fetchesOnDemand"
//   "GNMasterDetailAssoc"
//   "_selectionDidUpdateAssociations"
//   "_isAddingObjectsEnabled"
//   "_isRemovingObjectsEnabled"
//   "_revertsObjectsByKeepingGlobalIDs"
//   ... +6 more


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001c36b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  char *pcVar3;
  undefined8 *unaff_RDI;
  undefined8 *puVar4;
  
  FUN_00006550();
  *unaff_RDI = &DAT_0267f0d0;
  unaff_RDI[2] = 0;
  lVar2 = FUN_00081d60();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_001c49e0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNObject");
  }
  puVar4 = unaff_RDI + 3;
  unaff_RDI[3] = 0;
  lVar2 = FUN_00081d60();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_001c4ad0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNObject",param_3,param_4,puVar4);
  }
  unaff_RDI[4] = 0;
  lVar2 = FUN_00081d60();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_001c4bc0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNObject");
  }
  unaff_RDI[5] = 0;
  lVar2 = FUN_00081d60();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_001c4cb0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNAssociation");
  }
  unaff_RDI[6] = 0;
  lVar2 = FUN_00081d60();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_001c4da0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNClassDescription");
  }
  *(undefined1 *)(unaff_RDI + 7) = 0;
  lVar2 = FUN_00081d60();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_026eb918 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_026eb8e0 = FUN_00081d60();
        _DAT_026eb8d8 = "_emtpySelectionAllowed";
        _DAT_026eb8e8 = 0;
        _DAT_026eb8f0 = 0x6200;
        _DAT_026eb8f8 = "bool";
        _DAT_026eb900 = 0;
        uRam00000000026eb908 = 0;
        _DAT_026eb910 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x39) = 0;
  lVar2 = FUN_00081d60();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_026eb960 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_026eb928 = FUN_00081d60();
        _DAT_026eb920 = "_autoselectNewObjects";
        _DAT_026eb930 = 0;
        _DAT_026eb938 = 0x6200;
        _DAT_026eb940 = "bool";
        _DAT_026eb948 = 0;
        uRam00000000026eb950 = 0;
        _DAT_026eb958 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x3a) = 0;
  lVar2 = FUN_00081d60();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_026eb9a8 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_026eb970 = FUN_00081d60();
        _DAT_026eb968 = "_autoselectObjects";
        _DAT_026eb978 = 0;
        _DAT_026eb980 = 0x6200;
        _DAT_026eb988 = "bool";
        _DAT_026eb990 = 0;
        uRam00000000026eb998 = 0;
        _DAT_026eb9a0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  FUN_001c4e90();
  unaff_RDI[9] = 0;
  lVar2 = FUN_00081d60();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_001c5060();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNQualifier");
  }
  unaff_RDI[10] = 0;
  lVar2 = FUN_00081d60();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_001c5150();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNQualifier");
  }
  unaff_RDI[0xb] = 0;
  lVar2 = FUN_00081d60();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_001c5240();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNQualifier");
  }
  unaff_RDI[0xc] = 0;
  lVar2 = FUN_00081d60();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_001c5330();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNEditingContext");
  }
  unaff_RDI[0xd] = 0;
  lVar2 = FUN_00081d60();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_001c5420();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNSortOrdering");
  }
  *(undefined1 *)(unaff_RDI + 0xe) = 0;
  lVar2 = FUN_00081d60();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_026ebbb0 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_026ebb78 = FUN_00081d60();
        _DAT_026ebb70 = "_autofetchEnabled";
        _DAT_026ebb80 = 0;
        _DAT_026ebb88 = 0x6200;
        _DAT_026ebb90 = "bool";
        _DAT_026ebb98 = 0;
        uRam00000000026ebba0 = 0;
        _DAT_026ebba8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[0xf] = 0;
  lVar2 = FUN_00081d60();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_001c5510();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNObjectProvider");
  }
  *(undefined1 *)(unaff_RDI + 0x10) = 0;
  lVar2 = FUN_00081d60();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_026ebc40 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_026ebc08 = FUN_00081d60();
        _DAT_026ebc00 = "_fetchesOnDemand";
        _DAT_026ebc10 = 0;
        _DAT_026ebc18 = 0x6201;
        _DAT_026ebc20 = "bool";
        _DAT_026ebc28 = 0;
        uRam00000000026ebc30 = 0;
        _DAT_026ebc38 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[0x11] = 0;
  lVar2 = FUN_00081d60();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_001c5600();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNMasterDetailAssoc");
  }
  unaff_RDI[0x12] = 0;
  lVar2 = FUN_00081d60();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_001c56f0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNView");
  }
  *(undefined1 *)(unaff_RDI + 0x13) = 0;
  lVar2 = FUN_00081d60();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_026ebd18 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_026ebce0 = FUN_00081d60();
        _DAT_026ebcd8 = "_selectionDidUpdateAssociations";
        _DAT_026ebce8 = 0;
        _DAT_026ebcf0 = 0x6201;
        _DAT_026ebcf8 = "bool";
        _DAT_026ebd00 = 0;
        uRam00000000026ebd08 = 0;
        _DAT_026ebd10 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x99) = 0;
  lVar2 = FUN_00081d60();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_026ebd60 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_026ebd28 = FUN_00081d60();
        _DAT_026ebd20 = "_isAddingObjectsEnabled";
        _DAT_026ebd30 = 0;
        _DAT_026ebd38 = 0x6200;
        _DAT_026ebd40 = "bool";
        _DAT_026ebd48 = 0;
        uRam00000000026ebd50 = 0;
        _DAT_026ebd58 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x9a) = 0;
  lVar2 = FUN_00081d60();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_026ebda8 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_026ebd70 = FUN_00081d60();
        _DAT_026ebd68 = "_isRemovingObjectsEnabled";
        _DAT_026ebd78 = 0;
        _DAT_026ebd80 = 0x6200;
        _DAT_026ebd88 = "bool";
        _DAT_026ebd90 = 0;
        uRam00000000026ebd98 = 0;
        _DAT_026ebda0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x9b) = 0;
  lVar2 = FUN_00081d60();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_026ebdf0 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_026ebdb8 = FUN_00081d60();
        _DAT_026ebdb0 = "_revertsObjectsByKeepingGlobalIDs";
        _DAT_026ebdc0 = 0;
        _DAT_026ebdc8 = 0x6200;
        _DAT_026ebdd0 = "bool";
        _DAT_026ebdd8 = 0;
        uRam00000000026ebde0 = 0;
        _DAT_026ebde8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x9c) = 0;
  lVar2 = FUN_00081d60();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_026ebe38 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_026ebe00 = FUN_00081d60();
        _DAT_026ebdf8 = "_revertsObjectsByRefetching";
        _DAT_026ebe08 = 0;
        _DAT_026ebe10 = 0x6200;
        _DAT_026ebe18 = "bool";
        _DAT_026ebe20 = 0;
        uRam00000000026ebe28 = 0;
        _DAT_026ebe30 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[0x14] = 0;
  lVar2 = FUN_00081d60();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_001c57e0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNGlobalID");
  }
  *(undefined4 *)(unaff_RDI + 0x15) = 0;
  lVar2 = FUN_00081d60();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_026ebec8 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_026ebe90 = FUN_00081d60();
        _DAT_026ebe88 = "_lastSelectedRow";
        _DAT_026ebe98 = 0;
        _DAT_026ebea0 = 0x6901;
        _DAT_026ebea8 = "GNInt";
        _DAT_026ebeb0 = 0;
        uRam00000000026ebeb8 = 0;
        _DAT_026ebec0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0xac) = 0;
  lVar2 = FUN_00081d60();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_026ebf10 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_026ebed8 = FUN_00081d60();
        _DAT_026ebed0 = "_changeKindMask";
        _DAT_026ebee0 = 0;
        _DAT_026ebee8 = 0x6901;
        _DAT_026ebef0 = "GNInt";
        _DAT_026ebef8 = 0;
        uRam00000000026ebf00 = 0;
        _DAT_026ebf08 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 0x16) = 0;
  lVar2 = FUN_00081d60();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_026ebf58 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_026ebf20 = FUN_00081d60();
        _DAT_026ebf18 = "_currentBatchIndex";
        _DAT_026ebf28 = 0;
        _DAT_026ebf30 = 0x6901;
        _DAT_026ebf38 = "GNInt";
        _DAT_026ebf40 = 0;
        uRam00000000026ebf48 = 0;
        _DAT_026ebf50 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0xb4) = 0;
  lVar2 = FUN_00081d60();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_026ebfa0 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_026ebf68 = FUN_00081d60();
        _DAT_026ebf60 = "_numberOfObjectsPerBatch";
        _DAT_026ebf70 = 0;
        _DAT_026ebf78 = 0x6900;
        _DAT_026ebf80 = "GNInt";
        _DAT_026ebf88 = 0;
        uRam00000000026ebf90 = 0;
        _DAT_026ebf98 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[0x17] = 0;
  lVar2 = FUN_00081d60();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_001c58d0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNObject");
  }
  return;
}


