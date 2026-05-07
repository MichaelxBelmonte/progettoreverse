// Function: FUN_01b1dbf0
// Address: 01b1dbf0
// Size: 1618 bytes
// Class: MUScalePitchSystem
// String references:
//   "%@"
// === MUScalePitchSystem properties ===
//   bool            _tuningIsSuggestedRelevant
//   bool            _modeIsSuggestedRelevant
//   bool            _tuningPitchAnchorIsSuggestedRelevant
//   bool            _modeFundamentalOffsetIsSuggestedRelevant
//   bool            _stretchingIsSuggestedRelevant
//   double          _startPulse
//   double          _startTime
//   double          _width
//   double          _scope


void FUN_01b1dbf0(void* param_1)

{
  int64_t *plVar1;
  int iVar2;
  void *pvVar3;
  int64_t lVar4;
  int64_t this_ptr;
  int64_t *plVar5;
  float fVar6;
  float fVar7;
  uint32_t uVar8;
  float fVar9;
  float fVar10;
  int64_t local_b0;
  char local_a8;
  int64_t local_88;
  char local_80;
  int64_t *local_50;
  uint32_t local_48;
  int64_t local_40;
  char local_38;
  
  if (*(int64_t *)(this_ptr + 0x290) == 0) {
    return;
  }
  FUN_01ad3cb0();
  plVar1 = local_50;
  if (((char)local_48 == '\0') && (local_50 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  iVar2 = (**(code **)(**(int64_t **)(this_ptr + 0x290) + 0xa88))();
  if (iVar2 != 0) {
    iVar2 = (**(code **)(**(int64_t **)(this_ptr + 0x290) + 0xa88))();
    if (iVar2 == 1) {
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01740240();
      if ((char)local_48 == '\0') {
        if (local_50 == (int64_t *)0x0) goto LAB_01b1e19c;
        FUN_00d50b00();
        if (((char)local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      else if (local_50 == (int64_t *)0x0) goto LAB_01b1e19c;
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar8 = (**(code **)(**(int64_t **)(this_ptr + 0x290) + 0x970))();
      local_48 = 1;
      local_50 = &g_024c5048;
      local_38 = 0;
      if (local_b0 != 0) {
        uVar8 = FUN_00d50b00();
      }
      local_40 = local_b0;
      local_38 = '\x01';
      FUN_00d8cb40(uVar8,&local_50);
      if (local_80 == '\0') {
        if (local_88 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_80 = '\0';
      }
      FUN_01739510();
      if (local_88 != 0) {
        FUN_00d50b20();
      }
      if ((local_80 != '\0') && (local_88 != 0)) {
        FUN_00d50b20();
      }
      local_50 = &g_024c5048;
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if ((local_a8 != '\0') && (local_b0 != 0)) {
        FUN_00d50b20();
      }
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0173b6f0();
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_017381f0();
      if (((char)local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    goto LAB_01b1e19c;
  }
  FUN_01af1380();
  if (*(int *)(this_ptr + 0x18c) == 2) {
    fVar7 = (float)(**(code **)(**(int64_t **)(this_ptr + 0x290) + 0x930))();
    fVar6 = (float)FUN_01ae51a0();
    fVar7 = (fVar7 - fVar6) * g_0241c6f4;
  }
  else {
    if (*(int *)(this_ptr + 0x18c) == 1) {
      fVar6 = (float)(**(code **)(**(int64_t **)(this_ptr + 0x290) + 0x930))();
      fVar7 = 0.0;
      if (fVar6 <= g_02390124) goto LAB_01b1dfd8;
      fVar7 = (float)_logf(fVar6 * g_02394204);
      pvVar3 = _pthread_getspecific(param_1);
      plVar5 = plVar1;
      if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
        plVar5 = (int64_t *)plVar1[(uint64_t)(*(uint *)(lVar4 + 0x154) & 1) + 4];
      }
      fVar6 = (float)(**(code **)(*plVar5 + 0x3a0))();
      fVar7 = fVar7 * g_02394208;
    }
    else {
      fVar7 = (float)(**(code **)(**(int64_t **)(this_ptr + 0x290) + 0x930))();
      fVar6 = (float)FUN_01b1e460();
    }
    fVar7 = fVar7 - fVar6;
  }
LAB_01b1dfd8:
  pvVar3 = _pthread_getspecific(param_1);
  plVar5 = plVar1;
  if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
    plVar5 = (int64_t *)plVar1[(uint64_t)(*(uint *)(lVar4 + 0x154) & 1) + 4];
  }
  fVar6 = (float)(**(code **)(*plVar5 + 0x3a0))();
  pvVar3 = _pthread_getspecific(param_1);
  plVar5 = plVar1;
  if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
    plVar5 = (int64_t *)plVar1[(uint64_t)(*(uint *)(lVar4 + 0x154) & 1) + 4];
  }
  fVar9 = (float)(**(code **)(*plVar5 + 0x3a0))();
  fVar9 = fVar9 - g_027e30c0;
  pvVar3 = _pthread_getspecific(param_1);
  plVar5 = plVar1;
  if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
    plVar5 = (int64_t *)plVar1[(uint64_t)(*(uint *)(lVar4 + 0x154) & 1) + 4];
  }
  fVar10 = (float)(**(code **)(*plVar5 + 0x3a0))();
  fVar10 = fVar10 + g_027e30c0;
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0173b790();
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01776680(~-(uint)(fVar6 + fVar7 < fVar10) & ~-(uint)(fVar9 < fVar6 + fVar7) & (uint)fVar7,
               g_027e30c0);
  if (((char)local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01b07460();
  FUN_01ad37a0();
  FUN_01ad6540();
LAB_01b1e19c:
  (**(code **)(**(int64_t **)(this_ptr + 0x290) + 0xa20))();
  plVar5 = *(int64_t **)(this_ptr + 0x290);
  if ((plVar5 != (int64_t *)0x0) && (FUN_00d50b00(), *(int64_t *)(this_ptr + 0x290) != 0)) {
    *(void*)(this_ptr + 0x290) = 0;
    FUN_00d50b20();
  }
  (**(code **)(*plVar5 + 0x478))();
  FUN_00d50b20();
  if (plVar1 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}

