// Function: FUN_00826d80
// Address: 00826d80
// Size: 663 bytes
// Class: GNNumberFormatter
// String references:
//   "GNNumberFormatter"
//   "MUTextField"
//   "MUTextFieldDragAndEditHandler"
//   "_steps"
//   "GNInt"
// === GNNumberFormatter properties ===
//   GNInt           _steps
//                   _precision
//   float           _minValue
//                   _maxValue
//                   _unit
//                   _shouldRemoveTrailingZeros
//                   _precisionRelatesToAllDigits
//                   _positivePrefix
//                   _negativePrefix
//                   _defaultStringValues
//                   _decimalSeparator
//                   _prefix
//                   _decibelIncrement


void FUN_00826d80(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int iVar1;
  int64_t lVar2;
  char *pcVar3;
  void*this_ptr;
  void*puVar4;
  
  FUN_008258e0();
  *this_ptr = &g_026603e8;
  this_ptr[0x17] = &g_02660a98;
  FUN_00825bb0();
  FUN_00825ee0();
  this_ptr[0x1c] = &g_0264a7b8;
  // [STATIC_INIT: property registration]
  FUN_00e87c40();
  *this_ptr = &g_0265fc80;
  this_ptr[0x17] = &g_02660350;
  this_ptr[0x1c] = &g_026603a0;
  this_ptr[0x1d] = 0;
  lVar2 = FUN_00826b20();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00827140();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUTextField");
  }
  puVar4 = this_ptr + 0x1e;
  this_ptr[0x1e] = 0;
  lVar2 = FUN_00826b20();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00827230();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNNumberFormatter",param_3,param_4,puVar4);
  }
  FUN_00827320();
  *(void*)(this_ptr + 0x20) = 0;
  lVar2 = FUN_00826b20();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  return;
}

