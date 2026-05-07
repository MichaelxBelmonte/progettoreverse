// Function: FUN_00c38a40
// Address: 00c38a40
// Size: 2249 bytes
// Class: GNOverloudCompG


void FUN_00c38a40(void)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong unaff_RDI;
  longlong lVar4;
  bool bVar5;
  longlong local_208;
  undefined1 local_200;
  longlong local_1f8;
  undefined1 local_1f0;
  longlong local_1e8;
  undefined1 local_1e0;
  longlong local_1d8;
  undefined1 local_1d0;
  longlong local_1c8;
  undefined1 local_1c0;
  longlong local_1b8;
  undefined1 local_1b0;
  longlong local_1a8;
  undefined1 local_1a0;
  longlong local_198;
  undefined1 local_190;
  longlong local_188;
  undefined1 local_180;
  longlong local_178;
  undefined1 local_170;
  longlong local_168;
  undefined1 local_160;
  longlong local_158;
  undefined1 local_150;
  longlong local_148;
  undefined1 local_140;
  longlong local_138;
  undefined1 local_130;
  longlong local_128;
  undefined1 local_120;
  longlong local_118;
  undefined1 local_110;
  longlong local_108;
  undefined1 local_100;
  longlong local_f8;
  undefined1 local_f0;
  longlong local_e8;
  undefined1 local_e0;
  longlong local_d8;
  undefined1 local_d0;
  longlong local_c8;
  undefined1 local_c0;
  longlong local_b8;
  undefined1 local_b0;
  longlong local_a8;
  undefined1 local_a0;
  longlong local_98;
  undefined1 local_90;
  longlong local_88;
  undefined1 local_80;
  longlong local_78;
  undefined1 local_70;
  longlong local_68;
  undefined1 local_60;
  longlong local_58;
  undefined1 local_50;
  longlong local_48;
  undefined1 local_40;
  longlong local_38;
  undefined1 local_30;
  
  *(undefined4 *)(unaff_RDI + 0xb8) = 0x14;
  lVar1 = DAT_0276cdb8;
  if (DAT_0276cdb8 == 0) {
    lVar4 = *(longlong *)(unaff_RDI + 0x90);
    if (lVar4 == 0) goto LAB_00c38aa9;
  }
  else {
    FUN_00d50b00();
    lVar4 = *(longlong *)(unaff_RDI + 0x90);
    if (lVar4 == lVar1) {
      FUN_00d50b20();
      goto LAB_00c38aa9;
    }
  }
  *(longlong *)(unaff_RDI + 0x90) = lVar1;
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
LAB_00c38aa9:
  *(undefined4 *)(unaff_RDI + 0xa8) = 1;
  if ((DAT_028a5f88 == (undefined8 *)0x0) || (DAT_028a5f91 == '\0')) {
    FUN_00e8cb50();
    if (DAT_028a5f88 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar3 = &DAT_0254ed40;
      puVar3[2] = 0;
      puVar3[3] = 0;
      puVar3[4] = 0;
      puVar3[5] = 0;
      FUN_00d500e0();
      bVar5 = DAT_028a5f88 == (undefined8 *)0x0;
      DAT_028a5f88 = puVar3;
      if (((bVar5) || (FUN_00d50b20(), lVar1 = DAT_0276cdc0, DAT_028a5f88 != (undefined8 *)0x0)) &&
         (lVar1 = DAT_0276cdc0, DAT_028a5f90 == '\0')) {
        DAT_028a5f90 = '\x01';
        FUN_00e8cb90();
        lVar1 = DAT_0276cdc0;
      }
      DAT_0276cdc0 = lVar1;
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_0276cdc8;
      local_200 = 1;
      local_208 = lVar1;
      if (DAT_0276cdc8 != 0) {
        FUN_00d50b00();
      }
      local_1f8 = lVar4;
      local_1f0 = 1;
      FUN_00bf1030(&local_1f8,&local_208);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = DAT_0276c440;
      if (DAT_0276c440 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_027c7650;
      local_1e8 = lVar1;
      local_1e0 = 1;
      if (DAT_027c7650 != 0) {
        FUN_00d50b00();
      }
      local_1d8 = lVar4;
      local_1d0 = 1;
      FUN_00bf1030(&local_1d8,&local_1e8);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = DAT_0276bf00;
      if (DAT_0276bf00 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_0276bf08;
      local_1c8 = lVar1;
      local_1c0 = 1;
      if (DAT_0276bf08 != 0) {
        FUN_00d50b00();
      }
      local_1b8 = lVar4;
      local_1b0 = 1;
      FUN_00bf1030(&local_1b8,&local_1c8);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = DAT_0276c450;
      if (DAT_0276c450 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_0276c458;
      local_1a8 = lVar1;
      local_1a0 = 1;
      if (DAT_0276c458 != 0) {
        FUN_00d50b00();
      }
      local_198 = lVar4;
      local_190 = 1;
      FUN_00bf1030(&local_198,&local_1a8);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = DAT_0276cdd0;
      if (DAT_0276cdd0 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_0276cdd8;
      local_188 = lVar1;
      local_180 = 1;
      if (DAT_0276cdd8 != 0) {
        FUN_00d50b00();
      }
      local_178 = lVar4;
      local_170 = 1;
      FUN_00bf1030(&local_178,&local_188);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = DAT_0276cc90;
      if (DAT_0276cc90 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_027c70a8;
      local_168 = lVar1;
      local_160 = 1;
      if (DAT_027c70a8 != 0) {
        FUN_00d50b00();
      }
      local_158 = lVar4;
      local_150 = 1;
      FUN_00bf1030(&local_158,&local_168);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = DAT_0276cde0;
      if (DAT_0276cde0 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_0276cde8;
      local_148 = lVar1;
      local_140 = 1;
      if (DAT_0276cde8 != 0) {
        FUN_00d50b00();
      }
      local_138 = lVar4;
      local_130 = 1;
      FUN_00bf1030(&local_138,&local_148);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = DAT_0276c460;
      if (DAT_0276c460 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_0276c468;
      local_128 = lVar1;
      local_120 = 1;
      if (DAT_0276c468 != 0) {
        FUN_00d50b00();
      }
      local_118 = lVar4;
      local_110 = 1;
      FUN_00bf1030(&local_118,&local_128);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = DAT_0276c430;
      if (DAT_0276c430 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_027bdfc0;
      local_108 = lVar1;
      local_100 = 1;
      if (DAT_027bdfc0 != 0) {
        FUN_00d50b00();
      }
      local_f8 = lVar4;
      local_f0 = 1;
      FUN_00bf1030(&local_f8,&local_108);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = DAT_0276cdf0;
      if (DAT_0276cdf0 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_0276cdf8;
      local_e8 = lVar1;
      local_e0 = 1;
      if (DAT_0276cdf8 != 0) {
        FUN_00d50b00();
      }
      local_d8 = lVar4;
      local_d0 = 1;
      FUN_00bf1030(&local_d8,&local_e8);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = DAT_0276ce00;
      if (DAT_0276ce00 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_0276ce08;
      local_c8 = lVar1;
      local_c0 = 1;
      if (DAT_0276ce08 != 0) {
        FUN_00d50b00();
      }
      local_b8 = lVar4;
      local_b0 = 1;
      FUN_00bf1030(&local_b8,&local_c8);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = DAT_0276ce10;
      if (DAT_0276ce10 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_0276ce18;
      local_a8 = lVar1;
      local_a0 = 1;
      if (DAT_0276ce18 != 0) {
        FUN_00d50b00();
      }
      local_98 = lVar4;
      local_90 = 1;
      FUN_00bf1030(&local_98,&local_a8);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = DAT_0276ce20;
      if (DAT_0276ce20 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_0276ce28;
      local_88 = lVar1;
      local_80 = 1;
      if (DAT_0276ce28 != 0) {
        FUN_00d50b00();
      }
      local_78 = lVar4;
      local_70 = 1;
      FUN_00bf1030(&local_78,&local_88);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = DAT_0276ce30;
      if (DAT_0276ce30 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_0276ce38;
      local_68 = lVar1;
      local_60 = 1;
      if (DAT_0276ce38 != 0) {
        FUN_00d50b00();
      }
      local_58 = lVar4;
      local_50 = 1;
      FUN_00bf1030(&local_58,&local_68);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = DAT_0276ce40;
      if (DAT_0276ce40 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_0276ce48;
      local_48 = lVar1;
      local_40 = 1;
      if (DAT_0276ce48 != 0) {
        FUN_00d50b00();
      }
      local_38 = lVar4;
      local_30 = 1;
      FUN_00bf1030(&local_38,&local_48);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      DAT_028a5f91 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028a5f91 = '\x01';
      FUN_00e8cb70();
    }
    puVar3 = *(undefined8 **)(unaff_RDI + 0xb0);
    if (puVar3 == DAT_028a5f88) {
      return;
    }
  }
  else {
    puVar3 = *(undefined8 **)(unaff_RDI + 0xb0);
    if (puVar3 == DAT_028a5f88) {
      return;
    }
  }
  puVar2 = DAT_028a5f88;
  if (DAT_028a5f88 != (undefined8 *)0x0) {
    FUN_00d50b00();
  }
  *(undefined8 **)(unaff_RDI + 0xb0) = puVar2;
  if (puVar3 == (undefined8 *)0x0) {
    return;
  }
  FUN_00d50b20();
  return;
}


