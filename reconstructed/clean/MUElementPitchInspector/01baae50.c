// Function: FUN_01baae50
// Address: 01baae50
// Size: 509 bytes
// Class: MUElementPitchInspector
// === MUElementPitchInspector properties ===
//                   _noteNameField
//                   _centOffsetField
//                   _frequencyField
//                   _savedPitchIndexes
//                   _pitchOffsetFormatter
//                   _frequencyFormatter


void FUN_01baae50(void)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t lVar5;
  uint8_t uVar6;
  int64_t *this_ptr;
  int64_t local_b8;
  uint8_t local_b0;
  int64_t local_a8;
  uint8_t local_a0;
  int64_t local_98;
  uint8_t local_90;
  int64_t local_88;
  uint8_t local_80;
  int64_t local_78;
  uint8_t local_70;
  uint8_t local_60;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  int64_t local_40;
  uint8_t local_32;
  uint8_t local_31;
  
  (**(code **)(*this_ptr + 0x630))();
  local_48 = local_58;
  if (local_50 == '\0') {
    if (local_58 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_50 = '\0';
  }
  local_60 = 1;
  uVar6 = (**(code **)(*this_ptr + 0x688))();
  local_31 = (**(code **)(*this_ptr + 0x698))();
  local_b8 = this_ptr[0x1b];
  if (local_b8 != 0) {
    FUN_00d50b00();
  }
  local_b0 = 1;
  lVar1 = this_ptr[0x1c];
  local_40 = local_b8;
  local_32 = uVar6;
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  local_a0 = 1;
  lVar2 = this_ptr[0x1d];
  local_a8 = lVar1;
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  local_90 = 1;
  lVar3 = this_ptr[0x20];
  local_98 = lVar2;
  if (lVar3 != 0) {
    FUN_00d50b00();
  }
  local_80 = 1;
  lVar4 = this_ptr[0x1f];
  local_88 = lVar3;
  if (lVar4 != 0) {
    FUN_00d50b00();
  }
  local_70 = 1;
  local_78 = lVar4;
  FUN_01bab160(local_31,local_32,&local_b8,&local_a8);
  lVar5 = local_48;
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if (local_40 != 0) {
    FUN_00d50b20();
  }
  if (lVar5 != 0) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  return;
}

