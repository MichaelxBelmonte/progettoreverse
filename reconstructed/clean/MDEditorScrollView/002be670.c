// Function: FUN_002be670
// Address: 002be670
// Size: 516 bytes
// Class: MDEditorScrollView
// === MDEditorScrollView properties ===
//   MUScaleRulerViewDisplayMode _scaleRulerViewDisplayMode


void FUN_002be670(void)

{
  int64_t *plVar1;
  char cVar2;
  char *pcVar3;
  int64_t *this_ptr;
  int64_t *plVar4;
  int64_t local_60;
  int64_t *local_58;
  int64_t *local_48;
  char local_40 [8];
  char local_38 [8];
  
  if (this_ptr[0x17] == 0) {
    return;
  }
  FUN_01e40eb0();
  if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (local_48 == (int64_t *)0x0) {
    return;
  }
  plVar4 = this_ptr + 0x17;
  plVar1 = (int64_t *)*plVar4;
  FUN_000f5df0();
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x360))();
    cVar2 = FUN_00e85ea0();
    if (cVar2 != '\0') goto LAB_002be6fa;
  }
  plVar4 = &g_02802688;
LAB_002be6fa:
  local_58 = (int64_t *)*plVar4;
  if (local_58 != (int64_t *)0x0) {
    FUN_00d50b00();
    FUN_00d50b00();
    local_38[0] = '\0';
    do {
      (**(code **)(*this_ptr + 0x370))();
      if (local_48 == this_ptr) {
        if (((local_38[0] == '\0') && (local_48 != (int64_t *)0x0)) && (local_40[0] != '\0'))
        goto LAB_002be787;
      }
      else {
        this_ptr = local_48;
        if (local_40[0] == '\0') {
          if (local_38[0] == '\0') {
            pcVar3 = local_38;
          }
          else {
            FUN_00d50b20();
            pcVar3 = local_38;
          }
        }
        else {
          if (local_38[0] != '\0') {
            FUN_00d50b20();
          }
LAB_002be787:
          local_38[0] = '\x01';
          pcVar3 = local_40;
        }
        *pcVar3 = '\0';
      }
      if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00082eb0();
      plVar4 = &g_02802688;
      if (this_ptr != (int64_t *)0x0) {
        (**(code **)(*this_ptr + 0x360))();
        cVar2 = FUN_00e85ea0();
        plVar4 = &local_60;
        if (cVar2 == '\0') {
          plVar4 = &g_02802688;
        }
      }
      if (*plVar4 != 0) {
        if ((local_38[0] == '\0') && (this_ptr != (int64_t *)0x0)) {
          FUN_00d50b00();
        }
        break;
      }
    } while (this_ptr != (int64_t *)0x0);
    FUN_00d50b20();
    if (this_ptr != (int64_t *)0x0) {
      FUN_00791130();
      (**(code **)(*local_58 + 0x918))();
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  return;
}

