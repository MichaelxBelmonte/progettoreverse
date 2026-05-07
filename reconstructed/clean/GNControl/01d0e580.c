// Function: FUN_01d0e580
// Address: 01d0e580
// Size: 526 bytes
// Class: GNControl
// String references:
//   "_editObjectValue"
//   "v@"
// === GNControl properties ===
//   GNControlType   _controlType
//   GNTextCropping  _textCropping


void FUN_01d0e580(void)

{
  bool bVar1;
  bool bVar2;
  int64_t lVar3;
  int64_t *plVar4;
  int64_t *this_ptr;
  int64_t local_a0;
  char local_98;
  void*local_70;
  uint32_t local_68;
  int64_t local_60;
  char local_58;
  
  plVar4 = (int64_t *)FUN_00cafdf0();
  bVar1 = true;
  if (plVar4 == (int64_t *)0x0) {
    bVar2 = true;
  }
  else {
    FUN_00d50b00();
    if (this_ptr != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    (**(code **)(*plVar4 + 0x458))();
    if (this_ptr != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    FUN_00cb1f10();
    if (local_70 != (void*)0x0) {
      if ((char)local_68 == '\0') {
        FUN_00d50b00();
        if (((char)local_68 != '\0') && (local_70 != (void*)0x0)) {
          FUN_00d50b20();
        }
      }
      (**(code **)(*this_ptr + 0x980))();
      local_68 = 1;
      local_70 = &g_024c5048;
      local_58 = 0;
      if (local_a0 != 0) {
        FUN_00d50b00();
      }
      local_60 = local_a0;
      local_58 = '\x01';
      (**(code **)(*this_ptr + 0x278))(&local_70,"v@");
      local_70 = &g_024c5048;
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      if ((local_98 != '\0') && (local_a0 != 0)) {
        FUN_00d50b20();
      }
      lVar3 = g_027ef680;
      if (g_027ef680 != 0) {
        FUN_00d50b00();
      }
      FUN_00db3140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      bVar1 = false;
    }
    bVar2 = false;
  }
  (**(code **)(*this_ptr + 0x978))();
  if (!bVar1) {
    FUN_00d50b20();
  }
  if (!bVar2) {
    FUN_00d50b20();
  }
  return;
}

