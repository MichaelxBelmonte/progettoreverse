// Function: FUN_01b12970
// Address: 01b12970
// Size: 6120 bytes
// Class: GNString
// String references:
//   "GNString"
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


uint64_t FUN_01b12970(uint64_t param_1,char param_2)

{
  int64_t *plVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  char cVar6;
  uint uVar7;
  int iVar8;
  void *pvVar9;
  int64_t lVar10;
  int64_t *plVar11;
  void* pVar12;
  int64_t *this_ptr;
  int64_t *plVar13;
  uint64_t unaff_R14;
  uint64_t uVar14;
  int64_t *plVar15;
  int64_t **pplVar17;
  uint32_t uVar18;
  float fVar19;
  int64_t local_1e8;
  char local_1e0;
  int64_t local_1d8;
  char local_1d0;
  int64_t *local_1c8;
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
  int64_t *local_158;
  char local_150;
  float local_144;
  int64_t local_140;
  char local_138;
  int64_t *local_130;
  char local_128;
  int64_t *local_120;
  int64_t *local_118;
  char local_110;
  int64_t *local_108;
  char local_100;
  int64_t *local_f8;
  char local_f0;
  int64_t *local_e8;
  char local_e0;
  int64_t *local_d8;
  char local_d0;
  int64_t local_c8;
  char local_c0;
  int64_t *local_b8;
  int64_t *local_b0;
  int local_9c;
  int64_t *local_98;
  char local_90;
  int64_t *local_70;
  char local_68;
  int64_t *local_60;
  char local_58;
  code *local_50;
  code *local_48;
  uint64_t local_40;
  int64_t local_38;
  undefined7 uVar16;
  
  local_38 = *(int64_t *)PTR____stack_chk_guard_024a9898;
  uVar16 = (undefined7)((uint64_t)unaff_R14 >> 8);
  uVar14 = CONCAT71(uVar16,1);
  if (*(char *)((int64_t)this_ptr + 0x315) == '\0') {
    uVar14 = CONCAT71(uVar16,*(char *)((int64_t)this_ptr + 0x316) != '\0');
  }
  FUN_01caeae0();
  if (local_58 == '\0') {
    if (local_60 != (int64_t *)0x0) {
      FUN_00d50b00();
      if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_01b129f7;
    }
  }
  else if (local_60 != (int64_t *)0x0) {
LAB_01b129f7:
    if ((*(char *)((int64_t)this_ptr + 0x315) == '\0') &&
       (*(char *)((int64_t)this_ptr + 0x316) != '\0')) {
      uVar18 = FUN_01d66da0();
      local_1e8 = g_027e3c40;
      if (g_027e3c40 != 0) {
        uVar18 = FUN_00d50b00();
      }
      local_1e0 = '\x01';
      pplVar17 = &local_60;
      FUN_000175c0(uVar18,&local_1e8);
      plVar15 = local_60;
      FUN_011a6590();
      if (plVar15 == (int64_t *)0x0) {
LAB_01b12ad0:
        pplVar17 = &g_02802688;
      }
      else {
        (**(code **)(*plVar15 + 0x360))();
        cVar5 = FUN_00e85ea0();
        if (cVar5 == '\0') goto LAB_01b12ad0;
      }
      plVar15 = *pplVar17;
      if (*(char *)(pplVar17 + 1) == '\0') {
        if (plVar15 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        *(void*)(pplVar17 + 1) = 0;
      }
      if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_1e0 != '\0') && (local_1e8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      uVar18 = FUN_01d66da0();
      local_1d8 = g_027e3c50;
      if (g_027e3c50 != 0) {
        uVar18 = FUN_00d50b00();
      }
      local_1d0 = '\x01';
      FUN_000175c0(uVar18,&local_1d8);
      plVar13 = local_60;
      if (local_58 == '\0') {
        if (((local_60 != (int64_t *)0x0) && (FUN_00d50b00(), local_58 != '\0')) &&
           (local_60 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_58 = '\0';
      }
      if ((local_1d0 != '\0') && (local_1d8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar13 == (int64_t *)0x0) {
        uVar18 = FUN_01d66da0();
        local_1b8 = g_027e3c40;
        if (g_027e3c40 != 0) {
          uVar18 = FUN_00d50b00();
        }
        local_1b0 = '\x01';
        pplVar17 = &local_60;
        FUN_000175c0(uVar18,&local_1b8);
        plVar13 = local_60;
        FUN_011a6590();
        if (plVar13 == (int64_t *)0x0) {
LAB_01b1305b:
          pplVar17 = &g_02802688;
        }
        else {
          (**(code **)(*plVar13 + 0x360))();
          cVar5 = FUN_00e85ea0();
          if (cVar5 == '\0') goto LAB_01b1305b;
        }
        plVar13 = *pplVar17;
        if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_1b0 != '\0') && (local_1b8 != 0)) {
          FUN_00d50b20();
        }
        if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        uVar14 = CONCAT71((int7)(uVar14 >> 8),(byte)uVar14 | plVar13 != (int64_t *)0x0);
      }
      else {
        local_1c8 = plVar13;
        local_1c0 = '\0';
        uVar7 = FUN_00c70bc0();
        uVar14 = (uint64_t)uVar7;
        if ((local_1c0 != '\0') && (local_1c8 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
      }
      if (plVar15 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
    }
    FUN_00d50b20();
  }
  if (((char)uVar14 == '\0') || (param_2 == '\0')) goto LAB_01b1407a;
  FUN_01caeae0();
  plVar15 = local_60;
  if (local_58 == '\0') {
    if (local_60 != (int64_t *)0x0) {
      FUN_00d50b00();
      if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_01b12b1d;
    }
  }
  else if (local_60 != (int64_t *)0x0) {
LAB_01b12b1d:
    local_58 = 0;
    FUN_00d50b00();
    local_58 = '\x01';
    local_50 = FUN_01b29180;
    local_48 = FUN_01af6500;
    local_40 = 0;
    *(int *)((int64_t)this_ptr + 0x2fc) = *(int *)((int64_t)this_ptr + 0x2fc) + 1;
    local_60 = this_ptr;
    uVar18 = FUN_01d66da0();
    local_1a8 = g_027e3c40;
    if (g_027e3c40 != 0) {
      uVar18 = FUN_00d50b00();
    }
    local_1a0 = '\x01';
    FUN_000175c0(uVar18,&local_1a8);
    plVar13 = local_70;
    local_118 = local_70;
    if (local_68 == '\0') {
      if (local_70 == (int64_t *)0x0) {
        local_118 = (int64_t *)0x0;
        local_110 = '\x01';
        plVar13 = (int64_t *)0x0;
      }
      else {
        FUN_00d50b00();
        local_110 = '\x01';
        if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    else {
      local_110 = '\x01';
      local_68 = '\0';
    }
    if ((local_1a0 != '\0') && (local_1a8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_90 != '\0') && (local_98 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    plVar11 = (int64_t *)0x0;
    if (plVar13 == (int64_t *)0x0) {
LAB_01b1403e:
      if (plVar11 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
    }
    else {
      local_b8 = plVar15;
      uVar18 = FUN_01d66da0();
      local_198 = g_027e3c68;
      if (g_027e3c68 != 0) {
        uVar18 = FUN_00d50b00();
      }
      local_190 = '\x01';
      pplVar17 = &local_70;
      FUN_000175c0(uVar18,&local_198);
      plVar15 = local_70;
      FUN_00053ac0();
      if (plVar15 == (int64_t *)0x0) {
        pplVar17 = &g_02802688;
        plVar15 = g_02802688;
        if (g_02802690 == '\0') goto LAB_01b12cff;
LAB_01b12c9c:
        *(void*)(pplVar17 + 1) = 0;
      }
      else {
        (**(code **)(*plVar15 + 0x360))();
        cVar5 = FUN_00e85ea0();
        if (cVar5 == '\0') {
          pplVar17 = &g_02802688;
        }
        plVar15 = *pplVar17;
        if (*(char *)(pplVar17 + 1) != '\0') goto LAB_01b12c9c;
LAB_01b12cff:
        if (plVar15 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_190 != '\0') && (local_198 != 0)) {
        FUN_00d50b20();
      }
      if ((local_90 != '\0') && (local_98 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar15 == (int64_t *)0x0) {
        local_9c = -1000000;
      }
      else {
        local_9c = FUN_00d45870();
        FUN_00d50b20();
      }
      if ((g_026fd0c0 == '\0') && (iVar8 = ___cxa_guard_acquire(), iVar8 != 0)) {
        g_026d5e58 = FUN_00d4fe50();
        g_026d5e40 = "GNString";
        g_026d5e48 = 0x40;
        g_026d5e50 = FUN_0005d920;
        g_026d5e60 = 0;
        ram_00000000026d5e68 = 0;
        g_026d5e70 = 0;
        ram_00000000026d5e78 = 0;
        g_026d5e80 = 0;
        ram_00000000026d5e88 = 0;
        g_026d5e90 = 0;
        ram_00000000026d5e98 = 0;
        g_026d5ea0 = 0;
        ram_00000000026d5ea8 = 0;
        g_026d5eb0 = 0;
        ram_00000000026d5eb8 = 0;
        g_026d5ec0 = 0;
        ram_00000000026d5ec8 = 0;
        g_026d5ed0 = 0;
        ram_00000000026d5ed8 = 0;
        g_026d5ee0 = 0;
        ram_00000000026d5ee8 = 0;
        g_026d5ef0 = 0;
        ram_00000000026d5ef8 = 0;
        g_026d5f00 = 0;
        ___cxa_guard_release();
      }
      (**(code **)(*plVar13 + 0x360))();
      cVar5 = FUN_00e85ea0();
      plVar15 = local_118;
      lVar10 = g_027e3cd0;
      plVar13 = local_118;
      if (cVar5 == '\0') {
        plVar13 = g_02802688;
      }
      if (plVar13 != (int64_t *)0x0) {
        if (g_027e3cd0 != 0) {
          FUN_00d50b00();
        }
        local_188 = lVar10;
        local_180 = '\x01';
        cVar5 = (**(code **)(*plVar15 + 0x50))();
        if ((local_180 != '\0') && (local_188 != 0)) {
          FUN_00d50b20();
        }
        if (cVar5 != '\0') {
          FUN_01ad3cb0();
          pvVar9 = _pthread_getspecific((void*)plVar13);
          if (pvVar9 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0173b6f0();
          pvVar9 = _pthread_getspecific((void*)plVar13);
          if (pvVar9 != (void *)0x0) {
            FUN_00e8b990();
          }
          local_9c = FUN_01736dd0();
          if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_90 != '\0') && (local_98 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
      }
      pVar12 = (void*)plVar13;
      FUN_01ad3cb0();
      plVar15 = local_70;
      if ((local_68 == '\0') && (local_70 != (int64_t *)0x0)) {
        FUN_00d50b00();
      }
      local_120 = local_118;
      FUN_011a6590();
      if (local_120 == (int64_t *)0x0) {
LAB_01b13208:
        pplVar17 = &g_02802688;
        plVar13 = g_02802688;
        if (g_02802688 != (int64_t *)0x0) goto LAB_01b13214;
LAB_01b13337:
        local_158 = plVar15;
        local_150 = '\0';
        FUN_0173b120();
        plVar13 = (int64_t *)this_ptr[0x5e];
        plVar11 = plVar13;
        if (plVar13 != local_70) {
          if (local_68 == '\0') {
            if (local_70 == (int64_t *)0x0) {
              plVar11 = (int64_t *)0x0;
              goto LAB_01b13382;
            }
            FUN_00d50b00();
            plVar13 = (int64_t *)this_ptr[0x5e];
            this_ptr[0x5e] = (int64_t)local_70;
            plVar11 = local_70;
          }
          else {
            local_68 = '\0';
            plVar11 = local_70;
LAB_01b13382:
            this_ptr[0x5e] = (int64_t)plVar11;
          }
          pVar12 = (void*)plVar13;
          if (plVar13 != (int64_t *)0x0) {
            FUN_00d50b20();
            plVar11 = local_70;
          }
        }
        if ((local_68 != '\0') && (plVar11 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_150 != '\0') && (local_158 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        *(int *)(this_ptr + 0x5f) = local_9c;
        if (local_9c == -1000000) {
          pvVar9 = _pthread_getspecific(pVar12);
          if (pvVar9 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0173b6f0();
          pvVar9 = _pthread_getspecific(pVar12);
          if (pvVar9 != (void *)0x0) {
            FUN_00e8b990();
          }
          uVar18 = FUN_01736c50();
          *(void*)(this_ptr + 0x5f) = uVar18;
          if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        FUN_01b311a0();
        plVar13 = local_70;
        if ((((local_68 == '\0') && (local_70 != (int64_t *)0x0)) &&
            (FUN_00d50b00(), local_68 != '\0')) && (local_70 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        FUN_01b3f890();
        FUN_01b3f8a0();
        local_128 = 0;
        FUN_00d50b00();
        local_128 = '\x01';
        local_130 = this_ptr;
        FUN_01acf890();
        if ((local_128 != '\0') && (local_130 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        bVar3 = true;
        bVar2 = true;
        if (plVar13 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        bVar4 = false;
        local_98 = (int64_t *)0x0;
      }
      else {
        (**(code **)(*local_120 + 0x360))();
        pVar12 = 0;
        cVar5 = FUN_00e85ea0();
        if (cVar5 == '\0') goto LAB_01b13208;
        pplVar17 = &local_118;
        plVar13 = local_118;
        if (local_118 == (int64_t *)0x0) goto LAB_01b13337;
LAB_01b13214:
        cVar5 = *(char *)(pplVar17 + 1);
        if (cVar5 != '\0') {
          FUN_00d50b00();
        }
        local_b0 = plVar13;
        uVar18 = FUN_01d66da0();
        local_178 = g_027e3c50;
        if (g_027e3c50 != 0) {
          uVar18 = FUN_00d50b00();
        }
        local_170 = '\x01';
        FUN_000175c0(uVar18,&local_178);
        plVar13 = local_70;
        if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_170 != '\0') && (local_178 != 0)) {
          FUN_00d50b20();
        }
        if ((local_90 != '\0') && (local_98 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar13 == (int64_t *)0x0) {
          pvVar9 = _pthread_getspecific(pVar12);
          if (pvVar9 != (void *)0x0) {
            FUN_00e8b990();
          }
          pvVar9 = _pthread_getspecific(pVar12);
          if (pvVar9 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_017aa5e0();
          local_108 = local_70;
          local_100 = 0;
          if (local_68 == '\0') {
            if (local_70 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_68 = '\0';
          }
          local_100 = '\x01';
          cVar6 = FUN_01750eb0();
          if ((local_100 != '\0') && (local_108 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (cVar6 != '\0') {
            FUN_01ad6350();
            pvVar9 = _pthread_getspecific(pVar12);
            if (pvVar9 != (void *)0x0) {
              FUN_00e8b990();
            }
            pVar12 = 0x2802558;
            pvVar9 = _pthread_getspecific(0x2802558);
            if (pvVar9 != (void *)0x0) {
              FUN_00e8b990();
            }
            uVar18 = FUN_017aa5e0();
            local_f8 = local_70;
            local_f0 = 0;
            if (local_68 == '\0') {
              if (local_70 != (int64_t *)0x0) {
                uVar18 = FUN_00d50b00();
              }
            }
            else {
              local_68 = '\0';
            }
            local_f0 = '\x01';
            FUN_0174be30(uVar18,&local_f8);
            if ((local_f0 != '\0') && (local_f8 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            bVar2 = false;
            bVar4 = false;
            goto LAB_01b13dec;
          }
          pvVar9 = _pthread_getspecific(pVar12);
          if (pvVar9 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_017aa5e0();
          local_e0 = 0;
          if (local_90 == '\0') {
            if (local_98 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_90 = '\0';
          }
          local_e0 = '\x01';
          local_e8 = local_98;
          FUN_0173b120();
          plVar13 = local_70;
          if (local_70 == (int64_t *)0x0) {
            bVar4 = false;
            plVar13 = (int64_t *)0x0;
          }
          else if (local_68 == '\0') {
            FUN_00d50b00();
            bVar4 = true;
            if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            local_68 = '\0';
            bVar4 = true;
          }
          if ((local_e0 != '\0') && (local_e8 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_90 != '\0') && (local_98 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          pvVar9 = _pthread_getspecific(pVar12);
          plVar11 = plVar15;
          if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
            plVar11 = (int64_t *)plVar15[(uint64_t)(*(uint *)(lVar10 + 0x154) & 1) + 4];
          }
          (**(code **)(*plVar11 + 0x370))();
          pvVar9 = _pthread_getspecific(pVar12);
          if (pvVar9 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0174de40();
          pvVar9 = _pthread_getspecific(pVar12);
          if (pvVar9 != (void *)0x0) {
            FUN_00e8b990();
          }
          local_144 = (float)FUN_0173fbe0();
          pvVar9 = _pthread_getspecific(pVar12);
          plVar11 = plVar15;
          if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
            plVar11 = (int64_t *)plVar15[(uint64_t)(*(uint *)(lVar10 + 0x154) & 1) + 4];
          }
          fVar19 = (float)(**(code **)(*plVar11 + 0x3a0))();
          pvVar9 = _pthread_getspecific(pVar12);
          if (pvVar9 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0173ecc0(fVar19 - local_144);
          pvVar9 = _pthread_getspecific(pVar12);
          if (pvVar9 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0173b790();
          pvVar9 = _pthread_getspecific(pVar12);
          if (pvVar9 != (void *)0x0) {
            FUN_00e8b990();
          }
          pvVar9 = _pthread_getspecific(pVar12);
          if (pvVar9 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0173b790();
          pvVar9 = _pthread_getspecific(pVar12);
          if (pvVar9 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01770350();
          local_c8 = local_140;
          local_c0 = 0;
          if (local_138 == '\0') {
            if (local_140 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_138 = '\0';
          }
          local_c0 = '\x01';
          FUN_01777b90();
          local_d0 = 0;
          if (local_90 == '\0') {
            if (local_98 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_90 = '\0';
          }
          local_d0 = '\x01';
          local_d8 = local_98;
          FUN_0176f3a0();
          if ((local_d0 != '\0') && (local_d8 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_90 != '\0') && (local_98 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_c0 != '\0') && (local_c8 != 0)) {
            FUN_00d50b20();
          }
          if ((local_138 != '\0') && (local_140 != 0)) {
            FUN_00d50b20();
          }
          if ((local_160 != '\0') && (local_168 != 0)) {
            FUN_00d50b20();
          }
          if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (plVar13 == (int64_t *)0x0) {
            bVar2 = false;
            goto LAB_01b13dec;
          }
          local_68 = '\0';
          local_70 = plVar13;
          FUN_01ad60d0(1,2);
          if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          pvVar9 = _pthread_getspecific(pVar12);
          if (pvVar9 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0173b6f0();
          pvVar9 = _pthread_getspecific(pVar12);
          if (pvVar9 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01737a50();
          if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          pvVar9 = _pthread_getspecific(pVar12);
          if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
            pVar12 = (void*)plVar15;
          }
          bVar2 = true;
          bVar4 = false;
          FUN_0174bd90();
LAB_01b13dec:
          pvVar9 = _pthread_getspecific(pVar12);
          if (pvVar9 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_017aa5e0();
          pvVar9 = _pthread_getspecific(pVar12);
          if (pvVar9 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0173b6f0();
          plVar13 = (int64_t *)this_ptr[0x58];
          if (plVar13 != local_70) {
            if (local_68 == '\0') {
              if (local_70 == (int64_t *)0x0) {
                plVar11 = (int64_t *)0x0;
                goto LAB_01b13e97;
              }
              FUN_00d50b00();
              plVar1 = (int64_t *)this_ptr[0x58];
              this_ptr[0x58] = (int64_t)local_70;
              plVar11 = local_70;
            }
            else {
              local_68 = '\0';
              plVar11 = local_70;
LAB_01b13e97:
              this_ptr[0x58] = (int64_t)plVar11;
              plVar1 = plVar13;
            }
            plVar13 = plVar11;
            if (plVar1 != (int64_t *)0x0) {
              FUN_00d50b20();
              plVar13 = local_70;
            }
          }
          if ((local_68 != '\0') && (plVar13 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_90 != '\0') && (local_98 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          FUN_01ad6540();
          if (bVar2) {
            plVar13 = (int64_t *)0x0;
            FUN_01b14e30();
          }
          else {
            FUN_01ad71a0();
            plVar13 = (int64_t *)0x0;
          }
        }
        FUN_01ad48c0();
        local_98 = plVar13;
        if (cVar5 == '\0') {
          bVar3 = false;
          bVar2 = false;
        }
        else {
          FUN_00d50b20();
          bVar3 = false;
          bVar2 = false;
        }
      }
      if (plVar15 != (int64_t *)0x0) {
        FUN_00d50b20();
        bVar2 = bVar3;
      }
      if ((bVar4) && (local_98 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (bVar2) {
        if ((local_110 != '\0') && (local_120 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (local_60 != (int64_t *)0x0) {
          (*local_50)();
        }
        if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        uVar14 = CONCAT71((int7)((uint64_t)local_98 >> 8),1);
        FUN_00d50b20();
        goto LAB_01b1407a;
      }
      plVar11 = local_120;
      if (local_110 != '\0') goto LAB_01b1403e;
    }
    if (local_60 != (int64_t *)0x0) {
      (*local_50)();
    }
    if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    uVar14 = CONCAT71((int7)((uint64_t)local_98 >> 8),1);
    FUN_00d50b20();
    goto LAB_01b1407a;
  }
  uVar14 = CONCAT71((int7)(uVar14 >> 8),1);
LAB_01b1407a:
  if (*(int64_t *)PTR____stack_chk_guard_024a9898 == local_38) {
    return uVar14 & 0xffffffff;
  }
                      ___stack_chk_fail();
}

