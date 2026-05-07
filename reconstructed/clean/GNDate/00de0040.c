// Function: FUN_00de0040
// Address: 00de0040
// Size: 848 bytes
// Class: GNDate
// String references:
//   "GNDate"
//   "GNString"

void FUN_00de0040(uint64_t param_1,int64_t *param_2)

{
  int64_t lVar1;
  int64_t lVar2;
  char cVar3;
  int iVar4;
  int64_t *plVar5;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  char local_40;
  char local_31;
  
  plVar5 = (int64_t *)*param_2;
  if (plVar5 == (int64_t *)0x0) {
    FUN_00d8ede0();
    return;
  }
  if ((g_026d02f0 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
    g_026d0240 = FUN_00d4fe50();
    g_026d0228 = "GNDate";
    g_026d0230 = 0x18;
    g_026d0238 = FUN_000378e0;
    g_026d0248 = 0;
    ram_00000000026d0250 = 0;
    g_026d0258 = 0;
    ram_00000000026d0260 = 0;
    g_026d0268 = 0;
    ram_00000000026d0270 = 0;
    g_026d0278 = 0;
    ram_00000000026d0280 = 0;
    g_026d0288 = 0;
    ram_00000000026d0290 = 0;
    g_026d0298 = 0;
    ram_00000000026d02a0 = 0;
    g_026d02a8 = 0;
    ram_00000000026d02b0 = 0;
    g_026d02b8 = 0;
    ram_00000000026d02c0 = 0;
    g_026d02c8 = 0;
    ram_00000000026d02d0 = 0;
    g_026d02d8 = 0;
    ram_00000000026d02e0 = 0;
    g_026d02e8 = 0;
    ___cxa_guard_release();
  }
  (**(code **)(*plVar5 + 0x360))();
  cVar3 = FUN_00e85ea0();
  plVar5 = param_2;
  if (cVar3 == '\0') {
    plVar5 = &g_02802688;
  }
  local_31 = (char)plVar5[1];
  if ((local_31 != '\0') && (*plVar5 != 0)) {
    FUN_00d50b00();
LAB_00de00cb:
    (**(code **)(*arg1 + 0x3d0))();
    local_40 = 0;
    if (local_60 == '\0') {
      if (local_68 != 0) {
        FUN_00d50b00();
      }
      lVar1 = arg1[2];
    }
    else {
      lVar1 = arg1[2];
    }
    local_40 = '\x01';
    local_48 = local_68;
    if (lVar1 != 0) {
      local_40 = '\x01';
      local_50 = 0;
      FUN_00d50b00();
    }
    local_50 = '\x01';
    local_58 = lVar1;
    FUN_00c94a50(&local_58,&local_48);
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if (local_31 != '\0') {
      FUN_00d50b20();
    }
    return;
  }
  if (*plVar5 != 0) goto LAB_00de00cb;
  plVar5 = (int64_t *)*param_2;
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
    if (cVar3 != '\0') goto LAB_00de01d7;
  }
  param_2 = &g_02802688;
LAB_00de01d7:
  lVar1 = *param_2;
  lVar2 = param_2[1];
  if (((char)lVar2 == '\0') || (lVar1 == 0)) {
    if (lVar1 == 0) {
      *(void*)(this_ptr + 1) = 0;
      *this_ptr = 0;
      return;
    }
    *(void*)(this_ptr + 1) = 0;
    if ((char)lVar2 == '\0') {
      FUN_00d50b00();
    }
  }
  else {
    FUN_00d50b00();
    *(void*)(this_ptr + 1) = 0;
  }
  *this_ptr = lVar1;
  *(void*)(this_ptr + 1) = 1;
  return;
}

