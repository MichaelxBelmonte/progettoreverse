// Function: FUN_016727d0
// Address: 016727d0
// Size: 1209 bytes
// Class: MUAraAudioSource
// === MUAraAudioSource properties ===
//   double          _cursorTime
//   double          _lastHostCursorTime
//   bool            _lastHostCursorTimeValid
//   double          _hostPlaybackPendingStopTime
//   bool            _controlsLocalPlayback
//   bool            _distributedLocalPlayback
//   double          _lastPendingHostCycleUpdateRequestTime
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


int64_t * FUN_016727d0(void* param_1)

{
  int64_t lVar1;
  uint32_t uVar2;
  int iVar3;
  void*puVar4;
  void *pvVar5;
  int64_t lVar6;
  void*puVar7;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t lVar8;
  uint32_t extraout_XMM0_Da;
  int64_t local_60;
  char local_58;
  
  puVar4 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar4 = &g_025f82c0;
  *(void*)(puVar4 + 7) = 0;
  puVar4[8] = 0;
  puVar4[9] = 0;
  puVar4[10] = 0;
  FUN_00d500e0();
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar2 = FUN_012c8fb0();
  pvVar5 = _pthread_getspecific(param_1);
  puVar7 = puVar4;
  if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
    puVar7 = (void*)puVar4[(uint64_t)(*(uint *)(lVar6 + 0x154) & 1) + 4];
  }
  *(void*)(puVar7 + 7) = uVar2;
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012c8f50();
  pvVar5 = _pthread_getspecific(param_1);
  if ((pvVar5 == (void *)0x0) || (lVar6 = FUN_00e8b990(), lVar6 == 0)) {
    lVar6 = puVar4[8];
    puVar7 = puVar4;
  }
  else {
    puVar7 = (void*)puVar4[(uint64_t)(*(uint *)(lVar6 + 0x154) & 1) + 4];
    lVar6 = puVar7[8];
  }
  if (lVar6 != local_60) {
    if (local_58 == '\0') {
      if (local_60 == 0) {
        lVar8 = 0;
        goto LAB_01672932;
      }
      FUN_00d50b00();
      lVar1 = puVar7[8];
      puVar7[8] = local_60;
      lVar6 = local_60;
    }
    else {
      local_58 = '\0';
      lVar8 = local_60;
LAB_01672932:
      puVar7[8] = lVar8;
      lVar1 = lVar6;
      lVar6 = lVar8;
    }
    param_1 = (void*)lVar1;
    if (lVar1 != 0) {
      FUN_00d50b20();
      lVar6 = local_60;
    }
  }
  if ((local_58 != '\0') && (lVar6 != 0)) {
    FUN_00d50b20();
  }
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012c8fc0();
  pvVar5 = _pthread_getspecific(param_1);
  if ((pvVar5 == (void *)0x0) || (lVar6 = FUN_00e8b990(), lVar6 == 0)) {
    lVar6 = puVar4[9];
    puVar7 = puVar4;
  }
  else {
    puVar7 = (void*)puVar4[(uint64_t)(*(uint *)(lVar6 + 0x154) & 1) + 4];
    lVar6 = puVar7[9];
  }
  if (lVar6 != local_60) {
    lVar8 = local_60;
    if (local_58 == '\0') {
      if (local_60 == 0) {
        lVar8 = 0;
        goto LAB_01672a11;
      }
      FUN_00d50b00();
      lVar1 = puVar7[9];
      puVar7[9] = local_60;
    }
    else {
      local_58 = '\0';
LAB_01672a11:
      puVar7[9] = lVar8;
      lVar1 = lVar6;
    }
    lVar6 = lVar8;
    if (lVar1 != 0) {
      FUN_00d50b20();
      lVar6 = local_60;
    }
  }
  if ((local_58 != '\0') && (lVar6 != 0)) {
    FUN_00d50b20();
  }
  lVar6 = *arg1;
  if (lVar6 == 0) {
LAB_01672b74:
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
  }
  else {
    lVar8 = 0;
    do {
      if (*(int *)(lVar6 + 0xc) <= (int)lVar8) {
        FUN_01677860();
        goto LAB_01672b74;
      }
      lVar1 = *(int64_t *)(*(int64_t *)(lVar6 + 0x10) + lVar8 * 8);
      iVar3 = FUN_01672e10();
      lVar8 = lVar8 + 1;
    } while (iVar3 == -1);
    if (iVar3 == 1) {
      *(void*)(this_ptr + 1) = 0;
      *this_ptr = 0;
      FUN_01677860();
    }
    else {
      if (*(int *)(lVar6 + 0xc) != (int)lVar8) {
        lVar6 = *(int64_t *)(*(int64_t *)(*arg1 + 0x10) + (int64_t)(int)lVar8 * 8);
        uVar2 = extraout_XMM0_Da;
        if (lVar6 != 0) {
          uVar2 = FUN_00d50b00();
        }
        iVar3 = FUN_01672e10(uVar2,0);
        if (lVar6 != 0) {
          FUN_00d50b20();
        }
        if (iVar3 == 0) {
          *(void*)(this_ptr + 1) = 0;
          *this_ptr = 0;
          FUN_01677860();
          goto joined_r0x01672c87;
        }
      }
      *(void*)(this_ptr + 1) = 0;
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      *this_ptr = lVar1;
      *(void*)(this_ptr + 1) = 1;
      FUN_01677860();
    }
  }
joined_r0x01672c87:
  if (puVar4 != (void*)0x0) {
    FUN_00d50b20();
  }
  return this_ptr;
}

