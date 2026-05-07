// Function: FUN_019f0970
// Address: 019f0970
// Size: 669 bytes
// Class: MUPitchSystemRulerView
// String references:
//   "MUPitchSystemRulerView"

void FUN_019f0970(void)

{
  int64_t *plVar1;
  int64_t *plVar2;
  char cVar3;
  int iVar4;
  int64_t **pplVar5;
  uint8_t unaff_SIL;
  int64_t *this_ptr;
  int64_t *local_40;
  char local_38;
  
  (**(code **)(*this_ptr + 0x970))();
  plVar1 = local_40;
  if (local_38 == '\0') {
    if (local_40 == (int64_t *)0x0) {
      return;
    }
    FUN_00d50b00();
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else if (local_40 == (int64_t *)0x0) {
    return;
  }
  (**(code **)(&g_000015c0 + *this_ptr))();
  (**(code **)(*plVar1 + 0x958))(*plVar1,unaff_SIL);
  pplVar5 = &local_40;
  FUN_01d98320();
  plVar1 = local_40;
  if ((g_027366a0 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
    g_026f9768 = FUN_0006d940();
    g_026f9750 = "MUPitchSystemRulerView";
    g_026f9758 = 0x168;
    g_026f9760 = FUN_002757e0;
    g_026f9770 = 0;
    ram_00000000026f9778 = 0;
    g_026f9780 = 0;
    g_026f97f8 = 0;
    ram_00000000026f9800 = 0;
    g_026f9808 = 0;
    g_026f980a = 1;
    g_026f9788 = 0;
    ram_00000000026f9790 = 0;
    g_026f9798 = 0;
    ram_00000000026f97a0 = 0;
    g_026f97a8 = 0;
    ram_00000000026f97b0 = 0;
    g_026f97b8 = 0;
    ram_00000000026f97c0 = 0;
    g_026f97c8 = 0;
    ram_00000000026f97d0 = 0;
    g_026f97d8 = 0;
    ram_00000000026f97e0 = 0;
    g_026f97e8 = 0;
    ram_00000000026f97f0 = 0;
    g_026f9813 = 0;
    g_026f980b = 0;
    ___cxa_guard_release();
  }
  if (plVar1 == (int64_t *)0x0) {
LAB_019f0a32:
    pplVar5 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') goto LAB_019f0a32;
  }
  plVar1 = *pplVar5;
  if (*(char *)(pplVar5 + 1) == '\0') {
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar5 + 1) = 0;
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(*this_ptr + 0xa28))();
  plVar2 = local_40;
  if (local_38 == '\0') {
    if (local_40 == (int64_t *)0x0) goto LAB_019f0b23;
    FUN_00d50b00();
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  if ((plVar1 != (int64_t *)0x0) && (plVar2 != (int64_t *)0x0)) {
    (**(code **)(*plVar1 + 0x928))();
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (local_40 != plVar2) {
      (**(code **)(*plVar1 + 0x930))();
    }
  }
  if (plVar2 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
LAB_019f0b23:
  if (plVar1 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}

