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

void FUN_001fb4b0(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int iVar1;
  int64_t lVar2;
  char *pcVar3;
  void*this_ptr;
  void*puVar4;
  
  FUN_00006550();
  this_ptr[2] = &g_0269d680;
  // [STATIC_INIT: property registration]
  FUN_00e87c40();
  *this_ptr = &g_026ae3c0;
  this_ptr[2] = &g_026ae908;
  this_ptr[3] = 0;
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
  puVar4 = this_ptr + 5;
  this_ptr[5] = 0;
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
  this_ptr[6] = 0;
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
  this_ptr[7] = 0;
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
  this_ptr[8] = 0;
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
  this_ptr[9] = 0;
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
  this_ptr[10] = 0;
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

