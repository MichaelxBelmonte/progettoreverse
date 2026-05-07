// Function: FUN_00d27c30
// Address: 00d27c30
// Size: 1219 bytes
// Class: GNSerialNumber
// String references:
//   "serial number format mistmatch"
//   "%01X"
//   "serial number key format mistmatch"
//   "serial number version mismatch"

void* FUN_00d27c30(void)

{
  bool bVar1;
  int64_t lVar2;
  int64_t *plVar3;
  int64_t *plVar4;
  char cVar5;
  int iVar6;
  void*puVar7;
  void*this_ptr;
  int iVar8;
  int64_t *plVar9;
  int local_7c;
  int local_6c;
  int64_t *local_40;
  uint local_38;
  int local_34;
  
  puVar7 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar7 = &g_025795a8;
  (*g_025795c0)();
  lVar2 = g_0277d258;
  if (g_0277d258 != 0) {
    FUN_00d50b00();
  }
  FUN_00ddb860();
  plVar3 = local_40;
  if ((char)local_38 == '\0') {
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b00();
      if (((char)local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    local_38 = local_38 & 0xffffff00;
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  FUN_00ddb860();
  plVar4 = local_40;
  if ((char)local_38 == '\0') {
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b00();
      if (((char)local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    local_38 = local_38 & 0xffffff00;
  }
  cVar5 = (**(code **)(*plVar4 + 0x430))(0,1);
  lVar2 = g_0277d248;
  if (cVar5 == '\0') {
    if (g_0277d248 != 0) {
      FUN_00d50b00();
    }
    FUN_00cc7b40();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_00ddb860();
  plVar9 = local_40;
  if (local_40 == (int64_t *)0x0) {
    bVar1 = true;
    plVar9 = (int64_t *)0x0;
  }
  else {
    if ((char)local_38 == '\0') {
      FUN_00d50b00();
      bVar1 = false;
      if (((char)local_38 == '\0') || (local_40 == (int64_t *)0x0)) goto LAB_00d27ea5;
      FUN_00d50b20();
    }
    else {
      local_38 = local_38 & 0xffffff00;
    }
    bVar1 = false;
  }
LAB_00d27ea5:
  iVar6 = FUN_00d8c7a0();
  if (iVar6 < 1) {
    *this_ptr = puVar7;
    *(void*)(this_ptr + 1) = 1;
  }
  else {
    iVar8 = 0;
    do {
      cVar5 = (**(code **)(*plVar9 + 0x430))();
      lVar2 = g_0277d248;
      if (cVar5 == '\0') {
        if (g_0277d248 != 0) {
          FUN_00d50b00();
        }
        FUN_00cc7b40();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
      }
      cVar5 = (**(code **)(*plVar3 + 0x430))();
      lVar2 = g_0277d248;
      if (cVar5 == '\0') {
        if (g_0277d248 != 0) {
          FUN_00d50b00();
        }
        FUN_00cc7b40();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
      }
      cVar5 = (**(code **)(*plVar3 + 0x388))();
      if (cVar5 != '\0') {
        (**(code **)(*plVar3 + 0x378))();
      }
      local_34 = local_6c - local_7c;
      if (local_34 < 0) {
        local_34 = local_34 + 0xf;
      }
      local_38 = 1;
      local_40 = &g_024cc6f0;
      FUN_00d94d80(&g_024cc6f0,&local_40);
      iVar8 = iVar8 + 1;
    } while (iVar6 != iVar8);
    *this_ptr = puVar7;
    *(void*)(this_ptr + 1) = 1;
    if (plVar4 == (int64_t *)0x0) goto LAB_00d280c0;
  }
  FUN_00d50b20();
LAB_00d280c0:
  if (plVar3 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (!bVar1 && plVar9 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return this_ptr;
}

