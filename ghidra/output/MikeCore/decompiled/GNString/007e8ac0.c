// Function: FUN_007e8ac0
// Address: 007e8ac0
// Size: 4168 bytes
// Class: GNString
// String references:
//   "%@-%@"


void FUN_007e8ac0(void)

{
  longlong lVar1;
  longlong lVar2;
  void *pvVar3;
  undefined8 uVar4;
  char *pcVar5;
  pthread_key_t pVar6;
  longlong lVar7;
  char *pcVar8;
  longlong *plVar9;
  longlong unaff_RDI;
  longlong *plVar10;
  longlong unaff_R15;
  longlong *plVar11;
  undefined4 uVar12;
  undefined8 local_268;
  longlong local_260;
  char local_258;
  longlong *local_250;
  longlong local_248;
  char local_240;
  longlong local_238;
  char local_230;
  longlong *local_228;
  char local_220;
  longlong local_218;
  char local_210;
  longlong local_208;
  char local_200;
  longlong local_1f8;
  char local_1f0;
  longlong local_1e8;
  char local_1e0;
  longlong local_1d8;
  char local_1d0;
  longlong *local_1c8;
  char local_1c0;
  longlong *local_1b8;
  char local_1b0;
  longlong *local_1a8;
  char local_1a0;
  longlong *local_198;
  char local_190;
  longlong *local_188;
  char local_180;
  longlong *local_178;
  char local_170;
  longlong local_168;
  char local_160;
  longlong *local_158;
  char local_150;
  longlong local_148;
  char local_140;
  longlong *local_138;
  char local_130;
  undefined7 uStack_12f;
  char local_128;
  longlong local_120;
  char local_118;
  longlong *local_110;
  char local_108;
  longlong local_100;
  char local_f8;
  longlong *local_f0;
  undefined4 local_e4;
  longlong local_e0;
  char local_d8;
  longlong *local_d0;
  char local_c8;
  longlong local_c0;
  int local_b8;
  int iStack_b4;
  int local_b0;
  longlong *local_a8;
  char local_a0;
  longlong local_98;
  undefined4 local_8c;
  longlong *local_88;
  char local_80;
  longlong *local_78;
  char local_70 [8];
  longlong local_68;
  char local_60;
  longlong local_58;
  char local_50;
  longlong *local_48;
  char local_40 [8];
  char local_38 [8];
  
  (**(code **)(**(longlong **)(unaff_RDI + 0x30) + 0x468))();
  plVar10 = DAT_02729550;
  if (DAT_02729550 != (longlong *)0x0) {
    FUN_00d50b00();
  }
  local_88 = local_48;
  local_a8 = plVar10;
  FUN_00083ea0(2,&local_a8);
  FUN_000b4da0();
  local_f0 = local_d0;
  if (local_c8 == '\0') {
    if (((local_d0 != (longlong *)0x0) && (FUN_00d50b00(), local_c8 != '\0')) &&
       (local_d0 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_c8 = '\0';
  }
  local_78 = (longlong *)&DAT_0253d630;
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  local_78 = &DAT_024c5048;
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  if (plVar10 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  lVar2 = DAT_026f6f70;
  if (DAT_026f6f70 != 0) {
    FUN_00d50b00();
  }
  lVar7 = DAT_02703540;
  local_248 = lVar2;
  local_240 = '\x01';
  if (DAT_02703540 != 0) {
    FUN_00d50b00();
  }
  local_238 = lVar7;
  local_230 = '\x01';
  local_228 = local_f0;
  local_220 = '\0';
  FUN_00d31230(&local_228);
  plVar10 = local_d0;
  if (local_c8 == '\0') {
    if (local_d0 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_c8 = '\0';
  }
  local_78 = plVar10;
  local_70[0] = '\0';
  FUN_00172e90();
  if ((local_70[0] != '\0') && (local_78 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar10 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_c8 != '\0') && (local_d0 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_220 != '\0') && (local_228 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_230 != '\0') && (local_238 != 0)) {
    FUN_00d50b20();
  }
  if ((local_240 != '\0') && (local_248 != 0)) {
    FUN_00d50b20();
  }
  local_c0 = *(longlong *)(unaff_RDI + 0x28);
  *(float *)(unaff_RDI + 0x3c) =
       (DAT_02390124 - *(float *)(unaff_RDI + 0x38)) / (float)*(int *)(local_c0 + 0xc);
  local_c8 = 0;
  local_d0 = (longlong *)0x0;
  local_b8 = -1;
  iStack_b4 = 0;
  local_b0 = 0;
  local_250 = (longlong *)(unaff_RDI + 0x10);
  do {
    if (iStack_b4 != 0) {
      if (iStack_b4 < 1) {
        iStack_b4 = -iStack_b4;
      }
      else {
        local_b8 = local_b8 - iStack_b4;
        FUN_00d23690();
        local_b0 = local_b0 + iStack_b4;
        iStack_b4 = 0;
      }
    }
    lVar2 = (longlong)local_b8;
    local_b8 = local_b8 + 1;
    if (*(int *)(local_c0 + 0xc) <= local_b8) {
      FUN_007ead60();
      if (local_f0 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      return;
    }
    lVar7 = *(longlong *)(local_c0 + 0x10);
    lVar2 = *(longlong *)(lVar7 + 8 + lVar2 * 8);
    local_d0 = (longlong *)lVar2;
    if (*(int *)(*(longlong *)(unaff_RDI + 0x28) + 0xc) < 2) {
      uVar4 = (**(code **)(**(longlong **)(unaff_RDI + 0x30) + 0x468))();
      plVar10 = local_78;
      if (local_78 == (longlong *)0x0) {
        local_8c = 0;
        lVar7 = *(longlong *)(unaff_RDI + 0x30);
        if (lVar7 != 0) goto LAB_007e90f8;
        goto LAB_007e9247;
      }
      local_8c = (undefined4)CONCAT71((int7)((ulonglong)uVar4 >> 8),1);
      if (((local_70[0] == '\0') && (FUN_00d50b00(), local_70[0] != '\0')) &&
         (local_78 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      lVar7 = *(longlong *)(unaff_RDI + 0x30);
      if (lVar7 == 0) goto LAB_007e9247;
LAB_007e90f8:
      FUN_00d50b00();
      local_e4 = 0;
    }
    else {
      (**(code **)(**(longlong **)(unaff_RDI + 0x30) + 0x468))();
      pVar6 = (pthread_key_t)lVar7;
      FUN_00d8f1a0();
      pvVar3 = _pthread_getspecific(pVar6);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_004a1110();
      pvVar3 = _pthread_getspecific(pVar6);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01313ad0();
      pvVar3 = _pthread_getspecific(pVar6);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012cb110();
      pvVar3 = _pthread_getspecific(pVar6);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012e6160();
      FUN_00d23310();
      plVar9 = local_48;
      local_38[0] = local_40[0];
      pcVar8 = local_38;
      pcVar5 = local_40;
      if (local_40[0] == '\0') {
        pcVar5 = pcVar8;
      }
      *pcVar5 = '\0';
      if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      pvVar3 = _pthread_getspecific((pthread_key_t)pcVar8);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012e6000();
      local_48 = local_a8;
      local_268 = CONCAT71(uStack_12f,local_130);
      uVar12 = FUN_00083ea0(2,&local_268);
      uVar4 = FUN_00d8cb40(uVar12,&local_78);
      plVar10 = local_88;
      if (local_88 == (longlong *)0x0) {
        local_8c = 0;
      }
      else if (local_80 == '\0') {
        uVar4 = FUN_00d50b00();
        local_8c = (undefined4)CONCAT71((int7)((ulonglong)uVar4 >> 8),1);
        if ((local_80 != '\0') && (local_88 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_80 = '\0';
        local_8c = (undefined4)CONCAT71((int7)((ulonglong)uVar4 >> 8),1);
      }
      local_78 = (longlong *)&DAT_0253d630;
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      local_78 = &DAT_024c5048;
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      if ((local_128 != '\0') && (CONCAT71(uStack_12f,local_130) != 0)) {
        FUN_00d50b20();
      }
      if ((local_38[0] != '\0') && (plVar9 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_258 != '\0') && (local_260 != 0)) {
        FUN_00d50b20();
      }
      if ((local_210 != '\0') && (local_218 != 0)) {
        FUN_00d50b20();
      }
      if ((local_200 != '\0') && (local_208 != 0)) {
        FUN_00d50b20();
      }
      if ((local_1f0 != '\0') && (local_1f8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_a0 != '\0') && (local_a8 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_d8 != '\0') && (local_e0 != 0)) {
        FUN_00d50b20();
      }
LAB_007e9247:
      local_e4 = (undefined4)CONCAT71((int7)((ulonglong)unaff_R15 >> 8),1);
      lVar7 = 0;
    }
    local_1e0 = '\0';
    local_1d0 = '\0';
    local_1c0 = '\0';
    local_118 = 0;
    lVar1 = *(longlong *)(unaff_RDI + 0x20);
    local_1e8 = lVar2;
    local_1d8 = lVar7;
    local_1c8 = plVar10;
    local_138 = plVar10;
    local_98 = lVar7;
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    local_118 = '\x01';
    local_108 = 0;
    local_120 = lVar1;
    (**(code **)(*local_250 + 0x10))();
    FUN_00d50b00();
    local_110 = local_250;
    local_108 = '\x01';
    FUN_00752a00(&local_1c8,&local_1d8,&local_120,&local_110);
    plVar10 = local_78;
    if (local_70[0] == '\0') {
      if (((local_78 != (longlong *)0x0) && (FUN_00d50b00(), local_70[0] != '\0')) &&
         (local_78 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_70[0] = '\0';
    }
    if ((local_108 != '\0') && (local_110 != (longlong *)0x0)) {
      (**(code **)(*local_110 + 0x10))();
      FUN_00d50b20();
    }
    if ((local_118 != '\0') && (local_120 != 0)) {
      FUN_00d50b20();
    }
    if ((local_1c0 != '\0') && (local_1c8 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_1d0 != '\0') && (local_1d8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_1e0 != '\0') && (local_1e8 != 0)) {
      FUN_00d50b20();
    }
    FUN_01f27fe0();
    (**(code **)(*local_48 + 0x720))();
    local_1b8 = plVar10;
    local_1b0 = '\0';
    local_f8 = 0;
    lVar2 = *(longlong *)(unaff_RDI + 0x30);
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    local_f8 = '\x01';
    pVar6 = 0xffffffff;
    local_100 = lVar2;
    FUN_002aa8c0(0xffffffff,&local_100);
    unaff_R15 = local_98;
    if ((local_f8 != '\0') && (local_100 != 0)) {
      FUN_00d50b20();
    }
    if ((local_1b0 != '\0') && (local_1b8 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_70[0] != '\0') && (local_78 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (1 < *(int *)(*(longlong *)(unaff_RDI + 0x28) + 0xc)) {
      pvVar3 = _pthread_getspecific(pVar6);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_004a1110();
      pvVar3 = _pthread_getspecific(pVar6);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01313ad0();
      pvVar3 = _pthread_getspecific(pVar6);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012cb110();
      pvVar3 = _pthread_getspecific(pVar6);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012e6160();
      FUN_00d23310();
      plVar9 = local_78;
      local_130 = local_70[0];
      pcVar8 = &local_130;
      pcVar5 = local_70;
      if (local_70[0] == '\0') {
        pcVar5 = pcVar8;
      }
      *pcVar5 = '\0';
      if ((local_70[0] != '\0') && (plVar9 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      pVar6 = (pthread_key_t)pcVar8;
      if (local_130 == '\0') {
        if (plVar9 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_130 = '\0';
      }
      if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_80 != '\0') && (local_88 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_a0 != '\0') && (local_a8 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_d8 != '\0') && (local_e0 != 0)) {
        FUN_00d50b20();
      }
      if (plVar9 != (longlong *)0x0) {
        local_1a8 = plVar9;
        local_1a0 = '\0';
        FUN_004f9670();
        plVar11 = local_78;
        if ((local_70[0] != '\0') && (local_78 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_1a0 != '\0') && (local_1a8 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar11 != (longlong *)0x0) {
          (**(code **)(*plVar10 + 0x628))();
          pvVar3 = _pthread_getspecific(pVar6);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_004a5250();
          uVar12 = FUN_004405c0();
          local_198 = plVar9;
          local_190 = '\0';
          FUN_004b8020(uVar12,&local_198);
          plVar11 = local_78;
          if (local_70[0] == '\0') {
            if (((local_78 != (longlong *)0x0) && (FUN_00d50b00(), local_70[0] != '\0')) &&
               (local_78 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            local_70[0] = '\0';
          }
          if ((local_190 != '\0') && (local_198 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_80 != '\0') && (local_88 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_a0 != '\0') && (local_a8 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          unaff_R15 = local_98;
          if (plVar11 == (longlong *)0x0) {
            local_188 = plVar9;
            local_180 = '\0';
            FUN_003b6860();
            plVar9 = local_78;
            if (local_78 != (longlong *)0x0) {
              plVar11 = local_78;
              if (local_70[0] == '\0') {
                FUN_00d50b00();
                if ((local_70[0] != '\0') && (local_78 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
              }
              else {
                local_70[0] = '\0';
              }
            }
            pVar6 = (pthread_key_t)plVar9;
            if ((local_180 != '\0') && (local_188 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            (**(code **)(*plVar10 + 0x628))();
            pvVar3 = _pthread_getspecific(pVar6);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_004a5250();
            FUN_004405c0();
            local_170 = '\0';
            local_178 = plVar11;
            FUN_004b7a60();
            if ((local_170 != '\0') && (local_178 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_70[0] != '\0') && (local_78 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            unaff_R15 = local_98;
            if ((local_80 != '\0') && (local_88 != (longlong *)0x0)) {
              FUN_00d50b20();
              unaff_R15 = local_98;
            }
          }
          local_98 = unaff_R15;
          if (plVar11 != (longlong *)0x0) {
            FUN_003b72f0();
            FUN_00d50b20();
          }
        }
        FUN_00d50b20();
      }
    }
    if (plVar10 == (longlong *)0x0) {
      *(float *)(unaff_RDI + 0x38) = *(float *)(unaff_RDI + 0x3c) + *(float *)(unaff_RDI + 0x38);
    }
    else {
      if (*(int *)(*(longlong *)(unaff_RDI + 0x28) + 0xc) == 1) {
        FUN_00d403d0();
        lVar2 = DAT_02727ab0;
        if (DAT_02727ab0 != 0) {
          FUN_00d50b00();
        }
        local_168 = lVar2;
        local_160 = '\x01';
        local_158 = plVar10;
        local_150 = '\0';
        local_148 = 0;
        local_140 = '\0';
        FUN_00d40470(&local_148,&local_158,3,3);
        unaff_R15 = local_98;
        if ((local_140 != '\0') && (local_148 != 0)) {
          FUN_00d50b20();
        }
        if ((local_150 != '\0') && (local_158 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_160 != '\0') && (local_168 != 0)) {
          FUN_00d50b20();
        }
        if ((local_70[0] != '\0') && (local_78 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      *(float *)(unaff_RDI + 0x38) = *(float *)(unaff_RDI + 0x3c) + *(float *)(unaff_RDI + 0x38);
      FUN_00d50b20();
    }
    plVar10 = local_138;
    if ((char)local_e4 == '\0' && unaff_R15 != 0) {
      FUN_00d50b20();
    }
    if (((char)local_8c != '\0') && (plVar10 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  } while( true );
}


