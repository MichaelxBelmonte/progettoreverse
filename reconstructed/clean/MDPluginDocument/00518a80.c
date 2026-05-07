// Function: FUN_00518a80
// Address: 00518a80
// Size: 3543 bytes
// Class: MDPluginDocument

void FUN_00518a80(void)

{
  void*puVar1;
  char cVar2;
  uint64_t uVar3;
  int64_t *plVar4;
  void *pvVar5;
  void*puVar6;
  char *pcVar7;
  int64_t lVar8;
  void* pVar9;
  byte bVar11;
  int iVar12;
  int64_t this_ptr;
  void*puVar13;
  double dVar14;
  uint64_t uVar15;
  void*local_148;
  char local_140;
  void*local_138;
  char local_130;
  void*local_128;
  char local_120;
  void*local_118;
  char local_110;
  void*local_108;
  char local_100;
  int64_t local_f8;
  char local_f0;
  char local_e8;
  undefined7 uStack_e7;
  char local_e0;
  int64_t local_d8;
  char local_d0;
  int64_t local_c8;
  char local_c0;
  int64_t local_b8;
  char local_b0;
  int64_t local_a8;
  char local_a0;
  void*local_98;
  uint64_t local_90;
  int64_t *local_88;
  void*local_80;
  void*local_78;
  void*local_70;
  char local_68 [8];
  void*local_60;
  uint64_t local_58;
  int local_50;
  int64_t local_48;
  char local_40 [16];
  int64_t lVar10;
  
  if (*(char *)(this_ptr + 0x35a) == '\0') {
    return;
  }
  if (*(int64_t *)(this_ptr + 0x108) == 0) {
    return;
  }
  if (*(int64_t *)(this_ptr + 0x110) == 0) {
    return;
  }
  FUN_0078b9c0();
  puVar13 = local_70;
  if ((local_68[0] != '\0') && (local_70 != (void*)0x0)) {
    FUN_00d50b20();
  }
  if (puVar13 == (void*)0x0) {
    return;
  }
  FUN_0078b9c0();
  iVar12 = *(int *)((int64_t)local_70 + 0xc);
  if (local_68[0] != '\0') {
    FUN_00d50b20();
  }
  lVar8 = g_026f6fd0;
  if (iVar12 == 0) {
    return;
  }
  if (g_026f6fd0 != 0) {
    FUN_00d50b00();
  }
  dVar14 = (double)FUN_00e7d6f0();
  uVar3 = (uint64_t)(dVar14 * g_023907c0);
  uVar3 = (int64_t)(dVar14 * g_023907c0 - g_023907c8) & (int64_t)uVar3 >> 0x3f | uVar3;
  FUN_0071a120();
  if ((((local_68[0] == '\0') && (local_70 != (void*)0x0)) &&
      (FUN_00d50b00(), local_68[0] != '\0')) && (local_70 != (void*)0x0)) {
    FUN_00d50b20();
  }
  bVar11 = (char)uVar3 + (char)(uVar3 / 3) * -3;
  local_48 = lVar8;
  local_40[0] = '\0';
  FUN_000175c0();
  puVar13 = local_70;
  if (local_68[0] == '\0') {
    if (((local_70 != (void*)0x0) && (FUN_00d50b00(), local_68[0] != '\0')) &&
       (local_70 != (void*)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_68[0] = '\0';
  }
  if ((local_40[0] != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if (puVar13 != (void*)0x0) {
    local_68[0] = '\0';
    local_70 = puVar13;
    bVar11 = FUN_00c70bc0();
    if ((local_68[0] != '\0') && (local_70 != (void*)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  FUN_00d50b20();
  if ((puVar13 != (void*)0x0 & bVar11) == 0) {
    lVar10 = *(int64_t *)(this_ptr + 0x308);
    if (lVar8 != 0) {
      FUN_00d50b20();
    }
    if (lVar10 != 0) goto LAB_00518c7c;
    FUN_0051be00();
    local_78 = local_70;
    if (local_70 == (void*)0x0) {
      local_78 = (void*)0x0;
      local_90 = 0;
    }
    else {
      local_90 = CONCAT71((int7)((uint64_t)local_70 >> 8),1);
      if (((local_68[0] == '\0') && (FUN_00d50b00(), local_68[0] != '\0')) &&
         (local_70 != (void*)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    if (lVar8 != 0) {
      FUN_00d50b20();
    }
LAB_00518c7c:
    local_90 = 0;
    local_78 = (void*)0x0;
  }
  FUN_0051ba20();
  lVar8 = local_48;
  FUN_004405c0();
  puVar13 = local_70;
  if (local_68[0] == '\0') {
    if (((local_70 != (void*)0x0) && (FUN_00d50b00(), local_68[0] != '\0')) &&
       (local_70 != (void*)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_68[0] = '\0';
  }
  if ((local_40[0] != '\0') && (lVar8 != 0)) {
    FUN_00d50b20();
  }
  local_80 = puVar13;
  FUN_004b8a30();
  plVar4 = (int64_t *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar4 + 0x18))();
  local_88 = plVar4;
  FUN_0078b9c0();
  puVar1 = local_70;
  if (local_68[0] == '\0') {
    if (local_70 != (void*)0x0) {
      FUN_00d50b00();
      if ((local_68[0] != '\0') && (local_70 != (void*)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_00518d69;
    }
  }
  else if (local_70 != (void*)0x0) {
LAB_00518d69:
    local_68[0] = '\0';
    local_70 = (void*)0x0;
    local_98 = puVar1;
    local_60 = puVar1;
    local_58 = 0xffffffff;
    local_50 = 0;
    local_58._4_4_ = 0;
    while( true ) {
      if (local_58._4_4_ != 0) {
        if (local_58._4_4_ < 1) {
          iVar12 = -local_58._4_4_;
        }
        else {
          iVar12 = (int)local_58 - local_58._4_4_;
          local_58 = CONCAT44(local_58._4_4_,iVar12);
          FUN_00d23690();
          local_50 = local_50 + local_58._4_4_;
          iVar12 = 0;
        }
        local_58 = CONCAT44(iVar12,(int)local_58);
      }
      lVar8 = (int64_t)(int)local_58;
      iVar12 = (int)local_58 + 1;
      local_58 = CONCAT44(local_58._4_4_,iVar12);
      if (*(int *)((int64_t)local_60 + 0xc) <= iVar12) break;
      lVar10 = local_60[2];
      local_70 = *(void**)(lVar10 + 8 + lVar8 * 8);
      FUN_004f9670();
      lVar8 = local_48;
      pVar9 = (void*)lVar10;
      if (local_40[0] == '\0') {
        if (((local_48 != 0) && (FUN_00d50b00(), local_40[0] != '\0')) && (local_48 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_40[0] = '\0';
      }
      pvVar5 = _pthread_getspecific(pVar9);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar15 = FUN_004fae50();
      lVar10 = local_48;
      local_d0 = 0;
      if (local_40[0] == '\0') {
        if (local_48 != 0) {
          uVar15 = FUN_00d50b00();
        }
      }
      else {
        local_40[0] = '\0';
      }
      local_d0 = '\x01';
      local_d8 = lVar10;
      FUN_0053ac50(uVar15,&local_d8);
      if ((local_d0 != '\0') && (local_d8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_40[0] != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if (lVar8 != 0) {
        FUN_00d50b20();
      }
    }
    FUN_000be170();
    FUN_00d50b20();
    puVar13 = local_80;
  }
  puVar6 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar6 = &g_02572358;
  (*g_02572370)();
  FUN_004b5af0();
  puVar1 = local_70;
  if (local_68[0] == '\0') {
    if (local_70 != (void*)0x0) {
      FUN_00d50b00();
      if ((local_68[0] != '\0') && (local_70 != (void*)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_0051901f;
    }
  }
  else if (local_70 != (void*)0x0) {
LAB_0051901f:
    local_68[0] = '\0';
    local_70 = (void*)0x0;
    local_60 = puVar1;
    local_58 = 0xffffffff;
    local_50 = 0;
    local_58._4_4_ = 0;
    while( true ) {
      if (local_58._4_4_ != 0) {
        if (local_58._4_4_ < 1) {
          iVar12 = -local_58._4_4_;
        }
        else {
          iVar12 = (int)local_58 - local_58._4_4_;
          local_58 = CONCAT44(local_58._4_4_,iVar12);
          FUN_00d23690();
          local_50 = local_50 + local_58._4_4_;
          iVar12 = 0;
        }
        local_58 = CONCAT44(iVar12,(int)local_58);
      }
      lVar8 = (int64_t)(int)local_58;
      iVar12 = (int)local_58 + 1;
      local_58 = CONCAT44(local_58._4_4_,iVar12);
      if (*(int *)((int64_t)local_60 + 0xc) <= iVar12) break;
      local_70 = *(void**)(local_60[2] + 8 + lVar8 * 8);
      FUN_003b7950();
      lVar8 = local_48;
      if ((((local_40[0] == '\0') && (local_48 != 0)) && (FUN_00d50b00(), local_40[0] != '\0')) &&
         (local_48 != 0)) {
        FUN_00d50b20();
      }
      local_40[0] = '\0';
      local_48 = lVar8;
      cVar2 = FUN_00ca18c0();
      if ((local_40[0] != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if (cVar2 == '\0') {
        local_40[0] = '\0';
        local_48 = lVar8;
        FUN_00d21140();
        if ((local_40[0] != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_40[0] = '\0';
        local_48 = lVar8;
        FUN_00ca13a0();
        if ((local_40[0] != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
      }
      if (lVar8 != 0) {
        FUN_00d50b20();
      }
    }
    FUN_00274d30();
    FUN_00d50b20();
    puVar13 = local_80;
  }
  FUN_00c9fe20();
  puVar1 = local_70;
  plVar4 = (int64_t *)local_68;
  if (local_68[0] == '\0') {
    plVar4 = &local_48;
  }
  local_48 = CONCAT71(local_48._1_7_,local_68[0]);
  *(char *)plVar4 = '\0';
  if ((local_68[0] != '\0') && (local_70 != (void*)0x0)) {
    FUN_00d50b20();
  }
  if ((char)local_48 == '\0') {
    if (puVar1 != (void*)0x0) {
      FUN_00d50b00();
      goto LAB_005191ee;
    }
  }
  else if (puVar1 != (void*)0x0) {
LAB_005191ee:
    local_68[0] = '\0';
    local_70 = (void*)0x0;
    local_98 = puVar1;
    local_60 = puVar1;
    local_58 = 0xffffffff;
    local_50 = 0;
    local_58._4_4_ = 0;
    while( true ) {
      if (local_58._4_4_ != 0) {
        if (local_58._4_4_ < 1) {
          iVar12 = -local_58._4_4_;
        }
        else {
          iVar12 = (int)local_58 - local_58._4_4_;
          local_58 = CONCAT44(local_58._4_4_,iVar12);
          FUN_00d23690();
          local_50 = local_50 + local_58._4_4_;
          iVar12 = 0;
        }
        local_58 = CONCAT44(iVar12,(int)local_58);
      }
      lVar8 = (int64_t)(int)local_58;
      iVar12 = (int)local_58 + 1;
      local_58 = CONCAT44(local_58._4_4_,iVar12);
      if (*(int *)((int64_t)local_60 + 0xc) <= iVar12) break;
      local_70 = *(void**)(local_60[2] + 8 + lVar8 * 8);
      if (*(int *)((int64_t)puVar6 + 0xc) < 1) {
        local_130 = '\0';
        local_138 = local_70;
        FUN_0053ad00(local_60[2],&local_138);
        local_b0 = 0;
        lVar8 = CONCAT71(uStack_e7,local_e8);
        if (local_e0 == '\0') {
          if (lVar8 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_e0 = '\0';
        }
        local_b0 = '\x01';
        local_b8 = lVar8;
        FUN_003b6860();
        lVar8 = local_48;
        local_c0 = 0;
        if (local_40[0] == '\0') {
          if (local_48 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_40[0] = '\0';
        }
        local_c0 = '\x01';
        local_c8 = lVar8;
        FUN_004b7a60();
        if ((local_c0 != '\0') && (local_c8 != 0)) {
          FUN_00d50b20();
        }
        if ((local_40[0] != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
        if ((local_b0 != '\0') && (local_b8 != 0)) {
          FUN_00d50b20();
        }
        if ((local_e0 != '\0') && (CONCAT71(uStack_e7,local_e8) != 0)) {
          FUN_00d50b20();
        }
        if ((local_130 != '\0') && (local_138 != (void*)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        uVar15 = FUN_00d23310();
        lVar8 = local_48;
        local_e8 = local_40[0];
        pcVar7 = local_40;
        if (local_40[0] == '\0') {
          pcVar7 = &local_e8;
        }
        *pcVar7 = '\0';
        if ((local_40[0] != '\0') && (lVar8 != 0)) {
          uVar15 = FUN_00d50b20();
        }
        local_f0 = 0;
        if ((local_e8 == '\0') && (lVar8 != 0)) {
          uVar15 = FUN_00d50b00();
        }
        local_f8 = lVar8;
        local_f0 = '\x01';
        local_148 = local_70;
        local_140 = '\0';
        FUN_004b8670(uVar15,&local_148);
        if ((local_140 != '\0') && (local_148 != (void*)0x0)) {
          FUN_00d50b20();
        }
        if ((local_f0 != '\0') && (local_f8 != 0)) {
          FUN_00d50b20();
        }
        FUN_00d23620();
      }
    }
    FUN_00018280();
    FUN_00d50b20();
    puVar13 = local_80;
  }
  if (puVar6 != (void*)0x0) {
    local_68[0] = '\0';
    local_70 = (void*)0x0;
    local_58 = 0xffffffff;
    local_50 = 0;
    local_58._4_4_ = 0;
    local_60 = puVar6;
    while( true ) {
      if (local_58._4_4_ != 0) {
        if (local_58._4_4_ < 1) {
          iVar12 = -local_58._4_4_;
        }
        else {
          iVar12 = (int)local_58 - local_58._4_4_;
          local_58 = CONCAT44(local_58._4_4_,iVar12);
          FUN_00d23690();
          local_50 = local_50 + local_58._4_4_;
          iVar12 = 0;
        }
        local_58 = CONCAT44(iVar12,(int)local_58);
      }
      lVar8 = (int64_t)(int)local_58;
      iVar12 = (int)local_58 + 1;
      local_58 = CONCAT44(local_58._4_4_,iVar12);
      if (*(int *)((int64_t)local_60 + 0xc) <= iVar12) break;
      local_128 = *(void**)(local_60[2] + 8 + lVar8 * 8);
      local_120 = '\0';
      local_70 = local_128;
      uVar15 = FUN_004b5c00(local_60[2],&local_128);
      lVar8 = local_48;
      if ((local_40[0] != '\0') && (local_48 != 0)) {
        uVar15 = FUN_00d50b20();
      }
      if ((local_120 != '\0') && (local_128 != (void*)0x0)) {
        uVar15 = FUN_00d50b20();
      }
      puVar13 = local_80;
      if (lVar8 != 0) {
        local_118 = local_70;
        local_110 = '\0';
        FUN_004b5c00(uVar15,&local_118);
        lVar8 = local_48;
        local_a0 = 0;
        if (local_40[0] == '\0') {
          if (local_48 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_40[0] = '\0';
        }
        local_a0 = '\x01';
        local_a8 = lVar8;
        FUN_004b8440();
        if ((local_a0 != '\0') && (local_a8 != 0)) {
          FUN_00d50b20();
        }
        if ((local_40[0] != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
        if ((local_110 != '\0') && (local_118 != (void*)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    FUN_00018280();
  }
  if (local_78 == (void*)0x0) goto LAB_00519870;
  local_108 = local_78;
  local_100 = '\0';
  FUN_004b8020();
  puVar1 = local_70;
  if (local_68[0] == '\0') {
    if (((local_70 != (void*)0x0) && (FUN_00d50b00(), local_68[0] != '\0')) &&
       (local_70 != (void*)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_68[0] = '\0';
  }
  if ((local_100 != '\0') && (local_108 != (void*)0x0)) {
    FUN_00d50b20();
  }
  if (puVar1 == (void*)0x0) goto LAB_00519870;
  FUN_004b5af0();
  puVar1 = local_70;
  if (local_68[0] == '\0') {
    if (local_70 != (void*)0x0) {
      FUN_00d50b00();
      if ((local_68[0] != '\0') && (local_70 != (void*)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_005197d6;
    }
  }
  else if (local_70 != (void*)0x0) {
LAB_005197d6:
    local_68[0] = '\0';
    local_70 = (void*)0x0;
    local_60 = puVar1;
    local_58 = 0xffffffff;
    local_50 = 0;
    while( true ) {
      lVar8 = (int64_t)(int)local_58;
      iVar12 = (int)local_58 + 1;
      local_58 = CONCAT44(local_58._4_4_,iVar12);
      if (*(int *)((int64_t)local_60 + 0xc) <= iVar12) break;
      local_70 = *(void**)(local_60[2] + 8 + lVar8 * 8);
      FUN_003b72f0();
      if (local_58._4_4_ != 0) {
        if (local_58 < 0) {
          iVar12 = -local_58._4_4_;
        }
        else {
          local_58 = CONCAT44(local_58._4_4_,(int)local_58 - local_58._4_4_);
          FUN_00d23690();
          local_50 = local_50 + local_58._4_4_;
          iVar12 = 0;
        }
        local_58 = CONCAT44(iVar12,(int)local_58);
      }
    }
    FUN_00274d30();
    FUN_00d50b20();
  }
  FUN_00d50b20();
LAB_00519870:
  FUN_004b8a40();
  if (puVar6 != (void*)0x0) {
    FUN_00d50b20();
  }
  if (local_88 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (puVar13 != (void*)0x0) {
    FUN_00d50b20();
  }
  if (((char)local_90 != '\0') && (local_78 != (void*)0x0)) {
    FUN_00d50b20();
  }
  return;
}

