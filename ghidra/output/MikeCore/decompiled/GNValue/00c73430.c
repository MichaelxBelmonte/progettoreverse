// Function: FUN_00c73430
// Address: 00c73430
// Size: 748 bytes
// Class: GNValue
// String references:
//   "GNValue"
//   "GNString"


/* WARNING: Removing unreachable block (ram,0x00c73549) */
/* WARNING: Removing unreachable block (ram,0x00c73552) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_00c73430(void)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  longlong *unaff_RDI;
  undefined8 local_68;
  
  plVar5 = (longlong *)*unaff_RDI;
  if ((DAT_0270c850 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
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
  if (plVar5 == (longlong *)0x0) {
LAB_00c73478:
    plVar5 = &DAT_02802688;
  }
  else {
    (**(code **)(*plVar5 + 0x360))();
    cVar3 = FUN_00e85ea0();
    plVar5 = unaff_RDI;
    if (cVar3 == '\0') goto LAB_00c73478;
  }
  lVar1 = plVar5[1];
  if (((char)lVar1 != '\0') && (*plVar5 != 0)) {
    FUN_00d50b00();
LAB_00c7349f:
    local_68 = FUN_00dd6b50();
    if ((char)lVar1 != '\0') {
      FUN_00d50b20();
    }
    return local_68;
  }
  if (*plVar5 != 0) goto LAB_00c7349f;
  plVar5 = (longlong *)*unaff_RDI;
  if ((DAT_026fd0c0 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
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
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 != '\0') goto LAB_00c7350b;
  }
  unaff_RDI = &DAT_02802688;
LAB_00c7350b:
  lVar2 = DAT_027720b0;
  lVar1 = unaff_RDI[1];
  if (((char)lVar1 == '\0') || (*unaff_RDI == 0)) {
    if (*unaff_RDI == 0) {
      if (DAT_027720b0 != 0) {
        FUN_00d50b00();
      }
      FUN_00cc78b0();
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      return DAT_023dcd0c;
    }
  }
  else {
    FUN_00d50b00();
  }
  local_68 = FUN_00d967b0();
  if ((char)lVar1 == '\0') {
    return local_68;
  }
  FUN_00d50b20();
  return local_68;
}


