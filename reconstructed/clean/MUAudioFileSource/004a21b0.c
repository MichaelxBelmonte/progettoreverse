// Function: FUN_004a21b0
// Address: 004a21b0
// Size: 813 bytes
// Class: MUAudioFileSource

void* FUN_004a21b0(void)

{
  int64_t lVar1;
  void*puVar2;
  code *pcVar3;
  int64_t *plVar4;
  void *pvVar5;
  code *pcVar6;
  int64_t *arg1;
  void*this_ptr;
  int64_t lVar7;
  int64_t local_78;
  char local_70;
  void*local_40;
  char local_38;
  
  plVar4 = (int64_t *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar4 + 0x18))();
  pcVar3 = g_02572370;
  lVar1 = *arg1;
  if (lVar1 != 0) {
    if (0 < *(int *)(lVar1 + 0xc)) {
      lVar7 = 0;
      pcVar6 = g_02572370;
      do {
        puVar2 = *(void**)(*(int64_t *)(lVar1 + 0x10) + lVar7 * 8);
        pvVar5 = _pthread_getspecific((void*)pcVar6);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0126ef70();
        if (local_70 == '\0') {
          if (local_78 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_70 = '\0';
        }
        FUN_004a26e0();
        if ((local_38 == '\0') && (local_40 != (void*)0x0)) {
          FUN_00d50b00();
        }
        if (local_78 != 0) {
          FUN_00d50b20();
        }
        if ((local_70 != '\0') && (local_78 != 0)) {
          FUN_00d50b20();
        }
        if (local_40 == (void*)0x0) {
          local_40 = (void*)FUN_00e8fc40();
          FUN_00d4ff40();
          *local_40 = &g_02572358;
          (*pcVar3)();
          pvVar5 = _pthread_getspecific((void*)pcVar6);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0126ef70();
          FUN_004a2790();
        }
        local_38 = '\0';
        FUN_00d21140();
        if (local_40 != (void*)0x0) {
          FUN_00d50b20();
        }
        lVar7 = lVar7 + 1;
        local_40 = puVar2;
      } while ((int)lVar7 < *(int *)(lVar1 + 0xc));
    }
    FUN_001159b0();
  }
  *this_ptr = plVar4;
  *(void*)(this_ptr + 1) = 1;
  return this_ptr;
}

