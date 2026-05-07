// Function: FUN_007549f0
// Address: 007549f0
// Size: 3610 bytes
// Class: MUAudioIOSlot
// String references:
//   "MUAudioIOSlot"

void FUN_007549f0(void* param_1)

{
  bool bVar1;
  int64_t *plVar2;
  char cVar3;
  int iVar4;
  void *pvVar5;
  int64_t *plVar6;
  int64_t *this_ptr;
  uint32_t uVar7;
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
  int64_t local_138;
  char local_130;
  int64_t local_128;
  char local_120;
  int64_t local_118;
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
  int64_t *local_98;
  char local_90;
  int64_t *local_88;
  char local_80;
  int64_t *local_78;
  char local_70;
  int64_t *local_68;
  char local_60;
  int64_t *local_58;
  char local_50;
  int64_t *local_48;
  char local_40;
  int64_t *local_38;
  char local_30;
  
  (**(code **)(*this_ptr + 0x498))();
  plVar2 = local_38;
  if ((((local_30 == '\0') && (local_38 != (int64_t *)0x0)) && (FUN_00d50b00(), local_30 != '\0'))
     && (local_38 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00757c60();
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012caf10();
  local_48 = local_38;
  local_40 = 0;
  if (local_30 == '\0') {
    if (local_38 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_30 = '\0';
  }
  local_40 = '\x01';
  FUN_001060d0();
  if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_1d0 != '\0') && (local_1d8 != 0)) {
    FUN_00d50b20();
  }
  FUN_01f27fe0();
  cVar3 = (**(code **)(*local_38 + 0x450))();
  if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar3 != '\0') {
    if (g_0280ced8 == (int64_t *)0x0) {
      FUN_000e3450();
      uVar7 = FUN_00e86210();
      local_1c8 = g_027295e0;
      if (g_027295e0 != 0) {
        uVar7 = FUN_00d50b00();
      }
      local_1c0 = '\x01';
      FUN_00c841b0(uVar7,&local_1c8);
      plVar6 = g_0280ced8;
      if (g_0280ced8 != local_38) {
        if (local_30 == '\0') {
          if (local_38 == (int64_t *)0x0) {
            plVar6 = (int64_t *)0x0;
          }
          else {
            FUN_00d50b00();
            plVar6 = local_38;
          }
        }
        else {
          local_30 = '\0';
          plVar6 = local_38;
        }
        bVar1 = g_0280ced8 != (int64_t *)0x0;
        g_0280ced8 = plVar6;
        if (bVar1) {
          FUN_00d50b20();
          plVar6 = local_38;
        }
      }
      if ((plVar6 != (int64_t *)0x0) && (g_0280cee0 == '\0')) {
        g_0280cee0 = '\x01';
        FUN_00e8cb90();
        plVar6 = local_38;
      }
      if ((local_30 != '\0') && (plVar6 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_1c0 != '\0') && (local_1c8 != 0)) {
        FUN_00d50b20();
      }
    }
    if (g_0280cee8 == (int64_t *)0x0) {
      FUN_000823a0();
      uVar7 = FUN_00e86210();
      local_1b8 = g_02705ef8;
      if (g_02705ef8 != 0) {
        uVar7 = FUN_00d50b00();
      }
      local_1b0 = '\x01';
      FUN_00c841b0(uVar7,&local_1b8);
      plVar6 = g_0280cee8;
      if (g_0280cee8 != local_38) {
        if (local_30 == '\0') {
          if (local_38 == (int64_t *)0x0) {
            plVar6 = (int64_t *)0x0;
          }
          else {
            FUN_00d50b00();
            plVar6 = local_38;
          }
        }
        else {
          local_30 = '\0';
          plVar6 = local_38;
        }
        bVar1 = g_0280cee8 != (int64_t *)0x0;
        g_0280cee8 = plVar6;
        if (bVar1) {
          FUN_00d50b20();
          plVar6 = local_38;
        }
      }
      if ((plVar6 != (int64_t *)0x0) && (g_0280cef0 == '\0')) {
        g_0280cef0 = '\x01';
        FUN_00e8cb90();
        plVar6 = local_38;
      }
      if ((local_30 != '\0') && (plVar6 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_1b0 != '\0') && (local_1b8 != 0)) {
        FUN_00d50b20();
      }
    }
    if (g_0280cef8 == (int64_t *)0x0) {
      FUN_000823a0();
      uVar7 = FUN_00e86210();
      local_1a8 = g_027295f0;
      if (g_027295f0 != 0) {
        uVar7 = FUN_00d50b00();
      }
      local_1a0 = '\x01';
      FUN_00c841b0(uVar7,&local_1a8);
      plVar6 = g_0280cef8;
      if (g_0280cef8 != local_38) {
        if (local_30 == '\0') {
          if (local_38 == (int64_t *)0x0) {
            plVar6 = (int64_t *)0x0;
          }
          else {
            FUN_00d50b00();
            plVar6 = local_38;
          }
        }
        else {
          local_30 = '\0';
          plVar6 = local_38;
        }
        bVar1 = g_0280cef8 != (int64_t *)0x0;
        g_0280cef8 = plVar6;
        if (bVar1) {
          FUN_00d50b20();
          plVar6 = local_38;
        }
      }
      if ((plVar6 != (int64_t *)0x0) && (g_0280cf00 == '\0')) {
        g_0280cf00 = '\x01';
        FUN_00e8cb90();
        plVar6 = local_38;
      }
      if ((local_30 != '\0') && (plVar6 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_1a0 != '\0') && (local_1a8 != 0)) {
        FUN_00d50b20();
      }
    }
    if (g_0280cf08 == (int64_t *)0x0) {
      FUN_0079c160();
      uVar7 = FUN_00e86210();
      local_198 = g_027295f8;
      if (g_027295f8 != 0) {
        uVar7 = FUN_00d50b00();
      }
      local_190 = '\x01';
      FUN_00c841b0(uVar7,&local_198);
      plVar6 = g_0280cf08;
      if (g_0280cf08 != local_38) {
        if (local_30 == '\0') {
          if (local_38 == (int64_t *)0x0) {
            plVar6 = (int64_t *)0x0;
          }
          else {
            FUN_00d50b00();
            plVar6 = local_38;
          }
        }
        else {
          local_30 = '\0';
          plVar6 = local_38;
        }
        bVar1 = g_0280cf08 != (int64_t *)0x0;
        g_0280cf08 = plVar6;
        if (bVar1) {
          FUN_00d50b20();
          plVar6 = local_38;
        }
      }
      if ((plVar6 != (int64_t *)0x0) && (g_0280cf10 == '\0')) {
        g_0280cf10 = '\x01';
        FUN_00e8cb90();
        plVar6 = local_38;
      }
      if ((local_30 != '\0') && (plVar6 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_190 != '\0') && (local_198 != 0)) {
        FUN_00d50b20();
      }
    }
    if (g_0280cf18 == (int64_t *)0x0) {
      if ((g_0272a530 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
        g_026dee28 = FUN_000e3190();
        g_026dee10 = "MUAudioIOSlot";
        g_026dee18 = 0x48;
        g_026dee20 = FUN_000e2f60;
        g_026dee30 = 0;
        ram_00000000026dee38 = 0;
        g_026dee40 = 0;
        ram_00000000026dee48 = 0;
        g_026dee50 = 0;
        ram_00000000026dee58 = 0;
        g_026dee60 = 0;
        ram_00000000026dee68 = 0;
        g_026dee70 = 0;
        ram_00000000026dee78 = 0;
        g_026dee80 = 0;
        ram_00000000026dee88 = 0;
        g_026dee90 = 0;
        ram_00000000026dee98 = 0;
        g_026deea0 = 0;
        ram_00000000026deea8 = 0;
        g_026deeb0 = 0;
        ram_00000000026deeb8 = 0;
        g_026deec0 = 0;
        ram_00000000026deec8 = 0;
        g_026deed0 = 0;
        ___cxa_guard_release();
      }
      uVar7 = FUN_00e86210();
      local_188 = g_02729600;
      if (g_02729600 != 0) {
        uVar7 = FUN_00d50b00();
      }
      local_180 = '\x01';
      FUN_00c841b0(uVar7,&local_188);
      plVar6 = g_0280cf18;
      if (g_0280cf18 != local_38) {
        if (local_30 == '\0') {
          if (local_38 == (int64_t *)0x0) {
            plVar6 = (int64_t *)0x0;
          }
          else {
            FUN_00d50b00();
            plVar6 = local_38;
          }
        }
        else {
          local_30 = '\0';
          plVar6 = local_38;
        }
        bVar1 = g_0280cf18 != (int64_t *)0x0;
        g_0280cf18 = plVar6;
        if (bVar1) {
          FUN_00d50b20();
          plVar6 = local_38;
        }
      }
      if ((plVar6 != (int64_t *)0x0) && (g_0280cf20 == '\0')) {
        g_0280cf20 = '\x01';
        FUN_00e8cb90();
        plVar6 = local_38;
      }
      if ((local_30 != '\0') && (plVar6 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_180 != '\0') && (local_188 != 0)) {
        FUN_00d50b20();
      }
    }
    plVar6 = this_ptr + 9;
    local_100 = 0;
    (**(code **)(this_ptr[9] + 0x10))();
    FUN_00d50b00();
    local_f8 = g_0280ced8;
    local_100 = '\x01';
    local_178 = 0;
    local_170 = '\0';
    local_f0 = 0;
    local_108 = plVar6;
    if (g_0280ced8 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    local_f0 = '\x01';
    FUN_00cbad30(&local_f8,&local_178,0x88);
    if ((local_f0 != '\0') && (local_f8 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_170 != '\0') && (local_178 != 0)) {
      FUN_00d50b20();
    }
    if ((local_100 != '\0') && (local_108 != (int64_t *)0x0)) {
      (**(code **)(*local_108 + 0x10))();
      FUN_00d50b20();
    }
    local_e0 = 0;
    (**(code **)(*plVar6 + 0x10))();
    FUN_00d50b00();
    local_d8 = g_0280cee8;
    local_e0 = '\x01';
    local_168 = 0;
    local_160 = '\0';
    local_d0 = 0;
    local_e8 = plVar6;
    if (g_0280cee8 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    local_d0 = '\x01';
    FUN_00cbad30(&local_d8,&local_168,0x88);
    if ((local_d0 != '\0') && (local_d8 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_160 != '\0') && (local_168 != 0)) {
      FUN_00d50b20();
    }
    if ((local_e0 != '\0') && (local_e8 != (int64_t *)0x0)) {
      (**(code **)(*local_e8 + 0x10))();
      FUN_00d50b20();
    }
    local_c0 = 0;
    (**(code **)(*plVar6 + 0x10))();
    FUN_00d50b00();
    local_b8 = g_0280cef8;
    local_c0 = '\x01';
    local_158 = 0;
    local_150 = '\0';
    local_b0 = 0;
    local_c8 = plVar6;
    if (g_0280cef8 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    local_b0 = '\x01';
    FUN_00cbad30(&local_b8,&local_158,0x88);
    if ((local_b0 != '\0') && (local_b8 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_150 != '\0') && (local_158 != 0)) {
      FUN_00d50b20();
    }
    if ((local_c0 != '\0') && (local_c8 != (int64_t *)0x0)) {
      (**(code **)(*local_c8 + 0x10))();
      FUN_00d50b20();
    }
    local_a0 = 0;
    (**(code **)(*plVar6 + 0x10))();
    FUN_00d50b00();
    local_98 = g_0280cf08;
    local_a0 = '\x01';
    local_148 = 0;
    local_140 = '\0';
    local_90 = 0;
    local_a8 = plVar6;
    if (g_0280cf08 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    local_90 = '\x01';
    FUN_00cbad30(&local_98,&local_148,0x88);
    if ((local_90 != '\0') && (local_98 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_140 != '\0') && (local_148 != 0)) {
      FUN_00d50b20();
    }
    if ((local_a0 != '\0') && (local_a8 != (int64_t *)0x0)) {
      (**(code **)(*local_a8 + 0x10))();
      FUN_00d50b20();
    }
    local_80 = 0;
    (**(code **)(*plVar6 + 0x10))();
    FUN_00d50b00();
    local_78 = g_0280cf18;
    local_80 = '\x01';
    local_138 = 0;
    local_130 = '\0';
    local_70 = 0;
    local_88 = plVar6;
    if (g_0280cf18 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    local_70 = '\x01';
    FUN_00cbad30(&local_78,&local_138,0x88);
    if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_130 != '\0') && (local_138 != 0)) {
      FUN_00d50b20();
    }
    if ((local_80 != '\0') && (local_88 != (int64_t *)0x0)) {
      (**(code **)(*local_88 + 0x10))();
      FUN_00d50b20();
    }
  }
  if (g_0280cf28 == (int64_t *)0x0) {
    FUN_000be210();
    uVar7 = FUN_00e86210();
    local_128 = g_026dc288;
    if (g_026dc288 != 0) {
      uVar7 = FUN_00d50b00();
    }
    local_120 = '\x01';
    FUN_00c841b0(uVar7,&local_128);
    plVar6 = g_0280cf28;
    if (g_0280cf28 != local_38) {
      if (local_30 == '\0') {
        if (local_38 == (int64_t *)0x0) {
          plVar6 = (int64_t *)0x0;
        }
        else {
          FUN_00d50b00();
          plVar6 = local_38;
        }
      }
      else {
        local_30 = '\0';
        plVar6 = local_38;
      }
      bVar1 = g_0280cf28 != (int64_t *)0x0;
      g_0280cf28 = plVar6;
      if (bVar1) {
        FUN_00d50b20();
        plVar6 = local_38;
      }
    }
    if ((plVar6 != (int64_t *)0x0) && (g_0280cf30 == '\0')) {
      g_0280cf30 = '\x01';
      FUN_00e8cb90();
      plVar6 = local_38;
    }
    if ((local_30 != '\0') && (plVar6 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_120 != '\0') && (local_128 != 0)) {
      FUN_00d50b20();
    }
  }
  local_60 = 0;
  (**(code **)(this_ptr[9] + 0x10))();
  FUN_00d50b00();
  local_58 = g_0280cf28;
  local_60 = '\x01';
  local_118 = 0;
  local_110 = '\0';
  local_50 = 0;
  local_68 = this_ptr + 9;
  if (g_0280cf28 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  local_50 = '\x01';
  FUN_00cbad30(&local_58,&local_118,4);
  if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_110 != '\0') && (local_118 != 0)) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
    (**(code **)(*local_68 + 0x10))();
    FUN_00d50b20();
  }
  if (plVar2 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}

