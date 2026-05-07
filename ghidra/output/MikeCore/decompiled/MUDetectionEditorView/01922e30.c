// Function: FUN_01922e30
// Address: 01922e30
// Size: 2696 bytes
// Class: MUDetectionEditorView


/* WARNING: Removing unreachable block (ram,0x01922f1e) */
/* WARNING: Removing unreachable block (ram,0x01922f2a) */
/* WARNING: Removing unreachable block (ram,0x0192335d) */
/* WARNING: Removing unreachable block (ram,0x01923369) */
/* WARNING: Removing unreachable block (ram,0x01922e8d) */
/* WARNING: Removing unreachable block (ram,0x01922e96) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_01922e30(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong *plVar8;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  bool bVar9;
  undefined4 uVar10;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  float fVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  float fVar14;
  longlong local_1b8;
  char local_1b0;
  longlong local_1a8;
  char local_1a0;
  longlong *local_198;
  char local_190;
  longlong local_188;
  char local_180;
  longlong local_178;
  char local_170;
  longlong local_168;
  char local_160;
  longlong *local_158;
  char local_150;
  longlong local_148;
  char local_140;
  longlong local_138;
  char local_130;
  longlong local_128;
  char local_120;
  longlong *local_118;
  char local_110;
  longlong local_108;
  char local_100;
  longlong local_f8;
  char local_f0;
  longlong local_e8;
  char local_e0;
  longlong local_d8;
  char local_d0;
  longlong local_c8;
  char local_c0;
  longlong local_b8;
  char local_b0;
  undefined8 local_a8;
  longlong *local_a0;
  char local_98;
  longlong *local_90;
  char local_88;
  longlong *local_80;
  char local_78;
  longlong *local_70;
  char local_68;
  char local_59;
  longlong local_58;
  longlong *local_48;
  char local_40;
  
  if (*param_2 == 0) {
    uVar7 = 0;
    goto LAB_0192301d;
  }
  uVar10 = FUN_01a58dc0();
  if (local_48 == (longlong *)0x0) {
    bVar2 = true;
    bVar9 = false;
LAB_01922f96:
    local_c8 = *unaff_RSI;
    local_c0 = '\0';
    local_b8 = *param_2;
    local_b0 = '\0';
    uVar6 = FUN_01a58d30(uVar10,&local_b8);
    uVar7 = (ulonglong)uVar6;
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
        (**(code **)(*(longlong *)unaff_RDI[10] + 0x410))();
        (**(code **)(*(longlong *)unaff_RDI[10] + 0x388))();
        local_98 = 0;
        if (local_40 == '\0') {
          if (local_48 != (longlong *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_40 = '\0';
        }
        local_98 = '\x01';
        local_a0 = local_48;
        FUN_01e4ac90();
        if ((local_98 != '\0') && (local_a0 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        local_1a8 = *unaff_RSI;
        local_1b8 = *param_2;
        local_1b0 = '\0';
        local_1a0 = '\0';
        (**(code **)(*(longlong *)unaff_RDI[10] + 0x4b0))(&local_1a8,&local_1b8);
        if ((local_1a0 != '\0') && (local_1a8 != 0)) {
          FUN_00d50b20();
        }
        if ((local_1b0 != '\0') && (local_1b8 != 0)) {
          FUN_00d50b20();
        }
        if ((longlong *)unaff_RDI[10] != (longlong *)0x0) {
          (**(code **)(*(longlong *)unaff_RDI[10] + 0x418))();
          (**(code **)(*local_48 + 0xeb0))();
        }
      }
      else {
        local_58 = *unaff_RSI;
        bVar9 = (char)unaff_RSI[1] == '\0';
        local_59 = local_58 == 0 || bVar9;
        if (local_58 == 0 || bVar9) {
          local_a8 = 0;
        }
        else {
          local_a8 = 0;
          uVar12 = FUN_00d50b00();
          local_a8 = CONCAT71((int7)((ulonglong)uVar12 >> 8),1);
        }
        FUN_01d3abf0();
        uVar12 = FUN_01e466c0();
        (**(code **)(*local_48 + 0xeb0))();
        plVar8 = local_48;
        do {
          do {
            (**(code **)(*local_48 + 0x658))();
            plVar1 = (longlong *)*unaff_RSI;
            if (plVar1 == local_48) {
              if (((char)unaff_RSI[1] == '\0') && (local_48 != (longlong *)0x0)) {
                if (local_40 == '\0') {
                  FUN_00d50b00();
                  goto LAB_01923138;
                }
                goto LAB_019230f4;
              }
LAB_019230fe:
              if (*unaff_RSI != 0) goto LAB_0192314b;
LAB_0192339e:
              if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
LAB_019233b2:
              unaff_RDI = plVar8;
              (**(code **)(*local_48 + 0xeb0))();
              local_d8 = *unaff_RSI;
              local_d0 = '\0';
              FUN_0199eb40();
              if ((local_d0 != '\0') && (local_d8 != 0)) {
                FUN_00d50b20();
              }
              goto LAB_01923887;
            }
            lVar3 = unaff_RSI[1];
            plVar8 = (longlong *)0x0;
            if (local_40 != '\0') {
              *unaff_RSI = (longlong)local_48;
              if (((char)lVar3 != '\0') && (plVar1 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
LAB_019230f4:
              *(undefined1 *)(unaff_RSI + 1) = 1;
              local_40 = '\0';
              goto LAB_019230fe;
            }
            if (local_48 != (longlong *)0x0) {
              FUN_00d50b00();
            }
            *unaff_RSI = (longlong)local_48;
            if (((char)lVar3 != '\0') && (plVar1 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
LAB_01923138:
            *(undefined1 *)(unaff_RSI + 1) = 1;
            if (*unaff_RSI == 0) goto LAB_0192339e;
LAB_0192314b:
            uVar6 = FUN_01d3a5a0();
            plVar8 = (longlong *)(ulonglong)uVar6;
            if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if (uVar6 == 6) goto LAB_019233b2;
            iVar5 = FUN_01d3a5a0();
            if ((iVar5 == 4) && (uVar7 = FUN_01d3b590(), (uVar7 & 2) != 0)) {
              local_198 = local_48;
              local_190 = '\0';
              (**(code **)(*(longlong *)unaff_RDI[10] + 0x410))();
              if ((local_190 != '\0') && (local_198 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              (**(code **)(*(longlong *)unaff_RDI[10] + 0x388))();
              local_88 = 0;
              if (local_40 == '\0') {
                if (local_48 != (longlong *)0x0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_40 = '\0';
              }
              local_88 = '\x01';
              local_90 = local_48;
              FUN_01e4ac90();
              if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              local_188 = local_58;
              local_180 = '\0';
              local_178 = *param_2;
              local_170 = '\0';
              local_168 = *unaff_RSI;
              local_160 = '\0';
              (**(code **)(*(longlong *)unaff_RDI[10] + 0x4b0))(&local_168,&local_178);
              if ((local_160 != '\0') && (local_168 != 0)) {
                FUN_00d50b20();
              }
              if ((local_170 != '\0') && (local_178 != 0)) {
                FUN_00d50b20();
              }
              if ((local_180 != '\0') && (local_188 != 0)) {
                FUN_00d50b20();
              }
              if ((longlong *)unaff_RDI[10] != (longlong *)0x0) {
                (**(code **)(*(longlong *)unaff_RDI[10] + 0x418))();
                (**(code **)(*local_48 + 0xeb0))();
              }
              goto LAB_01923887;
            }
            iVar5 = FUN_01d3a5a0();
          } while (iVar5 != 5);
          FUN_01d3abf0();
          uVar13 = FUN_01e466c0();
          fVar11 = (float)((uint)((float)uVar13 - (float)uVar12) & _DAT_02390140);
          fVar14 = (float)((uint)((float)((ulonglong)uVar13 >> 0x20) -
                                 (float)((ulonglong)uVar12 >> 0x20)) & _DAT_02390140);
          if (fVar14 + DAT_02390d34 < fVar11) {
            local_158 = local_48;
            local_150 = '\0';
            (**(code **)(*(longlong *)unaff_RDI[0xb] + 0x410))();
            if ((local_150 != '\0') && (local_158 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            (**(code **)(*(longlong *)unaff_RDI[0xb] + 0x388))();
            local_78 = 0;
            if (local_40 == '\0') {
              if (local_48 != (longlong *)0x0) {
                FUN_00d50b00();
              }
            }
            else {
              local_40 = '\0';
            }
            local_78 = '\x01';
            local_80 = local_48;
            FUN_01e4ac90();
            if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            local_148 = local_58;
            local_140 = '\0';
            local_138 = *param_2;
            local_130 = '\0';
            local_128 = *unaff_RSI;
            local_120 = '\0';
            (**(code **)(*(longlong *)unaff_RDI[0xb] + 0x4b0))(&local_128,&local_138);
            if ((local_120 != '\0') && (local_128 != 0)) {
              FUN_00d50b20();
            }
            if ((local_130 != '\0') && (local_138 != 0)) {
              FUN_00d50b20();
            }
            if ((local_140 != '\0') && (local_148 != 0)) {
              FUN_00d50b20();
            }
            if ((longlong *)unaff_RDI[0xb] != (longlong *)0x0) {
              (**(code **)(*(longlong *)unaff_RDI[0xb] + 0x418))();
              (**(code **)(*local_48 + 0xeb0))();
            }
            goto LAB_01923887;
          }
        } while (fVar14 <= fVar11 + DAT_02390d34);
        local_118 = local_48;
        local_110 = '\0';
        (**(code **)(*(longlong *)unaff_RDI[10] + 0x410))();
        if ((local_110 != '\0') && (local_118 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        (**(code **)(*(longlong *)unaff_RDI[10] + 0x388))();
        local_68 = 0;
        if (local_40 == '\0') {
          if (local_48 != (longlong *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_40 = '\0';
        }
        local_68 = '\x01';
        local_70 = local_48;
        FUN_01e4ac90();
        if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        local_108 = local_58;
        local_100 = '\0';
        local_f8 = *param_2;
        local_f0 = '\0';
        local_e8 = *unaff_RSI;
        local_e0 = '\0';
        (**(code **)(*(longlong *)unaff_RDI[10] + 0x4b0))(&local_e8,&local_f8);
        if ((local_e0 != '\0') && (local_e8 != 0)) {
          FUN_00d50b20();
        }
        if ((local_f0 != '\0') && (local_f8 != 0)) {
          FUN_00d50b20();
        }
        if ((local_100 != '\0') && (local_108 != 0)) {
          FUN_00d50b20();
        }
        if ((longlong *)unaff_RDI[10] != (longlong *)0x0) {
          (**(code **)(*(longlong *)unaff_RDI[10] + 0x418))();
          (**(code **)(*local_48 + 0xeb0))();
        }
LAB_01923887:
        if (local_59 == '\0') {
          FUN_00d50b20();
          bVar9 = true;
          bVar2 = false;
          uVar7 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
          goto LAB_0192300b;
        }
      }
      bVar2 = false;
      bVar9 = true;
      uVar7 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
    }
  }
LAB_0192300b:
  if ((bVar9) && (!bVar2)) {
    FUN_00d50b20();
  }
LAB_0192301d:
  return uVar7 & 0xffffffff;
}


