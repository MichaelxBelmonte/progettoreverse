// Function: FUN_004ac670
// Address: 004ac670
// Size: 1501 bytes
// Class: MDErrorController


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004ac670(void)

{
  longlong lVar1;
  longlong lVar2;
  byte bVar3;
  ulonglong uVar4;
  longlong unaff_RDI;
  undefined8 uVar5;
  double dVar6;
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
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  if (*(longlong **)(unaff_RDI + 0x70) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(unaff_RDI + 0x70) + 0x920))();
    local_80 = local_40;
    local_78 = 0;
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_78 = '\x01';
    FUN_00292400();
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    uVar5 = (**(code **)(**(longlong **)(unaff_RDI + 0x70) + 0x920))();
    local_100 = DAT_02708f20;
    if (DAT_02708f20 != 0) {
      uVar5 = FUN_00d50b00();
    }
    local_f8 = '\x01';
    FUN_01d5e6e0(uVar5,&local_100);
    lVar1 = local_40;
    if (local_38 == '\0') {
      if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
    }
    if ((local_f8 != '\0') && (local_100 != 0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    lVar2 = DAT_027296a0;
    if (lVar1 != 0) {
      if (DAT_027296a0 != 0) {
        FUN_00d50b00();
      }
      lVar1 = DAT_026de5c0;
      local_f0 = lVar2;
      local_e8 = '\x01';
      if (DAT_026de5c0 != 0) {
        FUN_00d50b00();
      }
      local_e0 = lVar1;
      local_d8 = '\x01';
      local_d0 = 0;
      local_c8 = '\0';
      FUN_00d31230(&local_d0,&local_e0);
      local_70 = local_40;
      local_68 = 0;
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      local_68 = '\x01';
      FUN_01d64eb0();
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if ((local_c8 != '\0') && (local_d0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_d8 != '\0') && (local_e0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_e8 != '\0') && (local_f0 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    lVar1 = DAT_02708e90;
    if (DAT_02708e90 != 0) {
      FUN_00d50b00();
    }
    dVar6 = (double)FUN_00e7d6f0();
    uVar4 = (ulonglong)(dVar6 * DAT_023907c0);
    dVar6 = dVar6 * DAT_023907c0 - _DAT_023907c8;
    uVar5 = FUN_0071a120();
    if ((((local_38 == '\0') && (local_40 != 0)) && (uVar5 = FUN_00d50b00(), local_38 != '\0')) &&
       (local_40 != 0)) {
      uVar5 = FUN_00d50b20();
    }
    bVar3 = (byte)(((longlong)dVar6 & (longlong)uVar4 >> 0x3f | uVar4) / 3);
    local_50 = lVar1;
    local_48 = '\0';
    FUN_000175c0(uVar5,&local_50);
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
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if ((lVar2 != 0 & bVar3) != 0) {
      uVar5 = (**(code **)(**(longlong **)(unaff_RDI + 0x70) + 0x920))();
      local_c0 = DAT_026de5e8;
      if (DAT_026de5e8 != 0) {
        uVar5 = FUN_00d50b00();
      }
      local_b8 = '\x01';
      FUN_01d5e6e0(uVar5,&local_c0);
      lVar1 = local_40;
      if (local_38 == '\0') {
        if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_38 = '\0';
      }
      if ((local_b8 != '\0') && (local_c0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      lVar2 = DAT_027296a0;
      if (lVar1 != 0) {
        if (DAT_027296a0 != 0) {
          FUN_00d50b00();
        }
        lVar1 = DAT_02708eb0;
        local_b0 = lVar2;
        local_a8 = '\x01';
        if (DAT_02708eb0 != 0) {
          FUN_00d50b00();
        }
        local_a0 = lVar1;
        local_98 = '\x01';
        local_90 = 0;
        local_88 = '\0';
        FUN_00d31230(&local_90,&local_a0);
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
        FUN_01d64eb0();
        if ((local_58 != '\0') && (local_60 != 0)) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if ((local_88 != '\0') && (local_90 != 0)) {
          FUN_00d50b20();
        }
        if ((local_98 != '\0') && (local_a0 != 0)) {
          FUN_00d50b20();
        }
        if ((local_a8 != '\0') && (local_b0 != 0)) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
      }
    }
  }
  return;
}


