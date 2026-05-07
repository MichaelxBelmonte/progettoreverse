// Function: FUN_01a45aa0
// Address: 01a45aa0
// Size: 2134 bytes
// Class: Unknown

void FUN_01a45aa0(void)

{
  int64_t *plVar1;
  int64_t *plVar2;
  char cVar3;
  void*puVar4;
  void *pvVar5;
  int64_t lVar6;
  void* pVar7;
  int64_t lVar8;
  uint uVar9;
  int64_t *local_b0;
  char local_a8;
  void*local_a0;
  char local_98;
  int local_88;
  int64_t *local_78;
  char local_70;
  int local_60;
  int64_t *local_40;
  char local_38;
  
  FUN_01a58dc0();
  (**(code **)(*local_78 + 0xe20))();
  if (local_98 == '\0') {
    if (local_a0 != (void*)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_98 = '\0';
  }
  if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01a58dc0();
  cVar3 = FUN_019a9840();
  if ((local_98 != '\0') && (local_a0 != (void*)0x0)) {
    FUN_00d50b20();
  }
  if (cVar3 == '\0') {
    if (local_a0 == (void*)0x0) {
      return;
    }
    FUN_00d50b00();
    puVar4 = local_a0;
joined_r0x01a45d78:
    if (puVar4 == (void*)0x0) goto LAB_01a46316;
  }
  else {
    puVar4 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar4 = &g_02572358;
    (*g_02572370)();
    if (local_a0 != (void*)0x0) {
      local_88 = -1;
      while (local_88 = local_88 + 1, local_88 < *(int *)((int64_t)local_a0 + 0xc)) {
        pVar7 = (void*)local_a0[2];
        pvVar5 = _pthread_getspecific(pVar7);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01274b60();
        pvVar5 = _pthread_getspecific(pVar7);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01299fe0();
        if (local_38 == '\0') {
          if (local_40 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        local_78 = local_40;
        local_70 = '\0';
        FUN_00d23480();
        if (local_40 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_a8 != '\0') && (local_b0 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      FUN_001159b0();
      goto joined_r0x01a45d78;
    }
  }
  if (0 < *(int *)((int64_t)puVar4 + 0xc)) {
    uVar9 = 0;
    do {
      plVar2 = local_78;
      plVar1 = *(int64_t **)(puVar4[2] + (uint64_t)uVar9 * 8);
      FUN_01a58dc0();
      (**(code **)(*local_40 + 0xad0))();
      if (local_70 == '\0') {
        if (local_78 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_70 = '\0';
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (local_78 != (int64_t *)0x0) {
        local_70 = '\0';
        local_78 = (int64_t *)0x0;
        local_60 = -1;
LAB_01a45f13:
        lVar6 = (int64_t)local_60;
        local_60 = local_60 + 1;
        if (local_60 < *(int *)((int64_t)plVar2 + 0xc)) {
          lVar8 = plVar2[2];
          local_78 = *(int64_t **)(lVar8 + 8 + lVar6 * 8);
          if (local_78 != (int64_t *)0x0) {
            cVar3 = FUN_019801a0();
            pVar7 = (void*)lVar8;
            if ((cVar3 != '\0') && (cVar3 = FUN_01983af0(), cVar3 == '\0')) {
              pvVar5 = _pthread_getspecific(pVar7);
              if (pvVar5 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_01268710();
              if (local_38 == '\0') {
                if (local_40 == (int64_t *)0x0) goto LAB_01a45f13;
                FUN_00d50b00();
              }
              else if (local_40 == (int64_t *)0x0) goto LAB_01a45f13;
              cVar3 = FUN_00d23d70();
              if (cVar3 != '\0') {
                FUN_00d21140();
                local_40 = plVar1;
              }
              local_38 = '\0';
              FUN_00d50b20();
              goto LAB_01a45f13;
            }
            cVar3 = FUN_019801b0();
            if ((cVar3 != '\0') && (cVar3 = FUN_01983b00(), cVar3 == '\0')) {
              pvVar5 = _pthread_getspecific(pVar7);
              if (pvVar5 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_01268dd0();
              if (local_38 == '\0') {
                if (local_40 == (int64_t *)0x0) goto LAB_01a45f13;
                FUN_00d50b00();
              }
              else if (local_40 == (int64_t *)0x0) goto LAB_01a45f13;
              cVar3 = FUN_00d23d70();
              if (cVar3 != '\0') {
                FUN_00d21140();
                local_40 = plVar1;
              }
              local_38 = '\0';
              FUN_00d50b20();
              goto LAB_01a45f13;
            }
            cVar3 = FUN_01983bd0();
            if (cVar3 != '\0') {
              FUN_01983f00();
              if (local_a8 == '\0') {
                if (local_b0 != (int64_t *)0x0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_a8 = '\0';
              }
              local_40 = local_b0;
              local_38 = '\0';
              cVar3 = FUN_00d23d70();
              if (local_b0 != (int64_t *)0x0) {
                FUN_00d50b20();
              }
              if ((local_a8 != '\0') && (local_b0 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              if (cVar3 != '\0') {
                cVar3 = FUN_01983b00();
                if (cVar3 == '\0') {
                  cVar3 = FUN_01983af0();
                  if (cVar3 != '\0') {
                    local_38 = '\0';
                    FUN_00d21140();
                    local_40 = plVar1;
                  }
                }
                else {
                  local_38 = '\0';
                  FUN_00d21140();
                  local_40 = plVar1;
                }
              }
            }
          }
          goto LAB_01a45f13;
        }
        FUN_01a01cb0();
        FUN_00d50b20();
      }
      uVar9 = uVar9 + 1;
    } while ((int)uVar9 < *(int *)((int64_t)puVar4 + 0xc));
  }
  FUN_001159b0();
  FUN_00d50b20();
LAB_01a46316:
  if (local_a0 != (void*)0x0) {
    FUN_00d50b20();
  }
  return;
}

