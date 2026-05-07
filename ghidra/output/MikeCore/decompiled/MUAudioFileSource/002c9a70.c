// Function: FUN_002c9a70
// Address: 002c9a70
// Size: 3256 bytes
// Class: MUAudioFileSource
// String references:
//   "MUAudioFileSource"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_002c9a70(void)

{
  bool bVar1;
  char cVar2;
  longlong *plVar3;
  void *pvVar4;
  longlong lVar5;
  longlong *plVar6;
  pthread_key_t pVar7;
  longlong **pplVar8;
  char *pcVar9;
  int iVar10;
  longlong unaff_RDI;
  undefined4 uVar11;
  undefined4 extraout_XMM0_Da;
  longlong *local_1a0;
  undefined1 local_198;
  longlong *local_190;
  undefined1 local_188;
  longlong *local_180;
  undefined1 local_178;
  undefined8 *local_170;
  undefined1 local_168;
  longlong *local_160;
  undefined1 local_158;
  longlong local_150;
  undefined1 local_148;
  longlong *local_140;
  undefined1 local_138;
  longlong *local_130;
  undefined1 local_128;
  undefined8 *local_120;
  undefined1 local_118;
  longlong *local_110;
  undefined1 local_108;
  longlong *local_100;
  undefined1 local_f8;
  longlong *local_f0;
  undefined1 local_e8;
  longlong *local_e0;
  longlong local_d8;
  char local_d0;
  longlong *local_c8;
  char local_c0;
  longlong local_b8;
  char local_b0;
  longlong local_a8;
  char local_a0;
  longlong *local_98;
  char local_90;
  char local_88;
  undefined7 uStack_87;
  char local_80;
  longlong *local_78;
  longlong *local_70;
  longlong *local_68;
  char local_60 [8];
  longlong *local_58;
  undefined8 local_50;
  int local_48;
  longlong *local_40;
  char local_38;
  
  if (*(longlong *)(unaff_RDI + 0xf0) == 0) {
    FUN_00d216c0();
    goto LAB_002ca54d;
  }
  plVar3 = (longlong *)FUN_00e8fc40();
  FUN_00d4ff40();
  pVar7 = 0x2572358;
  *plVar3 = (longlong)&DAT_02572358;
  (*DAT_02572370)();
  local_70 = plVar3;
  (**(code **)(**(longlong **)(unaff_RDI + 0xf0) + 0x628))();
  pvVar4 = _pthread_getspecific(pVar7);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_004a1110();
  pvVar4 = _pthread_getspecific(pVar7);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01313ad0();
  pvVar4 = _pthread_getspecific(pVar7);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012cb480();
  local_78 = local_68;
  if (local_60[0] == '\0') {
    if (((local_68 != (longlong *)0x0) && (FUN_00d50b00(), local_60[0] != '\0')) &&
       (local_68 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_60[0] = '\0';
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_80 != '\0') && (CONCAT71(uStack_87,local_88) != 0)) {
    FUN_00d50b20();
  }
  if ((local_d0 != '\0') && (local_d8 != 0)) {
    FUN_00d50b20();
  }
  if (local_78 != (longlong *)0x0) {
    local_60[0] = '\0';
    local_68 = (longlong *)0x0;
    local_58 = local_78;
    local_50 = 0xffffffff;
    local_48 = 0;
    local_50._4_4_ = 0;
    while( true ) {
      if (local_50._4_4_ != 0) {
        if (local_50._4_4_ < 1) {
          iVar10 = -local_50._4_4_;
        }
        else {
          iVar10 = (int)local_50 - local_50._4_4_;
          local_50 = CONCAT44(local_50._4_4_,iVar10);
          FUN_00d23690();
          local_48 = local_48 + local_50._4_4_;
          iVar10 = 0;
        }
        local_50 = CONCAT44(iVar10,(int)local_50);
      }
      lVar5 = (longlong)(int)local_50;
      iVar10 = (int)local_50 + 1;
      local_50 = CONCAT44(local_50._4_4_,iVar10);
      if (*(int *)((longlong)local_58 + 0xc) <= iVar10) break;
      plVar3 = *(longlong **)(local_58[2] + 8 + lVar5 * 8);
      local_40 = plVar3;
      local_68 = plVar3;
      if ((DAT_026fdd70 == '\0') && (iVar10 = ___cxa_guard_acquire(), iVar10 != 0)) {
        _DAT_026e3238 = FUN_00115af0();
        DAT_026e3220 = "MUAudioFileSource";
        _DAT_026e3228 = 0xa0;
        _DAT_026e3230 = FUN_00136df0;
        _DAT_026e3240 = 0;
        uRam00000000026e3248 = 0;
        _DAT_026e3250 = 0;
        uRam00000000026e3258 = 0;
        _DAT_026e3260 = 0;
        uRam00000000026e3268 = 0;
        _DAT_026e3270 = 0;
        uRam00000000026e3278 = 0;
        _DAT_026e3280 = 0;
        uRam00000000026e3288 = 0;
        _DAT_026e3290 = 0;
        uRam00000000026e3298 = 0;
        _DAT_026e32a0 = 0;
        uRam00000000026e32a8 = 0;
        _DAT_026e32b0 = 0;
        uRam00000000026e32b8 = 0;
        _DAT_026e32c0 = 0;
        uRam00000000026e32c8 = 0;
        _DAT_026e32d0 = 0;
        uRam00000000026e32d8 = 0;
        _DAT_026e32e0 = 0;
        ___cxa_guard_release();
      }
      pplVar8 = (longlong **)&DAT_02802688;
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x360))();
        cVar2 = FUN_00e85ea0();
        pplVar8 = &local_40;
        if (cVar2 == '\0') {
          pplVar8 = (longlong **)&DAT_02802688;
        }
      }
      if (*pplVar8 != (longlong *)0x0) {
        local_1a0 = local_68;
        local_198 = 0;
        FUN_002c95a0(pplVar8,&local_1a0);
        plVar3 = local_40;
        if (local_38 == '\0') {
          if (local_40 != (longlong *)0x0) {
            FUN_00d50b00();
            goto LAB_002c9d1d;
          }
        }
        else if (local_40 != (longlong *)0x0) {
LAB_002c9d1d:
          if (plVar3[2] == 0) {
            local_190 = local_68;
            local_188 = 0;
            uVar11 = FUN_002cc5d0();
            plVar6 = local_40;
            if (local_38 == '\0') {
              if (local_40 != (longlong *)0x0) {
                uVar11 = FUN_00d50b00();
              }
            }
            else {
              local_38 = '\0';
            }
            local_108 = 1;
            local_110 = plVar6;
            FUN_002c2410(uVar11,&local_110);
            if (plVar6 != (longlong *)0x0) {
              FUN_00d50b20();
            }
            if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            FUN_00d50b00();
            FUN_00d50b20();
          }
          local_38 = '\0';
          local_40 = plVar3;
          FUN_00d21140();
          if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          FUN_002c2560();
          FUN_002cc5d0();
          plVar3 = local_40;
          if (local_38 == '\0') {
            if (local_40 != (longlong *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_38 = '\0';
          }
          local_f8 = 1;
          local_100 = plVar3;
          FUN_002c2710();
          if (plVar3 != (longlong *)0x0) {
            FUN_00d50b20();
          }
          if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          FUN_00d50b20();
          goto LAB_002c9c38;
        }
        plVar6 = (longlong *)FUN_00e8fc40();
        FUN_00d4ff40();
        *plVar6 = (longlong)&DAT_024de268;
        plVar6[2] = 0;
        plVar6[3] = 0;
        plVar6[4] = 0;
        FUN_00d500e0();
        local_180 = local_68;
        local_178 = 0;
        uVar11 = FUN_002cc5d0();
        plVar3 = local_40;
        if (local_38 == '\0') {
          if (local_40 != (longlong *)0x0) {
            uVar11 = FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        local_e8 = 1;
        local_f0 = plVar3;
        FUN_002c2410(uVar11,&local_f0);
        if (plVar3 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        local_38 = '\0';
        local_40 = plVar6;
        FUN_00d21140();
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
      }
LAB_002c9c38:
    }
    FUN_00136d50();
    FUN_00d50b20();
    plVar3 = local_70;
  }
  uVar11 = FUN_002cc5d0();
  local_78 = local_68;
  if (local_60[0] == '\0') {
    if (local_68 == (longlong *)0x0) goto LAB_002ca107;
    FUN_00d50b00();
    if ((local_60[0] != '\0') && (local_68 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
LAB_002ca0c8:
    FUN_01f27fe0();
    (**(code **)(*local_40 + 0x760))();
    local_98 = local_68;
    local_90 = 0;
    if (local_60[0] == '\0') {
      if (local_68 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_60[0] = '\0';
    }
    local_90 = '\x01';
    cVar2 = (**(code **)(*local_78 + 0x50))();
    uVar11 = extraout_XMM0_Da;
    if ((local_90 != '\0') && (local_98 != (longlong *)0x0)) {
      uVar11 = FUN_00d50b20();
    }
    if ((local_60[0] != '\0') && (local_68 != (longlong *)0x0)) {
      uVar11 = FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      uVar11 = FUN_00d50b20();
    }
    if (cVar2 == '\0') {
      uVar11 = (**(code **)(*local_78 + 1000))();
      plVar6 = local_68;
      if (local_60[0] == '\0') {
        if (local_68 != (longlong *)0x0) {
          FUN_00d50b00();
          if ((local_60[0] != '\0') && (local_68 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          goto LAB_002ca1d1;
        }
      }
      else if (local_68 != (longlong *)0x0) {
LAB_002ca1d1:
        local_60[0] = '\0';
        local_68 = (longlong *)0x0;
        local_58 = plVar6;
        local_50 = 0xffffffff;
        local_48 = 0;
        local_50._4_4_ = 0;
        local_e0 = plVar6;
        while( true ) {
          if (local_50._4_4_ != 0) {
            if (local_50._4_4_ < 1) {
              iVar10 = -local_50._4_4_;
            }
            else {
              iVar10 = (int)local_50 - local_50._4_4_;
              local_50 = CONCAT44(local_50._4_4_,iVar10);
              FUN_00d23690();
              local_48 = local_48 + local_50._4_4_;
              iVar10 = 0;
            }
            local_50 = CONCAT44(iVar10,(int)local_50);
          }
          lVar5 = (longlong)(int)local_50;
          iVar10 = (int)local_50 + 1;
          local_50 = CONCAT44(local_50._4_4_,iVar10);
          if (*(int *)((longlong)local_58 + 0xc) <= iVar10) break;
          local_160 = *(longlong **)(local_58[2] + 8 + lVar5 * 8);
          local_168 = 0;
          local_158 = 0;
          local_170 = plVar3;
          local_68 = local_160;
          FUN_002cbd60(&local_160,&local_170);
          plVar6 = local_40;
          if (local_38 == '\0') {
            if (local_40 == (longlong *)0x0) goto LAB_002ca2c3;
            FUN_00d50b00();
            plVar3 = local_70;
LAB_002ca218:
            FUN_00d50b20();
          }
          else {
            plVar3 = local_70;
            if (local_40 != (longlong *)0x0) goto LAB_002ca218;
LAB_002ca2c3:
            lVar5 = *(longlong *)(unaff_RDI + 0xe0);
            if (lVar5 != 0) {
              FUN_00d50b00();
            }
            local_148 = 1;
            local_140 = local_68;
            local_138 = 0;
            local_150 = lVar5;
            FUN_002cbd60(&local_140,&local_150);
            plVar3 = local_70;
            if ((local_40 != (longlong *)0x0) && (plVar6 = local_40, local_38 == '\0')) {
              FUN_00d50b00();
            }
            if (lVar5 != 0) {
              FUN_00d50b20();
            }
            if (plVar6 != (longlong *)0x0) {
LAB_002ca3ef:
              local_38 = '\0';
              local_40 = plVar6;
              FUN_00d21140();
              if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              goto LAB_002ca218;
            }
            local_c8 = local_68;
            local_c0 = '\0';
            cVar2 = FUN_00b80190();
            if ((local_c0 != '\0') && (local_c8 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if (cVar2 != '\0') {
              plVar6 = (longlong *)FUN_00e8fc40();
              FUN_00d4ff40();
              *plVar6 = (longlong)&DAT_024de268;
              plVar6[2] = 0;
              plVar6[3] = 0;
              plVar6[4] = 0;
              FUN_00d500e0();
              local_130 = local_68;
              local_128 = 0;
              FUN_002c2ac0();
              goto LAB_002ca3ef;
            }
          }
        }
        FUN_00115910();
        uVar11 = FUN_00d50b20();
      }
    }
    bVar1 = false;
  }
  else {
    if (local_68 != (longlong *)0x0) goto LAB_002ca0c8;
LAB_002ca107:
    bVar1 = true;
  }
  local_120 = local_70;
  local_118 = 0;
  FUN_002cbf40(uVar11,&local_120);
  plVar3 = local_40;
  if (local_38 == '\0') {
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  local_68 = plVar3;
  local_60[0] = '\0';
  FUN_00d243f0();
  if ((local_60[0] != '\0') && (local_68 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar3 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  local_b0 = 0;
  lVar5 = *(longlong *)(unaff_RDI + 0xe0);
  if (lVar5 != 0) {
    FUN_00d50b00();
  }
  local_b0 = '\x01';
  local_b8 = lVar5;
  FUN_01d2a8f0();
  if ((local_b0 != '\0') && (local_b8 != 0)) {
    FUN_00d50b20();
  }
  FUN_002c59e0();
  if (!bVar1) {
    FUN_00d50b20();
  }
  if (local_70 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
LAB_002ca54d:
  local_a0 = 0;
  lVar5 = *(longlong *)(unaff_RDI + 0xe0);
  if (lVar5 != 0) {
    FUN_00d50b00();
  }
  local_a0 = '\x01';
  local_a8 = lVar5;
  FUN_01d2a8f0();
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    FUN_00d50b20();
  }
  FUN_01d243a0();
  FUN_002c59e0();
  plVar3 = *(longlong **)(unaff_RDI + 0x10);
  FUN_002cc690();
  (**(code **)(*plVar3 + 0x9b8))();
  plVar3 = *(longlong **)(unaff_RDI + 0x10);
  if (plVar3 != (longlong *)0x0) {
    FUN_00d50b00();
  }
  local_88 = '\0';
  local_70 = plVar3;
  local_40 = plVar3;
  do {
    FUN_01e40eb0();
    plVar6 = local_68;
    if (local_68 == plVar3) {
      if (((local_88 == '\0') && (local_68 != (longlong *)0x0)) &&
         (plVar6 = plVar3, local_60[0] != '\0')) goto LAB_002ca67a;
    }
    else {
      local_40 = local_68;
      if (local_60[0] == '\0') {
        pcVar9 = &local_88;
        if (plVar3 != (longlong *)0x0 && local_88 != '\0') {
          FUN_00d50b20();
          pcVar9 = &local_88;
        }
      }
      else {
        if (plVar3 != (longlong *)0x0 && local_88 != '\0') {
          FUN_00d50b20();
        }
LAB_002ca67a:
        local_88 = '\x01';
        pcVar9 = local_60;
      }
      *pcVar9 = '\0';
      plVar3 = plVar6;
    }
    if ((local_60[0] != '\0') && (local_68 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_000a94a0();
    pplVar8 = (longlong **)&DAT_02802688;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x360))();
      cVar2 = FUN_00e85ea0();
      pplVar8 = &local_40;
      if (cVar2 == '\0') {
        pplVar8 = (longlong **)&DAT_02802688;
      }
    }
    if (*pplVar8 != (longlong *)0x0) {
      if ((local_88 == '\0') && (plVar3 != (longlong *)0x0)) {
        FUN_00d50b00();
      }
      goto LAB_002ca728;
    }
    if (plVar3 == (longlong *)0x0) {
LAB_002ca728:
      if (local_70 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if (plVar3 != (longlong *)0x0) {
        FUN_006c5510();
        FUN_00d50b20();
      }
      return;
    }
  } while( true );
}


