// Function: FUN_003b9dd0
// Address: 003b9dd0
// Size: 1142 bytes
// Class: MDAudioTrackHeaderViewController


/* WARNING: Removing unreachable block (ram,0x003b9eb1) */
/* WARNING: Removing unreachable block (ram,0x003b9ebd) */

void FUN_003b9dd0(void)

{
  longlong lVar1;
  longlong lVar2;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
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
  longlong local_38;
  char local_30;
  
  FUN_003ba530();
  if ((local_30 == '\0') && (local_38 != 0)) {
    FUN_00d50b00();
  }
  if (*unaff_RSI == local_38) goto LAB_003ba053;
  if ((unaff_RDI[0x14] != 0) && (FUN_00d50130(), unaff_RDI[0x14] != 0)) {
    unaff_RDI[0x14] = 0;
    FUN_00d50b20();
  }
  if (((unaff_RDI[0x15] != 0) && (*unaff_RSI == 0)) && (FUN_00d50130(), unaff_RDI[0x15] != 0)) {
    unaff_RDI[0x15] = 0;
    FUN_00d50b20();
  }
  lVar1 = unaff_RDI[0xf];
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  FUN_01d2a770();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if (*unaff_RSI == 0) goto LAB_003ba053;
  FUN_00d50b00();
  local_d8 = DAT_027057b8;
  if (DAT_027057b8 != 0) {
    FUN_00d50b00();
  }
  lVar1 = DAT_026f6d50;
  local_d0 = '\x01';
  if (DAT_026f6d50 != 0) {
    FUN_00d50b00();
  }
  local_c8 = lVar1;
  local_c0 = '\x01';
  local_b8 = *unaff_RSI;
  local_b0 = '\0';
  FUN_000bf690(&local_c8,&local_d8,&local_b8);
  lVar1 = unaff_RDI[0x14];
  lVar2 = lVar1;
  if (lVar1 != local_38) {
    lVar2 = local_38;
    if (local_30 == '\0') {
      if (local_38 == 0) {
        lVar2 = 0;
        goto LAB_003b9f80;
      }
      FUN_00d50b00();
      lVar1 = unaff_RDI[0x14];
      unaff_RDI[0x14] = local_38;
    }
    else {
      local_30 = '\0';
LAB_003b9f80:
      unaff_RDI[0x14] = lVar2;
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
      lVar2 = local_38;
    }
  }
  if ((local_30 != '\0') && (lVar2 != 0)) {
    FUN_00d50b20();
  }
  if ((local_b0 != '\0') && (local_b8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_c0 != '\0') && (local_c8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_d0 != '\0') && (local_d8 != 0)) {
    FUN_00d50b20();
  }
  if (unaff_RDI != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0x15] == 0) {
    FUN_00d50b00();
    local_a8 = DAT_027057c0;
    if (DAT_027057c0 != 0) {
      FUN_00d50b00();
    }
    lVar1 = DAT_026f6e70;
    local_a0 = '\x01';
    if (DAT_026f6e70 != 0) {
      FUN_00d50b00();
    }
    local_98 = lVar1;
    local_90 = '\x01';
    local_88 = 0;
    local_80 = '\0';
    FUN_000bf690(&local_98,&local_a8,&local_88);
    lVar1 = unaff_RDI[0x15];
    lVar2 = lVar1;
    if (lVar1 != local_38) {
      lVar2 = local_38;
      if (local_30 == '\0') {
        if (local_38 == 0) {
          lVar2 = 0;
          goto LAB_003ba10d;
        }
        FUN_00d50b00();
        lVar1 = unaff_RDI[0x15];
        unaff_RDI[0x15] = local_38;
      }
      else {
        local_30 = '\0';
LAB_003ba10d:
        unaff_RDI[0x15] = lVar2;
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
        lVar2 = local_38;
      }
    }
    if ((local_30 != '\0') && (lVar2 != 0)) {
      FUN_00d50b20();
    }
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
    if ((local_a0 != '\0') && (local_a8 != 0)) {
      FUN_00d50b20();
    }
    if (unaff_RDI != (longlong *)0x0) {
      FUN_00d50b20();
    }
    lVar1 = DAT_026fe410;
    if (DAT_026fe410 != 0) {
      FUN_00d50b00();
    }
    local_78 = lVar1;
    local_70 = '\x01';
    local_68 = 0;
    local_60 = '\0';
    FUN_000bf780();
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
  }
  (**(code **)(*unaff_RDI + 0x5c0))();
LAB_003ba053:
  if (local_38 != 0) {
    FUN_00d50b20();
  }
  return;
}


