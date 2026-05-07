// Function: FUN_002c8fb0
// Address: 002c8fb0
// Size: 1114 bytes
// Class: MUAudioFileSource
// String references:
//   "MUAudioFileSource"

void FUN_002c8fb0(void)

{
  int64_t *plVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  void*puVar5;
  int64_t lVar6;
  void *pvVar7;
  void*puVar8;
  char *pcVar9;
  int64_t **pplVar10;
  int64_t *arg1;
  void*puVar11;
  int64_t lVar12;
  uint32_t uVar13;
  uint64_t local_a8;
  uint8_t local_a0;
  void*local_98;
  int local_60;
  int64_t *local_48;
  char local_40 [8];
  char local_38 [8];
  
  puVar5 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar5 = &g_02572358;
  pcVar2 = g_02572370;
  (*g_02572370)();
  lVar12 = *arg1;
  puVar11 = &g_02572358;
  if (lVar12 != 0) {
    local_98 = &g_02572358;
    local_60 = -1;
    while( true ) {
      lVar6 = (int64_t)local_60;
      local_60 = local_60 + 1;
      if (*(int *)(lVar12 + 0xc) <= local_60) break;
      plVar1 = *(int64_t **)(*(int64_t *)(lVar12 + 0x10) + 8 + lVar6 * 8);
      local_48 = plVar1;
      FUN_0006e1c0();
      pplVar10 = (int64_t **)&g_02802688;
      if (plVar1 != (int64_t *)0x0) {
        (**(code **)(*plVar1 + 0x360))();
        cVar3 = FUN_00e85ea0();
        pplVar10 = &local_48;
        if (cVar3 == '\0') {
          pplVar10 = (int64_t **)&g_02802688;
        }
      }
      if (*pplVar10 != (int64_t *)0x0) {
        pvVar7 = _pthread_getspecific((void*)pplVar10);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0126ef70();
        plVar1 = local_48;
        if ((g_026fdd70 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
          g_026e3238 = FUN_00115af0();
          g_026e3220 = "MUAudioFileSource";
          g_026e3228 = 0xa0;
          g_026e3230 = FUN_00136df0;
          g_026e3240 = 0;
          ram_00000000026e3248 = 0;
          g_026e3250 = 0;
          ram_00000000026e3258 = 0;
          g_026e3260 = 0;
          ram_00000000026e3268 = 0;
          g_026e3270 = 0;
          ram_00000000026e3278 = 0;
          g_026e3280 = 0;
          ram_00000000026e3288 = 0;
          g_026e3290 = 0;
          ram_00000000026e3298 = 0;
          g_026e32a0 = 0;
          ram_00000000026e32a8 = 0;
          g_026e32b0 = 0;
          ram_00000000026e32b8 = 0;
          g_026e32c0 = 0;
          ram_00000000026e32c8 = 0;
          g_026e32d0 = 0;
          ram_00000000026e32d8 = 0;
          g_026e32e0 = 0;
          ___cxa_guard_release();
        }
        pplVar10 = (int64_t **)&g_02802688;
        if (plVar1 != (int64_t *)0x0) {
          (**(code **)(*plVar1 + 0x360))();
          cVar3 = FUN_00e85ea0();
          pplVar10 = &local_48;
          if (cVar3 == '\0') {
            pplVar10 = (int64_t **)&g_02802688;
          }
        }
        plVar1 = *pplVar10;
        local_38[0] = *(char *)(pplVar10 + 1);
        pplVar10 = pplVar10 + 1;
        if (local_38[0] == '\0') {
          pplVar10 = (int64_t **)local_38;
        }
        *(void*)pplVar10 = 0;
        if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar1 != (int64_t *)0x0) {
          local_40[0] = '\0';
          local_48 = plVar1;
          FUN_00d235a0();
          if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (local_38[0] != '\0') {
            FUN_00d50b20();
          }
        }
      }
    }
    FUN_002d7220();
    puVar11 = local_98;
  }
  puVar8 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar8 = puVar11;
  uVar13 = (*pcVar2)();
  if (puVar5 != (void*)0x0) {
    if (0 < *(int *)((int64_t)puVar5 + 0xc)) {
      lVar12 = 0;
      do {
        local_a8 = *(void*)(puVar5[2] + lVar12 * 8);
        local_a0 = 0;
        uVar13 = FUN_002c95a0(uVar13,&local_a8);
        plVar1 = local_48;
        local_38[0] = local_40[0];
        pcVar9 = local_40;
        if (local_40[0] == '\0') {
          pcVar9 = local_38;
        }
        *pcVar9 = '\0';
        if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
          uVar13 = FUN_00d50b20();
        }
        if (plVar1 != (int64_t *)0x0) {
          local_40[0] = '\0';
          local_48 = plVar1;
          uVar13 = FUN_00d21140();
          if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
            uVar13 = FUN_00d50b20();
          }
          if (local_38[0] != '\0') {
            uVar13 = FUN_00d50b20();
          }
        }
        lVar12 = lVar12 + 1;
      } while ((int)lVar12 < *(int *)((int64_t)puVar5 + 0xc));
    }
    FUN_002d7290();
  }
  if (*(int *)((int64_t)puVar8 + 0xc) != 0) {
    FUN_01d2c5c0();
  }
  FUN_00d50b20();
  if (puVar5 != (void*)0x0) {
    FUN_00d50b20();
  }
  return;
}

