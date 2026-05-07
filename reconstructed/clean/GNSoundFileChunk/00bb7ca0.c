// Function: FUN_00bb7ca0
// Address: 00bb7ca0
// Size: 605 bytes
// Class: GNSoundFileChunk
// String references:
//   "CELE"
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


void FUN_00bb7ca0(uint64_t param_1)

{
  int64_t lVar1;
  int iVar2;
  int64_t this_ptr;
  int iVar3;
  int64_t local_d8;
  char local_d0;
  int64_t local_c8;
  char local_c0;
  int64_t local_b8;
  char local_b0;
  int64_t local_a8;
  char local_a0;
  int64_t local_98;
  uint8_t local_90;
  int64_t local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  byte local_68 [16];
  uint8_t local_58;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  iVar3 = *(int *)(this_ptr + 0x38);
  iVar2 = FUN_00ae7ec0();
  iVar3 = iVar2 * iVar3 * *(int *)(this_ptr + 0x30);
  (**(code **)(**(int64_t **)(this_ptr + 0x18) + 0x3a0))(param_1,0x28);
  if ((local_d0 != '\0') && (local_d8 != 0)) {
    FUN_00d50b20();
  }
  FUN_00ccdf50(param_1,iVar3);
  if ((local_c0 != '\0') && (local_c8 != 0)) {
    FUN_00d50b20();
  }
  if ((*(int64_t *)(this_ptr + 0x70) != 0) || (*(int64_t *)(this_ptr + 0x58) != 0)) {
    (**(code **)(**(int64_t **)(this_ptr + 0x18) + 0x398))(param_1,local_68);
    if ((local_b0 != '\0') && (local_b8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_68[0] & 1) != 0) {
      FUN_00ccdee0(param_1,0);
      if ((local_a0 != '\0') && (local_a8 != 0)) {
        FUN_00d50b20();
      }
      iVar3 = iVar3 + 1;
    }
    lVar1 = g_02765240;
    if (*(int64_t *)(this_ptr + 0x70) != 0) {
      if (g_02765240 != 0) {
        FUN_00d50b00();
      }
      local_50 = lVar1;
      local_48 = '\x01';
      FUN_000175c0(param_1,&local_50);
      lVar1 = local_40;
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      local_58 = 1;
      iVar2 = FUN_00bb72e0();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      iVar3 = iVar3 + iVar2;
    }
    lVar1 = *(int64_t *)(this_ptr + 0x58);
    if (lVar1 != 0) {
      FUN_00d50b00();
      local_90 = 1;
      local_98 = lVar1;
      iVar2 = FUN_00bb0460(param_1,&local_98);
      FUN_00d50b20();
      iVar3 = iVar3 + iVar2;
    }
  }
  (**(code **)(**(int64_t **)(this_ptr + 0x18) + 0x3a0))(param_1,4);
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  FUN_00ccdf50(param_1,iVar3 + 0x24);
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  return;
}

