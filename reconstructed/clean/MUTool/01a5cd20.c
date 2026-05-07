// Function: FUN_01a5cd20
// Address: 01a5cd20
// Size: 562 bytes
// Class: MUTool
// String references:
//   "MUTool"

void FUN_01a5cd20(void)

{
  int64_t *plVar1;
  char cVar2;
  int iVar3;
  int64_t *arg1;
  int64_t this_ptr;
  int64_t **pplVar4;
  uint32_t uVar5;
  uint32_t extraout_XMM0_Da;
  uint32_t extraout_XMM0_Da_00;
  int64_t *local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  
  uVar5 = FUN_01e26150();
  local_60 = g_026f6e60;
  if (g_026f6e60 != 0) {
    uVar5 = FUN_00d50b00();
  }
  local_58 = '\x01';
  pplVar4 = &local_80;
  uVar5 = FUN_000175c0(uVar5,&local_60);
  plVar1 = local_80;
  if ((g_0272ffd0 == '\0') &&
     (iVar3 = ___cxa_guard_acquire(), uVar5 = extraout_XMM0_Da_00, iVar3 != 0)) {
    g_026f8f48 = FUN_00d4fe50();
    g_026f8f30 = "MUTool";
    g_026f8f38 = 0x38;
    g_026f8f40 = FUN_00274e70;
    g_026f8f50 = 0;
    ram_00000000026f8f58 = 0;
    g_026f8f60 = 0;
    g_026f8fd8 = 0;
    ram_00000000026f8fe0 = 0;
    g_026f8fe8 = 0;
    g_026f8fea = 1;
    g_026f8f68 = 0;
    ram_00000000026f8f70 = 0;
    g_026f8f78 = 0;
    ram_00000000026f8f80 = 0;
    g_026f8f88 = 0;
    ram_00000000026f8f90 = 0;
    g_026f8f98 = 0;
    ram_00000000026f8fa0 = 0;
    g_026f8fa8 = 0;
    ram_00000000026f8fb0 = 0;
    g_026f8fb8 = 0;
    ram_00000000026f8fc0 = 0;
    g_026f8fc8 = 0;
    ram_00000000026f8fd0 = 0;
    g_026f8ff3 = 0;
    g_026f8feb = 0;
    uVar5 = ___cxa_guard_release();
  }
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x360))();
    cVar2 = FUN_00e85ea0();
    uVar5 = extraout_XMM0_Da;
    if (cVar2 != '\0') goto LAB_01a5cdb4;
  }
  pplVar4 = (int64_t **)&g_02802688;
LAB_01a5cdb4:
  plVar1 = *pplVar4;
  if (*(char *)(pplVar4 + 1) == '\0') {
    if (plVar1 != (int64_t *)0x0) {
      uVar5 = FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar4 + 1) = 0;
  }
  if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
    uVar5 = FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    uVar5 = FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    uVar5 = FUN_00d50b20();
  }
  if (plVar1 != (int64_t *)0x0) {
    if (this_ptr != 0) {
      uVar5 = FUN_00d50b00();
    }
    local_50 = *arg1;
    local_48 = '\0';
    (**(code **)(*plVar1 + 0x480))(uVar5,&local_50);
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if (this_ptr != 0) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  return;
}

