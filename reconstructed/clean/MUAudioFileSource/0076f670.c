// Function: FUN_0076f670
// Address: 0076f670
// Size: 824 bytes
// Class: MUAudioFileSource

void* FUN_0076f670(int64_t param_1,int64_t *param_2)

{
  int64_t lVar1;
  code *pcVar2;
  int iVar3;
  void*puVar4;
  void*puVar5;
  void *pvVar6;
  void*puVar7;
  void* pVar8;
  void*this_ptr;
  int64_t lVar9;
  uint32_t uVar10;
  float local_58;
  float local_54;
  
  puVar4 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar4 = &g_02572358;
  pcVar2 = g_02572370;
  (*g_02572370)();
  puVar5 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar5 = &g_02572358;
  (*pcVar2)();
  if (0 < *(int *)(*param_2 + 0xc)) {
    lVar9 = 0;
    do {
      pVar8 = (void*)param_1;
      pvVar6 = _pthread_getspecific(pVar8);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      iVar3 = FUN_01326de0();
      if (iVar3 == 1) {
        pvVar6 = _pthread_getspecific(pVar8);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0137c150();
        lVar1 = *(int64_t *)(*(int64_t *)(*param_2 + 0x10) + lVar9 * 8);
        if ((g_023b7c14 <= local_58) || (local_54 <= g_023b7c18)) {
          if (lVar1 != 0) {
            FUN_00d50b00();
          }
          FUN_00d21140();
          if (lVar1 != 0) {
            FUN_00d50b20();
          }
        }
        else {
          if (lVar1 != 0) {
            FUN_00d50b00();
          }
          FUN_00d21140();
          if (lVar1 != 0) {
            FUN_00d50b20();
          }
        }
      }
      else {
        lVar1 = *(int64_t *)(*(int64_t *)(*param_2 + 0x10) + lVar9 * 8);
        if (lVar1 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
      }
      lVar9 = lVar9 + 1;
      param_1 = (int64_t)*(int *)(*param_2 + 0xc);
    } while (lVar9 < param_1);
  }
  puVar7 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar7 = &g_02572358;
  uVar10 = (*pcVar2)();
  if (*(int *)((int64_t)puVar4 + 0xc) == 0) {
    if (*(int *)((int64_t)puVar5 + 0xc) != 0) {
      FUN_00d214d0(uVar10,*(void*)((int64_t)puVar7 + 0xc));
    }
  }
  else if (*(int *)((int64_t)puVar5 + 0xc) == 0) {
    FUN_00d214d0(uVar10,*(void*)((int64_t)puVar7 + 0xc));
  }
  else {
    FUN_00d214d0(uVar10,*(void*)((int64_t)puVar7 + 0xc));
  }
  *this_ptr = puVar7;
  *(void*)(this_ptr + 1) = 1;
  FUN_00d50b20();
  FUN_00d50b20();
  return this_ptr;
}

