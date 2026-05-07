// Function: FUN_00c018b0
// Address: 00c018b0
// Size: 2008 bytes
// Class: GNOverloudGainReductionView


void FUN_00c018b0(void)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong unaff_RDI;
  longlong lVar4;
  bool bVar5;
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
  
  *(undefined4 *)(unaff_RDI + 0xb8) = 5;
  lVar1 = DAT_0276bf50;
  if (DAT_0276bf50 == 0) {
    lVar4 = *(longlong *)(unaff_RDI + 0x90);
    if (lVar4 == 0) goto LAB_00c01919;
  }
  else {
    FUN_00d50b00();
    lVar4 = *(longlong *)(unaff_RDI + 0x90);
    if (lVar4 == lVar1) {
      FUN_00d50b20();
      goto LAB_00c01919;
    }
  }
  *(longlong *)(unaff_RDI + 0x90) = lVar1;
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
LAB_00c01919:
  *(undefined4 *)(unaff_RDI + 0xa8) = 3;
  if ((DAT_028a5b88 == (undefined8 *)0x0) || (DAT_028a5b91 == '\0')) {
    FUN_00e8cb50();
    if (DAT_028a5b88 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar3 = &DAT_0254ed40;
      puVar3[2] = 0;
      puVar3[3] = 0;
      puVar3[4] = 0;
      puVar3[5] = 0;
      FUN_00d500e0();
      bVar5 = DAT_028a5b88 == (undefined8 *)0x0;
      DAT_028a5b88 = puVar3;
      if (((bVar5) || (FUN_00d50b20(), lVar1 = DAT_02765370, DAT_028a5b88 != (undefined8 *)0x0)) &&
         (lVar1 = DAT_02765370, DAT_028a5b90 == '\0')) {
        DAT_028a5b90 = '\x01';
        FUN_00e8cb90();
        lVar1 = DAT_02765370;
      }
      DAT_02765370 = lVar1;
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_026fb990;
      local_1c0 = 1;
      local_1c8 = lVar1;
      if (DAT_026fb990 != 0) {
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
      lVar1 = DAT_0276bf58;
      if (DAT_0276bf58 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_0276bf60;
      local_1a8 = lVar1;
      local_1a0 = 1;
      if (DAT_0276bf60 != 0) {
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
      lVar1 = DAT_0276bf68;
      if (DAT_0276bf68 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_0276bf70;
      local_188 = lVar1;
      local_180 = 1;
      if (DAT_0276bf70 != 0) {
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
      lVar1 = DAT_0276bf78;
      if (DAT_0276bf78 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_0276bf80;
      local_168 = lVar1;
      local_160 = 1;
      if (DAT_0276bf80 != 0) {
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
      lVar1 = DAT_0276bf88;
      if (DAT_0276bf88 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_0276bf90;
      local_148 = lVar1;
      local_140 = 1;
      if (DAT_0276bf90 != 0) {
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
      lVar1 = DAT_0276bf98;
      if (DAT_0276bf98 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_0276bfa0;
      local_128 = lVar1;
      local_120 = 1;
      if (DAT_0276bfa0 != 0) {
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
      lVar1 = DAT_0276bfa8;
      if (DAT_0276bfa8 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_0276bfb0;
      local_108 = lVar1;
      local_100 = 1;
      if (DAT_0276bfb0 != 0) {
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
      lVar1 = DAT_0276bfb8;
      if (DAT_0276bfb8 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_0276bfc0;
      local_e8 = lVar1;
      local_e0 = 1;
      if (DAT_0276bfc0 != 0) {
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
      lVar1 = DAT_0276bfc8;
      if (DAT_0276bfc8 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_0276bfd0;
      local_c8 = lVar1;
      local_c0 = 1;
      if (DAT_0276bfd0 != 0) {
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
      lVar1 = DAT_027bed58;
      if (DAT_027bed58 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_0276bfe0;
      local_a8 = lVar1;
      local_a0 = 1;
      if (DAT_0276bfe0 != 0) {
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
      lVar1 = DAT_0276bfe8;
      if (DAT_0276bfe8 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_0276bff0;
      local_88 = lVar1;
      local_80 = 1;
      if (DAT_0276bff0 != 0) {
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
      lVar1 = DAT_0276bff8;
      if (DAT_0276bff8 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_0276c000;
      local_68 = lVar1;
      local_60 = 1;
      if (DAT_0276c000 != 0) {
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
      lVar1 = DAT_0276be48;
      if (DAT_0276be48 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_0276be50;
      local_48 = lVar1;
      local_40 = 1;
      if (DAT_0276be50 != 0) {
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
      DAT_028a5b91 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028a5b91 = '\x01';
      FUN_00e8cb70();
    }
    puVar3 = *(undefined8 **)(unaff_RDI + 0xb0);
    if (puVar3 == DAT_028a5b88) {
      return;
    }
  }
  else {
    puVar3 = *(undefined8 **)(unaff_RDI + 0xb0);
    if (puVar3 == DAT_028a5b88) {
      return;
    }
  }
  puVar2 = DAT_028a5b88;
  if (DAT_028a5b88 != (undefined8 *)0x0) {
    FUN_00d50b00();
  }
  *(undefined8 **)(unaff_RDI + 0xb0) = puVar2;
  if (puVar3 == (undefined8 *)0x0) {
    return;
  }
  FUN_00d50b20();
  return;
}


