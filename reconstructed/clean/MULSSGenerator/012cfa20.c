// Function: FUN_012cfa20
// Address: 012cfa20
// Size: 1908 bytes
// Class: MULSSGenerator

void FUN_012cfa20(void)

{
  int64_t lVar1;
  int64_t *plVar2;
  void*puVar3;
  void*puVar4;
  int64_t lVar5;
  int64_t this_ptr;
  uint32_t uVar6;
  int64_t local_30;
  char local_28;
  
  FUN_012dd890();
  *(void*)(this_ptr + 0x120) = 0x3ff0000000000000;
  FUN_00d21370();
  *(void*)(this_ptr + 0xd4) = 0x101;
  *(void*)(this_ptr + 0xd0) = 0x1010101;
  FUN_012d03c0();
  lVar1 = *(int64_t *)(this_ptr + 0x138);
  lVar5 = lVar1;
  if (lVar1 != local_30) {
    lVar5 = local_30;
    if (local_28 == '\0') {
      if (local_30 == 0) {
        lVar5 = 0;
        goto LAB_012cfa94;
      }
      FUN_00d50b00();
      lVar1 = *(int64_t *)(this_ptr + 0x138);
      *(int64_t *)(this_ptr + 0x138) = local_30;
    }
    else {
      local_28 = '\0';
LAB_012cfa94:
      *(int64_t *)(this_ptr + 0x138) = lVar5;
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
      lVar5 = local_30;
    }
  }
  if ((local_28 != '\0') && (lVar5 != 0)) {
    FUN_00d50b20();
  }
  FUN_012d03c0();
  lVar1 = *(int64_t *)(this_ptr + 0x140);
  lVar5 = lVar1;
  if (lVar1 != local_30) {
    lVar5 = local_30;
    if (local_28 == '\0') {
      if (local_30 == 0) {
        lVar5 = 0;
        goto LAB_012cfb17;
      }
      FUN_00d50b00();
      lVar1 = *(int64_t *)(this_ptr + 0x140);
      *(int64_t *)(this_ptr + 0x140) = local_30;
    }
    else {
      local_28 = '\0';
LAB_012cfb17:
      *(int64_t *)(this_ptr + 0x140) = lVar5;
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
      lVar5 = local_30;
    }
  }
  if ((local_28 != '\0') && (lVar5 != 0)) {
    FUN_00d50b20();
  }
  plVar2 = (int64_t *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar2 + 0x18))();
  lVar1 = *(int64_t *)(this_ptr + 0x158);
  *(int64_t **)(this_ptr + 0x158) = plVar2;
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  FUN_012d0460();
  lVar1 = *(int64_t *)(this_ptr + 0x160);
  lVar5 = lVar1;
  if (lVar1 != local_30) {
    lVar5 = local_30;
    if (local_28 == '\0') {
      if (local_30 == 0) {
        lVar5 = 0;
        goto LAB_012cfbd0;
      }
      FUN_00d50b00();
      lVar1 = *(int64_t *)(this_ptr + 0x160);
      *(int64_t *)(this_ptr + 0x160) = local_30;
    }
    else {
      local_28 = '\0';
LAB_012cfbd0:
      *(int64_t *)(this_ptr + 0x160) = lVar5;
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
      lVar5 = local_30;
    }
  }
  if ((local_28 != '\0') && (lVar5 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d21370();
  FUN_00d22760();
  puVar3 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  puVar3[0x1b] = 0;
  puVar3[0x1c] = 0;
  *(void*)((int64_t)puVar3 + 0xc) = 0;
  *(void*)((int64_t)puVar3 + 0x14) = 0;
  *(void*)((int64_t)puVar3 + 0x1c) = 0;
  *(void*)((int64_t)puVar3 + 0x24) = 0;
  *(void*)((int64_t)puVar3 + 0x2c) = 0;
  *(void*)((int64_t)puVar3 + 0x34) = 0;
  *(void*)((int64_t)puVar3 + 0x3c) = 0;
  *(void*)((int64_t)puVar3 + 0x44) = 0;
  *(void*)((int64_t)puVar3 + 0x4c) = 0;
  *(void*)((int64_t)puVar3 + 0x54) = 0;
  *(void*)((int64_t)puVar3 + 0x5c) = 0;
  *(void*)((int64_t)puVar3 + 100) = 0;
  *(void*)((int64_t)puVar3 + 0x6c) = 0;
  *(void*)((int64_t)puVar3 + 0x74) = 0;
  *(void*)((int64_t)puVar3 + 0x7c) = 0;
  *(void*)((int64_t)puVar3 + 0x84) = 0;
  *(void*)((int64_t)puVar3 + 0x8c) = 0;
  *(void*)((int64_t)puVar3 + 0x94) = 0;
  *(void*)((int64_t)puVar3 + 0x9c) = 0;
  *(void*)((int64_t)puVar3 + 0xa4) = 0;
  *(void*)((int64_t)puVar3 + 0xac) = 0;
  *(void*)((int64_t)puVar3 + 0xb4) = 0;
  *(void*)((int64_t)puVar3 + 0xbc) = 0;
  *(void*)((int64_t)puVar3 + 0xc4) = 0;
  *(void*)((int64_t)puVar3 + 0xc6) = 0;
  *(void*)((int64_t)puVar3 + 0xce) = 0;
  *puVar3 = &g_025ed490;
  puVar3[0x1d] = 0;
  puVar3[0x1e] = 0;
  puVar3[0x1f] = 0;
  puVar3[0x20] = 0;
  (*g_025ed4a8)();
  puVar4 = *(void**)(this_ptr + 0x110);
  if (puVar4 == puVar3) {
    FUN_00d50b20();
  }
  else {
    *(void**)(this_ptr + 0x110) = puVar3;
    if (puVar4 != (void*)0x0) {
      FUN_00d50b20();
    }
  }
  lVar1 = *(int64_t *)(this_ptr + 0x110);
  puVar4 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar4 = &g_025683c0;
  (*g_025683d8)();
  FUN_00c92170();
  FUN_00c92160();
  lVar5 = *(int64_t *)(lVar1 + 0x100);
  *(void**)(lVar1 + 0x100) = puVar4;
  if (lVar5 != 0) {
    FUN_00d50b20();
  }
  puVar3 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *(void*)((int64_t)puVar3 + 0x7c) = 0;
  *(void*)((int64_t)puVar3 + 0x84) = 0;
  *(void*)((int64_t)puVar3 + 0x6c) = 0;
  *(void*)((int64_t)puVar3 + 0x74) = 0;
  *(void*)((int64_t)puVar3 + 0x5c) = 0;
  *(void*)((int64_t)puVar3 + 100) = 0;
  *(void*)((int64_t)puVar3 + 0x4c) = 0;
  *(void*)((int64_t)puVar3 + 0x54) = 0;
  *(void*)((int64_t)puVar3 + 0x3c) = 0;
  *(void*)((int64_t)puVar3 + 0x44) = 0;
  *(void*)((int64_t)puVar3 + 0x2c) = 0;
  *(void*)((int64_t)puVar3 + 0x34) = 0;
  *(void*)((int64_t)puVar3 + 0x1c) = 0;
  *(void*)((int64_t)puVar3 + 0x24) = 0;
  *(void*)((int64_t)puVar3 + 0xc) = 0;
  *(void*)((int64_t)puVar3 + 0x14) = 0;
  *(void*)((int64_t)puVar3 + 0x8c) = 0;
  *puVar3 = &g_0252ff98;
  puVar3[0x15] = 0;
  puVar3[0x12] = 0;
  puVar3[0x13] = 0;
  *(void*)(puVar3 + 0x14) = 0;
  puVar3[0x17] = 0;
  puVar3[0x18] = 0;
  puVar3[0x19] = 0;
  (*g_0252ffb0)();
  puVar4 = *(void**)(this_ptr + 0x118);
  if (puVar4 == puVar3) {
    FUN_00d50b20();
  }
  else {
    *(void**)(this_ptr + 0x118) = puVar3;
    if (puVar4 != (void*)0x0) {
      FUN_00d50b20();
    }
  }
  puVar3 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar3 = &g_025e1318;
  puVar3[7] = 0;
  puVar3[8] = 0;
  puVar3[9] = 0;
  puVar3[10] = 0;
  (*g_025e1330)();
  puVar4 = *(void**)(this_ptr + 400);
  if (puVar4 == puVar3) {
    FUN_00d50b20();
LAB_012cfe58:
    puVar3 = *(void**)(this_ptr + 400);
    if (puVar3 != (void*)0x0) goto LAB_012cfe70;
    puVar3 = (void*)0x0;
  }
  else {
    *(void**)(this_ptr + 400) = puVar3;
    if (puVar4 != (void*)0x0) {
      FUN_00d50b20();
      goto LAB_012cfe58;
    }
LAB_012cfe70:
    FUN_00d50b00();
  }
  FUN_012ddcf0();
  if (puVar3 != (void*)0x0) {
    FUN_00d50b20();
  }
  FUN_012d0500();
  lVar1 = *(int64_t *)(this_ptr + 0x1a8);
  lVar5 = lVar1;
  if (lVar1 != local_30) {
    lVar5 = local_30;
    if (local_28 == '\0') {
      if (local_30 == 0) {
        lVar5 = 0;
        goto LAB_012cfec8;
      }
      FUN_00d50b00();
      lVar1 = *(int64_t *)(this_ptr + 0x1a8);
      *(int64_t *)(this_ptr + 0x1a8) = local_30;
    }
    else {
      local_28 = '\0';
LAB_012cfec8:
      *(int64_t *)(this_ptr + 0x1a8) = lVar5;
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
      lVar5 = local_30;
    }
  }
  if ((local_28 != '\0') && (lVar5 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d21370();
  FUN_012d05a0();
  lVar1 = *(int64_t *)(this_ptr + 0x128);
  lVar5 = lVar1;
  if (lVar1 != local_30) {
    lVar5 = local_30;
    if (local_28 == '\0') {
      if (local_30 == 0) {
        lVar5 = 0;
        goto LAB_012cff5c;
      }
      FUN_00d50b00();
      lVar1 = *(int64_t *)(this_ptr + 0x128);
      *(int64_t *)(this_ptr + 0x128) = local_30;
    }
    else {
      local_28 = '\0';
LAB_012cff5c:
      *(int64_t *)(this_ptr + 0x128) = lVar5;
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
      lVar5 = local_30;
    }
  }
  if ((local_28 != '\0') && (lVar5 != 0)) {
    FUN_00d50b20();
  }
  plVar2 = (int64_t *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar2 + 0x18))();
  lVar1 = *(int64_t *)(this_ptr + 0x1d8);
  *(int64_t **)(this_ptr + 0x1d8) = plVar2;
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  FUN_012d0640();
  lVar1 = *(int64_t *)(this_ptr + 0x1e0);
  lVar5 = lVar1;
  if (lVar1 != local_30) {
    lVar5 = local_30;
    if (local_28 == '\0') {
      if (local_30 == 0) {
        lVar5 = 0;
        goto LAB_012d0015;
      }
      FUN_00d50b00();
      lVar1 = *(int64_t *)(this_ptr + 0x1e0);
      *(int64_t *)(this_ptr + 0x1e0) = local_30;
    }
    else {
      local_28 = '\0';
LAB_012d0015:
      *(int64_t *)(this_ptr + 0x1e0) = lVar5;
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
      lVar5 = local_30;
    }
  }
  if ((local_28 != '\0') && (lVar5 != 0)) {
    FUN_00d50b20();
  }
  FUN_012d0640();
  lVar1 = *(int64_t *)(this_ptr + 0x1e8);
  lVar5 = lVar1;
  if (lVar1 == local_30) goto LAB_012d00e3;
  lVar5 = local_30;
  if (local_28 == '\0') {
    if (local_30 == 0) {
      lVar5 = 0;
      goto LAB_012d0098;
    }
    FUN_00d50b00();
    lVar1 = *(int64_t *)(this_ptr + 0x1e8);
    *(int64_t *)(this_ptr + 0x1e8) = local_30;
  }
  else {
    local_28 = '\0';
LAB_012d0098:
    *(int64_t *)(this_ptr + 0x1e8) = lVar5;
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
    lVar5 = local_30;
  }
LAB_012d00e3:
  if ((local_28 != '\0') && (lVar5 != 0)) {
    FUN_00d50b20();
  }
  uVar6 = FUN_00d6f370();
  lVar1 = g_027bedd0;
  if (g_027bedd0 != 0) {
    uVar6 = FUN_00d50b00();
  }
  g_028ac87a = FUN_00d70f90(uVar6,0);
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
  }
  return;
}

