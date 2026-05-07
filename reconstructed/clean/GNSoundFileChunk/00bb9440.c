// Function: FUN_00bb9440
// Address: 00bb9440
// Size: 1125 bytes
// Class: GNSoundFileChunk
// === GNSoundFileChunk properties ===
//                   _isLoop
//                   _beats
//                   _tonalKey
//                   _tonalGender
//                   _readBuffer
//                   _channelCount
//                   _bitsPerSample
//                   _isFloat
//                   _isLittleEndian


void FUN_00bb9440(void)

{
  bool bVar1;
  void*puVar2;
  int unaff_ESI;
  void*this_ptr;
  void*puVar3;
  int64_t local_c0;
  int64_t local_b8;
  int64_t local_b0;
  char local_a8;
  int64_t local_a0;
  char local_98;
  int64_t local_90;
  char local_88;
  void*local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  void*local_40;
  char local_38;
  
  if (unaff_ESI == 6) {
    FUN_00d46530();
    FUN_00d46530();
    FUN_00d46530();
    local_c0 = local_a0;
    local_b8 = local_90;
    FUN_002bd7b0(&local_b8,&local_c0,3);
    FUN_00295b80();
    puVar3 = local_40;
    if (local_40 == (void*)0x0) {
      puVar3 = (void*)0x0;
      bVar1 = false;
    }
    else if (local_38 == '\0') {
      FUN_00d50b00();
      bVar1 = true;
      if ((local_38 != '\0') && (local_40 != (void*)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
      bVar1 = true;
    }
    local_80 = (void*)&g_025df260;
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    local_80 = (void*)&g_0253d630;
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    local_80 = &g_024c5048;
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
    if ((local_98 != '\0') && (local_a0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_a8 != '\0') && (local_b0 != 0)) {
      FUN_00d50b20();
    }
    *(void*)(this_ptr + 1) = 0;
    if (bVar1 || puVar3 == (void*)0x0) goto LAB_00bb96b1;
  }
  else {
    FUN_00d46530();
    FUN_00d46530();
    FUN_00d46530();
    local_c0 = local_a0;
    local_b8 = local_90;
    FUN_002bd7b0(&local_b8,&local_c0,3);
    FUN_00295b80();
    puVar3 = local_40;
    if (local_40 == (void*)0x0) {
      puVar3 = (void*)0x0;
      bVar1 = false;
    }
    else {
      if (local_38 == '\0') {
        FUN_00d50b00();
        bVar1 = true;
        if ((local_38 == '\0') || (local_40 == (void*)0x0)) goto LAB_00bb96f3;
        FUN_00d50b20();
      }
      else {
        local_38 = '\0';
      }
      bVar1 = true;
    }
LAB_00bb96f3:
    local_80 = (void*)&g_025df260;
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    local_80 = (void*)&g_0253d630;
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    local_80 = &g_024c5048;
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
    if ((local_98 != '\0') && (local_a0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_a8 != '\0') && (local_b0 != 0)) {
      FUN_00d50b20();
    }
    if (unaff_ESI == 2) {
      FUN_00d46530();
      puVar2 = local_40;
      if (local_38 == '\0') {
        if (local_40 != (void*)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      local_80 = puVar2;
      local_78 = '\0';
      FUN_00d21140();
      if ((local_78 != '\0') && (local_80 != (void*)0x0)) {
        FUN_00d50b20();
      }
      if (puVar2 != (void*)0x0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (void*)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d46530();
      puVar2 = local_40;
      if (local_38 == '\0') {
        if (local_40 != (void*)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      local_80 = puVar2;
      local_78 = '\0';
      FUN_00d21140();
      if ((local_78 != '\0') && (local_80 != (void*)0x0)) {
        FUN_00d50b20();
      }
      if (puVar2 != (void*)0x0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (void*)0x0)) {
        FUN_00d50b20();
      }
    }
    *(void*)(this_ptr + 1) = 0;
    if (bVar1 || puVar3 == (void*)0x0) goto LAB_00bb96b1;
  }
  FUN_00d50b00();
LAB_00bb96b1:
  *this_ptr = puVar3;
  *(void*)(this_ptr + 1) = 1;
  return;
}

