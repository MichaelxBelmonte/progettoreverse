// Function: FUN_018ac3f0
// Address: 018ac3f0
// Size: 546 bytes
// Class: MUTestViewController
// === MUTestViewController properties ===
//                   _sampleFrames
//                   _inputChannelFormat
//                   _outputChannelFormat
//                   _secondsPerSampleFrame
//                   _workgroup


void FUN_018ac3f0(uint64_t param_1,void*param_2)

{
  void*puVar1;
  uint64_t local_b0;
  uint8_t local_a8;
  void*local_40;
  char local_38;
  
  local_b0 = *param_2;
  local_a8 = 0;
  FUN_018ac7a0(param_1,&local_b0);
  if ((local_38 == '\0') && (local_40 != (void*)0x0)) {
    FUN_00d50b00();
  }
  FUN_000b6b40();
  if ((local_38 == '\0') && (local_40 != (void*)0x0)) {
    FUN_00d50b00();
  }
  puVar1 = local_40;
  if (local_40 == (void*)0x0) {
    puVar1 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar1 = &g_02572358;
    (*g_02572370)();
    FUN_000b68d0();
  }
  FUN_00d235a0();
  FUN_018ac8a0();
  if (puVar1 != (void*)0x0) {
    FUN_00d50b20();
  }
  if (local_40 != (void*)0x0) {
    FUN_00d50b20();
  }
  return;
}

