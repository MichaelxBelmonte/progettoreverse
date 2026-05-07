// Function: FUN_01922e30
// Address: 01922e30
// Size: 2696 bytes
// Class: MUDetectionEditorView
// === MUDetectionEditorView properties ===
//   MUDetectionEditorRenderStyle _renderStyle


uint64_t FUN_01922e30(uint64_t param_1,int64_t *param_2)

{
  int64_t *plVar1;
  bool bVar2;
  int64_t lVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  uint64_t uVar7;
  int64_t *plVar8;
  int64_t *arg1;
  int64_t *this_ptr;
  bool bVar9;
  uint32_t uVar10;
  uint32_t extraout_XMM0_Da;
  uint32_t extraout_XMM0_Da_00;
  float fVar11;
  uint64_t uVar12;
  uint64_t uVar13;
  float fVar14;
  int64_t local_1b8;
  char local_1b0;
  int64_t local_1a8;
  char local_1a0;
  int64_t *local_198;
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
  int64_t local_d8;
  char local_d0;
  int64_t local_c8;
  char local_c0;
  int64_t local_b8;
  char local_b0;
  uint64_t local_a8;
  int64_t *local_a0;
  char local_98;
  int64_t *local_90;
  char local_88;
  int64_t *local_80;
  char local_78;
  int64_t *local_70;
  char local_68;
  char local_59;
  int64_t local_58;
  int64_t *local_48;
  char local_40;
  
  if (*param_2 == 0) {
    uVar7 = 0;
    goto LAB_0192301d;
  }
  uVar10 = FUN_01a58dc0();
  if (local_48 == (int64_t *)0x0) {
    bVar2 = true;
    bVar9 = false;
LAB_01922f96:
    local_c8 = *arg1;
    local_c0 = '\0';
    local_b8 = *param_2;
    local_b0 = '\0';
    uVar6 = FUN_01a58d30(uVar10,&local_b8);
    uVar7 = (uint64_t)uVar6;
    if ((local_b0 != '\0') && (local_b8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_c0 != '\0') && (local_c8 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    if (local_40 == '\0') {
      FUN_00d50b00();
    }
    cVar4 = (**(code **)("/System/Library/Frameworks/ImageIO.framework/Versions/A/ImageIO" +
                        *local_48))();
    if (cVar4 == '\0') {
      bVar9 = true;
      bVar2 = false;
      uVar7 = 0;
    }
    else {
      iVar5 = FUN_01d3a5a0();
      bVar9 = true;
      uVar10 = extraout_XMM0_Da;
      if ((iVar5 != 1) || (iVar5 = FUN_01d3b630(), uVar10 = extraout_XMM0_Da_00, iVar5 != 1)) {
        bVar2 = false;
        goto LAB_01922f96;
      }
      iVar5 = FUN_01d3b620();
      if (iVar5 == 2) {
        (**(code **)(*(int64_t *)this_ptr[10] + 0x410))();
        (**(code **)(*(int64_t *)this_ptr[10] + 0x388))();
        local_98 = 0;
        if (local_40 == '\0') {
          if (local_48 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_40 = '\0';
        }
        local_98 = '\x01';
        local_a0 = local_48;
        FUN_01e4ac90();
        if ((local_98 != '\0') && (local_a0 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        local_1a8 = *arg1;
        local_1b8 = *param_2;
        local_1b0 = '\0';
        local_1a0 = '\0';
        (**(code **)(*(int64_t *)this_ptr[10] + 0x4b0))(&local_1a8,&local_1b8);
        if ((local_1a0 != '\0') && (local_1a8 != 0)) {
          FUN_00d50b20();
        }
        if ((local_1b0 != '\0') && (local_1b8 != 0)) {
          FUN_00d50b20();
        }
        if ((int64_t *)this_ptr[10] != (int64_t *)0x0) {
          (**(code **)(*(int64_t *)this_ptr[10] + 0x418))();
          (**(code **)(*local_48 + 0xeb0))();
        }
      }
      else {
        local_58 = *arg1;
        bVar9 = (char)arg1[1] == '\0';
        local_59 = local_58 == 0 || bVar9;
        if (local_58 == 0 || bVar9) {
          local_a8 = 0;
        }
        else {
          local_a8 = 0;
          uVar12 = FUN_00d50b00();
          local_a8 = CONCAT71((int7)((uint64_t)uVar12 >> 8),1);
        }
        FUN_01d3abf0();
        uVar12 = FUN_01e466c0();
        (**(code **)(*local_48 + 0xeb0))();
        plVar8 = local_48;
        do {
          do {
            (**(code **)(*local_48 + 0x658))();
            plVar1 = (int64_t *)*arg1;
            if (plVar1 == local_48) {
              if (((char)arg1[1] == '\0') && (local_48 != (int64_t *)0x0)) {
                if (local_40 == '\0') {
                  FUN_00d50b00();
                  goto LAB_01923138;
                }
                goto LAB_019230f4;
              }
LAB_019230fe:
              if (*arg1 != 0) goto LAB_0192314b;
LAB_0192339e:
              if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
LAB_019233b2:
              this_ptr = plVar8;
              (**(code **)(*local_48 + 0xeb0))();
              local_d8 = *arg1;
              local_d0 = '\0';
              FUN_0199eb40();
              if ((local_d0 != '\0') && (local_d8 != 0)) {
                FUN_00d50b20();
              }
              goto LAB_01923887;
            }
            lVar3 = arg1[1];
            plVar8 = (int64_t *)0x0;
            if (local_40 != '\0') {
              *arg1 = (int64_t)local_48;
              if (((char)lVar3 != '\0') && (plVar1 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
LAB_019230f4:
              *(void*)(arg1 + 1) = 1;
              local_40 = '\0';
              goto LAB_019230fe;
            }
            if (local_48 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
            *arg1 = (int64_t)local_48;
            if (((char)lVar3 != '\0') && (plVar1 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
LAB_01923138:
            *(void*)(arg1 + 1) = 1;
            if (*arg1 == 0) goto LAB_0192339e;
LAB_0192314b:
            uVar6 = FUN_01d3a5a0();
            plVar8 = (int64_t *)(uint64_t)uVar6;
            if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if (uVar6 == 6) goto LAB_019233b2;
            iVar5 = FUN_01d3a5a0();
            if ((iVar5 == 4) && (uVar7 = FUN_01d3b590(), (uVar7 & 2) != 0)) {
              local_198 = local_48;
              local_190 = '\0';
              (**(code **)(*(int64_t *)this_ptr[10] + 0x410))();
              if ((local_190 != '\0') && (local_198 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              (**(code **)(*(int64_t *)this_ptr[10] + 0x388))();
              local_88 = 0;
              if (local_40 == '\0') {
                if (local_48 != (int64_t *)0x0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_40 = '\0';
              }
              local_88 = '\x01';
              local_90 = local_48;
              FUN_01e4ac90();
              if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              local_188 = local_58;
              local_180 = '\0';
              local_178 = *param_2;
              local_170 = '\0';
              local_168 = *arg1;
              local_160 = '\0';
              (**(code **)(*(int64_t *)this_ptr[10] + 0x4b0))(&local_168,&local_178);
              if ((local_160 != '\0') && (local_168 != 0)) {
                FUN_00d50b20();
              }
              if ((local_170 != '\0') && (local_178 != 0)) {
                FUN_00d50b20();
              }
              if ((local_180 != '\0') && (local_188 != 0)) {
                FUN_00d50b20();
              }
              if ((int64_t *)this_ptr[10] != (int64_t *)0x0) {
                (**(code **)(*(int64_t *)this_ptr[10] + 0x418))();
                (**(code **)(*local_48 + 0xeb0))();
              }
              goto LAB_01923887;
            }
            iVar5 = FUN_01d3a5a0();
          } while (iVar5 != 5);
          FUN_01d3abf0();
          uVar13 = FUN_01e466c0();
          fVar11 = (float)((uint)((float)uVar13 - (float)uVar12) & g_02390140);
          fVar14 = (float)((uint)((float)((uint64_t)uVar13 >> 0x20) -
                                 (float)((uint64_t)uVar12 >> 0x20)) & g_02390140);
          if (fVar14 + g_02390d34 < fVar11) {
            local_158 = local_48;
            local_150 = '\0';
            (**(code **)(*(int64_t *)this_ptr[0xb] + 0x410))();
            if ((local_150 != '\0') && (local_158 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            (**(code **)(*(int64_t *)this_ptr[0xb] + 0x388))();
            local_78 = 0;
            if (local_40 == '\0') {
              if (local_48 != (int64_t *)0x0) {
                FUN_00d50b00();
              }
            }
            else {
              local_40 = '\0';
            }
            local_78 = '\x01';
            local_80 = local_48;
            FUN_01e4ac90();
            if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            local_148 = local_58;
            local_140 = '\0';
            local_138 = *param_2;
            local_130 = '\0';
            local_128 = *arg1;
            local_120 = '\0';
            (**(code **)(*(int64_t *)this_ptr[0xb] + 0x4b0))(&local_128,&local_138);
            if ((local_120 != '\0') && (local_128 != 0)) {
              FUN_00d50b20();
            }
            if ((local_130 != '\0') && (local_138 != 0)) {
              FUN_00d50b20();
            }
            if ((local_140 != '\0') && (local_148 != 0)) {
              FUN_00d50b20();
            }
            if ((int64_t *)this_ptr[0xb] != (int64_t *)0x0) {
              (**(code **)(*(int64_t *)this_ptr[0xb] + 0x418))();
              (**(code **)(*local_48 + 0xeb0))();
            }
            goto LAB_01923887;
          }
        } while (fVar14 <= fVar11 + g_02390d34);
        local_118 = local_48;
        local_110 = '\0';
        (**(code **)(*(int64_t *)this_ptr[10] + 0x410))();
        if ((local_110 != '\0') && (local_118 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        (**(code **)(*(int64_t *)this_ptr[10] + 0x388))();
        local_68 = 0;
        if (local_40 == '\0') {
          if (local_48 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_40 = '\0';
        }
        local_68 = '\x01';
        local_70 = local_48;
        FUN_01e4ac90();
        if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        local_108 = local_58;
        local_100 = '\0';
        local_f8 = *param_2;
        local_f0 = '\0';
        local_e8 = *arg1;
        local_e0 = '\0';
        (**(code **)(*(int64_t *)this_ptr[10] + 0x4b0))(&local_e8,&local_f8);
        if ((local_e0 != '\0') && (local_e8 != 0)) {
          FUN_00d50b20();
        }
        if ((local_f0 != '\0') && (local_f8 != 0)) {
          FUN_00d50b20();
        }
        if ((local_100 != '\0') && (local_108 != 0)) {
          FUN_00d50b20();
        }
        if ((int64_t *)this_ptr[10] != (int64_t *)0x0) {
          (**(code **)(*(int64_t *)this_ptr[10] + 0x418))();
          (**(code **)(*local_48 + 0xeb0))();
        }
LAB_01923887:
        if (local_59 == '\0') {
          FUN_00d50b20();
          bVar9 = true;
          bVar2 = false;
          uVar7 = CONCAT71((int7)((uint64_t)this_ptr >> 8),1);
          goto LAB_0192300b;
        }
      }
      bVar2 = false;
      bVar9 = true;
      uVar7 = CONCAT71((int7)((uint64_t)this_ptr >> 8),1);
    }
  }
LAB_0192300b:
  if ((bVar9) && (!bVar2)) {
    FUN_00d50b20();
  }
LAB_0192301d:
  return uVar7 & 0xffffffff;
}

