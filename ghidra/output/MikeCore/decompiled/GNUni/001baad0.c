// Function: FUN_001baad0
// Address: 001baad0
// Size: 927 bytes
// Class: GNUni
// String references:
//   "bool"
//   "GNUni"
//   "GNObject"
//   "GNAssociationBinding"
//   "_isMultipleSelectionSupported"
//   "_isEstablished"
//   "_objectIsEdited"
//   "_didUpdate"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001baad0(void)

{
  int iVar1;
  longlong lVar2;
  char *pcVar3;
  undefined8 *unaff_RDI;
  
  FUN_00006550();
  *unaff_RDI = &DAT_02672c28;
  unaff_RDI[2] = 0;
  lVar2 = FUN_001ba850();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_001baf60();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNAssociationBinding");
  }
  unaff_RDI[3] = 0;
  lVar2 = FUN_001ba850();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_001bb050();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNObject");
  }
  *(undefined1 *)(unaff_RDI + 4) = 0;
  lVar2 = FUN_001ba850();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_026ea3a8 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_026ea370 = FUN_001ba850();
        _DAT_026ea368 = "_isMultipleSelectionSupported";
        _DAT_026ea378 = 0;
        _DAT_026ea380 = 0x6200;
        _DAT_026ea388 = "bool";
        _DAT_026ea390 = 0;
        uRam00000000026ea398 = 0;
        _DAT_026ea3a0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x21) = 0;
  lVar2 = FUN_001ba850();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_026ea3f0 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_026ea3b8 = FUN_001ba850();
        _DAT_026ea3b0 = "_isEstablished";
        _DAT_026ea3c0 = 0;
        _DAT_026ea3c8 = 0x6201;
        _DAT_026ea3d0 = "bool";
        _DAT_026ea3d8 = 0;
        uRam00000000026ea3e0 = 0;
        _DAT_026ea3e8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  FUN_001bb140();
  *(undefined1 *)(unaff_RDI + 6) = 0;
  lVar2 = FUN_001ba850();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_026ea480 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_026ea448 = FUN_001ba850();
        _DAT_026ea440 = "_objectIsEdited";
        _DAT_026ea450 = 0;
        _DAT_026ea458 = 0x6201;
        _DAT_026ea460 = "bool";
        _DAT_026ea468 = 0;
        uRam00000000026ea470 = 0;
        _DAT_026ea478 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  FUN_001bb220();
  *(undefined1 *)(unaff_RDI + 8) = 0;
  lVar2 = FUN_001ba850();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_026ea510 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_026ea4d8 = FUN_001ba850();
        _DAT_026ea4d0 = "_didUpdate";
        _DAT_026ea4e0 = 0;
        _DAT_026ea4e8 = 0x6201;
        _DAT_026ea4f0 = "bool";
        _DAT_026ea4f8 = 0;
        uRam00000000026ea500 = 0;
        _DAT_026ea508 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  return;
}


