// Function: FUN_01a94560
// Address: 01a94560
// Size: 1487 bytes
// Class: MUAudioSourceSeparationPrefCtrl

void FUN_01a94560(void)

{
  int64_t *plVar1;
  char cVar2;
  uint64_t uVar3;
  uint32_t uVar4;
  int64_t lVar5;
  int64_t this_ptr;
  int64_t *plVar6;
  undefined7 uVar10;
  uint64_t uVar7;
  int64_t **pplVar8;
  int64_t *plVar9;
  bool bVar11;
  int64_t local_110;
  char local_108;
  int64_t local_100;
  char local_f8;
  int64_t *local_f0;
  char local_e8;
  int64_t local_e0;
  char local_d8;
  int64_t *local_d0;
  char local_c8;
  int64_t *local_c0;
  char local_b8;
  int64_t *local_b0;
  char local_a8;
  int64_t local_a0;
  char local_98;
  int64_t local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  int64_t *local_70;
  char local_68;
  uint32_t local_5c;
  int64_t *local_58;
  uint64_t local_50;
  int64_t *local_48;
  int64_t *local_40;
  char local_38;
  
  FUN_00d6f370();
  plVar6 = local_40;
  if ((((local_38 == '\0') && (local_40 != (int64_t *)0x0)) && (FUN_00d50b00(), local_38 != '\0'))
     && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  lVar5 = g_027bf420;
  local_58 = plVar6;
  if (g_027bf420 != 0) {
    FUN_00d50b00();
  }
  local_110 = lVar5;
  local_108 = '\x01';
  local_100 = 0;
  local_f8 = '\0';
  uVar3 = FUN_00d710b0(&local_100,&local_110);
  plVar6 = local_40;
  if (local_40 == (int64_t *)0x0) {
    lVar5 = CONCAT71((int7)((uint64_t)lVar5 >> 8),1);
    plVar6 = (int64_t *)0x0;
    local_50 = 0;
  }
  else {
    if (local_38 == '\0') {
      uVar3 = FUN_00d50b00();
      lVar5 = 0;
      local_50 = CONCAT71((int7)((uint64_t)uVar3 >> 8),1);
      if ((local_38 == '\0') || (local_40 == (int64_t *)0x0)) goto LAB_01a9464b;
      uVar3 = FUN_00d50b20();
    }
    else {
      local_38 = '\0';
    }
    local_50 = CONCAT71((int7)((uint64_t)uVar3 >> 8),1);
    lVar5 = 0;
  }
LAB_01a9464b:
  if ((local_f8 != '\0') && (local_100 != 0)) {
    FUN_00d50b20();
  }
  if ((local_108 != '\0') && (local_110 != 0)) {
    FUN_00d50b20();
  }
  local_48 = plVar6;
  if ((char)lVar5 != '\0') {
    FUN_00b7b410();
    (**(code **)(*local_70 + 0x368))();
    plVar1 = local_40;
    uVar10 = (undefined7)((uint64_t)plVar6 >> 8);
    if (local_40 == plVar6) {
      if (local_40 == (int64_t *)0x0) {
        uVar7 = local_50 & 0xffffffff;
      }
      else {
        if (local_38 != '\0') goto LAB_01a946dd;
        uVar7 = CONCAT71(uVar10,1);
        FUN_00d50b00();
      }
LAB_01a94740:
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      if (local_38 == '\0') {
        if (local_40 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        uVar7 = CONCAT71(uVar10,1);
        if (((byte)local_50 & local_48 != (int64_t *)0x0) == 1) {
          local_48 = plVar1;
          FUN_00d50b20();
        }
        else {
          local_48 = plVar1;
        }
        goto LAB_01a94740;
      }
      bVar11 = plVar6 != (int64_t *)0x0;
      plVar6 = plVar1;
      if (((byte)local_50 & bVar11) == 1) {
        local_48 = local_40;
        FUN_00d50b20();
      }
LAB_01a946dd:
      local_38 = '\0';
      uVar7 = CONCAT71(uVar10,1);
      local_48 = plVar6;
    }
    if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    lVar5 = g_027bf420;
    local_f0 = local_48;
    local_e8 = '\0';
    if (g_027bf420 != 0) {
      FUN_00d50b00();
    }
    local_e0 = lVar5;
    local_d8 = '\x01';
    (**(code **)(*local_58 + 0x80))();
    if ((local_d8 != '\0') && (local_e0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_e8 != '\0') && (local_f0 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d71400();
    local_50 = uVar7 & 0xffffffff;
  }
  local_c8 = '\0';
  local_d0 = local_48;
  FUN_00cddf30();
  (**(code **)(*local_70 + 0x470))();
  plVar6 = local_40;
  if (local_40 == (int64_t *)0x0) {
    uVar4 = (uint32_t)CONCAT71((int7)((uint64_t)lVar5 >> 8),1);
  }
  else {
    if (local_38 == '\0') {
      FUN_00d50b00();
      uVar4 = 0;
      if ((local_38 == '\0') || (local_40 == (int64_t *)0x0)) goto LAB_01a9486b;
      FUN_00d50b20();
    }
    else {
      local_38 = '\0';
    }
    uVar4 = 0;
  }
LAB_01a9486b:
  if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_c8 != '\0') && (local_d0 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  local_c0 = plVar6;
  local_b8 = '\0';
  local_5c = uVar4;
  (**(code **)(**(int64_t **)(this_ptr + 0x70) + 0x968))();
  if ((local_b8 != '\0') && (local_c0 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  local_b0 = plVar6;
  local_a8 = '\0';
  (**(code **)(**(int64_t **)(this_ptr + 0x70) + 0x6a8))();
  if ((local_a8 != '\0') && (local_b0 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  lVar5 = g_027bf450;
  if (g_027bf450 != 0) {
    FUN_00d50b00();
  }
  local_a0 = lVar5;
  local_98 = '\x01';
  local_90 = 0;
  local_88 = '\0';
  pplVar8 = &local_40;
  FUN_00d704d0(&local_90,&local_a0);
  plVar1 = local_40;
  FUN_00053ac0();
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x360))();
    cVar2 = FUN_00e85ea0();
    if (cVar2 != '\0') goto LAB_01a94998;
  }
  pplVar8 = (int64_t **)&g_02802688;
LAB_01a94998:
  plVar9 = local_58;
  plVar1 = *pplVar8;
  if (*(char *)(pplVar8 + 1) == '\0') {
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar8 + 1) = 0;
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  if (plVar1 == (int64_t *)0x0) {
    plVar1 = *(int64_t **)(this_ptr + 0x78);
    FUN_013941f0();
    (**(code **)(*plVar1 + 0x918))();
    FUN_00d6f370();
    FUN_013941f0();
    local_80 = g_027bf450;
    if (g_027bf450 != 0) {
      FUN_00d50b00();
    }
    local_78 = '\x01';
    FUN_00d707b0();
    plVar9 = local_58;
    cVar2 = (char)local_5c;
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d6f370();
    FUN_00d71400();
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    plVar1 = *(int64_t **)(this_ptr + 0x78);
    FUN_00d45870();
    (**(code **)(*plVar1 + 0x918))();
    FUN_00d50b20();
    cVar2 = (char)local_5c;
  }
  if (cVar2 == '\0' && plVar6 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (((char)local_50 != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar9 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}

