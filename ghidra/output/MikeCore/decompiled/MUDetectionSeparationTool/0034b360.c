// Function: FUN_0034b360
// Address: 0034b360
// Size: 1030 bytes
// Class: MUDetectionSeparationTool
// String references:
//   "MUDetectionSeparationTool"


/* WARNING: Removing unreachable block (ram,0x0034b65e) */
/* WARNING: Removing unreachable block (ram,0x0034b667) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_0034b360(code *param_1,char param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  void *pvVar5;
  pthread_key_t pVar6;
  char *pcVar7;
  ulonglong uVar8;
  longlong *unaff_RDI;
  longlong **pplVar9;
  bool bVar10;
  longlong *local_58;
  char local_50 [8];
  longlong *local_48;
  char local_40;
  char local_38 [8];
  
  pplVar9 = &local_58;
  (**(code **)(*unaff_RDI + 0xed0))();
  plVar1 = local_58;
  FUN_00276bd0();
  if (plVar1 == (longlong *)0x0) {
LAB_0034b3b6:
    pplVar9 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') goto LAB_0034b3b6;
  }
  if (*pplVar9 == (longlong *)0x0) {
    pplVar9 = &local_48;
    (**(code **)(*unaff_RDI + 0xed0))();
    plVar1 = local_48;
    if ((DAT_026f9dc8 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
      _DAT_026f9d18 = FUN_00276570();
      _DAT_026f9d00 = "MUDetectionSeparationTool";
      _DAT_026f9d08 = 0x40;
      param_1 = FUN_00276520;
      _DAT_026f9d10 = FUN_00276520;
      _DAT_026f9d20 = 0;
      uRam00000000026f9d28 = 0;
      _DAT_026f9d30 = 0;
      _DAT_026f9da8 = 0;
      uRam00000000026f9db0 = 0;
      _DAT_026f9db8 = 0;
      DAT_026f9dba = 1;
      _DAT_026f9d38 = 0;
      uRam00000000026f9d40 = 0;
      _DAT_026f9d48 = 0;
      uRam00000000026f9d50 = 0;
      _DAT_026f9d58 = 0;
      uRam00000000026f9d60 = 0;
      _DAT_026f9d68 = 0;
      uRam00000000026f9d70 = 0;
      _DAT_026f9d78 = 0;
      uRam00000000026f9d80 = 0;
      _DAT_026f9d88 = 0;
      uRam00000000026f9d90 = 0;
      _DAT_026f9d98 = 0;
      uRam00000000026f9da0 = 0;
      DAT_026f9dc3 = 0;
      _DAT_026f9dbb = 0;
      ___cxa_guard_release();
    }
    if (plVar1 == (longlong *)0x0) {
LAB_0034b478:
      pplVar9 = (longlong **)&DAT_02802688;
    }
    else {
      (**(code **)(*plVar1 + 0x360))();
      cVar3 = FUN_00e85ea0();
      if (cVar3 == '\0') goto LAB_0034b478;
    }
    bVar10 = *pplVar9 == (longlong *)0x0;
    if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    bVar10 = false;
  }
  if ((local_50[0] != '\0') && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((bVar10) || (unaff_RDI[0xa7] == 0)) {
    uVar8 = 0;
    goto LAB_0034b68f;
  }
  FUN_00d50b00();
  (**(code **)(*unaff_RDI + 0xe20))();
  plVar1 = local_48;
  if (local_40 == '\0') {
    if (local_48 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_40 = '\0';
  }
  FUN_00243390();
  plVar2 = local_58;
  if (local_50[0] == '\0') {
    if (((local_58 != (longlong *)0x0) && (FUN_00d50b00(), local_50[0] != '\0')) &&
       (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_50[0] = '\0';
  }
  if (plVar1 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (*(int *)((longlong)plVar2 + 0xc) == 1) {
    FUN_00d23310();
    pVar6 = (pthread_key_t)CONCAT71((int7)((ulonglong)param_1 >> 8),local_50[0]);
    pcVar7 = local_38;
    if (local_50[0] != '\0') {
      pcVar7 = local_50;
    }
    local_38[0] = local_50[0];
    *pcVar7 = '\0';
    if ((local_50[0] != '\0') && (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    pvVar5 = _pthread_getspecific(pVar6);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0125e7c0();
    plVar1 = local_48;
    if (local_40 == '\0') {
      if (((local_48 != (longlong *)0x0) && (FUN_00d50b00(), local_40 != '\0')) &&
         (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_40 = '\0';
    }
    if ((local_38[0] != '\0') && (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((plVar1 != (longlong *)0x0) && (param_2 != '\0')) {
      pvVar5 = _pthread_getspecific(pVar6);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01335090();
    }
    if (plVar1 == (longlong *)0x0) goto LAB_0034b67d;
    uVar8 = CONCAT71((int7)((ulonglong)local_58 >> 8),1);
    FUN_00d50b20();
  }
  else {
LAB_0034b67d:
    uVar8 = 0;
  }
  FUN_00d50b20();
  FUN_00d50b20();
LAB_0034b68f:
  return uVar8 & 0xffffffff;
}


