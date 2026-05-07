// Function: FUN_00bba6c0
// Address: 00bba6c0
// Size: 588 bytes
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


void FUN_00bba6c0(uint64_t param_1,int param_2)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  void*arg1;
  int64_t this_ptr;
  int64_t lVar9;
  int64_t local_48;
  char local_40;
  
  iVar5 = FUN_00ae7ec0();
  uVar1 = *(uint *)(this_ptr + 0x30);
  uVar7 = (uint64_t)uVar1;
  iVar5 = uVar1 * param_2 * iVar5;
  if (uVar7 == 1) {
    if (*(int *)(this_ptr + 0x34) == 0x13) {
      (**(code **)(**(int64_t **)(this_ptr + 0x18) + 0x388))(iVar5,*arg1);
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      lVar9 = g_027653a0;
      if (local_48 == 0) {
        return;
      }
      if (g_027653a0 != 0) {
        FUN_00d50b00();
      }
      FUN_00cc78b0();
      if (lVar9 == 0) {
        return;
      }
      FUN_00d50b20();
      return;
    }
  }
  else if ((int)uVar1 < 1) {
    bVar4 = false;
    goto LAB_00bba7be;
  }
  uVar8 = 1;
  bVar3 = false;
  do {
    lVar9 = uVar8 - 1;
    bVar4 = (bool)(arg1[lVar9] == 0 | bVar3);
    if (uVar7 <= uVar8) break;
    uVar8 = uVar8 + 1;
    bVar2 = !bVar3;
    bVar3 = bVar4;
  } while (arg1[lVar9] != 0 && bVar2);
LAB_00bba7be:
  FUN_00b7be00(uVar7,bVar4);
  if ((local_40 == '\0') && (local_48 != 0)) {
    FUN_00d50b00();
  }
  iVar6 = *(int *)(this_ptr + 0x30);
  if (0 < iVar6) {
    lVar9 = 0;
    do {
      if (arg1[lVar9] != 0) {
        FUN_00ae80c0(0,1,*(void*)(local_48 + 0x10),*(void*)(this_ptr + 0x34));
        iVar6 = *(int *)(this_ptr + 0x30);
      }
      lVar9 = lVar9 + 1;
    } while (lVar9 < iVar6);
  }
  (**(code **)(**(int64_t **)(this_ptr + 0x18) + 0x388))(iVar5,*(void*)(local_48 + 0x10));
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  lVar9 = g_027653a0;
  if (local_48 != 0) {
    if (g_027653a0 != 0) {
      FUN_00d50b00();
    }
    FUN_00cc78b0();
    if (lVar9 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_00b7c2b0();
  FUN_00d50b20();
  return;
}

