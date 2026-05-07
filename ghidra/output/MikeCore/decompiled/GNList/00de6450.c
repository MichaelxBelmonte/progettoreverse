// Function: FUN_00de6450
// Address: 00de6450
// Size: 1622 bytes
// Class: GNList


void FUN_00de6450(void)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  char cVar6;
  int iVar7;
  byte bVar8;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong local_2138;
  char local_2130;
  longlong local_2068;
  char local_2060;
  int local_204c;
  longlong local_2048;
  char local_2040;
  longlong *local_2038;
  char local_2030;
  longlong local_2028;
  char local_2020;
  longlong local_2018;
  char local_2010;
  longlong local_38;
  
  local_38 = *(longlong *)PTR____stack_chk_guard_024a9898;
  if (((longlong *)*unaff_RSI == (longlong *)0x0) ||
     (cVar6 = (**(code **)(*(longlong *)*unaff_RSI + 0x398))(), cVar6 == '\0')) {
    lVar2 = DAT_027c24d8;
    if (DAT_027c24d8 != 0) {
      FUN_00d50b00();
    }
    lVar1 = DAT_02784270;
    if (DAT_02784270 != 0) {
      FUN_00d50b00();
    }
    lVar4 = DAT_027c24e8;
    if (DAT_027c24e8 != 0) {
      FUN_00d50b00();
    }
    local_2048 = *unaff_RSI;
    FUN_00083ea0(2,&local_2048);
    FUN_00e972c0();
    local_2038 = (longlong *)&DAT_0253d630;
    if ((local_2010 != '\0') && (local_2018 != 0)) {
      FUN_00d50b20();
    }
    local_2038 = &DAT_024c5048;
    if ((local_2020 != '\0') && (local_2028 != 0)) {
      FUN_00d50b20();
    }
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    goto LAB_00de6952;
  }
  (**(code **)(*(longlong *)*unaff_RSI + 0x4d8))();
  plVar5 = local_2038;
  lVar2 = DAT_027c24d8;
  if (local_2030 == '\0') {
    if (local_2038 != (longlong *)0x0) {
      FUN_00d50b00();
      if ((local_2030 != '\0') && (local_2038 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_00de6643;
    }
  }
  else if (local_2038 != (longlong *)0x0) {
LAB_00de6643:
    iVar7 = FUN_00cce2f0();
    local_204c = iVar7;
    do {
      local_2040 = '\0';
      local_2048 = 0;
      (**(code **)(*plVar5 + 0x380))(&local_204c,&local_2038);
      cVar6 = local_2040;
      lVar2 = local_2048;
      if (local_2048 == local_2138) {
        if ((local_2040 != '\0') || (local_2138 == 0)) goto LAB_00de68d6;
        if (local_2130 == '\0') {
          FUN_00d50b00();
          goto LAB_00de68cf;
        }
        local_2040 = '\x01';
        lVar2 = DAT_02789428;
joined_r0x00de6888:
        DAT_02789428 = lVar2;
        if (lVar2 != 0) {
          FUN_00d50b00();
        }
        lVar1 = DAT_02784280;
        if (DAT_02784280 != 0) {
          FUN_00d50b00();
        }
        lVar4 = DAT_027c24e8;
        if (DAT_027c24e8 != 0) {
          FUN_00d50b00();
        }
        lVar3 = DAT_02784288;
        local_2060 = 0;
        if (DAT_02784288 != 0) {
          FUN_00d50b00();
        }
        local_2068 = lVar3;
        local_2060 = '\x01';
        FUN_00de6e80(&local_2068,unaff_RSI,&local_2048);
        FUN_00e972c0();
        FUN_002d10d0();
        if ((local_2060 != '\0') && (local_2068 != 0)) {
          FUN_00d50b20();
        }
        if (lVar4 != 0) {
          FUN_00d50b20();
        }
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
        bVar8 = 0;
        if (lVar2 != 0) {
          FUN_00d50b20();
          bVar8 = 0;
        }
      }
      else {
        if (local_2130 == '\0') {
          if (local_2138 != 0) {
            FUN_00d50b00();
          }
          local_2048 = local_2138;
          if ((cVar6 != '\0') && (lVar2 != 0)) {
            FUN_00d50b20();
          }
LAB_00de68cf:
          local_2040 = '\x01';
LAB_00de68d6:
          lVar1 = local_2048;
          if ((local_2130 != '\0') && (local_2138 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_2048 = local_2138;
          if ((local_2040 != '\0') && (lVar2 != 0)) {
            FUN_00d50b20();
          }
          local_2040 = '\x01';
          lVar1 = local_2048;
        }
        lVar2 = DAT_02789428;
        if (lVar1 != 0) goto joined_r0x00de6888;
        bVar8 = 1;
        if (0 < local_204c) {
          (**(code **)(*unaff_RDI + 0x368))();
        }
      }
      if ((local_2040 != '\0') && (local_2048 != 0)) {
        FUN_00d50b20();
      }
    } while ((bool)(bVar8 & local_204c == iVar7));
    FUN_00d50b20();
    goto LAB_00de6952;
  }
  if (DAT_027c24d8 != 0) {
    FUN_00d50b00();
  }
  lVar1 = DAT_02784278;
  if (DAT_02784278 != 0) {
    FUN_00d50b00();
  }
  lVar4 = DAT_027c24e8;
  if (DAT_027c24e8 != 0) {
    FUN_00d50b00();
  }
  local_2048 = *unaff_RSI;
  FUN_00083ea0(2,&local_2048);
  FUN_00e972c0();
  local_2038 = (longlong *)&DAT_0253d630;
  if ((local_2010 != '\0') && (local_2018 != 0)) {
    FUN_00d50b20();
  }
  local_2038 = &DAT_024c5048;
  if ((local_2020 != '\0') && (local_2028 != 0)) {
    FUN_00d50b20();
  }
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
LAB_00de6952:
  if (*(longlong *)PTR____stack_chk_guard_024a9898 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}


