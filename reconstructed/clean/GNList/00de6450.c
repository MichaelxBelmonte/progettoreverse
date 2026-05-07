// Function: FUN_00de6450
// Address: 00de6450
// Size: 1622 bytes
// Class: GNList
// === GNList properties ===
//   GNInt           _archiveVersion
//   bool            _awakesObjectsAfterDecoding
//   bool            _isCancelled
//   GNInt           _currentObjectGraphIdx
//   GNInt           _predictedDecodedValuesIndex


void FUN_00de6450(void)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t *plVar5;
  char cVar6;
  int iVar7;
  byte bVar8;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t local_2138;
  char local_2130;
  int64_t local_2068;
  char local_2060;
  int local_204c;
  int64_t local_2048;
  char local_2040;
  int64_t *local_2038;
  char local_2030;
  int64_t local_2028;
  char local_2020;
  int64_t local_2018;
  char local_2010;
  int64_t local_38;
  
  local_38 = *(int64_t *)PTR____stack_chk_guard_024a9898;
  if (((int64_t *)*arg1 == (int64_t *)0x0) ||
     (cVar6 = (**(code **)(*(int64_t *)*arg1 + 0x398))(), cVar6 == '\0')) {
    lVar2 = g_027c24d8;
    if (g_027c24d8 != 0) {
      FUN_00d50b00();
    }
    lVar1 = g_02784270;
    if (g_02784270 != 0) {
      FUN_00d50b00();
    }
    lVar4 = g_027c24e8;
    if (g_027c24e8 != 0) {
      FUN_00d50b00();
    }
    local_2048 = *arg1;
    FUN_00083ea0(2,&local_2048);
    FUN_00e972c0();
    local_2038 = (int64_t *)&g_0253d630;
    if ((local_2010 != '\0') && (local_2018 != 0)) {
      FUN_00d50b20();
    }
    local_2038 = &g_024c5048;
    if ((local_2020 != '\0') && (local_2028 != 0)) {
      FUN_00d50b20();
    }
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    goto LAB_00de6952;
  }
  (**(code **)(*(int64_t *)*arg1 + 0x4d8))();
  plVar5 = local_2038;
  lVar2 = g_027c24d8;
  if (local_2030 == '\0') {
    if (local_2038 != (int64_t *)0x0) {
      FUN_00d50b00();
      if ((local_2030 != '\0') && (local_2038 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_00de6643;
    }
  }
  else if (local_2038 != (int64_t *)0x0) {
LAB_00de6643:
    iVar7 = FUN_00cce2f0();
    local_204c = iVar7;
    do {
      local_2040 = '\0';
      local_2048 = 0;
      (**(code **)(*plVar5 + 0x380))(&local_204c,&local_2038);
      cVar6 = local_2040;
      lVar2 = local_2048;
      if (local_2048 == local_2138) {
        if ((local_2040 != '\0') || (local_2138 == 0)) goto LAB_00de68d6;
        if (local_2130 == '\0') {
          FUN_00d50b00();
          goto LAB_00de68cf;
        }
        local_2040 = '\x01';
        lVar2 = g_02789428;
joined_r0x00de6888:
        g_02789428 = lVar2;
        if (lVar2 != 0) {
          FUN_00d50b00();
        }
        lVar1 = g_02784280;
        if (g_02784280 != 0) {
          FUN_00d50b00();
        }
        lVar4 = g_027c24e8;
        if (g_027c24e8 != 0) {
          FUN_00d50b00();
        }
        lVar3 = g_02784288;
        local_2060 = 0;
        if (g_02784288 != 0) {
          FUN_00d50b00();
        }
        local_2068 = lVar3;
        local_2060 = '\x01';
        FUN_00de6e80(&local_2068,arg1,&local_2048);
        FUN_00e972c0();
        FUN_002d10d0();
        if ((local_2060 != '\0') && (local_2068 != 0)) {
          FUN_00d50b20();
        }
        if (lVar4 != 0) {
          FUN_00d50b20();
        }
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
        bVar8 = 0;
        if (lVar2 != 0) {
          FUN_00d50b20();
          bVar8 = 0;
        }
      }
      else {
        if (local_2130 == '\0') {
          if (local_2138 != 0) {
            FUN_00d50b00();
          }
          local_2048 = local_2138;
          if ((cVar6 != '\0') && (lVar2 != 0)) {
            FUN_00d50b20();
          }
LAB_00de68cf:
          local_2040 = '\x01';
LAB_00de68d6:
          lVar1 = local_2048;
          if ((local_2130 != '\0') && (local_2138 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_2048 = local_2138;
          if ((local_2040 != '\0') && (lVar2 != 0)) {
            FUN_00d50b20();
          }
          local_2040 = '\x01';
          lVar1 = local_2048;
        }
        lVar2 = g_02789428;
        if (lVar1 != 0) goto joined_r0x00de6888;
        bVar8 = 1;
        if (0 < local_204c) {
          (**(code **)(*this_ptr + 0x368))();
        }
      }
      if ((local_2040 != '\0') && (local_2048 != 0)) {
        FUN_00d50b20();
      }
    } while ((bool)(bVar8 & local_204c == iVar7));
    FUN_00d50b20();
    goto LAB_00de6952;
  }
  if (g_027c24d8 != 0) {
    FUN_00d50b00();
  }
  lVar1 = g_02784278;
  if (g_02784278 != 0) {
    FUN_00d50b00();
  }
  lVar4 = g_027c24e8;
  if (g_027c24e8 != 0) {
    FUN_00d50b00();
  }
  local_2048 = *arg1;
  FUN_00083ea0(2,&local_2048);
  FUN_00e972c0();
  local_2038 = (int64_t *)&g_0253d630;
  if ((local_2010 != '\0') && (local_2018 != 0)) {
    FUN_00d50b20();
  }
  local_2038 = &g_024c5048;
  if ((local_2020 != '\0') && (local_2028 != 0)) {
    FUN_00d50b20();
  }
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
LAB_00de6952:
  if (*(int64_t *)PTR____stack_chk_guard_024a9898 != local_38) {
                        ___stack_chk_fail();
  }
  return;
}

