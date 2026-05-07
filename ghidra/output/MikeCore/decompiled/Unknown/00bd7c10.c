// Function: FUN_00bd7c10
// Address: 00bd7c10
// Size: 1377 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x00bd7d0e) */
/* WARNING: Removing unreachable block (ram,0x00bd7fa7) */
/* WARNING: Removing unreachable block (ram,0x00bd7fb7) */
/* WARNING: Removing unreachable block (ram,0x00bd814e) */
/* WARNING: Removing unreachable block (ram,0x00bd815a) */
/* WARNING: Removing unreachable block (ram,0x00bd7d1e) */

void FUN_00bd7c10(undefined8 param_1,int param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  longlong local_c8;
  char local_c0;
  longlong local_88;
  char local_80;
  longlong local_78;
  char local_70;
  longlong local_68;
  char local_60;
  longlong local_58;
  char local_50;
  longlong *local_48;
  longlong local_40;
  char local_38;
  
  FUN_00b67e30();
  if ((*unaff_RSI == 0) || (iVar5 = FUN_00d8c7a0(), iVar5 == 0)) {
    FUN_00b67c50();
    return;
  }
  if (param_2 == 1) {
    cVar4 = (**(code **)(**(longlong **)(unaff_RDI + 0x68) + 0x88))();
    if (cVar4 == '\0') {
      FUN_00bd69b0();
    }
    cVar4 = (**(code **)(**(longlong **)(unaff_RDI + 0x68) + 0x90))();
    if (cVar4 == '\0') {
      FUN_00d8a060();
      FUN_00d8f1a0();
      if (local_80 == '\0') {
        if (local_88 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_80 = '\0';
      }
      local_40 = local_88;
      local_38 = '\0';
      FUN_00b679c0();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (local_88 != 0) {
        FUN_00d50b20();
      }
      if ((local_80 != '\0') && (local_88 != 0)) {
        FUN_00d50b20();
      }
      if ((local_c0 != '\0') && (local_c8 != 0)) {
        FUN_00d50b20();
      }
    }
    FUN_00d8ee20();
    lVar3 = local_40;
    lVar6 = *unaff_RSI;
    if (lVar6 == local_40) {
      if (((char)unaff_RSI[1] != '\0') || (local_40 == 0)) goto LAB_00bd7ec1;
      local_48 = unaff_RSI + 1;
      if (local_38 == '\0') {
        FUN_00d50b00();
        goto LAB_00bd7eba;
      }
    }
    else {
      local_48 = unaff_RSI + 1;
      lVar2 = unaff_RSI[1];
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
        *unaff_RSI = lVar3;
        if (((char)lVar2 != '\0') && (lVar6 != 0)) {
          FUN_00d50b20();
        }
LAB_00bd7eba:
        *(undefined1 *)local_48 = 1;
LAB_00bd7ec1:
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        goto LAB_00bd80ba;
      }
      *unaff_RSI = local_40;
      if (((char)lVar2 != '\0') && (lVar6 != 0)) {
        FUN_00d50b20();
      }
    }
    *(undefined1 *)local_48 = 1;
    goto LAB_00bd80ba;
  }
  if ((DAT_028a57a0 == 0) || (DAT_028a57a9 == '\0')) {
    FUN_00e8cb50();
    lVar6 = DAT_02704060;
    if (DAT_028a57a0 == 0) {
      if (DAT_02704060 != 0) {
        FUN_00d50b00();
        lVar3 = DAT_028a57a0;
        if (DAT_028a57a0 == lVar6) {
          bVar1 = false;
        }
        else {
          DAT_028a57a0 = lVar6;
          bVar1 = true;
          if (lVar3 != 0) {
            FUN_00d50b20();
          }
        }
        if (DAT_028a57a8 == '\0') {
          DAT_028a57a8 = '\x01';
          FUN_00e8cb90();
        }
        if (!bVar1) {
          FUN_00d50b20();
        }
      }
      DAT_028a57a9 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028a57a9 = '\x01';
      FUN_00e8cb70();
    }
    if (DAT_028a57a0 != 0) goto LAB_00bd7f30;
    lVar6 = 0;
  }
  else {
LAB_00bd7f30:
    lVar6 = DAT_028a57a0;
    local_50 = 0;
    FUN_00d50b00();
  }
  local_50 = '\x01';
  local_58 = lVar6;
  cVar4 = FUN_00d8f400();
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if (cVar4 == '\0') goto LAB_00bd80ba;
  iVar5 = FUN_00d8c7a0();
  lVar6 = DAT_028a57a0;
  if (iVar5 < 2) {
    FUN_00b67c50();
    return;
  }
  local_70 = 0;
  if (DAT_028a57a0 != 0) {
    FUN_00d50b00();
  }
  local_78 = lVar6;
  local_70 = '\x01';
  FUN_00d97f50(param_1,&local_78);
  lVar3 = local_40;
  lVar6 = *unaff_RSI;
  if (lVar6 == local_40) {
    if (((char)unaff_RSI[1] == '\0') && (local_40 != 0)) {
      local_48 = unaff_RSI + 1;
      if (local_38 != '\0') goto LAB_00bd8051;
      FUN_00d50b00();
      goto LAB_00bd808b;
    }
LAB_00bd8092:
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_48 = unaff_RSI + 1;
    lVar2 = unaff_RSI[1];
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
      *unaff_RSI = lVar3;
      if (((char)lVar2 != '\0') && (lVar6 != 0)) {
        FUN_00d50b20();
      }
LAB_00bd808b:
      *(undefined1 *)local_48 = 1;
      goto LAB_00bd8092;
    }
    *unaff_RSI = local_40;
    if (((char)lVar2 != '\0') && (lVar6 != 0)) {
      FUN_00d50b20();
    }
LAB_00bd8051:
    *(undefined1 *)local_48 = 1;
    local_38 = '\0';
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
LAB_00bd80ba:
  FUN_00cddf30();
  local_68 = local_40;
  local_60 = 0;
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  local_60 = '\x01';
  FUN_00b67c50();
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  return;
}


