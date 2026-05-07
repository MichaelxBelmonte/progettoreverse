// Function: FUN_01c44700
// Address: 01c44700
// Size: 1229 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_01c44700(uint64_t param_1,int64_t *param_2)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  void*puVar4;
  void *pvVar5;
  void*puVar6;
  int64_t lVar7;
  uint64_t uVar8;
  double dVar9;
  double dVar10;
  int64_t local_80;
  char local_78;
  int64_t local_40;
  char local_38;
  
  puVar4 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  puVar6 = &g_02572358;
  *puVar4 = &g_02572358;
  (*g_02572370)();
  lVar1 = *param_2;
  if (lVar1 != 0) {
    if (0 < *(int *)(lVar1 + 0xc)) {
      lVar7 = 0;
      do {
        lVar3 = local_40;
        lVar2 = *(int64_t *)(*(int64_t *)(lVar1 + 0x10) + lVar7 * 8);
        pvVar5 = _pthread_getspecific((void*)puVar6);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0125e930();
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if (local_40 != 0) {
          pvVar5 = _pthread_getspecific((void*)puVar6);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0125e930();
          pvVar5 = _pthread_getspecific((void*)puVar6);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0152ebe0();
          if (local_38 == '\0') {
            if (local_40 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_38 = '\0';
          }
          if ((local_78 != '\0') && (local_80 != 0)) {
            FUN_00d50b20();
          }
          pvVar5 = _pthread_getspecific((void*)puVar6);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          pvVar5 = _pthread_getspecific((void*)puVar6);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          uVar8 = FUN_01507970();
          dVar9 = (double)FUN_016c98e0(uVar8,0);
          pvVar5 = _pthread_getspecific((void*)puVar6);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          pvVar5 = _pthread_getspecific((void*)puVar6);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          uVar8 = FUN_01507970();
          dVar10 = (double)FUN_016c98e0(uVar8,0);
          if ((dVar9 != dVar10) || (NAN(dVar9) || NAN(dVar10))) {
LAB_01c44b5c:
            local_38 = '\0';
            FUN_00d21140();
            local_40 = lVar2;
          }
          else {
            pvVar5 = _pthread_getspecific((void*)puVar6);
            if (pvVar5 != (void *)0x0) {
              FUN_00e8b990();
            }
            pvVar5 = _pthread_getspecific((void*)puVar6);
            if (pvVar5 != (void *)0x0) {
              FUN_00e8b990();
            }
            uVar8 = FUN_01508610();
            dVar9 = (double)FUN_016c98e0(uVar8,0);
            pvVar5 = _pthread_getspecific((void*)puVar6);
            if (pvVar5 != (void *)0x0) {
              FUN_00e8b990();
            }
            pvVar5 = _pthread_getspecific((void*)puVar6);
            if (pvVar5 != (void *)0x0) {
              FUN_00e8b990();
            }
            uVar8 = FUN_01508610();
            dVar10 = (double)FUN_016c98e0(uVar8,0);
            if ((dVar9 != dVar10) || (NAN(dVar9) || NAN(dVar10))) goto LAB_01c44b5c;
          }
          if (lVar3 != 0) {
            FUN_00d50b20();
          }
        }
        lVar7 = lVar7 + 1;
      } while ((int)lVar7 < *(int *)(lVar1 + 0xc));
    }
    FUN_001159b0();
  }
  FUN_00e7bdb0();
  FUN_01287c80();
  if (puVar4 != (void*)0x0) {
    FUN_00d50b20();
  }
  return;
}

