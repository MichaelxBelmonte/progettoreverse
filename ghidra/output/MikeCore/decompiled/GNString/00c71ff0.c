// Function: FUN_00c71ff0
// Address: 00c71ff0
// Size: 526 bytes
// Class: GNString
// String references:
//   "GNString"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_00c71ff0(void)

{
  double dVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  longlong *unaff_RDI;
  float fVar7;
  
  plVar6 = (longlong *)*unaff_RDI;
  FUN_00053ac0();
  if (plVar6 == (longlong *)0x0) {
LAB_00c72030:
    plVar6 = &DAT_02802688;
  }
  else {
    (**(code **)(*plVar6 + 0x360))();
    cVar4 = FUN_00e85ea0();
    plVar6 = unaff_RDI;
    if (cVar4 == '\0') goto LAB_00c72030;
  }
  lVar2 = plVar6[1];
  if (((char)lVar2 != '\0') && (*plVar6 != 0)) {
    FUN_00d50b00();
LAB_00c72057:
    dVar1 = (double)FUN_00d45bc0();
    if ((char)lVar2 != '\0') {
      FUN_00d50b20();
    }
    return dVar1;
  }
  if (*plVar6 != 0) goto LAB_00c72057;
  plVar6 = (longlong *)*unaff_RDI;
  if ((DAT_026fd0c0 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
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
  if (plVar6 != (longlong *)0x0) {
    (**(code **)(*plVar6 + 0x360))();
    cVar4 = FUN_00e85ea0();
    if (cVar4 != '\0') goto LAB_00c720bf;
  }
  unaff_RDI = &DAT_02802688;
LAB_00c720bf:
  lVar3 = DAT_027720b0;
  lVar2 = unaff_RDI[1];
  if (((char)lVar2 == '\0') || (*unaff_RDI == 0)) {
    if (*unaff_RDI == 0) {
      if (DAT_027720b0 != 0) {
        FUN_00d50b00();
      }
      FUN_00cc78b0();
      if (lVar3 == 0) {
        return 0.0;
      }
      FUN_00d50b20();
      return 0.0;
    }
  }
  else {
    FUN_00d50b00();
  }
  fVar7 = (float)FUN_00d8d7b0();
  if ((char)lVar2 == '\0') {
    return (double)fVar7;
  }
  FUN_00d50b20();
  return (double)fVar7;
}


