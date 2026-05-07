// ===================================================================
// GNActionGroup — Complete reconstructed pseudocode
// 5 functions
// ===================================================================

// Registered properties (3):
//                   _subgroups
//                   _supergroup
//                   _actionRegistrations


// ============================================================
// 01f89e00
// ============================================================
// Function: FUN_01f89e00
// Address: 01f89e00
// Size: 3331 bytes
// Class: GNActionGroup
// String references:
//   "GNActionGroup"
//   "GNActionRegistration"
// === GNActionGroup properties ===
//                   _subgroups
//                   _supergroup
//                   _actionRegistrations


bool FUN_01f89e00(uint64_t param_1,char param_2)

{
  bool bVar1;
  int64_t *plVar2;
  int64_t lVar3;
  int64_t *plVar4;
  int64_t *plVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  void*puVar9;
  int64_t *plVar10;
  int64_t lVar11;
  int64_t this_ptr;
  uint32_t uVar12;
  uint32_t extraout_XMM0_Da;
  uint32_t extraout_XMM0_Da_00;
  uint32_t extraout_XMM0_Da_01;
  uint32_t extraout_XMM0_Da_02;
  int64_t local_158;
  char local_150;
  int64_t *local_148;
  char local_140;
  int64_t *local_138;
  char local_130;
  int64_t local_128;
  char local_120;
  int64_t *local_118;
  char local_110;
  int64_t *local_108;
  char local_100;
  int local_f4;
  int64_t *local_88;
  int64_t *local_80;
  int64_t local_78;
  char local_70;
  int64_t *local_68;
  char local_60;
  void*local_58;
  uint64_t local_50;
  int local_48;
  int64_t *local_40;
  char local_38;
  
  FUN_01eda0f0();
  local_88 = local_68;
  if (local_60 == '\0') {
    if (local_68 == (int64_t *)0x0) {
      local_88 = (int64_t *)0x0;
    }
    else {
      FUN_00d50b00();
      if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    local_88 = local_68;
  }
  puVar9 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar9 = &g_02572358;
  uVar12 = (*g_02572370)();
  if ((g_026e73b0 == '\0') &&
     (iVar7 = ___cxa_guard_acquire(), uVar12 = extraout_XMM0_Da_01, iVar7 != 0)) {
    g_02801338 = FUN_00d4fe50();
    g_02801320 = "GNActionGroup";
    g_02801328 = 0x38;
    g_02801330 = FUN_001a4a20;
    g_02801340 = 0;
    ram_0000000002801348 = 0;
    g_02801350 = 0;
    ram_0000000002801358 = 0;
    g_02801360 = 0;
    ram_0000000002801368 = 0;
    g_02801370 = 0;
    ram_0000000002801378 = 0;
    g_02801380 = 0;
    ram_0000000002801388 = 0;
    g_02801390 = 0;
    ram_0000000002801398 = 0;
    g_028013a0 = 0;
    ram_00000000028013a8 = 0;
    g_028013b0 = 0;
    ram_00000000028013b8 = 0;
    g_028013c0 = 0;
    ram_00000000028013c8 = 0;
    g_028013d0 = 0;
    ram_00000000028013d8 = 0;
    g_028013e0 = 0;
    uVar12 = ___cxa_guard_release();
  }
  if (local_88 == (int64_t *)0x0) {
LAB_01f89e9e:
    if (g_02802688 != 0) goto LAB_01f89eab;
LAB_01f89f12:
    if ((g_026e7b78 == '\0') &&
       (iVar7 = ___cxa_guard_acquire(), uVar12 = extraout_XMM0_Da_02, iVar7 != 0)) {
      g_026e7ac8 = FUN_00d4fe50();
      g_026e7ab0 = "GNActionRegistration";
      g_026e7ab8 = 0x38;
      g_026e7ac0 = FUN_001a8af0;
      g_026e7ad0 = 0;
      ram_00000000026e7ad8 = 0;
      g_026e7ae0 = 0;
      ram_00000000026e7ae8 = 0;
      g_026e7af0 = 0;
      ram_00000000026e7af8 = 0;
      g_026e7b00 = 0;
      ram_00000000026e7b08 = 0;
      g_026e7b10 = 0;
      ram_00000000026e7b18 = 0;
      g_026e7b20 = 0;
      ram_00000000026e7b28 = 0;
      g_026e7b30 = 0;
      ram_00000000026e7b38 = 0;
      g_026e7b40 = 0;
      ram_00000000026e7b48 = 0;
      g_026e7b50 = 0;
      ram_00000000026e7b58 = 0;
      g_026e7b60 = 0;
      ram_00000000026e7b68 = 0;
      g_026e7b70 = 0;
      uVar12 = ___cxa_guard_release();
    }
    if (local_88 == (int64_t *)0x0) {
LAB_01f89f4c:
      if (g_02802688 == 0) goto LAB_01f8a728;
LAB_01f89f5d:
      local_68 = local_88;
      local_60 = '\0';
      FUN_00d21140();
      if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      uVar12 = FUN_01caf440();
      local_80 = local_68;
      if (local_68 == (int64_t *)0x0) goto LAB_01f8a08a;
      bVar1 = true;
      if (((local_60 == '\0') && (uVar12 = FUN_00d50b00(), local_60 != '\0')) &&
         (local_68 != (int64_t *)0x0)) {
        uVar12 = FUN_00d50b20();
      }
      goto LAB_01f8a093;
    }
    (**(code **)(*local_88 + 0x360))();
    cVar6 = FUN_00e85ea0();
    uVar12 = extraout_XMM0_Da_00;
    if (cVar6 == '\0') goto LAB_01f89f4c;
    if (local_88 != (int64_t *)0x0) goto LAB_01f89f5d;
LAB_01f8a728:
    bVar1 = false;
    local_80 = (int64_t *)0x0;
    local_f4 = *(int *)((int64_t)puVar9 + 0xc);
    lVar11 = g_027f1fc8;
  }
  else {
    (**(code **)(*local_88 + 0x360))();
    cVar6 = FUN_00e85ea0();
    uVar12 = extraout_XMM0_Da;
    if (cVar6 == '\0') goto LAB_01f89e9e;
    if (local_88 == (int64_t *)0x0) goto LAB_01f89f12;
LAB_01f89eab:
    uVar12 = FUN_01caf170();
    plVar4 = local_40;
    if (local_38 == '\0') {
      if (local_40 != (int64_t *)0x0) {
        uVar12 = FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_68 = plVar4;
    local_60 = '\0';
    FUN_00d214d0(uVar12,*(void*)((int64_t)puVar9 + 0xc));
    if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar4 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    uVar12 = FUN_01caf0e0();
    local_80 = local_68;
    if (local_68 == (int64_t *)0x0) {
LAB_01f8a08a:
      bVar1 = false;
      local_80 = local_68;
    }
    else {
      bVar1 = true;
      if (((local_60 == '\0') && (uVar12 = FUN_00d50b00(), local_60 != '\0')) &&
         (local_68 != (int64_t *)0x0)) {
        uVar12 = FUN_00d50b20();
      }
    }
LAB_01f8a093:
    local_f4 = *(int *)((int64_t)puVar9 + 0xc);
    lVar11 = g_027f1fc8;
  }
  g_027f1fc8 = lVar11;
  if ((local_f4 == 0) || (param_2 == '\0')) goto LAB_01f8a97e;
  if (lVar11 != 0) {
    uVar12 = FUN_00d50b00();
  }
  lVar3 = g_02801070;
  if (g_02801070 != 0) {
    uVar12 = FUN_00d50b00();
  }
  local_158 = lVar3;
  local_150 = '\x01';
  FUN_01f6ca30(uVar12,&local_158);
  plVar4 = local_68;
  if (local_60 == '\0') {
    if (((local_68 != (int64_t *)0x0) && (FUN_00d50b00(), local_60 != '\0')) &&
       (local_68 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_60 = '\0';
  }
  if ((local_150 != '\0') && (local_158 != 0)) {
    FUN_00d50b20();
  }
  if (lVar11 != 0) {
    FUN_00d50b20();
  }
  plVar10 = (int64_t *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar10 + 0x18))();
  FUN_01da4890();
  uVar12 = FUN_01da7e30();
  plVar5 = local_40;
  plVar2 = g_02801078;
  if (local_38 == '\0') {
    if (local_40 != (int64_t *)0x0) {
      uVar12 = FUN_00d50b00();
      plVar2 = g_02801078;
    }
  }
  else {
    local_38 = '\0';
  }
  g_02801078 = plVar2;
  if (plVar2 != (int64_t *)0x0) {
    uVar12 = FUN_00d50b00();
  }
  local_60 = '\0';
  local_68 = plVar2;
  FUN_00ca0840(uVar12,&local_68);
  if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar2 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (plVar5 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  plVar2 = g_02801080;
  local_140 = '\0';
  local_148 = local_80;
  if (g_02801080 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  local_68 = plVar2;
  local_60 = '\0';
  FUN_00ca0840();
  if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar2 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_140 != '\0') && (local_148 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  local_130 = '\0';
  local_138 = plVar10;
  iVar7 = (**(code **)(*plVar4 + 0x5d8))();
  if ((local_130 != '\0') && (local_138 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (iVar7 == 2) {
    local_60 = '\0';
    local_68 = (int64_t *)0x0;
    local_50 = 0xffffffff;
    local_48 = 0;
    local_50._4_4_ = 0;
    local_58 = puVar9;
    while( true ) {
      if (local_50._4_4_ != 0) {
        if (local_50._4_4_ < 1) {
          iVar7 = -local_50._4_4_;
        }
        else {
          iVar7 = (int)local_50 - local_50._4_4_;
          local_50 = CONCAT44(local_50._4_4_,iVar7);
          FUN_00d23690();
          local_48 = local_48 + local_50._4_4_;
          iVar7 = 0;
        }
        local_50 = CONCAT44(iVar7,(int)local_50);
      }
      lVar11 = (int64_t)(int)local_50;
      iVar7 = (int)local_50 + 1;
      local_50 = CONCAT44(local_50._4_4_,iVar7);
      if (*(int *)((int64_t)local_58 + 0xc) <= iVar7) break;
      local_68 = *(int64_t **)(local_58[2] + 8 + lVar11 * 8);
      FUN_01da4890();
      plVar2 = local_40;
      FUN_01caf470();
      if (local_70 == '\0') {
        if (local_78 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_70 = '\0';
      }
      (**(code **)(*plVar2 + 0x460))();
      if (local_78 != 0) {
        FUN_00d50b20();
      }
      if ((local_70 != '\0') && (local_78 != 0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    FUN_002a0990();
    (**(code **)(**(int64_t **)(this_ptr + 0x80) + 0x920))();
    FUN_01da4890();
    FUN_01f27fe0();
    FUN_01f28c30();
    plVar2 = local_40;
    if (local_38 == '\0') {
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    FUN_01da8a40();
    if (plVar2 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
LAB_01f8a957:
    if (plVar10 != (int64_t *)0x0) goto LAB_01f8a961;
  }
  else {
    if (iVar7 == 1) {
      local_60 = '\0';
      local_68 = (int64_t *)0x0;
      local_50 = 0xffffffff;
      local_48 = 0;
      local_50._4_4_ = 0;
      local_58 = puVar9;
      while( true ) {
        if (local_50._4_4_ != 0) {
          if (local_50._4_4_ < 1) {
            iVar7 = -local_50._4_4_;
          }
          else {
            iVar7 = (int)local_50 - local_50._4_4_;
            local_50 = CONCAT44(local_50._4_4_,iVar7);
            FUN_00d23690();
            local_48 = local_48 + local_50._4_4_;
            iVar7 = 0;
          }
          local_50 = CONCAT44(iVar7,(int)local_50);
        }
        lVar11 = (int64_t)(int)local_50;
        iVar7 = (int)local_50 + 1;
        local_50 = CONCAT44(local_50._4_4_,iVar7);
        if (*(int *)((int64_t)local_58 + 0xc) <= iVar7) break;
        local_68 = *(int64_t **)(local_58[2] + 8 + lVar11 * 8);
        if (local_68 != (int64_t *)0x0) {
          FUN_01caf470();
          plVar2 = local_40;
          if (local_38 == '\0') {
            if (local_40 != (int64_t *)0x0) {
              FUN_00d50b00();
              if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              goto LAB_01f8a470;
            }
          }
          else if (local_40 != (int64_t *)0x0) {
LAB_01f8a470:
            uVar12 = FUN_01da4890();
            local_128 = 0;
            local_120 = '\0';
            local_118 = plVar2;
            local_110 = '\0';
            FUN_01da4a10(uVar12,&local_118);
            if ((local_110 != '\0') && (local_118 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_120 != '\0') && (local_128 != 0)) {
              FUN_00d50b20();
            }
            if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            FUN_00d50b20();
          }
        }
      }
      FUN_002a0990();
      FUN_01eda0f0();
      plVar2 = local_68;
      if (local_60 == '\0') {
        if (local_68 != (int64_t *)0x0) {
          FUN_00d50b00();
          if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          goto LAB_01f8a76f;
        }
LAB_01f8a7b7:
        iVar7 = -1;
      }
      else {
        if (local_68 == (int64_t *)0x0) goto LAB_01f8a7b7;
LAB_01f8a76f:
        local_108 = plVar2;
        local_100 = '\0';
        iVar7 = FUN_01ed2ec0();
        if ((local_100 != '\0') && (local_108 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
      }
      (**(code **)(**(int64_t **)(this_ptr + 0x80) + 0x920))();
      FUN_01da4890();
      FUN_01f27fe0();
      FUN_01f28c30();
      plVar2 = local_40;
      if (local_38 == '\0') {
        if (local_40 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      FUN_01da8a40();
      if (plVar2 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_70 != '\0') && (local_78 != 0)) {
        FUN_00d50b20();
      }
      if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (iVar7 != -1) {
        iVar8 = FUN_01dcea80();
        if (iVar8 <= iVar7) {
          FUN_01dcea80();
        }
        FUN_01dd3d10();
      }
      goto LAB_01f8a957;
    }
LAB_01f8a961:
    FUN_00d50b20();
  }
  if (plVar4 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
LAB_01f8a97e:
  if ((bVar1) && (local_80 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (puVar9 != (void*)0x0) {
    FUN_00d50b20();
  }
  if (local_88 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return local_f4 != 0;
}



// ============================================================
// 01f8f0f0
// ============================================================
// Function: FUN_01f8f0f0
// Address: 01f8f0f0
// Size: 2758 bytes
// Class: GNActionGroup
// === GNActionGroup properties ===
//                   _subgroups
//                   _supergroup
//                   _actionRegistrations


void FUN_01f8f0f0(void)

{
  int64_t *plVar1;
  int64_t *plVar2;
  int64_t *plVar3;
  int64_t lVar4;
  char cVar5;
  int64_t lVar6;
  int iVar7;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t *local_1b0;
  char local_1a8;
  int64_t local_148;
  char local_140;
  int64_t local_138;
  char local_130;
  int64_t local_128;
  char local_120;
  int64_t *local_118;
  char local_110;
  int64_t local_108;
  char local_100;
  int64_t local_f8;
  char local_f0;
  int64_t local_e8;
  char local_e0;
  int64_t *local_d8;
  char local_d0;
  int64_t local_c8;
  char local_c0;
  int64_t local_b8;
  char local_b0;
  int64_t local_a8;
  char local_a0;
  int64_t local_98;
  char local_90;
  int64_t *local_88;
  int local_7c;
  int64_t *local_78;
  char local_70;
  int64_t *local_68;
  char local_60;
  int64_t *local_58;
  uint64_t local_50;
  int local_48;
  int64_t local_40;
  char local_38;
  
  FUN_00d3ecc0();
  plVar2 = local_68;
  lVar6 = g_02801020;
  if (g_02801020 != 0) {
    FUN_00d50b00();
  }
  cVar5 = (**(code **)(*plVar2 + 0x50))();
  if (lVar6 != 0) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((cVar5 != '\0') && ((int64_t *)this_ptr[0x10] != (int64_t *)0x0)) {
    (**(code **)(*(int64_t *)this_ptr[0x10] + 0x920))();
    local_b0 = 0;
    local_b8 = this_ptr[0x10];
    if (local_b8 != 0) {
      FUN_00d50b00();
    }
    local_b0 = '\x01';
    (**(code **)(*this_ptr + 0x5e8))();
    if ((local_b0 != '\0') && (local_b8 != 0)) {
      FUN_00d50b20();
    }
  }
  FUN_00d3ecc0();
  plVar2 = local_68;
  lVar6 = g_027f0e10;
  if (g_027f0e10 != 0) {
    FUN_00d50b00();
  }
  cVar5 = (**(code **)(*plVar2 + 0x50))();
  if (lVar6 != 0) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar5 == '\0') goto LAB_01f8fb55;
  FUN_01d77960();
  FUN_01d5e2b0();
  local_a8 = local_40;
  local_a0 = 0;
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  local_a0 = '\x01';
  FUN_01f904a0();
  local_88 = local_68;
  if (local_60 == '\0') {
    if (((local_68 != (int64_t *)0x0) && (FUN_00d50b00(), local_60 != '\0')) &&
       (local_68 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_60 = '\0';
  }
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (local_88 != (int64_t *)0x0) {
    local_60 = '\0';
    local_68 = (int64_t *)0x0;
    local_58 = local_88;
    local_50 = 0xffffffff;
    local_48 = 0;
    local_50._4_4_ = 0;
    do {
      if (local_50._4_4_ != 0) {
        if (local_50._4_4_ < 1) {
          iVar7 = -local_50._4_4_;
        }
        else {
          iVar7 = (int)local_50 - local_50._4_4_;
          local_50 = CONCAT44(local_50._4_4_,iVar7);
          FUN_00d23690();
          local_48 = local_48 + local_50._4_4_;
          iVar7 = 0;
        }
        local_50 = CONCAT44(iVar7,(int)local_50);
      }
      lVar6 = (int64_t)(int)local_50;
      iVar7 = (int)local_50 + 1;
      local_50 = CONCAT44(local_50._4_4_,iVar7);
      if (*(int *)((int64_t)local_58 + 0xc) <= iVar7) goto LAB_01f8f590;
      local_68 = *(int64_t **)(local_58[2] + 8 + lVar6 * 8);
      FUN_01d66da0();
      lVar6 = g_02801038;
      if (g_02801038 != 0) {
        FUN_00d50b00();
      }
      FUN_000175c0();
      lVar4 = local_40;
      if (local_38 == '\0') {
        if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_38 = '\0';
      }
      if (lVar6 != 0) {
        FUN_00d50b20();
      }
      if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (lVar4 != 0) {
        cVar5 = FUN_00c70bc0();
        if (cVar5 != '\0') goto LAB_01f8f585;
        FUN_00d50b20();
      }
      FUN_01d77960();
      FUN_01d5dde0();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
    } while( true );
  }
  goto LAB_01f8f599;
LAB_01f8f585:
  FUN_00d50b20();
LAB_01f8f590:
  FUN_002a0a30();
LAB_01f8f599:
  FUN_01da4890();
  FUN_01da7fd0();
  local_98 = local_40;
  local_90 = 0;
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  local_90 = '\x01';
  local_140 = '\0';
  local_148 = 0;
  local_138 = 0;
  local_130 = '\0';
  local_128 = 0;
  local_120 = '\0';
  FUN_01d64d40(&local_138,&local_148,&local_128);
  plVar2 = local_68;
  if (local_60 == '\0') {
    if (((local_68 != (int64_t *)0x0) && (FUN_00d50b00(), local_60 != '\0')) &&
       (local_68 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_60 = '\0';
  }
  if ((local_120 != '\0') && (local_128 != 0)) {
    FUN_00d50b20();
  }
  if ((local_130 != '\0') && (local_138 != 0)) {
    FUN_00d50b20();
  }
  if ((local_140 != '\0') && (local_148 != 0)) {
    FUN_00d50b20();
  }
  if ((local_90 != '\0') && (local_98 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01d77960();
  local_118 = plVar2;
  local_110 = '\0';
  FUN_01d5d7f0();
  if ((local_110 != '\0') && (local_118 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  local_7c = 1;
  FUN_01d77960();
  plVar3 = local_68;
  if (local_60 == '\0') {
    if (local_68 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_60 = '\0';
  }
  FUN_01f27fe0();
  (**(code **)(*local_1b0 + 0x610))();
  plVar1 = local_78;
  local_108 = g_02800ff0;
  if (g_02800ff0 != 0) {
    FUN_00d50b00();
  }
  local_100 = '\x01';
  (**(code **)(*plVar1 + 0x400))();
  lVar6 = local_40;
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  FUN_00d50b00();
  FUN_01f82cb0(&stack0xfffffffffffffdf0,&local_7c);
  FUN_00d50b20();
  if (lVar6 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_100 != '\0') && (local_108 != 0)) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_1a8 != '\0') && (local_1b0 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar3 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01d77960();
  plVar3 = local_68;
  if (local_60 == '\0') {
    if (local_68 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_60 = '\0';
  }
  FUN_01f83aa0();
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  FUN_00d50b00();
  FUN_01f82cb0(&stack0xfffffffffffffe00,&local_7c);
  FUN_00d50b20();
  if (local_40 != 0) {
    FUN_00d50b20();
  }
  if (plVar3 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  lVar6 = g_026fce10;
  if (local_7c != 0) {
    if (g_026fce10 != 0) {
      FUN_00d50b00();
    }
    local_f8 = lVar6;
    local_f0 = '\x01';
    local_e8 = 0;
    local_e0 = '\0';
    FUN_01d64ce0();
    plVar3 = local_68;
    if (local_60 == '\0') {
      if (((local_68 != (int64_t *)0x0) && (FUN_00d50b00(), local_60 != '\0')) &&
         (local_68 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_60 = '\0';
    }
    if ((local_e0 != '\0') && (local_e8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_f0 != '\0') && (local_f8 != 0)) {
      FUN_00d50b20();
    }
    FUN_01d66c80();
    FUN_01d77960();
    local_d8 = plVar3;
    local_d0 = '\0';
    FUN_01d5d7f0();
    if ((local_d0 != '\0') && (local_d8 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar3 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  if (plVar2 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (local_88 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
LAB_01f8fb55:
  local_c8 = *arg1;
  local_c0 = '\0';
  FUN_00d530a0();
  if ((local_c0 != '\0') && (local_c8 != 0)) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 01f8e100
// ============================================================
// Function: FUN_01f8e100
// Address: 01f8e100
// Size: 1741 bytes
// Class: GNActionGroup
// String references:
//   "GNActionGroup"
//   "GNActionRegistration"
// === GNActionGroup properties ===
//                   _subgroups
//                   _supergroup
//                   _actionRegistrations


void FUN_01f8e100(int64_t *param_1)

{
  int64_t lVar1;
  char cVar2;
  int iVar3;
  int64_t *plVar4;
  void*this_ptr;
  uint32_t uVar5;
  int64_t local_90;
  char local_88;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t *local_40;
  char local_38;
  
  FUN_01db9a80();
  plVar4 = local_40;
  lVar1 = g_027feca0;
  if (g_027feca0 != 0) {
    FUN_00d50b00();
  }
  cVar2 = (**(code **)(*plVar4 + 0x50))();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar2 != '\0') {
    plVar4 = (int64_t *)*param_1;
    if ((g_026e73b0 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
      g_02801338 = FUN_00d4fe50();
      g_02801320 = "GNActionGroup";
      g_02801328 = 0x38;
      g_02801330 = FUN_001a4a20;
      g_02801340 = 0;
      ram_0000000002801348 = 0;
      g_02801350 = 0;
      ram_0000000002801358 = 0;
      g_02801360 = 0;
      ram_0000000002801368 = 0;
      g_02801370 = 0;
      ram_0000000002801378 = 0;
      g_02801380 = 0;
      ram_0000000002801388 = 0;
      g_02801390 = 0;
      ram_0000000002801398 = 0;
      g_028013a0 = 0;
      ram_00000000028013a8 = 0;
      g_028013b0 = 0;
      ram_00000000028013b8 = 0;
      g_028013c0 = 0;
      ram_00000000028013c8 = 0;
      g_028013d0 = 0;
      ram_00000000028013d8 = 0;
      g_028013e0 = 0;
      ___cxa_guard_release();
    }
    if (plVar4 == (int64_t *)0x0) {
LAB_01f8e1be:
      plVar4 = &g_02802688;
    }
    else {
      (**(code **)(*plVar4 + 0x360))();
      cVar2 = FUN_00e85ea0();
      plVar4 = param_1;
      if (cVar2 == '\0') goto LAB_01f8e1be;
    }
    if (*plVar4 == 0) {
      plVar4 = (int64_t *)*param_1;
      if ((g_026e7b78 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
        g_026e7ac8 = FUN_00d4fe50();
        g_026e7ab0 = "GNActionRegistration";
        g_026e7ab8 = 0x38;
        g_026e7ac0 = FUN_001a8af0;
        g_026e7ad0 = 0;
        ram_00000000026e7ad8 = 0;
        g_026e7ae0 = 0;
        ram_00000000026e7ae8 = 0;
        g_026e7af0 = 0;
        ram_00000000026e7af8 = 0;
        g_026e7b00 = 0;
        ram_00000000026e7b08 = 0;
        g_026e7b10 = 0;
        ram_00000000026e7b18 = 0;
        g_026e7b20 = 0;
        ram_00000000026e7b28 = 0;
        g_026e7b30 = 0;
        ram_00000000026e7b38 = 0;
        g_026e7b40 = 0;
        ram_00000000026e7b48 = 0;
        g_026e7b50 = 0;
        ram_00000000026e7b58 = 0;
        g_026e7b60 = 0;
        ram_00000000026e7b68 = 0;
        g_026e7b70 = 0;
        ___cxa_guard_release();
      }
      if (plVar4 == (int64_t *)0x0) {
LAB_01f8e25c:
        plVar4 = &g_02802688;
      }
      else {
        (**(code **)(*plVar4 + 0x360))();
        cVar2 = FUN_00e85ea0();
        plVar4 = param_1;
        if (cVar2 == '\0') goto LAB_01f8e25c;
      }
      if (*plVar4 == 0) goto LAB_01f8e2c2;
      FUN_01caf440();
      plVar4 = local_40;
      *(void*)(this_ptr + 1) = 0;
      if (local_38 != '\0') goto LAB_01f8e403;
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
        *this_ptr = plVar4;
        *(void*)(this_ptr + 1) = 1;
        if (local_38 == '\0') {
          return;
        }
        if (local_40 == (int64_t *)0x0) {
          return;
        }
        FUN_00d50b20();
        return;
      }
    }
    else {
      FUN_01caf0e0();
      plVar4 = local_40;
      *(void*)(this_ptr + 1) = 0;
      if (local_38 != '\0') goto LAB_01f8e403;
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
        *this_ptr = plVar4;
        *(void*)(this_ptr + 1) = 1;
        if (local_38 == '\0') {
          return;
        }
        if (local_40 == (int64_t *)0x0) {
          return;
        }
        FUN_00d50b20();
        return;
      }
    }
    local_40 = (int64_t *)0x0;
LAB_01f8e403:
    *this_ptr = local_40;
    *(void*)(this_ptr + 1) = 1;
    return;
  }
LAB_01f8e2c2:
  FUN_01db9a80();
  plVar4 = local_40;
  lVar1 = g_02704000;
  if (g_02704000 != 0) {
    FUN_00d50b00();
  }
  cVar2 = (**(code **)(*plVar4 + 0x50))();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar2 == '\0') goto LAB_01f8e370;
  plVar4 = (int64_t *)*param_1;
  if ((g_026e73b0 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
    g_02801338 = FUN_00d4fe50();
    g_02801320 = "GNActionGroup";
    g_02801328 = 0x38;
    g_02801330 = FUN_001a4a20;
    g_02801340 = 0;
    ram_0000000002801348 = 0;
    g_02801350 = 0;
    ram_0000000002801358 = 0;
    g_02801360 = 0;
    ram_0000000002801368 = 0;
    g_02801370 = 0;
    ram_0000000002801378 = 0;
    g_02801380 = 0;
    ram_0000000002801388 = 0;
    g_02801390 = 0;
    ram_0000000002801398 = 0;
    g_028013a0 = 0;
    ram_00000000028013a8 = 0;
    g_028013b0 = 0;
    ram_00000000028013b8 = 0;
    g_028013c0 = 0;
    ram_00000000028013c8 = 0;
    g_028013d0 = 0;
    ram_00000000028013d8 = 0;
    g_028013e0 = 0;
    ___cxa_guard_release();
  }
  if (plVar4 == (int64_t *)0x0) {
LAB_01f8e363:
    plVar4 = &g_02802688;
  }
  else {
    (**(code **)(*plVar4 + 0x360))();
    cVar2 = FUN_00e85ea0();
    plVar4 = param_1;
    if (cVar2 == '\0') goto LAB_01f8e363;
  }
  if (*plVar4 != 0) goto LAB_01f8e370;
  plVar4 = (int64_t *)*param_1;
  if ((g_026e7b78 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
    g_026e7ac8 = FUN_00d4fe50();
    g_026e7ab0 = "GNActionRegistration";
    g_026e7ab8 = 0x38;
    g_026e7ac0 = FUN_001a8af0;
    g_026e7ad0 = 0;
    ram_00000000026e7ad8 = 0;
    g_026e7ae0 = 0;
    ram_00000000026e7ae8 = 0;
    g_026e7af0 = 0;
    ram_00000000026e7af8 = 0;
    g_026e7b00 = 0;
    ram_00000000026e7b08 = 0;
    g_026e7b10 = 0;
    ram_00000000026e7b18 = 0;
    g_026e7b20 = 0;
    ram_00000000026e7b28 = 0;
    g_026e7b30 = 0;
    ram_00000000026e7b38 = 0;
    g_026e7b40 = 0;
    ram_00000000026e7b48 = 0;
    g_026e7b50 = 0;
    ram_00000000026e7b58 = 0;
    g_026e7b60 = 0;
    ram_00000000026e7b68 = 0;
    g_026e7b70 = 0;
    ___cxa_guard_release();
  }
  if (plVar4 == (int64_t *)0x0) {
LAB_01f8e3b9:
    param_1 = &g_02802688;
  }
  else {
    (**(code **)(*plVar4 + 0x360))();
    cVar2 = FUN_00e85ea0();
    if (cVar2 == '\0') goto LAB_01f8e3b9;
  }
  if (*param_1 == 0) {
LAB_01f8e370:
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
    return;
  }
  FUN_01da4890();
  uVar5 = FUN_01caf470();
  local_48 = 0;
  if (local_58 == '\0') {
    if (local_60 != 0) {
      uVar5 = FUN_00d50b00();
    }
  }
  else {
    local_58 = '\0';
  }
  local_48 = '\x01';
  local_50 = local_60;
  FUN_01da5370(uVar5,&local_50);
  plVar4 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != (int64_t *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
       (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  if (plVar4 == (int64_t *)0x0) goto LAB_01f8e370;
  FUN_01d3d730();
  plVar4 = local_40;
  *(void*)(this_ptr + 1) = 0;
  if (local_38 == '\0') {
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b00();
      *this_ptr = plVar4;
      *(void*)(this_ptr + 1) = 1;
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_01f8e4bb;
    }
    local_40 = (int64_t *)0x0;
  }
  *this_ptr = local_40;
  *(void*)(this_ptr + 1) = 1;
LAB_01f8e4bb:
  FUN_00d50b20();
  return;
}



// ============================================================
// 01f8d910
// ============================================================
// Function: FUN_01f8d910
// Address: 01f8d910
// Size: 1346 bytes
// Class: GNActionGroup
// String references:
//   "GNActionGroup"
// === GNActionGroup properties ===
//                   _subgroups
//                   _supergroup
//                   _actionRegistrations


void* FUN_01f8d910(int64_t *param_1)

{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t lVar3;
  char cVar4;
  int iVar5;
  void*puVar6;
  int64_t lVar7;
  void*this_ptr;
  int64_t local_b8;
  char local_b0;
  int64_t local_68;
  char local_60;
  int local_50;
  
  lVar3 = local_68;
  puVar6 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar6 = &g_02572358;
  (*g_02572370)();
  plVar1 = (int64_t *)*param_1;
  if (plVar1 == (int64_t *)0x0) {
    FUN_01caf660();
    FUN_01cafb00();
    if ((local_60 == '\0') && (local_68 != 0)) {
      FUN_00d50b00();
    }
    if ((local_b0 != '\0') && (local_b8 != 0)) {
      FUN_00d50b20();
    }
    if (local_68 != 0) {
      if (0 < *(int *)(local_68 + 0xc)) {
        iVar5 = 0;
        do {
          cVar4 = FUN_01f8ce40();
          if (cVar4 != '\0') {
            FUN_00d21140();
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < *(int *)(local_68 + 0xc));
      }
      FUN_01cb0380();
      FUN_00d50b20();
    }
    *this_ptr = puVar6;
    *(void*)(this_ptr + 1) = 1;
    return this_ptr;
  }
  if ((g_026e73b0 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
    g_02801338 = FUN_00d4fe50();
    g_02801320 = "GNActionGroup";
    g_02801328 = 0x38;
    g_02801330 = FUN_001a4a20;
    g_02801340 = 0;
    ram_0000000002801348 = 0;
    g_02801350 = 0;
    ram_0000000002801358 = 0;
    g_02801360 = 0;
    ram_0000000002801368 = 0;
    g_02801370 = 0;
    ram_0000000002801378 = 0;
    g_02801380 = 0;
    ram_0000000002801388 = 0;
    g_02801390 = 0;
    ram_0000000002801398 = 0;
    g_028013a0 = 0;
    ram_00000000028013a8 = 0;
    g_028013b0 = 0;
    ram_00000000028013b8 = 0;
    g_028013c0 = 0;
    ram_00000000028013c8 = 0;
    g_028013d0 = 0;
    ram_00000000028013d8 = 0;
    g_028013e0 = 0;
    ___cxa_guard_release();
  }
  (**(code **)(*plVar1 + 0x360))();
  cVar4 = FUN_00e85ea0();
  if (cVar4 == '\0') {
    param_1 = &g_02802688;
  }
  lVar2 = param_1[1];
  if (((char)lVar2 == '\0') || (*param_1 == 0)) {
    if (*param_1 == 0) {
      *(void*)(this_ptr + 1) = 0;
      *this_ptr = 0;
      if (puVar6 == (void*)0x0) {
        return this_ptr;
      }
      FUN_00d50b20();
      return this_ptr;
    }
  }
  else {
    FUN_00d50b00();
  }
  FUN_01caf140();
  if (local_60 == '\0') {
    if (local_68 != 0) {
      FUN_00d50b00();
      goto LAB_01f8db3c;
    }
  }
  else if (local_68 != 0) {
LAB_01f8db3c:
    local_60 = '\0';
    local_68 = 0;
    local_50 = -1;
    while( true ) {
      lVar7 = (int64_t)local_50;
      local_50 = local_50 + 1;
      if (*(int *)(lVar3 + 0xc) <= local_50) break;
      local_68 = *(int64_t *)(*(int64_t *)(lVar3 + 0x10) + 8 + lVar7 * 8);
      cVar4 = FUN_01f8d150();
      if (cVar4 != '\0') {
        FUN_00d21140();
      }
    }
    FUN_002a0990();
    FUN_00d50b20();
  }
  FUN_01caf110();
  if (local_60 == '\0') {
    if (local_68 == 0) goto LAB_01f8dd37;
    FUN_00d50b00();
  }
  else if (local_68 == 0) goto LAB_01f8dd37;
  if (0 < *(int *)(local_68 + 0xc)) {
    iVar5 = 0;
    do {
      cVar4 = FUN_01f8ce40();
      if (cVar4 != '\0') {
        FUN_00d21140();
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(local_68 + 0xc));
  }
  FUN_01cb0380();
  FUN_00d50b20();
LAB_01f8dd37:
  *this_ptr = puVar6;
  *(void*)(this_ptr + 1) = 1;
  if ((char)lVar2 != '\0') {
    FUN_00d50b20();
  }
  return this_ptr;
}



// ============================================================
// 01f90590
// ============================================================
// Function: FUN_01f90590
// Address: 01f90590
// Size: 511 bytes
// Class: GNActionGroup
// === GNActionGroup properties ===
//                   _subgroups
//                   _supergroup
//                   _actionRegistrations


uint64_t FUN_01f90590(uint64_t param_1,int param_2)

{
  int64_t lVar1;
  char cVar2;
  int64_t *this_ptr;
  int64_t local_78;
  char local_70;
  int64_t *local_38;
  char local_30;
  
  if (param_2 == 0) {
    return 1;
  }
  FUN_01eda7e0();
  if ((local_30 == '\0') && (local_38 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  (**(code **)(*(int64_t *)this_ptr[0x10] + 0x920))();
  FUN_01f8cb70();
  if (local_38 == (int64_t *)0x0) {
    FUN_01f8bbb0();
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    if (local_78 == 0) {
      (**(code **)(*(int64_t *)this_ptr[0x10] + 0xa60))();
      goto LAB_01f90655;
    }
  }
  else if (local_30 != '\0') {
    FUN_00d50b20();
  }
  (**(code **)(*(int64_t *)this_ptr[0x10] + 0xa58))();
LAB_01f90655:
  if (local_38 != (int64_t *)0x0) {
    FUN_01eda650();
    FUN_01eda7e0();
    if (local_30 == '\0') {
      if (local_38 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_30 = '\0';
    }
    cVar2 = (**(code **)(*local_38 + 0x50))();
    if (local_38 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (cVar2 == '\0') {
      FUN_01dd4c60();
    }
  }
  lVar1 = this_ptr[0x10];
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  (**(code **)(*this_ptr + 0x5e8))();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if (local_38 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return 1;
}

