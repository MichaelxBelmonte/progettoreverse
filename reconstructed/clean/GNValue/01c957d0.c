// Function: FUN_01c957d0
// Address: 01c957d0
// Size: 2056 bytes
// Class: GNValue

int64_t * FUN_01c957d0(uint64_t param_1,int64_t *param_2)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  void*puVar4;
  void *pvVar5;
  int64_t lVar6;
  int64_t lVar7;
  int64_t arg1;
  int64_t *this_ptr;
  bool bVar8;
  int64_t lVar9;
  int64_t lVar10;
  bool bVar11;
  int64_t local_58;
  int64_t local_48;
  int64_t local_40;
  
  if (*(char *)(arg1 + 0x29) == '\0') {
    *(void*)(this_ptr + 1) = 0;
    lVar10 = *param_2;
    if ((char)param_2[1] == '\0') {
      if (lVar10 != 0) {
        FUN_00d50b00();
      }
      *this_ptr = lVar10;
      *(void*)(this_ptr + 1) = 1;
    }
    else {
      *this_ptr = lVar10;
      *(void*)(this_ptr + 1) = 1;
      *(void*)(param_2 + 1) = 0;
    }
  }
  else {
    puVar4 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar4 = &g_02572358;
    (*g_02572370)();
    local_40 = *param_2;
    FUN_00d214d0();
    if (*(int *)((int64_t)puVar4 + 0xc) < 2) {
      *this_ptr = (int64_t)puVar4;
      *(void*)(this_ptr + 1) = 1;
    }
    else {
      FUN_01271180();
      bVar11 = local_40 == 0;
      if (bVar11) {
        local_58 = 0;
      }
      else {
        FUN_00d50b00();
        local_58 = local_40;
      }
      if (*(int *)(local_58 + 0xc) < 1) {
        bVar8 = false;
        lVar10 = 0;
        bVar2 = false;
        local_48 = 0;
      }
      else {
        lVar7 = 0;
        local_48 = 0;
        bVar2 = false;
        lVar10 = 0;
        bVar8 = false;
        do {
          lVar9 = *(int64_t *)(*(int64_t *)(local_58 + 0x10) + lVar7 * 8);
          lVar6 = local_58;
          if (local_48 == lVar9) {
            if ((!bVar2) && (local_48 != 0)) {
              bVar2 = true;
              FUN_00d50b00();
            }
          }
          else {
            if (lVar9 != 0) {
              FUN_00d50b00();
            }
            if ((bVar2) && (local_48 != 0)) {
              FUN_00d50b20();
              bVar2 = true;
              local_48 = lVar9;
            }
            else {
              bVar2 = true;
              local_48 = lVar9;
            }
          }
          FUN_01266770();
          if (local_40 == lVar10) {
            bVar1 = bVar8;
            lVar9 = lVar10;
            if ((!bVar8) && (local_40 != 0)) {
              FUN_00d50b00();
              bVar1 = true;
            }
          }
          else {
            if (local_40 != 0) {
              FUN_00d50b00();
            }
            bVar1 = true;
            lVar9 = local_40;
            if ((bVar8) && (lVar10 != 0)) {
              FUN_00d50b20();
            }
          }
          while (lVar9 != 0) {
            pvVar5 = _pthread_getspecific((void*)lVar6);
            if (pvVar5 != (void *)0x0) {
              FUN_00e8b990();
            }
            cVar3 = FUN_01263cf0();
            if (((cVar3 == '\0') || (cVar3 = FUN_00d23d70(), local_40 = lVar9, cVar3 == '\0')) ||
               (cVar3 = FUN_00d23d70(), cVar3 == '\0')) goto LAB_01c95ce3;
            FUN_00d23f50();
            pvVar5 = _pthread_getspecific((void*)lVar6);
            if (pvVar5 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_012641c0();
            if ((!bVar1) && (lVar9 != 0)) {
              FUN_00d50b00();
              bVar1 = true;
            }
          }
          lVar9 = 0;
LAB_01c95ce3:
          FUN_01266b80();
          if (local_40 == lVar9) {
            bVar8 = bVar1;
            lVar10 = lVar9;
            if ((!bVar1) && (local_40 != 0)) {
              FUN_00d50b00();
              bVar8 = true;
            }
          }
          else {
            if (local_40 != 0) {
              FUN_00d50b00();
            }
            bVar8 = true;
            lVar10 = local_40;
            if ((bVar1) && (lVar9 != 0)) {
              FUN_00d50b20();
            }
          }
          while (lVar10 != 0) {
            pvVar5 = _pthread_getspecific((void*)lVar6);
            if (pvVar5 != (void *)0x0) {
              FUN_00e8b990();
            }
            cVar3 = FUN_01263cf0();
            if (((cVar3 == '\0') || (cVar3 = FUN_00d23d70(), local_40 = lVar10, cVar3 == '\0')) ||
               (cVar3 = FUN_00d23d70(), cVar3 == '\0')) goto LAB_01c95983;
            FUN_00d23f50();
            pvVar5 = _pthread_getspecific((void*)lVar6);
            if (pvVar5 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_012640f0();
            if ((!bVar8) && (lVar10 != 0)) {
              FUN_00d50b00();
              bVar8 = true;
            }
          }
          lVar10 = 0;
LAB_01c95983:
          lVar7 = lVar7 + 1;
        } while (lVar7 < *(int *)(local_58 + 0xc));
      }
      *this_ptr = (int64_t)puVar4;
      *(void*)(this_ptr + 1) = 1;
      if ((bVar8) && (lVar10 != 0)) {
        FUN_00d50b20();
      }
      if ((bVar2) && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if (!bVar11) {
        FUN_00d50b20();
      }
    }
  }
  return this_ptr;
}

