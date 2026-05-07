// Function: FUN_002bceb0
// Address: 002bceb0
// Size: 807 bytes
// Class: MDEditorScrollView
// String references:
//   "MDEditorScrollView"
// === MDEditorScrollView properties ===
//   MUScaleRulerViewDisplayMode _scaleRulerViewDisplayMode


void FUN_002bceb0(void)

{
  int64_t *plVar1;
  int64_t lVar2;
  char cVar3;
  int iVar4;
  char *pcVar5;
  int64_t *plVar6;
  int64_t *this_ptr;
  int64_t **pplVar7;
  int64_t *plVar8;
  int64_t *local_48;
  char local_40 [8];
  char local_38 [8];
  
  pplVar7 = &local_48;
  FUN_00d3ecf0();
  plVar1 = local_48;
  FUN_000914a0();
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 != '\0') goto LAB_002bcf06;
  }
  pplVar7 = (int64_t **)&g_02802688;
LAB_002bcf06:
  plVar1 = *pplVar7;
  if (*(char *)(pplVar7 + 1) == '\0') {
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar7 + 1) = 0;
  }
  if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 != (int64_t *)0x0) {
    if (this_ptr != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    local_38[0] = '\0';
    plVar8 = this_ptr;
    do {
      (**(code **)(*plVar8 + 0x370))();
      plVar6 = local_48;
      if (local_48 == plVar8) {
        if (((local_38[0] == '\0') && (local_48 != (int64_t *)0x0)) && (local_40[0] != '\0')) {
          local_38[0] = '\x01';
          goto LAB_002bcfc7;
        }
      }
      else {
        if (local_40[0] == '\0') {
          if (local_38[0] == '\0') {
            pcVar5 = local_38;
          }
          else {
            FUN_00d50b20();
            pcVar5 = local_38;
          }
        }
        else {
          if (local_38[0] != '\0') {
            FUN_00d50b20();
          }
          local_38[0] = '\x01';
          plVar8 = plVar6;
LAB_002bcfc7:
          local_38[0] = '\x01';
          pcVar5 = local_40;
          plVar6 = plVar8;
        }
        *pcVar5 = '\0';
        plVar8 = plVar6;
      }
      if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((g_02709e70 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
        g_026f8cd8 = FUN_00074a70();
        g_026f8cc0 = "MDEditorScrollView";
        g_026f8cc8 = 0x260;
        g_026f8cd0 = FUN_000749b0;
        g_026f8ce0 = 0;
        ram_00000000026f8ce8 = 0;
        g_026f8cf0 = 0;
        g_026f8d68 = 0;
        ram_00000000026f8d70 = 0;
        g_026f8d78 = 0;
        g_026f8d7a = 1;
        g_026f8cf8 = 0;
        ram_00000000026f8d00 = 0;
        g_026f8d08 = 0;
        ram_00000000026f8d10 = 0;
        g_026f8d18 = 0;
        ram_00000000026f8d20 = 0;
        g_026f8d28 = 0;
        ram_00000000026f8d30 = 0;
        g_026f8d38 = 0;
        ram_00000000026f8d40 = 0;
        g_026f8d48 = 0;
        ram_00000000026f8d50 = 0;
        g_026f8d58 = 0;
        ram_00000000026f8d60 = 0;
        g_026f8d83 = 0;
        g_026f8d7b = 0;
        ___cxa_guard_release();
      }
      plVar6 = &g_02802688;
      if (plVar8 != (int64_t *)0x0) {
        (**(code **)(*plVar8 + 0x360))();
        cVar3 = FUN_00e85ea0();
        plVar6 = (int64_t *)&stack0xffffffffffffffa8;
        if (cVar3 == '\0') {
          plVar6 = &g_02802688;
        }
      }
      lVar2 = *plVar6;
      if (lVar2 != 0) {
        if ((local_38[0] == '\0') && (plVar8 != (int64_t *)0x0)) {
          FUN_00d50b00();
        }
        if (this_ptr == (int64_t *)0x0) goto LAB_002bd15c;
        goto LAB_002bd157;
      }
    } while (plVar8 != (int64_t *)0x0);
    plVar8 = (int64_t *)0x0;
    if (this_ptr != (int64_t *)0x0) {
LAB_002bd157:
      FUN_00d50b20();
    }
LAB_002bd15c:
    if (plVar8 != (int64_t *)0x0) {
      FUN_0197b900();
      if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (local_48 == plVar1) {
        (**(code **)(*this_ptr + 0x918))();
      }
    }
    if ((lVar2 != 0) && (plVar8 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  return;
}

