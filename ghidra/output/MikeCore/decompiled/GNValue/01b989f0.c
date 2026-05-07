// Function: FUN_01b989f0
// Address: 01b989f0
// Size: 1512 bytes
// Class: GNValue
// String references:
//   "GNValue"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_01b989f0(pthread_key_t param_1,undefined4 param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  void *pvVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong *unaff_RDI;
  longlong **pplVar10;
  undefined4 uVar11;
  longlong local_a8;
  char local_a0;
  longlong local_98;
  char local_90;
  longlong local_88;
  char local_80;
  longlong *local_78;
  char local_70;
  undefined4 local_64;
  longlong *local_60;
  longlong *local_58;
  longlong local_50;
  char local_48;
  longlong *local_40;
  char local_38;
  
  cVar3 = (**(code **)(*unaff_RDI + 0xa78))();
  if (cVar3 != '\0') {
    FUN_01caeae0();
    plVar1 = local_40;
    if (local_38 == '\0') {
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        goto LAB_01b98a66;
      }
    }
    else if (local_40 != (longlong *)0x0) {
LAB_01b98a66:
      local_60 = plVar1;
      uVar11 = FUN_01d66da0();
      local_a8 = DAT_027ebef0;
      if (DAT_027ebef0 != 0) {
        uVar11 = FUN_00d50b00();
      }
      local_a0 = '\x01';
      pplVar10 = &local_40;
      FUN_000175c0(uVar11,&local_a8);
      plVar1 = local_40;
      FUN_0013de80();
      if (plVar1 == (longlong *)0x0) {
LAB_01b98adb:
        pplVar10 = (longlong **)&DAT_02802688;
      }
      else {
        (**(code **)(*plVar1 + 0x360))();
        cVar3 = FUN_00e85ea0();
        if (cVar3 == '\0') goto LAB_01b98adb;
      }
      local_58 = *pplVar10;
      if (*(char *)(pplVar10 + 1) == '\0') {
        if (local_58 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        *(undefined1 *)(pplVar10 + 1) = 0;
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_a0 != '\0') && (local_a8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      uVar11 = FUN_01d66da0();
      local_98 = DAT_027e2690;
      if (DAT_027e2690 != 0) {
        uVar11 = FUN_00d50b00();
      }
      local_90 = '\x01';
      pplVar10 = &local_40;
      FUN_000175c0(uVar11,&local_98);
      plVar1 = local_40;
      if ((DAT_0270c850 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
        _DAT_026d4348 = FUN_00d4fe50();
        _DAT_026d4330 = "GNValue";
        _DAT_026d4338 = 0x18;
        param_1 = 0x53cb0;
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
      local_64 = param_2;
      if (plVar1 == (longlong *)0x0) {
LAB_01b98bd1:
        pplVar10 = (longlong **)&DAT_02802688;
      }
      else {
        (**(code **)(*plVar1 + 0x360))();
        cVar3 = FUN_00e85ea0();
        if (cVar3 == '\0') goto LAB_01b98bd1;
      }
      plVar1 = *pplVar10;
      if (*(char *)(pplVar10 + 1) == '\0') {
        if (plVar1 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        *(undefined1 *)(pplVar10 + 1) = 0;
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_90 != '\0') && (local_98 != 0)) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      uVar11 = FUN_01d66da0();
      lVar8 = DAT_027652e0;
      if (DAT_027652e0 != 0) {
        uVar11 = FUN_00d50b00();
      }
      local_88 = lVar8;
      local_80 = '\x01';
      pplVar10 = &local_40;
      FUN_000175c0(uVar11,&local_88);
      plVar2 = local_40;
      if ((DAT_0270c850 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
        _DAT_026d4348 = FUN_00d4fe50();
        _DAT_026d4330 = "GNValue";
        _DAT_026d4338 = 0x18;
        param_1 = 0x53cb0;
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
      if (plVar2 == (longlong *)0x0) {
LAB_01b98cae:
        pplVar10 = (longlong **)&DAT_02802688;
      }
      else {
        (**(code **)(*plVar2 + 0x360))();
        cVar3 = FUN_00e85ea0();
        if (cVar3 == '\0') goto LAB_01b98cae;
      }
      plVar2 = *pplVar10;
      if (*(char *)(pplVar10 + 1) == '\0') {
        if (plVar2 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        *(undefined1 *)(pplVar10 + 1) = 0;
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_80 != '\0') && (local_88 != 0)) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      if ((((local_58 == (longlong *)0x0) || (plVar1 == (longlong *)0x0)) ||
          (plVar2 == (longlong *)0x0)) || ((char)local_64 == '\0')) {
        if (plVar2 != (longlong *)0x0) goto LAB_01b98e45;
      }
      else {
        (**(code **)(*unaff_RDI + 0xa48))();
        FUN_01b6d0d0();
        pvVar5 = _pthread_getspecific(param_1);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar6 = FUN_00dd6320();
        uVar7 = FUN_00dd6320();
        local_40 = local_58;
        local_38 = '\0';
        FUN_012502a0(uVar7,uVar6,(char)unaff_RDI[0x36]);
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        local_78 = local_58;
        local_70 = '\0';
        uVar6 = FUN_00dd6320();
        uVar7 = FUN_00dd6320();
        lVar8 = *unaff_RDI;
        (**(code **)(lVar8 + 0xa80))(uVar7,uVar6);
        if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        (**(code **)(*unaff_RDI + 0xa50))();
LAB_01b98e45:
        FUN_00d50b20();
      }
      if (plVar1 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if (local_58 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      uVar9 = CONCAT71((int7)((ulonglong)lVar8 >> 8),1);
      FUN_00d50b20();
      goto LAB_01b98e73;
    }
  }
  uVar9 = 0;
LAB_01b98e73:
  return uVar9 & 0xffffffff;
}


