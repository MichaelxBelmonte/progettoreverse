// Function: FUN_01bc2250
// Address: 01bc2250
// Size: 5113 bytes
// Class: GNList


void FUN_01bc2250(pthread_key_t param_1)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  void *pvVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *unaff_RDI;
  longlong local_240;
  char local_238;
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
  longlong *local_190;
  char local_188;
  longlong local_180;
  char local_178;
  longlong *local_170;
  char local_168;
  longlong local_160;
  char local_158;
  longlong *local_150;
  char local_148;
  longlong local_140;
  char local_138;
  longlong *local_130;
  char local_128;
  longlong local_120;
  char local_118;
  longlong *local_110;
  char local_108;
  longlong local_100;
  char local_f8;
  longlong *local_f0;
  char local_e8;
  longlong local_e0;
  char local_d8;
  longlong *local_d0;
  char local_c8;
  longlong local_c0;
  char local_b8;
  longlong *local_b0;
  char local_a8;
  longlong local_a0;
  char local_98;
  longlong *local_90;
  char local_88;
  longlong local_80;
  char local_78;
  longlong *local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  (**(code **)(*unaff_RDI + 0x398))();
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  lVar5 = FUN_00e8b990();
  if (lVar5 != 0) {
    FUN_00d50b00();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  FUN_0006e1c0();
  lVar6 = FUN_00e86210();
  if (lVar6 != 0) {
    FUN_00d50b00();
  }
  lVar3 = DAT_026d83d8;
  if (DAT_028b5df8 == 0) {
    if (DAT_026d83d8 != 0) {
      FUN_00d50b00();
    }
    FUN_00c841b0();
    lVar7 = DAT_028b5df8;
    if (DAT_028b5df8 != local_40) {
      if (local_38 == '\0') {
        if (local_40 == 0) {
          lVar7 = 0;
        }
        else {
          FUN_00d50b00();
          lVar7 = local_40;
        }
      }
      else {
        local_38 = '\0';
        lVar7 = local_40;
      }
      bVar2 = DAT_028b5df8 != 0;
      DAT_028b5df8 = lVar7;
      if (bVar2) {
        FUN_00d50b20();
        lVar7 = local_40;
      }
    }
    if ((lVar7 != 0) && (DAT_028b5e00 == '\0')) {
      DAT_028b5e00 = '\x01';
      FUN_00e8cb90();
      lVar7 = local_40;
    }
    if ((local_38 != '\0') && (lVar7 != 0)) {
      FUN_00d50b20();
    }
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
  }
  lVar3 = DAT_026fe480;
  if (DAT_028b5e08 == 0) {
    if (DAT_026fe480 != 0) {
      FUN_00d50b00();
    }
    FUN_00c841b0();
    lVar7 = DAT_028b5e08;
    if (DAT_028b5e08 != local_40) {
      if (local_38 == '\0') {
        if (local_40 == 0) {
          lVar7 = 0;
        }
        else {
          FUN_00d50b00();
          lVar7 = local_40;
        }
      }
      else {
        local_38 = '\0';
        lVar7 = local_40;
      }
      bVar2 = DAT_028b5e08 != 0;
      DAT_028b5e08 = lVar7;
      if (bVar2) {
        FUN_00d50b20();
        lVar7 = local_40;
      }
    }
    if ((lVar7 != 0) && (DAT_028b5e10 == '\0')) {
      DAT_028b5e10 = '\x01';
      FUN_00e8cb90();
      lVar7 = local_40;
    }
    if ((local_38 != '\0') && (lVar7 != 0)) {
      FUN_00d50b20();
    }
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
  }
  lVar3 = DAT_026d8400;
  if (DAT_028b5e18 == 0) {
    if (DAT_026d8400 != 0) {
      FUN_00d50b00();
    }
    FUN_00c841b0();
    lVar7 = DAT_028b5e18;
    if (DAT_028b5e18 != local_40) {
      if (local_38 == '\0') {
        if (local_40 == 0) {
          lVar7 = 0;
        }
        else {
          FUN_00d50b00();
          lVar7 = local_40;
        }
      }
      else {
        local_38 = '\0';
        lVar7 = local_40;
      }
      bVar2 = DAT_028b5e18 != 0;
      DAT_028b5e18 = lVar7;
      if (bVar2) {
        FUN_00d50b20();
        lVar7 = local_40;
      }
    }
    if ((lVar7 != 0) && (DAT_028b5e20 == '\0')) {
      DAT_028b5e20 = '\x01';
      FUN_00e8cb90();
      lVar7 = local_40;
    }
    if ((local_38 != '\0') && (lVar7 != 0)) {
      FUN_00d50b20();
    }
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
  }
  lVar3 = DAT_026d83e8;
  if (DAT_028b5e28 == 0) {
    if (DAT_026d83e8 != 0) {
      FUN_00d50b00();
    }
    FUN_00c841b0();
    lVar7 = DAT_028b5e28;
    if (DAT_028b5e28 != local_40) {
      if (local_38 == '\0') {
        if (local_40 == 0) {
          lVar7 = 0;
        }
        else {
          FUN_00d50b00();
          lVar7 = local_40;
        }
      }
      else {
        local_38 = '\0';
        lVar7 = local_40;
      }
      bVar2 = DAT_028b5e28 != 0;
      DAT_028b5e28 = lVar7;
      if (bVar2) {
        FUN_00d50b20();
        lVar7 = local_40;
      }
    }
    if ((lVar7 != 0) && (DAT_028b5e30 == '\0')) {
      DAT_028b5e30 = '\x01';
      FUN_00e8cb90();
      lVar7 = local_40;
    }
    if ((local_38 != '\0') && (lVar7 != 0)) {
      FUN_00d50b20();
    }
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
  }
  lVar3 = DAT_026d83e0;
  if (DAT_028b5e38 == 0) {
    if (DAT_026d83e0 != 0) {
      FUN_00d50b00();
    }
    FUN_00c841b0();
    lVar7 = DAT_028b5e38;
    if (DAT_028b5e38 != local_40) {
      if (local_38 == '\0') {
        if (local_40 == 0) {
          lVar7 = 0;
        }
        else {
          FUN_00d50b00();
          lVar7 = local_40;
        }
      }
      else {
        local_38 = '\0';
        lVar7 = local_40;
      }
      bVar2 = DAT_028b5e38 != 0;
      DAT_028b5e38 = lVar7;
      if (bVar2) {
        FUN_00d50b20();
        lVar7 = local_40;
      }
    }
    if ((lVar7 != 0) && (DAT_028b5e40 == '\0')) {
      DAT_028b5e40 = '\x01';
      FUN_00e8cb90();
      lVar7 = local_40;
    }
    if ((local_38 != '\0') && (lVar7 != 0)) {
      FUN_00d50b20();
    }
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
  }
  lVar3 = DAT_027e0af0;
  if (DAT_028b5e48 == 0) {
    if (DAT_027e0af0 != 0) {
      FUN_00d50b00();
    }
    FUN_00c841b0();
    lVar7 = DAT_028b5e48;
    if (DAT_028b5e48 != local_40) {
      if (local_38 == '\0') {
        if (local_40 == 0) {
          lVar7 = 0;
        }
        else {
          FUN_00d50b00();
          lVar7 = local_40;
        }
      }
      else {
        local_38 = '\0';
        lVar7 = local_40;
      }
      bVar2 = DAT_028b5e48 != 0;
      DAT_028b5e48 = lVar7;
      if (bVar2) {
        FUN_00d50b20();
        lVar7 = local_40;
      }
    }
    if ((lVar7 != 0) && (DAT_028b5e50 == '\0')) {
      DAT_028b5e50 = '\x01';
      FUN_00e8cb90();
      lVar7 = local_40;
    }
    if ((local_38 != '\0') && (lVar7 != 0)) {
      FUN_00d50b20();
    }
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
  }
  lVar3 = DAT_027e0af8;
  if (DAT_028b5e58 == 0) {
    if (DAT_027e0af8 != 0) {
      FUN_00d50b00();
    }
    FUN_00c841b0();
    lVar7 = DAT_028b5e58;
    if (DAT_028b5e58 != local_40) {
      if (local_38 == '\0') {
        if (local_40 == 0) {
          lVar7 = 0;
        }
        else {
          FUN_00d50b00();
          lVar7 = local_40;
        }
      }
      else {
        local_38 = '\0';
        lVar7 = local_40;
      }
      bVar2 = DAT_028b5e58 != 0;
      DAT_028b5e58 = lVar7;
      if (bVar2) {
        FUN_00d50b20();
        lVar7 = local_40;
      }
    }
    if ((lVar7 != 0) && (DAT_028b5e60 == '\0')) {
      DAT_028b5e60 = '\x01';
      FUN_00e8cb90();
      lVar7 = local_40;
    }
    if ((local_38 != '\0') && (lVar7 != 0)) {
      FUN_00d50b20();
    }
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
  }
  lVar3 = DAT_027e0b00;
  if (DAT_028b5e68 == 0) {
    if (DAT_027e0b00 != 0) {
      FUN_00d50b00();
    }
    FUN_00c841b0();
    lVar7 = DAT_028b5e68;
    if (DAT_028b5e68 != local_40) {
      if (local_38 == '\0') {
        if (local_40 == 0) {
          lVar7 = 0;
        }
        else {
          FUN_00d50b00();
          lVar7 = local_40;
        }
      }
      else {
        local_38 = '\0';
        lVar7 = local_40;
      }
      bVar2 = DAT_028b5e68 != 0;
      DAT_028b5e68 = lVar7;
      if (bVar2) {
        FUN_00d50b20();
        lVar7 = local_40;
      }
    }
    if ((lVar7 != 0) && (DAT_028b5e70 == '\0')) {
      DAT_028b5e70 = '\x01';
      FUN_00e8cb90();
      lVar7 = local_40;
    }
    if ((local_38 != '\0') && (lVar7 != 0)) {
      FUN_00d50b20();
    }
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
  }
  lVar3 = DAT_027e0b08;
  if (DAT_028b5e78 == 0) {
    if (DAT_027e0b08 != 0) {
      FUN_00d50b00();
    }
    FUN_00c841b0();
    lVar7 = DAT_028b5e78;
    if (DAT_028b5e78 != local_40) {
      if (local_38 == '\0') {
        if (local_40 == 0) {
          lVar7 = 0;
        }
        else {
          FUN_00d50b00();
          lVar7 = local_40;
        }
      }
      else {
        local_38 = '\0';
        lVar7 = local_40;
      }
      bVar2 = DAT_028b5e78 != 0;
      DAT_028b5e78 = lVar7;
      if (bVar2) {
        FUN_00d50b20();
        lVar7 = local_40;
      }
    }
    if ((lVar7 != 0) && (DAT_028b5e80 == '\0')) {
      DAT_028b5e80 = '\x01';
      FUN_00e8cb90();
      lVar7 = local_40;
    }
    if ((local_38 != '\0') && (lVar7 != 0)) {
      FUN_00d50b20();
    }
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
  }
  plVar1 = unaff_RDI + 2;
  local_188 = 0;
  (**(code **)(unaff_RDI[2] + 0x10))();
  FUN_00d50b00();
  local_180 = DAT_028b5df8;
  local_188 = '\x01';
  local_240 = 0;
  local_238 = '\0';
  local_178 = 0;
  local_190 = plVar1;
  if (DAT_028b5df8 != 0) {
    FUN_00d50b00();
  }
  local_178 = '\x01';
  FUN_00cbad30(&local_180,&local_240,0xa0);
  if ((local_178 != '\0') && (local_180 != 0)) {
    FUN_00d50b20();
  }
  if ((local_238 != '\0') && (local_240 != 0)) {
    FUN_00d50b20();
  }
  if ((local_188 != '\0') && (local_190 != (longlong *)0x0)) {
    (**(code **)(*local_190 + 0x10))();
    FUN_00d50b20();
  }
  local_168 = 0;
  (**(code **)(*plVar1 + 0x10))();
  FUN_00d50b00();
  local_160 = DAT_028b5e08;
  local_168 = '\x01';
  local_230 = 0;
  local_228 = '\0';
  local_158 = 0;
  local_170 = plVar1;
  if (DAT_028b5e08 != 0) {
    FUN_00d50b00();
  }
  local_158 = '\x01';
  FUN_00cbad30(&local_160,&local_230,0xa0);
  if ((local_158 != '\0') && (local_160 != 0)) {
    FUN_00d50b20();
  }
  if ((local_228 != '\0') && (local_230 != 0)) {
    FUN_00d50b20();
  }
  if ((local_168 != '\0') && (local_170 != (longlong *)0x0)) {
    (**(code **)(*local_170 + 0x10))();
    FUN_00d50b20();
  }
  local_148 = 0;
  (**(code **)(*plVar1 + 0x10))();
  FUN_00d50b00();
  local_140 = DAT_028b5e18;
  local_148 = '\x01';
  local_220 = 0;
  local_218 = '\0';
  local_138 = 0;
  local_150 = plVar1;
  if (DAT_028b5e18 != 0) {
    FUN_00d50b00();
  }
  local_138 = '\x01';
  FUN_00cbad30(&local_140,&local_220,0xa0);
  if ((local_138 != '\0') && (local_140 != 0)) {
    FUN_00d50b20();
  }
  if ((local_218 != '\0') && (local_220 != 0)) {
    FUN_00d50b20();
  }
  if ((local_148 != '\0') && (local_150 != (longlong *)0x0)) {
    (**(code **)(*local_150 + 0x10))();
    FUN_00d50b20();
  }
  local_128 = 0;
  (**(code **)(*plVar1 + 0x10))();
  FUN_00d50b00();
  local_120 = DAT_028b5e28;
  local_128 = '\x01';
  local_210 = 0;
  local_208 = '\0';
  local_118 = 0;
  local_130 = plVar1;
  if (DAT_028b5e28 != 0) {
    FUN_00d50b00();
  }
  local_118 = '\x01';
  FUN_00cbad30(&local_120,&local_210,0xa0);
  if ((local_118 != '\0') && (local_120 != 0)) {
    FUN_00d50b20();
  }
  if ((local_208 != '\0') && (local_210 != 0)) {
    FUN_00d50b20();
  }
  if ((local_128 != '\0') && (local_130 != (longlong *)0x0)) {
    (**(code **)(*local_130 + 0x10))();
    FUN_00d50b20();
  }
  local_108 = 0;
  (**(code **)(*plVar1 + 0x10))();
  FUN_00d50b00();
  local_100 = DAT_028b5e38;
  local_108 = '\x01';
  local_200 = 0;
  local_1f8 = '\0';
  local_f8 = 0;
  local_110 = plVar1;
  if (DAT_028b5e38 != 0) {
    FUN_00d50b00();
  }
  local_f8 = '\x01';
  FUN_00cbad30(&local_100,&local_200,0xa0);
  if ((local_f8 != '\0') && (local_100 != 0)) {
    FUN_00d50b20();
  }
  if ((local_1f8 != '\0') && (local_200 != 0)) {
    FUN_00d50b20();
  }
  if ((local_108 != '\0') && (local_110 != (longlong *)0x0)) {
    (**(code **)(*local_110 + 0x10))();
    FUN_00d50b20();
  }
  local_e8 = 0;
  (**(code **)(*plVar1 + 0x10))();
  FUN_00d50b00();
  local_e0 = DAT_028b5e48;
  local_e8 = '\x01';
  local_1f0 = 0;
  local_1e8 = '\0';
  local_d8 = 0;
  local_f0 = plVar1;
  if (DAT_028b5e48 != 0) {
    FUN_00d50b00();
  }
  local_d8 = '\x01';
  FUN_00cbad30(&local_e0,&local_1f0,0xa0);
  if ((local_d8 != '\0') && (local_e0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_1e8 != '\0') && (local_1f0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_e8 != '\0') && (local_f0 != (longlong *)0x0)) {
    (**(code **)(*local_f0 + 0x10))();
    FUN_00d50b20();
  }
  local_c8 = 0;
  (**(code **)(*plVar1 + 0x10))();
  FUN_00d50b00();
  local_c0 = DAT_028b5e58;
  local_c8 = '\x01';
  local_1e0 = 0;
  local_1d8 = '\0';
  local_b8 = 0;
  local_d0 = plVar1;
  if (DAT_028b5e58 != 0) {
    FUN_00d50b00();
  }
  local_b8 = '\x01';
  FUN_00cbad30(&local_c0,&local_1e0,0xa0);
  if ((local_b8 != '\0') && (local_c0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_1d8 != '\0') && (local_1e0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_c8 != '\0') && (local_d0 != (longlong *)0x0)) {
    (**(code **)(*local_d0 + 0x10))();
    FUN_00d50b20();
  }
  local_a8 = 0;
  (**(code **)(*plVar1 + 0x10))();
  FUN_00d50b00();
  local_a0 = DAT_028b5e68;
  local_a8 = '\x01';
  local_1d0 = 0;
  local_1c8 = '\0';
  local_98 = 0;
  local_b0 = plVar1;
  if (DAT_028b5e68 != 0) {
    FUN_00d50b00();
  }
  local_98 = '\x01';
  FUN_00cbad30(&local_a0,&local_1d0,0xa0);
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_1c8 != '\0') && (local_1d0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_a8 != '\0') && (local_b0 != (longlong *)0x0)) {
    (**(code **)(*local_b0 + 0x10))();
    FUN_00d50b20();
  }
  local_88 = 0;
  (**(code **)(*plVar1 + 0x10))();
  FUN_00d50b00();
  local_80 = DAT_028b5e78;
  local_88 = '\x01';
  local_1c0 = 0;
  local_1b8 = '\0';
  local_78 = 0;
  local_90 = plVar1;
  if (DAT_028b5e78 != 0) {
    FUN_00d50b00();
  }
  local_78 = '\x01';
  FUN_00cbad30(&local_80,&local_1c0,0xa0);
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  if ((local_1b8 != '\0') && (local_1c0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
    (**(code **)(*local_90 + 0x10))();
    FUN_00d50b20();
  }
  local_68 = 0;
  (**(code **)(*plVar1 + 0x10))();
  FUN_00d50b00();
  local_68 = '\x01';
  local_70 = plVar1;
  (**(code **)(*unaff_RDI + 0x398))();
  local_60 = local_40;
  local_58 = 0;
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  local_58 = '\x01';
  FUN_000823a0();
  FUN_00e86210();
  local_1b0 = DAT_026f6f60;
  if (DAT_026f6f60 != 0) {
    FUN_00d50b00();
  }
  local_1a8 = '\x01';
  FUN_00c841b0();
  local_50 = local_1a0;
  local_48 = 0;
  if (local_198 == '\0') {
    if (local_1a0 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_198 = '\0';
  }
  local_48 = '\x01';
  FUN_00cbad30(&local_50,&local_60,0xa0);
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((local_198 != '\0') && (local_1a0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_1a8 != '\0') && (local_1b0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
    (**(code **)(*local_70 + 0x10))();
    FUN_00d50b20();
  }
  FUN_01bc4530();
  if (lVar6 != 0) {
    FUN_00d50b20();
  }
  if (lVar5 != 0) {
    FUN_00d50b20();
  }
  return;
}


