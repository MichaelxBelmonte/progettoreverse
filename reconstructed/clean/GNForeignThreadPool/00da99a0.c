// Function: FUN_00da99a0
// Address: 00da99a0
// Size: 1481 bytes
// Class: GNForeignThreadPool
// === GNForeignThreadPool properties ===
//   GNThreadPriorityGroup _priority
//                   _threadPool
//                   _allocCount
//                   _allocLock
//                   _allocThread
//                   _indexHint


void* FUN_00da99a0(void)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  void*puVar5;
  void*puVar6;
  void*puVar7;
  void*puVar8;
  int64_t *arg1;
  void*this_ptr;
  void*puVar9;
  int iVar10;
  void*puVar11;
  bool bVar12;
  void*local_38;
  
  puVar5 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar5 = &g_02572358;
  (*g_02572370)();
  local_38 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *local_38 = &g_025795a8;
  pcVar1 = g_025795c0;
  (*g_025795c0)();
  puVar6 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar6 = &g_025795a8;
  (*pcVar1)();
  puVar7 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar7 = &g_025795a8;
  (*pcVar1)();
  iVar3 = FUN_00d8c7a0();
  if (0 < iVar3) {
    iVar10 = 0;
    puVar9 = puVar7;
    puVar11 = puVar6;
    do {
      FUN_00d8cbc0();
      FUN_00d8ea20();
      cVar2 = (**(code **)(*arg1 + 0x3a0))();
      if (cVar2 == '\0') {
        puVar8 = (void*)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar8 = &g_025795a8;
        (*pcVar1)();
        if (puVar8 == puVar11) {
          FUN_00d50b20();
          puVar8 = puVar11;
        }
        else if (puVar11 != (void*)0x0) {
          FUN_00d50b20();
        }
LAB_00da9c30:
        FUN_00d8ea20();
        cVar2 = (**(code **)(*arg1 + 0x3b0))();
        if (cVar2 == '\0') {
          puVar7 = (void*)FUN_00e8fc40();
          FUN_00d4ff40();
          *puVar7 = &g_025795a8;
          (*pcVar1)();
          if (puVar7 == puVar9) {
            FUN_00d50b20();
            puVar7 = puVar9;
          }
          else if (puVar9 != (void*)0x0) {
            FUN_00d50b20();
          }
        }
        else {
          cVar2 = (**(code **)(*arg1 + 0x3b8))();
          puVar7 = puVar9;
          if (cVar2 != '\0') {
            iVar4 = FUN_00d8c7a0();
            if (iVar4 != 0) {
              FUN_00d21140();
            }
            FUN_00d21140();
            puVar7 = (void*)FUN_00e8fc40();
            FUN_00d4ff40();
            *puVar7 = &g_025795a8;
            (*pcVar1)();
            if (puVar7 == local_38) {
              FUN_00d50b20();
            }
            else {
              bVar12 = local_38 != (void*)0x0;
              local_38 = puVar7;
              if (bVar12) {
                FUN_00d50b20();
              }
            }
            puVar6 = (void*)FUN_00e8fc40();
            FUN_00d4ff40();
            *puVar6 = &g_025795a8;
            (*pcVar1)();
            if (puVar6 == puVar8) {
              FUN_00d50b20();
              puVar6 = puVar8;
            }
            else if (puVar8 != (void*)0x0) {
              FUN_00d50b20();
            }
            puVar7 = (void*)FUN_00e8fc40();
            FUN_00d4ff40();
            *puVar7 = &g_025795a8;
            (*pcVar1)();
            if (puVar7 == puVar9) {
              FUN_00d50b20();
              puVar7 = puVar9;
            }
            else if (puVar9 != (void*)0x0) {
              FUN_00d50b20();
            }
            goto LAB_00da9aa1;
          }
        }
        FUN_00d8ea20();
        puVar6 = puVar8;
      }
      else {
        cVar2 = (**(code **)(*arg1 + 0x3a8))();
        puVar8 = puVar11;
        if (cVar2 == '\0') goto LAB_00da9c30;
        iVar4 = FUN_00d8c7a0();
        if (iVar4 != 0) {
          FUN_00d21140();
        }
        puVar7 = (void*)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar7 = &g_025795a8;
        (*pcVar1)();
        if (puVar7 == local_38) {
          FUN_00d50b20();
        }
        else {
          bVar12 = local_38 != (void*)0x0;
          local_38 = puVar7;
          if (bVar12) {
            FUN_00d50b20();
          }
        }
        puVar6 = (void*)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar6 = &g_025795a8;
        (*pcVar1)();
        if (puVar6 == puVar11) {
          FUN_00d50b20();
          puVar6 = puVar11;
        }
        else if (puVar11 != (void*)0x0) {
          FUN_00d50b20();
        }
        puVar7 = (void*)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar7 = &g_025795a8;
        (*pcVar1)();
        if (puVar7 == puVar9) {
          FUN_00d50b20();
          puVar7 = puVar9;
        }
        else if (puVar9 != (void*)0x0) {
          FUN_00d50b20();
        }
      }
LAB_00da9aa1:
      iVar10 = iVar10 + 1;
      puVar9 = puVar7;
      puVar11 = puVar6;
    } while (iVar3 != iVar10);
  }
  iVar3 = FUN_00d8c7a0();
  if (iVar3 != 0) {
    FUN_00d21140();
  }
  *this_ptr = puVar5;
  *(void*)(this_ptr + 1) = 1;
  if (puVar7 != (void*)0x0) {
    FUN_00d50b20();
  }
  if (puVar6 != (void*)0x0) {
    FUN_00d50b20();
  }
  if (local_38 != (void*)0x0) {
    FUN_00d50b20();
  }
  return this_ptr;
}

