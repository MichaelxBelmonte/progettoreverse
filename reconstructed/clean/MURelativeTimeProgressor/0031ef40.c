// Function: FUN_0031ef40
// Address: 0031ef40
// Size: 535 bytes
// Class: MURelativeTimeProgressor
// String references:
//   "MURelativeTimeProgressor"

uint64_t FUN_0031ef40(void* param_1)

{
  double dVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  void *pvVar6;
  int64_t *this_ptr;
  int64_t **pplVar7;
  int64_t *plVar8;
  uint64_t uVar9;
  int64_t local_50;
  char local_48;
  int64_t *local_40;
  char local_38;
  float local_2c;
  
  (**(code **)(*this_ptr + 0x438))();
  plVar8 = local_40;
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar8 == (int64_t *)0x0) goto LAB_0031f06d;
  (**(code **)(*this_ptr + 0x438))();
  pplVar7 = &local_40;
  FUN_012d4ed0();
  plVar8 = local_40;
  if ((g_027ae7d0 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
    g_02702338 = FUN_00018c10();
    g_02702320 = "MURelativeTimeProgressor";
    g_02702328 = 0x58;
    param_1 = 0x323950;
    g_02702330 = FUN_00323950;
    g_02702340 = 0;
    ram_0000000002702348 = 0;
    g_02702350 = 0;
    ram_0000000002702358 = 0;
    g_02702360 = 0;
    ram_0000000002702368 = 0;
    g_02702370 = 0;
    ram_0000000002702378 = 0;
    g_02702380 = 0;
    ram_0000000002702388 = 0;
    g_02702390 = 0;
    ram_0000000002702398 = 0;
    g_027023a0 = 0;
    ram_00000000027023a8 = 0;
    g_027023b0 = 0;
    ram_00000000027023b8 = 0;
    g_027023c0 = 0;
    ram_00000000027023c8 = 0;
    g_027023d0 = 0;
    ram_00000000027023d8 = 0;
    g_027023e0 = 0;
    ___cxa_guard_release();
  }
  if (plVar8 == (int64_t *)0x0) {
LAB_0031efd8:
    pplVar7 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar8 + 0x360))();
    cVar4 = FUN_00e85ea0();
    if (cVar4 == '\0') goto LAB_0031efd8;
  }
  plVar8 = *pplVar7;
  if (plVar8 == (int64_t *)0x0) {
    bVar3 = true;
    bVar2 = true;
    plVar8 = (int64_t *)0x0;
  }
  else {
    if (*(char *)(pplVar7 + 1) == '\0') {
      FUN_00d50b00();
    }
    else {
      *(void*)(pplVar7 + 1) = 0;
    }
    bVar3 = false;
    bVar2 = false;
  }
  if ((local_38 != '\0') && (bVar2 = bVar3, local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if (plVar8 != (int64_t *)0x0) {
    pvVar6 = _pthread_getspecific(param_1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar1 = (double)FUN_0141ccc0();
    local_2c = (float)dVar1;
    if (bVar2) {
      return (uint64_t)(uint)local_2c;
    }
    FUN_00d50b20();
    return (uint64_t)(uint)local_2c;
  }
LAB_0031f06d:
  uVar9 = FUN_00324f30();
  return uVar9;
}

