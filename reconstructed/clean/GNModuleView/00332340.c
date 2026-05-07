// Function: FUN_00332340
// Address: 00332340
// Size: 560 bytes
// Class: GNModuleView
// === GNModuleView properties ===
//                   _uiName
//                   _trimsLoadedView
//                   _trimMargins
//                   _requiresObjectsForLoadingUI
//                   _takesFrameSizeFromUI
//                   _loadedFilesOwner
//                   _loadedWindowMinSize


int64_t * FUN_00332340(void)

{
  bool bVar1;
  void*puVar2;
  void *pvVar3;
  void*puVar4;
  int64_t *this_ptr;
  int iVar5;
  int64_t local_80;
  char local_78;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  char local_40;
  
  puVar2 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  puVar4 = &g_02572358;
  *puVar2 = &g_02572358;
  (*g_02572370)();
  FUN_003322a0();
  if (local_78 == '\0') {
    if (local_80 == 0) goto LAB_00332562;
    FUN_00d50b00();
  }
  else if (local_80 == 0) {
LAB_00332562:
    bVar1 = true;
    iVar5 = *(int *)((int64_t)puVar2 + 0xc);
    goto joined_r0x00332568;
  }
  if (0 < *(int *)(local_80 + 0xc)) {
    iVar5 = 0;
    do {
      pvVar3 = _pthread_getspecific((void*)puVar4);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01274b60();
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if (local_48 != 0) {
        pvVar3 = _pthread_getspecific((void*)puVar4);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01274b60();
        if (local_50 == '\0') {
          if (local_58 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_50 = '\0';
        }
        local_48 = local_58;
        local_40 = '\0';
        FUN_00d235a0();
        if (local_58 != 0) {
          FUN_00d50b20();
        }
        if ((local_50 != '\0') && (local_58 != 0)) {
          FUN_00d50b20();
        }
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(local_80 + 0xc));
  }
  FUN_001159b0();
  bVar1 = false;
  iVar5 = *(int *)((int64_t)puVar2 + 0xc);
joined_r0x00332568:
  if (iVar5 == 0) {
    *this_ptr = local_80;
    *(void*)(this_ptr + 1) = 1;
    FUN_00d50b20();
  }
  else {
    *this_ptr = (int64_t)puVar2;
    *(void*)(this_ptr + 1) = 1;
    if (!bVar1) {
      FUN_00d50b20();
    }
  }
  return this_ptr;
}

