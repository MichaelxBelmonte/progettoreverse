// Function: FUN_00c82360
// Address: 00c82360
// Size: 1195 bytes
// Class: Unknown

void FUN_00c82360(void)

{
  int64_t lVar1;
  char cVar2;
  int64_t lVar3;
  void*puVar4;
  int64_t *plVar5;
  int iVar6;
  int64_t *arg1;
  int64_t *this_ptr;
  bool bVar7;
  int64_t *local_58;
  char local_50 [8];
  int64_t local_48;
  uint64_t local_40;
  int local_38;
  
  if (*arg1 != 0) {
    FUN_00d8b910();
    lVar3 = FUN_00e87730();
    if ((lVar3 != 0) && (lVar3 = FUN_00e86210(), lVar3 != 0)) {
      FUN_00d50b00();
      *this_ptr = lVar3;
      *(void*)(this_ptr + 1) = 1;
      return;
    }
  }
  if ((g_028a7200 == (void*)0x0) || (g_028a7209 == '\0')) {
    FUN_00e8cb50();
    if (g_028a7200 != (void*)0x0) {
      g_028a7209 = '\x01';
      FUN_00e8cb70();
      goto LAB_00c823f4;
    }
    puVar4 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar4 = &g_0258a670;
    (*g_0258a688)();
    bVar7 = g_028a7200 == (void*)0x0;
    g_028a7200 = puVar4;
    if (((bVar7) || (FUN_00d50b20(), g_028a7200 != (void*)0x0)) && (g_028a7208 == '\0'))
    {
      g_028a7208 = '\x01';
      FUN_00e8cb90();
    }
    g_028a7209 = '\x01';
    FUN_00e8cb70();
  }
  else {
LAB_00c823f4:
    FUN_00c82a50();
    if (local_50[0] == '\0') {
      if (((local_58 != (int64_t *)0x0) && (FUN_00d50b00(), local_50[0] != '\0')) &&
         (local_58 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_50[0] = '\0';
    }
    if (local_58 != (int64_t *)0x0) {
      if (local_58 == g_028a7210) {
        *(void*)(this_ptr + 1) = 0;
        *this_ptr = 0;
      }
      else {
        FUN_00d50b00();
        *this_ptr = (int64_t)local_58;
        *(void*)(this_ptr + 1) = 1;
      }
      FUN_00d50b20();
      return;
    }
  }
  lVar3 = g_028a71f0;
  if (g_028a71f0 != 0) {
    FUN_00d50b00();
    local_50[0] = '\0';
    local_48 = lVar3;
    local_40 = 0xffffffff;
    local_38 = 0;
    while( true ) {
      lVar3 = (int64_t)(int)local_40;
      iVar6 = (int)local_40 + 1;
      local_40 = CONCAT44(local_40._4_4_,iVar6);
      if (*(int *)(local_48 + 0xc) <= iVar6) break;
      lVar3 = *(int64_t *)(*(int64_t *)(local_48 + 0x10) + 8 + lVar3 * 8);
      lVar1 = *(int64_t *)(lVar3 + 0xd0);
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      cVar2 = FUN_00d23d70();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      if (cVar2 != '\0') {
        FUN_00c82b00();
        plVar5 = this_ptr + 1;
        *(void*)(this_ptr + 1) = 0;
        *this_ptr = lVar3;
        if (local_50[0] != '\0') {
          *(void*)plVar5 = 1;
          plVar5 = (int64_t *)local_50;
        }
        *(void*)plVar5 = 0;
        FUN_00e2c740();
        FUN_00d50b20();
        return;
      }
      if (local_40._4_4_ != 0) {
        if (local_40._4_4_ < 1) {
          iVar6 = -local_40._4_4_;
        }
        else {
          local_40 = CONCAT44(local_40._4_4_,(int)local_40 - local_40._4_4_);
          FUN_00d23690();
          local_38 = local_38 + local_40._4_4_;
          iVar6 = 0;
        }
        local_40 = CONCAT44(iVar6,(int)local_40);
      }
    }
    FUN_00e2c740();
    FUN_00d50b20();
  }
  if ((g_028a7210 == (int64_t *)0x0) || (g_028a7219 == '\0')) {
    FUN_00e8cb50();
    if (g_028a7210 == (int64_t *)0x0) {
      plVar5 = (int64_t *)FUN_00e8fc40();
      FUN_0002f270();
      (**(code **)(*plVar5 + 0x18))();
      bVar7 = g_028a7210 == (int64_t *)0x0;
      g_028a7210 = plVar5;
      if (((bVar7) || (FUN_00d50b20(), g_028a7210 != (int64_t *)0x0)) && (g_028a7218 == '\0'))
      {
        g_028a7218 = '\x01';
        FUN_00e8cb90();
      }
      g_028a7219 = '\x01';
      FUN_00e8cb70();
    }
    else {
      g_028a7219 = '\x01';
      FUN_00e8cb70();
    }
    if (g_028a7210 == (int64_t *)0x0) {
      plVar5 = (int64_t *)0x0;
      goto LAB_00c8279d;
    }
  }
  plVar5 = g_028a7210;
  FUN_00d50b00();
LAB_00c8279d:
  FUN_00c82b00();
  if (plVar5 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  *(void*)(this_ptr + 1) = 0;
  *this_ptr = 0;
  return;
}

