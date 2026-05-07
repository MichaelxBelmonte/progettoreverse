// Function: FUN_00df3030
// Address: 00df3030
// Size: 902 bytes
// Class: GNCompressor
// String references:
//   "GNCompressor"
// === GNCompressor properties ===
//                   _userInfo
//                   _objectPointers
//                   _mutableObjects
//                   _immutableObjects
//                   _classDescriptions
//                   _state
//                   _rootObject
//                   _stream


void FUN_00df3030(uint32_t param_1)

{
  bool bVar1;
  bool bVar2;
  int64_t *plVar3;
  char cVar4;
  int iVar5;
  int64_t *plVar6;
  int64_t **pplVar7;
  int64_t *arg1;
  void*this_ptr;
  bool bVar8;
  uint32_t uVar9;
  int64_t local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  int64_t *local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t *local_40;
  char local_38;
  
  if (*arg1 == 0) {
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
    return;
  }
  if ((g_028a87f8 == (int64_t *)0x0) || (g_028a8801 == '\0')) {
    FUN_00e8cb50();
    if (g_028a87f8 == (int64_t *)0x0) {
      plVar6 = (int64_t *)FUN_00e8fc40();
      FUN_00022d50();
      (**(code **)(*plVar6 + 0x18))();
      if (g_028a87f8 == plVar6) {
        bVar2 = false;
        bVar1 = false;
      }
      else {
        bVar2 = true;
        bVar1 = true;
        bVar8 = g_028a87f8 != (int64_t *)0x0;
        g_028a87f8 = plVar6;
        if (bVar8) {
          FUN_00d50b20();
        }
      }
      if (g_028a8800 == '\0') {
        g_028a8800 = '\x01';
        FUN_00e8cb90();
        bVar1 = bVar2;
      }
      if (!bVar1) {
        FUN_00d50b20();
      }
      g_028a8801 = '\x01';
      param_1 = FUN_00e8cb70();
    }
    else {
      g_028a8801 = '\x01';
      param_1 = FUN_00e8cb70();
    }
  }
  local_80 = *arg1;
  local_78 = '\0';
  FUN_00df35a0(param_1,&local_80);
  plVar6 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != (int64_t *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
       (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  if (plVar6 != (int64_t *)0x0) {
LAB_00df315b:
    *this_ptr = plVar6;
    *(void*)(this_ptr + 1) = 1;
    return;
  }
  local_70 = *arg1;
  local_68 = '\0';
  FUN_00c80cd0();
  plVar3 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != (int64_t *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
       (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if (plVar3 == (int64_t *)0x0) goto LAB_00df315b;
  FUN_00c811e0();
  plVar6 = local_40;
  if ((g_02775ad0 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
    g_026d7568 = FUN_00d4fe50();
    g_026d7550 = "GNCompressor";
    g_026d7558 = 0x10;
    g_026d7560 = FUN_00068b20;
    g_026d7570 = 0;
    ram_00000000026d7578 = 0;
    g_026d7580 = 0;
    ram_00000000026d7588 = 0;
    g_026d7590 = 0;
    ram_00000000026d7598 = 0;
    g_026d75a0 = 0;
    ram_00000000026d75a8 = 0;
    g_026d75b0 = 0;
    ram_00000000026d75b8 = 0;
    g_026d75c0 = 0;
    ram_00000000026d75c8 = 0;
    g_026d75d0 = 0;
    ram_00000000026d75d8 = 0;
    g_026d75e0 = 0;
    ram_00000000026d75e8 = 0;
    g_026d75f0 = 0;
    ram_00000000026d75f8 = 0;
    g_026d7600 = 0;
    ram_00000000026d7608 = 0;
    g_026d7610 = 0;
    ___cxa_guard_release();
  }
  if (plVar6 != (int64_t *)0x0) {
    (**(code **)(*plVar6 + 0x360))();
    cVar4 = FUN_00e85ea0();
    pplVar7 = &local_40;
    if (cVar4 != '\0') goto LAB_00df3222;
  }
  pplVar7 = (int64_t **)&g_02802688;
LAB_00df3222:
  plVar6 = *pplVar7;
  if (plVar6 == (int64_t *)0x0) {
    plVar6 = (int64_t *)0x0;
  }
  else if (*(char *)(pplVar7 + 1) == '\0') {
    FUN_00d50b00();
  }
  else {
    *(void*)(pplVar7 + 1) = 0;
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar6 != (int64_t *)0x0) {
    uVar9 = (**(code **)(*plVar6 + 0x18))();
    local_58 = '\0';
    local_50 = *arg1;
    local_48 = '\0';
    local_60 = plVar6;
    FUN_00df3650(uVar9,&local_50);
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  *this_ptr = plVar6;
  *(void*)(this_ptr + 1) = 1;
  FUN_00d50b20();
  return;
}

