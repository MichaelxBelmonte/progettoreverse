// Function: FUN_00874960
// Address: 00874960
// Size: 1502 bytes
// Class: MDToolbarLeftConfigCtrl


void FUN_00874960(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  longlong local_158;
  char local_150;
  longlong local_148;
  char local_140;
  longlong local_138;
  char local_130;
  longlong local_128;
  char local_120;
  longlong local_118;
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
  longlong local_a8;
  char local_a0;
  longlong local_98;
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
  char local_40;
  longlong local_38;
  char local_30;
  longlong local_28;
  char local_20;
  
  lVar2 = DAT_026d8928;
  lVar1 = *param_2;
  if (lVar1 == *(longlong *)(unaff_RSI + 0x88)) {
    if (DAT_026d8928 != 0) {
      FUN_00d50b00();
    }
    lVar1 = DAT_027403c8;
    if (DAT_027403c8 != 0) {
      FUN_00d50b00();
    }
    local_158 = lVar1;
    local_150 = '\x01';
    local_148 = 0;
    local_140 = '\0';
    FUN_00d31230(&local_148,&local_158);
    if ((local_140 != '\0') && (local_148 != 0)) {
      FUN_00d50b20();
    }
    if ((local_150 != '\0') && (local_158 != 0)) {
      FUN_00d50b20();
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  else if (lVar1 == *(longlong *)(unaff_RSI + 0x90)) {
    if (DAT_026d8928 != 0) {
      FUN_00d50b00();
    }
    lVar1 = DAT_027062d8;
    local_138 = lVar2;
    local_130 = '\x01';
    if (DAT_027062d8 != 0) {
      FUN_00d50b00();
    }
    local_128 = lVar1;
    local_120 = '\x01';
    local_118 = 0;
    local_110 = '\0';
    FUN_00d31230(&local_118,&local_128);
    if ((local_110 != '\0') && (local_118 != 0)) {
      FUN_00d50b20();
    }
    if ((local_120 != '\0') && (local_128 != 0)) {
      FUN_00d50b20();
    }
    if ((local_130 != '\0') && (local_138 != 0)) {
      FUN_00d50b20();
    }
  }
  else if (lVar1 == *(longlong *)(unaff_RSI + 0x98)) {
    if (DAT_026d8928 != 0) {
      FUN_00d50b00();
    }
    lVar1 = DAT_027403d0;
    local_108 = lVar2;
    local_100 = '\x01';
    if (DAT_027403d0 != 0) {
      FUN_00d50b00();
    }
    local_f8 = lVar1;
    local_f0 = '\x01';
    local_e8 = 0;
    local_e0 = '\0';
    FUN_00d31230(&local_e8,&local_f8);
    if ((local_e0 != '\0') && (local_e8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_f0 != '\0') && (local_f8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_100 != '\0') && (local_108 != 0)) {
      FUN_00d50b20();
    }
  }
  else if (lVar1 == *(longlong *)(unaff_RSI + 0xa0)) {
    if (DAT_026d8928 != 0) {
      FUN_00d50b00();
    }
    lVar1 = DAT_027403d8;
    local_d8 = lVar2;
    local_d0 = '\x01';
    if (DAT_027403d8 != 0) {
      FUN_00d50b00();
    }
    local_c8 = lVar1;
    local_c0 = '\x01';
    local_b8 = 0;
    local_b0 = '\0';
    FUN_00d31230(&local_b8,&local_c8);
    if ((local_b0 != '\0') && (local_b8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_c0 != '\0') && (local_c8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_d0 != '\0') && (local_d8 != 0)) {
      FUN_00d50b20();
    }
  }
  else if (lVar1 == *(longlong *)(unaff_RSI + 0xa8)) {
    if (DAT_026d8928 != 0) {
      FUN_00d50b00();
    }
    lVar1 = DAT_027403e0;
    local_a8 = lVar2;
    local_a0 = '\x01';
    if (DAT_027403e0 != 0) {
      FUN_00d50b00();
    }
    local_98 = lVar1;
    local_90 = '\x01';
    local_88 = 0;
    local_80 = '\0';
    FUN_00d31230(&local_88,&local_98);
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
    if ((local_a0 != '\0') && (local_a8 != 0)) {
      FUN_00d50b20();
    }
  }
  else if ((lVar1 == *(longlong *)(unaff_RSI + 0xb0)) || (lVar1 == *(longlong *)(unaff_RSI + 0xb8)))
  {
    FUN_00d8ede0();
  }
  else if (lVar1 == *(longlong *)(unaff_RSI + 0xc0)) {
    if (DAT_026d8928 != 0) {
      FUN_00d50b00();
    }
    lVar1 = DAT_027403e8;
    local_78 = lVar2;
    local_70 = '\x01';
    if (DAT_027403e8 != 0) {
      FUN_00d50b00();
    }
    local_68 = lVar1;
    local_60 = '\x01';
    local_58 = 0;
    local_50 = '\0';
    FUN_00d31230(&local_58,&local_68);
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
  }
  else if (lVar1 == *(longlong *)(unaff_RSI + 200)) {
    if (DAT_026d8928 != 0) {
      FUN_00d50b00();
    }
    lVar1 = DAT_027062c0;
    local_48 = lVar2;
    local_40 = '\x01';
    if (DAT_027062c0 != 0) {
      FUN_00d50b00();
    }
    local_38 = lVar1;
    local_30 = '\x01';
    local_28 = 0;
    local_20 = '\0';
    FUN_00d31230(&local_28,&local_38);
    if ((local_20 != '\0') && (local_28 != 0)) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
  }
  return;
}


