// Function: FUN_00332660
// Address: 00332660
// Size: 999 bytes
// Class: MDEditorViewController
// String references:
//   "MDEditorViewController"
// === MDEditorViewController properties ===
//   MUEditTimelineMode _tempoEditorMode
//   MDEditMode      _editMode
//   MDEditMode      _lastEditMode


uint64_t FUN_00332660(uint64_t param_1,char param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  int64_t **pplVar4;
  int64_t this_ptr;
  int64_t *plVar5;
  int64_t *plVar6;
  uint32_t uVar7;
  int64_t local_b0;
  char local_a8;
  int64_t *local_80;
  char local_78;
  int64_t *local_70;
  int64_t *local_68;
  int64_t *local_60;
  int64_t *local_58;
  char local_50;
  int64_t *local_48;
  char local_40 [8];
  char local_38 [8];
  
  if ((*(int64_t *)(this_ptr + 0xa0) != 0) && (param_2 != '\0')) {
    FUN_003322a0();
    local_60 = local_48;
    if ((local_40[0] == '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b00();
    }
    FUN_01e561b0();
    FUN_01d8b220();
    if (local_78 == '\0') {
      if (local_80 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_78 = '\0';
    }
    local_70 = local_80;
    local_38[0] = '\0';
    local_68 = local_80;
    do {
      plVar6 = local_70;
      (**(code **)(*local_70 + 0x370))();
      plVar5 = local_48;
      if (local_48 == plVar6) {
        if (((local_38[0] == '\0') && (local_48 != (int64_t *)0x0)) && (local_40[0] != '\0')) {
          local_38[0] = '\x01';
          plVar5 = plVar6;
          goto LAB_00332777;
        }
      }
      else {
        local_70 = local_48;
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
LAB_00332777:
          local_38[0] = '\x01';
          pcVar3 = local_40;
        }
        *pcVar3 = '\0';
        plVar6 = plVar5;
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
      pplVar4 = (int64_t **)&g_02802688;
      if (plVar6 != (int64_t *)0x0) {
        (**(code **)(*plVar6 + 0x360))();
        cVar1 = FUN_00e85ea0();
        pplVar4 = &local_70;
        if (cVar1 == '\0') {
          pplVar4 = (int64_t **)&g_02802688;
        }
      }
      plVar6 = local_70;
      if (*pplVar4 != (int64_t *)0x0) {
        if ((local_38[0] == '\0') && (local_70 != (int64_t *)0x0)) {
          FUN_00d50b00();
        }
        plVar5 = local_60;
        if (local_68 == (int64_t *)0x0) goto LAB_0033290a;
        goto LAB_00332905;
      }
    } while (local_70 != (int64_t *)0x0);
    plVar6 = (int64_t *)0x0;
    plVar5 = local_60;
    if (local_68 != (int64_t *)0x0) {
LAB_00332905:
      plVar5 = local_60;
      FUN_00d50b20();
    }
LAB_0033290a:
    if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_a8 != '\0') && (local_b0 != 0)) {
      FUN_00d50b20();
    }
    if (plVar6 != (int64_t *)0x0) {
      uVar7 = FUN_0021a630();
      local_58 = local_48;
      local_50 = 0;
      if (local_40[0] == '\0') {
        if (local_48 != (int64_t *)0x0) {
          uVar7 = FUN_00d50b00();
        }
      }
      else {
        local_40[0] = '\0';
      }
      local_50 = '\x01';
      FUN_01a296f0(uVar7,0);
      if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    uVar7 = FUN_01caeac0();
    FUN_01289850(uVar7,g_023b26e8);
    if (plVar5 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  return 1;
}

