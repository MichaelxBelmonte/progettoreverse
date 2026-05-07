// Function: FUN_00dc2ff0
// Address: 00dc2ff0
// Size: 984 bytes
// Class: GNDate
// String references:
//   "GNDate"
//   "GNValue"
//   "GNString"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_00dc2ff0(void)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  ulonglong uVar5;
  undefined7 uVar6;
  
  lVar1 = DAT_0277c878;
  plVar4 = (longlong *)*unaff_RDI;
  if (DAT_0277c878 != 0) {
    FUN_00d50b00();
  }
  cVar2 = (**(code **)(*plVar4 + 0x50))();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = DAT_02781680;
  uVar6 = (undefined7)((ulonglong)plVar4 >> 8);
  uVar5 = CONCAT71(uVar6,1);
  if (cVar2 != '\0') goto LAB_00dc31b1;
  if (DAT_02781680 != 0) {
    FUN_00d50b00();
  }
  cVar2 = FUN_00d90870();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if (cVar2 != '\0') {
    uVar5 = 0;
    goto LAB_00dc31b1;
  }
  plVar4 = (longlong *)*unaff_RSI;
  if ((DAT_026fd0c0 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
    _DAT_026d5e58 = FUN_00d4fe50();
    DAT_026d5e40 = "GNString";
    _DAT_026d5e48 = 0x40;
    _DAT_026d5e50 = FUN_0005d920;
    _DAT_026d5e60 = 0;
    uRam00000000026d5e68 = 0;
    _DAT_026d5e70 = 0;
    uRam00000000026d5e78 = 0;
    _DAT_026d5e80 = 0;
    uRam00000000026d5e88 = 0;
    _DAT_026d5e90 = 0;
    uRam00000000026d5e98 = 0;
    _DAT_026d5ea0 = 0;
    uRam00000000026d5ea8 = 0;
    _DAT_026d5eb0 = 0;
    uRam00000000026d5eb8 = 0;
    _DAT_026d5ec0 = 0;
    uRam00000000026d5ec8 = 0;
    _DAT_026d5ed0 = 0;
    uRam00000000026d5ed8 = 0;
    _DAT_026d5ee0 = 0;
    uRam00000000026d5ee8 = 0;
    _DAT_026d5ef0 = 0;
    uRam00000000026d5ef8 = 0;
    _DAT_026d5f00 = 0;
    ___cxa_guard_release();
  }
  if (plVar4 == (longlong *)0x0) {
LAB_00dc30d8:
    plVar4 = &DAT_02802688;
  }
  else {
    (**(code **)(*plVar4 + 0x360))();
    cVar2 = FUN_00e85ea0();
    plVar4 = unaff_RSI;
    if (cVar2 == '\0') goto LAB_00dc30d8;
  }
  if (*plVar4 != 0) goto LAB_00dc31b1;
  plVar4 = (longlong *)*unaff_RSI;
  FUN_00053ac0();
  if (plVar4 == (longlong *)0x0) {
LAB_00dc3117:
    plVar4 = &DAT_02802688;
  }
  else {
    (**(code **)(*plVar4 + 0x360))();
    cVar2 = FUN_00e85ea0();
    plVar4 = unaff_RSI;
    if (cVar2 == '\0') goto LAB_00dc3117;
  }
  if (*plVar4 != 0) goto LAB_00dc31b1;
  plVar4 = (longlong *)*unaff_RSI;
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
  if (plVar4 == (longlong *)0x0) {
LAB_00dc3160:
    plVar4 = &DAT_02802688;
  }
  else {
    (**(code **)(*plVar4 + 0x360))();
    cVar2 = FUN_00e85ea0();
    plVar4 = unaff_RSI;
    if (cVar2 == '\0') goto LAB_00dc3160;
  }
  if (*plVar4 != 0) goto LAB_00dc31b1;
  plVar4 = (longlong *)*unaff_RSI;
  if ((DAT_026d02f0 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
    _DAT_026d0240 = FUN_00d4fe50();
    _DAT_026d0228 = "GNDate";
    _DAT_026d0230 = 0x18;
    _DAT_026d0238 = FUN_000378e0;
    _DAT_026d0248 = 0;
    uRam00000000026d0250 = 0;
    _DAT_026d0258 = 0;
    uRam00000000026d0260 = 0;
    _DAT_026d0268 = 0;
    uRam00000000026d0270 = 0;
    _DAT_026d0278 = 0;
    uRam00000000026d0280 = 0;
    _DAT_026d0288 = 0;
    uRam00000000026d0290 = 0;
    _DAT_026d0298 = 0;
    uRam00000000026d02a0 = 0;
    _DAT_026d02a8 = 0;
    uRam00000000026d02b0 = 0;
    _DAT_026d02b8 = 0;
    uRam00000000026d02c0 = 0;
    _DAT_026d02c8 = 0;
    uRam00000000026d02d0 = 0;
    _DAT_026d02d8 = 0;
    uRam00000000026d02e0 = 0;
    _DAT_026d02e8 = 0;
    ___cxa_guard_release();
  }
  if (plVar4 == (longlong *)0x0) {
LAB_00dc31a2:
    unaff_RSI = &DAT_02802688;
  }
  else {
    (**(code **)(*plVar4 + 0x360))();
    cVar2 = FUN_00e85ea0();
    if (cVar2 == '\0') goto LAB_00dc31a2;
  }
  uVar5 = CONCAT71(uVar6,*unaff_RSI != 0);
LAB_00dc31b1:
  return uVar5 & 0xffffffff;
}


