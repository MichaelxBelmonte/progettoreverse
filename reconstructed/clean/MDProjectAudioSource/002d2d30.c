// Function: FUN_002d2d30
// Address: 002d2d30
// Size: 894 bytes
// Class: MDProjectAudioSource
// String references:
//   "%@.%@"
// === MDProjectAudioSource properties ===
//   MDProjectAudioSourceLocation _location
//   MDProjectAudioSourceStatus _status


uint64_t FUN_002d2d30(void* param_1,int64_t *param_2)

{
  int64_t lVar1;
  char cVar2;
  void *pvVar3;
  int64_t lVar4;
  int64_t *arg1;
  uint64_t this_ptr;
  int64_t *plVar5;
  uint8_t local_c0 [8];
  int64_t *local_90;
  int64_t local_88;
  char local_80;
  int64_t *local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  char local_40;
  
  lVar4 = *arg1;
  if (*(int64_t *)(lVar4 + 0x18) == 0) {
    plVar5 = *(int64_t **)(lVar4 + 0x10);
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      plVar5 = *(int64_t **)(lVar4 + 0x10);
      lVar4 = FUN_00e8b990();
      if (lVar4 != 0) {
        plVar5 = (int64_t *)plVar5[(uint64_t)(*(uint *)(lVar4 + 0x154) & 1) + 4];
      }
    }
    (**(code **)(*plVar5 + 0x478))();
  }
  else {
    FUN_00b88600();
  }
  if ((local_60 == '\0') && (local_68 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  (**(code **)(*local_68 + 0x3f0))();
  if ((local_60 == '\0') && (local_68 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  (**(code **)(*local_68 + 0x380))();
  if ((local_60 == '\0') && (local_68 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  FUN_00d8ed10();
  if ((local_60 == '\0') && (local_68 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  cVar2 = (**(code **)(*local_68 + 0x50))();
  if (cVar2 != '\0') goto LAB_002d3022;
  FUN_00083ea0(2,local_c0);
  FUN_00d8cb40();
  lVar4 = *param_2;
  if (lVar4 == local_88) {
    if (((char)param_2[1] == '\0') && (local_88 != 0)) {
      if (local_80 != '\0') goto LAB_002d2f8a;
      FUN_00d50b00();
      goto LAB_002d2fc6;
    }
LAB_002d2fd0:
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    lVar1 = param_2[1];
    if (local_80 == '\0') {
      if (local_88 != 0) {
        FUN_00d50b00();
      }
      *param_2 = local_88;
      if (((char)lVar1 != '\0') && (lVar4 != 0)) {
        FUN_00d50b20();
      }
LAB_002d2fc6:
      local_90 = param_2 + 1;
      *(void*)local_90 = 1;
      goto LAB_002d2fd0;
    }
    *param_2 = local_88;
    if (((char)lVar1 != '\0') && (lVar4 != 0)) {
      FUN_00d50b20();
    }
LAB_002d2f8a:
    local_90 = param_2 + 1;
    *(void*)local_90 = 1;
  }
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
LAB_002d3022:
  (**(code **)(*local_68 + 0x400))();
  FUN_00d50b20();
  if (local_68 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  FUN_00d50b20();
  return this_ptr;
}

