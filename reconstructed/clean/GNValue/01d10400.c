// Function: FUN_01d10400
// Address: 01d10400
// Size: 1595 bytes
// Class: GNValue
// String references:
//   "GNValue"
//   "GNMultipleValue"
//   "GNString"

void FUN_01d10400(void)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  char cVar4;
  int iVar5;
  int64_t *plVar6;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t *local_88;
  int64_t local_48;
  char local_40;
  
  plVar6 = (int64_t *)*arg1;
  if ((g_0277a3a0 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
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
  if (plVar6 == (int64_t *)0x0) {
LAB_01d10450:
    plVar6 = &g_02802688;
  }
  else {
    (**(code **)(*plVar6 + 0x360))();
    cVar4 = FUN_00e85ea0();
    plVar6 = arg1;
    if (cVar4 == '\0') goto LAB_01d10450;
  }
  lVar2 = plVar6[1];
  if (((char)lVar2 == '\0') || (*plVar6 == 0)) {
    if (*plVar6 != 0) goto LAB_01d1047c;
  }
  else {
    FUN_00d50b00();
LAB_01d1047c:
    FUN_00e987e0();
    lVar1 = *arg1;
    if (lVar1 == local_48) {
      if (((char)arg1[1] == '\0') && (local_48 != 0)) {
        if (local_40 != '\0') goto LAB_01d104d7;
        FUN_00d50b00();
        goto LAB_01d1050c;
      }
LAB_01d10513:
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      lVar3 = arg1[1];
      if (local_40 == '\0') {
        if (local_48 != 0) {
          FUN_00d50b00();
        }
        *arg1 = local_48;
        if (((char)lVar3 != '\0') && (lVar1 != 0)) {
          FUN_00d50b20();
        }
LAB_01d1050c:
        local_88 = arg1 + 1;
        *(void*)local_88 = 1;
        goto LAB_01d10513;
      }
      *arg1 = local_48;
      if (((char)lVar3 != '\0') && (lVar1 != 0)) {
        FUN_00d50b20();
      }
LAB_01d104d7:
      local_88 = arg1 + 1;
      *(void*)local_88 = 1;
    }
    if ((char)lVar2 != '\0') {
      FUN_00d50b20();
    }
  }
  plVar6 = (int64_t *)*arg1;
  if (plVar6 == (int64_t *)0x0) {
    FUN_00d8ede0();
    if (local_40 == '\0') {
      if (local_48 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_40 = '\0';
    }
    (**(code **)(*this_ptr + 0x968))();
    if (local_48 != 0) {
      FUN_00d50b20();
    }
    if (local_40 == '\0') {
      return;
    }
    if (local_48 == 0) {
      return;
    }
    FUN_00d50b20();
    return;
  }
  FUN_00053ac0();
  (**(code **)(*plVar6 + 0x360))();
  cVar4 = FUN_00e85ea0();
  plVar6 = arg1;
  if (cVar4 == '\0') {
    plVar6 = &g_02802688;
  }
  lVar2 = plVar6[1];
  if (((char)lVar2 != '\0') && (*plVar6 != 0)) {
    FUN_00d50b00();
LAB_01d105b3:
    cVar4 = FUN_00dd6e50();
    if (cVar4 == 'f') {
      FUN_00d459e0();
      (**(code **)(*this_ptr + 0x928))();
    }
    else {
      FUN_00d45870();
      (**(code **)(*this_ptr + 0x918))();
    }
    if ((char)lVar2 != '\0') {
      FUN_00d50b20();
    }
    return;
  }
  if (*plVar6 != 0) goto LAB_01d105b3;
  plVar6 = (int64_t *)*arg1;
  if ((g_026fd0c0 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
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
  if (plVar6 == (int64_t *)0x0) {
LAB_01d10691:
    plVar6 = &g_02802688;
  }
  else {
    (**(code **)(*plVar6 + 0x360))();
    cVar4 = FUN_00e85ea0();
    plVar6 = arg1;
    if (cVar4 == '\0') goto LAB_01d10691;
  }
  if (*plVar6 != 0) {
    (**(code **)(*this_ptr + 0x968))();
    return;
  }
  plVar6 = (int64_t *)*arg1;
  if ((g_0270c850 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
    g_026d4348 = FUN_00d4fe50();
    g_026d4330 = "GNValue";
    g_026d4338 = 0x18;
    g_026d4340 = FUN_00053cb0;
    g_026d4350 = 0;
    ram_00000000026d4358 = 0;
    g_026d4360 = 0;
    ram_00000000026d4368 = 0;
    g_026d4370 = 0;
    ram_00000000026d4378 = 0;
    g_026d4380 = 0;
    ram_00000000026d4388 = 0;
    g_026d4390 = 0;
    ram_00000000026d4398 = 0;
    g_026d43a0 = 0;
    ram_00000000026d43a8 = 0;
    g_026d43b0 = 0;
    ram_00000000026d43b8 = 0;
    g_026d43c0 = 0;
    ram_00000000026d43c8 = 0;
    g_026d43d0 = 0;
    ram_00000000026d43d8 = 0;
    g_026d43e0 = 0;
    ram_00000000026d43e8 = 0;
    g_026d43f0 = 0;
    ___cxa_guard_release();
  }
  if (plVar6 != (int64_t *)0x0) {
    (**(code **)(*plVar6 + 0x360))();
    cVar4 = FUN_00e85ea0();
    plVar6 = arg1;
    if (cVar4 != '\0') goto LAB_01d10729;
  }
  plVar6 = &g_02802688;
LAB_01d10729:
  if (*plVar6 != 0) {
    (**(code **)(*(int64_t *)*arg1 + 0x368))();
    if (local_40 == '\0') {
      if (local_48 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_40 = '\0';
    }
    (**(code **)(*this_ptr + 0x968))();
    if (local_48 != 0) {
      FUN_00d50b20();
    }
    if (local_40 == '\0') {
      return;
    }
    if (local_48 == 0) {
      return;
    }
    FUN_00d50b20();
    return;
  }
  (**(code **)(*(int64_t *)*arg1 + 400))();
  if (local_40 == '\0') {
    if (local_48 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_40 = '\0';
  }
  (**(code **)(*this_ptr + 0x968))();
  if (local_48 != 0) {
    FUN_00d50b20();
  }
  if (local_40 == '\0') {
    return;
  }
  if (local_48 == 0) {
    return;
  }
  FUN_00d50b20();
  return;
}

