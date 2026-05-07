// Function: FUN_012e8e10
// Address: 012e8e10
// Size: 1774 bytes
// Class: MULSSGenerator

int64_t * FUN_012e8e10(double param_1,double param_2)

{
  int iVar1;
  int iVar2;
  int64_t lVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  void *pvVar7;
  int64_t lVar8;
  int64_t lVar9;
  void* pVar10;
  uint uVar11;
  code *in_RCX;
  code *pcVar12;
  uint64_t uVar13;
  int iVar14;
  int64_t *in_RDX;
  int64_t arg1;
  int64_t *this_ptr;
  int64_t lVar15;
  int64_t lVar16;
  uint64_t local_80;
  int local_60;
  int64_t local_40;
  char local_38;
  
  lVar3 = *(int64_t *)(arg1 + 0x138);
  if (lVar3 == 0) {
LAB_012e8ea5:
    lVar8 = *(int64_t *)(arg1 + 0xb0);
    if (lVar8 == 0) goto LAB_012e9168;
    if (*(int *)(lVar8 + 0xc) < 1) {
      bVar4 = false;
      lVar16 = 0;
    }
    else {
      lVar15 = 0;
      lVar16 = 0;
      bVar4 = false;
      do {
        lVar9 = *(int64_t *)(*(int64_t *)(lVar8 + 0x10) + lVar15 * 8);
        cVar5 = (*in_RCX)(param_1,param_2);
        if (cVar5 != '\0') {
          if (*in_RDX != 0) {
            local_38 = '\0';
            cVar5 = FUN_00d24090();
            local_40 = lVar9;
            if (cVar5 != '\0') goto LAB_012e8ef4;
          }
          if (lVar16 == 0) {
            FUN_0025e9a0();
            if (local_40 == 0) {
              lVar16 = 0;
            }
            else {
              bVar4 = true;
              lVar16 = local_40;
              if (local_38 == '\0') {
                FUN_00d50b00();
              }
            }
          }
          local_38 = '\0';
          FUN_00d24b60(0,FUN_012e8c90,0);
          local_40 = lVar9;
        }
LAB_012e8ef4:
        lVar15 = lVar15 + 1;
      } while ((int)lVar15 < *(int *)(lVar8 + 0xc));
    }
    FUN_001159b0();
LAB_012e94f5:
    *(void*)(this_ptr + 1) = 0;
    if (bVar4) goto LAB_012e951b;
    if (lVar16 != 0) {
      FUN_00d50b00();
      goto LAB_012e951b;
    }
  }
  else {
    pcVar12 = in_RCX;
    FUN_00d50b00();
    pVar10 = (void*)pcVar12;
    pvVar7 = _pthread_getspecific(pVar10);
    if ((pvVar7 == (void *)0x0) || (lVar8 = FUN_00e8b990(), lVar8 == 0)) {
      cVar5 = *(char *)(lVar3 + 0x38);
    }
    else {
      cVar5 = *(char *)(*(int64_t *)(lVar3 + 0x20 + (uint64_t)(*(uint *)(lVar8 + 0x154) & 1) * 8)
                       + 0x38);
    }
    if (cVar5 == '\0') goto LAB_012e8ea5;
    pvVar7 = _pthread_getspecific(pVar10);
    lVar8 = lVar3;
    if ((pvVar7 != (void *)0x0) && (lVar16 = FUN_00e8b990(), lVar16 != 0)) {
      lVar8 = *(int64_t *)(lVar3 + 0x20 + (uint64_t)(*(uint *)(lVar16 + 0x154) & 1) * 8);
    }
    iVar14 = *(int *)(lVar8 + 0x3c);
    pvVar7 = _pthread_getspecific(pVar10);
    lVar8 = lVar3;
    if ((pvVar7 != (void *)0x0) && (lVar16 = FUN_00e8b990(), lVar16 != 0)) {
      lVar8 = *(int64_t *)(lVar3 + 0x20 + (uint64_t)(*(uint *)(lVar16 + 0x154) & 1) * 8);
    }
    iVar1 = *(int *)(lVar8 + 0x40);
    pvVar7 = _pthread_getspecific(pVar10);
    lVar8 = lVar3;
    if ((pvVar7 != (void *)0x0) && (lVar16 = FUN_00e8b990(), lVar16 != 0)) {
      lVar8 = *(int64_t *)(lVar3 + 0x20 + (uint64_t)(*(uint *)(lVar16 + 0x154) & 1) * 8);
    }
    iVar2 = *(int *)(lVar8 + 0x3c);
    pvVar7 = _pthread_getspecific(pVar10);
    lVar8 = lVar3;
    if ((pvVar7 != (void *)0x0) && (lVar16 = FUN_00e8b990(), lVar16 != 0)) {
      lVar8 = *(int64_t *)(lVar3 + 0x20 + (uint64_t)(*(uint *)(lVar16 + 0x154) & 1) * 8);
    }
    uVar11 = (uint)(param_1 / (double)iVar14 + (double)iVar1);
    uVar13 = (uint64_t)uVar11;
    iVar14 = (int)((double)*(int *)(lVar8 + 0x40) + (param_1 + param_2) / (double)iVar2);
    uVar6 = 0;
    if (-1 < (int)uVar11) {
      uVar6 = uVar11;
    }
    if ((int)uVar6 <= iVar14) {
      lVar16 = 0;
      bVar4 = false;
      local_80 = (uint64_t)uVar6;
LAB_012e91cc:
      pVar10 = (void*)uVar13;
      pvVar7 = _pthread_getspecific(pVar10);
      if ((pvVar7 == (void *)0x0) || (lVar8 = FUN_00e8b990(), lVar8 == 0)) {
        iVar1 = *(int *)(*(int64_t *)(lVar3 + 0x48) + 0xc);
      }
      else {
        iVar1 = *(int *)(*(int64_t *)
                          (*(int64_t *)
                            (lVar3 + 0x20 + (uint64_t)(*(uint *)(lVar8 + 0x154) & 1) * 8) + 0x48) +
                        0xc);
      }
      if ((int64_t)local_80 < (int64_t)iVar1) {
        pvVar7 = _pthread_getspecific(pVar10);
        lVar8 = lVar3;
        if ((pvVar7 != (void *)0x0) && (lVar15 = FUN_00e8b990(), lVar15 != 0)) {
          lVar8 = *(int64_t *)(lVar3 + 0x20 + (uint64_t)(*(uint *)(lVar15 + 0x154) & 1) * 8);
        }
        lVar8 = *(int64_t *)(*(int64_t *)(*(int64_t *)(lVar8 + 0x48) + 0x10) + local_80 * 8);
        uVar13 = local_80;
        if (lVar8 != 0) {
          FUN_00d50b00();
        }
        pvVar7 = _pthread_getspecific((void*)uVar13);
        if ((pvVar7 == (void *)0x0) || (lVar15 = FUN_00e8b990(), lVar15 == 0)) {
          lVar15 = *(int64_t *)(lVar8 + 0x38);
        }
        else {
          lVar15 = *(int64_t *)
                    (*(int64_t *)(lVar8 + 0x20 + (uint64_t)(*(uint *)(lVar15 + 0x154) & 1) * 8) +
                    0x38);
        }
        if (lVar15 != 0) {
          local_60 = -1;
LAB_012e9303:
          do {
            lVar9 = (int64_t)local_60;
            local_60 = local_60 + 1;
            if (*(int *)(lVar15 + 0xc) <= local_60) goto LAB_012e94c0;
            lVar9 = *(int64_t *)(*(int64_t *)(lVar15 + 0x10) + 8 + lVar9 * 8);
            cVar5 = (*in_RCX)(param_1,param_2);
            if (cVar5 != '\0') {
              if (*in_RDX != 0) {
                local_38 = '\0';
                cVar5 = FUN_00d24090();
                local_40 = lVar9;
                if (cVar5 != '\0') goto LAB_012e9303;
              }
              if (lVar16 == 0) {
                FUN_0025e9a0();
                if (local_40 == 0) {
                  lVar16 = 0;
                }
                else {
                  bVar4 = true;
                  lVar16 = local_40;
                  if (local_38 == '\0') {
                    FUN_00d50b00();
                  }
                }
              }
              local_38 = '\0';
              cVar5 = FUN_00d24090();
              local_40 = lVar9;
              if (cVar5 == '\0') {
                local_38 = '\0';
                FUN_00d24b60(0,FUN_012e8c90,0);
              }
            }
          } while( true );
        }
        goto LAB_012e94cc;
      }
      goto LAB_012e94f5;
    }
LAB_012e9168:
    *(void*)(this_ptr + 1) = 0;
  }
  lVar16 = 0;
LAB_012e951b:
  *this_ptr = lVar16;
  *(void*)(this_ptr + 1) = 1;
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  return this_ptr;
LAB_012e94c0:
  FUN_001159b0();
LAB_012e94cc:
  if (lVar8 != 0) {
    FUN_00d50b20();
  }
  uVar13 = local_80 + 1;
  local_80 = uVar13;
  if (uVar13 == iVar14 + 1) goto LAB_012e94f5;
  goto LAB_012e91cc;
}

