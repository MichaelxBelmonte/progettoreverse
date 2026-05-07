// Function: FUN_01f13fd0
// Address: 01f13fd0
// Size: 534 bytes
// Class: GNFilePath

void FUN_01f13fd0(void)

{
  int64_t lVar1;
  int64_t *plVar2;
  void*puVar3;
  int64_t *arg1;
  int iVar4;
  int64_t local_40;
  char local_38;
  
  plVar2 = (int64_t *)FUN_00e8fc40();
  FUN_00049200();
  (**(code **)(*plVar2 + 0x18))();
  FUN_00d11ab0();
  puVar3 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar3 = &g_02572358;
  (*g_02572370)();
  lVar1 = *arg1;
  if (lVar1 != 0) {
    if (0 < *(int *)(lVar1 + 0xc)) {
      iVar4 = 0;
      do {
        (**(code **)(*plVar2 + 0x5f0))();
        if (local_38 == '\0') {
          if (local_40 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        FUN_00d21140();
        if (local_40 != 0) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < *(int *)(lVar1 + 0xc));
    }
    FUN_00083b20();
  }
  if (*(int *)((int64_t)puVar3 + 0xc) != 0) {
    FUN_01ca71c0();
  }
  FUN_00d50b20();
  FUN_00d50b20();
  return;
}

