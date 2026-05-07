// ===== MUAudioFileSource — Annotated small functions =====
// 82 readable functions

// ==================================================
// @004a2840 (2934 bytes) — math_loop

{
  longlong *plVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong *plVar4;
  ulonglong uVar5;
  char cVar6;
  void *pvVar7;
  pthread_key_t pVar8;
  longlong **pplVar9;
  ulonglong *puVar10;
  int iVar11;
  ulonglong *arg1;
  int iVar12;
  undefined4 uVar13;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined1 local_190 [8];
  undefined1 local_188;
  longlong *local_180;
  char local_178;
  longlong local_170;
  char local_168;
  ulonglong local_160;
  char local_158;
  longlong local_150;
  char local_148;
  longlong *local_140;
  char local_138;
  ulonglong local_130;
  char local_128;
  ulonglong local_120;
  char local_118;
  ulonglong local_110;
  ulonglong local_108;
  pthread_key_t local_fc;
  longlong *local_f8;
  char local_f0;
  ulonglong local_e8;
  char local_e0;
  longlong *local_d8;
  char local_d0;
  longlong *local_c8;
  uint local_c0;
  longlong local_b8;
  char local_b0;
  undefined4 local_a8;
  ulonglong local_a0;
  char local_98;
  longlong *local_90;
  longlong *local_88;
  ulonglong local_80;
  longlong *local_78;
  int local_70;
  undefined8 local_6c;
  longlong *local_60;
  longlong *local_50;
  char local_48;
  ulonglong local_40;
  char local_38;
  
  pvVar7 = _pthread_getspecific(param_1);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e5ae0();
  plVar1 = local_c8;
  if ((char)local_c0 == '\0') {
    if (local_c8 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_c0 = local_c0 & 0xffffff00;
  }
  FUN_004a21b0();
  local_90 = local_88;
  if (((char)local_80 == '\0') && (local_88 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  if (plVar1 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (((char)local_c0 != '\0') && (local_c8 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00c9fe20();
  plVar1 = local_88;
  puVar10 = &local_40;
  if ((char)local_80 != '\0') {
    puVar10 = &local_80;
  }
  local_40 = CONCAT71(local_40._1_7_,(char)local_80);
  *(undefined1 *)puVar10 = 0;
  if (((char)local_80 != '\0') && (local_88 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  local_f0 = 0;
  if ((char)local_40 == '\0') {
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_40 = local_40 & 0xffffffffffffff00;
  }
  local_f0 = '\x01';
  local_f8 = plVar1;
  FUN_002aa7d0();
  plVar1 = local_c8;
  if ((char)local_c0 == '\0') {
    if (local_c8 != (longlong *)0x0) {
      FUN_00d50b00();
      if (((char)local_c0 != '\0') && (local_c8 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    local_c0 = local_c0 & 0xffffff00;
  }
  if ((local_f0 != '\0') && (local_f8 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (1 < *(int *)((longlong)plVar1 + 0xc)) {
    local_60 = plVar1;
    uVar13 = FUN_004a3a50(0,FUN_004a3af0);
    plVar4 = local_88;
    if (plVar1 == local_88) {
LAB_004a2a7c:
      if (((char)local_80 != '\0') && (local_88 != (longlong *)0x0)) {
        uVar13 = FUN_00d50b20();
      }
    }
    else {
      if ((char)local_80 == '\0') {
        if (local_88 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        local_60 = plVar4;
        uVar13 = FUN_00d50b20();
        goto LAB_004a2a7c;
      }
      local_60 = local_88;
      uVar13 = FUN_00d50b20();
    }
    if (local_60 == (longlong *)0x0) goto LAB_004a33a8;
    local_80._0_1_ = '\0';
    local_88 = (longlong *)0x0;
    local_78 = local_60;
    local_6c = 0;
    iVar12 = -1;
    local_fc = 0;
    local_110 = 1;
    iVar11 = 0;
    while( true ) {
      if (iVar11 != 0) {
        if (iVar11 < 1) {
          iVar11 = -iVar11;
        }
        else {
          iVar12 = iVar12 - iVar11;
          local_70 = iVar12;
          uVar13 = FUN_00d23690(uVar13,iVar11);
          local_6c = (ulonglong)(local_fc + iVar11) << 0x20;
          iVar11 = 0;
        }
        local_6c = CONCAT44(local_6c._4_4_,iVar11);
      }
      local_70 = iVar12 + 1;
      if (*(int *)((longlong)local_78 + 0xc) <= local_70) break;
      plVar1 = *(longlong **)(local_78[2] + (longlong)local_70 * 8);
      local_88 = plVar1;
      if ((DAT_026fdd70 == '\0') &&
         (iVar12 = ___cxa_guard_acquire(), uVar13 = extraout_XMM0_Da_00, iVar12 != 0)) {
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
        uVar13 = ___cxa_guard_release();
      }
      pplVar9 = (longlong **)&DAT_02802688;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x360))();
        cVar6 = FUN_00e85ea0();
        pplVar9 = &local_88;
        uVar13 = extraout_XMM0_Da;
        if (cVar6 == '\0') {
          pplVar9 = (longlong **)&DAT_02802688;
        }
      }
      iVar12 = local_70;
      plVar1 = *pplVar9;
      local_fc = local_6c._4_4_;
      if (local_70 == 0 && local_6c._4_4_ == 0) {
        if (plVar1 != (longlong *)0x0) {
          pVar8 = local_6c._4_4_;
          pvVar7 = _pthread_getspecific(local_6c._4_4_);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          pvVar7 = _pthread_getspecific(pVar8);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0123abe0();
          (**(code **)(*local_50 + 0x390))();
          uVar5 = local_40;
          local_e0 = 0;
          if (local_38 == '\0') {
            if (local_40 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_38 = '\0';
          }
          local_e0 = '\x01';
          local_e8 = uVar5;
          uVar13 = FUN_012e5f80();
          if ((local_e0 != '\0') && (local_e8 != 0)) {
            uVar13 = FUN_00d50b20();
          }
          if ((local_38 != '\0') && (local_40 != 0)) {
            uVar13 = FUN_00d50b20();
          }
          if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
            uVar13 = FUN_00d50b20();
          }
        }
      }
      else {
        if (plVar1 == (longlong *)0x0) {
          pvVar7 = _pthread_getspecific(local_6c._4_4_);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          uVar13 = FUN_012e6000();
          lVar2 = local_170;
          local_c0 = 2;
          local_c8 = &DAT_024c5048;
          local_b0 = 0;
          if (local_170 != 0) {
            uVar13 = FUN_00d50b00();
          }
          local_b8 = lVar2;
          local_b0 = '\x01';
          local_c8 = (longlong *)&DAT_025df2a0;
          local_a8 = (undefined4)local_110;
          FUN_00d8cb40(uVar13,&local_c8);
        }
        else {
          pvVar7 = _pthread_getspecific(local_6c._4_4_);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0123abe0();
          (**(code **)(*local_180 + 0x390))();
        }
        local_d0 = 0;
        if (local_48 == '\0') {
          if (local_50 != (longlong *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_48 = '\0';
        }
        local_d0 = '\x01';
        local_d8 = local_50;
        local_160 = *arg1;
        local_158 = '\0';
        pVar8 = 0;
        FUN_004f83c0(0,&local_160);
        uVar5 = local_40;
        if (local_38 == '\0') {
          if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_38 = '\0';
        }
        if ((local_158 != '\0') && (local_160 != 0)) {
          FUN_00d50b20();
        }
        if ((local_d0 != '\0') && (local_d8 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar1 == (longlong *)0x0) {
          local_c8 = &DAT_024c5048;
          if ((local_b0 != '\0') && (local_b8 != 0)) {
            FUN_00d50b20();
          }
          if ((local_168 != '\0') && (local_170 != 0)) {
            FUN_00d50b20();
          }
        }
        else if ((local_178 != '\0') && (local_180 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        local_108 = uVar5;
        pvVar7 = _pthread_getspecific(pVar8);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012e6a50();
        pvVar7 = _pthread_getspecific(pVar8);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012e6160();
        local_40 = *arg1;
        local_38 = '\0';
        iVar11 = FUN_00d237a0();
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_148 != '\0') && (local_150 != 0)) {
          FUN_00d50b20();
        }
        FUN_004a11d0();
        uVar5 = local_40;
        if (local_38 == '\0') {
          if (local_40 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        pvVar7 = _pthread_getspecific(pVar8);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012e6a50();
        if (local_48 == '\0') {
          if (local_50 != (longlong *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_48 = '\0';
        }
        local_188 = 1;
        uVar13 = FUN_004a17d0((int)local_110 + iVar11 + -1,local_190);
        uVar3 = local_108;
        if (local_50 != (longlong *)0x0) {
          uVar13 = FUN_00d50b20();
        }
        if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
          uVar13 = FUN_00d50b20();
        }
        if (uVar5 != 0) {
          uVar13 = FUN_00d50b20();
        }
        local_140 = local_88;
        local_138 = '\0';
        uVar13 = FUN_004a26e0(uVar13,&local_140);
        uVar5 = local_40;
        local_98 = 0;
        if (local_38 == '\0') {
          if (local_40 != 0) {
            uVar13 = FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        local_98 = '\x01';
        local_a0 = uVar5;
        local_130 = *arg1;
        local_128 = '\0';
        local_120 = uVar3;
        local_118 = '\0';
        uVar13 = FUN_004fa380(uVar13,&local_120);
        if ((local_118 != '\0') && (local_120 != 0)) {
          uVar13 = FUN_00d50b20();
        }
        if ((local_128 != '\0') && (local_130 != 0)) {
          uVar13 = FUN_00d50b20();
        }
        if ((local_98 != '\0') && (local_a0 != 0)) {
          uVar13 = FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != 0)) {
          uVar13 = FUN_00d50b20();
        }
        if ((local_138 != '\0') && (local_140 != (longlong *)0x0)) {
          uVar13 = FUN_00d50b20();
        }
        if (uVar3 != 0) {
          uVar13 = FUN_00d50b20();
        }
      }
      local_110 = (ulonglong)((int)local_110 + 1);
      iVar11 = (int)local_6c;
    }
    FUN_00115e00();
  }
  FUN_00d50b20();
LAB_004a33a8:
  if (local_90 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}




// ==================================================
// @00494690 (2854 bytes) — math_loop

{
  longlong lVar1;
  bool bVar2;
  bool bVar3;
  longlong *plVar4;
  longlong lVar5;
  char cVar6;
  undefined1 uVar7;
  int iVar8;
  void *pvVar9;
  bool *pbVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong *this;
  longlong **pplVar13;
  undefined4 uVar14;
  longlong *local_138;
  undefined1 local_130;
  longlong local_128;
  char local_120;
  longlong *local_118;
  char local_110;
  longlong *local_108;
  char local_100;
  longlong local_f8;
  char local_f0;
  longlong local_e8;
  char local_e0;
  longlong *local_d8;
  char local_d0;
  longlong local_c8;
  longlong *local_c0;
  longlong *local_b8;
  longlong *local_b0;
  char local_a8;
  longlong *local_98;
  char local_90;
  longlong *local_88;
  longlong *local_80;
  bool local_78 [8];
  longlong *local_70;
  char local_68 [8];
  longlong *local_60;
  bool local_58 [8];
  longlong local_50;
  char local_48;
  longlong *local_40;
  
  lVar1 = DAT_026f6fb0;
  if (param_2 == 0) {
    FUN_01caeae0();
    plVar11 = local_70;
    if ((local_68[0] != '\0') && (local_70 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    plVar4 = DAT_02708758;
    plVar12 = (longlong *)0x0;
    if (plVar11 != (longlong *)0x0) {
      if (DAT_02708758 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      plVar11 = plVar4;
      if (((*(char *)((longlong)this + 0x27a) != '\0') &&
          (*(char *)((longlong)this + 0x279) != '\0')) ||
         ((cVar6 = FUN_00742b20(), cVar6 != '\0' && (*(char *)((longlong)this + 0x27b) == '\0')
          ))) {
        FUN_00490b50();
        plVar12 = local_70;
        if (local_70 != plVar4) {
          if (local_68[0] != '\0') {
            plVar11 = local_70;
            if (plVar4 != (longlong *)0x0) {
              FUN_00d50b20();
            }
            goto LAB_00494b57;
          }
          if (local_70 != (longlong *)0x0) {
            FUN_00d50b00();
          }
          plVar11 = plVar12;
          if (plVar4 != (longlong *)0x0) {
            FUN_00d50b20();
          }
        }
        if ((local_68[0] != '\0') && (local_70 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
LAB_00494b57:
      plVar12 = DAT_02708760;
      if (DAT_02708760 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      local_c0 = plVar12;
      local_98 = plVar11;
      FUN_00083ea0(2,&local_c0);
      FUN_000b4da0();
      plVar4 = local_80;
      if (local_78[0] == false) {
        if (((local_80 != (longlong *)0x0) && (FUN_00d50b00(), local_78[0] != false)) &&
           (local_80 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_78[0] = false;
      }
      local_70 = (longlong *)&DAT_0253d630;
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      local_70 = &DAT_024c5048;
      if ((local_58[0] != false) && (local_60 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar12 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      lVar1 = DAT_027087a8;
      if (DAT_027087a8 != 0) {
        FUN_00d50b00();
      }
      local_128 = lVar1;
      local_120 = '\x01';
      local_118 = plVar4;
      local_110 = '\0';
      FUN_01e57360(&local_118,&local_128);
      plVar12 = local_70;
      if (local_68[0] == '\0') {
        if (((local_70 != (longlong *)0x0) && (FUN_00d50b00(), local_68[0] != '\0')) &&
           (local_70 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_68[0] = '\0';
      }
      if ((local_110 != '\0') && (local_118 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_120 != '\0') && (local_128 != 0)) {
        FUN_00d50b20();
      }
      if (plVar12 != (longlong *)0x0) {
        FUN_01caeae0();
        local_108 = plVar12;
        local_100 = '\0';
        FUN_01d64eb0();
        if ((local_100 != '\0') && (local_108 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_68[0] != '\0') && (local_70 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
      }
      if (plVar4 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if (plVar11 != (longlong *)0x0) {
        FUN_00d50b20();
      }
    }
    if (*(char *)((longlong)this + 0x279) == '\0') goto LAB_00494d1d;
  }
  else {
    if (*(char *)((longlong)this + 0x279) == '\0') {
LAB_00494d1d:
      plVar12 = (longlong *)0x0;
      goto LAB_00494d1f;
    }
    if (DAT_026f6fb0 != 0) {
      param_1 = FUN_00d50b00();
    }
    lVar5 = DAT_027087a0;
    local_f8 = lVar1;
    local_f0 = '\x01';
    if (DAT_027087a0 != 0) {
      param_1 = FUN_00d50b00();
    }
    local_e8 = lVar5;
    local_e0 = '\x01';
    FUN_01f6ca30(param_1,&local_e8);
    plVar11 = local_70;
    if (local_68[0] == '\0') {
      if (((local_70 != (longlong *)0x0) && (FUN_00d50b00(), local_68[0] != '\0')) &&
         (local_70 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_68[0] = '\0';
    }
    if ((local_e0 != '\0') && (local_e8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_f0 != '\0') && (local_f8 != 0)) {
      FUN_00d50b20();
    }
    local_b8 = plVar11;
    iVar8 = (**(code **)(*plVar11 + 0x5e0))();
    if ((iVar8 == 0) && (lVar1 = this[0x23], lVar1 != 0)) {
      plVar11 = this;
      FUN_00d50b00();
      local_c8 = lVar1;
      pvVar9 = _pthread_getspecific((pthread_key_t)plVar11);
      if (pvVar9 != (void *)0x0) {
        FUN_00e8b990();
      }
      pplVar13 = &local_70;
      FUN_01320d00();
      plVar11 = local_70;
      if ((DAT_026fdd70 == '\0') && (iVar8 = ___cxa_guard_acquire(), iVar8 != 0)) {
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
      if (plVar11 == (longlong *)0x0) {
LAB_00494920:
        pplVar13 = (longlong **)&DAT_02802688;
      }
      else {
        (**(code **)(*plVar11 + 0x360))();
        cVar6 = FUN_00e85ea0();
        if (cVar6 == '\0') goto LAB_00494920;
      }
      local_88 = *pplVar13;
      if (*(char *)(pplVar13 + 1) == '\0') {
        if (local_88 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        *(undefined1 *)(pplVar13 + 1) = 0;
      }
      if ((local_68[0] != '\0') && (local_70 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (local_88 == (longlong *)0x0) {
        bVar2 = true;
      }
      else {
        FUN_00d50b00();
        local_98 = (longlong *)((ulonglong)local_98 & 0xffffffffffffff00);
        local_80 = this;
        do {
          (**(code **)(*this + 0x370))();
          plVar11 = local_70;
          if (local_70 == this) {
            if ((((char)local_98 == '\0') && (local_70 != (longlong *)0x0)) && (local_68[0] != '\0')
               ) {
              plVar11 = this;
              goto LAB_00494a2d;
            }
          }
          else {
            local_80 = local_70;
            if (local_68[0] == '\0') {
              if ((char)local_98 == '\0') {
                pplVar13 = &local_98;
              }
              else {
                FUN_00d50b20();
                pplVar13 = &local_98;
              }
            }
            else {
              if ((char)local_98 != '\0') {
                FUN_00d50b20();
              }
LAB_00494a2d:
              local_98 = (longlong *)CONCAT71(local_98._1_7_,1);
              pplVar13 = (longlong **)local_68;
            }
            *(char *)pplVar13 = '\0';
            this = plVar11;
          }
          if ((local_68[0] != '\0') && (local_70 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          FUN_00082eb0();
          pplVar13 = (longlong **)&DAT_02802688;
          if (this != (longlong *)0x0) {
            (**(code **)(*this + 0x360))();
            cVar6 = FUN_00e85ea0();
            pplVar13 = &local_80;
            if (cVar6 == '\0') {
              pplVar13 = (longlong **)&DAT_02802688;
            }
          }
          if (*pplVar13 != (longlong *)0x0) {
            if (((char)local_98 == '\0') && (this != (longlong *)0x0)) {
              FUN_00d50b00();
            }
            break;
          }
        } while (this != (longlong *)0x0);
        FUN_00d50b20();
        if (this == (longlong *)0x0) {
          bVar2 = true;
        }
        else {
          local_c0 = (longlong *)((ulonglong)local_c0 & 0xffffffffffffff00);
          local_68[0] = '\0';
          local_70 = (longlong *)0x0;
          FUN_00da5ad0();
          local_60 = local_80;
          if (local_78[0] == false) {
            pbVar10 = local_58;
          }
          else {
            pbVar10 = local_78;
          }
          local_58[0] = local_78[0] != false;
          *pbVar10 = false;
          if ((local_78[0] != false) && (local_80 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          local_50 = FUN_00da7170();
          uVar14 = FUN_00da7180();
          if (local_60 == (longlong *)0x0) {
            local_40 = (longlong *)0x0;
            bVar3 = false;
          }
          else {
            bVar3 = false;
            local_40 = (longlong *)0x0;
            do {
              pvVar9 = _pthread_getspecific((pthread_key_t)pplVar13);
              if (pvVar9 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_0123abe0();
              plVar11 = local_98;
              local_a8 = 0;
              if (local_90 == '\0') {
                if (local_98 != (longlong *)0x0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_90 = '\0';
              }
              plVar12 = local_40;
              local_a8 = '\x01';
              local_b0 = plVar11;
              uVar7 = FUN_00742b20();
              pplVar13 = (longlong **)0x0;
              FUN_01500530(0,uVar7);
              plVar11 = local_80;
              if (local_78[0] == false) {
                if (((local_80 != (longlong *)0x0) && (FUN_00d50b00(), local_78[0] != false)) &&
                   (local_80 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
              }
              else {
                local_78[0] = false;
              }
              if ((local_a8 != '\0') && (local_b0 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              if ((local_90 != '\0') && (local_98 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              if (plVar11 != (longlong *)0x0) {
                local_d8 = local_88;
                local_d0 = '\0';
                pplVar13 = &local_c0;
                FUN_01502670(pplVar13,&local_d8);
                plVar11 = local_80;
                if (local_80 == plVar12) {
                  if ((!bVar3) && (local_80 != (longlong *)0x0)) {
                    plVar11 = plVar12;
                    if (local_78[0] != false) goto LAB_00494f74;
                    bVar3 = true;
                    FUN_00d50b00();
                  }
LAB_00494fbd:
                  if ((local_78[0] != false) && (local_80 != (longlong *)0x0)) {
                    FUN_00d50b20();
                  }
                }
                else {
                  if (local_78[0] == false) {
                    if (local_80 != (longlong *)0x0) {
                      FUN_00d50b00();
                    }
                    if ((bVar3) && (local_40 != (longlong *)0x0)) {
                      FUN_00d50b20();
                      local_40 = plVar11;
                      bVar3 = true;
                    }
                    else {
                      local_40 = plVar11;
                      bVar3 = true;
                    }
                    goto LAB_00494fbd;
                  }
                  if ((bVar3) && (plVar12 != (longlong *)0x0)) {
                    FUN_00d50b20();
                  }
LAB_00494f74:
                  local_78[0] = false;
                  bVar3 = true;
                  local_40 = plVar11;
                }
                if ((local_d0 != '\0') && (local_d8 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                FUN_00d50b20();
              }
              uVar14 = FUN_00da7180();
              if (local_60 == (longlong *)0x0) break;
              local_60 = (longlong *)0x0;
              if (local_58[0] == false) {
                local_58[0] = false;
                break;
              }
              uVar14 = FUN_00d50b20();
              local_58[0] = false;
            } while (local_60 != (longlong *)0x0);
          }
          if ((local_68[0] != '\0') && (local_70 != (longlong *)0x0)) {
            uVar14 = FUN_00d50b20();
          }
          if (local_40 == (longlong *)0x0) {
            bVar2 = true;
          }
          else {
            if ((char)local_c0 != '\0') {
              FUN_01f27fe0();
              uVar14 = (**(code **)(*local_70 + 0x560))();
              if ((local_68[0] != '\0') && (local_70 != (longlong *)0x0)) {
                uVar14 = FUN_00d50b20();
              }
            }
            local_138 = local_40;
            local_130 = 0;
            FUN_00493490(uVar14,&local_138);
            bVar2 = false;
            if (bVar3) {
              FUN_00d50b20();
              bVar2 = false;
            }
          }
          FUN_00d50b20();
        }
        FUN_00d50b20();
      }
      FUN_00d50b20();
      plVar12 = (longlong *)0x0;
      if (local_b8 != (longlong *)0x0) goto LAB_00494787;
    }
    else {
      plVar12 = (longlong *)CONCAT71((int7)((ulonglong)plVar11 >> 8),iVar8 != 0);
      bVar2 = true;
LAB_00494787:
      FUN_00d50b20();
    }
    if (bVar2) goto LAB_00494d1f;
  }
  plVar12 = (longlong *)CONCAT71((int7)((ulonglong)plVar12 >> 8),1);
LAB_00494d1f:
  return (ulonglong)plVar12 & 0xffffffff;
}




// ==================================================
// @00491110 (2709 bytes) — calculation

{
  bool bVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  char cVar5;
  int iVar6;
  void *pvVar7;
  pthread_key_t pVar8;
  undefined8 uVar9;
  longlong *plVar10;
  longlong **pplVar11;
  longlong this;
  longlong lVar12;
  longlong lVar13;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar14;
  longlong local_128;
  longlong local_120;
  char local_118;
  longlong local_110;
  char local_108;
  longlong *local_100;
  char local_f8;
  longlong local_f0;
  char local_e8;
  longlong local_e0;
  char local_d8;
  longlong local_d0;
  char local_c8;
  longlong *local_c0;
  char local_b8;
  uint local_b0;
  pthread_key_t local_ac;
  longlong local_a8;
  char local_a0;
  longlong *local_98;
  char local_90;
  longlong local_80;
  char local_78;
  longlong *local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  if (param_2 == 0) {
    FUN_01caeae0();
    if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    lVar12 = DAT_02708760;
    plVar10 = (longlong *)0x0;
    if (local_60 != (longlong *)0x0) {
      if (DAT_02708760 != 0) {
        FUN_00d50b00();
      }
      local_128 = lVar12;
      FUN_00083ea0(2,&local_128);
      FUN_000b4da0();
      if ((local_78 == '\0') && (local_80 != 0)) {
        FUN_00d50b00();
      }
      local_60 = (longlong *)&DAT_0253d630;
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      local_60 = &DAT_024c5048;
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      if (lVar12 != 0) {
        FUN_00d50b20();
      }
      lVar12 = DAT_02708768;
      if (DAT_02708768 != 0) {
        FUN_00d50b00();
      }
      local_120 = lVar12;
      local_118 = '\x01';
      local_110 = local_80;
      local_108 = '\0';
      FUN_01e57360(&local_110,&local_120);
      plVar10 = local_60;
      if (local_58 == '\0') {
        if (((local_60 != (longlong *)0x0) && (FUN_00d50b00(), local_58 != '\0')) &&
           (local_60 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_58 = '\0';
      }
      if ((local_108 != '\0') && (local_110 != 0)) {
        FUN_00d50b20();
      }
      if ((local_118 != '\0') && (local_120 != 0)) {
        FUN_00d50b20();
      }
      if (plVar10 != (longlong *)0x0) {
        FUN_01caeae0();
        local_100 = plVar10;
        local_f8 = '\0';
        FUN_01d64eb0();
        if ((local_f8 != '\0') && (local_100 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
      }
      if (local_80 != 0) {
        FUN_00d50b20();
      }
    }
    if (param_4 == '\0') goto LAB_0049143d;
  }
  else {
    if (param_4 == '\0') {
LAB_0049143d:
      plVar10 = (longlong *)0x0;
      goto LAB_0049143f;
    }
    FUN_0048b260();
    if (local_58 == '\0') {
      if (local_60 == (longlong *)0x0) goto LAB_0049143d;
      FUN_00d50b00();
      lVar12 = *(longlong *)(this + 0x118);
      if (lVar12 == 0) goto LAB_00491430;
LAB_00491177:
      FUN_00d50b00();
      pvVar7 = _pthread_getspecific(param_1);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01390340();
      FUN_0194ed20();
      pvVar7 = _pthread_getspecific(param_1);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013901e0();
      pvVar7 = _pthread_getspecific(param_1);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      pplVar11 = &local_60;
      FUN_01320d00();
      plVar10 = local_60;
      if ((DAT_026fdd70 == '\0') && (iVar6 = ___cxa_guard_acquire(), iVar6 != 0)) {
        _DAT_026e3238 = FUN_00115af0();
        DAT_026e3220 = "MUAudioFileSource";
        _DAT_026e3228 = 0xa0;
        param_1 = 0x136df0;
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
      if (plVar10 == (longlong *)0x0) {
LAB_00491517:
        pplVar11 = (longlong **)&DAT_02802688;
      }
      else {
        (**(code **)(*plVar10 + 0x360))();
        cVar5 = FUN_00e85ea0();
        if (cVar5 == '\0') goto LAB_00491517;
      }
      plVar10 = *pplVar11;
      if (*(char *)(pplVar11 + 1) == '\0') {
        if (plVar10 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        *(undefined1 *)(pplVar11 + 1) = 0;
      }
      if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar10 == (longlong *)0x0) {
        bVar1 = true;
      }
      else {
        pvVar7 = _pthread_getspecific(param_1);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0123abe0();
        local_a0 = 0;
        if (local_78 == '\0') {
          if (local_80 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_78 = '\0';
        }
        local_a0 = '\x01';
        local_a8 = local_80;
        local_b0 = (uint)param_3;
        uVar9 = 0;
        FUN_01500530();
        plVar3 = local_60;
        if (local_58 == '\0') {
          if (((local_60 != (longlong *)0x0) && (FUN_00d50b00(), local_58 != '\0')) &&
             (local_60 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_58 = '\0';
        }
        if ((local_a0 != '\0') && (local_a8 != 0)) {
          FUN_00d50b20();
        }
        if ((local_78 != '\0') && (local_80 != 0)) {
          FUN_00d50b20();
        }
        if (plVar3 == (longlong *)0x0) {
LAB_0049179b:
          pvVar7 = _pthread_getspecific((pthread_key_t)uVar9);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_00e8b990();
          FUN_00cb1f10();
          FUN_00db3260();
          if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          pvVar7 = _pthread_getspecific((pthread_key_t)uVar9);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_013941c0();
          plVar4 = local_60;
          if (local_60 == (longlong *)0x0) {
            pVar8 = (pthread_key_t)CONCAT71((int7)((ulonglong)uVar9 >> 8),1);
          }
          else {
            if (local_58 == '\0') {
              FUN_00d50b00();
              pVar8 = 0;
              if ((local_58 == '\0') || (local_60 == (longlong *)0x0)) goto LAB_0049186d;
              FUN_00d50b20();
            }
            pVar8 = 0;
          }
LAB_0049186d:
          local_ac = pVar8;
          pvVar7 = _pthread_getspecific(pVar8);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          pvVar7 = _pthread_getspecific(pVar8);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01393860();
          local_98 = local_60;
          local_90 = 0;
          if (local_58 == '\0') {
            if (local_60 != (longlong *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_58 = '\0';
          }
          local_90 = '\x01';
          FUN_01394160();
          if ((local_90 != '\0') && (local_98 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          local_c8 = '\0';
          local_d0 = lVar12;
          FUN_012e1a00();
          if ((local_c8 != '\0') && (local_d0 != 0)) {
            FUN_00d50b20();
          }
          pvVar7 = _pthread_getspecific(pVar8);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          local_c0 = plVar4;
          local_b8 = '\0';
          FUN_01394160();
          if ((local_b8 != '\0') && (local_c0 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          pvVar7 = _pthread_getspecific(pVar8);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_00e8b990();
          FUN_00cb1f10();
          FUN_00db3270();
          if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          FUN_0047dd70();
          if ((char)local_ac == '\0' && plVar4 != (longlong *)0x0) {
            FUN_00d50b20();
          }
          bVar1 = false;
          if (plVar3 != (longlong *)0x0) goto LAB_00491a90;
        }
        else {
          if (param_3 == 0) {
            if (*(char *)(this + 0x27b) != '\0') goto LAB_0049169f;
            goto LAB_0049179b;
          }
          if (*(char *)(this + 0x27a) == '\0') goto LAB_0049179b;
LAB_0049169f:
          cVar5 = FUN_015039e0();
          lVar13 = DAT_02708778;
          lVar2 = DAT_02708770;
          if (cVar5 == '\0') {
            if (DAT_02708778 == 0) goto LAB_004916d8;
            uVar14 = FUN_00d50b00();
          }
          else if (DAT_02708770 == 0) {
LAB_004916d8:
            lVar13 = 0;
            uVar14 = extraout_XMM0_Da;
          }
          else {
            uVar14 = FUN_00d50b00();
            lVar13 = lVar2;
          }
          lVar2 = DAT_026f6fb0;
          if (DAT_026f6fb0 != 0) {
            uVar14 = FUN_00d50b00();
          }
          local_f0 = lVar2;
          local_e8 = '\x01';
          local_d8 = '\0';
          local_e0 = lVar13;
          FUN_01f6ca30(uVar14,&local_e0);
          plVar4 = local_60;
          if (local_58 == '\0') {
            if (((local_60 != (longlong *)0x0) && (FUN_00d50b00(), local_58 != '\0')) &&
               (local_60 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            local_58 = '\0';
          }
          if ((local_d8 != '\0') && (local_e0 != 0)) {
            FUN_00d50b20();
          }
          if ((local_e8 != '\0') && (local_f0 != 0)) {
            FUN_00d50b20();
          }
          iVar6 = (**(code **)(*plVar4 + 0x5e0))();
          FUN_00d50b20();
          if (lVar13 != 0) {
            FUN_00d50b20();
          }
          bVar1 = true;
          if (iVar6 == 0) goto LAB_0049179b;
LAB_00491a90:
          FUN_00d50b20();
        }
        FUN_00d50b20();
      }
      plVar10 = (longlong *)CONCAT71((int7)((ulonglong)plVar10 >> 8),plVar10 != (longlong *)0x0);
      FUN_00d50b20();
    }
    else {
      if (local_60 == (longlong *)0x0) goto LAB_0049143d;
      lVar12 = *(longlong *)(this + 0x118);
      if (lVar12 != 0) goto LAB_00491177;
LAB_00491430:
      bVar1 = true;
      plVar10 = (longlong *)0x0;
    }
    FUN_00d50b20();
    if (bVar1) goto LAB_0049143f;
  }
  plVar10 = (longlong *)CONCAT71((int7)((ulonglong)plVar10 >> 8),1);
LAB_0049143f:
  return (ulonglong)plVar10 & 0xffffffff;
}




// ==================================================
// @00492370 (2632 bytes) — calculation

{
  bool bVar1;
  longlong lVar2;
  char cVar3;
  undefined1 uVar4;
  int iVar5;
  void *pvVar6;
  pthread_key_t pVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong this;
  longlong **pplVar10;
  longlong lVar11;
  longlong *plVar12;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar13;
  longlong local_120;
  longlong *local_118;
  longlong local_110;
  char local_108;
  longlong local_100;
  char local_f8;
  longlong *local_f0;
  char local_e8;
  longlong *local_e0;
  char local_d8;
  longlong local_d0;
  char local_c8;
  longlong local_c0;
  char local_b8;
  longlong local_b0;
  char local_a8;
  longlong local_a0;
  char local_98;
  longlong *local_90;
  longlong local_80;
  longlong *local_78;
  char local_70;
  longlong local_68;
  char local_60;
  longlong local_58;
  char local_50;
  longlong local_48;
  char local_40;
  
  if (param_2 == 0) {
    FUN_01caeae0();
    plVar8 = local_78;
    if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar8 != (longlong *)0x0) {
      FUN_00490b50();
      plVar8 = local_78;
      if ((((local_70 == '\0') && (local_78 != (longlong *)0x0)) &&
          (FUN_00d50b00(), local_70 != '\0')) && (local_78 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (*(char *)(this + 0x27b) == '\0') {
        if (DAT_02708790 == 0) goto LAB_00492707;
        local_80 = DAT_02708790;
        FUN_00d50b00();
      }
      else if ((*(char *)(this + 0x27c) == '\0') && (*(char *)(this + 0x27a) == '\0')) {
        if (DAT_02708788 == 0) {
LAB_00492707:
          local_80 = 0;
        }
        else {
          local_80 = DAT_02708788;
          FUN_00d50b00();
        }
      }
      else {
        if (DAT_02708780 == 0) goto LAB_00492707;
        local_80 = DAT_02708780;
        FUN_00d50b00();
      }
      lVar11 = DAT_02708760;
      if (DAT_02708760 != 0) {
        FUN_00d50b00();
      }
      local_120 = lVar11;
      FUN_00083ea0(2,&local_120);
      FUN_000b4da0();
      lVar2 = local_48;
      if (local_40 == '\0') {
        if (((local_48 != 0) && (FUN_00d50b00(), local_40 != '\0')) && (local_48 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_40 = '\0';
      }
      local_78 = (longlong *)&DAT_0253d630;
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      local_78 = &DAT_024c5048;
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      if (lVar11 != 0) {
        FUN_00d50b20();
      }
      local_110 = local_80;
      local_108 = '\0';
      local_100 = lVar2;
      local_f8 = '\0';
      FUN_01e57360(&local_100,&local_110);
      plVar9 = local_78;
      if (local_70 == '\0') {
        if (((local_78 != (longlong *)0x0) && (FUN_00d50b00(), local_70 != '\0')) &&
           (local_78 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_70 = '\0';
      }
      if ((local_f8 != '\0') && (local_100 != 0)) {
        FUN_00d50b20();
      }
      if ((local_108 != '\0') && (local_110 != 0)) {
        FUN_00d50b20();
      }
      if (plVar9 != (longlong *)0x0) {
        FUN_01caeae0();
        local_f0 = plVar9;
        local_e8 = '\0';
        FUN_01d64eb0();
        if ((local_e8 != '\0') && (local_f0 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      if (local_80 != 0) {
        FUN_00d50b20();
      }
      if (plVar8 != (longlong *)0x0) {
        FUN_00d50b20();
      }
    }
    if (*(char *)(this + 0x279) == '\0') goto LAB_004928d9;
  }
  else {
    if (*(char *)(this + 0x279) == '\0') {
LAB_004928d9:
      plVar8 = (longlong *)0x0;
      goto LAB_004928db;
    }
    FUN_0048b260();
    plVar8 = local_78;
    if (local_70 == '\0') {
      if (local_78 == (longlong *)0x0) goto LAB_004928d9;
      FUN_00d50b00();
      plVar9 = *(longlong **)(this + 0x118);
      if (plVar9 != (longlong *)0x0) goto LAB_004923d8;
LAB_004924fc:
      bVar1 = true;
      plVar8 = (longlong *)0x0;
    }
    else {
      if (local_78 == (longlong *)0x0) goto LAB_004928d9;
      plVar9 = *(longlong **)(this + 0x118);
      if (plVar9 == (longlong *)0x0) goto LAB_004924fc;
LAB_004923d8:
      local_118 = plVar8;
      FUN_00d50b00();
      pvVar6 = _pthread_getspecific(param_1);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      pplVar10 = &local_78;
      FUN_01320d00();
      plVar8 = local_78;
      if ((DAT_026fdd70 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
        _DAT_026e3238 = FUN_00115af0();
        DAT_026e3220 = "MUAudioFileSource";
        _DAT_026e3228 = 0xa0;
        param_1 = 0x136df0;
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
      if (plVar8 == (longlong *)0x0) {
LAB_0049256d:
        pplVar10 = (longlong **)&DAT_02802688;
      }
      else {
        (**(code **)(*plVar8 + 0x360))();
        cVar3 = FUN_00e85ea0();
        if (cVar3 == '\0') goto LAB_0049256d;
      }
      plVar8 = *pplVar10;
      if (*(char *)(pplVar10 + 1) == '\0') {
        if (plVar8 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        *(undefined1 *)(pplVar10 + 1) = 0;
      }
      if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar8 == (longlong *)0x0) {
        bVar1 = true;
      }
      else {
        pvVar6 = _pthread_getspecific(param_1);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0123abe0();
        local_b0 = local_48;
        local_a8 = 0;
        if (local_40 == '\0') {
          if (local_48 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_40 = '\0';
        }
        local_a8 = '\x01';
        uVar4 = FUN_00742b20();
        pVar7 = 0;
        FUN_01500530(0,uVar4);
        plVar9 = local_78;
        if (local_70 == '\0') {
          if (((local_78 != (longlong *)0x0) && (FUN_00d50b00(), local_70 != '\0')) &&
             (local_78 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_70 = '\0';
        }
        if ((local_a8 != '\0') && (local_b0 != 0)) {
          FUN_00d50b20();
        }
        if ((local_40 != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
        local_90 = plVar9;
        if (plVar9 == (longlong *)0x0) {
LAB_00492a38:
          plVar9 = local_90;
          pvVar6 = _pthread_getspecific(pVar7);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0123b100();
          FUN_00b8c7f0();
          plVar12 = local_78;
          if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_40 != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
          if (plVar12 != (longlong *)0x0) {
            pvVar6 = _pthread_getspecific(pVar7);
            if (pvVar6 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0123b100();
            local_c0 = 0;
            local_b8 = '\0';
            FUN_00b8cce0();
            if ((local_b8 != '\0') && (local_c0 != 0)) {
              FUN_00d50b20();
            }
            if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
          if (plVar9 != (longlong *)0x0) {
            FUN_00d50b20();
          }
          plVar12 = (longlong *)0x0;
          pvVar6 = _pthread_getspecific(pVar7);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0123abe0();
          local_a0 = local_48;
          local_98 = 0;
          if (local_40 == '\0') {
            if (local_48 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_40 = '\0';
          }
          local_98 = '\x01';
          FUN_014fff90();
          plVar9 = local_78;
          if (local_70 == '\0') {
            if (((local_78 != (longlong *)0x0) && (FUN_00d50b00(), local_70 != '\0')) &&
               (local_78 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            local_70 = '\0';
          }
          if ((local_98 != '\0') && (local_a0 != 0)) {
            FUN_00d50b20();
          }
          if ((local_40 != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
          if ((plVar9 != (longlong *)0x0) &&
             (cVar3 = (**(code **)(*plVar9 + 0x398))(), cVar3 != '\0')) {
            (**(code **)(*plVar9 + 0x408))();
          }
          FUN_0047dd70();
          if (plVar9 != (longlong *)0x0) {
            FUN_00d50b20();
          }
          bVar1 = false;
          if (local_90 == (longlong *)0x0) goto LAB_00492c9b;
        }
        else {
          cVar3 = FUN_015039e0();
          lVar2 = DAT_02708798;
          lVar11 = DAT_02708778;
          if (cVar3 == '\0') {
            if (DAT_02708778 == 0) goto LAB_00492969;
            uVar13 = FUN_00d50b00();
          }
          else if (DAT_02708798 == 0) {
LAB_00492969:
            lVar11 = 0;
            uVar13 = extraout_XMM0_Da;
          }
          else {
            uVar13 = FUN_00d50b00();
            lVar11 = lVar2;
          }
          plVar9 = DAT_026f6fb0;
          if (DAT_026f6fb0 != (longlong *)0x0) {
            uVar13 = FUN_00d50b00();
          }
          local_e0 = plVar9;
          local_d8 = '\x01';
          local_c8 = '\0';
          local_d0 = lVar11;
          FUN_01f6ca30(uVar13,&local_d0);
          plVar12 = local_78;
          if (local_70 == '\0') {
            if (((local_78 != (longlong *)0x0) && (FUN_00d50b00(), local_70 != '\0')) &&
               (local_78 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            local_70 = '\0';
          }
          if ((local_c8 != '\0') && (local_d0 != 0)) {
            FUN_00d50b20();
          }
          if ((local_d8 != '\0') && (local_e0 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          iVar5 = (**(code **)(*plVar12 + 0x5e0))();
          FUN_00d50b20();
          if (lVar11 != 0) {
            FUN_00d50b20();
          }
          if (iVar5 == 0) goto LAB_00492a38;
          bVar1 = true;
          plVar12 = local_90;
LAB_00492c9b:
          if (plVar12 != (longlong *)0x0) {
            FUN_00d50b20();
          }
        }
        FUN_00d50b20();
      }
      plVar8 = (longlong *)CONCAT71((int7)((ulonglong)plVar9 >> 8),plVar8 != (longlong *)0x0);
      FUN_00d50b20();
    }
    FUN_00d50b20();
    if (bVar1) goto LAB_004928db;
  }
  plVar8 = (longlong *)CONCAT71((int7)((ulonglong)plVar8 >> 8),1);
LAB_004928db:
  return (ulonglong)plVar8 & 0xffffffff;
}




// ==================================================
// @00761a80 (2569 bytes) — math_loop

{
  char cVar1;
  void *pvVar2;
  longlong lVar3;
  pthread_key_t pVar4;
  longlong **pplVar5;
  longlong *plVar6;
  longlong *plVar7;
  ulonglong uVar8;
  int iVar9;
  longlong *arg1;
  longlong *this;
  longlong *plVar10;
  undefined4 uVar11;
  longlong *local_150;
  char local_148;
  longlong local_118;
  char local_110;
  longlong local_108;
  char local_100;
  longlong local_f8;
  char local_f0;
  longlong *local_e8;
  char local_e0;
  longlong *local_d8;
  char local_d0;
  longlong local_c8;
  char local_c0;
  longlong local_b8;
  char local_b0;
  longlong *local_a8;
  char local_a0;
  longlong *local_90;
  char local_88;
  longlong *local_80;
  char local_78;
  longlong *local_70;
  char local_68;
  longlong local_60;
  undefined8 local_58;
  int local_50;
  longlong *local_48;
  longlong *local_40;
  char local_38;
  
  FUN_0075c8d0();
  plVar7 = local_70;
  if ((((local_68 == '\0') && (local_70 != (longlong *)0x0)) && (FUN_00d50b00(), local_68 != '\0'))
     && (local_70 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  cVar1 = FUN_00ce6e30();
  if ((cVar1 == '\0') && (cVar1 = (**(code **)(*plVar7 + 0x420))(), cVar1 == '\0')) {
    uVar8 = 0;
  }
  else {
    lVar3 = *arg1;
    local_48 = plVar7;
    if (lVar3 == 0) {
      FUN_00757c60();
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012cb480();
      plVar6 = local_70;
      plVar10 = (longlong *)*arg1;
      if (plVar10 == local_70) {
        if (((char)arg1[1] != '\0') || (local_70 == (longlong *)0x0)) goto LAB_00761bf7;
        if (local_68 == '\0') {
          FUN_00d50b00();
          goto LAB_00761bef;
        }
LAB_00761bb4:
        *(undefined1 *)(arg1 + 1) = 1;
        local_68 = '\0';
        plVar7 = local_48;
      }
      else {
        lVar3 = arg1[1];
        if (local_68 != '\0') {
          *arg1 = (longlong)local_70;
          if (((char)lVar3 != '\0') && (plVar10 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          goto LAB_00761bb4;
        }
        if (local_70 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        *arg1 = (longlong)plVar6;
        if (((char)lVar3 != '\0') && (plVar10 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
LAB_00761bef:
        *(undefined1 *)(arg1 + 1) = 1;
        plVar7 = local_48;
LAB_00761bf7:
        if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      lVar3 = *arg1;
      if (lVar3 != 0) goto LAB_00761c2c;
    }
    else {
LAB_00761c2c:
      local_68 = '\0';
      local_70 = (longlong *)0x0;
      local_58 = 0xffffffff;
      local_50 = 0;
      local_58._4_4_ = 0;
      local_60 = lVar3;
      while( true ) {
        if (local_58._4_4_ != 0) {
          if (local_58._4_4_ < 1) {
            iVar9 = -local_58._4_4_;
          }
          else {
            iVar9 = (int)local_58 - local_58._4_4_;
            local_58 = CONCAT44(local_58._4_4_,iVar9);
            FUN_00d23690();
            local_50 = local_50 + local_58._4_4_;
            iVar9 = 0;
          }
          local_58 = CONCAT44(iVar9,(int)local_58);
        }
        lVar3 = (longlong)(int)local_58;
        iVar9 = (int)local_58 + 1;
        local_58 = CONCAT44(local_58._4_4_,iVar9);
        if (*(int *)(local_60 + 0xc) <= iVar9) break;
        plVar7 = *(longlong **)(*(longlong *)(local_60 + 0x10) + 8 + lVar3 * 8);
        local_40 = plVar7;
        local_70 = plVar7;
        if ((DAT_026fdd70 == '\0') && (iVar9 = ___cxa_guard_acquire(), iVar9 != 0)) {
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
        pplVar5 = (longlong **)&DAT_02802688;
        if (plVar7 != (longlong *)0x0) {
          (**(code **)(*plVar7 + 0x360))();
          cVar1 = FUN_00e85ea0();
          pplVar5 = &local_40;
          if (cVar1 == '\0') {
            pplVar5 = (longlong **)&DAT_02802688;
          }
        }
        plVar7 = local_70;
        if (*pplVar5 != (longlong *)0x0) {
          pvVar2 = _pthread_getspecific((pthread_key_t)pplVar5);
          plVar10 = local_70;
          pVar4 = (pthread_key_t)pplVar5;
          if ((pvVar2 != (void *)0x0) && (lVar3 = FUN_00e8b990(), plVar7 = plVar10, lVar3 != 0)) {
            plVar7 = (longlong *)plVar10[(ulonglong)(*(uint *)(lVar3 + 0x154) & 1) + 4];
          }
          (**(code **)(*plVar7 + 0x478))();
          (**(code **)(*local_80 + 0x3f0))();
          cVar1 = (**(code **)(*local_40 + 0x50))();
          if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          plVar7 = local_70;
          if (cVar1 == '\0') {
            pvVar2 = _pthread_getspecific(pVar4);
            plVar10 = local_70;
            if ((pvVar2 != (void *)0x0) && (lVar3 = FUN_00e8b990(), plVar7 = plVar10, lVar3 != 0)) {
              plVar7 = (longlong *)plVar10[(ulonglong)(*(uint *)(lVar3 + 0x154) & 1) + 4];
            }
            cVar1 = (**(code **)(*plVar7 + 0x498))();
            plVar7 = local_70;
            if (cVar1 != '\0') {
              pvVar2 = _pthread_getspecific(pVar4);
              plVar10 = local_70;
              if ((pvVar2 != (void *)0x0) && (lVar3 = FUN_00e8b990(), plVar7 = plVar10, lVar3 != 0))
              {
                plVar7 = (longlong *)plVar10[(ulonglong)(*(uint *)(lVar3 + 0x154) & 1) + 4];
              }
              (**(code **)(*plVar7 + 0x478))();
              uVar11 = (**(code **)(*local_150 + 0x388))();
              local_90 = local_80;
              local_88 = 0;
              if (local_78 == '\0') {
                if (local_80 != (longlong *)0x0) {
                  uVar11 = FUN_00d50b00();
                }
              }
              else {
                local_78 = '\0';
              }
              local_88 = '\x01';
              (**(code **)(*local_48 + 0x400))(uVar11,&local_90);
              plVar7 = local_40;
              if (local_38 == '\0') {
                if (((local_40 != (longlong *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
                   (local_40 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
              }
              else {
                local_38 = '\0';
              }
              if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              if ((local_148 != '\0') && (local_150 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              cVar1 = FUN_00ce6e30();
              plVar10 = plVar7;
              if (cVar1 != '\0') {
                local_118 = 0;
                local_110 = '\0';
                local_108 = 0;
                local_100 = '\0';
                plVar6 = &local_108;
                FUN_00b8a050(plVar6,&local_118,0,1);
                plVar10 = local_40;
                pVar4 = (pthread_key_t)plVar6;
                if (plVar7 == local_40) {
LAB_00761fea:
                  plVar10 = plVar7;
                  if (local_38 != '\0') {
LAB_00761ff0:
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
                      plVar7 = plVar10;
                      goto LAB_00761fea;
                    }
                    if (local_38 == '\0') goto LAB_00761ffe;
                    goto LAB_00761ff0;
                  }
                  if (plVar7 != (longlong *)0x0) {
                    FUN_00d50b20();
                  }
                  local_38 = '\0';
                }
LAB_00761ffe:
                if ((local_100 != '\0') && (local_108 != 0)) {
                  FUN_00d50b20();
                }
                if ((local_110 != '\0') && (local_118 != 0)) {
                  FUN_00d50b20();
                }
              }
              plVar7 = local_70;
              if (*param_2 == 0) {
LAB_00762187:
                pvVar2 = _pthread_getspecific(pVar4);
                if (pvVar2 != (void *)0x0) {
                  FUN_00e8b990();
                }
                local_d0 = '\0';
                local_d8 = plVar10;
                FUN_0123bf80();
                if ((local_d0 != '\0') && (local_d8 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
              }
              else {
                pvVar2 = _pthread_getspecific(pVar4);
                plVar6 = local_70;
                if ((pvVar2 != (void *)0x0) && (lVar3 = FUN_00e8b990(), plVar7 = plVar6, lVar3 != 0)
                   ) {
                  plVar7 = (longlong *)plVar6[(ulonglong)(*(uint *)(lVar3 + 0x154) & 1) + 4];
                }
                (**(code **)(*plVar7 + 0x478))();
                (**(code **)(*local_80 + 0x3f0))();
                local_f8 = *param_2;
                local_f0 = '\0';
                cVar1 = (**(code **)(*local_40 + 0x50))();
                if ((local_f0 != '\0') && (local_f8 != 0)) {
                  FUN_00d50b20();
                }
                if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                if (cVar1 == '\0') goto LAB_00762187;
                pvVar2 = _pthread_getspecific(pVar4);
                if (pvVar2 != (void *)0x0) {
                  FUN_00e8b990();
                }
                local_e0 = '\0';
                local_e8 = plVar10;
                FUN_0123bf50();
                if ((local_e0 != '\0') && (local_e8 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
              }
              pvVar2 = _pthread_getspecific(pVar4);
              if (pvVar2 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_0123b100();
              FUN_00b875e0();
              if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              if (plVar10 != (longlong *)0x0) {
                FUN_00d50b20();
              }
            }
          }
        }
      }
      FUN_00136d50();
      plVar7 = local_48;
    }
    (**(code **)(*this + 0x498))();
    FUN_00cb1f10();
    FUN_00db3760();
    if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    (**(code **)(*this + 0x578))();
    FUN_00d403d0();
    local_c8 = DAT_026fce60;
    if (DAT_026fce60 != 0) {
      FUN_00d50b00();
    }
    local_c0 = '\x01';
    local_a0 = 0;
    FUN_00d50b00();
    local_a0 = '\x01';
    local_b8 = 0;
    local_b0 = '\0';
    local_a8 = this;
    FUN_00d40470(&local_b8,&local_a8,1,3);
    if ((local_b0 != '\0') && (local_b8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_a0 != '\0') && (local_a8 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_c0 != '\0') && (local_c8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    uVar8 = CONCAT71((int7)((ulonglong)this >> 8),1);
    if (plVar7 == (longlong *)0x0) goto LAB_00762486;
  }
  FUN_00d50b20();
LAB_00762486:
  return uVar8 & 0xffffffff;
}




// ==================================================
// @004a64d0 (2472 bytes) — calculation

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  int iVar4;
  void *pvVar5;
  undefined8 uVar6;
  longlong *arg1;
  pthread_key_t pVar7;
  undefined8 uVar8;
  undefined1 local_138 [8];
  undefined1 local_130;
  longlong local_128;
  char local_120;
  longlong local_118;
  char local_110;
  longlong local_108;
  char local_100;
  longlong local_f8;
  char local_f0;
  longlong local_e8;
  longlong local_e0;
  char local_d8;
  undefined8 *local_d0;
  char local_c8;
  undefined8 *local_c0;
  char local_b8;
  longlong local_b0;
  char local_a8;
  longlong local_a0;
  char local_98;
  undefined8 *local_90;
  char local_88;
  undefined8 *local_80;
  char local_78;
  longlong local_70;
  char local_68;
  undefined8 *local_60;
  uint local_58;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar8 = FUN_012e6000();
  local_50 = local_128;
  local_58 = 1;
  local_60 = &DAT_024c5048;
  local_48 = 0;
  if (local_128 != 0) {
    uVar8 = FUN_00d50b00();
  }
  local_48 = '\x01';
  FUN_00d8cb40(uVar8,&local_60);
  local_e0 = local_70;
  local_d8 = 0;
  if (local_68 == '\0') {
    if (local_70 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_68 = '\0';
  }
  local_d8 = '\x01';
  local_118 = *arg1;
  local_110 = '\0';
  pVar7 = 1;
  FUN_004f83c0(1,&local_118);
  lVar3 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_110 != '\0') && (local_118 != 0)) {
    FUN_00d50b20();
  }
  if ((local_d8 != '\0') && (local_e0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  local_60 = &DAT_024c5048;
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((local_120 != '\0') && (local_128 != 0)) {
    FUN_00d50b20();
  }
  local_e8 = lVar3;
  pvVar5 = _pthread_getspecific(pVar7);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e6a50();
  pvVar5 = _pthread_getspecific(pVar7);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e6160();
  local_60 = (undefined8 *)*arg1;
  local_58 = local_58 & 0xffffff00;
  iVar4 = FUN_00d237a0();
  if (((char)local_58 != '\0') && (local_60 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  FUN_004a11d0();
  puVar2 = local_60;
  if ((char)local_58 == '\0') {
    if (local_60 != (undefined8 *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_58 = local_58 & 0xffffff00;
  }
  pvVar5 = _pthread_getspecific(pVar7);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e6a50();
  lVar3 = local_40;
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  local_130 = 1;
  pVar7 = iVar4 + 1;
  FUN_004a17d0(pVar7,local_138);
  lVar1 = local_e8;
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (puVar2 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  pvVar5 = _pthread_getspecific(pVar7);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  pvVar5 = _pthread_getspecific(pVar7);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e8b20();
  local_d0 = local_60;
  local_c8 = 0;
  if ((char)local_58 == '\0') {
    if (local_60 != (undefined8 *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_58 = local_58 & 0xffffff00;
  }
  local_c8 = '\x01';
  FUN_012e8aa0();
  if ((local_c8 != '\0') && (local_d0 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_58 != '\0') && (local_60 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  pvVar5 = _pthread_getspecific(pVar7);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  pvVar5 = _pthread_getspecific(pVar7);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e8a60();
  local_c0 = local_60;
  local_b8 = 0;
  if ((char)local_58 == '\0') {
    if (local_60 != (undefined8 *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_58 = local_58 & 0xffffff00;
  }
  local_b8 = '\x01';
  FUN_012e89e0();
  if ((local_b8 != '\0') && (local_c0 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_58 != '\0') && (local_60 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  pvVar5 = _pthread_getspecific(pVar7);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e5ae0();
  iVar4 = *(int *)((longlong)local_60 + 0xc);
  if ((char)local_58 != '\0') {
    FUN_00d50b20();
  }
  if (iVar4 != 0) {
    FUN_01ca6a90();
    local_b0 = local_40;
    local_a8 = 0;
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_a8 = '\x01';
    FUN_01c92fe0();
    puVar2 = local_60;
    if ((char)local_58 == '\0') {
      if (local_60 != (undefined8 *)0x0) {
        FUN_00d50b00();
        if (((char)local_58 != '\0') && (local_60 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    else {
      local_58 = local_58 & 0xffffff00;
    }
    if ((local_a8 != '\0') && (local_b0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    FUN_01c93060();
    pvVar5 = _pthread_getspecific(pVar7);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e5ae0();
    local_a0 = local_40;
    local_98 = 0;
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_98 = '\x01';
    FUN_01266770();
    pvVar5 = _pthread_getspecific(pVar7);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar8 = FUN_0125a280();
    if (((char)local_58 != '\0') && (local_60 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_98 != '\0') && (local_a0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    pvVar5 = _pthread_getspecific(pVar7);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e5ae0();
    local_90 = local_60;
    local_88 = 0;
    if ((char)local_58 == '\0') {
      if (local_60 != (undefined8 *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_58 = local_58 & 0xffffff00;
    }
    local_88 = '\x01';
    uVar6 = FUN_00e7bdb0();
    FUN_01c936e0(1,uVar6);
    if ((local_88 != '\0') && (local_90 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
    if (((char)local_58 != '\0') && (local_60 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
    local_108 = lVar1;
    local_100 = '\0';
    FUN_000ba510();
    local_80 = local_60;
    local_78 = 0;
    if ((char)local_58 == '\0') {
      if (local_60 != (undefined8 *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_58 = local_58 & 0xffffff00;
    }
    local_78 = '\x01';
    local_f0 = '\0';
    local_f8 = 0;
    FUN_01c9db50(uVar8,&local_f8);
    if ((local_f0 != '\0') && (local_f8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_78 != '\0') && (local_80 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
    if (((char)local_58 != '\0') && (local_60 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_100 != '\0') && (local_108 != 0)) {
      FUN_00d50b20();
    }
    if (puVar2 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  return;
}




// ==================================================
// @00267bd0 (2428 bytes) — math_loop

{
  longlong *plVar1;
  char cVar2;
  void *pvVar3;
  longlong lVar4;
  pthread_key_t pVar5;
  longlong *plVar6;
  longlong lVar7;
  int iVar8;
  longlong arg1;
  undefined8 this;
  longlong **pplVar9;
  bool bVar10;
  undefined4 uVar11;
  longlong local_b8;
  char local_b0;
  longlong local_88;
  char local_80;
  longlong *local_78;
  longlong *local_68;
  char local_60;
  longlong *local_58;
  undefined8 local_50;
  int local_48;
  longlong local_40;
  char local_38;
  
  if (*param_2 != 0) {
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    pplVar9 = &local_68;
    FUN_01320d00();
    plVar1 = local_68;
    if ((DAT_026fdd70 == '\0') && (iVar8 = ___cxa_guard_acquire(), iVar8 != 0)) {
      _DAT_026e3238 = FUN_00115af0();
      DAT_026e3220 = "MUAudioFileSource";
      _DAT_026e3228 = 0xa0;
      param_1 = 0x136df0;
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
    if (plVar1 == (longlong *)0x0) {
LAB_00267c79:
      pplVar9 = (longlong **)&DAT_02802688;
    }
    else {
      (**(code **)(*plVar1 + 0x360))();
      cVar2 = FUN_00e85ea0();
      if (cVar2 == '\0') goto LAB_00267c79;
    }
    plVar1 = *pplVar9;
    if (*(char *)(pplVar9 + 1) == '\0') {
      if (plVar1 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      *(undefined1 *)(pplVar9 + 1) = 0;
    }
    if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_01f27fe0();
    cVar2 = (**(code **)(*local_68 + 0x450))();
    if (cVar2 == '\0') {
      if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar1 != (longlong *)0x0) {
        if (*(longlong *)(arg1 + 0x1c0) != 0) {
          FUN_006f3f00();
          plVar6 = local_68;
          if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (plVar6 != (longlong *)0x0) {
            if (*(longlong *)(arg1 + 0x1c0) == 0) {
              local_38 = '\0';
              local_40 = 0;
            }
            else {
              FUN_006f3f00();
            }
            FUN_00757c60();
            local_78 = local_68;
            plVar6 = local_68;
            if (local_68 == (longlong *)0x0) {
              bVar10 = true;
              local_78 = (longlong *)0x0;
            }
            else {
              if (local_60 == '\0') {
                FUN_00d50b00();
                bVar10 = false;
                if ((local_60 == '\0') || (local_68 == (longlong *)0x0)) goto LAB_00267dd8;
                FUN_00d50b20();
              }
              else {
                local_60 = '\0';
              }
              bVar10 = false;
            }
LAB_00267dd8:
            param_1 = (pthread_key_t)plVar6;
            if ((local_38 != '\0') && (local_40 != 0)) {
              FUN_00d50b20();
            }
            if (local_78 != (longlong *)0x0) {
              pvVar3 = _pthread_getspecific(param_1);
              if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
                param_1 = (pthread_key_t)local_78;
              }
              FUN_012cb1b0();
              plVar6 = local_68;
              if (local_60 == '\0') {
                if (local_68 != (longlong *)0x0) {
                  FUN_00d50b00();
                  if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
                    FUN_00d50b20();
                  }
                  goto LAB_00268258;
                }
              }
              else if (local_68 != (longlong *)0x0) {
LAB_00268258:
                local_60 = '\0';
                local_68 = (longlong *)0x0;
                local_58 = plVar6;
                local_50 = 0xffffffff;
                local_48 = 0;
                while( true ) {
                  lVar4 = (longlong)(int)local_50;
                  iVar8 = (int)local_50 + 1;
                  local_50 = CONCAT44(local_50._4_4_,iVar8);
                  if (*(int *)((longlong)local_58 + 0xc) <= iVar8) break;
                  lVar7 = local_58[2];
                  local_68 = *(longlong **)(lVar7 + 8 + lVar4 * 8);
                  pvVar3 = _pthread_getspecific((pthread_key_t)lVar7);
                  pVar5 = (pthread_key_t)lVar7;
                  if (pvVar3 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  uVar11 = FUN_012e7210();
                  if (local_80 == '\0') {
                    if (local_88 != 0) {
                      uVar11 = FUN_00d50b00();
                    }
                  }
                  else {
                    local_80 = '\0';
                  }
                  local_b8 = *param_2;
                  local_b0 = '\0';
                  FUN_004fb4a0(uVar11,&local_b8);
                  lVar4 = local_40;
                  if (local_38 == '\0') {
                    if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0))
                    {
                      FUN_00d50b20();
                    }
                  }
                  else {
                    local_38 = '\0';
                  }
                  if ((local_b0 != '\0') && (local_b8 != 0)) {
                    FUN_00d50b20();
                  }
                  if (local_88 != 0) {
                    FUN_00d50b20();
                  }
                  if ((local_80 != '\0') && (local_88 != 0)) {
                    FUN_00d50b20();
                  }
                  if (lVar4 != 0) {
                    pvVar3 = _pthread_getspecific(pVar5);
                    if (pvVar3 != (void *)0x0) {
                      FUN_00e8b990();
                    }
                    FUN_012e6000();
                    FUN_00d50b20();
                    FUN_000be170();
                    FUN_00d50b20();
                    if (!bVar10) {
                      FUN_00d50b20();
                    }
                    FUN_00d50b20();
                    return this;
                  }
                  if (local_50._4_4_ != 0) {
                    if (local_50._4_4_ < 1) {
                      iVar8 = -local_50._4_4_;
                    }
                    else {
                      local_50 = CONCAT44(local_50._4_4_,(int)local_50 - local_50._4_4_);
                      FUN_00d23690();
                      local_48 = local_48 + local_50._4_4_;
                      iVar8 = 0;
                    }
                    local_50 = CONCAT44(iVar8,(int)local_50);
                  }
                }
                plVar6 = local_58;
                FUN_000be170();
                param_1 = (pthread_key_t)plVar6;
                FUN_00d50b20();
              }
              if (!bVar10) {
                FUN_00d50b20();
              }
              goto LAB_00267ce0;
            }
          }
        }
        goto LAB_00267e34;
      }
    }
    else {
      if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
LAB_00267ce0:
      if (plVar1 != (longlong *)0x0) {
LAB_00267e34:
        pvVar3 = _pthread_getspecific(param_1);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0123b100();
        if (local_68 == (longlong *)0x0) {
          bVar10 = false;
        }
        else {
          pvVar3 = _pthread_getspecific(param_1);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0123b100();
          FUN_00b88600();
          bVar10 = local_40 != 0;
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
          if ((local_80 != '\0') && (local_88 != 0)) {
            FUN_00d50b20();
          }
        }
        if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (bVar10) {
          pvVar3 = _pthread_getspecific(param_1);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0123b100();
          FUN_00b88600();
          (**(code **)(*local_68 + 0x468))();
          if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
          FUN_00d50b20();
          return this;
        }
        FUN_00d50b20();
      }
    }
  }
  FUN_00226f20();
  if (local_60 == '\0') {
    if (local_68 != (longlong *)0x0) {
      FUN_00d50b00();
      goto LAB_00267f8f;
    }
LAB_00268001:
    bVar10 = true;
  }
  else {
    if (local_68 == (longlong *)0x0) goto LAB_00268001;
LAB_00267f8f:
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01657380();
    if (local_68 == (longlong *)0x0) {
      bVar10 = false;
    }
    else {
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01657380();
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01650620();
      bVar10 = local_40 != 0;
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if ((local_80 != '\0') && (local_88 != 0)) {
        FUN_00d50b20();
      }
    }
    if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (bVar10) {
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01657380();
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01650620();
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01667b90();
      if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      goto LAB_0026819a;
    }
    bVar10 = false;
  }
  FUN_00d8ede0();
  if (bVar10) {
    return this;
  }
LAB_0026819a:
  FUN_00d50b20();
  return this;
}




// ==================================================
// @00243520 (2313 bytes) — calculation

{
  longlong lVar1;
  longlong lVar2;
  longlong this;
  longlong local_230;
  char local_228;
  longlong local_220;
  char local_218;
  longlong local_210;
  char local_208;
  longlong local_200;
  char local_1f8;
  longlong local_1f0;
  char local_1e8;
  longlong local_1e0;
  char local_1d8;
  longlong local_1d0;
  char local_1c8;
  longlong local_1c0;
  char local_1b8;
  longlong local_1b0;
  char local_1a8;
  longlong local_1a0;
  char local_198;
  longlong local_190;
  char local_188;
  longlong local_180;
  char local_178;
  longlong local_170;
  char local_168;
  longlong local_160;
  char local_158;
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
  longlong local_30;
  char local_28;
  
  FUN_01e53f10();
  FUN_00d403d0();
  if ((local_28 == '\0') && (local_30 != 0)) {
    FUN_00d50b00();
  }
  if (this != 0) {
    FUN_00d50b00();
  }
  lVar1 = DAT_026f6d60;
  if (DAT_026f6d60 != 0) {
    FUN_00d50b00();
  }
  local_230 = lVar1;
  local_228 = '\x01';
  local_220 = 0;
  local_218 = '\0';
  FUN_00d41430(&local_220,&local_230);
  if ((local_218 != '\0') && (local_220 != 0)) {
    FUN_00d50b20();
  }
  if ((local_228 != '\0') && (local_230 != 0)) {
    FUN_00d50b20();
  }
  if (this != 0) {
    FUN_00d50b20();
    FUN_00d50b00();
  }
  lVar1 = DAT_026f6d50;
  if (DAT_026f6d50 != 0) {
    FUN_00d50b00();
  }
  local_210 = lVar1;
  local_208 = '\x01';
  local_200 = 0;
  local_1f8 = '\0';
  FUN_00d41430(&local_200,&local_210);
  if ((local_1f8 != '\0') && (local_200 != 0)) {
    FUN_00d50b20();
  }
  if ((local_208 != '\0') && (local_210 != 0)) {
    FUN_00d50b20();
  }
  if (this != 0) {
    FUN_00d50b20();
    FUN_00d50b00();
  }
  lVar1 = DAT_026f6d40;
  if (DAT_026f6d40 != 0) {
    FUN_00d50b00();
  }
  local_1f0 = lVar1;
  local_1e8 = '\x01';
  local_1e0 = 0;
  local_1d8 = '\0';
  FUN_00d41430(&local_1e0,&local_1f0);
  if ((local_1d8 != '\0') && (local_1e0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_1e8 != '\0') && (local_1f0 != 0)) {
    FUN_00d50b20();
  }
  if (this != 0) {
    FUN_00d50b20();
    FUN_00d50b00();
  }
  lVar1 = DAT_026fce70;
  if (DAT_026fce70 != 0) {
    FUN_00d50b00();
  }
  local_1d0 = lVar1;
  local_1c8 = '\x01';
  local_1c0 = 0;
  local_1b8 = '\0';
  FUN_00d41430(&local_1c0,&local_1d0);
  if ((local_1b8 != '\0') && (local_1c0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_1c8 != '\0') && (local_1d0 != 0)) {
    FUN_00d50b20();
  }
  if (this != 0) {
    FUN_00d50b20();
    FUN_00d50b00();
  }
  lVar1 = DAT_027e7c30;
  if (DAT_027e7c30 != 0) {
    FUN_00d50b00();
  }
  local_1b0 = lVar1;
  local_1a8 = '\x01';
  local_1a0 = 0;
  local_198 = '\0';
  FUN_00d41430(&local_1a0,&local_1b0);
  if ((local_198 != '\0') && (local_1a0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_1a8 != '\0') && (local_1b0 != 0)) {
    FUN_00d50b20();
  }
  if (this != 0) {
    FUN_00d50b20();
    FUN_00d50b00();
  }
  lVar1 = DAT_026f6d58;
  if (DAT_026f6d58 != 0) {
    FUN_00d50b00();
  }
  local_190 = lVar1;
  local_188 = '\x01';
  local_180 = 0;
  local_178 = '\0';
  FUN_00d41430(&local_180,&local_190);
  if ((local_178 != '\0') && (local_180 != 0)) {
    FUN_00d50b20();
  }
  if ((local_188 != '\0') && (local_190 != 0)) {
    FUN_00d50b20();
  }
  if (this != 0) {
    FUN_00d50b20();
    FUN_00d50b00();
  }
  lVar1 = DAT_026fe420;
  if (DAT_026fe420 != 0) {
    FUN_00d50b00();
  }
  local_170 = lVar1;
  local_168 = '\x01';
  local_160 = 0;
  local_158 = '\0';
  FUN_00d41430(&local_160,&local_170);
  if ((local_158 != '\0') && (local_160 != 0)) {
    FUN_00d50b20();
  }
  if ((local_168 != '\0') && (local_170 != 0)) {
    FUN_00d50b20();
  }
  if (this != 0) {
    FUN_00d50b20();
    FUN_00d50b00();
  }
  lVar1 = DAT_026f6d70;
  if (DAT_026f6d70 != 0) {
    FUN_00d50b00();
  }
  local_150 = lVar1;
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
    FUN_00d50b00();
  }
  lVar1 = DAT_026f6ec0;
  if (DAT_026f6ec0 != 0) {
    FUN_00d50b00();
  }
  lVar2 = DAT_026d7800;
  local_130 = lVar1;
  local_128 = '\x01';
  if (DAT_026d7800 != 0) {
    FUN_00d50b00();
  }
  local_120 = lVar2;
  local_118 = '\x01';
  local_110 = 0;
  local_108 = '\0';
  FUN_000bf690(&local_120,&local_130,&local_110);
  lVar1 = *(longlong *)(this + 0xe0);
  lVar2 = lVar1;
  if (lVar1 != local_30) {
    lVar2 = local_30;
    if (local_28 == '\0') {
      if (local_30 == 0) {
        lVar2 = 0;
        goto LAB_00243be0;
      }
      FUN_00d50b00();
      lVar1 = *(longlong *)(this + 0xe0);
      *(longlong *)(this + 0xe0) = local_30;
    }
    else {
      local_28 = '\0';
LAB_00243be0:
      *(longlong *)(this + 0xe0) = lVar2;
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
      lVar2 = local_30;
    }
  }
  if ((local_28 != '\0') && (lVar2 != 0)) {
    FUN_00d50b20();
  }
  if ((local_108 != '\0') && (local_110 != 0)) {
    FUN_00d50b20();
  }
  if ((local_118 != '\0') && (local_120 != 0)) {
    FUN_00d50b20();
  }
  if ((local_128 != '\0') && (local_130 != 0)) {
    FUN_00d50b20();
  }
  if (this != 0) {
    FUN_00d50b20();
  }
  FUN_00d50b00();
  local_100 = DAT_026f6ed0;
  if (DAT_026f6ed0 != 0) {
    FUN_00d50b00();
  }
  lVar1 = DAT_026f6ed8;
  local_f8 = '\x01';
  if (DAT_026f6ed8 != 0) {
    FUN_00d50b00();
  }
  local_f0 = lVar1;
  local_e8 = '\x01';
  local_e0 = 0;
  local_d8 = '\0';
  FUN_000bf690(&local_f0,&local_100,&local_e0);
  lVar1 = *(longlong *)(this + 0x140);
  lVar2 = lVar1;
  if (lVar1 == local_30) goto LAB_00243d8e;
  lVar2 = local_30;
  if (local_28 == '\0') {
    if (local_30 == 0) {
      lVar2 = 0;
      goto LAB_00243d43;
    }
    FUN_00d50b00();
    lVar1 = *(longlong *)(this + 0x140);
    *(longlong *)(this + 0x140) = local_30;
  }
  else {
    local_28 = '\0';
LAB_00243d43:
    *(longlong *)(this + 0x140) = lVar2;
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
    lVar2 = local_30;
  }
LAB_00243d8e:
  if ((local_28 != '\0') && (lVar2 != 0)) {
    FUN_00d50b20();
  }
  if ((local_d8 != '\0') && (local_e0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_e8 != '\0') && (local_f0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_f8 != '\0') && (local_100 != 0)) {
    FUN_00d50b20();
  }
  if (this != 0) {
    FUN_00d50b20();
  }
  if (local_30 != 0) {
    FUN_00d50b20();
  }
  return;
}




// ==================================================
// @00535670 (2212 bytes) — math_loop

{
  longlong *plVar1;
  bool bVar2;
  bool bVar3;
  longlong *plVar4;
  longlong *plVar5;
  char cVar6;
  void *pvVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  undefined7 uVar12;
  undefined7 extraout_var;
  pthread_key_t pVar13;
  longlong **pplVar14;
  longlong *plVar15;
  longlong *plVar16;
  char unaff_SIL;
  longlong this;
  ulonglong uVar17;
  undefined4 uVar18;
  longlong local_b0;
  char local_a8;
  longlong *local_a0;
  char local_98;
  longlong local_90;
  char local_88;
  undefined8 local_80;
  longlong *local_78;
  undefined8 local_70;
  longlong *local_68;
  longlong *local_60;
  longlong *local_58;
  longlong local_50;
  char local_48;
  longlong *local_40;
  char local_38;
  
  lVar10 = *(longlong *)(this + 0x110);
  if (lVar10 != 0) {
    FUN_00d50b00();
  }
  pvVar7 = _pthread_getspecific(param_1);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0015d590();
  plVar1 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != (longlong *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
       (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if (lVar10 != 0) {
    FUN_00d50b20();
  }
  local_68 = plVar1;
  FUN_00757c60();
  pvVar7 = _pthread_getspecific(param_1);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar8 = FUN_012cb480();
  plVar5 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != (longlong *)0x0) && (uVar8 = FUN_00d50b00(), local_38 != '\0')) &&
       (local_40 != (longlong *)0x0)) {
      uVar8 = FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    uVar8 = FUN_00d50b20();
  }
  uVar11 = CONCAT71((int7)((ulonglong)uVar8 >> 8),1);
  bVar3 = true;
  bVar2 = true;
  if (((plVar5 == (longlong *)0x0) || (plVar1 == (longlong *)0x0)) ||
     (uVar11 = (ulonglong)*(uint *)((longlong)plVar5 + 0xc),
     (int)*(uint *)((longlong)plVar5 + 0xc) < 1)) {
    plVar16 = (longlong *)0x0;
    cVar6 = '\0';
  }
  else {
    uVar17 = 0;
    local_58 = (longlong *)0x0;
    local_60 = (longlong *)0x0;
    local_70 = 0;
    do {
      plVar1 = *(longlong **)(plVar5[2] + uVar17 * 8);
      local_40 = plVar1;
      local_38 = '\0';
      uVar9 = 0;
      if ((DAT_026fdd70 == '\0') && (uVar9 = ___cxa_guard_acquire(), (int)uVar9 != 0)) {
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
        uVar9 = ___cxa_guard_release();
      }
      pplVar14 = (longlong **)&DAT_02802688;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x360))();
        uVar9 = FUN_00e85ea0();
        pplVar14 = &local_40;
        if ((char)uVar9 == '\0') {
          pplVar14 = (longlong **)&DAT_02802688;
        }
      }
      plVar1 = *pplVar14;
      if (*(char *)(pplVar14 + 1) == '\0') {
        if (plVar1 != (longlong *)0x0) {
          uVar9 = FUN_00d50b00();
        }
      }
      else {
        *(undefined1 *)(pplVar14 + 1) = 0;
      }
      pVar13 = (pthread_key_t)pplVar14;
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        uVar9 = FUN_00d50b20();
      }
      if (plVar1 != (longlong *)0x0) {
        pvVar7 = _pthread_getspecific(pVar13);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0123abe0();
        plVar16 = local_40;
        if (local_40 == (longlong *)0x0) {
          local_80 = 0;
          cVar6 = '\0';
          plVar4 = (longlong *)0x0;
        }
        else {
          if (local_38 == '\0') {
            FUN_00d50b00();
          }
          else {
            local_38 = '\0';
          }
          uVar8 = (**(code **)(*plVar16 + 0x398))();
          cVar6 = (char)uVar8;
          local_80 = CONCAT71((int7)((ulonglong)uVar8 >> 8),1);
          plVar4 = plVar16;
        }
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (cVar6 != '\0') {
          (**(code **)(*plVar4 + 0x3f0))();
          plVar15 = local_40;
          if ((((local_38 == '\0') && (local_40 != (longlong *)0x0)) &&
              (FUN_00d50b00(), local_38 != '\0')) && (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          local_78 = plVar15;
          cVar6 = (**(code **)(*local_68 + 0x50))();
          plVar15 = local_78;
          if (cVar6 == '\0') {
            if (local_60 == (longlong *)0x0) {
              (**(code **)(**(longlong **)(this + 0x108) + 0x498))();
              FUN_00cb1f10();
              local_60 = local_40;
              plVar15 = local_40;
              if (local_40 == (longlong *)0x0) {
                local_60 = (longlong *)0x0;
              }
              else if (local_38 == '\0') {
                uVar8 = FUN_00d50b00();
                local_70 = CONCAT71((int7)((ulonglong)uVar8 >> 8),1);
                if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
              }
              else {
                local_38 = '\0';
                local_70 = CONCAT71((int7)((ulonglong)local_40 >> 8),1);
              }
              pVar13 = (pthread_key_t)plVar15;
              if ((local_48 != '\0') && (local_50 != 0)) {
                FUN_00d50b20();
              }
              FUN_00db3260();
            }
            if (unaff_SIL == '\0') {
              pvVar7 = _pthread_getspecific(pVar13);
              if ((pvVar7 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
                plVar1 = (longlong *)plVar1[(ulonglong)(*(uint *)(lVar10 + 0x154) & 1) + 4];
              }
              local_58 = plVar1;
              uVar18 = (**(code **)(*plVar4 + 0x388))();
              local_90 = local_50;
              local_88 = 0;
              if (local_48 == '\0') {
                if (local_50 != 0) {
                  uVar18 = FUN_00d50b00();
                }
              }
              else {
                local_48 = '\0';
              }
              local_88 = '\x01';
              (**(code **)(*local_68 + 0x400))(uVar18,&local_90);
              plVar1 = local_40;
              local_98 = 0;
              if (local_38 == '\0') {
                if (local_40 != (longlong *)0x0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_38 = '\0';
              }
              plVar15 = local_78;
              local_98 = '\x01';
              local_a0 = plVar1;
              uVar8 = FUN_0123bf50();
              if ((local_98 != '\0') && (local_a0 != (longlong *)0x0)) {
                uVar8 = FUN_00d50b20();
              }
              if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
                uVar8 = FUN_00d50b20();
              }
              if ((local_88 != '\0') && (local_90 != 0)) {
                uVar8 = FUN_00d50b20();
              }
              if ((local_48 != '\0') && (local_50 != 0)) {
                uVar8 = FUN_00d50b20();
              }
            }
            else {
              pvVar7 = _pthread_getspecific(pVar13);
              if ((pvVar7 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
                plVar1 = (longlong *)plVar1[(ulonglong)(*(uint *)(lVar10 + 0x154) & 1) + 4];
              }
              local_58 = plVar1;
              uVar18 = (**(code **)(*plVar4 + 0x388))();
              local_b0 = local_50;
              local_a8 = 0;
              if (local_48 == '\0') {
                if (local_50 != 0) {
                  uVar18 = FUN_00d50b00();
                }
              }
              else {
                local_48 = '\0';
              }
              local_a8 = '\x01';
              (**(code **)(*local_68 + 0x400))(uVar18,&local_b0);
              plVar1 = local_40;
              if (local_38 == '\0') {
                if (local_40 != (longlong *)0x0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_38 = '\0';
              }
              plVar15 = local_78;
              uVar8 = FUN_0123bf80();
              if (plVar1 != (longlong *)0x0) {
                uVar8 = FUN_00d50b20();
              }
              if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
                uVar8 = FUN_00d50b20();
              }
              if ((local_a8 != '\0') && (local_b0 != 0)) {
                uVar8 = FUN_00d50b20();
              }
              if ((local_48 != '\0') && (local_50 != 0)) {
                uVar8 = FUN_00d50b20();
              }
            }
            local_58 = (longlong *)CONCAT71((int7)((ulonglong)uVar8 >> 8),1);
          }
          if (plVar15 != (longlong *)0x0) {
            FUN_00d50b20();
          }
        }
        uVar9 = FUN_00d50b20();
        if ((plVar16 != (longlong *)0x0) && (plVar4 != (longlong *)0x0)) {
          uVar9 = FUN_00d50b20();
        }
      }
      plVar16 = local_60;
      plVar1 = local_68;
      uVar17 = uVar17 + 1;
    } while (uVar11 != uVar17);
    cVar6 = (char)local_70;
    if (((ulonglong)local_58 & 1) != 0) {
      FUN_00b34cb0();
      uVar9 = (**(code **)(*local_40 + 0x50))();
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        (**(code **)(*local_40 + 0x10))();
        uVar9 = FUN_00d50b20();
      }
    }
    if (plVar16 == (longlong *)0x0) {
      plVar16 = (longlong *)0x0;
      uVar11 = uVar9;
    }
    else {
      FUN_00db3270();
      uVar11 = FUN_00db3760();
      bVar3 = false;
      bVar2 = false;
    }
  }
  if (plVar5 != (longlong *)0x0) {
    uVar11 = FUN_00d50b20();
    bVar2 = bVar3;
  }
  if (plVar1 != (longlong *)0x0) {
    uVar11 = FUN_00d50b20();
  }
  uVar12 = (undefined7)(uVar11 >> 8);
  if (cVar6 != '\0' && !bVar2) {
    FUN_00d50b20();
    uVar12 = extraout_var;
  }
  return CONCAT71(uVar12,plVar16 != (longlong *)0x0);
}




// ==================================================
// @00533b90 (2094 bytes) — math_loop

{
  longlong *plVar1;
  char cVar2;
  void *pvVar3;
  longlong lVar4;
  pthread_key_t pVar5;
  longlong **pplVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  int iVar10;
  longlong this;
  undefined4 uVar11;
  longlong *local_e0;
  char local_d8;
  longlong *local_d0;
  char local_c8;
  longlong *local_c0;
  char local_b8;
  longlong *local_b0;
  char local_a8;
  longlong *local_a0;
  char local_98;
  longlong *local_90;
  char local_88;
  longlong *local_80;
  longlong local_78;
  longlong *local_68;
  char local_60;
  longlong *local_58;
  char local_50;
  longlong *local_48;
  undefined8 local_40;
  int local_38;
  
  FUN_00d3ecf0();
  FUN_00b34cb0();
  (**(code **)(*local_90 + 0x88))();
  plVar8 = local_58;
  plVar7 = local_68;
  if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
    (**(code **)(*local_90 + 0x10))();
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar8 != plVar7) {
    return;
  }
  local_78 = *(longlong *)(this + 0x110);
  if (local_78 == 0) {
    return;
  }
  FUN_00d50b00();
  FUN_00527070();
  local_a0 = local_58;
  local_98 = 0;
  if ((local_50 == '\0') && (local_58 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  local_98 = '\x01';
  FUN_007932a0();
  if ((local_98 != '\0') && (local_a0 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00788660();
  local_80 = local_58;
  if ((((local_50 == '\0') && (local_58 != (longlong *)0x0)) && (FUN_00d50b00(), local_50 != '\0'))
     && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(**(longlong **)(this + 0x108) + 0x498))();
  FUN_00cafd20();
  if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(**(longlong **)(this + 0x108) + 0x498))();
  FUN_00cb1f10();
  FUN_00db3260();
  if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0015d630();
  plVar7 = local_58;
  if (local_50 == '\0') {
    if (local_58 == (longlong *)0x0) goto LAB_00534331;
    FUN_00d50b00();
    if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else if (local_58 == (longlong *)0x0) goto LAB_00534331;
  local_50 = '\0';
  local_58 = (longlong *)0x0;
  local_48 = plVar7;
  local_40 = 0xffffffff;
  local_38 = 0;
  local_40._4_4_ = 0;
  while( true ) {
    if (local_40._4_4_ != 0) {
      if (local_40._4_4_ < 1) {
        iVar10 = -local_40._4_4_;
      }
      else {
        iVar10 = (int)local_40 - local_40._4_4_;
        local_40 = CONCAT44(local_40._4_4_,iVar10);
        FUN_00d23690();
        local_38 = local_38 + local_40._4_4_;
        iVar10 = 0;
      }
      local_40 = CONCAT44(iVar10,(int)local_40);
    }
    lVar4 = (longlong)(int)local_40;
    iVar10 = (int)local_40 + 1;
    local_40 = CONCAT44(local_40._4_4_,iVar10);
    if (*(int *)((longlong)local_48 + 0xc) <= iVar10) break;
    plVar7 = *(longlong **)(local_48[2] + 8 + lVar4 * 8);
    local_58 = plVar7;
    local_68 = plVar7;
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
    pplVar6 = (longlong **)&DAT_02802688;
    if (plVar7 != (longlong *)0x0) {
      (**(code **)(*plVar7 + 0x360))();
      cVar2 = FUN_00e85ea0();
      pplVar6 = &local_68;
      if (cVar2 == '\0') {
        pplVar6 = (longlong **)&DAT_02802688;
      }
    }
    plVar7 = local_58;
    if (*pplVar6 != (longlong *)0x0) {
      pvVar3 = _pthread_getspecific((pthread_key_t)pplVar6);
      plVar8 = local_58;
      pVar5 = (pthread_key_t)pplVar6;
      if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), plVar7 = plVar8, lVar4 != 0)) {
        plVar7 = (longlong *)plVar8[(ulonglong)(*(uint *)(lVar4 + 0x154) & 1) + 4];
      }
      (**(code **)(*plVar7 + 0x478))();
      uVar11 = (**(code **)(*local_90 + 0x388))();
      plVar7 = local_68;
      if (local_60 == '\0') {
        if (((local_68 != (longlong *)0x0) && (uVar11 = FUN_00d50b00(), local_60 != '\0')) &&
           (local_68 != (longlong *)0x0)) {
          uVar11 = FUN_00d50b20();
        }
      }
      else {
        local_60 = '\0';
      }
      if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
        uVar11 = FUN_00d50b20();
      }
      local_e0 = plVar7;
      local_d8 = '\0';
      (**(code **)(*local_80 + 0x400))(uVar11,&local_e0);
      plVar8 = local_68;
      if (local_60 == '\0') {
        if (((local_68 != (longlong *)0x0) && (FUN_00d50b00(), local_60 != '\0')) &&
           (local_68 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_60 = '\0';
      }
      if ((local_d8 != '\0') && (local_e0 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      cVar2 = (**(code **)(*plVar8 + 0x398))();
      if (cVar2 == '\0') {
LAB_00534120:
        plVar9 = local_58;
        pvVar3 = _pthread_getspecific(pVar5);
        plVar1 = local_58;
        if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), plVar9 = plVar1, lVar4 != 0)) {
          plVar9 = (longlong *)plVar1[(ulonglong)(*(uint *)(lVar4 + 0x154) & 1) + 4];
        }
        cVar2 = (**(code **)(*plVar9 + 0x498))();
        if (cVar2 != '\0') {
          pvVar3 = _pthread_getspecific(pVar5);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          local_b0 = plVar8;
          local_a8 = '\0';
          FUN_0123bf80();
          if ((local_a8 != '\0') && (local_b0 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
      }
      else {
        local_d0 = plVar8;
        local_c8 = '\0';
        cVar2 = FUN_00b80190();
        if ((local_c8 != '\0') && (local_d0 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (cVar2 == '\0') goto LAB_00534120;
        pvVar3 = _pthread_getspecific(pVar5);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        cVar2 = FUN_0124d450();
        pvVar3 = _pthread_getspecific(pVar5);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_c0 = plVar8;
        local_b8 = '\0';
        FUN_0123ab70();
        if ((local_b8 != '\0') && (local_c0 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        plVar8 = local_58;
        if (cVar2 == '\0') {
          pvVar3 = _pthread_getspecific(pVar5);
          plVar9 = local_58;
          if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), plVar8 = plVar9, lVar4 != 0)) {
            plVar8 = (longlong *)plVar9[(ulonglong)(*(uint *)(lVar4 + 0x154) & 1) + 4];
          }
          (**(code **)(*plVar8 + 0x480))();
        }
      }
      FUN_00d50b20();
      if (plVar7 != (longlong *)0x0) {
        FUN_00d50b20();
      }
    }
  }
  FUN_00136d50();
  FUN_00d50b20();
LAB_00534331:
  (**(code **)(**(longlong **)(this + 0x108) + 0x498))();
  FUN_00cb1f10();
  FUN_00db3270();
  if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(**(longlong **)(this + 0x108) + 0x498))();
  (**(code **)(*local_58 + 0x3c8))();
  if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (local_80 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}




// ==================================================
// @00534960 (2083 bytes) — math_loop

{
  uint uVar1;
  longlong *plVar2;
  bool bVar3;
  longlong lVar4;
  code *pcVar5;
  char cVar6;
  void *pvVar7;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  undefined7 extraout_var_01;
  undefined7 extraout_var_02;
  undefined8 uVar8;
  ulonglong uVar9;
  undefined7 uVar10;
  undefined7 extraout_var_03;
  code *pcVar11;
  undefined8 *arg1;
  longlong this;
  code *pcVar12;
  code **ppcVar13;
  ulonglong uVar14;
  code *pcVar15;
  bool bVar16;
  undefined4 uVar17;
  longlong local_a8;
  char local_a0;
  undefined8 local_98;
  code *local_90;
  longlong local_88;
  char local_80;
  code *local_78;
  ulonglong local_70;
  ulonglong local_68;
  ulonglong local_60;
  code *local_58;
  code *local_50;
  code *local_48;
  char local_40;
  byte local_31;
  
  FUN_00757c60();
  pvVar7 = _pthread_getspecific((pthread_key_t)param_1);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012cb480();
  pcVar12 = local_48;
  uVar10 = extraout_var;
  if (local_48 == (code *)0x0) {
    bVar3 = true;
    pcVar12 = (code *)0x0;
  }
  else {
    if (local_40 == '\0') {
      FUN_00d50b00();
      bVar3 = false;
      uVar10 = extraout_var_00;
      if ((local_40 == '\0') || (local_48 == (code *)0x0)) goto LAB_00534a0d;
      FUN_00d50b20();
      uVar10 = extraout_var_01;
    }
    else {
      local_40 = '\0';
    }
    bVar3 = false;
  }
LAB_00534a0d:
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
    uVar10 = extraout_var_02;
  }
  if (pcVar12 == (code *)0x0) {
    pcVar12 = (code *)0x0;
  }
  else {
    uVar1 = *(uint *)(pcVar12 + 0xc);
    if ((int)uVar1 < 1) {
      bVar16 = true;
      local_60 = 0;
      local_58 = (code *)0x0;
      local_70 = 0;
      local_50 = (code *)0x0;
      local_98 = 0;
      uVar9 = 0;
      local_78 = (code *)0x0;
    }
    else {
      uVar14 = 0;
      local_78 = (code *)0x0;
      local_68 = 0;
      pcVar15 = (code *)0x0;
      local_98 = 0;
      local_50 = (code *)0x0;
      local_70 = 0;
      local_58 = (code *)0x0;
      local_60 = 0;
      local_90 = pcVar12;
      do {
        uVar9 = local_68 & 0xffffffff;
        pcVar12 = *(code **)(*(longlong *)(pcVar12 + 0x10) + uVar14 * 8);
        local_48 = pcVar12;
        local_40 = '\0';
        uVar8 = 0;
        if ((DAT_026fdd70 == '\0') && (uVar8 = ___cxa_guard_acquire(), (int)uVar8 != 0)) {
          _DAT_026e3238 = FUN_00115af0();
          DAT_026e3220 = "MUAudioFileSource";
          _DAT_026e3228 = 0xa0;
          param_1 = FUN_00136df0;
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
          uVar8 = ___cxa_guard_release();
        }
        ppcVar13 = (code **)&DAT_02802688;
        if (pcVar12 != (code *)0x0) {
          (**(code **)(*(longlong *)pcVar12 + 0x360))();
          uVar8 = FUN_00e85ea0();
          ppcVar13 = &local_48;
          if ((char)uVar8 == '\0') {
            ppcVar13 = (code **)&DAT_02802688;
          }
        }
        pcVar12 = local_90;
        pcVar11 = *ppcVar13;
        cVar6 = (char)uVar9;
        if (pcVar11 == pcVar15) {
          pcVar5 = pcVar15;
          local_68 = uVar9;
          if ((cVar6 == '\0') && (pcVar11 != (code *)0x0)) {
            pcVar11 = pcVar15;
            if (*(char *)(ppcVar13 + 1) != '\0') goto LAB_00534b45;
            local_68 = CONCAT71((int7)((ulonglong)uVar8 >> 8),1);
            uVar9 = FUN_00d50b00();
          }
        }
        else if (*(char *)(ppcVar13 + 1) == '\0') {
          if (pcVar11 != (code *)0x0) {
            uVar8 = FUN_00d50b00();
          }
          pcVar12 = local_90;
          local_68 = CONCAT71((int7)((ulonglong)uVar8 >> 8),1);
          pcVar5 = pcVar11;
          uVar9 = local_68;
          if ((cVar6 != '\0') && (pcVar15 != (code *)0x0)) {
            uVar9 = FUN_00d50b20();
          }
        }
        else {
          if ((cVar6 != '\0') && (pcVar15 != (code *)0x0)) {
            uVar8 = FUN_00d50b20();
          }
LAB_00534b45:
          *(undefined1 *)(ppcVar13 + 1) = 0;
          uVar9 = CONCAT71((int7)((ulonglong)uVar8 >> 8),1);
          pcVar5 = pcVar11;
          local_68 = uVar9;
          pcVar12 = local_90;
        }
        pcVar15 = pcVar5;
        if ((local_40 != '\0') && (local_48 != (code *)0x0)) {
          uVar9 = FUN_00d50b20();
        }
        if (pcVar15 != (code *)0x0) {
          pvVar7 = _pthread_getspecific((pthread_key_t)param_1);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0123abe0();
          pcVar11 = local_48;
          if (local_48 == local_50) {
            if (((byte)local_60 == 0) && (local_48 != (code *)0x0)) {
              pcVar11 = local_50;
              if (local_40 != '\0') goto LAB_00534c85;
              local_31 = 1;
              FUN_00d50b00();
            }
            else {
              local_31 = (byte)local_60;
            }
          }
          else {
            if (local_40 == '\0') {
              if (local_48 != (code *)0x0) {
                FUN_00d50b00();
              }
              local_31 = 1;
              if (((byte)local_60 != '\0') && (local_50 != (code *)0x0)) {
                FUN_00d50b20();
                local_50 = pcVar11;
                goto LAB_00534d00;
              }
            }
            else {
              if (((byte)local_60 != 0) && (local_50 != (code *)0x0)) {
                FUN_00d50b20();
              }
LAB_00534c85:
              local_40 = '\0';
              local_31 = 1;
            }
            local_31 = 1;
            local_50 = pcVar11;
          }
LAB_00534d00:
          if ((local_40 != '\0') && (local_48 != (code *)0x0)) {
            FUN_00d50b20();
          }
          if (local_50 == (code *)0x0) {
            local_60 = (ulonglong)local_31;
            uVar9 = 0;
            local_50 = (code *)0x0;
          }
          else {
            cVar6 = (**(code **)(*(longlong *)local_50 + 0x398))();
            if (cVar6 == '\0') {
              plVar2 = (longlong *)*arg1;
              uVar17 = (**(code **)(*(longlong *)local_50 + 0x388))();
              lVar4 = local_88;
              local_a0 = 0;
              if (local_80 == '\0') {
                if (local_88 != 0) {
                  uVar17 = FUN_00d50b00();
                }
              }
              else {
                local_80 = '\0';
              }
              local_a0 = '\x01';
              local_a8 = lVar4;
              uVar8 = (**(code **)(*plVar2 + 0x400))(uVar17,&local_a8);
              pcVar11 = local_48;
              uVar10 = (undefined7)((ulonglong)lVar4 >> 8);
              if (local_48 == local_58) {
                pcVar11 = local_58;
                if (((char)local_70 == '\0') && (local_48 != (code *)0x0)) {
                  if (local_40 != '\0') goto LAB_00534df0;
                  FUN_00d50b00();
                  pcVar11 = local_58;
                  goto joined_r0x00534f3e;
                }
                uVar9 = local_70 & 0xffffffff;
joined_r0x00534e4d:
                local_58 = pcVar11;
                if ((local_40 == '\0') || (local_48 == (code *)0x0)) {
                  local_70 = uVar9 & 0xffffffff;
                }
                else {
                  FUN_00d50b20();
                  local_70 = uVar9 & 0xffffffff;
                }
              }
              else {
                if (local_40 == '\0') {
                  if (local_48 != (code *)0x0) {
                    FUN_00d50b00();
                  }
                  uVar9 = CONCAT71(uVar10,1);
                  if ((char)local_70 != '\0') {
                    if (local_58 == (code *)0x0) goto joined_r0x00534e4d;
                    FUN_00d50b20();
                  }
joined_r0x00534f3e:
                  uVar9 = CONCAT71(uVar10,1);
                  goto joined_r0x00534e4d;
                }
                if (((char)local_70 != '\0') && (local_58 != (code *)0x0)) {
                  uVar8 = FUN_00d50b20();
                }
LAB_00534df0:
                local_40 = '\0';
                local_70 = CONCAT71((int7)((ulonglong)uVar8 >> 8),1);
                local_58 = pcVar11;
              }
              if ((local_a0 != '\0') && (local_a8 != 0)) {
                FUN_00d50b20();
              }
              if ((local_80 != '\0') && (local_88 != 0)) {
                FUN_00d50b20();
              }
              cVar6 = (**(code **)(*(longlong *)local_58 + 0x398))();
              if (cVar6 != '\0') {
                if (local_78 == (code *)0x0) {
                  (**(code **)(**(longlong **)(this + 0x108) + 0x498))();
                  FUN_00cb1f10();
                  local_78 = local_48;
                  param_1 = local_48;
                  if (local_48 == (code *)0x0) {
                    local_78 = (code *)0x0;
                  }
                  else if (local_40 == '\0') {
                    uVar8 = FUN_00d50b00();
                    local_98 = CONCAT71((int7)((ulonglong)uVar8 >> 8),1);
                    if ((local_40 != '\0') && (local_48 != (code *)0x0)) {
                      FUN_00d50b20();
                    }
                  }
                  else {
                    local_40 = '\0';
                    local_98 = CONCAT71((int7)((ulonglong)local_48 >> 8),1);
                  }
                  if ((local_80 != '\0') && (local_88 != 0)) {
                    FUN_00d50b20();
                  }
                  FUN_00db3260();
                }
                pvVar7 = _pthread_getspecific((pthread_key_t)param_1);
                if (pvVar7 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_0123bd60();
              }
            }
            uVar9 = (ulonglong)local_31;
            local_60 = uVar9;
          }
        }
        uVar14 = uVar14 + 1;
      } while (uVar1 != uVar14);
      bVar16 = local_78 == (code *)0x0;
      if (!bVar16) {
        FUN_00db3270();
        uVar9 = FUN_00db3760();
      }
      if (((char)local_68 != '\0') && (pcVar15 != (code *)0x0)) {
        uVar9 = FUN_00d50b20();
      }
    }
    if (!bVar3) {
      uVar9 = FUN_00d50b20();
    }
    if (((char)local_70 != '\0') && (local_58 != (code *)0x0)) {
      uVar9 = FUN_00d50b20();
    }
    if (((byte)local_60 != '\0') && (local_50 != (code *)0x0)) {
      uVar9 = FUN_00d50b20();
    }
    pcVar12 = local_78;
    uVar10 = (undefined7)(uVar9 >> 8);
    if (!(bool)((char)local_98 == '\0' | bVar16)) {
      FUN_00d50b20();
      uVar10 = extraout_var_03;
    }
  }
  return CONCAT71(uVar10,pcVar12 != (code *)0x0);
}




// ==================================================
// @00240bc0 (2058 bytes) — calculation

{
  longlong lVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  uint7 uVar5;
  char cVar6;
  int iVar7;
  void *pvVar8;
  pthread_key_t pVar9;
  longlong **pplVar10;
  longlong *this;
  longlong *plVar11;
  char cVar12;
  ulonglong uVar13;
  uint7 uVar15;
  undefined8 uVar14;
  longlong *plVar16;
  longlong *plVar17;
  int local_90;
  uint local_6c;
  longlong *local_68;
  char local_60;
  longlong *local_58;
  char local_50;
  longlong *local_48;
  char local_40;
  uint7 uStack_3f;
  char local_31;
  
  lVar1 = *this;
  if ((lVar1 == 0) || (*(int *)(lVar1 + 0xc) == 0)) {
    return 0;
  }
  local_90 = -1;
  local_6c = 0;
  bVar4 = false;
  local_48 = (longlong *)0x0;
  local_40 = '\0';
  uStack_3f = 0;
  plVar16 = (longlong *)0x0;
  cVar12 = local_40;
  uVar15 = uStack_3f;
LAB_00240c4a:
  uStack_3f = uVar15;
  local_40 = cVar12;
  local_90 = local_90 + 1;
  uVar15 = 0;
  if (*(int *)(lVar1 + 0xc) <= local_90) {
    FUN_001159b0();
    uVar14 = 1;
    if (bVar4) goto LAB_0024139a;
    goto LAB_002413a4;
  }
  pVar9 = (pthread_key_t)*(undefined8 *)(lVar1 + 0x10);
  pvVar8 = _pthread_getspecific(pVar9);
  if (pvVar8 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01264240();
  plVar17 = local_58;
  if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  cVar12 = local_40;
  uVar5 = uStack_3f;
  if (plVar17 != (longlong *)0x0) {
    if (local_90 == 0) {
      pvVar8 = _pthread_getspecific(pVar9);
      if (pvVar8 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01264240();
      plVar17 = local_58;
      if (local_58 == plVar16) {
        plVar17 = plVar16;
        if ((local_40 == '\0') && (plVar16 != (longlong *)0x0)) {
          cVar12 = '\x01';
          if (local_50 != '\0') goto LAB_00240ec0;
          FUN_00d50b00();
          cVar12 = '\x01';
        }
        else {
          uVar15 = uStack_3f & 0xffffff;
          cVar12 = local_40;
        }
LAB_00240eac:
        if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        if (local_50 == '\0') {
          if (local_58 != (longlong *)0x0) {
            FUN_00d50b00();
          }
          cVar12 = '\x01';
          if ((local_40 != '\0') && (plVar16 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          goto LAB_00240eac;
        }
        cVar12 = '\x01';
        if ((local_40 != '\0') && (plVar16 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
LAB_00240ec0:
      plVar16 = plVar17;
      pvVar8 = _pthread_getspecific(pVar9);
      if (pvVar8 != (void *)0x0) {
        FUN_00e8b990();
      }
      iVar7 = FUN_01326de0();
      uVar5 = uVar15;
      if (iVar7 == 0) goto LAB_00241381;
      pvVar8 = _pthread_getspecific(pVar9);
      if (pvVar8 != (void *)0x0) {
        FUN_00e8b990();
      }
      cVar6 = FUN_0134c600();
      if (cVar6 != '\0') goto LAB_00241381;
      pvVar8 = _pthread_getspecific(pVar9);
      if (pvVar8 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01320d00();
      plVar17 = local_68;
      if (local_60 == '\0') {
        if (local_68 != (longlong *)0x0) {
          FUN_00d50b00();
          local_58 = plVar17;
          local_50 = '\x01';
          if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          goto LAB_00240f80;
        }
        local_58 = (longlong *)0x0;
        local_50 = '\x01';
        bVar2 = true;
      }
      else {
        local_58 = local_68;
        local_50 = '\x01';
LAB_00240f80:
        bVar2 = true;
        if (plVar17 != (longlong *)0x0) {
          pvVar8 = _pthread_getspecific(pVar9);
          if (pvVar8 != (void *)0x0) {
            FUN_00e8b990();
          }
          cVar6 = FUN_0124d450();
          if (cVar6 != '\0') {
            pvVar8 = _pthread_getspecific(pVar9);
            if (pvVar8 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0124e100();
            iVar7 = *(int *)((longlong)local_68 + 0xc);
            if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if (iVar7 == 0) {
              if ((DAT_026fdd70 == '\0') && (iVar7 = ___cxa_guard_acquire(), iVar7 != 0)) {
                local_31 = cVar12;
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
                cVar12 = local_31;
              }
              (**(code **)(*plVar17 + 0x360))();
              cVar6 = FUN_00e85ea0();
              pplVar10 = &local_58;
              if (cVar6 == '\0') {
                pplVar10 = (longlong **)&DAT_02802688;
              }
              local_40 = *(char *)(pplVar10 + 1);
              if ((local_40 == '\0') || (*pplVar10 == (longlong *)0x0)) {
                if (*pplVar10 != (longlong *)0x0) goto LAB_002410cc;
                bVar3 = true;
LAB_0024116c:
                local_31 = cVar12;
                pvVar8 = _pthread_getspecific((pthread_key_t)pplVar10);
                if (pvVar8 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_01266fe0();
                plVar11 = local_48;
                plVar17 = local_68;
                if (local_48 == local_68) {
                  if ((bVar4) || (local_48 == (longlong *)0x0)) {
                    uVar13 = (ulonglong)local_6c;
                    bVar2 = bVar4;
                  }
                  else {
                    uVar13 = CONCAT71(uVar15,1);
                    bVar2 = true;
                    if (local_60 != '\0') goto LAB_00241250;
                    uVar13 = CONCAT71(uVar15,1);
                    FUN_00d50b00();
                    bVar2 = true;
                  }
LAB_0024123c:
                  if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
                    FUN_00d50b20();
                  }
                }
                else {
                  plVar11 = plVar17;
                  if (local_60 == '\0') {
                    if (local_68 != (longlong *)0x0) {
                      FUN_00d50b00();
                    }
                    uVar13 = CONCAT71(uVar15,1);
                    bVar2 = true;
                    if ((bVar4) && (local_48 != (longlong *)0x0)) {
                      local_48 = plVar17;
                      FUN_00d50b20();
                    }
                    goto LAB_0024123c;
                  }
                  uVar13 = CONCAT71(uVar15,1);
                  bVar2 = true;
                  if ((bVar4) && (local_48 != (longlong *)0x0)) {
                    local_48 = local_68;
                    FUN_00d50b20();
                  }
                }
LAB_00241250:
                bVar4 = bVar2;
                bVar2 = false;
                local_6c = (uint)uVar13;
                uVar15 = (uint7)(uVar13 >> 8);
                local_48 = plVar11;
                cVar12 = local_31;
              }
              else {
                FUN_00d50b00();
LAB_002410cc:
                pvVar8 = _pthread_getspecific((pthread_key_t)pplVar10);
                if (pvVar8 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_0123abe0();
                plVar17 = local_68;
                FUN_00276fd0();
                pplVar10 = (longlong **)&DAT_02802688;
                if (plVar17 != (longlong *)0x0) {
                  (**(code **)(*plVar17 + 0x360))();
                  cVar6 = FUN_00e85ea0();
                  pplVar10 = &local_68;
                  if (cVar6 == '\0') {
                    pplVar10 = (longlong **)&DAT_02802688;
                  }
                }
                plVar17 = *pplVar10;
                if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                bVar3 = false;
                bVar2 = true;
                if (plVar17 == (longlong *)0x0) goto LAB_0024116c;
              }
              if ((local_40 != '\0') && (!bVar3)) {
                FUN_00d50b20();
              }
            }
          }
        }
      }
      if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (bVar2) {
        FUN_001159b0();
        uVar14 = 0;
        local_40 = cVar12;
        uStack_3f = uVar15;
        if (bVar4) {
LAB_0024139a:
          if (local_48 != (longlong *)0x0) {
            FUN_00d50b20();
          }
        }
LAB_002413a4:
        if (local_40 == '\0') {
          return uVar14;
        }
        if (plVar16 == (longlong *)0x0) {
          return uVar14;
        }
        FUN_00d50b20();
        return uVar14;
      }
      goto LAB_00240c4a;
    }
    pvVar8 = _pthread_getspecific(pVar9);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01264240();
    plVar17 = local_58;
    if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    cVar12 = local_40;
    uVar5 = uStack_3f;
    if (plVar17 != plVar16) goto LAB_00241381;
    pvVar8 = _pthread_getspecific(pVar9);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01266fe0();
    plVar17 = local_58;
    if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    cVar12 = local_40;
    uVar15 = uStack_3f;
    uVar5 = uStack_3f;
    if (local_48 == plVar17) goto LAB_00240c4a;
  }
LAB_00241381:
  uStack_3f = uVar5;
  local_40 = cVar12;
  FUN_001159b0();
  uVar14 = 0;
  if (!bVar4) goto LAB_002413a4;
  goto LAB_0024139a;
}




// ==================================================
// @012cc0c0 (2050 bytes) — math_loop

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  undefined8 *puVar4;
  longlong lVar5;
  void *pvVar6;
  pthread_key_t pVar7;
  longlong **pplVar8;
  int iVar9;
  longlong this;
  longlong *plVar10;
  longlong *plVar11;
  float fVar12;
  float fVar13;
  longlong *local_c0;
  char local_b8;
  longlong *local_b0;
  char local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined8 *local_98;
  int local_70;
  longlong *local_58;
  char local_50;
  longlong *local_48;
  undefined8 local_40;
  int local_38;
  
  local_a0 = param_4;
  local_9c = param_3;
  puVar4 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar4 = &DAT_02572358;
  (*DAT_02572370)();
  lVar1 = *(longlong *)(this + 0x48);
  local_98 = puVar4;
  if (lVar1 != 0) {
    local_70 = -1;
LAB_012cc193:
    do {
      lVar5 = (longlong)local_70;
      local_70 = local_70 + 1;
      if (*(int *)(lVar1 + 0xc) <= local_70) goto LAB_012cc474;
      plVar10 = *(longlong **)(*(longlong *)(lVar1 + 0x10) + 8 + lVar5 * 8);
      local_58 = plVar10;
      if ((DAT_026fdd70 == '\0') && (iVar9 = ___cxa_guard_acquire(), iVar9 != 0)) {
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
      if (plVar10 != (longlong *)0x0) {
        (**(code **)(*plVar10 + 0x360))();
        cVar3 = FUN_00e85ea0();
        pplVar8 = &local_58;
        if (cVar3 == '\0') {
          pplVar8 = (longlong **)&DAT_02802688;
        }
      }
      if (*pplVar8 != (longlong *)0x0) {
        pvVar6 = _pthread_getspecific((pthread_key_t)pplVar8);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0124c6e0();
        plVar10 = local_58;
        if (local_50 == '\0') {
          if (local_58 == (longlong *)0x0) goto LAB_012cc193;
          FUN_00d50b00();
          if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        else if (local_58 == (longlong *)0x0) goto LAB_012cc193;
        local_50 = '\0';
        local_58 = (longlong *)0x0;
        local_48 = plVar10;
        local_40 = 0xffffffff;
        local_38 = 0;
        while( true ) {
          lVar5 = (longlong)(int)local_40;
          iVar9 = (int)local_40 + 1;
          local_40 = CONCAT44(local_40._4_4_,iVar9);
          if (*(int *)((longlong)local_48 + 0xc) <= iVar9) break;
          local_58 = *(longlong **)(local_48[2] + 8 + lVar5 * 8);
          pvVar6 = _pthread_getspecific((pthread_key_t)local_48[2]);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          cVar3 = FUN_01397570();
          if (cVar3 != '\0') {
            FUN_00d235a0();
            break;
          }
          if (local_40._4_4_ != 0) {
            if (local_40._4_4_ < 1) {
              iVar9 = -local_40._4_4_;
            }
            else {
              local_40 = CONCAT44(local_40._4_4_,(int)local_40 - local_40._4_4_);
              FUN_00d23690();
              local_38 = local_38 + local_40._4_4_;
              iVar9 = 0;
            }
            local_40 = CONCAT44(iVar9,(int)local_40);
          }
        }
        FUN_00115190();
        FUN_00d50b20();
      }
    } while( true );
  }
LAB_012cc48b:
  if (*(int *)((longlong)local_98 + 0xc) == 0) {
    lVar1 = *(longlong *)(this + 0x48);
    fVar13 = DAT_02390124;
  }
  else {
    fVar13 = DAT_02390124 / (float)*(int *)((longlong)local_98 + 0xc);
    lVar1 = *(longlong *)(this + 0x48);
  }
  if (lVar1 != 0) {
    local_70 = -1;
    fVar12 = 0.0;
    while( true ) {
      lVar5 = (longlong)local_70;
      local_70 = local_70 + 1;
      if (*(int *)(lVar1 + 0xc) <= local_70) break;
      plVar10 = *(longlong **)(*(longlong *)(lVar1 + 0x10) + 8 + lVar5 * 8);
      local_58 = plVar10;
      if ((DAT_026fdd70 == '\0') && (iVar9 = ___cxa_guard_acquire(), iVar9 != 0)) {
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
      if (plVar10 != (longlong *)0x0) {
        (**(code **)(*plVar10 + 0x360))();
        cVar3 = FUN_00e85ea0();
        pplVar8 = &local_58;
        if (cVar3 == '\0') {
          pplVar8 = (longlong **)&DAT_02802688;
        }
      }
      if (*pplVar8 != (longlong *)0x0) {
        local_50 = '\0';
        local_58 = plVar10;
        cVar3 = FUN_00d24090();
        pVar7 = (pthread_key_t)pplVar8;
        if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((cVar3 == '\0') || (*param_1 == 0)) {
          plVar11 = (longlong *)0x0;
          bVar2 = false;
        }
        else {
          FUN_00df4f00(fVar12,fVar13 + fVar12);
          plVar11 = local_58 + 2;
          if (local_58 == (longlong *)0x0) {
            bVar2 = false;
            plVar11 = (longlong *)0x0;
          }
          else if (local_50 == '\0') {
            (**(code **)(*plVar11 + 0x10))();
            FUN_00d50b00();
            bVar2 = true;
            if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            local_50 = '\0';
            bVar2 = true;
          }
        }
        pvVar6 = _pthread_getspecific(pVar7);
        if ((pvVar6 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
          plVar10 = (longlong *)plVar10[(ulonglong)(*(uint *)(lVar5 + 0x154) & 1) + 4];
        }
        local_c0 = (longlong *)*param_2;
        local_b8 = '\0';
        local_a8 = '\0';
        local_b0 = plVar11;
        (**(code **)(*plVar10 + 0x488))
                  (&local_b0,&local_c0,(undefined1)local_9c,(undefined1)local_a0);
        if ((local_a8 != '\0') && (local_b0 != (longlong *)0x0)) {
          (**(code **)(*local_b0 + 0x10))();
          FUN_00d50b20();
        }
        if ((local_b8 != '\0') && (local_c0 != (longlong *)0x0)) {
          (**(code **)(*local_c0 + 0x10))();
          FUN_00d50b20();
        }
        if (cVar3 != '\0') {
          fVar12 = fVar12 + fVar13;
        }
        if ((bVar2) && (plVar11 != (longlong *)0x0)) {
          (**(code **)(*plVar11 + 0x10))();
          FUN_00d50b20();
        }
      }
    }
    FUN_00136d50();
    if (local_98 == (undefined8 *)0x0) {
      return;
    }
  }
  FUN_00d50b20();
  return;
LAB_012cc474:
  FUN_00136d50();
  goto LAB_012cc48b;
}




// ==================================================
// @00790110 (1952 bytes) — math_loop

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  char cVar4;
  undefined8 *puVar5;
  void *pvVar6;
  longlong lVar7;
  pthread_key_t pVar8;
  longlong **pplVar9;
  undefined7 uVar11;
  ulonglong uVar10;
  int iVar12;
  longlong *this;
  longlong *plVar13;
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
  longlong *local_98;
  char local_90;
  undefined4 local_84;
  longlong *local_80;
  char local_78;
  longlong *local_70;
  char local_68;
  undefined8 *local_60;
  longlong *local_58;
  char local_50;
  longlong *local_48;
  undefined8 local_40;
  int local_38;
  
  FUN_01f27fe0();
  cVar4 = (**(code **)(*local_58 + 0x450))();
  if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar4 != '\0') {
    FUN_00757c60();
    if (local_50 == '\0') {
      if (local_58 != (longlong *)0x0) {
        FUN_00d50b00();
        if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        goto LAB_007901a2;
      }
    }
    else if (local_58 != (longlong *)0x0) {
LAB_007901a2:
      puVar5 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      pVar8 = 0x2572358;
      *puVar5 = &DAT_02572358;
      (*DAT_02572370)();
      pvVar6 = _pthread_getspecific(pVar8);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012cb480();
      plVar13 = local_58;
      if (local_50 == '\0') {
        if (local_58 != (longlong *)0x0) {
          FUN_00d50b00();
          if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          goto LAB_00790250;
        }
      }
      else if (local_58 != (longlong *)0x0) {
LAB_00790250:
        local_60 = puVar5;
        local_50 = '\0';
        local_58 = (longlong *)0x0;
        local_48 = plVar13;
        local_40 = 0xffffffff;
        local_38 = 0;
        local_40._4_4_ = 0;
        local_84 = param_2;
        do {
          if (local_40._4_4_ != 0) {
            if (local_40._4_4_ < 1) {
              iVar12 = -local_40._4_4_;
            }
            else {
              iVar12 = (int)local_40 - local_40._4_4_;
              local_40 = CONCAT44(local_40._4_4_,iVar12);
              FUN_00d23690();
              local_38 = local_38 + local_40._4_4_;
              iVar12 = 0;
            }
            local_40 = CONCAT44(iVar12,(int)local_40);
          }
          lVar7 = (longlong)(int)local_40;
          iVar12 = (int)local_40 + 1;
          local_40 = CONCAT44(local_40._4_4_,iVar12);
          if (*(int *)((longlong)local_48 + 0xc) <= iVar12) {
            FUN_00136d50();
            FUN_00d50b20();
            puVar5 = local_60;
            param_2 = local_84;
            break;
          }
          plVar1 = *(longlong **)(local_48[2] + 8 + lVar7 * 8);
          local_58 = plVar1;
          local_70 = plVar1;
          if ((DAT_026fdd70 == '\0') && (iVar12 = ___cxa_guard_acquire(), iVar12 != 0)) {
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
          pplVar9 = (longlong **)&DAT_02802688;
          if (plVar1 != (longlong *)0x0) {
            (**(code **)(*plVar1 + 0x360))();
            cVar4 = FUN_00e85ea0();
            pplVar9 = &local_70;
            if (cVar4 == '\0') {
              pplVar9 = (longlong **)&DAT_02802688;
            }
          }
          if (*pplVar9 != (longlong *)0x0) {
            pvVar6 = _pthread_getspecific((pthread_key_t)pplVar9);
            if (pvVar6 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0123b100();
            if (local_68 == '\0') {
              if (local_70 != (longlong *)0x0) {
                FUN_00d50b00();
                if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                goto LAB_007903d0;
              }
            }
            else if (local_70 != (longlong *)0x0) {
LAB_007903d0:
              iVar12 = FUN_00b88630();
              if ((iVar12 != 3) && (iVar12 = FUN_00b88630(), iVar12 != 2)) goto LAB_00790668;
              local_70 = local_58;
              local_68 = '\0';
              FUN_00d235a0();
              if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              FUN_00d50b20();
            }
          }
        } while( true );
      }
      if (*(int *)((longlong)puVar5 + 0xc) == 0) {
        uVar10 = 0;
      }
      else {
        uVar11 = (undefined7)((ulonglong)plVar13 >> 8);
        if ((char)param_2 == '\0') {
          FUN_01caeae0();
          if (local_50 == '\0') {
            if (local_58 != (longlong *)0x0) {
              FUN_00d50b00();
              if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              goto LAB_00790596;
            }
          }
          else if (local_58 != (longlong *)0x0) {
LAB_00790596:
            local_60 = puVar5;
            (**(code **)(*this + 0x468))();
            plVar13 = local_58;
            if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            lVar7 = DAT_027296a0;
            if (plVar13 == (longlong *)0x0) {
              if (DAT_027296a0 != 0) {
                FUN_00d50b00();
              }
              lVar3 = DAT_027296b0;
              local_c8 = lVar7;
              local_c0 = '\x01';
              if (DAT_027296b0 != 0) {
                FUN_00d50b00();
              }
              local_b8 = lVar3;
              local_b0 = '\x01';
              local_a8 = 0;
              local_a0 = '\0';
              FUN_00d31230(&local_a8,&local_b8);
              plVar13 = local_58;
              if (local_58 == (longlong *)0x0) {
                bVar2 = false;
              }
              else if (local_50 == '\0') {
                FUN_00d50b00();
                bVar2 = true;
                if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
              }
              else {
                local_50 = '\0';
                bVar2 = true;
              }
              if ((local_a0 != '\0') && (local_a8 != 0)) {
                FUN_00d50b20();
              }
              if ((local_b0 != '\0') && (local_b8 != 0)) {
                FUN_00d50b20();
              }
              if ((local_c0 != '\0') && (local_c8 != 0)) {
                FUN_00d50b20();
              }
            }
            else {
              if (DAT_027296a0 != 0) {
                FUN_00d50b00();
              }
              lVar3 = DAT_027296a8;
              if (DAT_027296a8 != 0) {
                FUN_00d50b00();
              }
              local_e8 = lVar3;
              local_e0 = '\x01';
              local_d8 = 0;
              local_d0 = '\0';
              FUN_00d31230(&local_d8,&local_e8);
              plVar13 = local_58;
              if (local_58 == (longlong *)0x0) {
                bVar2 = false;
              }
              else if (local_50 == '\0') {
                FUN_00d50b00();
                bVar2 = true;
                if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
              }
              else {
                local_50 = '\0';
                bVar2 = true;
              }
              if ((local_d0 != '\0') && (local_d8 != 0)) {
                FUN_00d50b20();
              }
              if ((local_e0 != '\0') && (local_e8 != 0)) {
                FUN_00d50b20();
              }
              if (lVar7 != 0) {
                FUN_00d50b20();
              }
            }
            FUN_01d65230();
            plVar1 = local_58;
            if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if (plVar1 != plVar13) {
              local_90 = '\0';
              local_98 = plVar13;
              FUN_01d64eb0();
              if ((local_90 != '\0') && (local_98 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
            }
            if ((bVar2) && (plVar13 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            uVar10 = CONCAT71((int7)((ulonglong)plVar1 >> 8),1);
            FUN_00d50b20();
            goto LAB_00790895;
          }
          uVar10 = CONCAT71(uVar11,1);
        }
        else {
          local_78 = 0;
          if (this != (longlong *)0x0) {
            FUN_00d50b00();
          }
          local_78 = '\x01';
          local_80 = this;
          FUN_00129ad0();
          uVar10 = CONCAT71(uVar11,1);
          if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
      }
LAB_00790895:
      FUN_00d50b20();
      goto LAB_0079089d;
    }
  }
  uVar10 = 0;
LAB_007908a9:
  return uVar10 & 0xffffffff;
LAB_00790668:
  FUN_00d50b20();
  FUN_00136d50();
  FUN_00d50b20();
  uVar10 = 0;
  if (local_60 != (undefined8 *)0x0) goto LAB_00790895;
LAB_0079089d:
  FUN_00d50b20();
  goto LAB_007908a9;
}




// ==================================================
// @004ef800 (1839 bytes) — calculation

{
  void *pvVar1;
  pthread_key_t pVar2;
  longlong this;
  double dVar3;
  double dVar4;
  double local_70;
  longlong local_68;
  char local_60;
  double local_48;
  longlong local_40;
  char local_38;
  
  pVar2 = 0x4f0190;
  switch(*(undefined4 *)(this + 0xc)) {
  case 0:
    pvVar1 = _pthread_getspecific(0x4f0190);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012cb110();
    pvVar1 = _pthread_getspecific(pVar2);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e6160();
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_48 = (double)FUN_004f01b0();
    if (local_40 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if (param_3 == '\0') {
      return local_48;
    }
    if (*param_1 == 0) {
      return local_48;
    }
    pvVar1 = _pthread_getspecific(pVar2);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012caf10();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (local_40 == 0) {
      return local_48;
    }
    pvVar1 = _pthread_getspecific(pVar2);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012caf10();
    pvVar1 = _pthread_getspecific(pVar2);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_70 = (double)FUN_016c9870();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    pvVar1 = _pthread_getspecific(pVar2);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012caf10();
    pvVar1 = _pthread_getspecific(pVar2);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_016c9950();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    break;
  case 1:
    dVar3 = *(double *)(this + 0x10);
    dVar4 = *(double *)(this + 0x18) - dVar3;
    goto LAB_004ef8fa;
  case 2:
    FUN_000ba510();
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    dVar3 = (double)FUN_004f01b0();
    if (local_40 != 0) {
      FUN_00d50b20();
    }
    if (local_38 == '\0') {
      return dVar3;
    }
    if (local_40 == 0) {
      return dVar3;
    }
    FUN_00d50b20();
    return dVar3;
  case 3:
    pvVar1 = _pthread_getspecific(0x4f0190);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012cb110();
    pvVar1 = _pthread_getspecific(pVar2);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e6160();
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    FUN_004f01b0();
    if (local_40 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if (*param_2 != 0) {
      pvVar1 = _pthread_getspecific(pVar2);
      if (pvVar1 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012ebfe0();
    }
    local_48 = (double)FUN_00e7b500();
    if (param_3 == '\0') {
      return local_48;
    }
    if (*param_1 == 0) {
      return local_48;
    }
    pvVar1 = _pthread_getspecific(pVar2);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012caf10();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (local_40 == 0) {
      return local_48;
    }
    pvVar1 = _pthread_getspecific(pVar2);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012caf10();
    pvVar1 = _pthread_getspecific(pVar2);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_70 = (double)FUN_016c9870();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    pvVar1 = _pthread_getspecific(pVar2);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012caf10();
    pvVar1 = _pthread_getspecific(pVar2);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_016c9950();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    break;
  case 4:
    dVar3 = (double)FUN_004f01b0();
    return dVar3;
  default:
    dVar3 = 0.0;
    dVar4 = DAT_023b19a0;
LAB_004ef8fa:
    dVar3 = (double)FUN_00e7b500(dVar3,dVar4);
    return dVar3;
  }
  if (local_70 < local_48) {
    local_48 = local_70;
  }
  return local_48;
}




// ==================================================
// @004a41a0 (1821 bytes) — calculation

{
  longlong lVar1;
  undefined8 *puVar2;
  void *pvVar3;
  undefined8 uVar4;
  longlong lVar5;
  pthread_key_t pVar6;
  longlong *plVar7;
  undefined4 uVar8;
  undefined7 uVar9;
  longlong arg1;
  undefined8 *this;
  undefined8 *puVar10;
  longlong local_120;
  char local_118;
  longlong local_f0;
  char local_e8;
  longlong local_d0;
  char local_c8;
  longlong local_c0;
  char local_b8;
  undefined8 *local_b0;
  char local_a8;
  undefined8 *local_a0;
  char local_98;
  undefined8 *local_90;
  uint local_88;
  longlong local_80;
  char local_78;
  int local_70;
  undefined4 local_64;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  undefined8 local_40;
  undefined8 *local_38;
  
  lVar5 = *(longlong *)(arg1 + 0x38);
  if (lVar5 == 0) {
    plVar7 = param_1;
    pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
    pVar6 = (pthread_key_t)plVar7;
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01713990();
  }
  else {
    local_48 = 0;
    plVar7 = param_1;
    FUN_00d50b00();
    pVar6 = (pthread_key_t)plVar7;
    local_48 = '\x01';
    local_50 = lVar5;
  }
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
  local_38 = local_90;
  if ((char)local_88 == '\0') {
    if (local_90 != (undefined8 *)0x0) {
      FUN_00d50b00();
      if (((char)local_88 != '\0') && (local_90 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    local_88 = local_88 & 0xffffff00;
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  lVar5 = *param_2;
  if (lVar5 == 0) {
    pvVar3 = _pthread_getspecific(pVar6);
    if ((pvVar3 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
      pVar6 = (pthread_key_t)local_38;
    }
    FUN_012e6000();
    pvVar3 = _pthread_getspecific(pVar6);
    if ((pvVar3 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
      pVar6 = (pthread_key_t)local_38;
    }
    FUN_012e6160();
    lVar1 = local_50;
    local_70 = *(int *)(local_f0 + 0xc);
    local_88 = 2;
    local_90 = &DAT_024c5048;
    local_78 = 0;
    if (local_50 != 0) {
      FUN_00d50b00();
    }
    local_70 = local_70 + 1;
    local_80 = lVar1;
    local_78 = '\x01';
    local_90 = (undefined8 *)&DAT_025df2a0;
    FUN_00d8cb40();
    lVar5 = local_60;
    if (local_60 == 0) {
      uVar8 = 0;
    }
    else {
      uVar9 = (undefined7)((ulonglong)lVar1 >> 8);
      if (local_58 == '\0') {
        FUN_00d50b00();
        uVar8 = (undefined4)CONCAT71(uVar9,1);
        if ((local_58 != '\0') && (local_60 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_58 = '\0';
        uVar8 = (undefined4)CONCAT71(uVar9,1);
      }
    }
    local_90 = &DAT_024c5048;
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    if ((local_e8 != '\0') && (local_f0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    lVar1 = *param_1;
    local_64 = uVar8;
  }
  else if ((char)param_2[1] == '\0') {
    local_64 = 0;
    lVar1 = *param_1;
  }
  else {
    uVar4 = FUN_00d50b00();
    local_64 = (undefined4)CONCAT71((int7)((ulonglong)uVar4 >> 8),1);
    lVar1 = *param_1;
  }
  if (lVar1 == 0) {
    pvVar3 = _pthread_getspecific(pVar6);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e6160();
    if ((char)local_88 != '\0') {
      FUN_00d50b20();
    }
    local_b8 = '\0';
    local_b0 = local_38;
    local_a8 = '\0';
    pVar6 = 0;
    local_c0 = lVar5;
    uVar4 = FUN_004f83c0(0,&local_b0);
    puVar10 = local_90;
    if (local_90 == (undefined8 *)0x0) {
      local_40 = 0;
    }
    else if ((char)local_88 == '\0') {
      uVar4 = FUN_00d50b00();
      local_40 = CONCAT71((int7)((ulonglong)uVar4 >> 8),1);
      if (((char)local_88 != '\0') && (local_90 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_88 = local_88 & 0xffffff00;
      local_40 = CONCAT71((int7)((ulonglong)uVar4 >> 8),1);
    }
    if ((local_a8 != '\0') && (local_b0 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_b8 != '\0') && (local_c0 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    pvVar3 = _pthread_getspecific(pVar6);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e6a50();
    pvVar3 = _pthread_getspecific(pVar6);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e6160();
    local_90 = (undefined8 *)*param_1;
    local_88 = local_88 & 0xffffff00;
    FUN_00d237a0();
    if (((char)local_88 != '\0') && (local_90 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    local_d0 = *param_1;
    local_c8 = '\0';
    pVar6 = 0;
    uVar4 = FUN_004f83c0(0,&local_d0);
    puVar10 = local_90;
    if (local_90 == (undefined8 *)0x0) {
      local_40 = 0;
    }
    else if ((char)local_88 == '\0') {
      uVar4 = FUN_00d50b00();
      local_40 = CONCAT71((int7)((ulonglong)uVar4 >> 8),1);
      if (((char)local_88 != '\0') && (local_90 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_88 = local_88 & 0xffffff00;
      local_40 = CONCAT71((int7)((ulonglong)uVar4 >> 8),1);
    }
    if ((local_c8 != '\0') && (local_d0 != 0)) {
      FUN_00d50b20();
    }
  }
  pvVar3 = _pthread_getspecific(pVar6);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_98 = '\0';
  local_a0 = puVar10;
  FUN_012e66e0();
  puVar2 = local_38;
  if ((local_98 != '\0') && (local_a0 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  FUN_004a11d0();
  if ((local_118 != '\0') && (local_120 != 0)) {
    FUN_00d50b20();
  }
  *(undefined1 *)(this + 1) = 0;
  if (((char)local_40 == '\0') && (puVar10 != (undefined8 *)0x0)) {
    FUN_00d50b00();
  }
  *this = puVar10;
  *(undefined1 *)(this + 1) = 1;
  if (((char)local_64 != '\0') && (lVar5 != 0)) {
    FUN_00d50b20();
  }
  if (puVar2 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  return this;
}




// ==================================================
// @00268ff0 (1716 bytes) — calculation

{
  longlong lVar1;
  char cVar2;
  void *pvVar3;
  longlong lVar4;
  pthread_key_t pVar5;
  longlong *plVar6;
  char *pcVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong this;
  bool bVar10;
  double dVar11;
  longlong local_f0;
  char local_e8;
  longlong local_e0;
  char local_d8;
  longlong local_d0;
  char local_c8;
  longlong local_c0;
  char local_b8;
  double local_b0;
  longlong local_a8;
  char local_a0;
  longlong local_98;
  char local_90;
  longlong local_88;
  char local_80;
  longlong local_78;
  char local_70;
  char local_68;
  undefined7 uStack_67;
  char local_60;
  longlong local_58;
  char local_50;
  longlong local_48;
  char local_40 [8];
  char local_38 [8];
  
  if ((*(longlong **)(this + 0xa0) != (longlong *)0x0) &&
     (cVar2 = (**(code **)(**(longlong **)(this + 0xa0) + 0xa78))(), cVar2 != '\0')) {
    FUN_01b6d0d0();
    lVar8 = local_48;
    if ((local_40[0] != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if (lVar8 != 0) {
      FUN_01b6d0d0();
      lVar8 = local_58;
      pvVar3 = _pthread_getspecific(param_1);
      lVar1 = local_58;
      if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar8 = lVar1, lVar4 != 0)) {
        lVar8 = *(longlong *)(lVar1 + 0x20 + (ulonglong)(*(uint *)(lVar4 + 0x154) & 1) * 8);
      }
      if (*(int *)(*(longlong *)(lVar8 + 0x48) + 0x18) + 7U < 0xf) {
        FUN_00d23310();
        lVar8 = local_48;
        local_68 = local_40[0];
        pcVar7 = &local_68;
        if (local_40[0] != '\0') {
          pcVar7 = local_40;
        }
        *pcVar7 = '\0';
        bVar10 = lVar8 == 0;
        if ((local_40[0] != '\0') && (lVar8 != 0)) {
          FUN_00d50b20();
        }
        if ((local_68 != '\0') && (lVar8 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        bVar10 = false;
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if (!bVar10) {
        (**(code **)(**(longlong **)(this + 0xa0) + 0x958))();
        lVar8 = local_48;
        if ((local_40[0] != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
        if (lVar8 != 0) {
          (**(code **)(**(longlong **)(this + 0xa0) + 0x958))();
          FUN_01a8c310();
          lVar1 = local_48;
          if (local_40[0] == '\0') {
            if (((local_48 != 0) && (FUN_00d50b00(), local_40[0] != '\0')) && (local_48 != 0)) {
              FUN_00d50b20();
            }
          }
          else {
            local_40[0] = '\0';
          }
          if ((local_50 != '\0') && (local_58 != 0)) {
            FUN_00d50b20();
          }
          uVar9 = CONCAT71((int7)((ulonglong)lVar8 >> 8),lVar1 != 0);
          if ((lVar1 != 0) && (param_2 != '\0')) {
            FUN_00b5dfe0();
            local_90 = 0;
            local_98 = CONCAT71(uStack_67,local_68);
            if (local_60 == '\0') {
              if (local_98 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_60 = '\0';
            }
            local_90 = '\x01';
            FUN_001220c0();
            local_a8 = local_58;
            local_a0 = 0;
            if (local_50 == '\0') {
              if (local_58 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_50 = '\0';
            }
            local_a0 = '\x01';
            FUN_00b5dfe0();
            local_88 = local_c0;
            local_80 = 0;
            if (local_b8 == '\0') {
              if (local_c0 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_b8 = '\0';
            }
            local_80 = '\x01';
            local_e8 = '\0';
            local_f0 = 0;
            plVar6 = &local_88;
            FUN_01f53880(plVar6,&local_a8,&local_f0);
            lVar8 = local_48;
            pVar5 = (pthread_key_t)plVar6;
            if (local_40[0] == '\0') {
              if (((local_48 != 0) && (FUN_00d50b00(), local_40[0] != '\0')) && (local_48 != 0)) {
                FUN_00d50b20();
              }
            }
            else {
              local_40[0] = '\0';
            }
            if ((local_e8 != '\0') && (local_f0 != 0)) {
              FUN_00d50b20();
            }
            if ((local_80 != '\0') && (local_88 != 0)) {
              FUN_00d50b20();
            }
            if ((local_b8 != '\0') && (local_c0 != 0)) {
              FUN_00d50b20();
            }
            if ((local_a0 != '\0') && (local_a8 != 0)) {
              FUN_00d50b20();
            }
            if ((local_50 != '\0') && (local_58 != 0)) {
              FUN_00d50b20();
            }
            if ((local_90 != '\0') && (local_98 != 0)) {
              FUN_00d50b20();
            }
            if ((local_60 != '\0') && (CONCAT71(uStack_67,local_68) != 0)) {
              FUN_00d50b20();
            }
            if (lVar8 == 0) {
              uVar9 = 0;
            }
            else {
              FUN_01b6d0d0();
              pvVar3 = _pthread_getspecific(pVar5);
              if (pvVar3 != (void *)0x0) {
                FUN_00e8b990();
              }
              pcVar7 = &local_68;
              FUN_012527b0(pcVar7,0,0,0);
              lVar4 = local_48;
              pVar5 = (pthread_key_t)CONCAT71((int7)((ulonglong)pcVar7 >> 8),local_40[0]);
              pcVar7 = local_38;
              if (local_40[0] != '\0') {
                pcVar7 = local_40;
              }
              local_38[0] = local_40[0];
              *pcVar7 = '\0';
              if ((local_40[0] != '\0') && (local_48 != 0)) {
                FUN_00d50b20();
              }
              if ((local_38[0] != '\0') && (lVar4 != 0)) {
                FUN_00d50b20();
              }
              if ((local_50 != '\0') && (local_58 != 0)) {
                FUN_00d50b20();
              }
              FUN_00e7bcc0();
              pvVar3 = _pthread_getspecific(pVar5);
              if (pvVar3 != (void *)0x0) {
                FUN_00e8b990();
              }
              local_b0 = (double)FUN_016c98e0();
              pvVar3 = _pthread_getspecific(pVar5);
              if (pvVar3 != (void *)0x0) {
                FUN_00e8b990();
              }
              dVar11 = (double)FUN_016c98e0();
              dVar11 = dVar11 - local_b0;
              local_b0 = (double)FUN_00e7b500();
              local_e0 = lVar1;
              local_d8 = '\0';
              FUN_01a71bc0();
              lVar4 = local_48;
              local_70 = 0;
              if (local_40[0] == '\0') {
                if (local_48 != 0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_40[0] = '\0';
              }
              local_70 = '\x01';
              local_78 = lVar4;
              local_d0 = lVar8;
              local_c8 = '\0';
              FUN_001256c0(local_b0,dVar11);
              if ((local_c8 != '\0') && (local_d0 != 0)) {
                FUN_00d50b20();
              }
              if ((local_70 != '\0') && (local_78 != 0)) {
                FUN_00d50b20();
              }
              if ((local_40[0] != '\0') && (local_48 != 0)) {
                FUN_00d50b20();
              }
              if ((local_d8 != '\0') && (local_e0 != 0)) {
                FUN_00d50b20();
              }
              uVar9 = CONCAT71((int7)((ulonglong)lVar4 >> 8),1);
              FUN_00d50b20();
            }
          }
          if (lVar1 != 0) {
            FUN_00d50b20();
          }
          goto LAB_00269205;
        }
      }
    }
  }
  uVar9 = 0;
LAB_00269205:
  return uVar9 & 0xffffffff;
}




// ==================================================
// @01b247c0 (1589 bytes) — math_loop

{
  longlong lVar1;
  char cVar2;
  undefined8 *puVar3;
  void *pvVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined *puVar7;
  pthread_key_t pVar8;
  longlong lVar9;
  int iVar10;
  undefined8 *this;
  undefined4 extraout_XMM0_Da;
  longlong local_e0;
  char local_d8;
  longlong local_d0;
  char local_c8;
  longlong local_c0;
  char local_b8;
  longlong local_b0;
  char local_a8;
  undefined4 local_9c;
  ulonglong local_98;
  longlong *local_90;
  undefined8 *local_88;
  undefined8 local_80;
  undefined8 *local_78;
  longlong local_70;
  char local_68;
  longlong local_60;
  longlong local_58;
  char local_50;
  undefined8 *local_48;
  undefined8 local_40;
  int local_38;
  
  puVar3 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  pVar8 = 0x25795a8;
  *puVar3 = &DAT_025795a8;
  (*DAT_025795c0)();
  pvVar4 = _pthread_getspecific(pVar8);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01510030();
  if (local_50 == '\0') {
    if (local_58 == 0) goto LAB_01b24df0;
    FUN_00d50b00();
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
  }
  else if (local_58 == 0) goto LAB_01b24df0;
  local_88 = puVar3;
  pvVar4 = _pthread_getspecific(pVar8);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0150eb60();
  lVar1 = local_58;
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if (lVar1 == 0) {
    local_80 = 0;
    local_60 = 0;
  }
  else {
    pvVar4 = _pthread_getspecific(pVar8);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0150eb60();
    pvVar4 = _pthread_getspecific(pVar8);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01822e80();
    local_60 = local_58;
    if (local_58 == 0) {
      local_80 = 0;
    }
    else if (local_50 == '\0') {
      uVar6 = FUN_00d50b00();
      local_80 = CONCAT71((int7)((ulonglong)uVar6 >> 8),1);
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_50 = '\0';
      local_80 = CONCAT71((int7)((ulonglong)local_58 >> 8),1);
    }
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
  }
  plVar5 = (longlong *)FUN_00e8fc40();
  FUN_00d4ff40();
  *plVar5 = (longlong)&DAT_025ce610;
  plVar5[2] = 0;
  plVar5[3] = 0;
  (*DAT_025ce628)();
  local_68 = '\0';
  local_70 = 0;
  local_90 = plVar5;
  puVar3 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  puVar7 = &DAT_02572358;
  *puVar3 = &DAT_02572358;
  (*DAT_02572370)();
  local_9c = 0xffffffff;
  local_78 = puVar3;
  FUN_01246780();
  local_98 = 0;
  while( true ) {
    pvVar4 = _pthread_getspecific((pthread_key_t)puVar7);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar6 = FUN_00e7bdb0();
    puVar7 = (undefined *)FUN_00e7bdb0();
    cVar2 = FUN_01252960(puVar7,uVar6,&local_70,0);
    puVar3 = local_88;
    if (cVar2 == '\0') break;
    if (local_70 != 0) {
      local_e0 = local_70;
      local_d8 = '\0';
      (**(code **)(*local_90 + 0x388))(extraout_XMM0_Da,&local_e0);
      lVar1 = local_58;
      if (local_50 == '\0') {
        if (((local_58 != 0) && (FUN_00d50b00(), local_50 != '\0')) && (local_58 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_50 = '\0';
      }
      if ((local_d8 != '\0') && (local_e0 != 0)) {
        FUN_00d50b20();
      }
      local_98 = (ulonglong)((int)local_98 + 1);
      if (lVar1 != 0) {
        local_50 = '\0';
        local_58 = lVar1;
        FUN_00d235a0();
        if ((local_50 != '\0') && (local_58 != 0)) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
      }
    }
  }
  if (local_78 != (undefined8 *)0x0) {
    local_50 = '\0';
    local_58 = 0;
    local_48 = local_78;
    local_40 = 0xffffffff;
    local_38 = 0;
    local_40._4_4_ = 0;
    while( true ) {
      if (local_40._4_4_ != 0) {
        if (local_40._4_4_ < 1) {
          iVar10 = -local_40._4_4_;
        }
        else {
          iVar10 = (int)local_40 - local_40._4_4_;
          local_40 = CONCAT44(local_40._4_4_,iVar10);
          FUN_00d23690();
          local_38 = local_38 + local_40._4_4_;
          iVar10 = 0;
        }
        local_40 = CONCAT44(iVar10,(int)local_40);
      }
      lVar1 = DAT_027d64a0;
      lVar9 = (longlong)(int)local_40;
      iVar10 = (int)local_40 + 1;
      local_40 = CONCAT44(local_40._4_4_,iVar10);
      if (*(int *)((longlong)local_48 + 0xc) <= iVar10) break;
      local_58 = *(longlong *)(local_48[2] + 8 + lVar9 * 8);
      if (1 < iVar10 + local_38) break;
      if (iVar10 + local_38 == 1) {
        if (DAT_027d64a0 != 0) {
          FUN_00d50b00();
        }
        local_d0 = lVar1;
        local_c8 = '\x01';
        FUN_00d8dbf0();
        if ((local_c8 != '\0') && (local_d0 != 0)) {
          FUN_00d50b20();
        }
      }
      local_c0 = local_58;
      local_b8 = '\0';
      FUN_00d8dbf0();
      if ((local_b8 != '\0') && (local_c0 != 0)) {
        FUN_00d50b20();
      }
    }
    FUN_00018280();
  }
  lVar1 = DAT_027e3db0;
  if (2 < (uint)local_98) {
    if (DAT_027e3db0 != 0) {
      FUN_00d50b00();
    }
    local_b0 = lVar1;
    local_a8 = '\x01';
    FUN_00d8dbf0();
    if ((local_a8 != '\0') && (local_b0 != 0)) {
      FUN_00d50b20();
    }
  }
  if (local_78 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if (local_90 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (((char)local_80 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
LAB_01b24df0:
  *this = puVar3;
  *(undefined1 *)(this + 1) = 1;
  return;
}




// ==================================================
// @004f0450 (1588 bytes) — math_loop

{
  char cVar1;
  int iVar2;
  void *pvVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  pthread_key_t pVar8;
  longlong **pplVar9;
  longlong *plVar10;
  char *pcVar11;
  ulonglong uVar12;
  longlong *this;
  double dVar13;
  double local_a8;
  longlong local_a0;
  char local_98 [8];
  longlong *local_90;
  int local_88;
  int iStack_84;
  int local_80;
  double local_78;
  longlong *local_70;
  undefined8 local_68;
  uint local_5c;
  double local_58;
  longlong *local_50;
  char local_48;
  longlong *local_40;
  char local_38 [8];
  
  local_a8 = (double)FUN_004f01b0();
  if (*(int *)(*this + 0xc) == 1) {
    FUN_00d23310();
    pVar8 = (pthread_key_t)CONCAT71((int7)((ulonglong)param_1 >> 8),local_98[0]);
    pcVar11 = local_38;
    if (local_98[0] != '\0') {
      pcVar11 = local_98;
    }
    local_38[0] = local_98[0];
    *pcVar11 = '\0';
    if ((local_98[0] != '\0') && (local_a0 != 0)) {
      FUN_00d50b20();
    }
    pvVar3 = _pthread_getspecific(pVar8);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e5ae0();
    local_70 = local_50;
    if (local_48 == '\0') {
      if (((local_50 != (longlong *)0x0) && (FUN_00d50b00(), local_48 != '\0')) &&
         (local_50 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_48 = '\0';
    }
    if ((local_38[0] != '\0') && (local_a0 != 0)) {
      FUN_00d50b20();
    }
    if (local_70 != (longlong *)0x0) {
      local_98[0] = '\0';
      local_90 = local_70;
      local_88 = -1;
      iStack_84 = 0;
      local_80 = 0;
      local_5c = 0xffffff01;
      local_68 = 0;
      local_40 = (longlong *)0x0;
      local_58 = 0.0;
      dVar13 = 0.0;
LAB_004f05cf:
      while( true ) {
        iVar2 = iStack_84;
        if (iStack_84 != 0) {
          if (iStack_84 < 1) {
            iStack_84 = -iStack_84;
          }
          else {
            local_88 = local_88 - iStack_84;
            FUN_00d23690(dVar13,iStack_84);
            local_80 = local_80 + iVar2;
            iStack_84 = 0;
          }
        }
        local_88 = local_88 + 1;
        if (*(int *)((longlong)local_90 + 0xc) <= local_88) break;
        pVar8 = (pthread_key_t)local_90[2];
        pvVar3 = _pthread_getspecific(pVar8);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar13 = (double)FUN_0125e7c0();
        if (local_48 == '\0') goto LAB_004f0680;
        if (local_50 != (longlong *)0x0) goto LAB_004f06b0;
      }
      plVar10 = local_90;
      FUN_001159b0();
      FUN_00d50b20();
      plVar4 = local_40;
      if ((local_40 != (longlong *)0x0) && ((local_58 != 0.0 || (NAN(local_58))))) {
        pvVar3 = _pthread_getspecific((pthread_key_t)plVar10);
        plVar4 = local_40;
        if ((pvVar3 != (void *)0x0) && (lVar5 = FUN_00e8b990(), plVar4 = local_40, lVar5 != 0)) {
          plVar10 = local_40;
          plVar4 = (longlong *)local_40[(ulonglong)(*(uint *)(lVar5 + 0x154) & 1) + 4];
        }
        pVar8 = (pthread_key_t)plVar10;
        lVar5 = (**(code **)(*plVar4 + 0x378))();
        plVar4 = local_40;
        pvVar3 = _pthread_getspecific(pVar8);
        plVar10 = plVar4;
        if ((pvVar3 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
          plVar10 = (longlong *)plVar4[(ulonglong)(*(uint *)(lVar6 + 0x154) & 1) + 4];
        }
        dVar13 = (double)(**(code **)(*plVar10 + 0x370))();
        uVar12 = lVar5 - (longlong)(dVar13 * (param_2 - local_58));
        uVar7 = -uVar12;
        if (0 < (longlong)uVar12) {
          uVar7 = uVar12;
        }
        if (uVar7 < 2) {
          local_a8 = local_a8 + local_58;
        }
      }
      if (((char)local_68 != '\0') && (plVar4 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  return local_a8;
LAB_004f0680:
  if (local_50 != (longlong *)0x0) {
    FUN_00d50b00();
    if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
LAB_004f06b0:
    pvVar3 = _pthread_getspecific(pVar8);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar13 = (double)FUN_013de8d0();
    if ((dVar13 != DAT_02390448) || (NAN(dVar13) || NAN(DAT_02390448))) {
      local_78 = local_58;
    }
    else {
      pvVar3 = _pthread_getspecific(pVar8);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_78 = (double)FUN_01264310();
      pvVar3 = _pthread_getspecific(pVar8);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar13 = (double)FUN_013def20();
      dVar13 = local_78 - dVar13;
      if ((local_5c & 1) == 0) {
        local_78 = local_58;
        if (local_58 < dVar13) {
          local_78 = dVar13;
        }
      }
      else {
        local_5c = 0;
        local_78 = dVar13;
      }
      if (local_40 == (longlong *)0x0) {
        pvVar3 = _pthread_getspecific(pVar8);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_013df6b0();
        plVar4 = local_50;
        if ((DAT_026fdd70 == '\0') && (iVar2 = ___cxa_guard_acquire(), iVar2 != 0)) {
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
        pplVar9 = (longlong **)&DAT_02802688;
        if (plVar4 != (longlong *)0x0) {
          (**(code **)(*plVar4 + 0x360))();
          cVar1 = FUN_00e85ea0();
          pplVar9 = &local_50;
          if (cVar1 == '\0') {
            pplVar9 = (longlong **)&DAT_02802688;
          }
        }
        plVar4 = *pplVar9;
        local_40 = plVar4;
        if (plVar4 == (longlong *)0x0) {
          local_40 = (longlong *)0x0;
        }
        else {
          if (*(char *)(pplVar9 + 1) == '\0') {
            plVar4 = (longlong *)FUN_00d50b00();
          }
          else {
            *(undefined1 *)(pplVar9 + 1) = 0;
          }
          local_68 = CONCAT71((int7)((ulonglong)plVar4 >> 8),1);
        }
        if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    FUN_00d50b20();
    local_58 = local_78;
    dVar13 = local_78;
  }
  goto LAB_004f05cf;
}




// ==================================================
// @01394e80 (1579 bytes) — math_loop

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  longlong *plVar4;
  char cVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong **pplVar8;
  longlong lVar9;
  longlong *this;
  longlong lVar10;
  longlong *plVar11;
  longlong local_a8;
  char local_a0;
  longlong local_80;
  char local_78;
  longlong *local_48;
  char local_40;
  longlong *local_38;
  
  plVar6 = (longlong *)*this;
  if (plVar6 == (longlong *)0x0) {
    FUN_013933d0();
    lVar10 = *this;
    if (lVar10 == local_a8) {
      if (((char)this[1] == '\0') && (local_a8 != 0)) {
        if (local_a0 == '\0') {
          FUN_00d50b00();
        }
        goto LAB_01394f33;
      }
      if ((local_a0 != '\0') && (local_a8 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      lVar9 = this[1];
      if (local_a0 == '\0') {
        if (local_a8 != 0) {
          FUN_00d50b00();
        }
        *this = local_a8;
        if (((char)lVar9 != '\0') && (lVar10 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        *this = local_a8;
        if (((char)lVar9 != '\0') && (lVar10 != 0)) {
          FUN_00d50b20();
        }
      }
LAB_01394f33:
      *(undefined1 *)(this + 1) = 1;
    }
    plVar6 = (longlong *)*this;
    if (plVar6 == (longlong *)0x0) {
      return -1;
    }
  }
  (**(code **)(*plVar6 + 1000))();
  if (local_a0 == '\0') {
    if (local_a8 != 0) {
      FUN_00d50b00();
      goto LAB_01394f99;
    }
  }
  else if (local_a8 != 0) {
LAB_01394f99:
    if (*(int *)(local_a8 + 0xc) < 1) {
      lVar10 = -1;
    }
    else {
      lVar10 = -1;
      lVar9 = 0;
      do {
        lVar7 = DAT_027bf478;
        plVar6 = *(longlong **)(*(longlong *)(local_a8 + 0x10) + lVar9 * 8);
        if (DAT_027bf478 != 0) {
          FUN_00d50b00();
        }
        (**(code **)(*plVar6 + 0x400))();
        plVar4 = local_48;
        if (local_40 == '\0') {
          if (((local_48 != (longlong *)0x0) && (FUN_00d50b00(), local_40 != '\0')) &&
             (local_48 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_40 = '\0';
        }
        if (lVar7 != 0) {
          FUN_00d50b20();
        }
        cVar5 = (**(code **)(*plVar4 + 0x398))();
        bVar1 = true;
        if (cVar5 == '\0') {
          bVar3 = false;
LAB_0139524e:
          bVar2 = false;
          local_38 = (longlong *)0x0;
LAB_01395254:
          lVar7 = (**(code **)(*plVar6 + 0x3b0))();
          if (bVar1) {
            plVar6 = (longlong *)FUN_00e8fc40();
            FUN_00022d50();
            (**(code **)(*plVar6 + 0x18))();
            bVar3 = true;
            local_38 = plVar6;
          }
          FUN_00d468f0();
          plVar6 = DAT_027bf448;
          if (local_78 == '\0') {
            if (local_80 != 0) {
              FUN_00d50b00();
              plVar6 = DAT_027bf448;
            }
          }
          else {
            local_78 = '\0';
          }
          DAT_027bf448 = plVar6;
          if (plVar6 != (longlong *)0x0) {
            FUN_00d50b00();
          }
          local_40 = '\0';
          local_48 = plVar6;
          FUN_00ca0840();
          if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (plVar6 != (longlong *)0x0) {
            FUN_00d50b20();
          }
          if (local_80 != 0) {
            FUN_00d50b20();
          }
          if ((local_78 != '\0') && (local_80 != 0)) {
            FUN_00d50b20();
          }
          FUN_00ca5c10();
          FUN_00c91c80();
          if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          bVar1 = true;
        }
        else {
          FUN_00ca94c0();
          local_38 = local_48;
          if (local_48 == (longlong *)0x0) {
            local_38 = (longlong *)0x0;
            bVar3 = false;
          }
          else if (local_40 == '\0') {
            FUN_00d50b00();
            bVar3 = true;
            if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            local_40 = '\0';
            bVar3 = true;
          }
          plVar4 = DAT_027bf448;
          if (local_38 == (longlong *)0x0) goto LAB_0139524e;
          if (DAT_027bf448 != (longlong *)0x0) {
            FUN_00d50b00();
          }
          FUN_000175c0();
          plVar11 = local_48;
          FUN_00053ac0();
          pplVar8 = (longlong **)&DAT_02802688;
          if (plVar11 != (longlong *)0x0) {
            (**(code **)(*plVar11 + 0x360))();
            cVar5 = FUN_00e85ea0();
            pplVar8 = &local_48;
            if (cVar5 == '\0') {
              pplVar8 = (longlong **)&DAT_02802688;
            }
          }
          plVar11 = *pplVar8;
          if (plVar11 == (longlong *)0x0) {
            bVar2 = false;
            plVar11 = (longlong *)0x0;
          }
          else {
            if (*(char *)(pplVar8 + 1) == '\0') {
              FUN_00d50b00();
            }
            else {
              *(undefined1 *)(pplVar8 + 1) = 0;
            }
            bVar2 = true;
          }
          if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (plVar4 != (longlong *)0x0) {
            FUN_00d50b20();
          }
          if (plVar11 == (longlong *)0x0) {
            bVar1 = false;
            goto LAB_01395254;
          }
          lVar7 = FUN_00d45790();
          bVar1 = false;
        }
        FUN_00d50b20();
        if (bVar2 && !bVar1) {
          FUN_00d50b20();
        }
        if ((bVar3) && (local_38 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        lVar10 = lVar10 + lVar7;
        lVar9 = lVar9 + 1;
      } while ((int)lVar9 < *(int *)(local_a8 + 0xc));
    }
    FUN_00115910();
    FUN_00d50b20();
    return lVar10;
  }
  return -1;
}




// ==================================================
// @0076e660 (1530 bytes) — math_loop

{
  int iVar1;
  char cVar2;
  int iVar3;
  void *pvVar4;
  longlong lVar5;
  pthread_key_t pVar6;
  longlong *******ppppppplVar7;
  undefined8 *this;
  int iVar8;
  longlong ******pppppplVar9;
  undefined4 uVar10;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  longlong *local_f8;
  char local_f0;
  longlong local_e8;
  char local_e0;
  longlong local_d0;
  char local_c8;
  longlong local_c0;
  char local_b8;
  longlong local_b0;
  char local_a8;
  longlong *******local_a0;
  char local_98;
  longlong *******local_90;
  int local_88;
  int iStack_84;
  int local_80;
  longlong local_78;
  char local_70;
  longlong local_68;
  char local_60;
  longlong local_58;
  char local_50;
  longlong *******local_48;
  longlong local_40;
  char local_38;
  
  if (*param_2 == 0) {
    *(undefined1 *)(this + 1) = 0;
    *this = 0;
    return;
  }
  FUN_00757c60();
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar10 = FUN_012cb480();
  ppppppplVar7 = local_a0;
  if (local_98 == '\0') {
    if (((local_a0 != (longlong *******)0x0) && (uVar10 = FUN_00d50b00(), local_98 != '\0')) &&
       (local_a0 != (longlong *******)0x0)) {
      uVar10 = FUN_00d50b20();
    }
  }
  else {
    local_98 = '\0';
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    uVar10 = FUN_00d50b20();
  }
  if (ppppppplVar7 != (longlong *******)0x0) {
    local_98 = 0;
    local_a0 = (longlong *******)0x0;
    local_48 = ppppppplVar7;
    local_90 = ppppppplVar7;
    local_88 = -1;
    iStack_84 = 0;
    local_80 = 0;
LAB_0076e753:
    while( true ) {
      iVar1 = iStack_84;
      if (iStack_84 != 0) {
        if (iStack_84 < 1) {
          iStack_84 = -iStack_84;
        }
        else {
          local_88 = local_88 - iStack_84;
          uVar10 = FUN_00d23690(uVar10,iStack_84);
          local_80 = local_80 + iVar1;
          iStack_84 = 0;
        }
      }
      lVar5 = (longlong)local_88;
      iVar8 = local_88 + 1;
      local_88 = iVar8;
      iVar1 = *(int *)((longlong)local_90 + 0xc);
      if (iVar1 <= iVar8) break;
      pppppplVar9 = (longlong ******)local_90[2][lVar5 + 1];
      local_a0 = (longlong *******)pppppplVar9;
      if ((DAT_026fdd70 == '\0') &&
         (iVar3 = ___cxa_guard_acquire(), uVar10 = extraout_XMM0_Da_00, iVar3 != 0)) {
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
        uVar10 = ___cxa_guard_release();
      }
      ppppppplVar7 = (longlong *******)&DAT_02802688;
      if (pppppplVar9 != (longlong ******)0x0) {
        (*(code *)(*pppppplVar9)[0x6c])();
        cVar2 = FUN_00e85ea0();
        ppppppplVar7 = (longlong *******)&local_a0;
        uVar10 = extraout_XMM0_Da;
        if (cVar2 == '\0') {
          ppppppplVar7 = (longlong *******)&DAT_02802688;
        }
      }
      pppppplVar9 = *ppppppplVar7;
      if (*(char *)(ppppppplVar7 + 1) == '\0') goto LAB_0076e810;
      *(undefined1 *)(ppppppplVar7 + 1) = 0;
      if (pppppplVar9 != (longlong ******)0x0) goto LAB_0076e825;
    }
    pppppplVar9 = (longlong ******)0x0;
    ppppppplVar7 = local_90;
    goto LAB_0076ebf0;
  }
LAB_0076ec41:
  *(undefined1 *)(this + 1) = 0;
  *this = 0;
  return;
LAB_0076e810:
  if (pppppplVar9 == (longlong ******)0x0) goto LAB_0076e753;
  FUN_00d50b00();
LAB_0076e825:
  pvVar4 = _pthread_getspecific((pthread_key_t)ppppppplVar7);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0123b100();
  if (local_40 == 0) {
    cVar2 = '\0';
  }
  else {
    pvVar4 = _pthread_getspecific((pthread_key_t)ppppppplVar7);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0123b100();
    FUN_00b88600();
    local_70 = 0;
    if (local_c8 == '\0') {
      if (local_d0 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_c8 = '\0';
    }
    local_70 = '\x01';
    local_78 = local_d0;
    FUN_00b84ae0();
    FUN_00b88600();
    local_50 = 0;
    if (local_a8 == '\0') {
      if (local_b0 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_a8 = '\0';
    }
    local_50 = '\x01';
    local_58 = local_b0;
    FUN_00b84ae0();
    local_60 = 0;
    if (local_b8 == '\0') {
      if (local_c0 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_b8 = '\0';
    }
    local_60 = '\x01';
    local_68 = local_c0;
    cVar2 = (**(code **)(*local_f8 + 0x50))();
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if ((local_b8 != '\0') && (local_c0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if ((local_a8 != '\0') && (local_b0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_f0 != '\0') && (local_f8 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    if ((local_c8 != '\0') && (local_d0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_e0 != '\0') && (local_e8 != 0)) {
      FUN_00d50b20();
    }
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (cVar2 == '\0') {
    uVar10 = FUN_00d50b20();
    goto LAB_0076e753;
  }
  FUN_00d50b00();
  FUN_00d50b20();
LAB_0076ebf0:
  pVar6 = (pthread_key_t)ppppppplVar7;
  FUN_00115e00();
  FUN_00d50b20();
  if (pppppplVar9 != (longlong ******)0x0) {
    pvVar4 = _pthread_getspecific(pVar6);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0124df10();
    if (iVar1 <= iVar8) {
      return;
    }
    FUN_00d50b20();
    return;
  }
  goto LAB_0076ec41;
}




// ==================================================
// @004a5d20 (1430 bytes) — math_loop

{
  longlong lVar1;
  void *pvVar2;
  pthread_key_t pVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *this;
  longlong local_e0;
  char local_d8;
  longlong local_80;
  char local_78;
  longlong local_60;
  char local_58;
  int local_48;
  longlong *local_38;
  
  plVar4 = param_1;
  if (*param_1 == 0) {
    pvVar2 = _pthread_getspecific((pthread_key_t)param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e7fb0();
    lVar5 = *param_1;
    if (lVar5 == local_60) {
      if (((char)param_1[1] != '\0') || (local_60 == 0)) goto LAB_004a5e2e;
      if (local_58 == '\0') {
        FUN_00d50b00();
        goto LAB_004a5e27;
      }
    }
    else {
      lVar1 = param_1[1];
      if (local_58 == '\0') {
        if (local_60 != 0) {
          FUN_00d50b00();
        }
        *param_1 = local_60;
        if (((char)lVar1 != '\0') && (lVar5 != 0)) {
          FUN_00d50b20();
        }
LAB_004a5e27:
        local_38 = param_1 + 1;
        *(undefined1 *)local_38 = 1;
LAB_004a5e2e:
        if ((local_58 != '\0') && (local_60 != 0)) {
          FUN_00d50b20();
        }
        goto LAB_004a5e42;
      }
      *param_1 = local_60;
      if (((char)lVar1 != '\0') && (lVar5 != 0)) {
        FUN_00d50b20();
      }
    }
    local_38 = param_1 + 1;
    *(undefined1 *)local_38 = 1;
  }
LAB_004a5e42:
  pVar3 = (pthread_key_t)plVar4;
  if (*param_3 != 0) goto LAB_004a5f38;
  pvVar2 = _pthread_getspecific(pVar3);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e7fb0();
  lVar5 = *param_3;
  if (lVar5 == local_60) {
    if (((char)param_3[1] != '\0') || (local_60 == 0)) goto LAB_004a5f24;
    if (local_58 == '\0') {
      FUN_00d50b00();
      goto LAB_004a5f1d;
    }
  }
  else {
    lVar1 = param_3[1];
    if (local_58 == '\0') {
      if (local_60 != 0) {
        FUN_00d50b00();
      }
      *param_3 = local_60;
      if (((char)lVar1 != '\0') && (lVar5 != 0)) {
        FUN_00d50b20();
      }
LAB_004a5f1d:
      local_38 = param_3 + 1;
      *(undefined1 *)local_38 = 1;
LAB_004a5f24:
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      goto LAB_004a5f38;
    }
    *param_3 = local_60;
    if (((char)lVar1 != '\0') && (lVar5 != 0)) {
      FUN_00d50b20();
    }
  }
  local_38 = param_3 + 1;
  *(undefined1 *)local_38 = 1;
LAB_004a5f38:
  lVar5 = *this;
  if (lVar5 != 0) {
    local_48 = -1;
    while (local_48 = local_48 + 1, local_48 < *(int *)(lVar5 + 0xc)) {
      pVar3 = (pthread_key_t)*(undefined8 *)(lVar5 + 0x10);
      pvVar2 = _pthread_getspecific(pVar3);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0125e930();
      pvVar2 = _pthread_getspecific(pVar3);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0152ebe0();
      if (local_78 == '\0') {
        if (local_80 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_78 = '\0';
      }
      if ((local_d8 != '\0') && (local_e0 != 0)) {
        FUN_00d50b20();
      }
      pvVar2 = _pthread_getspecific(pVar3);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0150d560();
      pvVar2 = _pthread_getspecific(pVar3);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0150d3a0();
      if (local_80 != 0) {
        FUN_00d50b20();
      }
    }
    FUN_001159b0();
    pVar3 = (pthread_key_t)lVar5;
  }
  pvVar2 = _pthread_getspecific(pVar3);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e6fe0();
  pvVar2 = _pthread_getspecific(pVar3);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e6c30();
  FUN_01298d30();
  return;
}




// ==================================================
// @01395870 (1424 bytes) — calculation

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  void *pvVar5;
  longlong this;
  longlong **pplVar6;
  undefined4 uVar7;
  longlong local_b0;
  char local_a8;
  longlong *local_a0;
  char local_98;
  longlong *local_90;
  char local_88;
  longlong *local_80;
  char local_78;
  longlong *local_70;
  char local_68;
  longlong *local_60;
  char local_58;
  longlong *local_50;
  char local_48;
  longlong *local_40;
  char local_38;
  
  if (*(longlong *)(this + 0x48) == 0) {
    return;
  }
  (**(code **)(*DAT_028acd10 + 0x368))();
  uVar7 = FUN_01394a40();
  plVar1 = local_50;
  local_b0 = DAT_027bf478;
  if (DAT_027bf478 != 0) {
    uVar7 = FUN_00d50b00();
  }
  local_a8 = '\x01';
  pplVar6 = &local_40;
  (**(code **)(*plVar1 + 0x400))(uVar7,&local_b0);
  plVar1 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != (longlong *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
       (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_a8 != '\0') && (local_b0 != 0)) {
    FUN_00d50b20();
  }
  if (local_48 != '\0') {
    FUN_00d50b20();
  }
  plVar4 = (longlong *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar4 + 0x18))();
  plVar4 = *(longlong **)(this + 0x38);
  local_40 = plVar4;
  local_38 = '\0';
  if ((DAT_026fdd70 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
    _DAT_026e3238 = FUN_00115af0();
    DAT_026e3220 = "MUAudioFileSource";
    _DAT_026e3228 = 0xa0;
    param_1 = 0x136df0;
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
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x360))();
    cVar2 = FUN_00e85ea0();
    if (cVar2 != '\0') goto LAB_0139598d;
  }
  pplVar6 = (longlong **)&DAT_02802688;
LAB_0139598d:
  plVar4 = *pplVar6;
  if (*(char *)(pplVar6 + 1) == '\0') {
    if (plVar4 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar6 + 1) = 0;
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar4 != (longlong *)0x0) {
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0123abe0();
    uVar7 = (**(code **)(*local_80 + 0x3c0))();
    local_90 = local_50;
    local_88 = 0;
    plVar4 = DAT_027bf468;
    if (local_48 == '\0') {
      if (local_50 != (longlong *)0x0) {
        uVar7 = FUN_00d50b00();
        plVar4 = DAT_027bf468;
      }
    }
    else {
      local_48 = '\0';
    }
    local_88 = '\x01';
    DAT_027bf468 = plVar4;
    if (plVar4 != (longlong *)0x0) {
      local_88 = '\x01';
      uVar7 = FUN_00d50b00();
    }
    local_38 = '\0';
    local_40 = plVar4;
    FUN_00ca0840(uVar7,&local_40);
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar4 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  uVar7 = FUN_00c94880();
  local_70 = local_50;
  local_68 = 0;
  plVar4 = DAT_027bf440;
  if (local_48 == '\0') {
    if (local_50 != (longlong *)0x0) {
      uVar7 = FUN_00d50b00();
      plVar4 = DAT_027bf440;
    }
  }
  else {
    local_48 = '\0';
  }
  local_68 = '\x01';
  DAT_027bf440 = plVar4;
  if (plVar4 != (longlong *)0x0) {
    local_68 = '\x01';
    uVar7 = FUN_00d50b00();
  }
  local_38 = '\0';
  local_40 = plVar4;
  FUN_00ca0840(uVar7,&local_40);
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar4 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(*plVar1 + 0x3f0))();
  (**(code **)(*local_80 + 0x3b0))();
  uVar7 = FUN_00d468f0();
  local_60 = local_50;
  local_58 = 0;
  plVar4 = DAT_027bf448;
  if (local_48 == '\0') {
    if (local_50 != (longlong *)0x0) {
      uVar7 = FUN_00d50b00();
      plVar4 = DAT_027bf448;
    }
  }
  else {
    local_48 = '\0';
  }
  local_58 = '\x01';
  DAT_027bf448 = plVar4;
  if (plVar4 != (longlong *)0x0) {
    local_58 = '\x01';
    uVar7 = FUN_00d50b00();
  }
  local_38 = '\0';
  local_40 = plVar4;
  FUN_00ca0840(uVar7,&local_40);
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar4 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00ca5c10();
  local_a0 = plVar1;
  local_98 = '\0';
  FUN_00c91c80();
  if ((local_98 != '\0') && (local_a0 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(*DAT_028acd10 + 0x378))();
  FUN_00d50b20();
  FUN_00d50b20();
  return;
}




// ==================================================
// @00537dc0 (1418 bytes) — calculation

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  bool bVar4;
  byte bVar5;
  char cVar6;
  ulonglong uVar7;
  longlong *arg1;
  longlong *this;
  longlong *plVar8;
  double dVar9;
  undefined8 uVar10;
  longlong local_60;
  char local_58;
  undefined8 local_50;
  longlong *local_40;
  char local_38;
  
  lVar3 = DAT_026f6fd0;
  if (DAT_026f6fd0 != 0) {
    FUN_00d50b00();
  }
  dVar9 = (double)FUN_00e7d6f0();
  uVar7 = (ulonglong)(dVar9 * DAT_023907c0);
  dVar9 = dVar9 * DAT_023907c0 - _DAT_023907c8;
  uVar10 = FUN_0071a120();
  if ((local_38 == '\0') && (local_40 != (longlong *)0x0)) {
    uVar10 = FUN_00d50b00();
  }
  bVar5 = (byte)(((longlong)dVar9 & (longlong)uVar7 >> 0x3f | uVar7) / 3);
  local_60 = lVar3;
  local_58 = '\0';
  FUN_000175c0(uVar10,&local_60);
  if (local_38 == '\0') {
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if (local_40 != (longlong *)0x0) {
    local_38 = '\0';
    bVar5 = FUN_00c70bc0();
    FUN_00d50b20();
  }
  FUN_00d50b20();
  if ((local_40 != (longlong *)0x0 & bVar5) == 0) {
    cVar6 = *(char *)((longlong)this + 0x35a);
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    if (cVar6 == '\0') goto LAB_00537f8b;
    uVar10 = FUN_0051be00();
    if (local_40 == (longlong *)0x0) {
      local_50 = 0;
    }
    else {
      local_50 = CONCAT71((int7)((ulonglong)uVar10 >> 8),1);
      if (local_38 == '\0') {
        FUN_00d50b00();
      }
    }
  }
  else {
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
LAB_00537f8b:
    local_50 = 0;
    local_40 = (longlong *)0x0;
  }
  plVar1 = (longlong *)*arg1;
  FUN_00d21140();
  lVar3 = DAT_026f6fd0;
  if (DAT_026f6fd0 != 0) {
    FUN_00d50b00();
  }
  dVar9 = (double)FUN_00e7d6f0();
  uVar7 = (ulonglong)(dVar9 * DAT_023907c0);
  dVar9 = dVar9 * DAT_023907c0 - _DAT_023907c8;
  uVar10 = FUN_0071a120();
  if (plVar1 != (longlong *)0x0) {
    uVar10 = FUN_00d50b00();
  }
  bVar5 = (byte)(((longlong)dVar9 & (longlong)uVar7 >> 0x3f | uVar7) / 3);
  local_60 = lVar3;
  local_58 = '\0';
  FUN_000175c0(uVar10,&local_60);
  if (plVar1 != (longlong *)0x0) {
    FUN_00d50b00();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if (plVar1 != (longlong *)0x0) {
    bVar5 = FUN_00c70bc0();
    FUN_00d50b20();
  }
  FUN_00d50b20();
  if ((plVar1 != (longlong *)0x0 & bVar5) != 0) {
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    goto LAB_00538328;
  }
  cVar6 = *(char *)((longlong)this + 0x35a);
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  if (cVar6 == '\0') goto LAB_00538328;
  FUN_0051be00();
  if (plVar1 != (longlong *)0x0) {
    FUN_00d50b00();
  }
  if (local_40 != plVar1) {
    FUN_000ba510();
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b00();
    }
    plVar2 = (longlong *)this[0x66];
    plVar8 = plVar1;
    if (plVar1 == plVar2) {
      if (plVar1 == (longlong *)0x0) goto LAB_00538231;
LAB_00538278:
      FUN_00d50b20();
      bVar4 = true;
      plVar8 = (longlong *)0x0;
    }
    else {
      bVar4 = false;
      if ((plVar1 != (longlong *)0x0) && (bVar4 = false, plVar2 != (longlong *)0x0)) {
        FUN_00d50b00();
        cVar6 = (**(code **)(*plVar1 + 0x50))();
        if (plVar2 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        if (cVar6 != '\0') goto LAB_00538278;
LAB_00538231:
        bVar4 = false;
      }
    }
    lVar3 = this[0x65];
    if (lVar3 != 0) {
      FUN_00d50b00();
    }
    (**(code **)(*this + 0x618))(this[0x69],this[0x6a]);
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    if (!bVar4 && plVar8 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  if (plVar1 != (longlong *)0x0) {
    FUN_00d50b20();
  }
LAB_00538328:
  if (((char)local_50 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  return;
}




// ==================================================
// @0124cb30 (1399 bytes) — math_loop

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  void *pvVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong this;
  ulonglong uVar12;
  ulonglong uVar13;
  bool bVar14;
  char cVar15;
  ulonglong uVar16;
  uint local_6c;
  ulonglong local_60;
  char local_58;
  ulonglong local_48;
  ulonglong local_40;
  char local_31;
  
  lVar7 = *(longlong *)(this + 0x38);
  uVar1 = *(uint *)(lVar7 + 0xc);
  if (0 < (int)uVar1) {
    local_6c = (uint)CONCAT71((uint7)(uint3)(uVar1 >> 8),1);
    uVar10 = 0;
    local_40 = 0;
    bVar4 = false;
    uVar8 = 0;
    local_48 = 0;
    uVar9 = 0;
    uVar12 = 0;
    bVar14 = false;
    do {
      uVar11 = *(ulonglong *)(*(longlong *)(lVar7 + 0x10) + uVar10 * 8);
      pvVar6 = _pthread_getspecific((pthread_key_t)uVar8);
      if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
        uVar11 = *(ulonglong *)(uVar11 + 0x20 + (ulonglong)(*(uint *)(lVar7 + 0x154) & 1) * 8);
      }
      FUN_01327a50();
      cVar15 = (char)uVar9;
      if (local_60 == local_48) {
        if ((cVar15 == '\0') && (local_60 != 0)) {
          local_31 = '\x01';
          uVar8 = local_48;
          if (local_58 == '\0') {
            FUN_00d50b00();
            goto LAB_0124cc60;
          }
        }
        else {
joined_r0x0124cfec:
          local_31 = cVar15;
          uVar8 = local_48;
          if ((local_58 != '\0') && (local_60 != 0)) {
            FUN_00d50b20();
          }
        }
      }
      else if (local_58 == '\0') {
        if (local_60 != 0) {
          FUN_00d50b00();
        }
        local_31 = '\x01';
        uVar8 = local_60;
        if ((cVar15 != '\0') && (uVar8 = local_60, local_48 != 0)) {
          FUN_00d50b20();
          local_48 = local_60;
LAB_0124cc60:
          local_31 = '\x01';
          cVar15 = local_31;
          goto joined_r0x0124cfec;
        }
      }
      else {
        local_31 = '\x01';
        uVar8 = local_60;
        if ((cVar15 != '\0') && (uVar8 = local_60, local_48 != 0)) {
          FUN_00d50b20();
          uVar8 = local_60;
        }
      }
      local_48 = uVar8;
      uVar8 = local_48;
      if ((local_48 != 0) && (uVar2 = *(uint *)(local_48 + 0xc), 0 < (int)uVar2)) {
        uVar8 = 0;
        do {
          uVar11 = *(ulonglong *)(*(longlong *)(local_48 + 0x10) + uVar8 * 8);
          pvVar6 = _pthread_getspecific((pthread_key_t)uVar8);
          if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
            uVar11 = *(ulonglong *)(uVar11 + 0x20 + (ulonglong)(*(uint *)(lVar7 + 0x154) & 1) * 8);
          }
          FUN_013df790();
          if (local_60 == local_40) {
            if ((bVar4) || (local_60 == 0)) {
joined_r0x0124cf78:
              uVar9 = local_40;
              bVar5 = bVar4;
              if ((local_58 != '\0') && (local_60 != 0)) {
                FUN_00d50b20();
              }
            }
            else {
              uVar9 = local_40;
              bVar5 = true;
              if (local_58 == '\0') {
                FUN_00d50b00();
                goto LAB_0124cdd2;
              }
            }
          }
          else if (local_58 == '\0') {
            if (local_60 != 0) {
              FUN_00d50b00();
            }
            uVar9 = local_60;
            bVar5 = true;
            if ((bVar4) && (uVar9 = local_60, local_40 != 0)) {
              FUN_00d50b20();
              local_40 = local_60;
LAB_0124cdd2:
              bVar4 = true;
              goto joined_r0x0124cf78;
            }
          }
          else {
            bVar5 = true;
            uVar9 = local_60;
            if ((bVar4) && (uVar9 = local_60, local_40 != 0)) {
              FUN_00d50b20();
              uVar9 = local_60;
            }
          }
          bVar4 = bVar5;
          local_40 = uVar9;
          if ((local_40 != 0) && (uVar3 = *(uint *)(local_40 + 0xc), 0 < (int)uVar3)) {
            uVar16 = 0;
            uVar9 = local_40;
            uVar13 = uVar12;
            do {
              pvVar6 = _pthread_getspecific((pthread_key_t)uVar9);
              if (pvVar6 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_013dd790();
              if (local_60 == uVar13) {
                if ((bVar14) || (local_60 == 0)) {
joined_r0x0124cf09:
                  uVar12 = uVar13;
                  bVar5 = bVar14;
                  if ((local_58 != '\0') && (local_60 != 0)) {
                    FUN_00d50b20();
                  }
                }
                else {
                  uVar12 = uVar13;
                  bVar5 = true;
                  if (local_58 == '\0') {
                    FUN_00d50b00();
                    goto LAB_0124cef5;
                  }
                }
              }
              else {
                uVar12 = local_60;
                if (local_58 == '\0') {
                  if (local_60 != 0) {
                    FUN_00d50b00();
                  }
                  bVar5 = true;
                  if ((bVar14) && (uVar13 != 0)) {
                    FUN_00d50b20();
                    uVar13 = local_60;
LAB_0124cef5:
                    bVar14 = true;
                    goto joined_r0x0124cf09;
                  }
                }
                else {
                  bVar5 = true;
                  if ((bVar14) && (uVar13 != 0)) {
                    FUN_00d50b20();
                  }
                }
              }
              bVar14 = bVar5;
              if ((uVar12 != 0) && (*(int *)(uVar12 + 0xc) != 0)) {
                uVar9 = (ulonglong)local_6c;
                goto LAB_0124d08e;
              }
              uVar16 = uVar16 + 1;
              uVar11 = local_60;
              uVar13 = uVar12;
            } while (uVar3 != uVar16);
          }
          uVar8 = uVar8 + 1;
        } while (uVar8 != uVar2);
      }
      uVar10 = uVar10 + 1;
      uVar9 = CONCAT71((int7)(uVar11 >> 8),uVar10 < uVar1);
      if (uVar10 == uVar1) goto LAB_0124d08e;
      local_6c = (uint)uVar9;
      lVar7 = *(longlong *)(this + 0x38);
      uVar8 = CONCAT71((int7)(uVar8 >> 8),local_31);
      uVar9 = uVar8 & 0xffffffff;
    } while( true );
  }
  uVar9 = 0;
LAB_0124d0cf:
  return uVar9 & 0xffffff01;
LAB_0124d08e:
  if ((bVar14) && (uVar12 != 0)) {
    FUN_00d50b20();
  }
  if ((local_31 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if ((bVar4) && (local_40 != 0)) {
    FUN_00d50b20();
  }
  goto LAB_0124d0cf;
}




// ==================================================
// @012cb710 (1372 bytes) — math_loop

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  void *pvVar4;
  longlong *plVar5;
  pthread_key_t pVar6;
  code *pcVar7;
  int iVar8;
  longlong arg1;
  undefined8 *this;
  longlong *plVar9;
  longlong **pplVar10;
  longlong local_a8;
  char local_a0;
  longlong *local_70;
  char local_68;
  longlong local_60;
  undefined8 local_58;
  int local_50;
  longlong *local_48;
  char local_40;
  longlong *local_38;
  
  local_38 = param_2;
  if (*param_2 == 0) {
    *(undefined1 *)(this + 1) = 0;
    *this = 0;
  }
  else {
    if (*(longlong *)(arg1 + 0x48) == 0) {
      bVar1 = false;
      plVar9 = (longlong *)0x0;
    }
    else {
      local_68 = '\0';
      local_70 = (longlong *)0x0;
      local_60 = *(longlong *)(arg1 + 0x48);
      local_58 = 0xffffffff;
      local_50 = 0;
      bVar1 = false;
      plVar9 = (longlong *)0x0;
      local_58._4_4_ = 0;
      while( true ) {
        if (local_58._4_4_ != 0) {
          if (local_58._4_4_ < 1) {
            iVar8 = -local_58._4_4_;
          }
          else {
            iVar8 = (int)local_58 - local_58._4_4_;
            local_58 = CONCAT44(local_58._4_4_,iVar8);
            FUN_00d23690();
            local_50 = local_50 + local_58._4_4_;
            iVar8 = 0;
          }
          local_58 = CONCAT44(iVar8,(int)local_58);
        }
        lVar3 = (longlong)(int)local_58;
        iVar8 = (int)local_58 + 1;
        local_58 = CONCAT44(local_58._4_4_,iVar8);
        if (*(int *)(local_60 + 0xc) <= iVar8) break;
        pcVar7 = *(code **)(local_60 + 0x10);
        plVar5 = *(longlong **)(pcVar7 + lVar3 * 8 + 8);
        local_70 = plVar5;
        if ((DAT_026fdd70 == '\0') && (iVar8 = ___cxa_guard_acquire(), iVar8 != 0)) {
          _DAT_026e3238 = FUN_00115af0();
          DAT_026e3220 = "MUAudioFileSource";
          _DAT_026e3228 = 0xa0;
          pcVar7 = FUN_00136df0;
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
        pVar6 = (pthread_key_t)pcVar7;
        pplVar10 = (longlong **)&DAT_02802688;
        if (plVar5 != (longlong *)0x0) {
          (**(code **)(*plVar5 + 0x360))();
          cVar2 = FUN_00e85ea0();
          pplVar10 = &local_70;
          if (cVar2 == '\0') {
            pplVar10 = (longlong **)&DAT_02802688;
          }
        }
        plVar5 = *pplVar10;
        if (plVar5 == plVar9) {
          if ((!bVar1) && (plVar5 != (longlong *)0x0)) {
            plVar5 = plVar9;
            if (*(char *)(pplVar10 + 1) != '\0') goto LAB_012cb865;
            bVar1 = true;
            FUN_00d50b00();
          }
        }
        else {
          if (*(char *)(pplVar10 + 1) == '\0') {
            if (plVar5 != (longlong *)0x0) {
              FUN_00d50b00();
            }
            if ((bVar1) && (plVar9 != (longlong *)0x0)) {
              FUN_00d50b20();
              plVar9 = plVar5;
              bVar1 = true;
              goto LAB_012cb8c0;
            }
          }
          else {
            if ((bVar1) && (plVar9 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
LAB_012cb865:
            *(undefined1 *)(pplVar10 + 1) = 0;
          }
          plVar9 = plVar5;
          bVar1 = true;
        }
LAB_012cb8c0:
        if (plVar9 != (longlong *)0x0) {
          pvVar4 = _pthread_getspecific(pVar6);
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0123b100();
          lVar3 = *local_38;
          if ((local_a0 != '\0') && (local_a8 != 0)) {
            FUN_00d50b20();
          }
          if (local_a8 == lVar3) {
            *(undefined1 *)(this + 1) = 0;
            if (!bVar1) {
              FUN_00d50b00();
            }
            *this = plVar9;
            *(undefined1 *)(this + 1) = 1;
            FUN_00115e00();
            return this;
          }
        }
      }
      FUN_00115e00();
    }
    plVar5 = (longlong *)FUN_00e8fc40();
    FUN_00115cd0();
    pVar6 = 0x25ccea8;
    *plVar5 = (longlong)&DAT_025ccea8;
    plVar5[0x13] = 0;
    plVar5[0xd] = 0;
    plVar5[0xe] = 0;
    plVar5[0xf] = 0;
    plVar5[0x10] = 0;
    *(undefined8 *)((longlong)plVar5 + 0x84) = 0;
    *(undefined8 *)((longlong)plVar5 + 0x8c) = 0;
    (*DAT_025ccec0)();
    if (plVar5 == plVar9) {
      plVar5 = plVar9;
      if (bVar1) {
        FUN_00d50b20();
      }
    }
    else if ((bVar1) && (plVar9 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    pvVar4 = _pthread_getspecific(pVar6);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0123b010();
    pvVar4 = _pthread_getspecific(pVar6);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_00b88600();
    local_48 = local_70;
    local_40 = 0;
    if (local_68 == '\0') {
      if (local_70 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_68 = '\0';
    }
    local_40 = '\x01';
    FUN_0123ab70();
    if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    pvVar4 = _pthread_getspecific(pVar6);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0123af90();
    pvVar4 = _pthread_getspecific(pVar6);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_00b7a710();
    FUN_0123afd0();
    FUN_012cb4b0();
    pvVar4 = _pthread_getspecific(pVar6);
    plVar9 = plVar5;
    if ((pvVar4 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
      plVar9 = (longlong *)plVar5[(ulonglong)(*(uint *)(lVar3 + 0x154) & 1) + 4];
    }
    (**(code **)(*plVar9 + 0x3d0))();
    *this = plVar5;
    *(undefined1 *)(this + 1) = 1;
  }
  return this;
}




// ==================================================
// @002cae80 (1341 bytes) — calculation

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  void *pvVar4;
  longlong lVar5;
  longlong this;
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
  longlong *local_a8;
  char local_a0;
  longlong *local_98;
  char local_90;
  longlong *local_88;
  char local_80;
  longlong local_78;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  (**(code **)(**(longlong **)(this + 0xf0) + 0x498))();
  if (local_38 == '\0') {
    if (local_40 == 0) {
      return;
    }
    FUN_00d50b00();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else if (local_40 == 0) {
    return;
  }
  FUN_000be210();
  lVar3 = FUN_00e86210();
  if (lVar3 != 0) {
    FUN_00d50b00();
  }
  lVar2 = DAT_026fce90;
  if (DAT_026fce90 != 0) {
    FUN_00d50b00();
  }
  FUN_00c841b0();
  local_78 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  plVar1 = (longlong *)(this + 0xd0);
  local_a0 = 0;
  (**(code **)(*(longlong *)(this + 0xd0) + 0x10))();
  FUN_00d50b00();
  local_a0 = '\x01';
  local_a8 = plVar1;
  (**(code **)(**(longlong **)(this + 0xf0) + 0x628))();
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_004a1110();
  lVar2 = local_78;
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01313ad0();
  local_50 = local_40;
  local_48 = 0;
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  local_48 = '\x01';
  local_d8 = lVar2;
  local_d0 = '\0';
  FUN_00cbad30(&local_d8,&local_50,0xa0);
  if ((local_d0 != '\0') && (local_d8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_f0 != '\0') && (local_f8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_e0 != '\0') && (local_e8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_a0 != '\0') && (local_a8 != (longlong *)0x0)) {
    (**(code **)(*local_a8 + 0x10))();
    FUN_00d50b20();
  }
  local_90 = 0;
  (**(code **)(*plVar1 + 0x10))();
  FUN_00d50b00();
  local_90 = '\x01';
  local_c8 = 0;
  local_c0 = '\0';
  local_98 = plVar1;
  FUN_000823a0();
  lVar5 = FUN_00e85ef0();
  if (lVar5 == 0) {
    lVar5 = FUN_00e858c0();
    if ((lVar5 == 0) || (lVar5 = *(longlong *)(lVar5 + 0x28), lVar5 == 0)) goto LAB_002cb208;
LAB_002cb1fa:
    local_68 = 0;
    FUN_00d50b00();
  }
  else {
    lVar5 = *(longlong *)(lVar5 + 0x30);
    if (lVar5 != 0) goto LAB_002cb1fa;
LAB_002cb208:
    lVar5 = 0;
  }
  local_68 = '\x01';
  local_70 = lVar5;
  FUN_00cbad30(&local_70,&local_c8,0xa0);
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if ((local_c0 != '\0') && (local_c8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_90 != '\0') && (local_98 != (longlong *)0x0)) {
    (**(code **)(*local_98 + 0x10))();
    FUN_00d50b20();
  }
  local_80 = 0;
  (**(code **)(*plVar1 + 0x10))();
  FUN_00d50b00();
  local_80 = '\x01';
  local_b8 = 0;
  local_b0 = '\0';
  local_88 = plVar1;
  FUN_000823a0();
  lVar5 = FUN_00e85ef0();
  if (lVar5 == 0) {
    lVar5 = FUN_00e858c0();
    if (lVar5 != 0) {
      lVar5 = *(longlong *)(lVar5 + 0x28);
      goto joined_r0x002cb307;
    }
  }
  else {
    lVar5 = *(longlong *)(lVar5 + 0x30);
joined_r0x002cb307:
    if (lVar5 != 0) {
      local_58 = 0;
      FUN_00d50b00();
      goto LAB_002cb319;
    }
  }
  lVar5 = 0;
LAB_002cb319:
  local_58 = '\x01';
  local_60 = lVar5;
  FUN_00cbad30(&local_60,&local_b8,0xa0);
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if ((local_b0 != '\0') && (local_b8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_80 != '\0') && (local_88 != (longlong *)0x0)) {
    (**(code **)(*local_88 + 0x10))();
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}




// ==================================================
// @015f66f0 (1316 bytes) — calculation

{
  double dVar1;
  bool bVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  void *pvVar8;
  longlong lVar9;
  pthread_key_t pVar10;
  uint uVar11;
  longlong *plVar12;
  longlong *arg1;
  longlong *this;
  undefined4 uVar13;
  undefined1 auVar14 [16];
  longlong local_88;
  char local_80;
  longlong local_78;
  char local_70;
  longlong local_68;
  char local_60;
  longlong local_58;
  longlong local_50;
  longlong local_48;
  char local_40;
  char local_31;
  
  plVar12 = (longlong *)*arg1;
  if ((DAT_026fdd70 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
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
  if (plVar12 == (longlong *)0x0) {
LAB_015f673f:
    plVar12 = &DAT_02802688;
  }
  else {
    (**(code **)(*plVar12 + 0x360))();
    cVar4 = FUN_00e85ea0();
    plVar12 = arg1;
    if (cVar4 == '\0') goto LAB_015f673f;
  }
  local_31 = (char)plVar12[1];
  if ((local_31 == '\0') || (*plVar12 == 0)) {
    if (*plVar12 != 0) goto LAB_015f676b;
    local_40 = '\0';
    local_48 = 0;
    bVar2 = true;
LAB_015f6a9c:
    *(undefined1 *)(this + 1) = 0;
    *this = 0;
    goto joined_r0x015f6aad;
  }
  FUN_00d50b00();
LAB_015f676b:
  pVar10 = (pthread_key_t)plVar12;
  pvVar8 = _pthread_getspecific(pVar10);
  if (pvVar8 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0123b100();
  lVar9 = local_48;
  if (local_40 == '\0') {
    if (local_48 == 0) goto LAB_015f6a57;
    FUN_00d50b00();
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
  }
  else if (local_48 == 0) {
LAB_015f6a57:
    bVar2 = false;
    goto LAB_015f6a9c;
  }
  local_58 = lVar9;
  uVar13 = FUN_00b88640();
  local_78 = DAT_02765240;
  if (DAT_02765240 != 0) {
    uVar13 = FUN_00d50b00();
  }
  local_70 = '\x01';
  uVar13 = FUN_000175c0(uVar13,&local_78);
  local_50 = local_48;
  if (local_40 == '\0') {
    if (((local_48 != 0) && (uVar13 = FUN_00d50b00(), local_40 != '\0')) && (local_48 != 0)) {
      uVar13 = FUN_00d50b20();
    }
  }
  else {
    local_40 = '\0';
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    uVar13 = FUN_00d50b20();
  }
  if ((local_80 != '\0') && (local_88 != 0)) {
    uVar13 = FUN_00d50b20();
  }
  lVar9 = DAT_027656f0;
  if (local_50 == 0) {
LAB_015f6ac6:
    *(undefined1 *)(this + 1) = 0;
    *this = 0;
  }
  else {
    if (DAT_027656f0 != 0) {
      uVar13 = FUN_00d50b00();
    }
    lVar3 = local_50;
    local_68 = lVar9;
    local_60 = '\x01';
    FUN_000175c0(uVar13,&local_68);
    lVar9 = local_48;
    if (local_40 == '\0') {
      if (((local_48 != 0) && (FUN_00d50b00(), local_40 != '\0')) && (local_48 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_40 = '\0';
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if (lVar9 == 0) {
LAB_015f6abd:
      FUN_00d50b20();
      goto LAB_015f6ac6;
    }
    cVar4 = FUN_00bc0dc0();
    if ((cVar4 == '\0') || (iVar5 = FUN_00bc0db0(), iVar5 < 1)) {
LAB_015f6ab1:
      FUN_00d50b20();
      goto LAB_015f6abd;
    }
    plVar12 = (longlong *)*arg1;
    pvVar8 = _pthread_getspecific(pVar10);
    if (pvVar8 != (void *)0x0) {
      plVar12 = (longlong *)*arg1;
      lVar9 = FUN_00e8b990();
      if (lVar9 != 0) {
        plVar12 = (longlong *)plVar12[(ulonglong)(*(uint *)(lVar9 + 0x154) & 1) + 4];
      }
    }
    dVar1 = (double)(**(code **)(*plVar12 + 0x398))();
    iVar5 = FUN_00bc0db0();
    iVar6 = FUN_00bc0d90();
    iVar7 = FUN_00bc0da0();
    dVar1 = DAT_023b4df8 / (dVar1 / (double)iVar5);
    uVar11 = iVar7 - 1;
    pVar10 = CONCAT31((int3)(uVar11 >> 8),uVar11 < 2);
    auVar14._0_4_ = -(uint)(iVar7 == _DAT_02411230);
    auVar14._4_4_ = -(uint)(iVar7 == _UNK_02411234);
    auVar14._8_4_ = -(uint)(iVar7 == _UNK_02411238);
    auVar14._12_4_ = -(uint)(iVar7 == _UNK_0241123c);
    iVar5 = movmskps((int)lVar3,auVar14);
    if ((((dVar1 < DAT_023908b8) || (_DAT_024111b8 < dVar1)) || (iVar6 < 1)) ||
       ((iVar7 * 8 < iVar6 || (iVar5 == 0 && (iVar7 != 4 && uVar11 >= 2))))) goto LAB_015f6ab1;
    FUN_016c0b50(pVar10,iVar7);
    lVar9 = local_48;
    if (((local_40 == '\0') && (local_48 != 0)) &&
       ((FUN_00d50b00(), local_40 != '\0' && (local_48 != 0)))) {
      FUN_00d50b20();
    }
    pvVar8 = _pthread_getspecific(pVar10);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_016c1150();
    *this = lVar9;
    *(undefined1 *)(this + 1) = 1;
    FUN_00d50b20();
    FUN_00d50b20();
  }
  FUN_00d50b20();
  bVar2 = false;
joined_r0x015f6aad:
  if ((local_31 != '\0') && (!bVar2)) {
    FUN_00d50b20();
  }
  return;
}




// ==================================================
// @01394200 (1307 bytes) — calculation

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  undefined8 *arg1;
  undefined8 *this;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  longlong local_58;
  char local_50;
  longlong local_48;
  
  lVar1 = DAT_027bf438;
  if (DAT_027bf438 != 0) {
    FUN_00d50b00();
  }
  (**(code **)(*(longlong *)*this + 0x88))();
  if (local_50 == '\0') {
    if (local_58 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_50 = '\0';
  }
  (**(code **)(*(longlong *)*arg1 + 0x88))();
  if (local_50 == '\0') {
    if (local_58 != 0) {
      FUN_00d50b00(local_58);
    }
  }
  else {
    local_50 = '\0';
  }
  lVar5 = local_58;
  if (local_58 == 0) {
    local_48 = 0;
    lVar4 = DAT_027bf440;
joined_r0x0139445d:
    DAT_027bf440 = lVar4;
    if (lVar4 != 0) {
      FUN_00d50b00();
    }
    if (lVar1 == lVar4) {
      lVar4 = lVar1;
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
    }
    else if (lVar1 != 0) {
      FUN_00d50b20();
    }
    (**(code **)(*(longlong *)*this + 0x88))();
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    (**(code **)(*(longlong *)*arg1 + 0x88))();
    if (local_58 == local_48) {
LAB_013945f7:
      bVar6 = local_50 == '\0';
joined_r0x013945fb:
      lVar5 = local_48;
      if ((!bVar6) && (local_58 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      if (local_50 == '\0') {
        if (local_58 != 0) {
          FUN_00d50b00();
        }
        if (local_48 != 0) {
          FUN_00d50b20();
          local_48 = local_58;
          goto LAB_013945f7;
        }
        bVar6 = true;
        local_48 = local_58;
        goto joined_r0x013945fb;
      }
      if (local_48 != 0) {
        FUN_00d50b20();
      }
    }
    if (local_58 == 0) {
      local_58 = 0;
      iVar3 = 0;
      lVar1 = lVar4;
joined_r0x01394370:
      lVar4 = lVar1;
      if (lVar5 != 0) goto LAB_013946a3;
      goto LAB_013946a8;
    }
    if (lVar5 != 0) {
      iVar3 = FUN_00e8b280();
LAB_013946a3:
      FUN_00d50b20();
      goto LAB_013946a8;
    }
    iVar3 = 0;
  }
  else {
    if (local_58 != 0) {
      iVar3 = FUN_00e8b280();
      local_48 = local_58;
      lVar4 = DAT_027bf440;
      if (iVar3 == 0) goto joined_r0x0139445d;
      goto joined_r0x01394370;
    }
    cVar2 = FUN_00d45ad0();
    if (cVar2 == '\0') {
      local_48 = 0;
      lVar4 = DAT_027bf440;
      goto joined_r0x0139445d;
    }
    iVar3 = -1;
    lVar4 = lVar1;
LAB_013946a8:
    if (local_58 == 0) goto LAB_013946b5;
  }
  FUN_00d50b20();
LAB_013946b5:
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  return iVar3;
}




// ==================================================
// @01393860 (1296 bytes) — calculation

{
  bool bVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int iVar5;
  void *pvVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  longlong arg1;
  undefined8 this;
  longlong local_e8;
  longlong local_e0;
  longlong local_d8;
  char local_d0;
  longlong local_c8;
  char local_c0;
  longlong local_b0;
  char local_a8;
  undefined8 *local_a0;
  char local_98;
  longlong local_90;
  char local_88;
  undefined8 *local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  undefined8 *local_40;
  char local_38;
  
  puVar10 = DAT_027bf428;
  plVar8 = *(longlong **)(arg1 + 0x38);
  if (plVar8 == (longlong *)0x0) {
    if (DAT_027bf428 != (undefined8 *)0x0) {
      FUN_00d50b00();
    }
LAB_0139390f:
    local_78 = '\0';
  }
  else {
    pvVar6 = _pthread_getspecific(param_1);
    if (pvVar6 != (void *)0x0) {
      plVar8 = *(longlong **)(arg1 + 0x38);
      lVar7 = FUN_00e8b990();
      if (lVar7 != 0) {
        plVar8 = (longlong *)plVar8[(ulonglong)(*(uint *)(lVar7 + 0x154) & 1) + 4];
      }
    }
    (**(code **)(*plVar8 + 0x3a8))();
    puVar10 = local_80;
    if (local_78 != '\0') goto LAB_0139390f;
    if (local_80 == (undefined8 *)0x0) {
      puVar10 = (undefined8 *)0x0;
    }
    else {
      FUN_00d50b00();
      if ((local_78 != '\0') && (local_80 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  FUN_00d9bb60();
  puVar2 = local_80;
  if ((((local_78 == '\0') && (local_80 != (undefined8 *)0x0)) && (FUN_00d50b00(), local_78 != '\0')
      ) && (local_80 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d93140();
  FUN_00d93100();
  FUN_00d93180();
  local_e8 = local_d8;
  local_e0 = local_c8;
  FUN_002bd7b0(&local_e0,&local_e8,3);
  FUN_00d8cb40();
  puVar3 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != (undefined8 *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
       (local_40 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  local_80 = (undefined8 *)&DAT_025df260;
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  local_80 = (undefined8 *)&DAT_0253d630;
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  local_80 = &DAT_024c5048;
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if ((local_c0 != '\0') && (local_c8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_d0 != '\0') && (local_d8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_98 != '\0') && (local_a0 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  if (puVar10 != (undefined8 *)0x0) {
    local_b0 = (longlong)puVar3;
    local_a8 = '\0';
    FUN_00d8ede0();
    local_90 = (longlong)local_40;
    local_88 = 0;
    if (local_38 == '\0') {
      if (local_40 != (undefined8 *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_88 = '\x01';
    FUN_00d997b0(&local_90,&local_b0);
    puVar9 = local_80;
    puVar4 = puVar10;
    if (puVar10 == local_80) {
joined_r0x01393b58:
      puVar9 = puVar4;
      if ((local_78 != '\0') && (puVar10 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      if (local_78 == '\0') {
        if (local_80 != (undefined8 *)0x0) {
          FUN_00d50b00();
        }
        FUN_00d50b20();
        puVar4 = puVar9;
        puVar10 = local_80;
        goto joined_r0x01393b58;
      }
      FUN_00d50b20();
      local_78 = '\0';
    }
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
    puVar10 = puVar9;
    if ((local_a8 != '\0') && (local_b0 != 0)) {
      FUN_00d50b20();
    }
  }
  bVar1 = true;
  if (puVar10 == (undefined8 *)0x0) {
LAB_01393c66:
    puVar10 = (undefined8 *)0x0;
    if (DAT_027294c0 == (undefined8 *)0x0) goto LAB_01393c97;
LAB_01393c74:
    puVar9 = DAT_027294c0;
    FUN_00d50b00();
    if (puVar10 == puVar9) {
      FUN_00d50b20();
      puVar9 = puVar10;
      goto LAB_01393cb7;
    }
    if (bVar1) goto LAB_01393cb7;
  }
  else {
    iVar5 = FUN_00d8c7a0();
    if (0x20 < iVar5) {
      FUN_00d97ce0();
      if (local_80 == puVar10) {
LAB_01393c3d:
        if ((local_78 != '\0') && (local_80 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        puVar10 = local_80;
        if (local_78 == '\0') {
          if (local_80 != (undefined8 *)0x0) {
            FUN_00d50b00();
          }
          FUN_00d50b20();
          goto LAB_01393c3d;
        }
        FUN_00d50b20();
      }
      if (puVar10 == (undefined8 *)0x0) goto LAB_01393c66;
    }
    iVar5 = FUN_00d8c7a0();
    puVar9 = puVar10;
    if (iVar5 != 0) goto LAB_01393cb7;
    bVar1 = false;
    if (DAT_027294c0 != (undefined8 *)0x0) goto LAB_01393c74;
LAB_01393c97:
    puVar9 = DAT_027294c0;
    if ((bool)(puVar10 == DAT_027294c0 | bVar1)) goto LAB_01393cb7;
  }
  FUN_00d50b20();
LAB_01393cb7:
  local_a0 = puVar2;
  local_40 = puVar9;
  FUN_00083ea0(2,&local_a0);
  FUN_00d8cb40();
  local_80 = (undefined8 *)&DAT_0253d630;
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  local_80 = &DAT_024c5048;
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if (puVar3 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  if (puVar2 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  if (puVar9 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  return this;
}




// ==================================================
// @00762a70 (1289 bytes) — calculation

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  char cVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  longlong *plVar9;
  undefined8 *arg1;
  longlong *this;
  longlong local_100;
  longlong local_e0;
  char local_d8;
  longlong local_d0;
  char local_c8;
  longlong *local_c0;
  char local_b8;
  longlong *local_b0;
  char local_a8;
  longlong *local_a0;
  longlong local_98;
  longlong local_90;
  char local_88;
  undefined8 local_80;
  longlong *local_78;
  char local_70 [8];
  longlong local_68;
  char local_60;
  longlong local_58;
  char local_50;
  longlong *local_48;
  longlong local_40;
  char local_38;
  
  (**(code **)(*(longlong *)*arg1 + 0x370))();
  plVar4 = local_78;
  FUN_017a52b0();
  local_90 = local_40;
  local_88 = 0;
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  local_88 = '\x01';
  cVar6 = (**(code **)(*plVar4 + 0x50))();
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_70[0] != '\0') && (local_78 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar6 == '\0') {
    return 0;
  }
  (**(code **)(*this + 0x628))();
  plVar4 = local_78;
  if ((local_70[0] != '\0') && (local_78 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar4 == (longlong *)0x0) {
    return 0;
  }
  (**(code **)(*this + 0x610))();
  FUN_00d23310();
  plVar4 = local_78;
  plVar9 = &local_98;
  if (local_70[0] != '\0') {
    plVar9 = (longlong *)local_70;
  }
  local_98 = CONCAT71(local_98._1_7_,local_70[0]);
  *(char *)plVar9 = '\0';
  if ((local_70[0] != '\0') && (plVar4 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_98 == '\0') && (plVar4 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  bVar2 = true;
  local_a0 = plVar4;
  if (plVar4 != (longlong *)0x0) {
    FUN_01e561b0();
    local_48 = local_78;
    if (local_78 != (longlong *)0x0) {
      if (((local_70[0] == '\0') && (FUN_00d50b00(), local_70[0] != '\0')) &&
         (local_78 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      lVar1 = this[0xd];
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      lVar3 = DAT_02729550;
      if (DAT_02729550 != 0) {
        FUN_00d50b00();
      }
      local_100 = lVar3;
      local_98 = lVar1;
      FUN_00083ea0(2,&local_100);
      FUN_000b4da0();
      lVar5 = local_40;
      if (local_38 == '\0') {
        if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_38 = '\0';
      }
      local_78 = (longlong *)&DAT_0253d630;
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      local_78 = &DAT_024c5048;
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = DAT_026f6f70;
      if (DAT_026f6f70 != 0) {
        FUN_00d50b00();
      }
      lVar3 = DAT_02729558;
      if (DAT_02729558 != 0) {
        FUN_00d50b00();
      }
      local_e0 = lVar3;
      local_d8 = '\x01';
      local_d0 = lVar5;
      local_c8 = '\0';
      FUN_00d31230(&local_d0,&local_e0);
      plVar4 = local_78;
      if (local_70[0] == '\0') {
        if (((local_78 != (longlong *)0x0) && (FUN_00d50b00(), local_70[0] != '\0')) &&
           (local_78 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_70[0] = '\0';
      }
      if ((local_c8 != '\0') && (local_d0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_d8 != '\0') && (local_e0 != 0)) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      local_c0 = plVar4;
      local_b8 = '\0';
      local_b0 = local_48;
      local_a8 = '\0';
      uVar8 = FUN_00172950();
      if ((local_a8 != '\0') && (local_b0 != (longlong *)0x0)) {
        uVar8 = FUN_00d50b20();
      }
      if ((local_b8 != '\0') && (local_c0 != (longlong *)0x0)) {
        uVar8 = FUN_00d50b20();
      }
      if (plVar4 != (longlong *)0x0) {
        uVar8 = FUN_00d50b20();
      }
      local_80 = CONCAT71((int7)((ulonglong)uVar8 >> 8),1);
      if (lVar5 != 0) {
        FUN_00d50b20();
      }
      bVar2 = false;
      goto LAB_00762e85;
    }
  }
  local_48 = (longlong *)0x0;
  local_80 = 0;
LAB_00762e85:
  FUN_00763390();
  uVar7 = FUN_00760600();
  lVar1 = this[0xe];
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  FUN_00324fe0();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if (!bVar2) {
    FUN_00172bc0();
  }
  if (local_a0 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (!bVar2) {
    FUN_00d50b20();
    return uVar7;
  }
  return uVar7;
}




// ==================================================
// @0124d6c0 (1274 bytes) — calculation

{
  longlong *plVar1;
  void *pvVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  pthread_key_t pVar6;
  longlong *this;
  longlong local_68;
  char local_60;
  
  plVar1 = (longlong *)FUN_00e8fc40();
  FUN_002773c0();
  (**(code **)(*plVar1 + 0x18))();
  pvVar2 = _pthread_getspecific(param_1);
  pVar6 = (pthread_key_t)plVar1;
  if ((pvVar2 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
    param_1 = pVar6;
  }
  FUN_0132dd40();
  plVar1 = (longlong *)FUN_00e8fc40();
  FUN_007eeec0();
  (**(code **)(*plVar1 + 0x18))();
  pvVar2 = _pthread_getspecific(param_1);
  if ((pvVar2 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
    param_1 = pVar6;
  }
  FUN_01327c60();
  plVar4 = (longlong *)FUN_00e8fc40();
  FUN_010fe5f0();
  (**(code **)(*plVar4 + 0x18))();
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_014bb250();
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  (**(code **)(*this + 0x378))();
  FUN_014bb2b0();
  pvVar2 = _pthread_getspecific(param_1);
  if ((pvVar2 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
    param_1 = pVar6;
  }
  FUN_01328c70();
  plVar4 = (longlong *)FUN_00115860();
  (**(code **)(*plVar4 + 0x18))();
  pvVar2 = _pthread_getspecific(param_1);
  if ((pvVar2 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
    param_1 = (pthread_key_t)plVar1;
  }
  FUN_013dfbc0();
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013dd650();
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_014bc440();
  puVar5 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  pVar6 = 0x25c9ec0;
  *puVar5 = &DAT_025c9ec0;
  puVar5[7] = 0;
  puVar5[8] = 0;
  (*DAT_025c9ed8)();
  pvVar2 = _pthread_getspecific(pVar6);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_011f2ef0(0);
  pvVar2 = _pthread_getspecific(pVar6);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  (**(code **)(*this + 0x398))();
  FUN_011f2f60();
  pvVar2 = _pthread_getspecific(pVar6);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0124de20();
  if (local_60 == '\0') {
    if (local_68 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_60 = '\0';
  }
  FUN_013c9490();
  if (local_68 != 0) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  FUN_0124c710();
  FUN_00d50b20();
  FUN_00d50b20();
  FUN_00d50b20();
  FUN_00d50b20();
  FUN_00d50b20();
  return;
}




// ==================================================
// @012ca6e0 (1260 bytes) — math_loop

{
  longlong *plVar1;
  void *pvVar2;
  longlong lVar3;
  longlong lVar4;
  pthread_key_t pVar5;
  ulonglong uVar6;
  undefined8 **ppuVar7;
  uint unaff_ESI;
  undefined8 *this;
  uint uVar8;
  bool bVar9;
  undefined8 *local_a0;
  undefined4 local_98;
  uint local_94;
  longlong local_90;
  char local_88;
  undefined4 local_7c;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48 [8];
  longlong local_40;
  longlong *local_38;
  
  local_7c = param_2;
  FUN_01240d70();
  if ((((local_48[0] == '\0') && (local_50 != 0)) && (FUN_00d50b00(), local_48[0] != '\0')) &&
     (local_50 != 0)) {
    FUN_00d50b20();
  }
  local_40 = local_50;
  plVar1 = (longlong *)FUN_00e8fc40();
  FUN_0118a5c0();
  (**(code **)(*plVar1 + 0x18))();
  local_38 = plVar1;
  pvVar2 = _pthread_getspecific((pthread_key_t)param_1);
  if ((pvVar2 == (void *)0x0) || (lVar3 = FUN_00e8b990(), lVar3 == 0)) {
    lVar4 = local_38[0xd];
    plVar1 = local_38;
    if (lVar4 == local_40) goto LAB_012ca7cb;
  }
  else {
    lVar4 = ((longlong *)local_38[(ulonglong)(*(uint *)(lVar3 + 0x154) & 1) + 4])[0xd];
    param_1 = local_38;
    plVar1 = (longlong *)local_38[(ulonglong)(*(uint *)(lVar3 + 0x154) & 1) + 4];
    if (lVar4 == local_40) goto LAB_012ca7cb;
  }
  if (local_40 != 0) {
    FUN_00d50b00();
  }
  plVar1[0xd] = local_40;
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
LAB_012ca7cb:
  pvVar2 = _pthread_getspecific((pthread_key_t)param_1);
  lVar3 = DAT_027bed58;
  if ((pvVar2 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar3 = DAT_027bed58, lVar4 != 0)) {
    param_1 = local_38;
  }
  DAT_027bed58 = lVar3;
  if (lVar3 != 0) {
    FUN_00d50b00();
  }
  FUN_012c9770();
  if ((local_48[0] == '\0') && (local_50 != 0)) {
    FUN_00d50b00();
  }
  FUN_012ca540();
  if (local_50 != 0) {
    FUN_00d50b20();
  }
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  pvVar2 = _pthread_getspecific((pthread_key_t)param_1);
  if ((pvVar2 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
    param_1 = local_38;
  }
  pvVar2 = _pthread_getspecific((pthread_key_t)param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  pvVar2 = _pthread_getspecific((pthread_key_t)param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012407c0();
  FUN_00d23310();
  uVar6 = CONCAT71((int7)((ulonglong)param_1 >> 8),local_48[0]);
  ppuVar7 = &local_a0;
  if (local_48[0] != '\0') {
    ppuVar7 = (undefined8 **)local_48;
  }
  local_a0 = (undefined8 *)CONCAT71(local_a0._1_7_,local_48[0]);
  *(char *)ppuVar7 = '\0';
  if ((local_48[0] != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if (((char)local_a0 == '\0') && (local_50 != 0)) {
    FUN_00d50b00();
  }
  FUN_012e89e0();
  plVar1 = local_38;
  if (local_50 != 0) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if (0 < (int)unaff_ESI) {
    uVar8 = 1;
    do {
      pVar5 = (pthread_key_t)uVar6;
      local_98 = 1;
      local_a0 = &DAT_024cc6f0;
      local_94 = uVar8;
      FUN_00d8cb40();
      if (local_58 == '\0') {
        if (local_60 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_58 = '\0';
      }
      FUN_012c9770();
      if ((local_48[0] == '\0') && (local_50 != 0)) {
        FUN_00d50b00();
      }
      if (local_60 != 0) {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      pvVar2 = _pthread_getspecific(pVar5);
      if ((pvVar2 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
        pVar5 = (pthread_key_t)local_38;
      }
      pvVar2 = _pthread_getspecific(pVar5);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_90 = local_50;
      local_88 = '\0';
      FUN_012e6520();
      plVar1 = local_38;
      if ((local_88 != '\0') && (local_90 != 0)) {
        FUN_00d50b20();
      }
      if (local_50 != 0) {
        FUN_00d50b20();
      }
      uVar6 = (ulonglong)(uVar8 + 1);
      bVar9 = uVar8 != unaff_ESI;
      uVar8 = uVar8 + 1;
    } while (bVar9);
  }
  *this = plVar1;
  *(undefined1 *)(this + 1) = 1;
  if (local_40 != 0) {
    FUN_00d50b20();
  }
  return this;
}




// ==================================================
// @012c9e50 (1259 bytes) — math_loop

{
  undefined1 uVar1;
  longlong *plVar2;
  void *pvVar3;
  longlong lVar4;
  pthread_key_t pVar5;
  longlong *plVar6;
  undefined8 **ppuVar7;
  int unaff_ESI;
  undefined8 *this;
  int iVar8;
  bool bVar9;
  undefined8 *local_a8;
  undefined4 local_a0;
  int local_9c;
  longlong local_98;
  char local_90;
  undefined4 local_84;
  longlong local_80;
  longlong local_58;
  char local_50;
  longlong local_48;
  char local_40 [8];
  longlong *local_38;
  
  plVar6 = param_1;
  local_84 = param_2;
  FUN_01241e00();
  if ((((local_40[0] == '\0') && (local_48 != 0)) && (FUN_00d50b00(), local_40[0] != '\0')) &&
     (local_48 != 0)) {
    FUN_00d50b20();
  }
  local_80 = local_48;
  plVar2 = (longlong *)FUN_00e8fc40();
  FUN_0118a5c0();
  (**(code **)(*plVar2 + 0x18))();
  local_38 = plVar2;
  pvVar3 = _pthread_getspecific((pthread_key_t)plVar6);
  if ((pvVar3 == (void *)0x0) || (lVar4 = FUN_00e8b990(), lVar4 == 0)) {
    lVar4 = local_38[0xd];
    plVar2 = local_38;
  }
  else {
    plVar2 = (longlong *)local_38[(ulonglong)(*(uint *)(lVar4 + 0x154) & 1) + 4];
    lVar4 = plVar2[0xd];
    plVar6 = local_38;
  }
  pVar5 = (pthread_key_t)plVar6;
  if (lVar4 != local_48) {
    if (local_48 != 0) {
      FUN_00d50b00();
    }
    plVar2[0xd] = local_48;
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
  }
  pvVar3 = _pthread_getspecific(pVar5);
  lVar4 = DAT_027bed58;
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
    lVar4 = DAT_027bed58;
  }
  DAT_027bed58 = lVar4;
  if (lVar4 != 0) {
    FUN_00d50b00();
  }
  plVar6 = (longlong *)((ulonglong)param_1 & 0xffffffff);
  FUN_012c9ae0(plVar6,0);
  if ((local_40[0] == '\0') && (local_48 != 0)) {
    FUN_00d50b00();
  }
  FUN_012ca540();
  if (local_48 != 0) {
    FUN_00d50b20();
  }
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  pvVar3 = _pthread_getspecific((pthread_key_t)plVar6);
  if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
    plVar6 = local_38;
  }
  pVar5 = (pthread_key_t)plVar6;
  pvVar3 = _pthread_getspecific(pVar5);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  pvVar3 = _pthread_getspecific(pVar5);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012407c0();
  FUN_00d23310();
  ppuVar7 = &local_a8;
  if (local_40[0] != '\0') {
    ppuVar7 = (undefined8 **)local_40;
  }
  local_a8 = (undefined8 *)CONCAT71(local_a8._1_7_,local_40[0]);
  *(char *)ppuVar7 = '\0';
  if ((local_40[0] != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if (((char)local_a8 == '\0') && (local_48 != 0)) {
    FUN_00d50b00();
  }
  FUN_012e89e0();
  if (local_48 != 0) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if (0 < unaff_ESI) {
    uVar1 = (undefined1)local_84;
    iVar8 = 1;
    do {
      local_a0 = 1;
      local_a8 = &DAT_024cc6f0;
      local_9c = iVar8;
      FUN_00d8cb40();
      if (local_50 == '\0') {
        if (local_58 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_50 = '\0';
      }
      pVar5 = (pthread_key_t)param_1;
      FUN_012c9ae0((pthread_key_t)param_1,uVar1);
      if ((local_40[0] == '\0') && (local_48 != 0)) {
        FUN_00d50b00();
      }
      if (local_58 != 0) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      pvVar3 = _pthread_getspecific(pVar5);
      if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
        pVar5 = (pthread_key_t)local_38;
      }
      pvVar3 = _pthread_getspecific(pVar5);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_98 = local_48;
      local_90 = '\0';
      FUN_012e6520();
      if ((local_90 != '\0') && (local_98 != 0)) {
        FUN_00d50b20();
      }
      if (local_48 != 0) {
        FUN_00d50b20();
      }
      bVar9 = iVar8 != unaff_ESI;
      iVar8 = iVar8 + 1;
    } while (bVar9);
  }
  *this = local_38;
  *(undefined1 *)(this + 1) = 1;
  if (local_80 != 0) {
    FUN_00d50b20();
  }
  return this;
}




// ==================================================
// @012e0640 (1232 bytes) — math_loop

{
  undefined8 uVar1;
  int iVar2;
  undefined8 *puVar3;
  void *pvVar4;
  longlong lVar5;
  longlong *arg1;
  longlong *this;
  longlong lVar6;
  longlong *plVar7;
  bool bVar8;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  if (*arg1 != 0) {
    if ((DAT_028aca30 == (undefined8 *)0x0) || (puVar3 = DAT_028aca30, DAT_028aca39 == '\0')) {
      FUN_00e8cb50();
      if (DAT_028aca30 == (undefined8 *)0x0) {
        puVar3 = (undefined8 *)FUN_00e8fc40();
        FUN_00d4ff40();
        param_1 = &DAT_02572358;
        *puVar3 = &DAT_02572358;
        (*DAT_02572370)();
        bVar8 = DAT_028aca30 == (undefined8 *)0x0;
        DAT_028aca30 = puVar3;
        if (((bVar8) || (FUN_00d50b20(), DAT_028aca30 != (undefined8 *)0x0)) &&
           (DAT_028aca38 == '\0')) {
          DAT_028aca38 = '\x01';
          FUN_00e8cb90();
        }
        FUN_00d4efa0();
        lVar6 = DAT_027e1e80;
        if (DAT_027e1e80 != 0) {
          FUN_00d50b00();
        }
        FUN_00c837f0();
        if (local_38 == '\0') {
          if (local_40 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        FUN_00d21140();
        if (local_40 != 0) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if (lVar6 != 0) {
          FUN_00d50b20();
        }
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        FUN_00d4efa0();
        lVar6 = DAT_027bf048;
        if (DAT_027bf048 != 0) {
          FUN_00d50b00();
        }
        FUN_00c837f0();
        if (local_38 == '\0') {
          if (local_40 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        FUN_00d21140();
        if (local_40 != 0) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if (lVar6 != 0) {
          FUN_00d50b20();
        }
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        FUN_00d4efa0();
        lVar6 = DAT_027bf050;
        if (DAT_027bf050 != 0) {
          FUN_00d50b00();
        }
        FUN_00c837f0();
        if (local_38 == '\0') {
          if (local_40 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        FUN_00d21140();
        if (local_40 != 0) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if (lVar6 != 0) {
          FUN_00d50b20();
        }
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        DAT_028aca39 = '\x01';
        FUN_00e8cb70();
        puVar3 = DAT_028aca30;
      }
      else {
        DAT_028aca39 = '\x01';
        FUN_00e8cb70();
        puVar3 = DAT_028aca30;
      }
    }
    DAT_028aca30 = puVar3;
    if (puVar3 != (undefined8 *)0x0) {
      if (0 < *(int *)((longlong)puVar3 + 0xc)) {
        lVar6 = 0;
        do {
          uVar1 = *(undefined8 *)(puVar3[2] + lVar6 * 8);
          FUN_00c77cd0();
          FUN_00c7b220();
          iVar2 = FUN_00e82730();
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
          plVar7 = (longlong *)*arg1;
          pvVar4 = _pthread_getspecific((pthread_key_t)param_1);
          if (pvVar4 != (void *)0x0) {
            plVar7 = (longlong *)*arg1;
            lVar5 = FUN_00e8b990();
            if (lVar5 != 0) {
              plVar7 = (longlong *)plVar7[(ulonglong)(*(uint *)(lVar5 + 0x154) & 1) + 4];
            }
          }
          (**(code **)(*plVar7 + 0x218))();
          (**(code **)(*this + 0x218))();
          iVar2 = _memcmp(param_1,(void *)(longlong)iVar2,param_3);
          if (iVar2 != 0) {
            param_1 = (undefined *)((longlong)&MACH_HEADER.magic + 1);
            (**(code **)(*this + 0x208))(1,uVar1);
          }
          lVar6 = lVar6 + 1;
        } while ((int)lVar6 < *(int *)((longlong)puVar3 + 0xc));
      }
      FUN_00cc1480();
    }
  }
  return;
}




// ==================================================
// @00536930 (1227 bytes) — math_loop

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  void *pvVar5;
  longlong lVar6;
  pthread_key_t pVar7;
  longlong **pplVar8;
  longlong lVar9;
  longlong this;
  undefined8 unaff_R12;
  ulonglong uVar10;
  pthread_key_t pVar12;
  float fVar13;
  longlong *local_a8;
  char local_a0;
  longlong local_98;
  char local_90;
  longlong local_70;
  char local_68;
  int local_58;
  longlong *local_48;
  char local_40;
  longlong local_38;
  undefined7 uVar11;
  
  if (*(longlong *)(this + 0x308) != 0) {
    uVar10 = 0;
    goto LAB_00536e0f;
  }
  uVar11 = (undefined7)((ulonglong)unaff_R12 >> 8);
  uVar10 = CONCAT71(uVar11,1);
  if (*(char *)(this + 0x24b) != '\0') goto LAB_00536e0f;
  FUN_00757c60();
  if (local_90 == '\0') {
    if (local_98 == 0) goto LAB_00536e0f;
    FUN_00d50b00();
  }
  else if (local_98 == 0) goto LAB_00536e0f;
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012cb480();
  local_38 = local_98;
  if (local_90 == '\0') {
    if (local_98 != 0) {
      FUN_00d50b00();
      goto LAB_00536a66;
    }
LAB_00536e00:
    uVar10 = CONCAT71(uVar11,1);
  }
  else {
    if (local_98 == 0) goto LAB_00536e00;
LAB_00536a66:
    if (0 < *(int *)(local_38 + 0xc)) {
      pVar12 = 0;
      do {
        lVar3 = local_70;
        pvVar5 = _pthread_getspecific(pVar12);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0124e100();
        lVar9 = local_38;
        if (local_68 == '\0') {
          if (local_70 != 0) {
            FUN_00d50b00();
            goto LAB_00536b50;
          }
        }
        else if (local_70 != 0) {
LAB_00536b50:
          local_68 = '\0';
          local_70 = 0;
          local_58 = -1;
          do {
            do {
              lVar6 = (longlong)local_58;
              local_58 = local_58 + 1;
              uVar1 = *(uint *)(lVar3 + 0xc);
              uVar10 = (ulonglong)uVar1;
              if ((int)uVar1 <= local_58) goto LAB_00536db0;
              local_70 = *(longlong *)(*(longlong *)(lVar3 + 0x10) + 8 + lVar6 * 8);
              cVar4 = FUN_00e34240();
            } while ((cVar4 != '\0') || (fVar13 = (float)FUN_00e340b0(), DAT_02390124 <= fVar13));
            FUN_00e33de0();
            lVar6 = DAT_0270b920;
            if (DAT_0270b920 != 0) {
              FUN_00d50b00();
            }
            FUN_000175c0();
            plVar2 = local_48;
            FUN_0006e1c0();
            pplVar8 = (longlong **)&DAT_02802688;
            if (plVar2 != (longlong *)0x0) {
              (**(code **)(*plVar2 + 0x360))();
              cVar4 = FUN_00e85ea0();
              pplVar8 = &local_48;
              if (cVar4 == '\0') {
                pplVar8 = (longlong **)&DAT_02802688;
              }
            }
            lVar9 = local_38;
            plVar2 = *pplVar8;
            if (*(char *)(pplVar8 + 1) == '\0') {
              if (plVar2 != (longlong *)0x0) {
                FUN_00d50b00();
              }
            }
            else {
              *(undefined1 *)(pplVar8 + 1) = 0;
              lVar9 = local_38;
            }
            pVar7 = (pthread_key_t)pplVar8;
            if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if (lVar6 != 0) {
              FUN_00d50b20();
            }
            if ((local_a0 != '\0') && (local_a8 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if (plVar2 == (longlong *)0x0) break;
            pvVar5 = _pthread_getspecific(pVar7);
            if (pvVar5 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_01266fe0();
            FUN_0051b4f0();
            plVar2 = local_48;
            if ((local_a0 != '\0') && (local_a8 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            FUN_00d50b20();
            lVar9 = local_38;
          } while (plVar2 != local_a8);
LAB_00536db0:
          FUN_00540b60();
          FUN_00d50b20();
          if (local_58 < (int)uVar1) {
            FUN_00115e00();
            uVar10 = 0;
            goto LAB_00536df5;
          }
        }
        pVar12 = pVar12 + 1;
      } while ((int)pVar12 < *(int *)(lVar9 + 0xc));
    }
    FUN_00115e00();
    uVar10 = CONCAT71((int7)(uVar10 >> 8),1);
LAB_00536df5:
    FUN_00d50b20();
  }
  FUN_00d50b20();
LAB_00536e0f:
  return uVar10 & 0xffffffff;
}




// ==================================================
// @00126ca0 (1200 bytes) — calculation

{
  longlong lVar1;
  void *pvVar2;
  pthread_key_t pVar3;
  longlong *plVar4;
  longlong *this;
  double dVar5;
  longlong local_b8;
  char local_b0;
  longlong local_a8;
  char local_a0;
  undefined8 local_98;
  double local_90;
  longlong local_88;
  char local_80;
  longlong local_78;
  char local_70;
  longlong local_68;
  char local_60;
  longlong local_58;
  char local_50;
  longlong local_48;
  char local_40;
  longlong local_38;
  char local_30;
  
  if (*this != 0) {
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012caf10();
    lVar1 = local_38;
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00b5dfe0();
      local_78 = local_48;
      local_70 = 0;
      if (local_40 == '\0') {
        if (local_48 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_40 = '\0';
      }
      local_70 = '\x01';
      FUN_001220c0();
      local_88 = local_58;
      local_80 = 0;
      if (local_50 == '\0') {
        if (local_58 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_50 = '\0';
      }
      local_80 = '\x01';
      FUN_00b5dfe0();
      local_68 = local_a8;
      local_60 = 0;
      if (local_a0 == '\0') {
        if (local_a8 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_a0 = '\0';
      }
      local_60 = '\x01';
      local_b0 = '\0';
      local_b8 = 0;
      plVar4 = &local_68;
      FUN_01f53880(plVar4,&local_88,&local_b8);
      lVar1 = local_38;
      pVar3 = (pthread_key_t)plVar4;
      if (local_30 == '\0') {
        if (((local_38 != 0) && (FUN_00d50b00(), local_30 != '\0')) && (local_38 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_30 = '\0';
      }
      if ((local_b0 != '\0') && (local_b8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      if ((local_a0 != '\0') && (local_a8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_80 != '\0') && (local_88 != 0)) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if ((local_70 != '\0') && (local_78 != 0)) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        pvVar2 = _pthread_getspecific(pVar3);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012caf10();
        pvVar2 = _pthread_getspecific(pVar3);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_98 = FUN_016c9870();
        pvVar2 = _pthread_getspecific(pVar3);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012caf10();
        pvVar2 = _pthread_getspecific(pVar3);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_90 = (double)FUN_016c9950();
        pvVar2 = _pthread_getspecific(pVar3);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012caf10();
        pvVar2 = _pthread_getspecific(pVar3);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar5 = (double)FUN_016c9870();
        dVar5 = local_90 - dVar5;
        local_98 = FUN_00e7b500(local_98);
        local_90 = dVar5;
        if ((local_40 != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
        if ((local_50 != '\0') && (local_58 != 0)) {
          FUN_00d50b20();
        }
        if ((local_30 != '\0') && (local_38 != 0)) {
          FUN_00d50b20();
        }
        FUN_00125420(local_98,local_90);
        FUN_00d50b20();
      }
    }
  }
  return;
}




// ==================================================
// @010f4e00 (1193 bytes) — calculation

{
  int iVar1;
  undefined8 *this;
  
  FUN_010f5320();
  *this = &DAT_025ccea8;
  FUN_010f5b10();
  this[0xe] = 0;
  if (DAT_026fdd70 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
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
      _uRam00000000026e32d8 = 0;
      _DAT_026e32e0 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_026e32db == '\0') {
    FUN_010f5d90();
    FUN_00e87980();
  }
  this[0xf] = 0;
  if (DAT_026fdd70 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
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
      _uRam00000000026e32d8 = 0;
      _DAT_026e32e0 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_026e32db == '\0') {
    FUN_010f5f00();
    FUN_00e87980();
  }
  this[0x10] = 0;
  if (DAT_026fdd70 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
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
      _uRam00000000026e32d8 = 0;
      _DAT_026e32e0 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_026e32db == '\0') {
    FUN_010f6070();
    FUN_00e87980();
  }
  FUN_010f61e0();
  *(undefined4 *)(this + 0x12) = 0;
  if (DAT_026fdd70 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
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
      _uRam00000000026e32d8 = 0;
      _DAT_026e32e0 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_026e32db == '\0') {
    FUN_010f6460();
    FUN_00e87980();
  }
  this[0x13] = 0;
  if (DAT_026fdd70 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
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
      _uRam00000000026e32d8 = 0;
      _DAT_026e32e0 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_026e32db == '\0') {
    FUN_010f65d0();
    FUN_00e87980();
  }
  return;
}




// ==================================================
// @002c8fb0 (1114 bytes) — math_loop

{
  longlong *plVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong lVar6;
  void *pvVar7;
  undefined8 *puVar8;
  char *pcVar9;
  longlong **pplVar10;
  longlong *arg1;
  undefined *puVar11;
  longlong lVar12;
  undefined4 uVar13;
  undefined8 local_a8;
  undefined1 local_a0;
  undefined *local_98;
  int local_60;
  longlong *local_48;
  char local_40 [8];
  char local_38 [8];
  
  puVar5 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar5 = &DAT_02572358;
  pcVar2 = DAT_02572370;
  (*DAT_02572370)();
  lVar12 = *arg1;
  puVar11 = &DAT_02572358;
  if (lVar12 != 0) {
    local_98 = &DAT_02572358;
    local_60 = -1;
    while( true ) {
      lVar6 = (longlong)local_60;
      local_60 = local_60 + 1;
      if (*(int *)(lVar12 + 0xc) <= local_60) break;
      plVar1 = *(longlong **)(*(longlong *)(lVar12 + 0x10) + 8 + lVar6 * 8);
      local_48 = plVar1;
      FUN_0006e1c0();
      pplVar10 = (longlong **)&DAT_02802688;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x360))();
        cVar3 = FUN_00e85ea0();
        pplVar10 = &local_48;
        if (cVar3 == '\0') {
          pplVar10 = (longlong **)&DAT_02802688;
        }
      }
      if (*pplVar10 != (longlong *)0x0) {
        pvVar7 = _pthread_getspecific((pthread_key_t)pplVar10);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0126ef70();
        plVar1 = local_48;
        if ((DAT_026fdd70 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
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
        pplVar10 = (longlong **)&DAT_02802688;
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 0x360))();
          cVar3 = FUN_00e85ea0();
          pplVar10 = &local_48;
          if (cVar3 == '\0') {
            pplVar10 = (longlong **)&DAT_02802688;
          }
        }
        plVar1 = *pplVar10;
        local_38[0] = *(char *)(pplVar10 + 1);
        pplVar10 = pplVar10 + 1;
        if (local_38[0] == '\0') {
          pplVar10 = (longlong **)local_38;
        }
        *(undefined1 *)pplVar10 = 0;
        if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar1 != (longlong *)0x0) {
          local_40[0] = '\0';
          local_48 = plVar1;
          FUN_00d235a0();
          if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (local_38[0] != '\0') {
            FUN_00d50b20();
          }
        }
      }
    }
    FUN_002d7220();
    puVar11 = local_98;
  }
  puVar8 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar8 = puVar11;
  uVar13 = (*pcVar2)();
  if (puVar5 != (undefined8 *)0x0) {
    if (0 < *(int *)((longlong)puVar5 + 0xc)) {
      lVar12 = 0;
      do {
        local_a8 = *(undefined8 *)(puVar5[2] + lVar12 * 8);
        local_a0 = 0;
        uVar13 = FUN_002c95a0(uVar13,&local_a8);
        plVar1 = local_48;
        local_38[0] = local_40[0];
        pcVar9 = local_40;
        if (local_40[0] == '\0') {
          pcVar9 = local_38;
        }
        *pcVar9 = '\0';
        if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
          uVar13 = FUN_00d50b20();
        }
        if (plVar1 != (longlong *)0x0) {
          local_40[0] = '\0';
          local_48 = plVar1;
          uVar13 = FUN_00d21140();
          if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
            uVar13 = FUN_00d50b20();
          }
          if (local_38[0] != '\0') {
            uVar13 = FUN_00d50b20();
          }
        }
        lVar12 = lVar12 + 1;
      } while ((int)lVar12 < *(int *)((longlong)puVar5 + 0xc));
    }
    FUN_002d7290();
  }
  if (*(int *)((longlong)puVar8 + 0xc) != 0) {
    FUN_01d2c5c0();
  }
  FUN_00d50b20();
  if (puVar5 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  return;
}




// ==================================================
// @004a5340 (1113 bytes) — math_loop

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  void *pvVar4;
  char *pcVar5;
  char *pcVar6;
  longlong arg1;
  longlong *this;
  longlong lVar7;
  longlong local_98;
  char local_90;
  longlong *local_88;
  char local_80;
  char local_60;
  undefined7 uStack_5f;
  char local_58;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38 [8];
  
  FUN_003b7950();
  if ((local_80 == '\0') && (local_88 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  lVar7 = *(longlong *)(arg1 + 0x38);
  if (lVar7 == 0) {
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01713990();
  }
  else {
    FUN_00d50b00();
    local_90 = '\x01';
    local_98 = lVar7;
  }
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01313ad0();
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012cb110();
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e6160();
  if ((local_80 == '\0') && (local_88 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  if ((local_38[0] != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (CONCAT71(uStack_5f,local_60) != 0)) {
    FUN_00d50b20();
  }
  if ((local_90 != '\0') && (local_98 != 0)) {
    FUN_00d50b20();
  }
  if (local_88 != (longlong *)0x0) {
    if (0 < *(int *)((longlong)local_88 + 0xc)) {
      lVar7 = 0;
      do {
        lVar1 = *(longlong *)(local_88[2] + lVar7 * 8);
        FUN_004f9670();
        lVar2 = local_40;
        local_60 = local_38[0];
        pcVar6 = &local_60;
        pcVar5 = local_38;
        if (local_38[0] == '\0') {
          pcVar5 = pcVar6;
        }
        *pcVar5 = '\0';
        if ((local_38[0] != '\0') && (lVar2 != 0)) {
          FUN_00d50b20();
        }
        pvVar4 = _pthread_getspecific((pthread_key_t)pcVar6);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_004fae50();
        local_50 = local_40;
        local_48 = 0;
        if (local_38[0] == '\0') {
          if (local_40 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38[0] = '\0';
        }
        local_48 = '\x01';
        cVar3 = (**(code **)(*local_88 + 0x50))();
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        if ((local_38[0] != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if (cVar3 != '\0') {
          *(undefined1 *)(this + 1) = 0;
          if (lVar1 != 0) {
            FUN_00d50b00();
          }
          *this = lVar1;
          *(undefined1 *)(this + 1) = 1;
          if ((local_60 != '\0') && (lVar2 != 0)) {
            FUN_00d50b20();
          }
          FUN_000be170();
          FUN_00d50b20();
          goto LAB_004a578e;
        }
        if ((local_60 != '\0') && (lVar2 != 0)) {
          FUN_00d50b20();
        }
        lVar7 = lVar7 + 1;
      } while ((int)lVar7 < *(int *)((longlong)local_88 + 0xc));
    }
    FUN_000be170();
    FUN_00d50b20();
  }
  *(undefined1 *)(this + 1) = 0;
  *this = 0;
  if (local_88 != (longlong *)0x0) {
LAB_004a578e:
    FUN_00d50b20();
  }
  return this;
}




// ==================================================
// @004a7530 (1005 bytes) — calculation

{
  void *pvVar1;
  longlong local_40;
  char local_38;
  
  pvVar1 = _pthread_getspecific(param_1);
  if (pvVar1 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e7fb0();
  if (local_38 == '\0') {
    if (local_40 == 0) goto LAB_004a7739;
    FUN_00d50b00();
  }
  else if (local_40 == 0) goto LAB_004a7739;
  pvVar1 = _pthread_getspecific(param_1);
  if (pvVar1 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0150fe10();
  pvVar1 = _pthread_getspecific(param_1);
  if (pvVar1 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0150f380();
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  pvVar1 = _pthread_getspecific(param_1);
  if (pvVar1 != (void *)0x0) {
    FUN_00e8b990();
  }
  pvVar1 = _pthread_getspecific(param_1);
  if (pvVar1 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e5ae0();
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  FUN_0150ec20();
  if (local_40 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
LAB_004a7739:
  pvVar1 = _pthread_getspecific(param_1);
  if (pvVar1 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e6a50();
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (local_40 != 0) {
    pvVar1 = _pthread_getspecific(param_1);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e6a50();
    pvVar1 = _pthread_getspecific(param_1);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e68b0();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  pvVar1 = _pthread_getspecific(param_1);
  if (pvVar1 != (void *)0x0) {
    FUN_00e8b990();
  }
  pvVar1 = _pthread_getspecific(param_1);
  if (pvVar1 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e5ae0();
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  FUN_012edae0();
  if (local_40 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  return;
}




// ==================================================
// @012e0130 (1004 bytes) — calculation

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined8 *puVar4;
  void *pvVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *this;
  longlong lVar8;
  bool bVar9;
  longlong local_48;
  char local_40;
  
  puVar4 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar4 = &DAT_025d6300;
  *(undefined4 *)(puVar4 + 7) = 0;
  *(undefined1 *)((longlong)puVar4 + 0x3c) = 0;
  puVar4[8] = 0;
  puVar4[9] = 0;
  puVar4[10] = 0;
  puVar4[0xb] = 0;
  puVar4[0xc] = 0;
  FUN_00d500e0();
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01270710();
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01270900();
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  cVar2 = FUN_01263cf0();
  if (cVar2 == '\0') {
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    cVar2 = FUN_01263cf0();
    if (cVar2 != '\0') goto LAB_012e030a;
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01264240();
    if (local_48 == 0) {
      bVar1 = false;
      bVar9 = false;
      lVar8 = 0;
    }
    else {
      if (local_40 == '\0') {
        FUN_00d50b00();
      }
      else {
        local_40 = '\0';
      }
      pvVar5 = _pthread_getspecific(param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      iVar3 = FUN_01326de0();
      lVar8 = local_48;
      if (iVar3 == 2) {
        bVar1 = true;
        bVar9 = true;
      }
      else {
        pvVar5 = _pthread_getspecific(param_1);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        iVar3 = FUN_01326de0();
        bVar9 = iVar3 == 4;
        bVar1 = true;
      }
    }
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if (!bVar9) goto LAB_012e03a2;
  }
  else {
LAB_012e030a:
    lVar8 = 0;
    bVar1 = false;
  }
  pvVar5 = _pthread_getspecific(param_1);
  puVar7 = puVar4;
  if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
    puVar7 = (undefined8 *)puVar4[(ulonglong)(*(uint *)(lVar6 + 0x154) & 1) + 4];
  }
  FUN_00d64850();
  puVar7[8] = 0;
  FUN_00d64910();
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012df4e0(0);
LAB_012e03a2:
  *this = puVar4;
  *(undefined1 *)(this + 1) = 1;
  if ((bVar1) && (lVar8 != 0)) {
    FUN_00d50b20();
  }
  return this;
}




// ==================================================
// @002416c0 (999 bytes) — calculation

{
  longlong lVar1;
  longlong lVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  void *pvVar7;
  pthread_key_t pVar8;
  undefined7 uVar9;
  longlong this;
  double dVar10;
  undefined8 uVar11;
  undefined8 extraout_XMM0_Qa;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  lVar1 = DAT_026f6de0;
  if (DAT_026f6de0 != 0) {
    FUN_00d50b00();
  }
  dVar10 = (double)FUN_00e7d6f0();
  uVar6 = (ulonglong)(dVar10 * DAT_023907c0);
  dVar10 = dVar10 * DAT_023907c0 - _DAT_023907c8;
  pVar8 = 0xaaaaaaab;
  uVar11 = FUN_0071a120();
  if ((((local_38 == '\0') && (local_40 != 0)) && (uVar11 = FUN_00d50b00(), local_38 != '\0')) &&
     (local_40 != 0)) {
    uVar11 = FUN_00d50b20();
  }
  bVar3 = (byte)(((longlong)dVar10 & (longlong)uVar6 >> 0x3f | uVar6) / 3);
  local_50 = lVar1;
  local_48 = '\0';
  FUN_000175c0(uVar11,&local_50);
  lVar2 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    local_38 = '\0';
    local_40 = lVar2;
    bVar3 = FUN_00c70bc0();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  uVar11 = FUN_00d50b20();
  uVar9 = (undefined7)((ulonglong)lVar2 >> 8);
  if (lVar1 != 0) {
    uVar11 = FUN_00d50b20();
  }
  if ((lVar2 != 0 & bVar3) != 0) {
    uVar6 = CONCAT71(uVar9,1);
    if (*(int *)(this + 0x198) == 2) goto LAB_002418bc;
    if (*(longlong *)(this + 0x1c0) == 0) {
      local_38 = '\0';
      local_40 = 0;
LAB_00241875:
      uVar6 = CONCAT71(uVar9,1);
    }
    else {
      uVar11 = FUN_006f3f00();
      if (local_40 == 0) goto LAB_00241875;
      if (*(longlong *)(this + 0x1c0) == 0) {
        local_48 = '\0';
        local_50 = 0;
      }
      else {
        FUN_006f3f00();
      }
      uVar4 = FUN_0078cda0();
      uVar6 = (ulonglong)uVar4;
      uVar11 = extraout_XMM0_Qa;
      if ((local_48 != '\0') && (local_50 != 0)) {
        uVar11 = FUN_00d50b20();
      }
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      uVar11 = FUN_00d50b20();
    }
    if ((char)uVar6 == '\0') {
      FUN_00239240(uVar11,0);
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
          goto LAB_0024190d;
        }
      }
      else if (local_40 != 0) {
LAB_0024190d:
        pvVar7 = _pthread_getspecific(pVar8);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        iVar5 = FUN_01326de0();
        lVar1 = DAT_026f6f08;
        uVar6 = CONCAT71((int7)(uVar6 >> 8),1);
        if (iVar5 == 3) {
          if (DAT_026f6f08 != 0) {
            FUN_00d50b00();
          }
          dVar10 = (double)FUN_00e7d6f0();
          uVar6 = (ulonglong)(dVar10 * DAT_023907c0);
          dVar10 = dVar10 * DAT_023907c0 - _DAT_023907c8;
          uVar11 = FUN_0071a120();
          if ((((local_38 == '\0') && (local_40 != 0)) &&
              (uVar11 = FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
            uVar11 = FUN_00d50b20();
          }
          bVar3 = (byte)(((longlong)dVar10 & (longlong)uVar6 >> 0x3f | uVar6) / 3);
          local_50 = lVar1;
          local_48 = '\0';
          FUN_000175c0(uVar11,&local_50);
          lVar2 = local_40;
          if (local_38 == '\0') {
            if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
              FUN_00d50b20();
            }
          }
          else {
            local_38 = '\0';
          }
          if ((local_48 != '\0') && (local_50 != 0)) {
            FUN_00d50b20();
          }
          if (lVar2 != 0) {
            local_38 = '\0';
            local_40 = lVar2;
            bVar3 = FUN_00c70bc0();
            if ((local_38 != '\0') && (local_40 != 0)) {
              FUN_00d50b20();
            }
            FUN_00d50b20();
          }
          FUN_00d50b20();
          uVar6 = CONCAT71((int7)((ulonglong)lVar2 >> 8),lVar2 != 0 & bVar3);
          if (lVar1 != 0) {
            FUN_00d50b20();
          }
        }
        FUN_00d50b20();
        goto LAB_002418bc;
      }
    }
  }
  uVar6 = 0;
LAB_002418bc:
  return uVar6 & 0xffffffff;
}




// ==================================================
// @005371e0 (999 bytes) — calculation

{
  longlong lVar1;
  longlong lVar2;
  undefined1 uVar3;
  void *pvVar4;
  char *pcVar5;
  longlong *arg1;
  longlong this;
  longlong local_b8;
  char local_b0;
  longlong local_a8;
  char local_a0;
  longlong *local_98;
  char local_90;
  longlong local_88;
  char local_80;
  longlong local_78;
  char local_70;
  longlong local_68;
  char local_60;
  longlong local_58;
  char local_50;
  longlong local_48;
  char local_40 [8];
  char local_38 [8];
  
  uVar3 = (undefined1)param_1;
  FUN_0051a2b0();
  FUN_00518030();
  *(undefined1 *)(this + 0x358) = param_2;
  *(undefined1 *)(this + 0x359) = uVar3;
  *(undefined1 *)(this + 0x35a) = param_3;
  lVar1 = *arg1;
  lVar2 = *(longlong *)(this + 0x308);
  if (lVar2 != lVar1) {
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    *(longlong *)(this + 0x308) = lVar1;
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  if (*(longlong *)(this + 0x360) == 0) {
    FUN_002d8020();
    lVar1 = local_48;
    if (local_40[0] == '\0') {
      if (local_48 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_40[0] = '\0';
    }
    FUN_0051a2b0();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if ((local_40[0] != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    FUN_00d50b00();
    FUN_0051a2b0();
    FUN_00d50b20();
  }
  if (*(longlong **)(this + 0x368) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(this + 0x368) + 0x408))();
  }
  FUN_01f27fe0();
  FUN_0167ab60();
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01537ab0();
  FUN_00d23310();
  lVar1 = local_48;
  pcVar5 = local_38;
  if (local_40[0] != '\0') {
    pcVar5 = local_40;
  }
  local_38[0] = local_40[0];
  *pcVar5 = '\0';
  if ((local_40[0] != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  local_60 = 0;
  if (local_38[0] == '\0') {
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38[0] = '\0';
  }
  local_60 = '\x01';
  local_68 = lVar1;
  FUN_00b34cb0();
  (**(code **)(*local_98 + 0x88))();
  local_58 = local_48;
  local_50 = 0;
  if (local_40[0] == '\0') {
    if (local_48 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_40[0] = '\0';
  }
  local_50 = '\x01';
  FUN_000c24e0(&local_58,&local_68);
  if (local_70 == '\0') {
    if (local_78 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_70 = '\0';
  }
  FUN_00518030();
  if (local_78 != 0) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if ((local_40[0] != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if ((local_90 != '\0') && (local_98 != (longlong *)0x0)) {
    (**(code **)(*local_98 + 0x10))();
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  if ((local_b0 != '\0') && (local_b8 != 0)) {
    FUN_00d50b20();
  }
  if (*(longlong *)(this + 0x360) != 0) {
    *(undefined8 *)(this + 0x360) = 0;
    FUN_00d50b20();
  }
  return;
}




// ==================================================
// @004a0bd0 (993 bytes) — calculation

{
  undefined8 *puVar1;
  void *pvVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *arg1;
  undefined8 *this;
  longlong lVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  puVar1 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar1 = &DAT_024e9f60;
  puVar1[0xd] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x51) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x59) = 0;
  FUN_00d500e0();
  pvVar2 = _pthread_getspecific(param_1);
  if ((pvVar2 == (void *)0x0) || (lVar3 = FUN_00e8b990(), lVar3 == 0)) {
    lVar4 = *arg1;
    lVar5 = puVar1[8];
    puVar6 = puVar1;
    if (lVar5 == lVar4) goto LAB_004a0c93;
  }
  else {
    lVar4 = *arg1;
    lVar5 = ((undefined8 *)puVar1[(ulonglong)(*(uint *)(lVar3 + 0x154) & 1) + 4])[8];
    puVar6 = (undefined8 *)puVar1[(ulonglong)(*(uint *)(lVar3 + 0x154) & 1) + 4];
    if (lVar5 == lVar4) goto LAB_004a0c93;
  }
  if (lVar4 != 0) {
    FUN_00d50b00();
  }
  puVar6[8] = lVar4;
  if (lVar5 != 0) {
    FUN_00d50b20();
  }
LAB_004a0c93:
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01713990();
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01313ad0();
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar7 = FUN_012cb110();
  if (local_38 == '\0') {
    if (local_40 != 0) {
      uVar7 = FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  FUN_004a0530(uVar7,1);
  if (local_40 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_017139d0();
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01313ad0();
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar7 = FUN_012cb110();
  if (local_38 == '\0') {
    if (local_40 != 0) {
      uVar7 = FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  FUN_004a0530(uVar7,1,param_3,param_4,1);
  if (local_40 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  *this = puVar1;
  *(undefined1 *)(this + 1) = 1;
  return;
}




// ==================================================
// @004a1c00 (958 bytes) — calculation

{
  void *pvVar1;
  longlong local_38;
  char local_30;
  
  pvVar1 = _pthread_getspecific(param_1);
  if (pvVar1 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e6a50();
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  if (local_38 == 0) {
    pvVar1 = _pthread_getspecific(param_1);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e8920();
    pvVar1 = _pthread_getspecific(param_1);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012ca540();
    pvVar1 = _pthread_getspecific(param_1);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012cade0();
    pvVar1 = _pthread_getspecific(param_1);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01505730();
  }
  else {
    pvVar1 = _pthread_getspecific(param_1);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e7fb0();
    if ((local_30 == '\0') && (local_38 != 0)) {
      FUN_00d50b00();
    }
    pvVar1 = _pthread_getspecific(param_1);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e6a50();
    pvVar1 = _pthread_getspecific(param_1);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e68b0();
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    pvVar1 = _pthread_getspecific(param_1);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0150fe10();
    pvVar1 = _pthread_getspecific(param_1);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0150f380();
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    if (local_38 != 0) {
      FUN_00d50b20();
    }
  }
  return;
}




// ==================================================
// @001221b0 (955 bytes) — math_loop

{
  char cVar1;
  int iVar2;
  void *pvVar3;
  longlong lVar4;
  longlong **pplVar5;
  int iVar6;
  longlong *plVar7;
  ulonglong uVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  ulonglong local_78;
  char local_70;
  longlong *local_68;
  char local_60;
  longlong local_58;
  int local_50;
  uint uStack_4c;
  int local_48;
  longlong *local_40;
  char local_38;
  
  FUN_00757c60();
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar10 = FUN_012cb480();
  plVar7 = local_68;
  if (local_60 == '\0') {
    if (((local_68 != (longlong *)0x0) && (uVar10 = FUN_00d50b00(), local_60 != '\0')) &&
       (local_68 != (longlong *)0x0)) {
      uVar10 = FUN_00d50b20();
    }
  }
  else {
    local_60 = '\0';
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    uVar10 = FUN_00d50b20();
  }
  if (plVar7 != (longlong *)0x0) {
    local_60 = 0;
    local_68 = (longlong *)0x0;
    local_58 = (longlong)plVar7;
    local_50 = -1;
    uStack_4c = 0;
    local_48 = 0;
    uVar8 = 0;
    do {
      iVar6 = (int)uVar8;
      if (iVar6 != 0) {
        if (iVar6 < 1) {
          uVar8 = (ulonglong)(uint)-iVar6;
        }
        else {
          local_50 = local_50 - iVar6;
          uVar10 = FUN_00d23690(uVar10,uVar8);
          local_48 = local_48 + iVar6;
          uVar8 = 0;
        }
        uStack_4c = (uint)uVar8;
      }
      lVar4 = (longlong)local_50;
      iVar9 = local_50 + 1;
      iVar6 = *(int *)(local_58 + 0xc);
      local_50 = iVar9;
      if (iVar6 <= iVar9) goto LAB_00122548;
      plVar7 = *(longlong **)(*(longlong *)(local_58 + 0x10) + 8 + lVar4 * 8);
      local_40 = plVar7;
      local_68 = plVar7;
      if ((DAT_026fdd70 == '\0') &&
         (iVar2 = ___cxa_guard_acquire(), uVar10 = extraout_XMM0_Da_01, iVar2 != 0)) {
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
        uVar10 = ___cxa_guard_release();
      }
      pplVar5 = (longlong **)&DAT_02802688;
      if (plVar7 != (longlong *)0x0) {
        (**(code **)(*plVar7 + 0x360))();
        cVar1 = FUN_00e85ea0();
        pplVar5 = &local_40;
        uVar10 = extraout_XMM0_Da;
        if (cVar1 == '\0') {
          pplVar5 = (longlong **)&DAT_02802688;
        }
      }
      plVar7 = local_68;
      if (*pplVar5 != (longlong *)0x0) {
        pvVar3 = _pthread_getspecific((pthread_key_t)pplVar5);
        if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
          plVar7 = (longlong *)plVar7[(ulonglong)(*(uint *)(lVar4 + 0x154) & 1) + 4];
        }
        (**(code **)(*plVar7 + 0x478))();
        cVar1 = (**(code **)(*local_40 + 0x50))();
        uVar10 = extraout_XMM0_Da_00;
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          uVar10 = FUN_00d50b20();
        }
        lVar4 = DAT_027259a0;
        if (cVar1 != '\0') goto LAB_001224b6;
      }
      uVar8 = (ulonglong)uStack_4c;
    } while( true );
  }
  uVar8 = 1;
LAB_00122563:
  return uVar8 & 0xffffffff;
LAB_001224b6:
  if (DAT_027259a0 != 0) {
    uVar10 = FUN_00d50b00();
  }
  uVar8 = DAT_026e18b0;
  if (DAT_026e18b0 != 0) {
    uVar10 = FUN_00d50b00();
  }
  local_78 = uVar8;
  local_70 = '\x01';
  FUN_01f6ca30(uVar10,&local_78);
  (**(code **)(*local_40 + 0x5e0))();
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
LAB_00122548:
  FUN_00136d50();
  uVar8 = CONCAT71((int7)(uVar8 >> 8),iVar6 <= iVar9);
  FUN_00d50b20();
  goto LAB_00122563;
}




// ==================================================
// @00490b50 (949 bytes) — calculation

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  longlong lVar5;
  char cVar6;
  int iVar7;
  void *pvVar8;
  pthread_key_t pVar9;
  longlong *plVar10;
  longlong arg1;
  longlong *this;
  longlong **pplVar11;
  undefined4 uVar12;
  longlong local_80;
  char local_78;
  longlong *local_68;
  undefined4 local_60;
  longlong local_58;
  char local_50;
  longlong local_48;
  longlong *local_40;
  longlong *local_38;
  
  local_48 = *(longlong *)(arg1 + 0x118);
  if (local_48 == 0) {
    bVar4 = false;
LAB_00490dc4:
    lVar5 = DAT_02708750;
    local_38 = (longlong *)0x0;
    local_40 = (longlong *)0x0;
    bVar1 = false;
    bVar2 = true;
    bVar3 = true;
    *(undefined1 *)(this + 1) = 0;
joined_r0x00490dd6:
    if (lVar5 != 0) {
      FUN_00d50b00();
    }
    *this = lVar5;
    *(undefined1 *)(this + 1) = 1;
    if (!bVar1) goto LAB_00490e26;
  }
  else {
    FUN_00d50b00();
    pvVar8 = _pthread_getspecific(param_1);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    pplVar11 = &local_68;
    FUN_01320d00();
    plVar10 = local_68;
    if ((DAT_026fdd70 == '\0') && (iVar7 = ___cxa_guard_acquire(), iVar7 != 0)) {
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
    if (plVar10 == (longlong *)0x0) {
LAB_00490bf9:
      pplVar11 = (longlong **)&DAT_02802688;
    }
    else {
      (**(code **)(*plVar10 + 0x360))();
      cVar6 = FUN_00e85ea0();
      if (cVar6 == '\0') goto LAB_00490bf9;
    }
    plVar10 = *pplVar11;
    local_38 = plVar10;
    if (plVar10 == (longlong *)0x0) {
      local_38 = (longlong *)0x0;
      bVar4 = false;
    }
    else {
      if (*(char *)(pplVar11 + 1) == '\0') {
        FUN_00d50b00();
      }
      else {
        *(undefined1 *)(pplVar11 + 1) = 0;
      }
      bVar4 = true;
    }
    pVar9 = (pthread_key_t)plVar10;
    if (((char)local_60 != '\0') && (local_68 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (local_38 == (longlong *)0x0) goto LAB_00490dc4;
    pvVar8 = _pthread_getspecific(pVar9);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0123abe0();
    local_40 = local_68;
    if (local_68 == (longlong *)0x0) {
      bVar2 = true;
      bVar1 = false;
      local_40 = (longlong *)0x0;
LAB_00490dee:
      lVar5 = DAT_02708750;
      bVar3 = false;
      *(undefined1 *)(this + 1) = 0;
      goto joined_r0x00490dd6;
    }
    if ((char)local_60 == '\0') {
      FUN_00d50b00();
      if (((char)local_60 != '\0') && (local_68 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    (**(code **)(*local_40 + 0x380))();
    plVar10 = local_68;
    if (((char)local_60 != '\0') && (local_68 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar10 == (longlong *)0x0) {
      bVar2 = false;
      bVar1 = true;
      goto LAB_00490dee;
    }
    uVar12 = (**(code **)(*local_40 + 0x380))();
    local_60 = 1;
    local_68 = &DAT_024c5048;
    local_50 = 0;
    if (local_80 != 0) {
      uVar12 = FUN_00d50b00();
    }
    local_58 = local_80;
    local_50 = '\x01';
    FUN_00d8cb40(uVar12,&local_68);
    local_68 = &DAT_024c5048;
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    bVar2 = false;
    bVar3 = false;
  }
  if (!bVar2) {
    FUN_00d50b20();
  }
LAB_00490e26:
  if (bVar4 && !bVar3) {
    FUN_00d50b20();
  }
  if (local_48 != 0) {
    FUN_00d50b20();
  }
  return;
}




// ==================================================
// @004a11d0 (947 bytes) — calculation

{
  longlong *plVar1;
  void *pvVar2;
  longlong lVar3;
  longlong *arg1;
  undefined8 *this;
  longlong local_a0;
  char local_98;
  longlong local_58;
  char local_50;
  longlong local_40;
  char local_38;
  
  plVar1 = (longlong *)FUN_00e8fc40();
  FUN_0013dd30();
  (**(code **)(*plVar1 + 0x18))();
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e6a50();
  if (local_38 == '\0') {
    if (local_40 == 0) goto LAB_004a1563;
    FUN_00d50b00();
  }
  else if (local_40 == 0) goto LAB_004a1563;
  pvVar2 = _pthread_getspecific(param_1);
  if ((pvVar2 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
    param_1 = (pthread_key_t)local_40;
  }
  FUN_012e7fb0();
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
      goto LAB_004a12fd;
    }
  }
  else if (local_40 != 0) {
LAB_004a12fd:
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e6a50();
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e6160();
    local_40 = *arg1;
    local_38 = '\0';
    FUN_00d23d20();
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if ((local_98 != '\0') && (local_a0 != 0)) {
      FUN_00d50b20();
    }
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0150f1c0();
    FUN_00d50b20();
  }
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e8920();
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012cb450();
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  FUN_0044be80();
  if (local_40 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
LAB_004a1563:
  *this = plVar1;
  *(undefined1 *)(this + 1) = 1;
  return;
}




// ==================================================
// @0124e860 (927 bytes) — math_loop

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  void *pvVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *this;
  int iVar11;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  
  plVar9 = (longlong *)*param_2;
  if ((DAT_026fdd70 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
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
  if (plVar9 == (longlong *)0x0) {
    plVar9 = &DAT_02802688;
    lVar5 = DAT_02802688;
  }
  else {
    (**(code **)(*plVar9 + 0x360))();
    cVar1 = FUN_00e85ea0();
    plVar9 = param_2;
    if (cVar1 == '\0') {
      plVar9 = &DAT_02802688;
    }
    lVar5 = *plVar9;
  }
  if (lVar5 == 0) {
    lVar5 = 0;
  }
  else {
    pvVar4 = _pthread_getspecific((pthread_key_t)plVar9);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    lVar5 = FUN_0123c2d0();
  }
  iVar11 = 0;
  uVar2 = (**(code **)(*this + 0x380))();
  iVar3 = 0x1000;
  uVar6 = FUN_00aea410(extraout_XMM0_Da,uVar2);
  while( true ) {
    plVar10 = (longlong *)*param_2;
    pvVar4 = _pthread_getspecific((pthread_key_t)plVar9);
    if (pvVar4 != (void *)0x0) {
      plVar10 = (longlong *)*param_2;
      lVar7 = FUN_00e8b990();
      if (lVar7 != 0) {
        plVar10 = (longlong *)plVar10[(ulonglong)(*(uint *)(lVar7 + 0x154) & 1) + 4];
      }
    }
    lVar7 = (**(code **)(*plVar10 + 0x378))();
    if (lVar7 <= iVar11) break;
    plVar10 = (longlong *)*param_2;
    pvVar4 = _pthread_getspecific((pthread_key_t)plVar9);
    if (pvVar4 != (void *)0x0) {
      plVar10 = (longlong *)*param_2;
      lVar7 = FUN_00e8b990();
      if (lVar7 != 0) {
        plVar10 = (longlong *)plVar10[(ulonglong)(*(uint *)(lVar7 + 0x154) & 1) + 4];
      }
    }
    lVar7 = (**(code **)(*plVar10 + 0x378))();
    uVar2 = extraout_XMM0_Da_00;
    if (lVar7 < iVar3 + iVar11) {
      plVar10 = (longlong *)*param_2;
      pvVar4 = _pthread_getspecific((pthread_key_t)plVar9);
      if (pvVar4 != (void *)0x0) {
        plVar10 = (longlong *)*param_2;
        lVar7 = FUN_00e8b990();
        if (lVar7 != 0) {
          plVar10 = (longlong *)plVar10[(ulonglong)(*(uint *)(lVar7 + 0x154) & 1) + 4];
        }
      }
      iVar3 = (**(code **)(*plVar10 + 0x378))();
      iVar3 = iVar3 - iVar11;
      uVar2 = extraout_XMM0_Da_01;
    }
    lVar7 = iVar11 + lVar5;
    cVar1 = (**(code **)(*this + 0x3b0))(uVar2,(longlong)iVar3);
    if (cVar1 != '\0') {
      plVar10 = (longlong *)*param_2;
      pvVar4 = _pthread_getspecific((pthread_key_t)plVar9);
      if (pvVar4 != (void *)0x0) {
        plVar10 = (longlong *)*param_2;
        lVar8 = FUN_00e8b990();
        if (lVar8 != 0) {
          plVar10 = (longlong *)plVar10[(ulonglong)(*(uint *)(lVar8 + 0x154) & 1) + 4];
        }
      }
      uVar2 = (**(code **)(*this + 0x3a0))();
      (**(code **)(*plVar10 + 0x388))(0,(int)DAT_0238fee8,uVar2,lVar7);
      uVar2 = (**(code **)(*this + 0x3a0))();
      plVar9 = (longlong *)0x0;
      (**(code **)(*this + 0x440))(0,uVar6,uVar2,param_1 + lVar7);
    }
    iVar11 = iVar11 + iVar3;
  }
  uVar2 = (**(code **)(*this + 0x380))();
  FUN_00aea540(uVar2,iVar3);
  return;
}




// ==================================================
// @004a7d00 (920 bytes) — math_loop

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  void *pvVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong **pplVar7;
  longlong this;
  longlong local_78;
  char local_70;
  int local_60;
  longlong *local_50;
  char local_48 [8];
  longlong local_40;
  char local_38;
  
  lVar5 = *(longlong *)(this + 0x38);
  if (lVar5 == 0) {
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01713990();
  }
  else {
    FUN_00d50b00();
    local_38 = '\x01';
    local_40 = lVar5;
  }
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01313ad0();
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012cb480();
  if ((local_70 == '\0') && (local_78 != 0)) {
    FUN_00d50b00();
  }
  if ((local_48[0] != '\0') && (local_50 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (local_78 != 0) {
    local_60 = -1;
    while( true ) {
      lVar5 = (longlong)local_60;
      local_60 = local_60 + 1;
      if (*(int *)(local_78 + 0xc) <= local_60) break;
      plVar1 = *(longlong **)(*(longlong *)(local_78 + 0x10) + 8 + lVar5 * 8);
      local_50 = plVar1;
      if ((DAT_026fdd70 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
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
      pplVar7 = (longlong **)&DAT_02802688;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x360))();
        cVar2 = FUN_00e85ea0();
        pplVar7 = &local_50;
        if (cVar2 == '\0') {
          pplVar7 = (longlong **)&DAT_02802688;
        }
      }
      if (*pplVar7 != (longlong *)0x0) {
        pvVar4 = _pthread_getspecific((pthread_key_t)pplVar7);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0123b100();
        plVar1 = local_50;
        local_40 = CONCAT71(local_40._1_7_,local_48[0]);
        plVar6 = (longlong *)local_48;
        if (local_48[0] == '\0') {
          plVar6 = &local_40;
        }
        *(undefined1 *)plVar6 = 0;
        if ((local_48[0] != '\0') && (local_50 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar1 != (longlong *)0x0) {
          FUN_00b875e0();
          if ((char)local_40 != '\0') {
            FUN_00d50b20();
          }
        }
      }
    }
    FUN_00136d50();
    FUN_00d50b20();
  }
  return;
}




// ==================================================
// @012e0fb0 (912 bytes) — calculation

{
  longlong *plVar1;
  char cVar2;
  longlong *plVar3;
  undefined8 *this;
  longlong local_40;
  char local_38;
  longlong *local_30;
  char local_28;
  
  plVar3 = (longlong *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar3 + 0x18))();
  FUN_00003020();
  FUN_00d91a70(param_1,1);
  plVar1 = DAT_0270b820;
  if ((local_38 == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
    plVar1 = DAT_0270b820;
  }
  DAT_0270b820 = plVar1;
  if (plVar1 != (longlong *)0x0) {
    FUN_00d50b00();
  }
  local_28 = '\0';
  local_30 = plVar1;
  FUN_00ca0840(param_1,&local_30);
  if ((local_28 != '\0') && (local_30 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (local_40 != 0) {
    FUN_00d50b20();
  }
  FUN_00003060();
  FUN_00d91a70(param_1,1);
  if (local_40 != 0) {
    FUN_00d50b00();
  }
  plVar1 = DAT_0270b828;
  if (DAT_0270b828 != (longlong *)0x0) {
    FUN_00d50b00();
  }
  local_28 = '\0';
  local_30 = plVar1;
  FUN_00ca0840(param_1,&local_30);
  if ((local_28 != '\0') && (local_30 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (local_40 != 0) {
    FUN_00d50b20();
  }
  FUN_00003010();
  FUN_00d91a70(param_1,1);
  if (local_40 != 0) {
    FUN_00d50b00();
  }
  plVar1 = DAT_0270b830;
  if (DAT_0270b830 != (longlong *)0x0) {
    FUN_00d50b00();
  }
  local_28 = '\0';
  local_30 = plVar1;
  FUN_00ca0840(param_1,&local_30);
  if ((local_28 != '\0') && (local_30 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (local_40 != 0) {
    FUN_00d50b20();
  }
  FUN_01f27fe0();
  cVar2 = (**(code **)(*local_30 + 0x550))();
  if ((local_28 != '\0') && (local_30 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar2 != '\0') {
    FUN_00d46300();
    if (local_40 != 0) {
      FUN_00d50b00();
    }
    plVar1 = DAT_0270b838;
    if (DAT_0270b838 != (longlong *)0x0) {
      FUN_00d50b00();
    }
    local_28 = '\0';
    local_30 = plVar1;
    FUN_00ca0840(param_1,&local_30);
    if ((local_28 != '\0') && (local_30 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if (local_40 != 0) {
      FUN_00d50b20();
    }
  }
  *this = plVar3;
  *(undefined1 *)(this + 1) = 1;
  return;
}




// ==================================================
// @00124e00 (903 bytes) — calculation

{
  longlong lVar1;
  undefined8 *puVar2;
  void *pvVar3;
  pthread_key_t pVar4;
  undefined *puVar5;
  undefined8 *in_RDX;
  char *pcVar6;
  longlong this;
  undefined4 uVar7;
  longlong local_a0;
  char local_98;
  char local_90;
  undefined7 uStack_8f;
  char local_88;
  longlong local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38 [8];
  
  FUN_00127400();
  puVar2 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  puVar5 = &DAT_025ee570;
  *puVar2 = &DAT_025ee570;
  puVar2[6] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  *(undefined8 *)((longlong)puVar2 + 0x1c) = 0;
  *(undefined8 *)((longlong)puVar2 + 0x24) = 0;
  (*DAT_025ee588)();
  FUN_00d23310();
  lVar1 = local_40;
  pVar4 = (pthread_key_t)CONCAT71((int7)((ulonglong)puVar5 >> 8),local_38[0]);
  pcVar6 = &local_90;
  if (local_38[0] != '\0') {
    pcVar6 = local_38;
  }
  local_90 = local_38[0];
  *pcVar6 = '\0';
  if ((local_38[0] != '\0') && (lVar1 != 0)) {
    FUN_00d50b20();
  }
  pvVar3 = _pthread_getspecific(pVar4);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e8920();
  local_80 = local_50;
  local_78 = 0;
  if (local_48 == '\0') {
    if (local_50 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_48 = '\0';
  }
  local_78 = '\x01';
  FUN_01531f40();
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((local_90 != '\0') && (lVar1 != 0)) {
    FUN_00d50b20();
  }
  FUN_01532bc0(param_1,param_2);
  (**(code **)(*(longlong *)*in_RDX + 0x390))();
  local_70 = local_40;
  local_68 = 0;
  if (local_38[0] == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38[0] = '\0';
  }
  local_68 = '\x01';
  FUN_01532bd0();
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38[0] != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  FUN_01532c20(*(undefined1 *)(this + 0xb0),1,0,0);
  FUN_00d6f370();
  (**(code **)(*(longlong *)*in_RDX + 0x370))();
  uVar7 = FUN_00df1af0();
  local_60 = local_50;
  local_58 = 0;
  local_a0 = DAT_026e18a0;
  if (local_48 == '\0') {
    if (local_50 != 0) {
      uVar7 = FUN_00d50b00();
      local_a0 = DAT_026e18a0;
    }
  }
  else {
    local_48 = '\0';
  }
  local_58 = '\x01';
  DAT_026e18a0 = local_a0;
  if (local_a0 != 0) {
    local_58 = '\x01';
    uVar7 = FUN_00d50b00();
  }
  local_98 = '\x01';
  FUN_00d6f570(uVar7,&local_a0);
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((local_88 != '\0') && (CONCAT71(uStack_8f,local_90) != 0)) {
    FUN_00d50b20();
  }
  if ((local_38[0] != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}




// ==================================================
// @0076f670 (824 bytes) — math_loop

{
  longlong lVar1;
  code *pcVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  void *pvVar6;
  undefined8 *puVar7;
  pthread_key_t pVar8;
  undefined8 *this;
  longlong lVar9;
  undefined4 uVar10;
  float local_58;
  float local_54;
  
  puVar4 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar4 = &DAT_02572358;
  pcVar2 = DAT_02572370;
  (*DAT_02572370)();
  puVar5 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar5 = &DAT_02572358;
  (*pcVar2)();
  if (0 < *(int *)(*param_2 + 0xc)) {
    lVar9 = 0;
    do {
      pVar8 = (pthread_key_t)param_1;
      pvVar6 = _pthread_getspecific(pVar8);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      iVar3 = FUN_01326de0();
      if (iVar3 == 1) {
        pvVar6 = _pthread_getspecific(pVar8);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0137c150();
        lVar1 = *(longlong *)(*(longlong *)(*param_2 + 0x10) + lVar9 * 8);
        if ((DAT_023b7c14 <= local_58) || (local_54 <= DAT_023b7c18)) {
          if (lVar1 != 0) {
            FUN_00d50b00();
          }
          FUN_00d21140();
          if (lVar1 != 0) {
            FUN_00d50b20();
          }
        }
        else {
          if (lVar1 != 0) {
            FUN_00d50b00();
          }
          FUN_00d21140();
          if (lVar1 != 0) {
            FUN_00d50b20();
          }
        }
      }
      else {
        lVar1 = *(longlong *)(*(longlong *)(*param_2 + 0x10) + lVar9 * 8);
        if (lVar1 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
      }
      lVar9 = lVar9 + 1;
      param_1 = (longlong)*(int *)(*param_2 + 0xc);
    } while (lVar9 < param_1);
  }
  puVar7 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar7 = &DAT_02572358;
  uVar10 = (*pcVar2)();
  if (*(int *)((longlong)puVar4 + 0xc) == 0) {
    if (*(int *)((longlong)puVar5 + 0xc) != 0) {
      FUN_00d214d0(uVar10,*(undefined4 *)((longlong)puVar7 + 0xc));
    }
  }
  else if (*(int *)((longlong)puVar5 + 0xc) == 0) {
    FUN_00d214d0(uVar10,*(undefined4 *)((longlong)puVar7 + 0xc));
  }
  else {
    FUN_00d214d0(uVar10,*(undefined4 *)((longlong)puVar7 + 0xc));
  }
  *this = puVar7;
  *(undefined1 *)(this + 1) = 1;
  FUN_00d50b20();
  FUN_00d50b20();
  return this;
}




// ==================================================
// @004a21b0 (813 bytes) — math_loop

{
  longlong lVar1;
  undefined8 *puVar2;
  code *pcVar3;
  longlong *plVar4;
  void *pvVar5;
  code *pcVar6;
  longlong *arg1;
  undefined8 *this;
  longlong lVar7;
  longlong local_78;
  char local_70;
  undefined8 *local_40;
  char local_38;
  
  plVar4 = (longlong *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar4 + 0x18))();
  pcVar3 = DAT_02572370;
  lVar1 = *arg1;
  if (lVar1 != 0) {
    if (0 < *(int *)(lVar1 + 0xc)) {
      lVar7 = 0;
      pcVar6 = DAT_02572370;
      do {
        puVar2 = *(undefined8 **)(*(longlong *)(lVar1 + 0x10) + lVar7 * 8);
        pvVar5 = _pthread_getspecific((pthread_key_t)pcVar6);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0126ef70();
        if (local_70 == '\0') {
          if (local_78 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_70 = '\0';
        }
        FUN_004a26e0();
        if ((local_38 == '\0') && (local_40 != (undefined8 *)0x0)) {
          FUN_00d50b00();
        }
        if (local_78 != 0) {
          FUN_00d50b20();
        }
        if ((local_70 != '\0') && (local_78 != 0)) {
          FUN_00d50b20();
        }
        if (local_40 == (undefined8 *)0x0) {
          local_40 = (undefined8 *)FUN_00e8fc40();
          FUN_00d4ff40();
          *local_40 = &DAT_02572358;
          (*pcVar3)();
          pvVar5 = _pthread_getspecific((pthread_key_t)pcVar6);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0126ef70();
          FUN_004a2790();
        }
        local_38 = '\0';
        FUN_00d21140();
        if (local_40 != (undefined8 *)0x0) {
          FUN_00d50b20();
        }
        lVar7 = lVar7 + 1;
        local_40 = puVar2;
      } while ((int)lVar7 < *(int *)(lVar1 + 0xc));
    }
    FUN_001159b0();
  }
  *this = plVar4;
  *(undefined1 *)(this + 1) = 1;
  return this;
}




// ==================================================
// @004a3af0 (811 bytes) — calculation

{
  longlong *plVar1;
  undefined4 uVar2;
  int iVar3;
  void *pvVar4;
  longlong *arg1;
  longlong *this;
  longlong *local_70;
  char local_68;
  longlong *local_60;
  char local_58;
  longlong *local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  plVar1 = (longlong *)*this;
  if ((DAT_026fdd70 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
    _DAT_026e3238 = FUN_00115af0();
    DAT_026e3220 = "MUAudioFileSource";
    _DAT_026e3228 = 0xa0;
    param_1 = 0x136df0;
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
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x360))();
    FUN_00e85ea0();
  }
  plVar1 = (longlong *)*arg1;
  if ((DAT_026fdd70 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
    _DAT_026e3238 = FUN_00115af0();
    DAT_026e3220 = "MUAudioFileSource";
    _DAT_026e3228 = 0xa0;
    param_1 = 0x136df0;
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
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x360))();
    FUN_00e85ea0();
  }
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0123abe0();
  (**(code **)(*local_60 + 0x390))();
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0123abe0();
  (**(code **)(*local_50 + 0x390))();
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  uVar2 = (**(code **)(*local_70 + 0x58))();
  if (local_40 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  return uVar2;
}




// ==================================================
// @002c95a0 (784 bytes) — math_loop

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  void *pvVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong arg1;
  longlong *this;
  longlong lVar8;
  longlong *local_98;
  char local_90;
  longlong local_88;
  char local_80;
  int local_40;
  
  lVar1 = *(longlong *)(arg1 + 0xe0);
  if (lVar1 == 0) {
LAB_002c988e:
    *(undefined1 *)(this + 1) = 0;
    *this = 0;
    return this;
  }
  local_40 = -1;
  do {
    while( true ) {
      lVar6 = (longlong)local_40;
      local_40 = local_40 + 1;
      if (*(int *)(lVar1 + 0xc) <= local_40) {
        FUN_002d7300();
        lVar1 = *(longlong *)(arg1 + 0xe0);
        if (lVar1 == 0) goto LAB_002c988e;
        lVar8 = 0;
        goto LAB_002c96ec;
      }
      lVar6 = *(longlong *)(*(longlong *)(lVar1 + 0x10) + 8 + lVar6 * 8);
      lVar8 = *(longlong *)(lVar6 + 0x10);
      if (lVar8 == 0) break;
      FUN_00d50b00();
      lVar2 = *param_2;
      FUN_00d50b20();
      if (lVar8 == lVar2) goto LAB_002c9858;
    }
  } while (*param_2 != 0);
LAB_002c9858:
  *(undefined1 *)(this + 1) = 0;
  if (lVar6 != 0) {
    FUN_00d50b00();
  }
  *this = lVar6;
  goto LAB_002c98b2;
  while( true ) {
    lVar2 = *(longlong *)(*(longlong *)(lVar1 + 0x10) + lVar8 * 8);
    if (*(longlong *)(lVar2 + 0x18) == 0) {
      plVar7 = *(longlong **)(lVar2 + 0x10);
      pvVar4 = _pthread_getspecific((pthread_key_t)lVar6);
      if (pvVar4 != (void *)0x0) {
        plVar7 = *(longlong **)(lVar2 + 0x10);
        lVar5 = FUN_00e8b990();
        if (lVar5 != 0) {
          plVar7 = (longlong *)plVar7[(ulonglong)(*(uint *)(lVar5 + 0x154) & 1) + 4];
        }
      }
      (**(code **)(*plVar7 + 0x478))();
    }
    else {
      FUN_00b88600();
    }
    plVar7 = (longlong *)*param_2;
    pvVar4 = _pthread_getspecific((pthread_key_t)lVar6);
    if (pvVar4 != (void *)0x0) {
      plVar7 = (longlong *)*param_2;
      lVar5 = FUN_00e8b990();
      if (lVar5 != 0) {
        plVar7 = (longlong *)plVar7[(ulonglong)(*(uint *)(lVar5 + 0x154) & 1) + 4];
      }
    }
    (**(code **)(*plVar7 + 0x478))();
    if (local_80 == '\0') {
      if (local_88 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_80 = '\0';
    }
    cVar3 = (**(code **)(*local_98 + 0x50))();
    if (local_88 != 0) {
      FUN_00d50b20();
    }
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    if ((local_90 != '\0') && (local_98 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    lVar8 = lVar8 + 1;
    if (cVar3 != '\0') break;
LAB_002c96ec:
    if (*(int *)(lVar1 + 0xc) <= (int)lVar8) {
      FUN_002d7300();
      goto LAB_002c988e;
    }
  }
  *(undefined1 *)(this + 1) = 0;
  FUN_00d50b00();
  *this = lVar2;
LAB_002c98b2:
  *(undefined1 *)(this + 1) = 1;
  FUN_002d7300();
  return this;
}




// ==================================================
// @01c9d710 (763 bytes) — math_loop

{
  longlong lVar1;
  void *pvVar2;
  longlong lVar3;
  undefined8 *puVar4;
  pthread_key_t pVar5;
  longlong *plVar6;
  undefined *puVar7;
  longlong *this;
  int iVar8;
  longlong local_98;
  char local_90;
  longlong local_40;
  char local_38;
  
  if (*param_2 != 0) {
    plVar6 = param_1;
    pvVar2 = _pthread_getspecific((pthread_key_t)param_1);
    pVar5 = (pthread_key_t)plVar6;
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012eb770();
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
    if (local_98 != 0) {
      pvVar2 = _pthread_getspecific(pVar5);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      lVar3 = FUN_00e8b990();
      if (lVar3 != 0) {
        FUN_00d50b00();
        FUN_00cb1fa0();
      }
      puVar4 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      puVar7 = &DAT_02572358;
      *puVar4 = &DAT_02572358;
      (*DAT_02572370)();
      lVar1 = *param_1;
      if (lVar1 != 0) {
        if (0 < *(int *)(lVar1 + 0xc)) {
          iVar8 = 0;
          do {
            pvVar2 = _pthread_getspecific((pthread_key_t)puVar7);
            if (pvVar2 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_012f98b0();
            if (local_38 == '\0') {
              if (local_40 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_38 = '\0';
            }
            if (local_40 != 0) {
              local_38 = '\0';
              FUN_00d21140();
              FUN_00d50b20();
            }
            iVar8 = iVar8 + 1;
          } while (iVar8 < *(int *)(lVar1 + 0xc));
        }
        FUN_001159b0();
      }
      *this = (longlong)puVar4;
      *(undefined1 *)(this + 1) = 1;
      if (lVar3 == 0) {
        return this;
      }
      FUN_00d50b20();
      return this;
    }
  }
  *(undefined1 *)(this + 1) = 0;
  lVar3 = *param_1;
  if ((char)param_1[1] == '\0') {
    if (lVar3 != 0) {
      FUN_00d50b00();
    }
    *this = lVar3;
    *(undefined1 *)(this + 1) = 1;
  }
  else {
    *this = lVar3;
    *(undefined1 *)(this + 1) = 1;
    *(undefined1 *)(param_1 + 1) = 0;
  }
  return this;
}




// ==================================================
// @00496ec0 (761 bytes) — calculation

{
  uint uVar1;
  void *pvVar2;
  ulonglong uVar3;
  longlong this;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  if (*(longlong *)(this + 0x118) == 0) {
    uVar3 = 0;
  }
  else {
    FUN_00d50b00();
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0134a600();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (local_40 == 0) {
      uVar3 = 0;
    }
    else {
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0134a600();
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0134a540();
      if (local_48 == '\0') {
        if (local_50 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_48 = '\0';
      }
      uVar1 = FUN_00d51e10();
      if (local_50 != 0) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (param_2 == '\x01' && (char)uVar1 == '\0') {
        pvVar2 = _pthread_getspecific(param_1);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        pvVar2 = _pthread_getspecific(param_1);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0134a600();
        pvVar2 = _pthread_getspecific(param_1);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_00d51d20();
        if (local_38 == '\0') {
          if (local_40 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        FUN_0134a580();
        if (local_40 != 0) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        uVar3 = CONCAT71((int7)((ulonglong)local_40 >> 8),1);
      }
      else {
        uVar3 = (ulonglong)uVar1 ^ 1;
      }
    }
    FUN_00d50b20();
  }
  return uVar3 & 0xffffffff;
}




// ==================================================
// @0053a050 (759 bytes) — math_loop

{
  longlong lVar1;
  longlong lVar2;
  void *pvVar3;
  longlong arg1;
  longlong *this;
  longlong lVar4;
  longlong lVar5;
  longlong local_48;
  char local_40;
  
  lVar4 = *(longlong *)(arg1 + 0x338);
  if (lVar4 == 0) {
    *(undefined1 *)(this + 1) = 0;
  }
  else {
    if (0 < *(int *)(lVar4 + 0xc)) {
      lVar5 = 0;
      do {
        lVar1 = *(longlong *)(*(longlong *)(lVar4 + 0x10) + lVar5 * 8);
        pvVar3 = _pthread_getspecific(param_1);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01657380();
        if ((local_40 != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
        if (local_48 == 0) {
          lVar2 = *(longlong *)(arg1 + 0x338);
          if (lVar2 != 0) {
            FUN_00d50b00();
          }
          FUN_00539f40();
          if (lVar2 != 0) {
            FUN_00d50b20();
          }
          local_40 = '\0';
          FUN_00d23d90();
          local_48 = lVar1;
        }
        lVar5 = lVar5 + 1;
      } while ((int)lVar5 < *(int *)(lVar4 + 0xc));
    }
    FUN_00277f20();
    lVar4 = *(longlong *)(arg1 + 0x338);
    *(undefined1 *)(this + 1) = 0;
    if (lVar4 != 0) {
      FUN_00d50b00();
      goto LAB_0053a31b;
    }
  }
  lVar4 = 0;
LAB_0053a31b:
  *this = lVar4;
  *(undefined1 *)(this + 1) = 1;
  return this;
}




// ==================================================
// @0053a480 (759 bytes) — math_loop

{
  longlong lVar1;
  longlong lVar2;
  void *pvVar3;
  longlong arg1;
  longlong *this;
  longlong lVar4;
  longlong lVar5;
  longlong local_48;
  char local_40;
  
  lVar4 = *(longlong *)(arg1 + 0x340);
  if (lVar4 == 0) {
    *(undefined1 *)(this + 1) = 0;
  }
  else {
    if (0 < *(int *)(lVar4 + 0xc)) {
      lVar5 = 0;
      do {
        lVar1 = *(longlong *)(*(longlong *)(lVar4 + 0x10) + lVar5 * 8);
        pvVar3 = _pthread_getspecific(param_1);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012e6a50();
        if ((local_40 != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
        if (local_48 == 0) {
          lVar2 = *(longlong *)(arg1 + 0x340);
          if (lVar2 != 0) {
            FUN_00d50b00();
          }
          FUN_003231a0();
          if (lVar2 != 0) {
            FUN_00d50b20();
          }
          local_40 = '\0';
          FUN_00d23d90();
          local_48 = lVar1;
        }
        lVar5 = lVar5 + 1;
      } while ((int)lVar5 < *(int *)(lVar4 + 0xc));
    }
    FUN_000be170();
    lVar4 = *(longlong *)(arg1 + 0x340);
    *(undefined1 *)(this + 1) = 0;
    if (lVar4 != 0) {
      FUN_00d50b00();
      goto LAB_0053a74b;
    }
  }
  lVar4 = 0;
LAB_0053a74b:
  *this = lVar4;
  *(undefined1 *)(this + 1) = 1;
  return this;
}




// ==================================================
// @00269ad0 (753 bytes) — calculation

{
  longlong *plVar1;
  char *pcVar2;
  byte in_DL;
  longlong lVar3;
  longlong this;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong local_68;
  char local_58;
  undefined7 uStack_57;
  char local_50;
  longlong local_48;
  char local_40 [8];
  char local_38 [8];
  
  uVar4 = FUN_00d6f370();
  lVar3 = DAT_026f7000;
  if (DAT_026f7000 != 0) {
    uVar4 = FUN_00d50b00();
  }
  uVar4 = FUN_00d70f90(uVar4,0);
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  if ((local_40[0] != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if (((byte)uVar4 & in_DL) == 0) {
    return uVar4;
  }
  plVar1 = *(longlong **)(this + 0x90);
  if (plVar1 == (longlong *)0x0) {
LAB_00269bc1:
    lVar3 = 0;
  }
  else {
    (**(code **)(&UNK_00001550 + *plVar1))();
    lVar3 = local_48;
    pcVar2 = &local_58;
    if (local_40[0] != '\0') {
      pcVar2 = local_40;
    }
    local_58 = local_40[0];
    *pcVar2 = '\0';
    if ((local_40[0] != '\0') && (lVar3 != 0)) {
      FUN_00d50b20();
    }
    if (lVar3 == 0) {
      lVar3 = *(longlong *)(this + 0x90);
      if (lVar3 == 0) goto LAB_00269bc1;
    }
    else if (local_58 != '\0') goto LAB_00269bc3;
    FUN_00d50b00();
  }
LAB_00269bc3:
  uVar5 = FUN_01e436c0();
  if ((plVar1 != (longlong *)0x0) && (lVar3 != 0)) {
    FUN_00d50b20();
  }
  if (*(longlong **)(this + 0x90) == (longlong *)0x0) {
    section_00000388.nrelocs._3_1_ = 1;
  }
  else {
    (**(code **)(&UNK_00001550 + **(longlong **)(this + 0x90)))();
    lVar3 = local_48;
    pcVar2 = &local_58;
    if (local_40[0] != '\0') {
      pcVar2 = local_40;
    }
    local_58 = local_40[0];
    *pcVar2 = '\0';
    if ((local_40[0] != '\0') && (lVar3 != 0)) {
      FUN_00d50b20();
    }
    if (lVar3 == 0) {
      lVar3 = *(longlong *)(this + 0x90);
LAB_00269c4f:
      FUN_00d50b00();
    }
    else if (local_58 == '\0') goto LAB_00269c4f;
    *(undefined1 *)(lVar3 + 0x3c7) = 1;
    FUN_00d50b20();
  }
  FUN_01f27fe0();
  if (*(longlong **)(this + 0x90) == (longlong *)0x0) {
    local_68 = 0;
  }
  else {
    (**(code **)(&UNK_00001550 + **(longlong **)(this + 0x90)))();
    local_68 = local_48;
    pcVar2 = local_38;
    if (local_40[0] != '\0') {
      pcVar2 = local_40;
    }
    local_38[0] = local_40[0];
    *pcVar2 = '\0';
    if ((local_40[0] != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if (local_68 == 0) {
      local_68 = *(longlong *)(this + 0x90);
      if (local_68 != 0) goto LAB_00269ce2;
      local_68 = 0;
    }
    else if (local_38[0] == '\0') {
LAB_00269ce2:
      FUN_00d50b00();
    }
  }
  FUN_0027e3a0(uVar5,param_2);
  if (local_68 != 0) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (CONCAT71(uStack_57,local_58) != 0)) {
    FUN_00d50b20();
  }
  if (*(longlong **)(this + 0x90) == (longlong *)0x0) {
    section_00000388.nrelocs._3_1_ = 0;
    return uVar4;
  }
  (**(code **)(&UNK_00001550 + **(longlong **)(this + 0x90)))();
  pcVar2 = local_40;
  if (local_40[0] == '\0') {
    pcVar2 = &local_58;
  }
  local_58 = local_40[0];
  *pcVar2 = '\0';
  if ((local_40[0] != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if (local_48 == 0) {
    lVar3 = *(longlong *)(this + 0x90);
  }
  else {
    lVar3 = local_48;
    if (local_58 != '\0') goto LAB_00269da0;
  }
  FUN_00d50b00();
LAB_00269da0:
  *(undefined1 *)(lVar3 + 0x3c7) = 0;
  FUN_00d50b20();
  return uVar4;
}




// ==================================================
// @013933d0 (747 bytes) — calculation

{
  bool bVar1;
  bool bVar2;
  longlong *plVar3;
  longlong *plVar4;
  char cVar5;
  undefined8 *this;
  longlong *plVar6;
  longlong local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong *local_50;
  char local_48;
  longlong *local_40;
  char local_38;
  
  plVar3 = DAT_028acd40;
  if (DAT_028acd40 != (longlong *)0x0) {
    *(undefined1 *)(this + 1) = 0;
    FUN_00d50b00();
    *this = plVar3;
    *(undefined1 *)(this + 1) = 1;
    return;
  }
  (**(code **)(*DAT_028acd10 + 0x368))();
  FUN_00d6f370();
  local_70 = DAT_027bf420;
  if (DAT_027bf420 != 0) {
    FUN_00d50b00();
  }
  local_68 = '\x01';
  local_60 = 0;
  local_58 = '\0';
  FUN_00d704d0(&local_60,&local_70);
  plVar3 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != (longlong *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
       (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  if (plVar3 == (longlong *)0x0) {
LAB_01393581:
    bVar2 = false;
  }
  else {
    local_50 = plVar3;
    local_48 = '\0';
    FUN_00cddf30();
    plVar6 = local_40;
    if (local_40 == (longlong *)0x0) {
      bVar1 = true;
      plVar6 = (longlong *)0x0;
      bVar2 = false;
    }
    else {
      if (local_38 == '\0') {
        FUN_00d50b00();
        bVar2 = true;
        bVar1 = false;
        if ((local_38 == '\0') || (bVar1 = false, local_40 == (longlong *)0x0)) goto LAB_0139353e;
        FUN_00d50b20();
      }
      else {
        local_38 = '\0';
      }
      bVar2 = true;
      bVar1 = false;
    }
LAB_0139353e:
    if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar6 != (longlong *)0x0) {
      cVar5 = (**(code **)(*plVar6 + 0x3a0))();
      if ((cVar5 != '\0') || (cVar5 = (**(code **)(*plVar6 + 0x428))(), cVar5 != '\0'))
      goto LAB_013935c7;
      if (bVar1) goto LAB_01393581;
      bVar2 = false;
      FUN_00d50b20();
    }
  }
  FUN_00b7b410();
  plVar6 = local_40;
  if (local_40 == (longlong *)0x0) {
    plVar6 = (longlong *)0x0;
  }
  else {
    bVar2 = true;
    if (((local_38 == '\0') && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != (longlong *)0x0))
    {
      FUN_00d50b20();
    }
  }
LAB_013935c7:
  cVar5 = (**(code **)(*plVar6 + 0x3a0))();
  if (cVar5 == '\0') {
    (**(code **)(*plVar6 + 0x428))();
  }
  (**(code **)(*DAT_028acd10 + 0x378))();
  cVar5 = (**(code **)(*plVar6 + 0x3a0))();
  plVar4 = DAT_028acd40;
  if (cVar5 == '\0') {
    *(undefined1 *)(this + 1) = 0;
    *this = 0;
  }
  else {
    if ((DAT_028acd40 != plVar6) &&
       (FUN_00d50b00(), DAT_028acd40 = plVar6, plVar4 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (DAT_028acd48 == '\0') {
      DAT_028acd48 = '\x01';
      FUN_00e8cb90();
    }
    *(undefined1 *)(this + 1) = 0;
    if (!bVar2) {
      FUN_00d50b00();
    }
    *this = plVar6;
    *(undefined1 *)(this + 1) = 1;
    bVar2 = false;
  }
  if (plVar3 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (bVar2) {
    FUN_00d50b20();
  }
  return;
}




// ==================================================
// @004a17d0 (710 bytes) — calculation

{
  void *pvVar1;
  longlong local_60;
  char local_58;
  longlong local_40;
  char local_38;
  
  if (param_1 == 0xffffffff) {
    pvVar1 = _pthread_getspecific(0xffffffff);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e6160();
    if (local_38 != '\0') {
      FUN_00d50b20();
    }
  }
  pvVar1 = _pthread_getspecific(param_1);
  if (pvVar1 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e66e0();
  pvVar1 = _pthread_getspecific(param_1);
  if (pvVar1 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e7fb0();
  pvVar1 = _pthread_getspecific(param_1);
  if (pvVar1 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0150f1c0();
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  pvVar1 = _pthread_getspecific(param_1);
  if (pvVar1 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e8920();
  pvVar1 = _pthread_getspecific(param_1);
  if (pvVar1 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012cb450();
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  FUN_0044be80();
  if (local_40 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  return;
}




// ==================================================
// @00763bc0 (709 bytes) — math_loop

{
  longlong *plVar1;
  longlong *this;
  longlong lVar2;
  bool bVar3;
  longlong *local_b8;
  char local_b0;
  longlong local_a0;
  char local_98;
  longlong *local_78;
  char local_70;
  longlong *local_68;
  char local_60;
  longlong local_58;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  (**(code **)(*this + 0x610))();
  if (local_98 == '\0') {
    if (local_a0 == 0) {
      return;
    }
    FUN_00d50b00();
  }
  else if (local_a0 == 0) {
    return;
  }
  if (0 < *(int *)(local_a0 + 0xc)) {
    lVar2 = 0;
    do {
      plVar1 = *(longlong **)(*(longlong *)(local_a0 + 0x10) + lVar2 * 8);
      (**(code **)(*plVar1 + 0x5d8))();
      if (local_38 == '\0') {
        if (local_40 != 0) {
          local_58 = local_40;
          FUN_00d50b00();
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
          goto LAB_00763d10;
        }
      }
      else {
        local_58 = local_40;
        if (local_40 != 0) {
LAB_00763d10:
          (**(code **)(*this + 0x468))();
          if (local_40 == 0) {
            bVar3 = false;
          }
          else {
            (**(code **)(*this + 0x468))();
            (**(code **)(*local_b8 + 0x368))();
            bVar3 = local_68 != (longlong *)0x0;
            if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_b0 != '\0') && (local_b8 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
          if (bVar3) {
            (**(code **)(*this + 0x468))();
            (**(code **)(*local_68 + 0x390))();
            local_50 = local_40;
            local_48 = 0;
            if (local_38 == '\0') {
              if (local_40 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_38 = '\0';
            }
            local_48 = '\x01';
            local_70 = '\0';
            local_78 = plVar1;
            FUN_0064e1c0(param_1,&local_78);
            if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_48 != '\0') && (local_50 != 0)) {
              FUN_00d50b20();
            }
            if ((local_38 != '\0') && (local_40 != 0)) {
              FUN_00d50b20();
            }
            if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
          FUN_00d50b20();
        }
      }
      lVar2 = lVar2 + 1;
    } while ((int)lVar2 < *(int *)(local_a0 + 0xc));
  }
  FUN_000e3600();
  FUN_00d50b20();
  return;
}




// ==================================================
// @0053bd80 (707 bytes) — calculation

{
  undefined8 *this;
  
  *this = &DAT_02501518;
  this[0x12] = &DAT_02501b50;
  this[0x13] = &DAT_02501b80;
  if (this[0x75] != 0) {
    FUN_00d50b20();
  }
  if (this[0x74] != 0) {
    FUN_00d50b20();
  }
  if (this[0x73] != 0) {
    FUN_00d50b20();
  }
  if (this[0x72] != 0) {
    FUN_00d50b20();
  }
  if (this[0x71] != 0) {
    FUN_00d50b20();
  }
  if (this[0x70] != 0) {
    FUN_00d50b20();
  }
  if (this[0x6f] != 0) {
    FUN_00d50b20();
  }
  if (this[0x6d] != 0) {
    FUN_00d50b20();
  }
  if (this[0x6c] != 0) {
    FUN_00d50b20();
  }
  if (this[0x68] != 0) {
    FUN_00d50b20();
  }
  if (this[0x67] != 0) {
    FUN_00d50b20();
  }
  if (this[0x66] != 0) {
    FUN_00d50b20();
  }
  if (this[0x65] != 0) {
    FUN_00d50b20();
  }
  if (this[100] != 0) {
    FUN_00d50b20();
  }
  if (this[99] != 0) {
    FUN_00d50b20();
  }
  if (this[0x62] != 0) {
    FUN_00d50b20();
  }
  if (this[0x61] != 0) {
    FUN_00d50b20();
  }
  if (this[0x60] != 0) {
    FUN_00d50b20();
  }
  if (this[0x5f] != 0) {
    FUN_00d50b20();
  }
  if (this[0x5e] != 0) {
    FUN_00d50b20();
  }
  if (this[0x5d] != 0) {
    FUN_00d50b20();
  }
  if (this[0x5b] != 0) {
    FUN_00d50b20();
  }
  if (this[0x57] != 0) {
    FUN_00d50b20();
  }
  if (this[0x56] != 0) {
    FUN_00d50b20();
  }
  if (this[0x55] != 0) {
    FUN_00d50b20();
  }
  if (this[0x53] != 0) {
    FUN_00d50b20();
  }
  if (this[0x51] != 0) {
    FUN_00d50b20();
  }
  if (this[0x50] != 0) {
    FUN_00d50b20();
  }
  if (this[0x4f] != 0) {
    FUN_00d50b20();
  }
  if (this[0x22] != 0) {
    FUN_00d50b20();
  }
  if (this[0x21] != 0) {
    FUN_00d50b20();
  }
  if (this[0x20] != 0) {
    FUN_00d50b20();
  }
  if (this[0x1e] != 0) {
    FUN_00d50b20();
  }
  if (this[0x1d] != 0) {
    FUN_00d50b20();
  }
  if (this[0x1c] != 0) {
    FUN_00d50b20();
  }
  if (this[0x1b] != 0) {
    FUN_00d50b20();
  }
  if (this[0x19] != 0) {
    FUN_00d50b20();
  }
  if (this[0x17] != 0) {
    FUN_00d50b20();
  }
  FUN_00013900();
  return;
}




// ==================================================
// @012c9ae0 (693 bytes) — calculation

{
  longlong *plVar1;
  void *pvVar2;
  undefined8 *puVar3;
  pthread_key_t pVar4;
  undefined8 *this;
  
  plVar1 = (longlong *)FUN_00e8fc40();
  FUN_00082580();
  (**(code **)(*plVar1 + 0x18))();
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e5f80();
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e57a0();
  puVar3 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  puVar3[7] = 0;
  puVar3[8] = 0;
  pVar4 = 0x25d31f0;
  *puVar3 = &DAT_025d31f0;
  *(undefined4 *)(puVar3 + 9) = 0;
  puVar3[10] = 0;
  *(undefined1 *)(puVar3 + 0xb) = 0;
  *(undefined8 *)((longlong)puVar3 + 0x5c) = 0;
  *(undefined8 *)((longlong)puVar3 + 99) = 0;
  (*DAT_025d3208)();
  if (param_2 != '\0') {
    pvVar2 = _pthread_getspecific(pVar4);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    puVar3 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    pVar4 = 0x2607248;
    *puVar3 = &DAT_02607248;
    puVar3[7] = 0;
    puVar3[8] = 0;
    puVar3[9] = 0;
    puVar3[10] = 0;
    puVar3[0xb] = 0;
    puVar3[0xc] = 0;
    puVar3[0xd] = 0;
    puVar3[0xe] = 0;
    *(undefined8 *)((longlong)puVar3 + 0x76) = 0;
    puVar3[0x10] = 0;
    puVar3[0x11] = 0;
    puVar3[0x12] = 0;
    puVar3[0x13] = 0;
    puVar3[0x14] = 0;
    puVar3[0x15] = 0;
    puVar3[0x16] = 0;
    puVar3[0x17] = 0;
    puVar3[0x18] = 0;
    puVar3[0x19] = 0;
    puVar3[0x1a] = 0;
    (*DAT_02607260)();
    FUN_012c64a0();
    if (puVar3 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
  }
  pvVar2 = _pthread_getspecific(pVar4);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e7710();
  pvVar2 = _pthread_getspecific(pVar4);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e7900();
  *this = plVar1;
  *(undefined1 *)(this + 1) = 1;
  FUN_00d50b20();
  return;
}




// ==================================================
// @012c9770 (692 bytes) — calculation

{
  longlong *plVar1;
  void *pvVar2;
  undefined8 *puVar3;
  pthread_key_t pVar4;
  undefined8 *this;
  
  plVar1 = (longlong *)FUN_00e8fc40();
  FUN_00082580();
  (**(code **)(*plVar1 + 0x18))();
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e5f80();
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e57a0();
  puVar3 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  puVar3[7] = 0;
  puVar3[8] = 0;
  pVar4 = 0x25d31f0;
  *puVar3 = &DAT_025d31f0;
  *(undefined4 *)(puVar3 + 9) = 0;
  puVar3[10] = 0;
  *(undefined1 *)(puVar3 + 0xb) = 0;
  *(undefined8 *)((longlong)puVar3 + 0x5c) = 0;
  *(undefined8 *)((longlong)puVar3 + 99) = 0;
  (*DAT_025d3208)();
  if (param_2 != '\0') {
    pvVar2 = _pthread_getspecific(pVar4);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    puVar3 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    pVar4 = 0x2607248;
    *puVar3 = &DAT_02607248;
    puVar3[7] = 0;
    puVar3[8] = 0;
    puVar3[9] = 0;
    puVar3[10] = 0;
    puVar3[0xb] = 0;
    puVar3[0xc] = 0;
    puVar3[0xd] = 0;
    puVar3[0xe] = 0;
    *(undefined8 *)((longlong)puVar3 + 0x76) = 0;
    puVar3[0x10] = 0;
    puVar3[0x11] = 0;
    puVar3[0x12] = 0;
    puVar3[0x13] = 0;
    puVar3[0x14] = 0;
    puVar3[0x15] = 0;
    puVar3[0x16] = 0;
    puVar3[0x17] = 0;
    puVar3[0x18] = 0;
    puVar3[0x19] = 0;
    puVar3[0x1a] = 0;
    (*DAT_02607260)();
    FUN_012c64a0();
    if (puVar3 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
  }
  pvVar2 = _pthread_getspecific(pVar4);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e7710();
  pvVar2 = _pthread_getspecific(pVar4);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e7900();
  *this = plVar1;
  *(undefined1 *)(this + 1) = 1;
  FUN_00d50b20();
  return;
}




// ==================================================
// @0053b0a0 (688 bytes) — math_loop

{
  longlong lVar1;
  char cVar2;
  undefined8 *puVar3;
  longlong lVar4;
  void *pvVar5;
  longlong lVar6;
  longlong this;
  longlong local_a0;
  char local_98;
  longlong local_58;
  char local_50;
  int local_40;
  
  lVar6 = local_58;
  if (*(char *)(this + 0x248) != '\0') {
    return;
  }
  if (*(char *)(this + 0x249) == '\0') {
    return;
  }
  if (*(longlong *)(this + 0x278) == 0) {
    return;
  }
  puVar3 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar3 = &DAT_02572358;
  (*DAT_02572370)();
  FUN_012d2610();
  if (local_50 == '\0') {
    if (local_58 == 0) goto LAB_0053b2a0;
    FUN_00d50b00();
  }
  else if (local_58 == 0) goto LAB_0053b2a0;
  local_50 = '\0';
  local_58 = 0;
  local_40 = -1;
  while( true ) {
    lVar4 = (longlong)local_40;
    local_40 = local_40 + 1;
    if (*(int *)(lVar6 + 0xc) <= local_40) break;
    lVar1 = *(longlong *)(lVar6 + 0x10);
    local_58 = *(longlong *)(lVar1 + 8 + lVar4 * 8);
    pvVar5 = _pthread_getspecific((pthread_key_t)lVar1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012f0960(param_1,1);
    if ((local_98 != '\0') && (local_a0 != 0)) {
      FUN_00d50b20();
    }
  }
  FUN_000be170();
  FUN_00d50b20();
LAB_0053b2a0:
  FUN_0141c3e0(param_1);
  if ((local_50 == '\0') && (local_58 != 0)) {
    FUN_00d50b00();
  }
  FUN_0141c1e0();
  lVar6 = FUN_00e313b0();
  do {
    cVar2 = FUN_00e31450(3,local_58);
  } while (cVar2 == '\0');
  if (lVar6 != 0) {
    FUN_00d50b20();
  }
  if (puVar3 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  return;
}




// ==================================================
// @0026a580 (684 bytes) — calculation

{
  undefined8 *this;
  
  *this = &DAT_024d8da0;
  this[0xe] = &DAT_024d9420;
  this[0xf] = &DAT_024d9470;
  if (this[0x3c] != 0) {
    FUN_00d50b20();
  }
  if (this[0x3b] != 0) {
    FUN_00d50b20();
  }
  if (this[0x39] != 0) {
    FUN_00d50b20();
  }
  if (this[0x38] != 0) {
    FUN_00d50b20();
  }
  if (this[0x37] != 0) {
    FUN_00d50b20();
  }
  if (this[0x36] != 0) {
    FUN_00d50b20();
  }
  if (this[0x35] != 0) {
    FUN_00d50b20();
  }
  if (this[0x30] != 0) {
    FUN_00d50b20();
  }
  if (this[0x2f] != 0) {
    FUN_00d50b20();
  }
  if (this[0x2e] != 0) {
    FUN_00d50b20();
  }
  if (this[0x2d] != 0) {
    FUN_00d50b20();
  }
  if (this[0x2c] != 0) {
    FUN_00d50b20();
  }
  if (this[0x29] != 0) {
    FUN_00d50b20();
  }
  if (this[0x28] != 0) {
    FUN_00d50b20();
  }
  if (this[0x27] != 0) {
    FUN_00d50b20();
  }
  if (this[0x26] != 0) {
    FUN_00d50b20();
  }
  if (this[0x25] != 0) {
    FUN_00d50b20();
  }
  if (this[0x24] != 0) {
    FUN_00d50b20();
  }
  if (this[0x23] != 0) {
    FUN_00d50b20();
  }
  if (this[0x22] != 0) {
    FUN_00d50b20();
  }
  if (this[0x21] != 0) {
    FUN_00d50b20();
  }
  if (this[0x20] != 0) {
    FUN_00d50b20();
  }
  if (this[0x1f] != 0) {
    FUN_00d50b20();
  }
  if (this[0x1e] != 0) {
    FUN_00d50b20();
  }
  if (this[0x1d] != 0) {
    FUN_00d50b20();
  }
  if (this[0x1c] != 0) {
    FUN_00d50b20();
  }
  if (this[0x1a] != 0) {
    FUN_00d50b20();
  }
  if (this[0x19] != 0) {
    FUN_00d50b20();
  }
  if (this[0x18] != 0) {
    FUN_00d50b20();
  }
  if (this[0x17] != 0) {
    FUN_00d50b20();
  }
  if (this[0x16] != 0) {
    FUN_00d50b20();
  }
  if (this[0x15] != 0) {
    FUN_00d50b20();
  }
  if (this[0x14] != 0) {
    FUN_00d50b20();
  }
  if (this[0x13] != 0) {
    FUN_00d50b20();
  }
  if (this[0x12] != 0) {
    FUN_00d50b20();
  }
  if (this[0x11] != 0) {
    FUN_00d50b20();
  }
  if (this[0x10] != 0) {
    FUN_00d50b20();
  }
  FUN_00015ea0();
  return;
}




// ==================================================
// @00127400 (648 bytes) — math_loop

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  void *pvVar4;
  pthread_key_t pVar5;
  char *pcVar6;
  longlong lVar7;
  longlong local_80;
  char local_78 [8];
  longlong local_70;
  undefined8 local_68;
  undefined4 local_60;
  longlong local_58;
  char local_50;
  longlong local_48;
  char local_40;
  char local_38 [8];
  
  FUN_00d23310();
  pVar5 = CONCAT31((int3)((uint)param_1 >> 8),local_78[0]);
  pcVar6 = local_38;
  if (local_78[0] != '\0') {
    pcVar6 = local_78;
  }
  local_38[0] = local_78[0];
  *pcVar6 = '\0';
  if ((local_78[0] != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  pvVar4 = _pthread_getspecific(pVar5);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e8b60();
  pvVar4 = _pthread_getspecific(pVar5);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e6160();
  lVar2 = local_48;
  if (local_40 == '\0') {
    if (((local_48 != 0) && (FUN_00d50b00(), local_40 != '\0')) && (local_48 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_40 = '\0';
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38[0] != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    local_78[0] = '\0';
    local_70 = lVar2;
    local_60 = 0;
    local_68 = 0;
    if (0 < *(int *)(lVar2 + 0xc)) {
      lVar7 = 0;
      do {
        lVar1 = *(longlong *)(*(longlong *)(lVar2 + 0x10) + lVar7 * 8);
        pvVar4 = _pthread_getspecific(pVar5);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012f4a50();
        local_40 = '\0';
        local_48 = lVar1;
        cVar3 = FUN_00d23d70();
        if ((local_40 != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
        if (cVar3 == '\0') {
          pvVar4 = _pthread_getspecific(pVar5);
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012f4a00();
        }
        else {
          pvVar4 = _pthread_getspecific(pVar5);
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012f4a00();
        }
        lVar7 = lVar7 + 1;
        local_68 = CONCAT44(local_68._4_4_,(int)lVar7);
      } while ((int)lVar7 < *(int *)(lVar2 + 0xc));
    }
    FUN_000be170();
    FUN_00d50b20();
  }
  return;
}




// ==================================================
// @004a0530 (625 bytes) — math_loop

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  void *pvVar4;
  ulonglong uVar5;
  int iVar6;
  longlong local_98;
  char local_90;
  
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012f4ba0();
  lVar1 = DAT_02708bf0;
  if (DAT_02708bf0 != 0) {
    FUN_00d50b00();
  }
  uVar3 = FUN_00c9ff50();
  uVar5 = (ulonglong)uVar3;
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if ((local_90 != '\0') && (local_98 != 0)) {
    FUN_00d50b20();
  }
  if (param_2 == '\x01' && (char)uVar3 == '\0') {
    FUN_004f7da0();
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    uVar5 = CONCAT71((uint7)(uint3)(uVar3 >> 8),1);
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e6160();
  if (lVar1 != 0) {
    FUN_00d50b00();
    if (0 < *(int *)(lVar1 + 0xc)) {
      iVar6 = 0;
      do {
        cVar2 = FUN_004a0530();
        uVar5 = uVar5 & 0xff;
        if (cVar2 == '\0') {
          uVar5 = 0;
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < *(int *)(lVar1 + 0xc));
    }
    FUN_000be170();
    FUN_00d50b20();
  }
  return uVar5 & 0xffffffffffffff01;
}




// ==================================================
// @01394a40 (624 bytes) — calculation

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  char cVar5;
  longlong arg1;
  undefined8 *this;
  longlong local_88;
  char local_80;
  longlong local_68;
  char local_60;
  longlong *local_58;
  uint local_50;
  longlong local_48;
  char local_40;
  longlong *local_38;
  
  FUN_013933d0();
  plVar4 = local_58;
  if (((char)local_50 == '\0') && (local_58 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  lVar2 = *(longlong *)(arg1 + 0x48);
  if (lVar2 == 0) {
    local_38 = plVar4;
    FUN_01393860();
    plVar4 = local_58;
    if ((char)local_50 == '\0') {
      if (local_58 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_50 = local_50 & 0xffffff00;
    }
    plVar1 = (longlong *)(arg1 + 0x48);
    FUN_00d64850();
    plVar3 = (longlong *)*plVar1;
    if (plVar3 != plVar4) {
      if (plVar4 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      *plVar1 = (longlong)plVar4;
      if (plVar3 != (longlong *)0x0) {
        FUN_00d50b20();
      }
    }
    FUN_00d64910();
    if (plVar4 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if (((char)local_50 != '\0') && (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    lVar2 = *plVar1;
    plVar4 = local_38;
  }
  if (lVar2 != 0) {
    local_60 = 0;
    FUN_00d50b00();
  }
  local_60 = '\x01';
  local_68 = lVar2;
  (**(code **)(*plVar4 + 0x400))(param_1,&local_68);
  plVar4 = local_58;
  if ((char)local_50 == '\0') {
    if (local_58 != (longlong *)0x0) {
      FUN_00d50b00();
      if (((char)local_50 != '\0') && (local_58 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    local_50 = local_50 & 0xffffff00;
  }
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  cVar5 = (**(code **)(*plVar4 + 0x3a0))();
  if (cVar5 == '\0') {
    (**(code **)(*plVar4 + 0x428))();
  }
  cVar5 = (**(code **)(*plVar4 + 0x3a0))();
  lVar2 = DAT_027bf470;
  if (cVar5 == '\0') {
    if (DAT_027bf470 != 0) {
      FUN_00d50b00();
    }
    (**(code **)(*plVar4 + 0x368))();
    local_50 = 1;
    local_58 = &DAT_024c5048;
    local_40 = 0;
    if (local_88 != 0) {
      FUN_00d50b00();
    }
    local_48 = local_88;
    local_40 = '\x01';
    FUN_00cc7b40(param_1,&local_58);
    local_58 = &DAT_024c5048;
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  *this = plVar4;
  *(undefined1 *)(this + 1) = 1;
  FUN_00d50b20();
  return;
}




// ==================================================
// @004a4d90 (619 bytes) — calculation

{
  char cVar1;
  longlong lVar2;
  bool bVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong arg1;
  undefined8 *this;
  undefined4 uVar7;
  longlong local_80;
  char local_78;
  undefined8 *local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong *local_50;
  undefined8 *local_48;
  char local_40;
  char local_31;
  
  if (*(longlong *)(arg1 + 0x48) == 0) {
    plVar5 = (longlong *)FUN_00e8fc40();
    FUN_00022d50();
    param_1 = (**(code **)(*plVar5 + 0x18))();
    lVar2 = *(longlong *)(arg1 + 0x48);
    *(longlong **)(arg1 + 0x48) = plVar5;
    if (lVar2 != 0) {
      param_1 = FUN_00d50b20();
    }
  }
  local_80 = *param_2;
  if (local_80 == 0) {
    param_1 = FUN_00247590();
    puVar4 = local_48;
    puVar6 = (undefined8 *)*param_2;
    if (puVar6 == local_48) {
      if (((char)param_2[1] != '\0') || (local_48 == (undefined8 *)0x0)) goto LAB_004a4e86;
      local_50 = param_2 + 1;
      if (local_40 == '\0') {
        param_1 = FUN_00d50b00();
        goto LAB_004a4e7f;
      }
LAB_004a4e46:
      *(undefined1 *)local_50 = 1;
    }
    else {
      local_50 = param_2 + 1;
      cVar1 = (char)param_2[1];
      if (local_40 != '\0') {
        *param_2 = (longlong)local_48;
        if ((cVar1 != '\0') && (puVar6 != (undefined8 *)0x0)) {
          param_1 = FUN_00d50b20();
        }
        goto LAB_004a4e46;
      }
      local_31 = cVar1;
      if (local_48 != (undefined8 *)0x0) {
        param_1 = FUN_00d50b00();
      }
      *param_2 = (longlong)puVar4;
      if ((local_31 != '\0') && (puVar6 != (undefined8 *)0x0)) {
        param_1 = FUN_00d50b20();
      }
LAB_004a4e7f:
      *(undefined1 *)local_50 = 1;
LAB_004a4e86:
      if ((local_40 != '\0') && (local_48 != (undefined8 *)0x0)) {
        param_1 = FUN_00d50b20();
      }
    }
    local_80 = *param_2;
  }
  local_78 = '\0';
  FUN_004a50f0(param_1,&local_80);
  puVar6 = local_48;
  if (local_48 == (undefined8 *)0x0) {
    bVar3 = true;
    puVar6 = (undefined8 *)0x0;
  }
  else {
    if (local_40 == '\0') {
      FUN_00d50b00();
      bVar3 = false;
      if ((local_40 == '\0') || (local_48 == (undefined8 *)0x0)) goto LAB_004a4ef5;
      FUN_00d50b20();
    }
    else {
      local_40 = '\0';
    }
    bVar3 = false;
  }
LAB_004a4ef5:
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  if (puVar6 == (undefined8 *)0x0) {
    puVar6 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar6 = &DAT_024f4960;
    *(undefined8 *)((longlong)puVar6 + 100) = 0;
    puVar6[0xe] = 0;
    *(undefined4 *)(puVar6 + 0xf) = 0;
    puVar6[0x10] = 0;
    puVar6[2] = 0;
    puVar6[3] = 0;
    *(undefined1 *)(puVar6 + 4) = 0;
    puVar6[5] = 0;
    puVar6[6] = 0;
    puVar6[7] = 0;
    puVar6[8] = 0;
    puVar6[9] = 0;
    puVar6[10] = 0;
    *(undefined8 *)((longlong)puVar6 + 0x51) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x59) = 0;
    uVar7 = (*DAT_024f4978)();
    local_68 = '\0';
    local_60 = *param_2;
    local_58 = '\0';
    local_70 = puVar6;
    FUN_004a51a0(uVar7,&local_60);
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if ((local_68 != '\0') && (local_70 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
    *(undefined1 *)(this + 1) = 0;
  }
  else {
    *(undefined1 *)(this + 1) = 0;
    if (bVar3) {
      FUN_00d50b00();
    }
  }
  *this = puVar6;
  *(undefined1 *)(this + 1) = 1;
  return;
}




// ==================================================
// @004a5a00 (588 bytes) — calculation

{
  longlong lVar1;
  byte bVar2;
  byte bVar3;
  void *pvVar4;
  longlong this;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  lVar1 = *(longlong *)(this + 0x38);
  if (lVar1 == 0) {
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01713990();
  }
  else {
    FUN_00d50b00();
    local_38 = '\x01';
    local_40 = lVar1;
  }
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  bVar2 = FUN_0131ae60();
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  lVar1 = *(longlong *)(this + 0x38);
  if (lVar1 == 0) {
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01713990();
  }
  else {
    FUN_00d50b00();
    local_48 = '\x01';
    local_50 = lVar1;
  }
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01313ad0();
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012cb110();
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  bVar3 = FUN_004a0530();
  if (local_40 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  return bVar2 & bVar3;
}




// ==================================================
// @00269ed0 (582 bytes) — calculation

{
  longlong *plVar1;
  longlong lVar2;
  char *pcVar3;
  longlong lVar4;
  longlong this;
  longlong local_40;
  char local_38 [8];
  char local_30 [8];
  
  if (param_2 == 0) {
    return 1;
  }
  plVar1 = *(longlong **)(this + 0x90);
  if (plVar1 == (longlong *)0x0) {
LAB_00269f57:
    lVar4 = 0;
  }
  else {
    (**(code **)(&UNK_00001550 + *plVar1))();
    pcVar3 = local_30;
    if (local_38[0] != '\0') {
      pcVar3 = local_38;
    }
    local_30[0] = local_38[0];
    *pcVar3 = '\0';
    if ((local_38[0] != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (local_40 == 0) {
      lVar4 = *(longlong *)(this + 0x90);
      if (*(longlong *)(this + 0x90) == 0) goto LAB_00269f57;
    }
    else {
      lVar4 = local_40;
      if (local_30[0] != '\0') goto LAB_00269f59;
    }
    FUN_00d50b00();
  }
LAB_00269f59:
  FUN_019f7c10();
  if ((plVar1 != (longlong *)0x0) && (lVar4 != 0)) {
    FUN_00d50b20();
  }
  plVar1 = *(longlong **)(this + 0x90);
  if (plVar1 == (longlong *)0x0) {
LAB_00269fec:
    lVar4 = 0;
    lVar2 = DAT_026f7008;
  }
  else {
    (**(code **)(&UNK_00001550 + *plVar1))();
    pcVar3 = local_30;
    if (local_38[0] != '\0') {
      pcVar3 = local_38;
    }
    local_30[0] = local_38[0];
    *pcVar3 = '\0';
    if ((local_38[0] != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (local_40 == 0) {
      lVar4 = *(longlong *)(this + 0x90);
      if (*(longlong *)(this + 0x90) == 0) goto LAB_00269fec;
    }
    else {
      lVar4 = local_40;
      lVar2 = DAT_026f7008;
      if (local_30[0] != '\0') goto joined_r0x00269ff9;
    }
    FUN_00d50b00();
    lVar2 = DAT_026f7008;
  }
joined_r0x00269ff9:
  DAT_026f7008 = lVar2;
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  FUN_019f7c50();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if ((plVar1 != (longlong *)0x0) && (lVar4 != 0)) {
    FUN_00d50b20();
  }
  plVar1 = *(longlong **)(this + 0x90);
  if (plVar1 == (longlong *)0x0) {
LAB_0026a0b6:
    local_40 = 0;
    lVar4 = DAT_026f7010;
  }
  else {
    (**(code **)(&UNK_00001550 + *plVar1))();
    pcVar3 = local_30;
    if (local_38[0] != '\0') {
      pcVar3 = local_38;
    }
    local_30[0] = local_38[0];
    *pcVar3 = '\0';
    if ((local_38[0] != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (local_40 == 0) {
      local_40 = *(longlong *)(this + 0x90);
      if (local_40 == 0) goto LAB_0026a0b6;
    }
    else {
      lVar4 = DAT_026f7010;
      if (local_30[0] != '\0') goto joined_r0x0026a0c3;
    }
    FUN_00d50b00();
    lVar4 = DAT_026f7010;
  }
joined_r0x0026a0c3:
  DAT_026f7010 = lVar4;
  if (lVar4 != 0) {
    FUN_00d50b00();
  }
  FUN_019f7c50();
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  if ((plVar1 != (longlong *)0x0) && (local_40 != 0)) {
    FUN_00d50b20();
  }
  return 1;
}




// ==================================================
// @004f01b0 (574 bytes) — math_loop

{
  longlong lVar1;
  void *pvVar2;
  int iVar3;
  longlong *this;
  bool bVar4;
  double dVar5;
  double local_40;
  double local_38;
  
  lVar1 = *this;
  if (lVar1 == 0) {
    local_40 = 0.0;
    local_38 = 0.0;
  }
  else {
    if (*(int *)(lVar1 + 0xc) < 1) {
      local_40 = 0.0;
      local_38 = 0.0;
    }
    else {
      bVar4 = true;
      local_38 = 0.0;
      iVar3 = 0;
      local_40 = 0.0;
      do {
        if (bVar4) {
          pvVar2 = _pthread_getspecific(param_1);
          if (pvVar2 != (void *)0x0) {
            FUN_00e8b990();
          }
          local_40 = (double)FUN_012ebfe0();
          pvVar2 = _pthread_getspecific(param_1);
          if (pvVar2 != (void *)0x0) {
            FUN_00e8b990();
          }
          local_38 = (double)FUN_012ebd30();
          bVar4 = false;
        }
        else {
          pvVar2 = _pthread_getspecific(param_1);
          if (pvVar2 != (void *)0x0) {
            FUN_00e8b990();
          }
          dVar5 = (double)FUN_012ebfe0();
          if (dVar5 < local_40) {
            pvVar2 = _pthread_getspecific(param_1);
            if (pvVar2 != (void *)0x0) {
              FUN_00e8b990();
            }
            local_40 = (double)FUN_012ebfe0();
          }
          pvVar2 = _pthread_getspecific(param_1);
          if (pvVar2 != (void *)0x0) {
            FUN_00e8b990();
          }
          dVar5 = (double)FUN_012ebd30();
          if (local_38 < dVar5) {
            pvVar2 = _pthread_getspecific(param_1);
            if (pvVar2 != (void *)0x0) {
              FUN_00e8b990();
            }
            local_38 = (double)FUN_012ebd30();
          }
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(lVar1 + 0xc));
    }
    FUN_000be170();
  }
  FUN_00e7b500(local_40,local_38 - local_40);
  return;
}




// ==================================================
// @012dfc10 (566 bytes) — calculation

{
  bool bVar1;
  char cVar2;
  int iVar3;
  void *pvVar4;
  longlong this;
  longlong lVar5;
  bool bVar6;
  longlong local_48;
  char local_40;
  float local_34;
  
  local_34 = DAT_02394288;
  if ((*(longlong *)(this + 0x60) == 0) || (*(longlong *)(this + 0x58) == 0))
  goto LAB_012dfce8;
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  cVar2 = FUN_01263cf0();
  if (cVar2 == '\0') {
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    cVar2 = FUN_01263cf0();
    if (cVar2 != '\0') goto LAB_012dfcca;
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01264240();
    if (local_48 == 0) {
      lVar5 = 0;
      bVar1 = false;
      bVar6 = false;
    }
    else {
      if (local_40 == '\0') {
        FUN_00d50b00();
      }
      else {
        local_40 = '\0';
      }
      pvVar4 = _pthread_getspecific(param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      iVar3 = FUN_01326de0();
      lVar5 = local_48;
      if (iVar3 == 2) {
        bVar1 = true;
        bVar6 = true;
      }
      else {
        pvVar4 = _pthread_getspecific(param_1);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        iVar3 = FUN_01326de0();
        bVar6 = iVar3 == 4;
        bVar1 = true;
      }
    }
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    local_34 = DAT_02394288;
    if (bVar6) goto LAB_012dfccf;
  }
  else {
LAB_012dfcca:
    bVar1 = false;
    lVar5 = 0;
LAB_012dfccf:
    local_34 = 0.0;
  }
  if ((bVar1) && (lVar5 != 0)) {
    FUN_00d50b20();
  }
LAB_012dfce8:
  FUN_012df4e0((double)local_34);
  return;
}




// ==================================================
// @00763640 (558 bytes) — math_loop

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  longlong *this;
  int iVar5;
  longlong local_a0;
  char local_98;
  longlong local_78;
  char local_70;
  longlong local_60;
  char local_58;
  int local_48;
  
  cVar3 = (**(code **)(*this + 0x478))();
  if (((char)this[0x19] != '\0') && (cVar3 != '\0')) {
    *(undefined1 *)(this + 0x19) = 0;
  }
  (**(code **)(*(longlong *)this[0x10] + 0x4a0))();
  if (local_98 == '\0') {
    if (local_a0 == 0) {
      return;
    }
    FUN_00d50b00();
  }
  else if (local_a0 == 0) {
    return;
  }
  if (0 < *(int *)(local_a0 + 0xc)) {
    iVar5 = 0;
    do {
      lVar2 = local_60;
      (**(code **)(*this + 0x610))();
      if (local_58 == '\0') {
        if (local_60 != 0) {
          FUN_00d50b00();
          goto LAB_007637b0;
        }
      }
      else if (local_60 != 0) {
LAB_007637b0:
        local_58 = '\0';
        local_60 = 0;
        local_48 = -1;
        while( true ) {
          lVar4 = (longlong)local_48;
          local_48 = local_48 + 1;
          if (*(int *)(lVar2 + 0xc) <= local_48) break;
          lVar1 = *(longlong *)(lVar2 + 0x10);
          local_60 = *(longlong *)(lVar1 + 8 + lVar4 * 8);
          local_70 = '\0';
          local_78 = local_60;
          FUN_0064e3a0(lVar1,&local_78);
          if ((local_70 != '\0') && (local_78 != 0)) {
            FUN_00d50b20();
          }
        }
        FUN_000e3600();
        FUN_00d50b20();
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(local_a0 + 0xc));
  }
  FUN_000ad7a0();
  FUN_00d50b20();
  return;
}




// ==================================================
// @004960c0 (545 bytes) — math_loop

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  void *pvVar6;
  longlong this;
  float fVar7;
  undefined4 uVar8;
  longlong local_60;
  char local_58;
  int local_48;
  
  lVar3 = local_60;
  if (param_2 == 0) {
    return 1;
  }
  fVar7 = (float)(**(code **)(**(longlong **)(this + 0x100) + 0x930))();
  FUN_0048a5a0();
  if (local_58 == '\0') {
    if (local_60 == 0) goto LAB_0049621d;
    FUN_00d50b00();
  }
  else if (local_60 == 0) goto LAB_0049621d;
  local_58 = '\0';
  local_60 = 0;
  local_48 = -1;
  fVar7 = DAT_02390124 - fVar7;
  while( true ) {
    lVar5 = (longlong)local_48;
    local_48 = local_48 + 1;
    if (*(int *)(lVar3 + 0xc) <= local_48) break;
    lVar1 = *(longlong *)(lVar3 + 0x10);
    local_60 = *(longlong *)(lVar1 + 8 + lVar5 * 8);
    pvVar6 = _pthread_getspecific((pthread_key_t)lVar1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013d7dd0(fVar7);
  }
  FUN_00115190();
  FUN_00d50b20();
LAB_0049621d:
  FUN_0047dd70();
  iVar4 = FUN_01caecd0();
  plVar2 = *(longlong **)(this + 0x100);
  if (iVar4 == 3) {
    (**(code **)(*plVar2 + 0x6e0))();
  }
  else {
    (**(code **)(*plVar2 + 0x6b0))();
    if (local_58 == '\0') {
      if (local_60 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_58 = '\0';
    }
    uVar8 = FUN_01e3f820();
    (**(code **)(*plVar2 + 0x6d8))(uVar8,0);
    if (local_60 != 0) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
  }
  return 1;
}




// ==================================================
// @01b253d0 (533 bytes) — calculation

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  void *pvVar5;
  longlong *this;
  longlong **pplVar6;
  longlong *local_40;
  char local_38;
  
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  pplVar6 = &local_40;
  FUN_01320d00();
  plVar1 = local_40;
  if ((DAT_026fdd70 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
    _DAT_026e3238 = FUN_00115af0();
    DAT_026e3220 = "MUAudioFileSource";
    _DAT_026e3228 = 0xa0;
    param_1 = 0x136df0;
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
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 != '\0') goto LAB_01b25469;
  }
  pplVar6 = (longlong **)&DAT_02802688;
LAB_01b25469:
  plVar1 = *pplVar6;
  if (*(char *)(pplVar6 + 1) == '\0') {
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar6 + 1) = 0;
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  lVar2 = DAT_0272fa48;
  if (plVar1 == (longlong *)0x0) {
    *(undefined1 *)(this + 1) = 0;
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    *this = lVar2;
    *(undefined1 *)(this + 1) = 1;
  }
  else {
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0123abe0();
    (**(code **)(*local_40 + 0x390))();
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  return;
}




// ==================================================
// @0076fba0 (517 bytes) — calculation

{
  longlong lVar1;
  int iVar2;
  void *pvVar3;
  longlong lVar4;
  pthread_key_t pVar5;
  longlong local_68;
  undefined1 local_60;
  longlong local_58;
  char local_50;
  longlong local_48;
  char local_40;
  longlong local_38;
  
  local_68 = *param_3;
  local_60 = 0;
  pVar5 = param_1;
  FUN_00788fc0(param_1,&local_68);
  lVar1 = local_58;
  if (local_50 == '\0') {
    if (local_58 == 0) {
      return;
    }
    FUN_00d50b00();
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
  }
  else if (local_58 == 0) {
    return;
  }
  if ((char)param_1 == '\0') {
    if (*param_3 != 0) {
      pvVar3 = _pthread_getspecific(pVar5);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      iVar2 = FUN_016c2e90();
      if (1 < iVar2) {
        pvVar3 = _pthread_getspecific(pVar5);
        if ((pvVar3 == (void *)0x0) || (lVar4 = FUN_00e8b990(), lVar4 == 0)) {
          local_38 = lVar1;
        }
        else {
          local_38 = *(longlong *)(lVar1 + 0x20 + (ulonglong)(*(uint *)(lVar4 + 0x154) & 1) * 8);
        }
        pvVar3 = _pthread_getspecific(pVar5);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_016c2e90();
        FUN_016c1150();
      }
    }
  }
  else {
    pvVar3 = _pthread_getspecific(pVar5);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_016c1150();
  }
  pvVar3 = _pthread_getspecific(pVar5);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_48 = lVar1;
  local_40 = '\0';
  FUN_012caf90();
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}



