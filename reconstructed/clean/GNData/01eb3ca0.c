// Function: FUN_01eb3ca0
// Address: 01eb3ca0
// Size: 566 bytes
// Class: GNData
// === GNData properties ===
//   double          _firstSpectrumTime
//   double          _spectraTimeDistance


int64_t * FUN_01eb3ca0(void)

{
  int iVar1;
  bool bVar2;
  void*puVar3;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t *plVar4;
  int64_t *plVar5;
  uint32_t uVar6;
  int64_t local_58;
  int64_t local_48;
  char local_40;
  
  if ((int)arg1[0x39] == 0) {
    puVar3 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar3 = &g_025683c0;
    (*g_025683d8)();
    FUN_00c92170();
    FUN_00c92160();
    local_58 = 0;
    bVar2 = false;
    plVar5 = (int64_t *)0x0;
    while( true ) {
      (**(code **)(*arg1 + 0x4a0))();
      iVar1 = *(int *)(local_48 + 0xc);
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if (iVar1 <= local_58) break;
      (**(code **)(*arg1 + 0x4a0))();
      plVar4 = *(int64_t **)(*(int64_t *)(local_48 + 0x10) + local_58 * 8);
      if (plVar5 == plVar4) {
        if ((!bVar2) && (plVar5 != (int64_t *)0x0)) {
          FUN_00d50b00();
          plVar4 = plVar5;
          goto LAB_01eb3dd6;
        }
      }
      else {
        if (plVar4 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        if ((bVar2) && (plVar5 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
LAB_01eb3dd6:
        bVar2 = true;
        plVar5 = plVar4;
      }
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      uVar6 = (**(code **)(*plVar5 + 0x930))();
      iVar1 = *(int *)(puVar3 + 3);
      FUN_00c8e340(uVar6,1);
      *(void*)(puVar3[2] + (int64_t)iVar1) = uVar6;
      local_58 = local_58 + 1;
    }
    *this_ptr = (int64_t)puVar3;
    *(void*)(this_ptr + 1) = 1;
    if ((bVar2) && (plVar5 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    FUN_00d46530();
    *(void*)(this_ptr + 1) = 0;
    if (local_40 == '\0') {
      if (local_48 != 0) {
        FUN_00d50b00();
        *this_ptr = local_48;
        *(void*)(this_ptr + 1) = 1;
        return this_ptr;
      }
      local_48 = 0;
    }
    *this_ptr = local_48;
    *(void*)(this_ptr + 1) = 1;
  }
  return this_ptr;
}

