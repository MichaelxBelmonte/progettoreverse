// Function: FUN_01a40b30
// Address: 01a40b30
// Size: 873 bytes
// Class: Unknown

void* FUN_01a40b30(uint64_t param_1)

{
  int64_t lVar1;
  void*puVar2;
  code *pcVar3;
  void*puVar4;
  char cVar5;
  int64_t *plVar6;
  void *pvVar7;
  code *pcVar8;
  void*puVar9;
  void* pVar10;
  code *pcVar11;
  int64_t *arg1;
  void*this_ptr;
  int64_t lVar12;
  uint64_t uVar13;
  int64_t local_90;
  char local_88;
  void*local_80;
  char local_78;
  void*local_70;
  char local_68;
  void*local_60;
  char local_58;
  int64_t *local_50;
  void*local_48;
  uint8_t local_40 [8];
  uint8_t local_38 [8];
  
  plVar6 = (int64_t *)FUN_00e8fc40();
  FUN_00022d50();
  local_50 = plVar6;
  (**(code **)(*plVar6 + 0x18))();
  pcVar3 = g_02572370;
  lVar1 = *arg1;
  if (lVar1 != 0) {
    if (0 < *(int *)(lVar1 + 0xc)) {
      lVar12 = 0;
      pcVar11 = g_02572370;
      do {
        puVar2 = *(void**)(*(int64_t *)(lVar1 + 0x10) + lVar12 * 8);
        pvVar7 = _pthread_getspecific((void*)pcVar11);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        cVar5 = FUN_012754d0(param_1,0);
        pVar10 = (void*)pcVar11;
        if (cVar5 != '\0') {
          pvVar7 = _pthread_getspecific(pVar10);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0125e7c0();
          pvVar7 = _pthread_getspecific(pVar10);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          uVar13 = FUN_013df480();
          puVar4 = local_48;
          local_38[0] = local_40[0];
          pcVar11 = local_38;
          pcVar8 = local_40;
          if (local_40[0] == (code)0x0) {
            pcVar8 = pcVar11;
          }
          *pcVar8 = (code)0x0;
          if ((local_40[0] != (code)0x0) && (local_48 != (void*)0x0)) {
            uVar13 = FUN_00d50b20();
          }
          if ((local_88 != '\0') && (local_90 != 0)) {
            uVar13 = FUN_00d50b20();
          }
          local_80 = puVar4;
          local_78 = '\0';
          FUN_0076f110(uVar13,&local_80);
          puVar9 = local_48;
          if (local_40[0] == (code)0x0) {
            if (((local_48 != (void*)0x0) && (FUN_00d50b00(), local_40[0] != (code)0x0)) &&
               (local_48 != (void*)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            local_40[0] = (code)0x0;
          }
          if ((local_78 != '\0') && (local_80 != (void*)0x0)) {
            FUN_00d50b20();
          }
          if (puVar9 == (void*)0x0) {
            puVar9 = (void*)FUN_00e8fc40();
            FUN_00d4ff40();
            *puVar9 = &g_02572358;
            uVar13 = (*pcVar3)();
            local_68 = '\0';
            local_60 = puVar4;
            local_58 = '\0';
            local_70 = puVar9;
            FUN_0076f1c0(uVar13,&local_60);
            if ((local_58 != '\0') && (local_60 != (void*)0x0)) {
              FUN_00d50b20();
            }
            if ((local_68 != '\0') && (local_70 != (void*)0x0)) {
              FUN_00d50b20();
            }
          }
          local_40[0] = (code)0x0;
          local_48 = puVar2;
          FUN_00d21140();
          if ((local_40[0] != (code)0x0) && (local_48 != (void*)0x0)) {
            FUN_00d50b20();
          }
          if (puVar9 != (void*)0x0) {
            FUN_00d50b20();
          }
          if ((local_38[0] != (code)0x0) && (puVar4 != (void*)0x0)) {
            FUN_00d50b20();
          }
        }
        lVar12 = lVar12 + 1;
      } while ((int)lVar12 < *(int *)(lVar1 + 0xc));
    }
    FUN_001159b0();
  }
  *this_ptr = local_50;
  *(void*)(this_ptr + 1) = 1;
  return this_ptr;
}

