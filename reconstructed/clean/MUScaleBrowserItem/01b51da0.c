// Function: FUN_01b51da0
// Address: 01b51da0
// Size: 3054 bytes
// Class: MUScaleBrowserItem
// String references:
//   "MUScaleBrowserItem"

uint64_t FUN_01b51da0(void**param_1,int param_2)

{
  int64_t *plVar1;
  int64_t lVar2;
  void**ppuVar3;
  char cVar4;
  char cVar5;
  void*puVar6;
  int64_t lVar7;
  uint64_t uVar8;
  int iVar9;
  void***pppuVar10;
  void**ppuVar11;
  int64_t this_ptr;
  void**ppuVar12;
  uint64_t unaff_R13;
  uint7 uVar14;
  void**ppuVar13;
  uint64_t unaff_R14;
  uint7 uVar16;
  void**ppuVar15;
  uint32_t extraout_XMM0_Da;
  uint32_t uVar17;
  void**local_1b0;
  char local_1a8;
  void**local_1a0;
  char local_198;
  int64_t local_190;
  char local_188;
  int64_t local_180;
  char local_178;
  int64_t local_170;
  char local_168;
  void**local_160;
  char local_158;
  void**local_150;
  char local_148;
  int64_t local_140;
  char local_138;
  void*local_130;
  char local_128;
  void**local_120;
  char local_118;
  int64_t local_110;
  char local_108;
  void**local_100;
  int64_t local_f8;
  char local_f0;
  int64_t *local_e8;
  char local_e0;
  void**local_d8;
  char local_d0;
  int64_t local_c8;
  char local_c0;
  void**local_b8;
  void*local_b0;
  void**local_a8;
  int64_t *local_a0;
  char local_98;
  void**local_90;
  void**local_88;
  void**local_80;
  void**local_70;
  char local_68;
  void**local_60;
  uint64_t local_58;
  int local_50;
  char local_48;
  uint7 uStack_47;
  byte local_39;
  void**local_38;
  
  if (param_2 == 0) {
LAB_01b528db:
    uVar8 = CONCAT71((int7)((uint64_t)param_1 >> 8),1);
  }
  else {
    pppuVar10 = &local_70;
    FUN_01ceb020();
    ppuVar12 = local_70;
    if ((g_02737920 == '\0') && (iVar9 = ___cxa_guard_acquire(), iVar9 != 0)) {
      g_027e2e88 = FUN_00d4fe50();
      g_027e2e70 = "MUScaleBrowserItem";
      g_027e2e78 = 0x20;
      g_027e2e80 = FUN_00841ad0;
      g_027e2e90 = 0;
      ram_00000000027e2e98 = 0;
      g_027e2ea0 = 0;
      ram_00000000027e2ea8 = 0;
      g_027e2eb0 = 0;
      ram_00000000027e2eb8 = 0;
      g_027e2ec0 = 0;
      ram_00000000027e2ec8 = 0;
      g_027e2ed0 = 0;
      ram_00000000027e2ed8 = 0;
      g_027e2ee0 = 0;
      ram_00000000027e2ee8 = 0;
      g_027e2ef0 = 0;
      ram_00000000027e2ef8 = 0;
      g_027e2f00 = 0;
      ram_00000000027e2f08 = 0;
      g_027e2f10 = 0;
      ram_00000000027e2f18 = 0;
      g_027e2f20 = 0;
      ram_00000000027e2f28 = 0;
      g_027e2f30 = 0;
      ___cxa_guard_release();
    }
    if (ppuVar12 == (void**)0x0) {
LAB_01b51e06:
      pppuVar10 = (void***)&g_02802688;
    }
    else {
      (*(*ppuVar12)[0x6c])();
      cVar4 = FUN_00e85ea0();
      if (cVar4 == '\0') goto LAB_01b51e06;
    }
    ppuVar12 = *pppuVar10;
    if (*(char *)(pppuVar10 + 1) == '\0') {
      if (ppuVar12 != (void**)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      *(void*)(pppuVar10 + 1) = 0;
    }
    if ((local_68 != '\0') && (local_70 != (void**)0x0)) {
      FUN_00d50b20();
    }
    uVar14 = (uint7)((uint64_t)unaff_R13 >> 8);
    local_88 = ppuVar12;
    if ((ppuVar12 == (void**)0x0) ||
       (FUN_01aa3f90(), ppuVar12 = local_70, local_70 == (void**)0x0)) {
      FUN_017bf2e0();
      ppuVar12 = local_70;
      if (local_70 == (void**)0x0) {
        ppuVar12 = (void**)0x0;
        cVar4 = '\0';
        uVar14 = 0;
      }
      else {
        cVar4 = '\x01';
        if (((local_68 == '\0') && (FUN_00d50b00(), local_68 != '\0')) &&
           (local_70 != (void**)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    else {
      if (((local_68 == '\0') && (FUN_00d50b00(), local_68 != '\0')) &&
         (local_70 != (void**)0x0)) {
        FUN_00d50b20();
      }
      cVar4 = '\x01';
    }
    cVar5 = FUN_01ab2450();
    if (cVar5 == '\0') {
      local_1a8 = '\0';
      local_1b0 = ppuVar12;
      FUN_01ab2a40(extraout_XMM0_Da,&local_1b0);
      ppuVar11 = local_70;
      uVar16 = (uint7)((uint64_t)unaff_R14 >> 8);
      if (local_70 == ppuVar12) {
        ppuVar11 = ppuVar12;
        if ((cVar4 == '\0') && (ppuVar12 != (void**)0x0)) {
          if (local_68 != '\0') goto LAB_01b51f75;
          FUN_00d50b00();
          cVar5 = '\x01';
        }
        else {
          uVar16 = uVar14 & 0xffffff;
          cVar5 = cVar4;
        }
LAB_01b51fca:
        ppuVar12 = ppuVar11;
        cVar4 = cVar5;
        if (local_68 == '\0') {
          uVar14 = uVar16 & 0xffffff;
        }
        else if (local_70 == (void**)0x0) {
          uVar14 = uVar16 & 0xffffff;
        }
        else {
          FUN_00d50b20();
          uVar14 = uVar16 & 0xffffff;
        }
      }
      else {
        if (local_68 == '\0') {
          if (local_70 != (void**)0x0) {
            FUN_00d50b00();
          }
          cVar5 = '\x01';
          if ((cVar4 != '\0') && (ppuVar12 != (void**)0x0)) {
            FUN_00d50b20();
          }
          goto LAB_01b51fca;
        }
        if ((cVar4 != '\0') && (ppuVar12 != (void**)0x0)) {
          FUN_00d50b20();
        }
LAB_01b51f75:
        local_68 = '\0';
        ppuVar12 = ppuVar11;
        cVar4 = '\x01';
      }
      if ((local_1a8 != '\0') && (local_1b0 != (void**)0x0)) {
        FUN_00d50b20();
      }
    }
    uVar17 = (**(code **)(**(int64_t **)(this_ptr + 0xa8) + 0x970))();
    ppuVar11 = local_70;
    if ((((local_68 == '\0') && (local_70 != (void**)0x0)) &&
        (uVar17 = FUN_00d50b00(), local_68 != '\0')) && (local_70 != (void**)0x0)) {
      uVar17 = FUN_00d50b20();
    }
    local_1a0 = ppuVar11;
    local_198 = '\0';
    local_b8 = ppuVar11;
    (*(*ppuVar12)[0x80])(uVar17,&local_1a0);
    local_80 = local_70;
    if (local_68 == '\0') {
      if (((local_70 != (void**)0x0) && (FUN_00d50b00(), local_68 != '\0')) &&
         (local_70 != (void**)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_68 = '\0';
    }
    if ((local_198 != '\0') && (local_1a0 != (void**)0x0)) {
      FUN_00d50b20();
    }
    lVar7 = g_027e47e0;
    if (g_027e47e0 != 0) {
      FUN_00d50b00();
    }
    lVar2 = g_027e47e8;
    local_190 = lVar7;
    local_188 = '\x01';
    if (g_027e47e8 != 0) {
      FUN_00d50b00();
    }
    local_180 = lVar2;
    local_178 = '\x01';
    local_170 = 0;
    local_168 = '\0';
    uVar17 = FUN_00d31230(&local_170,&local_180);
    local_e8 = local_a0;
    local_e0 = 0;
    if (local_98 == '\0') {
      if (local_a0 != (int64_t *)0x0) {
        uVar17 = FUN_00d50b00();
      }
    }
    else {
      local_98 = '\0';
    }
    local_e0 = '\x01';
    (*(*ppuVar12)[0x80])(uVar17,&local_e8);
    ppuVar11 = local_70;
    if (local_68 == '\0') {
      if (((local_70 != (void**)0x0) && (FUN_00d50b00(), local_68 != '\0')) &&
         (local_70 != (void**)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_68 = '\0';
    }
    if ((local_e0 != '\0') && (local_e8 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_98 != '\0') && (local_a0 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_168 != '\0') && (local_170 != 0)) {
      FUN_00d50b20();
    }
    if ((local_178 != '\0') && (local_180 != 0)) {
      FUN_00d50b20();
    }
    if ((local_188 != '\0') && (local_190 != 0)) {
      FUN_00d50b20();
    }
    local_90 = ppuVar11;
    cVar5 = (*(*ppuVar11)[0x74])();
    if (cVar5 != '\0') {
      local_160 = local_80;
      local_158 = '\0';
      cVar5 = (*(*local_90)[10])();
      if ((local_158 != '\0') && (local_160 != (void**)0x0)) {
        FUN_00d50b20();
      }
      if (cVar5 == '\0') {
        local_150 = local_80;
        local_148 = '\0';
        local_48 = cVar4;
        uStack_47 = uVar14;
        (*(*local_90)[0x87])();
        if ((local_148 != '\0') && (local_150 != (void**)0x0)) {
          FUN_00d50b20();
        }
        local_138 = '\0';
        local_140 = 0;
        (**(code **)(**(int64_t **)(this_ptr + 0xa8) + 0xa20))();
        if ((local_138 != '\0') && (local_140 != 0)) {
          FUN_00d50b20();
        }
        uVar17 = (**(code **)(**(int64_t **)(this_ptr + 0xa8) + 0x478))();
        if (*(int64_t *)(this_ptr + 0xa8) != 0) {
          *(void*)(this_ptr + 0xa8) = 0;
          uVar17 = FUN_00d50b20();
        }
        if (local_88 == (void**)0x0) {
          iVar9 = 0;
        }
        else {
          uVar17 = FUN_01ce9490();
          iVar9 = *(int *)((int64_t)local_70 + 0xc);
          if (local_68 != '\0') {
            uVar17 = FUN_00d50b20();
          }
        }
        FUN_01cecec0(uVar17,iVar9);
        local_a8 = local_70;
        if ((((local_68 == '\0') && (local_70 != (void**)0x0)) &&
            (FUN_00d50b00(), local_68 != '\0')) && (local_70 != (void**)0x0)) {
          FUN_00d50b20();
        }
        FUN_01ce6530();
        if (iVar9 < 1) {
          local_b0 = (void*)0x0;
        }
        else {
          puVar6 = (void*)FUN_00e8fc40();
          FUN_00d4ff40();
          *puVar6 = &g_02641258;
          *(void*)((int64_t)puVar6 + 0xc) = 0;
          puVar6[2] = 0;
          puVar6[3] = 0;
          (*g_02641270)();
          local_b0 = puVar6;
          (*(*local_80)[0x7e])();
          local_d8 = local_70;
          local_d0 = 0;
          if (local_68 == '\0') {
            if (local_70 != (void**)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_68 = '\0';
          }
          local_d0 = '\x01';
          FUN_01aa3fc0();
          if ((local_d0 != '\0') && (local_d8 != (void**)0x0)) {
            FUN_00d50b20();
          }
          if ((local_68 != '\0') && (local_70 != (void**)0x0)) {
            FUN_00d50b20();
          }
        }
        local_39 = iVar9 < 1;
        plVar1 = *(int64_t **)(this_ptr + 0x80);
        local_f0 = 0;
        lVar7 = *(int64_t *)(this_ptr + 0x78);
        if (lVar7 != 0) {
          FUN_00d50b00();
        }
        ppuVar15 = local_80;
        ppuVar13 = local_88;
        local_f0 = '\x01';
        local_130 = local_b0;
        local_128 = '\0';
        param_1 = &local_130;
        local_f8 = lVar7;
        (**(code **)(*plVar1 + 0x5c8))(param_1);
        ppuVar3 = local_70;
        ppuVar11 = local_b8;
        if (local_68 == '\0') {
          if (((local_70 != (void**)0x0) && (FUN_00d50b00(), local_68 != '\0')) &&
             (local_70 != (void**)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_68 = '\0';
        }
        if ((local_128 != '\0') && (local_130 != (void*)0x0)) {
          FUN_00d50b20();
        }
        if ((local_f0 != '\0') && (local_f8 != 0)) {
          FUN_00d50b20();
        }
        if (ppuVar3 != (void**)0x0) {
          local_68 = '\0';
          local_70 = (void**)0x0;
          local_100 = ppuVar3;
          local_60 = ppuVar3;
          local_58 = 0xffffffff;
          local_50 = 0;
          local_38 = ppuVar12;
          while( true ) {
            lVar7 = (int64_t)(int)local_58;
            iVar9 = (int)local_58 + 1;
            local_58 = CONCAT44(local_58._4_4_,iVar9);
            if (*(int *)((int64_t)local_60 + 0xc) <= iVar9) break;
            param_1 = (void**)local_60[2];
            local_70 = (void**)param_1[lVar7 + 1];
            FUN_01aa3f10();
            plVar1 = local_a0;
            (*(*local_80)[0x71])();
            local_c8 = local_110;
            local_c0 = 0;
            if (local_108 == '\0') {
              if (local_110 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_108 = '\0';
            }
            local_c0 = '\x01';
            cVar4 = (**(code **)(*plVar1 + 0x50))();
            if ((local_c0 != '\0') && (local_c8 != 0)) {
              FUN_00d50b20();
            }
            if ((local_108 != '\0') && (local_110 != 0)) {
              FUN_00d50b20();
            }
            if ((local_98 != '\0') && (local_a0 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if (cVar4 != '\0') {
              iVar9 = local_50 + (int)local_58;
              goto LAB_01b527dc;
            }
            if (local_58._4_4_ != 0) {
              if (local_58._4_4_ < 1) {
                iVar9 = -local_58._4_4_;
              }
              else {
                local_58 = CONCAT44(local_58._4_4_,(int)local_58 - local_58._4_4_);
                FUN_00d23690();
                local_50 = local_50 + local_58._4_4_;
                iVar9 = 0;
              }
              local_58 = CONCAT44(iVar9,(int)local_58);
            }
          }
          iVar9 = -1;
          param_1 = local_60;
LAB_01b527dc:
          FUN_01b53440();
          ppuVar12 = local_38;
          ppuVar15 = local_80;
          ppuVar13 = local_88;
          ppuVar11 = local_a8;
          if (-1 < iVar9) {
            FUN_01dd3d10();
            local_120 = ppuVar11;
            local_118 = '\0';
            (**(code **)(**(int64_t **)(this_ptr + 0x78) + 0x950))();
            if ((local_118 != '\0') && (local_120 != (void**)0x0)) {
              FUN_00d50b20();
            }
          }
          FUN_00d50b20();
          ppuVar11 = local_b8;
        }
        local_39 = local_39 | local_b0 == (void*)0x0;
        if (local_39 == 0) {
          FUN_00d50b20();
        }
        if (local_a8 != (void**)0x0) {
          FUN_00d50b20();
        }
        if (local_90 != (void**)0x0) {
          FUN_00d50b20();
        }
        if (ppuVar15 != (void**)0x0) {
          FUN_00d50b20();
        }
        if (ppuVar11 != (void**)0x0) {
          FUN_00d50b20();
        }
        if (ppuVar13 != (void**)0x0) {
          FUN_00d50b20();
        }
        if ((local_48 != '\0') && (ppuVar12 != (void**)0x0)) {
          FUN_00d50b20();
          uVar8 = CONCAT71((int7)((uint64_t)param_1 >> 8),1);
          goto LAB_01b528dd;
        }
        goto LAB_01b528db;
      }
    }
    FUN_00d50b20();
    ppuVar11 = local_88;
    ppuVar12 = local_b8;
    if (local_80 != (void**)0x0) {
      FUN_00d50b20();
    }
    if (ppuVar12 != (void**)0x0) {
      FUN_00d50b20();
    }
    if (ppuVar11 != (void**)0x0) {
      FUN_00d50b20();
    }
    if (cVar4 != '\0') {
      FUN_00d50b20();
    }
    uVar8 = 0;
  }
LAB_01b528dd:
  return uVar8 & 0xffffffff;
}

