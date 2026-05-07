// Function: FUN_00cb1fa0
// Address: 00cb1fa0
// Size: 597 bytes
// Class: Unknown

void FUN_00cb1fa0(void)

{
  int64_t *plVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int64_t *plVar5;
  int64_t *arg1;
  int64_t this_ptr;
  float fVar6;
  uint32_t local_3c;
  uint32_t local_38;
  uint32_t local_34;
  
  if (*(int64_t *)(this_ptr + 0x30) != 0) {
    *(int *)(this_ptr + 0x138) = *(int *)(this_ptr + 0x138) + 1;
    plVar5 = (int64_t *)*arg1;
    if (plVar5 != (int64_t *)0x0) {
      FUN_00d50b00();
      (**(code **)(*plVar5 + 0x18))(0);
      if (this_ptr != 0) {
        FUN_00d50b20();
      }
    }
    local_34 = 0;
    local_3c = g_02394254;
    local_38 = 0;
    while ((*(int64_t *)(this_ptr + 0x30) != 0 && (iVar2 = FUN_00c8d620(), iVar2 != 0))) {
      if ((*(int64_t *)(this_ptr + 0x30) != 0) &&
         (FUN_00d50b00(), *(int64_t *)(this_ptr + 0x30) != 0)) {
        *(void*)(this_ptr + 0x30) = 0;
        FUN_00d50b20();
      }
      iVar2 = FUN_00c8d620();
      iVar3 = FUN_00c8d620();
      local_38 = local_38 + iVar2;
      if (iVar3 < 1) {
        iVar3 = 0;
      }
      iVar2 = -1;
      while (iVar2 != iVar3 + -1) {
        iVar2 = iVar2 + 1;
        do {
          plVar5 = (int64_t *)FUN_00c8df10();
        } while (plVar5 == (int64_t *)0x0);
        if (*arg1 != 0) {
          if (*(int64_t *)(this_ptr + 0x30) == 0) {
            iVar4 = 0;
          }
          else {
            iVar4 = FUN_00c8d620();
          }
          fVar6 = (float)local_34 / (float)(iVar4 + local_38);
          if (local_3c <= fVar6) {
            plVar1 = (int64_t *)*arg1;
            FUN_00d50b00();
            (**(code **)(*plVar1 + 0x18))(fVar6);
            if (this_ptr != 0) {
              FUN_00d50b20();
            }
            local_3c = fVar6 + g_02394254;
          }
          local_34 = local_34 + 1;
        }
        (**(code **)(*plVar5 + 0x1a0))();
      }
      FUN_00d50b20();
    }
    plVar5 = (int64_t *)*arg1;
    if (plVar5 != (int64_t *)0x0) {
      FUN_00d50b00();
      (**(code **)(*plVar5 + 0x18))(g_02390124);
      if (this_ptr != 0) {
        FUN_00d50b20();
      }
    }
    *(int *)(this_ptr + 0x138) = *(int *)(this_ptr + 0x138) + -1;
  }
  return;
}

