// Function: FUN_00340ca0
// Address: 00340ca0
// Size: 1638 bytes
// Class: MDEditorViewController
// String references:
//   "MDEditorViewController"
//   "MDEditorView"
// === MDEditorViewController properties ===
//   MUEditTimelineMode _tempoEditorMode
//   MDEditMode      _editMode
//   MDEditMode      _lastEditMode


void FUN_00340ca0(void)

{
  int64_t *plVar1;
  int64_t *plVar2;
  int64_t *plVar3;
  char cVar4;
  uint32_t uVar5;
  int iVar6;
  char *pcVar7;
  int64_t *this_ptr;
  int64_t *plVar8;
  int64_t *plVar9;
  int64_t **pplVar10;
  uint32_t extraout_XMM0_Da;
  int64_t *local_58;
  char local_50;
  int64_t *local_48;
  char local_40 [8];
  char local_38 [8];
  
  (**(code **)(&UNK_000018a0 + *this_ptr))();
  (**(code **)(&UNK_000018b0 + *this_ptr))();
  (**(code **)(*this_ptr + 0x970))();
  pplVar10 = &local_48;
  FUN_0197c0e0();
  plVar1 = local_48;
  FUN_00275460();
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x360))();
    cVar4 = FUN_00e85ea0();
    if (cVar4 != '\0') goto LAB_00340d24;
  }
  pplVar10 = &g_02802688;
LAB_00340d24:
  plVar1 = *pplVar10;
  if (*(char *)(pplVar10 + 1) == '\0') {
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar10 + 1) = 0;
  }
  if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(*this_ptr + 0x970))();
  plVar3 = local_48;
  if ((((local_40[0] == '\0') && (local_48 != (int64_t *)0x0)) &&
      (FUN_00d50b00(), local_40[0] != '\0')) && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d50b00();
  local_38[0] = '\0';
  local_58 = this_ptr;
  do {
    plVar9 = local_58;
    (**(code **)(*local_58 + 0x370))();
    plVar8 = local_48;
    if (local_48 == plVar9) {
      if (((local_38[0] == '\0') && (local_48 != (int64_t *)0x0)) && (local_40[0] != '\0')) {
        local_38[0] = '\x01';
        plVar8 = plVar9;
        goto LAB_00340e37;
      }
    }
    else {
      local_58 = local_48;
      if (local_40[0] == '\0') {
        if (local_38[0] == '\0') {
          pcVar7 = local_38;
        }
        else {
          FUN_00d50b20();
          pcVar7 = local_38;
        }
      }
      else {
        if (local_38[0] != '\0') {
          FUN_00d50b20();
        }
        local_38[0] = '\x01';
LAB_00340e37:
        local_38[0] = '\x01';
        pcVar7 = local_40;
      }
      *pcVar7 = '\0';
      plVar9 = plVar8;
    }
    if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((g_026f7020 == '\0') && (iVar6 = ___cxa_guard_acquire(), iVar6 != 0)) {
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
    pplVar10 = &g_02802688;
    if (plVar9 != (int64_t *)0x0) {
      (**(code **)(*plVar9 + 0x360))();
      cVar4 = FUN_00e85ea0();
      pplVar10 = &local_58;
      if (cVar4 == '\0') {
        pplVar10 = &g_02802688;
      }
    }
    plVar9 = local_58;
    if (*pplVar10 != (int64_t *)0x0) {
      if ((local_38[0] == '\0') && (local_58 != (int64_t *)0x0)) {
        FUN_00d50b00();
      }
      goto LAB_00340fb0;
    }
    if (local_58 == (int64_t *)0x0) {
      plVar9 = (int64_t *)0x0;
LAB_00340fb0:
      FUN_00d50b20();
      if ((plVar1 != (int64_t *)0x0) && (plVar3 != (int64_t *)0x0)) {
        if (plVar9 != (int64_t *)0x0) {
          FUN_00227020();
          plVar8 = local_48;
          if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (plVar8 != (int64_t *)0x0) {
            FUN_00227020();
            (**(code **)(&g_000015c0 + *this_ptr))();
            FUN_00440ba0();
            if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
        }
        uVar5 = (**(code **)(&g_000015c0 + *this_ptr))();
        *(void*)(this_ptr + 0xc2) = uVar5;
        iVar6 = (**(code **)(&g_000015c0 + *(int64_t *)this_ptr[0xaa]))();
        *(int *)((int64_t)this_ptr + 0x614) = iVar6;
        if ((int)this_ptr[0xc2] != iVar6) {
          FUN_00502230(extraout_XMM0_Da,iVar6);
        }
      }
      plVar8 = (int64_t *)this_ptr[0xaa];
      if ((g_0271a0b0 == '\0') && (iVar6 = ___cxa_guard_acquire(), iVar6 != 0)) {
        g_0272a1e8 = FUN_000914a0();
        g_0272a1d0 = "MDEditorView";
        g_0272a1d8 = 0x560;
        g_0272a1e0 = FUN_0034df50;
        g_0272a1f0 = 0;
        ram_000000000272a1f8 = 0;
        g_0272a200 = 0;
        g_0272a278 = 0;
        ram_000000000272a280 = 0;
        g_0272a288 = 0;
        g_0272a28a = 1;
        g_0272a208 = 0;
        ram_000000000272a210 = 0;
        g_0272a218 = 0;
        ram_000000000272a220 = 0;
        g_0272a228 = 0;
        ram_000000000272a230 = 0;
        g_0272a238 = 0;
        ram_000000000272a240 = 0;
        g_0272a248 = 0;
        ram_000000000272a250 = 0;
        g_0272a258 = 0;
        ram_000000000272a260 = 0;
        g_0272a268 = 0;
        ram_000000000272a270 = 0;
        g_0272a293 = 0;
        g_0272a28b = 0;
        ___cxa_guard_release();
      }
      plVar2 = g_02802688;
      if (plVar8 != (int64_t *)0x0) {
        (**(code **)(*plVar8 + 0x360))();
        cVar4 = FUN_00e85ea0();
        plVar2 = g_02802688;
        if (cVar4 != '\0') {
          plVar2 = (int64_t *)this_ptr[0xaa];
        }
      }
      if (plVar2 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      (**(code **)(&UNK_00001670 + *plVar2))();
      plVar8 = local_48;
      if ((((local_40[0] == '\0') && (local_48 != (int64_t *)0x0)) &&
          (FUN_00d50b00(), local_40[0] != '\0')) && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_000bda90();
      FUN_00108380();
      plVar2 = local_48;
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
      FUN_0193a890();
      uVar5 = FUN_000bda90();
      FUN_00108e20(uVar5,1);
      if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      (**(code **)(*plVar8 + 0x3c8))();
      if (plVar2 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
      FUN_00d50b20();
      if (plVar9 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if (plVar3 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if (plVar1 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      return;
    }
  } while( true );
}

