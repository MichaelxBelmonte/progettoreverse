// Function: FUN_00ccc820
// Address: 00ccc820
// Size: 981 bytes
// Class: GNBCFA
// String references:
//   "Cannot open %@ (%d)."


/* WARNING: Removing unreachable block (ram,0x00ccca7b) */
/* WARNING: Removing unreachable block (ram,0x00ccca87) */

void FUN_00ccc820(longlong **param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  longlong *plVar6;
  longlong *plVar7;
  char cVar8;
  longlong local_78;
  char local_70;
  longlong local_68;
  char local_60;
  longlong *local_58;
  uint local_50;
  longlong local_48;
  char local_40;
  int local_38;
  
  plVar7 = (longlong *)*unaff_RSI;
  cVar8 = (char)unaff_RSI[1];
  if ((cVar8 == '\0') || (plVar7 == (longlong *)0x0)) {
    if (plVar7 == (longlong *)0x0) goto LAB_00ccc94b;
  }
  else {
    FUN_00d50b00();
  }
  do {
    cVar3 = (**(code **)(*plVar7 + 0x4c0))();
    iVar4 = (int)param_2;
    if (cVar3 == '\0') goto LAB_00ccca40;
    (**(code **)(*plVar7 + 0x4c8))();
    plVar6 = local_58;
    if (local_58 == plVar7) {
      plVar6 = plVar7;
      if ((cVar8 == '\0') && (local_58 != (longlong *)0x0)) {
        if ((char)local_50 == '\0') {
          FUN_00d50b00();
          goto LAB_00ccc900;
        }
        goto LAB_00ccc869;
      }
joined_r0x00ccc92e:
      if (((char)local_50 != '\0') && (local_58 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      if ((char)local_50 == '\0') {
        if (local_58 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        if (cVar8 == '\0') {
          cVar8 = '\x01';
        }
        else {
          FUN_00d50b20();
          plVar7 = plVar6;
LAB_00ccc900:
          plVar6 = plVar7;
          cVar8 = '\x01';
        }
        goto joined_r0x00ccc92e;
      }
      if (cVar8 != '\0') {
        FUN_00d50b20();
      }
LAB_00ccc869:
      local_50 = local_50 & 0xffffff00;
      cVar8 = '\x01';
    }
    plVar7 = plVar6;
  } while (plVar6 != (longlong *)0x0);
  plVar7 = (longlong *)0x0;
LAB_00ccc94b:
  lVar1 = DAT_027726e0;
  if (DAT_027726e0 != 0) {
    FUN_00d50b00();
  }
  (**(code **)(*(longlong *)*unaff_RSI + 0x368))();
  local_50 = 2;
  local_58 = &DAT_024c5048;
  local_40 = 0;
  if (local_68 != 0) {
    FUN_00d50b00();
  }
  local_48 = local_68;
  local_40 = '\x01';
  local_58 = (longlong *)&DAT_025df2a0;
  local_38 = 0;
  iVar4 = 0x200250f;
  param_1 = &local_58;
  FUN_00cc7a20();
  FUN_00cc76c0();
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  local_58 = &DAT_024c5048;
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
LAB_00ccca40:
  FUN_00cde020();
  iVar4 = _open((char *)param_1,iVar4);
  *(int *)(unaff_RDI + 0x18) = iVar4;
  lVar1 = DAT_027726e0;
  if (iVar4 == -1) {
    if (DAT_027726e0 != 0) {
      FUN_00d50b00();
    }
    (**(code **)(*(longlong *)*unaff_RSI + 0x368))();
    piVar5 = ___error();
    iVar4 = *piVar5;
    local_50 = 2;
    local_58 = &DAT_024c5048;
    local_40 = 0;
    if (local_68 != 0) {
      FUN_00d50b00();
    }
    local_48 = local_68;
    local_40 = '\x01';
    local_58 = (longlong *)&DAT_025df2a0;
    local_38 = iVar4;
    FUN_00cc7a20(&local_58,"Cannot open %@ (%d).");
    FUN_00cc76c0();
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    local_58 = &DAT_024c5048;
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  lVar1 = *unaff_RSI;
  lVar2 = *(longlong *)(unaff_RDI + 0x20);
  if (lVar2 != lVar1) {
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    *(longlong *)(unaff_RDI + 0x20) = lVar1;
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  if ((cVar8 != '\0') && (plVar7 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  return;
}


