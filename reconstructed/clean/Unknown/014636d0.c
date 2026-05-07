// Function: FUN_014636d0
// Address: 014636d0
// Size: 682 bytes
// Class: Unknown

void FUN_014636d0(uint64_t param_1)

{
  bool bVar1;
  bool bVar2;
  int64_t lVar3;
  void *pvVar4;
  void* pVar5;
  int64_t lVar6;
  int64_t *arg1;
  int64_t lVar7;
  int64_t lVar8;
  int64_t lVar9;
  int64_t local_50;
  char local_48;
  
  FUN_00d242c0(param_1,0);
  lVar3 = *arg1;
  if (0 < *(int *)(lVar3 + 0xc)) {
    lVar9 = 0;
    lVar8 = 0;
    bVar2 = false;
    lVar7 = 0;
    lVar6 = 0;
    bVar1 = false;
    do {
      pVar5 = (void*)lVar6;
      lVar3 = *(int64_t *)(*(int64_t *)(lVar3 + 0x10) + lVar9 * 8);
      if (lVar7 == lVar3) {
        if ((!bVar1) && (lVar7 != 0)) {
          bVar1 = true;
          FUN_00d50b00();
        }
      }
      else {
        if (lVar3 != 0) {
          FUN_00d50b00();
        }
        if ((bVar1) && (lVar7 != 0)) {
          FUN_00d50b20();
          bVar1 = true;
          lVar7 = lVar3;
        }
        else {
          bVar1 = true;
          lVar7 = lVar3;
        }
      }
      pvVar4 = _pthread_getspecific(pVar5);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_014f60f0();
      if (lVar8 == local_50) {
        if ((bVar2) || (lVar8 == 0)) goto joined_r0x014638c1;
        bVar2 = true;
        if (local_48 == '\0') {
          FUN_00d50b00();
          lVar3 = lVar8;
          goto LAB_014638a4;
        }
      }
      else if (local_48 == '\0') {
        if (local_50 != 0) {
          FUN_00d50b00();
        }
        lVar3 = local_50;
        if ((bVar2) && (lVar8 != 0)) {
          FUN_00d50b20();
        }
LAB_014638a4:
        bVar2 = true;
        lVar8 = lVar3;
joined_r0x014638c1:
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
      }
      else if ((bVar2) && (lVar8 != 0)) {
        FUN_00d50b20();
        bVar2 = true;
        lVar8 = local_50;
      }
      else {
        bVar2 = true;
        lVar8 = local_50;
      }
      pvVar4 = _pthread_getspecific(pVar5);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013293f0();
      lVar9 = lVar9 + 1;
      lVar3 = *arg1;
      lVar6 = (int64_t)*(int *)(lVar3 + 0xc);
    } while (lVar9 < lVar6);
    if ((bVar1) && (lVar7 != 0)) {
      FUN_00d50b20();
    }
    if ((bVar2) && (lVar8 != 0)) {
      FUN_00d50b20();
    }
  }
  return;
}

