// Function: FUN_015b5f50
// Address: 015b5f50
// Size: 1215 bytes
// Class: GNData
// String references:
//   "\"%@\""


/* WARNING: Removing unreachable block (ram,0x015b60c6) */
/* WARNING: Removing unreachable block (ram,0x015b60d2) */
/* WARNING: Removing unreachable block (ram,0x015b607e) */
/* WARNING: Removing unreachable block (ram,0x015b608a) */

void FUN_015b5f50(undefined4 param_1,char param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  int iVar5;
  bool bVar6;
  undefined4 uVar7;
  longlong local_b0;
  char local_a8;
  undefined8 *local_60;
  uint local_58;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  if ((DAT_028ad540 != (undefined8 *)0x0) && (FUN_00deca40(), DAT_028ad540 != (undefined8 *)0x0)) {
    DAT_028ad540 = (undefined8 *)0x0;
    FUN_00d50b20();
  }
  iVar1 = *(int *)(*unaff_RSI + 0x18);
  iVar5 = iVar1 + 3;
  if (-1 < iVar1) {
    iVar5 = iVar1;
  }
  FUN_00cddf30();
  lVar2 = local_40;
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  uVar7 = FUN_00b82410(param_1,2,0x10,0);
  puVar3 = local_60;
  if ((char)local_58 == '\0') {
    if (local_60 != (undefined8 *)0x0) {
      uVar7 = FUN_00d50b00();
      if (((char)local_58 != '\0') && (local_60 != (undefined8 *)0x0)) {
        uVar7 = FUN_00d50b20();
      }
    }
  }
  else {
    local_58 = local_58 & 0xffffff00;
  }
  if (lVar2 != 0) {
    uVar7 = FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    uVar7 = FUN_00d50b20();
  }
  FUN_00b87ba0(uVar7,iVar5 >> 2);
  FUN_00b881a0();
  if (param_2 != '\0') {
    puVar4 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar4 = &DAT_025818d0;
    *(undefined1 *)(puVar4 + 3) = 0;
    *(undefined8 *)((longlong)puVar4 + 0x1c) = 0;
    *(undefined8 *)((longlong)puVar4 + 0x24) = 0;
    *(undefined8 *)((longlong)puVar4 + 0x2c) = 0;
    *(undefined8 *)((longlong)puVar4 + 0x34) = 0;
    *(undefined8 *)((longlong)puVar4 + 0x3c) = 0;
    *(undefined8 *)((longlong)puVar4 + 0x44) = 0;
    *(undefined4 *)((longlong)puVar4 + 0x4c) = 0;
    (*DAT_025818e8)();
    bVar6 = DAT_028ad540 == (undefined8 *)0x0;
    DAT_028ad540 = puVar4;
    if (((bVar6) || (FUN_00d50b20(), lVar2 = DAT_027c7a58, DAT_028ad540 != (undefined8 *)0x0)) &&
       (lVar2 = DAT_027c7a58, DAT_028ad548 == '\0')) {
      DAT_028ad548 = '\x01';
      FUN_00e8cb90();
      lVar2 = DAT_027c7a58;
    }
    DAT_027c7a58 = lVar2;
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    FUN_00cddf30();
    puVar4 = local_60;
    if ((char)local_58 == '\0') {
      if (local_60 != (undefined8 *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_58 = local_58 & 0xffffff00;
    }
    uVar7 = FUN_00decd00();
    if (puVar4 != (undefined8 *)0x0) {
      uVar7 = FUN_00d50b20();
    }
    if (((char)local_58 != '\0') && (local_60 != (undefined8 *)0x0)) {
      uVar7 = FUN_00d50b20();
    }
    if (lVar2 != 0) {
      uVar7 = FUN_00d50b20();
    }
    lVar2 = *unaff_RDI;
    local_58 = 1;
    local_60 = &DAT_024c5048;
    local_48 = 0;
    if (lVar2 != 0) {
      uVar7 = FUN_00d50b00();
    }
    local_48 = '\x01';
    local_50 = lVar2;
    FUN_00d8cb40(uVar7,&local_60);
    if (local_a8 == '\0') {
      if (local_b0 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_a8 = '\0';
    }
    FUN_006e17f0();
    lVar2 = local_40;
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    FUN_00decd50();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (local_b0 != 0) {
      FUN_00d50b20();
    }
    if ((local_a8 != '\0') && (local_b0 != 0)) {
      FUN_00d50b20();
    }
    local_60 = &DAT_024c5048;
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    FUN_00decda0();
  }
  if (puVar3 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  return;
}


