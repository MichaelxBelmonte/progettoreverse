// Function: FUN_019ceb00
// Address: 019ceb00
// Size: 1599 bytes
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


uint64_t FUN_019ceb00(uint64_t param_1,uint32_t param_2)

{
  uint uVar1;
  int64_t *plVar2;
  int64_t *plVar3;
  int64_t *plVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  uint64_t uVar8;
  void*puVar9;
  int64_t **pplVar10;
  char in_DL;
  uint64_t unaff_RBX;
  undefined7 uVar12;
  int64_t *plVar11;
  int64_t *this_ptr;
  int64_t *plVar13;
  uint64_t uVar14;
  uint64_t uVar15;
  uint32_t uVar16;
  uint32_t uVar17;
  uint32_t extraout_XMM0_Da;
  uint32_t uVar18;
  uint32_t uVar19;
  int64_t *local_b8;
  code *local_b0;
  void*local_a8;
  void*local_a0;
  char local_98;
  uint64_t local_90;
  int64_t *local_88;
  int64_t *local_60;
  char local_58;
  void*local_50;
  uint32_t local_44;
  int64_t *local_40;
  char local_38;
  
  (**(code **)(*this_ptr + 0xaa8))();
  plVar13 = local_40;
  uVar12 = (undefined7)((uint64_t)unaff_RBX >> 8);
  if (local_38 == '\0') {
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b00();
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_019ceb5d;
    }
  }
  else if (local_40 != (int64_t *)0x0) {
LAB_019ceb5d:
    local_90 = (uint64_t)*(uint *)((int64_t)plVar13 + 0xc);
    uVar15 = CONCAT71(uVar12,local_90 == 0);
    if ((local_90 != 0) && (in_DL != '\0')) {
      local_88 = plVar13;
      (**(code **)(*this_ptr + 0xe20))();
      plVar11 = local_40;
      if (local_38 == '\0') {
        if (local_40 != (int64_t *)0x0) {
          FUN_00d50b00();
          if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          goto LAB_019cebcc;
        }
LAB_019cebd2:
        local_44 = 0;
      }
      else {
        if (local_40 == (int64_t *)0x0) goto LAB_019cebd2;
LAB_019cebcc:
        if (*(int *)((int64_t)plVar11 + 0xc) != 0) goto LAB_019cebd2;
        uVar8 = FUN_00d50b20();
        local_44 = (uint32_t)CONCAT71((int7)((uint64_t)uVar8 >> 8),1);
        plVar11 = (int64_t *)0x0;
      }
      (**(code **)(*this_ptr + 0x4a0))();
      plVar4 = local_40;
      if ((((local_38 == '\0') && (local_40 != (int64_t *)0x0)) &&
          (FUN_00d50b00(), local_38 != '\0')) && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      puVar9 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      local_a8 = &g_02572358;
      *puVar9 = &g_02572358;
      local_b0 = g_02572370;
      (*g_02572370)();
      local_50 = puVar9;
      if (0 < (int)local_90) {
        uVar15 = 0;
        do {
          plVar2 = *(int64_t **)(plVar13[2] + uVar15 * 8);
          uVar19 = param_2;
          if (plVar2 != (int64_t *)0x0) {
            FUN_00d50b00();
            uVar19 = param_2;
          }
          local_b8 = plVar2;
          uVar16 = (**(code **)(*plVar2 + 0x4d8))();
          local_38 = '\0';
          param_2 = uVar19;
          local_40 = plVar2;
          cVar5 = FUN_00d23d70();
          if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (cVar5 == '\0') {
            if (plVar11 != (int64_t *)0x0) {
              (**(code **)(*plVar2 + 0x928))();
              plVar3 = local_60;
              if (local_58 == '\0') {
                if (local_60 != (int64_t *)0x0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_58 = '\0';
              }
              local_40 = plVar3;
              local_38 = '\0';
              cVar5 = FUN_00d23d70();
              if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              if (plVar3 != (int64_t *)0x0) {
                FUN_00d50b20();
              }
              if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              if (cVar5 == '\0') goto LAB_019cefb0;
            }
            uVar14 = 0;
            do {
              if (uVar15 != uVar14) {
                plVar3 = *(int64_t **)(plVar13[2] + uVar14 * 8);
                uVar18 = param_2;
                if (plVar3 != (int64_t *)0x0) {
                  FUN_00d50b00();
                  uVar18 = param_2;
                }
                local_60 = plVar3;
                uVar17 = (**(code **)(*plVar3 + 0x4d8))();
                param_2 = uVar19;
                cVar5 = FUN_00d054a0(uVar16,uVar19,uVar17,uVar18);
                if (cVar5 != '\0') {
                  local_38 = '\0';
                  local_40 = plVar3;
                  cVar5 = FUN_00d23d70();
                  uVar18 = extraout_XMM0_Da;
                  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
                    uVar18 = FUN_00d50b20();
                  }
                  if (cVar5 == '\0') {
                    iVar6 = FUN_019a4cd0(uVar18,this_ptr);
                    if (iVar6 < 0) {
                      local_38 = '\0';
                      local_40 = plVar2;
                      FUN_00d21140();
                      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
                        FUN_00d50b20();
                      }
                    }
                    else if (iVar6 == 0) {
                      local_38 = '\0';
                      local_40 = plVar2;
                      iVar6 = FUN_00d237a0();
                      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
                        FUN_00d50b20();
                      }
                      local_38 = '\0';
                      local_40 = plVar3;
                      iVar7 = FUN_00d237a0();
                      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
                        FUN_00d50b20();
                      }
                      pplVar10 = &local_b8;
                      if (iVar7 < iVar6) {
                        pplVar10 = &local_60;
                      }
                      local_40 = *pplVar10;
                      local_38 = '\0';
                      FUN_00d21140();
                      plVar13 = local_88;
                      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
                        FUN_00d50b20();
                      }
                    }
                    else {
                      local_38 = '\0';
                      local_40 = plVar3;
                      FUN_00d21140();
                      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
                        FUN_00d50b20();
                      }
                    }
                  }
                }
                FUN_00d50b20();
              }
              uVar14 = uVar14 + 1;
            } while (local_90 != uVar14);
          }
LAB_019cefb0:
          if (plVar2 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
          uVar15 = uVar15 + 1;
        } while (uVar15 != local_90);
      }
      uVar1 = *(uint *)((int64_t)local_50 + 0xc);
      if ((uint64_t)uVar1 != 0) {
        puVar9 = (void*)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar9 = local_a8;
        uVar19 = (*local_b0)();
        if (0 < (int)uVar1) {
          uVar15 = 0;
          do {
            plVar13 = *(int64_t **)(local_50[2] + uVar15 * 8);
            if (plVar13 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
            (**(code **)(*plVar13 + 0x928))();
            plVar13 = local_60;
            if (local_58 == '\0') {
              if (local_60 != (int64_t *)0x0) {
                FUN_00d50b00();
              }
            }
            else {
              local_58 = '\0';
            }
            local_40 = plVar13;
            local_38 = '\0';
            FUN_00d21140();
            if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if (plVar13 != (int64_t *)0x0) {
              FUN_00d50b20();
            }
            if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            uVar19 = FUN_00d50b20();
            uVar15 = uVar15 + 1;
          } while (uVar1 != uVar15);
        }
        local_98 = '\0';
        local_a0 = puVar9;
        (**(code **)(*this_ptr + 0xdc8))(uVar19,1);
        if ((local_98 != '\0') && (local_a0 != (void*)0x0)) {
          FUN_00d50b20();
        }
        (**(code **)(*this_ptr + 0xb48))();
        if (puVar9 != (void*)0x0) {
          FUN_00d50b20();
        }
      }
      FUN_00d50b20();
      if (plVar4 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if ((char)local_44 == '\0' && plVar11 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      uVar15 = 0;
    }
    FUN_00d50b20();
    goto LAB_019cf154;
  }
  uVar15 = CONCAT71(uVar12,1);
LAB_019cf154:
  return (uVar15 ^ 1) & 0xffffffff;
}

