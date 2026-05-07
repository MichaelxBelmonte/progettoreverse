// Function: FUN_0192e4a0
// Address: 0192e4a0
// Size: 894 bytes
// Class: MUDetectionEditorView
// String references:
//   "MUDetectionEditorView"
// === MUDetectionEditorView properties ===
//   MUDetectionEditorRenderStyle _renderStyle


void FUN_0192e4a0(void)

{
  int64_t *plVar1;
  char cVar2;
  int iVar3;
  void *pvVar4;
  void* pVar5;
  int64_t **pplVar6;
  int64_t **pplVar7;
  int64_t lVar8;
  int64_t *this_ptr;
  bool bVar9;
  int64_t local_58;
  char local_50;
  int64_t *local_48;
  char local_40;
  char local_38 [8];
  
  pplVar7 = &local_48;
  FUN_01a58dc0();
  plVar1 = local_48;
  if ((g_02732c90 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
    g_02714a48 = FUN_000914a0();
    g_02714a30 = "MUDetectionEditorView";
    g_02714a38 = 0x600;
    g_02714a40 = FUN_0034de90;
    g_02714a50 = 0;
    ram_0000000002714a58 = 0;
    g_02714a60 = 0;
    g_02714ad8 = 0;
    ram_0000000002714ae0 = 0;
    g_02714ae8 = 0;
    g_02714aea = 1;
    g_02714a68 = 0;
    ram_0000000002714a70 = 0;
    g_02714a78 = 0;
    ram_0000000002714a80 = 0;
    g_02714a88 = 0;
    ram_0000000002714a90 = 0;
    g_02714a98 = 0;
    ram_0000000002714aa0 = 0;
    g_02714aa8 = 0;
    ram_0000000002714ab0 = 0;
    g_02714ab8 = 0;
    ram_0000000002714ac0 = 0;
    g_02714ac8 = 0;
    ram_0000000002714ad0 = 0;
    g_02714af3 = 0;
    g_02714aeb = 0;
    ___cxa_guard_release();
  }
  if (plVar1 == (int64_t *)0x0) {
LAB_0192e4fa:
    pplVar7 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar2 = FUN_00e85ea0();
    if (cVar2 == '\0') goto LAB_0192e4fa;
  }
  plVar1 = *pplVar7;
  local_38[0] = *(char *)(pplVar7 + 1);
  pplVar6 = (int64_t **)local_38;
  if (local_38[0] != '\0') {
    pplVar6 = pplVar7 + 1;
  }
  *(void*)pplVar6 = 0;
  if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  pVar5 = (void*)pplVar6;
  if (plVar1 == (int64_t *)0x0) {
LAB_0192e716:
    FUN_01a593c0();
  }
  else {
    (**(code **)(&UNK_00001668 + *plVar1))();
    pvVar4 = _pthread_getspecific(pVar5);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    iVar3 = FUN_01326de0();
    bVar9 = true;
    if (iVar3 != 2) {
      (**(code **)(&UNK_00001668 + *plVar1))();
      pvVar4 = _pthread_getspecific(pVar5);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      iVar3 = FUN_01326de0();
      bVar9 = iVar3 == 4;
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
    }
    if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    lVar8 = g_026fb9e0;
    if (bVar9) {
      *(void*)(this_ptr + 1) = 0;
      if (lVar8 == 0) {
LAB_0192e729:
        lVar8 = 0;
      }
      else {
        FUN_00d50b00();
      }
    }
    else {
      (**(code **)(&UNK_00001668 + *plVar1))();
      pvVar4 = _pthread_getspecific(pVar5);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      iVar3 = FUN_01326de0();
      bVar9 = true;
      if (iVar3 != 3) {
        (**(code **)(&UNK_00001668 + *plVar1))();
        pvVar4 = _pthread_getspecific(pVar5);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        iVar3 = FUN_01326de0();
        bVar9 = iVar3 == 1;
        if ((local_50 != '\0') && (local_58 != 0)) {
          FUN_00d50b20();
        }
      }
      if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      lVar8 = g_026fb9d0;
      if (!bVar9) goto LAB_0192e716;
      *(void*)(this_ptr + 1) = 0;
      if (lVar8 == 0) goto LAB_0192e729;
      FUN_00d50b00();
    }
    *this_ptr = lVar8;
    *(void*)(this_ptr + 1) = 1;
  }
  if ((local_38[0] != '\0') && (plVar1 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  return;
}

