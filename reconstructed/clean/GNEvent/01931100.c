// Function: FUN_01931100
// Address: 01931100
// Size: 6302 bytes
// Class: GNEvent
// String references:
//   "GNEvent"
// === GNEvent properties ===
//   GNEventType     _type
//   GNMouseWheelAxis _mouseWheelAxis
//   GNMouseButton   _mouseButton


void FUN_01931100(void* param_1)

{
  int64_t lVar1;
  bool bVar2;
  int64_t *plVar3;
  char cVar4;
  byte bVar5;
  int iVar6;
  void *pvVar7;
  uint64_t uVar8;
  int64_t **pplVar9;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t *plVar10;
  uint32_t uVar11;
  uint32_t extraout_XMM0_Da;
  uint32_t extraout_XMM0_Da_00;
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
  int64_t *local_178;
  char local_170;
  int64_t *local_168;
  char local_160;
  int64_t local_158;
  char local_150;
  int64_t *local_148;
  char local_140;
  int64_t local_138;
  char local_130;
  int64_t local_128;
  char local_120;
  int64_t local_108;
  char local_100;
  int64_t local_e8;
  char local_e0;
  int64_t *local_d8;
  char local_d0;
  int64_t *local_c8;
  char local_c0;
  int64_t local_b8;
  char local_b0;
  int64_t *local_a8;
  char local_a0;
  int64_t local_98;
  char local_90;
  int64_t local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  int64_t *local_68;
  int64_t *local_60;
  char local_58;
  int64_t *local_50;
  char local_48;
  int64_t *local_40;
  char local_38;
  
  FUN_00d3ecc0();
  plVar10 = local_40;
  lVar1 = g_027e1fc8;
  if (g_027e1fc8 != 0) {
    FUN_00d50b00();
  }
  cVar4 = (**(code **)(*plVar10 + 0x50))();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar4 == '\0') {
    FUN_00d3ecc0();
    plVar10 = local_40;
    local_278 = g_02729590;
    if (g_02729590 != 0) {
      FUN_00d50b00();
    }
    local_270 = '\x01';
    cVar4 = (**(code **)(*plVar10 + 0x50))();
    if ((local_270 != '\0') && (local_278 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (cVar4 != '\0') {
      uVar11 = FUN_00d3ed20();
      local_268 = g_027295d8;
      if (g_027295d8 != 0) {
        uVar11 = FUN_00d50b00();
      }
      local_260 = '\x01';
      FUN_000175c0(uVar11,&local_268);
      uVar11 = FUN_00d459e0();
      local_68 = (int64_t *)CONCAT44(local_68._4_4_,uVar11);
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_260 != '\0') && (local_268 != 0)) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_68._0_4_ != 0.0) || (NAN(local_68._0_4_))) {
        (**(code **)(*this_ptr + 0x970))();
        FUN_0197ca10(local_68._0_4_);
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        FUN_01e42030();
        (**(code **)(*local_40 + 0x778))();
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      goto LAB_019320a8;
    }
    FUN_00d3ecc0();
    plVar10 = local_40;
    local_258 = g_027bf410;
    if (g_027bf410 != 0) {
      FUN_00d50b00();
    }
    local_250 = '\x01';
    cVar4 = (**(code **)(*plVar10 + 0x50))();
    if ((local_250 != '\0') && (local_258 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (cVar4 != '\0') {
      FUN_00d403d0();
      if (this_ptr != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      lVar1 = g_02729590;
      if (g_02729590 != 0) {
        FUN_00d50b00();
      }
      local_248 = lVar1;
      local_240 = '\x01';
      local_100 = 0;
      lVar1 = this_ptr[0xa7];
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      local_100 = '\x01';
      local_108 = lVar1;
      FUN_00d41430(&local_108,&local_248);
      if ((local_100 != '\0') && (local_108 != 0)) {
        FUN_00d50b20();
      }
      if ((local_240 != '\0') && (local_248 != 0)) {
        FUN_00d50b20();
      }
      if (this_ptr != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      (**(code **)(*this_ptr + 0x970))();
      local_238 = g_026f6f70;
      if (g_026f6f70 != 0) {
        FUN_00d50b00();
      }
      lVar1 = g_02729588;
      local_230 = '\x01';
      if (g_02729588 != 0) {
        FUN_00d50b00();
      }
      local_228 = lVar1;
      local_220 = '\x01';
      local_218 = 0;
      local_210 = '\0';
      FUN_00d31230(&local_218,&local_228);
      local_d8 = local_50;
      local_d0 = 0;
      if (local_48 == '\0') {
        if (local_50 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_48 = '\0';
      }
      local_d0 = '\x01';
      FUN_0197ce50();
      if ((local_d0 != '\0') && (local_d8 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_210 != '\0') && (local_218 != 0)) {
        FUN_00d50b20();
      }
      if ((local_220 != '\0') && (local_228 != 0)) {
        FUN_00d50b20();
      }
      if ((local_230 != '\0') && (local_238 != 0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_019320a8;
    }
    FUN_00d3ecc0();
    plVar10 = local_40;
    local_208 = g_027e0908;
    if (g_027e0908 != 0) {
      FUN_00d50b00();
    }
    local_200 = '\x01';
    cVar4 = (**(code **)(*plVar10 + 0x50))();
    if ((local_200 != '\0') && (local_208 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (cVar4 != '\0') {
      FUN_00d403d0();
      if (this_ptr != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      lVar1 = g_02729590;
      if (g_02729590 != 0) {
        FUN_00d50b00();
      }
      local_1f8 = lVar1;
      local_1f0 = '\x01';
      local_e0 = 0;
      lVar1 = this_ptr[0xa7];
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      local_e0 = '\x01';
      local_e8 = lVar1;
      FUN_00d41040(&local_e8,&local_1f8);
      if ((local_e0 != '\0') && (local_e8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_1f0 != '\0') && (local_1f8 != 0)) {
        FUN_00d50b20();
      }
      if (this_ptr != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      (**(code **)(*this_ptr + 0x970))();
      local_1e8 = 0;
      local_1e0 = '\0';
      FUN_0197ce50();
      if ((local_1e0 != '\0') && (local_1e8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_019320a8;
    }
    FUN_00d3ecc0();
    plVar10 = local_40;
    local_1d8 = g_027ebe30;
    if (g_027ebe30 != 0) {
      FUN_00d50b00();
    }
    local_1d0 = '\x01';
    cVar4 = (**(code **)(*plVar10 + 0x50))();
    if ((local_1d0 != '\0') && (local_1d8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (cVar4 != '\0') {
      (**(code **)(&UNK_00001668 + *this_ptr))();
      pvVar7 = _pthread_getspecific(param_1);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0132d610();
      FUN_00d3ecf0();
      plVar3 = local_40;
      plVar10 = local_60;
      if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar3 == plVar10) {
        (**(code **)(&UNK_000017e8 + *this_ptr))();
        pvVar7 = _pthread_getspecific(param_1);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        (**(code **)(&UNK_00001668 + *this_ptr))();
        pvVar7 = _pthread_getspecific(param_1);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0132d610();
        local_c8 = local_50;
        local_c0 = 0;
        if (local_48 == '\0') {
          if (local_50 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_48 = '\0';
        }
        local_c0 = '\x01';
        FUN_012caf90();
        if ((local_c0 != '\0') && (local_c8 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      goto LAB_019320a8;
    }
    FUN_00d3ecc0();
    plVar10 = local_40;
    local_1c8 = g_027c8278;
    if (g_027c8278 != 0) {
      FUN_00d50b00();
    }
    local_1c0 = '\x01';
    cVar4 = (**(code **)(*plVar10 + 0x50))();
    if ((local_1c0 != '\0') && (local_1c8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (cVar4 != '\0') {
      (**(code **)(&UNK_00001668 + *this_ptr))();
      pvVar7 = _pthread_getspecific(param_1);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0132d900();
      FUN_00d3ecf0();
      plVar3 = local_40;
      plVar10 = local_60;
      if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar3 == plVar10) {
        (**(code **)(&UNK_000017e8 + *this_ptr))();
        pvVar7 = _pthread_getspecific(param_1);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012cade0();
        pvVar7 = _pthread_getspecific(param_1);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_015058d0();
        pvVar7 = _pthread_getspecific(param_1);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        (**(code **)(&UNK_00001668 + *this_ptr))();
        pvVar7 = _pthread_getspecific(param_1);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0132d900();
        local_b8 = local_78;
        local_b0 = 0;
        if (local_70 == '\0') {
          if (local_78 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_70 = '\0';
        }
        local_b0 = '\x01';
        cVar4 = FUN_01512830();
        if ((local_b0 != '\0') && (local_b8 != 0)) {
          FUN_00d50b20();
        }
        if ((local_70 != '\0') && (local_78 != 0)) {
          FUN_00d50b20();
        }
        if ((local_80 != '\0') && (local_88 != 0)) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (cVar4 != '\0') {
          (**(code **)(&UNK_000017e8 + *this_ptr))();
          pvVar7 = _pthread_getspecific(param_1);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012cb110();
          pvVar7 = _pthread_getspecific(param_1);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012e7210();
          local_a8 = local_40;
          local_a0 = 0;
          if (local_38 == '\0') {
            if (local_40 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_38 = '\0';
          }
          local_a0 = '\x01';
          FUN_012879b0();
          if ((local_a0 != '\0') && (local_a8 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
      }
      goto LAB_019320a8;
    }
    FUN_00d3ecc0();
    plVar10 = local_40;
    local_1b8 = g_027c8280;
    if (g_027c8280 != 0) {
      FUN_00d50b00();
    }
    local_1b0 = '\x01';
    cVar4 = (**(code **)(*plVar10 + 0x50))();
    if ((local_1b0 != '\0') && (local_1b8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (cVar4 != '\0') {
      (**(code **)(&UNK_00001668 + *this_ptr))();
      pvVar7 = _pthread_getspecific(param_1);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0132d900();
      FUN_00d3ecf0();
      plVar3 = local_40;
      plVar10 = local_60;
      if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar3 == plVar10) {
        (**(code **)(&UNK_000017e8 + *this_ptr))();
        pvVar7 = _pthread_getspecific(param_1);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012cade0();
        pvVar7 = _pthread_getspecific(param_1);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_015058d0();
        pvVar7 = _pthread_getspecific(param_1);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        (**(code **)(&UNK_00001668 + *this_ptr))();
        pvVar7 = _pthread_getspecific(param_1);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0132d900();
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
        FUN_01512890();
        if ((local_90 != '\0') && (local_98 != 0)) {
          FUN_00d50b20();
        }
        if ((local_70 != '\0') && (local_78 != 0)) {
          FUN_00d50b20();
        }
        if ((local_80 != '\0') && (local_88 != 0)) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      goto LAB_019320a8;
    }
    FUN_00d3ecc0();
    plVar10 = local_40;
    local_1a8 = g_027086a8;
    if (g_027086a8 != 0) {
      FUN_00d50b00();
    }
    local_1a0 = '\x01';
    cVar4 = (**(code **)(*plVar10 + 0x50))();
    if ((local_1a0 != '\0') && (local_1a8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (cVar4 == '\0') {
      FUN_00d3ecc0();
      plVar10 = local_40;
      local_158 = g_027e3b30;
      if (g_027e3b30 != 0) {
        FUN_00d50b00();
      }
      local_150 = '\x01';
      cVar4 = (**(code **)(*plVar10 + 0x50))();
      uVar11 = extraout_XMM0_Da;
      if ((local_150 != '\0') && (local_158 != 0)) {
        uVar11 = FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        uVar11 = FUN_00d50b20();
      }
      if (cVar4 == '\0') goto LAB_019320a8;
      (**(code **)(*this_ptr + 0x9a8))(uVar11,0);
      if (local_38 == '\0') {
        if (local_40 == (int64_t *)0x0) goto LAB_019320a8;
        FUN_00d50b00();
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      else if (local_40 == (int64_t *)0x0) goto LAB_019320a8;
      pvVar7 = _pthread_getspecific(param_1);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01264240();
      plVar10 = local_40;
      if (local_40 == (int64_t *)0x0) {
        bVar2 = true;
        plVar10 = (int64_t *)0x0;
      }
      else {
        if (local_38 == '\0') {
          FUN_00d50b00();
          bVar2 = false;
          if ((local_38 == '\0') || (bVar2 = false, local_40 == (int64_t *)0x0)) goto LAB_01932848;
          FUN_00d50b20();
        }
        bVar2 = false;
      }
LAB_01932848:
      uVar11 = FUN_00d50b20();
      if (plVar10 != (int64_t *)0x0) {
        local_120 = 0;
        lVar1 = this_ptr[0xa7];
        if (lVar1 != 0) {
          uVar11 = FUN_00d50b00();
        }
        local_120 = '\x01';
        local_140 = '\0';
        local_148 = plVar10;
        local_128 = lVar1;
        (**(code **)(&g_00001830 + *this_ptr))(uVar11,&local_148);
        if ((local_140 != '\0') && (local_148 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_120 != '\0') && (local_128 != 0)) {
          FUN_00d50b20();
        }
        if (!bVar2) {
          FUN_00d50b20();
        }
      }
      goto LAB_019320a8;
    }
    uVar11 = FUN_00d3ed20();
    local_198 = g_027c8288;
    if (g_027c8288 != 0) {
      uVar11 = FUN_00d50b00();
    }
    local_190 = '\x01';
    pplVar9 = &local_40;
    FUN_000175c0(uVar11,&local_198);
    plVar10 = local_40;
    FUN_002771e0();
    if (plVar10 == (int64_t *)0x0) {
LAB_019321e5:
      pplVar9 = (int64_t **)&g_02802688;
    }
    else {
      (**(code **)(*plVar10 + 0x360))();
      cVar4 = FUN_00e85ea0();
      if (cVar4 == '\0') goto LAB_019321e5;
    }
    plVar10 = *pplVar9;
    if (*(char *)(pplVar9 + 1) == '\0') {
      if (plVar10 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      *(void*)(pplVar9 + 1) = 0;
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_190 != '\0') && (local_198 != 0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    local_68 = plVar10;
    uVar11 = FUN_00d3ed20();
    local_188 = g_027087c0;
    if (g_027087c0 != 0) {
      uVar11 = FUN_00d50b00();
    }
    local_180 = '\x01';
    pplVar9 = &local_40;
    FUN_000175c0(uVar11,&local_188);
    plVar10 = local_40;
    uVar11 = FUN_002771e0();
    if (plVar10 == (int64_t *)0x0) {
      pplVar9 = (int64_t **)&g_02802688;
    }
    else {
      (**(code **)(*plVar10 + 0x360))();
      cVar4 = FUN_00e85ea0();
      uVar11 = extraout_XMM0_Da_00;
      if (cVar4 == '\0') {
        pplVar9 = (int64_t **)&g_02802688;
      }
    }
    plVar3 = local_68;
    plVar10 = *pplVar9;
    if (*(char *)(pplVar9 + 1) == '\0') {
      if (plVar10 != (int64_t *)0x0) {
        uVar11 = FUN_00d50b00();
      }
    }
    else {
      *(void*)(pplVar9 + 1) = 0;
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      uVar11 = FUN_00d50b20();
    }
    if ((local_180 != '\0') && (local_188 != 0)) {
      uVar11 = FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
      uVar11 = FUN_00d50b20();
    }
    local_170 = '\0';
    local_160 = '\0';
    local_178 = plVar3;
    local_168 = plVar10;
    (**(code **)(&UNK_000016a0 + *this_ptr))(uVar11,&local_168);
    if ((local_160 != '\0') && (local_168 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_170 != '\0') && (local_178 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar10 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if (plVar3 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    goto LAB_019320a8;
  }
  FUN_00d3ecf0();
  (**(code **)(*this_ptr + 0x978))();
  plVar3 = local_40;
  plVar10 = local_50;
  if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar3 != plVar10) goto LAB_019320a8;
  uVar11 = FUN_00d3ed20();
  if (local_38 == '\0') {
    if (local_40 == (int64_t *)0x0) goto LAB_019320a8;
    uVar11 = FUN_00d50b00();
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      uVar11 = FUN_00d50b20();
    }
  }
  else if (local_40 == (int64_t *)0x0) goto LAB_019320a8;
  lVar1 = g_027e1fc0;
  if (g_027e1fc0 != 0) {
    uVar11 = FUN_00d50b00();
  }
  local_288 = lVar1;
  local_280 = '\x01';
  pplVar9 = &local_40;
  FUN_000175c0(uVar11,&local_288);
  plVar10 = local_40;
  if ((g_026ec420 == '\0') && (iVar6 = ___cxa_guard_acquire(), iVar6 != 0)) {
    g_027e3fc8 = FUN_00d4fe50();
    g_027e3fb0 = "GNEvent";
    g_027e3fb8 = 0x50;
    g_027e3fc0 = FUN_001c75c0;
    g_027e3fd0 = 0;
    ram_00000000027e3fd8 = 0;
    g_027e3fe0 = 0;
    ram_00000000027e3fe8 = 0;
    g_027e3ff0 = 0;
    ram_00000000027e3ff8 = 0;
    g_027e4000 = 0;
    ram_00000000027e4008 = 0;
    g_027e4010 = 0;
    ram_00000000027e4018 = 0;
    g_027e4020 = 0;
    ram_00000000027e4028 = 0;
    g_027e4030 = 0;
    ram_00000000027e4038 = 0;
    g_027e4040 = 0;
    ram_00000000027e4048 = 0;
    g_027e4050 = 0;
    ram_00000000027e4058 = 0;
    g_027e4060 = 0;
    ram_00000000027e4068 = 0;
    g_027e4070 = 0;
    ___cxa_guard_release();
  }
  if (plVar10 == (int64_t *)0x0) {
LAB_0193183b:
    pplVar9 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar10 + 0x360))();
    cVar4 = FUN_00e85ea0();
    if (cVar4 == '\0') goto LAB_0193183b;
  }
  plVar10 = *pplVar9;
  if (*(char *)(pplVar9 + 1) == '\0') {
    if (plVar10 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar9 + 1) = 0;
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_280 != '\0') && (local_288 != 0)) {
    FUN_00d50b20();
  }
  if (plVar10 != (int64_t *)0x0) {
    uVar8 = FUN_01d3b590();
    if ((uVar8 & 4) != 0) {
      (**(code **)("/System/Library/Frameworks/Foundation.framework/Versions/C/Foundation" +
                  *this_ptr + 0x20))();
      if (local_40 == (int64_t *)0x0) {
        bVar5 = 0;
      }
      else {
        (**(code **)("/System/Library/Frameworks/Foundation.framework/Versions/C/Foundation" +
                    *this_ptr + 0x20))();
        bVar5 = (**(code **)(*local_50 + 0x50))();
        if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
          (**(code **)(*local_50 + 0x10))();
          FUN_00d50b20();
        }
        bVar5 = bVar5 ^ 1;
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        (**(code **)(*local_40 + 0x10))();
        FUN_00d50b20();
      }
      if (bVar5 != 0) {
        (**(code **)(&UNK_000017c0 + *this_ptr))();
      }
    }
    FUN_00d50b20();
  }
  FUN_00d50b20();
LAB_019320a8:
  local_138 = *arg1;
  local_130 = '\0';
  FUN_019d6f50();
  if ((local_130 != '\0') && (local_138 != 0)) {
    FUN_00d50b20();
  }
  return;
}

