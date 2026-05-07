// Function: FUN_00d31230
// Address: 00d31230
// Size: 713 bytes
// Class: GNString


/* WARNING: Removing unreachable block (ram,0x00d313e4) */
/* WARNING: Removing unreachable block (ram,0x00d313f0) */
/* WARNING: Removing unreachable block (ram,0x00d31349) */
/* WARNING: Removing unreachable block (ram,0x00d31355) */
/* WARNING: Removing unreachable block (ram,0x00d31437) */
/* WARNING: Removing unreachable block (ram,0x00d31440) */

void FUN_00d31230(longlong *param_1,longlong *param_2)

{
  bool bVar1;
  bool bVar2;
  longlong *plVar3;
  longlong *unaff_RSI;
  longlong lVar4;
  bool bVar5;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  if ((DAT_028a7708 == (longlong *)0x0) || (DAT_028a7711 == '\0')) {
    FUN_00e8cb50();
    if (DAT_028a7708 == (longlong *)0x0) {
      plVar3 = (longlong *)FUN_00e8fc40();
      FUN_00022d50();
      (**(code **)(*plVar3 + 0x18))();
      if (DAT_028a7708 == plVar3) {
        bVar2 = false;
        bVar1 = false;
      }
      else {
        bVar2 = true;
        bVar1 = true;
        bVar5 = DAT_028a7708 != (longlong *)0x0;
        DAT_028a7708 = plVar3;
        if (bVar5) {
          FUN_00d50b20();
        }
      }
      if (DAT_028a7710 == '\0') {
        DAT_028a7710 = '\x01';
        FUN_00e8cb90();
        bVar1 = bVar2;
      }
      if (!bVar1) {
        FUN_00d50b20();
      }
      DAT_028a7711 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028a7711 = '\x01';
      FUN_00e8cb70();
    }
  }
  FUN_000175c0();
  lVar4 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if (lVar4 == 0) {
    FUN_00e42580();
    if (((local_40 != 0) && (lVar4 = local_40, local_38 == '\0')) &&
       ((FUN_00d50b00(), local_38 != '\0' && (local_40 != 0)))) {
      FUN_00d50b20();
    }
    local_40 = *unaff_RSI;
    local_38 = '\0';
    FUN_00ca0840();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  if (*param_1 == 0) {
    local_50 = *param_2;
    local_48 = '\0';
    FUN_00e427c0();
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_70 = *param_2;
    local_68 = '\0';
    local_58 = '\0';
    local_60 = *param_1;
    FUN_00e428f0(&local_60,&local_70);
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
  }
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  return;
}


