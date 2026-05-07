// Function: FUN_00073fd0
// Address: 00073fd0
// Size: 1188 bytes
// Class: MDEditorScrollView
// String references:
//   "MDEditorScrollView"
//   "MDEditorViewController"
// === MDEditorScrollView properties ===
//   MUScaleRulerViewDisplayMode _scaleRulerViewDisplayMode


void FUN_00073fd0(void)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  int64_t *plVar4;
  int64_t *this_ptr;
  int64_t *plVar5;
  int64_t *local_48;
  char local_40 [8];
  char local_38 [8];
  
  if (this_ptr != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  local_38[0] = '\0';
  plVar5 = this_ptr;
  do {
    (**(code **)(*plVar5 + 0x370))();
    if (local_48 == plVar5) {
      if (((local_38[0] == '\0') && (local_48 != (int64_t *)0x0)) && (local_40[0] != '\0')) {
        local_38[0] = '\x01';
        goto LAB_00074067;
      }
    }
    else {
      if (local_40[0] == '\0') {
        if (local_38[0] == '\0') {
          pcVar3 = local_38;
          plVar5 = local_48;
        }
        else {
          FUN_00d50b20();
          pcVar3 = local_38;
          plVar5 = local_48;
        }
      }
      else {
        if (local_38[0] != '\0') {
          FUN_00d50b20();
        }
        local_38[0] = '\x01';
        plVar5 = local_48;
LAB_00074067:
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
      plVar4 = (int64_t *)&stack0xffffffffffffffb0;
      if (cVar1 == '\0') {
        plVar4 = &g_02802688;
      }
    }
    if (*plVar4 != 0) {
      if ((local_38[0] == '\0') && (plVar5 != (int64_t *)0x0)) {
        FUN_00d50b00();
      }
      if (this_ptr == (int64_t *)0x0) goto LAB_000741f1;
      goto LAB_000741ec;
    }
  } while (plVar5 != (int64_t *)0x0);
  plVar5 = (int64_t *)0x0;
  if (this_ptr != (int64_t *)0x0) {
LAB_000741ec:
    FUN_00d50b20();
  }
LAB_000741f1:
  if (plVar5 != (int64_t *)0x0) {
    local_38[0] = '\0';
    do {
      (**(code **)(*plVar5 + 0x370))();
      if (local_48 == plVar5) {
        if (((local_38[0] == '\0') && (local_48 != (int64_t *)0x0)) && (local_40[0] != '\0')) {
          local_38[0] = '\x01';
          goto LAB_00074267;
        }
      }
      else {
        if (local_40[0] == '\0') {
          if (local_38[0] == '\0') {
            pcVar3 = local_38;
            plVar5 = local_48;
          }
          else {
            FUN_00d50b20();
            pcVar3 = local_38;
            plVar5 = local_48;
          }
        }
        else {
          if (local_38[0] != '\0') {
            FUN_00d50b20();
          }
          local_38[0] = '\x01';
          plVar5 = local_48;
LAB_00074267:
          local_38[0] = '\x01';
          pcVar3 = local_40;
        }
        *pcVar3 = '\0';
      }
      if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((g_026f7020 == '\0') && (iVar2 = ___cxa_guard_acquire(), iVar2 != 0)) {
        g_0270aa58 = FUN_00015ff0();
        g_0270aa40 = "MDEditorViewController";
        g_0270aa48 = 0x1e8;
        g_0270aa50 = FUN_00074eb0;
        g_0270aa60 = 0;
        ram_000000000270aa68 = 0;
        g_0270aa70 = 0;
        g_0270aae8 = 0;
        ram_000000000270aaf0 = 0;
        g_0270aaf8 = 0;
        g_0270aafa = 1;
        g_0270aa78 = 0;
        ram_000000000270aa80 = 0;
        g_0270aa88 = 0;
        ram_000000000270aa90 = 0;
        g_0270aa98 = 0;
        ram_000000000270aaa0 = 0;
        g_0270aaa8 = 0;
        ram_000000000270aab0 = 0;
        g_0270aab8 = 0;
        ram_000000000270aac0 = 0;
        g_0270aac8 = 0;
        ram_000000000270aad0 = 0;
        g_0270aad8 = 0;
        ram_000000000270aae0 = 0;
        g_0270ab03 = 0;
        g_0270aafb = 0;
        ___cxa_guard_release();
      }
      plVar4 = &g_02802688;
      if (plVar5 != (int64_t *)0x0) {
        (**(code **)(*plVar5 + 0x360))();
        cVar1 = FUN_00e85ea0();
        plVar4 = (int64_t *)&stack0xffffffffffffffb0;
        if (cVar1 == '\0') {
          plVar4 = &g_02802688;
        }
      }
      if (*plVar4 != 0) {
        if ((local_38[0] == '\0') && (plVar5 != (int64_t *)0x0)) {
          FUN_00d50b00();
        }
        else if (plVar5 == (int64_t *)0x0) break;
        plVar5 = (int64_t *)this_ptr[0x27];
        FUN_0024a880();
        (**(code **)(*plVar5 + 0x918))();
        plVar5 = (int64_t *)this_ptr[0x27];
        FUN_00249a70();
        (**(code **)(*plVar5 + 0x998))();
        plVar5 = (int64_t *)this_ptr[0x28];
        FUN_0024a160();
        (**(code **)(*plVar5 + 0x918))();
        plVar5 = (int64_t *)this_ptr[0x28];
        FUN_00249a60();
        (**(code **)(*plVar5 + 0x998))();
        FUN_00d50b20();
        break;
      }
    } while (plVar5 != (int64_t *)0x0);
    FUN_00d50b20();
  }
  return;
}

