// Function: FUN_01c001a0
// Address: 01c001a0
// Size: 993 bytes
// Class: MUMultiTrackHeaderViewController
// String references:
//   "MUMultiTrackHeaderViewController"

void FUN_01c001a0(void)

{
  int64_t *plVar1;
  int64_t lVar2;
  char cVar3;
  int iVar4;
  int64_t lVar5;
  int64_t *arg1;
  int64_t this_ptr;
  int64_t **pplVar6;
  bool bVar7;
  int64_t *local_58;
  char local_50;
  int64_t local_48;
  char local_40;
  char local_31;
  
  plVar1 = (int64_t *)*arg1;
  if ((g_02700010 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
    g_027e7e28 = FUN_00015ff0();
    g_027e7e10 = "MUMultiTrackHeaderViewController";
    g_027e7e18 = 0x78;
    g_027e7e20 = FUN_00081d20;
    g_027e7e30 = 0;
    ram_00000000027e7e38 = 0;
    g_027e7e40 = 0;
    g_027e7eb8 = 0;
    ram_00000000027e7ec0 = 0;
    g_027e7ec8 = 0;
    g_027e7eca = 1;
    g_027e7e48 = 0;
    ram_00000000027e7e50 = 0;
    g_027e7e58 = 0;
    ram_00000000027e7e60 = 0;
    g_027e7e68 = 0;
    ram_00000000027e7e70 = 0;
    g_027e7e78 = 0;
    ram_00000000027e7e80 = 0;
    g_027e7e88 = 0;
    ram_00000000027e7e90 = 0;
    g_027e7e98 = 0;
    ram_00000000027e7ea0 = 0;
    g_027e7ea8 = 0;
    ram_00000000027e7eb0 = 0;
    g_027e7ed3 = 0;
    g_027e7ecb = 0;
    ___cxa_guard_release();
  }
  if (plVar1 == (int64_t *)0x0) {
LAB_01c001ec:
    arg1 = &g_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') goto LAB_01c001ec;
  }
  lVar2 = *arg1;
  cVar3 = (char)arg1[1];
  if ((cVar3 != '\0') && (lVar2 != 0)) {
    FUN_00d50b00();
  }
  lVar5 = *(int64_t *)(this_ptr + 0x1c8);
  if (lVar5 == lVar2) {
    if (lVar5 != 0) {
      FUN_01e53c20();
      plVar1 = local_58;
      FUN_01e3f820();
      (**(code **)(*plVar1 + 0x4d0))();
      if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    goto LAB_01c0049a;
  }
  if (lVar5 == 0) {
    lVar5 = 0;
    if (lVar2 != 0) goto LAB_01c002e6;
  }
  else {
    FUN_01e53c20();
    FUN_01e40eb0();
    plVar1 = local_58;
    if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if (plVar1 != (int64_t *)0x0) {
      (**(code **)(**(int64_t **)(this_ptr + 0x1c8) + 0x4d0))();
    }
    lVar5 = *(int64_t *)(this_ptr + 0x1c8);
    if (lVar5 != lVar2) {
LAB_01c002e6:
      if (lVar2 != 0) {
        FUN_00d50b00();
      }
      *(int64_t *)(this_ptr + 0x1c8) = lVar2;
      bVar7 = lVar5 != 0;
      lVar5 = lVar2;
      if (bVar7) {
        FUN_00d50b20();
        lVar5 = *(int64_t *)(this_ptr + 0x1c8);
      }
    }
  }
  if (lVar5 == 0) goto LAB_01c0049a;
  FUN_01e53c20();
  FUN_01e40eb0();
  plVar1 = local_58;
  if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if (plVar1 != (int64_t *)0x0) {
    local_31 = cVar3;
    FUN_01e53c20();
    pplVar6 = &local_58;
    FUN_01e40eb0();
    plVar1 = local_58;
    FUN_01bf2e70();
    if (plVar1 == (int64_t *)0x0) {
LAB_01c003c4:
      pplVar6 = (int64_t **)&g_02802688;
    }
    else {
      (**(code **)(*plVar1 + 0x360))();
      cVar3 = FUN_00e85ea0();
      if (cVar3 == '\0') goto LAB_01c003c4;
    }
    cVar3 = local_31;
    plVar1 = *pplVar6;
    if (*(char *)(pplVar6 + 1) == '\0') {
      if (plVar1 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      *(void*)(pplVar6 + 1) = 0;
      cVar3 = local_31;
    }
    if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    (**(code **)(*plVar1 + 0x978))();
    FUN_00d50b20();
  }
  plVar1 = *(int64_t **)(this_ptr + 0x1c8);
  FUN_00d50b00();
  FUN_01e3f820();
  (**(code **)(*plVar1 + 0x4c8))();
  if (this_ptr != 0) {
    FUN_00d50b20();
  }
LAB_01c0049a:
  if ((cVar3 != '\0') && (lVar2 != 0)) {
    FUN_00d50b20();
  }
  return;
}

