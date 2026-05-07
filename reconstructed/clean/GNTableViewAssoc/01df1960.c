// Function: FUN_01df1960
// Address: 01df1960
// Size: 584 bytes
// Class: GNTableViewAssoc
// String references:
//   "GNTableViewAssoc"

void FUN_01df1960(void)

{
  bool bVar1;
  int64_t *plVar2;
  char cVar3;
  int iVar4;
  int64_t *this_ptr;
  int64_t **pplVar5;
  int64_t *plVar6;
  int64_t *local_40;
  char local_38;
  
  FUN_01ccad60();
  plVar2 = local_40;
  if (local_40 == (int64_t *)0x0) {
    plVar6 = (int64_t *)0x0;
joined_r0x01df19a9:
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    plVar6 = local_40;
    if (local_38 == '\0') {
      FUN_00d50b00();
      plVar6 = plVar2;
      goto joined_r0x01df19a9;
    }
  }
  if (plVar6 == (int64_t *)0x0) {
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
    return;
  }
  FUN_01db9a60();
  if (local_40 == (int64_t *)0x0) {
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
    goto LAB_01df1adf;
  }
  if (((local_38 == '\0') && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  pplVar5 = &local_40;
  FUN_01ddf1f0();
  plVar6 = local_40;
  if ((g_026f2418 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
    g_026f2368 = FUN_001ba850();
    g_026f2350 = "GNTableViewAssoc";
    g_026f2358 = 0x60;
    g_026f2360 = FUN_001f3b20;
    g_026f2370 = 0;
    ram_00000000026f2378 = 0;
    g_026f2380 = 0;
    ram_00000000026f2388 = 0;
    g_026f2390 = 0;
    ram_00000000026f2398 = 0;
    g_026f23a0 = 0;
    ram_00000000026f23a8 = 0;
    g_026f23b0 = 0;
    ram_00000000026f23b8 = 0;
    g_026f23c0 = 0;
    ram_00000000026f23c8 = 0;
    g_026f23d0 = 0;
    ram_00000000026f23d8 = 0;
    g_026f23e0 = 0;
    ram_00000000026f23e8 = 0;
    g_026f23f0 = 0;
    ram_00000000026f23f8 = 0;
    g_026f2400 = 0;
    ram_00000000026f2408 = 0;
    g_026f2410 = 0;
    ___cxa_guard_release();
  }
  if (plVar6 == (int64_t *)0x0) {
LAB_01df1a4f:
    pplVar5 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar6 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') goto LAB_01df1a4f;
  }
  plVar6 = *pplVar5;
  if (plVar6 == (int64_t *)0x0) {
    bVar1 = false;
  }
  else if (*(char *)(pplVar5 + 1) == '\0') {
    bVar1 = true;
    FUN_00d50b00();
  }
  else {
    *(void*)(pplVar5 + 1) = 0;
    bVar1 = true;
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  *(void*)(this_ptr + 1) = 0;
  if (!bVar1 && plVar6 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  *this_ptr = (int64_t)plVar6;
  *(void*)(this_ptr + 1) = 1;
  FUN_00d50b20();
LAB_01df1adf:
  if (plVar2 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}

