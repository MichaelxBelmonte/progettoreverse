// Function: FUN_01eb5290
// Address: 01eb5290
// Size: 1707 bytes
// Class: GNData
// String references:
//   ".%@"
//   "%@%I"
// === GNData properties ===
//   double          _firstSpectrumTime
//   double          _spectraTimeDistance


void FUN_01eb5290(void)

{
  int64_t *plVar1;
  char cVar2;
  bool bVar3;
  int64_t lVar4;
  char cVar5;
  int iVar6;
  int64_t *plVar7;
  int64_t *this_ptr;
  int64_t *plVar8;
  int64_t lVar9;
  int64_t local_110;
  char local_108;
  int64_t *local_100;
  char local_f8;
  int64_t local_f0;
  char local_e8;
  int64_t *local_e0;
  char local_d8;
  void*local_d0;
  char local_c8;
  int64_t local_c0;
  char local_b8;
  int64_t local_b0;
  char local_a8;
  int64_t local_a0;
  char local_98;
  int64_t local_88;
  char local_80;
  void*local_78;
  char local_70;
  int64_t local_48;
  char local_40;
  
  FUN_00d4efa0();
  FUN_00c82bb0();
  local_c8 = 0;
  if ((local_70 == '\0') && (local_78 != (void*)0x0)) {
    FUN_00d50b00();
  }
  cVar2 = '\0';
  local_c8 = '\x01';
  local_d0 = local_78;
  FUN_00e3f850();
  if ((local_c8 != '\0') && (local_d0 != (void*)0x0)) {
    FUN_00d50b20();
  }
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(*this_ptr + 0xa18))();
  if (local_78 != (void*)0x0) {
    (**(code **)(*this_ptr + 0xa18))();
    cVar2 = '\x01';
    if (local_88 != 0) {
      FUN_00d50b00();
    }
    FUN_00d8cb40();
    local_b8 = 0;
    if (local_40 == '\0') {
      if (local_48 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_40 = '\0';
    }
    local_b8 = '\x01';
    local_c0 = local_48;
    FUN_00e3f850();
    if ((local_b8 != '\0') && (local_c0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    local_78 = &g_024c5048;
    if (local_88 != 0) {
      FUN_00d50b20();
    }
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
  }
  if ((this_ptr[10] != 0) && (iVar6 = FUN_00d8c7a0(), iVar6 != 0)) {
    local_f8 = 0;
    (**(code **)(this_ptr[2] + 0x10))();
    FUN_00d50b00();
    local_110 = g_027f0e20;
    local_f8 = '\x01';
    local_100 = this_ptr + 2;
    if (g_027f0e20 != 0) {
      FUN_00d50b00();
    }
    local_108 = '\x01';
    local_e8 = 0;
    lVar9 = this_ptr[10];
    if (lVar9 != 0) {
      FUN_00d50b00();
    }
    local_e8 = '\x01';
    local_f0 = lVar9;
    FUN_00e3fb50(&local_f0,&local_110);
    if ((local_e8 != '\0') && (local_f0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_108 != '\0') && (local_110 != 0)) {
      FUN_00d50b20();
    }
    if ((local_f8 != '\0') && (local_100 != (int64_t *)0x0)) {
      (**(code **)(*local_100 + 0x10))();
      FUN_00d50b20();
    }
  }
  plVar7 = this_ptr + 2;
  lVar9 = 0;
  bVar3 = false;
  plVar8 = (int64_t *)0x0;
  while( true ) {
    (**(code **)(*this_ptr + 0x4a0))();
    iVar6 = *(int *)((int64_t)local_78 + 0xc);
    if ((cVar2 != '\0') && (local_78 != (void*)0x0)) {
      FUN_00d50b20();
    }
    if (iVar6 <= lVar9) break;
    (**(code **)(*this_ptr + 0x4a0))();
    plVar1 = *(int64_t **)(local_78[2] + lVar9 * 8);
    if (plVar8 == plVar1) {
      if ((!bVar3) && (plVar8 != (int64_t *)0x0)) {
        bVar3 = true;
        FUN_00d50b00();
      }
    }
    else {
      if (plVar1 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      if ((bVar3) && (plVar8 != (int64_t *)0x0)) {
        FUN_00d50b20();
        bVar3 = true;
        plVar8 = plVar1;
      }
      else {
        bVar3 = true;
        plVar8 = plVar1;
      }
    }
    if ((cVar2 != '\0') && (local_78 != (void*)0x0)) {
      FUN_00d50b20();
    }
    cVar5 = FUN_01d10140();
    if (cVar5 != '\0') {
      local_d8 = 0;
      (**(code **)(*plVar7 + 0x10))();
      FUN_00d50b00();
      lVar4 = g_027f0ae8;
      local_d8 = '\x01';
      local_e0 = plVar7;
      if (g_027f0ae8 != 0) {
        FUN_00d50b00();
      }
      (**(code **)(*plVar8 + 0xa88))();
      cVar2 = '\x02';
      if (lVar4 != 0) {
        FUN_00d50b00();
      }
      FUN_00d8cb40();
      local_a8 = 0;
      if (local_40 == '\0') {
        if (local_48 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_40 = '\0';
      }
      local_a8 = '\x01';
      local_b0 = local_48;
      (**(code **)(*plVar8 + 0x960))();
      local_98 = 0;
      if (local_80 == '\0') {
        if (local_88 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_80 = '\0';
      }
      local_98 = '\x01';
      local_a0 = local_88;
      FUN_00e3fb50(&local_a0,&local_b0);
      if ((local_98 != '\0') && (local_a0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_80 != '\0') && (local_88 != 0)) {
        FUN_00d50b20();
      }
      if ((local_a8 != '\0') && (local_b0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      local_78 = &g_024c5048;
      if (lVar4 != 0) {
        FUN_00d50b20();
        FUN_00d50b20();
      }
      if ((local_d8 != '\0') && (local_e0 != (int64_t *)0x0)) {
        (**(code **)(*local_e0 + 0x10))();
        FUN_00d50b20();
      }
    }
    lVar9 = lVar9 + 1;
  }
  (**(code **)(*this_ptr + 0xa18))();
  if ((cVar2 != '\0') && (local_78 != (void*)0x0)) {
    FUN_00d50b20();
  }
  if (local_78 != (void*)0x0) {
    FUN_00e3faa0();
  }
  FUN_00e3faa0();
  if ((bVar3) && (plVar8 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  return;
}

