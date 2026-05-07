// Function: FUN_00e14140
// Address: 00e14140
// Size: 3765 bytes
// Class: Unknown
// String references:
//   "%@ %@"
//   "%@ %@ %@"
//   "Host: %@"
//   "Content-Length: %I\r\n"


/* WARNING: Removing unreachable block (ram,0x00e14454) */
/* WARNING: Removing unreachable block (ram,0x00e14460) */
/* WARNING: Removing unreachable block (ram,0x00e143a2) */
/* WARNING: Removing unreachable block (ram,0x00e143ae) */
/* WARNING: Removing unreachable block (ram,0x00e14fb4) */
/* WARNING: Removing unreachable block (ram,0x00e14fc0) */

undefined8 FUN_00e14140(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  char cVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined8 unaff_RDI;
  longlong *plVar6;
  longlong *plVar7;
  longlong local_110;
  undefined8 *local_108;
  char local_100;
  longlong local_f8;
  char local_f0;
  longlong local_e8;
  char local_e0;
  undefined8 *local_d8;
  char local_d0;
  undefined8 local_c8;
  undefined8 *local_c0;
  char local_b8;
  undefined8 *local_b0;
  uint local_a8;
  int local_a4;
  longlong *local_a0;
  uint local_98;
  undefined8 *local_90;
  char local_88;
  longlong local_80;
  char local_78;
  longlong local_70;
  char local_68;
  undefined8 *local_60;
  char local_58;
  longlong local_50;
  int local_48;
  undefined8 *local_40;
  undefined8 *local_38;
  
  local_c8 = param_2;
  puVar4 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar4 = &DAT_02572358;
  (*DAT_02572370)();
  plVar5 = (longlong *)FUN_00e8fc40();
  FUN_00d4ff40();
  *plVar5 = (longlong)&DAT_025795a8;
  (*DAT_025795c0)();
  FUN_00dbb9e0();
  plVar6 = local_a0;
  if (((char)local_98 != '\0') && (local_a0 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar6 != (undefined8 *)0x0) {
    FUN_00dbb9e0();
    local_f8 = (longlong)local_60;
    local_f0 = 0;
    if (local_58 == '\0') {
      if (local_60 != (undefined8 *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_58 = '\0';
    }
    local_f0 = '\x01';
    FUN_00d8ef00();
    plVar6 = local_a0;
    plVar7 = plVar5;
    if (plVar5 == local_a0) {
joined_r0x00e1428a:
      plVar6 = plVar7;
      if (((char)local_98 != '\0') && (plVar5 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      if ((char)local_98 == '\0') {
        if (local_a0 != (undefined8 *)0x0) {
          FUN_00d50b00();
        }
        FUN_00d50b20();
        plVar7 = plVar6;
        plVar5 = local_a0;
        goto joined_r0x00e1428a;
      }
      FUN_00d50b20();
      local_98 = local_98 & 0xffffff00;
    }
    if ((local_f0 != '\0') && (local_f8 != 0)) {
      FUN_00d50b20();
    }
    plVar5 = plVar6;
    if ((local_58 != '\0') && (local_60 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
  }
  FUN_00e16a20();
  plVar6 = local_a0;
  if (((char)local_98 != '\0') && (local_a0 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  plVar7 = plVar5;
  if (plVar6 != (undefined8 *)0x0) {
    FUN_00e16a20();
    plVar6 = local_a0;
    if (((char)local_98 == '\0') && (local_a0 != (undefined8 *)0x0)) {
      FUN_00d50b00();
      if (((char)local_98 != '\0') && (local_a0 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
    }
    cVar3 = FUN_00d8f400();
    if (cVar3 == '\0') {
      FUN_00d8ef00();
      plVar7 = local_a0;
      if (local_a0 == plVar5) {
LAB_00e14431:
        plVar7 = plVar5;
        if ((char)local_98 != '\0') {
LAB_00e1443a:
          if (local_a0 != (undefined8 *)0x0) {
            FUN_00d50b20();
          }
        }
      }
      else {
        if ((char)local_98 == '\0') {
          if (local_a0 != (undefined8 *)0x0) {
            FUN_00d50b00();
          }
          if (plVar5 != (undefined8 *)0x0) {
            FUN_00d50b20();
            plVar5 = plVar7;
            goto LAB_00e14431;
          }
          if ((char)local_98 == '\0') goto LAB_00e14465;
          goto LAB_00e1443a;
        }
        if (plVar5 != (undefined8 *)0x0) {
          FUN_00d50b20();
        }
        local_98 = local_98 & 0xffffff00;
      }
    }
LAB_00e14465:
    if (plVar6 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
  }
  FUN_00e169f0();
  FUN_00e16a50();
  local_60 = local_c0;
  local_110 = local_e8;
  local_108 = plVar7;
  FUN_002bd7b0(&local_110,&local_108,3);
  FUN_00d8cb40();
  puVar2 = local_b0;
  if ((char)local_a8 == '\0') {
    if (local_b0 != (undefined8 *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_a8 = local_a8 & 0xffffff00;
  }
  local_60 = puVar2;
  local_58 = '\0';
  FUN_00d21140();
  if ((local_58 != '\0') && (local_60 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  if (puVar2 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  if (((char)local_a8 != '\0') && (local_b0 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  local_a0 = (longlong *)&DAT_025df260;
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  local_a0 = (longlong *)&DAT_0253d630;
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  local_a0 = &DAT_024c5048;
  if ((local_88 != '\0') && (local_90 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_e0 != '\0') && (local_e8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_b8 != '\0') && (local_c0 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00e16a80();
  lVar1 = DAT_02785368;
  if (DAT_02785368 != 0) {
    FUN_00d50b00();
  }
  FUN_000175c0();
  plVar5 = local_a0;
  if (((char)local_98 != '\0') && (local_a0 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar5 == (longlong *)0x0) {
    FUN_00dbb440();
    local_90 = local_c0;
    local_98 = 1;
    local_a0 = &DAT_024c5048;
    local_88 = 0;
    if (local_c0 != (undefined8 *)0x0) {
      FUN_00d50b00();
    }
    local_88 = '\x01';
    FUN_00d8cb40();
    puVar2 = local_b0;
    if ((char)local_a8 == '\0') {
      if (local_b0 != (undefined8 *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_a8 = local_a8 & 0xffffff00;
    }
    local_60 = puVar2;
    local_58 = '\0';
    FUN_00d21140();
    if ((local_58 != '\0') && (local_60 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
    if (puVar2 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
    if (((char)local_a8 != '\0') && (local_b0 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
    local_a0 = &DAT_024c5048;
    if ((local_88 != '\0') && (local_90 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_b8 != '\0') && (local_c0 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
  }
  FUN_00e16a80();
  plVar5 = local_a0;
  if ((char)local_98 == '\0') {
    if (local_a0 == (longlong *)0x0) goto LAB_00e149c2;
    FUN_00d50b00();
    if (((char)local_98 != '\0') && (local_a0 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else if (local_a0 == (longlong *)0x0) goto LAB_00e149c2;
  local_58 = '\0';
  local_60 = (undefined8 *)0x0;
  local_50 = plVar5[2];
  local_48 = 0;
  if (0 < *(int *)(local_50 + 0xc)) {
    do {
      local_38 = puVar4;
      local_40 = plVar7;
      local_60 = *(undefined8 **)(*(longlong *)(local_50 + 0x10) + (longlong)local_48 * 8);
      FUN_00e16a80();
      FUN_00e6fcd0();
      local_b0 = local_60;
      local_110 = local_e8;
      FUN_00083ea0(2,&local_110);
      FUN_00d8cb40();
      puVar4 = local_c0;
      if (local_b8 == '\0') {
        if (local_c0 != (undefined8 *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_b8 = '\0';
      }
      local_b0 = puVar4;
      local_a8 = local_a8 & 0xffffff00;
      FUN_00d21140();
      if (((char)local_a8 != '\0') && (local_b0 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      if (puVar4 != (undefined8 *)0x0) {
        FUN_00d50b20();
      }
      if ((local_b8 != '\0') && (local_c0 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      local_a0 = (longlong *)&DAT_0253d630;
      if ((local_78 != '\0') && (local_80 != 0)) {
        FUN_00d50b20();
      }
      local_a0 = &DAT_024c5048;
      if ((local_88 != '\0') && (local_90 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_e0 != '\0') && (local_e8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_100 != '\0') && (local_108 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      puVar4 = local_38;
      plVar7 = local_40;
      local_48 = local_48 + 1;
    } while (local_48 < *(int *)(local_50 + 0xc));
    if ((local_58 != '\0') && (local_60 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
  }
  FUN_00d50b20();
LAB_00e149c2:
  FUN_00e16a80();
  lVar1 = DAT_02785370;
  if (DAT_02785370 != 0) {
    FUN_00d50b00();
  }
  FUN_000175c0();
  plVar5 = local_a0;
  if (((char)local_98 != '\0') && (local_a0 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  plVar6 = DAT_02785378;
  if (plVar5 == (longlong *)0x0) {
    if (DAT_02785378 != (longlong *)0x0) {
      FUN_00d50b00();
    }
    local_a0 = plVar6;
    local_98 = local_98 & 0xffffff00;
    FUN_00d21140();
    if (((char)local_98 != '\0') && (local_a0 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar6 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  FUN_00e169f0();
  plVar5 = local_a0;
  lVar1 = DAT_02784498;
  if (DAT_02784498 != 0) {
    FUN_00d50b00();
  }
  cVar3 = (**(code **)(*plVar5 + 0x50))();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if (((char)local_98 != '\0') && (local_a0 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  plVar5 = DAT_027815d8;
  if (cVar3 == '\0') {
    if (DAT_027815d8 != (longlong *)0x0) {
      FUN_00d50b00();
    }
    local_a0 = plVar5;
    local_98 = local_98 & 0xffffff00;
    FUN_00d21140();
    if (((char)local_98 != '\0') && (local_a0 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar5 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  else {
    FUN_00e16b70();
    FUN_00ca91d0();
    local_d8 = local_60;
    local_d0 = 0;
    if (local_58 == '\0') {
      if (local_60 != (undefined8 *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_58 = '\0';
    }
    local_d0 = '\x01';
    FUN_00d93320();
    plVar5 = local_a0;
    if ((char)local_98 == '\0') {
      if (local_a0 != (longlong *)0x0) {
        FUN_00d50b00();
        if (((char)local_98 != '\0') && (local_a0 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    else {
      local_98 = local_98 & 0xffffff00;
    }
    if ((local_d0 != '\0') && (local_d8 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
    if (((char)local_a8 != '\0') && (local_b0 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00e16a80();
    lVar1 = DAT_02785380;
    if (DAT_02785380 != 0) {
      FUN_00d50b00();
    }
    FUN_000175c0();
    plVar6 = local_a0;
    if (((char)local_98 != '\0') && (local_a0 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar6 == (longlong *)0x0) {
      FUN_00d8cf90();
      plVar6 = local_a0;
      if (((char)local_98 == '\0') && (local_a0 != (longlong *)0x0)) {
        FUN_00d50b00();
        if (((char)local_98 != '\0') && (local_a0 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      local_a4 = (int)plVar6[3] + -1;
      local_a8 = 1;
      local_b0 = &DAT_024cc6f0;
      FUN_00d8cb40(&DAT_024cc6f0,&local_b0);
      puVar2 = local_60;
      if (local_58 == '\0') {
        if (local_60 != (undefined8 *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_58 = '\0';
      }
      local_a0 = puVar2;
      local_98 = local_98 & 0xffffff00;
      FUN_00d21140();
      if (((char)local_98 != '\0') && (local_a0 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      if (puVar2 != (undefined8 *)0x0) {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (local_60 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    local_98 = local_98 & 0xffffff00;
    local_a0 = plVar5;
    FUN_00d21140();
    if (((char)local_98 != '\0') && (local_a0 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar5 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  plVar5 = DAT_027815d8;
  if (DAT_027815d8 != (longlong *)0x0) {
    FUN_00d50b00();
  }
  FUN_00d95130();
  if (plVar5 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (plVar7 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  if (puVar4 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}


