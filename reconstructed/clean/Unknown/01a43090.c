// Function: FUN_01a43090
// Address: 01a43090
// Size: 4916 bytes
// Class: Unknown

void FUN_01a43090(void*param_1,int64_t *param_2)

{
  bool bVar1;
  char cVar2;
  uint8_t uVar3;
  void *pvVar4;
  int64_t lVar5;
  int64_t *plVar6;
  void*puVar7;
  int64_t lVar8;
  uint64_t uVar9;
  void*puVar10;
  void**ppuVar11;
  void* pVar12;
  undefined7 uVar13;
  int iVar14;
  int64_t *arg1;
  int64_t *this_ptr;
  void*puVar15;
  bool bVar16;
  int64_t local_208;
  char local_200;
  void*local_198;
  char local_190;
  void*local_188;
  char local_180;
  void*local_178;
  char local_170;
  void*local_168;
  char local_160;
  void*local_158;
  char local_150;
  void*local_148;
  char local_140;
  void*local_138;
  char local_130;
  int64_t local_128;
  char local_120;
  void*local_118;
  char local_110;
  int64_t local_108;
  char local_100;
  void*local_f8;
  void*local_f0;
  void*local_e8;
  void*local_e0;
  char local_d8;
  int64_t local_d0;
  char local_c8;
  int64_t *local_c0;
  int64_t *local_b8;
  uint64_t local_b0;
  void*local_a8;
  uint64_t local_a0;
  void*local_98;
  code *local_90;
  void*local_88;
  void*local_80;
  void*local_78;
  void*local_70;
  char local_68 [8];
  void*local_60;
  uint64_t local_58;
  int local_50;
  void*local_48;
  char local_40;
  void*local_38;
  
  local_38 = param_1;
  (**(code **)(*(int64_t *)*param_1 + 0xe20))();
  local_e0 = local_48;
  pVar12 = (void*)param_1;
  local_d8 = 0;
  if (local_40 == '\0') {
    if (local_48 != (void*)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_40 = '\0';
  }
  local_d8 = '\x01';
  FUN_00243390();
  local_a8 = local_70;
  if (local_68[0] == '\0') {
    if (((local_70 != (void*)0x0) && (FUN_00d50b00(), local_68[0] != '\0')) &&
       (local_70 != (void*)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_68[0] = '\0';
  }
  if ((local_d8 != '\0') && (local_e0 != (void*)0x0)) {
    FUN_00d50b20();
  }
  if ((local_40 != '\0') && (local_48 != (void*)0x0)) {
    FUN_00d50b20();
  }
  if (*this_ptr == 0) {
    lVar8 = *arg1;
    if (lVar8 == 0) {
      lVar8 = *param_2;
      if (lVar8 == 0) goto LAB_01a4344b;
      pvVar4 = _pthread_getspecific(pVar12);
      if (pvVar4 != (void *)0x0) {
        lVar8 = *param_2;
        lVar5 = FUN_00e8b990();
        if (lVar5 != 0) {
          lVar8 = *(int64_t *)(lVar8 + 0x20 + (uint64_t)(*(uint *)(lVar5 + 0x154) & 1) * 8);
        }
      }
      FUN_0125e7c0();
      puVar7 = local_70;
      if (local_70 == (void*)0x0) goto LAB_01a43401;
      puVar15 = (void*)CONCAT71((int7)((uint64_t)lVar8 >> 8),1);
      if (((local_68[0] == '\0') && (FUN_00d50b00(), local_68[0] != '\0')) &&
         (local_70 != (void*)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      pvVar4 = _pthread_getspecific(pVar12);
      if (pvVar4 != (void *)0x0) {
        lVar8 = *arg1;
        lVar5 = FUN_00e8b990();
        if (lVar5 != 0) {
          lVar8 = *(int64_t *)(lVar8 + 0x20 + (uint64_t)(*(uint *)(lVar5 + 0x154) & 1) * 8);
        }
      }
      FUN_0125e7c0();
      puVar7 = local_70;
      if (local_70 == (void*)0x0) {
LAB_01a43401:
        puVar7 = (void*)0x0;
        puVar15 = (void*)0x0;
      }
      else {
        puVar15 = (void*)CONCAT71((int7)((uint64_t)lVar8 >> 8),1);
        if (((local_68[0] == '\0') && (FUN_00d50b00(), local_68[0] != '\0')) &&
           (local_70 != (void*)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    if (puVar7 != (void*)0x0) {
      local_78 = puVar15;
      pvVar4 = _pthread_getspecific(pVar12);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013df480();
      local_98 = local_70;
      puVar7 = local_70;
      if (local_70 == (void*)0x0) {
        local_b0 = 0;
      }
      else {
        local_b0 = CONCAT71((int7)((uint64_t)local_70 >> 8),1);
        if (((local_68[0] == '\0') && (FUN_00d50b00(), local_68[0] != '\0')) &&
           (local_70 != (void*)0x0)) {
          FUN_00d50b20();
        }
      }
      pVar12 = (void*)puVar7;
      pvVar4 = _pthread_getspecific(pVar12);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013de560();
      puVar7 = local_70;
      if ((((local_68[0] == '\0') && (local_70 != (void*)0x0)) &&
          (FUN_00d50b00(), local_68[0] != '\0')) && (local_70 != (void*)0x0)) {
        FUN_00d50b20();
      }
      if (*arg1 == 0) {
        pvVar4 = _pthread_getspecific(pVar12);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_014d1b50();
        puVar15 = local_70;
        if (local_70 == (void*)0x0) goto LAB_01a4432c;
        bVar16 = true;
        if (((local_68[0] == '\0') && (FUN_00d50b00(), local_68[0] != '\0')) &&
           (local_70 != (void*)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        pvVar4 = _pthread_getspecific(pVar12);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_014d19a0();
        puVar15 = local_70;
        if (local_70 == (void*)0x0) {
LAB_01a4432c:
          puVar15 = (void*)0x0;
          bVar16 = false;
        }
        else {
          bVar16 = true;
          if (((local_68[0] == '\0') && (FUN_00d50b00(), local_68[0] != '\0')) &&
             (local_70 != (void*)0x0)) {
            FUN_00d50b20();
          }
        }
      }
      if (puVar15 == (void*)0x0) {
        local_a0 = 0;
        local_80 = (void*)0x0;
        cVar2 = (char)local_78;
      }
      else {
        pvVar4 = _pthread_getspecific(pVar12);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_014d1d00();
        local_80 = local_70;
        cVar2 = (char)local_78;
        if (local_70 == (void*)0x0) {
          local_80 = (void*)0x0;
          local_a0 = 0;
        }
        else {
          local_a0 = CONCAT71((int7)((uint64_t)local_70 >> 8),1);
          if (((local_68[0] == '\0') && (FUN_00d50b00(), local_68[0] != '\0')) &&
             (local_70 != (void*)0x0)) {
            FUN_00d50b20();
          }
        }
      }
      if (puVar7 != (void*)0x0) {
        FUN_00d50b20();
      }
      if ((bVar16) && (puVar15 != (void*)0x0)) {
        FUN_00d50b20();
      }
      if (cVar2 != '\0') {
        FUN_00d50b20();
      }
      goto LAB_01a4346c;
    }
  }
  else {
    pvVar4 = _pthread_getspecific(pVar12);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012dff70();
    puVar7 = local_48;
    if (local_40 == '\0') {
      if (local_48 != (void*)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_40 = '\0';
    }
    local_70 = puVar7;
    local_68[0] = '\0';
    FUN_00d235a0();
    if ((local_68[0] != '\0') && (local_70 != (void*)0x0)) {
      FUN_00d50b20();
    }
    if (puVar7 != (void*)0x0) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != (void*)0x0)) {
      FUN_00d50b20();
    }
    pvVar4 = _pthread_getspecific(pVar12);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012dff00();
    puVar7 = local_48;
    if (local_40 == '\0') {
      if (local_48 != (void*)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_40 = '\0';
    }
    local_70 = puVar7;
    local_68[0] = '\0';
    FUN_00d235a0();
    if ((local_68[0] != '\0') && (local_70 != (void*)0x0)) {
      FUN_00d50b20();
    }
    if (puVar7 != (void*)0x0) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != (void*)0x0)) {
      FUN_00d50b20();
    }
  }
LAB_01a4344b:
  local_b0 = 0;
  local_98 = (void*)0x0;
  local_a0 = 0;
  local_80 = (void*)0x0;
LAB_01a4346c:
  plVar6 = (int64_t *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar6 + 0x18))();
  local_c0 = plVar6;
  plVar6 = (int64_t *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar6 + 0x18))();
  local_b8 = plVar6;
  puVar7 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  local_f0 = &g_02572358;
  *puVar7 = &g_02572358;
  local_90 = g_02572370;
  (*g_02572370)();
  local_e8 = puVar7;
  if (local_a8 != (void*)0x0) {
    local_68[0] = '\0';
    local_70 = (void*)0x0;
    local_60 = local_a8;
    local_58 = 0xffffffff;
    local_50 = 0;
    local_58._4_4_ = 0;
    while( true ) {
      if (local_58._4_4_ != 0) {
        if (local_58._4_4_ < 1) {
          iVar14 = -local_58._4_4_;
        }
        else {
          iVar14 = (int)local_58 - local_58._4_4_;
          local_58 = CONCAT44(local_58._4_4_,iVar14);
          FUN_00d23690();
          local_50 = local_50 + local_58._4_4_;
          iVar14 = 0;
        }
        local_58 = CONCAT44(iVar14,(int)local_58);
      }
      lVar8 = (int64_t)(int)local_58;
      iVar14 = (int)local_58 + 1;
      local_58 = CONCAT44(local_58._4_4_,iVar14);
      if (*(int *)((int64_t)local_60 + 0xc) <= iVar14) break;
      lVar5 = local_60[2];
      local_70 = *(void**)(lVar5 + 8 + lVar8 * 8);
      pvVar4 = _pthread_getspecific((void*)lVar5);
      pVar12 = (void*)lVar5;
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0125e7c0();
      puVar7 = local_48;
      if ((((local_40 == '\0') && (local_48 != (void*)0x0)) &&
          (FUN_00d50b00(), local_40 != '\0')) && (local_48 != (void*)0x0)) {
        FUN_00d50b20();
      }
      pvVar4 = _pthread_getspecific(pVar12);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013df480();
      local_78 = local_48;
      if (((local_40 == '\0') && (local_48 != (void*)0x0)) &&
         ((FUN_00d50b00(), local_40 != '\0' && (local_48 != (void*)0x0)))) {
        FUN_00d50b20();
      }
      local_40 = '\0';
      local_48 = puVar7;
      cVar2 = FUN_00d23d70();
      if ((local_40 != '\0') && (local_48 != (void*)0x0)) {
        FUN_00d50b20();
      }
      if (cVar2 == '\0') {
        uVar9 = FUN_0025dd10();
        puVar15 = local_48;
        if (local_48 == (void*)0x0) {
          bVar16 = true;
          puVar15 = (void*)0x0;
          local_88 = (void*)0x0;
        }
        else {
          if (local_40 == '\0') {
            uVar9 = FUN_00d50b00();
            local_88 = (void*)CONCAT71((int7)((uint64_t)uVar9 >> 8),1);
            bVar16 = false;
            if ((local_40 == '\0') || (bVar16 = false, local_48 == (void*)0x0))
            goto LAB_01a4371b;
            uVar9 = FUN_00d50b20();
          }
          else {
            local_40 = '\0';
          }
          local_88 = (void*)CONCAT71((int7)((uint64_t)uVar9 >> 8),1);
          bVar16 = false;
        }
LAB_01a4371b:
        if (bVar16) {
          puVar10 = (void*)FUN_00e8fc40();
          FUN_00d4ff40();
          *puVar10 = local_f0;
          (*local_90)();
          if (puVar10 == puVar15) {
            if (!bVar16) {
              FUN_00d50b20();
            }
          }
          else {
            bVar16 = puVar15 != (void*)0x0;
            puVar15 = puVar10;
            if (((byte)local_88 & bVar16) == 1) {
              FUN_00d50b20();
            }
          }
          FUN_0025ddc0();
          puVar10 = (void*)FUN_00e8fc40();
          FUN_00d4ff40();
          *puVar10 = local_f0;
          (*local_90)();
          uVar9 = FUN_0076f1c0();
          bVar16 = true;
          local_88 = (void*)CONCAT71((int7)((uint64_t)uVar9 >> 8),1);
        }
        else {
          FUN_0076f110();
          puVar10 = local_48;
          if (local_48 == (void*)0x0) {
            puVar10 = (void*)0x0;
            bVar16 = false;
          }
          else if (local_40 == '\0') {
            FUN_00d50b00();
            bVar16 = true;
            if ((local_40 != '\0') && (local_48 != (void*)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            bVar16 = true;
          }
        }
        local_40 = '\0';
        local_48 = puVar7;
        FUN_00d21140();
        if ((local_40 != '\0') && (local_48 != (void*)0x0)) {
          FUN_00d50b20();
        }
        local_48 = local_70;
        local_40 = '\0';
        FUN_00d21140();
        if ((local_40 != '\0') && (local_48 != (void*)0x0)) {
          FUN_00d50b20();
        }
        local_40 = '\0';
        local_48 = puVar7;
        FUN_00d21140();
        if ((local_40 != '\0') && (local_48 != (void*)0x0)) {
          FUN_00d50b20();
        }
        if ((bVar16) && (puVar10 != (void*)0x0)) {
          FUN_00d50b20();
        }
        if (((char)local_88 != '\0') && (puVar15 != (void*)0x0)) {
          FUN_00d50b20();
        }
      }
      if (local_78 != (void*)0x0) {
        FUN_00d50b20();
      }
      if (puVar7 != (void*)0x0) {
        FUN_00d50b20();
      }
    }
    FUN_001159b0();
  }
  FUN_00c9fe20();
  puVar7 = local_70;
  ppuVar11 = (void**)local_68;
  if (local_68[0] == '\0') {
    ppuVar11 = &local_48;
  }
  local_48 = (void*)CONCAT71(local_48._1_7_,local_68[0]);
  *(char *)ppuVar11 = '\0';
  if ((local_68[0] != '\0') && (local_70 != (void*)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_48 == '\0') && (puVar7 != (void*)0x0)) {
    FUN_00d50b00();
  }
  local_f8 = puVar7;
  puVar15 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar15 = local_f0;
  (*local_90)();
  local_90 = puVar15;
  if (puVar7 != (void*)0x0) {
    local_68[0] = '\0';
    local_70 = (void*)0x0;
    local_60 = puVar7;
    local_58 = 0xffffffff;
    local_50 = 0;
    local_58._4_4_ = 0;
    while( true ) {
      if (local_58._4_4_ != 0) {
        if (local_58._4_4_ < 1) {
          iVar14 = -local_58._4_4_;
        }
        else {
          iVar14 = (int)local_58 - local_58._4_4_;
          local_58 = CONCAT44(local_58._4_4_,iVar14);
          FUN_00d23690();
          local_50 = local_50 + local_58._4_4_;
          iVar14 = 0;
        }
        local_58 = CONCAT44(iVar14,(int)local_58);
      }
      lVar8 = (int64_t)(int)local_58;
      iVar14 = (int)local_58 + 1;
      local_58 = CONCAT44(local_58._4_4_,iVar14);
      if (*(int *)((int64_t)local_60 + 0xc) <= iVar14) break;
      lVar5 = local_60[2];
      local_198 = *(void**)(lVar5 + 8 + lVar8 * 8);
      local_190 = '\0';
      local_70 = local_198;
      FUN_0025dd10(lVar5,&local_198);
      puVar7 = local_48;
      pVar12 = (void*)lVar5;
      if (local_40 == '\0') {
        if (((local_48 != (void*)0x0) && (FUN_00d50b00(), local_40 != '\0')) &&
           (local_48 != (void*)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_40 = '\0';
      }
      if ((local_190 != '\0') && (local_198 != (void*)0x0)) {
        FUN_00d50b20();
      }
      local_88 = puVar7;
      if ((local_70 == local_98) && (local_80 != (void*)0x0)) {
        local_48 = local_80;
        local_40 = '\0';
        FUN_00d235a0();
        if ((local_40 != '\0') && (local_48 != (void*)0x0)) {
          FUN_00d50b20();
        }
      }
      local_78 = (void*)0x0;
      cVar2 = FUN_019a9840();
      if (cVar2 == '\0') {
        local_168 = local_70;
        local_160 = '\0';
        FUN_0076f110();
        puVar15 = local_48;
        if (local_48 == (void*)0x0) {
          puVar7 = (void*)0x0;
        }
        else {
          uVar13 = (undefined7)((uint64_t)puVar7 >> 8);
          if (local_40 == '\0') {
            FUN_00d50b00();
            puVar7 = (void*)CONCAT71(uVar13,1);
            if ((local_40 != '\0') && (local_48 != (void*)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            local_40 = '\0';
            puVar7 = (void*)CONCAT71(uVar13,1);
          }
        }
        local_78 = puVar7;
        if ((local_160 != '\0') && (local_168 != (void*)0x0)) {
          FUN_00d50b20();
        }
        puVar7 = (void*)0x0;
        bVar16 = false;
      }
      else {
        local_188 = local_70;
        local_180 = '\0';
        FUN_0076f110();
        lVar8 = local_108;
        local_c8 = 0;
        if (local_100 == '\0') {
          if (local_108 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_100 = '\0';
        }
        local_c8 = '\x01';
        local_d0 = lVar8;
        FUN_01278c70();
        puVar15 = local_48;
        if (local_48 == (void*)0x0) {
          puVar7 = (void*)0x0;
        }
        else {
          uVar13 = (undefined7)((uint64_t)lVar8 >> 8);
          if (local_40 == '\0') {
            FUN_00d50b00();
            puVar7 = (void*)CONCAT71(uVar13,1);
            if ((local_40 != '\0') && (local_48 != (void*)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            local_40 = '\0';
            puVar7 = (void*)CONCAT71(uVar13,1);
          }
        }
        if ((local_c8 != '\0') && (local_d0 != 0)) {
          FUN_00d50b20();
        }
        if ((local_100 != '\0') && (local_108 != 0)) {
          FUN_00d50b20();
        }
        if ((local_180 != '\0') && (local_188 != (void*)0x0)) {
          FUN_00d50b20();
        }
        local_178 = puVar15;
        local_170 = '\0';
        local_78 = puVar7;
        (**(code **)(*(int64_t *)*local_38 + 0xe60))();
        puVar7 = local_48;
        if (local_48 == (void*)0x0) {
          bVar16 = false;
        }
        else if (local_40 == '\0') {
          FUN_00d50b00();
          bVar16 = true;
          if ((local_40 != '\0') && (local_48 != (void*)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_40 = '\0';
          bVar16 = true;
        }
        if ((local_170 != '\0') && (local_178 != (void*)0x0)) {
          FUN_00d50b20();
        }
      }
      pvVar4 = _pthread_getspecific(pVar12);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_158 = local_88;
      local_150 = '\0';
      local_140 = '\0';
      local_148 = puVar15;
      uVar3 = (**(code **)((int64_t)&dylib_command_00001220.dylib.current_version +
                          *(int64_t *)*local_38))();
      FUN_0136e4c0(&local_148,&local_158,uVar3);
      if ((local_200 != '\0') && (local_208 != 0)) {
        FUN_00d50b20();
      }
      if ((local_140 != '\0') && (local_148 != (void*)0x0)) {
        FUN_00d50b20();
      }
      if ((local_150 != '\0') && (local_158 != (void*)0x0)) {
        FUN_00d50b20();
      }
      local_130 = '\0';
      local_128 = 0;
      local_120 = '\0';
      local_138 = puVar15;
      (**(code **)(*(int64_t *)*local_38 + 0xe50))(&local_128,&local_138);
      puVar10 = local_48;
      if (local_48 == (void*)0x0) {
        bVar1 = true;
      }
      else {
        if (local_40 == '\0') {
          FUN_00d50b00();
          bVar1 = false;
          if ((local_40 == '\0') || (local_48 == (void*)0x0)) goto LAB_01a43fd0;
          FUN_00d50b20();
        }
        else {
          local_40 = '\0';
        }
        bVar1 = false;
      }
LAB_01a43fd0:
      if ((local_120 != '\0') && (local_128 != 0)) {
        FUN_00d50b20();
      }
      if ((local_130 != '\0') && (local_138 != (void*)0x0)) {
        FUN_00d50b20();
      }
      local_40 = '\0';
      local_48 = puVar10;
      FUN_00d214d0();
      if ((local_40 != '\0') && (local_48 != (void*)0x0)) {
        FUN_00d50b20();
      }
      if (!bVar1 && puVar10 != (void*)0x0) {
        FUN_00d50b20();
      }
      if ((bVar16) && (puVar7 != (void*)0x0)) {
        FUN_00d50b20();
      }
      puVar10 = local_88;
      puVar7 = local_f8;
      if (((char)local_78 != '\0') && (puVar15 != (void*)0x0)) {
        FUN_00d50b20();
      }
      if (puVar10 != (void*)0x0) {
        FUN_00d50b20();
      }
    }
    FUN_00115190();
  }
  puVar15 = local_38;
  (**(code **)(*(int64_t *)*local_38 + 0xda0))();
  local_118 = (void*)local_90;
  local_110 = '\0';
  (**(code **)(*(int64_t *)*puVar15 + 0xdb8))();
  if ((local_110 != '\0') && (local_118 != (void*)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  if (puVar7 != (void*)0x0) {
    FUN_00d50b20();
  }
  if (local_e8 != (void*)0x0) {
    FUN_00d50b20();
  }
  if (local_b8 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (local_c0 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (((char)local_b0 != '\0') && (local_98 != (void*)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_a0 != '\0') && (local_80 != (void*)0x0)) {
    FUN_00d50b20();
  }
  if (local_a8 != (void*)0x0) {
    FUN_00d50b20();
  }
  return;
}

