// Function: FUN_00261550
// Address: 00261550
// Size: 1754 bytes
// Class: MDEditorScrollView
// === MDEditorScrollView properties ===
//   MUScaleRulerViewDisplayMode _scaleRulerViewDisplayMode


void* FUN_00261550(void)

{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t lVar4;
  void*puVar5;
  char *pcVar6;
  void *pvVar7;
  void*puVar8;
  int64_t *plVar9;
  int64_t arg1;
  void*this_ptr;
  int iVar10;
  bool bVar11;
  int64_t local_98;
  char local_90;
  int64_t *local_78;
  char local_70 [8];
  int64_t local_68;
  uint64_t local_60;
  uint32_t local_58;
  char local_50;
  undefined7 uStack_4f;
  char local_48;
  int64_t local_40;
  char local_38;
  
  puVar5 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  puVar8 = &g_02572358;
  *puVar5 = &g_02572358;
  (*g_02572370)();
  if (*(int *)(arg1 + 0x198) != 0) {
    if (*(int *)(arg1 + 0x198) == 1) {
      FUN_00226f20();
      if ((local_70[0] != '\0') && (local_78 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (local_78 != (int64_t *)0x0) {
        FUN_00226f20();
        if (local_38 == '\0') {
          if (local_40 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        local_70[0] = '\0';
        FUN_00d21140();
        if ((local_70[0] != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if (local_40 != 0) {
          FUN_00d50b20();
        }
      }
    }
    goto LAB_00261c1c;
  }
  plVar1 = *(int64_t **)(arg1 + 0x90);
  (**(code **)(&UNK_00001550 + *plVar1))();
  local_50 = local_70[0];
  pcVar6 = local_70;
  if (local_70[0] == '\0') {
    pcVar6 = &local_50;
  }
  *pcVar6 = '\0';
  if ((local_70[0] != '\0') && (local_78 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (local_78 == (int64_t *)0x0) {
    plVar9 = *(int64_t **)(arg1 + 0x90);
LAB_0026165b:
    FUN_00d50b00();
  }
  else {
    plVar9 = local_78;
    if (local_50 == '\0') goto LAB_0026165b;
  }
  (**(code **)(*plVar9 + 0xe20))();
  lVar4 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if (plVar1 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((lVar4 == 0) || (*(int *)(lVar4 + 0xc) == 0)) {
    plVar1 = *(int64_t **)(arg1 + 0x90);
    (**(code **)(&UNK_00001550 + *plVar1))();
    pcVar6 = local_70;
    if (local_70[0] == '\0') {
      pcVar6 = &local_50;
    }
    local_50 = local_70[0];
    *pcVar6 = '\0';
    if ((local_70[0] != '\0') && (local_78 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (local_78 == (int64_t *)0x0) {
      local_78 = *(int64_t **)(arg1 + 0x90);
LAB_00261a42:
      FUN_00d50b00();
    }
    else if (local_50 == '\0') goto LAB_00261a42;
    (**(code **)(*local_78 + 0x988))();
    lVar2 = local_40;
    if (local_38 == '\0') {
      if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
    }
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if (lVar2 != 0) {
      local_70[0] = '\0';
      local_68 = lVar2;
      local_58 = 0;
      local_60 = 0;
      if (0 < *(int *)(lVar2 + 0xc)) {
        iVar10 = 0;
        do {
          pvVar7 = _pthread_getspecific((void*)puVar8);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012f51f0();
          lVar3 = local_40;
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
          if (lVar3 != 0) {
            pvVar7 = _pthread_getspecific((void*)puVar8);
            if (pvVar7 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_012f51f0();
            lVar3 = CONCAT71(uStack_4f,local_50);
            if (local_48 == '\0') {
              if (lVar3 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_48 = '\0';
            }
            local_38 = '\0';
            local_40 = lVar3;
            FUN_00d21140();
            if ((local_38 != '\0') && (local_40 != 0)) {
              FUN_00d50b20();
            }
            if (lVar3 != 0) {
              FUN_00d50b20();
            }
            if ((local_48 != '\0') && (CONCAT71(uStack_4f,local_50) != 0)) {
              FUN_00d50b20();
            }
          }
          iVar10 = iVar10 + 1;
          local_60 = CONCAT44(local_60._4_4_,iVar10);
        } while (iVar10 < *(int *)(lVar2 + 0xc));
      }
      FUN_000be170();
      FUN_00d50b20();
    }
  }
  else {
    local_70[0] = '\0';
    local_68 = lVar4;
    local_58 = 0;
    local_60 = 0;
    if (0 < *(int *)(lVar4 + 0xc)) {
      iVar10 = 0;
      do {
        pvVar7 = _pthread_getspecific((void*)puVar8);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01266fe0();
        if (local_40 == 0) {
          bVar11 = false;
        }
        else {
          pvVar7 = _pthread_getspecific((void*)puVar8);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01266fe0();
          pvVar7 = _pthread_getspecific((void*)puVar8);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012f51f0();
          bVar11 = CONCAT71(uStack_4f,local_50) != 0;
          if ((local_48 != '\0') && (CONCAT71(uStack_4f,local_50) != 0)) {
            FUN_00d50b20();
          }
          if ((local_90 != '\0') && (local_98 != 0)) {
            FUN_00d50b20();
          }
        }
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if (bVar11) {
          pvVar7 = _pthread_getspecific((void*)puVar8);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01266fe0();
          pvVar7 = _pthread_getspecific((void*)puVar8);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012f51f0();
          lVar2 = CONCAT71(uStack_4f,local_50);
          if (local_48 == '\0') {
            if (lVar2 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_48 = '\0';
          }
          local_38 = '\0';
          local_40 = lVar2;
          FUN_00d235a0();
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
          if (lVar2 != 0) {
            FUN_00d50b20();
          }
          if ((local_48 != '\0') && (CONCAT71(uStack_4f,local_50) != 0)) {
            FUN_00d50b20();
          }
          if ((local_90 != '\0') && (local_98 != 0)) {
            FUN_00d50b20();
          }
        }
        iVar10 = iVar10 + 1;
        local_60 = CONCAT44(local_60._4_4_,iVar10);
      } while (iVar10 < *(int *)(lVar4 + 0xc));
    }
    FUN_001159b0();
  }
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
LAB_00261c1c:
  *this_ptr = puVar5;
  *(void*)(this_ptr + 1) = 1;
  return this_ptr;
}

