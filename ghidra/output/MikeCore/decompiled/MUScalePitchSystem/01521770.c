// Function: FUN_01521770
// Address: 01521770
// Size: 909 bytes
// Class: MUScalePitchSystem


/* WARNING: Removing unreachable block (ram,0x01521911) */
/* WARNING: Removing unreachable block (ram,0x0152191e) */

undefined8 * FUN_01521770(undefined4 param_1,longlong *param_2)

{
  longlong lVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined8 *unaff_RDI;
  undefined8 *local_68;
  char local_60;
  undefined8 *local_40;
  uint local_38;
  undefined4 local_34;
  
  lVar1 = DAT_026e3bc8;
  if (DAT_026e3bc8 != 0) {
    FUN_00d50b00();
  }
  iVar3 = FUN_00d90650();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = DAT_027e3b70;
  if (DAT_027e3b70 != 0) {
    FUN_00d50b00();
  }
  iVar4 = FUN_00d90650();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if (iVar3 == -1) {
    FUN_00d8b910();
    local_38 = 1;
    local_40 = &DAT_024cc6f0;
    local_34 = param_1;
    FUN_00d8cb40(param_1,&local_40);
    if (local_68 == (undefined8 *)0x0) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
      if (local_60 == '\0') {
        FUN_00d50b00();
      }
    }
  }
  else if (iVar4 == -1) {
    FUN_00d8b910();
    lVar1 = *param_2;
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    FUN_00d8cb40();
    local_68 = local_40;
    if (local_40 == (undefined8 *)0x0) {
      bVar2 = false;
    }
    else if ((char)local_38 == '\0') {
      FUN_00d50b00();
      bVar2 = true;
      if (((char)local_38 != '\0') && (local_40 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38 = local_38 & 0xffffff00;
      bVar2 = true;
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  else if (iVar3 < iVar4) {
    FUN_00d8b910();
    lVar1 = *param_2;
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    FUN_00d8cb40();
    local_68 = local_40;
    if (local_40 == (undefined8 *)0x0) {
      bVar2 = false;
    }
    else if ((char)local_38 == '\0') {
      FUN_00d50b00();
      bVar2 = true;
      if (((char)local_38 != '\0') && (local_40 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38 = local_38 & 0xffffff00;
      bVar2 = true;
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  else {
    FUN_00d8b910();
    lVar1 = *param_2;
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    FUN_00d8cb40();
    local_68 = local_40;
    if (local_40 == (undefined8 *)0x0) {
      bVar2 = false;
    }
    else if ((char)local_38 == '\0') {
      FUN_00d50b00();
      bVar2 = true;
      if (((char)local_38 != '\0') && (local_40 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38 = local_38 & 0xffffff00;
      bVar2 = true;
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  *(undefined1 *)(unaff_RDI + 1) = 0;
  if ((!bVar2) && (local_68 != (undefined8 *)0x0)) {
    FUN_00d50b00();
  }
  *unaff_RDI = local_68;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return unaff_RDI;
}


