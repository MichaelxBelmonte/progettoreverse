// Function: FUN_00770960
// Address: 00770960
// Size: 2427 bytes
// Class: MUElementAnalyzer
// String references:
//   "MUElementAnalyzer"


/* WARNING: Removing unreachable block (ram,0x00771326) */
/* WARNING: Removing unreachable block (ram,0x00771333) */
/* WARNING: Removing unreachable block (ram,0x00771057) */
/* WARNING: Removing unreachable block (ram,0x00771080) */
/* WARNING: Removing unreachable block (ram,0x00770bd7) */
/* WARNING: Removing unreachable block (ram,0x00770c00) */
/* WARNING: Removing unreachable block (ram,0x00770bd9) */
/* WARNING: Removing unreachable block (ram,0x00770c02) */
/* WARNING: Removing unreachable block (ram,0x00771059) */
/* WARNING: Removing unreachable block (ram,0x00771082) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00770960(pthread_key_t param_1)

{
  longlong *plVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  void *pvVar5;
  longlong lVar6;
  longlong **pplVar7;
  longlong *plVar8;
  undefined8 *unaff_RSI;
  undefined4 uVar9;
  undefined8 local_130;
  undefined1 local_128;
  undefined8 local_120;
  undefined1 local_118;
  longlong *local_110;
  undefined1 local_108;
  undefined1 local_f8;
  undefined1 local_e8;
  longlong local_e0;
  char local_d8;
  longlong local_88;
  char local_80;
  longlong *local_78;
  char local_70;
  int local_60;
  longlong local_50;
  char local_48;
  longlong *local_40;
  char local_38;
  
  FUN_01f27fe0();
  cVar2 = (**(code **)(*local_78 + 0x450))();
  if (cVar2 == '\0') {
    bVar3 = 0;
  }
  else {
    FUN_00757c60();
    plVar8 = local_40;
    if (local_38 == '\0') {
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_f8 = 1;
    bVar3 = FUN_0076e4d0();
    if (plVar8 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    bVar3 = bVar3 ^ 1;
  }
  if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (bVar3 == 0) {
    plVar8 = (longlong *)0x0;
  }
  else {
    FUN_00757c60();
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012caf10();
    plVar8 = local_78;
    if (local_70 == '\0') {
      if (local_78 == (longlong *)0x0) {
        plVar8 = (longlong *)0x0;
      }
      else {
        FUN_00d50b00();
      }
    }
    else {
      local_70 = '\0';
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  local_130 = *unaff_RSI;
  local_128 = 0;
  local_120 = 0;
  local_118 = 0;
  local_108 = 0;
  local_110 = plVar8;
  FUN_00764ff0(0,&local_130,&local_120,bVar3);
  if ((local_70 == '\0') && (local_78 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  FUN_01f27fe0();
  cVar2 = (**(code **)(*local_78 + 0x450))();
  if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar2 == '\0') {
    if (local_78 == (longlong *)0x0) goto LAB_007712f0;
    local_60 = -1;
    while( true ) {
      lVar6 = (longlong)local_60;
      local_60 = local_60 + 1;
      if (*(int *)((longlong)local_78 + 0xc) <= local_60) break;
      plVar1 = *(longlong **)(local_78[2] + 8 + lVar6 * 8);
      local_40 = plVar1;
      if ((DAT_026e0c38 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
        _DAT_026e0b88 = FUN_000fddb0();
        _DAT_026e0b70 = "MUElementAnalyzer";
        _DAT_026e0b78 = 0x180;
        _DAT_026e0b80 = FUN_000fdd80;
        _DAT_026e0b90 = 0;
        uRam00000000026e0b98 = 0;
        _DAT_026e0ba0 = 0;
        _DAT_026e0c18 = 0;
        uRam00000000026e0c20 = 0;
        _DAT_026e0c28 = 0;
        DAT_026e0c2a = 1;
        _DAT_026e0ba8 = 0;
        uRam00000000026e0bb0 = 0;
        _DAT_026e0bb8 = 0;
        uRam00000000026e0bc0 = 0;
        _DAT_026e0bc8 = 0;
        uRam00000000026e0bd0 = 0;
        _DAT_026e0bd8 = 0;
        uRam00000000026e0be0 = 0;
        _DAT_026e0be8 = 0;
        uRam00000000026e0bf0 = 0;
        _DAT_026e0bf8 = 0;
        uRam00000000026e0c00 = 0;
        _DAT_026e0c08 = 0;
        uRam00000000026e0c10 = 0;
        DAT_026e0c33 = 0;
        _DAT_026e0c2b = 0;
        ___cxa_guard_release();
      }
      pplVar7 = (longlong **)&DAT_02802688;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x360))();
        cVar2 = FUN_00e85ea0();
        pplVar7 = &local_40;
        if (cVar2 == '\0') {
          pplVar7 = (longlong **)&DAT_02802688;
        }
      }
      if (*pplVar7 != (longlong *)0x0) {
        FUN_00e33de0();
        uVar9 = FUN_00d46300();
        plVar1 = DAT_027295b8;
        if (local_48 == '\0') {
          if (local_50 != 0) {
            uVar9 = FUN_00d50b00();
            plVar1 = DAT_027295b8;
          }
        }
        else {
          local_48 = '\0';
        }
        DAT_027295b8 = plVar1;
        if (plVar1 != (longlong *)0x0) {
          uVar9 = FUN_00d50b00();
        }
        local_38 = '\0';
        local_40 = plVar1;
        FUN_00ca0840(uVar9,&local_40);
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar1 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        if (local_50 != 0) {
          FUN_00d50b20();
        }
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        if ((local_80 != '\0') && (local_88 != 0)) {
          FUN_00d50b20();
        }
      }
    }
  }
  else {
    if (local_78 == (longlong *)0x0) goto LAB_007712f0;
    local_60 = -1;
    while( true ) {
      lVar6 = (longlong)local_60;
      local_60 = local_60 + 1;
      if (*(int *)((longlong)local_78 + 0xc) <= local_60) break;
      plVar1 = *(longlong **)(local_78[2] + 8 + lVar6 * 8);
      local_40 = plVar1;
      if ((DAT_026e0c38 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
        _DAT_026e0b88 = FUN_000fddb0();
        _DAT_026e0b70 = "MUElementAnalyzer";
        _DAT_026e0b78 = 0x180;
        _DAT_026e0b80 = FUN_000fdd80;
        _DAT_026e0b90 = 0;
        uRam00000000026e0b98 = 0;
        _DAT_026e0ba0 = 0;
        _DAT_026e0c18 = 0;
        uRam00000000026e0c20 = 0;
        _DAT_026e0c28 = 0;
        DAT_026e0c2a = 1;
        _DAT_026e0ba8 = 0;
        uRam00000000026e0bb0 = 0;
        _DAT_026e0bb8 = 0;
        uRam00000000026e0bc0 = 0;
        _DAT_026e0bc8 = 0;
        uRam00000000026e0bd0 = 0;
        _DAT_026e0bd8 = 0;
        uRam00000000026e0be0 = 0;
        _DAT_026e0be8 = 0;
        uRam00000000026e0bf0 = 0;
        _DAT_026e0bf8 = 0;
        uRam00000000026e0c00 = 0;
        _DAT_026e0c08 = 0;
        uRam00000000026e0c10 = 0;
        DAT_026e0c33 = 0;
        _DAT_026e0c2b = 0;
        ___cxa_guard_release();
      }
      pplVar7 = (longlong **)&DAT_02802688;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x360))();
        cVar2 = FUN_00e85ea0();
        pplVar7 = &local_40;
        if (cVar2 == '\0') {
          pplVar7 = (longlong **)&DAT_02802688;
        }
      }
      if (*pplVar7 != (longlong *)0x0) {
        FUN_00e33de0();
        FUN_00757c60();
        lVar6 = local_e0;
        if (local_d8 == '\0') {
          if (local_e0 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_d8 = '\0';
        }
        local_e8 = 1;
        FUN_0076e4d0();
        uVar9 = FUN_00d46300();
        plVar1 = DAT_02729580;
        if (local_48 == '\0') {
          if (local_50 != 0) {
            uVar9 = FUN_00d50b00();
            plVar1 = DAT_02729580;
          }
        }
        else {
          local_48 = '\0';
        }
        DAT_02729580 = plVar1;
        if (plVar1 != (longlong *)0x0) {
          uVar9 = FUN_00d50b00();
        }
        local_38 = '\0';
        local_40 = plVar1;
        FUN_00ca0840(uVar9,&local_40);
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar1 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        if (local_50 != 0) {
          FUN_00d50b20();
        }
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        if (lVar6 != 0) {
          FUN_00d50b20();
        }
        if ((local_d8 != '\0') && (local_e0 != 0)) {
          FUN_00d50b20();
        }
        if ((local_80 != '\0') && (local_88 != 0)) {
          FUN_00d50b20();
        }
        FUN_00e33de0();
        uVar9 = FUN_00d46300();
        plVar1 = DAT_027295b0;
        if (local_48 == '\0') {
          if (local_50 != 0) {
            uVar9 = FUN_00d50b00();
            plVar1 = DAT_027295b0;
          }
        }
        else {
          local_48 = '\0';
        }
        DAT_027295b0 = plVar1;
        if (plVar1 != (longlong *)0x0) {
          uVar9 = FUN_00d50b00();
        }
        local_38 = '\0';
        local_40 = plVar1;
        FUN_00ca0840(uVar9,&local_40);
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar1 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        if (local_50 != 0) {
          FUN_00d50b20();
        }
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        if ((local_80 != '\0') && (local_88 != 0)) {
          FUN_00d50b20();
        }
      }
    }
  }
  FUN_0079bb70();
  if (local_78 != (longlong *)0x0) {
    FUN_00d50b20();
  }
LAB_007712f0:
  if (plVar8 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}


