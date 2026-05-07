// Function: FUN_013d8180
// Address: 013d8180
// Size: 2634 bytes
// Class: Unknown

uint64_t FUN_013d8180(void* param_1)

{
  int iVar1;
  int iVar2;
  int64_t lVar3;
  char cVar4;
  void *pvVar5;
  int64_t lVar6;
  int64_t lVar7;
  int64_t lVar8;
  int64_t lVar9;
  int64_t *arg1;
  int64_t this_ptr;
  uint64_t unaff_R12;
  uint64_t uVar10;
  bool bVar11;
  float fVar12;
  float fVar13;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  
  lVar3 = *(int64_t *)(this_ptr + 0x40);
  if (lVar3 != 0) {
    FUN_00d50b00();
  }
  lVar9 = *arg1;
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    lVar9 = *arg1;
    lVar6 = FUN_00e8b990();
    if (lVar6 != 0) {
      lVar9 = *(int64_t *)(lVar9 + 0x20 + (uint64_t)(*(uint *)(lVar6 + 0x154) & 1) * 8);
    }
  }
  lVar9 = *(int64_t *)(lVar9 + 0x40);
  if (lVar9 != 0) {
    FUN_00d50b00();
  }
  if (*(int *)(lVar3 + 0xc) == *(int *)(lVar9 + 0xc)) {
    if (*(int *)(lVar3 + 0xc) < 1) {
      uVar10 = CONCAT71((int7)((uint64_t)unaff_R12 >> 8),1);
    }
    else {
      lVar6 = 0;
      do {
        pvVar5 = _pthread_getspecific(param_1);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        lVar7 = FUN_013de650();
        pvVar5 = _pthread_getspecific(param_1);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        lVar8 = FUN_013de650();
        if (lVar7 != lVar8) {
LAB_013d8c3d:
          uVar10 = 0;
          goto joined_r0x013d8c43;
        }
        pvVar5 = _pthread_getspecific(param_1);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        lVar7 = FUN_013de790();
        pvVar5 = _pthread_getspecific(param_1);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        lVar8 = FUN_013de790();
        if (lVar7 != lVar8) goto LAB_013d8c3d;
        pvVar5 = _pthread_getspecific(param_1);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        lVar7 = FUN_013deb20();
        pvVar5 = _pthread_getspecific(param_1);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        lVar8 = FUN_013deb20();
        if (lVar7 != lVar8) goto LAB_013d8c3d;
        pvVar5 = _pthread_getspecific(param_1);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        cVar4 = FUN_013de410();
        if (cVar4 != '\0') {
          pvVar5 = _pthread_getspecific(param_1);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          cVar4 = FUN_013de410();
          if (cVar4 == '\0') goto LAB_013d8c3d;
        }
        pvVar5 = _pthread_getspecific(param_1);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        cVar4 = FUN_013de410();
        if (cVar4 == '\0') {
          pvVar5 = _pthread_getspecific(param_1);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          cVar4 = FUN_013de410();
          if (cVar4 != '\0') goto LAB_013d8c3d;
        }
        pvVar5 = _pthread_getspecific(param_1);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        cVar4 = FUN_013de410();
        if (cVar4 != '\0') {
          pvVar5 = _pthread_getspecific(param_1);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          cVar4 = FUN_013de410();
          if (cVar4 != '\0') {
            pvVar5 = _pthread_getspecific(param_1);
            if (pvVar5 != (void *)0x0) {
              FUN_00e8b990();
            }
            fVar12 = (float)FUN_013de3b0();
            pvVar5 = _pthread_getspecific(param_1);
            if (pvVar5 != (void *)0x0) {
              FUN_00e8b990();
            }
            fVar13 = (float)FUN_013de3b0();
            if ((fVar12 != fVar13) || (NAN(fVar12) || NAN(fVar13))) goto LAB_013d8c3d;
          }
        }
        pvVar5 = _pthread_getspecific(param_1);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_013df790();
        iVar1 = *(int *)(local_60 + 0xc);
        pvVar5 = _pthread_getspecific(param_1);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_013df790();
        iVar2 = *(int *)(local_70 + 0xc);
        if ((local_68 != '\0') && (local_70 != 0)) {
          FUN_00d50b20();
        }
        if ((local_58 != '\0') && (local_60 != 0)) {
          FUN_00d50b20();
        }
        if (iVar1 != iVar2) goto LAB_013d8c3d;
        pvVar5 = _pthread_getspecific(param_1);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_013e5de0();
        if (local_60 == 0) {
          bVar11 = false;
        }
        else {
          pvVar5 = _pthread_getspecific(param_1);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_013e5de0();
          bVar11 = local_70 == 0;
          if ((local_68 != '\0') && (local_70 != 0)) {
            FUN_00d50b20();
          }
        }
        if ((local_58 != '\0') && (local_60 != 0)) {
          FUN_00d50b20();
        }
        if (bVar11) goto LAB_013d8c3d;
        pvVar5 = _pthread_getspecific(param_1);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_013e5de0();
        if (local_60 == 0) {
          pvVar5 = _pthread_getspecific(param_1);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_013e5de0();
          bVar11 = local_70 != 0;
          if ((local_68 != '\0') && (local_70 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          bVar11 = false;
        }
        if ((local_58 != '\0') && (local_60 != 0)) {
          FUN_00d50b20();
        }
        if (bVar11) goto LAB_013d8c3d;
        pvVar5 = _pthread_getspecific(param_1);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_013e61a0();
        if (local_60 == 0) {
          bVar11 = false;
        }
        else {
          pvVar5 = _pthread_getspecific(param_1);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_013e61a0();
          bVar11 = local_70 == 0;
          if ((local_68 != '\0') && (local_70 != 0)) {
            FUN_00d50b20();
          }
        }
        if ((local_58 != '\0') && (local_60 != 0)) {
          FUN_00d50b20();
        }
        if (bVar11) goto LAB_013d8c3d;
        pvVar5 = _pthread_getspecific(param_1);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_013e61a0();
        if (local_60 == 0) {
          pvVar5 = _pthread_getspecific(param_1);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_013e61a0();
          uVar10 = CONCAT71(0x28025,local_70 != 0);
          if ((local_68 != '\0') && (local_70 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          uVar10 = 0;
        }
        if ((local_58 != '\0') && (local_60 != 0)) {
          FUN_00d50b20();
        }
      } while (((char)uVar10 == '\0') && (lVar6 = lVar6 + 1, lVar6 < *(int *)(lVar3 + 0xc)));
      uVar10 = uVar10 ^ 1;
    }
  }
  else {
    uVar10 = 0;
  }
joined_r0x013d8c43:
  if (lVar9 != 0) {
    FUN_00d50b20();
  }
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  return uVar10 & 0xffffffff;
}

