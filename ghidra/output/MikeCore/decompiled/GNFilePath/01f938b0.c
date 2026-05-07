// Function: FUN_01f938b0
// Address: 01f938b0
// Size: 3062 bytes
// Class: GNFilePath
// String references:
//   "GNFilePath"


/* WARNING: Removing unreachable block (ram,0x01f94066) */
/* WARNING: Removing unreachable block (ram,0x01f94072) */
/* WARNING: Removing unreachable block (ram,0x01f93ca0) */
/* WARNING: Removing unreachable block (ram,0x01f93cac) */
/* WARNING: Removing unreachable block (ram,0x01f94143) */
/* WARNING: Removing unreachable block (ram,0x01f9414f) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f938b0(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  char cVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong **pplVar5;
  int iVar6;
  longlong *unaff_RSI;
  longlong *plVar7;
  longlong *plVar8;
  undefined4 uVar9;
  longlong local_190;
  char local_188;
  undefined8 *local_180;
  char local_178;
  longlong *local_170;
  char local_168;
  longlong local_160;
  char local_158;
  longlong local_150;
  char local_148;
  undefined8 *local_140;
  char local_138;
  longlong local_130;
  char local_128;
  longlong *local_120;
  char local_118;
  longlong local_110;
  char local_108;
  longlong local_100;
  char local_f8;
  longlong *local_f0;
  undefined *local_e8;
  code *local_e0;
  longlong *local_d8;
  longlong *local_d0;
  char local_c8;
  longlong *local_c0;
  char local_b8;
  longlong *local_b0;
  char local_a8;
  longlong *local_a0;
  char local_98;
  undefined8 *local_90;
  undefined8 *local_88;
  undefined8 *local_80;
  undefined8 *local_78;
  longlong *local_70;
  char local_68;
  undefined8 *local_60;
  undefined8 local_58;
  int local_50;
  undefined8 *local_48;
  longlong *local_40;
  char local_38;
  
  if (*unaff_RSI != 0) {
    local_d8 = param_2;
    puVar3 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    local_e8 = &DAT_02572358;
    *puVar3 = &DAT_02572358;
    local_e0 = DAT_02572370;
    local_80 = puVar3;
    (*DAT_02572370)();
    puVar3 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar3 = local_e8;
    (*local_e0)();
    local_90 = puVar3;
    if ((undefined8 *)*unaff_RSI != (undefined8 *)0x0) {
      local_68 = '\0';
      local_70 = (longlong *)0x0;
      local_58 = 0xffffffff;
      local_50 = 0;
      local_58._4_4_ = 0;
      local_60 = (undefined8 *)*unaff_RSI;
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
        lVar4 = (longlong)(int)local_58;
        iVar6 = (int)local_58 + 1;
        local_58 = CONCAT44(local_58._4_4_,iVar6);
        if (*(int *)((longlong)local_60 + 0xc) <= iVar6) break;
        plVar7 = *(longlong **)(local_60[2] + 8 + lVar4 * 8);
        local_70 = plVar7;
        FUN_00276fd0();
        pplVar5 = (longlong **)&DAT_02802688;
        if (plVar7 != (longlong *)0x0) {
          (**(code **)(*plVar7 + 0x360))();
          cVar2 = FUN_00e85ea0();
          pplVar5 = &local_70;
          if (cVar2 == '\0') {
            pplVar5 = (longlong **)&DAT_02802688;
          }
        }
        plVar7 = local_70;
        if (*pplVar5 == (longlong *)0x0) {
          if ((DAT_026fde10 == '\0') && (iVar6 = ___cxa_guard_acquire(), iVar6 != 0)) {
            _DAT_026d1818 = FUN_00d4fe50();
            DAT_026d1800 = "GNFilePath";
            _DAT_026d1808 = 0x40;
            _DAT_026d1810 = FUN_00041050;
            _DAT_026d1820 = 0;
            uRam00000000026d1828 = 0;
            _DAT_026d1830 = 0;
            uRam00000000026d1838 = 0;
            _DAT_026d1840 = 0;
            uRam00000000026d1848 = 0;
            _DAT_026d1850 = 0;
            uRam00000000026d1858 = 0;
            _DAT_026d1860 = 0;
            uRam00000000026d1868 = 0;
            _DAT_026d1870 = 0;
            uRam00000000026d1878 = 0;
            _DAT_026d1880 = 0;
            uRam00000000026d1888 = 0;
            _DAT_026d1890 = 0;
            uRam00000000026d1898 = 0;
            _DAT_026d18a0 = 0;
            uRam00000000026d18a8 = 0;
            _DAT_026d18b0 = 0;
            uRam00000000026d18b8 = 0;
            _DAT_026d18c0 = 0;
            ___cxa_guard_release();
          }
          pplVar5 = (longlong **)&DAT_02802688;
          if (plVar7 != (longlong *)0x0) {
            (**(code **)(*plVar7 + 0x360))();
            cVar2 = FUN_00e85ea0();
            pplVar5 = &local_70;
            if (cVar2 == '\0') {
              pplVar5 = (longlong **)&DAT_02802688;
            }
          }
          if (*pplVar5 != (longlong *)0x0) {
            local_40 = local_70;
            local_38 = '\0';
            FUN_00d21140();
            if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
        }
        else {
          local_40 = local_70;
          local_38 = '\0';
          FUN_00d21140();
          if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
      }
      FUN_00083b20();
    }
    puVar3 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar3 = local_e8;
    (*local_e0)();
    local_88 = puVar3;
    puVar3 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar3 = local_e8;
    uVar9 = (*local_e0)();
    local_48 = puVar3;
    if (local_90 != (undefined8 *)0x0) {
      local_68 = '\0';
      local_70 = (longlong *)0x0;
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
        lVar4 = (longlong)(int)local_58;
        iVar6 = (int)local_58 + 1;
        local_58 = CONCAT44(local_58._4_4_,iVar6);
        if (*(int *)((longlong)local_60 + 0xc) <= iVar6) break;
        local_70 = *(longlong **)(local_60[2] + 8 + lVar4 * 8);
        FUN_00d21140();
        puVar3 = (undefined8 *)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar3 = local_e8;
        (*local_e0)();
        local_78 = puVar3;
        (**(code **)(*local_70 + 0x368))();
        plVar7 = local_40;
        local_c8 = 0;
        if (local_38 == '\0') {
          if (local_40 != (longlong *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        local_c8 = '\x01';
        local_d0 = plVar7;
        FUN_00d21140();
        if ((local_c8 != '\0') && (local_d0 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        FUN_00cd64a0();
        plVar7 = local_40;
        if ((((local_38 == '\0') && (local_40 != (longlong *)0x0)) &&
            (FUN_00d50b00(), local_38 != '\0')) && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        do {
          FUN_00cd0b60();
          plVar8 = local_40;
          if (local_38 == '\0') {
            if (local_40 == (longlong *)0x0) {
              local_f0 = (longlong *)0x0;
              plVar8 = (longlong *)0x0;
            }
            else {
              FUN_00d50b00();
              local_f0 = plVar8;
              if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
            }
          }
          else {
            local_f0 = local_40;
          }
          FUN_00276fd0();
          pplVar5 = (longlong **)&DAT_02802688;
          if (plVar8 != (longlong *)0x0) {
            (**(code **)(*plVar8 + 0x360))();
            cVar2 = FUN_00e85ea0();
            pplVar5 = &local_f0;
            if (cVar2 == '\0') {
              pplVar5 = (longlong **)&DAT_02802688;
            }
          }
          plVar1 = *pplVar5;
          if (plVar1 == (longlong *)0x0) {
            (**(code **)(*plVar8 + 0x368))();
            plVar8 = local_40;
            local_a8 = 0;
            if (local_38 == '\0') {
              if (local_40 != (longlong *)0x0) {
                FUN_00d50b00();
              }
            }
            else {
              local_38 = '\0';
            }
            local_a8 = '\x01';
            local_b0 = plVar8;
            FUN_00d21140();
            if ((local_a8 != '\0') && (local_b0 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
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
              if (local_40 != (longlong *)0x0) {
                FUN_00d50b00();
              }
            }
            else {
              local_38 = '\0';
            }
            local_b8 = '\x01';
            local_c0 = plVar8;
            FUN_00d21140();
            if ((local_b8 != '\0') && (local_c0 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            FUN_00cd64a0();
            plVar8 = local_40;
            if (local_40 == plVar7) {
LAB_01f93fae:
              plVar8 = plVar7;
              if (local_38 != '\0') {
LAB_01f93fb8:
                if (local_40 != (longlong *)0x0) {
                  FUN_00d50b20();
                }
              }
            }
            else {
              if (local_38 == '\0') {
                if (local_40 != (longlong *)0x0) {
                  FUN_00d50b00();
                }
                if (plVar7 != (longlong *)0x0) {
                  FUN_00d50b20();
                  plVar7 = plVar8;
                  goto LAB_01f93fae;
                }
                if (local_38 == '\0') goto LAB_01f94080;
                goto LAB_01f93fb8;
              }
              if (plVar7 != (longlong *)0x0) {
                FUN_00d50b20();
              }
            }
          }
LAB_01f94080:
          FUN_00d50b20();
          plVar7 = plVar8;
        } while (plVar1 != (longlong *)0x0);
        if (plVar8 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        if (local_78 != (undefined8 *)0x0) {
          FUN_00d50b20();
        }
      }
      uVar9 = FUN_01f96670();
    }
    lVar4 = DAT_02801458;
    if (*(int *)((longlong)local_88 + 0xc) != 0) {
      if (DAT_02801458 != 0) {
        uVar9 = FUN_00d50b00();
      }
      local_190 = lVar4;
      local_188 = '\x01';
      uVar9 = FUN_01caa390(uVar9,&local_190);
      if ((local_188 != '\0') && (local_190 != 0)) {
        uVar9 = FUN_00d50b20();
      }
    }
    if (*(int *)((longlong)local_48 + 0xc) != 0) {
      local_180 = local_48;
      local_178 = '\0';
      FUN_002edd50();
      plVar7 = local_70;
      if (local_68 == '\0') {
        if (((local_70 != (longlong *)0x0) && (FUN_00d50b00(), local_68 != '\0')) &&
           (local_70 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_68 = '\0';
      }
      if ((local_178 != '\0') && (local_180 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      lVar4 = DAT_02801460;
      local_170 = plVar7;
      local_168 = '\0';
      local_160 = *local_d8;
      local_158 = '\0';
      if (DAT_02801460 != 0) {
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
      if ((local_168 != '\0') && (local_170 != (longlong *)0x0)) {
        uVar9 = FUN_00d50b20();
      }
      if (plVar7 != (longlong *)0x0) {
        uVar9 = FUN_00d50b20();
      }
    }
    lVar4 = DAT_026fcec0;
    if (*(int *)((longlong)local_80 + 0xc) != 0) {
      local_140 = local_80;
      local_138 = '\0';
      if (DAT_026fcec0 != 0) {
        uVar9 = FUN_00d50b00();
      }
      local_130 = lVar4;
      local_128 = '\x01';
      FUN_01cac7f0(uVar9,&local_130);
      if ((local_128 != '\0') && (local_130 != 0)) {
        FUN_00d50b20();
      }
      if ((local_138 != '\0') && (local_140 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
    }
    FUN_01f93720();
    local_a0 = local_40;
    local_98 = 0;
    if (local_38 == '\0') {
      if (local_40 != (longlong *)0x0) {
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
      if (((local_70 != (longlong *)0x0) && (FUN_00d50b00(), local_68 != '\0')) &&
         (local_70 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_68 = '\0';
    }
    if ((local_98 != '\0') && (local_a0 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    lVar4 = DAT_027e92b0;
    local_110 = *local_d8;
    local_120 = plVar7;
    local_118 = '\0';
    local_108 = '\0';
    if (DAT_027e92b0 != 0) {
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
    if ((local_118 != '\0') && (local_120 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar7 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
    FUN_00d50b20();
    if (local_90 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  return;
}


