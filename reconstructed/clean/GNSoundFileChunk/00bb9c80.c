// Function: FUN_00bb9c80
// Address: 00bb9c80
// Size: 737 bytes
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


void FUN_00bb9c80(uint32_t param_1,uint32_t param_2,uint32_t param_3,int64_t *param_4)

{
  int64_t lVar1;
  void*puVar2;
  int64_t *plVar3;
  uint32_t in_ECX;
  void*this_ptr;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  char local_40;
  uint32_t local_38;
  uint32_t local_34;
  
  lVar1 = g_02764880;
  local_38 = param_3;
  local_34 = in_ECX;
  switch(param_2) {
  case 1:
    plVar3 = (int64_t *)FUN_00e8fc40();
    FUN_00d4ff40();
    plVar3[7] = 0;
    plVar3[8] = 0;
    plVar3[5] = 0;
    plVar3[6] = 0;
    plVar3[2] = 0;
    plVar3[3] = 0;
    *(void*)(plVar3 + 4) = 0;
    puVar2 = &g_02543f20;
    goto LAB_00bb9dec;
  case 2:
    plVar3 = (int64_t *)FUN_00e8fc40();
    FUN_00d4ff40();
    plVar3[7] = 0;
    plVar3[8] = 0;
    plVar3[5] = 0;
    plVar3[6] = 0;
    plVar3[2] = 0;
    plVar3[3] = 0;
    *(void*)(plVar3 + 4) = 0;
    puVar2 = &g_025446f0;
    *plVar3 = (int64_t)&g_02544700;
    *(void*)(plVar3 + 9) = 0;
    plVar3[10] = 0;
    plVar3[0xb] = 0;
    *(void*)((int64_t)plVar3 + 0x5e) = 0;
    plVar3[0xd] = 0;
    plVar3[0xe] = 0;
    break;
  case 3:
    plVar3 = (int64_t *)FUN_00e8fc40();
    FUN_00d4ff40();
    plVar3[7] = 0;
    plVar3[8] = 0;
    plVar3[5] = 0;
    plVar3[6] = 0;
    plVar3[2] = 0;
    plVar3[3] = 0;
    *(void*)(plVar3 + 4) = 0;
    puVar2 = &g_025415e8;
    goto LAB_00bb9dec;
  default:
    if (g_02764880 != 0) {
      FUN_00d50b00();
    }
    local_48 = lVar1;
    local_40 = '\x01';
    FUN_00cc78b0();
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    plVar3 = (int64_t *)0x0;
    goto LAB_00bb9f13;
  case 5:
    plVar3 = (int64_t *)FUN_00e8fc40();
    FUN_00d4ff40();
    plVar3[7] = 0;
    plVar3[8] = 0;
    plVar3[5] = 0;
    plVar3[6] = 0;
    plVar3[2] = 0;
    plVar3[3] = 0;
    *(void*)(plVar3 + 4) = 0;
    puVar2 = &g_0254c838;
LAB_00bb9dec:
    *plVar3 = (int64_t)(puVar2 + 0x10);
    plVar3[9] = 0;
    break;
  case 6:
    plVar3 = (int64_t *)FUN_00e8fc40();
    FUN_00d4ff40();
    plVar3[2] = 0;
    plVar3[3] = 0;
    *(void*)(plVar3 + 4) = 0;
    plVar3[0xb] = 0;
    plVar3[0xc] = 0;
    plVar3[0xd] = 0;
    plVar3[0xe] = 0;
    plVar3[5] = 0;
    plVar3[6] = 0;
    plVar3[7] = 0;
    plVar3[8] = 0;
    *(void*)((int64_t)plVar3 + 0x44) = 0;
    *(void*)((int64_t)plVar3 + 0x4c) = 0;
    puVar2 = &g_0252c908;
    *plVar3 = (int64_t)&g_0252c918;
    break;
  case 9:
    plVar3 = (int64_t *)FUN_00e8fc40();
    FUN_00d4ff40();
    plVar3[2] = 0;
    plVar3[3] = 0;
    *(void*)(plVar3 + 4) = 0;
    plVar3[0xb] = 0;
    plVar3[0xc] = 0;
    plVar3[0xd] = 0;
    plVar3[0xe] = 0;
    plVar3[5] = 0;
    plVar3[6] = 0;
    plVar3[7] = 0;
    plVar3[8] = 0;
    *(void*)((int64_t)plVar3 + 0x44) = 0;
    *(void*)((int64_t)plVar3 + 0x4c) = 0;
    puVar2 = &g_02538900;
    *plVar3 = (int64_t)&g_02538910;
    plVar3[0x13] = 0;
    *(void*)(plVar3 + 0x14) = 0;
    plVar3[0x10] = 0;
    plVar3[0x11] = 0;
    *(void*)(plVar3 + 0x12) = 0;
    break;
  case 10:
    plVar3 = (int64_t *)FUN_00e8fc40();
    FUN_00d4ff40();
    plVar3[2] = 0;
    *plVar3 = (int64_t)&g_02545278;
    FUN_00d500e0();
    goto LAB_00bb9eb1;
  }
  (**(code **)(puVar2 + 0x28))();
LAB_00bb9eb1:
  local_58 = *param_4;
  local_50 = '\0';
  (**(code **)(*plVar3 + 0x368))(param_1,param_2,local_38,&local_58);
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
LAB_00bb9f13:
  *this_ptr = plVar3;
  *(void*)(this_ptr + 1) = 1;
  return;
}

