// Function: FUN_01d83f70
// Address: 01d83f70
// Size: 1453 bytes
// Class: GNValue
// String references:
//   "GNValue"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_01d83f70(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  longlong *plVar7;
  longlong **pplVar8;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  undefined4 uVar9;
  longlong local_100;
  char local_f8;
  longlong local_f0;
  char local_e8;
  longlong local_e0;
  char local_d8;
  longlong local_d0;
  char local_c8;
  longlong local_c0;
  char local_b8;
  longlong local_b0;
  char local_a8;
  longlong local_a0;
  char local_98;
  longlong *local_90;
  char local_88;
  longlong local_80;
  char local_78;
  longlong *local_50;
  char local_48;
  longlong *local_40;
  char local_31;
  
  FUN_01f97770();
  if (unaff_RSI != (longlong *)0x0) {
    FUN_00d50b00();
  }
  local_f0 = *param_1;
  local_e8 = '\0';
  uVar9 = FUN_01f97ca0(&local_f0,&stack0xffffffffffffff90);
  local_40 = local_50;
  if (local_48 == '\0') {
    if (((local_50 != (longlong *)0x0) && (uVar9 = FUN_00d50b00(), local_48 != '\0')) &&
       (local_50 != (longlong *)0x0)) {
      uVar9 = FUN_00d50b20();
    }
  }
  else {
    local_48 = '\0';
  }
  if ((local_e8 != '\0') && (local_f0 != 0)) {
    uVar9 = FUN_00d50b20();
  }
  if (unaff_RSI != (longlong *)0x0) {
    uVar9 = FUN_00d50b20();
  }
  if ((local_f8 != '\0') && (local_100 != 0)) {
    uVar9 = FUN_00d50b20();
  }
  local_e0 = *param_1;
  local_d8 = '\0';
  pplVar8 = &local_50;
  (**(code **)(*unaff_RSI + 0x88))(uVar9,&local_e0);
  plVar1 = local_50;
  if ((DAT_0270c850 == '\0') && (iVar6 = ___cxa_guard_acquire(), iVar6 != 0)) {
    _DAT_026d4348 = FUN_00d4fe50();
    _DAT_026d4330 = "GNValue";
    _DAT_026d4338 = 0x18;
    _DAT_026d4340 = FUN_00053cb0;
    _DAT_026d4350 = 0;
    uRam00000000026d4358 = 0;
    _DAT_026d4360 = 0;
    uRam00000000026d4368 = 0;
    _DAT_026d4370 = 0;
    uRam00000000026d4378 = 0;
    _DAT_026d4380 = 0;
    uRam00000000026d4388 = 0;
    _DAT_026d4390 = 0;
    uRam00000000026d4398 = 0;
    _DAT_026d43a0 = 0;
    uRam00000000026d43a8 = 0;
    _DAT_026d43b0 = 0;
    uRam00000000026d43b8 = 0;
    _DAT_026d43c0 = 0;
    uRam00000000026d43c8 = 0;
    _DAT_026d43d0 = 0;
    uRam00000000026d43d8 = 0;
    _DAT_026d43e0 = 0;
    uRam00000000026d43e8 = 0;
    _DAT_026d43f0 = 0;
    ___cxa_guard_release();
  }
  if (plVar1 == (longlong *)0x0) {
LAB_01d840a5:
    pplVar8 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar5 = FUN_00e85ea0();
    if (cVar5 == '\0') goto LAB_01d840a5;
  }
  plVar1 = *pplVar8;
  if (*(char *)(pplVar8 + 1) == '\0') {
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar8 + 1) = 0;
  }
  if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_d8 != '\0') && (local_e0 != 0)) {
    FUN_00d50b20();
  }
  plVar7 = (longlong *)*param_2;
  if ((DAT_0270c850 == '\0') && (iVar6 = ___cxa_guard_acquire(), iVar6 != 0)) {
    _DAT_026d4348 = FUN_00d4fe50();
    _DAT_026d4330 = "GNValue";
    _DAT_026d4338 = 0x18;
    _DAT_026d4340 = FUN_00053cb0;
    _DAT_026d4350 = 0;
    uRam00000000026d4358 = 0;
    _DAT_026d4360 = 0;
    uRam00000000026d4368 = 0;
    _DAT_026d4370 = 0;
    uRam00000000026d4378 = 0;
    _DAT_026d4380 = 0;
    uRam00000000026d4388 = 0;
    _DAT_026d4390 = 0;
    uRam00000000026d4398 = 0;
    _DAT_026d43a0 = 0;
    uRam00000000026d43a8 = 0;
    _DAT_026d43b0 = 0;
    uRam00000000026d43b8 = 0;
    _DAT_026d43c0 = 0;
    uRam00000000026d43c8 = 0;
    _DAT_026d43d0 = 0;
    uRam00000000026d43d8 = 0;
    _DAT_026d43e0 = 0;
    uRam00000000026d43e8 = 0;
    _DAT_026d43f0 = 0;
    ___cxa_guard_release();
  }
  if (plVar7 == (longlong *)0x0) {
LAB_01d84167:
    plVar7 = &DAT_02802688;
  }
  else {
    (**(code **)(*plVar7 + 0x360))();
    cVar5 = FUN_00e85ea0();
    plVar7 = param_2;
    if (cVar5 == '\0') goto LAB_01d84167;
  }
  lVar2 = *plVar7;
  local_31 = (char)plVar7[1];
  if ((local_31 != '\0') && (lVar2 != 0)) {
    FUN_00d50b00();
  }
  plVar7 = local_40;
  if ((plVar1 == (longlong *)0x0) || (lVar2 == 0)) {
LAB_01d84230:
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
    bVar4 = false;
    bVar3 = false;
    plVar7 = local_40;
  }
  else {
    if (local_40 == (longlong *)0x0) {
      local_b8 = '\0';
      local_c0 = lVar2;
      cVar5 = (**(code **)(*plVar1 + 0x50))();
      if ((local_b8 != '\0') && (local_c0 != 0)) {
        FUN_00d50b20();
      }
      if (cVar5 != '\0') goto LAB_01d84230;
      local_b0 = *param_1;
      local_a8 = '\0';
      local_a0 = *param_2;
      local_98 = '\0';
      (**(code **)(*unaff_RSI + 0x410))(&local_a0,&local_b0);
      plVar7 = local_40;
      if (local_50 != (longlong *)0x0) {
        plVar7 = local_50;
        if (local_48 == '\0') {
          FUN_00d50b00();
          if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_48 = '\0';
        }
      }
      if ((local_98 != '\0') && (local_a0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_a8 != '\0') && (local_b0 != 0)) {
        FUN_00d50b20();
      }
      local_88 = '\0';
      local_90 = plVar1;
      FUN_01f995d0();
      if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      local_78 = '\0';
      local_80 = lVar2;
      FUN_01f99620();
      if ((local_78 != '\0') && (local_80 != 0)) {
        FUN_00d50b20();
      }
      (**(code **)(*plVar7 + 0x378))();
    }
    else {
      local_c8 = '\0';
      local_d0 = lVar2;
      FUN_01f993b0();
      if ((local_c8 != '\0') && (local_d0 != 0)) {
        FUN_00d50b20();
      }
    }
    *unaff_RDI = plVar7;
    *(undefined1 *)(unaff_RDI + 1) = 1;
    bVar4 = true;
    bVar3 = true;
  }
  if ((local_31 != '\0') && (bVar3 = bVar4, lVar2 != 0)) {
    FUN_00d50b20();
  }
  if (plVar1 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (!bVar3 && plVar7 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}


