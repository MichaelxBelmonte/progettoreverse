// Function: FUN_00b430e0
// Address: 00b430e0
// Size: 1261 bytes
// Class: GNDate


void FUN_00b430e0(void)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong unaff_RDI;
  bool bVar3;
  bool bVar4;
  undefined1 local_f0 [8];
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
  int local_54;
  uint local_50;
  undefined4 uStack_4c;
  uint local_48;
  undefined4 uStack_44;
  uint local_3c;
  longlong local_38;
  char local_30;
  int local_24;
  
  FUN_00ccd6d0(&local_24,&local_54);
  bVar3 = local_38 != 0;
  bVar4 = local_24 != 4;
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  lVar1 = DAT_02764880;
  if (bVar3 || bVar4) {
    if (DAT_02764880 != 0) {
      FUN_00d50b00();
    }
    local_e8 = lVar1;
    local_e0 = '\x01';
    FUN_00cc78b0();
    if ((local_e0 != '\0') && (local_e8 != 0)) {
      FUN_00d50b20();
    }
  }
  if (local_54 == 1) {
    FUN_00ccd750(&local_24,local_f0);
    bVar3 = local_38 != 0;
    bVar4 = local_24 != 8;
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    lVar1 = DAT_02764880;
    if (bVar3 || bVar4) {
      if (DAT_02764880 != 0) {
        FUN_00d50b00();
      }
      local_98 = lVar1;
      local_90 = '\x01';
      FUN_00cc78b0();
      if ((local_90 != '\0') && (local_98 != 0)) {
        FUN_00d50b20();
      }
    }
    FUN_00ccd750(&local_24,&local_50);
    bVar3 = local_38 != 0;
    bVar4 = local_24 != 8;
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    lVar1 = DAT_02764880;
    if (bVar3 || bVar4) {
      if (DAT_02764880 != 0) {
        FUN_00d50b00();
      }
      local_88 = lVar1;
      local_80 = '\x01';
      FUN_00cc78b0();
      if ((local_80 != '\0') && (local_88 != 0)) {
        FUN_00d50b20();
      }
    }
    FUN_00ccd6d0(&local_24,&local_3c);
    bVar3 = local_38 != 0;
    bVar4 = local_24 != 4;
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    lVar1 = DAT_02764880;
    if (bVar3 || bVar4) {
      if (DAT_02764880 != 0) {
        FUN_00d50b00();
      }
      local_78 = lVar1;
      local_70 = '\x01';
      FUN_00cc78b0();
      if ((local_70 != '\0') && (local_78 != 0)) {
        FUN_00d50b20();
      }
    }
    FUN_00ccd750(&local_24,&local_48);
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    lVar1 = DAT_02764880;
    if (local_38 != 0 || local_24 != 8) {
      if (DAT_02764880 != 0) {
        FUN_00d50b00();
      }
      local_68 = lVar1;
      local_60 = '\x01';
      FUN_00cc78b0();
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
    }
    *(double *)(unaff_RDI + 0x48) = (double)local_3c;
    *(ulonglong *)(unaff_RDI + 0x40) = CONCAT44(uStack_44,local_48);
    uVar2 = CONCAT44(uStack_4c,local_50);
  }
  else {
    if (local_54 != 0) {
      return;
    }
    FUN_00ccd6d0(&local_24,local_f0);
    bVar3 = local_38 != 0;
    bVar4 = local_24 != 4;
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    lVar1 = DAT_02764880;
    if (bVar3 || bVar4) {
      if (DAT_02764880 != 0) {
        FUN_00d50b00();
      }
      local_d8 = lVar1;
      local_d0 = '\x01';
      FUN_00cc78b0();
      if ((local_d0 != '\0') && (local_d8 != 0)) {
        FUN_00d50b20();
      }
    }
    FUN_00ccd6d0(&local_24,&local_50);
    bVar3 = local_38 != 0;
    bVar4 = local_24 != 4;
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    lVar1 = DAT_02764880;
    if (bVar3 || bVar4) {
      if (DAT_02764880 != 0) {
        FUN_00d50b00();
      }
      local_c8 = lVar1;
      local_c0 = '\x01';
      FUN_00cc78b0();
      if ((local_c0 != '\0') && (local_c8 != 0)) {
        FUN_00d50b20();
      }
    }
    FUN_00ccd6d0(&local_24,&local_3c);
    bVar3 = local_38 != 0;
    bVar4 = local_24 != 4;
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    lVar1 = DAT_02764880;
    if (bVar3 || bVar4) {
      if (DAT_02764880 != 0) {
        FUN_00d50b00();
      }
      local_b8 = lVar1;
      local_b0 = '\x01';
      FUN_00cc78b0();
      if ((local_b0 != '\0') && (local_b8 != 0)) {
        FUN_00d50b20();
      }
    }
    FUN_00ccd6d0(&local_24,&local_48);
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    lVar1 = DAT_02764880;
    if (local_38 != 0 || local_24 != 4) {
      if (DAT_02764880 != 0) {
        FUN_00d50b00();
      }
      local_a8 = lVar1;
      local_a0 = '\x01';
      FUN_00cc78b0();
      if ((local_a0 != '\0') && (local_a8 != 0)) {
        FUN_00d50b20();
      }
    }
    *(double *)(unaff_RDI + 0x48) = (double)local_3c;
    *(ulonglong *)(unaff_RDI + 0x40) = (ulonglong)local_48;
    uVar2 = (ulonglong)local_50;
  }
  *(ulonglong *)(unaff_RDI + 0x58) = uVar2;
  return;
}


