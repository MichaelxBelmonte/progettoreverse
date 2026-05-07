// Function: FUN_001fb4b0
// Address: 001fb4b0
// Size: 798 bytes
// Class: GNWindow
// String references:
//   "GNWindow"
//   "GNUni"
//   "GNDisplayGroup"
//   "GNOutlineView"
//   "GNTextView"
//   "GNTextAutoCompleterItem"
//   "_completer"
//   "GNTextViewAutoCompleter"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001fb4b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  char *pcVar3;
  undefined8 *unaff_RDI;
  undefined8 *puVar4;
  
  FUN_00006550();
  unaff_RDI[2] = &DAT_0269d680;
  if (DAT_026f3150 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_02739e40 = "GNTextViewAutoCompleter";
      DAT_02739e50 = 0;
      _DAT_02739e48 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c40();
  *unaff_RDI = &DAT_026ae3c0;
  unaff_RDI[2] = &DAT_026ae908;
  unaff_RDI[3] = 0;
  lVar2 = FUN_001fb180();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_001fb960();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "_completer";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNTextAutoCompleterItem");
  }
  FUN_001fba50();
  puVar4 = unaff_RDI + 5;
  unaff_RDI[5] = 0;
  lVar2 = FUN_001fb180();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_001fbb30();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNTextAutoCompleterItem",param_3,param_4,puVar4);
  }
  unaff_RDI[6] = 0;
  lVar2 = FUN_001fb180();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_001fbc20();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNDisplayGroup");
  }
  unaff_RDI[7] = 0;
  lVar2 = FUN_001fb180();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_001fbd10();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNDisplayGroup");
  }
  unaff_RDI[8] = 0;
  lVar2 = FUN_001fb180();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_001fbe00();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNWindow");
  }
  unaff_RDI[9] = 0;
  lVar2 = FUN_001fb180();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_001fbef0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNOutlineView");
  }
  unaff_RDI[10] = 0;
  lVar2 = FUN_001fb180();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_001fbfe0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNTextView");
  }
  return;
}


