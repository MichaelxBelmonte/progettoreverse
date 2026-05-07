// Function: FUN_01f62050
// Address: 01f62050
// Size: 3209 bytes
// Class: GNDictionary

void FUN_01f62050(uint64_t param_1,int64_t *param_2)

{
  int64_t lVar1;
  void*puVar2;
  uint8_t uVar3;
  char cVar4;
  void*puVar5;
  void*puVar6;
  int64_t *plVar7;
  uint64_t uVar8;
  int64_t *plVar9;
  byte bVar10;
  uint *puVar11;
  uint64_t uVar12;
  void*puVar13;
  void*this_ptr;
  undefined7 uVar14;
  uint32_t uVar15;
  int64_t local_b8;
  char local_b0;
  void*local_a8;
  char local_a0;
  uint32_t local_94;
  void*local_90;
  char local_88;
  void*local_80;
  char local_78;
  void*local_70;
  char local_68;
  uint64_t local_60;
  int64_t local_58;
  char local_50;
  uint64_t local_48;
  void*local_40;
  char local_38;
  
  if (*param_2 == 0) {
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
    return;
  }
  FUN_00c77cd0();
  uVar3 = FUN_00c7b220();
  if ((local_38 != '\0') && (local_40 != (void*)0x0)) {
    FUN_00d50b20();
  }
  puVar5 = (void*)0x0;
  uVar12 = 0;
  switch(uVar3) {
  case 0x43:
    puVar5 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    puVar6 = &g_02590d10;
    *puVar5 = &g_02590d20;
    goto LAB_01f6217c;
  case 0x45:
    FUN_00dddf90();
    puVar5 = local_40;
    if (local_40 == (void*)0x0) {
LAB_01f6223d:
      puVar5 = (void*)0x0;
      uVar12 = 0;
    }
    else {
      uVar12 = 1;
      if (((local_38 == '\0') && (FUN_00d50b00(), local_38 != '\0')) &&
         (local_40 != (void*)0x0)) {
        FUN_00d50b20();
      }
    }
    break;
  case 0x50:
    FUN_00ddde70();
    puVar5 = local_40;
    if (local_40 == (void*)0x0) goto LAB_01f6223d;
    uVar12 = 1;
    if (((local_38 == '\0') && (FUN_00d50b00(), local_38 != '\0')) &&
       (local_40 != (void*)0x0)) {
      FUN_00d50b20();
    }
    break;
  case 0x52:
    FUN_00dddf30();
    puVar5 = local_40;
    if (local_40 == (void*)0x0) goto LAB_01f6223d;
    uVar12 = 1;
    if (((local_38 == '\0') && (FUN_00d50b00(), local_38 != '\0')) &&
       (local_40 != (void*)0x0)) {
      FUN_00d50b20();
    }
    break;
  case 0x53:
    FUN_00ddded0();
    puVar5 = local_40;
    if (local_40 == (void*)0x0) goto LAB_01f6223d;
    uVar12 = 1;
    if (((local_38 == '\0') && (FUN_00d50b00(), local_38 != '\0')) &&
       (local_40 != (void*)0x0)) {
      FUN_00d50b20();
    }
    break;
  case 0x71:
    puVar5 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    puVar6 = &g_025910e8;
    *puVar5 = &g_025910f8;
    *(void*)((int64_t)puVar5 + 0xc) = 0;
    puVar5[2] = 0x100000000;
LAB_01f6217c:
    (**(code **)(puVar6 + 0x28))();
    uVar12 = 1;
  }
  local_60 = uVar12;
  FUN_00c77cd0();
  uVar3 = FUN_00c7b220();
  if ((local_38 != '\0') && (local_40 != (void*)0x0)) {
    FUN_00d50b20();
  }
  plVar9 = g_028007c8;
  plVar7 = (int64_t *)0x0;
  puVar11 = &switchD_01f62290::switchdataD_01f63404;
  puVar13 = puVar5;
  switch(uVar3) {
  case 0x40:
    if (g_028007c8 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    FUN_00c77cd0();
    FUN_00c798d0();
    local_90 = local_40;
    local_88 = 0;
    if (local_38 == '\0') {
      if (local_40 != (void*)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_88 = '\x01';
    cVar4 = (**(code **)(*plVar9 + 0x50))();
    if ((local_88 != '\0') && (local_90 != (void*)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (void*)0x0)) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    uVar15 = FUN_00d50b20();
    lVar1 = g_028007d0;
    if (cVar4 != '\0') {
      if (g_028007d0 != 0) {
        uVar15 = FUN_00d50b00();
      }
      local_b8 = 0;
      local_b0 = '\0';
      uVar8 = FUN_00ddfeb0(uVar15,&local_b8);
      puVar13 = local_40;
      uVar14 = (undefined7)((uint64_t)plVar9 >> 8);
      if (local_40 == puVar5) {
        if (((char)local_60 == '\0') && (local_40 != (void*)0x0)) {
          puVar13 = puVar5;
          if (local_38 != '\0') goto LAB_01f62796;
          uVar12 = CONCAT71(uVar14,1);
          FUN_00d50b00();
        }
        else {
          uVar12 = local_60 & 0xffffffff;
          puVar13 = puVar5;
        }
LAB_01f627e6:
        if ((local_38 == '\0') || (local_40 == (void*)0x0)) {
          local_60 = uVar12 & 0xffffffff;
        }
        else {
          FUN_00d50b20();
          local_60 = uVar12 & 0xffffffff;
        }
      }
      else {
        if (local_38 == '\0') {
          if (local_40 != (void*)0x0) {
            FUN_00d50b00();
          }
          uVar12 = CONCAT71(uVar14,1);
          if (((char)local_60 != '\0') && (puVar5 != (void*)0x0)) {
            FUN_00d50b20();
          }
          goto LAB_01f627e6;
        }
        if (((char)local_60 != '\0') && (puVar5 != (void*)0x0)) {
          uVar8 = FUN_00d50b20();
        }
LAB_01f62796:
        local_38 = '\0';
        local_60 = CONCAT71((int7)((uint64_t)uVar8 >> 8),1);
      }
      if ((local_b0 != '\0') && (local_b8 != 0)) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
    }
    plVar9 = g_027815c0;
    if (g_027815c0 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    FUN_00c77cd0();
    FUN_00c798d0();
    local_70 = local_40;
    local_68 = 0;
    if (local_38 == '\0') {
      if (local_40 != (void*)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_68 = '\x01';
    cVar4 = (**(code **)(*plVar9 + 0x50))();
    if (cVar4 == '\0') {
      if ((local_68 != '\0') && (local_70 != (void*)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (void*)0x0)) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
      if (puVar13 != (void*)0x0) goto LAB_01f62941;
      local_94 = (uint32_t)CONCAT71((int7)((uint64_t)puVar11 >> 8),1);
      local_48 = 0;
      plVar7 = (int64_t *)0x0;
    }
    else {
      if ((local_68 != '\0') && (local_70 != (void*)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (void*)0x0)) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
LAB_01f62941:
      plVar7 = (int64_t *)FUN_00e8fc40();
      FUN_0006daf0();
      *(void*)(plVar7 + 0x27) = 0;
      plVar7[0x2e] = 0;
      *(void*)(plVar7 + 0x2f) = 0;
      plVar7[0x30] = 0;
      *(void*)(plVar7 + 0x31) = 0;
      plVar7[0x28] = 0;
      plVar7[0x29] = 0;
      *(void*)(plVar7 + 0x2a) = 0;
      plVar7[0x2b] = 0;
      plVar7[0x2c] = 0;
      *(void*)((int64_t)plVar7 + 0x165) = 0;
      *(void*)((int64_t)plVar7 + 0x18c) = 0;
      *(void*)((int64_t)plVar7 + 0x194) = 0;
      *(void*)((int64_t)plVar7 + 0x199) = 0;
      plVar7[0x35] = 0;
      plVar7[0x36] = 0;
      plVar7[0x37] = 0;
      plVar7[0x38] = 0;
      *plVar7 = (int64_t)&g_0269c118;
      plVar7[2] = (int64_t)&g_0269cc70;
      plVar7[0x39] = (int64_t)&g_0269ccb0;
      plVar7[0x45] = 0;
      *(void*)(plVar7 + 0x46) = 0;
      plVar7[0x47] = 0;
      plVar7[0x3a] = 0;
      plVar7[0x3b] = 0;
      *(void*)(plVar7 + 0x3c) = 0;
      plVar7[0x3f] = 0;
      plVar7[0x40] = 0;
      plVar7[0x3d] = 0;
      plVar7[0x3e] = 0;
      *(void*)((int64_t)plVar7 + 0x205) = 0;
      plVar7[0x42] = 0;
      plVar7[0x43] = 0;
      *(void*)((int64_t)plVar7 + 0x21d) = 0;
      (*g_0269c130)();
      uVar8 = (**(code **)(*plVar7 + 0x4d0))(g_02390d00,g_02423960);
      if (puVar13 != (void*)0x0) {
        local_a0 = '\0';
        local_a8 = puVar13;
        uVar8 = FUN_01e058f0();
        local_94 = 0;
        local_48 = CONCAT71((int7)((uint64_t)uVar8 >> 8),1);
        if ((local_a0 == '\0') || (local_a8 == (void*)0x0)) goto LAB_01f62acb;
        uVar8 = FUN_00d50b20();
      }
      local_48 = CONCAT71((int7)((uint64_t)uVar8 >> 8),1);
      local_94 = 0;
    }
LAB_01f62acb:
    plVar9 = g_028007d8;
    if (g_028007d8 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    FUN_00c77cd0();
    FUN_00c798d0();
    local_80 = local_40;
    local_78 = 0;
    if (local_38 == '\0') {
      if (local_40 != (void*)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_78 = '\x01';
    cVar4 = (**(code **)(*plVar9 + 0x50))();
    if ((local_78 != '\0') && (local_80 != (void*)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (void*)0x0)) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
    if (cVar4 == '\0') {
      cVar4 = (char)local_48;
    }
    else {
      plVar9 = (int64_t *)FUN_00e8fc40();
      FUN_0006daf0();
      *(void*)(plVar9 + 0x27) = 0;
      plVar9[0x2e] = 0;
      *(void*)(plVar9 + 0x2f) = 0;
      plVar9[0x30] = 0;
      *(void*)(plVar9 + 0x31) = 0;
      plVar9[0x28] = 0;
      plVar9[0x29] = 0;
      *(void*)(plVar9 + 0x2a) = 0;
      plVar9[0x2b] = 0;
      plVar9[0x2c] = 0;
      *(void*)((int64_t)plVar9 + 0x165) = 0;
      *(void*)((int64_t)plVar9 + 0x18c) = 0;
      *(void*)((int64_t)plVar9 + 0x194) = 0;
      *(void*)((int64_t)plVar9 + 0x199) = 0;
      plVar9[0x35] = 0;
      plVar9[0x36] = 0;
      plVar9[0x37] = 0;
      plVar9[0x38] = 0;
      *plVar9 = (int64_t)&g_02679c28;
      plVar9[2] = (int64_t)&g_0267a6f0;
      plVar9[0x39] = 0;
      plVar9[0x3a] = 0;
      uVar8 = (*g_02679c40)();
      uVar14 = (undefined7)((uint64_t)uVar8 >> 8);
      if (plVar9 == plVar7) {
        plVar9 = plVar7;
        if ((char)local_94 == '\0') {
          FUN_00d50b20();
        }
        else {
          local_48 = CONCAT71(uVar14,1);
        }
      }
      else {
        bVar10 = (byte)local_48;
        local_48 = CONCAT71(uVar14,1);
        if ((bVar10 & plVar7 != (int64_t *)0x0) == 1) {
          FUN_00d50b20();
        }
      }
      cVar4 = (char)local_48;
      (**(code **)(*plVar9 + 0x4d0))(0,g_02423960);
      plVar7 = plVar9;
    }
    *(void*)(this_ptr + 1) = 0;
    if (cVar4 == '\0') {
      if (plVar7 == (int64_t *)0x0) {
        plVar7 = (int64_t *)0x0;
      }
      else {
        FUN_00d50b00();
      }
    }
    goto LAB_01f62406;
  case 0x43:
  case 0x45:
  case 0x49:
  case 0x50:
  case 0x52:
  case 0x53:
  case 99:
  case 100:
  case 0x66:
  case 0x69:
  case 0x6c:
  case 0x71:
  case 0x73:
switchD_01f62290_caseD_43:
    plVar7 = (int64_t *)FUN_00e8fc40();
    FUN_0006daf0();
    *(void*)(plVar7 + 0x27) = 0;
    plVar7[0x2e] = 0;
    *(void*)(plVar7 + 0x2f) = 0;
    plVar7[0x30] = 0;
    *(void*)(plVar7 + 0x31) = 0;
    plVar7[0x28] = 0;
    plVar7[0x29] = 0;
    *(void*)(plVar7 + 0x2a) = 0;
    plVar7[0x2b] = 0;
    plVar7[0x2c] = 0;
    *(void*)((int64_t)plVar7 + 0x165) = 0;
    *(void*)((int64_t)plVar7 + 0x18c) = 0;
    *(void*)((int64_t)plVar7 + 0x194) = 0;
    *(void*)((int64_t)plVar7 + 0x199) = 0;
    plVar7[0x35] = 0;
    plVar7[0x36] = 0;
    plVar7[0x37] = 0;
    plVar7[0x38] = 0;
    *plVar7 = (int64_t)&g_0269c118;
    plVar7[2] = (int64_t)&g_0269cc70;
    plVar7[0x39] = (int64_t)&g_0269ccb0;
    plVar7[0x45] = 0;
    *(void*)(plVar7 + 0x46) = 0;
    plVar7[0x47] = 0;
    plVar7[0x3a] = 0;
    plVar7[0x3b] = 0;
    *(void*)(plVar7 + 0x3c) = 0;
    plVar7[0x3f] = 0;
    plVar7[0x40] = 0;
    plVar7[0x3d] = 0;
    plVar7[0x3e] = 0;
    *(void*)((int64_t)plVar7 + 0x205) = 0;
    plVar7[0x42] = 0;
    plVar7[0x43] = 0;
    *(void*)((int64_t)plVar7 + 0x21d) = 0;
    (*g_0269c130)();
    (**(code **)(*plVar7 + 0x4d0))(g_02390d00,g_02423960);
    if (puVar5 != (void*)0x0) {
      FUN_01e058f0();
    }
    break;
  case 0x62:
    plVar7 = (int64_t *)FUN_00e8fc40();
    FUN_0006daf0();
    *(void*)(plVar7 + 0x27) = 0;
    plVar7[0x2e] = 0;
    *(void*)(plVar7 + 0x2f) = 0;
    plVar7[0x30] = 0;
    *(void*)(plVar7 + 0x31) = 0;
    plVar7[0x28] = 0;
    plVar7[0x29] = 0;
    *(void*)(plVar7 + 0x2a) = 0;
    plVar7[0x2b] = 0;
    plVar7[0x2c] = 0;
    *(void*)((int64_t)plVar7 + 0x165) = 0;
    *(void*)((int64_t)plVar7 + 0x18c) = 0;
    *(void*)((int64_t)plVar7 + 0x194) = 0;
    *(void*)((int64_t)plVar7 + 0x199) = 0;
    plVar7[0x35] = 0;
    plVar7[0x36] = 0;
    plVar7[0x37] = 0;
    plVar7[0x38] = 0;
    *(void*)((int64_t)plVar7 + 500) = 0;
    *(void*)(plVar7 + 0x3f) = 0;
    plVar7[0x43] = 0;
    plVar7[0x3c] = 0;
    plVar7[0x3d] = 0;
    plVar7[0x3a] = 0;
    plVar7[0x3b] = 0;
    *(void*)(plVar7 + 0x3e) = 0;
    *(void*)((int64_t)plVar7 + 0x1fc) = 0;
    *(void*)((int64_t)plVar7 + 0x204) = 0;
    *(void*)((int64_t)plVar7 + 0x20c) = 0;
    *plVar7 = (int64_t)&g_02691920;
    plVar7[2] = (int64_t)&g_026923f8;
    plVar7[0x39] = (int64_t)&g_02692438;
    (*g_02691938)();
    (**(code **)(*plVar7 + 0x4d0))(g_02390d2c,g_02423960);
    break;
  case 0x65:
    FUN_00c77cd0();
    FUN_00c7b2d0();
    puVar2 = local_40;
    if (local_38 == '\0') {
      if (((local_40 != (void*)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
         (local_40 != (void*)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if (puVar2 == (void*)0x0) goto switchD_01f62290_caseD_43;
    plVar7 = (int64_t *)FUN_00e8fc40();
    FUN_001e3c20();
    (**(code **)(*plVar7 + 0x18))();
    FUN_01d6f820();
    FUN_00d50b00();
    FUN_00d50b20();
    FUN_00d50b20();
  }
  *(void*)(this_ptr + 1) = 0;
LAB_01f62406:
  *this_ptr = plVar7;
  *(void*)(this_ptr + 1) = 1;
  if (((char)local_60 != '\0') && (puVar13 != (void*)0x0)) {
    FUN_00d50b20();
  }
  return;
}

