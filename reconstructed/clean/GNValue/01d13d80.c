// Function: FUN_01d13d80
// Address: 01d13d80
// Size: 3612 bytes
// Class: GNValue

uint64_t FUN_01d13d80(uint64_t param_1)

{
  int64_t *plVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  uint64_t uVar5;
  int iVar6;
  int64_t *arg1;
  int64_t this_ptr;
  int64_t *plVar7;
  int iVar8;
  int64_t lVar9;
  int64_t *plVar10;
  uint64_t unaff_R14;
  undefined7 uVar11;
  int64_t *plVar12;
  int64_t local_278;
  char local_270;
  int64_t local_268;
  char local_260;
  int64_t *local_258;
  char local_250;
  int64_t local_248;
  char local_240;
  int64_t *local_238;
  char local_230;
  int64_t local_228;
  char local_220;
  int64_t local_218;
  char local_210;
  int64_t local_208;
  char local_200;
  int64_t *local_1f8;
  char local_1f0;
  int64_t local_1e8;
  char local_1e0;
  int64_t *local_1d8;
  char local_1d0;
  int64_t local_1c8;
  char local_1c0;
  int64_t local_1b8;
  char local_1b0;
  int64_t *local_1a8;
  char local_1a0;
  int64_t local_198;
  char local_190;
  int64_t local_188;
  char local_180;
  int64_t local_178;
  char local_170;
  int64_t local_168;
  char local_160;
  int64_t *local_158;
  char local_150;
  int64_t local_148;
  char local_140;
  int64_t local_138;
  char local_130;
  int local_124;
  int64_t *local_120;
  char local_118;
  int64_t *local_110;
  char local_108;
  int64_t *local_100;
  char local_f8;
  int64_t *local_f0;
  char local_e8;
  int64_t *local_e0;
  char local_d8;
  int64_t *local_d0;
  char local_c8;
  int64_t *local_c0;
  char local_b8;
  int64_t *local_b0;
  int64_t *local_a8;
  char local_a0;
  int64_t *local_98;
  int64_t *local_90;
  int64_t *local_88;
  char local_80;
  int64_t *local_78;
  int local_70;
  uint64_t local_6c;
  int64_t *local_60;
  int64_t *local_58;
  char local_50;
  uint64_t local_48;
  int64_t *local_40;
  uint local_34;
  
  local_278 = *arg1;
  local_270 = '\0';
  FUN_01ccaae0(param_1,&local_278);
  local_98 = local_88;
  if (local_80 == '\0') {
    if (((local_88 != (int64_t *)0x0) && (FUN_00d50b00(), local_80 != '\0')) &&
       (local_88 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_80 = '\0';
  }
  if ((local_270 != '\0') && (local_278 != 0)) {
    FUN_00d50b20();
  }
  if (local_98 != (int64_t *)0x0) {
    FUN_01d28610();
    if (local_80 == '\0') {
      if (local_88 != (int64_t *)0x0) {
        local_90 = local_88;
        FUN_00d50b00();
        if ((local_80 != '\0') && (local_88 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        goto LAB_01d13e76;
      }
    }
    else {
      local_90 = local_88;
      if (local_88 != (int64_t *)0x0) {
LAB_01d13e76:
        local_268 = *arg1;
        local_260 = '\0';
        FUN_01ccab60();
        local_60 = local_88;
        if (local_80 == '\0') {
          if (((local_88 != (int64_t *)0x0) && (FUN_00d50b00(), local_80 != '\0')) &&
             (local_88 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_80 = '\0';
        }
        if ((local_260 != '\0') && (local_268 != 0)) {
          FUN_00d50b20();
        }
        plVar12 = local_60;
        if (local_60 == (int64_t *)0x0) goto LAB_01d14b61;
        cVar4 = FUN_00d8ca50();
        lVar9 = g_02774da0;
        if (cVar4 == '\0') {
          (**(code **)(*local_98 + 0x3f8))();
          local_a8 = local_58;
          local_a0 = 0;
          if (local_50 == '\0') {
            if (local_58 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_50 = '\0';
          }
          local_a0 = '\x01';
          FUN_00c880c0();
          plVar7 = local_88;
          if (local_80 == '\0') {
            if (((local_88 != (int64_t *)0x0) && (FUN_00d50b00(), local_80 != '\0')) &&
               (local_88 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            local_80 = '\0';
          }
          if ((local_a0 != '\0') && (local_a8 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          uVar11 = (undefined7)(unaff_R14 >> 8);
          unaff_R14 = CONCAT71(uVar11,1);
          plVar12 = local_60;
          if (plVar7 == (int64_t *)0x0) goto LAB_01d14b61;
          local_258 = local_60;
          local_250 = '\0';
          FUN_00c841b0();
          plVar12 = local_88;
          if (local_80 == '\0') {
            if (((local_88 != (int64_t *)0x0) && (FUN_00d50b00(), local_80 != '\0')) &&
               (local_88 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            local_80 = '\0';
          }
          if ((local_250 != '\0') && (local_258 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (plVar12 == (int64_t *)0x0) {
            FUN_00d50b20();
            plVar12 = local_60;
            goto LAB_01d14b61;
          }
          local_118 = 0;
          (**(code **)(*(int64_t *)(this_ptr + 0x50) + 0x10))();
          FUN_00d50b00();
          local_118 = '\x01';
          local_248 = 0;
          local_240 = '\0';
          local_238 = plVar12;
          local_230 = '\0';
          local_120 = (int64_t *)(this_ptr + 0x50);
          FUN_00cbad30(&local_238,&local_248,0x20);
          if ((local_230 != '\0') && (local_238 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_240 != '\0') && (local_248 != 0)) {
            FUN_00d50b20();
          }
          if ((local_118 != '\0') && (local_120 != (int64_t *)0x0)) {
            (**(code **)(*local_120 + 0x10))();
            FUN_00d50b20();
          }
          FUN_00d50b20();
          FUN_00d50b20();
          unaff_R14 = CONCAT71(uVar11,1);
          bVar3 = false;
LAB_01d14b68:
          bVar2 = bVar3;
          FUN_00d50b20();
        }
        else {
          if (g_02774da0 != 0) {
            FUN_00d50b00();
          }
          local_228 = lVar9;
          local_220 = '\x01';
          FUN_00d91000(1,&local_228);
          plVar7 = local_88;
          if (local_80 == '\0') {
            if (((local_88 != (int64_t *)0x0) && (FUN_00d50b00(), local_80 != '\0')) &&
               (local_88 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            local_80 = '\0';
          }
          if ((local_220 != '\0') && (local_228 != 0)) {
            FUN_00d50b20();
          }
          plVar12 = local_60;
          if (plVar7 == (int64_t *)0x0) {
LAB_01d14b61:
            bVar3 = true;
            bVar2 = true;
          }
          else {
            local_80 = '\0';
            local_88 = (int64_t *)0x0;
            local_b0 = plVar7;
            local_78 = plVar7;
            local_6c = 0;
            plVar12 = (int64_t *)(this_ptr + 0x50);
            lVar9 = 0;
            plVar7 = (int64_t *)0x0;
            local_48 = 0;
            while( true ) {
              iVar8 = (int)lVar9;
              iVar6 = *(int *)((int64_t)local_b0 + 0xc);
              local_70 = iVar8;
              if (iVar6 <= iVar8) break;
              plVar1 = *(int64_t **)(local_b0[2] + lVar9 * 8);
              local_124 = iVar6;
              local_88 = plVar1;
              if (iVar8 == 0) {
                uVar5 = FUN_01d25f70();
                plVar10 = local_58;
                uVar11 = (undefined7)((uint64_t)uVar5 >> 8);
                if (local_58 == plVar7) {
                  plVar10 = plVar7;
                  if (((char)local_48 != '\0') || (local_58 == (int64_t *)0x0)) {
                    local_34 = (uint)local_48;
                    goto LAB_01d1407c;
                  }
                  local_34 = (uint)CONCAT71(uVar11,1);
                  if (local_50 == '\0') {
                    local_34 = (uint)CONCAT71(uVar11,1);
                    FUN_00d50b00();
                    if (local_50 == '\0') goto LAB_01d14090;
                    goto LAB_01d14082;
                  }
                }
                else {
                  if (local_50 != '\0') {
                    local_34 = (uint)CONCAT71(uVar11,1);
                    if (((char)local_48 != '\0') && (plVar7 != (int64_t *)0x0)) {
                      FUN_00d50b20();
                    }
                    goto LAB_01d14090;
                  }
                  if (local_58 != (int64_t *)0x0) {
                    uVar5 = FUN_00d50b00();
                  }
                  local_34 = (uint)CONCAT71((int7)((uint64_t)uVar5 >> 8),1);
                  if (((char)local_48 != '\0') && (plVar7 != (int64_t *)0x0)) {
                    FUN_00d50b20();
                  }
LAB_01d1407c:
                  plVar7 = plVar10;
                  plVar10 = plVar7;
                  if (local_50 != '\0') {
LAB_01d14082:
                    plVar10 = plVar7;
                    if (local_58 != (int64_t *)0x0) {
                      FUN_00d50b20();
                    }
                  }
                }
LAB_01d14090:
                if (plVar10 != (int64_t *)0x0) {
                  local_40 = plVar10;
                  if (*(int *)((int64_t)local_b0 + 0xc) == 1) goto LAB_01d145fe;
                  goto LAB_01d140bb;
                }
                local_108 = 0;
                (**(code **)(*plVar12 + 0x10))();
                FUN_00d50b00();
                local_108 = '\x01';
                local_218 = 0;
                local_210 = '\0';
                local_208 = 0;
                local_200 = '\0';
                local_110 = plVar12;
                FUN_00cbadd0(&local_208,&local_218);
                plVar12 = local_60;
                if ((local_200 != '\0') && (local_208 != 0)) {
                  FUN_00d50b20();
                }
                if ((local_210 != '\0') && (local_218 != 0)) {
                  FUN_00d50b20();
                }
                if ((local_108 != '\0') && (local_110 != (int64_t *)0x0)) {
                  (**(code **)(*local_110 + 0x10))();
                  FUN_00d50b20();
                }
                plVar7 = (int64_t *)0x0;
LAB_01d14b1a:
                unaff_R14 = 0;
LAB_01d14b1d:
                FUN_00018280();
                cVar4 = (char)local_34;
                iVar6 = local_124;
                goto LAB_01d14b36;
              }
              local_34 = (uint)local_48;
              local_40 = plVar7;
              if (iVar8 + 1 == iVar6) {
LAB_01d145fe:
                plVar7 = local_40;
                local_1f0 = '\0';
                local_1f8 = plVar1;
                FUN_00c841b0();
                plVar10 = local_58;
                if (local_50 == '\0') {
                  if (((local_58 != (int64_t *)0x0) && (FUN_00d50b00(), local_50 != '\0')) &&
                     (local_58 != (int64_t *)0x0)) {
                    FUN_00d50b20();
                  }
                }
                else {
                  local_50 = '\0';
                }
                if ((local_1f0 != '\0') && (local_1f8 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                if (plVar10 == (int64_t *)0x0) {
                  local_e8 = 0;
                  (**(code **)(*plVar12 + 0x10))();
                  FUN_00d50b00();
                  local_e8 = '\x01';
                  local_1c8 = 0;
                  local_1c0 = '\0';
                  local_1b8 = 0;
                  local_1b0 = '\0';
                  local_f0 = plVar12;
                  FUN_00cbadd0(&local_1b8,&local_1c8);
                  plVar12 = local_60;
                  if ((local_1b0 != '\0') && (local_1b8 != 0)) {
                    FUN_00d50b20();
                  }
                  if ((local_1c0 != '\0') && (local_1c8 != 0)) {
                    FUN_00d50b20();
                  }
                  if ((local_e8 != '\0') && (local_f0 != (int64_t *)0x0)) {
                    (**(code **)(*local_f0 + 0x10))();
                    FUN_00d50b20();
                  }
                  goto LAB_01d14b1a;
                }
                local_f8 = 0;
                (**(code **)(*plVar12 + 0x10))();
                FUN_00d50b00();
                local_f8 = '\x01';
                local_1e8 = 0;
                local_1e0 = '\0';
                local_1d8 = plVar10;
                local_1d0 = '\0';
                local_100 = plVar12;
                FUN_00cbad30(&local_1d8,&local_1e8,0x20);
                plVar12 = local_60;
                if ((local_1d0 != '\0') && (local_1d8 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                if ((local_1e0 != '\0') && (local_1e8 != 0)) {
                  FUN_00d50b20();
                }
                if ((local_f8 != '\0') && (local_100 != (int64_t *)0x0)) {
                  (**(code **)(*local_100 + 0x10))();
                  FUN_00d50b20();
                }
                unaff_R14 = CONCAT71((int7)((uint64_t)plVar1 >> 8),1);
                FUN_00d50b20();
                goto LAB_01d14b1d;
              }
LAB_01d140bb:
              lVar9 = lVar9 + 1;
              local_1a0 = '\0';
              local_1a8 = plVar1;
              FUN_00c84370();
              plVar1 = local_58;
              if (local_50 == '\0') {
                if (((local_58 != (int64_t *)0x0) && (FUN_00d50b00(), local_50 != '\0')) &&
                   (local_58 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
              }
              else {
                local_50 = '\0';
              }
              if ((local_1a0 != '\0') && (local_1a8 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              plVar7 = local_40;
              if (plVar1 == (int64_t *)0x0) {
                FUN_00c7e7b0();
                plVar1 = local_58;
                local_198 = g_027ef808;
                if (g_027ef808 != 0) {
                  FUN_00d50b00();
                }
                local_190 = '\x01';
                (**(code **)(*plVar1 + 0x50))();
                if ((local_190 != '\0') && (local_198 != 0)) {
                  FUN_00d50b20();
                }
                if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                local_d8 = 0;
                (**(code **)(*plVar12 + 0x10))();
                FUN_00d50b00();
                local_d8 = '\x01';
                local_188 = 0;
                local_180 = '\0';
                local_178 = 0;
                local_170 = '\0';
                local_e0 = plVar12;
                FUN_00cbadd0(&local_178,&local_188);
                plVar12 = local_60;
                if ((local_170 != '\0') && (local_178 != 0)) {
                  FUN_00d50b20();
                }
                if ((local_180 != '\0') && (local_188 != 0)) {
                  FUN_00d50b20();
                }
                if ((local_d8 != '\0') && (local_e0 != (int64_t *)0x0)) {
                  (**(code **)(*local_e0 + 0x10))();
                  FUN_00d50b20();
                }
                goto LAB_01d14b1a;
              }
              local_c8 = 0;
              (**(code **)(*plVar12 + 0x10))();
              FUN_00d50b00();
              local_c8 = '\x01';
              local_168 = 0;
              local_160 = '\0';
              local_158 = plVar1;
              local_150 = '\0';
              local_d0 = plVar12;
              FUN_00cbad30(&local_158,&local_168,0x20);
              if ((local_150 != '\0') && (local_158 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              if ((local_160 != '\0') && (local_168 != 0)) {
                FUN_00d50b20();
              }
              if ((local_c8 != '\0') && (local_d0 != (int64_t *)0x0)) {
                (**(code **)(*local_d0 + 0x10))();
                FUN_00d50b20();
              }
              uVar5 = FUN_00d77e40();
              plVar7 = local_40;
              uVar11 = (undefined7)((uint64_t)uVar5 >> 8);
              if (local_58 == local_40) {
                if (((char)local_34 != '\0') || (local_58 == (int64_t *)0x0)) {
                  local_48 = (uint64_t)local_34;
                  goto LAB_01d142a3;
                }
                local_48 = CONCAT71(uVar11,1);
                if (local_50 == '\0') {
                  local_48 = CONCAT71(uVar11,1);
                  FUN_00d50b00();
                  if (local_50 == '\0') goto LAB_01d142b7;
                  goto LAB_01d142a9;
                }
              }
              else {
                plVar7 = local_58;
                if (local_50 != '\0') {
                  local_48 = CONCAT71(uVar11,1);
                  if (((char)local_34 != '\0') && (local_40 != (int64_t *)0x0)) {
                    FUN_00d50b20();
                  }
                  goto LAB_01d142b7;
                }
                if (local_58 != (int64_t *)0x0) {
                  uVar5 = FUN_00d50b00();
                }
                local_48 = CONCAT71((int7)((uint64_t)uVar5 >> 8),1);
                if (((char)local_34 != '\0') && (local_40 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
LAB_01d142a3:
                if (local_50 != '\0') {
LAB_01d142a9:
                  if (local_58 != (int64_t *)0x0) {
                    FUN_00d50b20();
                  }
                }
              }
LAB_01d142b7:
              if (plVar7 == (int64_t *)0x0) {
                local_b8 = 0;
                (**(code **)(*plVar12 + 0x10))();
                FUN_00d50b00();
                local_b8 = '\x01';
                local_148 = 0;
                local_140 = '\0';
                local_138 = 0;
                local_130 = '\0';
                local_c0 = plVar12;
                FUN_00cbadd0(&local_138,&local_148);
                plVar12 = local_60;
                if ((local_130 != '\0') && (local_138 != 0)) {
                  FUN_00d50b20();
                }
                if ((local_140 != '\0') && (local_148 != 0)) {
                  FUN_00d50b20();
                }
                if ((local_b8 != '\0') && (local_c0 != (int64_t *)0x0)) {
                  (**(code **)(*local_c0 + 0x10))();
                  FUN_00d50b20();
                }
                FUN_00d50b20();
                plVar7 = (int64_t *)0x0;
                local_34 = (uint)local_48;
                goto LAB_01d14b1a;
              }
              FUN_00d50b20();
            }
            FUN_00018280();
            unaff_R14 = 0;
            cVar4 = (char)local_48;
            plVar12 = local_60;
LAB_01d14b36:
            if ((cVar4 != '\0') && (plVar7 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            FUN_00d50b20();
            if (iVar6 <= iVar8) goto LAB_01d14b61;
            bVar3 = false;
            bVar2 = false;
          }
          if (plVar12 != (int64_t *)0x0) goto LAB_01d14b68;
        }
        FUN_00d50b20();
        if (!bVar2) goto LAB_01d14b83;
      }
    }
  }
  unaff_R14 = 0;
LAB_01d14b83:
  if (local_98 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return unaff_R14 & 0xffffff01;
}

