// Function: FUN_003bc3e0
// Address: 003bc3e0
// Size: 519 bytes
// Class: MDMetaWindowController

void* FUN_003bc3e0(void)

{
  int iVar1;
  void*puVar2;
  void*this_ptr;
  int iVar3;
  int64_t local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  int64_t local_40;
  char local_38;
  
  puVar2 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar2 = &g_02572358;
  (*g_02572370)();
  FUN_003ba530();
  if (local_68 != 0) {
    FUN_003ba530();
    FUN_003b7ce0();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    if (local_60 != '\0') {
      FUN_00d50b20();
    }
    if (local_40 != 0) {
      FUN_003ba530();
      FUN_003b7ce0();
      FUN_004b5af0();
      if ((local_60 == '\0') && (local_68 != 0)) {
        FUN_00d50b00();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if ((local_70 != '\0') && (local_78 != 0)) {
        FUN_00d50b20();
      }
      if (local_68 != 0) {
        if (0 < *(int *)(local_68 + 0xc)) {
          iVar3 = 0;
          do {
            iVar1 = FUN_003b7980();
            if (iVar1 != 0) {
              FUN_00d21140();
            }
            iVar3 = iVar3 + 1;
          } while (iVar3 < *(int *)(local_68 + 0xc));
        }
        FUN_00274d30();
        FUN_00d50b20();
      }
    }
  }
  *this_ptr = puVar2;
  *(void*)(this_ptr + 1) = 1;
  return this_ptr;
}

