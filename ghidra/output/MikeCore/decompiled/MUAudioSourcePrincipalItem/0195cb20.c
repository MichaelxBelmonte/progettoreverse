// Function: FUN_0195cb20
// Address: 0195cb20
// Size: 10769 bytes
// Class: MUAudioSourcePrincipalItem
// String references:
//   "MUAudioSourcePrincipalItem"


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0195cb20(pthread_key_t param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  int iVar2;
  void *pvVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *in_RDX;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong *plVar6;
  bool bVar7;
  undefined8 uVar8;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar9 [16];
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 in_XMM1_Dc;
  undefined4 uVar14;
  undefined4 in_XMM1_Dd;
  undefined4 uVar15;
  undefined1 auVar16 [16];
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
  longlong local_d0;
  char local_c8;
  longlong local_c0;
  char local_b8;
  longlong local_b0;
  char local_a8;
  longlong local_a0;
  char local_98;
  longlong local_90;
  char local_88;
  longlong local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong *local_60;
  char local_58;
  longlong *local_50;
  char local_48;
  longlong *local_40;
  char local_38;
  
  uVar12 = (undefined4)((ulonglong)param_2 >> 0x20);
  uVar10 = (undefined4)param_2;
  if ((DAT_028b0dd8 == (longlong *)0x0) || (DAT_028b0de1 == '\0')) {
    FUN_00e8cb50();
    if (DAT_028b0dd8 == (longlong *)0x0) {
      FUN_0006e1c0();
      uVar8 = FUN_00e86210();
      local_1e0 = DAT_027e0af0;
      if (DAT_027e0af0 != 0) {
        uVar8 = FUN_00d50b00();
      }
      local_1d8 = '\x01';
      FUN_00c841b0(uVar8,&local_1e0);
      plVar4 = DAT_028b0dd8;
      if (DAT_028b0dd8 != local_40) {
        if (local_38 == '\0') {
          if (local_40 == (longlong *)0x0) {
            plVar4 = (longlong *)0x0;
          }
          else {
            FUN_00d50b00();
            plVar4 = local_40;
          }
        }
        else {
          local_38 = '\0';
          plVar4 = local_40;
        }
        param_1 = (pthread_key_t)DAT_028b0dd8;
        bVar7 = DAT_028b0dd8 != (longlong *)0x0;
        DAT_028b0dd8 = plVar4;
        if (bVar7) {
          FUN_00d50b20();
          plVar4 = local_40;
        }
      }
      if ((plVar4 != (longlong *)0x0) && (DAT_028b0de0 == '\0')) {
        DAT_028b0de0 = '\x01';
        FUN_00e8cb90();
        plVar4 = local_40;
      }
      if ((local_38 != '\0') && (plVar4 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_1d8 != '\0') && (local_1e0 != 0)) {
        FUN_00d50b20();
      }
      DAT_028b0de1 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028b0de1 = '\x01';
      FUN_00e8cb70();
    }
  }
  if ((DAT_028b0de8 == (longlong *)0x0) || (DAT_028b0df1 == '\0')) {
    FUN_00e8cb50();
    if (DAT_028b0de8 == (longlong *)0x0) {
      FUN_0006e1c0();
      uVar8 = FUN_00e86210();
      local_1d0 = DAT_027e0af8;
      if (DAT_027e0af8 != 0) {
        uVar8 = FUN_00d50b00();
      }
      local_1c8 = '\x01';
      FUN_00c841b0(uVar8,&local_1d0);
      plVar4 = DAT_028b0de8;
      if (DAT_028b0de8 != local_40) {
        if (local_38 == '\0') {
          if (local_40 == (longlong *)0x0) {
            plVar4 = (longlong *)0x0;
          }
          else {
            FUN_00d50b00();
            plVar4 = local_40;
          }
        }
        else {
          local_38 = '\0';
          plVar4 = local_40;
        }
        param_1 = (pthread_key_t)DAT_028b0de8;
        bVar7 = DAT_028b0de8 != (longlong *)0x0;
        DAT_028b0de8 = plVar4;
        if (bVar7) {
          FUN_00d50b20();
          plVar4 = local_40;
        }
      }
      if ((plVar4 != (longlong *)0x0) && (DAT_028b0df0 == '\0')) {
        DAT_028b0df0 = '\x01';
        FUN_00e8cb90();
        plVar4 = local_40;
      }
      if ((local_38 != '\0') && (plVar4 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_1c8 != '\0') && (local_1d0 != 0)) {
        FUN_00d50b20();
      }
      DAT_028b0df1 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028b0df1 = '\x01';
      FUN_00e8cb70();
    }
  }
  if ((DAT_028b0df8 == (longlong *)0x0) || (DAT_028b0e01 == '\0')) {
    FUN_00e8cb50();
    if (DAT_028b0df8 == (longlong *)0x0) {
      FUN_0006e1c0();
      uVar8 = FUN_00e86210();
      local_1c0 = DAT_027e0b00;
      if (DAT_027e0b00 != 0) {
        uVar8 = FUN_00d50b00();
      }
      local_1b8 = '\x01';
      FUN_00c841b0(uVar8,&local_1c0);
      plVar4 = DAT_028b0df8;
      if (DAT_028b0df8 != local_40) {
        if (local_38 == '\0') {
          if (local_40 == (longlong *)0x0) {
            plVar4 = (longlong *)0x0;
          }
          else {
            FUN_00d50b00();
            plVar4 = local_40;
          }
        }
        else {
          local_38 = '\0';
          plVar4 = local_40;
        }
        param_1 = (pthread_key_t)DAT_028b0df8;
        bVar7 = DAT_028b0df8 != (longlong *)0x0;
        DAT_028b0df8 = plVar4;
        if (bVar7) {
          FUN_00d50b20();
          plVar4 = local_40;
        }
      }
      if ((plVar4 != (longlong *)0x0) && (DAT_028b0e00 == '\0')) {
        DAT_028b0e00 = '\x01';
        FUN_00e8cb90();
        plVar4 = local_40;
      }
      if ((local_38 != '\0') && (plVar4 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_1b8 != '\0') && (local_1c0 != 0)) {
        FUN_00d50b20();
      }
      DAT_028b0e01 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028b0e01 = '\x01';
      FUN_00e8cb70();
    }
  }
  if ((DAT_028b0e08 == (longlong *)0x0) || (DAT_028b0e11 == '\0')) {
    FUN_00e8cb50();
    if (DAT_028b0e08 == (longlong *)0x0) {
      FUN_0006e1c0();
      uVar8 = FUN_00e86210();
      local_1b0 = DAT_027e0b08;
      if (DAT_027e0b08 != 0) {
        uVar8 = FUN_00d50b00();
      }
      local_1a8 = '\x01';
      FUN_00c841b0(uVar8,&local_1b0);
      plVar4 = DAT_028b0e08;
      if (DAT_028b0e08 != local_40) {
        if (local_38 == '\0') {
          if (local_40 == (longlong *)0x0) {
            plVar4 = (longlong *)0x0;
          }
          else {
            FUN_00d50b00();
            plVar4 = local_40;
          }
        }
        else {
          local_38 = '\0';
          plVar4 = local_40;
        }
        param_1 = (pthread_key_t)DAT_028b0e08;
        bVar7 = DAT_028b0e08 != (longlong *)0x0;
        DAT_028b0e08 = plVar4;
        if (bVar7) {
          FUN_00d50b20();
          plVar4 = local_40;
        }
      }
      if ((plVar4 != (longlong *)0x0) && (DAT_028b0e10 == '\0')) {
        DAT_028b0e10 = '\x01';
        FUN_00e8cb90();
        plVar4 = local_40;
      }
      if ((local_38 != '\0') && (plVar4 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_1a8 != '\0') && (local_1b0 != 0)) {
        FUN_00d50b20();
      }
      DAT_028b0e11 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028b0e11 = '\x01';
      FUN_00e8cb70();
    }
  }
  if ((DAT_028b0c98 == (longlong *)0x0) || (DAT_028b0ca1 == '\0')) {
    FUN_00e8cb50();
    if (DAT_028b0c98 == (longlong *)0x0) {
      FUN_0006e1c0();
      uVar8 = FUN_00e86210();
      local_1a0 = DAT_026d8400;
      if (DAT_026d8400 != 0) {
        uVar8 = FUN_00d50b00();
      }
      local_198 = '\x01';
      FUN_00c841b0(uVar8,&local_1a0);
      plVar4 = DAT_028b0c98;
      if (DAT_028b0c98 != local_40) {
        if (local_38 == '\0') {
          if (local_40 == (longlong *)0x0) {
            plVar4 = (longlong *)0x0;
          }
          else {
            FUN_00d50b00();
            plVar4 = local_40;
          }
        }
        else {
          local_38 = '\0';
          plVar4 = local_40;
        }
        param_1 = (pthread_key_t)DAT_028b0c98;
        bVar7 = DAT_028b0c98 != (longlong *)0x0;
        DAT_028b0c98 = plVar4;
        if (bVar7) {
          FUN_00d50b20();
          plVar4 = local_40;
        }
      }
      if ((plVar4 != (longlong *)0x0) && (DAT_028b0ca0 == '\0')) {
        DAT_028b0ca0 = '\x01';
        FUN_00e8cb90();
        plVar4 = local_40;
      }
      if ((local_38 != '\0') && (plVar4 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_198 != '\0') && (local_1a0 != 0)) {
        FUN_00d50b20();
      }
      DAT_028b0ca1 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028b0ca1 = '\x01';
      FUN_00e8cb70();
    }
  }
  if ((DAT_028b0ca8 == (longlong *)0x0) || (DAT_028b0cb1 == '\0')) {
    FUN_00e8cb50();
    if (DAT_028b0ca8 == (longlong *)0x0) {
      FUN_007ef2d0();
      uVar8 = FUN_00e86210();
      local_190 = DAT_027e0b10;
      if (DAT_027e0b10 != 0) {
        uVar8 = FUN_00d50b00();
      }
      local_188 = '\x01';
      FUN_00c841b0(uVar8,&local_190);
      plVar4 = DAT_028b0ca8;
      if (DAT_028b0ca8 != local_40) {
        if (local_38 == '\0') {
          if (local_40 == (longlong *)0x0) {
            plVar4 = (longlong *)0x0;
          }
          else {
            FUN_00d50b00();
            plVar4 = local_40;
          }
        }
        else {
          local_38 = '\0';
          plVar4 = local_40;
        }
        param_1 = (pthread_key_t)DAT_028b0ca8;
        bVar7 = DAT_028b0ca8 != (longlong *)0x0;
        DAT_028b0ca8 = plVar4;
        if (bVar7) {
          FUN_00d50b20();
          plVar4 = local_40;
        }
      }
      if ((plVar4 != (longlong *)0x0) && (DAT_028b0cb0 == '\0')) {
        DAT_028b0cb0 = '\x01';
        FUN_00e8cb90();
        plVar4 = local_40;
      }
      if ((local_38 != '\0') && (plVar4 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_188 != '\0') && (local_190 != 0)) {
        FUN_00d50b20();
      }
      DAT_028b0cb1 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028b0cb1 = '\x01';
      FUN_00e8cb70();
    }
  }
  if ((DAT_028b0d28 == (longlong *)0x0) || (DAT_028b0d31 == '\0')) {
    FUN_00e8cb50();
    if (DAT_028b0d28 == (longlong *)0x0) {
      FUN_011b49f0();
      uVar8 = FUN_00e86210();
      local_180 = DAT_027bf048;
      if (DAT_027bf048 != 0) {
        uVar8 = FUN_00d50b00();
      }
      local_178 = '\x01';
      FUN_00c841b0(uVar8,&local_180);
      plVar4 = DAT_028b0d28;
      if (DAT_028b0d28 != local_40) {
        if (local_38 == '\0') {
          if (local_40 == (longlong *)0x0) {
            plVar4 = (longlong *)0x0;
          }
          else {
            FUN_00d50b00();
            plVar4 = local_40;
          }
        }
        else {
          local_38 = '\0';
          plVar4 = local_40;
        }
        param_1 = (pthread_key_t)DAT_028b0d28;
        bVar7 = DAT_028b0d28 != (longlong *)0x0;
        DAT_028b0d28 = plVar4;
        if (bVar7) {
          FUN_00d50b20();
          plVar4 = local_40;
        }
      }
      if ((plVar4 != (longlong *)0x0) && (DAT_028b0d30 == '\0')) {
        DAT_028b0d30 = '\x01';
        FUN_00e8cb90();
        plVar4 = local_40;
      }
      if ((local_38 != '\0') && (plVar4 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_178 != '\0') && (local_180 != 0)) {
        FUN_00d50b20();
      }
      DAT_028b0d31 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028b0d31 = '\x01';
      FUN_00e8cb70();
    }
  }
  if ((DAT_028b0d38 == (longlong *)0x0) || (DAT_028b0d41 == '\0')) {
    FUN_00e8cb50();
    if (DAT_028b0d38 == (longlong *)0x0) {
      FUN_011b49f0();
      uVar8 = FUN_00e86210();
      local_170 = DAT_027e1e80;
      if (DAT_027e1e80 != 0) {
        uVar8 = FUN_00d50b00();
      }
      local_168 = '\x01';
      FUN_00c841b0(uVar8,&local_170);
      plVar4 = DAT_028b0d38;
      if (DAT_028b0d38 != local_40) {
        if (local_38 == '\0') {
          if (local_40 == (longlong *)0x0) {
            plVar4 = (longlong *)0x0;
          }
          else {
            FUN_00d50b00();
            plVar4 = local_40;
          }
        }
        else {
          local_38 = '\0';
          plVar4 = local_40;
        }
        param_1 = (pthread_key_t)DAT_028b0d38;
        bVar7 = DAT_028b0d38 != (longlong *)0x0;
        DAT_028b0d38 = plVar4;
        if (bVar7) {
          FUN_00d50b20();
          plVar4 = local_40;
        }
      }
      if ((plVar4 != (longlong *)0x0) && (DAT_028b0d40 == '\0')) {
        DAT_028b0d40 = '\x01';
        FUN_00e8cb90();
        plVar4 = local_40;
      }
      if ((local_38 != '\0') && (plVar4 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_168 != '\0') && (local_170 != 0)) {
        FUN_00d50b20();
      }
      DAT_028b0d41 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028b0d41 = '\x01';
      FUN_00e8cb70();
    }
  }
  if ((DAT_028b0cb8 == (longlong *)0x0) || (DAT_028b0cc1 == '\0')) {
    FUN_00e8cb50();
    if (DAT_028b0cb8 == (longlong *)0x0) {
      FUN_0006e1c0();
      uVar8 = FUN_00e86210();
      local_160 = DAT_026d83e8;
      if (DAT_026d83e8 != 0) {
        uVar8 = FUN_00d50b00();
      }
      local_158 = '\x01';
      FUN_00c841b0(uVar8,&local_160);
      plVar4 = DAT_028b0cb8;
      if (DAT_028b0cb8 != local_40) {
        if (local_38 == '\0') {
          if (local_40 == (longlong *)0x0) {
            plVar4 = (longlong *)0x0;
          }
          else {
            FUN_00d50b00();
            plVar4 = local_40;
          }
        }
        else {
          local_38 = '\0';
          plVar4 = local_40;
        }
        param_1 = (pthread_key_t)DAT_028b0cb8;
        bVar7 = DAT_028b0cb8 != (longlong *)0x0;
        DAT_028b0cb8 = plVar4;
        if (bVar7) {
          FUN_00d50b20();
          plVar4 = local_40;
        }
      }
      if ((plVar4 != (longlong *)0x0) && (DAT_028b0cc0 == '\0')) {
        DAT_028b0cc0 = '\x01';
        FUN_00e8cb90();
        plVar4 = local_40;
      }
      if ((local_38 != '\0') && (plVar4 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_158 != '\0') && (local_160 != 0)) {
        FUN_00d50b20();
      }
      DAT_028b0cc1 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028b0cc1 = '\x01';
      FUN_00e8cb70();
    }
  }
  if ((DAT_028b0cc8 == (longlong *)0x0) || (DAT_028b0cd1 == '\0')) {
    FUN_00e8cb50();
    if (DAT_028b0cc8 == (longlong *)0x0) {
      FUN_0006e1c0();
      uVar8 = FUN_00e86210();
      local_150 = DAT_026d83f8;
      if (DAT_026d83f8 != 0) {
        uVar8 = FUN_00d50b00();
      }
      local_148 = '\x01';
      FUN_00c841b0(uVar8,&local_150);
      plVar4 = DAT_028b0cc8;
      if (DAT_028b0cc8 != local_40) {
        if (local_38 == '\0') {
          if (local_40 == (longlong *)0x0) {
            plVar4 = (longlong *)0x0;
          }
          else {
            FUN_00d50b00();
            plVar4 = local_40;
          }
        }
        else {
          local_38 = '\0';
          plVar4 = local_40;
        }
        param_1 = (pthread_key_t)DAT_028b0cc8;
        bVar7 = DAT_028b0cc8 != (longlong *)0x0;
        DAT_028b0cc8 = plVar4;
        if (bVar7) {
          FUN_00d50b20();
          plVar4 = local_40;
        }
      }
      if ((plVar4 != (longlong *)0x0) && (DAT_028b0cd0 == '\0')) {
        DAT_028b0cd0 = '\x01';
        FUN_00e8cb90();
        plVar4 = local_40;
      }
      if ((local_38 != '\0') && (plVar4 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_148 != '\0') && (local_150 != 0)) {
        FUN_00d50b20();
      }
      DAT_028b0cd1 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028b0cd1 = '\x01';
      FUN_00e8cb70();
    }
  }
  if ((DAT_028b0cd8 == (longlong *)0x0) || (DAT_028b0ce1 == '\0')) {
    FUN_00e8cb50();
    if (DAT_028b0cd8 == (longlong *)0x0) {
      FUN_0006e1c0();
      uVar8 = FUN_00e86210();
      local_140 = DAT_027e0b18;
      if (DAT_027e0b18 != 0) {
        uVar8 = FUN_00d50b00();
      }
      local_138 = '\x01';
      FUN_00c841b0(uVar8,&local_140);
      plVar4 = DAT_028b0cd8;
      if (DAT_028b0cd8 != local_40) {
        if (local_38 == '\0') {
          if (local_40 == (longlong *)0x0) {
            plVar4 = (longlong *)0x0;
          }
          else {
            FUN_00d50b00();
            plVar4 = local_40;
          }
        }
        else {
          local_38 = '\0';
          plVar4 = local_40;
        }
        param_1 = (pthread_key_t)DAT_028b0cd8;
        bVar7 = DAT_028b0cd8 != (longlong *)0x0;
        DAT_028b0cd8 = plVar4;
        if (bVar7) {
          FUN_00d50b20();
          plVar4 = local_40;
        }
      }
      if ((plVar4 != (longlong *)0x0) && (DAT_028b0ce0 == '\0')) {
        DAT_028b0ce0 = '\x01';
        FUN_00e8cb90();
        plVar4 = local_40;
      }
      if ((local_38 != '\0') && (plVar4 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_138 != '\0') && (local_140 != 0)) {
        FUN_00d50b20();
      }
      DAT_028b0ce1 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028b0ce1 = '\x01';
      FUN_00e8cb70();
    }
  }
  if ((DAT_028b0ce8 == (longlong *)0x0) || (DAT_028b0cf1 == '\0')) {
    FUN_00e8cb50();
    if (DAT_028b0ce8 == (longlong *)0x0) {
      FUN_0006e1c0();
      uVar8 = FUN_00e86210();
      local_130 = DAT_027e0b20;
      if (DAT_027e0b20 != 0) {
        uVar8 = FUN_00d50b00();
      }
      local_128 = '\x01';
      FUN_00c841b0(uVar8,&local_130);
      plVar4 = DAT_028b0ce8;
      if (DAT_028b0ce8 != local_40) {
        if (local_38 == '\0') {
          if (local_40 == (longlong *)0x0) {
            plVar4 = (longlong *)0x0;
          }
          else {
            FUN_00d50b00();
            plVar4 = local_40;
          }
        }
        else {
          local_38 = '\0';
          plVar4 = local_40;
        }
        param_1 = (pthread_key_t)DAT_028b0ce8;
        bVar7 = DAT_028b0ce8 != (longlong *)0x0;
        DAT_028b0ce8 = plVar4;
        if (bVar7) {
          FUN_00d50b20();
          plVar4 = local_40;
        }
      }
      if ((plVar4 != (longlong *)0x0) && (DAT_028b0cf0 == '\0')) {
        DAT_028b0cf0 = '\x01';
        FUN_00e8cb90();
        plVar4 = local_40;
      }
      if ((local_38 != '\0') && (plVar4 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_128 != '\0') && (local_130 != 0)) {
        FUN_00d50b20();
      }
      DAT_028b0cf1 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028b0cf1 = '\x01';
      FUN_00e8cb70();
    }
  }
  if ((DAT_028b0cf8 == (longlong *)0x0) || (DAT_028b0d01 == '\0')) {
    FUN_00e8cb50();
    if (DAT_028b0cf8 == (longlong *)0x0) {
      FUN_0006e1c0();
      uVar8 = FUN_00e86210();
      local_120 = DAT_027e3ba0;
      if (DAT_027e3ba0 != 0) {
        uVar8 = FUN_00d50b00();
      }
      local_118 = '\x01';
      FUN_00c841b0(uVar8,&local_120);
      plVar4 = DAT_028b0cf8;
      if (DAT_028b0cf8 != local_40) {
        if (local_38 == '\0') {
          if (local_40 == (longlong *)0x0) {
            plVar4 = (longlong *)0x0;
          }
          else {
            FUN_00d50b00();
            plVar4 = local_40;
          }
        }
        else {
          local_38 = '\0';
          plVar4 = local_40;
        }
        param_1 = (pthread_key_t)DAT_028b0cf8;
        bVar7 = DAT_028b0cf8 != (longlong *)0x0;
        DAT_028b0cf8 = plVar4;
        if (bVar7) {
          FUN_00d50b20();
          plVar4 = local_40;
        }
      }
      if ((plVar4 != (longlong *)0x0) && (DAT_028b0d00 == '\0')) {
        DAT_028b0d00 = '\x01';
        FUN_00e8cb90();
        plVar4 = local_40;
      }
      if ((local_38 != '\0') && (plVar4 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_118 != '\0') && (local_120 != 0)) {
        FUN_00d50b20();
      }
      DAT_028b0d01 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028b0d01 = '\x01';
      FUN_00e8cb70();
    }
  }
  if ((DAT_028b0d08 == (longlong *)0x0) || (DAT_028b0d11 == '\0')) {
    FUN_00e8cb50();
    if (DAT_028b0d08 == (longlong *)0x0) {
      FUN_0006e1c0();
      uVar8 = FUN_00e86210();
      local_110 = DAT_026fe480;
      if (DAT_026fe480 != 0) {
        uVar8 = FUN_00d50b00();
      }
      local_108 = '\x01';
      FUN_00c841b0(uVar8,&local_110);
      plVar4 = DAT_028b0d08;
      if (DAT_028b0d08 != local_40) {
        if (local_38 == '\0') {
          if (local_40 == (longlong *)0x0) {
            plVar4 = (longlong *)0x0;
          }
          else {
            FUN_00d50b00();
            plVar4 = local_40;
          }
        }
        else {
          local_38 = '\0';
          plVar4 = local_40;
        }
        param_1 = (pthread_key_t)DAT_028b0d08;
        bVar7 = DAT_028b0d08 != (longlong *)0x0;
        DAT_028b0d08 = plVar4;
        if (bVar7) {
          FUN_00d50b20();
          plVar4 = local_40;
        }
      }
      if ((plVar4 != (longlong *)0x0) && (DAT_028b0d10 == '\0')) {
        DAT_028b0d10 = '\x01';
        FUN_00e8cb90();
        plVar4 = local_40;
      }
      if ((local_38 != '\0') && (plVar4 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_108 != '\0') && (local_110 != 0)) {
        FUN_00d50b20();
      }
      DAT_028b0d11 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028b0d11 = '\x01';
      FUN_00e8cb70();
    }
  }
  if ((DAT_028b0d58 == (longlong *)0x0) || (DAT_028b0d61 == '\0')) {
    FUN_00e8cb50();
    if (DAT_028b0d58 == (longlong *)0x0) {
      FUN_0006e1c0();
      uVar8 = FUN_00e86210();
      local_100 = DAT_026d83f0;
      if (DAT_026d83f0 != 0) {
        uVar8 = FUN_00d50b00();
      }
      local_f8 = '\x01';
      FUN_00c841b0(uVar8,&local_100);
      plVar4 = DAT_028b0d58;
      if (DAT_028b0d58 != local_40) {
        if (local_38 == '\0') {
          if (local_40 == (longlong *)0x0) {
            plVar4 = (longlong *)0x0;
          }
          else {
            FUN_00d50b00();
            plVar4 = local_40;
          }
        }
        else {
          local_38 = '\0';
          plVar4 = local_40;
        }
        param_1 = (pthread_key_t)DAT_028b0d58;
        bVar7 = DAT_028b0d58 != (longlong *)0x0;
        DAT_028b0d58 = plVar4;
        if (bVar7) {
          FUN_00d50b20();
          plVar4 = local_40;
        }
      }
      if ((plVar4 != (longlong *)0x0) && (DAT_028b0d60 == '\0')) {
        DAT_028b0d60 = '\x01';
        FUN_00e8cb90();
        plVar4 = local_40;
      }
      if ((local_38 != '\0') && (plVar4 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_f8 != '\0') && (local_100 != 0)) {
        FUN_00d50b20();
      }
      DAT_028b0d61 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028b0d61 = '\x01';
      FUN_00e8cb70();
    }
  }
  if ((DAT_028b0d48 == (longlong *)0x0) || (DAT_028b0d51 == '\0')) {
    FUN_00e8cb50();
    if (DAT_028b0d48 == (longlong *)0x0) {
      FUN_0006e1c0();
      uVar8 = FUN_00e86210();
      local_f0 = DAT_027e0b28;
      if (DAT_027e0b28 != 0) {
        uVar8 = FUN_00d50b00();
      }
      local_e8 = '\x01';
      FUN_00c841b0(uVar8,&local_f0);
      plVar4 = DAT_028b0d48;
      if (DAT_028b0d48 != local_40) {
        if (local_38 == '\0') {
          if (local_40 == (longlong *)0x0) {
            plVar4 = (longlong *)0x0;
          }
          else {
            FUN_00d50b00();
            plVar4 = local_40;
          }
        }
        else {
          local_38 = '\0';
          plVar4 = local_40;
        }
        param_1 = (pthread_key_t)DAT_028b0d48;
        bVar7 = DAT_028b0d48 != (longlong *)0x0;
        DAT_028b0d48 = plVar4;
        if (bVar7) {
          FUN_00d50b20();
          plVar4 = local_40;
        }
      }
      if ((plVar4 != (longlong *)0x0) && (DAT_028b0d50 == '\0')) {
        DAT_028b0d50 = '\x01';
        FUN_00e8cb90();
        plVar4 = local_40;
      }
      if ((local_38 != '\0') && (plVar4 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_e8 != '\0') && (local_f0 != 0)) {
        FUN_00d50b20();
      }
      DAT_028b0d51 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028b0d51 = '\x01';
      FUN_00e8cb70();
    }
  }
  if ((DAT_028b0d18 == (longlong *)0x0) || (DAT_028b0d21 == '\0')) {
    FUN_00e8cb50();
    if (DAT_028b0d18 == (longlong *)0x0) {
      FUN_0006e1c0();
      uVar8 = FUN_00e86210();
      local_e0 = DAT_026d83e0;
      if (DAT_026d83e0 != 0) {
        uVar8 = FUN_00d50b00();
      }
      local_d8 = '\x01';
      FUN_00c841b0(uVar8,&local_e0);
      plVar4 = DAT_028b0d18;
      if (DAT_028b0d18 != local_40) {
        if (local_38 == '\0') {
          if (local_40 == (longlong *)0x0) {
            plVar4 = (longlong *)0x0;
          }
          else {
            FUN_00d50b00();
            plVar4 = local_40;
          }
        }
        else {
          local_38 = '\0';
          plVar4 = local_40;
        }
        param_1 = (pthread_key_t)DAT_028b0d18;
        bVar7 = DAT_028b0d18 != (longlong *)0x0;
        DAT_028b0d18 = plVar4;
        if (bVar7) {
          FUN_00d50b20();
          plVar4 = local_40;
        }
      }
      if ((plVar4 != (longlong *)0x0) && (DAT_028b0d20 == '\0')) {
        DAT_028b0d20 = '\x01';
        FUN_00e8cb90();
        plVar4 = local_40;
      }
      if ((local_38 != '\0') && (plVar4 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_d8 != '\0') && (local_e0 != 0)) {
        FUN_00d50b20();
      }
      DAT_028b0d21 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028b0d21 = '\x01';
      FUN_00e8cb70();
    }
  }
  if ((DAT_028b0d68 == (longlong *)0x0) || (DAT_028b0d71 == '\0')) {
    FUN_00e8cb50();
    if (DAT_028b0d68 == (longlong *)0x0) {
      FUN_0006e1c0();
      uVar8 = FUN_00e86210();
      local_d0 = DAT_027e0b30;
      if (DAT_027e0b30 != 0) {
        uVar8 = FUN_00d50b00();
      }
      local_c8 = '\x01';
      FUN_00c841b0(uVar8,&local_d0);
      plVar4 = DAT_028b0d68;
      if (DAT_028b0d68 != local_40) {
        if (local_38 == '\0') {
          if (local_40 == (longlong *)0x0) {
            plVar4 = (longlong *)0x0;
          }
          else {
            FUN_00d50b00();
            plVar4 = local_40;
          }
        }
        else {
          local_38 = '\0';
          plVar4 = local_40;
        }
        param_1 = (pthread_key_t)DAT_028b0d68;
        bVar7 = DAT_028b0d68 != (longlong *)0x0;
        DAT_028b0d68 = plVar4;
        if (bVar7) {
          FUN_00d50b20();
          plVar4 = local_40;
        }
      }
      if ((plVar4 != (longlong *)0x0) && (DAT_028b0d70 == '\0')) {
        DAT_028b0d70 = '\x01';
        FUN_00e8cb90();
        plVar4 = local_40;
      }
      if ((local_38 != '\0') && (plVar4 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_c8 != '\0') && (local_d0 != 0)) {
        FUN_00d50b20();
      }
      DAT_028b0d71 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028b0d71 = '\x01';
      FUN_00e8cb70();
    }
  }
  if ((DAT_028b0d78 == (longlong *)0x0) || (DAT_028b0d81 == '\0')) {
    FUN_00e8cb50();
    if (DAT_028b0d78 == (longlong *)0x0) {
      FUN_0006e1c0();
      uVar8 = FUN_00e86210();
      local_c0 = DAT_027e1390;
      if (DAT_027e1390 != 0) {
        uVar8 = FUN_00d50b00();
      }
      local_b8 = '\x01';
      FUN_00c841b0(uVar8,&local_c0);
      plVar4 = DAT_028b0d78;
      if (DAT_028b0d78 != local_40) {
        if (local_38 == '\0') {
          if (local_40 == (longlong *)0x0) {
            plVar4 = (longlong *)0x0;
          }
          else {
            FUN_00d50b00();
            plVar4 = local_40;
          }
        }
        else {
          local_38 = '\0';
          plVar4 = local_40;
        }
        param_1 = (pthread_key_t)DAT_028b0d78;
        bVar7 = DAT_028b0d78 != (longlong *)0x0;
        DAT_028b0d78 = plVar4;
        if (bVar7) {
          FUN_00d50b20();
          plVar4 = local_40;
        }
      }
      if ((plVar4 != (longlong *)0x0) && (DAT_028b0d80 == '\0')) {
        DAT_028b0d80 = '\x01';
        FUN_00e8cb90();
        plVar4 = local_40;
      }
      if ((local_38 != '\0') && (plVar4 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_b8 != '\0') && (local_c0 != 0)) {
        FUN_00d50b20();
      }
      DAT_028b0d81 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028b0d81 = '\x01';
      FUN_00e8cb70();
    }
  }
  if ((DAT_028b0d88 == (longlong *)0x0) || (DAT_028b0d91 == '\0')) {
    FUN_00e8cb50();
    if (DAT_028b0d88 == (longlong *)0x0) {
      FUN_0006e1c0();
      uVar8 = FUN_00e86210();
      local_b0 = DAT_027e0b38;
      if (DAT_027e0b38 != 0) {
        uVar8 = FUN_00d50b00();
      }
      local_a8 = '\x01';
      FUN_00c841b0(uVar8,&local_b0);
      plVar4 = DAT_028b0d88;
      if (DAT_028b0d88 != local_40) {
        if (local_38 == '\0') {
          if (local_40 == (longlong *)0x0) {
            plVar4 = (longlong *)0x0;
          }
          else {
            FUN_00d50b00();
            plVar4 = local_40;
          }
        }
        else {
          local_38 = '\0';
          plVar4 = local_40;
        }
        param_1 = (pthread_key_t)DAT_028b0d88;
        bVar7 = DAT_028b0d88 != (longlong *)0x0;
        DAT_028b0d88 = plVar4;
        if (bVar7) {
          FUN_00d50b20();
          plVar4 = local_40;
        }
      }
      if ((plVar4 != (longlong *)0x0) && (DAT_028b0d90 == '\0')) {
        DAT_028b0d90 = '\x01';
        FUN_00e8cb90();
        plVar4 = local_40;
      }
      if ((local_38 != '\0') && (plVar4 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_a8 != '\0') && (local_b0 != 0)) {
        FUN_00d50b20();
      }
      DAT_028b0d91 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028b0d91 = '\x01';
      FUN_00e8cb70();
    }
  }
  if ((DAT_028b0d98 == (longlong *)0x0) || (DAT_028b0da1 == '\0')) {
    FUN_00e8cb50();
    if (DAT_028b0d98 == (longlong *)0x0) {
      FUN_007eece0();
      uVar8 = FUN_00e86210();
      local_a0 = DAT_0272f6d8;
      if (DAT_0272f6d8 != 0) {
        uVar8 = FUN_00d50b00();
      }
      local_98 = '\x01';
      FUN_00c841b0(uVar8,&local_a0);
      plVar4 = DAT_028b0d98;
      if (DAT_028b0d98 != local_40) {
        if (local_38 == '\0') {
          if (local_40 == (longlong *)0x0) {
            plVar4 = (longlong *)0x0;
          }
          else {
            FUN_00d50b00();
            plVar4 = local_40;
          }
        }
        else {
          local_38 = '\0';
          plVar4 = local_40;
        }
        param_1 = (pthread_key_t)DAT_028b0d98;
        bVar7 = DAT_028b0d98 != (longlong *)0x0;
        DAT_028b0d98 = plVar4;
        if (bVar7) {
          FUN_00d50b20();
          plVar4 = local_40;
        }
      }
      if ((plVar4 != (longlong *)0x0) && (DAT_028b0da0 == '\0')) {
        DAT_028b0da0 = '\x01';
        FUN_00e8cb90();
        plVar4 = local_40;
      }
      if ((local_38 != '\0') && (plVar4 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_98 != '\0') && (local_a0 != 0)) {
        FUN_00d50b20();
      }
      DAT_028b0da1 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028b0da1 = '\x01';
      FUN_00e8cb70();
    }
  }
  if ((DAT_028b0da8 == (longlong *)0x0) || (DAT_028b0db1 == '\0')) {
    FUN_00e8cb50();
    if (DAT_028b0da8 == (longlong *)0x0) {
      if ((DAT_027c0170 == '\0') && (iVar2 = ___cxa_guard_acquire(), iVar2 != 0)) {
        _DAT_02790158 = FUN_007ef2d0();
        _DAT_02790140 = "MUAudioSourcePrincipalItem";
        _DAT_02790148 = 0x138;
        param_1 = (pthread_key_t)FUN_010fe5c0;
        _DAT_02790150 = FUN_010fe5c0;
        _DAT_02790160 = 0;
        uRam0000000002790168 = 0;
        _DAT_02790170 = 0;
        uRam0000000002790178 = 0;
        _DAT_02790180 = 0;
        uRam0000000002790188 = 0;
        _DAT_02790190 = 0;
        uRam0000000002790198 = 0;
        _DAT_027901a0 = 0;
        uRam00000000027901a8 = 0;
        _DAT_027901b0 = 0;
        uRam00000000027901b8 = 0;
        _DAT_027901c0 = 0;
        uRam00000000027901c8 = 0;
        _DAT_027901d0 = 0;
        uRam00000000027901d8 = 0;
        _DAT_027901e0 = 0;
        uRam00000000027901e8 = 0;
        _DAT_027901f0 = 0;
        uRam00000000027901f8 = 0;
        _DAT_02790200 = 0;
        ___cxa_guard_release();
      }
      uVar8 = FUN_00e86210();
      local_90 = DAT_027e0b40;
      if (DAT_027e0b40 != 0) {
        uVar8 = FUN_00d50b00();
      }
      local_88 = '\x01';
      FUN_00c841b0(uVar8,&local_90);
      plVar4 = DAT_028b0da8;
      if (DAT_028b0da8 != local_40) {
        if (local_38 == '\0') {
          if (local_40 == (longlong *)0x0) {
            plVar4 = (longlong *)0x0;
          }
          else {
            FUN_00d50b00();
            plVar4 = local_40;
          }
        }
        else {
          local_38 = '\0';
          plVar4 = local_40;
        }
        param_1 = (pthread_key_t)DAT_028b0da8;
        bVar7 = DAT_028b0da8 != (longlong *)0x0;
        DAT_028b0da8 = plVar4;
        if (bVar7) {
          FUN_00d50b20();
          plVar4 = local_40;
        }
      }
      if ((plVar4 != (longlong *)0x0) && (DAT_028b0db0 == '\0')) {
        DAT_028b0db0 = '\x01';
        FUN_00e8cb90();
        plVar4 = local_40;
      }
      if ((local_38 != '\0') && (plVar4 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_88 != '\0') && (local_90 != 0)) {
        FUN_00d50b20();
      }
      DAT_028b0db1 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028b0db1 = '\x01';
      FUN_00e8cb70();
    }
  }
  if ((DAT_028b0db8 == (longlong *)0x0) || (DAT_028b0dc1 == '\0')) {
    FUN_00e8cb50();
    if (DAT_028b0db8 == (longlong *)0x0) {
      if ((DAT_027c0170 == '\0') && (iVar2 = ___cxa_guard_acquire(), iVar2 != 0)) {
        _DAT_02790158 = FUN_007ef2d0();
        _DAT_02790140 = "MUAudioSourcePrincipalItem";
        _DAT_02790148 = 0x138;
        param_1 = (pthread_key_t)FUN_010fe5c0;
        _DAT_02790150 = FUN_010fe5c0;
        _DAT_02790160 = 0;
        uRam0000000002790168 = 0;
        _DAT_02790170 = 0;
        uRam0000000002790178 = 0;
        _DAT_02790180 = 0;
        uRam0000000002790188 = 0;
        _DAT_02790190 = 0;
        uRam0000000002790198 = 0;
        _DAT_027901a0 = 0;
        uRam00000000027901a8 = 0;
        _DAT_027901b0 = 0;
        uRam00000000027901b8 = 0;
        _DAT_027901c0 = 0;
        uRam00000000027901c8 = 0;
        _DAT_027901d0 = 0;
        uRam00000000027901d8 = 0;
        _DAT_027901e0 = 0;
        uRam00000000027901e8 = 0;
        _DAT_027901f0 = 0;
        uRam00000000027901f8 = 0;
        _DAT_02790200 = 0;
        ___cxa_guard_release();
      }
      uVar8 = FUN_00e86210();
      local_80 = DAT_027e0b48;
      if (DAT_027e0b48 != 0) {
        uVar8 = FUN_00d50b00();
      }
      local_78 = '\x01';
      FUN_00c841b0(uVar8,&local_80);
      plVar4 = DAT_028b0db8;
      if (DAT_028b0db8 != local_40) {
        if (local_38 == '\0') {
          if (local_40 == (longlong *)0x0) {
            plVar4 = (longlong *)0x0;
          }
          else {
            FUN_00d50b00();
            plVar4 = local_40;
          }
        }
        else {
          local_38 = '\0';
          plVar4 = local_40;
        }
        param_1 = (pthread_key_t)DAT_028b0db8;
        bVar7 = DAT_028b0db8 != (longlong *)0x0;
        DAT_028b0db8 = plVar4;
        if (bVar7) {
          FUN_00d50b20();
          plVar4 = local_40;
        }
      }
      if ((plVar4 != (longlong *)0x0) && (DAT_028b0dc0 == '\0')) {
        DAT_028b0dc0 = '\x01';
        FUN_00e8cb90();
        plVar4 = local_40;
      }
      if ((local_38 != '\0') && (plVar4 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_78 != '\0') && (local_80 != 0)) {
        FUN_00d50b20();
      }
      DAT_028b0dc1 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028b0dc1 = '\x01';
      FUN_00e8cb70();
    }
  }
  if ((DAT_028b0dc8 == (longlong *)0x0) || (DAT_028b0dd1 == '\0')) {
    FUN_00e8cb50();
    if (DAT_028b0dc8 == (longlong *)0x0) {
      if ((DAT_027c0170 == '\0') && (iVar2 = ___cxa_guard_acquire(), iVar2 != 0)) {
        _DAT_02790158 = FUN_007ef2d0();
        _DAT_02790140 = "MUAudioSourcePrincipalItem";
        _DAT_02790148 = 0x138;
        param_1 = (pthread_key_t)FUN_010fe5c0;
        _DAT_02790150 = FUN_010fe5c0;
        _DAT_02790160 = 0;
        uRam0000000002790168 = 0;
        _DAT_02790170 = 0;
        uRam0000000002790178 = 0;
        _DAT_02790180 = 0;
        uRam0000000002790188 = 0;
        _DAT_02790190 = 0;
        uRam0000000002790198 = 0;
        _DAT_027901a0 = 0;
        uRam00000000027901a8 = 0;
        _DAT_027901b0 = 0;
        uRam00000000027901b8 = 0;
        _DAT_027901c0 = 0;
        uRam00000000027901c8 = 0;
        _DAT_027901d0 = 0;
        uRam00000000027901d8 = 0;
        _DAT_027901e0 = 0;
        uRam00000000027901e8 = 0;
        _DAT_027901f0 = 0;
        uRam00000000027901f8 = 0;
        _DAT_02790200 = 0;
        ___cxa_guard_release();
      }
      uVar8 = FUN_00e86210();
      local_70 = DAT_027e0b50;
      if (DAT_027e0b50 != 0) {
        uVar8 = FUN_00d50b00();
      }
      local_68 = '\x01';
      FUN_00c841b0(uVar8,&local_70);
      plVar4 = DAT_028b0dc8;
      if (DAT_028b0dc8 != local_40) {
        if (local_38 == '\0') {
          if (local_40 == (longlong *)0x0) {
            plVar4 = (longlong *)0x0;
          }
          else {
            FUN_00d50b00();
            plVar4 = local_40;
          }
        }
        else {
          local_38 = '\0';
          plVar4 = local_40;
        }
        param_1 = (pthread_key_t)DAT_028b0dc8;
        bVar7 = DAT_028b0dc8 != (longlong *)0x0;
        DAT_028b0dc8 = plVar4;
        if (bVar7) {
          FUN_00d50b20();
          plVar4 = local_40;
        }
      }
      if ((plVar4 != (longlong *)0x0) && (DAT_028b0dd0 == '\0')) {
        DAT_028b0dd0 = '\x01';
        FUN_00e8cb90();
        plVar4 = local_40;
      }
      if ((local_38 != '\0') && (plVar4 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      DAT_028b0dd1 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028b0dd1 = '\x01';
      FUN_00e8cb70();
    }
  }
  if ((*unaff_RSI != 0) && (lVar5 = unaff_RDI[0x2f], lVar5 != *unaff_RSI)) {
    if (lVar5 != 0) {
      if ((longlong *)*in_RDX == DAT_028b0d28) {
        pvVar3 = _pthread_getspecific(param_1);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01270ab0();
        if ((longlong *)*unaff_RSI == local_40) {
          bVar7 = true;
        }
        else {
          pvVar3 = _pthread_getspecific(param_1);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012708c0();
          bVar7 = (longlong *)*unaff_RSI == local_50;
          if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (!bVar7) {
          lVar5 = unaff_RDI[0x2f];
          goto joined_r0x0195ef41;
        }
        goto LAB_0195ef20;
      }
joined_r0x0195ef41:
      if (lVar5 != 0) {
        if ((longlong *)*in_RDX == DAT_028b0d38) {
          if (*unaff_RSI == 0) goto LAB_0195f2c0;
          pvVar3 = _pthread_getspecific(param_1);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01270ab0();
          if ((longlong *)*unaff_RSI == local_40) {
            bVar7 = true;
          }
          else {
            pvVar3 = _pthread_getspecific(param_1);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_012708c0();
            bVar7 = (longlong *)*unaff_RSI == local_50;
            if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
          if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (bVar7) goto LAB_0195f2c0;
          lVar5 = unaff_RDI[0x2f];
          if (lVar5 == 0) goto LAB_0195f2e9;
        }
        if ((longlong *)*in_RDX == DAT_028b0cb8) {
          if ((*unaff_RSI != 0) && (lVar5 != *unaff_RSI)) {
            pvVar3 = _pthread_getspecific(param_1);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_012640f0();
            if ((longlong *)*unaff_RSI == local_40) {
              bVar7 = true;
            }
            else {
              pvVar3 = _pthread_getspecific(param_1);
              if (pvVar3 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_012641c0();
              bVar7 = (longlong *)*unaff_RSI == local_50;
              if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
            }
            if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if (!bVar7) {
              lVar5 = unaff_RDI[0x2f];
              if (lVar5 == 0) goto LAB_0195f2e9;
              goto LAB_0195e93f;
            }
          }
        }
        else {
LAB_0195e93f:
          if ((longlong *)*in_RDX == DAT_028b0cf8) {
            if ((*unaff_RSI == 0) || (lVar5 == *unaff_RSI)) goto LAB_0195f2c0;
            pvVar3 = _pthread_getspecific(param_1);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_012640f0();
            if ((longlong *)*unaff_RSI == local_40) {
              bVar7 = true;
            }
            else {
              pvVar3 = _pthread_getspecific(param_1);
              if (pvVar3 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_012641c0();
              bVar7 = (longlong *)*unaff_RSI == local_50;
              if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
            }
            if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if (bVar7) goto LAB_0195f2c0;
            if (unaff_RDI[0x2f] == 0) goto LAB_0195f2e9;
          }
          plVar4 = (longlong *)*in_RDX;
          plVar6 = (longlong *)*unaff_RSI;
          if (plVar4 != DAT_028b0ca8) {
            if ((plVar6 != (longlong *)0x0) &&
               ((plVar4 == DAT_028b0d88 || (plVar4 == DAT_028b0d98)))) {
              pvVar3 = _pthread_getspecific(param_1);
              if (pvVar3 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_0125e7c0();
              if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              if (local_40 != plVar6) {
                return;
              }
              goto LAB_0195f307;
            }
            goto LAB_0195f2e9;
          }
          pvVar3 = _pthread_getspecific(param_1);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01264240();
          pvVar3 = _pthread_getspecific(param_1);
          if ((pvVar3 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
            plVar6 = (longlong *)plVar6[(ulonglong)(*(uint *)(lVar5 + 0x154) & 1) + 4];
          }
          (**(code **)(*plVar6 + 0x378))();
          plVar4 = local_40;
          if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (plVar4 != local_50) {
            return;
          }
        }
LAB_0195ef20:
        lVar5 = unaff_RDI[0x3b];
        goto joined_r0x0195ec73;
      }
    }
LAB_0195f2e9:
    in_RDX = (longlong *)*in_RDX;
    if (((in_RDX != DAT_028b0da8) && (in_RDX != DAT_028b0db8)) && (in_RDX != DAT_028b0dc8)) {
      return;
    }
LAB_0195f307:
    (**(code **)(*unaff_RDI + 0x500))();
    (**(code **)(*unaff_RDI + 0x618))();
    return;
  }
  plVar4 = (longlong *)*in_RDX;
  if (((plVar4 == DAT_028b0dd8) || (plVar4 == DAT_028b0de8)) ||
     ((plVar4 == DAT_028b0df8 || (plVar4 == DAT_028b0e08)))) {
    if (unaff_RDI[0x30] != 0) {
      unaff_RDI[0x30] = 0;
      FUN_00d50b20();
    }
    if (unaff_RDI[0x31] != 0) {
      unaff_RDI[0x31] = 0;
      FUN_00d50b20();
    }
    FUN_00d216c0();
    if (unaff_RDI[0x3b] != 0) {
      unaff_RDI[0x3b] = 0;
      FUN_00d50b20();
    }
    *(undefined1 *)(unaff_RDI + 0x37) = 1;
    plVar4 = (longlong *)*in_RDX;
    if (plVar4 == DAT_028b0d18) goto LAB_0195eaaf;
LAB_0195ea1d:
    if (plVar4 == DAT_028b0d08) goto LAB_0195eb50;
  }
  else {
    if (plVar4 != DAT_028b0d18) goto LAB_0195ea1d;
LAB_0195eaaf:
    (**(code **)(*unaff_RDI + 0x500))();
    (**(code **)(*unaff_RDI + 0x618))();
    plVar4 = (longlong *)*in_RDX;
    if (plVar4 == DAT_028b0d08) goto LAB_0195eb50;
  }
  if (((plVar4 != DAT_028b0c98) && (plVar4 != DAT_028b0d48)) && (plVar4 != DAT_028b0d58)) {
    if ((plVar4 != DAT_028b0cb8) && (plVar4 != DAT_028b0cc8)) {
      if ((plVar4 == DAT_028b0cf8) || ((plVar4 == DAT_028b0d68 || (plVar4 == DAT_028b0d78)))) {
        if (unaff_RDI[0x30] != 0) {
          unaff_RDI[0x30] = 0;
          FUN_00d50b20();
        }
        if (unaff_RDI[0x31] != 0) {
          unaff_RDI[0x31] = 0;
          FUN_00d50b20();
        }
      }
      else if ((plVar4 != DAT_028b0cd8) && (plVar4 != DAT_028b0ce8)) {
        return;
      }
LAB_0195f2c0:
      FUN_00d216c0();
      *(undefined1 *)(unaff_RDI + 0x37) = 1;
      return;
    }
    if (unaff_RDI[0x30] != 0) {
      unaff_RDI[0x30] = 0;
      FUN_00d50b20();
    }
    if (unaff_RDI[0x31] != 0) {
      unaff_RDI[0x31] = 0;
      FUN_00d50b20();
    }
    (**(code **)(*unaff_RDI + 0x620))();
    lVar5 = unaff_RDI[0x3b];
joined_r0x0195ec73:
    if (lVar5 != 0) {
      unaff_RDI[0x3b] = 0;
      FUN_00d50b20();
    }
    *(undefined1 *)(unaff_RDI + 0x37) = 1;
    return;
  }
LAB_0195eb50:
  if (unaff_RDI[0x30] != 0) {
    unaff_RDI[0x30] = 0;
    FUN_00d50b20();
  }
  if (unaff_RDI[0x31] != 0) {
    unaff_RDI[0x31] = 0;
    FUN_00d50b20();
  }
  FUN_00d216c0();
  if (unaff_RDI[0x3b] != 0) {
    unaff_RDI[0x3b] = 0;
    FUN_00d50b20();
  }
  if (unaff_RDI[0x33] != 0) {
    unaff_RDI[0x33] = 0;
    FUN_00d50b20();
  }
  *(undefined1 *)(unaff_RDI + 0x37) = 1;
  if (((longlong *)*in_RDX != DAT_028b0d48) && ((longlong *)*in_RDX != DAT_028b0d58)) {
    return;
  }
  FUN_01989f80();
  plVar4 = local_40;
  if (local_38 == '\0') {
    if (local_40 == (longlong *)0x0) {
      return;
    }
    FUN_00d50b00();
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else if (local_40 == (longlong *)0x0) {
    return;
  }
  (**(code **)(*unaff_RDI + 0x500))();
  local_60 = plVar4;
  local_58 = '\0';
  uVar11 = uVar10;
  uVar13 = uVar12;
  uVar14 = in_XMM1_Dc;
  uVar15 = in_XMM1_Dd;
  uVar8 = FUN_01e48f80();
  if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01e3f820();
  auVar16._4_4_ = uVar12;
  auVar16._0_4_ = uVar10;
  auVar16._8_4_ = in_XMM1_Dc;
  auVar16._12_4_ = in_XMM1_Dd;
  auVar9._4_4_ = uVar13;
  auVar9._0_4_ = uVar11;
  auVar9._8_4_ = uVar14;
  auVar9._12_4_ = uVar15;
  auVar16 = blendps(auVar16,auVar9,2);
  auVar1._8_8_ = extraout_XMM0_Qb;
  auVar1._0_8_ = uVar8;
  auVar9 = blendps(auVar1,ZEXT816(0),2);
  (**(code **)(*plVar4 + 0x618))(auVar9._0_8_,auVar16._0_4_);
  FUN_00d50b20();
  return;
}


