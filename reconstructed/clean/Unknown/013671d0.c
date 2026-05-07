// Function: FUN_013671d0
// Address: 013671d0
// Size: 994 bytes
// Class: Unknown

void FUN_013671d0(double param_1,double param_2)

{
  int64_t lVar1;
  int64_t lVar2;
  void*puVar3;
  int64_t lVar4;
  void *pvVar5;
  void*puVar6;
  uint64_t uVar7;
  int64_t this_ptr;
  int64_t lVar8;
  double dVar9;
  int64_t local_a8;
  uint8_t local_a0;
  uint64_t local_98;
  uint8_t local_90;
  double local_88;
  double local_80;
  uint32_t local_74;
  void*local_70;
  int64_t local_68;
  char local_60;
  int64_t local_58;
  uint8_t local_50;
  void*local_48;
  int local_40;
  int iStack_3c;
  int local_38;
  
  local_88 = param_1;
  local_80 = param_2;
  puVar3 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar3 = &g_02572358;
  (*g_02572370)();
  local_48 = *(void**)(this_ptr + 0x100);
  if (local_48 != (void*)0x0) {
    local_50 = 0;
    local_58 = 0;
    local_40 = -1;
    iStack_3c = 0;
    local_38 = 0;
    while( true ) {
      if (iStack_3c != 0) {
        if (iStack_3c < 1) {
          iStack_3c = -iStack_3c;
        }
        else {
          local_40 = local_40 - iStack_3c;
          FUN_00d23690();
          local_38 = local_38 + iStack_3c;
          iStack_3c = 0;
        }
      }
      lVar4 = (int64_t)local_40;
      local_40 = local_40 + 1;
      if (*(int *)((int64_t)local_48 + 0xc) <= local_40) break;
      local_58 = *(int64_t *)(local_48[2] + 8 + lVar4 * 8);
      pvVar5 = _pthread_getspecific((void*)local_48[2]);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar9 = (double)FUN_014bacf0();
      if ((local_88 <= dVar9) && (dVar9 < local_80)) {
        local_68 = local_58;
        local_60 = '\0';
        FUN_00d21140();
        if ((local_60 != '\0') && (local_68 != 0)) {
          FUN_00d50b20();
        }
      }
    }
    puVar6 = local_48;
    FUN_01a02100();
    if (puVar3 == (void*)0x0) {
      uVar7 = CONCAT71((int7)((uint64_t)puVar6 >> 8),1);
      goto LAB_013673f7;
    }
  }
  local_50 = 0;
  local_58 = 0;
  local_40 = -1;
  iStack_3c = 0;
  local_38 = 0;
  local_48 = puVar3;
  while( true ) {
    lVar4 = (int64_t)local_40;
    local_40 = local_40 + 1;
    if (*(int *)((int64_t)local_48 + 0xc) <= local_40) break;
    local_58 = *(int64_t *)(local_48[2] + 8 + lVar4 * 8);
    FUN_01329970();
    if (iStack_3c != 0) {
      if (iStack_3c < 0) {
        iStack_3c = -iStack_3c;
      }
      else {
        local_40 = local_40 - iStack_3c;
        FUN_00d23690();
        local_38 = local_38 + iStack_3c;
        iStack_3c = 0;
      }
    }
  }
  FUN_01a02100();
  uVar7 = 0;
LAB_013673f7:
  local_74 = (uint32_t)uVar7;
  local_70 = puVar3;
  FUN_00d216c0();
  lVar4 = *(int64_t *)(this_ptr + 0xd0);
  if (lVar4 != 0) {
    local_50 = 0;
    local_58 = 0;
    local_38 = 0;
    local_40 = 0;
    iStack_3c = 0;
    local_48 = (void*)lVar4;
    if (0 < *(int *)(lVar4 + 0xc)) {
      lVar8 = 0;
      do {
        lVar1 = *(int64_t *)(*(int64_t *)(lVar4 + 0x10) + lVar8 * 8);
        local_58 = lVar1;
        pvVar5 = _pthread_getspecific((void*)uVar7);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar9 = (double)FUN_014bacf0();
        if ((local_88 <= dVar9) && (dVar9 < local_80)) {
          local_a0 = 0;
          local_a8 = lVar1;
          FUN_01366a10(dVar9,&local_a8);
          lVar2 = local_68;
          if ((local_60 == '\0') && (local_68 != 0)) {
            FUN_00d50b00();
          }
          if (*(int *)(lVar2 + 0xc) == 0) {
            local_60 = '\0';
            local_68 = lVar1;
            FUN_00d21140();
            if ((local_60 != '\0') && (local_68 != 0)) {
              FUN_00d50b20();
            }
          }
          FUN_00d50b20();
        }
        lVar8 = lVar8 + 1;
        local_40 = (int)lVar8;
      } while (local_40 < *(int *)(lVar4 + 0xc));
    }
    FUN_01a02100();
  }
  puVar3 = local_70;
  if ((char)local_74 == '\0') {
    local_50 = 0;
    local_58 = 0;
    local_48 = local_70;
    iStack_3c = 0;
    local_38 = 0;
    for (lVar4 = 0; local_40 = (int)lVar4, local_40 < *(int *)((int64_t)puVar3 + 0xc);
        lVar4 = lVar4 + 1) {
      local_98 = *(void*)(puVar3[2] + lVar4 * 8);
      local_90 = 0;
      local_58 = local_98;
      FUN_013291f0();
    }
    FUN_01a02100();
    FUN_00d50b20();
  }
  return;
}

