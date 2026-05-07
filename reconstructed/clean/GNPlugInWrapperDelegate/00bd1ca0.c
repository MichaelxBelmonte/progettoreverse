// Function: FUN_00bd1ca0
// Address: 00bd1ca0
// Size: 619 bytes
// Class: GNPlugInWrapperDelegate

void FUN_00bd1ca0(uint64_t param_1)

{
  int64_t lVar1;
  bool bVar2;
  int iVar3;
  int64_t lVar4;
  int64_t arg1;
  int64_t *this_ptr;
  int64_t local_438;
  char local_430;
  
  lVar1 = *(int64_t *)PTR____stack_chk_guard_024a9898;
  if (g_02802500 == '\0') {
    iVar3 = (**(code **)(**(int64_t **)(arg1 + 0x68) + 0x70))(param_1,0x400);
    if (iVar3 < 1) {
      iVar3 = (**(code **)(**(int64_t **)(arg1 + 0x68) + 0x78))();
      if (0 < iVar3) {
        FUN_00d920f0();
        lVar4 = g_028a5740;
        if (g_028a5740 != local_438) {
          if (local_430 == '\0') {
            if (local_438 == 0) {
              lVar4 = 0;
            }
            else {
              FUN_00d50b00();
              lVar4 = local_438;
            }
          }
          else {
            local_430 = '\0';
            lVar4 = local_438;
          }
          bVar2 = g_028a5740 != 0;
          g_028a5740 = lVar4;
          if (bVar2) {
            FUN_00d50b20();
            lVar4 = local_438;
          }
        }
        if ((lVar4 != 0) && (g_028a5748 == '\0')) {
          g_028a5748 = '\x01';
          FUN_00e8cb90();
          lVar4 = local_438;
        }
        if ((local_430 != '\0') && (lVar4 != 0)) {
          FUN_00d50b20();
        }
      }
    }
    else {
      FUN_00d93730();
      lVar4 = g_028a5740;
      if (g_028a5740 != local_438) {
        if (local_430 == '\0') {
          if (local_438 == 0) {
            lVar4 = 0;
          }
          else {
            FUN_00d50b00();
            lVar4 = local_438;
          }
        }
        else {
          local_430 = '\0';
          lVar4 = local_438;
        }
        bVar2 = g_028a5740 != 0;
        g_028a5740 = lVar4;
        if (bVar2) {
          FUN_00d50b20();
          lVar4 = local_438;
        }
      }
      if ((lVar4 != 0) && (g_028a5748 == '\0')) {
        g_028a5748 = '\x01';
        FUN_00e8cb90();
        lVar4 = local_438;
      }
      if ((local_430 != '\0') && (lVar4 != 0)) {
        FUN_00d50b20();
      }
    }
    g_02802500 = '\x01';
  }
  *(void*)(this_ptr + 1) = 0;
  lVar4 = g_028a5740;
  if (g_028a5740 != 0) {
    FUN_00d50b00();
  }
  *this_ptr = lVar4;
  *(void*)(this_ptr + 1) = 1;
  if (*(int64_t *)PTR____stack_chk_guard_024a9898 != lVar1) {
                        ___stack_chk_fail();
  }
  return;
}

