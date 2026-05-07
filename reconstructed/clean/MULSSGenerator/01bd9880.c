// Function: FUN_01bd9880
// Address: 01bd9880
// Size: 856 bytes
// Class: MULSSGenerator

uint32_t FUN_01bd9880(void* param_1,byte param_2)

{
  int64_t lVar1;
  int64_t lVar2;
  uint32_t uVar3;
  void *pvVar4;
  int64_t this_ptr;
  int iVar5;
  int64_t local_b8;
  char local_b0;
  int64_t local_68;
  char local_60;
  
  FUN_01bd8b20();
  if (local_60 == '\0') {
    if (local_68 != 0) {
      FUN_00d50b00();
      goto LAB_01bd98cb;
    }
  }
  else if (local_68 != 0) {
LAB_01bd98cb:
    FUN_01ca6970();
    if ((local_60 == '\0') && (local_68 != 0)) {
      FUN_00d50b00();
    }
    FUN_01ca8220();
    lVar1 = g_027e5c38;
    if (g_027e5c38 != 0) {
      FUN_00d50b00();
    }
    uVar3 = FUN_00d23d70();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if ((local_b0 != '\0') && (local_b8 != 0)) {
      FUN_00d50b20();
    }
    lVar2 = g_027e5c38;
    if ((param_2 & (byte)uVar3) == 1) {
      if (g_027e5c38 != 0) {
        FUN_00d50b00();
      }
      FUN_01cacbe0();
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      if (*(int64_t *)(this_ptr + 0x98) == 0) {
        pvVar4 = _pthread_getspecific(param_1);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_017f4540();
      }
      else {
        FUN_01bd2e70();
        if (lVar1 != 0) {
          FUN_00d50b00();
          if (0 < *(int *)(lVar1 + 0xc)) {
            iVar5 = 0;
            do {
              pvVar4 = _pthread_getspecific(param_1);
              if (pvVar4 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_017f4540();
              iVar5 = iVar5 + 1;
            } while (iVar5 < *(int *)(lVar1 + 0xc));
          }
          FUN_01be3b70();
          FUN_00d50b20();
        }
        FUN_01bd7b90();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
    }
    if (local_68 != 0) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
    return uVar3;
  }
  return 0;
}

