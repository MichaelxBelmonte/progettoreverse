// Function: FUN_01e4fcf0
// Address: 01e4fcf0
// Size: 3112 bytes
// Class: Unknown
// String references:
//   "%@: No file owner found."
//   "%@: window not connected."
//   "%@ not found."


/* WARNING: Removing unreachable block (ram,0x01e50827) */
/* WARNING: Removing unreachable block (ram,0x01e50833) */
/* WARNING: Removing unreachable block (ram,0x01e5080d) */
/* WARNING: Removing unreachable block (ram,0x01e50819) */
/* WARNING: Removing unreachable block (ram,0x01e4ff1b) */
/* WARNING: Removing unreachable block (ram,0x01e4ff27) */
/* WARNING: Removing unreachable block (ram,0x01e4ffc0) */
/* WARNING: Removing unreachable block (ram,0x01e4ffcc) */
/* WARNING: Removing unreachable block (ram,0x01e4ffda) */
/* WARNING: Removing unreachable block (ram,0x01e4ffe6) */
/* WARNING: Removing unreachable block (ram,0x01e50366) */
/* WARNING: Removing unreachable block (ram,0x01e50372) */
/* WARNING: Removing unreachable block (ram,0x01e50459) */
/* WARNING: Removing unreachable block (ram,0x01e50465) */

undefined8 * FUN_01e4fcf0(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  bool bVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  longlong *plVar8;
  longlong *local_f8;
  char local_f0;
  longlong local_e8;
  char local_e0;
  longlong *local_d8;
  longlong local_d0;
  char local_c8;
  longlong *local_c0;
  char local_b8;
  longlong *local_b0;
  char local_a8;
  longlong *local_a0;
  char local_98;
  longlong local_90;
  char local_88;
  undefined8 local_80;
  longlong *local_78;
  longlong *local_70;
  undefined4 local_64;
  undefined8 local_60;
  longlong *local_58;
  longlong *local_50;
  uint local_48;
  longlong local_40;
  char local_38;
  
  if (*param_2 == 0) {
    plVar4 = (longlong *)FUN_00e8fc40();
    FUN_00022d50();
    (**(code **)(*plVar4 + 0x18))();
    plVar5 = (longlong *)*param_2;
    if (plVar5 == plVar4) {
      if ((char)param_2[1] != '\0') {
        FUN_00d50b20();
        goto LAB_01e4fd70;
      }
    }
    else {
      *param_2 = (longlong)plVar4;
      if (((char)param_2[1] != '\0') && (plVar5 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    *(undefined1 *)(param_2 + 1) = 1;
  }
LAB_01e4fd70:
  local_d8 = param_1;
  if ((longlong *)*param_1 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_1 + 0x498))();
    plVar5 = local_50;
    if (((char)local_48 != '\0') && (local_50 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*local_d8 + 0x498))();
      local_d0 = local_90;
      local_c8 = 0;
      plVar5 = DAT_027fe460;
      if (local_88 == '\0') {
        if (local_90 != 0) {
          FUN_00d50b00();
          plVar5 = DAT_027fe460;
        }
      }
      else {
        local_88 = '\0';
      }
      local_c8 = '\x01';
      DAT_027fe460 = plVar5;
      if (plVar5 != (longlong *)0x0) {
        local_c8 = '\x01';
        FUN_00d50b00();
      }
      local_48 = local_48 & 0xffffff00;
      local_50 = plVar5;
      FUN_00ca0840();
      if (((char)local_48 != '\0') && (local_50 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar5 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if ((local_c8 != '\0') && (local_d0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_88 != '\0') && (local_90 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  FUN_01e2a9a0();
  local_78 = local_50;
  if (local_50 == (longlong *)0x0) {
    local_64 = 1;
    local_78 = (longlong *)0x0;
  }
  else {
    if ((char)local_48 == '\0') {
      FUN_00d50b00();
      local_64 = 0;
      if (((char)local_48 == '\0') || (local_50 == (longlong *)0x0)) goto LAB_01e4ff12;
      FUN_00d50b20();
    }
    else {
      local_48 = local_48 & 0xffffff00;
    }
    local_64 = 0;
  }
LAB_01e4ff12:
  if (local_78 == (longlong *)0x0) {
    local_80 = 0;
    local_70 = (longlong *)0x0;
    lVar7 = DAT_027fe468;
joined_r0x01e5001d:
    DAT_027fe468 = lVar7;
    if (lVar7 != 0) {
      FUN_00d50b00();
    }
    lVar1 = *unaff_RSI;
    local_48 = 1;
    local_50 = &DAT_024c5048;
    local_38 = 0;
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    local_38 = '\x01';
    local_40 = lVar1;
    FUN_00cc7b40();
    local_50 = &DAT_024c5048;
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (lVar7 != 0) {
      FUN_00d50b20();
    }
  }
  else {
    plVar5 = (longlong *)FUN_00e8fc40();
    FUN_00207df0();
    uVar6 = (**(code **)(*plVar5 + 0x18))();
    local_80 = CONCAT71((int7)((ulonglong)uVar6 >> 8),1);
    local_60 = 0;
    local_58 = (longlong *)0x0;
    local_70 = plVar5;
    FUN_01e30e10();
    uVar6 = FUN_01e2b0c0();
    local_80 = CONCAT71((int7)((ulonglong)uVar6 >> 8),1);
    lVar7 = DAT_027fe468;
    if ((char)uVar6 == '\0') goto joined_r0x01e5001d;
  }
  lVar7 = DAT_027f3818;
  if (DAT_027f3818 != 0) {
    FUN_00d50b00();
  }
  uVar6 = FUN_000175c0();
  plVar5 = local_50;
  if (local_50 == (longlong *)0x0) {
    local_60 = 0;
    plVar4 = (longlong *)0x0;
joined_r0x01e50113:
    if (((char)local_48 != '\0') && (local_50 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    if ((char)local_48 == '\0') {
      uVar6 = FUN_00d50b00();
      local_60 = CONCAT71((int7)((ulonglong)uVar6 >> 8),1);
      plVar4 = plVar5;
      goto joined_r0x01e50113;
    }
    local_48 = local_48 & 0xffffff00;
    local_60 = CONCAT71((int7)((ulonglong)uVar6 >> 8),1);
    plVar4 = local_50;
  }
  if (lVar7 != 0) {
    FUN_00d50b20();
  }
  lVar7 = DAT_027fe468;
  if (plVar4 == (longlong *)0x0) {
    if (DAT_027fe468 != 0) {
      FUN_00d50b00();
    }
    lVar1 = *unaff_RSI;
    local_48 = 1;
    local_50 = &DAT_024c5048;
    local_38 = 0;
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    local_38 = '\x01';
    local_40 = lVar1;
    FUN_00cc7b40();
    local_50 = &DAT_024c5048;
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (lVar7 != 0) {
      FUN_00d50b20();
    }
  }
  if (plVar4[3] != 0) {
    local_58 = (longlong *)0x0;
    goto LAB_01e5016a;
  }
  FUN_01e30780();
  if (local_50 == (longlong *)0x0) {
    bVar3 = true;
    local_58 = (longlong *)0x0;
  }
  else {
    local_58 = local_50;
    if ((char)local_48 == '\0') {
      FUN_00d50b00();
      bVar3 = false;
      if (((char)local_48 == '\0') || (local_50 == (longlong *)0x0)) goto LAB_01e50804;
      FUN_00d50b20();
    }
    else {
      local_48 = local_48 & 0xffffff00;
    }
    bVar3 = false;
  }
LAB_01e50804:
  lVar7 = DAT_027fe468;
  if (bVar3) {
    if (DAT_027fe468 != 0) {
      FUN_00d50b00();
    }
    lVar1 = *unaff_RSI;
    local_48 = 1;
    local_50 = &DAT_024c5048;
    local_38 = 0;
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    local_38 = '\x01';
    local_40 = lVar1;
    FUN_00cc7b40();
    local_50 = &DAT_024c5048;
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (lVar7 != 0) {
      FUN_00d50b20();
    }
  }
  plVar2 = (longlong *)plVar4[3];
  if (plVar2 != local_58) {
    if (local_58 != (longlong *)0x0) {
      FUN_00d50b00();
    }
    plVar4[3] = (longlong)local_58;
    if (plVar2 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
LAB_01e5016a:
  FUN_01e2cb40();
  plVar2 = local_50;
  if ((char)local_48 == '\0') {
    if (local_50 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_48 = local_48 & 0xffffff00;
  }
  plVar8 = local_d8;
  FUN_01e511c0();
  if (plVar2 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (((char)local_48 != '\0') && (local_50 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01e51330();
  FUN_01e5c650();
  plVar2 = local_50;
  if (((char)local_48 != '\0') && (local_50 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar2 == (longlong *)0x0) {
    FUN_01e5c670();
  }
  lVar7 = 0;
  if (*plVar8 != 0) {
    FUN_01e5eec0();
    lVar7 = *local_d8;
    plVar8 = local_d8;
  }
  *(undefined1 *)(plVar4 + 8) = 1;
  plVar4[4] = lVar7;
  if ((longlong *)*plVar8 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*plVar8 + 0x498))();
    plVar2 = local_50;
    if (((char)local_48 != '\0') && (local_50 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*plVar8 + 0x498))();
      local_c0 = local_50;
      local_b8 = 0;
      if ((char)local_48 == '\0') {
        if (local_50 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_48 = local_48 & 0xffffff00;
      }
      local_b8 = '\x01';
      FUN_01e30190();
      if ((local_b8 != '\0') && (local_c0 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (((char)local_48 != '\0') && (local_50 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  FUN_01e5e3f0();
  plVar2 = local_50;
  if (((char)local_48 != '\0') && (local_50 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar2 == (longlong *)0x0) {
    FUN_00d4efa0();
    FUN_00c7e7b0();
    local_b0 = local_50;
    local_a8 = 0;
    if ((char)local_48 == '\0') {
      if (local_50 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_48 = local_48 & 0xffffff00;
    }
    local_a8 = '\x01';
    FUN_01e5e380();
    if ((local_a8 != '\0') && (local_b0 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (((char)local_48 != '\0') && (local_50 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
  }
  if ((plVar4[5] != 0) || ((**(code **)(*plVar4 + 0x560))(), plVar4[5] != 0)) {
    FUN_01e40eb0();
    plVar2 = local_50;
    if (((char)local_48 != '\0') && (local_50 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar2 == (longlong *)0x0) {
      FUN_01e5ca90();
      local_a0 = local_50;
      local_98 = 0;
      if ((char)local_48 == '\0') {
        if (local_50 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_48 = local_48 & 0xffffff00;
      }
      local_98 = '\x01';
      FUN_01e6cc40();
      if ((local_98 != '\0') && (local_a0 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (((char)local_48 != '\0') && (local_50 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  FUN_01e5e430();
  (**(code **)(*plVar4 + 0x518))();
  FUN_00d403d0();
  plVar2 = local_78;
  lVar7 = DAT_027fe470;
  if (DAT_027fe470 != 0) {
    FUN_00d50b00();
  }
  local_f0 = '\0';
  local_e8 = 0;
  local_e0 = '\0';
  local_f8 = plVar4;
  FUN_00d40470(&local_e8,&local_f8,1,1);
  plVar8 = local_58;
  if ((local_e0 != '\0') && (local_e8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_f0 != '\0') && (local_f8 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (lVar7 != 0) {
    FUN_00d50b20();
  }
  if (((char)local_48 != '\0') && (local_50 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  *(undefined1 *)(unaff_RDI + 1) = 0;
  if (plVar5 == (longlong *)0x0) {
    FUN_00d50b00();
  }
  *unaff_RDI = plVar4;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  if ((char)local_64 == '\0' && plVar2 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (((char)local_80 != '\0') && (local_70 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar8 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}


