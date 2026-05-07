// Function: FUN_00161780
// Address: 00161780
// Size: 1389 bytes
// Class: MDEditorViewController
// String references:
//   "MDEditorViewController"
// === MDEditorViewController properties ===
//   MUEditTimelineMode _tempoEditorMode
//   MDEditMode      _editMode
//   MDEditMode      _lastEditMode


uint64_t FUN_00161780(uint64_t param_1,char param_2)

{
  int64_t lVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  void *pvVar5;
  void* pVar6;
  int64_t **pplVar7;
  int64_t this_ptr;
  int64_t *plVar8;
  int64_t *plVar9;
  char *pcVar10;
  int64_t local_b8;
  char local_b0;
  int64_t *local_a8;
  char local_a0;
  int64_t *local_98;
  char local_90;
  int64_t *local_88;
  char local_80;
  char local_78;
  undefined7 uStack_77;
  char local_70;
  int64_t *local_68;
  char local_60;
  int64_t *local_58;
  char local_50 [8];
  int64_t *local_48;
  char local_40 [8];
  char local_38 [8];
  
  cVar2 = (**(code **)(**(int64_t **)(this_ptr + 0xe0) + 0x9a0))();
  if ((cVar2 != '\0') && (param_2 != '\0')) {
    FUN_001616e0();
    iVar3 = *(int *)((int64_t)local_58 + 0xc);
    if (local_50[0] != '\0') {
      FUN_00d50b20();
    }
    if (iVar3 != 0) {
      FUN_01e561b0();
      FUN_01d8b220();
      local_88 = local_68;
      if (local_60 == '\0') {
        if (local_68 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_60 = '\0';
      }
      local_78 = '\0';
      local_48 = local_88;
      do {
        plVar9 = local_88;
        (**(code **)(*local_88 + 0x370))();
        plVar8 = local_58;
        if (local_58 == plVar9) {
          if (((local_78 == '\0') && (local_58 != (int64_t *)0x0)) && (local_50[0] != '\0')) {
            local_78 = '\x01';
            plVar8 = plVar9;
            goto LAB_00161897;
          }
        }
        else {
          local_88 = local_58;
          if (local_50[0] == '\0') {
            if (local_78 == '\0') {
              pcVar4 = &local_78;
            }
            else {
              FUN_00d50b20();
              pcVar4 = &local_78;
            }
          }
          else {
            if (local_78 != '\0') {
              FUN_00d50b20();
            }
            local_78 = '\x01';
LAB_00161897:
            local_78 = '\x01';
            pcVar4 = local_50;
          }
          *pcVar4 = '\0';
          plVar9 = plVar8;
        }
        if ((local_50[0] != '\0') && (local_58 != (int64_t *)0x0)) {
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
        pplVar7 = (int64_t **)&g_02802688;
        if (plVar9 != (int64_t *)0x0) {
          (**(code **)(*plVar9 + 0x360))();
          cVar2 = FUN_00e85ea0();
          pplVar7 = &local_88;
          if (cVar2 == '\0') {
            pplVar7 = (int64_t **)&g_02802688;
          }
        }
        plVar9 = local_88;
        if (*pplVar7 != (int64_t *)0x0) {
          if ((local_78 == '\0') && (local_88 != (int64_t *)0x0)) {
            FUN_00d50b00();
          }
          if (local_48 == (int64_t *)0x0) goto LAB_00161a2f;
          goto LAB_00161a2a;
        }
      } while (local_88 != (int64_t *)0x0);
      plVar9 = (int64_t *)0x0;
      if (local_48 != (int64_t *)0x0) {
LAB_00161a2a:
        FUN_00d50b20();
      }
LAB_00161a2f:
      pVar6 = (void*)pplVar7;
      if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_b0 != '\0') && (local_b8 != 0)) {
        FUN_00d50b20();
      }
      if (plVar9 != (int64_t *)0x0) {
        FUN_001616e0();
        FUN_00d23310();
        plVar9 = local_58;
        local_40[0] = local_50[0];
        pcVar4 = local_40;
        if (local_50[0] != '\0') {
          pcVar4 = local_50;
        }
        *pcVar4 = '\0';
        if ((local_50[0] != '\0') && (local_58 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        local_48 = plVar9;
        pvVar5 = _pthread_getspecific(pVar6);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01264240();
        local_a8 = local_68;
        local_a0 = 0;
        if (local_60 == '\0') {
          if (local_68 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_60 = '\0';
        }
        local_a0 = '\x01';
        FUN_001616e0();
        lVar1 = CONCAT71(uStack_77,local_78);
        FUN_00d23310();
        pcVar4 = local_38;
        pcVar10 = local_50;
        if (local_50[0] == '\0') {
          pcVar10 = pcVar4;
        }
        local_38[0] = local_50[0];
        *pcVar10 = '\0';
        if ((local_50[0] != '\0') && (local_58 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        plVar9 = local_48;
        pvVar5 = _pthread_getspecific((void*)pcVar4);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01266fe0();
        local_98 = local_88;
        local_90 = 0;
        if (local_80 == '\0') {
          if (local_88 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_80 = '\0';
        }
        local_90 = '\x01';
        FUN_00228b40(&local_98,&local_a8);
        if ((local_90 != '\0') && (local_98 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_80 != '\0') && (local_88 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_38[0] != '\0') && (local_58 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_70 != '\0') && (lVar1 != 0)) {
          FUN_00d50b20();
        }
        if ((local_a0 != '\0') && (local_a8 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_40[0] != '\0') && (plVar9 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_b0 != '\0') && (local_b8 != 0)) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
      }
    }
  }
  return 1;
}

