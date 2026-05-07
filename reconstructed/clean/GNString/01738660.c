// Function: FUN_01738660
// Address: 01738660
// Size: 1137 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


uint64_t FUN_01738660(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  char cVar4;
  void *pvVar5;
  int64_t lVar6;
  int64_t lVar7;
  bool bVar8;
  uint64_t uVar9;
  uint64_t uVar11;
  uint64_t *arg1;
  uint64_t *this_ptr;
  uint64_t unaff_R12;
  uint64_t uVar12;
  int64_t *local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  uint64_t uVar10;
  
  uVar11 = *this_ptr;
  uVar9 = uVar11 | *arg1;
  uVar12 = CONCAT71((int7)((uint64_t)unaff_R12 >> 8),uVar9 == 0);
  if ((uVar11 != 0) && (*arg1 != 0)) {
    pvVar5 = _pthread_getspecific((void*)uVar9);
    if (pvVar5 != (void *)0x0) {
      uVar11 = *this_ptr;
      lVar6 = FUN_00e8b990();
      if (lVar6 != 0) {
        uVar11 = *(uint64_t *)(uVar11 + 0x20 + (uint64_t)(*(uint *)(lVar6 + 0x154) & 1) * 8);
      }
    }
    lVar6 = *(int64_t *)(uVar11 + 0x58);
    if (lVar6 != 0) {
      FUN_00d50b00();
    }
    iVar1 = *(int *)(lVar6 + 0xc);
    uVar11 = *arg1;
    pvVar5 = _pthread_getspecific((void*)uVar9);
    if (pvVar5 != (void *)0x0) {
      uVar11 = *arg1;
      lVar6 = FUN_00e8b990();
      if (lVar6 != 0) {
        uVar11 = *(uint64_t *)(uVar11 + 0x20 + (uint64_t)(*(uint *)(lVar6 + 0x154) & 1) * 8);
      }
    }
    lVar6 = *(int64_t *)(uVar11 + 0x58);
    if (lVar6 != 0) {
      FUN_00d50b00();
    }
    iVar2 = *(int *)(lVar6 + 0xc);
    FUN_00d50b20();
    FUN_00d50b20();
    if (iVar1 == iVar2) {
      uVar11 = *this_ptr;
      pvVar5 = _pthread_getspecific((void*)uVar9);
      if (pvVar5 != (void *)0x0) {
        uVar11 = *this_ptr;
        lVar6 = FUN_00e8b990();
        if (lVar6 != 0) {
          uVar11 = *(uint64_t *)(uVar11 + 0x20 + (uint64_t)(*(uint *)(lVar6 + 0x154) & 1) * 8);
        }
      }
      cVar4 = *(char *)(uVar11 + 0x40);
      uVar11 = *arg1;
      pvVar5 = _pthread_getspecific((void*)uVar9);
      if (pvVar5 != (void *)0x0) {
        uVar11 = *arg1;
        lVar6 = FUN_00e8b990();
        if (lVar6 != 0) {
          uVar11 = *(uint64_t *)(uVar11 + 0x20 + (uint64_t)(*(uint *)(lVar6 + 0x154) & 1) * 8);
        }
      }
      bVar8 = (*(char *)(uVar11 + 0x40) != '\0') != (cVar4 != '\0');
      uVar10 = CONCAT71((int7)(uVar9 >> 8),bVar8);
      if (!bVar8) {
        uVar11 = *this_ptr;
        pvVar5 = _pthread_getspecific((void*)uVar10);
        if (pvVar5 != (void *)0x0) {
          uVar11 = *this_ptr;
          lVar6 = FUN_00e8b990();
          if (lVar6 != 0) {
            uVar11 = *(uint64_t *)(uVar11 + 0x20 + (uint64_t)(*(uint *)(lVar6 + 0x154) & 1) * 8);
          }
        }
        iVar1 = *(int *)(uVar11 + 0x6c);
        uVar11 = *arg1;
        pvVar5 = _pthread_getspecific((void*)uVar10);
        if (pvVar5 != (void *)0x0) {
          uVar11 = *arg1;
          lVar6 = FUN_00e8b990();
          if (lVar6 != 0) {
            uVar11 = *(uint64_t *)(uVar11 + 0x20 + (uint64_t)(*(uint *)(lVar6 + 0x154) & 1) * 8);
          }
        }
        if (iVar1 == *(int *)(uVar11 + 0x6c)) {
          uVar11 = *this_ptr;
          pvVar5 = _pthread_getspecific((void*)uVar10);
          if (pvVar5 != (void *)0x0) {
            uVar11 = *this_ptr;
            lVar6 = FUN_00e8b990();
            if (lVar6 != 0) {
              uVar11 = *(uint64_t *)(uVar11 + 0x20 + (uint64_t)(*(uint *)(lVar6 + 0x154) & 1) * 8)
              ;
            }
          }
          iVar1 = *(int *)(uVar11 + 0x50);
          uVar11 = *arg1;
          pvVar5 = _pthread_getspecific((void*)uVar10);
          if (pvVar5 != (void *)0x0) {
            uVar11 = *arg1;
            lVar6 = FUN_00e8b990();
            if (lVar6 != 0) {
              uVar11 = *(uint64_t *)(uVar11 + 0x20 + (uint64_t)(*(uint *)(lVar6 + 0x154) & 1) * 8)
              ;
            }
          }
          if (iVar1 == *(int *)(uVar11 + 0x50)) {
            uVar11 = *this_ptr;
            pvVar5 = _pthread_getspecific((void*)uVar10);
            if (pvVar5 != (void *)0x0) {
              uVar11 = *this_ptr;
              lVar6 = FUN_00e8b990();
              if (lVar6 != 0) {
                uVar11 = *(uint64_t *)
                          (uVar11 + 0x20 + (uint64_t)(*(uint *)(lVar6 + 0x154) & 1) * 8);
              }
            }
            lVar6 = *(int64_t *)(uVar11 + 0x58);
            if (lVar6 != 0) {
              FUN_00d50b00();
            }
            uVar11 = *arg1;
            pvVar5 = _pthread_getspecific((void*)uVar10);
            if (pvVar5 != (void *)0x0) {
              uVar11 = *arg1;
              lVar7 = FUN_00e8b990();
              if (lVar7 != 0) {
                uVar11 = *(uint64_t *)
                          (uVar11 + 0x20 + (uint64_t)(*(uint *)(lVar7 + 0x154) & 1) * 8);
              }
            }
            lVar7 = *(int64_t *)(uVar11 + 0x58);
            if (lVar7 != 0) {
              FUN_00d50b00();
            }
            uVar3 = *(uint *)(lVar6 + 0xc);
            if ((int)uVar3 < 1) {
              uVar12 = 0;
            }
            else {
              uVar12 = CONCAT71((int7)(uVar11 >> 8),1);
              uVar11 = 1;
              do {
                pvVar5 = _pthread_getspecific((void*)uVar10);
                if (pvVar5 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_01739580();
                pvVar5 = _pthread_getspecific((void*)uVar10);
                if (pvVar5 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_01739580();
                if (local_58 == '\0') {
                  if (local_60 != 0) {
                    FUN_00d50b00();
                  }
                }
                else {
                  local_58 = '\0';
                }
                cVar4 = (**(code **)(*local_70 + 0x50))();
                if (local_60 != 0) {
                  FUN_00d50b20();
                }
                if ((local_58 != '\0') && (local_60 != 0)) {
                  FUN_00d50b20();
                }
                if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                if (cVar4 == '\0') break;
                uVar12 = CONCAT71((int7)(uVar12 >> 8),uVar11 < uVar3);
                bVar8 = uVar11 != uVar3;
                uVar11 = uVar11 + 1;
              } while (bVar8);
            }
            if (lVar7 != 0) {
              FUN_00d50b20();
            }
            FUN_00d50b20();
            uVar12 = uVar12 ^ 1;
            goto LAB_01738a9c;
          }
        }
      }
    }
    uVar12 = 0;
  }
LAB_01738a9c:
  return uVar12 & 0xffffff01;
}

