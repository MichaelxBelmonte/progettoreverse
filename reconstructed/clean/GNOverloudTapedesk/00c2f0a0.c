// Function: FUN_00c2f0a0
// Address: 00c2f0a0
// Size: 1601 bytes
// Class: GNOverloudTapedesk
// String references:
//   "GNOverloudTapedesk"

void* FUN_00c2f0a0(int64_t *param_1,uint64_t param_2,void*param_3)

{
  int64_t lVar1;
  int64_t *plVar2;
  int64_t lVar3;
  char cVar4;
  int iVar5;
  int64_t *plVar6;
  void*this_ptr;
  int64_t **pplVar7;
  int64_t local_c0;
  uint8_t local_b8;
  uint64_t local_b0;
  uint8_t local_a8;
  int64_t *local_48;
  char local_40;
  char local_31;
  
  plVar6 = (int64_t *)*param_1;
  if ((g_0276e460 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
    g_0276e3b0 = FUN_00b10020();
    g_0276e398 = "GNOverloudTapedesk";
    g_0276e3a0 = 0xe8;
    g_0276e3a8 = FUN_00c41400;
    g_0276e3b8 = 0;
    ram_000000000276e3c0 = 0;
    g_0276e3c8 = 0;
    ram_000000000276e3d0 = 0;
    g_0276e3d8 = 0;
    ram_000000000276e3e0 = 0;
    g_0276e3e8 = 0;
    ram_000000000276e3f0 = 0;
    g_0276e3f8 = 0;
    ram_000000000276e400 = 0;
    g_0276e408 = 0;
    ram_000000000276e410 = 0;
    g_0276e418 = 0;
    ram_000000000276e420 = 0;
    g_0276e428 = 0;
    ram_000000000276e430 = 0;
    g_0276e438 = 0;
    ram_000000000276e440 = 0;
    g_0276e448 = 0;
    ram_000000000276e450 = 0;
    g_0276e458 = 0;
    ___cxa_guard_release();
  }
  if (plVar6 == (int64_t *)0x0) {
LAB_00c2f0f9:
    plVar6 = &g_02802688;
  }
  else {
    (**(code **)(*plVar6 + 0x360))();
    cVar4 = FUN_00e85ea0();
    plVar6 = param_1;
    if (cVar4 == '\0') goto LAB_00c2f0f9;
  }
  lVar1 = *plVar6;
  local_31 = (char)plVar6[1];
  if ((local_31 != '\0') && (lVar1 != 0)) {
    FUN_00d50b00();
  }
  pplVar7 = &local_48;
  FUN_00c16ff0();
  plVar6 = local_48;
  if ((g_0276e460 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
    g_0276e3b0 = FUN_00b10020();
    g_0276e398 = "GNOverloudTapedesk";
    g_0276e3a0 = 0xe8;
    g_0276e3a8 = FUN_00c41400;
    g_0276e3b8 = 0;
    ram_000000000276e3c0 = 0;
    g_0276e3c8 = 0;
    ram_000000000276e3d0 = 0;
    g_0276e3d8 = 0;
    ram_000000000276e3e0 = 0;
    g_0276e3e8 = 0;
    ram_000000000276e3f0 = 0;
    g_0276e3f8 = 0;
    ram_000000000276e400 = 0;
    g_0276e408 = 0;
    ram_000000000276e410 = 0;
    g_0276e418 = 0;
    ram_000000000276e420 = 0;
    g_0276e428 = 0;
    ram_000000000276e430 = 0;
    g_0276e438 = 0;
    ram_000000000276e440 = 0;
    g_0276e448 = 0;
    ram_000000000276e450 = 0;
    g_0276e458 = 0;
    ___cxa_guard_release();
  }
  if (plVar6 == (int64_t *)0x0) {
LAB_00c2f16b:
    pplVar7 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar6 + 0x360))();
    cVar4 = FUN_00e85ea0();
    if (cVar4 == '\0') goto LAB_00c2f16b;
  }
  plVar6 = *pplVar7;
  if (*(char *)(pplVar7 + 1) == '\0') {
    if (plVar6 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar7 + 1) = 0;
  }
  if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  lVar3 = g_0276caf8;
  plVar2 = (int64_t *)*param_3;
  if (g_0276caf8 != 0) {
    FUN_00d50b00();
  }
  cVar4 = (**(code **)(*plVar2 + 0x50))();
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  lVar3 = g_0276cb00;
  if (cVar4 == '\0') {
    if (plVar6 == (int64_t *)0x0) {
LAB_00c2f49f:
      local_c0 = *param_1;
      local_b8 = 0;
      local_b0 = *param_3;
      local_a8 = 0;
      FUN_00c17210(&local_c0,param_2,&local_b0);
      goto LAB_00c2f4e7;
    }
    plVar2 = (int64_t *)*param_3;
    if (g_0276cb00 != 0) {
      FUN_00d50b00();
    }
    cVar4 = (**(code **)(*plVar2 + 0x50))();
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    lVar3 = g_0276cb08;
    if (cVar4 == '\0') {
      plVar2 = (int64_t *)*param_3;
      if (g_0276cb08 != 0) {
        FUN_00d50b00();
      }
      cVar4 = (**(code **)(*plVar2 + 0x50))();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = g_0276cb10;
      if (cVar4 == '\0') {
        plVar2 = (int64_t *)*param_3;
        if (g_0276cb10 != 0) {
          FUN_00d50b00();
        }
        cVar4 = (**(code **)(*plVar2 + 0x50))();
        if (lVar3 != 0) {
          FUN_00d50b20();
        }
        if (cVar4 == '\0') goto LAB_00c2f49f;
        FUN_00aea610(*(void*)((int64_t)plVar6 + 0xcc));
        FUN_00d46dc0();
        plVar6 = local_48;
        *(void*)(this_ptr + 1) = 0;
        if (local_40 != '\0') goto LAB_00c2f551;
        if (local_48 == (int64_t *)0x0) goto LAB_00c2f54f;
        FUN_00d50b00();
        *this_ptr = plVar6;
        *(void*)(this_ptr + 1) = 1;
        if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        FUN_00aea610((int)plVar6[0x19]);
        FUN_00d46dc0();
        plVar6 = local_48;
        *(void*)(this_ptr + 1) = 0;
        if (local_40 != '\0') goto LAB_00c2f551;
        if (local_48 == (int64_t *)0x0) goto LAB_00c2f54f;
        FUN_00d50b00();
        *this_ptr = plVar6;
        *(void*)(this_ptr + 1) = 1;
        if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    else {
      if (*(int *)(lVar1 + 0xd8) == 0) {
        FUN_00aea610((int)plVar6[0x1a]);
        FUN_00d46dc0();
        plVar6 = local_48;
        *(void*)(this_ptr + 1) = 0;
        if (local_40 == '\0') {
          if (local_48 == (int64_t *)0x0) goto LAB_00c2f54f;
          FUN_00d50b00();
          *this_ptr = plVar6;
          *(void*)(this_ptr + 1) = 1;
          if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          goto LAB_00c2f55d;
        }
      }
      else {
        FUN_00aea610(*(void*)((int64_t)plVar6 + 0xd4));
        FUN_00d46dc0();
        plVar6 = local_48;
        *(void*)(this_ptr + 1) = 0;
        if (local_40 == '\0') {
          if (local_48 != (int64_t *)0x0) {
            FUN_00d50b00();
            *this_ptr = plVar6;
            *(void*)(this_ptr + 1) = 1;
            if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            goto LAB_00c2f55d;
          }
LAB_00c2f54f:
          local_48 = (int64_t *)0x0;
        }
      }
LAB_00c2f551:
      *this_ptr = local_48;
      *(void*)(this_ptr + 1) = 1;
    }
  }
  else {
    FUN_00d46530();
    plVar2 = local_48;
    *(void*)(this_ptr + 1) = 0;
    if (local_40 == '\0') {
      if (local_48 != (int64_t *)0x0) {
        FUN_00d50b00();
        *this_ptr = plVar2;
        *(void*)(this_ptr + 1) = 1;
        if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        goto LAB_00c2f4e7;
      }
      local_48 = (int64_t *)0x0;
    }
    *this_ptr = local_48;
    *(void*)(this_ptr + 1) = 1;
LAB_00c2f4e7:
    if (plVar6 == (int64_t *)0x0) goto LAB_00c2f565;
  }
LAB_00c2f55d:
  FUN_00d50b20();
LAB_00c2f565:
  if ((local_31 != '\0') && (lVar1 != 0)) {
    FUN_00d50b20();
  }
  return this_ptr;
}

