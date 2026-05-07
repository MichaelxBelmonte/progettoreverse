// Function: FUN_000b7160
// Address: 000b7160
// Size: 702 bytes
// Class: MDAsyncProcess

void FUN_000b7160(void)

{
  void*puVar1;
  int64_t *plVar2;
  uint8_t uVar3;
  uint uVar4;
  void*puVar5;
  int64_t *this_ptr;
  int iVar6;
  int64_t *local_40;
  char local_38;
  
  FUN_01e5ca90();
  if ((local_38 == '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  puVar5 = (void*)FUN_00e8fc40();
  FUN_0006daf0();
  *puVar5 = &g_024f1490;
  puVar5[2] = &g_024f1e80;
  *(void*)(puVar5 + 0x27) = 0;
  *(void*)((int64_t)puVar5 + 0x13b) = 0;
  puVar5[0x28] = 0;
  puVar5[0x29] = 0;
  puVar5[0x2a] = 0;
  puVar5[0x2b] = 0;
  puVar5[0x2c] = 0;
  puVar5[0x2d] = 0;
  puVar5[0x2e] = 0;
  puVar5[0x2f] = 0;
  puVar5[0x30] = 0;
  (*g_024f14a8)();
  puVar1 = (void*)this_ptr[2];
  if (puVar1 == puVar5) {
    FUN_00d50b20();
  }
  else {
    this_ptr[2] = (int64_t)puVar5;
    if (puVar1 != (void*)0x0) {
      FUN_00d50b20();
    }
  }
  plVar2 = (int64_t *)this_ptr[2];
  (**(code **)(*local_40 + 0x4d8))();
  (**(code **)(*plVar2 + 0x4d0))();
  FUN_01e59080();
  FUN_01e4cf40();
  plVar2 = (int64_t *)this_ptr[2];
  uVar3 = FUN_01e5c720();
  FUN_01e5c7d0();
  (**(code **)(*plVar2 + 0x558))(uVar3);
  plVar2 = (int64_t *)this_ptr[2];
  (**(code **)(*local_40 + 0x578))();
  (**(code **)(*plVar2 + 0x570))();
  (**(code **)(*this_ptr + 0x670))();
  uVar4 = (**(code **)(*local_40 + 0x560))();
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((uVar4 & 0x10) == 0) {
    (**(code **)(*this_ptr + 0x670))();
    FUN_01e59910();
    (**(code **)(*local_40 + 0x9b8))();
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  (**(code **)(*local_40 + 0x4a0))();
  iVar6 = *(int *)((int64_t)local_40 + 0xc);
  if (local_38 != '\0') {
    FUN_00d50b20();
  }
  if (0 < iVar6) {
    do {
      (**(code **)(*local_40 + 0x4a0))();
      plVar2 = *(int64_t **)local_40[2];
      if (plVar2 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      (**(code **)(*plVar2 + 0x478))();
      (**(code **)(*(int64_t *)this_ptr[2] + 0x450))();
      FUN_00d50b20();
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  FUN_00d50b20();
  return;
}

