// Function: FUN_01b99bc0
// Address: 01b99bc0
// Size: 1187 bytes
// Class: GNValue
// String references:
//   "GNValue"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_01b99bc0(undefined8 param_1,undefined4 param_2)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong **pplVar4;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar5;
  undefined4 extraout_XMM0_Da_00;
  ulonglong local_a8;
  ulonglong local_a0;
  longlong local_98;
  char local_90;
  longlong local_88;
  char local_80;
  longlong local_78;
  char local_70;
  undefined4 local_64;
  longlong local_60;
  char local_58;
  longlong *local_50;
  longlong *local_48;
  longlong *local_40;
  char local_38;
  
  cVar2 = (**(code **)(*unaff_RDI + 0xa78))();
  if (cVar2 == '\0') {
    return 0;
  }
  if (*(char *)((longlong)unaff_RDI + 0x215) == '\0') {
    return 0;
  }
  local_a8 = FUN_00e7bdb0();
  local_a0 = FUN_00e7bdb0();
  FUN_01caeae0();
  plVar1 = local_40;
  uVar5 = extraout_XMM0_Da;
  if (local_38 == '\0') {
    if (local_40 == (longlong *)0x0) goto LAB_01b99e94;
    FUN_00d50b00();
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else if (local_40 == (longlong *)0x0) goto LAB_01b99e94;
  local_50 = plVar1;
  uVar5 = FUN_01d66da0();
  local_98 = DAT_027e2690;
  local_64 = param_2;
  if (DAT_027e2690 != 0) {
    uVar5 = FUN_00d50b00();
  }
  local_90 = '\x01';
  pplVar4 = &local_40;
  FUN_000175c0(uVar5,&local_98);
  plVar1 = local_40;
  if ((DAT_0270c850 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
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
LAB_01b99ce5:
    pplVar4 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar2 = FUN_00e85ea0();
    if (cVar2 == '\0') goto LAB_01b99ce5;
  }
  local_48 = *pplVar4;
  if (*(char *)(pplVar4 + 1) == '\0') {
    if (local_48 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar4 + 1) = 0;
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_90 != '\0') && (local_98 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  uVar5 = FUN_01d66da0();
  local_88 = DAT_027652e0;
  if (DAT_027652e0 != 0) {
    uVar5 = FUN_00d50b00();
  }
  local_80 = '\x01';
  pplVar4 = &local_40;
  FUN_000175c0(uVar5,&local_88);
  plVar1 = local_40;
  if ((DAT_0270c850 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
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
LAB_01b99dd2:
    pplVar4 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar2 = FUN_00e85ea0();
    if (cVar2 == '\0') goto LAB_01b99dd2;
  }
  param_2 = local_64;
  plVar1 = *pplVar4;
  if (*(char *)(pplVar4 + 1) == '\0') {
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar4 + 1) = 0;
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if ((local_48 != (longlong *)0x0) && (plVar1 != (longlong *)0x0)) {
    local_a8 = FUN_00dd6320();
    local_a0 = FUN_00dd6320();
  }
  if (plVar1 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (local_48 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  uVar5 = extraout_XMM0_Da_00;
LAB_01b99e94:
  if (local_a8 >> 0x20 != 0) {
    return 0;
  }
  if (local_a0 >> 0x20 == 0) {
    if ((char)param_2 != '\0') {
      *(undefined4 *)(unaff_RDI + 0x43) = 0xffffffff;
      local_78 = *unaff_RSI;
      local_70 = '\0';
      (**(code **)(*unaff_RDI + 0xb18))(uVar5,1);
      if ((local_70 != '\0') && (local_78 != 0)) {
        FUN_00d50b20();
      }
      *(undefined4 *)(unaff_RDI + 0x43) = 0;
      return 1;
    }
    return 1;
  }
  return 0;
}


