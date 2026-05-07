// Function: FUN_00e8bda0
// Address: 00e8bda0
// Size: 1094 bytes
// Class: GNModelObject
// String references:
//   "GNModelObject"

void FUN_00e8bda0(void* param_1)

{
  int64_t *plVar1;
  char cVar2;
  int iVar3;
  void*puVar4;
  int64_t lVar5;
  int64_t **pplVar6;
  int64_t *arg1;
  int64_t *this_ptr;
  uint32_t extraout_XMM0_Da;
  int64_t *local_70;
  int local_48;
  
  if (this_ptr[6] == 0) {
    puVar4 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    param_1 = 0x2572358;
    *puVar4 = &g_02572358;
    (*g_02572370)();
    FUN_00d50b00();
    FUN_00d22760();
    this_ptr[6] = (int64_t)puVar4;
    FUN_00d50b20();
  }
  FUN_00d21140();
  if ((((int64_t *)arg1[3] == this_ptr) && ((int64_t *)arg1[4] != (int64_t *)0x0)) &&
     (cVar2 = (**(code **)(*(int64_t *)arg1[4] + 0x370))(), cVar2 != '\0')) {
    (**(code **)(*this_ptr + 0x210))(extraout_XMM0_Da,arg1[4]);
    if (arg1 != (int64_t *)0x0) {
      cVar2 = FUN_00d77de0();
      if (cVar2 == '\0') {
        if ((g_028a8d98 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
          g_028a8ce8 = FUN_00d4fe50();
          g_028a8cd0 = "GNModelObject";
          g_028a8cd8 = 0x38;
          param_1 = 0xe8b770;
          g_028a8ce0 = FUN_00e8b770;
          g_028a8cf0 = 0;
          ram_00000000028a8cf8 = 0;
          g_028a8d00 = 0;
          ram_00000000028a8d08 = 0;
          g_028a8d10 = 0;
          ram_00000000028a8d18 = 0;
          g_028a8d20 = 0;
          ram_00000000028a8d28 = 0;
          g_028a8d30 = 0;
          ram_00000000028a8d38 = 0;
          g_028a8d40 = 0;
          ram_00000000028a8d48 = 0;
          g_028a8d50 = 0;
          ram_00000000028a8d58 = 0;
          g_028a8d60 = 0;
          ram_00000000028a8d68 = 0;
          g_028a8d70 = 0;
          ram_00000000028a8d78 = 0;
          g_028a8d80 = 0;
          ram_00000000028a8d88 = 0;
          g_028a8d90 = 0;
          ___cxa_guard_release();
        }
        (**(code **)(*arg1 + 0x360))();
        cVar2 = FUN_00e85ea0();
        if (cVar2 == '\0') {
          arg1 = g_02802688;
        }
        if (arg1 != (int64_t *)0x0) {
          _pthread_getspecific(param_1);
          FUN_00e8bda0();
        }
      }
      else {
        local_48 = -1;
        while( true ) {
          lVar5 = (int64_t)local_48;
          local_48 = local_48 + 1;
          if (*(int *)((int64_t)arg1 + 0xc) <= local_48) break;
          plVar1 = *(int64_t **)(arg1[2] + 8 + lVar5 * 8);
          local_70 = plVar1;
          if ((g_028a8d98 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
            g_028a8ce8 = FUN_00d4fe50();
            g_028a8cd0 = "GNModelObject";
            g_028a8cd8 = 0x38;
            g_028a8ce0 = FUN_00e8b770;
            g_028a8cf0 = 0;
            ram_00000000028a8cf8 = 0;
            g_028a8d00 = 0;
            ram_00000000028a8d08 = 0;
            g_028a8d10 = 0;
            ram_00000000028a8d18 = 0;
            g_028a8d20 = 0;
            ram_00000000028a8d28 = 0;
            g_028a8d30 = 0;
            ram_00000000028a8d38 = 0;
            g_028a8d40 = 0;
            ram_00000000028a8d48 = 0;
            g_028a8d50 = 0;
            ram_00000000028a8d58 = 0;
            g_028a8d60 = 0;
            ram_00000000028a8d68 = 0;
            g_028a8d70 = 0;
            ram_00000000028a8d78 = 0;
            g_028a8d80 = 0;
            ram_00000000028a8d88 = 0;
            g_028a8d90 = 0;
            ___cxa_guard_release();
          }
          pplVar6 = &g_02802688;
          if (plVar1 != (int64_t *)0x0) {
            (**(code **)(*plVar1 + 0x360))();
            cVar2 = FUN_00e85ea0();
            pplVar6 = &local_70;
            if (cVar2 == '\0') {
              pplVar6 = &g_02802688;
            }
          }
          if (*pplVar6 != (int64_t *)0x0) {
            _pthread_getspecific((void*)pplVar6);
            FUN_00e8bda0();
          }
        }
        FUN_00e8cae0();
      }
    }
  }
  else {
    (**(code **)(*this_ptr + 0x298))();
  }
  return;
}

