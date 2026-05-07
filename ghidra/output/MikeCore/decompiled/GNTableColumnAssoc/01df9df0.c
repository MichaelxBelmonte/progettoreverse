// Function: FUN_01df9df0
// Address: 01df9df0
// Size: 661 bytes
// Class: GNTableColumnAssoc


/* WARNING: Removing unreachable block (ram,0x01df9f29) */
/* WARNING: Removing unreachable block (ram,0x01df9f35) */

int FUN_01df9df0(undefined4 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  longlong *unaff_RSI;
  longlong local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong *local_40;
  char local_38;
  
  lVar5 = DAT_02800140;
  if (DAT_02800140 != 0) {
    FUN_00d50b00();
  }
  FUN_01ccaae0();
  plVar2 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != (longlong *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
       (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if (lVar5 != 0) {
    FUN_00d50b20();
  }
  if (plVar2 != (longlong *)0x0) {
    FUN_01d26010();
    plVar3 = local_40;
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      (**(code **)(*local_40 + 0x10))();
      FUN_00d50b20();
    }
    if (plVar3 != (longlong *)0x0) {
      FUN_01d26010();
      local_80 = *param_2;
      local_78 = '\0';
      local_70 = *unaff_RSI;
      local_68 = '\0';
      iVar4 = (**(code **)(*local_40 + 0xb8))(param_1,&local_80,&local_70);
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      if ((local_78 != '\0') && (local_80 != 0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        (**(code **)(*local_40 + 0x10))();
        FUN_00d50b20();
      }
      if (iVar4 != 0) goto LAB_01dfa06b;
    }
  }
  lVar5 = DAT_027f2e90;
  if (DAT_027f2e90 != 0) {
    FUN_00d50b00();
  }
  local_60 = lVar5;
  local_58 = '\x01';
  lVar5 = FUN_01cac500();
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  lVar1 = DAT_027f2e98;
  if (lVar5 == 0) {
    iVar4 = 0;
  }
  else {
    if (DAT_027f2e98 != 0) {
      FUN_00d50b00();
    }
    local_50 = lVar1;
    local_48 = '\x01';
    lVar5 = FUN_01cac500();
    if (lVar5 != 0) {
      FUN_00d50b00();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((lVar5 == 0) || (*unaff_RSI != lVar5)) {
      iVar4 = 1;
    }
    else {
      iVar4 = 0x10;
    }
    FUN_01dcc2e0();
    if (lVar5 != 0) {
      FUN_00d50b20();
    }
  }
  if (plVar2 == (longlong *)0x0) {
    return iVar4;
  }
LAB_01dfa06b:
  FUN_00d50b20();
  return iVar4;
}


