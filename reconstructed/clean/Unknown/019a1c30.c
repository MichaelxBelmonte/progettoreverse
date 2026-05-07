// Function: FUN_019a1c30
// Address: 019a1c30
// Size: 5172 bytes
// Class: Unknown

void FUN_019a1c30(void* param_1)

{
  int64_t *plVar1;
  int64_t lVar2;
  void *pvVar3;
  int64_t lVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  void* pVar7;
  uint uVar8;
  uint64_t uVar9;
  int iVar10;
  int64_t *this_ptr;
  int64_t lVar11;
  byte bVar12;
  char cVar13;
  int64_t unaff_R14;
  undefined7 uVar14;
  bool bVar15;
  bool bVar16;
  int64_t local_2b8;
  char local_2b0;
  int64_t local_2a8;
  char local_2a0;
  int64_t local_298;
  char local_290;
  int64_t local_288;
  char local_280;
  int64_t local_278;
  char local_270;
  int64_t local_268;
  char local_260;
  int64_t local_258;
  char local_250;
  int64_t local_248;
  char local_240;
  int64_t local_238;
  char local_230;
  int64_t local_228;
  char local_220;
  int64_t local_218;
  char local_210;
  int64_t local_208;
  char local_200;
  int64_t local_1f8;
  char local_1f0;
  int64_t local_1e8;
  char local_1e0;
  int64_t local_1d8;
  char local_1d0;
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
  int64_t local_158;
  char local_150;
  int64_t local_148;
  char local_140;
  int64_t *local_138;
  char local_130;
  int64_t *local_128;
  char local_120;
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
  int64_t *local_c8;
  char local_c0;
  int64_t *local_b8;
  char local_b0;
  int64_t *local_a8;
  char local_a0;
  int64_t local_98;
  char local_90;
  int64_t local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  int64_t local_68;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  uint64_t local_48;
  int local_40;
  uint local_34;
  
  if (this_ptr[0x3d] != 0) {
    local_58 = '\0';
    local_60 = 0;
    local_48 = 0xffffffff;
    local_40 = 0;
    local_48._4_4_ = 0;
    local_50 = this_ptr[0x3d];
    while( true ) {
      if (local_48._4_4_ != 0) {
        if (local_48._4_4_ < 1) {
          iVar10 = -local_48._4_4_;
        }
        else {
          iVar10 = (int)local_48 - local_48._4_4_;
          local_48 = CONCAT44(local_48._4_4_,iVar10);
          FUN_00d23690();
          local_40 = local_40 + local_48._4_4_;
          iVar10 = 0;
        }
        local_48 = CONCAT44(iVar10,(int)local_48);
      }
      lVar2 = (int64_t)(int)local_48;
      iVar10 = (int)local_48 + 1;
      local_48 = CONCAT44(local_48._4_4_,iVar10);
      if (*(int *)(local_50 + 0xc) <= iVar10) break;
      unaff_R14 = *(int64_t *)(*(int64_t *)(local_50 + 0x10) + 8 + lVar2 * 8);
      local_60 = unaff_R14;
      pvVar3 = _pthread_getspecific((void*)*(int64_t *)(local_50 + 0x10));
      lVar2 = local_60;
      if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), unaff_R14 = lVar2, lVar4 != 0)) {
        unaff_R14 = *(int64_t *)(lVar2 + 0x20 + (uint64_t)(*(uint *)(lVar4 + 0x154) & 1) * 8);
      }
      local_130 = 0;
      (**(code **)(this_ptr[0x28] + 0x10))();
      FUN_00d50b00();
      local_130 = '\x01';
      local_138 = this_ptr + 0x28;
      FUN_000823a0();
      FUN_00e86210();
      lVar2 = g_026f6f60;
      if (g_026f6f60 != 0) {
        FUN_00d50b00();
      }
      FUN_00c841b0();
      local_98 = local_78;
      local_90 = 0;
      if (local_70 == '\0') {
        if (local_78 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_70 = '\0';
      }
      local_90 = '\x01';
      FUN_00e8b850(4,&local_98);
      if ((local_90 != '\0') && (local_98 != 0)) {
        FUN_00d50b20();
      }
      if ((local_70 != '\0') && (local_78 != 0)) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      if ((local_130 != '\0') && (local_138 != (int64_t *)0x0)) {
        (**(code **)(*local_138 + 0x10))();
        FUN_00d50b20();
      }
    }
    lVar2 = local_50;
    FUN_000be170();
    param_1 = (void*)lVar2;
  }
  if (this_ptr[0x3e] != 0) {
    local_58 = '\0';
    local_60 = 0;
    local_48 = 0xffffffff;
    local_40 = 0;
    local_48._4_4_ = 0;
    local_50 = this_ptr[0x3e];
    while( true ) {
      if (local_48._4_4_ != 0) {
        if (local_48._4_4_ < 1) {
          iVar10 = -local_48._4_4_;
        }
        else {
          iVar10 = (int)local_48 - local_48._4_4_;
          local_48 = CONCAT44(local_48._4_4_,iVar10);
          FUN_00d23690();
          local_40 = local_40 + local_48._4_4_;
          iVar10 = 0;
        }
        local_48 = CONCAT44(iVar10,(int)local_48);
      }
      lVar2 = (int64_t)(int)local_48;
      iVar10 = (int)local_48 + 1;
      local_48 = CONCAT44(local_48._4_4_,iVar10);
      if (*(int *)(local_50 + 0xc) <= iVar10) break;
      lVar4 = *(int64_t *)(local_50 + 0x10);
      local_60 = *(int64_t *)(lVar4 + 8 + lVar2 * 8);
      pvVar3 = _pthread_getspecific((void*)lVar4);
      pVar7 = (void*)lVar4;
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      lVar4 = FUN_00e8b990();
      lVar2 = local_60;
      if (lVar4 != 0) {
        pvVar3 = _pthread_getspecific(pVar7);
        lVar4 = local_60;
        unaff_R14 = lVar2;
        if ((pvVar3 != (void *)0x0) && (lVar2 = FUN_00e8b990(), unaff_R14 = lVar4, lVar2 != 0)) {
          unaff_R14 = *(int64_t *)(lVar4 + 0x20 + (uint64_t)(*(uint *)(lVar2 + 0x154) & 1) * 8);
        }
        local_120 = 0;
        (**(code **)(this_ptr[0x28] + 0x10))();
        FUN_00d50b00();
        local_120 = '\x01';
        local_128 = this_ptr + 0x28;
        FUN_000823a0();
        FUN_00e86210();
        lVar2 = g_026f6f60;
        if (g_026f6f60 != 0) {
          FUN_00d50b00();
        }
        FUN_00c841b0();
        local_88 = local_78;
        local_80 = 0;
        if (local_70 == '\0') {
          if (local_78 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_70 = '\0';
        }
        local_80 = '\x01';
        FUN_00e8b850(4,&local_88);
        if ((local_80 != '\0') && (local_88 != 0)) {
          FUN_00d50b20();
        }
        if ((local_70 != '\0') && (local_78 != 0)) {
          FUN_00d50b20();
        }
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        if ((local_120 != '\0') && (local_128 != (int64_t *)0x0)) {
          (**(code **)(*local_128 + 0x10))();
          FUN_00d50b20();
        }
      }
    }
    lVar2 = local_50;
    FUN_000be170();
    param_1 = (void*)lVar2;
  }
  (**(code **)(*this_ptr + 0xa00))();
  if (local_60 == 0) {
    bVar16 = false;
    local_68 = 0;
    uVar6 = 0;
    bVar15 = false;
  }
  else {
    (**(code **)(*this_ptr + 0xa00))();
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_68 = FUN_00e8b990();
    bVar15 = local_68 == 0;
    if (bVar15) {
      uVar6 = 0;
      local_68 = 0;
    }
    else {
      FUN_00d50b00();
      uVar6 = CONCAT71((int7)((uint64_t)unaff_R14 >> 8),1);
    }
    bVar15 = !bVar15;
    bVar16 = local_68 != 0;
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if (!bVar16) goto LAB_019a305d;
  FUN_0006e1c0();
  FUN_00e86210();
  lVar2 = g_027e1390;
  if (g_027e1390 != 0) {
    FUN_00d50b00();
  }
  uVar5 = FUN_00c841b0();
  lVar4 = local_60;
  if (local_60 == 0) {
    uVar14 = (undefined7)((uint64_t)uVar6 >> 8);
    bVar12 = 1;
    local_34 = 0;
  }
  else {
    if (local_58 == '\0') {
      uVar6 = FUN_00d50b00();
      bVar12 = 0;
      uVar14 = 0;
      local_34 = (uint)CONCAT71((int7)((uint64_t)uVar6 >> 8),1);
      if ((local_58 == '\0') || (local_60 == 0)) goto LAB_019a2211;
      uVar5 = FUN_00d50b20();
    }
    else {
      local_58 = '\0';
    }
    local_34 = (uint)CONCAT71((int7)((uint64_t)uVar5 >> 8),1);
    bVar12 = 0;
    uVar14 = 0;
  }
LAB_019a2211:
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  plVar1 = this_ptr + 0x28;
  local_110 = 0;
  (**(code **)(this_ptr[0x28] + 0x10))();
  FUN_00d50b00();
  local_110 = '\x01';
  local_2b8 = 0;
  local_2b0 = '\0';
  local_2a8 = lVar4;
  local_2a0 = '\0';
  local_118 = plVar1;
  FUN_00cbad30(&local_2a8,&local_2b8,0xa0);
  if ((local_2a0 != '\0') && (local_2a8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_2b0 != '\0') && (local_2b8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_110 != '\0') && (local_118 != (int64_t *)0x0)) {
    (**(code **)(*local_118 + 0x10))();
    FUN_00d50b20();
  }
  local_298 = local_68;
  local_290 = '\0';
  FUN_019a3ec0();
  if ((local_290 != '\0') && (local_298 != 0)) {
    FUN_00d50b20();
  }
  FUN_011a7c20();
  FUN_00e86210();
  lVar2 = g_027e13b0;
  if (g_027e13b0 != 0) {
    FUN_00d50b00();
  }
  local_288 = lVar2;
  local_280 = '\x01';
  FUN_00c841b0();
  uVar8 = local_34;
  lVar11 = local_60;
  if (lVar4 == local_60) {
    if ((bool)(bVar12 & lVar4 != 0)) {
      if (local_58 != '\0') goto LAB_019a23bf;
      FUN_00d50b00();
      uVar8 = (uint)CONCAT71((int7)((uint64_t)lVar2 >> 8),1);
    }
LAB_019a2416:
    if (local_58 == '\0') {
      uVar9 = (uint64_t)uVar8;
    }
    else {
      if (local_60 != 0) {
        FUN_00d50b20();
      }
      uVar9 = (uint64_t)uVar8;
    }
  }
  else {
    bVar12 = (byte)local_34;
    if (local_58 == '\0') {
      if (local_60 != 0) {
        FUN_00d50b00();
      }
      bVar16 = lVar4 != 0;
      uVar8 = (uint)CONCAT71((uint7)(uint3)(uVar8 >> 8),1);
      lVar4 = lVar11;
      if ((bVar12 & bVar16) == 1) {
        FUN_00d50b20();
      }
      goto LAB_019a2416;
    }
    bVar16 = lVar4 != 0;
    lVar4 = lVar11;
    if ((bVar12 & bVar16) == 1) {
      FUN_00d50b20();
    }
LAB_019a23bf:
    local_58 = '\0';
    uVar9 = CONCAT71(uVar14,1);
  }
  if ((local_280 != '\0') && (local_288 != 0)) {
    FUN_00d50b20();
  }
  local_100 = 0;
  (**(code **)(*plVar1 + 0x10))();
  FUN_00d50b00();
  local_100 = '\x01';
  local_278 = 0;
  local_270 = '\0';
  local_260 = '\0';
  local_268 = lVar4;
  local_108 = plVar1;
  FUN_00cbad30(&local_268,&local_278,0xa0);
  if ((local_260 != '\0') && (local_268 != 0)) {
    FUN_00d50b20();
  }
  if ((local_270 != '\0') && (local_278 != 0)) {
    FUN_00d50b20();
  }
  if ((local_100 != '\0') && (local_108 != (int64_t *)0x0)) {
    (**(code **)(*local_108 + 0x10))();
    FUN_00d50b20();
  }
  FUN_01a014c0();
  FUN_00e86210();
  lVar2 = g_027e13b8;
  if (g_027e13b8 != 0) {
    FUN_00d50b00();
  }
  local_258 = lVar2;
  local_250 = '\x01';
  FUN_00c841b0();
  lVar11 = local_60;
  cVar13 = (char)uVar9;
  uVar14 = (undefined7)((uint64_t)lVar2 >> 8);
  if (lVar4 == local_60) {
    lVar11 = lVar4;
    if ((cVar13 == '\0') && (lVar4 != 0)) {
      if (local_58 != '\0') goto LAB_019a258e;
      uVar8 = (uint)CONCAT71(uVar14,1);
      FUN_00d50b00();
    }
    else {
      uVar8 = (uint)uVar9;
    }
LAB_019a260c:
    if (local_58 == '\0') {
      uVar9 = (uint64_t)uVar8;
    }
    else {
      if (local_60 != 0) {
        FUN_00d50b20();
      }
      uVar9 = (uint64_t)uVar8;
    }
  }
  else {
    if (local_58 == '\0') {
      if (local_60 != 0) {
        FUN_00d50b00();
      }
      uVar8 = (uint)CONCAT71(uVar14,1);
      if ((cVar13 != '\0') && (lVar4 != 0)) {
        FUN_00d50b20();
      }
      goto LAB_019a260c;
    }
    if ((cVar13 != '\0') && (lVar4 != 0)) {
      FUN_00d50b20();
    }
LAB_019a258e:
    local_58 = '\0';
    uVar9 = CONCAT71((int7)(uVar9 >> 8),1);
  }
  if ((local_250 != '\0') && (local_258 != 0)) {
    FUN_00d50b20();
  }
  local_f0 = 0;
  (**(code **)(*plVar1 + 0x10))();
  FUN_00d50b00();
  local_f0 = '\x01';
  local_248 = 0;
  local_240 = '\0';
  local_230 = '\0';
  local_238 = lVar11;
  local_f8 = plVar1;
  FUN_00cbad30(&local_238,&local_248,0xa0);
  if ((local_230 != '\0') && (local_238 != 0)) {
    FUN_00d50b20();
  }
  if ((local_240 != '\0') && (local_248 != 0)) {
    FUN_00d50b20();
  }
  if ((local_f0 != '\0') && (local_f8 != (int64_t *)0x0)) {
    (**(code **)(*local_f8 + 0x10))();
    FUN_00d50b20();
  }
  FUN_01a01770();
  FUN_00e86210();
  local_228 = g_027e13c0;
  if (g_027e13c0 != 0) {
    FUN_00d50b00();
  }
  local_220 = '\x01';
  FUN_00c841b0();
  lVar2 = local_60;
  uVar8 = (uint)uVar9;
  uVar14 = (undefined7)(uVar9 >> 8);
  if (lVar11 == local_60) {
    lVar2 = lVar11;
    if (((char)uVar9 == '\0') && (lVar11 != 0)) {
      if (local_58 != '\0') goto LAB_019a2788;
      uVar9 = CONCAT71(uVar14,1);
      local_34 = uVar8;
      FUN_00d50b00();
    }
LAB_019a2801:
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    if (local_58 == '\0') {
      local_34 = uVar8;
      if (local_60 != 0) {
        FUN_00d50b00();
      }
      uVar9 = CONCAT71(uVar14,1);
      if (((char)local_34 != '\0') && (lVar11 != 0)) {
        FUN_00d50b20();
      }
      goto LAB_019a2801;
    }
    if (((char)uVar9 != '\0') && (lVar11 != 0)) {
      local_34 = uVar8;
      FUN_00d50b20();
    }
LAB_019a2788:
    local_58 = '\0';
    uVar9 = CONCAT71(uVar14,1);
  }
  if ((local_220 != '\0') && (local_228 != 0)) {
    FUN_00d50b20();
  }
  local_e0 = 0;
  (**(code **)(*plVar1 + 0x10))();
  FUN_00d50b00();
  local_e0 = '\x01';
  local_218 = 0;
  local_210 = '\0';
  local_200 = '\0';
  local_208 = lVar2;
  local_e8 = plVar1;
  FUN_00cbad30(&local_208,&local_218,0xa0);
  if ((local_200 != '\0') && (local_208 != 0)) {
    FUN_00d50b20();
  }
  if ((local_210 != '\0') && (local_218 != 0)) {
    FUN_00d50b20();
  }
  if ((local_e0 != '\0') && (local_e8 != (int64_t *)0x0)) {
    (**(code **)(*local_e8 + 0x10))();
    FUN_00d50b20();
  }
  FUN_01a014c0();
  FUN_00e86210();
  lVar4 = g_027e3cf0;
  if (g_027e3cf0 != 0) {
    FUN_00d50b00();
  }
  local_1f8 = lVar4;
  local_1f0 = '\x01';
  FUN_00c841b0();
  lVar11 = local_60;
  cVar13 = (char)uVar9;
  uVar14 = (undefined7)((uint64_t)lVar4 >> 8);
  if (lVar2 == local_60) {
    lVar11 = lVar2;
    if ((cVar13 == '\0') && (lVar2 != 0)) {
      if (local_58 != '\0') goto LAB_019a2971;
      uVar9 = CONCAT71(uVar14,1);
      FUN_00d50b00();
    }
    else {
      uVar9 = uVar9 & 0xffffffff;
    }
LAB_019a29c6:
    if (local_58 == '\0') {
      uVar9 = uVar9 & 0xffffffff;
    }
    else {
      uVar9 = uVar9 & 0xffffffff;
      if (local_60 != 0) {
        FUN_00d50b20();
      }
    }
  }
  else {
    if (local_58 == '\0') {
      if (local_60 != 0) {
        FUN_00d50b00();
      }
      uVar9 = CONCAT71(uVar14,1);
      if ((cVar13 != '\0') && (lVar2 != 0)) {
        FUN_00d50b20();
        uVar9 = CONCAT71(uVar14,1);
      }
      goto LAB_019a29c6;
    }
    if ((cVar13 != '\0') && (lVar2 != 0)) {
      uVar9 = uVar9 & 0xffffffffffffff00;
      FUN_00d50b20();
    }
LAB_019a2971:
    local_58 = '\0';
    uVar9 = CONCAT71((int7)(uVar9 >> 8),1);
  }
  if ((local_1f0 != '\0') && (local_1f8 != 0)) {
    FUN_00d50b20();
  }
  local_d0 = 0;
  (**(code **)(*plVar1 + 0x10))();
  FUN_00d50b00();
  local_d0 = '\x01';
  local_1e8 = 0;
  local_1e0 = '\0';
  local_1d0 = '\0';
  local_1d8 = lVar11;
  local_d8 = plVar1;
  FUN_00cbad30(&local_1d8,&local_1e8,0xa0);
  if ((local_1d0 != '\0') && (local_1d8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_1e0 != '\0') && (local_1e8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_d0 != '\0') && (local_d8 != (int64_t *)0x0)) {
    (**(code **)(*local_d8 + 0x10))();
    FUN_00d50b20();
  }
  FUN_0013de80();
  FUN_00e86210();
  local_1c8 = g_027e13c8;
  if (g_027e13c8 != 0) {
    FUN_00d50b00();
  }
  local_1c0 = '\x01';
  uVar6 = FUN_00c841b0();
  lVar2 = local_60;
  uVar14 = (undefined7)(uVar9 >> 8);
  if (lVar11 == local_60) {
    lVar2 = lVar11;
    if (((char)uVar9 == '\0') && (lVar11 != 0)) {
      if (local_58 != '\0') goto LAB_019a2b3f;
      uVar9 = CONCAT71(uVar14,1);
      local_34 = 0;
      FUN_00d50b00();
    }
LAB_019a2bab:
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    if (local_58 == '\0') {
      local_34 = (uint)uVar9;
      if (local_60 != 0) {
        uVar6 = FUN_00d50b00();
      }
      uVar9 = CONCAT71(uVar14,1);
      if (((char)local_34 != '\0') && (lVar11 != 0)) {
        local_34 = (uint)CONCAT71((int7)((uint64_t)uVar6 >> 8),1);
        FUN_00d50b20();
        uVar9 = CONCAT71(uVar14,1);
      }
      goto LAB_019a2bab;
    }
    if (((char)uVar9 != '\0') && (lVar11 != 0)) {
      local_34 = (uint)CONCAT71((int7)((uint64_t)uVar6 >> 8),1);
      FUN_00d50b20();
    }
LAB_019a2b3f:
    local_58 = '\0';
    uVar9 = CONCAT71(uVar14,1);
  }
  if ((local_1c0 != '\0') && (local_1c8 != 0)) {
    FUN_00d50b20();
  }
  local_c0 = 0;
  (**(code **)(*plVar1 + 0x10))();
  FUN_00d50b00();
  local_c0 = '\x01';
  local_1b8 = 0;
  local_1b0 = '\0';
  local_1a0 = '\0';
  local_1a8 = lVar2;
  local_c8 = plVar1;
  FUN_00cbad30(&local_1a8,&local_1b8,0xa0);
  if ((local_1a0 != '\0') && (local_1a8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_1b0 != '\0') && (local_1b8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_c0 != '\0') && (local_c8 != (int64_t *)0x0)) {
    (**(code **)(*local_c8 + 0x10))();
    FUN_00d50b20();
  }
  FUN_01a01970();
  FUN_00e86210();
  lVar4 = g_027e13d0;
  if (g_027e13d0 != 0) {
    FUN_00d50b00();
  }
  local_198 = lVar4;
  local_190 = '\x01';
  FUN_00c841b0();
  lVar11 = local_60;
  cVar13 = (char)uVar9;
  uVar14 = (undefined7)((uint64_t)lVar4 >> 8);
  if (lVar2 == local_60) {
    lVar11 = lVar2;
    if ((cVar13 == '\0') && (lVar2 != 0)) {
      if (local_58 != '\0') goto LAB_019a2d1b;
      uVar9 = CONCAT71(uVar14,1);
      FUN_00d50b00();
    }
    else {
      uVar9 = uVar9 & 0xffffffff;
    }
LAB_019a2d70:
    if (local_58 == '\0') {
      uVar9 = uVar9 & 0xffffffff;
    }
    else {
      uVar9 = uVar9 & 0xffffffff;
      if (local_60 != 0) {
        FUN_00d50b20();
      }
    }
  }
  else {
    if (local_58 == '\0') {
      if (local_60 != 0) {
        FUN_00d50b00();
      }
      uVar9 = CONCAT71(uVar14,1);
      if ((cVar13 != '\0') && (lVar2 != 0)) {
        FUN_00d50b20();
        uVar9 = CONCAT71(uVar14,1);
      }
      goto LAB_019a2d70;
    }
    if ((cVar13 != '\0') && (lVar2 != 0)) {
      uVar9 = uVar9 & 0xffffffffffffff00;
      FUN_00d50b20();
    }
LAB_019a2d1b:
    local_58 = '\0';
    uVar9 = CONCAT71((int7)(uVar9 >> 8),1);
  }
  if ((local_190 != '\0') && (local_198 != 0)) {
    FUN_00d50b20();
  }
  local_b0 = 0;
  (**(code **)(*plVar1 + 0x10))();
  FUN_00d50b00();
  local_b0 = '\x01';
  local_188 = 0;
  local_180 = '\0';
  local_170 = '\0';
  local_178 = lVar11;
  local_b8 = plVar1;
  FUN_00cbad30(&local_178,&local_188,0xa0);
  if ((local_170 != '\0') && (local_178 != 0)) {
    FUN_00d50b20();
  }
  if ((local_180 != '\0') && (local_188 != 0)) {
    FUN_00d50b20();
  }
  if ((local_b0 != '\0') && (local_b8 != (int64_t *)0x0)) {
    (**(code **)(*local_b8 + 0x10))();
    FUN_00d50b20();
  }
  FUN_00115af0();
  FUN_00e86210();
  local_168 = g_027060a8;
  if (g_027060a8 != 0) {
    FUN_00d50b00();
  }
  local_160 = '\x01';
  uVar6 = FUN_00c841b0();
  lVar2 = local_60;
  if (lVar11 == local_60) {
    lVar2 = lVar11;
    if (((char)uVar9 == '\0') && (lVar11 != 0)) {
      if (local_58 != '\0') goto LAB_019a2ee9;
      uVar9 = 1;
      local_34 = 0;
      FUN_00d50b00();
    }
LAB_019a2f55:
    cVar13 = (char)uVar9;
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    if (local_58 == '\0') {
      local_34 = (uint)uVar9;
      if (local_60 != 0) {
        uVar6 = FUN_00d50b00();
      }
      uVar9 = 1;
      if (((char)local_34 != '\0') && (lVar11 != 0)) {
        local_34 = (uint)CONCAT71((int7)((uint64_t)uVar6 >> 8),1);
        FUN_00d50b20();
        uVar9 = 1;
      }
      goto LAB_019a2f55;
    }
    if (((char)uVar9 != '\0') && (lVar11 != 0)) {
      local_34 = (uint)CONCAT71((int7)((uint64_t)uVar6 >> 8),1);
      FUN_00d50b20();
    }
LAB_019a2ee9:
    local_58 = '\0';
    cVar13 = '\x01';
  }
  if ((local_160 != '\0') && (local_168 != 0)) {
    FUN_00d50b20();
  }
  local_a0 = 0;
  (**(code **)(*plVar1 + 0x10))();
  FUN_00d50b00();
  local_a0 = '\x01';
  local_158 = 0;
  local_150 = '\0';
  local_140 = '\0';
  local_148 = lVar2;
  local_a8 = plVar1;
  FUN_00cbad30(&local_148,&local_158,0xa0);
  if ((local_140 != '\0') && (local_148 != 0)) {
    FUN_00d50b20();
  }
  if ((local_150 != '\0') && (local_158 != 0)) {
    FUN_00d50b20();
  }
  if ((local_a0 != '\0') && (local_a8 != (int64_t *)0x0)) {
    (**(code **)(*local_a8 + 0x10))();
    FUN_00d50b20();
  }
  if ((cVar13 != '\0') && (lVar2 != 0)) {
    FUN_00d50b20();
  }
LAB_019a305d:
  if ((bVar15) && (local_68 != 0)) {
    FUN_00d50b20();
  }
  return;
}

