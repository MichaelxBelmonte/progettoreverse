// Function: FUN_01a41040
// Address: 01a41040
// Size: 2971 bytes
// Class: Unknown

void FUN_01a41040(double param_1,void*param_2,uint32_t param_3)

{
  int64_t lVar1;
  void*puVar2;
  int64_t lVar3;
  void *pvVar4;
  uint64_t uVar5;
  char *pcVar6;
  int64_t *plVar7;
  void* pVar8;
  int64_t lVar9;
  char *pcVar10;
  int64_t *plVar11;
  int iVar12;
  void*this_ptr;
  undefined7 uVar14;
  double dVar13;
  int64_t *plVar15;
  double dVar16;
  int64_t *local_130;
  char local_128;
  int64_t local_120;
  char local_118;
  int64_t *local_110;
  char local_108;
  void*local_100;
  char local_f8;
  uint32_t local_ec;
  double local_e8;
  int64_t local_e0;
  char local_d8;
  int64_t local_d0;
  char local_c8;
  double local_c0;
  int64_t *local_b8;
  int64_t *local_b0;
  char local_a8;
  int64_t *local_a0;
  char local_98;
  void*local_90;
  uint64_t local_88;
  int local_80;
  int64_t *local_78;
  char local_70;
  uint64_t local_68;
  void*local_60;
  int64_t *local_58;
  double local_50;
  char local_48 [8];
  int64_t *local_40;
  char local_38 [8];
  
  local_c0 = param_1;
  puVar2 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  pVar8 = 0x2572358;
  *puVar2 = &g_02572358;
  (*g_02572370)();
  local_60 = puVar2;
  if ((void*)*param_2 == (void*)0x0) {
    dVar13 = 0.0;
    plVar11 = (int64_t *)0x0;
  }
  else {
    local_98 = '\0';
    local_a0 = (int64_t *)0x0;
    local_88 = 0xffffffff;
    local_80 = 0;
    dVar13 = 0.0;
    local_58 = (int64_t *)0x0;
    local_ec = param_3;
    local_90 = (void*)*param_2;
    local_88._4_4_ = 0;
    while( true ) {
      if (local_88._4_4_ != 0) {
        if (local_88._4_4_ < 1) {
          iVar12 = -local_88._4_4_;
        }
        else {
          iVar12 = (int)local_88 - local_88._4_4_;
          local_88 = CONCAT44(local_88._4_4_,iVar12);
          FUN_00d23690();
          local_80 = local_80 + local_88._4_4_;
          iVar12 = 0;
        }
        local_88 = CONCAT44(iVar12,(int)local_88);
      }
      lVar3 = (int64_t)(int)local_88;
      iVar12 = (int)local_88 + 1;
      local_88 = CONCAT44(local_88._4_4_,iVar12);
      if (*(int *)((int64_t)local_90 + 0xc) <= iVar12) break;
      lVar9 = local_90[2];
      local_a0 = *(int64_t **)(lVar9 + 8 + lVar3 * 8);
      pvVar4 = _pthread_getspecific((void*)lVar9);
      pVar8 = (void*)lVar9;
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar5 = FUN_01274b60();
      plVar11 = local_40;
      if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
        uVar5 = FUN_00d50b20();
      }
      plVar15 = local_a0;
      if (plVar11 == (int64_t *)0x0) {
        if (local_a0 == (int64_t *)0x0) {
          local_68 = 0;
          plVar15 = (int64_t *)0x0;
        }
        else {
          if (local_98 == '\0') {
            local_68 = 0;
            uVar5 = FUN_00d50b00();
          }
          else {
            local_98 = '\0';
          }
          local_68 = CONCAT71((int7)((uint64_t)uVar5 >> 8),1);
        }
        local_50 = local_c0;
      }
      else {
        pvVar4 = _pthread_getspecific(pVar8);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar5 = FUN_01274b60();
        plVar15 = local_40;
        if (local_40 == (int64_t *)0x0) {
          plVar15 = (int64_t *)0x0;
          local_68 = 0;
        }
        else {
          local_68 = CONCAT71((int7)((uint64_t)uVar5 >> 8),1);
          if (((local_38[0] == '\0') && (FUN_00d50b00(), local_38[0] != '\0')) &&
             (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        pvVar4 = _pthread_getspecific(pVar8);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01266fe0();
        pvVar4 = _pthread_getspecific(pVar8);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_50 = (double)FUN_012f8e60(local_c0);
        if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      pvVar4 = _pthread_getspecific(pVar8);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar16 = (double)FUN_0125a280();
      if (dVar16 < local_50) {
        pvVar4 = _pthread_getspecific(pVar8);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar16 = (double)FUN_01259520();
        if (local_50 < dVar16) {
          pvVar4 = _pthread_getspecific(pVar8);
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0125e7c0();
          plVar11 = local_40;
          local_48[0] = local_38[0];
          pcVar10 = local_48;
          pcVar6 = local_38;
          if (local_38[0] == '\0') {
            pcVar6 = pcVar10;
          }
          *pcVar6 = '\0';
          if ((local_38[0] != '\0') && (plVar11 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          local_b8 = plVar11;
          pVar8 = (void*)pcVar10;
          pvVar4 = _pthread_getspecific(pVar8);
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          local_e8 = (double)FUN_0125a280();
          pvVar4 = _pthread_getspecific(pVar8);
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01264180();
          plVar11 = local_40;
          pvVar4 = _pthread_getspecific(pVar8);
          plVar7 = local_40;
          if ((pvVar4 != (void *)0x0) && (lVar3 = FUN_00e8b990(), plVar11 = plVar7, lVar3 != 0)) {
            plVar11 = (int64_t *)plVar7[(uint64_t)(*(uint *)(lVar3 + 0x154) & 1) + 4];
          }
          local_50 = (double)(**(code **)(*plVar11 + 0x380))(local_50 - local_e8);
          if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          pvVar4 = _pthread_getspecific(pVar8);
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          local_e8 = (double)FUN_013de8d0();
          pvVar4 = _pthread_getspecific(pVar8);
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_013df480();
          pvVar4 = _pthread_getspecific(pVar8);
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          dVar16 = (double)FUN_01327990();
          if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          local_128 = '\0';
          local_120 = 0;
          local_118 = '\0';
          pVar8 = (void*)&local_120;
          local_130 = plVar15;
          FUN_01320250((local_50 + local_e8) * dVar16,&local_130);
          plVar11 = local_40;
          uVar14 = (undefined7)((uint64_t)dVar13 >> 8);
          if (local_40 == local_58) {
            plVar11 = local_58;
            if ((SUB81(dVar13,0) == '\0') && (local_40 != (int64_t *)0x0)) {
              if (local_38[0] != '\0') goto LAB_01a41662;
              FUN_00d50b00();
LAB_01a416ce:
              dVar13 = (double)CONCAT71(uVar14,1);
              plVar11 = local_58;
            }
joined_r0x01a4198d:
            local_58 = plVar11;
            if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            if (local_38[0] == '\0') {
              local_50 = dVar13;
              if (local_40 != (int64_t *)0x0) {
                FUN_00d50b00();
              }
              dVar13 = (double)CONCAT71(uVar14,1);
              if ((local_50._0_1_ != '\0') && (local_58 != (int64_t *)0x0)) {
                FUN_00d50b20();
                local_58 = plVar11;
                goto LAB_01a416ce;
              }
              goto joined_r0x01a4198d;
            }
            if ((SUB81(dVar13,0) != '\0') && (local_58 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
LAB_01a41662:
            local_38[0] = '\0';
            dVar13 = (double)CONCAT71(uVar14,1);
            local_58 = plVar11;
          }
          if ((local_118 != '\0') && (local_120 != 0)) {
            FUN_00d50b20();
          }
          if ((local_128 != '\0') && (local_130 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          pvVar4 = _pthread_getspecific(pVar8);
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01274b60();
          plVar11 = local_40;
          if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (plVar11 != (int64_t *)0x0) {
            plVar11 = (int64_t *)*this_ptr;
            local_110 = local_a0;
            local_108 = '\0';
            local_50 = dVar13;
            uVar5 = FUN_0039e8b0();
            local_b0 = local_78;
            local_a8 = 0;
            if (local_70 == '\0') {
              if (local_78 != (int64_t *)0x0) {
                uVar5 = FUN_00d50b00();
              }
            }
            else {
              local_70 = '\0';
            }
            dVar13 = local_50;
            local_a8 = '\x01';
            (**(code **)(*plVar11 + 0xe60))(uVar5,&local_b0);
            plVar11 = (int64_t *)local_58[6];
            plVar7 = plVar11;
            if (plVar11 != local_40) {
              if (local_38[0] == '\0') {
                if (local_40 == (int64_t *)0x0) {
                  plVar7 = (int64_t *)0x0;
                }
                else {
                  FUN_00d50b00();
                  plVar11 = (int64_t *)local_58[6];
                  plVar7 = local_40;
                }
              }
              else {
                local_38[0] = '\0';
                plVar7 = local_40;
              }
              local_58[6] = (int64_t)plVar7;
              if (plVar11 != (int64_t *)0x0) {
                FUN_00d50b20();
                plVar7 = local_40;
              }
            }
            if ((local_38[0] != '\0') && (plVar7 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_a8 != '\0') && (local_b0 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_108 != '\0') && (local_110 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
          plVar11 = local_b8;
          local_40 = local_58;
          local_38[0] = '\0';
          FUN_00d21140();
          if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          local_40 = local_a0;
          local_38[0] = '\0';
          FUN_00d23f50();
          if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_48[0] != '\0') && (plVar11 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
      }
      if (((char)local_68 != '\0') && (plVar15 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    puVar2 = local_90;
    FUN_001159b0();
    pVar8 = (void*)puVar2;
    plVar11 = local_58;
  }
  puVar2 = local_60;
  pvVar4 = _pthread_getspecific(pVar8);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_f8 = '\0';
  local_100 = puVar2;
  FUN_01364f70();
  if ((local_f8 != '\0') && (local_100 != (void*)0x0)) {
    FUN_00d50b20();
  }
  if (puVar2 != (void*)0x0) {
    local_98 = '\0';
    local_a0 = (int64_t *)0x0;
    local_80 = 0;
    local_88 = 0;
    local_90 = puVar2;
    local_58 = plVar11;
    local_50 = dVar13;
    if (0 < *(int *)((int64_t)puVar2 + 0xc)) {
      lVar3 = 0;
      do {
        plVar11 = *(int64_t **)(puVar2[2] + lVar3 * 8);
        plVar15 = (int64_t *)*this_ptr;
        local_d8 = 0;
        lVar9 = plVar11[5];
        local_a0 = plVar11;
        if (lVar9 != 0) {
          FUN_00d50b00();
        }
        local_d8 = '\x01';
        local_c8 = 0;
        lVar1 = plVar11[6];
        local_e0 = lVar9;
        if (lVar1 != 0) {
          FUN_00d50b00();
        }
        local_c8 = '\x01';
        local_d0 = lVar1;
        (**(code **)(*plVar15 + 0xe50))(&local_d0,&local_e0);
        plVar11 = local_78;
        if (local_70 == '\0') {
          if (local_78 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_70 = '\0';
        }
        local_40 = plVar11;
        local_38[0] = '\0';
        FUN_00d23480();
        puVar2 = local_60;
        if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar11 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_c8 != '\0') && (local_d0 != 0)) {
          FUN_00d50b20();
        }
        if ((local_d8 != '\0') && (local_e0 != 0)) {
          FUN_00d50b20();
        }
        lVar3 = lVar3 + 1;
        local_88 = CONCAT44(local_88._4_4_,(int)lVar3);
      } while ((int)lVar3 < *(int *)((int64_t)puVar2 + 0xc));
    }
    FUN_01954b60();
    dVar13 = local_50;
    plVar11 = local_58;
  }
  if ((SUB81(dVar13,0) != '\0') && (plVar11 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (puVar2 != (void*)0x0) {
    FUN_00d50b20();
  }
  return;
}

