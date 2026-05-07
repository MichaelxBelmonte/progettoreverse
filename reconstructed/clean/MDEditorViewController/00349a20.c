// Function: FUN_00349a20
// Address: 00349a20
// Size: 926 bytes
// Class: MDEditorViewController
// String references:
//   "MDEditorViewController"
// === MDEditorViewController properties ===
//   MUEditTimelineMode _tempoEditorMode
//   MDEditMode      _editMode
//   MDEditMode      _lastEditMode


void FUN_00349a20(void)

{
  int64_t lVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  int64_t *plVar5;
  int64_t *this_ptr;
  int64_t *plVar6;
  int64_t *local_48;
  char local_40 [8];
  char local_38 [8];
  
  FUN_00d3ecc0();
  if ((((local_40[0] == '\0') && (local_48 != (int64_t *)0x0)) &&
      (FUN_00d50b00(), local_40[0] != '\0')) && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  lVar1 = g_02702db8;
  if (g_02702db8 != 0) {
    FUN_00d50b00();
  }
  cVar2 = (**(code **)(*local_48 + 0x50))();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if (cVar2 != '\0') {
    if (this_ptr != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    local_38[0] = '\0';
    plVar6 = this_ptr;
    do {
      (**(code **)(*plVar6 + 0x370))();
      if (local_48 == plVar6) {
        if (((local_38[0] == '\0') && (local_48 != (int64_t *)0x0)) && (local_40[0] != '\0')) {
          local_38[0] = '\x01';
          goto LAB_00349b57;
        }
      }
      else {
        plVar6 = local_48;
        if (local_40[0] == '\0') {
          if (local_38[0] == '\0') {
            pcVar4 = local_38;
          }
          else {
            FUN_00d50b20();
            pcVar4 = local_38;
          }
        }
        else {
          if (local_38[0] != '\0') {
            FUN_00d50b20();
          }
          local_38[0] = '\x01';
LAB_00349b57:
          local_38[0] = '\x01';
          pcVar4 = local_40;
        }
        *pcVar4 = '\0';
      }
      if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((g_026f7020 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
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
      plVar5 = &g_02802688;
      if (plVar6 != (int64_t *)0x0) {
        (**(code **)(*plVar6 + 0x360))();
        cVar2 = FUN_00e85ea0();
        plVar5 = (int64_t *)&stack0xffffffffffffffa0;
        if (cVar2 == '\0') {
          plVar5 = &g_02802688;
        }
      }
      if (*plVar5 != 0) {
        if ((local_38[0] == '\0') && (plVar6 != (int64_t *)0x0)) {
          FUN_00d50b00();
        }
        goto LAB_00349ccb;
      }
    } while (plVar6 != (int64_t *)0x0);
    plVar6 = (int64_t *)0x0;
LAB_00349ccb:
    if (this_ptr != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if (plVar6 != (int64_t *)0x0) {
      FUN_00262a50();
      if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (local_48 != (int64_t *)0x0) {
        FUN_00262a50();
        cVar2 = FUN_004f3eb0();
        if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (cVar2 != '\0') {
          FUN_00d50b20();
          goto LAB_00349da9;
        }
      }
      FUN_00d50b20();
    }
  }
  FUN_01931100();
LAB_00349da9:
  if (local_48 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}

