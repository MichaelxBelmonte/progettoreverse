// Function: FUN_019ab310
// Address: 019ab310
// Size: 779 bytes
// Class: MUEditorElementView

void* FUN_019ab310(uint64_t param_1,uint64_t param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  void *pvVar4;
  void*puVar5;
  int64_t lVar6;
  void* pVar7;
  char *pcVar8;
  void*puVar9;
  int64_t *arg1;
  void*this_ptr;
  int64_t lVar10;
  uint64_t uVar11;
  char local_50;
  undefined7 uStack_4f;
  char local_48;
  int64_t local_40;
  char local_38 [8];
  
  iVar2 = *(int *)(arg1[0x3d] + 0xc);
  if (iVar2 == 1) {
    FUN_00d23310();
    lVar6 = local_40;
    local_50 = local_38[0];
    pcVar8 = &local_50;
    pcVar3 = local_38;
    if (local_38[0] == '\0') {
      pcVar3 = pcVar8;
    }
    *pcVar3 = '\0';
    if ((local_38[0] != '\0') && (lVar6 != 0)) {
      FUN_00d50b20();
    }
    if ((local_50 == '\0') && (lVar6 != 0)) {
      FUN_00d50b00();
    }
    cVar1 = (**(code **)(*arg1 + 0x9a0))();
    if (lVar6 != 0) {
      FUN_00d50b20();
    }
    if (cVar1 != '\0') {
      FUN_00d23310();
      pcVar3 = local_38;
      if (local_38[0] == '\0') {
        pcVar3 = pcVar8;
      }
      local_50 = local_38[0];
      *pcVar3 = '\0';
      if ((local_38[0] != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      pvVar4 = _pthread_getspecific((void*)pcVar8);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012ea6f0(param_1,param_2);
      if (local_50 == '\0') {
        return this_ptr;
      }
      if (local_40 == 0) {
        return this_ptr;
      }
      FUN_00d50b20();
      return this_ptr;
    }
    iVar2 = *(int *)(arg1[0x3d] + 0xc);
  }
  if (iVar2 < 2) {
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
  }
  else {
    puVar5 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    puVar9 = &g_02572358;
    *puVar5 = &g_02572358;
    (*g_02572370)();
    lVar6 = arg1[0x3d];
    if (0 < *(int *)(lVar6 + 0xc)) {
      lVar10 = 0;
      do {
        pVar7 = (void*)puVar9;
        lVar6 = *(int64_t *)(*(int64_t *)(lVar6 + 0x10) + lVar10 * 8);
        if (lVar6 != 0) {
          FUN_00d50b00();
        }
        cVar1 = (**(code **)(*arg1 + 0x9a0))();
        if (lVar6 != 0) {
          FUN_00d50b20();
        }
        if (cVar1 != '\0') {
          pvVar4 = _pthread_getspecific(pVar7);
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          uVar11 = FUN_012ea6f0(param_1,param_2);
          lVar6 = CONCAT71(uStack_4f,local_50);
          if (local_48 == '\0') {
            if (lVar6 != 0) {
              uVar11 = FUN_00d50b00();
            }
          }
          else {
            local_48 = '\0';
          }
          local_38[0] = '\0';
          local_40 = lVar6;
          FUN_00d214d0(uVar11,*(void*)((int64_t)puVar5 + 0xc));
          if ((local_38[0] != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
          if (lVar6 != 0) {
            FUN_00d50b20();
          }
          if ((local_48 != '\0') && (CONCAT71(uStack_4f,local_50) != 0)) {
            FUN_00d50b20();
          }
        }
        lVar10 = lVar10 + 1;
        lVar6 = arg1[0x3d];
        puVar9 = (void*)(int64_t)*(int *)(lVar6 + 0xc);
      } while (lVar10 < (int64_t)puVar9);
    }
    *this_ptr = puVar5;
    *(void*)(this_ptr + 1) = 1;
  }
  return this_ptr;
}

