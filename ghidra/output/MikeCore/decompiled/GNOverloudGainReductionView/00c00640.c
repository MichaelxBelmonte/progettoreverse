// Function: FUN_00c00640
// Address: 00c00640
// Size: 1383 bytes
// Class: GNOverloudGainReductionView


void FUN_00c00640(void)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong unaff_RDI;
  longlong lVar4;
  bool bVar5;
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
  
  *(undefined4 *)(unaff_RDI + 0xb8) = 3;
  lVar1 = DAT_0276bf20;
  if (DAT_0276bf20 == 0) {
    lVar4 = *(longlong *)(unaff_RDI + 0x90);
    if (lVar4 == 0) goto LAB_00c006a9;
  }
  else {
    FUN_00d50b00();
    lVar4 = *(longlong *)(unaff_RDI + 0x90);
    if (lVar4 == lVar1) {
      FUN_00d50b20();
      goto LAB_00c006a9;
    }
  }
  *(longlong *)(unaff_RDI + 0x90) = lVar1;
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
LAB_00c006a9:
  *(undefined4 *)(unaff_RDI + 0xa8) = 6;
  if ((DAT_028a5b68 == (undefined8 *)0x0) || (DAT_028a5b71 == '\0')) {
    FUN_00e8cb50();
    if (DAT_028a5b68 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar3 = &DAT_0254ed40;
      puVar3[2] = 0;
      puVar3[3] = 0;
      puVar3[4] = 0;
      puVar3[5] = 0;
      FUN_00d500e0();
      bVar5 = DAT_028a5b68 == (undefined8 *)0x0;
      DAT_028a5b68 = puVar3;
      if (((bVar5) || (FUN_00d50b20(), lVar1 = DAT_0276bcc0, DAT_028a5b68 != (undefined8 *)0x0)) &&
         (lVar1 = DAT_0276bcc0, DAT_028a5b70 == '\0')) {
        DAT_028a5b70 = '\x01';
        FUN_00e8cb90();
        lVar1 = DAT_0276bcc0;
      }
      DAT_0276bcc0 = lVar1;
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_0276bcc8;
      local_120 = 1;
      local_128 = lVar1;
      if (DAT_0276bcc8 != 0) {
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
      lVar1 = DAT_0276bcd0;
      if (DAT_0276bcd0 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_0276bcd8;
      local_108 = lVar1;
      local_100 = 1;
      if (DAT_0276bcd8 != 0) {
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
      lVar1 = DAT_02765370;
      if (DAT_02765370 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_026fb990;
      local_e8 = lVar1;
      local_e0 = 1;
      if (DAT_026fb990 != 0) {
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
      lVar1 = DAT_0276bce0;
      if (DAT_0276bce0 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_0276bce8;
      local_c8 = lVar1;
      local_c0 = 1;
      if (DAT_0276bce8 != 0) {
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
      lVar1 = DAT_0276bcf0;
      if (DAT_0276bcf0 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_0276bcf8;
      local_a8 = lVar1;
      local_a0 = 1;
      if (DAT_0276bcf8 != 0) {
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
      lVar1 = DAT_0276bd00;
      if (DAT_0276bd00 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_0276bd08;
      local_88 = lVar1;
      local_80 = 1;
      if (DAT_0276bd08 != 0) {
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
      lVar1 = DAT_0276bd10;
      if (DAT_0276bd10 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_027fecf0;
      local_68 = lVar1;
      local_60 = 1;
      if (DAT_027fecf0 != 0) {
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
      lVar1 = DAT_0276bd20;
      if (DAT_0276bd20 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_0276bd28;
      local_48 = lVar1;
      local_40 = 1;
      if (DAT_0276bd28 != 0) {
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
      DAT_028a5b71 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028a5b71 = '\x01';
      FUN_00e8cb70();
    }
    puVar3 = *(undefined8 **)(unaff_RDI + 0xb0);
    if (puVar3 == DAT_028a5b68) {
      return;
    }
  }
  else {
    puVar3 = *(undefined8 **)(unaff_RDI + 0xb0);
    if (puVar3 == DAT_028a5b68) {
      return;
    }
  }
  puVar2 = DAT_028a5b68;
  if (DAT_028a5b68 != (undefined8 *)0x0) {
    FUN_00d50b00();
  }
  *(undefined8 **)(unaff_RDI + 0xb0) = puVar2;
  if (puVar3 == (undefined8 *)0x0) {
    return;
  }
  FUN_00d50b20();
  return;
}


