// Function: FUN_00090b20
// Address: 00090b20
// Size: 681 bytes
// Class: MDMetaWindowController

void FUN_00090b20(void)

{
  int64_t lVar1;
  char cVar2;
  int64_t this_ptr;
  int64_t local_48;
  char local_40;
  int64_t *local_38;
  char local_30;
  
  FUN_01e40eb0();
  FUN_01e40eb0();
  lVar1 = *(int64_t *)(this_ptr + 0x88);
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (local_48 == lVar1) {
    (**(code **)(**(int64_t **)(this_ptr + 0x88) + 0x960))();
    if (local_48 == 0) {
      cVar2 = '\0';
    }
    else {
      (**(code **)(**(int64_t **)(this_ptr + 0x88) + 0x960))();
      lVar1 = g_026fce10;
      if (g_026fce10 != 0) {
        FUN_00d50b00();
      }
      cVar2 = (**(code **)(*local_38 + 0x50))();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    lVar1 = g_026d8940;
    if (cVar2 != '\0') {
      if (g_026d8940 != 0) {
        FUN_00d50b00();
      }
      FUN_01e125e0();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
    }
  }
  else {
    FUN_01e40eb0();
    FUN_01e40eb0();
    lVar1 = *(int64_t *)(this_ptr + 0x98);
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (local_48 == lVar1) {
      (**(code **)(**(int64_t **)(this_ptr + 0x98) + 0x960))();
      if (local_48 == 0) {
        cVar2 = '\0';
      }
      else {
        (**(code **)(**(int64_t **)(this_ptr + 0x98) + 0x960))();
        lVar1 = g_026fce10;
        if (g_026fce10 != 0) {
          FUN_00d50b00();
        }
        cVar2 = (**(code **)(*local_38 + 0x50))();
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
        if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      lVar1 = g_026d8948;
      if (cVar2 != '\0') {
        if (g_026d8948 != 0) {
          FUN_00d50b00();
        }
        FUN_01e125e0();
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
      }
    }
  }
  return;
}

