// Function: FUN_00df0630
// Address: 00df0630
// Size: 638 bytes
// Class: GNString


longlong * FUN_00df0630(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  int iVar4;
  longlong lVar5;
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
  int local_4c;
  longlong local_48;
  char local_40;
  longlong local_38;
  
  FUN_00defbe0();
  local_a0 = *unaff_RSI;
  local_98 = '\0';
  FUN_00df0580(param_1,&local_a0);
  lVar5 = local_48;
  if (local_40 == '\0') {
    if (((local_48 != 0) && (FUN_00d50b00(), local_40 != '\0')) && (local_48 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_40 = '\0';
  }
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  if (lVar5 == 0) {
    local_38 = lVar5;
    if (DAT_028a8770 == 0) {
LAB_00df07c9:
      *(undefined1 *)(unaff_RDI + 1) = 0;
      *unaff_RDI = 0;
      return unaff_RDI;
    }
    iVar1 = 0;
    if (*(longlong *)(DAT_028a8770 + 0x10) != 0) {
      iVar1 = FUN_00c8d620();
    }
    if (iVar1 < 1) {
      iVar1 = 0;
    }
    iVar4 = -1;
    do {
      if (iVar4 == iVar1 + -1) goto LAB_00df07c9;
      do {
        do {
          plVar3 = (longlong *)FUN_00c8df10();
        } while (plVar3 == (longlong *)0x0);
        lVar5 = *plVar3;
      } while (lVar5 == 0);
      local_90 = *unaff_RSI;
      local_88 = '\0';
      local_4c = iVar4 + 1;
      iVar2 = FUN_00d92590(param_1,1);
      if ((local_88 != '\0') && (local_90 != 0)) {
        FUN_00d50b20();
      }
      iVar4 = local_4c;
    } while (iVar2 != 0);
    local_78 = '\0';
    local_80 = lVar5;
    FUN_00df0580(param_1,&local_80);
    lVar5 = local_38;
    if (local_48 != 0) {
      lVar5 = local_48;
      if (local_40 == '\0') {
        FUN_00d50b00();
        if ((local_40 != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_40 = '\0';
      }
    }
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    local_68 = '\0';
    local_60 = *unaff_RSI;
    local_58 = '\0';
    local_70 = lVar5;
    FUN_00df0470(param_1,&local_60);
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    *unaff_RDI = lVar5;
  }
  else {
    *unaff_RDI = lVar5;
  }
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return unaff_RDI;
}


