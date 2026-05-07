// Function: FUN_01f08380
// Address: 01f08380
// Size: 623 bytes
// Class: GNList
// String references:
//   "%I"


void FUN_01f08380(void)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  longlong local_90;
  char local_88;
  undefined8 *local_70;
  undefined4 local_68;
  undefined4 local_64;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  FUN_01ccad60();
  lVar3 = local_40;
  if (local_40 == 0) {
    lVar5 = 0;
joined_r0x01f083cc:
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    lVar5 = local_40;
    if (local_38 == '\0') {
      FUN_00d50b00();
      lVar5 = lVar3;
      goto joined_r0x01f083cc;
    }
  }
  lVar2 = DAT_02800140;
  if (DAT_02800140 != 0) {
    FUN_00d50b00();
  }
  FUN_01ccaae0();
  lVar4 = local_40;
  if (local_40 == 0) {
    bVar1 = true;
    lVar4 = 0;
  }
  else {
    if (local_38 == '\0') {
      FUN_00d50b00();
      bVar1 = false;
      if ((local_38 == '\0') || (local_40 == 0)) goto LAB_01f08447;
      FUN_00d50b20();
    }
    else {
      local_38 = '\0';
    }
    bVar1 = false;
  }
LAB_01f08447:
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if (!bVar1) {
    FUN_01d25cb0();
    if (local_40 == 0) {
      bVar6 = false;
    }
    else {
      FUN_01d25cb0();
      bVar6 = *(int *)((longlong)local_70 + 0xc) != 0;
      if ((char)local_68 != '\0') {
        FUN_00d50b20();
      }
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (bVar6) {
      FUN_01d25cb0();
      local_64 = *(undefined4 *)(local_90 + 0xc);
      local_68 = 1;
      local_70 = &DAT_024cc6f0;
      FUN_00d8cb40(&DAT_024cc6f0,&local_70);
      local_50 = local_40;
      local_48 = 0;
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      local_48 = '\x01';
      FUN_01e03520();
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if ((local_88 != '\0') && (local_90 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_58 = '\0';
      local_60 = 0;
      FUN_01e03520();
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  if (!bVar1 && lVar4 != 0) {
    FUN_00d50b20();
  }
  if ((lVar3 != 0) && (lVar5 != 0)) {
    FUN_00d50b20();
  }
  return;
}


