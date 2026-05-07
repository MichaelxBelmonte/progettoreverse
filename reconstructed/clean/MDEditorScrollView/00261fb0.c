// Function: FUN_00261fb0
// Address: 00261fb0
// Size: 1043 bytes
// Class: MDEditorScrollView
// === MDEditorScrollView properties ===
//   MUScaleRulerViewDisplayMode _scaleRulerViewDisplayMode


void* FUN_00261fb0(void)

{
  void*puVar1;
  void *pvVar2;
  void*puVar3;
  int64_t arg1;
  void*this_ptr;
  int iVar4;
  int64_t local_b0;
  char local_a8;
  int64_t local_a0;
  char local_98;
  int64_t local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  int64_t *local_50;
  char local_48;
  int64_t *local_40;
  char local_38;
  
  puVar1 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  puVar3 = &g_02572358;
  *puVar1 = &g_02572358;
  (*g_02572370)();
  if (*(int64_t **)(arg1 + 0x90) != (int64_t *)0x0) {
    (**(code **)(&UNK_00001550 + **(int64_t **)(arg1 + 0x90)))();
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    if (local_80 != 0) {
      (**(code **)(&UNK_00001550 + **(int64_t **)(arg1 + 0x90)))();
      (**(code **)(&UNK_00001668 + *local_40))();
      if ((local_78 != '\0') && (local_80 != 0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (local_80 != 0) {
        (**(code **)(&UNK_00001550 + **(int64_t **)(arg1 + 0x90)))();
        (**(code **)(&UNK_00001668 + *local_50))();
        if (local_38 == '\0') {
          if (local_40 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        FUN_00d235a0();
        if (local_40 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      goto LAB_002623b4;
    }
  }
  FUN_00261550();
  if (local_78 == '\0') {
    if (local_80 == 0) goto LAB_002623b4;
    FUN_00d50b00();
  }
  else if (local_80 == 0) goto LAB_002623b4;
  if (0 < *(int *)(local_80 + 0xc)) {
    iVar4 = 0;
    do {
      pvVar2 = _pthread_getspecific((void*)puVar3);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01657380();
      pvVar2 = _pthread_getspecific((void*)puVar3);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01650620();
      pvVar2 = _pthread_getspecific((void*)puVar3);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_016670b0();
      pvVar2 = _pthread_getspecific((void*)puVar3);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0124df10();
      if (local_48 == '\0') {
        if (local_50 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_48 = '\0';
      }
      FUN_00d235a0();
      if (local_50 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_a8 != '\0') && (local_b0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_98 != '\0') && (local_a0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_88 != '\0') && (local_90 != 0)) {
        FUN_00d50b20();
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(local_80 + 0xc));
  }
  FUN_00277f20();
  FUN_00d50b20();
LAB_002623b4:
  *this_ptr = puVar1;
  *(void*)(this_ptr + 1) = 1;
  return this_ptr;
}

