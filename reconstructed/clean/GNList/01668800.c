// Function: FUN_01668800
// Address: 01668800
// Size: 3000 bytes
// Class: GNList
// === GNList properties ===
//   GNInt           _archiveVersion
//   bool            _awakesObjectsAfterDecoding
//   bool            _isCancelled
//   GNInt           _currentObjectGraphIdx
//   GNInt           _predictedDecodedValuesIndex


void FUN_01668800(void* param_1)

{
  bool bVar1;
  int64_t lVar2;
  char cVar3;
  byte bVar4;
  byte bVar5;
  void *pvVar6;
  void*puVar7;
  void*puVar8;
  uint64_t uVar9;
  uint64_t uVar10;
  int64_t *plVar11;
  uint unaff_ESI;
  int64_t this_ptr;
  byte bVar12;
  void*local_188;
  char local_180;
  void*local_178;
  char local_170;
  int64_t local_168;
  char local_160;
  int64_t local_158;
  char local_150;
  void*local_148;
  char local_140;
  void*local_138;
  char local_130;
  void*local_128;
  char local_120;
  void*local_118;
  char local_110;
  int64_t local_108;
  char local_100;
  int64_t local_f8;
  char local_f0;
  void*local_e8;
  char local_e0;
  int64_t local_d8;
  int64_t local_d0;
  int64_t local_c8;
  char local_c0;
  int64_t local_b8;
  char local_b0;
  int64_t local_a8;
  char local_a0;
  void*local_98;
  void*local_90;
  int64_t local_88;
  char local_80;
  void*local_78;
  void*local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  if (*(int64_t *)(this_ptr + 0xf0) == 0) {
    return;
  }
  if ((unaff_ESI & 1) == 0) {
    FUN_01662650();
    puVar7 = *(void**)(this_ptr + 0x120);
    puVar8 = puVar7;
    if (puVar7 == local_70) goto LAB_01668c36;
    if (local_68 == '\0') {
      if (local_70 == (void*)0x0) {
        puVar8 = (void*)0x0;
        goto LAB_0166885f;
      }
      FUN_00d50b00();
      puVar7 = *(void**)(this_ptr + 0x120);
      *(void**)(this_ptr + 0x120) = local_70;
      puVar8 = local_70;
    }
    else {
      local_68 = '\0';
      puVar8 = local_70;
LAB_0166885f:
      *(void**)(this_ptr + 0x120) = puVar8;
    }
    if (puVar7 != (void*)0x0) {
      FUN_00d50b20();
      puVar8 = local_70;
    }
LAB_01668c36:
    if ((local_68 != '\0') && (puVar8 != (void*)0x0)) {
      FUN_00d50b20();
    }
    puVar7 = (void*)FUN_00e8fc40();
    FUN_00115cd0();
    *puVar7 = &g_025f50e8;
    puVar7[0xd] = 0;
    puVar7[0xe] = 0;
    (*g_025f5100)();
    FUN_01660e50();
    FUN_00d50b20();
    return;
  }
  pvVar6 = _pthread_getspecific(param_1);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0124df10();
  pvVar6 = _pthread_getspecific(param_1);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0132d610();
  local_98 = local_70;
  if (local_68 == '\0') {
    if (((local_70 != (void*)0x0) && (FUN_00d50b00(), local_68 != '\0')) &&
       (local_70 != (void*)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_68 = '\0';
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (((unaff_ESI & 4) == 0) && (cVar3 = FUN_01669ad0(), cVar3 != '\0')) {
    pvVar6 = _pthread_getspecific(param_1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    bVar1 = true;
    FUN_0124e420();
    if ((~unaff_ESI & 0x18) != 0) goto LAB_016689d6;
LAB_0166899d:
    bVar5 = 0;
    if ((unaff_ESI & 0x10) == 0) goto LAB_016689a6;
LAB_016689e9:
    bVar12 = 0;
    bVar4 = 0;
    if (bVar1) goto LAB_016689f1;
LAB_016689b8:
    if ((bVar5 | bVar4) != 1) goto LAB_01669395;
  }
  else {
    bVar1 = false;
    if ((~unaff_ESI & 0x18) == 0) goto LAB_0166899d;
LAB_016689d6:
    bVar5 = FUN_0166a440();
    if ((unaff_ESI & 0x10) != 0) goto LAB_016689e9;
LAB_016689a6:
    bVar4 = FUN_0166b030();
    bVar12 = bVar4;
    if (!bVar1) goto LAB_016689b8;
LAB_016689f1:
    if ((bVar5 & bVar12) == 0) {
      pvVar6 = _pthread_getspecific(param_1);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0124df10();
      pvVar6 = _pthread_getspecific(param_1);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0132d610();
      local_90 = local_70;
      if (local_68 == '\0') {
        if (((local_70 != (void*)0x0) && (FUN_00d50b00(), local_68 != '\0')) &&
           (local_70 != (void*)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_68 = '\0';
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      pvVar6 = _pthread_getspecific(param_1);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0124df10();
      pvVar6 = _pthread_getspecific(param_1);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0132d900();
      puVar7 = local_70;
      if (local_68 == '\0') {
        if (((local_70 != (void*)0x0) && (FUN_00d50b00(), local_68 != '\0')) &&
           (local_70 != (void*)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_68 = '\0';
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      local_78 = puVar7;
      if (bVar5 == 0) {
        pvVar6 = _pthread_getspecific(param_1);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_188 = local_98;
        local_180 = '\0';
        local_178 = local_90;
        local_170 = '\0';
        uVar9 = FUN_00e7bdb0();
        uVar10 = FUN_00e7bdb0();
        local_160 = '\0';
        local_168 = 0;
        param_1 = (void*)&local_178;
        cVar3 = FUN_01516650(0,&local_188,uVar9,uVar10);
        if ((local_160 != '\0') && (local_168 != 0)) {
          FUN_00d50b20();
        }
        if ((local_170 != '\0') && (local_178 != (void*)0x0)) {
          FUN_00d50b20();
        }
        if ((local_180 != '\0') && (local_188 != (void*)0x0)) {
          FUN_00d50b20();
        }
        puVar7 = local_78;
        if (cVar3 != '\0') {
          FUN_00d403d0();
          local_158 = g_027c8278;
          if (g_027c8278 != 0) {
            FUN_00d50b00();
          }
          local_150 = '\x01';
          local_148 = local_78;
          local_140 = '\0';
          FUN_00d46300();
          lVar2 = g_027c8270;
          if (g_027c8270 != 0) {
            FUN_00d50b00();
          }
          local_d8 = local_b8;
          local_d0 = lVar2;
          FUN_00083ea0(2,&local_d0);
          FUN_000b4da0();
          local_c8 = local_88;
          local_c0 = 0;
          if (local_80 == '\0') {
            if (local_88 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_80 = '\0';
          }
          puVar7 = local_78;
          local_c0 = '\x01';
          plVar11 = &local_c8;
          FUN_00d40470(plVar11,&local_148,3,3);
          param_1 = (void*)plVar11;
          if ((local_c0 != '\0') && (local_c8 != 0)) {
            FUN_00d50b20();
          }
          if ((local_80 != '\0') && (local_88 != 0)) {
            FUN_00d50b20();
          }
          local_70 = (void*)&g_0253d630;
          if ((local_48 != '\0') && (local_50 != 0)) {
            FUN_00d50b20();
          }
          local_70 = &g_024c5048;
          if ((local_58 != '\0') && (local_60 != 0)) {
            FUN_00d50b20();
          }
          if (lVar2 != 0) {
            FUN_00d50b20();
          }
          if ((local_b0 != '\0') && (local_b8 != 0)) {
            FUN_00d50b20();
          }
          if ((local_140 != '\0') && (local_148 != (void*)0x0)) {
            FUN_00d50b20();
          }
          if ((local_150 != '\0') && (local_158 != 0)) {
            FUN_00d50b20();
          }
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
        }
      }
      if (bVar12 == 0) {
        pvVar6 = _pthread_getspecific(param_1);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_130 = '\0';
        local_128 = local_98;
        local_120 = '\0';
        local_118 = local_90;
        local_110 = '\0';
        local_138 = puVar7;
        uVar9 = FUN_00e7bdb0();
        uVar10 = FUN_00e7bdb0();
        local_100 = '\0';
        local_108 = 0;
        cVar3 = FUN_01516720(0,&local_128,uVar9,uVar10);
        if ((local_100 != '\0') && (local_108 != 0)) {
          FUN_00d50b20();
        }
        if ((local_110 != '\0') && (local_118 != (void*)0x0)) {
          FUN_00d50b20();
        }
        if ((local_120 != '\0') && (local_128 != (void*)0x0)) {
          FUN_00d50b20();
        }
        if ((local_130 != '\0') && (local_138 != (void*)0x0)) {
          FUN_00d50b20();
        }
        puVar7 = local_78;
        if (cVar3 != '\0') {
          FUN_00d403d0();
          local_f8 = g_027c8280;
          if (g_027c8280 != 0) {
            FUN_00d50b00();
          }
          local_f0 = '\x01';
          local_e8 = local_78;
          local_e0 = '\0';
          FUN_00d46300();
          lVar2 = g_027c8270;
          if (g_027c8270 != 0) {
            FUN_00d50b00();
          }
          local_d8 = local_b8;
          local_d0 = lVar2;
          FUN_00083ea0(2,&local_d0);
          FUN_000b4da0();
          local_a8 = local_88;
          local_a0 = 0;
          if (local_80 == '\0') {
            if (local_88 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_80 = '\0';
          }
          puVar7 = local_78;
          local_a0 = '\x01';
          FUN_00d40470(&local_a8,&local_e8,3,3);
          if ((local_a0 != '\0') && (local_a8 != 0)) {
            FUN_00d50b20();
          }
          if ((local_80 != '\0') && (local_88 != 0)) {
            FUN_00d50b20();
          }
          local_70 = (void*)&g_0253d630;
          if ((local_48 != '\0') && (local_50 != 0)) {
            FUN_00d50b20();
          }
          local_70 = &g_024c5048;
          if ((local_58 != '\0') && (local_60 != 0)) {
            FUN_00d50b20();
          }
          if (lVar2 != 0) {
            FUN_00d50b20();
          }
          if ((local_b0 != '\0') && (local_b8 != 0)) {
            FUN_00d50b20();
          }
          if ((local_e0 != '\0') && (local_e8 != (void*)0x0)) {
            FUN_00d50b20();
          }
          if ((local_f0 != '\0') && (local_f8 != 0)) {
            FUN_00d50b20();
          }
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
        }
      }
      if (puVar7 != (void*)0x0) {
        FUN_00d50b20();
      }
      if (local_90 != (void*)0x0) {
        FUN_00d50b20();
      }
    }
  }
  cVar3 = FUN_01733c10();
  if ((cVar3 == '\0') && (*(int64_t *)(this_ptr + 0xf0) != 0)) {
    FUN_016818b0();
  }
LAB_01669395:
  if (local_98 != (void*)0x0) {
    FUN_00d50b20();
  }
  return;
}

