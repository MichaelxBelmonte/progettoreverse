// Function: FUN_013ee110
// Address: 013ee110
// Size: 2772 bytes
// Class: Unknown

void FUN_013ee110(double param_1,double param_2)

{
  char cVar1;
  void* pVar2;
  int64_t lVar3;
  void *pvVar4;
  void* pVar5;
  int64_t lVar6;
  int64_t lVar7;
  int64_t *arg1;
  int64_t this_ptr;
  int64_t lVar8;
  int64_t lVar9;
  bool bVar10;
  bool bVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  uint8_t auVar17 [16];
  uint8_t auVar18 [16];
  
  lVar3 = *arg1;
  if (0 < *(int *)(lVar3 + 0xc)) {
    lVar7 = 0;
    do {
      lVar3 = *(int64_t *)(*(int64_t *)(lVar3 + 0x10) + lVar7 * 8);
      if (lVar3 != 0) {
        FUN_00d50b00();
      }
      pVar2 = FUN_00d237a0();
      if ((int)pVar2 < 1) {
        bVar10 = false;
        lVar8 = 0;
      }
      else {
        lVar8 = *(int64_t *)
                 (*(int64_t *)(*(int64_t *)(this_ptr + 0x48) + 0x10) + (uint64_t)(pVar2 - 1) * 8
                 );
        bVar10 = lVar8 != 0;
        if (bVar10) {
          FUN_00d50b00();
        }
        cVar1 = FUN_00d24090();
        if ((cVar1 != '\0') && (lVar8 != 0)) {
          lVar8 = 0;
          FUN_00d50b20();
          bVar10 = false;
        }
      }
      pVar5 = *(int *)(*(int64_t *)(this_ptr + 0x48) + 0xc) - 1;
      if ((int)pVar2 < (int)pVar5) {
        lVar6 = (int64_t)(int)pVar2;
        lVar9 = *(int64_t *)(*(int64_t *)(*(int64_t *)(this_ptr + 0x48) + 0x10) + 8 + lVar6 * 8)
        ;
        bVar11 = lVar9 != 0;
        pVar5 = pVar2;
        if (bVar11) {
          FUN_00d50b00();
          pVar5 = (void*)lVar6;
        }
        cVar1 = FUN_00d24090();
        if ((cVar1 != '\0') && (lVar9 != 0)) {
          FUN_00d50b20();
          goto LAB_013ee2f5;
        }
      }
      else {
LAB_013ee2f5:
        bVar11 = false;
        lVar9 = 0;
      }
      if (lVar8 != 0) {
        pvVar4 = _pthread_getspecific(pVar5);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0142c910();
        pvVar4 = _pthread_getspecific(pVar5);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0142c960();
        pvVar4 = _pthread_getspecific(pVar5);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar12 = (double)FUN_013faed0();
        pvVar4 = _pthread_getspecific(pVar5);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar13 = (double)FUN_013faed0();
        pvVar4 = _pthread_getspecific(pVar5);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar14 = (double)FUN_013faf20();
        pvVar4 = _pthread_getspecific(pVar5);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar15 = (double)FUN_013faf20();
        pvVar4 = _pthread_getspecific(pVar5);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar16 = (double)FUN_0142c9b0();
        pvVar4 = _pthread_getspecific(pVar5);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0142cad0((SQRT(((dVar14 - dVar15) + param_2) * ((dVar12 - dVar13) + param_1)) * dVar16)
                     / SQRT((dVar12 - dVar13) * (dVar14 - dVar15)));
        pvVar4 = _pthread_getspecific(pVar5);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0142c870();
        pvVar4 = _pthread_getspecific(pVar5);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0142c8c0();
        pvVar4 = _pthread_getspecific(pVar5);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar12 = (double)FUN_013faed0();
        pvVar4 = _pthread_getspecific(pVar5);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar13 = (double)FUN_013faed0();
        pvVar4 = _pthread_getspecific(pVar5);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar14 = (double)FUN_013faf20();
        pvVar4 = _pthread_getspecific(pVar5);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar15 = (double)FUN_013faf20();
        pvVar4 = _pthread_getspecific(pVar5);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar16 = (double)FUN_0142c9e0();
        pvVar4 = _pthread_getspecific(pVar5);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar12 = dVar12 - dVar13;
        auVar17._0_8_ = dVar12 + param_1;
        auVar17._8_8_ = dVar12;
        auVar18._8_8_ = (dVar14 - dVar15) * dVar12;
        auVar18._0_8_ = ((dVar14 - dVar15) + param_2) * auVar17._0_8_;
        auVar18 = sqrtpd(auVar17,auVar18);
        FUN_0142cb80((auVar18._0_8_ / auVar18._8_8_) * dVar16);
      }
      if (lVar9 != 0) {
        pvVar4 = _pthread_getspecific(pVar5);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0142c910();
        pvVar4 = _pthread_getspecific(pVar5);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0142c960();
        pvVar4 = _pthread_getspecific(pVar5);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar12 = (double)FUN_013faed0();
        pvVar4 = _pthread_getspecific(pVar5);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar13 = (double)FUN_013faed0();
        pvVar4 = _pthread_getspecific(pVar5);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar14 = (double)FUN_013faf20();
        pvVar4 = _pthread_getspecific(pVar5);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar15 = (double)FUN_013faf20();
        pvVar4 = _pthread_getspecific(pVar5);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar16 = (double)FUN_0142c9b0();
        pvVar4 = _pthread_getspecific(pVar5);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0142cad0((SQRT(((dVar14 - dVar15) - param_2) * ((dVar12 - dVar13) - param_1)) * dVar16)
                     / SQRT((dVar12 - dVar13) * (dVar14 - dVar15)));
        pvVar4 = _pthread_getspecific(pVar5);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0142c870();
        pvVar4 = _pthread_getspecific(pVar5);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0142c8c0();
        pvVar4 = _pthread_getspecific(pVar5);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar12 = (double)FUN_013faed0();
        pvVar4 = _pthread_getspecific(pVar5);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar13 = (double)FUN_013faed0();
        pvVar4 = _pthread_getspecific(pVar5);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar14 = (double)FUN_013faf20();
        pvVar4 = _pthread_getspecific(pVar5);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar15 = (double)FUN_013faf20();
        pvVar4 = _pthread_getspecific(pVar5);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar16 = (double)FUN_0142c9e0();
        pvVar4 = _pthread_getspecific(pVar5);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0142cb80((SQRT(((dVar14 - dVar15) - param_2) * ((dVar12 - dVar13) - param_1)) * dVar16)
                     / SQRT((dVar12 - dVar13) * (dVar14 - dVar15)));
      }
      pvVar4 = _pthread_getspecific(pVar5);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      pvVar4 = _pthread_getspecific(pVar5);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar12 = (double)FUN_013faed0();
      FUN_013fae90(dVar12 + param_1);
      pvVar4 = _pthread_getspecific(pVar5);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      pvVar4 = _pthread_getspecific(pVar5);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar12 = (double)FUN_013faf20();
      FUN_013faee0(dVar12 + param_2);
      if ((bVar10) && (lVar8 != 0)) {
        FUN_00d50b20();
      }
      if ((bVar11) && (lVar9 != 0)) {
        FUN_00d50b20();
      }
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar7 = lVar7 + 1;
      lVar3 = *arg1;
    } while (lVar7 < *(int *)(lVar3 + 0xc));
  }
  return;
}

