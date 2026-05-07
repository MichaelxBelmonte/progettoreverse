// Function: FUN_002664b0
// Address: 002664b0
// Size: 1032 bytes
// Class: MDEditorViewController
// String references:
//   "MDEditorViewController"
// === MDEditorViewController properties ===
//   MUEditTimelineMode _tempoEditorMode
//   MDEditMode      _editMode
//   MDEditMode      _lastEditMode


byte FUN_002664b0(void)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  char *pcVar4;
  int64_t **pplVar5;
  byte unaff_SIL;
  void*this_ptr;
  int64_t *plVar6;
  int64_t *plVar7;
  byte unaff_R15B;
  uint64_t uVar8;
  int64_t *local_58;
  char local_50;
  int64_t *local_48;
  char local_40 [8];
  char local_38 [8];
  
  plVar7 = g_026f6fa0;
  if (g_026f6fa0 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  FUN_00e7d6f0();
  uVar8 = FUN_0071a120();
  if ((((local_40[0] == '\0') && (local_48 != (int64_t *)0x0)) &&
      (uVar8 = FUN_00d50b00(), local_40[0] != '\0')) && (local_48 != (int64_t *)0x0)) {
    uVar8 = FUN_00d50b20();
  }
  local_58 = plVar7;
  local_50 = '\0';
  FUN_000175c0(uVar8,&local_58);
  plVar6 = local_48;
  if (local_40[0] == '\0') {
    if (((local_48 != (int64_t *)0x0) && (FUN_00d50b00(), local_40[0] != '\0')) &&
       (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_40[0] = '\0';
  }
  if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar6 != (int64_t *)0x0) {
    local_40[0] = '\0';
    local_48 = plVar6;
    unaff_R15B = FUN_00c70bc0();
    if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  FUN_00d50b20();
  if (plVar7 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((plVar6 != (int64_t *)0x0 & unaff_R15B) != 0) {
    FUN_01f27fe0();
    cVar1 = (**(code **)(*local_48 + 0x450))();
    if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (cVar1 != '\0') {
      return 1;
    }
    local_58 = (int64_t *)*this_ptr;
    local_38[0] = '\0';
    do {
      plVar7 = local_58;
      (**(code **)(*local_58 + 0x370))();
      plVar6 = local_48;
      if (local_48 == plVar7) {
        if (((local_38[0] == '\0') && (local_48 != (int64_t *)0x0)) && (local_40[0] != '\0')) {
          local_38[0] = '\x01';
          plVar6 = plVar7;
          goto LAB_002666c7;
        }
      }
      else {
        local_58 = local_48;
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
LAB_002666c7:
          local_38[0] = '\x01';
          pcVar4 = local_40;
        }
        *pcVar4 = '\0';
        plVar7 = plVar6;
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
      pplVar5 = (int64_t **)&g_02802688;
      if (plVar7 != (int64_t *)0x0) {
        (**(code **)(*plVar7 + 0x360))();
        cVar1 = FUN_00e85ea0();
        pplVar5 = &local_58;
        if (cVar1 == '\0') {
          pplVar5 = (int64_t **)&g_02802688;
        }
      }
      plVar7 = local_58;
      if (*pplVar5 != (int64_t *)0x0) {
        if ((local_38[0] == '\0') && (local_58 != (int64_t *)0x0)) {
          FUN_00d50b00();
        }
        else if (local_58 == (int64_t *)0x0) {
          return 0;
        }
        if (plVar7[0x38] == 0) {
LAB_002668b4:
          bVar2 = 0;
        }
        else {
          FUN_006f3f00();
          if (local_40[0] == '\0') {
            if (local_48 == (int64_t *)0x0) goto LAB_002668b4;
            FUN_00d50b00();
            if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
          else if (local_48 == (int64_t *)0x0) goto LAB_002668b4;
          bVar2 = FUN_00751ba0();
          FUN_00d50b20();
          bVar2 = bVar2 & unaff_SIL;
        }
        FUN_00d50b20();
        return bVar2;
      }
    } while (local_58 != (int64_t *)0x0);
  }
  return 0;
}

