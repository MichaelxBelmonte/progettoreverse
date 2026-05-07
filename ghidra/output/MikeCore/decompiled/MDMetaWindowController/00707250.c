// Function: FUN_00707250
// Address: 00707250
// Size: 1354 bytes
// Class: MDMetaWindowController


ulonglong FUN_00707250(undefined8 param_1,char param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  char cVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong *unaff_RDI;
  undefined8 *local_110 [2];
  undefined1 local_100;
  undefined8 *local_f8;
  char local_f0;
  undefined8 *local_e8;
  char local_e0;
  undefined8 *local_d8;
  char local_d0;
  longlong local_c8;
  char local_c0;
  longlong local_b8;
  char local_b0;
  undefined8 *local_a8;
  longlong local_90;
  char local_88;
  undefined8 *local_80;
  undefined8 *local_78;
  char local_70;
  longlong local_68;
  char local_60;
  longlong local_58;
  char local_50;
  longlong local_48;
  char local_40;
  undefined4 local_34;
  
  uVar5 = (**(code **)(*unaff_RDI + 0x5d8))();
  local_a8 = local_78;
  if (local_70 == '\0') {
    if (local_78 == (undefined8 *)0x0) goto LAB_0070732b;
    FUN_00d50b00();
    if ((local_70 != '\0') && (local_78 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
LAB_007072c0:
    FUN_0063f230();
    puVar2 = local_78;
    if ((local_70 != '\0') && (local_78 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
    if (puVar2 != (undefined8 *)0x0) {
      FUN_0063f230();
      cVar4 = FUN_00212c70();
      if ((local_70 != '\0') && (local_78 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      local_34 = 0;
      uVar6 = 0;
      if (cVar4 != '\0') goto LAB_00707774;
      goto LAB_00707330;
    }
    local_34 = 0;
    lVar7 = unaff_RDI[2];
  }
  else {
    if (local_78 != (undefined8 *)0x0) goto LAB_007072c0;
LAB_0070732b:
    local_34 = (undefined4)CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
LAB_00707330:
    lVar7 = unaff_RDI[2];
  }
  if (lVar7 != 0) {
    FUN_00d50b00();
  }
  FUN_01beead0();
  lVar3 = local_48;
  if (local_40 == '\0') {
    if (local_48 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_40 = '\0';
  }
  local_100 = 1;
  FUN_007035b0();
  puVar2 = local_78;
  if ((local_70 == '\0') && (local_78 != (undefined8 *)0x0)) {
    FUN_00d50b00();
  }
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if (lVar7 != 0) {
    FUN_00d50b20();
  }
  if (puVar2 == (undefined8 *)0x0) {
    uVar6 = 0;
    goto LAB_00707774;
  }
  if (*(int *)((longlong)puVar2 + 0xc) == 0) {
    uVar6 = 0;
  }
  else {
    local_f8 = puVar2;
    local_f0 = '\0';
    FUN_019c5150();
    puVar2 = local_78;
    if (local_70 == '\0') {
      if (((local_78 != (undefined8 *)0x0) && (FUN_00d50b00(), local_70 != '\0')) &&
         (local_78 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_70 = '\0';
    }
    if ((local_f0 != '\0') && (local_f8 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
    if (((param_2 != '\0') && (puVar2 != (undefined8 *)0x0)) &&
       (*(int *)((longlong)puVar2 + 0xc) != 0)) {
      FUN_006f3f00();
      if (local_78 != (undefined8 *)0x0) {
        local_80 = local_78;
        FUN_006f3f00();
        lVar7 = local_48;
        local_e8 = puVar2;
        local_e0 = '\0';
        cVar4 = FUN_00793a50();
        if ((local_e0 != '\0') && (local_e8 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_40 != '\0') && (lVar7 != 0)) {
          FUN_00d50b20();
        }
        if (local_70 != '\0') {
          FUN_00d50b20();
        }
        if (cVar4 == '\0') goto LAB_0070775d;
      }
      local_d8 = puVar2;
      local_d0 = '\0';
      FUN_019c5bf0();
      if ((local_d0 != '\0') && (local_d8 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d403d0();
      local_c8 = DAT_026de568;
      if (DAT_026de568 != 0) {
        FUN_00d50b00();
      }
      local_c0 = '\x01';
      FUN_00d50b00();
      local_110[0] = DAT_026de560;
      if (DAT_026de560 != (undefined8 *)0x0) {
        FUN_00d50b00();
      }
      local_80 = local_110[0];
      FUN_00083ea0(2,local_110);
      FUN_000b4da0();
      local_90 = local_b8;
      local_88 = 0;
      if (local_b0 == '\0') {
        if (local_b8 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_b0 = '\0';
      }
      puVar1 = local_80;
      local_88 = '\x01';
      FUN_00d40470(&local_90,&stack0xffffffffffffff60,1,0);
      if ((local_88 != '\0') && (local_90 != 0)) {
        FUN_00d50b20();
      }
      if ((local_b0 != '\0') && (local_b8 != 0)) {
        FUN_00d50b20();
      }
      local_78 = (undefined8 *)&DAT_0253d630;
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      local_78 = &DAT_024c5048;
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      if (puVar1 != (undefined8 *)0x0) {
        FUN_00d50b20();
      }
      if (unaff_RDI != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if ((local_c0 != '\0') && (local_c8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      lVar7 = unaff_RDI[2];
      if (lVar7 != 0) {
        FUN_00d50b00();
      }
      FUN_002eab40();
      if (lVar7 != 0) {
        FUN_00d50b20();
      }
    }
LAB_0070775d:
    uVar6 = CONCAT71((int7)((ulonglong)lVar7 >> 8),1);
    if (puVar2 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
  }
  FUN_00d50b20();
LAB_00707774:
  if ((char)local_34 == '\0') {
    FUN_00d50b20();
  }
  return uVar6 & 0xffffffff;
}


