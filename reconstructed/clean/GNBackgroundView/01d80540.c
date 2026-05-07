// Function: FUN_01d80540
// Address: 01d80540
// Size: 513 bytes
// Class: GNBackgroundView
// === GNBackgroundView properties ===
//                   _shrinks
//                   _borderColor
//                   _highlightedBorderColor
//                   _borderWidth
//                   _cornerRadius


void FUN_01d80540(uint32_t param_1,uint32_t param_2)

{
  int64_t *plVar1;
  void*arg1;
  int64_t *this_ptr;
  int64_t local_b8;
  char local_b0;
  
  if (this_ptr[0x2d] == 0) {
    if (((*(float *)(this_ptr + 0x30) <= 0.0) || (this_ptr[0x31] == 0)) &&
       ((char)this_ptr[0x36] == '\0')) {
      FUN_01e44a80(param_1,param_2);
      goto LAB_01d8069e;
    }
  }
  else {
    FUN_00d50b00();
    FUN_00d50b20();
  }
  FUN_01d48370();
  plVar1 = (int64_t *)*arg1;
  FUN_01d7ebd0();
  if ((local_b0 == '\0') && (local_b8 != 0)) {
    FUN_00d50b00();
  }
  (**(code **)(*plVar1 + 0x398))();
  if (local_b8 != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x28] != 0) {
    FUN_01d80840();
  }
  FUN_01e44a80(param_1,param_2);
  if (this_ptr[0x28] == 0) {
    FUN_01d80840();
  }
  FUN_01d48390();
LAB_01d8069e:
  if (this_ptr[0x29] != 0) {
    FUN_00d50b00();
    FUN_00d50b20();
    (**(code **)(*this_ptr + 0x918))(param_1,param_2);
  }
  return;
}

