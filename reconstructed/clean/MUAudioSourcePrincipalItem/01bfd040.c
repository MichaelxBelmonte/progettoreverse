// Function: FUN_01bfd040
// Address: 01bfd040
// Size: 1564 bytes
// Class: MUAudioSourcePrincipalItem

void FUN_01bfd040(void)

{
  void*puVar1;
  int64_t *plVar2;
  int64_t *plVar3;
  void*puVar4;
  int64_t lVar5;
  void *pvVar6;
  char *pcVar7;
  void* pVar8;
  void*puVar9;
  char *pcVar10;
  int iVar11;
  int64_t *arg1;
  int64_t this_ptr;
  uint32_t uVar12;
  float fVar13;
  float fVar14;
  int64_t local_f0;
  char local_e8;
  void*local_c8;
  char local_c0;
  void*local_b8;
  char local_b0;
  uint32_t local_a4;
  char local_a0;
  undefined7 uStack_9f;
  char local_98;
  float local_8c;
  void*local_88;
  char local_80 [8];
  void*local_78;
  uint64_t local_70;
  int local_68;
  int64_t *local_60;
  char local_58;
  void*local_50;
  int64_t *local_48;
  char local_40 [8];
  char local_38 [8];
  
  FUN_01a13070();
  (**(code **)(*local_48 + 0xe20))();
  iVar11 = *(int *)(local_88 + 0xc);
  if (local_80[0] != '\0') {
    FUN_00d50b20();
  }
  if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (iVar11 != 0) {
    puVar4 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    puVar9 = &g_02572358;
    *puVar4 = &g_02572358;
    (*g_02572370)();
    (**(code **)(**(int64_t **)(this_ptr + 0xe8) + 0x960))();
    local_8c = (float)FUN_00d8d7b0();
    if ((local_80[0] != '\0') && (local_88 != (void*)0x0)) {
      FUN_00d50b20();
    }
    FUN_01a13070();
    (**(code **)(*local_48 + 0xe20))();
    puVar1 = local_88;
    if (local_80[0] == '\0') {
      if (((local_88 != (void*)0x0) && (FUN_00d50b00(), local_80[0] != '\0')) &&
         (local_88 != (void*)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_80[0] = '\0';
    }
    if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (puVar1 != (void*)0x0) {
      local_80[0] = '\0';
      local_88 = (void*)0x0;
      local_78 = puVar1;
      local_70 = 0xffffffff;
      local_68 = 0;
      local_70._4_4_ = 0;
      local_50 = puVar4;
      while( true ) {
        if (local_70._4_4_ != 0) {
          if (local_70._4_4_ < 1) {
            iVar11 = -local_70._4_4_;
          }
          else {
            iVar11 = (int)local_70 - local_70._4_4_;
            local_70 = CONCAT44(local_70._4_4_,iVar11);
            FUN_00d23690();
            local_68 = local_68 + local_70._4_4_;
            iVar11 = 0;
          }
          local_70 = CONCAT44(iVar11,(int)local_70);
        }
        lVar5 = (int64_t)(int)local_70;
        iVar11 = (int)local_70 + 1;
        local_70 = CONCAT44(local_70._4_4_,iVar11);
        if (*(int *)(local_78 + 0xc) <= iVar11) break;
        local_88 = *(void**)(*(int64_t *)(local_78 + 0x10) + 8 + lVar5 * 8);
        pvVar6 = _pthread_getspecific((void*)*(int64_t *)(local_78 + 0x10));
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0125e7c0();
        plVar2 = local_60;
        if (local_58 == '\0') {
          if (local_60 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_58 = '\0';
        }
        local_48 = plVar2;
        local_40[0] = '\0';
        uVar12 = FUN_00d21140();
        if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
          uVar12 = FUN_00d50b20();
        }
        if (plVar2 != (int64_t *)0x0) {
          uVar12 = FUN_00d50b20();
        }
        if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
          uVar12 = FUN_00d50b20();
        }
        local_c8 = local_88;
        local_c0 = '\0';
        FUN_019a54a0(uVar12,&local_c8);
        plVar2 = local_48;
        if (local_40[0] == '\0') {
          if (((local_48 != (int64_t *)0x0) && (FUN_00d50b00(), local_40[0] != '\0')) &&
             (local_48 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_40[0] = '\0';
        }
        if ((local_c0 != '\0') && (local_c8 != (void*)0x0)) {
          FUN_00d50b20();
        }
        fVar13 = local_8c;
        if (plVar2 != (int64_t *)0x0) {
          fVar13 = (float)FUN_00d459e0();
          fVar13 = fVar13 + local_8c;
        }
        fVar14 = 0.0;
        if ((0.0 <= fVar13) && (fVar14 = fVar13, g_02390d34 < fVar13)) {
          fVar14 = g_02390d34;
        }
        local_a4 = FUN_01bf6fe0(fVar14);
        FUN_00d23340();
        plVar3 = local_48;
        local_a0 = local_40[0];
        pcVar10 = &local_a0;
        pcVar7 = local_40;
        if (local_40[0] == '\0') {
          pcVar7 = pcVar10;
        }
        *pcVar7 = '\0';
        if ((local_40[0] != '\0') && (plVar3 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        pVar8 = (void*)pcVar10;
        pvVar6 = _pthread_getspecific(pVar8);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_013de560();
        pvVar6 = _pthread_getspecific(pVar8);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_014bc100(local_a4);
        if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_a0 != '\0') && (plVar3 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar2 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
      }
      puVar9 = local_78;
      FUN_001159b0();
      FUN_00d50b20();
      puVar4 = local_50;
    }
    FUN_01a13070();
    (**(code **)(*(int64_t *)CONCAT71(uStack_9f,local_a0) + 0xe20))();
    FUN_00d23310();
    puVar1 = local_88;
    pVar8 = (void*)CONCAT71((int7)((uint64_t)puVar9 >> 8),local_80[0]);
    pcVar10 = local_38;
    if (local_80[0] != '\0') {
      pcVar10 = local_80;
    }
    local_38[0] = local_80[0];
    *pcVar10 = '\0';
    if ((local_80[0] != '\0') && (local_88 != (void*)0x0)) {
      FUN_00d50b20();
    }
    pvVar6 = _pthread_getspecific(pVar8);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01264240();
    pvVar6 = _pthread_getspecific(pVar8);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_b0 = '\0';
    local_b8 = puVar4;
    FUN_013880c0();
    if ((local_e8 != '\0') && (local_f0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_b0 != '\0') && (local_b8 != (void*)0x0)) {
      FUN_00d50b20();
    }
    if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38[0] != '\0') && (puVar1 != (void*)0x0)) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_98 != '\0') && (CONCAT71(uStack_9f,local_a0) != 0)) {
      FUN_00d50b20();
    }
    if (puVar4 != (void*)0x0) {
      FUN_00d50b20();
    }
  }
  if (*(int64_t *)(this_ptr + 0xe8) == *arg1) {
    FUN_00e38430();
  }
  return;
}

