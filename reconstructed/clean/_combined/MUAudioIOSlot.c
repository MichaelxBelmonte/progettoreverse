// ===================================================================
// MUAudioIOSlot — Complete reconstructed pseudocode
// 11 functions
// ===================================================================


// ============================================================
// 007549f0
// ============================================================
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



// ============================================================
// 007586e0
// ============================================================
// Function: FUN_007586e0
// Address: 007586e0
// Size: 3572 bytes
// Class: MUAudioIOSlot

void FUN_007586e0(void* param_1)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  char cVar4;
  void *pvVar5;
  int64_t lVar6;
  void* pVar7;
  int iVar8;
  int64_t *this_ptr;
  bool bVar9;
  int64_t local_b8;
  char local_b0;
  int64_t local_a8;
  char local_a0;
  int local_90;
  int64_t local_80;
  char local_78;
  int64_t local_70;
  int64_t local_58;
  char local_50;
  int local_40;
  uint uStack_3c;
  
  lVar2 = local_58;
  (**(code **)(*this_ptr + 0x628))();
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_004a11a0();
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01713a10();
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e6160();
  local_70 = local_58;
  if (local_50 == '\0') {
    if (local_58 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_50 = '\0';
  }
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  if ((local_b0 != '\0') && (local_b8 != 0)) {
    FUN_00d50b20();
  }
  cVar4 = FUN_016ae5f0();
  if ((cVar4 != '\0') && (cVar4 = FUN_00bd22a0(), cVar4 != '\0')) {
    FUN_003231a0();
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if (local_58 == 0) {
      local_70 = 0;
    }
    else {
      local_50 = '\0';
      local_58 = 0;
      local_40 = -1;
      uStack_3c = 0;
      while( true ) {
        lVar3 = local_a8;
        lVar6 = (int64_t)local_40;
        local_40 = local_40 + 1;
        if (*(int *)(lVar2 + 0xc) <= local_40) break;
        lVar1 = *(int64_t *)(lVar2 + 0x10);
        local_58 = *(int64_t *)(lVar1 + 8 + lVar6 * 8);
        pvVar5 = _pthread_getspecific((void*)lVar1);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012f4c40();
        if (local_a0 == '\0') {
          if (local_a8 != 0) {
            FUN_00d50b00();
            goto LAB_00758a50;
          }
LAB_00758970:
          bVar9 = -1 < (int)uStack_3c;
          uStack_3c = ~uStack_3c;
        }
        else {
          if (local_a8 == 0) goto LAB_00758970;
LAB_00758a50:
          local_a0 = '\0';
          local_a8 = 0;
          local_90 = -1;
          do {
            lVar6 = (int64_t)local_90;
            local_90 = local_90 + 1;
            iVar8 = *(int *)(lVar3 + 0xc);
            if (iVar8 <= local_90) break;
            lVar1 = *(int64_t *)(lVar3 + 0x10);
            local_a8 = *(int64_t *)(lVar1 + 8 + lVar6 * 8);
            pvVar5 = _pthread_getspecific((void*)lVar1);
            if (pvVar5 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_012eb770();
            if ((local_78 != '\0') && (local_80 != 0)) {
              FUN_00d50b20();
            }
          } while (local_80 == 0);
          FUN_000be170();
          FUN_00d50b20();
          if (iVar8 <= local_90) goto LAB_00758970;
          bVar9 = (int)uStack_3c < 0;
        }
        if (uStack_3c != 0) {
          if (uStack_3c == 0 || bVar9) {
            uStack_3c = -uStack_3c;
          }
          else {
            local_40 = local_40 - uStack_3c;
            FUN_00d23690();
            uStack_3c = 0;
          }
        }
      }
      FUN_000be170();
    }
  }
  FUN_006dbab0();
  if (local_50 == '\0') {
    if (local_58 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_50 = '\0';
  }
  lVar2 = this_ptr[0x23];
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  FUN_006dbab0();
  if ((local_50 == '\0') && (local_58 != 0)) {
    FUN_00d50b00();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if (local_58 != 0) {
    local_40 = -1;
    while (local_40 = local_40 + 1, local_40 < *(int *)(local_58 + 0xc)) {
      pVar7 = (void*)*(void*)(local_58 + 0x10);
      FUN_004fa310();
      if (local_a0 == '\0') {
        if (local_a8 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_a0 = '\0';
      }
      cVar4 = FUN_016ae5f0();
      if (cVar4 != '\0') {
        pvVar5 = _pthread_getspecific(pVar7);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012e6000();
        if ((local_a0 != '\0') && (local_a8 != 0)) {
          FUN_00d50b20();
        }
        if (local_a8 == 0) {
          pvVar5 = _pthread_getspecific(pVar7);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012f4c40();
        }
      }
      pvVar5 = _pthread_getspecific(pVar7);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_004fb230();
      if (local_a8 != 0) {
        FUN_00d50b20();
      }
    }
    FUN_000be170();
  }
  FUN_00d243f0();
  FUN_01f27fe0();
  FUN_00d50b00();
  FUN_000c4290();
  if (local_70 != 0) {
    FUN_00d50b00();
  }
  if (this_ptr != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    FUN_00d50b20();
  }
  if (local_70 != 0) {
    for (iVar8 = 0; iVar8 < *(int *)(local_70 + 0xc); iVar8 = iVar8 + 1) {
      FUN_00518a80();
    }
    FUN_0015ee90();
    FUN_00d50b20();
  }
  if (local_58 != 0) {
    FUN_00d50b20();
    FUN_00d50b20();
  }
  if (local_70 != 0) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 00753e50
// ============================================================
// Function: FUN_00753e50
// Address: 00753e50
// Size: 1363 bytes
// Class: MUAudioIOSlot

void FUN_00753e50(void)

{
  int64_t *plVar1;
  int64_t *plVar2;
  char cVar3;
  int64_t *this_ptr;
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
  int64_t local_108;
  char local_100;
  int64_t *local_f8;
  char local_f0;
  int64_t local_e8;
  char local_e0;
  int64_t *local_d8;
  char local_d0;
  int64_t local_c8;
  char local_c0;
  int64_t *local_b8;
  char local_b0;
  int64_t local_a8;
  char local_a0;
  int64_t *local_98;
  char local_90;
  int64_t local_88;
  char local_80;
  int64_t *local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  int64_t *local_58;
  char local_50;
  int64_t local_48;
  char local_40;
  int64_t *local_38;
  char local_30;
  
  (**(code **)(*this_ptr + 0x498))();
  plVar2 = local_38;
  if ((local_30 == '\0') && (local_38 != (int64_t *)0x0)) {
    FUN_00d50b00();
    if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  FUN_01f27fe0();
  cVar3 = (**(code **)(*local_38 + 0x450))();
  if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar3 != '\0') {
    plVar1 = this_ptr + 9;
    local_f0 = 0;
    (**(code **)(this_ptr[9] + 0x10))();
    FUN_00d50b00();
    local_e8 = g_0280ced8;
    local_f0 = '\x01';
    local_158 = 0;
    local_150 = '\0';
    local_e0 = 0;
    local_f8 = plVar1;
    if (g_0280ced8 != 0) {
      FUN_00d50b00();
    }
    local_e0 = '\x01';
    FUN_00cbadd0(&local_e8,&local_158);
    if ((local_e0 != '\0') && (local_e8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_150 != '\0') && (local_158 != 0)) {
      FUN_00d50b20();
    }
    if ((local_f0 != '\0') && (local_f8 != (int64_t *)0x0)) {
      (**(code **)(*local_f8 + 0x10))();
      FUN_00d50b20();
    }
    local_d0 = 0;
    (**(code **)(*plVar1 + 0x10))();
    FUN_00d50b00();
    local_c8 = g_0280cee8;
    local_d0 = '\x01';
    local_148 = 0;
    local_140 = '\0';
    local_c0 = 0;
    local_d8 = plVar1;
    if (g_0280cee8 != 0) {
      FUN_00d50b00();
    }
    local_c0 = '\x01';
    FUN_00cbadd0(&local_c8,&local_148);
    if ((local_c0 != '\0') && (local_c8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_140 != '\0') && (local_148 != 0)) {
      FUN_00d50b20();
    }
    if ((local_d0 != '\0') && (local_d8 != (int64_t *)0x0)) {
      (**(code **)(*local_d8 + 0x10))();
      FUN_00d50b20();
    }
    local_b0 = 0;
    (**(code **)(*plVar1 + 0x10))();
    FUN_00d50b00();
    local_a8 = g_0280cef8;
    local_b0 = '\x01';
    local_138 = 0;
    local_130 = '\0';
    local_a0 = 0;
    local_b8 = plVar1;
    if (g_0280cef8 != 0) {
      FUN_00d50b00();
    }
    local_a0 = '\x01';
    FUN_00cbadd0(&local_a8,&local_138);
    if ((local_a0 != '\0') && (local_a8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_130 != '\0') && (local_138 != 0)) {
      FUN_00d50b20();
    }
    if ((local_b0 != '\0') && (local_b8 != (int64_t *)0x0)) {
      (**(code **)(*local_b8 + 0x10))();
      FUN_00d50b20();
    }
    local_90 = 0;
    (**(code **)(*plVar1 + 0x10))();
    FUN_00d50b00();
    local_88 = g_0280cf08;
    local_90 = '\x01';
    local_128 = 0;
    local_120 = '\0';
    local_80 = 0;
    local_98 = plVar1;
    if (g_0280cf08 != 0) {
      FUN_00d50b00();
    }
    local_80 = '\x01';
    FUN_00cbadd0(&local_88,&local_128);
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    if ((local_120 != '\0') && (local_128 != 0)) {
      FUN_00d50b20();
    }
    if ((local_90 != '\0') && (local_98 != (int64_t *)0x0)) {
      (**(code **)(*local_98 + 0x10))();
      FUN_00d50b20();
    }
    local_70 = 0;
    (**(code **)(*plVar1 + 0x10))();
    FUN_00d50b00();
    local_68 = g_0280cf18;
    local_70 = '\x01';
    local_118 = 0;
    local_110 = '\0';
    local_60 = 0;
    local_78 = plVar1;
    if (g_0280cf18 != 0) {
      FUN_00d50b00();
    }
    local_60 = '\x01';
    FUN_00cbadd0(&local_68,&local_118);
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if ((local_110 != '\0') && (local_118 != 0)) {
      FUN_00d50b20();
    }
    if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
      (**(code **)(*local_78 + 0x10))();
      FUN_00d50b20();
    }
  }
  local_50 = 0;
  (**(code **)(this_ptr[9] + 0x10))();
  FUN_00d50b00();
  local_48 = g_0280cf28;
  local_50 = '\x01';
  local_108 = 0;
  local_100 = '\0';
  local_40 = 0;
  local_58 = this_ptr + 9;
  if (g_0280cf28 != 0) {
    FUN_00d50b00();
  }
  local_40 = '\x01';
  FUN_00cbadd0(&local_48,&local_108);
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if ((local_100 != '\0') && (local_108 != 0)) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
    (**(code **)(*local_58 + 0x10))();
    FUN_00d50b20();
  }
  if (plVar2 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 00752a00
// ============================================================
// Function: FUN_00752a00
// Address: 00752a00
// Size: 1853 bytes
// Class: MUAudioIOSlot

void*
FUN_00752a00(void* param_1,int64_t *param_2,int64_t *param_3,int64_t *param_4)

{
  int64_t lVar1;
  int64_t lVar2;
  void*puVar3;
  char cVar4;
  int64_t *plVar5;
  void *pvVar6;
  int64_t *plVar7;
  void*puVar8;
  void* pVar9;
  int64_t *arg1;
  void*this_ptr;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t *local_40;
  char local_38;
  
  plVar5 = (int64_t *)FUN_00e8fc40();
  FUN_000830c0();
  (**(code **)(*plVar5 + 0x18))();
  lVar1 = *arg1;
  lVar2 = plVar5[0xf];
  if (lVar2 != lVar1) {
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    plVar5[0xf] = lVar1;
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  if (*param_2 != 0) {
    FUN_01552cd0();
    (**(code **)(*(int64_t *)*param_2 + 0x370))();
    if (local_48 == '\0') {
      if (local_50 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_48 = '\0';
    }
    cVar4 = (**(code **)(*local_40 + 0x50))();
    if (local_50 != 0) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (cVar4 != '\0') {
      (**(code **)(*plVar5 + 0x470))();
      goto LAB_00752bc7;
    }
  }
  (**(code **)(*plVar5 + 0x470))();
LAB_00752bc7:
  lVar1 = *param_3;
  lVar2 = plVar5[0x18];
  if (lVar2 != lVar1) {
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    plVar5[0x18] = lVar1;
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  (**(code **)(*plVar5 + 0x628))();
  pvVar6 = _pthread_getspecific(param_1);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_004a1110();
  pvVar6 = _pthread_getspecific(param_1);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01313ad0();
  pvVar6 = _pthread_getspecific(param_1);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012cb450();
  if (local_38 == '\0') {
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  FUN_0044c720();
  if (local_40 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  FUN_00753620();
  *(void*)(plVar5 + 0x2d) = 0;
  plVar7 = (int64_t *)FUN_00e8fc40();
  FUN_00039550();
  (**(code **)(*plVar7 + 0x18))();
  if (*param_4 != 0) {
    FUN_00cafd20();
  }
  (**(code **)(*plVar5 + 0x490))();
  if (*param_4 != 0) {
    FUN_00cb1fa0();
    (**(code **)(*plVar7 + 0x3c8))();
  }
  puVar8 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  pVar9 = 0x25f7058;
  *puVar8 = &g_025f7058;
  (*g_025f7070)();
  puVar3 = (void*)plVar5[0x26];
  if (puVar3 == puVar8) {
    FUN_00d50b20();
  }
  else {
    plVar5[0x26] = (int64_t)puVar8;
    if (puVar3 != (void*)0x0) {
      FUN_00d50b20();
    }
  }
  (**(code **)(*plVar5 + 0x628))();
  pvVar6 = _pthread_getspecific(pVar9);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_004a1110();
  pvVar6 = _pthread_getspecific(pVar9);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01313b00();
  pvVar6 = _pthread_getspecific(pVar9);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01505900();
  if (local_38 == '\0') {
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  FUN_001060d0();
  if (local_40 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  pvVar6 = _pthread_getspecific(pVar9);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_004a4cb0();
  FUN_006e32b0();
  if (local_38 == '\0') {
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  FUN_00108e20();
  if (local_40 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  *this_ptr = plVar5;
  *(void*)(this_ptr + 1) = 1;
  FUN_00d50b20();
  return this_ptr;
}



// ============================================================
// 00756200
// ============================================================
// Function: FUN_00756200
// Address: 00756200
// Size: 1352 bytes
// Class: MUAudioIOSlot

void FUN_00756200(void* param_1)

{
  char cVar1;
  void *pvVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t *this_ptr;
  int64_t lVar5;
  bool bVar6;
  int64_t local_c0;
  char local_b8;
  int64_t local_b0;
  char local_a8;
  int64_t local_a0;
  char local_98;
  int64_t local_90;
  char local_88;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  if (this_ptr[0x21] != 0) {
    this_ptr[0x21] = 0;
    FUN_00d50b20();
  }
  (**(code **)(*this_ptr + 0x610))();
  if (*(int *)(local_40 + 0xc) == 0) {
    bVar6 = false;
  }
  else {
    (**(code **)(*this_ptr + 0x628))();
    bVar6 = local_50 != 0;
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (!bVar6) {
    return;
  }
  cVar1 = FUN_00751ba0();
  if (cVar1 == '\0') {
    FUN_00757c60();
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012cb110();
    lVar5 = local_40;
    if (local_40 == 0) {
      lVar5 = 0;
      bVar6 = false;
    }
    else if (local_38 == '\0') {
      FUN_00d50b00();
      bVar6 = true;
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
      bVar6 = true;
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    (**(code **)(*this_ptr + 0x628))();
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_004a11a0();
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01713a10();
    lVar5 = local_40;
    if (local_40 == 0) {
      lVar5 = 0;
      bVar6 = false;
    }
    else if (local_38 == '\0') {
      FUN_00d50b00();
      bVar6 = true;
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
      bVar6 = true;
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_b8 != '\0') && (local_c0 != 0)) {
      FUN_00d50b20();
    }
  }
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  lVar3 = FUN_00e8b990();
  if (lVar3 == 0) goto LAB_0075671d;
  (**(code **)(*this_ptr + 0x498))();
  lVar3 = local_40;
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (lVar3 == 0) goto LAB_0075671d;
  FUN_00d50b00();
  local_b0 = g_027296c0;
  if (g_027296c0 != 0) {
    FUN_00d50b00();
  }
  local_a8 = '\x01';
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_70 = FUN_00e8b990();
  local_68 = 0;
  if (local_70 != 0) {
    FUN_00d50b00();
  }
  local_68 = '\x01';
  FUN_000823a0();
  FUN_00e86210();
  local_a0 = g_026f6eb8;
  if (g_026f6eb8 != 0) {
    FUN_00d50b00();
  }
  local_98 = '\x01';
  FUN_00c841b0();
  local_60 = local_50;
  local_58 = 0;
  if (local_48 == '\0') {
    if (local_50 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_48 = '\0';
  }
  local_58 = '\x01';
  local_88 = '\0';
  local_90 = lVar5;
  FUN_000bfbc0(&local_70,&local_b0,0xa0,&local_60);
  lVar3 = this_ptr[0x21];
  lVar4 = lVar3;
  if (lVar3 != local_40) {
    if (local_38 == '\0') {
      if (local_40 == 0) {
        lVar4 = 0;
        goto LAB_00756627;
      }
      FUN_00d50b00();
      lVar3 = this_ptr[0x21];
      this_ptr[0x21] = local_40;
      lVar4 = local_40;
    }
    else {
      local_38 = '\0';
      lVar4 = local_40;
LAB_00756627:
      this_ptr[0x21] = lVar4;
    }
    if (lVar3 != 0) {
      FUN_00d50b20();
      lVar4 = local_40;
    }
  }
  if ((local_38 != '\0') && (lVar4 != 0)) {
    FUN_00d50b20();
  }
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if ((local_a8 != '\0') && (local_b0 != 0)) {
    FUN_00d50b20();
  }
  if (this_ptr != (int64_t *)0x0) {
    FUN_00d50b20();
  }
LAB_0075671d:
  if ((bVar6) && (lVar5 != 0)) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 00757320
// ============================================================
// Function: FUN_00757320
// Address: 00757320
// Size: 1249 bytes
// Class: MUAudioIOSlot

void FUN_00757320(void* param_1)

{
  int64_t *plVar1;
  int64_t lVar2;
  char cVar3;
  int64_t *plVar4;
  void *pvVar5;
  int64_t *this_ptr;
  int64_t *local_b0;
  char local_a8;
  int64_t *local_30;
  char local_28;
  
  plVar4 = (int64_t *)FUN_002dd0f0();
  (**(code **)(*plVar4 + 0x18))();
  plVar1 = (int64_t *)this_ptr[0x13];
  if (plVar1 == plVar4) {
    FUN_00d50b20();
  }
  else {
    this_ptr[0x13] = (int64_t)plVar4;
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_00aea5e0(0);
  FUN_01530a20();
  plVar4 = (int64_t *)FUN_00e8fc40();
  FUN_0038cc50();
  (**(code **)(*plVar4 + 0x18))();
  plVar1 = (int64_t *)this_ptr[0x12];
  if (plVar1 == plVar4) {
    FUN_00d50b20();
  }
  else {
    this_ptr[0x12] = (int64_t)plVar4;
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  FUN_00757c60();
  if (local_28 == '\0') {
    if (local_30 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_28 = '\0';
  }
  FUN_012d1940();
  if (local_30 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_28 != '\0') && (local_30 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00757de0();
  if ((local_28 == '\0') && (local_30 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  FUN_012d8bb0();
  if (local_30 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  lVar2 = this_ptr[0x13];
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  FUN_012dddb0();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  (**(code **)(*this_ptr + 0x498))();
  FUN_00cafd20();
  if ((local_28 != '\0') && (local_30 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(*this_ptr + 0x498))();
  lVar2 = this_ptr[0x13];
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  (**(code **)(*local_30 + 0x3a0))();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if ((local_28 != '\0') && (local_30 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(*this_ptr + 0x498))();
  (**(code **)(*local_30 + 0x3c8))();
  if ((local_28 != '\0') && (local_30 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01f27fe0();
  (**(code **)(*local_b0 + 0x7b0))();
  if (local_28 == '\0') {
    if (local_30 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_28 = '\0';
  }
  if ((local_a8 != '\0') && (local_b0 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  lVar2 = this_ptr[0x12];
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  FUN_01257c40();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  cVar3 = (**(code **)(*local_30 + 0x390))();
  if (cVar3 == '\0') {
    lVar2 = this_ptr[0x12];
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    FUN_01257980();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  else {
    (**(code **)(*(int64_t *)this_ptr[0x12] + 0x368))();
    lVar2 = this_ptr[0x12];
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    FUN_01257a80();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  if (this_ptr[0xe] != 0) {
    FUN_00d50b00();
    FUN_00d50b20();
    FUN_00b160d0();
    if (local_28 == '\0') {
      if (local_30 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_28 = '\0';
    }
    FUN_00757ea0();
    if (local_30 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((local_28 != '\0') && (local_30 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  FUN_00d50b20();
  return;
}



// ============================================================
// 00757ea0
// ============================================================
// Function: FUN_00757ea0
// Address: 00757ea0
// Size: 1102 bytes
// Class: MUAudioIOSlot

void FUN_00757ea0(void)

{
  int64_t *plVar1;
  bool bVar2;
  char cVar3;
  int64_t lVar4;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t *plVar5;
  int64_t local_78;
  char local_70;
  int64_t *local_58;
  char local_50;
  int local_40;
  
  if (*arg1 == 0) {
    FUN_00751820();
    return;
  }
  plVar1 = (int64_t *)this_ptr[0xe];
  if (plVar1 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  FUN_003235a0();
  plVar5 = g_02802688;
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x360))();
    cVar3 = FUN_00e85ea0();
    plVar5 = g_02802688;
    FUN_00d50b20();
    if (cVar3 != '\0') {
      plVar5 = plVar1;
    }
  }
  if (plVar5 != (int64_t *)0x0) {
    return;
  }
  (**(code **)(*this_ptr + 0x610))();
  if (local_50 == '\0') {
    if (plVar1 == (int64_t *)0x0) goto LAB_0075807c;
    FUN_00d50b00();
LAB_00757fa1:
    local_58 = (int64_t *)0x0;
    local_40 = -1;
    do {
      lVar4 = (int64_t)local_40;
      local_40 = local_40 + 1;
      if (*(int *)((int64_t)plVar1 + 0xc) <= local_40) goto LAB_00758099;
      plVar5 = *(int64_t **)(plVar1[2] + 8 + lVar4 * 8);
      FUN_006f47d0();
      lVar4 = this_ptr[0xe];
      if (lVar4 != 0) {
        FUN_00d50b00();
        FUN_00d50b20();
      }
      if ((local_70 != '\0') && (local_78 != 0)) {
        FUN_00d50b20();
      }
      local_58 = plVar5;
    } while (local_78 != lVar4);
    if (plVar5 == (int64_t *)0x0) {
LAB_00758099:
      bVar2 = false;
      plVar5 = (int64_t *)0x0;
    }
    else {
      FUN_00d50b00();
      bVar2 = true;
    }
    local_50 = '\0';
    FUN_000e3600();
    FUN_00d50b20();
  }
  else {
    if (plVar1 != (int64_t *)0x0) goto LAB_00757fa1;
LAB_0075807c:
    plVar5 = (int64_t *)0x0;
    bVar2 = false;
    local_58 = plVar1;
  }
  plVar1 = local_58;
  (**(code **)(*this_ptr + 0x610))();
  if (local_50 == '\0') {
    if (local_58 == (int64_t *)0x0) goto LAB_0075827b;
    FUN_00d50b00();
  }
  else if (local_58 == (int64_t *)0x0) goto LAB_0075827b;
  local_50 = '\0';
  local_58 = (int64_t *)0x0;
  local_40 = -1;
  while( true ) {
    lVar4 = (int64_t)local_40;
    local_40 = local_40 + 1;
    if (*(int *)((int64_t)plVar1 + 0xc) <= local_40) break;
    local_58 = *(int64_t **)(plVar1[2] + 8 + lVar4 * 8);
    FUN_00d50b00();
    FUN_003193e0();
    if (local_70 == '\0') {
      if (local_78 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_70 = '\0';
    }
    FUN_007105f0();
    if (local_78 != 0) {
      FUN_00d50b20();
    }
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    if (this_ptr != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  FUN_000e3600();
  FUN_00d50b20();
LAB_0075827b:
  if (plVar5 != (int64_t *)0x0) {
    FUN_006f47d0();
    if (local_50 == '\0') {
      if (local_58 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_50 = '\0';
    }
    FUN_00751820();
    if (local_58 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (bVar2) {
      FUN_00d50b20();
    }
  }
  return;
}



// ============================================================
// 007538d0
// ============================================================
// Function: FUN_007538d0
// Address: 007538d0
// Size: 839 bytes
// Class: MUAudioIOSlot

void FUN_007538d0(void* param_1)

{
  int64_t *plVar1;
  bool bVar2;
  char cVar3;
  void *pvVar4;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t *plVar5;
  int64_t local_58;
  char local_50;
  int64_t *local_40;
  char local_38;
  
  (**(code **)(*this_ptr + 0x498))();
  plVar5 = local_40;
  if (local_38 == '\0') {
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b00();
      goto LAB_00753905;
    }
    bVar2 = true;
    if (*arg1 == 0) goto LAB_00753bfb;
  }
  else {
LAB_00753905:
    if ((int64_t *)*arg1 == local_40) goto LAB_00753bfb;
    bVar2 = true;
    if (local_40 != (int64_t *)0x0) {
      FUN_00753e50();
      cVar3 = FUN_00751ba0();
      if (cVar3 == '\0') {
        FUN_00cafd20();
        (**(code **)(*this_ptr + 0x628))();
        pvVar4 = _pthread_getspecific(param_1);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_004a1110();
        if (local_38 == '\0') {
          if (local_40 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        (**(code **)(*local_40 + 0x3a8))();
        if (local_40 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_50 != '\0') && (local_58 != 0)) {
          FUN_00d50b20();
        }
        (**(code **)(*local_40 + 0x3c8))();
      }
      FUN_00d50b20();
      bVar2 = false;
      plVar5 = (int64_t *)0x0;
    }
  }
  FUN_01d37120();
  if (*arg1 != 0) {
    cVar3 = FUN_00751ba0();
    if (cVar3 == '\0') {
      FUN_00cafd20();
      plVar1 = (int64_t *)*arg1;
      (**(code **)(*this_ptr + 0x628))();
      pvVar4 = _pthread_getspecific(param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_004a1110();
      if (local_38 == '\0') {
        if (local_40 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      (**(code **)(*plVar1 + 0x3a0))();
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      (**(code **)(*(int64_t *)*arg1 + 0x3c8))();
    }
    FUN_007549f0();
    FUN_00cb1f10();
    FUN_01b3fd00();
    FUN_00db2780();
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  FUN_00756200();
  local_40 = plVar5;
  if (!bVar2) {
    return;
  }
LAB_00753bfb:
  if (local_40 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 00756ee0
// ============================================================
// Function: FUN_00756ee0
// Address: 00756ee0
// Size: 716 bytes
// Class: MUAudioIOSlot

void FUN_00756ee0(void)

{
  int64_t *plVar1;
  void*puVar2;
  void *pvVar3;
  int64_t lVar4;
  void* pVar5;
  int64_t *this_ptr;
  int64_t local_40;
  char local_38;
  
  if (this_ptr[0xe] != 0) {
    FUN_00d50b00();
    FUN_00d50b20();
    puVar2 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    pVar5 = 0x25d84d8;
    *puVar2 = &g_025d84d8;
    puVar2[7] = 0;
    puVar2[8] = 0;
    (*g_025d84f0)();
    pvVar3 = _pthread_getspecific(pVar5);
    if ((pvVar3 == (void *)0x0) || (lVar4 = FUN_00e8b990(), lVar4 == 0)) {
      plVar1 = (int64_t *)this_ptr[0xe];
    }
    else {
      plVar1 = (int64_t *)this_ptr[0xe];
    }
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    (**(code **)(*plVar1 + 0x418))();
    FUN_013200d0();
    FUN_00d50b20();
    pvVar3 = _pthread_getspecific(pVar5);
    if ((pvVar3 == (void *)0x0) || (lVar4 = FUN_00e8b990(), lVar4 == 0)) {
      plVar1 = (int64_t *)this_ptr[0xe];
    }
    else {
      plVar1 = (int64_t *)this_ptr[0xe];
    }
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    (**(code **)(*plVar1 + 0x408))();
    FUN_01320140();
    FUN_00d50b20();
    (**(code **)(*this_ptr + 0x628))();
    pvVar3 = _pthread_getspecific(pVar5);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_004a7b10();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    (**(code **)(*this_ptr + 0x628))();
    pvVar3 = _pthread_getspecific(pVar5);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    plVar1 = (int64_t *)this_ptr[0xe];
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    (**(code **)(*plVar1 + 0x3f8))();
    FUN_004a7cc0();
    FUN_00d50b20();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    (**(code **)(*this_ptr + 0x628))();
    pvVar3 = _pthread_getspecific(pVar5);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    plVar1 = (int64_t *)this_ptr[0xe];
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    (**(code **)(*plVar1 + 0x3b0))();
    FUN_004a7ce0();
    FUN_00d50b20();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 00759cf0
// ============================================================
// Function: FUN_00759cf0
// Address: 00759cf0
// Size: 683 bytes
// Class: MUAudioIOSlot

void FUN_00759cf0(void)

{
  bool bVar1;
  char cVar2;
  int64_t *plVar3;
  int64_t arg1;
  void*this_ptr;
  int64_t local_70;
  char local_68;
  int64_t *local_40;
  char local_38;
  
  plVar3 = (int64_t *)FUN_00e8fc40();
  FUN_000161a0();
  *plVar3 = (int64_t)&g_0250ac78;
  plVar3[0xe] = (int64_t)&g_0250b2f8;
  plVar3[0xf] = (int64_t)&g_0250b330;
  plVar3[0x10] = (int64_t)&g_0250b3a8;
  plVar3[0x11] = 0;
  plVar3[0x12] = 0;
  plVar3[0x13] = 0;
  plVar3[0x14] = 0;
  *(void*)((int64_t)plVar3 + 0xa4) = 0;
  *(void*)((int64_t)plVar3 + 0xac) = 0;
  plVar3[0x17] = 0;
  plVar3[0x18] = 0;
  plVar3[0x19] = 0;
  plVar3[0x1a] = 0;
  plVar3[0x1b] = 0;
  plVar3[0x1c] = 0;
  plVar3[0x1d] = 0;
  plVar3[0x1e] = 0;
  plVar3[0x1f] = 0;
  (*g_0250ac90)();
  FUN_00758620();
  FUN_01f27fe0();
  cVar2 = (**(code **)(*local_40 + 0x450))();
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar2 == '\0') {
    FUN_0062abf0();
    if (local_68 == '\0') {
      if (local_70 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_68 = '\0';
    }
    FUN_00453a40();
    if (local_40 == (int64_t *)0x0) {
      bVar1 = false;
    }
    else if (local_38 == '\0') {
      FUN_00d50b00();
      bVar1 = true;
    }
    else {
      local_38 = '\0';
      bVar1 = true;
    }
    if (local_70 != 0) {
      FUN_00d50b20();
    }
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    if (arg1 != 0) {
      FUN_00d50b00();
    }
    FUN_003193e0();
    if (local_40 == (int64_t *)0x0) {
      bVar1 = false;
    }
    else if (local_38 == '\0') {
      FUN_00d50b00();
      bVar1 = true;
    }
    else {
      local_38 = '\0';
      bVar1 = true;
    }
    if (arg1 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_007105f0();
  FUN_01e53c20();
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (local_40 == (int64_t *)0x0) {
    (**(code **)(*plVar3 + 0x4c0))();
  }
  *this_ptr = plVar3;
  *(void*)(this_ptr + 1) = 1;
  if ((bVar1) && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 00756aa0
// ============================================================
// Function: FUN_00756aa0
// Address: 00756aa0
// Size: 679 bytes
// Class: MUAudioIOSlot

void FUN_00756aa0(void* param_1)

{
  int64_t *plVar1;
  void *pvVar2;
  int64_t lVar3;
  int64_t *this_ptr;
  uint32_t uVar4;
  uint64_t uVar5;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  if (this_ptr[0xe] != 0) {
    FUN_00d50b00();
    FUN_00d50b20();
    (**(code **)(*this_ptr + 0x628))();
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_004a7c90();
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if (local_40 != 0) {
      plVar1 = (int64_t *)this_ptr[0xe];
      if (plVar1 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar5 = FUN_013201a0();
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar4 = FUN_01320130();
      (**(code **)(*plVar1 + 0x428))(uVar5,uVar4);
      FUN_00d50b20();
      plVar1 = (int64_t *)this_ptr[0xe];
      if (plVar1 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      (**(code **)(*this_ptr + 0x628))();
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_004a7cd0();
      lVar3 = *plVar1;
      (**(code **)(lVar3 + 0x400))();
      param_1 = (void*)lVar3;
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    plVar1 = (int64_t *)this_ptr[0xe];
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    (**(code **)(*this_ptr + 0x628))();
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_004a7cf0();
    (**(code **)(*plVar1 + 0x3a8))();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
    if (local_40 != 0) {
      FUN_00d50b20();
    }
  }
  return;
}

