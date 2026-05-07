// Function: FUN_0137d640
// Address: 0137d640
// Size: 2529 bytes
// Class: Unknown

void* FUN_0137d640(void)

{
  uint64_t uVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  void*puVar6;
  int64_t lVar7;
  void *pvVar8;
  char *pcVar9;
  void* pVar10;
  uint64_t uVar11;
  int64_t lVar12;
  int iVar13;
  int64_t *plVar14;
  int64_t arg1;
  void*this_ptr;
  uint64_t uVar15;
  int64_t lVar16;
  float fVar17;
  uint32_t uVar18;
  double dVar19;
  double dVar20;
  uint8_t local_130 [8];
  int64_t local_128;
  uint8_t local_120;
  uint64_t local_118;
  uint8_t local_110;
  uint64_t local_108;
  double local_100;
  int64_t local_f8;
  uint8_t local_f0;
  uint64_t local_e8;
  int64_t local_e0;
  char local_d8;
  int64_t local_d0;
  char local_c8;
  int64_t local_b8;
  char local_b0;
  char local_a8;
  undefined7 uStack_a7;
  char local_a0;
  int64_t local_98;
  void*local_90;
  int64_t local_88;
  char local_80 [8];
  int64_t local_78;
  uint64_t local_70;
  int local_68;
  int64_t local_58;
  uint8_t local_49;
  double local_48;
  int64_t local_38;
  
  local_49 = 0;
  puVar6 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar6 = &g_025683c0;
  (*g_025683d8)();
  FUN_00c92170();
  local_90 = puVar6;
  FUN_00c92160();
  lVar7 = *(int64_t *)(arg1 + 0x40);
  if (lVar7 == 0) {
LAB_0137d7e6:
    bVar4 = true;
    local_128 = 0;
  }
  else {
    FUN_00d50b00();
    local_80[0] = '\0';
    local_88 = 0;
    local_70 = 0xffffffff;
    local_68 = 0;
    local_78 = lVar7;
    while( true ) {
      lVar7 = (int64_t)(int)local_70;
      iVar13 = (int)local_70 + 1;
      local_70 = CONCAT44(local_70._4_4_,iVar13);
      if (*(int *)(local_78 + 0xc) <= iVar13) break;
      local_88 = *(int64_t *)(*(int64_t *)(local_78 + 0x10) + 8 + lVar7 * 8);
      pvVar8 = _pthread_getspecific((void*)*(int64_t *)(local_78 + 0x10));
      if (pvVar8 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_48 = (double)FUN_013de8d0();
      iVar13 = *(int *)(local_90 + 3);
      FUN_00c8e340(SUB84(local_48,0),1);
      *(double *)(local_90[2] + (int64_t)iVar13) = local_48;
      if (local_70._4_4_ != 0) {
        if (local_70 < 0) {
          iVar13 = -local_70._4_4_;
        }
        else {
          local_70 = CONCAT44(local_70._4_4_,(int)local_70 - local_70._4_4_);
          FUN_00d23690();
          local_68 = local_68 + local_70._4_4_;
          iVar13 = 0;
        }
        local_70 = CONCAT44(iVar13,(int)local_70);
      }
    }
    FUN_001150f0();
    FUN_00d50b20();
    local_128 = *(int64_t *)(arg1 + 0x40);
    if (local_128 == 0) goto LAB_0137d7e6;
    FUN_00d50b00();
    bVar4 = false;
  }
  local_120 = 1;
  local_118 = 0;
  local_110 = 0;
  puVar6 = &local_118;
  FUN_0136e4c0(puVar6,&local_128,0);
  pVar10 = (void*)puVar6;
  local_98 = local_88;
  if (local_80[0] == '\0') {
    if (local_88 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_80[0] = '\0';
  }
  if (!bVar4) {
    FUN_00d50b20();
  }
  lVar7 = *(int64_t *)(arg1 + 0x1b0);
  if (lVar7 != 0) {
    FUN_00d50b00();
  }
  pvVar8 = _pthread_getspecific(pVar10);
  if (pvVar8 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01313ad0();
  pvVar8 = _pthread_getspecific(pVar10);
  if (pvVar8 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012cb110();
  pvVar8 = _pthread_getspecific(pVar10);
  if (pvVar8 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e7210();
  lVar16 = local_88;
  local_58 = local_88;
  if (local_80[0] == '\0') {
    if (((local_88 != 0) && (FUN_00d50b00(), local_80[0] != '\0')) && (local_88 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_80[0] = '\0';
  }
  if ((local_b0 != '\0') && (local_b8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_a0 != '\0') && (CONCAT71(uStack_a7,local_a8) != 0)) {
    FUN_00d50b20();
  }
  if (lVar7 != 0) {
    FUN_00d50b20();
  }
  uVar11 = 0;
  FUN_004f2260(0,FUN_012e8c90);
  lVar7 = local_88;
  if (lVar16 == local_88) {
LAB_0137da33:
    if (local_80[0] != '\0') {
LAB_0137da39:
      if (local_88 != 0) {
        FUN_00d50b20();
      }
    }
  }
  else {
    if (local_80[0] == '\0') {
      if (local_88 != 0) {
        FUN_00d50b00();
      }
      if (lVar16 != 0) {
        local_58 = lVar7;
        FUN_00d50b20();
        goto LAB_0137da33;
      }
      local_58 = lVar7;
      if (local_80[0] == '\0') goto LAB_0137da4d;
      goto LAB_0137da39;
    }
    if (lVar16 == 0) {
      local_58 = local_88;
    }
    else {
      local_58 = local_88;
      FUN_00d50b20();
    }
  }
LAB_0137da4d:
  plVar14 = *(int64_t **)(arg1 + 0x38);
  pvVar8 = _pthread_getspecific((void*)uVar11);
  if (pvVar8 != (void *)0x0) {
    plVar14 = *(int64_t **)(arg1 + 0x38);
    lVar7 = FUN_00e8b990();
    if (lVar7 != 0) {
      plVar14 = (int64_t *)plVar14[(uint64_t)(*(uint *)(lVar7 + 0x154) & 1) + 4];
    }
  }
  local_100 = (double)(**(code **)(*plVar14 + 0x370))();
  uVar2 = *(uint *)(local_58 + 0xc);
  if ((int)uVar2 < 1) {
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
    lVar7 = local_98;
  }
  else {
    bVar4 = false;
    lVar16 = 0;
    uVar15 = (uint64_t)uVar2;
    local_e8 = (uint64_t)uVar2;
    do {
      pVar10 = (void*)uVar11;
      uVar11 = (uint64_t)((int)uVar15 - 1);
      lVar7 = *(int64_t *)(*(int64_t *)(local_58 + 0x10) + uVar11 * 8);
      if (lVar7 != 0) {
        FUN_00d50b00();
      }
      local_38 = lVar7;
      pvVar8 = _pthread_getspecific(pVar10);
      if (pvVar8 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar19 = (double)FUN_0125a280();
      iVar13 = *(int *)(local_90 + 3);
      iVar5 = iVar13 + 7;
      if (-1 < iVar13) {
        iVar5 = iVar13;
      }
      lVar7 = 0;
      do {
        local_48 = dVar19;
        if (iVar5 >> 3 <= (int)lVar7) break;
        local_48 = *(double *)(local_90[2] + lVar7 * 8);
        dVar20 = local_48 - dVar19;
        lVar7 = lVar7 + 1;
      } while ((g_0240d308 <= dVar20) || (dVar20 <= g_023944d8));
      FUN_00d23340();
      lVar7 = local_88;
      local_a8 = local_80[0];
      pcVar9 = local_80;
      if (local_80[0] == '\0') {
        pcVar9 = &local_a8;
      }
      *pcVar9 = '\0';
      if ((local_80[0] != '\0') && (lVar7 != 0)) {
        FUN_00d50b20();
      }
      local_108 = uVar11;
      if (local_a8 == '\0') {
        if (lVar7 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_a8 = '\0';
      }
      local_f0 = 1;
      local_f8 = lVar7;
      lVar12 = (int64_t)(local_48 * local_100);
      FUN_0135f200(lVar12,&local_f8,local_130,&local_49);
      pVar10 = (void*)lVar12;
      if (local_b8 == lVar16) {
        if ((bVar4) || (local_b8 == 0)) {
          if ((local_b0 != '\0') && (local_b8 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          bVar4 = true;
          if (local_b0 == '\0') {
            FUN_00d50b00();
          }
        }
      }
      else if (local_b0 == '\0') {
        if (local_b8 != 0) {
          FUN_00d50b00();
        }
        if ((!bVar4) || (lVar16 == 0)) goto LAB_0137dd10;
        FUN_00d50b20();
        lVar16 = local_b8;
        bVar4 = true;
      }
      else if ((bVar4) && (lVar16 != 0)) {
        FUN_00d50b20();
        lVar16 = local_b8;
        bVar4 = true;
      }
      else {
LAB_0137dd10:
        lVar16 = local_b8;
        bVar4 = true;
      }
      if (lVar7 != 0) {
        FUN_00d50b20();
      }
      if (lVar16 != 0) {
        pvVar8 = _pthread_getspecific(pVar10);
        if (pvVar8 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_48 = (double)FUN_013de3b0();
        pvVar8 = _pthread_getspecific(pVar10);
        if ((pvVar8 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
          pVar10 = (void*)local_38;
        }
        fVar17 = (float)FUN_0125a2c0();
        if (g_023942a8 < (float)((uint)(local_48._0_4_ - fVar17) & g_02390140)) {
          local_d8 = '\0';
          local_e0 = lVar16;
          pvVar8 = _pthread_getspecific(pVar10);
          if ((pvVar8 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
            pVar10 = (void*)local_38;
          }
          uVar18 = FUN_0125a2c0();
          FUN_0137e3a0(uVar18,0);
          if ((local_d8 != '\0') && (local_e0 != 0)) {
            FUN_00d50b20();
          }
        }
        pvVar8 = _pthread_getspecific(pVar10);
        if (pvVar8 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_48 = (double)FUN_013de3b0();
        pvVar8 = _pthread_getspecific(pVar10);
        if ((pvVar8 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
          pVar10 = (void*)local_38;
        }
        fVar17 = (float)FUN_0125a2c0();
        if (g_02394240 < (float)((uint)(local_48._0_4_ - fVar17) & g_02390140)) {
          local_c8 = '\0';
          local_d0 = lVar16;
          pvVar8 = _pthread_getspecific(pVar10);
          if (pvVar8 != (void *)0x0) {
            FUN_00e8b990();
          }
          uVar18 = FUN_0125a2c0();
          FUN_0137e3a0(uVar18,1);
          if ((local_c8 != '\0') && (local_d0 != 0)) {
            FUN_00d50b20();
          }
        }
      }
      if (local_38 != 0) {
        FUN_00d50b20();
      }
      lVar7 = local_98;
      uVar1 = local_e8 - 1;
      bVar3 = 1 < (int64_t)local_e8;
      uVar11 = local_e8;
      uVar15 = local_108;
      local_e8 = uVar1;
    } while (bVar3);
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
    if ((bVar4) && (lVar16 != 0)) {
      FUN_00d50b20();
    }
    if (local_58 == 0) goto LAB_0137e030;
  }
  FUN_00d50b20();
LAB_0137e030:
  if (lVar7 != 0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return this_ptr;
}

