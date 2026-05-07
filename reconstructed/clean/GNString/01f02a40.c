// Function: FUN_01f02a40
// Address: 01f02a40
// Size: 640 bytes
// Class: GNString
// String references:
//   "GNString"
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_01f02a40(uint64_t param_1,int64_t *param_2)

{
  int64_t *plVar1;
  char cVar2;
  int iVar3;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t **pplVar4;
  uint32_t uVar5;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t *local_40;
  char local_38;
  
  if (arg1[0x10] == 0) {
LAB_01f02b7b:
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
    return;
  }
  uVar5 = (**(code **)(*arg1 + 0x5c8))();
  local_50 = local_60;
  local_48 = 0;
  if (local_58 == '\0') {
    if (local_60 != 0) {
      uVar5 = FUN_00d50b00();
    }
  }
  else {
    local_58 = '\0';
  }
  local_48 = '\x01';
  uVar5 = FUN_000175c0(uVar5,&local_50);
  plVar1 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != (int64_t *)0x0) && (uVar5 = FUN_00d50b00(), local_38 != '\0')) &&
       (local_40 != (int64_t *)0x0)) {
      uVar5 = FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    uVar5 = FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    uVar5 = FUN_00d50b20();
  }
  if (plVar1 == (int64_t *)0x0) goto LAB_01f02b7b;
  local_70 = *param_2;
  local_68 = '\0';
  pplVar4 = &local_40;
  FUN_000175c0(uVar5,&local_70);
  plVar1 = local_40;
  if ((g_026fd0c0 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
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
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x360))();
    cVar2 = FUN_00e85ea0();
    if (cVar2 != '\0') goto LAB_01f02b53;
  }
  pplVar4 = (int64_t **)&g_02802688;
LAB_01f02b53:
  *(void*)(this_ptr + 1) = 0;
  plVar1 = *pplVar4;
  if (*(char *)(pplVar4 + 1) == '\0') {
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    *this_ptr = (int64_t)plVar1;
    *(void*)(this_ptr + 1) = 1;
  }
  else {
    *this_ptr = (int64_t)plVar1;
    *(void*)(this_ptr + 1) = 1;
    *(void*)(pplVar4 + 1) = 0;
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}

