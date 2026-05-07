// Function: FUN_0070b860
// Address: 0070b860
// Size: 1286 bytes
// Class: MDExportController
// === MDExportController properties ===
//   MDPlaybackSetup _lastSetup


void FUN_0070b860(void)

{
  int64_t lVar1;
  int64_t *plVar2;
  void *pvVar3;
  void* pVar4;
  int64_t *plVar5;
  int64_t *arg1;
  int64_t *plVar6;
  int64_t *local_b0;
  char local_a8;
  int64_t local_a0;
  char local_98;
  int64_t *local_90;
  char local_88;
  uint64_t local_80;
  int64_t local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  int64_t *local_58;
  char local_50;
  char local_41;
  int64_t *local_40;
  char local_38;
  
  FUN_007f2390();
  if (local_38 == '\0') {
    if (local_40 == (int64_t *)0x0) {
      return;
    }
    FUN_00d50b00();
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else if (local_40 == (int64_t *)0x0) {
    return;
  }
  local_80 = 0;
  local_41 = '\0';
  FUN_01e561b0();
  local_78 = local_68;
  local_70 = 0;
  if (local_60 == '\0') {
    if (local_68 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_60 = '\0';
  }
  local_70 = '\x01';
  plVar5 = &local_78;
  FUN_007f3210(plVar5,&local_80,&local_41);
  plVar6 = local_40;
  pVar4 = (void*)plVar5;
  if (local_38 == '\0') {
    if (((local_40 != (int64_t *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
       (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  if (plVar6 == (int64_t *)0x0) {
    FUN_007f32f0();
    goto LAB_0070bd3f;
  }
  if (local_41 != '\0') {
    FUN_01f27fe0();
    (**(code **)(*local_40 + 0x560))();
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  if ((int64_t *)*arg1 != (int64_t *)0x0) {
    (**(code **)(&UNK_00001668 + *(int64_t *)*arg1))();
    plVar5 = local_40;
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar5 != (int64_t *)0x0) {
      FUN_016cbba0();
      plVar5 = local_40;
      plVar2 = plVar6;
      if (plVar6 == local_40) {
joined_r0x0070bb4d:
        plVar5 = plVar2;
        if ((local_38 != '\0') && (plVar6 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        if (local_38 == '\0') {
          if (local_40 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
          FUN_00d50b20();
          plVar2 = plVar5;
          plVar6 = local_40;
          goto joined_r0x0070bb4d;
        }
        FUN_00d50b20();
        local_38 = '\0';
      }
      pvVar3 = _pthread_getspecific(pVar4);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_016ea7c0(local_80);
      (**(code **)(&UNK_00001668 + *(int64_t *)*arg1))();
      pvVar3 = _pthread_getspecific(pVar4);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0132d960();
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d403d0();
      lVar1 = g_027ebe30;
      if (g_027ebe30 != 0) {
        FUN_00d50b00();
      }
      local_a8 = '\0';
      local_a0 = 0;
      local_98 = '\0';
      local_b0 = plVar5;
      FUN_00d40470(&local_a0,&local_b0,3,3);
      if ((local_98 != '\0') && (local_a0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_a8 != '\0') && (local_b0 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      plVar6 = plVar5;
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_0070bd3f;
    }
  }
  local_90 = plVar6;
  local_88 = '\0';
  FUN_006f3f00();
  FUN_00757c60();
  local_58 = local_40;
  local_50 = 0;
  if (local_38 == '\0') {
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  local_50 = '\x01';
  FUN_01c77060(local_80,1);
  if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
LAB_0070bd3f:
  if (plVar6 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}

