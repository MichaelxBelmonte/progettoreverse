// Function: FUN_003a1100
// Address: 003a1100
// Size: 757 bytes
// Class: MDEditorViewController
// String references:
//   "MDEditorViewController"
// === MDEditorViewController properties ===
//   MUEditTimelineMode _tempoEditorMode
//   MDEditMode      _editMode
//   MDEditMode      _lastEditMode


uint32_t FUN_003a1100(uint64_t param_1,uint8_t param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  int64_t *plVar4;
  int64_t *this_ptr;
  int64_t *plVar5;
  uint32_t extraout_XMM0_Da;
  uint32_t uVar6;
  int64_t *local_50;
  char local_48 [15];
  char local_39;
  char local_38 [8];
  
  local_39 = FUN_00392f00();
  if (this_ptr != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  local_38[0] = '\0';
  plVar5 = this_ptr;
  do {
    (**(code **)(*plVar5 + 0x370))();
    if (local_50 == plVar5) {
      if (((local_38[0] == '\0') && (local_50 != (int64_t *)0x0)) && (local_48[0] != '\0')) {
        local_38[0] = '\x01';
        goto LAB_003a11a7;
      }
    }
    else {
      plVar5 = local_50;
      if (local_48[0] == '\0') {
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
LAB_003a11a7:
        local_38[0] = '\x01';
        pcVar3 = local_48;
      }
      *pcVar3 = '\0';
    }
    if ((local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
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
      plVar4 = (int64_t *)&stack0xffffffffffffffa0;
      if (cVar1 == '\0') {
        plVar4 = &g_02802688;
      }
    }
    if (*plVar4 != 0) {
      if ((local_38[0] == '\0') && (plVar5 != (int64_t *)0x0)) {
        FUN_00d50b00();
      }
      cVar1 = local_39;
      if (this_ptr == (int64_t *)0x0) goto LAB_003a133d;
      goto LAB_003a1335;
    }
    if (plVar5 == (int64_t *)0x0) {
      plVar5 = (int64_t *)0x0;
      cVar1 = local_39;
      if (this_ptr != (int64_t *)0x0) {
LAB_003a1335:
        cVar1 = local_39;
        FUN_00d50b20();
      }
LAB_003a133d:
      if ((plVar5 != (int64_t *)0x0) && (cVar1 == '\x01')) {
        FUN_00228b30();
      }
      if (plVar5 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      FUN_01c93070();
      FUN_01f27fe0();
      cVar1 = (**(code **)(*local_50 + 0x450))();
      uVar6 = extraout_XMM0_Da;
      if ((local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
        uVar6 = FUN_00d50b20();
      }
      if (cVar1 == '\0') {
        uVar6 = FUN_01c93080();
      }
      uVar6 = FUN_019c3840(uVar6,param_2);
      return uVar6;
    }
  } while( true );
}

