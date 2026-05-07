// Function: FUN_00dbe290
// Address: 00dbe290
// Size: 1493 bytes
// Class: GNURL
// String references:
//   "%@=\"%@\""


/* WARNING: Removing unreachable block (ram,0x00dbe825) */
/* WARNING: Removing unreachable block (ram,0x00dbe831) */
/* WARNING: Removing unreachable block (ram,0x00dbe654) */
/* WARNING: Removing unreachable block (ram,0x00dbe664) */

longlong * FUN_00dbe290(longlong *param_1,longlong *param_2,char param_3)

{
  longlong lVar1;
  char cVar2;
  longlong *unaff_RDI;
  longlong lVar3;
  longlong *local_110 [2];
  undefined1 local_100;
  undefined1 local_f0;
  longlong *local_a0;
  longlong *local_98;
  longlong *local_90;
  char local_88;
  longlong *local_80;
  char local_78;
  longlong *local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  lVar3 = DAT_02781680;
  if (*param_1 == 0) {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    lVar3 = *param_2;
    if ((char)param_2[1] != '\0') {
      *unaff_RDI = lVar3;
      *(undefined1 *)(unaff_RDI + 1) = 1;
      *(undefined1 *)(param_2 + 1) = 0;
      return unaff_RDI;
    }
    if (lVar3 != 0) {
      FUN_00d50b00();
    }
    *unaff_RDI = lVar3;
    *(undefined1 *)(unaff_RDI + 1) = 1;
    return unaff_RDI;
  }
  local_98 = param_2;
  if (DAT_02781680 != 0) {
    FUN_00d50b00();
  }
  cVar2 = FUN_00d90870();
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  lVar3 = DAT_02783b00;
  if (cVar2 == '\0') {
    if (DAT_02783b00 != 0) {
      FUN_00d50b00();
    }
    FUN_00dbdbc0();
    param_1 = (longlong *)*param_1;
    cVar2 = FUN_00d8ca70();
    if (cVar2 == '@') {
      FUN_00d8f140();
    }
    else {
      local_78 = 0;
      if (param_1 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      local_78 = '\x01';
      local_80 = param_1;
    }
    local_a0 = local_90;
    local_110[0] = local_80;
    FUN_00083ea0(2,local_110);
    FUN_00d8cb40();
    lVar1 = local_40;
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_100 = 1;
    FUN_00dbe120();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    local_70 = (longlong *)&DAT_0253d630;
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    local_70 = &DAT_024c5048;
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (lVar3 == 0) {
      return unaff_RDI;
    }
    FUN_00d50b20();
    return unaff_RDI;
  }
  param_1 = (longlong *)*param_1;
  cVar2 = FUN_00d8ca70();
  if (cVar2 == '@') {
    FUN_00d8f140();
    param_1 = local_70;
    if (local_68 != '\0') goto LAB_00dbe45c;
    if (local_70 != (longlong *)0x0) {
      FUN_00d50b00();
      if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_00dbe460;
    }
    param_1 = (longlong *)0x0;
    if (param_3 == '\0') goto LAB_00dbe6ab;
LAB_00dbe469:
    lVar3 = DAT_027f2f20;
    if (DAT_027f2f20 != 0) {
      FUN_00d50b00();
    }
    cVar2 = (**(code **)(*param_1 + 0x50))();
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    lVar3 = DAT_02783b08;
    if (cVar2 != '\0') {
      *(undefined1 *)(unaff_RDI + 1) = 0;
      lVar3 = *local_98;
      if ((char)local_98[1] == '\0') {
        if (lVar3 != 0) {
          FUN_00d50b00();
        }
        *unaff_RDI = lVar3;
        *(undefined1 *)(unaff_RDI + 1) = 1;
      }
      else {
        *unaff_RDI = lVar3;
        *(undefined1 *)(unaff_RDI + 1) = 1;
        *(undefined1 *)(local_98 + 1) = 0;
      }
      goto LAB_00dbe848;
    }
    if (DAT_02783b08 == 0) {
LAB_00dbe6c1:
      lVar3 = 0;
    }
    else {
      FUN_00d50b00();
    }
  }
  else {
    local_68 = 0;
    if (param_1 != (longlong *)0x0) {
      FUN_00d50b00();
    }
LAB_00dbe45c:
    local_68 = '\0';
LAB_00dbe460:
    if (param_3 != '\0') goto LAB_00dbe469;
LAB_00dbe6ab:
    lVar3 = DAT_02783b10;
    if (DAT_02783b10 == 0) goto LAB_00dbe6c1;
    FUN_00d50b00();
  }
  FUN_00dbdbc0();
  local_80 = local_90;
  local_a0 = param_1;
  FUN_00083ea0(2,&local_a0);
  FUN_00d8cb40();
  lVar1 = local_40;
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  local_f0 = 1;
  FUN_00dbe120();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  local_70 = (longlong *)&DAT_0253d630;
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  local_70 = &DAT_024c5048;
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  if (param_1 == (longlong *)0x0) {
    return unaff_RDI;
  }
LAB_00dbe848:
  FUN_00d50b20();
  return unaff_RDI;
}


