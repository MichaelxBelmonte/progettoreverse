// Function: FUN_014f4330
// Address: 014f4330
// Size: 5803 bytes
// Class: Unknown

uint64_t
FUN_014f4330(uint32_t param_1,uint param_2,int64_t *param_3,int64_t *param_4,uint32_t param_5,
            uint64_t param_6,uint32_t param_7,int64_t *param_8,int64_t *param_9)

{
  uint8_t uVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  code *pcVar5;
  void*puVar6;
  bool bVar7;
  byte bVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  void *pvVar12;
  float *pfVar13;
  int64_t lVar14;
  uint64_t uVar15;
  undefined7 uVar17;
  void*puVar16;
  uint in_ECX;
  void* pVar18;
  int64_t *plVar19;
  int64_t lVar20;
  uint64_t uVar21;
  uint3 uVar22;
  int64_t *arg1;
  int iVar23;
  uint64_t uVar24;
  int64_t lVar25;
  char cVar26;
  byte bVar27;
  uint64_t uVar28;
  byte bVar29;
  bool bVar30;
  uint32_t uVar31;
  float fVar32;
  float fVar33;
  int64_t *local_res8;
  uint64_t local_res10;
  int *local_res18;
  int64_t local_210;
  char local_208;
  int64_t local_1c8;
  char local_1c0;
  int64_t local_1b8;
  char local_1b0;
  int64_t local_1a8;
  char local_1a0;
  int64_t local_198;
  char local_190;
  int64_t local_188;
  char local_180;
  int64_t local_178;
  char local_170;
  int64_t local_168;
  char local_160;
  void*local_158;
  char local_150;
  int64_t local_148;
  char local_140;
  int64_t local_138;
  char local_130;
  int64_t local_128;
  char local_120;
  uint32_t local_118;
  uint local_114;
  int64_t local_110;
  uint64_t local_108;
  uint64_t local_100;
  float *local_f8;
  uint64_t local_f0;
  float local_e4;
  uint local_e0;
  float local_dc;
  uint64_t local_c0;
  void*local_a8;
  int64_t local_a0;
  int64_t local_98;
  void*local_78;
  float *local_70;
  int64_t local_68;
  char local_60;
  int64_t local_50;
  int64_t local_40;
  byte local_31;
  
  if (*param_9 == 0) {
    return 0;
  }
  uVar21 = (uint64_t)param_2;
  iVar9 = *(int *)(*param_4 + 0x28);
  uVar1 = *(void*)(*param_4 + 0x5c);
  plVar19 = param_8;
  local_118 = param_1;
  uVar31 = FUN_00d216c0();
  pVar18 = (void*)plVar19;
  if (*arg1 == 0) {
    return 0;
  }
  local_e0 = CONCAT31(local_e0._1_3_,uVar1);
  iVar23 = in_ECX - param_2;
  if (iVar23 == 0 || (int)in_ECX < (int)param_2) {
    return 0;
  }
  FUN_014c34a0(uVar31,uVar21);
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  if (local_68 == 0) {
    return 0;
  }
  pvVar12 = _pthread_getspecific(pVar18);
  if (pvVar12 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_014c34a0();
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  if (local_68 == 0) {
    return 0;
  }
  local_f0 = (uint64_t)in_ECX;
  pfVar13 = (float *)FUN_00e83010();
  local_f8 = pfVar13;
  ___bzero();
  iVar10 = (int)local_f0;
  if (iVar10 < (int)param_2) {
    bVar2 = false;
    local_a0 = 0;
    local_c0 = 0;
    local_98 = 0;
  }
  else {
    local_98 = 0;
    uVar28 = 0;
    local_a0 = 0;
    bVar2 = false;
    local_c0 = uVar21;
    uVar24 = uVar21;
    do {
      pVar18 = (void*)local_c0;
      uVar15 = FUN_014c34a0(local_c0,uVar24);
      uVar17 = (undefined7)((uint64_t)uVar15 >> 8);
      cVar26 = (char)uVar28;
      if (local_68 == local_98) {
        local_c0 = uVar28;
        if ((cVar26 == '\0') && (local_68 != 0)) {
          local_c0 = CONCAT71(uVar17,1);
          if (local_60 != '\0') goto LAB_014f48ae;
          local_c0 = CONCAT71(uVar17,1);
          FUN_00d50b00();
        }
joined_r0x014f487f:
        if ((local_60 != '\0') && (local_68 != 0)) {
          FUN_00d50b20();
        }
      }
      else if (local_60 == '\0') {
        if (local_68 != 0) {
          uVar15 = FUN_00d50b00();
        }
        local_c0 = CONCAT71((int7)((uint64_t)uVar15 >> 8),1);
        if (cVar26 == '\0') {
          local_98 = local_68;
        }
        else {
          if (local_98 != 0) {
            FUN_00d50b20();
            local_98 = local_68;
            goto joined_r0x014f487f;
          }
          local_98 = local_68;
        }
      }
      else {
        local_c0 = CONCAT71(uVar17,1);
        if ((cVar26 == '\0') || (local_98 == 0)) {
          local_98 = local_68;
        }
        else {
          FUN_00d50b20();
          local_98 = local_68;
        }
      }
LAB_014f48ae:
      pvVar12 = _pthread_getspecific(pVar18);
      if (pvVar12 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_014c34a0();
      if (local_68 == local_a0) {
        if ((!bVar2) && (local_68 != 0)) {
          bVar2 = true;
          if (local_60 != '\0') goto LAB_014f49ee;
          FUN_00d50b00();
LAB_014f49a1:
          bVar2 = true;
        }
        if ((local_60 != '\0') && (local_68 != 0)) {
          FUN_00d50b20();
        }
      }
      else if (local_60 == '\0') {
        if (local_68 != 0) {
          FUN_00d50b00();
        }
        if (bVar2) {
          if (local_a0 != 0) {
            FUN_00d50b20();
            local_a0 = local_68;
            goto LAB_014f49a1;
          }
          local_a0 = local_68;
          bVar2 = true;
        }
        else {
          local_a0 = local_68;
          bVar2 = true;
        }
      }
      else if ((bVar2) && (local_a0 != 0)) {
        FUN_00d50b20();
        local_a0 = local_68;
        bVar2 = true;
      }
      else {
        local_a0 = local_68;
        bVar2 = true;
      }
LAB_014f49ee:
      if (local_98 == 0) {
        if (local_a0 != 0) {
          fVar32 = *(float *)(local_a0 + 0x58);
          goto LAB_014f4760;
        }
      }
      else {
        fVar32 = *(float *)(local_98 + 0x58);
        if (local_a0 != 0) {
          fVar32 = (fVar32 + *(float *)(local_a0 + 0x58)) * g_0239011c;
        }
LAB_014f4760:
        *pfVar13 = fVar32;
      }
      pfVar13 = pfVar13 + 1;
      uVar11 = (int)uVar24 + 1;
      uVar24 = (uint64_t)uVar11;
      uVar28 = local_c0 & 0xffffffff;
    } while (iVar10 + 1U != uVar11);
  }
  pVar18 = 1;
  uVar31 = FUN_015c1480((float)iVar9 * g_0240dec8 * g_023908d8,iVar23 + 1);
  FUN_014c34a0(uVar31,uVar21);
  fVar32 = *(float *)(local_68 + 0x28);
  pvVar12 = _pthread_getspecific(pVar18);
  if (pvVar12 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_014c34a0();
  fVar33 = *(float *)(local_210 + 0x28);
  if (local_208 != '\0') {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  iVar9 = FUN_014c2f80();
  bVar29 = 1;
  pVar18 = param_2;
  if ((int)param_2 < iVar9) {
    FUN_014f38a0(uVar21,param_2 + 1);
    local_40 = local_68;
    pVar18 = 0;
    if (local_68 == 0) goto LAB_014f471c;
    lVar14 = local_68;
    if (local_60 == '\0') {
      FUN_00d50b00();
    }
    pVar18 = (void*)lVar14;
    pvVar12 = _pthread_getspecific(pVar18);
    if ((pvVar12 != (void *)0x0) && (lVar14 = FUN_00e8b990(), lVar14 != 0)) {
      pVar18 = (void*)local_68;
    }
    FUN_014c2a40();
    iVar9 = *(int *)(local_68 + 0xc);
    if (local_60 != '\0') {
      FUN_00d50b20();
    }
    if (2 < iVar9) {
      local_60 = '\0';
      FUN_00d21140();
    }
    bVar29 = 0;
    bVar27 = 1;
    bVar8 = 1;
  }
  else {
LAB_014f471c:
    bVar27 = 0;
    bVar8 = 0;
    local_40 = 0;
  }
  pvVar12 = _pthread_getspecific(pVar18);
  if (pvVar12 != (void *)0x0) {
    FUN_00e8b990();
  }
  iVar10 = FUN_014c2f20();
  iVar9 = (uint)local_f0;
  local_31 = bVar8;
  if ((int)(uint)local_f0 <= iVar10) goto LAB_014f4e05;
  lVar14 = *arg1;
  local_31 = *(byte *)(arg1 + 1);
  if (lVar14 == local_40) {
    bVar30 = local_31 != 0;
    local_31 = bVar8;
    if ((bVar30) && ((bool)(bVar29 & lVar14 != 0))) {
      local_31 = 1;
      FUN_00d50b00();
    }
  }
  else {
    if ((local_31 != 0) && (lVar14 != 0)) {
      FUN_00d50b00();
    }
    bVar30 = local_40 != 0;
    local_40 = lVar14;
    if ((bool)(bVar27 & bVar30)) {
      FUN_00d50b20();
    }
  }
  pvVar12 = _pthread_getspecific(pVar18);
  iVar9 = (int)local_f0;
  if ((pvVar12 != (void *)0x0) && (lVar14 = FUN_00e8b990(), lVar14 != 0)) {
    pVar18 = (void*)local_40;
  }
  FUN_014f38a0();
  lVar14 = *arg1;
  if (lVar14 == local_68) {
    if (((char)arg1[1] == '\0') && (local_68 != 0)) {
      if (local_60 == '\0') {
        FUN_00d50b00();
      }
      goto LAB_014f4d5d;
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    lVar25 = arg1[1];
    if (local_60 == '\0') {
      if (local_68 != 0) {
        FUN_00d50b00();
      }
      *arg1 = local_68;
      if (((char)lVar25 != '\0') && (lVar14 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      *arg1 = local_68;
      if (((char)lVar25 != '\0') && (lVar14 != 0)) {
        FUN_00d50b20();
      }
    }
LAB_014f4d5d:
    *(void*)(arg1 + 1) = 1;
  }
  if (local_40 == 0) {
    local_40 = 0;
  }
  else {
    pvVar12 = _pthread_getspecific(pVar18);
    if ((pvVar12 != (void *)0x0) && (lVar14 = FUN_00e8b990(), lVar14 != 0)) {
      pVar18 = (void*)local_40;
    }
    FUN_014c2a40();
    iVar10 = *(int *)(local_68 + 0xc);
    if (local_60 != '\0') {
      FUN_00d50b20();
    }
    if (2 < iVar10) {
      local_68 = local_40;
      local_60 = '\0';
      FUN_00d21140();
    }
  }
LAB_014f4e05:
  FUN_014c3620();
  local_e4 = *(float *)(local_68 + 0x14);
  if (local_60 != '\0') {
    FUN_00d50b20();
  }
  pvVar12 = _pthread_getspecific(pVar18);
  if (pvVar12 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_014c35c0();
  local_dc = *(float *)(local_68 + 0x14);
  if (local_60 != '\0') {
    FUN_00d50b20();
  }
  uVar11 = param_2 + 1;
  if ((int)uVar11 < iVar9) {
    local_110 = (int64_t)*(int *)(*param_4 + 0x30);
    local_108 = FUN_00e83010();
    local_100 = FUN_00e83010();
    local_a8 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *local_a8 = &g_025f1488;
    *(void*)((int64_t)local_a8 + 0xc) = 0;
    *(void*)((int64_t)local_a8 + 0x14) = 0;
    *(void*)((int64_t)local_a8 + 0x1c) = 0;
    *(void*)((int64_t)local_a8 + 0x24) = 0;
    *(void*)((int64_t)local_a8 + 0x2c) = 0;
    *(void*)((int64_t)local_a8 + 0x34) = 0;
    *(void*)((int64_t)local_a8 + 0x3c) = 0;
    *(void*)((int64_t)local_a8 + 0x44) = 0;
    local_a8[9] = 0;
    local_a8[10] = 0;
    pcVar5 = g_025f14a0;
    (*g_025f14a0)();
    local_1c8 = *param_3;
    local_1c0 = '\0';
    local_1b8 = *param_4;
    local_1b0 = '\0';
    local_1a8 = 0;
    local_1a0 = '\0';
    local_198 = *local_res8;
    local_190 = '\0';
    local_188 = 0;
    local_180 = '\0';
    local_114 = local_e0 & 0xff;
    FUN_015c4d90(0,local_100,&local_1c8,&local_1b8,&local_198,local_res10,local_114,6,&local_188);
    if ((local_180 != '\0') && (local_188 != 0)) {
      FUN_00d50b20();
    }
    if ((local_190 != '\0') && (local_198 != 0)) {
      FUN_00d50b20();
    }
    if ((local_1a0 != '\0') && (local_1a8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_1b0 != '\0') && (local_1b8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_1c0 != '\0') && (local_1c8 != 0)) {
      FUN_00d50b20();
    }
    fVar32 = (fVar32 + fVar33) * g_0239011c;
    local_dc = (local_dc - local_e4) / (float)iVar23;
    local_70 = local_f8 + ((int64_t)(int)uVar11 - (int64_t)(int)param_2);
    local_50 = 0;
    bVar4 = false;
    local_78 = (void*)0x0;
    bVar30 = false;
    bVar3 = true;
    do {
      local_e4 = local_e4 + local_dc;
      local_e0 = uVar11;
      FUN_014eea90();
      if (local_68 == local_50) {
        if ((!bVar4) && (local_68 != 0)) {
          bVar4 = true;
          if (local_60 != '\0') goto LAB_014f52fe;
          FUN_00d50b00();
LAB_014f52ba:
          bVar4 = true;
        }
        if ((local_60 != '\0') && (local_68 != 0)) {
          FUN_00d50b20();
        }
      }
      else if (local_60 == '\0') {
        if (local_68 != 0) {
          FUN_00d50b00();
        }
        if (bVar4) {
          if (local_50 != 0) {
            FUN_00d50b20();
            local_50 = local_68;
            goto LAB_014f52ba;
          }
          local_50 = local_68;
          bVar4 = true;
        }
        else {
          local_50 = local_68;
          bVar4 = true;
        }
      }
      else if ((bVar4) && (local_50 != 0)) {
        FUN_00d50b20();
        local_50 = local_68;
        bVar4 = true;
      }
      else {
        local_50 = local_68;
        bVar4 = true;
      }
LAB_014f52fe:
      puVar16 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar16 = &g_025f1488;
      *(void*)((int64_t)puVar16 + 0xc) = 0;
      *(void*)((int64_t)puVar16 + 0x14) = 0;
      *(void*)((int64_t)puVar16 + 0x1c) = 0;
      *(void*)((int64_t)puVar16 + 0x24) = 0;
      *(void*)((int64_t)puVar16 + 0x2c) = 0;
      *(void*)((int64_t)puVar16 + 0x34) = 0;
      *(void*)((int64_t)puVar16 + 0x3c) = 0;
      *(void*)((int64_t)puVar16 + 0x44) = 0;
      puVar16[9] = 0;
      puVar16[10] = 0;
      (*pcVar5)();
      if (puVar16 == local_78) {
        puVar16 = local_78;
        if (bVar30) {
          FUN_00d50b20();
          bVar7 = bVar30;
        }
        else {
          bVar7 = true;
        }
      }
      else {
        bVar7 = true;
        if ((bVar30) && (local_78 != (void*)0x0)) {
          FUN_00d50b20();
        }
      }
      bVar30 = bVar7;
      local_178 = *param_3;
      local_170 = '\0';
      local_168 = *param_4;
      local_160 = '\0';
      local_150 = '\0';
      local_148 = *local_res8;
      local_140 = '\0';
      local_138 = 0;
      local_130 = '\0';
      local_158 = local_a8;
      FUN_015c4d90(0,local_100,&local_178,&local_168,&local_148,local_res10,local_114,0x1e,
                   &local_138);
      if ((local_130 != '\0') && (local_138 != 0)) {
        FUN_00d50b20();
      }
      if ((local_140 != '\0') && (local_148 != 0)) {
        FUN_00d50b20();
      }
      if ((local_150 != '\0') && (local_158 != (void*)0x0)) {
        FUN_00d50b20();
      }
      if ((local_160 != '\0') && (local_168 != 0)) {
        FUN_00d50b20();
      }
      if ((local_170 != '\0') && (local_178 != 0)) {
        FUN_00d50b20();
      }
      FUN_015c6ba0();
      if (local_a8 == puVar16) {
        puVar6 = local_a8;
        bVar7 = bVar3;
        if ((!bVar3) && (local_a8 != (void*)0x0)) {
          FUN_00d50b00();
          bVar7 = true;
        }
      }
      else {
        if (puVar16 != (void*)0x0) {
          FUN_00d50b00();
        }
        puVar6 = puVar16;
        bVar7 = bVar30;
        if ((bVar3) && (local_a8 != (void*)0x0)) {
          FUN_00d50b20();
        }
      }
      local_a8 = puVar6;
      FUN_015c6b60();
      FUN_015c66c0();
      FUN_015c6ba0();
      FUN_014eecb0(local_118,(float)*(double *)(*param_4 + 0x50),*(void*)(*param_4 + 0x2c));
      FUN_014eed60((float)*(double *)(*param_4 + 0x50),*(void*)(*param_4 + 0x20));
      *(float *)(local_50 + 0x28) = fVar32;
      fVar33 = g_02394274;
      if (g_02394274 <= *local_70) {
        fVar33 = *local_70;
      }
      *(float *)(local_50 + 0x58) = fVar33;
      iVar9 = *local_res18;
      *local_res18 = iVar9 + 1;
      *(int *)(local_50 + 0x54) = iVar9 + 1;
      local_128 = local_50;
      local_120 = '\0';
      FUN_014c2e20();
      if ((local_120 != '\0') && (local_128 != 0)) {
        FUN_00d50b20();
      }
      local_70 = local_70 + 1;
      uVar11 = local_e0 + 1;
      local_78 = puVar16;
      bVar3 = bVar7;
    } while ((uint)local_f0 != uVar11);
    FUN_00e83070();
    local_70 = (float *)local_a8;
    FUN_00e83070();
  }
  else {
    bVar7 = false;
    local_70 = (float *)0x0;
    bVar30 = false;
    local_78 = (void*)0x0;
    bVar4 = false;
    local_50 = 0;
  }
  FUN_014f3ed0();
  uVar15 = param_6;
  uVar31 = FUN_014f0020(param_6,param_5,param_7);
  FUN_014f0770(uVar31,param_5);
  lVar14 = *param_8;
  if (*(int *)(lVar14 + 0xc) < 1) {
    uVar22 = (uint3)((uint)param_5 >> 8);
  }
  else {
    lVar25 = 0;
    uVar21 = CONCAT71((int7)((uint64_t)uVar15 >> 8),local_31);
    uVar24 = uVar21 & 0xffffffff;
    do {
      pVar18 = (void*)uVar21;
      lVar14 = *(int64_t *)(*(int64_t *)(lVar14 + 0x10) + lVar25 * 8);
      bVar29 = (byte)uVar24;
      if (local_40 == lVar14) {
        lVar14 = local_40;
        local_31 = bVar29;
        if ((bVar29 == 0) && (local_40 != 0)) {
          local_31 = 1;
          FUN_00d50b00();
        }
      }
      else {
        lVar20 = lVar14;
        if (lVar14 != 0) {
          FUN_00d50b00();
        }
        pVar18 = (void*)lVar20;
        local_31 = 1;
        if ((bVar29 != 0) && (local_40 != 0)) {
          FUN_00d50b20();
        }
      }
      local_40 = lVar14;
      pvVar12 = _pthread_getspecific(pVar18);
      if (pvVar12 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar15 = param_6;
      FUN_014f0020(param_6,param_5,param_7);
      pvVar12 = _pthread_getspecific((void*)uVar15);
      if (pvVar12 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_014f0770();
      lVar25 = lVar25 + 1;
      lVar14 = *param_8;
      uVar21 = (uint64_t)*(int *)(lVar14 + 0xc);
      uVar22 = 0;
      uVar24 = (uint64_t)local_31;
    } while (lVar25 < (int64_t)uVar21);
  }
  FUN_00e83070();
  if ((bVar7) && (local_70 != (float *)0x0)) {
    FUN_00d50b20();
  }
  if ((bVar30) && (local_78 != (void*)0x0)) {
    FUN_00d50b20();
  }
  if ((local_31 != 0) && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((bVar2) && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  if (((char)local_c0 != '\0') && (local_98 != 0)) {
    FUN_00d50b20();
  }
  uVar15 = CONCAT71((uint7)uVar22,1);
  if (bVar4) {
    if (local_50 != 0) {
      FUN_00d50b20();
      return uVar15;
    }
    return uVar15;
  }
  return uVar15;
}

