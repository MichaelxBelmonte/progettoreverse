// Function: FUN_019280d0
// Address: 019280d0
// Size: 654 bytes
// Class: MUDetectionEditorView
// String references:
//   "MUDetectionEditorView"
// === MUDetectionEditorView properties ===
//   MUDetectionEditorRenderStyle _renderStyle


void FUN_019280d0(void* param_1)

{
  int64_t *plVar1;
  char cVar2;
  int iVar3;
  void *pvVar4;
  void*this_ptr;
  int64_t **pplVar5;
  bool bVar6;
  int64_t *local_78;
  char local_70;
  int64_t *local_68;
  char local_60;
  int64_t *local_58;
  char local_50;
  int64_t local_48;
  char local_40;
  int64_t local_38;
  char local_30;
  
  pplVar5 = &local_78;
  FUN_01a58dc0();
  plVar1 = local_78;
  if ((g_02732c90 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
    g_02714a48 = FUN_000914a0();
    g_02714a30 = "MUDetectionEditorView";
    g_02714a38 = 0x600;
    param_1 = 0x34de90;
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
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x360))();
    cVar2 = FUN_00e85ea0();
    if (cVar2 != '\0') goto LAB_0192812e;
  }
  pplVar5 = (int64_t **)&g_02802688;
LAB_0192812e:
  if (*pplVar5 == (int64_t *)0x0) {
    bVar6 = false;
  }
  else {
    FUN_01a58dc0();
    (**(code **)(&UNK_00001668 + *local_68))();
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    iVar3 = FUN_01326de0();
    bVar6 = true;
    if (iVar3 != 2) {
      FUN_01a58dc0();
      (**(code **)(&UNK_00001668 + *local_58))();
      pvVar4 = _pthread_getspecific(param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      iVar3 = FUN_01326de0();
      bVar6 = iVar3 == 4;
      if ((local_30 != '\0') && (local_38 != 0)) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (bVar6) {
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
  }
  else {
    FUN_01a58be0();
  }
  return;
}

