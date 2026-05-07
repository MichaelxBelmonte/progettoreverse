// Function: FUN_00264ad0
// Address: 00264ad0
// Size: 2184 bytes
// Class: MDEditorViewController
// === MDEditorViewController properties ===
//   MUEditTimelineMode _tempoEditorMode
//   MDEditMode      _editMode
//   MDEditMode      _lastEditMode


uint64_t FUN_00264ad0(uint64_t param_1,uint32_t param_2)

{
  uint uVar1;
  void *pvVar2;
  int64_t lVar3;
  char *pcVar4;
  char *pcVar5;
  int64_t *plVar6;
  uint64_t uVar7;
  int64_t this_ptr;
  int64_t lVar8;
  int64_t *plVar9;
  int64_t *plVar10;
  bool bVar11;
  int64_t *local_d8;
  char local_d0 [8];
  int64_t local_c8;
  uint64_t local_c0;
  uint32_t local_b8;
  int64_t *local_b0;
  char local_a8;
  int64_t local_a0;
  char local_98;
  int64_t local_90;
  uint32_t local_84;
  char local_80;
  undefined7 uStack_7f;
  char local_78;
  uint32_t local_6c;
  int64_t *local_68;
  char local_60;
  char local_58;
  undefined7 uStack_57;
  char local_50 [32];
  
  if (*(int *)(this_ptr + 0x198) != 2) {
    plVar6 = *(int64_t **)(this_ptr + 0x90);
    local_84 = param_2;
    (**(code **)(&UNK_00001550 + *plVar6))();
    local_80 = local_d0[0];
    pcVar5 = &local_80;
    pcVar4 = local_d0;
    if (local_d0[0] == '\0') {
      pcVar4 = pcVar5;
    }
    *pcVar4 = '\0';
    if ((local_d0[0] != '\0') && (local_d8 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (local_d8 == (int64_t *)0x0) {
      plVar9 = *(int64_t **)(this_ptr + 0x90);
LAB_00264b69:
      FUN_00d50b00();
    }
    else {
      plVar9 = local_d8;
      if (local_80 == '\0') goto LAB_00264b69;
    }
    (**(code **)(*plVar9 + 0xe30))();
    local_b0 = local_68;
    local_a8 = 0;
    if (local_60 == '\0') {
      if (local_68 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_60 = '\0';
    }
    local_a8 = '\x01';
    FUN_012e74e0();
    local_90 = CONCAT71(uStack_57,local_58);
    if (local_50[0] == '\0') {
      if (((local_90 != 0) && (FUN_00d50b00(), local_50[0] != '\0')) &&
         (CONCAT71(uStack_57,local_58) != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_50[0] = '\0';
    }
    if ((local_a8 != '\0') && (local_b0 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar6 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if (local_90 != 0) {
      if (*(int *)(local_90 + 0xc) == 0) {
        uVar7 = 0;
      }
      else {
        FUN_00d23310();
        pcVar4 = local_d0;
        if (local_d0[0] == '\0') {
          pcVar4 = &local_58;
        }
        local_58 = local_d0[0];
        *pcVar4 = '\0';
        if ((local_d0[0] != '\0') && (local_d8 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        lVar3 = local_90;
        pvVar2 = _pthread_getspecific((void*)pcVar5);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar1 = FUN_012f9bb0();
        plVar6 = (int64_t *)(uint64_t)uVar1;
        if ((local_58 != '\0') && (local_d8 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((char)local_84 != '\0') {
          local_84 = CONCAT31(local_84._1_3_,(char)uVar1);
          plVar6 = (int64_t *)((uint64_t)uVar1 ^ 1);
          local_50[0xf] = (char)plVar6;
          local_d0[0] = '\0';
          local_d8 = (int64_t *)0x0;
          local_c8 = lVar3;
          local_b8 = 0;
          local_c0 = 0;
          if (0 < *(int *)(lVar3 + 0xc)) {
            lVar8 = 0;
            do {
              local_d8 = *(int64_t **)(*(int64_t *)(lVar3 + 0x10) + lVar8 * 8);
              pvVar2 = _pthread_getspecific((void*)pcVar5);
              if (pvVar2 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_012f9bc0();
              plVar6 = local_d8;
              if ((char)local_84 == '\0') {
                pvVar2 = _pthread_getspecific((void*)pcVar5);
                if (pvVar2 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_012e7fb0();
                pvVar2 = _pthread_getspecific((void*)pcVar5);
                if (pvVar2 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_01510280();
                plVar6 = local_68;
                pvVar2 = _pthread_getspecific((void*)pcVar5);
                plVar9 = local_68;
                if ((pvVar2 != (void *)0x0) && (lVar3 = FUN_00e8b990(), plVar6 = plVar9, lVar3 != 0)
                   ) {
                  plVar6 = (int64_t *)plVar9[(uint64_t)(*(uint *)(lVar3 + 0x154) & 1) + 4];
                }
                uVar1 = *(int *)(plVar6[9] + 0x18) + 7;
                pcVar4 = (char *)(uint64_t)uVar1;
                if (uVar1 < 0xf) {
                  FUN_00d23310();
                  plVar6 = (int64_t *)CONCAT71(uStack_57,local_58);
                  local_50[0x18] = local_50[0];
                  pcVar5 = local_50 + 0x18;
                  pcVar4 = local_50;
                  if (local_50[0] == '\0') {
                    pcVar4 = pcVar5;
                  }
                  *pcVar4 = '\0';
                  bVar11 = plVar6 == (int64_t *)0x0;
                  if ((local_50[0] != '\0') && (plVar6 != (int64_t *)0x0)) {
                    pcVar4 = (char *)FUN_00d50b20();
                  }
                  if ((local_50[0x18] != '\0') && (plVar6 != (int64_t *)0x0)) {
                    pcVar4 = (char *)FUN_00d50b20();
                  }
                }
                else {
                  bVar11 = false;
                }
                if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
                  pcVar4 = (char *)FUN_00d50b20();
                }
                if ((local_78 != '\0') && (CONCAT71(uStack_7f,local_80) != 0)) {
                  pcVar4 = (char *)FUN_00d50b20();
                }
                if (bVar11) {
                  plVar6 = *(int64_t **)(this_ptr + 0x90);
                  if (plVar6 == (int64_t *)0x0) {
                    local_6c = (uint32_t)CONCAT71((int7)((uint64_t)pcVar4 >> 8),1);
                    plVar9 = (int64_t *)0x0;
                    plVar10 = (int64_t *)0x0;
                  }
                  else {
                    (**(code **)(&UNK_00001550 + *plVar6))();
                    local_80 = local_50[0];
                    pcVar5 = local_50;
                    if (local_50[0] == '\0') {
                      pcVar5 = &local_80;
                    }
                    plVar9 = (int64_t *)CONCAT71(uStack_57,local_58);
                    *pcVar5 = '\0';
                    if ((local_50[0] != '\0') && (plVar9 != (int64_t *)0x0)) {
                      pcVar5 = (char *)FUN_00d50b20();
                    }
                    if (plVar9 == (int64_t *)0x0) {
                      plVar9 = *(int64_t **)(this_ptr + 0x90);
                      if (plVar9 != (int64_t *)0x0) goto LAB_00264fc3;
                      plVar9 = (int64_t *)0x0;
                    }
                    else {
                      if (local_80 == '\0') {
LAB_00264fc3:
                        pcVar5 = (char *)FUN_00d50b00();
                      }
                      if (*(int64_t **)(this_ptr + 0x90) != (int64_t *)0x0) {
                        (**(code **)(&UNK_00001550 + **(int64_t **)(this_ptr + 0x90)))();
                        local_50[0x18] = local_50[0];
                        pcVar5 = local_50;
                        if (local_50[0] == '\0') {
                          pcVar5 = local_50 + 0x18;
                        }
                        plVar10 = (int64_t *)CONCAT71(uStack_57,local_58);
                        *pcVar5 = '\0';
                        if ((local_50[0] != '\0') && (plVar10 != (int64_t *)0x0)) {
                          FUN_00d50b20();
                        }
                        if (plVar10 == (int64_t *)0x0) {
                          plVar10 = *(int64_t **)(this_ptr + 0x90);
                          if (plVar10 != (int64_t *)0x0) goto LAB_0026502c;
                          plVar10 = (int64_t *)0x0;
                        }
                        else if (local_50[0x18] == '\0') {
LAB_0026502c:
                          FUN_00d50b00();
                        }
                        local_6c = 0;
                        goto LAB_00265052;
                      }
                    }
                    local_6c = (uint32_t)CONCAT71((int7)((uint64_t)pcVar5 >> 8),1);
                    plVar10 = (int64_t *)0x0;
                  }
LAB_00265052:
                  (**(code **)(*plVar10 + 0xe30))();
                  FUN_00d23310();
                  local_50[0x10] = local_50[0];
                  pcVar5 = local_50 + 0x10;
                  pcVar4 = local_50;
                  if (local_50[0] == '\0') {
                    pcVar4 = pcVar5;
                  }
                  lVar3 = CONCAT71(uStack_57,local_58);
                  *pcVar4 = '\0';
                  if ((local_50[0] != '\0') && (lVar3 != 0)) {
                    FUN_00d50b20();
                  }
                  local_98 = 0;
                  if (local_50[0x10] == '\0') {
                    if (lVar3 != 0) {
                      FUN_00d50b00();
                    }
                  }
                  else {
                    local_50[0x10] = '\0';
                  }
                  local_98 = '\x01';
                  local_a0 = lVar3;
                  (**(code **)(*plVar9 + 0xe48))();
                  plVar9 = local_68;
                  if (local_60 == '\0') {
                    if (((local_68 != (int64_t *)0x0) && (FUN_00d50b00(), local_60 != '\0')) &&
                       (local_68 != (int64_t *)0x0)) {
                      FUN_00d50b20();
                    }
                  }
                  else {
                    local_60 = '\0';
                  }
                  if ((local_98 != '\0') && (local_a0 != 0)) {
                    FUN_00d50b20();
                  }
                  if ((local_78 != '\0') && (CONCAT71(uStack_7f,local_80) != 0)) {
                    FUN_00d50b20();
                  }
                  if ((char)local_6c == '\0') {
                    FUN_00d50b20();
                  }
                  if (plVar6 != (int64_t *)0x0) {
                    FUN_00d50b20();
                  }
                  pvVar2 = _pthread_getspecific((void*)pcVar5);
                  if (pvVar2 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  FUN_01266fe0();
                  lVar3 = CONCAT71(uStack_57,local_58);
                  if ((((local_50[0] == '\0') && (lVar3 != 0)) &&
                      (FUN_00d50b00(), local_50[0] != '\0')) && (CONCAT71(uStack_57,local_58) != 0))
                  {
                    FUN_00d50b20();
                  }
                  pvVar2 = _pthread_getspecific((void*)pcVar5);
                  if (pvVar2 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  FUN_00e7bdb0();
                  FUN_00e7bdb0();
                  FUN_012fa750();
                  pvVar2 = _pthread_getspecific((void*)pcVar5);
                  if (pvVar2 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  plVar6 = (int64_t *)FUN_00e7bdb0();
                  FUN_00e7bdb0();
                  FUN_012fb890();
                  if (lVar3 != 0) {
                    FUN_00d50b20();
                  }
                  if (plVar9 != (int64_t *)0x0) {
                    FUN_00d50b20();
                  }
                }
              }
              lVar8 = lVar8 + 1;
              local_c0 = CONCAT44(local_c0._4_4_,(int)lVar8);
              lVar3 = local_90;
            } while ((int)lVar8 < *(int *)(local_90 + 0xc));
          }
          FUN_000be170();
        }
        FUN_01caeae0();
        if ((local_d0[0] != '\0') && (local_d8 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        uVar7 = CONCAT71((int7)((uint64_t)plVar6 >> 8),1);
        if (local_d8 != (int64_t *)0x0) {
          FUN_01caeae0();
          FUN_01d66ab0();
          if ((local_d0[0] != '\0') && (local_d8 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
      }
      FUN_00d50b20();
      goto LAB_00265356;
    }
  }
  uVar7 = 0;
LAB_00265356:
  return uVar7 & 0xffffffff;
}

