// Function: FUN_0043df50
// Address: 0043df50
// Size: 601 bytes
// Class: MDMetaWindowController

void FUN_0043df50(uint32_t param_1)

{
  bool bVar1;
  int64_t lVar2;
  int64_t *plVar3;
  int64_t *plVar4;
  void*arg1;
  int64_t *this_ptr;
  int64_t *local_30;
  char local_28;
  
  (**(code **)(*this_ptr + 0x640))();
  if ((local_28 == '\0') && (local_30 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  if ((char)this_ptr[0x27] != '\0') {
    FUN_01e3f820();
    (**(code **)(*local_30 + 0x3f0))(6,0x2e,1,1);
  }
  if (*(char *)((int64_t)this_ptr + 0x13a) == '\0') goto LAB_0043e186;
  if ((g_028085a0 == (int64_t *)0x0) || (g_028085a9 == '\0')) {
    FUN_00e8cb50();
    lVar2 = g_027058f0;
    if (g_028085a0 == (int64_t *)0x0) {
      if (g_027058f0 != 0) {
        FUN_00d50b00();
      }
      FUN_01d51a40();
      plVar3 = g_028085a0;
      if (g_028085a0 != local_30) {
        if (local_28 == '\0') {
          if (local_30 == (int64_t *)0x0) {
            plVar3 = (int64_t *)0x0;
          }
          else {
            FUN_00d50b00();
            plVar3 = local_30;
          }
        }
        else {
          local_28 = '\0';
          plVar3 = local_30;
        }
        bVar1 = g_028085a0 != (int64_t *)0x0;
        g_028085a0 = plVar3;
        if (bVar1) {
          FUN_00d50b20();
          plVar3 = local_30;
        }
      }
      if ((plVar3 != (int64_t *)0x0) && (g_028085a8 == '\0')) {
        g_028085a8 = '\x01';
        FUN_00e8cb90();
        plVar3 = local_30;
      }
      if ((local_28 != '\0') && (plVar3 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      g_028085a9 = '\x01';
      FUN_00e8cb70();
    }
    else {
      g_028085a9 = '\x01';
      FUN_00e8cb70();
    }
    plVar3 = (int64_t *)*arg1;
    if (g_028085a0 != (int64_t *)0x0) goto LAB_0043e14e;
    plVar4 = (int64_t *)0x0;
  }
  else {
    plVar3 = (int64_t *)*arg1;
LAB_0043e14e:
    plVar4 = g_028085a0;
    FUN_00d50b00();
  }
  (**(code **)(*plVar3 + 0x400))(param_1);
  if (plVar4 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
LAB_0043e186:
  if (local_30 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}

