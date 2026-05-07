// Function: FUN_00502230
// Address: 00502230
// Size: 1082 bytes
// Class: MDEditorViewController
// String references:
//   "MDEditorViewController"
// === MDEditorViewController properties ===
//   MUEditTimelineMode _tempoEditorMode
//   MDEditMode      _editMode
//   MDEditMode      _lastEditMode


void FUN_00502230(uint64_t param_1,int param_2)

{
  int64_t *plVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  int64_t *plVar5;
  int64_t *this_ptr;
  int64_t **pplVar6;
  int64_t *plVar7;
  uint32_t uVar8;
  uint32_t extraout_XMM0_Da;
  uint32_t extraout_XMM0_Da_00;
  int64_t *local_48;
  char local_40 [8];
  char local_38 [8];
  
  pplVar6 = &local_48;
  FUN_01d98320();
  plVar1 = local_48;
  FUN_00275460();
  if (plVar1 == (int64_t *)0x0) {
LAB_00502282:
    pplVar6 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar2 = FUN_00e85ea0();
    if (cVar2 == '\0') goto LAB_00502282;
  }
  plVar1 = *pplVar6;
  if (*(char *)(pplVar6 + 1) == '\0') {
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar6 + 1) = 0;
  }
  if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 != (int64_t *)0x0) {
    if (param_2 != 0) {
      if (this_ptr != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      local_38[0] = '\0';
      plVar7 = this_ptr;
      do {
        uVar8 = (**(code **)(*plVar7 + 0x370))();
        plVar5 = local_48;
        if (local_48 == plVar7) {
          if (((local_38[0] == '\0') && (local_48 != (int64_t *)0x0)) && (local_40[0] != '\0')) {
            local_38[0] = '\x01';
            goto LAB_00502357;
          }
        }
        else {
          if (local_40[0] == '\0') {
            if (local_38[0] == '\0') {
              pcVar4 = local_38;
            }
            else {
              uVar8 = FUN_00d50b20();
              pcVar4 = local_38;
            }
          }
          else {
            if (local_38[0] != '\0') {
              uVar8 = FUN_00d50b20();
            }
            local_38[0] = '\x01';
            plVar7 = plVar5;
LAB_00502357:
            local_38[0] = '\x01';
            pcVar4 = local_40;
            plVar5 = plVar7;
          }
          *pcVar4 = '\0';
          plVar7 = plVar5;
        }
        if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
          uVar8 = FUN_00d50b20();
        }
        if ((g_026f7020 == '\0') &&
           (iVar3 = ___cxa_guard_acquire(), uVar8 = extraout_XMM0_Da_00, iVar3 != 0)) {
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
          uVar8 = ___cxa_guard_release();
        }
        plVar5 = &g_02802688;
        if (plVar7 != (int64_t *)0x0) {
          (**(code **)(*plVar7 + 0x360))();
          cVar2 = FUN_00e85ea0();
          plVar5 = (int64_t *)&stack0xffffffffffffffa0;
          uVar8 = extraout_XMM0_Da;
          if (cVar2 == '\0') {
            plVar5 = &g_02802688;
          }
        }
        if (*plVar5 != 0) {
          if ((local_38[0] == '\0') && (plVar7 != (int64_t *)0x0)) {
            uVar8 = FUN_00d50b00();
          }
          if (this_ptr == (int64_t *)0x0) goto LAB_005024ee;
          goto LAB_005024e6;
        }
      } while (plVar7 != (int64_t *)0x0);
      plVar7 = (int64_t *)0x0;
      if (this_ptr != (int64_t *)0x0) {
LAB_005024e6:
        uVar8 = FUN_00d50b20();
      }
LAB_005024ee:
      if (plVar7 != (int64_t *)0x0) {
        FUN_0023af30(uVar8,0);
        FUN_0023c090();
        FUN_0022da60();
        (**(code **)(*local_48 + 0x648))();
        if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
      }
    }
    FUN_01e42030();
    if (local_40[0] == '\0') {
      if (local_48 != (int64_t *)0x0) {
        FUN_00d50b00();
        if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        goto LAB_0050257c;
      }
    }
    else if (local_48 != (int64_t *)0x0) {
LAB_0050257c:
      FUN_00d50b20();
    }
  }
  FUN_01e40eb0();
  if ((local_48 == (int64_t *)0x0) && (param_2 == 3)) {
    iVar3 = FUN_01ad3ca0();
    if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (iVar3 != -1000000) {
      (**(code **)(*this_ptr + 0x960))();
      goto LAB_00502625;
    }
  }
  else if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (param_2 != 3) {
    FUN_01e40eb0();
    plVar7 = local_48;
    if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar7 != (int64_t *)0x0) {
      (**(code **)(*this_ptr + 0x968))();
    }
  }
LAB_00502625:
  FUN_0197b900();
  (**(code **)(&g_000015b8 + *local_48))();
  if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}

