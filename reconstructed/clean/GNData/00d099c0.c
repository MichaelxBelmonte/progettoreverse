// Function: FUN_00d099c0
// Address: 00d099c0
// Size: 831 bytes
// Class: GNData
// String references:
//   "GNData"
//   "GNValue"
//   "GNString"
// === GNData properties ===
//   double          _firstSpectrumTime
//   double          _spectraTimeDistance


uint64_t FUN_00d099c0(void)

{
  char cVar1;
  int iVar2;
  int64_t *plVar3;
  int64_t *arg1;
  uint64_t unaff_R13;
  uint64_t uVar4;
  undefined7 uVar5;
  
  plVar3 = (int64_t *)*arg1;
  // [STATIC_INIT: property registration]
  if (plVar3 == (int64_t *)0x0) {
LAB_00d09a09:
    plVar3 = &g_02802688;
  }
  else {
    (**(code **)(*plVar3 + 0x360))();
    cVar1 = FUN_00e85ea0();
    plVar3 = arg1;
    if (cVar1 == '\0') goto LAB_00d09a09;
  }
  uVar5 = (undefined7)((uint64_t)unaff_R13 >> 8);
  uVar4 = CONCAT71(uVar5,1);
  if (*plVar3 != 0) goto LAB_00d09ae6;
  plVar3 = (int64_t *)*arg1;
  FUN_00053ac0();
  if (plVar3 == (int64_t *)0x0) {
LAB_00d09a4b:
    plVar3 = &g_02802688;
  }
  else {
    (**(code **)(*plVar3 + 0x360))();
    cVar1 = FUN_00e85ea0();
    plVar3 = arg1;
    if (cVar1 == '\0') goto LAB_00d09a4b;
  }
  if (*plVar3 != 0) goto LAB_00d09ae6;
  plVar3 = (int64_t *)*arg1;
  // [STATIC_INIT: property registration]
  if (plVar3 == (int64_t *)0x0) {
LAB_00d09a95:
    plVar3 = &g_02802688;
  }
  else {
    (**(code **)(*plVar3 + 0x360))();
    cVar1 = FUN_00e85ea0();
    plVar3 = arg1;
    if (cVar1 == '\0') goto LAB_00d09a95;
  }
  if (*plVar3 != 0) goto LAB_00d09ae6;
  plVar3 = (int64_t *)*arg1;
  // [STATIC_INIT: property registration]
  if (plVar3 == (int64_t *)0x0) {
LAB_00d09ad7:
    arg1 = &g_02802688;
  }
  else {
    (**(code **)(*plVar3 + 0x360))();
    cVar1 = FUN_00e85ea0();
    if (cVar1 == '\0') goto LAB_00d09ad7;
  }
  uVar4 = CONCAT71(uVar5,*arg1 != 0);
LAB_00d09ae6:
  return uVar4 & 0xffffffff;
}

