// Function: FUN_003372c0
// Address: 003372c0
// Size: 542 bytes
// Class: MDEditorViewController
// === MDEditorViewController properties ===
//   MUEditTimelineMode _tempoEditorMode
//   MDEditMode      _editMode
//   MDEditMode      _lastEditMode


void FUN_003372c0(void)

{
  int64_t *plVar1;
  int64_t *plVar2;
  int64_t lVar3;
  char cVar4;
  int64_t **pplVar5;
  int64_t *this_ptr;
  int64_t lVar6;
  int64_t local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  int64_t *local_48;
  char local_40;
  char local_38 [8];
  
  (**(code **)(*this_ptr + 0x4a0))();
  if (local_78 == '\0') {
    if (local_80 == 0) {
      return;
    }
    FUN_00d50b00();
  }
  else if (local_80 == 0) {
    return;
  }
  if (0 < *(int *)(local_80 + 0xc)) {
    lVar6 = 0;
    do {
      plVar1 = *(int64_t **)(*(int64_t *)(local_80 + 0x10) + lVar6 * 8);
      local_48 = plVar1;
      FUN_000f5df0();
      pplVar5 = (int64_t **)&g_02802688;
      if (plVar1 != (int64_t *)0x0) {
        (**(code **)(*plVar1 + 0x360))();
        cVar4 = FUN_00e85ea0();
        pplVar5 = &local_48;
        if (cVar4 == '\0') {
          pplVar5 = (int64_t **)&g_02802688;
        }
      }
      if (*pplVar5 != (int64_t *)0x0) {
        FUN_01e4ec80();
        lVar3 = g_02702958;
        if (g_02702958 != 0) {
          FUN_00d50b00();
        }
        FUN_000175c0();
        plVar2 = local_48;
        FUN_00053ac0();
        pplVar5 = (int64_t **)&g_02802688;
        if (plVar2 != (int64_t *)0x0) {
          (**(code **)(*plVar2 + 0x360))();
          cVar4 = FUN_00e85ea0();
          pplVar5 = &local_48;
          if (cVar4 == '\0') {
            pplVar5 = (int64_t **)&g_02802688;
          }
        }
        plVar2 = *pplVar5;
        local_38[0] = *(char *)(pplVar5 + 1);
        pplVar5 = pplVar5 + 1;
        if (local_38[0] == '\0') {
          pplVar5 = (int64_t **)local_38;
        }
        *(void*)pplVar5 = 0;
        if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (lVar3 != 0) {
          FUN_00d50b20();
        }
        if ((local_88 != '\0') && (local_90 != 0)) {
          FUN_00d50b20();
        }
        if (plVar2 != (int64_t *)0x0) {
          FUN_00d45ad0();
          (**(code **)(*plVar1 + 0x918))();
          if (local_38[0] != '\0') {
            FUN_00d50b20();
          }
        }
      }
      lVar6 = lVar6 + 1;
    } while ((int)lVar6 < *(int *)(local_80 + 0xc));
  }
  FUN_0033c540();
  FUN_00d50b20();
  return;
}

