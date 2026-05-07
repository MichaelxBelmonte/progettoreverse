// Function: FUN_01394200
// Address: 01394200
// Size: 1307 bytes
// Class: MUAudioFileSource

int FUN_01394200(void)

{
  int64_t lVar1;
  char cVar2;
  int iVar3;
  void*arg1;
  void*this_ptr;
  int64_t lVar4;
  int64_t lVar5;
  bool bVar6;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  
  lVar1 = g_027bf438;
  if (g_027bf438 != 0) {
    FUN_00d50b00();
  }
  (**(code **)(*(int64_t *)*this_ptr + 0x88))();
  if (local_50 == '\0') {
    if (local_58 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_50 = '\0';
  }
  (**(code **)(*(int64_t *)*arg1 + 0x88))();
  if (local_50 == '\0') {
    if (local_58 != 0) {
      FUN_00d50b00(local_58);
    }
  }
  else {
    local_50 = '\0';
  }
  lVar5 = local_58;
  if (local_58 == 0) {
    local_48 = 0;
    lVar4 = g_027bf440;
joined_r0x0139445d:
    g_027bf440 = lVar4;
    if (lVar4 != 0) {
      FUN_00d50b00();
    }
    if (lVar1 == lVar4) {
      lVar4 = lVar1;
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
    }
    else if (lVar1 != 0) {
      FUN_00d50b20();
    }
    (**(code **)(*(int64_t *)*this_ptr + 0x88))();
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    (**(code **)(*(int64_t *)*arg1 + 0x88))();
    if (local_58 == local_48) {
LAB_013945f7:
      bVar6 = local_50 == '\0';
joined_r0x013945fb:
      lVar5 = local_48;
      if ((!bVar6) && (local_58 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      if (local_50 == '\0') {
        if (local_58 != 0) {
          FUN_00d50b00();
        }
        if (local_48 != 0) {
          FUN_00d50b20();
          local_48 = local_58;
          goto LAB_013945f7;
        }
        bVar6 = true;
        local_48 = local_58;
        goto joined_r0x013945fb;
      }
      if (local_48 != 0) {
        FUN_00d50b20();
      }
    }
    if (local_58 == 0) {
      local_58 = 0;
      iVar3 = 0;
      lVar1 = lVar4;
joined_r0x01394370:
      lVar4 = lVar1;
      if (lVar5 != 0) goto LAB_013946a3;
      goto LAB_013946a8;
    }
    if (lVar5 != 0) {
      iVar3 = FUN_00e8b280();
LAB_013946a3:
      FUN_00d50b20();
      goto LAB_013946a8;
    }
    iVar3 = 0;
  }
  else {
    if (local_58 != 0) {
      iVar3 = FUN_00e8b280();
      local_48 = local_58;
      lVar4 = g_027bf440;
      if (iVar3 == 0) goto joined_r0x0139445d;
      goto joined_r0x01394370;
    }
    cVar2 = FUN_00d45ad0();
    if (cVar2 == '\0') {
      local_48 = 0;
      lVar4 = g_027bf440;
      goto joined_r0x0139445d;
    }
    iVar3 = -1;
    lVar4 = lVar1;
LAB_013946a8:
    if (local_58 == 0) goto LAB_013946b5;
  }
  FUN_00d50b20();
LAB_013946b5:
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  return iVar3;
}

