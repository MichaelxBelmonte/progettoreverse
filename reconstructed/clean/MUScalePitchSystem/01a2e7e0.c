// Function: FUN_01a2e7e0
// Address: 01a2e7e0
// Size: 3318 bytes
// Class: MUScalePitchSystem
// === MUScalePitchSystem properties ===
//   bool            _tuningIsSuggestedRelevant
//   bool            _modeIsSuggestedRelevant
//   bool            _tuningPitchAnchorIsSuggestedRelevant
//   bool            _modeFundamentalOffsetIsSuggestedRelevant
//   bool            _stretchingIsSuggestedRelevant
//   double          _startPulse
//   double          _startTime
//   double          _width
//   double          _scope


uint64_t FUN_01a2e7e0(int64_t *param_1,int64_t *param_2)

{
  int64_t lVar1;
  int64_t *plVar2;
  int64_t *plVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  uint64_t uVar9;
  void *pvVar10;
  int64_t *plVar11;
  void*puVar12;
  void* pVar13;
  uint uVar14;
  char *pcVar15;
  int64_t *arg1;
  int64_t *plVar16;
  undefined7 uVar17;
  bool bVar18;
  uint32_t extraout_XMM0_Da;
  uint32_t extraout_XMM0_Da_00;
  uint32_t uVar19;
  int64_t *local_1c0;
  uint8_t local_1b8;
  int64_t *local_1b0;
  uint8_t local_1a8;
  int64_t *local_1a0;
  uint8_t local_198;
  uint8_t local_188;
  uint8_t local_178;
  uint64_t local_170;
  uint64_t local_168;
  int64_t *local_160;
  uint64_t local_158;
  int64_t local_140;
  char local_138;
  int64_t *local_130;
  char local_128;
  int64_t *local_120;
  char local_118;
  int64_t local_110;
  char local_108;
  int64_t *local_100;
  char local_f8;
  int64_t local_f0;
  char local_e8;
  int64_t local_e0;
  char local_d8;
  float local_d0;
  float local_cc;
  int64_t *local_c8;
  int64_t local_c0;
  char local_b8;
  uint64_t local_b0;
  uint32_t local_a4;
  int64_t *local_a0;
  int64_t local_98;
  char local_90;
  uint local_74;
  int64_t *local_70;
  byte local_64;
  char local_58 [8];
  uint64_t local_50;
  int64_t *local_48;
  int64_t *local_40;
  char local_38 [8];
  
  if (*param_2 == 0) {
    uVar8 = 0;
    goto LAB_01a2f4d2;
  }
  local_160 = param_2;
  local_c8 = param_1;
  FUN_01a58dc0();
  plVar2 = local_40;
  if ((((local_38[0] == '\0') && (local_40 != (int64_t *)0x0)) &&
      (FUN_00d50b00(), local_38[0] != '\0')) && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)("/System/Library/Frameworks/Foundation.framework/Versions/C/Foundation" +
              *plVar2 + 0x20))();
  plVar3 = local_40;
  if (local_38[0] == '\0') {
    if (local_40 != (int64_t *)0x0) {
      (**(code **)(*local_40 + 0x10))();
      FUN_00d50b00();
      if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
        (**(code **)(*local_40 + 0x10))();
        FUN_00d50b20();
      }
      goto LAB_01a2e8ae;
    }
LAB_01a2e8d8:
    local_a4 = (uint32_t)CONCAT71((int7)((uint64_t)plVar2 >> 8),1);
LAB_01a2e8de:
    local_64 = 0;
  }
  else {
    if (local_40 == (int64_t *)0x0) goto LAB_01a2e8d8;
LAB_01a2e8ae:
    cVar4 = (**(code **)(*plVar3 + 0x80))();
    if (cVar4 == '\0') {
      local_a4 = 0;
      goto LAB_01a2e8de;
    }
    local_64 = (**(code **)(*plVar3 + 0x50))();
    local_64 = local_64 ^ 1;
    local_a4 = 0;
  }
  cVar4 = (**(code **)("/System/Library/Frameworks/ImageIO.framework/Versions/A/ImageIO" + *plVar2))
                    ();
  if (cVar4 == '\0') {
    local_50 = 0;
    local_48 = (int64_t *)0x0;
    uVar8 = 0;
  }
  else {
    iVar5 = FUN_01d3a5a0();
    uVar19 = extraout_XMM0_Da;
    if ((iVar5 == 1) && (iVar5 = FUN_01d3b630(), uVar19 = extraout_XMM0_Da_00, iVar5 == 1)) {
      (**(code **)(*plVar2 + 0xe58))();
      local_a0 = local_40;
      if ((local_38[0] == '\0') &&
         (((local_40 != (int64_t *)0x0 && (FUN_00d50b00(), local_38[0] != '\0')) &&
          (local_40 != (int64_t *)0x0)))) {
        FUN_00d50b20();
      }
      FUN_01d3abf0();
      local_158 = FUN_01e466c0();
      (**(code **)(*plVar2 + 0xeb0))();
      local_cc = (float)(**(code **)(*plVar2 + 0xc00))(local_158._4_4_);
      iVar5 = FUN_01d3b620();
      if (iVar5 != 2) {
        FUN_01a58e40();
        if (local_40 == (int64_t *)0x0) {
          bVar18 = false;
        }
        else {
          FUN_01a58e40();
          bVar18 = *(int *)(local_98 + 0xc) != 0;
          if (local_90 != '\0') {
            FUN_00d50b20();
          }
        }
        if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (bVar18) {
          FUN_01a58e40();
          FUN_00d23340();
          local_70 = local_40;
          param_1 = (int64_t *)CONCAT71((int7)((uint64_t)param_1 >> 8),local_38[0]);
          pcVar15 = local_58;
          if (local_38[0] != '\0') {
            pcVar15 = local_38;
          }
          local_58[0] = local_38[0];
          *pcVar15 = '\0';
          if ((local_38[0] != '\0') && (local_70 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (local_70 == (int64_t *)0x0) {
            local_b0 = 0;
            local_70 = (int64_t *)0x0;
          }
          else {
            local_b0 = CONCAT71((int7)((uint64_t)local_70 >> 8),1);
            if (local_58[0] == '\0') {
              FUN_00d50b00();
            }
          }
          if ((local_90 != '\0') && (local_98 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_70 = (int64_t *)0x0;
          local_b0 = 0;
        }
        local_50 = 0;
        local_48 = (int64_t *)0x0;
        local_74 = 0;
        local_170 = 0;
        local_168 = 0;
LAB_01a2eccb:
        plVar11 = (int64_t *)*local_c8;
        cVar4 = (char)local_c8[1];
        plVar16 = (int64_t *)*arg1;
        if (plVar16 == plVar11) {
          if (cVar4 != '\0') {
            if (((char)arg1[1] == '\0') && (plVar11 != (int64_t *)0x0)) {
              cVar4 = '\x01';
              FUN_00d50b00();
              goto LAB_01a2ed30;
            }
            goto LAB_01a2ed35;
          }
        }
        else {
          lVar1 = arg1[1];
          if ((cVar4 != '\0') && (plVar11 != (int64_t *)0x0)) {
            FUN_00d50b00();
          }
          *arg1 = (int64_t)plVar11;
          if (((char)lVar1 != '\0') && (plVar16 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
LAB_01a2ed30:
          *(char *)(arg1 + 1) = cVar4;
LAB_01a2ed35:
          plVar11 = (int64_t *)*arg1;
          plVar16 = plVar11;
        }
        if (plVar11 == (int64_t *)0x0) {
          (**(code **)(*plVar2 + 0x658))();
          plVar16 = local_40;
          plVar11 = (int64_t *)*arg1;
          if (plVar11 == local_40) {
            if (((char)arg1[1] == '\0') && (local_40 != (int64_t *)0x0)) {
              if (local_38[0] == '\0') {
                FUN_00d50b00();
                goto LAB_01a2eded;
              }
              goto LAB_01a2ed9a;
            }
LAB_01a2eda4:
            if (*arg1 != 0) goto LAB_01a2edad;
LAB_01a2edfc:
            uVar8 = 0;
          }
          else {
            lVar1 = arg1[1];
            if (local_38[0] != '\0') {
              *arg1 = (int64_t)local_40;
              if (((char)lVar1 != '\0') && (plVar11 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
LAB_01a2ed9a:
              *(void*)(arg1 + 1) = 1;
              local_38[0] = '\0';
              goto LAB_01a2eda4;
            }
            if (local_40 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
            *arg1 = (int64_t)plVar16;
            if (((char)lVar1 != '\0') && (plVar11 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
LAB_01a2eded:
            *(void*)(arg1 + 1) = 1;
            if (*arg1 == 0) goto LAB_01a2edfc;
LAB_01a2edad:
            iVar5 = FUN_01d3a5a0();
            uVar8 = CONCAT71((int7)((uint64_t)plVar16 >> 8),iVar5 != 6);
          }
          if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((char)uVar8 == '\0') goto LAB_01a2f3b7;
          plVar16 = (int64_t *)*arg1;
        }
        iVar5 = FUN_01d3a5a0();
        pVar13 = (void*)param_1;
        if (iVar5 == 5) {
          uVar6 = (**(code **)(*plVar2 + 0xd08))();
          param_1 = (int64_t *)(uint64_t)uVar6;
          uVar8 = FUN_01d3b590();
          if ((uVar8 & 8) != 0) {
            param_1 = (int64_t *)0x0;
          }
          if ((local_170 & 1) == 0) {
            FUN_01a58e40();
            plVar11 = local_40;
            if (local_38[0] == '\0') {
              if (local_40 != (int64_t *)0x0) {
                FUN_00d50b00();
              }
            }
            else {
              local_38[0] = '\0';
            }
            local_178 = 1;
            local_1c0 = local_a0;
            local_1b8 = 0;
            pVar13 = (void*)&local_1c0;
            uVar9 = FUN_01a25ee0();
            if (plVar11 != (int64_t *)0x0) {
              uVar9 = FUN_00d50b20();
            }
            if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
              uVar9 = FUN_00d50b20();
            }
            local_170 = CONCAT71((int7)((uint64_t)uVar9 >> 8),1);
          }
          if ((local_70 != (int64_t *)0x0) && ((local_168 & 1) != 0)) {
            pvVar10 = _pthread_getspecific(pVar13);
            if (pvVar10 != (void *)0x0) {
              FUN_00e8b990();
            }
            plVar11 = (int64_t *)FUN_00e8b990();
            (**(code **)(*plVar11 + 0x3b8))();
          }
          FUN_01d3abf0();
          uVar9 = FUN_01e466c0();
          local_158 = uVar9;
          local_d0 = (float)(**(code **)(*plVar2 + 0xc00))((int)((uint64_t)uVar9 >> 0x20));
          local_1b0 = plVar2;
          local_1a8 = 0;
          (**(code **)(*plVar2 + 0xa00))();
          plVar16 = local_40;
          if (local_38[0] == '\0') {
            if (local_40 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_38[0] = '\0';
          }
          FUN_01a58e40();
          local_c0 = local_98;
          if (local_90 == '\0') {
            if (local_98 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_90 = '\0';
          }
          local_b8 = '\x01';
          local_1a0 = local_a0;
          local_198 = 0;
          FUN_01a26560(local_d0 - local_cc,&local_c0,&local_1a0,1);
          if ((local_b8 != '\0') && (local_c0 != 0)) {
            FUN_00d50b20();
          }
          if ((local_90 != '\0') && (local_98 != 0)) {
            FUN_00d50b20();
          }
          if (plVar16 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
          if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (local_70 != (int64_t *)0x0) {
            pvVar10 = _pthread_getspecific((void*)param_1);
            if (pvVar10 != (void *)0x0) {
              FUN_00e8b990();
            }
            puVar12 = (void*)FUN_00e8b990();
            param_1 = (int64_t *)*puVar12;
            local_168 = (*param_1[0x78])();
          }
          (**(code **)((int64_t)&linkedit_data_command_000013e8.cmd + *plVar2))
                    ((uint32_t)local_158);
          if ((local_74 & 1) != 0) {
            (**(code **)(*plVar2 + 0x930))((uint32_t)local_158);
            (**(code **)(*plVar3 + 0x98))();
          }
        }
        iVar5 = FUN_01d3a5a0();
        if (iVar5 == 4 && local_64 == 1) {
          uVar6 = FUN_01d3b590();
          uVar14 = (uVar6 & 2) >> 1;
          param_1 = (int64_t *)(uint64_t)uVar14;
          if (((local_74 & 1) == 0) == SUB41(uVar14,0)) {
            if ((uVar6 & 2) == 0) {
              (**(code **)(*plVar3 + 0x90))();
              local_120 = local_48;
              local_118 = '\0';
              (**(code **)(*plVar3 + 0x118))();
              local_74 = 0;
              if ((local_118 != '\0') && (local_120 != (int64_t *)0x0)) {
                FUN_00d50b20();
                local_74 = 0;
              }
            }
            else {
              local_140 = *local_160;
              local_138 = '\0';
              uVar9 = FUN_0039e8b0();
              plVar11 = local_40;
              uVar17 = (undefined7)((uint64_t)plVar16 >> 8);
              if (local_40 == local_48) {
                if (((char)local_50 == '\0') && (local_40 != (int64_t *)0x0)) {
                  plVar11 = local_48;
                  if (local_38[0] != '\0') goto LAB_01a2f262;
                  uVar8 = CONCAT71(uVar17,1);
                  FUN_00d50b00();
                }
                else {
                  uVar8 = local_50 & 0xffffffff;
                }
LAB_01a2f2c3:
                if ((local_38[0] == '\0') || (local_40 == (int64_t *)0x0)) {
                  local_50 = uVar8 & 0xffffffff;
                }
                else {
                  FUN_00d50b20();
                  local_50 = uVar8 & 0xffffffff;
                }
              }
              else {
                if (local_38[0] == '\0') {
                  if (local_40 != (int64_t *)0x0) {
                    FUN_00d50b00();
                  }
                  uVar8 = CONCAT71(uVar17,1);
                  if (((char)local_50 == '\0') || (local_48 == (int64_t *)0x0)) {
                    local_48 = plVar11;
                  }
                  else {
                    FUN_00d50b20();
                    local_48 = plVar11;
                  }
                  goto LAB_01a2f2c3;
                }
                if (((char)local_50 != '\0') && (local_48 != (int64_t *)0x0)) {
                  uVar9 = FUN_00d50b20();
                }
LAB_01a2f262:
                local_38[0] = '\0';
                local_50 = CONCAT71((int7)((uint64_t)uVar9 >> 8),1);
                local_48 = plVar11;
              }
              if ((local_138 != '\0') && (local_140 != 0)) {
                FUN_00d50b20();
              }
              local_130 = local_48;
              local_128 = '\0';
              (**(code **)(*plVar3 + 0x110))();
              if ((local_128 != '\0') && (local_130 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              (**(code **)(*plVar2 + 0x930))((uint32_t)local_158);
              param_1 = (int64_t *)CONCAT71((int7)((uint64_t)param_1 >> 8),1);
              local_74 = (uint)param_1;
              (**(code **)(*plVar3 + 0x88))();
            }
          }
        }
        if (*local_c8 != 0) {
          *local_c8 = 0;
          if ((char)local_c8[1] != '\0') {
            FUN_00d50b20();
          }
          *(void*)(local_c8 + 1) = 0;
        }
        goto LAB_01a2eccb;
      }
      uVar6 = (**(code **)(*plVar2 + 0xd08))();
      uVar7 = FUN_01d3b590();
      uVar8 = 3;
      if ((uVar7 & 8) == 0) {
        uVar8 = (uint64_t)uVar6;
      }
      FUN_01a58e40();
      plVar2 = local_40;
      if (local_38[0] == '\0') {
        if (local_40 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38[0] = '\0';
      }
      local_188 = 1;
      FUN_01a2b260(g_02390124,uVar8);
      if (plVar2 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      local_50 = 0;
      local_48 = (int64_t *)0x0;
      goto LAB_01a2f488;
    }
    local_f0 = *arg1;
    local_e8 = '\0';
    local_e0 = *local_160;
    local_d8 = '\0';
    uVar8 = FUN_01a58d30(uVar19,&local_e0);
    uVar8 = uVar8 & 0xffffffff;
    if ((local_d8 != '\0') && (local_e0 != 0)) {
      FUN_00d50b20();
    }
    local_48 = (int64_t *)0x0;
    local_50 = 0;
    local_158 = CONCAT44(local_158._4_4_,(uint32_t)local_158);
    if ((local_e8 != '\0') &&
       (local_158 = CONCAT44(local_158._4_4_,(uint32_t)local_158), local_f0 != 0)) {
      FUN_00d50b20();
      local_50 = 0;
      local_48 = (int64_t *)0x0;
    }
  }
  goto LAB_01a2f49b;
LAB_01a2f3b7:
  local_110 = *arg1;
  local_108 = '\0';
  FUN_0199eb40();
  if ((local_108 != '\0') && (local_110 != 0)) {
    FUN_00d50b20();
  }
  if ((local_74 & 1) != 0) {
    (**(code **)(*plVar3 + 0x90))();
    if (local_48 == (int64_t *)0x0) {
      local_48 = (int64_t *)0x0;
    }
    else {
      local_100 = local_48;
      local_f8 = '\0';
      (**(code **)(*plVar3 + 0x118))();
      if ((local_f8 != '\0') && (local_100 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  FUN_01a262a0();
  (**(code **)(*plVar2 + 0xeb0))();
  if (((char)local_b0 != '\0') && (local_70 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
LAB_01a2f488:
  uVar8 = CONCAT71((int7)(uVar8 >> 8),1);
  if (local_a0 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
LAB_01a2f49b:
  if ((char)local_a4 == '\0') {
    (**(code **)(*plVar3 + 0x10))();
    FUN_00d50b20();
  }
  FUN_00d50b20();
  if (((char)local_50 != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
LAB_01a2f4d2:
  return uVar8 & 0xffffffff;
}

