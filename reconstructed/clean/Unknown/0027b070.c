// Function: FUN_0027b070
// Address: 0027b070
// Size: 1996 bytes
// Class: Unknown

void FUN_0027b070(char param_1,void*param_2,uint8_t param_3)

{
  bool bVar1;
  char cVar2;
  void *pvVar3;
  void*puVar4;
  void* pVar5;
  void*puVar6;
  void*puVar7;
  uint unaff_ESI;
  void*this_ptr;
  int iVar8;
  void*puVar9;
  byte bVar10;
  int64_t lVar11;
  uint64_t uVar12;
  uint64_t local_e8;
  uint8_t local_e0;
  uint64_t local_d8;
  uint8_t local_d0;
  uint64_t local_c8;
  uint8_t local_c0;
  uint64_t local_b8;
  uint8_t local_b0;
  void*local_a8;
  char local_a0;
  void*local_98;
  int64_t local_90;
  char local_88;
  void*local_60;
  char local_58;
  int local_48;
  byte local_31;
  
  lVar11 = g_026e1810;
  puVar7 = (void*)(uint64_t)unaff_ESI;
  local_98 = param_2;
  if (g_026e1810 != 0) {
    FUN_00d50b00();
  }
  FUN_00e7d6f0();
  puVar6 = (void*)0xaaaaaaaaaaaaaaab;
  FUN_0071a120();
  if ((local_58 == '\0') && (local_60 != (void*)0x0)) {
    FUN_00d50b00();
  }
  FUN_000175c0();
  if (local_58 == '\0') {
    if (local_60 != (void*)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_58 = '\0';
  }
  if (local_60 != (void*)0x0) {
    local_58 = '\0';
    local_31 = FUN_00c70bc0();
    FUN_00d50b20();
  }
  FUN_00d50b20();
  if (lVar11 != 0) {
    FUN_00d50b20();
  }
  FUN_0141b540();
  local_88 = 0;
  if (lVar11 != 0) {
    FUN_00d50b00();
  }
  local_88 = '\x01';
  local_90 = lVar11;
  FUN_0027baf0();
  if ((local_58 == '\0') && (local_60 != (void*)0x0)) {
    FUN_00d50b00();
  }
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  bVar10 = local_60 != (void*)0x0 & local_31;
  if ((param_1 != '\0') && (local_60 != (void*)0x0)) {
    local_48 = -1;
    if (bVar10 == 0) {
      bVar1 = false;
      while (local_48 = local_48 + 1, local_48 < *(int *)(local_60 + 0xc)) {
        pVar5 = (void*)*(void*)(local_60 + 0x10);
        pvVar3 = _pthread_getspecific(pVar5);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        cVar2 = FUN_0141ba80();
        if (cVar2 != '\0') {
          pvVar3 = _pthread_getspecific(pVar5);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          cVar2 = FUN_0141baa0();
          if (cVar2 == '\0') {
            local_e8 = *this_ptr;
            local_e0 = 0;
            FUN_0027bbe0(puVar7,&local_e8,param_3);
            puVar7 = (void*)(uint64_t)((int)puVar7 + 1);
            bVar1 = true;
          }
        }
      }
    }
    else {
      bVar1 = false;
      while (local_48 = local_48 + 1, local_48 < *(int *)(local_60 + 0xc)) {
        pvVar3 = _pthread_getspecific((void*)*(void*)(local_60 + 0x10));
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        cVar2 = FUN_0141ba80();
        if (cVar2 != '\0') {
          local_e8 = *this_ptr;
          local_e0 = 0;
          FUN_0027bbe0(puVar7,&local_e8,param_3);
          puVar7 = (void*)(uint64_t)((int)puVar7 + 1);
          bVar1 = true;
        }
      }
    }
    puVar6 = local_60;
    FUN_002a08f0();
    if (bVar1) {
      puVar4 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar4 = &g_026846d0;
      puVar6 = &g_02684a60;
      puVar4[2] = &g_02684a60;
      *(void*)(puVar4 + 3) = 0;
      *(void*)((int64_t)puVar4 + 0x1c) = 0;
      *(void*)((int64_t)puVar4 + 0x24) = 0;
      *(void*)((int64_t)puVar4 + 0x2c) = 0;
      *(void*)((int64_t)puVar4 + 0x34) = 0;
      *(void*)((int64_t)puVar4 + 0x3a) = 0;
      *(void*)((int64_t)puVar4 + 0x42) = 0;
      puVar4[10] = 0;
      puVar4[0xb] = 0;
      puVar4[0xc] = 0;
      puVar4[0xd] = 0;
      *(void*)(puVar4 + 0xe) = 0;
      (*g_026846e8)();
      uVar12 = FUN_01d66c80();
      local_a0 = '\0';
      local_a8 = puVar4;
      FUN_01d5d7f0(uVar12,puVar7);
      if ((local_a0 != '\0') && (local_a8 != (void*)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
      puVar7 = (void*)(uint64_t)((int)puVar7 + 1);
    }
  }
  if (local_60 != (void*)0x0) {
    if (bVar10 == 0) {
      if (0 < *(int *)(local_60 + 0xc)) {
        lVar11 = 0;
        do {
          uVar12 = *(void*)(*(int64_t *)(local_60 + 0x10) + lVar11 * 8);
          pvVar3 = _pthread_getspecific((void*)puVar6);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          cVar2 = FUN_0141ba80();
          puVar9 = puVar7;
          if (cVar2 == '\0') {
            pvVar3 = _pthread_getspecific((void*)puVar6);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            cVar2 = FUN_0141baa0();
            if (cVar2 == '\0') {
              local_d0 = 0;
              local_c8 = *local_98;
              local_c0 = 0;
              local_b8 = *this_ptr;
              local_b0 = 0;
              iVar8 = (int)puVar7;
              local_d8 = uVar12;
              FUN_0027bbe0(puVar7,&local_b8,param_3);
              puVar9 = (void*)(uint64_t)(iVar8 + 1);
              puVar6 = puVar7;
            }
          }
          lVar11 = lVar11 + 1;
          puVar7 = puVar9;
        } while ((int)lVar11 < *(int *)(local_60 + 0xc));
      }
    }
    else if (0 < *(int *)(local_60 + 0xc)) {
      lVar11 = 0;
      do {
        uVar12 = *(void*)(*(int64_t *)(local_60 + 0x10) + lVar11 * 8);
        pvVar3 = _pthread_getspecific((void*)puVar6);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        cVar2 = FUN_0141ba80();
        puVar9 = puVar7;
        if (cVar2 == '\0') {
          local_d0 = 0;
          local_c8 = *local_98;
          local_c0 = 0;
          local_b8 = *this_ptr;
          local_b0 = 0;
          iVar8 = (int)puVar7;
          local_d8 = uVar12;
          FUN_0027bbe0(puVar7,&local_b8,param_3);
          puVar9 = (void*)(uint64_t)(iVar8 + 1);
          puVar6 = puVar7;
        }
        lVar11 = lVar11 + 1;
        puVar7 = puVar9;
      } while ((int)lVar11 < *(int *)(local_60 + 0xc));
    }
    FUN_002a08f0();
    FUN_00d50b20();
  }
  return;
}

