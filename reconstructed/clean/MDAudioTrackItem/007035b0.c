// Function: FUN_007035b0
// Address: 007035b0
// Size: 1147 bytes
// Class: MDAudioTrackItem
// String references:
//   "MDAudioTrackItem"
// === MDAudioTrackItem properties ===
//   MDAudioTrackItemType _trackItemType


void* FUN_007035b0(void)

{
  int64_t lVar1;
  int64_t *plVar2;
  code *pcVar3;
  char cVar4;
  int iVar5;
  void*puVar6;
  int64_t lVar7;
  void*puVar8;
  void *pvVar9;
  void* pVar10;
  int64_t **pplVar11;
  int64_t *arg1;
  void*this_ptr;
  uint32_t uVar12;
  int local_68;
  int64_t *local_50;
  char local_48;
  int64_t *local_40;
  char local_38;
  
  puVar6 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar6 = &g_02572358;
  pcVar3 = g_02572370;
  (*g_02572370)();
  lVar1 = *arg1;
  if (lVar1 != 0) {
    local_68 = -1;
    while( true ) {
      lVar7 = (int64_t)local_68;
      local_68 = local_68 + 1;
      if (*(int *)(lVar1 + 0xc) <= local_68) break;
      plVar2 = *(int64_t **)(*(int64_t *)(lVar1 + 0x10) + 8 + lVar7 * 8);
      local_40 = plVar2;
      if ((g_02700970 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
        g_026d78f8 = FUN_0006e710();
        g_026d78e0 = "MDAudioTrackItem";
        g_026d78e8 = 0x70;
        g_026d78f0 = FUN_0006e6c0;
        g_026d7900 = 0;
        ram_00000000026d7908 = 0;
        g_026d7910 = 0;
        g_026d7988 = 0;
        ram_00000000026d7990 = 0;
        g_026d7998 = 0;
        g_026d799a = 1;
        g_026d7918 = 0;
        ram_00000000026d7920 = 0;
        g_026d7928 = 0;
        ram_00000000026d7930 = 0;
        g_026d7938 = 0;
        ram_00000000026d7940 = 0;
        g_026d7948 = 0;
        ram_00000000026d7950 = 0;
        g_026d7958 = 0;
        ram_00000000026d7960 = 0;
        g_026d7968 = 0;
        ram_00000000026d7970 = 0;
        g_026d7978 = 0;
        ram_00000000026d7980 = 0;
        g_026d79a3 = 0;
        g_026d799b = 0;
        ___cxa_guard_release();
      }
      pplVar11 = (int64_t **)&g_02802688;
      if (plVar2 != (int64_t *)0x0) {
        (**(code **)(*plVar2 + 0x360))();
        cVar4 = FUN_00e85ea0();
        pplVar11 = &local_40;
        if (cVar4 == '\0') {
          pplVar11 = (int64_t **)&g_02802688;
        }
      }
      if (*pplVar11 != (int64_t *)0x0) {
        uVar12 = FUN_01bc0990();
        if (local_48 == '\0') {
          if (local_50 != (int64_t *)0x0) {
            uVar12 = FUN_00d50b00();
          }
        }
        else {
          local_48 = '\0';
        }
        local_40 = local_50;
        local_38 = '\0';
        FUN_00d214d0(uVar12,*(void*)((int64_t)puVar6 + 0xc));
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (local_50 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    FUN_0038d380();
  }
  puVar8 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar8 = &g_02572358;
  (*pcVar3)();
  if (puVar6 == (void*)0x0) {
    *this_ptr = puVar8;
    *(void*)(this_ptr + 1) = 1;
  }
  else {
    if (0 < *(int *)((int64_t)puVar6 + 0xc)) {
      iVar5 = 0;
      do {
        FUN_01bc60e0();
        plVar2 = local_40;
        FUN_000823a0();
        pplVar11 = (int64_t **)&g_02802688;
        if (plVar2 != (int64_t *)0x0) {
          (**(code **)(*plVar2 + 0x360))();
          cVar4 = FUN_00e85ea0();
          pplVar11 = &local_40;
          if (cVar4 == '\0') {
            pplVar11 = (int64_t **)&g_02802688;
          }
        }
        plVar2 = *pplVar11;
        if (*(char *)(pplVar11 + 1) == '\0') {
          if (plVar2 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          *(void*)(pplVar11 + 1) = 0;
        }
        pVar10 = (void*)pplVar11;
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar2 != (int64_t *)0x0) {
          pvVar9 = _pthread_getspecific(pVar10);
          if (pvVar9 != (void *)0x0) {
            FUN_00e8b990();
          }
          uVar12 = FUN_012e5ae0();
          if (local_48 == '\0') {
            if (local_50 != (int64_t *)0x0) {
              uVar12 = FUN_00d50b00();
            }
          }
          else {
            local_48 = '\0';
          }
          local_40 = local_50;
          local_38 = '\0';
          FUN_00d214d0(uVar12,*(void*)((int64_t)puVar8 + 0xc));
          if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (local_50 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
          if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          FUN_00d50b20();
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < *(int *)((int64_t)puVar6 + 0xc));
    }
    FUN_000840d0();
    *this_ptr = puVar8;
    *(void*)(this_ptr + 1) = 1;
    FUN_00d50b20();
  }
  return this_ptr;
}

