// Function: FUN_01a13090
// Address: 01a13090
// Size: 667 bytes
// Class: MUAudioSourcePrincipalItem

void FUN_01a13090(void)

{
  int64_t lVar1;
  int64_t *plVar2;
  char cVar3;
  void*puVar4;
  void *pvVar5;
  void* pVar6;
  int64_t **pplVar7;
  int64_t *arg1;
  int64_t lVar8;
  int64_t *local_58;
  char local_50;
  int64_t *local_48;
  char local_40;
  void*local_38;
  
  puVar4 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar4 = &g_02572358;
  (*g_02572370)();
  lVar1 = *arg1;
  if (lVar1 != 0) {
    local_38 = puVar4;
    if (0 < *(int *)(lVar1 + 0xc)) {
      lVar8 = 0;
      do {
        plVar2 = *(int64_t **)(*(int64_t *)(lVar1 + 0x10) + lVar8 * 8);
        local_48 = plVar2;
        FUN_0006e1c0();
        pplVar7 = (int64_t **)&g_02802688;
        if (plVar2 != (int64_t *)0x0) {
          (**(code **)(*plVar2 + 0x360))();
          cVar3 = FUN_00e85ea0();
          pplVar7 = &local_48;
          if (cVar3 == '\0') {
            pplVar7 = (int64_t **)&g_02802688;
          }
        }
        if (*pplVar7 != (int64_t *)0x0) {
          pvVar5 = _pthread_getspecific((void*)pplVar7);
          pVar6 = (void*)pplVar7;
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01274b60();
          plVar2 = local_48;
          if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (plVar2 != (int64_t *)0x0) {
            pvVar5 = _pthread_getspecific(pVar6);
            if (pvVar5 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_01274b60();
            if (local_50 == '\0') {
              if (local_58 != (int64_t *)0x0) {
                FUN_00d50b00();
              }
            }
            else {
              local_50 = '\0';
            }
            local_48 = local_58;
            local_40 = '\0';
            FUN_00d235a0();
            if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if (local_58 != (int64_t *)0x0) {
              FUN_00d50b20();
            }
            if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
        }
        lVar8 = lVar8 + 1;
      } while ((int)lVar8 < *(int *)(lVar1 + 0xc));
    }
    FUN_002d7220();
    puVar4 = local_38;
  }
  if (*(int *)((int64_t)puVar4 + 0xc) == 0) {
    FUN_01f06a80();
  }
  else {
    FUN_01f06a80();
  }
  FUN_00d50b20();
  return;
}

