// Function: FUN_018acf50
// Address: 018acf50
// Size: 674 bytes
// Class: MUTestViewController
// === MUTestViewController properties ===
//                   _sampleFrames
//                   _inputChannelFormat
//                   _outputChannelFormat
//                   _secondsPerSampleFrame
//                   _workgroup


void FUN_018acf50(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int64_t lVar1;
  int64_t *plVar2;
  int64_t *plVar3;
  char cVar4;
  int64_t *arg1;
  int64_t local_c0;
  char local_b8;
  int64_t local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  int64_t *local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t *local_40;
  char local_38;
  
  FUN_00d3ecc0();
  plVar2 = local_40;
  lVar1 = g_027dbf00;
  if (g_027dbf00 != 0) {
    FUN_00d50b00();
  }
  cVar4 = (**(code **)(*plVar2 + 0x50))();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar4 != '\0') {
    FUN_00d3ed20();
    local_90 = g_027dbf08;
    if (g_027dbf08 != 0) {
      FUN_00d50b00();
    }
    local_88 = '\x01';
    FUN_000175c0(param_1,&local_90);
    plVar2 = local_40;
    if (local_38 == '\0') {
      if (((local_40 != (int64_t *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
         (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
    }
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d3ed20();
    local_80 = g_027feca0;
    if (g_027feca0 != 0) {
      FUN_00d50b00();
    }
    local_78 = '\x01';
    FUN_000175c0(param_1,&local_80);
    plVar3 = local_40;
    if (local_38 == '\0') {
      if (((local_40 != (int64_t *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
         (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
    }
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    local_70 = plVar3;
    local_68 = '\0';
    FUN_018ad410(param_1,&local_70,param_3,param_4,0);
    if ((local_b8 != '\0') && (local_c0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar3 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if (plVar2 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  local_60 = *arg1;
  local_58 = '\0';
  FUN_00d530a0();
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  return;
}

