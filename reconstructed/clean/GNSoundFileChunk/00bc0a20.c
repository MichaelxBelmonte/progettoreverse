// Function: FUN_00bc0a20
// Address: 00bc0a20
// Size: 622 bytes
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


int FUN_00bc0a20(uint64_t param_1,uint param_2)

{
  int64_t lVar1;
  int iVar2;
  void*arg1;
  int64_t *this_ptr;
  uint64_t local_100;
  uint8_t local_f8;
  uint64_t local_f0;
  uint8_t local_e8;
  uint64_t local_e0;
  uint8_t local_d8;
  uint64_t local_d0;
  uint8_t local_c8;
  uint64_t local_c0;
  uint8_t local_b8;
  uint64_t local_b0;
  uint8_t local_a8;
  uint64_t local_a0;
  uint8_t local_98;
  uint64_t local_90;
  uint8_t local_88;
  uint64_t local_80;
  uint8_t local_78;
  uint64_t local_70;
  uint8_t local_68;
  uint64_t local_50;
  uint64_t local_48;
  
  iVar2 = 0;
  if (((param_2 & 0xfffffffe) == 2) &&
     (lVar1 = (**(code **)(*this_ptr + 0x388))(), iVar2 = 0, lVar1 != 0)) {
    (**(code **)(*(int64_t *)*arg1 + 0x390))();
    if ((local_f8 != '\0') && (local_100 != 0)) {
      FUN_00d50b20();
    }
    (**(code **)(*(int64_t *)*arg1 + 0x388))(4,lVar1);
    if ((local_e8 != '\0') && (local_f0 != 0)) {
      FUN_00d50b20();
    }
    (**(code **)(*(int64_t *)*arg1 + 0x390))();
    if ((local_d8 != '\0') && (local_e0 != 0)) {
      FUN_00d50b20();
    }
    FUN_00ccdf50();
    if ((local_c8 != '\0') && (local_d0 != 0)) {
      FUN_00d50b20();
    }
    (**(code **)(*(int64_t *)*arg1 + 0x390))();
    if ((local_b8 != '\0') && (local_c0 != 0)) {
      FUN_00d50b20();
    }
    (**(code **)(*this_ptr + 0x378))(param_2,local_50);
    (**(code **)(*(int64_t *)*arg1 + 0x390))();
    if ((local_a8 != '\0') && (local_b0 != 0)) {
      FUN_00d50b20();
    }
    if (local_50 < local_48) {
      (**(code **)(*(int64_t *)*arg1 + 0x3a0))();
      if ((local_88 != '\0') && (local_90 != 0)) {
        FUN_00d50b20();
      }
      iVar2 = (int)local_48 - (int)local_50;
      FUN_00ccdf50();
      if ((local_78 != '\0') && (local_80 != 0)) {
        FUN_00d50b20();
      }
      (**(code **)(*(int64_t *)*arg1 + 0x3a0))();
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      (**(code **)(*(int64_t *)*arg1 + 0x3a0))();
      iVar2 = 0;
      if ((local_98 != '\0') && (local_a0 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  return iVar2;
}

