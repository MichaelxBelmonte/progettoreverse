// Function: FUN_0034b360
// Address: 0034b360
// Size: 1030 bytes
// Class: MUDetectionSeparationTool
// String references:
//   "MUDetectionSeparationTool"

uint64_t FUN_0034b360(code *param_1,char param_2)

{
  int64_t *plVar1;
  int64_t *plVar2;
  char cVar3;
  int iVar4;
  void *pvVar5;
  void* pVar6;
  char *pcVar7;
  uint64_t uVar8;
  int64_t *this_ptr;
  int64_t **pplVar9;
  bool bVar10;
  int64_t *local_58;
  char local_50 [8];
  int64_t *local_48;
  char local_40;
  char local_38 [8];
  
  pplVar9 = &local_58;
  (**(code **)(*this_ptr + 0xed0))();
  plVar1 = local_58;
  FUN_00276bd0();
  if (plVar1 == (int64_t *)0x0) {
LAB_0034b3b6:
    pplVar9 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') goto LAB_0034b3b6;
  }
  if (*pplVar9 == (int64_t *)0x0) {
    pplVar9 = &local_48;
    (**(code **)(*this_ptr + 0xed0))();
    plVar1 = local_48;
    if ((g_026f9dc8 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
      g_026f9d18 = FUN_00276570();
      g_026f9d00 = "MUDetectionSeparationTool";
      g_026f9d08 = 0x40;
      param_1 = FUN_00276520;
      g_026f9d10 = FUN_00276520;
      g_026f9d20 = 0;
      ram_00000000026f9d28 = 0;
      g_026f9d30 = 0;
      g_026f9da8 = 0;
      ram_00000000026f9db0 = 0;
      g_026f9db8 = 0;
      g_026f9dba = 1;
      g_026f9d38 = 0;
      ram_00000000026f9d40 = 0;
      g_026f9d48 = 0;
      ram_00000000026f9d50 = 0;
      g_026f9d58 = 0;
      ram_00000000026f9d60 = 0;
      g_026f9d68 = 0;
      ram_00000000026f9d70 = 0;
      g_026f9d78 = 0;
      ram_00000000026f9d80 = 0;
      g_026f9d88 = 0;
      ram_00000000026f9d90 = 0;
      g_026f9d98 = 0;
      ram_00000000026f9da0 = 0;
      g_026f9dc3 = 0;
      g_026f9dbb = 0;
      ___cxa_guard_release();
    }
    if (plVar1 == (int64_t *)0x0) {
LAB_0034b478:
      pplVar9 = (int64_t **)&g_02802688;
    }
    else {
      (**(code **)(*plVar1 + 0x360))();
      cVar3 = FUN_00e85ea0();
      if (cVar3 == '\0') goto LAB_0034b478;
    }
    bVar10 = *pplVar9 == (int64_t *)0x0;
    if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    bVar10 = false;
  }
  if ((local_50[0] != '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((bVar10) || (this_ptr[0xa7] == 0)) {
    uVar8 = 0;
    goto LAB_0034b68f;
  }
  FUN_00d50b00();
  (**(code **)(*this_ptr + 0xe20))();
  plVar1 = local_48;
  if (local_40 == '\0') {
    if (local_48 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_40 = '\0';
  }
  FUN_00243390();
  plVar2 = local_58;
  if (local_50[0] == '\0') {
    if (((local_58 != (int64_t *)0x0) && (FUN_00d50b00(), local_50[0] != '\0')) &&
       (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_50[0] = '\0';
  }
  if (plVar1 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (*(int *)((int64_t)plVar2 + 0xc) == 1) {
    FUN_00d23310();
    pVar6 = (void*)CONCAT71((int7)((uint64_t)param_1 >> 8),local_50[0]);
    pcVar7 = local_38;
    if (local_50[0] != '\0') {
      pcVar7 = local_50;
    }
    local_38[0] = local_50[0];
    *pcVar7 = '\0';
    if ((local_50[0] != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    pvVar5 = _pthread_getspecific(pVar6);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0125e7c0();
    plVar1 = local_48;
    if (local_40 == '\0') {
      if (((local_48 != (int64_t *)0x0) && (FUN_00d50b00(), local_40 != '\0')) &&
         (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_40 = '\0';
    }
    if ((local_38[0] != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((plVar1 != (int64_t *)0x0) && (param_2 != '\0')) {
      pvVar5 = _pthread_getspecific(pVar6);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01335090();
    }
    if (plVar1 == (int64_t *)0x0) goto LAB_0034b67d;
    uVar8 = CONCAT71((int7)((uint64_t)local_58 >> 8),1);
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

