// Function: FUN_019cafa0
// Address: 019cafa0
// Size: 1110 bytes
// Class: MUEditorElementView

uint64_t FUN_019cafa0(void*param_1,char param_2)

{
  int iVar1;
  code *pcVar2;
  char cVar3;
  void*puVar4;
  void*puVar5;
  void *pvVar6;
  void*puVar7;
  void*puVar8;
  uint64_t uVar9;
  int64_t *this_ptr;
  int64_t lVar10;
  void*local_70;
  char local_68;
  int local_58;
  void*local_40;
  char local_38;
  
  puVar7 = local_70;
  (**(code **)(*this_ptr + 0xe20))();
  iVar1 = *(int *)(local_70 + 0xc);
  if (local_68 != '\0') {
    FUN_00d50b20();
  }
  if (iVar1 == 0) {
    uVar9 = 0;
    goto LAB_019cb402;
  }
  puVar4 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar4 = &g_02572358;
  pcVar2 = g_02572370;
  (*g_02572370)();
  puVar5 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar5 = &g_02572358;
  (*pcVar2)();
  (**(code **)(*this_ptr + 0xe20))();
  if (local_68 == '\0') {
    puVar8 = &g_02572358;
    if (local_70 != (void*)0x0) {
      FUN_00d50b00();
      goto LAB_019cb08d;
    }
  }
  else {
    puVar8 = &g_02572358;
    if (local_70 != (void*)0x0) {
LAB_019cb08d:
      local_68 = '\0';
      local_70 = (void*)0x0;
      local_58 = -1;
      puVar8 = &g_02572358;
LAB_019cb0cb:
      while( true ) {
        lVar10 = (int64_t)local_58;
        local_58 = local_58 + 1;
        if (*(int *)(puVar7 + 0xc) <= local_58) break;
        local_70 = *(void**)(*(int64_t *)(puVar7 + 0x10) + 8 + lVar10 * 8);
        pvVar6 = _pthread_getspecific((void*)*(int64_t *)(puVar7 + 0x10));
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012972e0();
        puVar8 = local_40;
        if (local_38 == '\0') goto LAB_019cb170;
        if (local_40 != (void*)0x0) goto LAB_019cb1a0;
      }
      FUN_001159b0();
      FUN_00d50b20();
      param_1 = puVar7;
    }
  }
  iVar1 = *(int *)((int64_t)puVar4 + 0xc);
  if ((iVar1 != 0) && (param_2 != '\0')) {
    (**(code **)(*this_ptr + 0x9b0))();
    if (local_68 == '\0') {
      if (local_70 != (void*)0x0) {
        FUN_00d50b00();
        goto LAB_019cb256;
      }
    }
    else if (local_70 != (void*)0x0) {
LAB_019cb256:
      if (0 < *(int *)(local_70 + 0xc)) {
        lVar10 = 0;
        do {
          puVar8 = local_40;
          puVar7 = *(void**)(*(int64_t *)(local_70 + 0x10) + lVar10 * 8);
          pvVar6 = _pthread_getspecific((void*)param_1);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012972e0();
          if ((local_38 == '\0') && (local_40 != (void*)0x0)) {
            FUN_00d50b00();
          }
          cVar3 = FUN_00d23d70();
          if (cVar3 != '\0') {
            FUN_00d21140();
            local_40 = puVar7;
          }
          local_38 = '\0';
          if (puVar8 != (void*)0x0) {
            FUN_00d50b20();
          }
          lVar10 = lVar10 + 1;
        } while ((int)lVar10 < *(int *)(local_70 + 0xc));
      }
      FUN_001159b0();
      FUN_00d50b20();
    }
    (**(code **)(*this_ptr + 0xdc8))();
    puVar8 = local_70;
  }
  uVar9 = CONCAT71((int7)((uint64_t)puVar8 >> 8),iVar1 != 0);
  if (puVar5 != (void*)0x0) {
    FUN_00d50b20();
  }
  if (puVar4 != (void*)0x0) {
    FUN_00d50b20();
  }
LAB_019cb402:
  return uVar9 & 0xffffffff;
LAB_019cb170:
  if (local_40 != (void*)0x0) {
    FUN_00d50b00();
LAB_019cb1a0:
    local_38 = '\0';
    FUN_00d235a0();
    FUN_00d50b20();
  }
  goto LAB_019cb0cb;
}

