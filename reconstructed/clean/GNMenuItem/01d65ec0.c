// Function: FUN_01d65ec0
// Address: 01d65ec0
// Size: 516 bytes
// Class: GNMenuItem
// === GNMenuItem properties ===
//                   _isKeyboardNavigationEnabled
//                   _lastModalResult
//                   _additionalResourceDirectories
//                   _preferencesDisplayGroup


void FUN_01d65ec0(uint64_t param_1)

{
  int iVar1;
  int64_t *plVar2;
  char cVar3;
  int64_t lVar4;
  int64_t arg1;
  int64_t *this_ptr;
  int64_t local_40;
  char local_38;
  
  if (*(int64_t *)(arg1 + 0x20) == 0) {
LAB_01d66058:
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
  }
  else {
    FUN_00d50b00();
    FUN_00d50b20();
    lVar4 = *(int64_t *)(arg1 + 0x50);
    if (lVar4 == 0) {
      plVar2 = *(int64_t **)(arg1 + 0x58);
      if (plVar2 != (int64_t *)0x0) {
        lVar4 = *(int64_t *)(arg1 + 0x20);
        if (lVar4 != 0) {
          FUN_00d50b00();
        }
        FUN_01caeba0();
        if (local_38 == '\0') {
          if (local_40 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        cVar3 = (**(code **)(*plVar2 + 0x3b8))(param_1,0);
        if (local_40 != 0) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if (lVar4 != 0) {
          FUN_00d50b20();
        }
        if (cVar3 != '\0') {
          *(void*)(this_ptr + 1) = 0;
          lVar4 = *(int64_t *)(arg1 + 0x58);
          if (lVar4 != 0) goto LAB_01d65f02;
          goto LAB_01d65f0a;
        }
      }
      lVar4 = local_40;
      if ((*(int64_t *)(arg1 + 0x38) == 0) || (FUN_01d62b90(), local_40 == 0)) {
        FUN_01f27fe0();
        iVar1 = *(int *)(local_40 + 0xe0);
        if (local_38 != '\0') {
          FUN_00d50b20();
        }
        if (iVar1 != 0) goto LAB_01d66058;
        FUN_01f27fe0();
        *(void*)(this_ptr + 1) = 0;
        if (local_38 == '\0') {
          if (local_40 != 0) {
            FUN_00d50b00();
            *this_ptr = local_40;
            *(void*)(this_ptr + 1) = 1;
            return;
          }
          lVar4 = 0;
        }
      }
      else if (local_38 == '\0') {
        FUN_00d50b00();
      }
    }
    else {
      *(void*)(this_ptr + 1) = 0;
LAB_01d65f02:
      FUN_00d50b00();
    }
LAB_01d65f0a:
    *this_ptr = lVar4;
    *(void*)(this_ptr + 1) = 1;
  }
  return;
}

