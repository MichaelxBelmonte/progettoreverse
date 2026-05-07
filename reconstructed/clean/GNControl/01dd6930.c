// Function: FUN_01dd6930
// Address: 01dd6930
// Size: 567 bytes
// Class: GNControl
// === GNControl properties ===
//   GNControlType   _controlType
//   GNTextCropping  _textCropping


uint64_t FUN_01dd6930(uint32_t param_1)

{
  int64_t *plVar1;
  int64_t arg1;
  uint64_t this_ptr;
  int64_t *local_40;
  char local_38;
  
  plVar1 = *(int64_t **)(arg1 + 0x30);
  if (plVar1 == (int64_t *)0x0) {
    FUN_01e4ae50();
  }
  else {
    FUN_00d50b00();
    FUN_01e48f80(param_1);
    (**(code **)(*plVar1 + 0xa28))();
    if (local_38 == '\0') {
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    if (local_40 == (int64_t *)0x0) {
      FUN_01e48f80(param_1);
      (**(code **)(*plVar1 + 0x6c8))();
      FUN_00d50b20();
    }
    else {
      FUN_01e48f80(param_1);
      (**(code **)(*local_40 + 0x490))();
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_01e48f80(param_1);
      (**(code **)(*local_40 + 0x6c8))();
      FUN_00d50b20();
      FUN_00d50b20();
    }
  }
  return this_ptr;
}

