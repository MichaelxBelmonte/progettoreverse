// Function: FUN_0079e760
// Address: 0079e760
// Size: 1689 bytes
// Class: MDEditorViewController
// String references:
//   "MDEditorViewController"
// === MDEditorViewController properties ===
//   MUEditTimelineMode _tempoEditorMode
//   MDEditMode      _editMode
//   MDEditMode      _lastEditMode


void* FUN_0079e760(void)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  int64_t lVar4;
  char cVar5;
  int iVar6;
  char *pcVar7;
  int64_t *plVar8;
  int64_t *plVar9;
  int64_t *arg1;
  void*this_ptr;
  int64_t *plVar10;
  uint32_t uVar11;
  uint32_t extraout_XMM0_Da;
  int64_t local_b8;
  char local_b0;
  int64_t local_a8;
  char local_a0;
  int64_t *local_98;
  char local_90;
  int64_t *local_88;
  char local_80;
  int64_t *local_78;
  char local_70;
  int64_t *local_48;
  char local_40 [8];
  char local_38 [8];
  
  FUN_01b92cc0();
  if (local_40[0] == '\0') {
    if (local_48 == (int64_t *)0x0) goto LAB_0079e8e0;
    FUN_00d50b00();
    if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else if (local_48 == (int64_t *)0x0) {
LAB_0079e8e0:
    *this_ptr = 0;
    *(void*)(this_ptr + 1) = 1;
    return this_ptr;
  }
  if (arg1 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  local_38[0] = '\0';
  plVar10 = arg1;
  do {
    (**(code **)(*plVar10 + 0x370))();
    if (local_48 == plVar10) {
      if (((local_38[0] == '\0') && (local_48 != (int64_t *)0x0)) && (local_40[0] != '\0'))
      goto LAB_0079e847;
    }
    else {
      plVar10 = local_48;
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
LAB_0079e847:
        local_38[0] = '\x01';
        pcVar7 = local_40;
      }
      *pcVar7 = '\0';
    }
    if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00082eb0();
    plVar8 = &g_02802688;
    if (plVar10 != (int64_t *)0x0) {
      (**(code **)(*plVar10 + 0x360))();
      cVar5 = FUN_00e85ea0();
      plVar8 = (int64_t *)&stack0xffffffffffffff98;
      if (cVar5 == '\0') {
        plVar8 = &g_02802688;
      }
    }
    if (*plVar8 != 0) {
      if ((local_38[0] == '\0') && (plVar10 != (int64_t *)0x0)) {
        FUN_00d50b00();
      }
      break;
    }
  } while (plVar10 != (int64_t *)0x0);
  if (arg1 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((plVar10 != (int64_t *)0x0) && (cVar5 = FUN_00751ba0(), cVar5 != '\0')) {
    if (arg1 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    local_38[0] = '\0';
    plVar8 = arg1;
    do {
      (**(code **)(*plVar8 + 0x370))();
      if (local_48 == plVar8) {
        if (((local_38[0] == '\0') && (local_48 != (int64_t *)0x0)) && (local_40[0] != '\0')) {
          local_38[0] = '\x01';
          goto LAB_0079e9b7;
        }
      }
      else {
        plVar8 = local_48;
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
LAB_0079e9b7:
          local_38[0] = '\x01';
          pcVar7 = local_40;
        }
        *pcVar7 = '\0';
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
      plVar9 = &g_02802688;
      if (plVar8 != (int64_t *)0x0) {
        (**(code **)(*plVar8 + 0x360))();
        cVar5 = FUN_00e85ea0();
        plVar9 = (int64_t *)&stack0xffffffffffffff98;
        if (cVar5 == '\0') {
          plVar9 = &g_02802688;
        }
      }
      if (*plVar9 != 0) {
        if ((local_38[0] == '\0') && (plVar8 != (int64_t *)0x0)) {
          FUN_00d50b00();
        }
        goto joined_r0x0079eb32;
      }
    } while (plVar8 != (int64_t *)0x0);
    plVar8 = (int64_t *)0x0;
joined_r0x0079eb32:
    if (arg1 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    uVar11 = FUN_0027c9f0();
    if (local_40[0] == '\0') {
      if (local_48 != (int64_t *)0x0) {
        uVar11 = FUN_00d50b00();
        if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
          uVar11 = FUN_00d50b20();
        }
        goto LAB_0079eb8f;
      }
LAB_0079ed40:
      *this_ptr = local_48;
      *(void*)(this_ptr + 1) = 1;
      bVar2 = true;
      bVar1 = true;
      bVar3 = false;
    }
    else {
      if (local_48 == (int64_t *)0x0) goto LAB_0079ed40;
LAB_0079eb8f:
      lVar4 = g_026fb8f8;
      if (g_026fb8f8 != 0) {
        uVar11 = FUN_00d50b00();
      }
      local_b8 = lVar4;
      local_b0 = '\x01';
      uVar11 = FUN_01d5e6e0(uVar11,&local_b8);
      if (local_40[0] == '\0') {
        if (((local_48 != (int64_t *)0x0) && (uVar11 = FUN_00d50b00(), local_40[0] != '\0')) &&
           (local_48 != (int64_t *)0x0)) {
          uVar11 = FUN_00d50b20();
        }
      }
      else {
        local_40[0] = '\0';
      }
      if ((local_b0 != '\0') && (local_b8 != 0)) {
        uVar11 = FUN_00d50b20();
      }
      lVar4 = g_0272a6a8;
      if (g_0272a6a8 != 0) {
        uVar11 = FUN_00d50b00();
      }
      local_a8 = lVar4;
      local_a0 = '\x01';
      FUN_01d5e6e0(uVar11,&local_a8);
      if (local_40[0] == '\0') {
        if (((local_48 != (int64_t *)0x0) && (FUN_00d50b00(), local_40[0] != '\0')) &&
           (local_48 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_40[0] = '\0';
      }
      if ((local_a0 != '\0') && (local_a8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_48 != (int64_t *)0x0) && (local_48 != (int64_t *)0x0)) {
        FUN_01d66e50();
        local_90 = '\0';
        local_88 = local_48;
        local_80 = '\0';
        local_98 = local_48;
        uVar11 = FUN_01d5e2e0();
        FUN_01d5d7f0(extraout_XMM0_Da,uVar11);
        if ((local_80 != '\0') && (local_88 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_90 != '\0') && (local_98 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        local_70 = '\0';
        local_78 = plVar8;
        FUN_01d651e0();
        if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      if (local_48 != (int64_t *)0x0) {
        FUN_00d50b20();
        FUN_00d50b20();
      }
      FUN_00d50b20();
      bVar3 = true;
      bVar2 = false;
      bVar1 = false;
    }
    if (plVar8 != (int64_t *)0x0) {
      FUN_00d50b20();
      bVar1 = bVar2;
    }
    if (bVar1) goto LAB_0079ed71;
  }
  *this_ptr = local_48;
  *(void*)(this_ptr + 1) = 1;
  bVar3 = false;
LAB_0079ed71:
  if (plVar10 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (!bVar3) {
    return this_ptr;
  }
  FUN_00d50b20();
  return this_ptr;
}

