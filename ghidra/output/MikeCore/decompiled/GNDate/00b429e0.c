// Function: FUN_00b429e0
// Address: 00b429e0
// Size: 1237 bytes
// Class: GNDate


ulonglong FUN_00b429e0(undefined8 param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong unaff_RSI;
  longlong unaff_RDI;
  longlong lVar3;
  bool bVar4;
  bool bVar5;
  longlong local_f8;
  char local_f0;
  longlong local_e0;
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
  ulonglong local_58;
  uint local_50;
  int local_4c;
  longlong local_48;
  char local_40;
  int local_38;
  int local_34;
  
  local_4c = param_2;
  if (unaff_RSI < 0) {
    (**(code **)(**(longlong **)(unaff_RDI + 0x20) + 0x398))(param_1,&local_e0);
    bVar4 = true;
    if (local_48 == 0) {
      (**(code **)(**(longlong **)(unaff_RDI + 0x20) + 0x3a0))();
      bVar4 = local_f8 != 0;
      if ((local_f0 != '\0') && (local_f8 != 0)) {
        FUN_00d50b20();
      }
    }
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    lVar3 = DAT_02764880;
    unaff_RSI = local_e0;
    if (bVar4) {
      if (DAT_02764880 != 0) {
        FUN_00d50b00();
      }
      local_d8 = lVar3;
      local_d0 = '\x01';
      FUN_00cc78b0();
      unaff_RSI = local_e0;
      if ((local_d0 != '\0') && (local_d8 != 0)) {
        FUN_00d50b20();
        unaff_RSI = local_e0;
      }
    }
  }
  do {
    (**(code **)(**(longlong **)(unaff_RDI + 0x20) + 0x390))();
    lVar3 = local_48;
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    lVar1 = DAT_02764880;
    if (lVar3 != 0) {
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
    FUN_00ccd6d0(&local_34,&local_50);
    lVar3 = local_48;
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    lVar1 = DAT_02764880;
    if (lVar3 != 0) {
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
    local_58 = (ulonglong)local_50;
    if (local_34 != 4) {
      return 0;
    }
    if (local_50 == 1) {
      FUN_00ccd750(&local_34,&local_58);
      bVar4 = local_48 != 0;
      bVar5 = local_34 != 8;
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      lVar3 = DAT_02764880;
      if (bVar4 || bVar5) {
        if (DAT_02764880 != 0) {
          FUN_00d50b00();
        }
        local_a8 = lVar3;
        local_a0 = '\x01';
        FUN_00cc78b0();
        if ((local_a0 != '\0') && (local_a8 != 0)) {
          FUN_00d50b20();
        }
      }
      FUN_00ccd6d0(&local_34,&local_38);
      bVar4 = local_48 != 0;
      bVar5 = local_34 != 4;
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      lVar3 = DAT_02764880;
      if (bVar4 || bVar5) {
        if (DAT_02764880 != 0) {
          FUN_00d50b00();
        }
        local_98 = lVar3;
        local_90 = '\x01';
        FUN_00cc78b0();
        if ((local_90 != '\0') && (local_98 != 0)) {
          FUN_00d50b20();
        }
      }
      if (local_38 == local_4c) {
        return local_58 - 0x10;
      }
    }
    else {
      if (local_50 == 0) {
        FUN_00ccd6d0(&local_34,&local_38);
        if ((local_40 != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
        lVar3 = DAT_02764880;
        if (local_48 != 0 || local_34 != 4) {
          if (DAT_02764880 != 0) {
            FUN_00d50b00();
          }
          local_88 = lVar3;
          local_80 = '\x01';
          FUN_00cc78b0();
          if ((local_80 != '\0') && (local_88 != 0)) {
            FUN_00d50b20();
          }
        }
        if (local_38 == local_4c) {
          return unaff_RSI - 8;
        }
        return 0;
      }
      FUN_00ccd6d0(&local_34,&local_38);
      bVar4 = local_48 != 0;
      bVar5 = local_34 != 4;
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      lVar3 = DAT_02764880;
      if (bVar4 || bVar5) {
        if (DAT_02764880 != 0) {
          FUN_00d50b00();
        }
        local_78 = lVar3;
        local_70 = '\x01';
        FUN_00cc78b0();
        if ((local_70 != '\0') && (local_78 != 0)) {
          FUN_00d50b20();
        }
      }
      if (local_38 == local_4c) {
        return (ulonglong)(local_50 - 8);
      }
    }
    lVar3 = unaff_RSI - local_58;
    if (lVar3 == 0 || unaff_RSI < (longlong)local_58) {
      return 0;
    }
    (**(code **)(**(longlong **)(unaff_RDI + 0x20) + 0x3a0))();
    lVar1 = local_48;
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    lVar2 = DAT_02764880;
    unaff_RSI = lVar3;
    if (lVar1 != 0) {
      if (DAT_02764880 != 0) {
        FUN_00d50b00();
      }
      local_68 = lVar2;
      local_60 = '\x01';
      FUN_00cc78b0();
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
    }
  } while( true );
}


