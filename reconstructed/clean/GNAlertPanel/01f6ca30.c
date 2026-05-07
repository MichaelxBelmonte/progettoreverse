// Function: FUN_01f6ca30
// Address: 01f6ca30
// Size: 1500 bytes
// Class: GNAlertPanel
// String references:
//   "GNAlertPanel"
// === GNAlertPanel properties ===
//                   _infoText
//                   _okTitle
//                   _cancelTitle


int64_t * FUN_01f6ca30(uint64_t param_1,int64_t *param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int64_t *plVar6;
  int64_t *plVar7;
  int64_t *plVar8;
  char *pcVar9;
  int64_t lVar10;
  int64_t *this_ptr;
  bool bVar11;
  int64_t **pplVar12;
  uint32_t uVar13;
  int64_t *local_a8;
  char local_a0;
  int64_t local_98;
  char local_90;
  int64_t *local_88;
  char local_80;
  int64_t *local_70;
  char local_68 [8];
  int64_t *local_60;
  int local_58;
  int iStack_54;
  int iStack_50;
  int64_t *local_48;
  int64_t *local_40;
  char local_38 [8];
  
  plVar6 = (int64_t *)FUN_00e8fc40();
  FUN_00022d50();
  local_48 = plVar6;
  (**(code **)(*plVar6 + 0x18))();
  plVar7 = (int64_t *)FUN_00e8fc40();
  FUN_00d4ff40();
  *plVar7 = (int64_t)&g_02572358;
  uVar13 = (*g_02572370)();
  plVar6 = local_48;
  local_a0 = '\0';
  local_a8 = plVar7;
  uVar13 = FUN_01e2af10(uVar13,&local_a8);
  if ((local_a0 != '\0') && (local_a8 != (int64_t *)0x0)) {
    uVar13 = FUN_00d50b20();
  }
  if (*param_2 == 0) {
    bVar11 = false;
LAB_01f6cc20:
    FUN_00ca1380();
    plVar8 = local_70;
    pcVar9 = local_38;
    if (local_68[0] != '\0') {
      pcVar9 = local_68;
    }
    local_38[0] = local_68[0];
    *pcVar9 = '\0';
    if ((local_68[0] != '\0') && (local_70 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (local_38[0] == '\0') {
      if (local_70 != (int64_t *)0x0) {
        FUN_00d50b00();
        goto LAB_01f6cc8a;
      }
      local_40 = (int64_t *)0x0;
      bVar2 = true;
    }
    else if (local_70 == (int64_t *)0x0) {
      local_40 = (int64_t *)0x0;
      bVar2 = true;
    }
    else {
LAB_01f6cc8a:
      local_68[0] = '\0';
      local_70 = (int64_t *)0x0;
      local_40 = plVar8;
      local_60 = plVar8;
      local_58 = -1;
      iStack_54 = 0;
      iStack_50 = 0;
      while( true ) {
        lVar10 = (int64_t)local_58;
        local_58 = local_58 + 1;
        if (*(int *)((int64_t)local_60 + 0xc) <= local_58) break;
        plVar6 = *(int64_t **)(local_60[2] + 8 + lVar10 * 8);
        local_70 = plVar6;
        if ((g_026e8030 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
          g_026e7f80 = FUN_00015ff0();
          g_026e7f68 = "GNAlertPanel";
          g_026e7f70 = 0xa0;
          g_026e7f78 = FUN_001aaa10;
          g_026e7f88 = 0;
          ram_00000000026e7f90 = 0;
          g_026e7f98 = 0;
          ram_00000000026e7fa0 = 0;
          g_026e7fa8 = 0;
          ram_00000000026e7fb0 = 0;
          g_026e7fb8 = 0;
          ram_00000000026e7fc0 = 0;
          g_026e7fc8 = 0;
          ram_00000000026e7fd0 = 0;
          g_026e7fd8 = 0;
          ram_00000000026e7fe0 = 0;
          g_026e7fe8 = 0;
          ram_00000000026e7ff0 = 0;
          g_026e7ff8 = 0;
          ram_00000000026e8000 = 0;
          g_026e8008 = 0;
          ram_00000000026e8010 = 0;
          g_026e8018 = 0;
          ram_00000000026e8020 = 0;
          g_026e8028 = 0;
          ___cxa_guard_release();
        }
        pplVar12 = &g_02802688;
        if (plVar6 != (int64_t *)0x0) {
          (**(code **)(*plVar6 + 0x360))();
          cVar4 = FUN_00e85ea0();
          pplVar12 = &local_70;
          if (cVar4 == '\0') {
            pplVar12 = &g_02802688;
          }
        }
        plVar6 = local_48;
        plVar8 = *pplVar12;
        if (plVar8 != (int64_t *)0x0) {
          if (*(char *)(pplVar12 + 1) == '\0') {
            FUN_00d50b00();
            bVar11 = true;
          }
          else {
            *(void*)(pplVar12 + 1) = 0;
            bVar11 = true;
            plVar6 = local_48;
          }
          goto LAB_01f6ce4a;
        }
        if (iStack_54 != 0) {
          if (iStack_54 < 1) {
            iStack_54 = -iStack_54;
          }
          else {
            local_58 = local_58 - iStack_54;
            FUN_00d23690();
            iStack_50 = iStack_50 + iStack_54;
            iStack_54 = 0;
          }
        }
      }
      plVar8 = (int64_t *)0x0;
      plVar6 = local_48;
LAB_01f6ce4a:
      FUN_00083b20();
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if (plVar8 != (int64_t *)0x0) goto LAB_01f6ce6a;
      bVar1 = true;
      local_40 = (int64_t *)0x0;
      bVar2 = true;
      if (plVar7 == (int64_t *)0x0) goto LAB_01f6cf0a;
    }
LAB_01f6cea1:
    bVar1 = bVar2;
    local_68[0] = '\0';
    local_70 = (int64_t *)0x0;
    iStack_54 = 0;
    iStack_50 = 0;
    local_60 = plVar7;
    for (lVar10 = 0; local_58 = (int)lVar10, local_58 < *(int *)((int64_t)plVar7 + 0xc);
        lVar10 = lVar10 + 1) {
      local_70 = *(int64_t **)(plVar7[2] + lVar10 * 8);
      FUN_00d50130();
    }
    FUN_00083b20();
    bVar2 = false;
    *(void*)(this_ptr + 1) = 0;
    bVar3 = false;
    if (bVar11) goto LAB_01f6cf27;
  }
  else {
    local_90 = '\0';
    pplVar12 = &local_70;
    local_98 = *param_2;
    FUN_000175c0(uVar13,&local_98);
    plVar8 = local_70;
    if ((g_026e8030 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
      g_026e7f80 = FUN_00015ff0();
      g_026e7f68 = "GNAlertPanel";
      g_026e7f70 = 0xa0;
      g_026e7f78 = FUN_001aaa10;
      g_026e7f88 = 0;
      ram_00000000026e7f90 = 0;
      g_026e7f98 = 0;
      ram_00000000026e7fa0 = 0;
      g_026e7fa8 = 0;
      ram_00000000026e7fb0 = 0;
      g_026e7fb8 = 0;
      ram_00000000026e7fc0 = 0;
      g_026e7fc8 = 0;
      ram_00000000026e7fd0 = 0;
      g_026e7fd8 = 0;
      ram_00000000026e7fe0 = 0;
      g_026e7fe8 = 0;
      ram_00000000026e7ff0 = 0;
      g_026e7ff8 = 0;
      ram_00000000026e8000 = 0;
      g_026e8008 = 0;
      ram_00000000026e8010 = 0;
      g_026e8018 = 0;
      ram_00000000026e8020 = 0;
      g_026e8028 = 0;
      ___cxa_guard_release();
    }
    plVar6 = local_48;
    if (plVar8 == (int64_t *)0x0) {
      pplVar12 = &g_02802688;
      plVar8 = g_02802688;
      if (g_02802688 == (int64_t *)0x0) goto LAB_01f6cbd1;
LAB_01f6cba8:
      if (*(char *)(pplVar12 + 1) == '\0') {
        FUN_00d50b00();
      }
      else {
        *(void*)(pplVar12 + 1) = 0;
      }
      bVar11 = true;
    }
    else {
      (**(code **)(*plVar8 + 0x360))();
      cVar4 = FUN_00e85ea0();
      if (cVar4 == '\0') {
        pplVar12 = &g_02802688;
      }
      plVar8 = *pplVar12;
      if (*pplVar12 != (int64_t *)0x0) goto LAB_01f6cba8;
LAB_01f6cbd1:
      bVar11 = false;
      plVar8 = (int64_t *)0x0;
    }
    if ((local_68[0] != '\0') && (local_70 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
    if (plVar8 == (int64_t *)0x0) goto LAB_01f6cc20;
LAB_01f6ce6a:
    local_80 = '\0';
    local_88 = plVar8;
    local_40 = plVar8;
    FUN_00d23d90();
    if ((local_80 != '\0') && (local_88 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    bVar1 = false;
    bVar2 = bVar1;
    if (plVar7 != (int64_t *)0x0) goto LAB_01f6cea1;
LAB_01f6cf0a:
    bVar2 = true;
    *(void*)(this_ptr + 1) = 0;
    bVar3 = true;
    if (bVar11) goto LAB_01f6cf27;
  }
  bVar2 = bVar3;
  if (!bVar1) {
    FUN_00d50b00();
  }
LAB_01f6cf27:
  *this_ptr = (int64_t)local_40;
  *(void*)(this_ptr + 1) = 1;
  if (!bVar2) {
    FUN_00d50b20();
  }
  if (plVar6 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return this_ptr;
}

