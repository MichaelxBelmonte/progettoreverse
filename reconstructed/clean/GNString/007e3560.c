// Function: FUN_007e3560
// Address: 007e3560
// Size: 5213 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_007e3560(void)

{
  int64_t lVar1;
  int64_t lVar2;
  double dVar3;
  int64_t ******pppppplVar4;
  byte bVar5;
  char cVar6;
  uint64_t uVar7;
  void *pvVar8;
  void*puVar9;
  int64_t *******ppppppplVar10;
  void* pVar11;
  int64_t *******ppppppplVar12;
  int64_t *plVar13;
  int64_t *******ppppppplVar14;
  int iVar15;
  int64_t this_ptr;
  uint32_t uVar16;
  int64_t local_218;
  char local_210;
  int64_t *******local_208;
  char local_200;
  int64_t local_1f8;
  char local_1f0;
  int64_t local_1e8;
  char local_1e0;
  int64_t *******local_1d8;
  char local_1d0;
  int64_t *******local_1c8;
  char local_1c0;
  int64_t local_1b8;
  char local_1b0;
  int64_t local_1a8;
  char local_1a0;
  int64_t local_198;
  char local_190;
  uint64_t local_188;
  int64_t local_180;
  char local_178;
  int64_t local_170;
  char local_168;
  int64_t local_160;
  char local_158;
  int64_t local_150;
  char local_148;
  int64_t *local_140;
  char local_138;
  int64_t local_130;
  char local_128;
  int64_t local_120;
  char local_118;
  int64_t *******local_110;
  char local_108;
  int64_t *******local_100;
  char local_f8;
  int64_t *******local_f0;
  char local_e8;
  int64_t *******local_e0;
  char local_d8;
  int64_t *******local_d0;
  char local_c8;
  int64_t *******local_c0;
  char local_b8;
  int64_t *******local_b0;
  char local_a8;
  int64_t local_a0;
  char local_98;
  int64_t *******local_90;
  int64_t *******local_78;
  int64_t ******local_70;
  int64_t local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  char local_48 [8];
  int64_t *******local_40;
  char local_38;
  
  *(float *)(this_ptr + 0x3c) = (g_02390124 - *(float *)(this_ptr + 0x38)) * g_0239011c;
  ppppppplVar12 = g_026e1800;
  if (g_026e1800 != (int64_t *******)0x0) {
    FUN_00d50b00();
  }
  dVar3 = (double)FUN_00e7d6f0();
  uVar7 = (uint64_t)(dVar3 * g_023907c0);
  dVar3 = dVar3 * g_023907c0 - g_023907c8;
  uVar16 = FUN_0071a120();
  if (((((char)local_70 == '\0') && (local_78 != (int64_t *******)0x0)) &&
      (uVar16 = FUN_00d50b00(), (char)local_70 != '\0')) && (local_78 != (int64_t *******)0x0)) {
    uVar16 = FUN_00d50b20();
  }
  bVar5 = (byte)(((int64_t)dVar3 & (int64_t)uVar7 >> 0x3f | uVar7) / 3);
  local_40 = ppppppplVar12;
  local_38 = '\0';
  FUN_000175c0(uVar16,&local_40);
  ppppppplVar10 = local_78;
  if ((char)local_70 == '\0') {
    if (((local_78 != (int64_t *******)0x0) && (FUN_00d50b00(), (char)local_70 != '\0')) &&
       (local_78 != (int64_t *******)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_70._0_1_ = '\0';
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *******)0x0)) {
    FUN_00d50b20();
  }
  if (ppppppplVar10 != (int64_t *******)0x0) {
    local_70._0_1_ = '\0';
    local_78 = ppppppplVar10;
    bVar5 = FUN_00c70bc0();
    if (((char)local_70 != '\0') && (local_78 != (int64_t *******)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  FUN_00d50b20();
  if (ppppppplVar12 != (int64_t *******)0x0) {
    FUN_00d50b20();
  }
  bVar5 = ppppppplVar10 != (int64_t *******)0x0 & bVar5;
  if (bVar5 == 0) {
    *(float *)(this_ptr + 0x3c) = *(float *)(this_ptr + 0x3c) * g_0239011c;
  }
  (**(code **)(**(int64_t **)(this_ptr + 0x30) + 0x468))();
  lVar2 = g_02729550;
  if (g_02729550 != 0) {
    FUN_00d50b00();
  }
  local_180 = local_a0;
  local_170 = lVar2;
  pVar11 = 2;
  FUN_00083ea0(2,&local_170);
  FUN_000b4da0();
  local_90 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != (int64_t *******)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
       (local_40 != (int64_t *******)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  local_78 = (int64_t *******)&g_0253d630;
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  local_78 = (int64_t *******)&g_024c5048;
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(**(int64_t **)(this_ptr + 0x30) + 0x370))();
  ppppppplVar12 = local_78;
  FUN_0074b2e0();
  local_110 = local_40;
  local_108 = 0;
  if (local_38 == '\0') {
    if (local_40 != (int64_t *******)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  local_108 = '\x01';
  cVar6 = (*(*ppppppplVar12)[10])();
  if ((local_108 != '\0') && (local_110 != (int64_t *******)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *******)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_70 != '\0') && (local_78 != (int64_t *******)0x0)) {
    FUN_00d50b20();
  }
  uVar16 = (**(code **)(**(int64_t **)(this_ptr + 0x30) + 0x388))();
  local_100 = local_40;
  local_f8 = 0;
  ppppppplVar12 = g_02729528;
  if (local_38 == '\0') {
    if (local_40 != (int64_t *******)0x0) {
      uVar16 = FUN_00d50b00();
      ppppppplVar12 = g_02729528;
    }
  }
  else {
    local_38 = '\0';
  }
  local_f8 = '\x01';
  g_02729528 = ppppppplVar12;
  if (ppppppplVar12 != (int64_t *******)0x0) {
    local_f8 = '\x01';
    uVar16 = FUN_00d50b00();
  }
  local_70._0_1_ = '\0';
  local_78 = ppppppplVar12;
  FUN_00ca0840(uVar16,&local_78);
  if (((char)local_70 != '\0') && (local_78 != (int64_t *******)0x0)) {
    FUN_00d50b20();
  }
  if (ppppppplVar12 != (int64_t *******)0x0) {
    FUN_00d50b20();
  }
  if ((local_f8 != '\0') && (local_100 != (int64_t *******)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *******)0x0)) {
    FUN_00d50b20();
  }
  lVar2 = g_026f6f70;
  if (cVar6 == '\0') {
    (**(code **)(**(int64_t **)(this_ptr + 0x30) + 0x370))();
    ppppppplVar12 = local_78;
    FUN_01552cd0();
    local_c0 = local_40;
    local_b8 = 0;
    if (local_38 == '\0') {
      if (local_40 != (int64_t *******)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_b8 = '\x01';
    cVar6 = (*(*ppppppplVar12)[10])();
    if ((local_b8 != '\0') && (local_c0 != (int64_t *******)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *******)0x0)) {
      FUN_00d50b20();
    }
    if (((char)local_70 != '\0') && (local_78 != (int64_t *******)0x0)) {
      FUN_00d50b20();
    }
    lVar2 = g_026f6f70;
    if (cVar6 != '\0') {
      if (g_026f6f70 != 0) {
        FUN_00d50b00();
      }
      lVar1 = g_0272f678;
      local_1f8 = lVar2;
      local_1f0 = '\x01';
      if (g_0272f678 != 0) {
        FUN_00d50b00();
      }
      local_1e8 = lVar1;
      local_1e0 = '\x01';
      local_1d8 = local_90;
      local_1d0 = '\0';
      FUN_00d31230(&local_1d8,&local_1e8);
      local_b0 = local_78;
      local_a8 = 0;
      if ((char)local_70 == '\0') {
        if (local_78 != (int64_t *******)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_70._0_1_ = '\0';
      }
      local_a8 = '\x01';
      local_128 = 0;
      lVar2 = *(int64_t *)(this_ptr + 0x18);
      if (lVar2 != 0) {
        FUN_00d50b00();
      }
      local_128 = '\x01';
      local_130 = lVar2;
      FUN_00172950();
      if ((local_128 != '\0') && (local_130 != 0)) {
        FUN_00d50b20();
      }
      if ((local_a8 != '\0') && (local_b0 != (int64_t *******)0x0)) {
        FUN_00d50b20();
      }
      if (((char)local_70 != '\0') && (local_78 != (int64_t *******)0x0)) {
        FUN_00d50b20();
      }
      if ((local_1d0 != '\0') && (local_1d8 != (int64_t *******)0x0)) {
        FUN_00d50b20();
      }
      if ((local_1e0 != '\0') && (local_1e8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_1f0 != '\0') && (local_1f8 != 0)) {
        FUN_00d50b20();
      }
      puVar9 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar9 = &g_025f02c0;
      pVar11 = 0x25f0658;
      puVar9[2] = &g_025f0658;
      puVar9[3] = 0;
      *(void*)(puVar9 + 4) = 0;
      puVar9[5] = 0;
      puVar9[6] = 0;
      puVar9[7] = 0;
      puVar9[8] = 0;
      (*g_025f02d8)();
      FUN_01553170();
      uVar16 = FUN_01553180();
      local_118 = 0;
      local_120 = *(int64_t *)(this_ptr + 0x30);
      if (local_120 != 0) {
        uVar16 = FUN_00d50b00();
      }
      local_118 = '\x01';
      FUN_015ab850(uVar16,&local_120);
      ppppppplVar12 = local_78;
      if ((char)local_70 == '\0') {
        if (((local_78 != (int64_t *******)0x0) && (FUN_00d50b00(), (char)local_70 != '\0')) &&
           (local_78 != (int64_t *******)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_70._0_1_ = '\0';
      }
      if ((local_118 != '\0') && (local_120 != 0)) {
        FUN_00d50b20();
      }
      if (ppppppplVar12 != (int64_t *******)0x0) {
        local_1c8 = ppppppplVar12;
        local_1c0 = '\0';
        FUN_004a0ad0();
        ppppppplVar12 = local_78;
        if ((char)local_70 == '\0') {
          if (((local_78 != (int64_t *******)0x0) && (FUN_00d50b00(), (char)local_70 != '\0')) &&
             (local_78 != (int64_t *******)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_70._0_1_ = '\0';
        }
        if ((local_1c0 != '\0') && (local_1c8 != (int64_t *******)0x0)) {
          FUN_00d50b20();
        }
        pvVar8 = _pthread_getspecific(pVar11);
        if (pvVar8 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_004a5a00();
        local_70._0_1_ = '\0';
        local_78 = ppppppplVar12;
        FUN_00d21140();
        if (((char)local_70 != '\0') && (local_78 != (int64_t *******)0x0)) {
          FUN_00d50b20();
        }
        if (ppppppplVar12 != (int64_t *******)0x0) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
  }
  else {
    if (g_026f6f70 != 0) {
      FUN_00d50b00();
    }
    lVar1 = g_02703540;
    if (g_02703540 != 0) {
      FUN_00d50b00();
    }
    local_218 = lVar1;
    local_210 = '\x01';
    local_208 = local_90;
    local_200 = '\0';
    ppppppplVar12 = (int64_t *******)&local_208;
    FUN_00d31230(ppppppplVar12,&local_218);
    local_f0 = local_78;
    local_e8 = 0;
    if ((char)local_70 == '\0') {
      if (local_78 != (int64_t *******)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_70._0_1_ = '\0';
    }
    local_e8 = '\x01';
    local_158 = 0;
    lVar1 = *(int64_t *)(this_ptr + 0x18);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    local_158 = '\x01';
    local_160 = lVar1;
    FUN_00172950();
    if ((local_158 != '\0') && (local_160 != 0)) {
      FUN_00d50b20();
    }
    if ((local_e8 != '\0') && (local_f0 != (int64_t *******)0x0)) {
      FUN_00d50b20();
    }
    if (((char)local_70 != '\0') && (local_78 != (int64_t *******)0x0)) {
      FUN_00d50b20();
    }
    if ((local_200 != '\0') && (local_208 != (int64_t *******)0x0)) {
      FUN_00d50b20();
    }
    if ((local_210 != '\0') && (local_218 != 0)) {
      FUN_00d50b20();
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    local_148 = 0;
    lVar2 = *(int64_t *)(this_ptr + 0x30);
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    local_148 = '\x01';
    local_150 = lVar2;
    FUN_00362a30();
    ppppppplVar10 = local_78;
    if ((char)local_70 == '\0') {
      if (((local_78 != (int64_t *******)0x0) && (FUN_00d50b00(), (char)local_70 != '\0')) &&
         (local_78 != (int64_t *******)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_70._0_1_ = '\0';
    }
    if ((local_148 != '\0') && (local_150 != 0)) {
      FUN_00d50b20();
    }
    pVar11 = (void*)ppppppplVar12;
    if (ppppppplVar10 != (int64_t *******)0x0) {
      cVar6 = FUN_017a7650();
      pVar11 = (void*)ppppppplVar12;
      if (cVar6 != '\0') {
        local_138 = 0;
        (**(code **)(*(int64_t *)(this_ptr + 0x10) + 0x10))();
        FUN_00d50b00();
        local_138 = '\x01';
        local_140 = (int64_t *)(this_ptr + 0x10);
        uVar16 = FUN_017a9390();
        if ((local_138 != '\0') && (local_140 != (int64_t *)0x0)) {
          (**(code **)(*local_140 + 0x10))();
          uVar16 = FUN_00d50b20();
        }
        FUN_00363970(uVar16,&local_40);
        ppppppplVar10 = local_78;
        if (((((char)local_70 == '\0') && (local_78 != (int64_t *******)0x0)) &&
            (FUN_00d50b00(), (char)local_70 != '\0')) && (local_78 != (int64_t *******)0x0)) {
          FUN_00d50b20();
        }
        if ((char)local_40 != '\0') {
          FUN_01f27fe0();
          cVar6 = (*(*local_78)[0xab])();
          if (((char)local_70 != '\0') && (local_78 != (int64_t *******)0x0)) {
            FUN_00d50b20();
          }
          if (cVar6 == '\0') {
            pvVar8 = _pthread_getspecific((void*)ppppppplVar12);
            if (pvVar8 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_00d50130();
            if (ppppppplVar10 != (int64_t *******)0x0) {
              FUN_00d50b20();
            }
            FUN_00d50b20();
            goto LAB_007e49a7;
          }
        }
        pVar11 = (void*)ppppppplVar12;
        if (ppppppplVar10 != (int64_t *******)0x0) {
          pvVar8 = _pthread_getspecific(pVar11);
          if (pvVar8 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_004a5a00();
          local_70._0_1_ = '\0';
          local_78 = ppppppplVar10;
          FUN_00d21140();
          if (((char)local_70 != '\0') && (local_78 != (int64_t *******)0x0)) {
            FUN_00d50b20();
          }
          FUN_017a8f30();
          ppppppplVar10 = *(int64_t ********)(this_ptr + 0x20);
          if (ppppppplVar10 != local_78) {
            ppppppplVar12 = ppppppplVar10;
            if ((char)local_70 == '\0') {
              if (local_78 == (int64_t *******)0x0) {
                ppppppplVar10 = (int64_t *******)0x0;
              }
              else {
                FUN_00d50b00();
                ppppppplVar10 = local_78;
                ppppppplVar12 = *(int64_t ********)(this_ptr + 0x20);
              }
            }
            else {
              local_70._0_1_ = '\0';
              ppppppplVar10 = local_78;
            }
            *(int64_t ********)(this_ptr + 0x20) = ppppppplVar10;
            if (ppppppplVar12 != (int64_t *******)0x0) {
              FUN_00d50b20();
              ppppppplVar10 = local_78;
            }
          }
          pVar11 = (void*)ppppppplVar12;
          if (((char)local_70 != '\0') && (ppppppplVar10 != (int64_t *******)0x0)) {
            FUN_00d50b20();
          }
          FUN_00d50b20();
        }
      }
      uVar16 = FUN_017a6de0();
      local_e0 = local_40;
      local_d8 = 0;
      pppppplVar4 = g_0270b810;
      if (local_38 == '\0') {
        if (local_40 != (int64_t *******)0x0) {
          uVar16 = FUN_00d50b00();
          pppppplVar4 = g_0270b810;
        }
      }
      else {
        local_38 = '\0';
      }
      local_d8 = '\x01';
      g_0270b810 = pppppplVar4;
      if (pppppplVar4 != (int64_t ******)0x0) {
        local_d8 = '\x01';
        uVar16 = FUN_00d50b00();
      }
      local_70._0_1_ = '\0';
      local_78 = (int64_t *******)pppppplVar4;
      FUN_00ca0840(uVar16,&local_78);
      if (((char)local_70 != '\0') && (local_78 != (int64_t *******)0x0)) {
        FUN_00d50b20();
      }
      if (pppppplVar4 != (int64_t ******)0x0) {
        FUN_00d50b20();
      }
      if ((local_d8 != '\0') && (local_e0 != (int64_t *******)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *******)0x0)) {
        FUN_00d50b20();
      }
      uVar16 = FUN_017a7040();
      local_d0 = local_40;
      local_c8 = 0;
      ppppppplVar12 = g_0270b818;
      if (local_38 == '\0') {
        if (local_40 != (int64_t *******)0x0) {
          uVar16 = FUN_00d50b00();
          ppppppplVar12 = g_0270b818;
        }
      }
      else {
        local_38 = '\0';
      }
      local_c8 = '\x01';
      g_0270b818 = ppppppplVar12;
      if (ppppppplVar12 != (int64_t *******)0x0) {
        local_c8 = '\x01';
        uVar16 = FUN_00d50b00();
      }
      local_70._0_1_ = '\0';
      local_78 = ppppppplVar12;
      FUN_00ca0840(uVar16,&local_78);
      if (((char)local_70 != '\0') && (local_78 != (int64_t *******)0x0)) {
        FUN_00d50b20();
      }
      if (ppppppplVar12 != (int64_t *******)0x0) {
        FUN_00d50b20();
      }
      if ((local_c8 != '\0') && (local_d0 != (int64_t *******)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *******)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
  }
  *(float *)(this_ptr + 0x38) = *(float *)(this_ptr + 0x3c) + *(float *)(this_ptr + 0x38);
  if (*(int *)(*(int64_t *)(this_ptr + 0x28) + 0xc) != 0) {
    FUN_00d23310();
    ppppppplVar12 = local_78;
    local_48[0] = (char)local_70;
    ppppppplVar10 = (int64_t *******)local_48;
    if ((char)local_70 != '\0') {
      ppppppplVar10 = &local_70;
    }
    *(void*)ppppppplVar10 = 0;
    if (((char)local_70 != '\0') && (local_78 != (int64_t *******)0x0)) {
      FUN_00d50b20();
    }
    pvVar8 = _pthread_getspecific(pVar11);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_004a1110();
    pvVar8 = _pthread_getspecific(pVar11);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01313ad0();
    pvVar8 = _pthread_getspecific(pVar11);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012cb110();
    pvVar8 = _pthread_getspecific(pVar11);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e6160();
    local_188 = (uint64_t)*(uint *)((int64_t)local_40 + 0xc);
    if (local_38 != '\0') {
      FUN_00d50b20();
    }
    if ((local_98 != '\0') && (local_a0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_178 != '\0') && (local_180 != 0)) {
      FUN_00d50b20();
    }
    if ((local_168 != '\0') && (local_170 != 0)) {
      FUN_00d50b20();
    }
    if ((local_48[0] != '\0') && (ppppppplVar12 != (int64_t *******)0x0)) {
      FUN_00d50b20();
    }
    lVar2 = g_026f6f70;
    if ((1 < (int)local_188 & (bVar5 ^ 1)) == 1) {
      if (g_026f6f70 != 0) {
        FUN_00d50b00();
      }
      lVar1 = g_0272f680;
      local_1b8 = lVar2;
      local_1b0 = '\x01';
      if (g_0272f680 != 0) {
        FUN_00d50b00();
      }
      local_1a8 = lVar1;
      local_1a0 = '\x01';
      local_198 = 0;
      local_190 = '\0';
      plVar13 = &local_198;
      FUN_00d31230(plVar13,&local_1a8);
      ppppppplVar12 = local_40;
      if (local_38 == '\0') {
        if (local_40 != (int64_t *******)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      local_78 = ppppppplVar12;
      local_70._0_1_ = '\0';
      FUN_00172e90();
      if (((char)local_70 != '\0') && (local_78 != (int64_t *******)0x0)) {
        FUN_00d50b20();
      }
      if (ppppppplVar12 != (int64_t *******)0x0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *******)0x0)) {
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
      *(float *)(this_ptr + 0x3c) = *(float *)(this_ptr + 0x3c) / (float)((int)local_188 + -1);
      if (*(int64_t *)(this_ptr + 0x20) != 0) {
        *(void*)(this_ptr + 0x20) = 0;
        FUN_00d50b20();
      }
      FUN_00d23310();
      ppppppplVar12 = local_78;
      local_40 = (int64_t *******)CONCAT71(local_40._1_7_,(char)local_70);
      ppppppplVar10 = &local_70;
      if ((char)local_70 == '\0') {
        ppppppplVar10 = (int64_t *******)&local_40;
      }
      *(void*)ppppppplVar10 = 0;
      if (((char)local_70 != '\0') && (local_78 != (int64_t *******)0x0)) {
        FUN_00d50b20();
      }
      if (((char)local_40 == '\0') && (ppppppplVar12 != (int64_t *******)0x0)) {
        FUN_00d50b00();
      }
      iVar15 = 1;
      do {
        pvVar8 = _pthread_getspecific((void*)plVar13);
        if (pvVar8 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_00d51d20();
        ppppppplVar10 = local_78;
        if ((char)local_70 == '\0') {
          if (local_78 != (int64_t *******)0x0) {
            FUN_00d50b00();
            if (((char)local_70 != '\0') && (local_78 != (int64_t *******)0x0)) {
              FUN_00d50b20();
            }
            goto LAB_007e48c0;
          }
LAB_007e4810:
          *(float *)(this_ptr + 0x38) = *(float *)(this_ptr + 0x3c) + *(float *)(this_ptr + 0x38)
          ;
        }
        else {
          if (local_78 == (int64_t *******)0x0) goto LAB_007e4810;
LAB_007e48c0:
          FUN_007e24c0();
          local_70._0_1_ = '\0';
          local_78 = ppppppplVar10;
          FUN_00d21140();
          if (((char)local_70 != '\0') && (local_78 != (int64_t *******)0x0)) {
            FUN_00d50b20();
          }
          *(float *)(this_ptr + 0x38) = *(float *)(this_ptr + 0x3c) + *(float *)(this_ptr + 0x38)
          ;
          FUN_00d50b20();
        }
        iVar15 = iVar15 + 1;
      } while ((int)local_188 != iVar15);
      FUN_00d23310();
      ppppppplVar10 = local_78;
      ppppppplVar14 = &local_70;
      if ((char)local_70 == '\0') {
        ppppppplVar14 = (int64_t *******)&local_40;
      }
      local_40 = (int64_t *******)CONCAT71(local_40._1_7_,(char)local_70);
      *(void*)ppppppplVar14 = 0;
      if (((char)local_70 != '\0') && (local_78 != (int64_t *******)0x0)) {
        FUN_00d50b20();
      }
      if (((char)local_40 == '\0') && (ppppppplVar10 != (int64_t *******)0x0)) {
        FUN_00d50b00();
      }
      FUN_007e24c0();
      if (ppppppplVar10 != (int64_t *******)0x0) {
        FUN_00d50b20();
      }
      if (ppppppplVar12 != (int64_t *******)0x0) {
        FUN_00d50b20();
      }
    }
  }
LAB_007e49a7:
  if (local_90 != (int64_t *******)0x0) {
    FUN_00d50b20();
  }
  return;
}

