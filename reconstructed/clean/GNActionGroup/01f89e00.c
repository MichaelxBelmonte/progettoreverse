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

