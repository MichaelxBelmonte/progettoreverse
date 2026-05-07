// Function: FUN_01f938b0
// Address: 01f938b0
// Size: 3062 bytes
// Class: GNFilePath
// String references:
//   "GNFilePath"

void FUN_01f938b0(uint64_t param_1,int64_t *param_2)

{
  int64_t *plVar1;
  char cVar2;
  void*puVar3;
  int64_t lVar4;
  int64_t **pplVar5;
  int iVar6;
  int64_t *arg1;
  int64_t *plVar7;
  int64_t *plVar8;
  uint32_t uVar9;
  int64_t local_190;
  char local_188;
  void*local_180;
  char local_178;
  int64_t *local_170;
  char local_168;
  int64_t local_160;
  char local_158;
  int64_t local_150;
  char local_148;
  void*local_140;
  char local_138;
  int64_t local_130;
  char local_128;
  int64_t *local_120;
  char local_118;
  int64_t local_110;
  char local_108;
  int64_t local_100;
  char local_f8;
  int64_t *local_f0;
  void*local_e8;
  code *local_e0;
  int64_t *local_d8;
  int64_t *local_d0;
  char local_c8;
  int64_t *local_c0;
  char local_b8;
  int64_t *local_b0;
  char local_a8;
  int64_t *local_a0;
  char local_98;
  void*local_90;
  void*local_88;
  void*local_80;
  void*local_78;
  int64_t *local_70;
  char local_68;
  void*local_60;
  uint64_t local_58;
  int local_50;
  void*local_48;
  int64_t *local_40;
  char local_38;
  
  if (*arg1 != 0) {
    local_d8 = param_2;
    puVar3 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    local_e8 = &g_02572358;
    *puVar3 = &g_02572358;
    local_e0 = g_02572370;
    local_80 = puVar3;
    (*g_02572370)();
    puVar3 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar3 = local_e8;
    (*local_e0)();
    local_90 = puVar3;
    if ((void*)*arg1 != (void*)0x0) {
      local_68 = '\0';
      local_70 = (int64_t *)0x0;
      local_58 = 0xffffffff;
      local_50 = 0;
      local_58._4_4_ = 0;
      local_60 = (void*)*arg1;
      while( true ) {
        if (local_58._4_4_ != 0) {
          if (local_58._4_4_ < 1) {
            iVar6 = -local_58._4_4_;
          }
          else {
            iVar6 = (int)local_58 - local_58._4_4_;
            local_58 = CONCAT44(local_58._4_4_,iVar6);
            FUN_00d23690();
            local_50 = local_50 + local_58._4_4_;
            iVar6 = 0;
          }
          local_58 = CONCAT44(iVar6,(int)local_58);
        }
        lVar4 = (int64_t)(int)local_58;
        iVar6 = (int)local_58 + 1;
        local_58 = CONCAT44(local_58._4_4_,iVar6);
        if (*(int *)((int64_t)local_60 + 0xc) <= iVar6) break;
        plVar7 = *(int64_t **)(local_60[2] + 8 + lVar4 * 8);
        local_70 = plVar7;
        FUN_00276fd0();
        pplVar5 = (int64_t **)&g_02802688;
        if (plVar7 != (int64_t *)0x0) {
          (**(code **)(*plVar7 + 0x360))();
          cVar2 = FUN_00e85ea0();
          pplVar5 = &local_70;
          if (cVar2 == '\0') {
            pplVar5 = (int64_t **)&g_02802688;
          }
        }
        plVar7 = local_70;
        if (*pplVar5 == (int64_t *)0x0) {
          if ((g_026fde10 == '\0') && (iVar6 = ___cxa_guard_acquire(), iVar6 != 0)) {
            g_026d1818 = FUN_00d4fe50();
            g_026d1800 = "GNFilePath";
            g_026d1808 = 0x40;
            g_026d1810 = FUN_00041050;
            g_026d1820 = 0;
            ram_00000000026d1828 = 0;
            g_026d1830 = 0;
            ram_00000000026d1838 = 0;
            g_026d1840 = 0;
            ram_00000000026d1848 = 0;
            g_026d1850 = 0;
            ram_00000000026d1858 = 0;
            g_026d1860 = 0;
            ram_00000000026d1868 = 0;
            g_026d1870 = 0;
            ram_00000000026d1878 = 0;
            g_026d1880 = 0;
            ram_00000000026d1888 = 0;
            g_026d1890 = 0;
            ram_00000000026d1898 = 0;
            g_026d18a0 = 0;
            ram_00000000026d18a8 = 0;
            g_026d18b0 = 0;
            ram_00000000026d18b8 = 0;
            g_026d18c0 = 0;
            ___cxa_guard_release();
          }
          pplVar5 = (int64_t **)&g_02802688;
          if (plVar7 != (int64_t *)0x0) {
            (**(code **)(*plVar7 + 0x360))();
            cVar2 = FUN_00e85ea0();
            pplVar5 = &local_70;
            if (cVar2 == '\0') {
              pplVar5 = (int64_t **)&g_02802688;
            }
          }
          if (*pplVar5 != (int64_t *)0x0) {
            local_40 = local_70;
            local_38 = '\0';
            FUN_00d21140();
            if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
        }
        else {
          local_40 = local_70;
          local_38 = '\0';
          FUN_00d21140();
          if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
      }
      FUN_00083b20();
    }
    puVar3 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar3 = local_e8;
    (*local_e0)();
    local_88 = puVar3;
    puVar3 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar3 = local_e8;
    uVar9 = (*local_e0)();
    local_48 = puVar3;
    if (local_90 != (void*)0x0) {
      local_68 = '\0';
      local_70 = (int64_t *)0x0;
      local_60 = local_90;
      local_58 = 0xffffffff;
      local_50 = 0;
      local_58._4_4_ = 0;
      while( true ) {
        if (local_58._4_4_ != 0) {
          if (local_58._4_4_ < 1) {
            iVar6 = -local_58._4_4_;
          }
          else {
            iVar6 = (int)local_58 - local_58._4_4_;
            local_58 = CONCAT44(local_58._4_4_,iVar6);
            FUN_00d23690();
            local_50 = local_50 + local_58._4_4_;
            iVar6 = 0;
          }
          local_58 = CONCAT44(iVar6,(int)local_58);
        }
        lVar4 = (int64_t)(int)local_58;
        iVar6 = (int)local_58 + 1;
        local_58 = CONCAT44(local_58._4_4_,iVar6);
        if (*(int *)((int64_t)local_60 + 0xc) <= iVar6) break;
        local_70 = *(int64_t **)(local_60[2] + 8 + lVar4 * 8);
        FUN_00d21140();
        puVar3 = (void*)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar3 = local_e8;
        (*local_e0)();
        local_78 = puVar3;
        (**(code **)(*local_70 + 0x368))();
        plVar7 = local_40;
        local_c8 = 0;
        if (local_38 == '\0') {
          if (local_40 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        local_c8 = '\x01';
        local_d0 = plVar7;
        FUN_00d21140();
        if ((local_c8 != '\0') && (local_d0 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        FUN_00cd64a0();
        plVar7 = local_40;
        if ((((local_38 == '\0') && (local_40 != (int64_t *)0x0)) &&
            (FUN_00d50b00(), local_38 != '\0')) && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        do {
          FUN_00cd0b60();
          plVar8 = local_40;
          if (local_38 == '\0') {
            if (local_40 == (int64_t *)0x0) {
              local_f0 = (int64_t *)0x0;
              plVar8 = (int64_t *)0x0;
            }
            else {
              FUN_00d50b00();
              local_f0 = plVar8;
              if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
            }
          }
          else {
            local_f0 = local_40;
          }
          FUN_00276fd0();
          pplVar5 = (int64_t **)&g_02802688;
          if (plVar8 != (int64_t *)0x0) {
            (**(code **)(*plVar8 + 0x360))();
            cVar2 = FUN_00e85ea0();
            pplVar5 = &local_f0;
            if (cVar2 == '\0') {
              pplVar5 = (int64_t **)&g_02802688;
            }
          }
          plVar1 = *pplVar5;
          if (plVar1 == (int64_t *)0x0) {
            (**(code **)(*plVar8 + 0x368))();
            plVar8 = local_40;
            local_a8 = 0;
            if (local_38 == '\0') {
              if (local_40 != (int64_t *)0x0) {
                FUN_00d50b00();
              }
            }
            else {
              local_38 = '\0';
            }
            local_a8 = '\x01';
            local_b0 = plVar8;
            FUN_00d21140();
            if ((local_a8 != '\0') && (local_b0 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            FUN_00d21140();
            plVar8 = plVar7;
          }
          else {
            (**(code **)(*plVar8 + 0x368))();
            plVar8 = local_40;
            local_b8 = 0;
            if (local_38 == '\0') {
              if (local_40 != (int64_t *)0x0) {
                FUN_00d50b00();
              }
            }
            else {
              local_38 = '\0';
            }
            local_b8 = '\x01';
            local_c0 = plVar8;
            FUN_00d21140();
            if ((local_b8 != '\0') && (local_c0 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            FUN_00cd64a0();
            plVar8 = local_40;
            if (local_40 == plVar7) {
LAB_01f93fae:
              plVar8 = plVar7;
              if (local_38 != '\0') {
LAB_01f93fb8:
                if (local_40 != (int64_t *)0x0) {
                  FUN_00d50b20();
                }
              }
            }
            else {
              if (local_38 == '\0') {
                if (local_40 != (int64_t *)0x0) {
                  FUN_00d50b00();
                }
                if (plVar7 != (int64_t *)0x0) {
                  FUN_00d50b20();
                  plVar7 = plVar8;
                  goto LAB_01f93fae;
                }
                if (local_38 == '\0') goto LAB_01f94080;
                goto LAB_01f93fb8;
              }
              if (plVar7 != (int64_t *)0x0) {
                FUN_00d50b20();
              }
            }
          }
LAB_01f94080:
          FUN_00d50b20();
          plVar7 = plVar8;
        } while (plVar1 != (int64_t *)0x0);
        if (plVar8 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        if (local_78 != (void*)0x0) {
          FUN_00d50b20();
        }
      }
      uVar9 = FUN_01f96670();
    }
    lVar4 = g_02801458;
    if (*(int *)((int64_t)local_88 + 0xc) != 0) {
      if (g_02801458 != 0) {
        uVar9 = FUN_00d50b00();
      }
      local_190 = lVar4;
      local_188 = '\x01';
      uVar9 = FUN_01caa390(uVar9,&local_190);
      if ((local_188 != '\0') && (local_190 != 0)) {
        uVar9 = FUN_00d50b20();
      }
    }
    if (*(int *)((int64_t)local_48 + 0xc) != 0) {
      local_180 = local_48;
      local_178 = '\0';
      FUN_002edd50();
      plVar7 = local_70;
      if (local_68 == '\0') {
        if (((local_70 != (int64_t *)0x0) && (FUN_00d50b00(), local_68 != '\0')) &&
           (local_70 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_68 = '\0';
      }
      if ((local_178 != '\0') && (local_180 != (void*)0x0)) {
        FUN_00d50b20();
      }
      lVar4 = g_02801460;
      local_170 = plVar7;
      local_168 = '\0';
      local_160 = *local_d8;
      local_158 = '\0';
      if (g_02801460 != 0) {
        FUN_00d50b00();
      }
      local_150 = lVar4;
      local_148 = '\x01';
      uVar9 = FUN_01f13fd0(&local_150,&local_160);
      if ((local_148 != '\0') && (local_150 != 0)) {
        uVar9 = FUN_00d50b20();
      }
      if ((local_158 != '\0') && (local_160 != 0)) {
        uVar9 = FUN_00d50b20();
      }
      if ((local_168 != '\0') && (local_170 != (int64_t *)0x0)) {
        uVar9 = FUN_00d50b20();
      }
      if (plVar7 != (int64_t *)0x0) {
        uVar9 = FUN_00d50b20();
      }
    }
    lVar4 = g_026fcec0;
    if (*(int *)((int64_t)local_80 + 0xc) != 0) {
      local_140 = local_80;
      local_138 = '\0';
      if (g_026fcec0 != 0) {
        uVar9 = FUN_00d50b00();
      }
      local_130 = lVar4;
      local_128 = '\x01';
      FUN_01cac7f0(uVar9,&local_130);
      if ((local_128 != '\0') && (local_130 != 0)) {
        FUN_00d50b20();
      }
      if ((local_138 != '\0') && (local_140 != (void*)0x0)) {
        FUN_00d50b20();
      }
    }
    FUN_01f93720();
    local_a0 = local_40;
    local_98 = 0;
    if (local_38 == '\0') {
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_98 = '\x01';
    FUN_002edd50();
    plVar7 = local_70;
    if (local_68 == '\0') {
      if (((local_70 != (int64_t *)0x0) && (FUN_00d50b00(), local_68 != '\0')) &&
         (local_70 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_68 = '\0';
    }
    if ((local_98 != '\0') && (local_a0 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    lVar4 = g_027e92b0;
    local_110 = *local_d8;
    local_120 = plVar7;
    local_118 = '\0';
    local_108 = '\0';
    if (g_027e92b0 != 0) {
      FUN_00d50b00();
    }
    local_100 = lVar4;
    local_f8 = '\x01';
    FUN_01f13fd0(&local_100,&local_110);
    if ((local_f8 != '\0') && (local_100 != 0)) {
      FUN_00d50b20();
    }
    if ((local_108 != '\0') && (local_110 != 0)) {
      FUN_00d50b20();
    }
    if ((local_118 != '\0') && (local_120 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar7 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
    FUN_00d50b20();
    if (local_90 != (void*)0x0) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  return;
}

