// Function: FUN_00d48d20
// Address: 00d48d20
// Size: 928 bytes
// Class: GNList
// String references:
//   "%I"
//   "%@%@"
//   "%I %@"


void FUN_00d48d20(undefined8 param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  undefined8 *puVar5;
  undefined4 uVar6;
  undefined1 local_78 [8];
  undefined8 *local_70;
  undefined4 local_68;
  int local_64;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  undefined8 *local_40;
  uint local_38;
  int local_34;
  
  FUN_00d492b0();
  puVar4 = local_70;
  if ((char)local_68 == '\0') {
    if (local_70 != (undefined8 *)0x0) {
      FUN_00d50b00();
      goto LAB_00d490a6;
    }
  }
  else if (local_70 != (undefined8 *)0x0) goto LAB_00d490a6;
  iVar3 = (int)*(float *)(unaff_RSI + 0x10);
  if (*(float *)(unaff_RSI + 0x10) <= (float)param_2) {
    iVar3 = param_2;
  }
  iVar2 = (int)*(float *)(unaff_RSI + 0x14);
  if ((float)iVar3 <= *(float *)(unaff_RSI + 0x14)) {
    iVar2 = iVar3;
  }
  lVar1 = *(longlong *)(unaff_RSI + 0x18);
  if (lVar1 == 0) {
    local_34 = -iVar2;
    if (0 < iVar2) {
      local_34 = iVar2;
    }
    local_38 = 1;
    local_40 = &DAT_024cc6f0;
    FUN_00d8cb40(&DAT_024cc6f0,&local_40);
    if ((local_70 != (undefined8 *)0x0) && (puVar4 = local_70, (char)local_68 == '\0')) {
      FUN_00d50b00();
      if (((char)local_68 != '\0') && (local_70 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
    }
    lVar1 = *(longlong *)(unaff_RSI + 0x28);
  }
  else {
    local_64 = -iVar2;
    if (0 < iVar2) {
      local_64 = iVar2;
    }
    local_68 = 2;
    local_70 = &DAT_0263cdb0;
    local_58 = 0;
    uVar6 = FUN_00d50b00();
    local_58 = '\x01';
    local_60 = lVar1;
    FUN_00d8cb40(uVar6,&local_70);
    if (local_40 != (undefined8 *)0x0) {
      puVar4 = local_40;
      if ((char)local_38 == '\0') {
        FUN_00d50b00();
        if (((char)local_38 != '\0') && (local_40 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_38 = local_38 & 0xffffff00;
      }
    }
    local_70 = &DAT_0263cdb0;
    if ((local_58 != '\0') && (local_70 = &DAT_0263cdb0, local_60 != 0)) {
      FUN_00d50b20();
    }
    lVar1 = *(longlong *)(unaff_RSI + 0x28);
  }
  if ((lVar1 == 0) || (iVar2 < 1)) {
    if ((*(longlong *)(unaff_RSI + 0x30) == 0) || (-1 < iVar2)) goto LAB_00d490a6;
    uVar6 = FUN_00083ea0(2,local_78);
    FUN_00d8cb40(uVar6,&local_70);
    puVar5 = puVar4;
    if (local_40 == puVar4) {
LAB_00d49054:
      if (((char)local_38 != '\0') && (local_40 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      puVar5 = local_40;
      if ((char)local_38 == '\0') {
        if (local_40 != (undefined8 *)0x0) {
          FUN_00d50b00();
        }
        if (puVar4 != (undefined8 *)0x0) {
          FUN_00d50b20();
        }
        goto LAB_00d49054;
      }
      if (puVar4 != (undefined8 *)0x0) {
        FUN_00d50b20();
      }
      local_38 = local_38 & 0xffffff00;
    }
    local_70 = (undefined8 *)&DAT_0253d630;
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    local_70 = &DAT_024c5048;
    puVar4 = puVar5;
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    goto LAB_00d490a6;
  }
  uVar6 = FUN_00083ea0(2,local_78);
  FUN_00d8cb40(uVar6,&local_70);
  puVar5 = puVar4;
  if (local_40 == puVar4) {
LAB_00d48ffd:
    if (((char)local_38 != '\0') && (local_40 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    puVar5 = local_40;
    if ((char)local_38 == '\0') {
      if (local_40 != (undefined8 *)0x0) {
        FUN_00d50b00();
      }
      if (puVar4 != (undefined8 *)0x0) {
        FUN_00d50b20();
      }
      goto LAB_00d48ffd;
    }
    if (puVar4 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
    local_38 = local_38 & 0xffffff00;
  }
  local_70 = (undefined8 *)&DAT_0253d630;
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  local_70 = &DAT_024c5048;
  puVar4 = puVar5;
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
LAB_00d490a6:
  *unaff_RDI = puVar4;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}


