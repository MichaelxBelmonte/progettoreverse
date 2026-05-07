// Function: FUN_01c9d710
// Address: 01c9d710
// Size: 763 bytes
// Class: MUAudioFileSource

int64_t * FUN_01c9d710(int64_t *param_1,int64_t *param_2)

{
  int64_t lVar1;
  void *pvVar2;
  int64_t lVar3;
  void*puVar4;
  void* pVar5;
  int64_t *plVar6;
  void*puVar7;
  int64_t *this_ptr;
  int iVar8;
  int64_t local_98;
  char local_90;
  int64_t local_40;
  char local_38;
  
  if (*param_2 != 0) {
    plVar6 = param_1;
    pvVar2 = _pthread_getspecific((void*)param_1);
    pVar5 = (void*)plVar6;
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012eb770();
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
    if (local_98 != 0) {
      pvVar2 = _pthread_getspecific(pVar5);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      lVar3 = FUN_00e8b990();
      if (lVar3 != 0) {
        FUN_00d50b00();
        FUN_00cb1fa0();
      }
      puVar4 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      puVar7 = &g_02572358;
      *puVar4 = &g_02572358;
      (*g_02572370)();
      lVar1 = *param_1;
      if (lVar1 != 0) {
        if (0 < *(int *)(lVar1 + 0xc)) {
          iVar8 = 0;
          do {
            pvVar2 = _pthread_getspecific((void*)puVar7);
            if (pvVar2 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_012f98b0();
            if (local_38 == '\0') {
              if (local_40 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_38 = '\0';
            }
            if (local_40 != 0) {
              local_38 = '\0';
              FUN_00d21140();
              FUN_00d50b20();
            }
            iVar8 = iVar8 + 1;
          } while (iVar8 < *(int *)(lVar1 + 0xc));
        }
        FUN_001159b0();
      }
      *this_ptr = (int64_t)puVar4;
      *(void*)(this_ptr + 1) = 1;
      if (lVar3 == 0) {
        return this_ptr;
      }
      FUN_00d50b20();
      return this_ptr;
    }
  }
  *(void*)(this_ptr + 1) = 0;
  lVar3 = *param_1;
  if ((char)param_1[1] == '\0') {
    if (lVar3 != 0) {
      FUN_00d50b00();
    }
    *this_ptr = lVar3;
    *(void*)(this_ptr + 1) = 1;
  }
  else {
    *this_ptr = lVar3;
    *(void*)(this_ptr + 1) = 1;
    *(void*)(param_1 + 1) = 0;
  }
  return this_ptr;
}

