// Function: FUN_01296db0
// Address: 01296db0
// Size: 1035 bytes
// Class: MUAudioSourcePrincipalItem

int64_t * FUN_01296db0(void* param_1)

{
  double *pdVar1;
  double dVar2;
  int64_t lVar3;
  bool bVar4;
  int64_t lVar5;
  bool bVar6;
  char cVar7;
  void *pvVar8;
  int64_t lVar9;
  int64_t lVar10;
  int64_t arg1;
  int64_t *this_ptr;
  int64_t lVar11;
  int64_t local_a0;
  char local_98;
  int64_t local_78;
  char local_70;
  int64_t local_38;
  
  FUN_012972e0();
  if (local_70 == '\0') {
    if (local_78 == 0) goto LAB_01296ea8;
    FUN_00d50b00();
  }
  else if (local_78 == 0) {
LAB_01296ea8:
    *this_ptr = 0;
    *(void*)(this_ptr + 1) = 1;
    return this_ptr;
  }
  pvVar8 = _pthread_getspecific(param_1);
  if (pvVar8 != (void *)0x0) {
    FUN_00e8b990();
  }
  cVar7 = FUN_013c8d70();
  if (cVar7 == '\0') {
LAB_01297147:
    *this_ptr = 0;
  }
  else {
    pvVar8 = _pthread_getspecific(param_1);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e5ae0();
    if (local_70 == '\0') {
      if (local_78 == 0) goto LAB_01297147;
      FUN_00d50b00();
    }
    else if (local_78 == 0) goto LAB_01297147;
    if (*(int *)(local_78 + 0xc) < 1) {
      bVar4 = false;
      local_38 = 0;
    }
    else {
      lVar11 = 0;
      local_38 = 0;
      bVar4 = false;
      do {
        lVar3 = *(int64_t *)(*(int64_t *)(local_78 + 0x10) + lVar11 * 8);
        pvVar8 = _pthread_getspecific(param_1);
        lVar5 = local_38;
        bVar6 = bVar4;
        if ((pvVar8 == (void *)0x0) || (lVar9 = FUN_00e8b990(), lVar9 == 0)) {
          if (*(double *)(lVar3 + 0xe8) <= *(double *)(arg1 + 0xe8) &&
              *(double *)(arg1 + 0xe8) != *(double *)(lVar3 + 0xe8)) goto LAB_01296fd9;
        }
        else {
          pdVar1 = (double *)
                   (*(int64_t *)(lVar3 + 0x20 + (uint64_t)(*(uint *)(lVar9 + 0x154) & 1) * 8) +
                   0xe8);
          if (*pdVar1 <= *(double *)(arg1 + 0xe8) && *(double *)(arg1 + 0xe8) != *pdVar1)
          {
LAB_01296fd9:
            pvVar8 = _pthread_getspecific(param_1);
            if (pvVar8 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_012972e0();
            if ((local_98 != '\0') && (local_a0 != 0)) {
              FUN_00d50b20();
            }
            if (local_a0 == local_78) {
              if (local_38 == 0) {
LAB_012970eb:
                if (lVar3 == local_38) {
                  if ((!bVar4) && (lVar3 != 0)) {
                    FUN_00d50b00();
                    bVar6 = true;
                  }
                }
                else {
                  if (lVar3 != 0) {
                    FUN_00d50b00();
                  }
                  bVar6 = true;
                  lVar5 = lVar3;
                  if ((bVar4) && (local_38 != 0)) {
                    FUN_00d50b20();
                  }
                }
              }
              else {
                pvVar8 = _pthread_getspecific(param_1);
                lVar9 = lVar3;
                if ((pvVar8 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
                  lVar9 = *(int64_t *)
                           (lVar3 + 0x20 + (uint64_t)(*(uint *)(lVar10 + 0x154) & 1) * 8);
                }
                dVar2 = *(double *)(lVar9 + 0xe8);
                pvVar8 = _pthread_getspecific(param_1);
                if ((pvVar8 == (void *)0x0) || (lVar9 = FUN_00e8b990(), lVar9 == 0)) {
                  if (*(double *)(local_38 + 0xe8) <= dVar2 && dVar2 != *(double *)(local_38 + 0xe8)
                     ) goto LAB_012970eb;
                }
                else {
                  pdVar1 = (double *)
                           (*(int64_t *)
                             (local_38 + 0x20 + (uint64_t)(*(uint *)(lVar9 + 0x154) & 1) * 8) +
                           0xe8);
                  if (*pdVar1 <= dVar2 && dVar2 != *pdVar1) goto LAB_012970eb;
                }
              }
            }
          }
        }
        bVar4 = bVar6;
        local_38 = lVar5;
        lVar11 = lVar11 + 1;
      } while ((int)lVar11 < *(int *)(local_78 + 0xc));
    }
    FUN_001159b0();
    FUN_00d50b20();
    *(void*)(this_ptr + 1) = 0;
    if (bVar4) {
      *this_ptr = local_38;
    }
    else {
      if (local_38 == 0) {
        local_38 = 0;
      }
      else {
        FUN_00d50b00();
      }
      *this_ptr = local_38;
    }
  }
  *(void*)(this_ptr + 1) = 1;
  FUN_00d50b20();
  return this_ptr;
}

