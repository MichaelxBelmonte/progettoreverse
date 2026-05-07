// Function: FUN_013f18d0
// Address: 013f18d0
// Size: 2201 bytes
// Class: MUDataPointFunction

uint64_t FUN_013f18d0(uint64_t param_1)

{
  double dVar1;
  char *pcVar2;
  void *pvVar3;
  int64_t lVar4;
  int64_t lVar5;
  void* pVar6;
  uint64_t unaff_RBX;
  uint64_t uVar7;
  char *pcVar8;
  int64_t lVar9;
  int64_t this_ptr;
  int64_t lVar10;
  int64_t local_60;
  char local_58 [8];
  double local_50;
  double local_48;
  char local_40 [8];
  char local_38 [8];
  
  local_38[0] = '\0';
  if (*(int *)(*(int64_t *)(this_ptr + 0x48) + 0xc) == 0) {
    uVar7 = CONCAT71((int7)((uint64_t)unaff_RBX >> 8),1);
    goto LAB_013f21f6;
  }
  FUN_00d23310();
  lVar5 = CONCAT71((int7)((uint64_t)param_1 >> 8),local_58[0]);
  local_40[0] = local_58[0];
  pcVar8 = local_40;
  pcVar2 = local_58;
  if (local_58[0] == '\0') {
    pcVar2 = pcVar8;
  }
  *pcVar2 = '\0';
  if ((local_58[0] != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if (local_60 == 0) {
    local_60 = 0;
  }
  else if (local_40[0] == '\0') {
    pcVar8 = local_38;
    local_38[0] = '\0';
  }
  else {
    local_38[0] = '\x01';
    local_40[0] = '\0';
  }
  pvVar3 = _pthread_getspecific((void*)lVar5);
  if ((pvVar3 == (void *)0x0) || (lVar4 = FUN_00e8b990(), lVar4 == 0)) {
    if (!NAN(*(double *)(local_60 + 0x38))) goto LAB_013f19b6;
LAB_013f21e1:
    uVar7 = 0;
  }
  else {
    if (NAN(*(double *)
             (*(int64_t *)(local_60 + 0x20 + (uint64_t)(*(uint *)(lVar4 + 0x154) & 1) * 8) + 0x38)
           )) goto LAB_013f21e1;
LAB_013f19b6:
    pvVar3 = _pthread_getspecific((void*)lVar5);
    if ((pvVar3 == (void *)0x0) || (lVar4 = FUN_00e8b990(), lVar4 == 0)) {
      if (!NAN(*(double *)(local_60 + 0x40))) goto LAB_013f1a01;
      goto LAB_013f21e1;
    }
    if (NAN(*(double *)
             (*(int64_t *)(local_60 + 0x20 + (uint64_t)(*(uint *)(lVar4 + 0x154) & 1) * 8) + 0x40)
           )) goto LAB_013f21e1;
LAB_013f1a01:
    lVar4 = *(int64_t *)(this_ptr + 0x48);
    uVar7 = CONCAT71((int7)((uint64_t)pcVar8 >> 8),1);
    if (1 < *(int *)(lVar4 + 0xc)) {
      lVar10 = 1;
      do {
        lVar9 = *(int64_t *)(*(int64_t *)(lVar4 + 0x10) + lVar10 * 8);
        pVar6 = (void*)lVar5;
        pvVar3 = _pthread_getspecific(pVar6);
        if ((pvVar3 == (void *)0x0) || (lVar5 = FUN_00e8b990(), lVar5 == 0)) {
          dVar1 = *(double *)(lVar9 + 0x38);
        }
        else {
          dVar1 = *(double *)
                   (*(int64_t *)(lVar9 + 0x20 + (uint64_t)(*(uint *)(lVar5 + 0x154) & 1) * 8) +
                   0x38);
        }
        if (NAN(dVar1)) goto LAB_013f21e1;
        pvVar3 = _pthread_getspecific(pVar6);
        if ((pvVar3 == (void *)0x0) || (lVar5 = FUN_00e8b990(), lVar5 == 0)) {
          dVar1 = *(double *)(lVar9 + 0x40);
        }
        else {
          dVar1 = *(double *)
                   (*(int64_t *)(lVar9 + 0x20 + (uint64_t)(*(uint *)(lVar5 + 0x154) & 1) * 8) +
                   0x40);
        }
        if (NAN(dVar1)) goto LAB_013f21e1;
        pvVar3 = _pthread_getspecific(pVar6);
        lVar5 = local_60;
        if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
          lVar5 = *(int64_t *)(local_60 + 0x20 + (uint64_t)(*(uint *)(lVar4 + 0x154) & 1) * 8);
        }
        local_48 = *(double *)(lVar5 + 0x38);
        pvVar3 = _pthread_getspecific(pVar6);
        if ((pvVar3 == (void *)0x0) || (lVar5 = FUN_00e8b990(), lVar5 == 0)) {
          if (*(double *)(lVar9 + 0x38) <= local_48) goto LAB_013f21e1;
        }
        else if (*(double *)
                  (*(int64_t *)(lVar9 + 0x20 + (uint64_t)(*(uint *)(lVar5 + 0x154) & 1) * 8) +
                  0x38) <= local_48) goto LAB_013f21e1;
        pvVar3 = _pthread_getspecific(pVar6);
        lVar5 = local_60;
        if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
          lVar5 = *(int64_t *)(local_60 + 0x20 + (uint64_t)(*(uint *)(lVar4 + 0x154) & 1) * 8);
        }
        local_48 = *(double *)(lVar5 + 0x40);
        pvVar3 = _pthread_getspecific(pVar6);
        if ((pvVar3 == (void *)0x0) || (lVar5 = FUN_00e8b990(), lVar5 == 0)) {
          if (*(double *)(lVar9 + 0x40) <= local_48) goto LAB_013f21e1;
        }
        else if (*(double *)
                  (*(int64_t *)(lVar9 + 0x20 + (uint64_t)(*(uint *)(lVar5 + 0x154) & 1) * 8) +
                  0x40) <= local_48) goto LAB_013f21e1;
        pvVar3 = _pthread_getspecific(pVar6);
        if ((pvVar3 == (void *)0x0) || (lVar5 = FUN_00e8b990(), lVar5 == 0)) {
          if (g_02390448 <= *(double *)(local_60 + 0x60)) goto LAB_013f21e1;
        }
        else if (g_02390448 <=
                 *(double *)
                  (*(int64_t *)(local_60 + 0x20 + (uint64_t)(*(uint *)(lVar5 + 0x154) & 1) * 8) +
                  0x60)) goto LAB_013f21e1;
        pvVar3 = _pthread_getspecific(pVar6);
        if ((pvVar3 == (void *)0x0) || (lVar5 = FUN_00e8b990(), lVar5 == 0)) {
          if (g_02390448 <= *(double *)(local_60 + 0x68)) goto LAB_013f21e1;
        }
        else if (g_02390448 <=
                 *(double *)
                  (*(int64_t *)(local_60 + 0x20 + (uint64_t)(*(uint *)(lVar5 + 0x154) & 1) * 8) +
                  0x68)) goto LAB_013f21e1;
        pvVar3 = _pthread_getspecific(pVar6);
        if ((pvVar3 == (void *)0x0) || (lVar5 = FUN_00e8b990(), lVar5 == 0)) {
          dVar1 = *(double *)(local_60 + 0x70);
        }
        else {
          dVar1 = *(double *)
                   (*(int64_t *)(local_60 + 0x20 + (uint64_t)(*(uint *)(lVar5 + 0x154) & 1) * 8) +
                   0x70);
        }
        if (dVar1 <= 0.0) goto LAB_013f21e1;
        pvVar3 = _pthread_getspecific(pVar6);
        if ((pvVar3 == (void *)0x0) || (lVar5 = FUN_00e8b990(), lVar5 == 0)) {
          dVar1 = *(double *)(local_60 + 0x78);
        }
        else {
          dVar1 = *(double *)
                   (*(int64_t *)(local_60 + 0x20 + (uint64_t)(*(uint *)(lVar5 + 0x154) & 1) * 8) +
                   0x78);
        }
        if (dVar1 <= 0.0) goto LAB_013f21e1;
        pvVar3 = _pthread_getspecific(pVar6);
        if ((pvVar3 == (void *)0x0) || (lVar5 = FUN_00e8b990(), lVar5 == 0)) {
          if (g_02390448 <= *(double *)(lVar9 + 0x60)) goto LAB_013f21e1;
        }
        else if (g_02390448 <=
                 *(double *)
                  (*(int64_t *)(lVar9 + 0x20 + (uint64_t)(*(uint *)(lVar5 + 0x154) & 1) * 8) +
                  0x60)) goto LAB_013f21e1;
        pvVar3 = _pthread_getspecific(pVar6);
        if ((pvVar3 == (void *)0x0) || (lVar5 = FUN_00e8b990(), lVar5 == 0)) {
          if (g_02390448 <= *(double *)(lVar9 + 0x68)) goto LAB_013f21e1;
        }
        else if (g_02390448 <=
                 *(double *)
                  (*(int64_t *)(lVar9 + 0x20 + (uint64_t)(*(uint *)(lVar5 + 0x154) & 1) * 8) +
                  0x68)) goto LAB_013f21e1;
        pvVar3 = _pthread_getspecific(pVar6);
        if ((pvVar3 == (void *)0x0) || (lVar5 = FUN_00e8b990(), lVar5 == 0)) {
          dVar1 = *(double *)(lVar9 + 0x70);
        }
        else {
          dVar1 = *(double *)
                   (*(int64_t *)(lVar9 + 0x20 + (uint64_t)(*(uint *)(lVar5 + 0x154) & 1) * 8) +
                   0x70);
        }
        if (dVar1 <= 0.0) goto LAB_013f21e1;
        pvVar3 = _pthread_getspecific(pVar6);
        if ((pvVar3 == (void *)0x0) || (lVar5 = FUN_00e8b990(), lVar5 == 0)) {
          dVar1 = *(double *)(lVar9 + 0x78);
        }
        else {
          dVar1 = *(double *)
                   (*(int64_t *)(lVar9 + 0x20 + (uint64_t)(*(uint *)(lVar5 + 0x154) & 1) * 8) +
                   0x78);
        }
        if (dVar1 <= 0.0) goto LAB_013f21e1;
        pvVar3 = _pthread_getspecific(pVar6);
        lVar5 = local_60;
        if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
          lVar5 = *(int64_t *)(local_60 + 0x20 + (uint64_t)(*(uint *)(lVar4 + 0x154) & 1) * 8);
        }
        local_48 = *(double *)(lVar5 + 0x38);
        pvVar3 = _pthread_getspecific(pVar6);
        lVar5 = local_60;
        if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
          lVar5 = *(int64_t *)(local_60 + 0x20 + (uint64_t)(*(uint *)(lVar4 + 0x154) & 1) * 8);
        }
        local_50 = *(double *)(lVar5 + 0x70);
        pvVar3 = _pthread_getspecific(pVar6);
        if ((pvVar3 == (void *)0x0) || (lVar5 = FUN_00e8b990(), lVar5 == 0)) {
          if (*(double *)(lVar9 + 0x38) <= local_48 + local_50) goto LAB_013f21e1;
        }
        else if (*(double *)
                  (*(int64_t *)(lVar9 + 0x20 + (uint64_t)(*(uint *)(lVar5 + 0x154) & 1) * 8) +
                  0x38) <= local_48 + local_50) goto LAB_013f21e1;
        pvVar3 = _pthread_getspecific(pVar6);
        lVar5 = local_60;
        if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
          lVar5 = *(int64_t *)(local_60 + 0x20 + (uint64_t)(*(uint *)(lVar4 + 0x154) & 1) * 8);
        }
        local_48 = *(double *)(lVar5 + 0x40);
        pvVar3 = _pthread_getspecific(pVar6);
        lVar5 = local_60;
        if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
          lVar5 = *(int64_t *)(local_60 + 0x20 + (uint64_t)(*(uint *)(lVar4 + 0x154) & 1) * 8);
        }
        local_50 = *(double *)(lVar5 + 0x78);
        pvVar3 = _pthread_getspecific(pVar6);
        if ((pvVar3 == (void *)0x0) || (lVar5 = FUN_00e8b990(), lVar5 == 0)) {
          if (*(double *)(lVar9 + 0x40) <= local_48 + local_50) goto LAB_013f21e1;
        }
        else if (*(double *)
                  (*(int64_t *)(lVar9 + 0x20 + (uint64_t)(*(uint *)(lVar5 + 0x154) & 1) * 8) +
                  0x40) <= local_48 + local_50) goto LAB_013f21e1;
        pvVar3 = _pthread_getspecific(pVar6);
        lVar5 = lVar9;
        if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
          lVar5 = *(int64_t *)(lVar9 + 0x20 + (uint64_t)(*(uint *)(lVar4 + 0x154) & 1) * 8);
        }
        local_48 = *(double *)(lVar5 + 0x38);
        pvVar3 = _pthread_getspecific(pVar6);
        lVar5 = lVar9;
        if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
          lVar5 = *(int64_t *)(lVar9 + 0x20 + (uint64_t)(*(uint *)(lVar4 + 0x154) & 1) * 8);
        }
        local_50 = *(double *)(lVar5 + 0x60);
        pvVar3 = _pthread_getspecific(pVar6);
        lVar5 = local_60;
        if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
          lVar5 = *(int64_t *)(local_60 + 0x20 + (uint64_t)(*(uint *)(lVar4 + 0x154) & 1) * 8);
        }
        if (local_48 + local_50 <= *(double *)(lVar5 + 0x38)) goto LAB_013f21e1;
        pvVar3 = _pthread_getspecific(pVar6);
        lVar5 = lVar9;
        if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
          lVar5 = *(int64_t *)(lVar9 + 0x20 + (uint64_t)(*(uint *)(lVar4 + 0x154) & 1) * 8);
        }
        local_48 = *(double *)(lVar5 + 0x40);
        pvVar3 = _pthread_getspecific(pVar6);
        if ((pvVar3 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
          lVar9 = *(int64_t *)(lVar9 + 0x20 + (uint64_t)(*(uint *)(lVar5 + 0x154) & 1) * 8);
        }
        local_50 = *(double *)(lVar9 + 0x68);
        pvVar3 = _pthread_getspecific(pVar6);
        lVar5 = local_60;
        if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
          lVar5 = *(int64_t *)(local_60 + 0x20 + (uint64_t)(*(uint *)(lVar4 + 0x154) & 1) * 8);
        }
        if (local_48 + local_50 <= *(double *)(lVar5 + 0x40)) goto LAB_013f21e1;
        lVar10 = lVar10 + 1;
        lVar4 = *(int64_t *)(this_ptr + 0x48);
        lVar5 = (int64_t)*(int *)(lVar4 + 0xc);
      } while (lVar10 < lVar5);
      uVar7 = CONCAT71((int7)((uint64_t)lVar9 >> 8),1);
    }
  }
  if ((local_38[0] != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
LAB_013f21f6:
  return uVar7 & 0xffffffff;
}

