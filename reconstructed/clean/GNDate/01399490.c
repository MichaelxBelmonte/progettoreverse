// Function: FUN_01399490
// Address: 01399490
// Size: 11197 bytes
// Class: GNDate

void FUN_01399490(void* param_1,int64_t *param_2,uint64_t param_3,void *param_4)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  char cVar9;
  void *pvVar10;
  int64_t lVar11;
  uint64_t uVar12;
  int64_t *plVar13;
  int64_t lVar14;
  int64_t lVar15;
  void* pVar16;
  void* pVar17;
  int64_t *plVar18;
  int64_t *plVar19;
  int64_t *arg1;
  int64_t this_ptr;
  int64_t lVar20;
  byte bVar21;
  undefined7 uVar22;
  bool bVar23;
  bool bVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  int64_t *local_250;
  char local_248;
  int64_t local_240;
  char in_stack_fffffffffffffdc8;
  undefined7 in_stack_fffffffffffffdc9;
  int64_t local_230;
  char local_228;
  int64_t local_220;
  char local_218;
  int64_t local_210;
  char local_208;
  int64_t local_200;
  char local_1f8;
  int64_t local_1f0;
  char local_1e8;
  int64_t *local_1c0;
  char local_1b8;
  int64_t *local_1b0;
  char local_1a8;
  int64_t local_1a0;
  char local_198;
  int64_t *local_190;
  char local_188;
  int64_t *local_180;
  char local_178;
  int64_t *local_170;
  char local_168;
  int64_t *local_160;
  char local_158;
  int64_t local_150;
  char local_148;
  int64_t *local_140;
  char local_138;
  int64_t *local_130;
  char local_128;
  int64_t local_120;
  char local_118;
  int64_t *local_110;
  uint32_t local_104;
  uint64_t local_100;
  int64_t *local_f8;
  int64_t *local_f0;
  char local_e8;
  int64_t *local_e0;
  int64_t *local_d8;
  uint64_t local_d0;
  int64_t *local_c8;
  int64_t *local_c0;
  code *local_b8;
  int64_t local_b0;
  void* local_a8;
  int64_t *local_a0;
  int64_t *local_98;
  uint64_t local_90;
  uint64_t local_88;
  int64_t *local_78;
  void*local_70;
  int64_t *local_68;
  void*local_60;
  int64_t *local_38;
  
  local_118 = 0;
  lVar20 = *(int64_t *)(this_ptr + 0x40);
  local_110 = param_2;
  if (lVar20 != 0) {
    FUN_00d50b00();
  }
  local_118 = '\x01';
  local_120 = lVar20;
  FUN_0147ce20();
  local_c8 = local_c0;
  if ((char)local_b8 == '\0') {
    if (local_c0 != (int64_t *)0x0) {
      FUN_00d50b00();
      if (((char)local_b8 != '\0') && (local_c0 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    local_b8 = ((uint64_t)local_b8 & 0xffffffffffffff00);
  }
  if ((local_118 != '\0') && (local_120 != 0)) {
    FUN_00d50b20();
  }
  if (0 < (int)*(uint *)((int64_t)local_c8 + 0xc)) {
    lVar20 = (uint64_t)*(uint *)((int64_t)local_c8 + 0xc) + 1;
    do {
      param_1 = (void*)local_c8[2];
      pvVar10 = _pthread_getspecific(param_1);
      if (pvVar10 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013de560();
      plVar18 = local_c0;
      if (((char)local_b8 == '\0') && (local_c0 != (int64_t *)0x0)) {
        FUN_00d50b00();
        if (((char)local_b8 != '\0') && (local_c0 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      if (((plVar18 == *(int64_t **)(this_ptr + 0x118)) ||
          (plVar18 == *(int64_t **)(this_ptr + 0x128))) ||
         (plVar18 == *(int64_t **)(this_ptr + 0x120))) {
        FUN_00d23620();
      }
      if (plVar18 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      lVar20 = lVar20 + -1;
    } while (1 < lVar20);
  }
  local_e0 = (int64_t *)0x0;
  local_88 = 0;
  local_90 = 0;
  local_d0 = 0;
  local_a0 = (int64_t *)0x0;
  pvVar10 = _pthread_getspecific(param_1);
  if (pvVar10 != (void *)0x0) {
    local_e0 = (int64_t *)0x0;
    local_88 = 0;
    local_90 = 0;
    local_d0 = 0;
    local_a0 = (int64_t *)0x0;
    FUN_00e8b990();
  }
  local_e0 = (int64_t *)0x0;
  local_88 = 0;
  local_90 = 0;
  local_d0 = 0;
  local_a0 = (int64_t *)0x0;
  lVar20 = FUN_013de650();
  if (*(int *)((int64_t)local_c8 + 0xc) < 1) {
    bVar24 = false;
    local_d0 = 0;
    local_a0 = (int64_t *)0x0;
  }
  else {
    lVar15 = 0;
    local_a0 = (int64_t *)0x0;
    local_d0 = 0;
    do {
      lVar11 = local_c8[2];
      plVar18 = *(int64_t **)(lVar11 + lVar15 * 8);
      if (local_a0 == plVar18) {
        if (((char)local_d0 == '\0') && (local_a0 != (int64_t *)0x0)) {
          local_d0 = CONCAT71((int7)((uint64_t)lVar11 >> 8),1);
          FUN_00d50b00();
        }
      }
      else {
        if (plVar18 != (int64_t *)0x0) {
          lVar11 = FUN_00d50b00();
        }
        if (((char)local_d0 == '\0') || (local_a0 == (int64_t *)0x0)) {
          local_d0 = CONCAT71((int7)((uint64_t)lVar11 >> 8),1);
          local_a0 = plVar18;
        }
        else {
          local_a0 = plVar18;
          uVar12 = FUN_00d50b20();
          local_d0 = CONCAT71((int7)((uint64_t)uVar12 >> 8),1);
        }
      }
      if ((int64_t *)*arg1 != local_a0) {
        plVar18 = arg1;
        pvVar10 = _pthread_getspecific((void*)arg1);
        if ((pvVar10 != (void *)0x0) && (lVar11 = FUN_00e8b990(), lVar11 != 0)) {
          plVar18 = local_a0;
        }
        lVar11 = FUN_013de650();
        if (lVar11 <= lVar20) {
          bVar24 = true;
          goto LAB_0139993b;
        }
      }
      lVar15 = lVar15 + 1;
    } while (lVar15 < *(int *)((int64_t)local_c8 + 0xc));
    bVar24 = false;
    plVar18 = local_c8;
LAB_0139993b:
    param_1 = (void*)plVar18;
  }
  local_e0 = (int64_t *)0x0;
  local_88 = 0;
  local_90 = 0;
  pvVar10 = _pthread_getspecific(param_1);
  if (pvVar10 != (void *)0x0) {
    local_e0 = (int64_t *)0x0;
    local_88 = 0;
    local_90 = 0;
    FUN_00e8b990();
  }
  local_e0 = (int64_t *)0x0;
  local_88 = 0;
  local_90 = 0;
  lVar20 = FUN_013de650();
  local_e0 = (int64_t *)0x0;
  local_88 = 0;
  local_90 = 0;
  pvVar10 = _pthread_getspecific(param_1);
  if (pvVar10 != (void *)0x0) {
    local_e0 = (int64_t *)0x0;
    local_88 = 0;
    local_90 = 0;
    FUN_00e8b990();
  }
  local_e0 = (int64_t *)0x0;
  local_88 = 0;
  local_90 = 0;
  plVar13 = (int64_t *)FUN_013de790();
  plVar18 = plVar13;
  if (0 < *(int *)((int64_t)local_c8 + 0xc)) {
    lVar15 = 0;
    do {
      lVar11 = local_c8[2];
      plVar18 = *(int64_t **)(lVar11 + lVar15 * 8);
      if (local_a0 == plVar18) {
        if (((char)local_d0 == '\0') && (local_a0 != (int64_t *)0x0)) {
          local_d0 = CONCAT71((int7)((uint64_t)lVar11 >> 8),1);
          FUN_00d50b00();
        }
      }
      else {
        if (plVar18 != (int64_t *)0x0) {
          lVar11 = FUN_00d50b00();
        }
        if (((char)local_d0 == '\0') || (local_a0 == (int64_t *)0x0)) {
          local_d0 = CONCAT71((int7)((uint64_t)lVar11 >> 8),1);
          local_a0 = plVar18;
        }
        else {
          local_a0 = plVar18;
          uVar12 = FUN_00d50b20();
          local_d0 = CONCAT71((int7)((uint64_t)uVar12 >> 8),1);
        }
      }
      if ((int64_t *)*arg1 != local_a0) {
        plVar18 = arg1;
        pvVar10 = _pthread_getspecific((void*)arg1);
        pVar17 = (void*)plVar18;
        if ((pvVar10 != (void *)0x0) && (lVar11 = FUN_00e8b990(), lVar11 != 0)) {
          pVar17 = (void*)local_a0;
        }
        lVar11 = FUN_013de650();
        pvVar10 = _pthread_getspecific(pVar17);
        if ((pvVar10 != (void *)0x0) && (lVar14 = FUN_00e8b990(), lVar14 != 0)) {
          pVar17 = (void*)local_a0;
        }
        lVar14 = FUN_013de790();
        if ((int64_t)plVar13 + lVar20 <= lVar14 + lVar11) {
          uVar22 = (undefined7)((uint64_t)lVar15 >> 8);
          bVar21 = 1;
          goto LAB_01399d70;
        }
      }
      lVar15 = lVar15 + 1;
      plVar18 = local_c8;
    } while (lVar15 < *(int *)((int64_t)local_c8 + 0xc));
  }
  pVar17 = (void*)plVar18;
  bVar21 = 0;
  uVar22 = 0;
LAB_01399d70:
  pvVar10 = _pthread_getspecific(pVar17);
  if (pvVar10 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013e5de0();
  local_d8 = local_c0;
  plVar18 = local_c0;
  if (local_c0 == (int64_t *)0x0) {
    local_104 = 1;
    local_d8 = (int64_t *)0x0;
    local_100 = 0;
LAB_01399e37:
    pVar17 = (void*)plVar18;
  }
  else {
    plVar13 = local_c0;
    if ((char)local_b8 == '\0') {
      uVar12 = FUN_00d50b00();
      if (((char)local_b8 == '\0') || (local_c0 == (int64_t *)0x0)) {
        local_104 = 0;
        local_100 = CONCAT71((int7)((uint64_t)uVar12 >> 8),1);
        goto LAB_01399e37;
      }
      plVar13 = (int64_t *)FUN_00d50b20();
    }
    pVar17 = (void*)plVar18;
    local_100 = CONCAT71((int7)((uint64_t)plVar13 >> 8),1);
    local_104 = 0;
  }
  pvVar10 = _pthread_getspecific(pVar17);
  if (pvVar10 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013e61a0();
  local_98 = local_c0;
  bVar23 = local_c0 == (int64_t *)0x0;
  if (bVar23) {
    if (local_d8 == (int64_t *)0x0) {
      bVar4 = false;
      local_e0 = (int64_t *)0x0;
LAB_0139a112:
      if (((bool)(bVar24 | bVar21)) || (local_98 != (int64_t *)0x0)) {
        local_78 = (int64_t *)0x0;
        local_90 = 0;
        local_68 = (int64_t *)0x0;
        local_88 = 0;
        bVar24 = true;
        goto LAB_0139c07f;
      }
      if (*local_110 != 0) {
        local_b8 = ((uint64_t)local_b8 & 0xffffffffffffff00);
        local_c0 = (int64_t *)0x0;
        local_b0 = *(int64_t *)(*local_110 + 0x10);
        local_a8 = 0;
        if (*(int *)(local_b0 + 0xc) < 1) {
          local_38 = (int64_t *)0x0;
          bVar5 = false;
        }
        else {
          local_38 = (int64_t *)0x0;
          bVar5 = false;
          do {
            lVar20 = (int64_t)(int)local_a8;
            local_c0 = *(int64_t **)(*(int64_t *)(local_b0 + 0x10) + lVar20 * 8);
            pvVar10 = _pthread_getspecific(local_a8);
            pVar17 = (void*)lVar20;
            if (pvVar10 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_013e5700(0);
            plVar18 = local_f0;
            if (local_f0 == local_38) {
              plVar18 = local_38;
              bVar24 = bVar5;
              if ((bVar5) || (local_f0 == (int64_t *)0x0)) goto joined_r0x0139a2c6;
              bVar5 = true;
              if (local_e8 == '\0') {
                FUN_00d50b00();
                goto LAB_0139a2aa;
              }
            }
            else if (local_e8 == '\0') {
              if (local_f0 != (int64_t *)0x0) {
                FUN_00d50b00();
              }
              bVar24 = true;
              if ((bVar5) && (local_38 != (int64_t *)0x0)) {
                FUN_00d50b20();
                local_38 = plVar18;
LAB_0139a2aa:
                plVar18 = local_38;
                bVar24 = true;
              }
joined_r0x0139a2c6:
              bVar5 = bVar24;
              local_38 = plVar18;
              if ((local_e8 != '\0') && (local_f0 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
            }
            else if ((bVar5) && (local_38 != (int64_t *)0x0)) {
              FUN_00d50b20();
              local_38 = plVar18;
              bVar5 = true;
            }
            else {
              local_38 = local_f0;
              bVar5 = true;
            }
            pvVar10 = _pthread_getspecific(pVar17);
            if ((pvVar10 != (void *)0x0) && (lVar20 = FUN_00e8b990(), lVar20 != 0)) {
              pVar17 = (void*)local_38;
            }
            FUN_0139d190();
            FUN_00d45bc0();
            FUN_012642b0();
            if ((local_e8 != '\0') && (local_f0 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            pvVar10 = _pthread_getspecific(pVar17);
            if (pvVar10 != (void *)0x0) {
              FUN_00e8b990();
            }
            local_130 = local_38;
            local_128 = '\0';
            FUN_012e6a70();
            if ((local_128 != '\0') && (local_130 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            pvVar10 = _pthread_getspecific(pVar17);
            if (pvVar10 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0128c620();
            local_a8 = local_a8 + 1;
          } while ((int)local_a8 < *(int *)(local_b0 + 0xc));
          if (((char)local_b8 != '\0') && (local_c0 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        bVar24 = true;
        local_90 = 0;
        local_78 = (int64_t *)0x0;
        bVar6 = false;
        lVar11 = 0;
        goto joined_r0x0139b9dd;
      }
      local_78 = (int64_t *)0x0;
      local_90 = 0;
      bVar24 = true;
    }
    else {
      plVar18 = local_c0;
      pvVar10 = _pthread_getspecific(0);
      pVar17 = (void*)plVar18;
      if ((pvVar10 != (void *)0x0) && (lVar20 = FUN_00e8b990(), lVar20 != 0)) {
        pVar17 = (void*)local_d8;
      }
      FUN_013dfcb0();
      pvVar10 = _pthread_getspecific(pVar17);
      if (pvVar10 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013dd7c0();
      local_78 = local_c0;
      if (local_c0 == (int64_t *)0x0) {
        local_78 = (int64_t *)0x0;
        uVar12 = 0;
      }
      else if ((char)local_b8 == '\0') {
        FUN_00d50b00();
        uVar12 = CONCAT71(uVar22,1);
        if (((char)local_b8 != '\0') && (local_c0 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_b8 = ((uint64_t)local_b8 & 0xffffffffffffff00);
        uVar12 = CONCAT71(uVar22,1);
      }
      if ((local_e8 != '\0') && (local_f0 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      local_90 = uVar12;
      if (0 < *(int *)((int64_t)local_78 + 0xc)) {
        lVar15 = 0;
        local_38 = (int64_t *)0x0;
        lVar20 = 0;
        bVar24 = false;
        bVar23 = false;
        do {
          lVar11 = *(int64_t *)(local_78[2] + lVar15 * 8);
          plVar18 = local_78;
          if (lVar20 == lVar11) {
            lVar11 = lVar20;
            bVar6 = bVar23;
            if ((!bVar23) && (lVar20 != 0)) {
              FUN_00d50b00();
              bVar6 = true;
            }
          }
          else {
            if (lVar11 != 0) {
              FUN_00d50b00();
            }
            bVar6 = true;
            if ((bVar23) && (lVar20 != 0)) {
              FUN_00d50b20();
            }
          }
          pVar17 = (void*)plVar18;
          pvVar10 = _pthread_getspecific(pVar17);
          if (pvVar10 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_013e5700(0);
          plVar18 = local_c0;
          if (local_c0 == local_38) {
            plVar18 = local_38;
            bVar5 = bVar24;
            if ((bVar24) || (local_c0 == (int64_t *)0x0)) goto joined_r0x0139b706;
            bVar5 = true;
            if ((char)local_b8 == '\0') {
              FUN_00d50b00();
              goto LAB_0139b6ea;
            }
          }
          else if ((char)local_b8 == '\0') {
            if (local_c0 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
            bVar5 = true;
            if ((bVar24) && (local_38 != (int64_t *)0x0)) {
              FUN_00d50b20();
              local_38 = plVar18;
LAB_0139b6ea:
              plVar18 = local_38;
              bVar5 = true;
            }
joined_r0x0139b706:
            local_38 = plVar18;
            if (((char)local_b8 != '\0') && (local_c0 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            bVar5 = true;
            if ((bVar24) && (local_38 != (int64_t *)0x0)) {
              FUN_00d50b20();
              local_38 = plVar18;
            }
            else {
              local_38 = local_c0;
            }
          }
          pvVar10 = _pthread_getspecific(pVar17);
          if ((pvVar10 != (void *)0x0) && (lVar20 = FUN_00e8b990(), lVar20 != 0)) {
            pVar17 = (void*)local_38;
          }
          pvVar10 = _pthread_getspecific(pVar17);
          if (pvVar10 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01259520();
          FUN_012642b0();
          pvVar10 = _pthread_getspecific(pVar17);
          if (pvVar10 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01266fe0();
          pvVar10 = _pthread_getspecific(pVar17);
          if (pvVar10 != (void *)0x0) {
            FUN_00e8b990();
          }
          local_160 = local_38;
          local_158 = '\0';
          uVar12 = FUN_012e6a70();
          if ((local_158 != '\0') && (local_160 != (int64_t *)0x0)) {
            uVar12 = FUN_00d50b20();
          }
          if (((char)local_b8 != '\0') && (local_c0 != (int64_t *)0x0)) {
            uVar12 = FUN_00d50b20();
          }
          local_148 = '\0';
          local_140 = local_38;
          local_138 = '\0';
          local_150 = lVar11;
          FUN_012e0130(uVar12,&local_140);
          if ((local_208 != '\0') && (local_210 != 0)) {
            FUN_00d50b20();
          }
          if ((local_138 != '\0') && (local_140 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_148 != '\0') && (local_150 != 0)) {
            FUN_00d50b20();
          }
          pvVar10 = _pthread_getspecific(pVar17);
          if (pvVar10 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0128c620();
          lVar15 = lVar15 + 1;
          lVar20 = lVar11;
          bVar24 = bVar5;
          bVar23 = bVar6;
        } while (lVar15 < *(int *)((int64_t)local_78 + 0xc));
        bVar24 = false;
        bVar4 = false;
        local_e0 = (int64_t *)0x0;
joined_r0x0139b9dd:
        bVar7 = false;
        bVar23 = true;
        bVar3 = true;
        bVar8 = true;
        bVar2 = true;
        local_68 = (int64_t *)0x0;
        local_88 = 0;
        local_60 = (void*)0x0;
        local_70 = (void*)0x0;
        plVar18 = (int64_t *)0x0;
        goto joined_r0x0139b9dd;
      }
      local_e0 = (int64_t *)0x0;
      bVar4 = false;
      bVar24 = false;
    }
    local_68 = (int64_t *)0x0;
    local_88 = 0;
    bVar23 = true;
LAB_0139c07f:
    local_38 = (int64_t *)0x0;
    bVar5 = false;
    bVar7 = false;
    bVar6 = false;
    local_60 = (void*)0x0;
    local_70 = (void*)0x0;
    plVar18 = (int64_t *)0x0;
    lVar11 = 0;
    bVar8 = true;
  }
  else {
    plVar18 = local_c0;
    if ((char)local_b8 == '\0') {
      FUN_00d50b00();
      if (((char)local_b8 != '\0') && (local_c0 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    pVar17 = (void*)plVar18;
    if (local_d8 == (int64_t *)0x0) {
      if (bVar24) {
        bVar4 = true;
        local_e0 = local_98;
        goto LAB_0139a112;
      }
      pvVar10 = _pthread_getspecific(pVar17);
      if ((pvVar10 != (void *)0x0) && (lVar20 = FUN_00e8b990(), lVar20 != 0)) {
        pVar17 = (void*)local_98;
      }
      FUN_013dfcb0();
      pvVar10 = _pthread_getspecific(pVar17);
      if (pvVar10 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013dd7c0();
      local_68 = local_c0;
      if (local_c0 == (int64_t *)0x0) {
        local_68 = (int64_t *)0x0;
        uVar12 = 0;
      }
      else if ((char)local_b8 == '\0') {
        FUN_00d50b00();
        uVar12 = CONCAT71(uVar22,1);
        if (((char)local_b8 != '\0') && (local_c0 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_b8 = ((uint64_t)local_b8 & 0xffffffffffffff00);
        uVar12 = CONCAT71(uVar22,1);
      }
      if ((local_e8 != '\0') && (local_f0 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      local_88 = uVar12;
      if (0 < *(int *)((int64_t)local_68 + 0xc)) {
        lVar20 = 0;
        plVar18 = (int64_t *)0x0;
        local_38 = (int64_t *)0x0;
        bVar24 = false;
        bVar23 = false;
        do {
          plVar13 = *(int64_t **)(local_68[2] + lVar20 * 8);
          plVar19 = local_68;
          if (plVar18 == plVar13) {
            plVar13 = plVar18;
            bVar7 = bVar23;
            if ((!bVar23) && (plVar18 != (int64_t *)0x0)) {
              FUN_00d50b00();
              bVar7 = true;
            }
          }
          else {
            if (plVar13 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
            bVar7 = true;
            if ((bVar23) && (plVar18 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
          plVar18 = plVar13;
          pVar17 = (void*)plVar19;
          pvVar10 = _pthread_getspecific(pVar17);
          if (pvVar10 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_013e5700(0);
          plVar13 = local_c0;
          if (local_c0 == local_38) {
            plVar13 = local_38;
            bVar5 = bVar24;
            if ((bVar24) || (local_c0 == (int64_t *)0x0)) goto joined_r0x0139bcf2;
            bVar5 = true;
            if ((char)local_b8 == '\0') {
              FUN_00d50b00();
              goto LAB_0139bcd7;
            }
          }
          else if ((char)local_b8 == '\0') {
            if (local_c0 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
            bVar5 = true;
            if ((bVar24) && (local_38 != (int64_t *)0x0)) {
              FUN_00d50b20();
              local_38 = plVar13;
LAB_0139bcd7:
              plVar13 = local_38;
              bVar5 = true;
            }
joined_r0x0139bcf2:
            local_38 = plVar13;
            if (((char)local_b8 != '\0') && (local_c0 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            bVar5 = true;
            if ((bVar24) && (local_38 != (int64_t *)0x0)) {
              FUN_00d50b20();
              local_38 = plVar13;
            }
            else {
              local_38 = local_c0;
            }
          }
          pvVar10 = _pthread_getspecific(pVar17);
          if ((pvVar10 != (void *)0x0) && (lVar15 = FUN_00e8b990(), lVar15 != 0)) {
            pVar17 = (void*)local_38;
          }
          pvVar10 = _pthread_getspecific(pVar17);
          if (pvVar10 != (void *)0x0) {
            FUN_00e8b990();
          }
          dVar27 = (double)FUN_0125a280();
          pvVar10 = _pthread_getspecific(pVar17);
          if ((pvVar10 != (void *)0x0) && (lVar15 = FUN_00e8b990(), lVar15 != 0)) {
            pVar17 = (void*)local_38;
          }
          dVar25 = (double)FUN_01264170();
          FUN_012642b0(dVar27 - dVar25);
          pvVar10 = _pthread_getspecific(pVar17);
          if (pvVar10 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01266fe0();
          pvVar10 = _pthread_getspecific(pVar17);
          if (pvVar10 != (void *)0x0) {
            FUN_00e8b990();
          }
          local_190 = local_38;
          local_188 = '\0';
          uVar12 = FUN_012e6a70();
          if ((local_188 != '\0') && (local_190 != (int64_t *)0x0)) {
            uVar12 = FUN_00d50b20();
          }
          if (((char)local_b8 != '\0') && (local_c0 != (int64_t *)0x0)) {
            uVar12 = FUN_00d50b20();
          }
          local_180 = local_38;
          local_178 = '\0';
          local_168 = '\0';
          local_170 = plVar18;
          FUN_012e0130(uVar12,&local_170);
          if ((local_218 != '\0') && (local_220 != 0)) {
            FUN_00d50b20();
          }
          if ((local_168 != '\0') && (local_170 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_178 != '\0') && (local_180 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          pvVar10 = _pthread_getspecific(pVar17);
          if (pvVar10 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0128c620();
          lVar20 = lVar20 + 1;
          bVar24 = bVar5;
          bVar23 = bVar7;
        } while (lVar20 < *(int *)((int64_t)local_68 + 0xc));
        bVar24 = true;
        bVar8 = true;
        bVar2 = true;
        local_70 = (void*)0x0;
        local_60 = (void*)0x0;
        local_90 = 0;
        local_78 = (int64_t *)0x0;
        bVar6 = false;
        lVar11 = 0;
        goto joined_r0x0139c026;
      }
      local_78 = (int64_t *)0x0;
      local_90 = 0;
      local_e0 = local_98;
      bVar4 = true;
      bVar24 = true;
      bVar23 = false;
      goto LAB_0139c07f;
    }
    local_60 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *local_60 = &g_025683c0;
    (*g_025683d8)();
    FUN_00c92170();
    local_70 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    pVar17 = 0x2572358;
    *local_70 = &g_02572358;
    (*g_02572370)();
    pvVar10 = _pthread_getspecific(pVar17);
    if ((pvVar10 != (void *)0x0) && (lVar20 = FUN_00e8b990(), lVar20 != 0)) {
      pVar17 = (void*)local_d8;
    }
    FUN_013dfcb0();
    plVar18 = local_f0;
    pvVar10 = _pthread_getspecific(pVar17);
    plVar13 = local_f0;
    if ((pvVar10 != (void *)0x0) && (lVar20 = FUN_00e8b990(), plVar18 = plVar13, lVar20 != 0)) {
      plVar18 = (int64_t *)plVar13[(uint64_t)(*(uint *)(lVar20 + 0x154) & 1) + 4];
    }
    FUN_013dd7c0();
    local_78 = local_c0;
    if (local_c0 == (int64_t *)0x0) {
      local_78 = (int64_t *)0x0;
      uVar12 = 0;
    }
    else {
      uVar22 = (undefined7)((uint64_t)plVar18 >> 8);
      if ((char)local_b8 == '\0') {
        FUN_00d50b00();
        uVar12 = CONCAT71(uVar22,1);
        if (((char)local_b8 != '\0') && (local_c0 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_b8 = ((uint64_t)local_b8 & 0xffffffffffffff00);
        uVar12 = CONCAT71(uVar22,1);
      }
    }
    if ((local_e8 != '\0') && (local_f0 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    local_90 = uVar12;
    pvVar10 = _pthread_getspecific(pVar17);
    if ((pvVar10 != (void *)0x0) && (lVar20 = FUN_00e8b990(), lVar20 != 0)) {
      pVar17 = (void*)local_98;
    }
    FUN_013dfcb0();
    plVar18 = local_f0;
    pvVar10 = _pthread_getspecific(pVar17);
    plVar13 = local_f0;
    if ((pvVar10 != (void *)0x0) && (lVar20 = FUN_00e8b990(), plVar18 = plVar13, lVar20 != 0)) {
      plVar18 = (int64_t *)plVar13[(uint64_t)(*(uint *)(lVar20 + 0x154) & 1) + 4];
    }
    FUN_013dd7c0();
    local_68 = local_c0;
    if (local_c0 == (int64_t *)0x0) {
      local_68 = (int64_t *)0x0;
      uVar12 = 0;
    }
    else {
      uVar22 = (undefined7)((uint64_t)plVar18 >> 8);
      if ((char)local_b8 == '\0') {
        FUN_00d50b00();
        uVar12 = CONCAT71(uVar22,1);
        if (((char)local_b8 != '\0') && (local_c0 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_b8 = ((uint64_t)local_b8 & 0xffffffffffffff00);
        uVar12 = CONCAT71(uVar22,1);
      }
    }
    if ((local_e8 != '\0') && (local_f0 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    local_88 = uVar12;
    if (*(int *)((int64_t)local_78 + 0xc) < 1) {
      bVar7 = false;
      plVar18 = (int64_t *)0x0;
      bVar6 = false;
      lVar11 = 0;
    }
    else {
      local_e0 = (int64_t *)0x0;
      lVar11 = 0;
      bVar6 = false;
      plVar18 = (int64_t *)0x0;
      bVar7 = false;
      do {
        lVar20 = *(int64_t *)(local_78[2] + (int64_t)local_e0 * 8);
        if (lVar11 == lVar20) {
          if ((!bVar6) && (lVar11 != 0)) {
            bVar6 = true;
            FUN_00d50b00();
          }
        }
        else {
          if (lVar20 != 0) {
            FUN_00d50b00();
          }
          if ((bVar6) && (lVar11 != 0)) {
            FUN_00d50b20();
            bVar6 = true;
            lVar11 = lVar20;
          }
          else {
            bVar6 = true;
            lVar11 = lVar20;
          }
        }
        if (0 < *(int *)((int64_t)local_68 + 0xc)) {
          lVar20 = 0;
          do {
            plVar13 = *(int64_t **)(local_68[2] + lVar20 * 8);
            plVar19 = local_68;
            if (plVar18 == plVar13) {
              if ((!bVar7) && (plVar18 != (int64_t *)0x0)) {
                bVar7 = true;
                FUN_00d50b00();
              }
            }
            else {
              if (plVar13 != (int64_t *)0x0) {
                FUN_00d50b00();
              }
              if ((bVar7) && (plVar18 != (int64_t *)0x0)) {
                FUN_00d50b20();
                bVar7 = true;
                plVar18 = plVar13;
              }
              else {
                bVar7 = true;
                plVar18 = plVar13;
              }
            }
            pVar17 = (void*)plVar19;
            pvVar10 = _pthread_getspecific(pVar17);
            if (pvVar10 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_01266fe0();
            if (local_c0 == (int64_t *)0x0) {
              bVar24 = false;
            }
            else {
              pvVar10 = _pthread_getspecific(pVar17);
              if (pvVar10 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_01266fe0();
              if (local_f0 == (int64_t *)0x0) {
                bVar24 = false;
              }
              else {
                pvVar10 = _pthread_getspecific(pVar17);
                if (pvVar10 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_01266fe0();
                pvVar10 = _pthread_getspecific(pVar17);
                if (pvVar10 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_01266fe0();
                if (local_200 == local_1f0) {
                  pvVar10 = _pthread_getspecific(pVar17);
                  if (pvVar10 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  dVar27 = (double)FUN_01259520();
                  pvVar10 = _pthread_getspecific(pVar17);
                  if (pvVar10 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  dVar25 = (double)FUN_0125a280();
                  bVar24 = true;
                  if (dVar25 <= dVar27) {
                    pvVar10 = _pthread_getspecific(pVar17);
                    if (pvVar10 != (void *)0x0) {
                      FUN_00e8b990();
                    }
                    FUN_012641c0();
                    bVar24 = local_250 == plVar18;
                    if ((local_248 != '\0') && (local_250 != (int64_t *)0x0)) {
                      FUN_00d50b20();
                    }
                  }
                }
                else {
                  bVar24 = false;
                }
                if ((local_1e8 != '\0') && (local_1f0 != 0)) {
                  FUN_00d50b20();
                }
                if ((local_1f8 != '\0') && (local_200 != 0)) {
                  FUN_00d50b20();
                }
              }
              if ((local_e8 != '\0') && (local_f0 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
            }
            if (((char)local_b8 != '\0') && (local_c0 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if (bVar24) {
              pvVar10 = _pthread_getspecific(pVar17);
              if (pvVar10 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_012641c0();
              plVar13 = local_c0;
              if (((char)local_b8 != '\0') && (local_c0 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              dVar27 = g_024119c0;
              if (plVar13 != plVar18) {
                pvVar10 = _pthread_getspecific(pVar17);
                if (pvVar10 != (void *)0x0) {
                  FUN_00e8b990();
                }
                dVar25 = (double)FUN_0125a280();
                pvVar10 = _pthread_getspecific(pVar17);
                if (pvVar10 != (void *)0x0) {
                  FUN_00e8b990();
                }
                dVar26 = (double)FUN_01259520();
                pvVar10 = _pthread_getspecific(pVar17);
                if (pvVar10 != (void *)0x0) {
                  FUN_00e8b990();
                }
                dVar27 = (double)FUN_013de9b0();
                dVar25 = dVar25 - dVar26;
                if (dVar25 <= dVar27) {
                  dVar27 = dVar25 / dVar27;
                }
                else {
                  dVar27 = dVar27 / dVar25;
                }
              }
              lVar14 = (int64_t)*(int *)(local_60 + 3);
              FUN_00c8e340(dVar27,1);
              lVar15 = local_60[2];
              *(int64_t *)(lVar15 + lVar14) = lVar11;
              *(int64_t **)(lVar15 + 8 + lVar14) = plVar18;
              *(double *)(lVar15 + 0x10 + lVar14) = dVar27;
            }
            lVar20 = lVar20 + 1;
          } while (lVar20 < *(int *)((int64_t)local_68 + 0xc));
        }
        local_e0 = (int64_t *)((int64_t)local_e0 + 1);
      } while ((int64_t)local_e0 < (int64_t)*(int *)((int64_t)local_78 + 0xc));
    }
    if (0x2e < *(int *)(local_60 + 3) + 0x17U) {
      local_c0 = (int64_t *)0x0;
      local_b8 = FUN_01399460;
      local_e0 = (int64_t *)CONCAT71((uint7)(uint3)((uint)(*(int *)(local_60 + 3) / 0x18) >> 8),1);
      _qsort_r(&local_c0,0x18,0x13dc2a0,param_4,
               (int *)CONCAT71(in_stack_fffffffffffffdc9,in_stack_fffffffffffffdc8));
      if (0x17 < *(int *)(local_60 + 3)) {
        uVar1 = *(int *)(local_60 + 3) / 0x18;
        plVar13 = (int64_t *)((uint64_t)uVar1 + 1);
        local_e0 = (int64_t *)(uint64_t)(uVar1 - 1);
        local_f8 = (int64_t *)0x0;
        bVar5 = false;
        do {
          while( true ) {
            pVar17 = (int)local_e0 * 3;
            plVar19 = *(int64_t **)(local_60[2] + (int64_t)local_e0 * 0x18);
            lVar20 = *(int64_t *)(local_60[2] + 8 + (int64_t)local_e0 * 0x18);
            local_b8 = ((uint64_t)local_b8 & 0xffffffffffffff00);
            local_110 = plVar13;
            local_c0 = plVar19;
            cVar9 = FUN_00d24090();
            if (((char)local_b8 != '\0') && (local_c0 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if (cVar9 != '\0') break;
            local_b8 = ((uint64_t)local_b8 & 0xffffffffffffff00);
            local_c0 = plVar19;
            FUN_00d21140();
            if (((char)local_b8 != '\0') && (local_c0 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            pvVar10 = _pthread_getspecific(pVar17);
            if (pvVar10 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_013e5700(0);
            local_38 = local_c0;
            plVar19 = local_f8;
            plVar13 = local_c0;
            if (local_c0 == local_f8) {
              local_38 = local_f8;
              if ((bVar5) || (local_c0 == (int64_t *)0x0)) goto joined_r0x0139aee3;
              if ((char)local_b8 == '\0') {
                bVar5 = true;
                FUN_00d50b00();
                local_38 = plVar19;
                bVar24 = bVar5;
                if ((char)local_b8 == '\0') goto LAB_0139af1a;
                goto LAB_0139af09;
              }
              bVar24 = true;
            }
            else {
              if ((char)local_b8 != '\0') {
                bVar24 = true;
                if ((bVar5) && (local_f8 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                goto LAB_0139af1a;
              }
              if (local_c0 != (int64_t *)0x0) {
                FUN_00d50b00();
              }
              if ((bVar5) && (local_f8 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              bVar5 = true;
joined_r0x0139aee3:
              bVar24 = bVar5;
              if ((char)local_b8 != '\0') {
LAB_0139af09:
                bVar24 = bVar5;
                if (local_c0 != (int64_t *)0x0) {
                  FUN_00d50b20();
                }
              }
            }
LAB_0139af1a:
            bVar5 = bVar24;
            pVar16 = (void*)plVar13;
            pvVar10 = _pthread_getspecific(pVar16);
            pVar17 = (void*)local_38;
            if ((pvVar10 != (void *)0x0) && (lVar15 = FUN_00e8b990(), lVar15 != 0)) {
              pVar16 = pVar17;
            }
            pvVar10 = _pthread_getspecific(pVar16);
            if (pvVar10 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_01259520();
            FUN_012642b0();
            pvVar10 = _pthread_getspecific(pVar16);
            if ((pvVar10 != (void *)0x0) && (lVar15 = FUN_00e8b990(), lVar15 != 0)) {
              pVar16 = pVar17;
            }
            pvVar10 = _pthread_getspecific(pVar16);
            if (pvVar10 != (void *)0x0) {
              FUN_00e8b990();
            }
            local_f8 = (int64_t *)FUN_0125a280();
            pvVar10 = _pthread_getspecific(pVar16);
            if (pvVar10 != (void *)0x0) {
              FUN_00e8b990();
            }
            dVar27 = (double)FUN_01259520();
            FUN_01259540((double)local_f8 - dVar27);
            pvVar10 = _pthread_getspecific(pVar16);
            if ((pvVar10 != (void *)0x0) && (lVar15 = FUN_00e8b990(), lVar15 != 0)) {
              pVar16 = pVar17;
            }
            pvVar10 = _pthread_getspecific(pVar16);
            if ((pvVar10 != (void *)0x0) && (lVar15 = FUN_00e8b990(), lVar15 != 0)) {
              pVar16 = pVar17;
            }
            local_f8 = (int64_t *)FUN_01264170();
            pvVar10 = _pthread_getspecific(pVar16);
            if (pvVar10 != (void *)0x0) {
              FUN_00e8b990();
            }
            dVar27 = (double)FUN_013dea30();
            FUN_01264390((double)local_f8 - dVar27);
            pvVar10 = _pthread_getspecific(pVar16);
            if ((pvVar10 != (void *)0x0) && (lVar15 = FUN_00e8b990(), lVar15 != 0)) {
              pVar16 = pVar17;
            }
            FUN_0125a5f0();
            pvVar10 = _pthread_getspecific(pVar16);
            if (pvVar10 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_01266fe0();
            pvVar10 = _pthread_getspecific(pVar16);
            if (pvVar10 != (void *)0x0) {
              FUN_00e8b990();
            }
            uVar12 = FUN_012e6a70();
            if (((char)local_b8 != '\0') && (local_c0 != (int64_t *)0x0)) {
              uVar12 = FUN_00d50b20();
            }
            local_1c0 = local_38;
            local_1b8 = '\0';
            uVar12 = FUN_012e0130(uVar12,&local_1c0);
            plVar19 = local_e0;
            plVar13 = local_110;
            if ((in_stack_fffffffffffffdc8 != '\0') && (local_240 != 0)) {
              uVar12 = FUN_00d50b20();
            }
            if ((local_1b8 != '\0') && (local_1c0 != (int64_t *)0x0)) {
              uVar12 = FUN_00d50b20();
            }
            local_1b0 = local_38;
            local_1a8 = '\0';
            local_198 = '\0';
            local_1a0 = lVar20;
            FUN_012e0130(uVar12,&local_1a0);
            if ((local_228 != '\0') && (local_230 != 0)) {
              FUN_00d50b20();
            }
            if ((local_198 != '\0') && (local_1a0 != 0)) {
              FUN_00d50b20();
            }
            if ((local_1a8 != '\0') && (local_1b0 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            pvVar10 = _pthread_getspecific(pVar16);
            if (pvVar10 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0128c620();
            local_f8 = local_38;
            plVar13 = (int64_t *)((int64_t)plVar13 + -1);
            local_e0 = (int64_t *)(uint64_t)((int)plVar19 - 1);
            if ((int64_t)plVar13 < 2) goto LAB_0139b40a;
          }
          plVar13 = (int64_t *)((int64_t)local_110 + -1);
          local_e0 = (int64_t *)(uint64_t)((int)local_e0 - 1);
        } while (1 < (int64_t)plVar13);
LAB_0139b40a:
        bVar24 = false;
        bVar8 = false;
        bVar2 = false;
        local_38 = local_f8;
joined_r0x0139c026:
        bVar4 = true;
        bVar23 = false;
        bVar3 = false;
        local_e0 = local_98;
        goto joined_r0x0139b9dd;
      }
    }
    bVar4 = true;
    bVar23 = false;
    bVar3 = false;
    bVar24 = false;
    bVar2 = false;
    bVar5 = false;
    local_38 = (int64_t *)0x0;
    local_e0 = local_98;
    bVar8 = bVar2;
joined_r0x0139b9dd:
    if (local_c8 == (int64_t *)0x0) goto LAB_0139c08b;
  }
  bVar3 = bVar23;
  bVar2 = bVar8;
  FUN_00d50b20();
LAB_0139c08b:
  if ((!bVar2) && (local_70 != (void*)0x0)) {
    FUN_00d50b20();
  }
  if (!bVar2 && local_60 != (void*)0x0) {
    FUN_00d50b20();
  }
  if (((char)local_88 != '\0') && (local_68 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_90 != '\0') && (local_78 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((bVar5) && (local_38 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((bVar7) && (plVar18 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((bVar6) && (lVar11 != 0)) {
    FUN_00d50b20();
  }
  if (((char)local_d0 != '\0') && (local_a0 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (bVar4 && !bVar3) {
    FUN_00d50b20();
  }
  if ((char)local_104 == '\0' && !bVar24) {
    FUN_00d50b20();
  }
  return;
}

