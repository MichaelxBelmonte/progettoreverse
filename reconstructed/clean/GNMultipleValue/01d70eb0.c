// Function: FUN_01d70eb0
// Address: 01d70eb0
// Size: 914 bytes
// Class: GNMultipleValue
// String references:
//   "GNMultipleValue"
//   "GNString"

void FUN_01d70eb0(void)

{
  int64_t lVar1;
  int64_t lVar2;
  char cVar3;
  int iVar4;
  int64_t *plVar5;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t local_60;
  char local_58;
  
  plVar5 = (int64_t *)*arg1;
  if (plVar5 == (int64_t *)0x0) {
                                            (**(code **)(*this_ptr + 0x918))();
    return;
  }
  if ((g_0277a3a0 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
    g_026d3c38 = FUN_00d4fe50();
    g_026d3c20 = "GNMultipleValue";
    g_026d3c28 = 0x18;
    g_026d3c30 = FUN_00050c70;
    g_026d3c40 = 0;
    ram_00000000026d3c48 = 0;
    g_026d3c50 = 0;
    ram_00000000026d3c58 = 0;
    g_026d3c60 = 0;
    ram_00000000026d3c68 = 0;
    g_026d3c70 = 0;
    ram_00000000026d3c78 = 0;
    g_026d3c80 = 0;
    ram_00000000026d3c88 = 0;
    g_026d3c90 = 0;
    ram_00000000026d3c98 = 0;
    g_026d3ca0 = 0;
    ram_00000000026d3ca8 = 0;
    g_026d3cb0 = 0;
    ram_00000000026d3cb8 = 0;
    g_026d3cc0 = 0;
    ram_00000000026d3cc8 = 0;
    g_026d3cd0 = 0;
    ram_00000000026d3cd8 = 0;
    g_026d3ce0 = 0;
    ___cxa_guard_release();
  }
  (**(code **)(*plVar5 + 0x360))();
  cVar3 = FUN_00e85ea0();
  plVar5 = arg1;
  if (cVar3 == '\0') {
    plVar5 = &g_02802688;
  }
  cVar3 = (char)plVar5[1];
  if ((cVar3 == '\0') || (*plVar5 == 0)) {
    if (*plVar5 != 0) goto LAB_01d70f4b;
  }
  else {
    FUN_00d50b00();
LAB_01d70f4b:
    FUN_00e987e0();
    if (local_58 == '\0') {
      if (local_60 == 0) goto LAB_01d70fb7;
      FUN_00d50b00();
    }
    else if (local_60 == 0) {
LAB_01d70fb7:
      (**(code **)(*this_ptr + 0x918))();
      if (cVar3 == '\0') {
        return;
      }
      FUN_00d50b20();
      return;
    }
    lVar1 = *arg1;
    lVar2 = arg1[1];
    if (lVar1 == local_60) {
      if ((char)lVar2 == '\0') {
        FUN_00d50b00();
        goto LAB_01d70fed;
      }
    }
    else {
      FUN_00d50b00();
      *arg1 = local_60;
      if (((char)lVar2 != '\0') && (lVar1 != 0)) {
        FUN_00d50b20();
      }
LAB_01d70fed:
      *(void*)(arg1 + 1) = 1;
    }
    FUN_00d50b20();
    if (cVar3 != '\0') {
      FUN_00d50b20();
    }
  }
  plVar5 = (int64_t *)*arg1;
  FUN_00053ac0();
  if (plVar5 == (int64_t *)0x0) {
LAB_01d71038:
    plVar5 = &g_02802688;
  }
  else {
    (**(code **)(*plVar5 + 0x360))();
    cVar3 = FUN_00e85ea0();
    plVar5 = arg1;
    if (cVar3 == '\0') goto LAB_01d71038;
  }
  if (*plVar5 != 0) {
    FUN_00d45870();
    (**(code **)(*this_ptr + 0x918))();
    return;
  }
  plVar5 = (int64_t *)*arg1;
  if ((g_026fd0c0 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
    g_026d5e58 = FUN_00d4fe50();
    g_026d5e40 = "GNString";
    g_026d5e48 = 0x40;
    g_026d5e50 = FUN_0005d920;
    g_026d5e60 = 0;
    ram_00000000026d5e68 = 0;
    g_026d5e70 = 0;
    ram_00000000026d5e78 = 0;
    g_026d5e80 = 0;
    ram_00000000026d5e88 = 0;
    g_026d5e90 = 0;
    ram_00000000026d5e98 = 0;
    g_026d5ea0 = 0;
    ram_00000000026d5ea8 = 0;
    g_026d5eb0 = 0;
    ram_00000000026d5eb8 = 0;
    g_026d5ec0 = 0;
    ram_00000000026d5ec8 = 0;
    g_026d5ed0 = 0;
    ram_00000000026d5ed8 = 0;
    g_026d5ee0 = 0;
    ram_00000000026d5ee8 = 0;
    g_026d5ef0 = 0;
    ram_00000000026d5ef8 = 0;
    g_026d5f00 = 0;
    ___cxa_guard_release();
  }
  if (plVar5 != (int64_t *)0x0) {
    (**(code **)(*plVar5 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 != '\0') goto LAB_01d710af;
  }
  arg1 = &g_02802688;
LAB_01d710af:
  if (*arg1 != 0) {
    (**(code **)(*this_ptr + 0x968))();
  }
  return;
}

