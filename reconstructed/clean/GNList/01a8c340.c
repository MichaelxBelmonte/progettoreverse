// Function: FUN_01a8c340
// Address: 01a8c340
// Size: 1621 bytes
// Class: GNList
// === GNList properties ===
//   GNInt           _archiveVersion
//   bool            _awakesObjectsAfterDecoding
//   bool            _isCancelled
//   GNInt           _currentObjectGraphIdx
//   GNInt           _predictedDecodedValuesIndex


void FUN_01a8c340(uint32_t param_1,uint32_t param_2)

{
  int iVar1;
  int64_t *plVar2;
  int64_t *plVar3;
  char cVar4;
  void*puVar5;
  void *pvVar6;
  int extraout_var;
  int64_t lVar7;
  uint64_t uVar8;
  void* pVar9;
  void*puVar10;
  int64_t *arg1;
  void*this_ptr;
  int iVar11;
  uint64_t extraout_XMM0_Qb;
  uint8_t auVar12 [16];
  uint8_t auVar13 [16];
  uint64_t local_a0;
  uint32_t local_84;
  uint64_t local_80;
  uint64_t local_78;
  void*local_70;
  int local_64;
  uint32_t local_60;
  uint32_t local_5c;
  int64_t *local_58;
  char local_50;
  int64_t *local_48;
  char local_40;
  void*local_38;
  
  local_78 = CONCAT44(local_78._4_4_,param_2);
  local_64 = *(int *)((int64_t)arg1 + 0x3c);
  local_5c = param_1;
  puVar5 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  pVar9 = 0x2572358;
  *puVar5 = &g_02572358;
  (*g_02572370)();
  local_38 = (void*)arg1[6];
  if (local_38 == (void*)0x0) {
    *this_ptr = puVar5;
    *(void*)(this_ptr + 1) = 1;
    return;
  }
  local_70 = puVar5;
  FUN_00d50b00();
  pvVar6 = _pthread_getspecific(pVar9);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  (**(code **)(*arg1 + 0x3c8))();
  pVar9 = 0;
  FUN_016c45d0(0,0);
  local_60 = 0xffffffff;
  local_84 = 0xffffffff;
  pvVar6 = _pthread_getspecific(pVar9);
  if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
    pVar9 = (void*)local_38;
  }
  pvVar6 = _pthread_getspecific(pVar9);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  (**(code **)(*arg1 + 0x3c8))();
  FUN_016c45d0(0,0);
  puVar10 = &local_60;
  local_80 = FUN_016cae50(puVar10,0);
  pvVar6 = _pthread_getspecific((void*)puVar10);
  if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
    puVar10 = local_38;
  }
  local_a0 = FUN_016caec0();
  do {
    pvVar6 = _pthread_getspecific((void*)puVar10);
    if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
      puVar10 = local_38;
    }
    iVar1 = (int)local_80;
    uVar8 = FUN_016caec0();
    local_58 = (int64_t *)uVar8;
    FUN_00e7b970();
    FUN_00e7c3c0();
    if (0 < local_64) {
      iVar11 = 0;
      do {
        pVar9 = (void*)puVar10;
        if (((local_a0 >> 0x20 != 0) && (extraout_var != 0)) &&
           (cVar4 = FUN_00e7c020(), cVar4 != '\0')) {
          *this_ptr = local_70;
          *(void*)(this_ptr + 1) = 1;
          FUN_00d50b20();
          return;
        }
        pvVar6 = _pthread_getspecific(pVar9);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        puVar10 = &local_60;
        local_78 = FUN_016c46a0(puVar10,&local_84);
        auVar13._0_8_ = (**(code **)(*arg1 + 0x3c0))();
        auVar13._8_8_ = extraout_XMM0_Qb;
        auVar12._4_12_ = auVar13._4_12_;
        auVar12._0_4_ = (float)auVar13._0_8_ + g_0239011c;
        auVar13 = roundss(auVar12,auVar12,9);
        if (iVar11 == 0) {
          local_5c = auVar13._0_4_;
          puVar10 = &local_60;
          cVar4 = FUN_01a8bff0(puVar10,&local_84);
          if (cVar4 == '\0') {
            FUN_01a8b960();
            plVar2 = local_48;
            if (local_40 == '\0') {
              if (local_48 != (int64_t *)0x0) {
                FUN_00d50b00();
              }
            }
            else {
              local_40 = '\0';
            }
            local_58 = plVar2;
            local_50 = '\0';
            FUN_00d21140();
            if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if (plVar2 != (int64_t *)0x0) {
              FUN_00d50b20();
            }
            if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            FUN_018c3210();
            (**(code **)(*local_48 + 0x378))();
            plVar2 = local_58;
            if (local_50 == '\0') {
              if (((local_58 != (int64_t *)0x0) && (FUN_00d50b00(), local_50 != '\0')) &&
                 (local_58 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
            }
            else {
              local_50 = '\0';
            }
            if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            FUN_01a8b9f0();
            plVar3 = local_48;
            if (local_40 == '\0') {
              if (local_48 != (int64_t *)0x0) {
                FUN_00d50b00();
              }
            }
            else {
              local_40 = '\0';
            }
            local_58 = plVar3;
            local_50 = '\0';
            FUN_00d21140();
            if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if (plVar3 != (int64_t *)0x0) {
              FUN_00d50b20();
            }
            if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if (plVar2 != (int64_t *)0x0) {
              FUN_00d50b20();
            }
          }
        }
        else {
          FUN_01a8b960(auVar13._0_8_,local_78);
          plVar2 = local_48;
          if (local_40 == '\0') {
            if (local_48 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_40 = '\0';
          }
          local_58 = plVar2;
          local_50 = '\0';
          FUN_00d21140();
          if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (plVar2 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
          if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        local_58 = (int64_t *)local_a0;
        FUN_00e7b820();
        iVar11 = iVar11 + 1;
        local_a0 = (uint64_t)local_58;
      } while (iVar11 < local_64);
    }
    local_80 = (uint64_t)(iVar1 + 1);
    local_a0 = uVar8;
  } while( true );
}

