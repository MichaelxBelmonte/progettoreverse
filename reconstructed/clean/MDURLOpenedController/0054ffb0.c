// Function: FUN_0054ffb0
// Address: 0054ffb0
// Size: 1631 bytes
// Class: MDURLOpenedController

void FUN_0054ffb0(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  double dVar1;
  double dVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  int64_t lVar6;
  bool bVar7;
  int64_t lVar8;
  void *pvVar9;
  int64_t lVar10;
  void* pVar11;
  int64_t this_ptr;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  int64_t local_a0;
  char local_98;
  int64_t local_70;
  char local_68;
  int local_58;
  int64_t local_40;
  char local_38;
  
  dVar12 = (double)FUN_01266200(param_1,param_2,param_3,param_4,param_2);
  dVar13 = (double)FUN_012664b0();
  do {
    lVar6 = local_70;
    lVar8 = *(int64_t *)(this_ptr + 0x38);
    if (lVar8 != 0) {
      FUN_00d50b00();
    }
    FUN_0054fec0();
    if (local_68 == '\0') {
      if (local_70 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_68 = '\0';
    }
    if (lVar8 != 0) {
      FUN_00d50b20();
    }
    if (local_70 == 0) {
      return;
    }
    iVar3 = *(int *)(local_70 + 0xc);
    if (iVar3 == 0) {
      bVar7 = false;
    }
    else {
      local_68 = '\0';
      local_70 = 0;
      local_58 = -1;
      bVar7 = false;
      do {
        do {
          lVar8 = (int64_t)local_58;
          local_58 = local_58 + 1;
          if (*(int *)(lVar6 + 0xc) <= local_58) goto LAB_005505c0;
          lVar10 = *(int64_t *)(lVar6 + 0x10);
          local_70 = *(int64_t *)(lVar10 + 8 + lVar8 * 8);
          pvVar9 = _pthread_getspecific((void*)lVar10);
          pVar11 = (void*)lVar10;
          lVar8 = local_70;
          if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
            lVar8 = *(int64_t *)(local_70 + 0x20 + (uint64_t)(*(uint *)(lVar10 + 0x154) & 1) * 8);
          }
          dVar15 = *(double *)(lVar8 + 0x38);
          dVar1 = *(double *)(lVar8 + 0x48);
          if ((*(double *)(lVar8 + 0x40) <= dVar15) ||
             ((dVar1 < *(double *)(lVar8 + 0x50) && (dVar1 < dVar15)))) {
            dVar15 = dVar1;
          }
          pvVar9 = _pthread_getspecific(pVar11);
          lVar8 = local_70;
          if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
            lVar8 = *(int64_t *)(local_70 + 0x20 + (uint64_t)(*(uint *)(lVar10 + 0x154) & 1) * 8);
          }
          dVar1 = *(double *)(lVar8 + 0x40);
          if (dVar1 <= *(double *)(lVar8 + 0x38)) {
            dVar14 = *(double *)(lVar8 + 0x50);
          }
          else {
            dVar2 = *(double *)(lVar8 + 0x50);
            dVar14 = dVar1;
            if ((*(double *)(lVar8 + 0x48) <= dVar2 && dVar2 != *(double *)(lVar8 + 0x48)) &&
               (dVar14 = dVar2, dVar2 <= dVar1)) {
              dVar14 = dVar1;
            }
          }
        } while (((dVar13 <= dVar12) || (dVar14 <= dVar15)) ||
                (((dVar12 < dVar15 || (dVar14 <= dVar12)) &&
                 ((dVar13 <= dVar15 || (dVar14 < dVar12))))));
        pvVar9 = _pthread_getspecific(pVar11);
        if (pvVar9 != (void *)0x0) {
          FUN_00e8b990();
        }
        pvVar9 = _pthread_getspecific(pVar11);
        lVar8 = local_70;
        if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
          lVar8 = *(int64_t *)(local_70 + 0x20 + (uint64_t)(*(uint *)(lVar10 + 0x154) & 1) * 8);
        }
        dVar15 = *(double *)(lVar8 + 0x38);
        dVar1 = *(double *)(lVar8 + 0x48);
        if ((*(double *)(lVar8 + 0x40) <= dVar15) ||
           ((dVar1 < *(double *)(lVar8 + 0x50) && (dVar1 < dVar15)))) {
          dVar15 = dVar1;
        }
        pvVar9 = _pthread_getspecific(pVar11);
        lVar8 = local_70;
        if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
          lVar8 = *(int64_t *)(local_70 + 0x20 + (uint64_t)(*(uint *)(lVar10 + 0x154) & 1) * 8);
        }
        dVar1 = *(double *)(lVar8 + 0x40);
        if (dVar1 <= *(double *)(lVar8 + 0x38)) {
          dVar14 = *(double *)(lVar8 + 0x50);
        }
        else {
          dVar2 = *(double *)(lVar8 + 0x50);
          dVar14 = dVar1;
          if ((*(double *)(lVar8 + 0x48) <= dVar2 && dVar2 != *(double *)(lVar8 + 0x48)) &&
             (dVar14 = dVar2, dVar2 <= dVar1)) {
            dVar14 = dVar1;
          }
        }
        FUN_012e9900(dVar15,dVar14);
        if (local_98 == '\0') {
          if (local_a0 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_98 = '\0';
        }
        FUN_00243390();
        if (local_38 == '\0') {
          if (local_40 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        if (local_a0 != 0) {
          FUN_00d50b20();
        }
        if ((local_98 != '\0') && (local_a0 != 0)) {
          FUN_00d50b20();
        }
        if (local_40 == 0) {
LAB_00550553:
          if (local_40 != 0) goto LAB_00550558;
          bVar5 = true;
LAB_00550575:
          FUN_0054df20();
          bVar7 = true;
          bVar4 = false;
          if (!bVar5) goto LAB_005505aa;
        }
        else {
          if (*(int *)(local_40 + 0xc) != 0) {
            FUN_00550890();
            if ((local_38 != '\0') && (local_40 != 0)) {
              FUN_00d50b20();
            }
            goto LAB_00550553;
          }
LAB_00550558:
          bVar4 = true;
          bVar5 = false;
          if (*(int *)(local_40 + 0xc) == 0) goto LAB_00550575;
LAB_005505aa:
          FUN_00d50b20();
        }
      } while (bVar4);
LAB_005505c0:
      FUN_0032bfd0();
    }
    FUN_00d50b20();
    if (iVar3 == 0) {
      return;
    }
    if (!bVar7) {
      return;
    }
  } while( true );
}

