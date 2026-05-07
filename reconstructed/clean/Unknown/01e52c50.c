// Function: FUN_01e52c50
// Address: 01e52c50
// Size: 1214 bytes
// Class: Unknown
// String references:
//   "%@: window not connected."
//   "%@ not found."

void FUN_01e52c50(uint64_t param_1,int64_t *param_2)

{
  int64_t *plVar1;
  int64_t lVar2;
  bool bVar3;
  int64_t lVar4;
  char cVar5;
  int64_t *plVar6;
  void*puVar7;
  int64_t *arg1;
  int64_t *this_ptr;
  void*local_58;
  
  if (*param_2 == 0) {
    plVar6 = (int64_t *)FUN_00e8fc40();
    FUN_00022d50();
    (**(code **)(*plVar6 + 0x18))();
    plVar1 = (int64_t *)*param_2;
    if (plVar1 == plVar6) {
      if ((char)param_2[1] != '\0') {
        FUN_00d50b20();
        goto LAB_01e52cc7;
      }
    }
    else {
      *param_2 = (int64_t)plVar6;
      if (((char)param_2[1] != '\0') && (plVar1 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    *(void*)(param_2 + 1) = 1;
  }
LAB_01e52cc7:
  local_58 = g_027f3818;
  if (g_027f3818 != (void*)0x0) {
    FUN_00d50b00();
  }
  cVar5 = FUN_00c9ff50();
  if (local_58 != (void*)0x0) {
    FUN_00d50b20();
  }
  if (cVar5 == '\0') {
    if (this_ptr != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    local_58 = g_027f3818;
    if (g_027f3818 != (void*)0x0) {
      FUN_00d50b00();
    }
    FUN_00ca0840();
    if (local_58 != (void*)0x0) {
      FUN_00d50b20();
    }
    if (this_ptr != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  bVar3 = false;
  if (this_ptr[2] == 0) {
    puVar7 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar7 = &g_02572358;
    (*g_02572370)();
    cVar5 = FUN_01e2af10();
    lVar4 = g_027fe468;
    if (cVar5 == '\0') {
      if (g_027fe468 != 0) {
        FUN_00d50b00();
      }
      lVar2 = *arg1;
      bVar3 = true;
      if (lVar2 != 0) {
        FUN_00d50b00();
      }
      FUN_00cc7b40();
      local_58 = &g_024c5048;
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
    }
    if (this_ptr[3] == 0) {
      FUN_00d50b00();
      FUN_01e30780();
      if (local_58 == (void*)0x0) {
        bVar3 = true;
        local_58 = (void*)0x0;
      }
      else if (bVar3) {
        bVar3 = false;
      }
      else {
        FUN_00d50b00();
        bVar3 = false;
      }
      if (this_ptr != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      lVar4 = g_027fe468;
      if (bVar3) {
        if (g_027fe468 != 0) {
          FUN_00d50b00();
        }
        lVar2 = *arg1;
        if (lVar2 != 0) {
          FUN_00d50b00();
        }
        FUN_00cc7b40();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        if (lVar4 != 0) {
          FUN_00d50b20();
        }
      }
      puVar7 = (void*)this_ptr[3];
      if (puVar7 != local_58) {
        if (local_58 != (void*)0x0) {
          FUN_00d50b00();
        }
        this_ptr[3] = (int64_t)local_58;
        if (puVar7 != (void*)0x0) {
          FUN_00d50b20();
        }
      }
    }
    else {
      local_58 = (void*)0x0;
    }
    FUN_01e511c0();
    FUN_01e51330();
    (**(code **)(*this_ptr + 0x518))();
    FUN_00d50b20();
    if (local_58 != (void*)0x0) {
      FUN_00d50b20();
    }
  }
  return;
}

