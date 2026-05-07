// ===== MUDetectionEditorView — Annotated small functions =====
// 31 readable functions
// Known properties: 1
//   MUDetectionEditorRenderStyle _renderStyle

// ==================================================
// @01922e30 (2696 bytes) — math_loop
// Known properties of MUDetectionEditorView:
// _renderStyle

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong *plVar8;
  longlong *arg1;
  longlong *this;
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
    local_c8 = *arg1;
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
        (**(code **)(*(longlong *)this[10] + 0x410))();
        (**(code **)(*(longlong *)this[10] + 0x388))();
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
        local_1a8 = *arg1;
        local_1b8 = *param_2;
        local_1b0 = '\0';
        local_1a0 = '\0';
        (**(code **)(*(longlong *)this[10] + 0x4b0))(&local_1a8,&local_1b8);
        if ((local_1a0 != '\0') && (local_1a8 != 0)) {
          FUN_00d50b20();
        }
        if ((local_1b0 != '\0') && (local_1b8 != 0)) {
          FUN_00d50b20();
        }
        if ((longlong *)this[10] != (longlong *)0x0) {
          (**(code **)(*(longlong *)this[10] + 0x418))();
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
          local_a8 = CONCAT71((int7)((ulonglong)uVar12 >> 8),1);
        }
        FUN_01d3abf0();
        uVar12 = FUN_01e466c0();
        (**(code **)(*local_48 + 0xeb0))();
        plVar8 = local_48;
        do {
          do {
            (**(code **)(*local_48 + 0x658))();
            plVar1 = (longlong *)*arg1;
            if (plVar1 == local_48) {
              if (((char)arg1[1] == '\0') && (local_48 != (longlong *)0x0)) {
                if (local_40 == '\0') {
                  FUN_00d50b00();
                  goto LAB_01923138;
                }
                goto LAB_019230f4;
              }
LAB_019230fe:
              if (*arg1 != 0) goto LAB_0192314b;
LAB_0192339e:
              if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
LAB_019233b2:
              this = plVar8;
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
            plVar8 = (longlong *)0x0;
            if (local_40 != '\0') {
              *arg1 = (longlong)local_48;
              if (((char)lVar3 != '\0') && (plVar1 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
LAB_019230f4:
              *(undefined1 *)(arg1 + 1) = 1;
              local_40 = '\0';
              goto LAB_019230fe;
            }
            if (local_48 != (longlong *)0x0) {
              FUN_00d50b00();
            }
            *arg1 = (longlong)local_48;
            if (((char)lVar3 != '\0') && (plVar1 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
LAB_01923138:
            *(undefined1 *)(arg1 + 1) = 1;
            if (*arg1 == 0) goto LAB_0192339e;
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
              (**(code **)(*(longlong *)this[10] + 0x410))();
              if ((local_190 != '\0') && (local_198 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              (**(code **)(*(longlong *)this[10] + 0x388))();
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
              local_168 = *arg1;
              local_160 = '\0';
              (**(code **)(*(longlong *)this[10] + 0x4b0))(&local_168,&local_178);
              if ((local_160 != '\0') && (local_168 != 0)) {
                FUN_00d50b20();
              }
              if ((local_170 != '\0') && (local_178 != 0)) {
                FUN_00d50b20();
              }
              if ((local_180 != '\0') && (local_188 != 0)) {
                FUN_00d50b20();
              }
              if ((longlong *)this[10] != (longlong *)0x0) {
                (**(code **)(*(longlong *)this[10] + 0x418))();
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
            (**(code **)(*(longlong *)this[0xb] + 0x410))();
            if ((local_150 != '\0') && (local_158 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            (**(code **)(*(longlong *)this[0xb] + 0x388))();
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
            local_128 = *arg1;
            local_120 = '\0';
            (**(code **)(*(longlong *)this[0xb] + 0x4b0))(&local_128,&local_138);
            if ((local_120 != '\0') && (local_128 != 0)) {
              FUN_00d50b20();
            }
            if ((local_130 != '\0') && (local_138 != 0)) {
              FUN_00d50b20();
            }
            if ((local_140 != '\0') && (local_148 != 0)) {
              FUN_00d50b20();
            }
            if ((longlong *)this[0xb] != (longlong *)0x0) {
              (**(code **)(*(longlong *)this[0xb] + 0x418))();
              (**(code **)(*local_48 + 0xeb0))();
            }
            goto LAB_01923887;
          }
        } while (fVar14 <= fVar11 + DAT_02390d34);
        local_118 = local_48;
        local_110 = '\0';
        (**(code **)(*(longlong *)this[10] + 0x410))();
        if ((local_110 != '\0') && (local_118 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        (**(code **)(*(longlong *)this[10] + 0x388))();
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
        local_e8 = *arg1;
        local_e0 = '\0';
        (**(code **)(*(longlong *)this[10] + 0x4b0))(&local_e8,&local_f8);
        if ((local_e0 != '\0') && (local_e8 != 0)) {
          FUN_00d50b20();
        }
        if ((local_f0 != '\0') && (local_f8 != 0)) {
          FUN_00d50b20();
        }
        if ((local_100 != '\0') && (local_108 != 0)) {
          FUN_00d50b20();
        }
        if ((longlong *)this[10] != (longlong *)0x0) {
          (**(code **)(*(longlong *)this[10] + 0x418))();
          (**(code **)(*local_48 + 0xeb0))();
        }
LAB_01923887:
        if (local_59 == '\0') {
          FUN_00d50b20();
          bVar9 = true;
          bVar2 = false;
          uVar7 = CONCAT71((int7)((ulonglong)this >> 8),1);
          goto LAB_0192300b;
        }
      }
      bVar2 = false;
      bVar9 = true;
      uVar7 = CONCAT71((int7)((ulonglong)this >> 8),1);
    }
  }
LAB_0192300b:
  if ((bVar9) && (!bVar2)) {
    FUN_00d50b20();
  }
LAB_0192301d:
  return uVar7 & 0xffffffff;
}




// ==================================================
// @01959300 (2256 bytes) — math_loop
// Known properties of MUDetectionEditorView:
// _renderStyle

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  void *pvVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  pthread_key_t pVar8;
  longlong lVar9;
  int iVar10;
  undefined8 *this;
  undefined8 *puVar11;
  bool bVar12;
  longlong local_158;
  char local_150;
  undefined8 *local_c8;
  char local_c0;
  undefined8 *local_b8;
  char local_b0;
  undefined8 *local_a8;
  longlong *local_a0;
  undefined8 *local_98;
  char local_90;
  undefined8 *local_88;
  undefined8 *local_80;
  char local_78;
  undefined8 *local_70;
  undefined8 local_68;
  int local_60;
  undefined8 *local_58;
  longlong *local_50;
  undefined8 *local_48;
  char local_40;
  code *local_38;
  
  FUN_00243390();
  puVar1 = local_80;
  if (local_78 == '\0') {
    if (((local_80 != (undefined8 *)0x0) && (FUN_00d50b00(), local_78 != '\0')) &&
       (local_80 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_78 = '\0';
  }
  plVar2 = (longlong *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar2 + 0x18))();
  plVar3 = (longlong *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar3 + 0x18))();
  local_a0 = plVar3;
  local_50 = plVar2;
  if (puVar1 != (undefined8 *)0x0) {
    local_78 = '\0';
    local_80 = (undefined8 *)0x0;
    local_70 = puVar1;
    local_68 = 0xffffffff;
    local_60 = 0;
    local_38 = DAT_02572370;
    local_68._4_4_ = 0;
    while( true ) {
      if (local_68._4_4_ != 0) {
        if (local_68._4_4_ < 1) {
          iVar10 = -local_68._4_4_;
        }
        else {
          iVar10 = (int)local_68 - local_68._4_4_;
          local_68 = CONCAT44(local_68._4_4_,iVar10);
          FUN_00d23690();
          local_60 = local_60 + local_68._4_4_;
          iVar10 = 0;
        }
        local_68 = CONCAT44(iVar10,(int)local_68);
      }
      lVar4 = (longlong)(int)local_68;
      iVar10 = (int)local_68 + 1;
      local_68 = CONCAT44(local_68._4_4_,iVar10);
      if (*(int *)((longlong)local_70 + 0xc) <= iVar10) break;
      lVar9 = local_70[2];
      local_80 = *(undefined8 **)(lVar9 + 8 + lVar4 * 8);
      pvVar5 = _pthread_getspecific((pthread_key_t)lVar9);
      pVar8 = (pthread_key_t)lVar9;
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0125e7c0();
      local_58 = local_48;
      if (((local_40 == '\0') && (local_48 != (undefined8 *)0x0)) &&
         ((FUN_00d50b00(), local_40 != '\0' && (local_48 != (undefined8 *)0x0)))) {
        FUN_00d50b20();
      }
      pvVar5 = _pthread_getspecific(pVar8);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013df480();
      puVar6 = local_48;
      if (((local_40 == '\0') && (local_48 != (undefined8 *)0x0)) &&
         ((FUN_00d50b00(), local_40 != '\0' && (local_48 != (undefined8 *)0x0)))) {
        FUN_00d50b20();
      }
      local_a8 = puVar6;
      FUN_0025dd10();
      puVar11 = local_48;
      if (local_48 == (undefined8 *)0x0) {
        bVar12 = true;
        puVar11 = (undefined8 *)0x0;
        puVar6 = (undefined8 *)0x0;
      }
      else {
        if (local_40 == '\0') {
          FUN_00d50b00();
          puVar6 = (undefined8 *)CONCAT71((int7)((ulonglong)puVar6 >> 8),1);
          bVar12 = false;
          if ((local_40 == '\0') || (bVar12 = false, local_48 == (undefined8 *)0x0))
          goto LAB_019595b6;
          FUN_00d50b20();
        }
        else {
          local_40 = '\0';
        }
        puVar6 = (undefined8 *)CONCAT71((int7)((ulonglong)puVar6 >> 8),1);
        bVar12 = false;
      }
LAB_019595b6:
      local_88 = puVar6;
      if (bVar12) {
        puVar6 = (undefined8 *)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar6 = &DAT_02572358;
        (*local_38)();
        if (puVar6 == puVar11) {
          if (!bVar12) {
            FUN_00d50b20();
          }
        }
        else {
          bVar12 = puVar11 != (undefined8 *)0x0;
          puVar11 = puVar6;
          if (((byte)local_88 & bVar12) == 1) {
            FUN_00d50b20();
          }
        }
        FUN_0025ddc0();
        puVar6 = (undefined8 *)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar6 = &DAT_02572358;
        (*local_38)();
        uVar7 = FUN_0076f1c0();
        bVar12 = true;
        local_88 = (undefined8 *)CONCAT71((int7)((ulonglong)uVar7 >> 8),1);
      }
      else {
        FUN_0076f110();
        puVar6 = local_48;
        if (local_48 == (undefined8 *)0x0) {
          puVar6 = (undefined8 *)0x0;
          bVar12 = false;
        }
        else if (local_40 == '\0') {
          FUN_00d50b00();
          bVar12 = true;
          if ((local_40 != '\0') && (local_48 != (undefined8 *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          bVar12 = true;
        }
      }
      local_48 = local_58;
      local_40 = '\0';
      FUN_00d21140();
      if ((local_40 != '\0') && (local_48 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      local_48 = local_80;
      local_40 = '\0';
      FUN_00d21140();
      if ((local_40 != '\0') && (local_48 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      if ((bVar12) && (puVar6 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      plVar2 = local_50;
      if (((char)local_88 != '\0') && (puVar11 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      if (local_a8 != (undefined8 *)0x0) {
        FUN_00d50b20();
      }
      if (local_58 != (undefined8 *)0x0) {
        FUN_00d50b20();
      }
    }
    FUN_001159b0();
  }
  puVar6 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar6 = &DAT_02572358;
  (*DAT_02572370)();
  if (plVar2 != (longlong *)0x0) {
    local_78 = '\0';
    local_80 = (undefined8 *)0x0;
    local_70 = (undefined8 *)plVar2[2];
    local_68 = local_68 & 0xffffffff00000000;
    if (0 < *(int *)((longlong)local_70 + 0xc)) {
      pVar8 = 0;
      do {
        local_80 = *(undefined8 **)(local_70[2] + (longlong)(int)pVar8 * 8);
        pvVar5 = _pthread_getspecific(pVar8);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0195a240();
        puVar11 = local_48;
        local_c0 = 0;
        if (local_40 == '\0') {
          if (local_48 != (undefined8 *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_40 = '\0';
        }
        local_c0 = '\x01';
        local_c8 = puVar11;
        FUN_0195a310();
        local_b8 = local_98;
        local_b0 = 0;
        if (local_90 == '\0') {
          if (local_98 != (undefined8 *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_90 = '\0';
        }
        local_b0 = '\x01';
        FUN_01372190(&local_b8,&local_c8);
        if ((local_150 != '\0') && (local_158 != 0)) {
          FUN_00d50b20();
        }
        if ((local_b0 != '\0') && (local_b8 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_90 != '\0') && (local_98 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_c0 != '\0') && (local_c8 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_40 != '\0') && (local_48 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
        FUN_0195a310();
        puVar11 = local_98;
        if (local_90 == '\0') {
          if (local_98 != (undefined8 *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_90 = '\0';
        }
        local_48 = puVar11;
        local_40 = '\0';
        FUN_00d214d0();
        if ((local_40 != '\0') && (local_48 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
        if (puVar11 != (undefined8 *)0x0) {
          FUN_00d50b20();
        }
        if ((local_90 != '\0') && (local_98 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
        plVar2 = local_50;
        pVar8 = (int)local_68 + 1;
        local_68 = CONCAT44(local_68._4_4_,pVar8);
      } while ((int)pVar8 < *(int *)((longlong)local_70 + 0xc));
      if ((local_78 != '\0') && (local_80 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  *this = puVar6;
  *(undefined1 *)(this + 1) = 1;
  if (local_a0 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (plVar2 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (puVar1 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  return this;
}




// ==================================================
// @01bbcdd0 (2232 bytes) — math_loop
// Known properties of MUDetectionEditorView:
// _renderStyle

{
  code *pcVar1;
  code *pcVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  ulonglong uVar8;
  void *pvVar9;
  pthread_key_t pVar10;
  code **ppcVar11;
  code *pcVar12;
  longlong *arg1;
  undefined4 uVar13;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Da_04;
  undefined4 extraout_XMM0_Da_05;
  float extraout_XMM0_Db;
  code *local_130;
  undefined1 local_128;
  undefined8 local_120;
  code *local_118;
  char local_110;
  longlong local_108;
  char local_100;
  code *local_f8;
  char local_f0;
  longlong local_e8;
  char local_e0;
  longlong local_d8;
  char local_d0;
  longlong local_c8;
  char local_c0;
  longlong local_b8;
  char local_b0;
  longlong local_a8;
  char local_a0;
  longlong local_98;
  char local_90;
  undefined8 local_88;
  longlong local_70;
  char local_68;
  code *local_60;
  longlong local_58;
  char local_50;
  char local_41;
  code *local_40;
  char local_38;
  
  ppcVar11 = &local_40;
  uVar13 = FUN_01a58dc0();
  pcVar1 = local_40;
  if ((DAT_02732c90 == '\0') &&
     (iVar5 = ___cxa_guard_acquire(), uVar13 = extraout_XMM0_Da_05, iVar5 != 0)) {
    _DAT_02714a48 = FUN_000914a0();
    _DAT_02714a30 = "MUDetectionEditorView";
    _DAT_02714a38 = 0x600;
    param_1 = FUN_0034de90;
    _DAT_02714a40 = FUN_0034de90;
    _DAT_02714a50 = 0;
    uRam0000000002714a58 = 0;
    _DAT_02714a60 = 0;
    _DAT_02714ad8 = 0;
    uRam0000000002714ae0 = 0;
    _DAT_02714ae8 = 0;
    DAT_02714aea = 1;
    _DAT_02714a68 = 0;
    uRam0000000002714a70 = 0;
    _DAT_02714a78 = 0;
    uRam0000000002714a80 = 0;
    _DAT_02714a88 = 0;
    uRam0000000002714a90 = 0;
    _DAT_02714a98 = 0;
    uRam0000000002714aa0 = 0;
    _DAT_02714aa8 = 0;
    uRam0000000002714ab0 = 0;
    _DAT_02714ab8 = 0;
    uRam0000000002714ac0 = 0;
    _DAT_02714ac8 = 0;
    uRam0000000002714ad0 = 0;
    DAT_02714af3 = 0;
    _DAT_02714aeb = 0;
    uVar13 = ___cxa_guard_release();
  }
  if (pcVar1 == (code *)0x0) {
LAB_01bbce32:
    ppcVar11 = (code **)&DAT_02802688;
  }
  else {
    (**(code **)(*(longlong *)pcVar1 + 0x360))();
    cVar4 = FUN_00e85ea0();
    uVar13 = extraout_XMM0_Da;
    if (cVar4 == '\0') goto LAB_01bbce32;
  }
  pcVar1 = *ppcVar11;
  if (*(char *)(ppcVar11 + 1) == '\0') {
    if (pcVar1 != (code *)0x0) {
      uVar13 = FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(ppcVar11 + 1) = 0;
  }
  if ((local_38 != '\0') && (local_40 != (code *)0x0)) {
    uVar13 = FUN_00d50b20();
  }
  if (pcVar1 == (code *)0x0) {
LAB_01bbd09e:
    local_a8 = *arg1;
    local_a0 = '\0';
    local_98 = *param_2;
    local_90 = '\0';
    uVar6 = FUN_01a58d30(uVar13,&local_98);
    uVar8 = (ulonglong)uVar6;
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
    if ((local_a0 != '\0') && (local_a8 != 0)) {
      FUN_00d50b20();
    }
LAB_01bbd10d:
    if (pcVar1 == (code *)0x0) goto LAB_01bbd11a;
  }
  else {
    cVar4 = (**(code **)("/System/Library/Frameworks/ImageIO.framework/Versions/A/ImageIO" +
                        *(longlong *)pcVar1))();
    if (cVar4 != '\0') {
      iVar5 = FUN_01d3a5a0();
      uVar13 = extraout_XMM0_Da_00;
      if ((iVar5 != 1) || (iVar5 = FUN_01d3b630(), uVar13 = extraout_XMM0_Da_01, iVar5 != 1))
      goto LAB_01bbd09e;
      FUN_01d3abf0();
      local_88 = (code *)FUN_01e466c0();
      local_120 = (**(code **)(*(longlong *)pcVar1 + 0x930))();
      FUN_01e436c0();
      if ((extraout_XMM0_Db < local_88._4_4_) && (local_88._4_4_ < extraout_XMM0_Db + DAT_023908ec))
      {
        local_110 = '\0';
        local_108 = *arg1;
        local_100 = '\0';
        local_118 = pcVar1;
        uVar13 = FUN_0192ed00((undefined4)local_88);
        if ((local_100 != '\0') && (local_108 != 0)) {
          FUN_00d50b20();
        }
        local_60 = (code *)CONCAT71(local_60._1_7_,(char)uVar13);
        if ((local_110 != '\0') && (local_118 != (code *)0x0)) {
          FUN_00d50b20();
        }
        uVar8 = CONCAT71((uint7)(uint3)((uint)uVar13 >> 8),1);
        if ((char)local_60 != '\0') goto LAB_01bbd112;
      }
      uVar13 = FUN_01bbc610((undefined4)local_88,local_120);
      pcVar2 = local_40;
      pVar10 = (pthread_key_t)param_1;
      local_60 = (code *)*param_2;
      if (local_60 == local_40) {
        if (((char)param_2[1] == '\0') && (local_40 != (code *)0x0)) {
          param_1 = (code *)(param_2 + 1);
          local_88 = param_1;
          if (local_38 == '\0') {
            uVar13 = FUN_00d50b00();
          }
          goto LAB_01bbd03d;
        }
        if ((local_38 != '\0') && (local_40 != (code *)0x0)) {
          uVar13 = FUN_00d50b20();
        }
      }
      else {
        local_88 = (code *)(param_2 + 1);
        cVar4 = (char)param_2[1];
        if (local_38 == '\0') {
          local_41 = cVar4;
          if (local_40 != (code *)0x0) {
            uVar13 = FUN_00d50b00();
          }
          *param_2 = (longlong)pcVar2;
          if ((local_41 != '\0') && (local_60 != (code *)0x0)) {
            uVar13 = FUN_00d50b20();
          }
        }
        else {
          *param_2 = (longlong)local_40;
          if ((cVar4 != '\0') && (local_60 != (code *)0x0)) {
            uVar13 = FUN_00d50b20();
          }
        }
LAB_01bbd03d:
        pVar10 = (pthread_key_t)param_1;
        *local_88 = (code)0x1;
      }
      if (*param_2 == 0) goto LAB_01bbd09e;
      iVar5 = FUN_01d3b620();
      if (iVar5 == 2) {
        local_128 = 0;
        local_130 = pcVar1;
        FUN_01bbc300((int)local_120,&local_130);
        pcVar2 = local_40;
        if (local_38 == '\0') {
          if (local_40 != (code *)0x0) {
            FUN_00d50b00();
            goto LAB_01bbd380;
          }
        }
        else if (local_40 != (code *)0x0) {
LAB_01bbd380:
          local_88 = pcVar2;
          (**(code **)(&UNK_00001668 + *(longlong *)pcVar1))();
          pvVar9 = _pthread_getspecific(pVar10);
          if (pvVar9 != (void *)0x0) {
            FUN_00e8b990();
          }
          local_f8 = pcVar2;
          local_f0 = '\0';
          pvVar9 = _pthread_getspecific(pVar10);
          if (pvVar9 != (void *)0x0) {
            FUN_00e8b990();
          }
          uVar13 = FUN_0125e7c0();
          local_70 = local_58;
          local_68 = 0;
          if (local_50 == '\0') {
            if (local_58 != 0) {
              uVar13 = FUN_00d50b00();
            }
          }
          else {
            local_50 = '\0';
          }
          local_68 = '\x01';
          uVar13 = FUN_01367c80(uVar13,&local_70);
          if ((local_68 != '\0') && (local_70 != 0)) {
            uVar13 = FUN_00d50b20();
          }
          if ((local_50 != '\0') && (local_58 != 0)) {
            uVar13 = FUN_00d50b20();
          }
          if ((local_f0 != '\0') && (local_f8 != (code *)0x0)) {
            uVar13 = FUN_00d50b20();
          }
          if ((local_38 != '\0') && (local_40 != (code *)0x0)) {
            uVar13 = FUN_00d50b20();
          }
          local_e8 = *param_2;
          local_e0 = '\0';
          (**(code **)(*(longlong *)pcVar1 + 0xab0))(uVar13,&local_e8);
          (**(code **)(*(longlong *)local_40 + 0x620))();
          if ((local_38 != '\0') && (local_40 != (code *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_e0 != '\0') && (local_e8 != 0)) {
            FUN_00d50b20();
          }
          (**(code **)(*(longlong *)pcVar1 + 0xe20))();
          local_40 = (code *)*param_2;
          local_38 = '\0';
          uVar7 = FUN_00d24090();
          uVar13 = extraout_XMM0_Da_04;
          if ((local_38 != '\0') && (local_40 != (code *)0x0)) {
            uVar13 = FUN_00d50b20();
          }
          if ((local_50 != '\0') && (local_58 != 0)) {
            uVar13 = FUN_00d50b20();
          }
          if ((char)uVar7 == '\0') {
            local_d8 = *param_2;
            local_d0 = '\0';
            (**(code **)(*(longlong *)pcVar1 + 0xda8))(uVar13,1);
            if ((local_d0 != '\0') && (local_d8 != 0)) {
              FUN_00d50b20();
            }
          }
          uVar8 = CONCAT71((uint7)(uint3)((uint)uVar7 >> 8),1);
          FUN_00d50b20();
          goto LAB_01bbd112;
        }
        uVar8 = CONCAT71((int7)((ulonglong)local_40 >> 8),1);
        goto LAB_01bbd112;
      }
      (**(code **)(*(longlong *)pcVar1 + 0xe20))();
      local_40 = (code *)*param_2;
      local_38 = '\0';
      cVar4 = FUN_00d24090();
      if ((local_38 != '\0') && (local_40 != (code *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if (cVar4 == '\0') {
        uVar8 = FUN_01d3b590();
        uVar13 = extraout_XMM0_Da_03;
        if ((uVar8 & 4) == 0) {
          uVar13 = (**(code **)(*(longlong *)pcVar1 + 0xda0))();
        }
        local_c8 = *param_2;
        local_c0 = '\0';
        (**(code **)(*(longlong *)pcVar1 + 0xda8))(uVar13,1);
        if ((local_c0 != '\0') && (local_c8 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        uVar8 = FUN_01d3b590();
        if ((uVar8 & 4) != 0) {
          local_b8 = *param_2;
          local_b0 = '\0';
          (**(code **)(*(longlong *)pcVar1 + 0xdb0))(extraout_XMM0_Da_02,1);
          if ((local_b0 != '\0') && (local_b8 != 0)) {
            FUN_00d50b20();
          }
        }
      }
      (**(code **)(*(longlong *)pcVar1 + 0xeb0))();
      do {
        (**(code **)(*(longlong *)pcVar1 + 0x658))();
        pcVar12 = local_40;
        pcVar2 = (code *)*arg1;
        if (pcVar2 == local_40) {
          if (((char)arg1[1] == '\0') && (local_40 != (code *)0x0)) {
            if (local_38 == '\0') {
              FUN_00d50b00();
              goto LAB_01bbd30f;
            }
LAB_01bbd2cd:
            *(undefined1 *)(arg1 + 1) = 1;
            local_38 = '\0';
          }
          lVar3 = *arg1;
        }
        else {
          lVar3 = arg1[1];
          if (local_38 != '\0') {
            *arg1 = (longlong)local_40;
            if (((char)lVar3 != '\0') && (pcVar2 != (code *)0x0)) {
              FUN_00d50b20();
            }
            goto LAB_01bbd2cd;
          }
          if (local_40 != (code *)0x0) {
            FUN_00d50b00();
          }
          *arg1 = (longlong)pcVar12;
          if (((char)lVar3 != '\0') && (pcVar2 != (code *)0x0)) {
            FUN_00d50b20();
          }
LAB_01bbd30f:
          *(undefined1 *)(arg1 + 1) = 1;
          lVar3 = *arg1;
        }
        if (lVar3 == 0) {
          if ((local_38 != '\0') && (local_40 != (code *)0x0)) {
            FUN_00d50b20();
          }
          break;
        }
        uVar6 = FUN_01d3a5a0();
        pcVar12 = (code *)(ulonglong)uVar6;
        if ((local_38 != '\0') && (local_40 != (code *)0x0)) {
          FUN_00d50b20();
        }
      } while (uVar6 != 6);
      uVar8 = CONCAT71((int7)((ulonglong)pcVar12 >> 8),1);
      (**(code **)(*(longlong *)pcVar1 + 0xeb0))();
      goto LAB_01bbd10d;
    }
    uVar8 = 0;
  }
LAB_01bbd112:
  FUN_00d50b20();
LAB_01bbd11a:
  return uVar8 & 0xffffffff;
}




// ==================================================
// @0195a3e0 (2131 bytes) — math_loop
// Known properties of MUDetectionEditorView:
// _renderStyle

{
  bool bVar1;
  bool bVar2;
  undefined8 *puVar3;
  char cVar4;
  longlong *plVar5;
  longlong lVar6;
  void *pvVar7;
  undefined8 *puVar8;
  pthread_key_t pVar9;
  longlong lVar10;
  int iVar11;
  undefined8 *this;
  undefined8 *puVar12;
  undefined8 *puVar13;
  longlong local_148;
  char local_140;
  undefined8 *local_b8;
  char local_b0;
  undefined8 *local_a8;
  char local_a0;
  undefined8 *local_98;
  longlong *local_90;
  undefined8 *local_88;
  char local_80;
  undefined8 *local_78;
  char local_70;
  undefined8 *local_68;
  undefined8 local_60;
  int local_58;
  longlong *local_50;
  undefined8 *local_48;
  char local_40;
  code *local_38;
  
  FUN_00243390();
  local_98 = local_78;
  if (local_70 == '\0') {
    if (((local_78 != (undefined8 *)0x0) && (FUN_00d50b00(), local_70 != '\0')) &&
       (local_78 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_70 = '\0';
  }
  plVar5 = (longlong *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar5 + 0x18))();
  local_50 = plVar5;
  plVar5 = (longlong *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar5 + 0x18))();
  local_90 = plVar5;
  if (local_98 != (undefined8 *)0x0) {
    local_70 = '\0';
    local_78 = (undefined8 *)0x0;
    local_68 = local_98;
    local_60 = 0xffffffff;
    local_58 = 0;
    local_38 = DAT_02572370;
    local_60._4_4_ = 0;
    while( true ) {
      if (local_60._4_4_ != 0) {
        if (local_60._4_4_ < 1) {
          iVar11 = -local_60._4_4_;
        }
        else {
          iVar11 = (int)local_60 - local_60._4_4_;
          local_60 = CONCAT44(local_60._4_4_,iVar11);
          FUN_00d23690();
          local_58 = local_58 + local_60._4_4_;
          iVar11 = 0;
        }
        local_60 = CONCAT44(iVar11,(int)local_60);
      }
      lVar6 = (longlong)(int)local_60;
      iVar11 = (int)local_60 + 1;
      local_60 = CONCAT44(local_60._4_4_,iVar11);
      if (*(int *)((longlong)local_68 + 0xc) <= iVar11) break;
      lVar10 = local_68[2];
      local_78 = *(undefined8 **)(lVar10 + 8 + lVar6 * 8);
      pvVar7 = _pthread_getspecific((pthread_key_t)lVar10);
      pVar9 = (pthread_key_t)lVar10;
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0125e7c0();
      puVar8 = local_48;
      if (((local_40 == '\0') && (local_48 != (undefined8 *)0x0)) &&
         ((FUN_00d50b00(), local_40 != '\0' && (local_48 != (undefined8 *)0x0)))) {
        FUN_00d50b20();
      }
      pvVar7 = _pthread_getspecific(pVar9);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013df480();
      puVar3 = local_48;
      if (((local_40 == '\0') && (local_48 != (undefined8 *)0x0)) &&
         ((FUN_00d50b00(), local_40 != '\0' && (local_48 != (undefined8 *)0x0)))) {
        FUN_00d50b20();
      }
      local_40 = '\0';
      local_48 = puVar3;
      cVar4 = FUN_00ca18c0();
      if ((local_40 != '\0') && (local_48 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      if (cVar4 == '\0') {
        puVar13 = (undefined8 *)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar13 = &DAT_02572358;
        (*local_38)();
        FUN_0025ddc0();
        puVar12 = (undefined8 *)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar12 = &DAT_02572358;
        (*local_38)();
        FUN_0076f1c0();
        bVar1 = true;
        bVar2 = true;
      }
      else {
        FUN_0025dd10();
        puVar13 = local_48;
        if (local_48 == (undefined8 *)0x0) {
          puVar13 = (undefined8 *)0x0;
          bVar2 = false;
        }
        else if (local_40 == '\0') {
          FUN_00d50b00();
          bVar2 = true;
          if ((local_40 != '\0') && (local_48 != (undefined8 *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_40 = '\0';
          bVar2 = true;
        }
        FUN_0076f110();
        puVar12 = local_48;
        if (local_48 == (undefined8 *)0x0) {
          puVar12 = (undefined8 *)0x0;
          bVar1 = false;
        }
        else if (local_40 == '\0') {
          FUN_00d50b00();
          bVar1 = true;
          if ((local_40 != '\0') && (local_48 != (undefined8 *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          bVar1 = true;
        }
      }
      local_40 = '\0';
      local_48 = puVar8;
      FUN_00d21140();
      if ((local_40 != '\0') && (local_48 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      local_48 = local_78;
      local_40 = '\0';
      FUN_00d21140();
      if ((local_40 != '\0') && (local_48 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      if ((bVar1) && (puVar12 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      if ((bVar2) && (puVar13 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      if (puVar3 != (undefined8 *)0x0) {
        FUN_00d50b20();
      }
      if (puVar8 != (undefined8 *)0x0) {
        FUN_00d50b20();
      }
    }
    FUN_001159b0();
  }
  puVar8 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar8 = &DAT_02572358;
  (*DAT_02572370)();
  if (local_50 != (longlong *)0x0) {
    local_70 = '\0';
    local_78 = (undefined8 *)0x0;
    local_68 = (undefined8 *)local_50[2];
    local_60 = local_60 & 0xffffffff00000000;
    if (0 < *(int *)((longlong)local_68 + 0xc)) {
      pVar9 = 0;
      do {
        local_78 = *(undefined8 **)(local_68[2] + (longlong)(int)pVar9 * 8);
        pvVar7 = _pthread_getspecific(pVar9);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0195a240();
        puVar3 = local_48;
        local_b0 = 0;
        if (local_40 == '\0') {
          if (local_48 != (undefined8 *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_40 = '\0';
        }
        local_b0 = '\x01';
        local_b8 = puVar3;
        FUN_0195a310();
        local_a8 = local_88;
        local_a0 = 0;
        if (local_80 == '\0') {
          if (local_88 != (undefined8 *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_80 = '\0';
        }
        local_a0 = '\x01';
        FUN_0137c3f0(&local_a8,&local_b8);
        if ((local_140 != '\0') && (local_148 != 0)) {
          FUN_00d50b20();
        }
        if ((local_a0 != '\0') && (local_a8 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_80 != '\0') && (local_88 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_b0 != '\0') && (local_b8 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_40 != '\0') && (local_48 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
        FUN_0195a310();
        puVar3 = local_88;
        if (local_80 == '\0') {
          if (local_88 != (undefined8 *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_80 = '\0';
        }
        local_48 = puVar3;
        local_40 = '\0';
        FUN_00d214d0();
        if ((local_40 != '\0') && (local_48 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
        if (puVar3 != (undefined8 *)0x0) {
          FUN_00d50b20();
        }
        if ((local_80 != '\0') && (local_88 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
        pVar9 = (int)local_60 + 1;
        local_60 = CONCAT44(local_60._4_4_,pVar9);
      } while ((int)pVar9 < *(int *)((longlong)local_68 + 0xc));
      if ((local_70 != '\0') && (local_78 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  *this = puVar8;
  *(undefined1 *)(this + 1) = 1;
  if (local_90 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (local_50 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (local_98 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  return this;
}




// ==================================================
// @0192ed00 (2068 bytes) — calculation
// Known properties of MUDetectionEditorView:
// _renderStyle

{
  ulonglong uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  uint uVar9;
  void *pvVar10;
  longlong lVar11;
  undefined8 uVar12;
  pthread_key_t pVar13;
  ulonglong in_RCX;
  ulonglong uVar14;
  undefined7 uVar15;
  ulonglong *arg1;
  ulonglong *this;
  double extraout_XMM0_Qa;
  double dVar17;
  undefined8 in_XMM0_Qb;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined1 auVar18 [16];
  undefined1 in_XMM1 [16];
  longlong local_118;
  char local_110;
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  undefined1 local_f0 [8];
  undefined1 local_e8;
  undefined1 local_e0 [8];
  undefined1 local_d8;
  double local_d0;
  ulonglong local_c8;
  char local_c0;
  ulonglong local_b8;
  char local_b0;
  ulonglong local_a8;
  char local_a0;
  ulonglong local_98;
  char local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  uint local_6c;
  longlong local_68;
  char local_60;
  ulonglong local_58;
  char local_50;
  ulonglong local_48;
  undefined8 uVar16;
  
  local_88 = (double)param_1;
  uStack_80 = in_XMM0_Qb;
  iVar8 = FUN_01d3a5a0();
  if ((iVar8 == 1) && (iVar8 = FUN_01d3b630(), iVar8 == 1)) {
    (**(code **)(&UNK_00001668 + *(longlong *)*this))();
    uVar6 = local_58;
    if ((local_50 == '\0') &&
       (((local_58 != 0 && (FUN_00d50b00(), local_50 != '\0')) && (local_58 != 0)))) {
      FUN_00d50b20();
    }
    pvVar10 = _pthread_getspecific((pthread_key_t)in_RCX);
    if ((pvVar10 != (void *)0x0) && (lVar11 = FUN_00e8b990(), lVar11 != 0)) {
      in_RCX = uVar6;
    }
    FUN_01328ff0();
    lVar11 = local_68;
    if (local_60 == '\0') {
      if (local_68 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_60 = '\0';
    }
    local_e8 = 1;
    FUN_0192eab0(local_88,local_f0);
    uVar14 = local_58;
    if ((local_50 == '\0') && (local_58 != 0)) {
      FUN_00d50b00();
    }
    local_48 = uVar14;
    if (lVar11 != 0) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    iVar8 = FUN_01d3b620();
    pVar13 = (pthread_key_t)in_RCX;
    if (iVar8 == 2) {
      if (local_48 == 0) {
        pvVar10 = _pthread_getspecific(pVar13);
        if ((pvVar10 != (void *)0x0) && (lVar11 = FUN_00e8b990(), lVar11 != 0)) {
          pVar13 = (pthread_key_t)uVar6;
        }
        FUN_01329770();
        lVar11 = local_68;
        if (local_60 == '\0') {
          if (local_68 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_60 = '\0';
        }
        local_d8 = 1;
        FUN_0192eab0(local_88,local_e0);
        uVar14 = local_48;
        if ((local_58 != 0) && (uVar14 = local_58, local_50 == '\0')) {
          FUN_00d50b00();
        }
        if (lVar11 != 0) {
          FUN_00d50b20();
        }
        if ((local_60 != '\0') && (local_68 != 0)) {
          FUN_00d50b20();
        }
        if (uVar14 == 0) {
          pvVar10 = _pthread_getspecific(pVar13);
          uVar14 = uVar6;
          if ((pvVar10 != (void *)0x0) && (lVar11 = FUN_00e8b990(), lVar11 != 0)) {
            uVar14 = *(ulonglong *)(uVar6 + 0x20 + (ulonglong)(*(uint *)(lVar11 + 0x154) & 1) * 8);
          }
          local_88 = (double)(**(code **)(*(longlong *)*this + 0x930))(local_88);
          dVar17 = (double)(**(code **)(&UNK_000016a8 + *(longlong *)*this))();
          FUN_01364d50(local_88 - dVar17,1);
          if ((local_110 != '\0') && (local_118 != 0)) {
            FUN_00d50b20();
          }
          uVar14 = CONCAT71((int7)(uVar14 >> 8),1);
          if (uVar6 != 0) {
            FUN_00d50b20();
          }
        }
        else {
          pvVar10 = _pthread_getspecific(pVar13);
          if (pvVar10 != (void *)0x0) {
            FUN_00e8b990();
          }
          local_b0 = '\0';
          local_b8 = uVar14;
          FUN_0135de20();
          if ((local_b0 != '\0') && (local_b8 != 0)) {
            FUN_00d50b20();
          }
          FUN_00d50b20();
          uVar14 = CONCAT71((int7)((ulonglong)lVar11 >> 8),1);
          if (uVar6 != 0) {
            FUN_00d50b20();
          }
        }
      }
      else {
        pvVar10 = _pthread_getspecific(pVar13);
        if (pvVar10 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_c8 = local_48;
        local_c0 = '\0';
        FUN_0135d960();
        if ((local_c0 != '\0') && (local_c8 != 0)) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
        uVar14 = CONCAT71((int7)(uVar14 >> 8),1);
        if (uVar6 != 0) {
          FUN_00d50b20();
        }
      }
      goto LAB_0192f217;
    }
    if (local_48 != 0) {
      uVar12 = (**(code **)(*(longlong *)*this + 0x930))(local_88);
      local_6c = (uint)CONCAT71((int7)((ulonglong)uVar12 >> 8),1);
      dVar17 = extraout_XMM0_Qa;
LAB_0192ef10:
      (**(code **)(*(longlong *)*this + 0x658))();
      uVar7 = local_58;
      uVar1 = *arg1;
      if (uVar1 == local_58) {
        if (((char)arg1[1] == '\0') && (local_58 != 0)) {
          if (local_50 == '\0') {
            FUN_00d50b00();
            goto LAB_0192efbc;
          }
LAB_0192ef73:
          *(undefined1 *)(arg1 + 1) = 1;
          local_50 = '\0';
        }
        pVar13 = (pthread_key_t)in_RCX;
        uVar1 = *arg1;
      }
      else {
        uVar5 = arg1[1];
        uVar14 = 0;
        if (local_50 != '\0') {
          *arg1 = local_58;
          if (((char)uVar5 != '\0') && (uVar1 != 0)) {
            FUN_00d50b20();
          }
          goto LAB_0192ef73;
        }
        if (local_58 != 0) {
          FUN_00d50b00();
        }
        *arg1 = uVar7;
        if (((char)uVar5 != '\0') && (uVar1 != 0)) {
          FUN_00d50b20();
        }
LAB_0192efbc:
        pVar13 = (pthread_key_t)in_RCX;
        *(undefined1 *)(arg1 + 1) = 1;
        uVar1 = *arg1;
      }
      if (uVar1 != 0) {
        uVar9 = FUN_01d3a5a0();
        uVar14 = (ulonglong)uVar9;
        if ((local_50 != '\0') && (local_58 != 0)) {
          FUN_00d50b20();
        }
        pVar13 = (pthread_key_t)in_RCX;
        if (uVar9 == 6) goto LAB_0192f23f;
        iVar8 = FUN_01d3a5a0();
        if (iVar8 == 5) {
          uVar14 = *this;
          FUN_01d3abf0();
          uVar12 = FUN_01e466c0();
          local_d0 = (double)(**(code **)(*(longlong *)*this + 0x930))();
          pvVar10 = _pthread_getspecific((pthread_key_t)in_RCX);
          if ((pvVar10 != (void *)0x0) && (lVar11 = FUN_00e8b990(), lVar11 != 0)) {
            in_RCX = uVar6;
          }
          local_a8 = local_48;
          local_a0 = '\0';
          FUN_013663a0(local_d0 - dVar17,1);
          if ((local_a0 != '\0') && (local_a8 != 0)) {
            FUN_00d50b20();
          }
          auVar18._0_8_ = FUN_01e436c0();
          auVar18._8_8_ = extraout_XMM0_Qb_00;
          local_108 = (float)uVar12;
          fStack_104 = (float)((ulonglong)uVar12 >> 0x20);
          fStack_100 = (float)extraout_XMM0_Qb;
          fStack_fc = (float)((ulonglong)extraout_XMM0_Qb >> 0x20);
          if ((float)local_88 < local_108) {
            local_108 = local_108 - (float)local_88;
            fStack_104 = fStack_104 - local_88._4_4_;
            fStack_100 = fStack_100 - (float)uStack_80;
            fStack_fc = fStack_fc - uStack_80._4_4_;
            auVar4._4_4_ = local_88._4_4_;
            auVar4._0_4_ = (float)local_88 + DAT_0241f374;
            auVar4._8_4_ = (float)uStack_80;
            auVar4._12_4_ = uStack_80._4_4_;
            auVar18 = blendps(auVar18,auVar4,1);
            uVar16 = auVar18._0_8_;
          }
          else {
            auVar2._4_4_ = fStack_104;
            auVar2._0_4_ = local_108 + DAT_0241f374;
            auVar2._8_4_ = fStack_100;
            auVar2._12_4_ = fStack_fc;
            auVar18 = blendps(auVar18,auVar2,1);
            uVar16 = auVar18._0_8_;
            local_108 = (float)local_88 - local_108;
            fStack_104 = local_88._4_4_ - fStack_104;
            fStack_100 = (float)uStack_80 - fStack_100;
            fStack_fc = uStack_80._4_4_ - fStack_fc;
          }
          auVar3._4_4_ = fStack_104;
          auVar3._0_4_ = local_108 + DAT_023b36a0;
          auVar3._8_4_ = fStack_100;
          auVar3._12_4_ = fStack_fc;
          in_XMM1 = blendps(in_XMM1,auVar3,1);
          (**(code **)(*(longlong *)*this + 0x618))(uVar16,in_XMM1._0_8_);
          local_6c = 0;
          (**(code **)(*(longlong *)*this + 0xa48))();
          local_88 = (double)uVar12;
          uStack_80 = extraout_XMM0_Qb;
          dVar17 = local_d0;
        }
        goto LAB_0192ef10;
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
LAB_0192f23f:
      local_98 = *arg1;
      local_90 = '\0';
      FUN_0199eb40();
      if ((local_90 != '\0') && (local_98 != 0)) {
        FUN_00d50b20();
      }
      uVar15 = (undefined7)(uVar14 >> 8);
      if ((local_6c & 1) == 0) {
        pvVar10 = _pthread_getspecific(pVar13);
        if (pvVar10 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_013668f0();
        (**(code **)(*(longlong *)*this + 0x620))();
        (**(code **)(*(longlong *)*this + 0xa48))();
        FUN_00d50b20();
        uVar14 = CONCAT71(uVar15,1);
        if (uVar6 != 0) {
          FUN_00d50b20();
        }
      }
      else {
        FUN_00d50b20();
        uVar14 = CONCAT71(uVar15,1);
        if (uVar6 != 0) {
          FUN_00d50b20();
        }
      }
      goto LAB_0192f217;
    }
    if (uVar6 != 0) {
      FUN_00d50b20();
    }
  }
  uVar14 = 0;
LAB_0192f217:
  return uVar14 & 0xffffffff;
}




// ==================================================
// @0192b000 (1495 bytes) — math_loop
// Known properties of MUDetectionEditorView:
// _renderStyle

{
  code *pcVar1;
  bool bVar2;
  int *piVar3;
  char cVar4;
  byte bVar5;
  longlong lVar6;
  void *pvVar7;
  longlong *plVar8;
  undefined8 uVar9;
  int iVar10;
  char *pcVar11;
  longlong this;
  int iVar12;
  longlong *plVar13;
  longlong *plVar14;
  float fVar15;
  longlong local_c8;
  char local_c0;
  longlong *local_b8;
  char local_b0;
  float local_a4;
  int *local_a0;
  longlong *local_98;
  char local_90;
  longlong *local_88;
  char local_80;
  longlong *local_70;
  char local_68 [8];
  longlong *local_60;
  undefined8 local_58;
  int local_50;
  longlong *local_48;
  longlong *local_40;
  char local_38 [8];
  
  plVar13 = local_70;
  FUN_0192b8f0();
  if ((local_68[0] == '\0') && (local_70 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  local_c8 = 0;
  local_c0 = '\0';
  FUN_01293ed0(&local_c8);
  if (local_68[0] == '\0') {
    if (((local_70 != (longlong *)0x0) && (FUN_00d50b00(), local_68[0] != '\0')) &&
       (local_70 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_68[0] = '\0';
  }
  if ((local_c0 != '\0') && (local_c8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_70 == (longlong *)0x0) || (*(int *)((longlong)local_70 + 0xc) == 0)) {
    local_a0 = (int *)((longlong)local_70 + 0xc);
    bVar2 = true;
    plVar14 = local_70;
  }
  else {
    local_40 = local_70;
    local_68[0] = '\0';
    local_70 = (longlong *)0x0;
    local_48 = plVar13;
    local_60 = plVar13;
    local_58 = 0xffffffff;
    local_50 = 0;
    while( true ) {
      lVar6 = (longlong)(int)local_58;
      iVar12 = (int)local_58 + 1;
      local_58 = CONCAT44(local_58._4_4_,iVar12);
      iVar10 = *(int *)((longlong)local_60 + 0xc);
      bVar2 = iVar12 < iVar10;
      plVar8 = local_60;
      if (iVar10 <= iVar12) break;
      plVar8 = (longlong *)local_60[2];
      local_70 = (longlong *)plVar8[lVar6 + 1];
      pvVar7 = _pthread_getspecific((pthread_key_t)plVar8);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      cVar4 = FUN_01334f30();
      if (cVar4 == '\0') break;
      if (local_58._4_4_ != 0) {
        if (local_58._4_4_ < 1) {
          iVar10 = -local_58._4_4_;
        }
        else {
          local_58 = CONCAT44(local_58._4_4_,(int)local_58 - local_58._4_4_);
          FUN_00d23690();
          local_50 = local_50 + local_58._4_4_;
          iVar10 = 0;
        }
        local_58 = CONCAT44(iVar10,(int)local_58);
      }
    }
    FUN_00115190();
    local_a0 = (int *)((longlong)local_40 + 0xc);
    plVar13 = local_48;
    plVar14 = local_40;
    if ((iVar10 <= iVar12) && (0 < *(int *)((longlong)local_40 + 0xc))) {
      plVar13 = *(longlong **)(this + 0xd8);
      FUN_00d23310();
      piVar3 = local_a0;
      uVar9 = CONCAT71((int7)((ulonglong)plVar8 >> 8),local_68[0]);
      pcVar11 = local_38;
      if (local_68[0] != '\0') {
        pcVar11 = local_68;
      }
      local_38[0] = local_68[0];
      *pcVar11 = '\0';
      if ((local_68[0] != '\0') && (local_70 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      pvVar7 = _pthread_getspecific((pthread_key_t)uVar9);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012660a0();
      (**(code **)(*plVar13 + 0x928))();
      if ((local_38[0] != '\0') && (local_70 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (1 < *(int *)((longlong)local_40 + 0xc)) {
        lVar6 = 1;
        do {
          pvVar7 = _pthread_getspecific((pthread_key_t)uVar9);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          local_a4 = (float)FUN_012660a0();
          pvVar7 = _pthread_getspecific((pthread_key_t)uVar9);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          fVar15 = (float)FUN_012660a0();
          if ((local_a4 != fVar15) || (NAN(local_a4) || NAN(fVar15))) {
            plVar13 = *(longlong **)(this + 0xd8);
            FUN_00e99dd0();
            local_80 = 0;
            if (local_68[0] == '\0') {
              if (local_70 != (longlong *)0x0) {
                FUN_00d50b00();
              }
            }
            else {
              local_68[0] = '\0';
            }
            local_80 = '\x01';
            local_88 = local_70;
            (**(code **)(*plVar13 + 0x968))();
            if ((local_80 != '\0') && (local_88 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_68[0] != '\0') && (local_70 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            bVar2 = false;
            plVar13 = local_48;
            plVar14 = local_40;
            goto LAB_0192b4e9;
          }
          lVar6 = lVar6 + 1;
        } while (lVar6 < *piVar3);
      }
      bVar2 = false;
      plVar13 = local_48;
      plVar14 = local_40;
      goto LAB_0192b4e9;
    }
  }
  plVar8 = *(longlong **)(this + 0xd8);
  FUN_00d8ede0();
  local_90 = 0;
  if (local_68[0] == '\0') {
    if (local_70 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_68[0] = '\0';
  }
  local_90 = '\x01';
  local_98 = local_70;
  (**(code **)(*plVar8 + 0x968))();
  if ((local_90 != '\0') && (local_98 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_68[0] != '\0') && (local_70 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
LAB_0192b4e9:
  FUN_01a13070();
  if ((local_68[0] != '\0') && (local_70 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (local_70 == (longlong *)0x0) {
    bVar5 = 0;
  }
  else {
    FUN_01a13070();
    local_b0 = '\0';
    local_b8 = plVar14;
    bVar5 = (**(code **)("/System/Library/Frameworks/ImageIO.framework/Versions/A/ImageIO" +
                        *local_70 + 8))();
    if ((local_b0 != '\0') && (local_b8 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_68[0] != '\0') && (local_70 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    bVar5 = bVar5 ^ 1;
  }
  pcVar1 = *(code **)(**(longlong **)(this + 0xd8) + 0x998);
  if (bVar2 || (*local_a0 < 1 || bVar5 != 0)) {
    (*pcVar1)();
  }
  else {
    (*pcVar1)();
  }
  if (plVar13 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (plVar14 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}




// ==================================================
// @0192cfb0 (1479 bytes) — calculation
// Known properties of MUDetectionEditorView:
// _renderStyle

{
  bool bVar1;
  char cVar2;
  int iVar3;
  void *pvVar4;
  pthread_key_t in_ECX;
  longlong lVar5;
  longlong arg1;
  longlong *this;
  longlong *plVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  longlong *local_58;
  char local_50;
  longlong *local_48;
  longlong *local_40;
  char local_38;
  
  FUN_01a58dc0();
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (local_40 == (longlong *)0x0) {
LAB_0192d4e9:
    FUN_01a58d00(param_1);
  }
  else {
    FUN_01a58dc0();
    (**(code **)(&UNK_00001668 + *local_58))();
    pvVar4 = _pthread_getspecific(in_ECX);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    iVar3 = FUN_01326de0();
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_01a58dc0();
    FUN_0199f460();
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_01a58dc0();
    (**(code **)(*local_58 + 0xad8))(param_1);
    if (local_40 == (longlong *)0x0) {
      bVar1 = true;
      plVar6 = (longlong *)0x0;
    }
    else {
      plVar6 = local_40;
      if (local_38 == '\0') {
        FUN_00d50b00();
        bVar1 = false;
      }
      else {
        local_38 = '\0';
        bVar1 = false;
      }
    }
    if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (!bVar1) {
      FUN_01a58dc0();
      FUN_0199f460();
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_01a58dc0();
      (**(code **)(&UNK_000017f0 + *local_40))(param_1);
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      *(undefined1 *)(this + 1) = 0;
      lVar5 = *(longlong *)(arg1 + 0x40);
      if (lVar5 != 0) {
        FUN_00d50b00();
      }
      *this = lVar5;
      *(undefined1 *)(this + 1) = 1;
      if (plVar6 == (longlong *)0x0) {
        return;
      }
      FUN_00d50b20();
      return;
    }
    FUN_01a58dc0();
    (**(code **)(*local_58 + 0xab8))(param_1);
    local_48 = local_40;
    if (local_40 == (longlong *)0x0) {
      bVar1 = true;
      local_48 = (longlong *)0x0;
    }
    else if (local_38 == '\0') {
      FUN_00d50b00();
      bVar1 = false;
    }
    else {
      local_38 = '\0';
      bVar1 = false;
    }
    if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (!bVar1) {
      FUN_01a58dc0();
      if (local_38 == '\0') {
        if (local_40 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      uVar7 = FUN_01e437f0(param_1);
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      uVar8 = FUN_019764d0();
      cVar2 = FUN_00d05410(uVar7,uVar8,param_2);
      if (cVar2 != '\0') {
        FUN_01a58dc0();
        FUN_0199f460();
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        FUN_01a58dc0();
        (**(code **)(&UNK_000017f0 + *local_40))(param_1);
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        *(undefined1 *)(this + 1) = 0;
        lVar5 = *(longlong *)(arg1 + 0x40);
        if (lVar5 != 0) {
          FUN_00d50b00();
        }
        *this = lVar5;
        *(undefined1 *)(this + 1) = 1;
        if (local_48 == (longlong *)0x0) {
          return;
        }
        FUN_00d50b20();
        return;
      }
      if ((iVar3 == 2) || (iVar3 == 4)) {
        *(undefined1 *)(this + 1) = 0;
        lVar5 = *(longlong *)(arg1 + 0x40);
        if (lVar5 != 0) {
          FUN_00d50b00();
        }
        *this = lVar5;
        *(undefined1 *)(this + 1) = 1;
        if (local_48 == (longlong *)0x0) {
          return;
        }
        FUN_00d50b20();
        return;
      }
      *(undefined1 *)(this + 1) = 0;
      lVar5 = *(longlong *)(arg1 + 0x38);
      if (lVar5 != 0) {
        FUN_00d50b00();
      }
      *this = lVar5;
      *(undefined1 *)(this + 1) = 1;
      if (local_48 == (longlong *)0x0) {
        return;
      }
      FUN_00d50b20();
      return;
    }
    FUN_01a58dc0();
    (**(code **)(&UNK_000016c8 + *local_58))(param_1);
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (local_40 == (longlong *)0x0) {
      FUN_01a58dc0();
      cVar2 = FUN_01944ee0();
      if (cVar2 == '\0') goto LAB_0192d4e9;
      if ((iVar3 == 2) || (iVar3 == 4)) {
        *(undefined1 *)(this + 1) = 0;
        lVar5 = *(longlong *)(arg1 + 0x40);
        if (lVar5 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        *(undefined1 *)(this + 1) = 0;
        lVar5 = *(longlong *)(arg1 + 0x38);
        if (lVar5 != 0) {
          FUN_00d50b00();
        }
      }
    }
    else {
      FUN_01a58dc0();
      (**(code **)(&UNK_000017f0 + *local_40))(param_1);
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((iVar3 == 2) || (iVar3 == 4)) {
        *(undefined1 *)(this + 1) = 0;
        lVar5 = *(longlong *)(arg1 + 0x40);
        if (lVar5 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        *(undefined1 *)(this + 1) = 0;
        lVar5 = *(longlong *)(arg1 + 0x38);
        if (lVar5 != 0) {
          FUN_00d50b00();
        }
      }
    }
    *this = lVar5;
    *(undefined1 *)(this + 1) = 1;
  }
  return;
}




// ==================================================
// @0192fde0 (1467 bytes) — logic_branch
// Known properties of MUDetectionEditorView:
// _renderStyle

{
  int iVar1;
  
  if (DAT_028b0b78 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_02732c90 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_02714a48 = FUN_000914a0();
          _DAT_02714a30 = "MUDetectionEditorView";
          _DAT_02714a38 = 0x600;
          _DAT_02714a40 = FUN_0034de90;
          _DAT_02714a50 = 0;
          uRam0000000002714a58 = 0;
          _DAT_02714a60 = 0;
          _DAT_02714ad8 = 0;
          uRam0000000002714ae0 = 0;
          _DAT_02714ae8 = 0;
          DAT_02714aea = 1;
          _DAT_02714a68 = 0;
          uRam0000000002714a70 = 0;
          _DAT_02714a78 = 0;
          uRam0000000002714a80 = 0;
          _DAT_02714a88 = 0;
          uRam0000000002714a90 = 0;
          _DAT_02714a98 = 0;
          uRam0000000002714aa0 = 0;
          _DAT_02714aa8 = 0;
          uRam0000000002714ab0 = 0;
          _DAT_02714ab8 = 0;
          uRam0000000002714ac0 = 0;
          _DAT_02714ac8 = 0;
          uRam0000000002714ad0 = 0;
          DAT_02714af3 = 0;
          _DAT_02714aeb = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028b0b38 = "handleConvertNonAdjacentElementsToAdjacentSequence";
      _DAT_028b0b40 = &DAT_02714a30;
      _DAT_028b0b48 = 0;
      _DAT_028b0b50 = &DAT_027e0948;
      _DAT_028b0b58 = FUN_01954a30;
      _DAT_028b0b60 = &UNK_00001801;
      _DAT_028b0b68 = 0;
      uRam00000000028b0b70 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028b0bc0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_02732c90 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_02714a48 = FUN_000914a0();
          _DAT_02714a30 = "MUDetectionEditorView";
          _DAT_02714a38 = 0x600;
          _DAT_02714a40 = FUN_0034de90;
          _DAT_02714a50 = 0;
          uRam0000000002714a58 = 0;
          _DAT_02714a60 = 0;
          _DAT_02714ad8 = 0;
          uRam0000000002714ae0 = 0;
          _DAT_02714ae8 = 0;
          DAT_02714aea = 1;
          _DAT_02714a68 = 0;
          uRam0000000002714a70 = 0;
          _DAT_02714a78 = 0;
          uRam0000000002714a80 = 0;
          _DAT_02714a88 = 0;
          uRam0000000002714a90 = 0;
          _DAT_02714a98 = 0;
          uRam0000000002714aa0 = 0;
          _DAT_02714aa8 = 0;
          uRam0000000002714ab0 = 0;
          _DAT_02714ab8 = 0;
          uRam0000000002714ac0 = 0;
          _DAT_02714ac8 = 0;
          uRam0000000002714ad0 = 0;
          DAT_02714af3 = 0;
          _DAT_02714aeb = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028b0b80 = "handleCreateAttackItemAndSplit";
      _DAT_028b0b88 = &DAT_02714a30;
      _DAT_028b0b90 = 0;
      _DAT_028b0b98 = &DAT_027e0948;
      _DAT_028b0ba0 = FUN_01954a30;
      _DAT_028b0ba8 = &UNK_00001809;
      _DAT_028b0bb0 = 0;
      uRam00000000028b0bb8 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028b0c08 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_02732c90 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_02714a48 = FUN_000914a0();
          _DAT_02714a30 = "MUDetectionEditorView";
          _DAT_02714a38 = 0x600;
          _DAT_02714a40 = FUN_0034de90;
          _DAT_02714a50 = 0;
          uRam0000000002714a58 = 0;
          _DAT_02714a60 = 0;
          _DAT_02714ad8 = 0;
          uRam0000000002714ae0 = 0;
          _DAT_02714ae8 = 0;
          DAT_02714aea = 1;
          _DAT_02714a68 = 0;
          uRam0000000002714a70 = 0;
          _DAT_02714a78 = 0;
          uRam0000000002714a80 = 0;
          _DAT_02714a88 = 0;
          uRam0000000002714a90 = 0;
          _DAT_02714a98 = 0;
          uRam0000000002714aa0 = 0;
          _DAT_02714aa8 = 0;
          uRam0000000002714ab0 = 0;
          _DAT_02714ab8 = 0;
          uRam0000000002714ac0 = 0;
          _DAT_02714ac8 = 0;
          uRam0000000002714ad0 = 0;
          DAT_02714af3 = 0;
          _DAT_02714aeb = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028b0bc8 = "handleToggleRenderStyle";
      _DAT_028b0bd0 = &DAT_02714a30;
      _DAT_028b0bd8 = 0;
      _DAT_028b0be0 = &DAT_027e0948;
      _DAT_028b0be8 = FUN_01954a30;
      _DAT_028b0bf0 = &UNK_00001811;
      _DAT_028b0bf8 = 0;
      uRam00000000028b0c00 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028b0c50 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_02732c90 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_02714a48 = FUN_000914a0();
          _DAT_02714a30 = "MUDetectionEditorView";
          _DAT_02714a38 = 0x600;
          _DAT_02714a40 = FUN_0034de90;
          _DAT_02714a50 = 0;
          uRam0000000002714a58 = 0;
          _DAT_02714a60 = 0;
          _DAT_02714ad8 = 0;
          uRam0000000002714ae0 = 0;
          _DAT_02714ae8 = 0;
          DAT_02714aea = 1;
          _DAT_02714a68 = 0;
          uRam0000000002714a70 = 0;
          _DAT_02714a78 = 0;
          uRam0000000002714a80 = 0;
          _DAT_02714a88 = 0;
          uRam0000000002714a90 = 0;
          _DAT_02714a98 = 0;
          uRam0000000002714aa0 = 0;
          _DAT_02714aa8 = 0;
          uRam0000000002714ab0 = 0;
          _DAT_02714ab8 = 0;
          uRam0000000002714ac0 = 0;
          _DAT_02714ac8 = 0;
          uRam0000000002714ad0 = 0;
          DAT_02714af3 = 0;
          _DAT_02714aeb = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028b0c10 = "handleReseparateElementsAtAttacks";
      _DAT_028b0c18 = &DAT_02714a30;
      _DAT_028b0c20 = 0;
      _DAT_028b0c28 = &DAT_027e0948;
      _DAT_028b0c30 = FUN_01954a30;
      _DAT_028b0c38 = &UNK_000017f9;
      _DAT_028b0c40 = 0;
      uRam00000000028b0c48 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  return;
}




// ==================================================
// @01940080 (1457 bytes) — math_loop
// Known properties of MUDetectionEditorView:
// _renderStyle

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  byte bVar4;
  char cVar5;
  int iVar6;
  void *pvVar7;
  longlong *plVar8;
  longlong *arg1;
  longlong *this;
  undefined4 uVar9;
  float fVar10;
  undefined8 uVar11;
  undefined1 auVar12 [16];
  float local_88;
  longlong local_48;
  char local_40;
  undefined8 extraout_XMM0_Qb;
  
  FUN_01e3f820();
  iVar6 = FUN_01d3a5a0();
  if (iVar6 == 5) {
    FUN_01d3abf0();
    FUN_01e466c0();
    (**(code **)(&UNK_000017c8 + *this))();
    if ((char)this[0xb6] != '\0') {
      FUN_01d3abf0();
      uVar11 = FUN_01e466c0();
      (**(code **)(*this + 0xab8))();
      if ((local_40 == '\0') && (local_48 != 0)) {
        FUN_00d50b00();
      }
      (**(code **)(&UNK_000016c8 + *this))();
      if ((local_40 == '\0') && (local_48 != 0)) {
        FUN_00d50b00();
        *(undefined8 *)((longlong)this + 0x5bc) = uVar11;
        *(undefined1 *)((longlong)this + 0x5c4) = 1;
LAB_019401b7:
        FUN_00d50b20();
      }
      else {
        if (local_48 == 0) {
          *(undefined1 *)((longlong)this + 0x5c4) = 0;
          goto LAB_019401cc;
        }
        *(undefined8 *)((longlong)this + 0x5bc) = uVar11;
        *(undefined1 *)((longlong)this + 0x5c4) = 1;
        if (local_48 != 0) goto LAB_019401b7;
      }
      if (local_48 != 0) {
        FUN_00d50b20();
      }
    }
  }
LAB_019401cc:
  iVar6 = FUN_01d3a5a0();
  if ((iVar6 == 1) && (iVar6 = FUN_01d3b630(), iVar6 == 1)) {
    (**(code **)(&UNK_00001668 + *this))();
    pvVar7 = _pthread_getspecific(param_1);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    iVar6 = FUN_01326de0();
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if (iVar6 == 3) {
      FUN_01d3abf0();
      FUN_01e466c0();
      (**(code **)(&DAT_00001730 + *this))();
      bVar4 = FUN_00d05410();
      if (bVar4 == 0) {
        (**(code **)(&DAT_00001738 + *this))();
        cVar5 = FUN_00d05410();
        if (cVar5 == '\0') goto LAB_01940545;
        pvVar7 = _pthread_getspecific(param_1);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar9 = FUN_013514c0();
        *(undefined4 *)(this + 0xae) = uVar9;
      }
      else {
        pvVar7 = _pthread_getspecific(param_1);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar9 = FUN_013514d0();
        *(undefined4 *)((longlong)this + 0x56c) = uVar9;
      }
      local_88 = (float)(**(code **)(*this + 0xc00))();
      plVar8 = this + 0xae;
      lVar1 = (ulonglong)(bVar4 ^ 1) * 4 + 0x56c;
      do {
        (**(code **)(*this + 0x658))();
        lVar2 = *arg1;
        if (lVar2 == local_48) {
          if (((char)arg1[1] == '\0') && (local_48 != 0)) {
            if (local_40 == '\0') {
              FUN_00d50b00();
              goto LAB_019404cc;
            }
LAB_01940482:
            *(undefined1 *)(arg1 + 1) = 1;
            local_40 = '\0';
          }
          lVar2 = *arg1;
        }
        else {
          lVar3 = arg1[1];
          if (local_40 != '\0') {
            *arg1 = local_48;
            if (((char)lVar3 != '\0') && (lVar2 != 0)) {
              FUN_00d50b20();
            }
            goto LAB_01940482;
          }
          if (local_48 != 0) {
            FUN_00d50b00();
          }
          *arg1 = local_48;
          if (((char)lVar3 != '\0') && (lVar2 != 0)) {
            FUN_00d50b20();
          }
LAB_019404cc:
          *(undefined1 *)(arg1 + 1) = 1;
          lVar2 = *arg1;
        }
        if (lVar2 == 0) {
          if ((local_40 != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
LAB_01940596:
          pvVar7 = _pthread_getspecific(param_1);
          if (bVar4 == 0) {
            if (pvVar7 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_013548b0();
          }
          else {
            if (pvVar7 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_01354950();
            plVar8 = (longlong *)((longlong)this + 0x56c);
          }
          *(undefined4 *)plVar8 = 0x7fc00000;
          (**(code **)(*this + 0x620))();
          return;
        }
        iVar6 = FUN_01d3a5a0();
        if ((local_40 != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
        if (iVar6 == 6) goto LAB_01940596;
        FUN_01d3abf0();
        auVar12._0_8_ = FUN_01e466c0();
        auVar12._8_8_ = extraout_XMM0_Qb;
        if ((float)((ulonglong)auVar12._0_8_ >> 0x20) < DAT_023908d8) {
          insertps(auVar12,ZEXT416((uint)DAT_023908d8),0x10);
        }
        fVar10 = (float)(**(code **)(*this + 0xc00))();
        *(float *)((longlong)this + lVar1) =
             (fVar10 - local_88) + *(float *)((longlong)this + lVar1);
        (**(code **)(*this + 0x620))();
        local_88 = fVar10;
      } while( true );
    }
  }
LAB_01940545:
  FUN_0199c1c0();
  return;
}




// ==================================================
// @019303c0 (1453 bytes) — calculation
// Known properties of MUDetectionEditorView:
// _renderStyle

{
  longlong this;
  undefined4 uVar1;
  longlong local_150;
  char local_148;
  longlong local_140;
  char local_138;
  longlong local_130;
  char local_128;
  longlong local_120;
  char local_118;
  longlong local_110;
  char local_108;
  longlong local_100;
  char local_f8;
  longlong local_f0;
  char local_e8;
  longlong local_e0;
  char local_d8;
  longlong local_d0;
  char local_c8;
  longlong local_c0;
  char local_b8;
  longlong local_b0;
  char local_a8;
  longlong local_a0;
  char local_98;
  longlong local_30;
  char local_28;
  
  FUN_0198e770();
  *(undefined1 *)(this + 0x355) = 1;
  *(undefined4 *)(this + 0x358) = 0;
  *(undefined8 *)(this + 0x568) = 0x7fc000007fc00000;
  *(undefined4 *)(this + 0x570) = 0x7fc00000;
  *(undefined4 *)(this + 0x580) = 0;
  uVar1 = FUN_01bfdcc0(DAT_02390124);
  *(undefined4 *)(this + 0x584) = uVar1;
  *(undefined8 *)(this + 0x598) = 0;
  *(undefined1 *)(this + 0x351) = 0;
  *(undefined1 *)(this + 0x355) = 1;
  *(undefined2 *)(this + 0x352) = 0x101;
  *(undefined2 *)(this + 0x356) = 1;
  *(undefined1 *)(this + 0x280) = 0;
  *(undefined1 *)(this + 0x5b0) = 0;
  FUN_00d403d0();
  FUN_00d50b00();
  local_150 = DAT_027e1fc8;
  if (DAT_027e1fc8 != 0) {
    FUN_00d50b00();
  }
  local_148 = '\x01';
  local_140 = 0;
  local_138 = '\0';
  FUN_00d41430(&local_140,&local_150);
  if ((local_138 != '\0') && (local_140 != 0)) {
    FUN_00d50b20();
  }
  if ((local_148 != '\0') && (local_150 != 0)) {
    FUN_00d50b20();
  }
  if (this != 0) {
    FUN_00d50b20();
  }
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d403d0();
  FUN_00d50b00();
  local_130 = DAT_027086a8;
  if (DAT_027086a8 != 0) {
    FUN_00d50b00();
  }
  local_128 = '\x01';
  local_120 = 0;
  local_118 = '\0';
  FUN_00d41430(&local_120,&local_130);
  if ((local_118 != '\0') && (local_120 != 0)) {
    FUN_00d50b20();
  }
  if ((local_128 != '\0') && (local_130 != 0)) {
    FUN_00d50b20();
  }
  if (this != 0) {
    FUN_00d50b20();
  }
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d403d0();
  FUN_00d50b00();
  local_110 = DAT_027e3b30;
  if (DAT_027e3b30 != 0) {
    FUN_00d50b00();
  }
  local_108 = '\x01';
  local_100 = 0;
  local_f8 = '\0';
  FUN_00d41430(&local_100,&local_110);
  if ((local_f8 != '\0') && (local_100 != 0)) {
    FUN_00d50b20();
  }
  if ((local_108 != '\0') && (local_110 != 0)) {
    FUN_00d50b20();
  }
  if (this != 0) {
    FUN_00d50b20();
  }
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d403d0();
  FUN_00d50b00();
  local_f0 = DAT_027ebe30;
  if (DAT_027ebe30 != 0) {
    FUN_00d50b00();
  }
  local_e8 = '\x01';
  local_e0 = 0;
  local_d8 = '\0';
  FUN_00d41430(&local_e0,&local_f0);
  if ((local_d8 != '\0') && (local_e0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_e8 != '\0') && (local_f0 != 0)) {
    FUN_00d50b20();
  }
  if (this != 0) {
    FUN_00d50b20();
  }
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d403d0();
  FUN_00d50b00();
  local_d0 = DAT_027c8278;
  if (DAT_027c8278 != 0) {
    FUN_00d50b00();
  }
  local_c8 = '\x01';
  local_c0 = 0;
  local_b8 = '\0';
  FUN_00d41430(&local_c0,&local_d0);
  if ((local_b8 != '\0') && (local_c0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_c8 != '\0') && (local_d0 != 0)) {
    FUN_00d50b20();
  }
  if (this != 0) {
    FUN_00d50b20();
  }
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d403d0();
  FUN_00d50b00();
  local_b0 = DAT_027c8280;
  if (DAT_027c8280 != 0) {
    FUN_00d50b00();
  }
  local_a8 = '\x01';
  local_a0 = 0;
  local_98 = '\0';
  FUN_00d41430(&local_a0,&local_b0);
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_a8 != '\0') && (local_b0 != 0)) {
    FUN_00d50b20();
  }
  if (this != 0) {
    FUN_00d50b20();
  }
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
  }
  *(undefined1 *)(this + 0x5c4) = 0;
  *(undefined8 *)(this + 0x5c8) = 0xbe800000;
  *(undefined8 *)(this + 0x5d0) = 0x7ff8000000000000;
  *(undefined1 *)(this + 0x4dc) = 1;
  return;
}




// ==================================================
// @01929220 (1028 bytes) — math_loop
// Known properties of MUDetectionEditorView:
// _renderStyle

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  void *pvVar5;
  longlong *this;
  float fVar6;
  float fVar7;
  float local_58;
  float local_54;
  longlong local_50;
  char local_48;
  int local_38;
  
  lVar2 = local_50;
  (**(code **)(*this + 0x3f8))();
  if ((local_48 == '\0') && (local_50 != 0)) {
    FUN_00d50b00();
  }
  plVar1 = (longlong *)this[0x1b];
  if (*(int *)(local_50 + 0xc) == 0) {
    (**(code **)(*plVar1 + 0x998))();
    plVar1 = (longlong *)this[0x1b];
    FUN_00e9aaa0();
    if (local_48 == '\0') {
      if (local_50 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_48 = '\0';
    }
    (**(code **)(*plVar1 + 0x958))();
    if (local_50 != 0) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    cVar3 = (**(code **)(*this + 0x698))();
    if (cVar3 != '\0') {
      (**(code **)(*this + 0x688))();
    }
    (**(code **)(*plVar1 + 0x998))();
    local_50 = 0;
    local_38 = -1;
    local_58 = DAT_02391074;
    local_54 = DAT_02391078;
    fVar6 = local_58;
    while( true ) {
      local_58 = fVar6;
      lVar4 = (longlong)local_38;
      local_38 = local_38 + 1;
      if (*(int *)(lVar2 + 0xc) <= local_38) break;
      local_50 = *(longlong *)(*(longlong *)(lVar2 + 0x10) + 8 + lVar4 * 8);
      pvVar5 = _pthread_getspecific((pthread_key_t)*(longlong *)(lVar2 + 0x10));
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      fVar6 = (float)FUN_01265b60();
      fVar7 = fVar6;
      if (local_54 <= fVar6) {
        fVar7 = local_54;
      }
      local_54 = fVar7;
      if (fVar6 <= local_58) {
        fVar6 = local_58;
      }
    }
    FUN_00083b20();
    if (*(int *)(lVar2 + 0xc) == 1) {
      plVar1 = (longlong *)this[0x1b];
      (**(code **)(*(longlong *)this[0x1c] + 0x378))(local_54);
      if (local_50 != 0) {
        FUN_00d50b00();
      }
      (**(code **)(*plVar1 + 0x958))();
      if (local_50 != 0) {
        FUN_00d50b20();
      }
    }
    else {
      plVar1 = (longlong *)this[0x1b];
      if ((local_54 != local_58) || (NAN(local_54) || NAN(local_58))) {
        FUN_00e99dd0();
        if (local_50 != 0) {
          FUN_00d50b00();
        }
        (**(code **)(*plVar1 + 0x958))();
        if (local_50 != 0) {
          FUN_00d50b20();
        }
      }
      else {
        (**(code **)(*(longlong *)this[0x1c] + 0x378))();
        if (local_50 != 0) {
          FUN_00d50b00();
        }
        (**(code **)(*plVar1 + 0x958))();
        if (local_50 != 0) {
          FUN_00d50b20();
        }
      }
    }
  }
  FUN_00d50b20();
  return;
}




// ==================================================
// @01927ba0 (1023 bytes) — calculation
// Known properties of MUDetectionEditorView:
// _renderStyle

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  void *pvVar5;
  longlong *this;
  longlong **pplVar6;
  bool bVar7;
  longlong *local_58;
  char local_50;
  longlong *local_48;
  char local_40;
  longlong local_38;
  char local_30;
  
  pplVar6 = &local_58;
  FUN_01a58dc0();
  plVar2 = local_58;
  if ((DAT_02732c90 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
    _DAT_02714a48 = FUN_000914a0();
    _DAT_02714a30 = "MUDetectionEditorView";
    _DAT_02714a38 = 0x600;
    param_1 = 0x34de90;
    _DAT_02714a40 = FUN_0034de90;
    _DAT_02714a50 = 0;
    uRam0000000002714a58 = 0;
    _DAT_02714a60 = 0;
    _DAT_02714ad8 = 0;
    uRam0000000002714ae0 = 0;
    _DAT_02714ae8 = 0;
    DAT_02714aea = 1;
    _DAT_02714a68 = 0;
    uRam0000000002714a70 = 0;
    _DAT_02714a78 = 0;
    uRam0000000002714a80 = 0;
    _DAT_02714a88 = 0;
    uRam0000000002714a90 = 0;
    _DAT_02714a98 = 0;
    uRam0000000002714aa0 = 0;
    _DAT_02714aa8 = 0;
    uRam0000000002714ab0 = 0;
    _DAT_02714ab8 = 0;
    uRam0000000002714ac0 = 0;
    _DAT_02714ac8 = 0;
    uRam0000000002714ad0 = 0;
    DAT_02714af3 = 0;
    _DAT_02714aeb = 0;
    ___cxa_guard_release();
  }
  if (plVar2 == (longlong *)0x0) {
LAB_01927bf7:
    pplVar6 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar2 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') goto LAB_01927bf7;
  }
  if (*pplVar6 == (longlong *)0x0) {
    bVar7 = false;
  }
  else {
    FUN_01a58dc0();
    (**(code **)(&UNK_00001668 + *local_48))();
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    iVar4 = FUN_01326de0();
    bVar7 = iVar4 == 1;
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  lVar1 = DAT_026fb9a8;
  if (bVar7) {
    *(undefined1 *)(this + 1) = 0;
    goto joined_r0x01927ded;
  }
  pplVar6 = &local_58;
  FUN_01a58dc0();
  plVar2 = local_58;
  if ((DAT_02732c90 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
    _DAT_02714a48 = FUN_000914a0();
    _DAT_02714a30 = "MUDetectionEditorView";
    _DAT_02714a38 = 0x600;
    param_1 = 0x34de90;
    _DAT_02714a40 = FUN_0034de90;
    _DAT_02714a50 = 0;
    uRam0000000002714a58 = 0;
    _DAT_02714a60 = 0;
    _DAT_02714ad8 = 0;
    uRam0000000002714ae0 = 0;
    _DAT_02714ae8 = 0;
    DAT_02714aea = 1;
    _DAT_02714a68 = 0;
    uRam0000000002714a70 = 0;
    _DAT_02714a78 = 0;
    uRam0000000002714a80 = 0;
    _DAT_02714a88 = 0;
    uRam0000000002714a90 = 0;
    _DAT_02714a98 = 0;
    uRam0000000002714aa0 = 0;
    _DAT_02714aa8 = 0;
    uRam0000000002714ab0 = 0;
    _DAT_02714ab8 = 0;
    uRam0000000002714ac0 = 0;
    _DAT_02714ac8 = 0;
    uRam0000000002714ad0 = 0;
    DAT_02714af3 = 0;
    _DAT_02714aeb = 0;
    ___cxa_guard_release();
  }
  if (plVar2 == (longlong *)0x0) {
LAB_01927d20:
    pplVar6 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar2 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') goto LAB_01927d20;
  }
  if (*pplVar6 == (longlong *)0x0) {
    bVar7 = false;
  }
  else {
    FUN_01a58dc0();
    (**(code **)(&UNK_00001668 + *local_48))();
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    iVar4 = FUN_01326de0();
    bVar7 = iVar4 == 3;
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  lVar1 = DAT_026fb9c0;
  if (!bVar7) {
    FUN_01a593c0();
    return;
  }
  *(undefined1 *)(this + 1) = 0;
joined_r0x01927ded:
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  *this = lVar1;
  *(undefined1 *)(this + 1) = 1;
  return;
}




// ==================================================
// @0192dad0 (1023 bytes) — calculation
// Known properties of MUDetectionEditorView:
// _renderStyle

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  void *pvVar5;
  longlong *this;
  longlong **pplVar6;
  bool bVar7;
  longlong *local_58;
  char local_50;
  longlong *local_48;
  char local_40;
  longlong local_38;
  char local_30;
  
  pplVar6 = &local_58;
  FUN_01a58dc0();
  plVar2 = local_58;
  if ((DAT_02732c90 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
    _DAT_02714a48 = FUN_000914a0();
    _DAT_02714a30 = "MUDetectionEditorView";
    _DAT_02714a38 = 0x600;
    param_1 = 0x34de90;
    _DAT_02714a40 = FUN_0034de90;
    _DAT_02714a50 = 0;
    uRam0000000002714a58 = 0;
    _DAT_02714a60 = 0;
    _DAT_02714ad8 = 0;
    uRam0000000002714ae0 = 0;
    _DAT_02714ae8 = 0;
    DAT_02714aea = 1;
    _DAT_02714a68 = 0;
    uRam0000000002714a70 = 0;
    _DAT_02714a78 = 0;
    uRam0000000002714a80 = 0;
    _DAT_02714a88 = 0;
    uRam0000000002714a90 = 0;
    _DAT_02714a98 = 0;
    uRam0000000002714aa0 = 0;
    _DAT_02714aa8 = 0;
    uRam0000000002714ab0 = 0;
    _DAT_02714ab8 = 0;
    uRam0000000002714ac0 = 0;
    _DAT_02714ac8 = 0;
    uRam0000000002714ad0 = 0;
    DAT_02714af3 = 0;
    _DAT_02714aeb = 0;
    ___cxa_guard_release();
  }
  if (plVar2 == (longlong *)0x0) {
LAB_0192db27:
    pplVar6 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar2 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') goto LAB_0192db27;
  }
  if (*pplVar6 == (longlong *)0x0) {
    bVar7 = false;
  }
  else {
    FUN_01a58dc0();
    (**(code **)(&UNK_00001668 + *local_48))();
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    iVar4 = FUN_01326de0();
    bVar7 = iVar4 == 1;
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  lVar1 = DAT_026fb9a8;
  if (bVar7) {
    *(undefined1 *)(this + 1) = 0;
    goto joined_r0x0192dd1d;
  }
  pplVar6 = &local_58;
  FUN_01a58dc0();
  plVar2 = local_58;
  if ((DAT_02732c90 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
    _DAT_02714a48 = FUN_000914a0();
    _DAT_02714a30 = "MUDetectionEditorView";
    _DAT_02714a38 = 0x600;
    param_1 = 0x34de90;
    _DAT_02714a40 = FUN_0034de90;
    _DAT_02714a50 = 0;
    uRam0000000002714a58 = 0;
    _DAT_02714a60 = 0;
    _DAT_02714ad8 = 0;
    uRam0000000002714ae0 = 0;
    _DAT_02714ae8 = 0;
    DAT_02714aea = 1;
    _DAT_02714a68 = 0;
    uRam0000000002714a70 = 0;
    _DAT_02714a78 = 0;
    uRam0000000002714a80 = 0;
    _DAT_02714a88 = 0;
    uRam0000000002714a90 = 0;
    _DAT_02714a98 = 0;
    uRam0000000002714aa0 = 0;
    _DAT_02714aa8 = 0;
    uRam0000000002714ab0 = 0;
    _DAT_02714ab8 = 0;
    uRam0000000002714ac0 = 0;
    _DAT_02714ac8 = 0;
    uRam0000000002714ad0 = 0;
    DAT_02714af3 = 0;
    _DAT_02714aeb = 0;
    ___cxa_guard_release();
  }
  if (plVar2 == (longlong *)0x0) {
LAB_0192dc50:
    pplVar6 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar2 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') goto LAB_0192dc50;
  }
  if (*pplVar6 == (longlong *)0x0) {
    bVar7 = false;
  }
  else {
    FUN_01a58dc0();
    (**(code **)(&UNK_00001668 + *local_48))();
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    iVar4 = FUN_01326de0();
    bVar7 = iVar4 == 3;
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  lVar1 = DAT_026fb9c0;
  if (!bVar7) {
    FUN_01a593c0();
    return;
  }
  *(undefined1 *)(this + 1) = 0;
joined_r0x0192dd1d:
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  *this = lVar1;
  *(undefined1 *)(this + 1) = 1;
  return;
}




// ==================================================
// @01bf85a0 (1023 bytes) — calculation
// Known properties of MUDetectionEditorView:
// _renderStyle

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  void *pvVar5;
  longlong *this;
  longlong **pplVar6;
  bool bVar7;
  longlong *local_58;
  char local_50;
  longlong *local_48;
  char local_40;
  longlong local_38;
  char local_30;
  
  pplVar6 = &local_58;
  FUN_01a58dc0();
  plVar2 = local_58;
  if ((DAT_02732c90 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
    _DAT_02714a48 = FUN_000914a0();
    _DAT_02714a30 = "MUDetectionEditorView";
    _DAT_02714a38 = 0x600;
    param_1 = 0x34de90;
    _DAT_02714a40 = FUN_0034de90;
    _DAT_02714a50 = 0;
    uRam0000000002714a58 = 0;
    _DAT_02714a60 = 0;
    _DAT_02714ad8 = 0;
    uRam0000000002714ae0 = 0;
    _DAT_02714ae8 = 0;
    DAT_02714aea = 1;
    _DAT_02714a68 = 0;
    uRam0000000002714a70 = 0;
    _DAT_02714a78 = 0;
    uRam0000000002714a80 = 0;
    _DAT_02714a88 = 0;
    uRam0000000002714a90 = 0;
    _DAT_02714a98 = 0;
    uRam0000000002714aa0 = 0;
    _DAT_02714aa8 = 0;
    uRam0000000002714ab0 = 0;
    _DAT_02714ab8 = 0;
    uRam0000000002714ac0 = 0;
    _DAT_02714ac8 = 0;
    uRam0000000002714ad0 = 0;
    DAT_02714af3 = 0;
    _DAT_02714aeb = 0;
    ___cxa_guard_release();
  }
  if (plVar2 == (longlong *)0x0) {
LAB_01bf85f7:
    pplVar6 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar2 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') goto LAB_01bf85f7;
  }
  if (*pplVar6 == (longlong *)0x0) {
    bVar7 = false;
  }
  else {
    FUN_01a58dc0();
    (**(code **)(&UNK_00001668 + *local_48))();
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    iVar4 = FUN_01326de0();
    bVar7 = iVar4 == 1;
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  lVar1 = DAT_026fb9a8;
  if (bVar7) {
    *(undefined1 *)(this + 1) = 0;
    goto joined_r0x01bf87ed;
  }
  pplVar6 = &local_58;
  FUN_01a58dc0();
  plVar2 = local_58;
  if ((DAT_02732c90 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
    _DAT_02714a48 = FUN_000914a0();
    _DAT_02714a30 = "MUDetectionEditorView";
    _DAT_02714a38 = 0x600;
    param_1 = 0x34de90;
    _DAT_02714a40 = FUN_0034de90;
    _DAT_02714a50 = 0;
    uRam0000000002714a58 = 0;
    _DAT_02714a60 = 0;
    _DAT_02714ad8 = 0;
    uRam0000000002714ae0 = 0;
    _DAT_02714ae8 = 0;
    DAT_02714aea = 1;
    _DAT_02714a68 = 0;
    uRam0000000002714a70 = 0;
    _DAT_02714a78 = 0;
    uRam0000000002714a80 = 0;
    _DAT_02714a88 = 0;
    uRam0000000002714a90 = 0;
    _DAT_02714a98 = 0;
    uRam0000000002714aa0 = 0;
    _DAT_02714aa8 = 0;
    uRam0000000002714ab0 = 0;
    _DAT_02714ab8 = 0;
    uRam0000000002714ac0 = 0;
    _DAT_02714ac8 = 0;
    uRam0000000002714ad0 = 0;
    DAT_02714af3 = 0;
    _DAT_02714aeb = 0;
    ___cxa_guard_release();
  }
  if (plVar2 == (longlong *)0x0) {
LAB_01bf8720:
    pplVar6 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar2 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') goto LAB_01bf8720;
  }
  if (*pplVar6 == (longlong *)0x0) {
    bVar7 = false;
  }
  else {
    FUN_01a58dc0();
    (**(code **)(&UNK_00001668 + *local_48))();
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    iVar4 = FUN_01326de0();
    bVar7 = iVar4 == 3;
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  lVar1 = DAT_026fb9b0;
  if (!bVar7) {
    FUN_01a593c0();
    return;
  }
  *(undefined1 *)(this + 1) = 0;
joined_r0x01bf87ed:
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  *this = lVar1;
  *(undefined1 *)(this + 1) = 1;
  return;
}




// ==================================================
// @019298b0 (997 bytes) — math_loop
// Known properties of MUDetectionEditorView:
// _renderStyle

{
  longlong *plVar1;
  longlong lVar2;
  bool bVar3;
  longlong lVar4;
  uint uVar5;
  void *pvVar6;
  longlong lVar7;
  longlong *this;
  longlong lVar8;
  longlong *plVar9;
  undefined4 uVar10;
  float fVar11;
  uint uVar12;
  ulonglong uVar13;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 uVar14;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  longlong local_98;
  char local_90;
  ulonglong local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  uint local_70;
  float local_6c;
  longlong local_68;
  longlong local_40;
  char local_38;
  
  uVar5 = (**(code **)(*this + 0x688))();
  plVar9 = (longlong *)(ulonglong)uVar5;
  if (((char)uVar5 != '\0') && (param_2 != '\0')) {
    plVar1 = (longlong *)this[0x1c];
    (**(code **)(*(longlong *)this[0x1b] + 0x960))();
    lVar7 = local_40;
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_70 = (**(code **)(*plVar1 + 0x380))();
    if (lVar7 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    (**(code **)(*(longlong *)this[0x1b] + 0x960))();
    local_6c = (float)FUN_00d8d7b0();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    uVar10 = (**(code **)(*this + 0x3f8))();
    lVar7 = local_40;
    if ((((local_38 == '\0') && (local_40 != 0)) && (uVar10 = FUN_00d50b00(), local_38 != '\0')) &&
       (local_40 != 0)) {
      uVar10 = FUN_00d50b20();
    }
    if (0 < *(int *)(lVar7 + 0xc)) {
      lVar8 = 0;
      plVar9 = &local_40;
      local_68 = lVar7;
      do {
        lVar2 = *(longlong *)(*(longlong *)(lVar7 + 0x10) + lVar8 * 8);
        if (lVar2 != 0) {
          uVar10 = FUN_00d50b00();
        }
        local_90 = '\0';
        local_98 = lVar2;
        FUN_019a54a0(uVar10,&local_98);
        lVar7 = local_40;
        if (local_38 == '\0') {
          if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_38 = '\0';
        }
        if ((local_90 != '\0') && (local_98 != 0)) {
          FUN_00d50b20();
        }
        uVar10 = 0;
        uVar14 = 0;
        uVar13 = (ulonglong)local_70;
        if (lVar7 != 0) {
          fVar11 = (float)FUN_00d459e0();
          uVar13 = FUN_00aea5e0(fVar11 + local_6c);
          uVar10 = extraout_XMM0_Dc;
          uVar14 = extraout_XMM0_Dd;
        }
        local_88 = uVar13;
        uStack_80 = uVar10;
        uStack_7c = uVar14;
        fVar11 = (float)FUN_00aea610();
        if (DAT_02390434 < fVar11) {
          local_88 = FUN_00aea5e0(DAT_02390434);
          uStack_80 = extraout_XMM0_Dc_00;
          uStack_7c = extraout_XMM0_Dd_00;
        }
        fVar11 = (float)FUN_00aea610((uint)local_88);
        bVar3 = DAT_0241b664 < fVar11;
        pvVar6 = _pthread_getspecific(param_1);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar12 = -(uint)bVar3 & (uint)local_88;
        FUN_01265b00();
        pvVar6 = _pthread_getspecific(param_1);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar10 = FUN_0125e930();
        lVar4 = local_40;
        local_88 = lVar7;
        if ((local_38 != '\0') && (local_40 != 0)) {
          uVar10 = FUN_00d50b20();
        }
        if (lVar4 != 0) {
          pvVar6 = _pthread_getspecific(param_1);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0125e930();
          pvVar6 = _pthread_getspecific(param_1);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          uVar10 = FUN_0152e890(uVar12);
          if ((local_38 != '\0') && (local_40 != 0)) {
            uVar10 = FUN_00d50b20();
          }
        }
        lVar7 = local_68;
        if (local_88 != 0) {
          uVar10 = FUN_00d50b20();
        }
        if (lVar2 != 0) {
          uVar10 = FUN_00d50b20();
        }
        lVar8 = lVar8 + 1;
      } while (lVar8 < *(int *)(lVar7 + 0xc));
    }
    FUN_00d50b20();
    plVar9 = (longlong *)CONCAT71((int7)((ulonglong)plVar9 >> 8),(char)uVar5);
  }
  return (ulonglong)plVar9 & 0xffffffff;
}




// ==================================================
// @0195b5f0 (996 bytes) — calculation
// Known properties of MUDetectionEditorView:
// _renderStyle

{
  byte bVar1;
  void *pvVar2;
  undefined8 *arg1;
  longlong *this;
  undefined4 uVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  float extraout_XMM0_Dc_01;
  float extraout_XMM0_Dc_02;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  float extraout_XMM0_Dd_01;
  float extraout_XMM0_Dd_02;
  undefined8 in_XMM1_Qb;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  longlong local_88;
  char local_80;
  longlong local_78;
  char local_70;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  longlong local_48;
  char local_40;
  longlong *local_38;
  char local_30;
  
  if (this[0x2f] != 0) {
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01266fe0();
    if (local_38 == (longlong *)0x0) {
      bVar1 = 0;
    }
    else {
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01266fe0();
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012eb770();
      if (local_88 == 0) {
        bVar1 = 0;
      }
      else {
        FUN_01989f80();
        bVar1 = FUN_019b43a0();
        if ((local_70 != '\0') && (local_78 != 0)) {
          FUN_00d50b20();
        }
        bVar1 = bVar1 ^ 1;
      }
      if ((local_80 != '\0') && (local_88 != 0)) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
    }
    if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (bVar1 != 0) {
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01266fe0();
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar3 = FUN_012f7cb0();
      if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01266fe0();
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar4 = FUN_012f9490();
      if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_01989f80();
      uVar7 = (**(code **)(*local_38 + 0x938))(uVar3);
      fVar5 = (float)(**(code **)(*this + 0x4d8))();
      if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_01989f80();
      local_58 = (**(code **)(*local_38 + 0x938))(uVar4);
      uStack_50 = extraout_XMM0_Dc_00;
      uStack_4c = extraout_XMM0_Dd_00;
      fVar6 = (float)(**(code **)(*this + 0x4d8))();
      if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_01989f80();
      uVar8 = FUN_01e436c0();
      if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      fVar5 = (float)uVar7 - fVar5;
      auVar10._4_12_ = local_58._4_12_;
      auVar10._0_4_ = ((float)local_58 - fVar6) - fVar5;
      uVar9 = (**(code **)(*this + 0x4d8))();
      auVar12._0_4_ = (float)uVar8 - (float)uVar9;
      auVar12._4_4_ = (float)((ulonglong)uVar8 >> 0x20) - (float)((ulonglong)uVar9 >> 0x20);
      auVar12._8_4_ = extraout_XMM0_Dc_01 - extraout_XMM0_Dc_02;
      auVar12._12_4_ = extraout_XMM0_Dd_01 - extraout_XMM0_Dd_02;
      auVar11._8_8_ = in_XMM1_Qb;
      auVar11._0_8_ = param_2;
      auVar11 = blendps(auVar10,auVar11,0xe);
      auVar13._4_4_ = (int)((ulonglong)uVar7 >> 0x20);
      auVar13._0_4_ = fVar5;
      auVar13._8_4_ = extraout_XMM0_Dc;
      auVar13._12_4_ = extraout_XMM0_Dd;
      auVar13 = blendps(auVar12,auVar13,1);
      (**(code **)(*(longlong *)*arg1 + 0x390))(auVar13._0_4_,auVar11._0_8_);
      return 1;
    }
  }
  return 0;
}




// ==================================================
// @0192e4a0 (894 bytes) — calculation
// Known properties of MUDetectionEditorView:
// _renderStyle

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  void *pvVar4;
  pthread_key_t pVar5;
  longlong **pplVar6;
  longlong **pplVar7;
  longlong lVar8;
  longlong *this;
  bool bVar9;
  longlong local_58;
  char local_50;
  longlong *local_48;
  char local_40;
  char local_38 [8];
  
  pplVar7 = &local_48;
  FUN_01a58dc0();
  plVar1 = local_48;
  if ((DAT_02732c90 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
    _DAT_02714a48 = FUN_000914a0();
    _DAT_02714a30 = "MUDetectionEditorView";
    _DAT_02714a38 = 0x600;
    _DAT_02714a40 = FUN_0034de90;
    _DAT_02714a50 = 0;
    uRam0000000002714a58 = 0;
    _DAT_02714a60 = 0;
    _DAT_02714ad8 = 0;
    uRam0000000002714ae0 = 0;
    _DAT_02714ae8 = 0;
    DAT_02714aea = 1;
    _DAT_02714a68 = 0;
    uRam0000000002714a70 = 0;
    _DAT_02714a78 = 0;
    uRam0000000002714a80 = 0;
    _DAT_02714a88 = 0;
    uRam0000000002714a90 = 0;
    _DAT_02714a98 = 0;
    uRam0000000002714aa0 = 0;
    _DAT_02714aa8 = 0;
    uRam0000000002714ab0 = 0;
    _DAT_02714ab8 = 0;
    uRam0000000002714ac0 = 0;
    _DAT_02714ac8 = 0;
    uRam0000000002714ad0 = 0;
    DAT_02714af3 = 0;
    _DAT_02714aeb = 0;
    ___cxa_guard_release();
  }
  if (plVar1 == (longlong *)0x0) {
LAB_0192e4fa:
    pplVar7 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar2 = FUN_00e85ea0();
    if (cVar2 == '\0') goto LAB_0192e4fa;
  }
  plVar1 = *pplVar7;
  local_38[0] = *(char *)(pplVar7 + 1);
  pplVar6 = (longlong **)local_38;
  if (local_38[0] != '\0') {
    pplVar6 = pplVar7 + 1;
  }
  *(undefined1 *)pplVar6 = 0;
  if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  pVar5 = (pthread_key_t)pplVar6;
  if (plVar1 == (longlong *)0x0) {
LAB_0192e716:
    FUN_01a593c0();
  }
  else {
    (**(code **)(&UNK_00001668 + *plVar1))();
    pvVar4 = _pthread_getspecific(pVar5);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    iVar3 = FUN_01326de0();
    bVar9 = true;
    if (iVar3 != 2) {
      (**(code **)(&UNK_00001668 + *plVar1))();
      pvVar4 = _pthread_getspecific(pVar5);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      iVar3 = FUN_01326de0();
      bVar9 = iVar3 == 4;
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
    }
    if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    lVar8 = DAT_026fb9e0;
    if (bVar9) {
      *(undefined1 *)(this + 1) = 0;
      if (lVar8 == 0) {
LAB_0192e729:
        lVar8 = 0;
      }
      else {
        FUN_00d50b00();
      }
    }
    else {
      (**(code **)(&UNK_00001668 + *plVar1))();
      pvVar4 = _pthread_getspecific(pVar5);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      iVar3 = FUN_01326de0();
      bVar9 = true;
      if (iVar3 != 3) {
        (**(code **)(&UNK_00001668 + *plVar1))();
        pvVar4 = _pthread_getspecific(pVar5);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        iVar3 = FUN_01326de0();
        bVar9 = iVar3 == 1;
        if ((local_50 != '\0') && (local_58 != 0)) {
          FUN_00d50b20();
        }
      }
      if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      lVar8 = DAT_026fb9d0;
      if (!bVar9) goto LAB_0192e716;
      *(undefined1 *)(this + 1) = 0;
      if (lVar8 == 0) goto LAB_0192e729;
      FUN_00d50b00();
    }
    *this = lVar8;
    *(undefined1 *)(this + 1) = 1;
  }
  if ((local_38[0] != '\0') && (plVar1 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  return;
}




// ==================================================
// @01958cf0 (894 bytes) — calculation
// Known properties of MUDetectionEditorView:
// _renderStyle

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  void *pvVar4;
  pthread_key_t pVar5;
  longlong **pplVar6;
  longlong **pplVar7;
  longlong lVar8;
  longlong *this;
  bool bVar9;
  longlong local_58;
  char local_50;
  longlong *local_48;
  char local_40;
  char local_38 [8];
  
  pplVar7 = &local_48;
  FUN_01a58dc0();
  plVar1 = local_48;
  if ((DAT_02732c90 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
    _DAT_02714a48 = FUN_000914a0();
    _DAT_02714a30 = "MUDetectionEditorView";
    _DAT_02714a38 = 0x600;
    _DAT_02714a40 = FUN_0034de90;
    _DAT_02714a50 = 0;
    uRam0000000002714a58 = 0;
    _DAT_02714a60 = 0;
    _DAT_02714ad8 = 0;
    uRam0000000002714ae0 = 0;
    _DAT_02714ae8 = 0;
    DAT_02714aea = 1;
    _DAT_02714a68 = 0;
    uRam0000000002714a70 = 0;
    _DAT_02714a78 = 0;
    uRam0000000002714a80 = 0;
    _DAT_02714a88 = 0;
    uRam0000000002714a90 = 0;
    _DAT_02714a98 = 0;
    uRam0000000002714aa0 = 0;
    _DAT_02714aa8 = 0;
    uRam0000000002714ab0 = 0;
    _DAT_02714ab8 = 0;
    uRam0000000002714ac0 = 0;
    _DAT_02714ac8 = 0;
    uRam0000000002714ad0 = 0;
    DAT_02714af3 = 0;
    _DAT_02714aeb = 0;
    ___cxa_guard_release();
  }
  if (plVar1 == (longlong *)0x0) {
LAB_01958d4a:
    pplVar7 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar2 = FUN_00e85ea0();
    if (cVar2 == '\0') goto LAB_01958d4a;
  }
  plVar1 = *pplVar7;
  local_38[0] = *(char *)(pplVar7 + 1);
  pplVar6 = (longlong **)local_38;
  if (local_38[0] != '\0') {
    pplVar6 = pplVar7 + 1;
  }
  *(undefined1 *)pplVar6 = 0;
  if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  pVar5 = (pthread_key_t)pplVar6;
  if (plVar1 == (longlong *)0x0) {
LAB_01958f66:
    FUN_01a593c0();
  }
  else {
    (**(code **)(&UNK_00001668 + *plVar1))();
    pvVar4 = _pthread_getspecific(pVar5);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    iVar3 = FUN_01326de0();
    bVar9 = true;
    if (iVar3 != 2) {
      (**(code **)(&UNK_00001668 + *plVar1))();
      pvVar4 = _pthread_getspecific(pVar5);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      iVar3 = FUN_01326de0();
      bVar9 = iVar3 == 4;
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
    }
    if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    lVar8 = DAT_026fb9e0;
    if (bVar9) {
      *(undefined1 *)(this + 1) = 0;
      if (lVar8 == 0) {
LAB_01958f79:
        lVar8 = 0;
      }
      else {
        FUN_00d50b00();
      }
    }
    else {
      (**(code **)(&UNK_00001668 + *plVar1))();
      pvVar4 = _pthread_getspecific(pVar5);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      iVar3 = FUN_01326de0();
      bVar9 = true;
      if (iVar3 != 3) {
        (**(code **)(&UNK_00001668 + *plVar1))();
        pvVar4 = _pthread_getspecific(pVar5);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        iVar3 = FUN_01326de0();
        bVar9 = iVar3 == 1;
        if ((local_50 != '\0') && (local_58 != 0)) {
          FUN_00d50b20();
        }
      }
      if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      lVar8 = DAT_026fb9d0;
      if (!bVar9) goto LAB_01958f66;
      *(undefined1 *)(this + 1) = 0;
      if (lVar8 == 0) goto LAB_01958f79;
      FUN_00d50b00();
    }
    *this = lVar8;
    *(undefined1 *)(this + 1) = 1;
  }
  if ((local_38[0] != '\0') && (plVar1 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  return;
}




// ==================================================
// @01bbdb10 (894 bytes) — calculation
// Known properties of MUDetectionEditorView:
// _renderStyle

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  void *pvVar4;
  pthread_key_t pVar5;
  longlong **pplVar6;
  longlong **pplVar7;
  longlong lVar8;
  longlong *this;
  bool bVar9;
  longlong local_58;
  char local_50;
  longlong *local_48;
  char local_40;
  char local_38 [8];
  
  pplVar7 = &local_48;
  FUN_01a58dc0();
  plVar1 = local_48;
  if ((DAT_02732c90 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
    _DAT_02714a48 = FUN_000914a0();
    _DAT_02714a30 = "MUDetectionEditorView";
    _DAT_02714a38 = 0x600;
    _DAT_02714a40 = FUN_0034de90;
    _DAT_02714a50 = 0;
    uRam0000000002714a58 = 0;
    _DAT_02714a60 = 0;
    _DAT_02714ad8 = 0;
    uRam0000000002714ae0 = 0;
    _DAT_02714ae8 = 0;
    DAT_02714aea = 1;
    _DAT_02714a68 = 0;
    uRam0000000002714a70 = 0;
    _DAT_02714a78 = 0;
    uRam0000000002714a80 = 0;
    _DAT_02714a88 = 0;
    uRam0000000002714a90 = 0;
    _DAT_02714a98 = 0;
    uRam0000000002714aa0 = 0;
    _DAT_02714aa8 = 0;
    uRam0000000002714ab0 = 0;
    _DAT_02714ab8 = 0;
    uRam0000000002714ac0 = 0;
    _DAT_02714ac8 = 0;
    uRam0000000002714ad0 = 0;
    DAT_02714af3 = 0;
    _DAT_02714aeb = 0;
    ___cxa_guard_release();
  }
  if (plVar1 == (longlong *)0x0) {
LAB_01bbdb6a:
    pplVar7 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar2 = FUN_00e85ea0();
    if (cVar2 == '\0') goto LAB_01bbdb6a;
  }
  plVar1 = *pplVar7;
  local_38[0] = *(char *)(pplVar7 + 1);
  pplVar6 = (longlong **)local_38;
  if (local_38[0] != '\0') {
    pplVar6 = pplVar7 + 1;
  }
  *(undefined1 *)pplVar6 = 0;
  if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  pVar5 = (pthread_key_t)pplVar6;
  if (plVar1 == (longlong *)0x0) {
LAB_01bbdd86:
    FUN_01a593c0();
  }
  else {
    (**(code **)(&UNK_00001668 + *plVar1))();
    pvVar4 = _pthread_getspecific(pVar5);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    iVar3 = FUN_01326de0();
    bVar9 = true;
    if (iVar3 != 2) {
      (**(code **)(&UNK_00001668 + *plVar1))();
      pvVar4 = _pthread_getspecific(pVar5);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      iVar3 = FUN_01326de0();
      bVar9 = iVar3 == 4;
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
    }
    if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    lVar8 = DAT_026fb9e0;
    if (bVar9) {
      *(undefined1 *)(this + 1) = 0;
      if (lVar8 == 0) {
LAB_01bbdd99:
        lVar8 = 0;
      }
      else {
        FUN_00d50b00();
      }
    }
    else {
      (**(code **)(&UNK_00001668 + *plVar1))();
      pvVar4 = _pthread_getspecific(pVar5);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      iVar3 = FUN_01326de0();
      bVar9 = true;
      if (iVar3 != 3) {
        (**(code **)(&UNK_00001668 + *plVar1))();
        pvVar4 = _pthread_getspecific(pVar5);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        iVar3 = FUN_01326de0();
        bVar9 = iVar3 == 1;
        if ((local_50 != '\0') && (local_58 != 0)) {
          FUN_00d50b20();
        }
      }
      if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      lVar8 = DAT_026fb9d0;
      if (!bVar9) goto LAB_01bbdd86;
      *(undefined1 *)(this + 1) = 0;
      if (lVar8 == 0) goto LAB_01bbdd99;
      FUN_00d50b00();
    }
    *this = lVar8;
    *(undefined1 *)(this + 1) = 1;
  }
  if ((local_38[0] != '\0') && (plVar1 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  return;
}




// ==================================================
// @0192a150 (888 bytes) — math_loop
// Known properties of MUDetectionEditorView:
// _renderStyle

{
  longlong lVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  void *pvVar6;
  longlong *arg1;
  longlong *this;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined4 uVar10;
  longlong local_a8;
  char local_a0;
  longlong local_98;
  char local_90;
  longlong *local_40;
  char local_38;
  
  FUN_01d3a560();
  iVar5 = FUN_01d3b590();
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (iVar5 == 8) {
    FUN_00c9eb90(DAT_02394254);
  }
  else {
    FUN_00c9eb90(DAT_02391090);
  }
  (**(code **)(*this + 0x3f8))();
  if (local_40 == (longlong *)0x0) {
    bVar3 = true;
    plVar9 = (longlong *)0x0;
  }
  else {
    if (local_38 == '\0') {
      FUN_00d50b00();
    }
    bVar3 = false;
    plVar9 = local_40;
  }
  if (this[0x1b] == *arg1) {
    FUN_00e38430();
  }
  FUN_00e99dd0();
  (**(code **)(*(longlong *)*arg1 + 0x960))();
  lVar8 = local_98;
  if (local_90 == '\0') {
    if (local_98 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_90 = '\0';
  }
  cVar4 = (**(code **)(*local_40 + 0x50))();
  if (lVar8 != 0) {
    FUN_00d50b20();
  }
  if ((local_90 != '\0') && (local_98 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((cVar4 != '\0') && (0 < *(int *)((longlong)plVar9 + 0xc))) {
    lVar7 = 0;
    lVar8 = 0;
    bVar2 = false;
    do {
      lVar1 = *(longlong *)(plVar9[2] + lVar7 * 8);
      if (lVar8 == lVar1) {
        if ((!bVar2) && (lVar8 != 0)) {
          bVar2 = true;
          FUN_00d50b00();
        }
      }
      else {
        if (lVar1 != 0) {
          FUN_00d50b00();
        }
        if ((bVar2) && (lVar8 != 0)) {
          FUN_00d50b20();
          bVar2 = true;
          lVar8 = lVar1;
        }
        else {
          bVar2 = true;
          lVar8 = lVar1;
        }
      }
      if (this[0x1b] == *arg1) {
        pvVar6 = _pthread_getspecific((pthread_key_t)arg1);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01265b60();
        FUN_00aea610();
        uVar10 = FUN_00d46dc0();
        if (local_38 == '\0') {
          if (local_40 != (longlong *)0x0) {
            uVar10 = FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        local_a0 = '\0';
        local_a8 = lVar8;
        FUN_019b43b0(uVar10,&local_a8);
        if ((local_a0 != '\0') && (local_a8 != 0)) {
          FUN_00d50b20();
        }
        if (local_40 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      lVar7 = lVar7 + 1;
    } while (lVar7 < *(int *)((longlong)plVar9 + 0xc));
    if ((bVar2) && (lVar8 != 0)) {
      FUN_00d50b20();
    }
  }
  if (!bVar3 && plVar9 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}




// ==================================================
// @0195c420 (834 bytes) — calculation
// Known properties of MUDetectionEditorView:
// _renderStyle

{
  void *pvVar1;
  longlong lVar2;
  pthread_key_t pVar3;
  longlong *plVar4;
  longlong this;
  longlong local_c8;
  char local_c0;
  longlong local_b8;
  char local_b0;
  longlong local_a8;
  char local_a0;
  longlong local_98;
  char local_90;
  longlong local_88;
  char local_80;
  longlong local_78;
  char local_70;
  longlong *local_68;
  char local_60;
  
  FUN_00d403d0();
  if (this != 0) {
    FUN_00d50b00();
  }
  local_b8 = 0;
  local_b0 = '\0';
  local_a8 = 0;
  local_a0 = '\0';
  plVar4 = &local_a8;
  FUN_00d41040(plVar4,&local_b8);
  pVar3 = (pthread_key_t)plVar4;
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_b0 != '\0') && (local_b8 != 0)) {
    FUN_00d50b20();
  }
  if (this != 0) {
    FUN_00d50b20();
  }
  if ((local_c0 != '\0') && (local_c8 != 0)) {
    FUN_00d50b20();
  }
  if (*(longlong *)(this + 0x178) != 0) {
    pvVar1 = _pthread_getspecific(pVar3);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    plVar4 = (longlong *)(this + 0x168);
    (**(code **)(*(longlong *)(this + 0x168) + 0x10))();
    FUN_00d50b00();
    local_98 = 0;
    local_90 = '\0';
    FUN_00e8b9a0();
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x10))();
      FUN_00d50b20();
    }
    pvVar1 = _pthread_getspecific(pVar3);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    lVar2 = FUN_00e8b990();
    if (lVar2 != 0) {
      pvVar1 = _pthread_getspecific(pVar3);
      if (pvVar1 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_00e8b990();
      (**(code **)(*plVar4 + 0x10))();
      FUN_00d50b00();
      local_88 = 0;
      local_80 = '\0';
      local_78 = 0;
      local_70 = '\0';
      FUN_00cbadd0(&local_78,&local_88);
      if ((local_70 != '\0') && (local_78 != 0)) {
        FUN_00d50b20();
      }
      if ((local_80 != '\0') && (local_88 != 0)) {
        FUN_00d50b20();
      }
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x10))();
        FUN_00d50b20();
      }
    }
    if (*(longlong *)(this + 0x178) != 0) {
      *(undefined8 *)(this + 0x178) = 0;
      FUN_00d50b20();
    }
  }
  (**(code **)(*(longlong *)(this + 0x168) + 0x10))();
  FUN_00d50b00();
  local_60 = '\x01';
  local_68 = (longlong *)(this + 0x168);
  FUN_00cbb340();
  if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
    (**(code **)(*local_68 + 0x10))();
    FUN_00d50b20();
  }
  FUN_01989e30();
  return;
}




// ==================================================
// @0195bf50 (812 bytes) — calculation
// Known properties of MUDetectionEditorView:
// _renderStyle

{
  char cVar1;
  byte bVar2;
  void *pvVar3;
  pthread_key_t in_ECX;
  longlong *this;
  undefined8 unaff_R12;
  ulonglong uVar4;
  float fVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong *local_40;
  char local_38;
  undefined7 uVar5;
  
  fVar11 = param_2;
  fVar6 = (float)(**(code **)(*this + 0x4d8))();
  cVar1 = FUN_00d054a0();
  if (cVar1 == '\0') {
    uVar4 = 0;
  }
  else {
    uVar5 = (undefined7)((ulonglong)unaff_R12 >> 8);
    uVar4 = CONCAT71(uVar5,1);
    if (this[0x2f] != 0) {
      pvVar3 = _pthread_getspecific(in_ECX);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01266fe0();
      if (local_40 == (longlong *)0x0) {
        bVar2 = 0;
      }
      else {
        FUN_01989f80();
        cVar1 = FUN_019a9840();
        if (cVar1 == '\0') {
          bVar2 = 0;
        }
        else {
          FUN_01989f80();
          bVar2 = FUN_019b43a0();
          if ((local_58 != '\0') && (local_60 != 0)) {
            FUN_00d50b20();
          }
          bVar2 = bVar2 ^ 1;
        }
        if ((local_68 != '\0') && (local_70 != 0)) {
          FUN_00d50b20();
        }
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (bVar2 != 0) {
        pvVar3 = _pthread_getspecific(in_ECX);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01266fe0();
        pvVar3 = _pthread_getspecific(in_ECX);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar7 = FUN_012f7cb0();
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        pvVar3 = _pthread_getspecific(in_ECX);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01266fe0();
        pvVar3 = _pthread_getspecific(in_ECX);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar8 = FUN_012f9490();
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        FUN_01989f80();
        fVar9 = (float)(**(code **)(*local_40 + 0x938))(uVar7);
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        FUN_01989f80();
        fVar10 = (float)(**(code **)(*local_40 + 0x938))(uVar8);
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        fVar12 = fVar6;
        if (fVar6 <= fVar9) {
          fVar12 = fVar9;
        }
        if (fVar11 + fVar6 <= fVar10) {
          fVar10 = fVar11 + fVar6;
        }
        uVar4 = CONCAT71(uVar5,param_1 < fVar10 && fVar12 < param_2 + param_1);
      }
    }
  }
  return uVar4 & 0xffffffff;
}




// ==================================================
// @0195bb80 (705 bytes) — calculation
// Known properties of MUDetectionEditorView:
// _renderStyle

{
  char cVar1;
  byte bVar2;
  void *pvVar3;
  pthread_key_t in_ECX;
  longlong *this;
  undefined8 unaff_R12;
  ulonglong uVar4;
  undefined8 uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong *local_40;
  char local_38;
  undefined7 uVar5;
  
  uVar6 = (**(code **)(*this + 0x4d8))();
  cVar1 = FUN_00d05410(param_1,uVar6,param_2);
  if (cVar1 == '\0') {
    uVar4 = 0;
  }
  else {
    uVar5 = (undefined7)((ulonglong)unaff_R12 >> 8);
    uVar4 = CONCAT71(uVar5,1);
    if (this[0x2f] != 0) {
      pvVar3 = _pthread_getspecific(in_ECX);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01266fe0();
      if (local_40 == (longlong *)0x0) {
        bVar2 = 0;
      }
      else {
        FUN_01989f80();
        cVar1 = FUN_019a9840();
        if (cVar1 == '\0') {
          bVar2 = 0;
        }
        else {
          FUN_01989f80();
          bVar2 = FUN_019b43a0();
          if ((local_48 != '\0') && (local_50 != 0)) {
            FUN_00d50b20();
          }
          bVar2 = bVar2 ^ 1;
        }
        if ((local_58 != '\0') && (local_60 != 0)) {
          FUN_00d50b20();
        }
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (bVar2 != 0) {
        pvVar3 = _pthread_getspecific(in_ECX);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01266fe0();
        pvVar3 = _pthread_getspecific(in_ECX);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar7 = (double)FUN_012f7cb0();
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        pvVar3 = _pthread_getspecific(in_ECX);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01266fe0();
        pvVar3 = _pthread_getspecific(in_ECX);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar8 = (double)FUN_012f9490();
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        FUN_01989f80();
        dVar9 = (double)(**(code **)(*local_40 + 0x930))(param_1);
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        uVar4 = CONCAT71(uVar5,dVar9 <= dVar8 && dVar7 <= dVar9);
      }
    }
  }
  return uVar4 & 0xffffffff;
}




// ==================================================
// @019280d0 (654 bytes) — calculation
// Known properties of MUDetectionEditorView:
// _renderStyle

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  void *pvVar4;
  undefined8 *this;
  longlong **pplVar5;
  bool bVar6;
  longlong *local_78;
  char local_70;
  longlong *local_68;
  char local_60;
  longlong *local_58;
  char local_50;
  longlong local_48;
  char local_40;
  longlong local_38;
  char local_30;
  
  pplVar5 = &local_78;
  FUN_01a58dc0();
  plVar1 = local_78;
  if ((DAT_02732c90 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
    _DAT_02714a48 = FUN_000914a0();
    _DAT_02714a30 = "MUDetectionEditorView";
    _DAT_02714a38 = 0x600;
    param_1 = 0x34de90;
    _DAT_02714a40 = FUN_0034de90;
    _DAT_02714a50 = 0;
    uRam0000000002714a58 = 0;
    _DAT_02714a60 = 0;
    _DAT_02714ad8 = 0;
    uRam0000000002714ae0 = 0;
    _DAT_02714ae8 = 0;
    DAT_02714aea = 1;
    _DAT_02714a68 = 0;
    uRam0000000002714a70 = 0;
    _DAT_02714a78 = 0;
    uRam0000000002714a80 = 0;
    _DAT_02714a88 = 0;
    uRam0000000002714a90 = 0;
    _DAT_02714a98 = 0;
    uRam0000000002714aa0 = 0;
    _DAT_02714aa8 = 0;
    uRam0000000002714ab0 = 0;
    _DAT_02714ab8 = 0;
    uRam0000000002714ac0 = 0;
    _DAT_02714ac8 = 0;
    uRam0000000002714ad0 = 0;
    DAT_02714af3 = 0;
    _DAT_02714aeb = 0;
    ___cxa_guard_release();
  }
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x360))();
    cVar2 = FUN_00e85ea0();
    if (cVar2 != '\0') goto LAB_0192812e;
  }
  pplVar5 = (longlong **)&DAT_02802688;
LAB_0192812e:
  if (*pplVar5 == (longlong *)0x0) {
    bVar6 = false;
  }
  else {
    FUN_01a58dc0();
    (**(code **)(&UNK_00001668 + *local_68))();
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    iVar3 = FUN_01326de0();
    bVar6 = true;
    if (iVar3 != 2) {
      FUN_01a58dc0();
      (**(code **)(&UNK_00001668 + *local_58))();
      pvVar4 = _pthread_getspecific(param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      iVar3 = FUN_01326de0();
      bVar6 = iVar3 == 4;
      if ((local_30 != '\0') && (local_38 != 0)) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (bVar6) {
    *(undefined1 *)(this + 1) = 0;
    *this = 0;
  }
  else {
    FUN_01a58be0();
  }
  return;
}




// ==================================================
// @0192bba0 (557 bytes) — math_loop
// Known properties of MUDetectionEditorView:
// _renderStyle

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  void *pvVar4;
  pthread_key_t pVar5;
  longlong *arg1;
  longlong this;
  int iVar6;
  longlong local_88;
  char local_80;
  longlong local_68;
  char local_60;
  longlong local_40;
  char local_38;
  
  lVar2 = *arg1;
  if (lVar2 != 0) {
    if (0 < *(int *)(lVar2 + 0xc)) {
      plVar1 = (longlong *)(this + 0xb8);
      iVar6 = 0;
      do {
        pVar5 = (pthread_key_t)param_1;
        pvVar4 = _pthread_getspecific(pVar5);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        (**(code **)(*plVar1 + 0x10))();
        FUN_00d50b00();
        pvVar4 = _pthread_getspecific(pVar5);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_00d4efa0();
        lVar3 = DAT_026d83f8;
        if (DAT_026d83f8 != 0) {
          FUN_00d50b00();
        }
        FUN_00c841b0();
        local_38 = 0;
        if (local_60 == '\0') {
          if (local_68 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_60 = '\0';
        }
        local_38 = '\x01';
        local_40 = local_68;
        param_1 = 0x20;
        FUN_00e8b850(0x20,&local_40);
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if ((local_60 != '\0') && (local_68 != 0)) {
          FUN_00d50b20();
        }
        if (lVar3 != 0) {
          FUN_00d50b20();
        }
        if ((local_80 != '\0') && (local_88 != 0)) {
          FUN_00d50b20();
        }
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 0x10))();
          FUN_00d50b20();
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < *(int *)(lVar2 + 0xc));
    }
    FUN_001159b0();
  }
  return;
}




// ==================================================
// @0192bf20 (552 bytes) — math_loop
// Known properties of MUDetectionEditorView:
// _renderStyle

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  void *pvVar4;
  longlong *arg1;
  longlong this;
  int iVar5;
  longlong local_88;
  char local_80;
  longlong local_68;
  char local_60;
  
  lVar2 = *arg1;
  if (lVar2 != 0) {
    if (0 < *(int *)(lVar2 + 0xc)) {
      plVar1 = (longlong *)(this + 0xb8);
      iVar5 = 0;
      do {
        pvVar4 = _pthread_getspecific(param_1);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        (**(code **)(*plVar1 + 0x10))();
        FUN_00d50b00();
        pvVar4 = _pthread_getspecific(param_1);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_00d4efa0();
        lVar3 = DAT_026d83f8;
        if (DAT_026d83f8 != 0) {
          FUN_00d50b00();
        }
        FUN_00c841b0();
        if (local_60 == '\0') {
          if (local_68 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_60 = '\0';
        }
        FUN_00e8b9a0();
        if (local_68 != 0) {
          FUN_00d50b20();
        }
        if ((local_60 != '\0') && (local_68 != 0)) {
          FUN_00d50b20();
        }
        if (lVar3 != 0) {
          FUN_00d50b20();
        }
        if ((local_80 != '\0') && (local_88 != 0)) {
          FUN_00d50b20();
        }
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 0x10))();
          FUN_00d50b20();
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < *(int *)(lVar2 + 0xc));
    }
    FUN_001159b0();
  }
  return;
}




// ==================================================
// @005ac4f0 (550 bytes) — logic_branch
// Known properties of MUDetectionEditorView:
// _renderStyle

{
  int iVar1;
  
  if (DAT_02717a48 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_02717a38 = 0x100000000;
      DAT_02717a40 = 1;
      ___cxa_guard_release();
    }
  }
  if (DAT_02717a80 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_02717a50 = "MUDetectionEditorRenderStyle";
      _DAT_02717a58 = 2;
      DAT_02717a5c = DAT_02717a40;
      _DAT_02717a60 = &DAT_02717a38;
      _DAT_02717a68 = &DAT_02717a20;
      _DAT_02717a70 = 0;
      uRam0000000002717a78 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e876a0();
  if (DAT_02717a10 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_02732c90 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_02714a48 = FUN_000914a0();
          _DAT_02714a30 = "MUDetectionEditorView";
          _DAT_02714a38 = 0x600;
          _DAT_02714a40 = FUN_0034de90;
          _DAT_02714a50 = 0;
          uRam0000000002714a58 = 0;
          _DAT_02714a60 = 0;
          _DAT_02714ad8 = 0;
          uRam0000000002714ae0 = 0;
          _DAT_02714ae8 = 0;
          DAT_02714aea = 1;
          _DAT_02714a68 = 0;
          uRam0000000002714a70 = 0;
          _DAT_02714a78 = 0;
          uRam0000000002714a80 = 0;
          _DAT_02714a88 = 0;
          uRam0000000002714a90 = 0;
          _DAT_02714a98 = 0;
          uRam0000000002714aa0 = 0;
          _DAT_02714aa8 = 0;
          uRam0000000002714ab0 = 0;
          _DAT_02714ab8 = 0;
          uRam0000000002714ac0 = 0;
          _DAT_02714ac8 = 0;
          uRam0000000002714ad0 = 0;
          DAT_02714af3 = 0;
          _DAT_02714aeb = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_027179d0 = "_renderStyle";
      _DAT_027179d8 = &DAT_02714a30;
      _DAT_027179e0 = 0;
      _DAT_027179e8 = 0x6500;
      _DAT_027179f0 = "MUDetectionEditorRenderStyle";
      _DAT_027179f8 = &DAT_02717a50;
      _DAT_02717a00 = 0;
      uRam0000000002717a08 = 0;
      ___cxa_guard_release();
    }
  }
  return &DAT_027179d0;
}




// ==================================================
// @0192c7a0 (514 bytes) — math_loop
// Known properties of MUDetectionEditorView:
// _renderStyle

{
  char cVar1;
  void *pvVar2;
  int iVar3;
  undefined4 uVar4;
  longlong local_80;
  char local_78;
  longlong local_58;
  char local_50;
  longlong local_48;
  char local_40;
  
  if (param_2 != 0) {
    uVar4 = FUN_01caeac0();
    FUN_0192b8f0();
    if (local_78 == '\0') {
      if (local_80 == 0) {
        return 1;
      }
      FUN_00d50b00();
    }
    else if (local_80 == 0) {
      return 1;
    }
    if (0 < *(int *)(local_80 + 0xc)) {
      iVar3 = 0;
      do {
        pvVar2 = _pthread_getspecific(param_1);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01264240();
        if (local_58 == 0) {
          cVar1 = '\0';
        }
        else {
          pvVar2 = _pthread_getspecific(param_1);
          if (pvVar2 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01264240();
          pvVar2 = _pthread_getspecific(param_1);
          if (pvVar2 != (void *)0x0) {
            FUN_00e8b990();
          }
          cVar1 = FUN_01334f30();
          if ((local_40 != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
        }
        if ((local_50 != '\0') && (local_58 != 0)) {
          FUN_00d50b20();
        }
        if (cVar1 != '\0') {
          pvVar2 = _pthread_getspecific(param_1);
          if (pvVar2 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01266020(uVar4);
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(local_80 + 0xc));
    }
    FUN_001159b0();
    FUN_00d50b20();
  }
  return 1;
}




// ==================================================
// @01928f30 (509 bytes) — math_loop
// Known properties of MUDetectionEditorView:
// _renderStyle

{
  byte bVar1;
  int iVar2;
  longlong *this;
  longlong lVar3;
  bool bVar4;
  bool bVar5;
  longlong lVar6;
  longlong local_50;
  char local_48;
  
  (**(code **)(*this + 0x3f8))();
  lVar3 = local_50;
  if (local_50 == 0) {
    bVar1 = 1;
    lVar3 = 0;
    bVar4 = false;
  }
  else if (local_48 == '\0') {
    FUN_00d50b00();
    bVar1 = 0;
    bVar4 = true;
  }
  else {
    bVar1 = 0;
    bVar4 = true;
  }
  iVar2 = *(int *)(lVar3 + 0xc);
  if (0 < iVar2) {
    lVar6 = 0;
    do {
      if (*(longlong *)(*(longlong *)(lVar3 + 0x10) + lVar6 * 8) != 0) {
        FUN_00d50b00();
        FUN_00d50b20();
        iVar2 = *(int *)(lVar3 + 0xc);
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 < iVar2);
  }
  FUN_01a13090();
  (**(code **)(*this + 0x3f8))();
  if (local_50 == lVar3) {
    if ((bool)(bVar1 & local_50 != 0)) {
      bVar5 = true;
      if (local_48 != '\0') goto LAB_019290cf;
      bVar4 = true;
      FUN_00d50b00();
    }
  }
  else {
    if (local_48 != '\0') {
      bVar5 = true;
      lVar3 = local_50;
      if (bVar4) {
        FUN_00d50b20();
      }
      goto LAB_019290cf;
    }
    if (local_50 != 0) {
      FUN_00d50b00();
    }
    bVar5 = true;
    lVar3 = local_50;
    if (!bVar4) goto LAB_019290cf;
    FUN_00d50b20();
    bVar4 = true;
  }
  bVar5 = bVar4;
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
LAB_019290cf:
  iVar2 = *(int *)(lVar3 + 0xc);
  if (0 < iVar2) {
    lVar6 = 0;
    do {
      if (*(longlong *)(*(longlong *)(lVar3 + 0x10) + lVar6 * 8) != 0) {
        FUN_00d50b00();
        FUN_00d50b20();
        iVar2 = *(int *)(lVar3 + 0xc);
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 < iVar2);
  }
  if (bVar5) {
    FUN_00d50b20();
  }
  return;
}




// ==================================================
// @019246c0 (505 bytes) — calculation
// Known properties of MUDetectionEditorView:
// _renderStyle

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *this;
  longlong local_58;
  char local_50;
  longlong local_48;
  char local_40;
  
  FUN_00d50100();
  if ((DAT_028b0a88 == 0) || (DAT_028b0a91 == '\0')) {
    FUN_00e8cb50();
    lVar3 = DAT_027e07d8;
    if (DAT_028b0a88 == 0) {
      if (DAT_027e07d8 != 0) {
        FUN_00d50b00();
      }
      FUN_01d51a40();
      if (local_50 == '\0') {
        if (local_58 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_50 = '\0';
      }
      FUN_01d20ca0(_DAT_023b5570);
      lVar2 = DAT_028b0a88;
      if (DAT_028b0a88 != local_48) {
        if (local_40 == '\0') {
          if (local_48 == 0) {
            lVar2 = 0;
          }
          else {
            FUN_00d50b00();
            lVar2 = local_48;
          }
        }
        else {
          local_40 = '\0';
          lVar2 = local_48;
        }
        bVar1 = DAT_028b0a88 != 0;
        DAT_028b0a88 = lVar2;
        if (bVar1) {
          FUN_00d50b20();
          lVar2 = local_48;
        }
      }
      if ((lVar2 != 0) && (DAT_028b0a90 == '\0')) {
        DAT_028b0a90 = '\x01';
        FUN_00e8cb90();
        lVar2 = local_48;
      }
      if ((local_40 != '\0') && (lVar2 != 0)) {
        FUN_00d50b20();
      }
      if (local_58 != 0) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      DAT_028b0a91 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028b0a91 = '\x01';
      FUN_00e8cb70();
    }
    if (DAT_028b0a88 == 0) {
      lVar3 = 0;
      goto LAB_01924879;
    }
  }
  lVar3 = DAT_028b0a88;
  FUN_00d50b00();
LAB_01924879:
  (**(code **)(*this + 0x390))();
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  return;
}




// ==================================================
// @0192e160 (505 bytes) — calculation
// Known properties of MUDetectionEditorView:
// _renderStyle

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *this;
  longlong local_58;
  char local_50;
  longlong local_48;
  char local_40;
  
  FUN_00d50100();
  if ((DAT_028b0b28 == 0) || (DAT_028b0b31 == '\0')) {
    FUN_00e8cb50();
    lVar3 = DAT_027e0810;
    if (DAT_028b0b28 == 0) {
      if (DAT_027e0810 != 0) {
        FUN_00d50b00();
      }
      FUN_01d51a40();
      if (local_50 == '\0') {
        if (local_58 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_50 = '\0';
      }
      FUN_01d20ca0(_DAT_0241ea30);
      lVar2 = DAT_028b0b28;
      if (DAT_028b0b28 != local_48) {
        if (local_40 == '\0') {
          if (local_48 == 0) {
            lVar2 = 0;
          }
          else {
            FUN_00d50b00();
            lVar2 = local_48;
          }
        }
        else {
          local_40 = '\0';
          lVar2 = local_48;
        }
        bVar1 = DAT_028b0b28 != 0;
        DAT_028b0b28 = lVar2;
        if (bVar1) {
          FUN_00d50b20();
          lVar2 = local_48;
        }
      }
      if ((lVar2 != 0) && (DAT_028b0b30 == '\0')) {
        DAT_028b0b30 = '\x01';
        FUN_00e8cb90();
        lVar2 = local_48;
      }
      if ((local_40 != '\0') && (lVar2 != 0)) {
        FUN_00d50b20();
      }
      if (local_58 != 0) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      DAT_028b0b31 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028b0b31 = '\x01';
      FUN_00e8cb70();
    }
    if (DAT_028b0b28 == 0) {
      lVar3 = 0;
      goto LAB_0192e319;
    }
  }
  lVar3 = DAT_028b0b28;
  FUN_00d50b00();
LAB_0192e319:
  (**(code **)(*this + 0x390))();
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  return;
}



