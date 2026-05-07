// Function: FUN_007f4cf0
// Address: 007f4cf0
// Size: 658 bytes
// Class: MDEditorScrollView
// String references:
//   "MDEditorScrollView"
// === MDEditorScrollView properties ===
//   MUScaleRulerViewDisplayMode _scaleRulerViewDisplayMode


void* FUN_007f4cf0(void)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  int64_t *plVar4;
  int64_t *arg1;
  void*this_ptr;
  int64_t *plVar5;
  int64_t *local_48;
  char local_40 [8];
  char local_38 [8];
  
  if (arg1 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  local_38[0] = '\0';
  plVar5 = arg1;
  do {
    (**(code **)(*plVar5 + 0x370))();
    if (local_48 == plVar5) {
      if (((local_38[0] == '\0') && (local_48 != (int64_t *)0x0)) && (local_40[0] != '\0')) {
        local_38[0] = '\x01';
        goto LAB_007f4d87;
      }
    }
    else {
      plVar5 = local_48;
      if (local_40[0] == '\0') {
        if (local_38[0] == '\0') {
          pcVar3 = local_38;
        }
        else {
          FUN_00d50b20();
          pcVar3 = local_38;
        }
      }
      else {
        if (local_38[0] != '\0') {
          FUN_00d50b20();
        }
        local_38[0] = '\x01';
LAB_007f4d87:
        local_38[0] = '\x01';
        pcVar3 = local_40;
      }
      *pcVar3 = '\0';
    }
    if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((g_02709e70 == '\0') && (iVar2 = ___cxa_guard_acquire(), iVar2 != 0)) {
      g_026f8cd8 = FUN_00074a70();
      g_026f8cc0 = "MDEditorScrollView";
      g_026f8cc8 = 0x260;
      g_026f8cd0 = FUN_000749b0;
      g_026f8ce0 = 0;
      ram_00000000026f8ce8 = 0;
      g_026f8cf0 = 0;
      g_026f8d68 = 0;
      ram_00000000026f8d70 = 0;
      g_026f8d78 = 0;
      g_026f8d7a = 1;
      g_026f8cf8 = 0;
      ram_00000000026f8d00 = 0;
      g_026f8d08 = 0;
      ram_00000000026f8d10 = 0;
      g_026f8d18 = 0;
      ram_00000000026f8d20 = 0;
      g_026f8d28 = 0;
      ram_00000000026f8d30 = 0;
      g_026f8d38 = 0;
      ram_00000000026f8d40 = 0;
      g_026f8d48 = 0;
      ram_00000000026f8d50 = 0;
      g_026f8d58 = 0;
      ram_00000000026f8d60 = 0;
      g_026f8d83 = 0;
      g_026f8d7b = 0;
      ___cxa_guard_release();
    }
    plVar4 = &g_02802688;
    if (plVar5 != (int64_t *)0x0) {
      (**(code **)(*plVar5 + 0x360))();
      cVar1 = FUN_00e85ea0();
      plVar4 = (int64_t *)&stack0xffffffffffffffa8;
      if (cVar1 == '\0') {
        plVar4 = &g_02802688;
      }
    }
    if (*plVar4 != 0) {
      if ((local_38[0] == '\0') && (plVar5 != (int64_t *)0x0)) {
        FUN_00d50b00();
      }
      if (arg1 == (int64_t *)0x0) goto LAB_007f4f19;
      goto LAB_007f4f14;
    }
  } while (plVar5 != (int64_t *)0x0);
  plVar5 = (int64_t *)0x0;
  if (arg1 != (int64_t *)0x0) {
LAB_007f4f14:
    FUN_00d50b20();
  }
LAB_007f4f19:
  FUN_0197b900();
  *(void*)(this_ptr + 1) = 0;
  if (local_40[0] == '\0') {
    if (local_48 != (int64_t *)0x0) {
      FUN_00d50b00();
      *this_ptr = local_48;
      *(void*)(this_ptr + 1) = 1;
      if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_007f4f3c;
    }
    local_48 = (int64_t *)0x0;
  }
  *this_ptr = local_48;
  *(void*)(this_ptr + 1) = 1;
LAB_007f4f3c:
  if (plVar5 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return this_ptr;
}

