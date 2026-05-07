// Function: FUN_010bc460
// Address: 010bc460
// Size: 1499 bytes
// Class: GNString
// String references:
//   "crypto/x509v3/v3_addr.c"
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


int FUN_010bc460(uint64_t param_1,int64_t param_2,uint64_t param_3,char *param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int64_t lVar4;
  void*puVar5;
  uint uVar6;
  int64_t arg1;
  int64_t this_ptr;
  int iVar7;
  int64_t local_48;
  int local_40;
  int in_stack_ffffffffffffffc8;
  int local_34;
  
  if ((arg1 == 0) || (iVar2 = _OPENSSL_sk_num(), iVar2 < 1)) {
    if (this_ptr == 0) {
      return 0;
    }
LAB_010bc4c0:
    *(void*)(this_ptr + 0xb0) = 1;
    return 0;
  }
  if ((this_ptr == 0) && (param_2 == 0)) {
    return 0;
  }
  if ((this_ptr != 0) && (*(int64_t *)(this_ptr + 0x38) == 0)) goto LAB_010bc4c0;
  if (param_2 == 0) {
    local_40 = 0;
    local_48 = _OPENSSL_sk_value();
    if (*(int64_t *)(local_48 + 0x120) == 0) {
      iVar2 = 1;
      goto LAB_010bca42;
    }
  }
  else {
    local_40 = -1;
    local_48 = 0;
  }
  iVar2 = _X509v3_addr_is_canonical();
  local_34 = 1;
  if (iVar2 == 0) {
    if (this_ptr != 0) {
      *(void*)(this_ptr + 0xb0) = 0x29;
      *(int *)(this_ptr + 0xac) = local_40;
      *(int64_t *)(this_ptr + 0xb8) = local_48;
      local_34 = (**(code **)(this_ptr + 0x38))();
      iVar2 = 0;
      if (local_34 == 0) goto LAB_010bca42;
      goto LAB_010bc519;
    }
  }
  else {
LAB_010bc519:
    _OPENSSL_sk_set_cmp_func();
    lVar4 = _OPENSSL_sk_dup();
    if (lVar4 != 0) {
      local_40 = local_40 + 1;
      iVar2 = _OPENSSL_sk_num();
      if (local_40 < iVar2) {
LAB_010bc592:
        local_48 = _OPENSSL_sk_value();
        iVar2 = _X509v3_addr_is_canonical();
        if (iVar2 == 0) {
          if (this_ptr == 0) goto LAB_010bca37;
          *(void*)(this_ptr + 0xb0) = 0x29;
          *(int *)(this_ptr + 0xac) = local_40;
          *(int64_t *)(this_ptr + 0xb8) = local_48;
          local_34 = (**(code **)(this_ptr + 0x38))();
          iVar2 = 0;
          if (local_34 == 0) goto LAB_010bca42;
        }
        if (*(int64_t *)(local_48 + 0x120) == 0) {
          iVar2 = _OPENSSL_sk_num();
          if (0 < iVar2) {
            iVar2 = 0;
            do {
              lVar4 = _OPENSSL_sk_value();
              if (**(int **)(lVar4 + 8) != 0) {
                if (this_ptr == 0) goto LAB_010bca37;
                *(void*)(this_ptr + 0xb0) = 0x2e;
                *(int *)(this_ptr + 0xac) = local_40;
                *(int64_t *)(this_ptr + 0xb8) = local_48;
                local_34 = (**(code **)(this_ptr + 0x38))();
                goto LAB_010bc566;
              }
              iVar2 = iVar2 + 1;
              iVar7 = _OPENSSL_sk_num();
            } while (iVar2 < iVar7);
          }
        }
        else {
          _OPENSSL_sk_set_cmp_func();
          iVar2 = _OPENSSL_sk_num();
          if (0 < iVar2) {
            if (this_ptr == 0) {
              iVar7 = 0;
              do {
                puVar5 = (void*)_OPENSSL_sk_value();
                _OPENSSL_sk_find();
                lVar4 = _OPENSSL_sk_value();
                if (lVar4 == 0) {
                  if (*(int *)puVar5[1] == 1) goto LAB_010bc88b;
                }
                else if (**(int **)(lVar4 + 8) == 1) {
                  if (*(int *)puVar5[1] != 0) {
                    piVar1 = (int *)*puVar5;
                    lVar4 = 0;
                    if (piVar1 != (int *)0x0) {
                      lVar4 = 0;
                      if (((*(ushort **)(piVar1 + 2) != (ushort *)0x0) && (lVar4 = 0, 1 < *piVar1))
                         && (uVar6 = (uint)**(ushort **)(piVar1 + 2) << 0x10,
                            uVar6 = uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8,
                            lVar4 = (uint64_t)(uVar6 == 1) << 2, uVar6 == 2)) {
                        lVar4 = 0x10;
                      }
                    }
                    iVar3 = FUN_010bc270((int *)puVar5[1],lVar4);
                    iVar2 = 0;
                    if (iVar3 == 0) goto LAB_010bca42;
                  }
                  _OPENSSL_sk_set();
                }
                iVar7 = iVar7 + 1;
                iVar2 = _OPENSSL_sk_num();
              } while (iVar7 < iVar2);
            }
            else {
              iVar7 = 0;
              do {
                puVar5 = (void*)_OPENSSL_sk_value();
                _OPENSSL_sk_find();
                lVar4 = _OPENSSL_sk_value();
                if (lVar4 == 0) {
                  if (*(int *)puVar5[1] == 1) goto LAB_010bc88b;
                }
                else if (**(int **)(lVar4 + 8) == 1) {
                  if (*(int *)puVar5[1] != 0) {
                    piVar1 = (int *)*puVar5;
                    lVar4 = 0;
                    if (((piVar1 != (int *)0x0) && (*(ushort **)(piVar1 + 2) != (ushort *)0x0)) &&
                       ((1 < *piVar1 &&
                        (uVar6 = (uint)**(ushort **)(piVar1 + 2) << 0x10,
                        uVar6 = uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8,
                        lVar4 = (uint64_t)(uVar6 == 1) << 2, uVar6 == 2)))) {
                      lVar4 = 0x10;
                    }
                    iVar2 = FUN_010bc270((int *)puVar5[1],lVar4);
                    if (iVar2 == 0) {
                      *(void*)(this_ptr + 0xb0) = 0x2e;
                      *(int *)(this_ptr + 0xac) = local_40;
                      *(int64_t *)(this_ptr + 0xb8) = local_48;
                      local_34 = (**(code **)(this_ptr + 0x38))();
                      iVar2 = 0;
                      if (local_34 != 0) goto LAB_010bc64d;
                      goto LAB_010bca42;
                    }
                  }
                  _OPENSSL_sk_set();
                }
LAB_010bc64d:
                iVar7 = iVar7 + 1;
                iVar2 = _OPENSSL_sk_num();
              } while (iVar7 < iVar2);
            }
          }
        }
        goto LAB_010bc571;
      }
LAB_010bc904:
      iVar2 = local_34;
      if ((*(int64_t *)(local_48 + 0x120) != 0) && (iVar7 = _OPENSSL_sk_num(), 0 < iVar7)) {
        if (this_ptr == 0) {
          iVar7 = 0;
          do {
            lVar4 = _OPENSSL_sk_value();
            if ((**(int **)(lVar4 + 8) == 0) && (iVar3 = _OPENSSL_sk_find(), -1 < iVar3))
            goto LAB_010bca37;
            iVar7 = iVar7 + 1;
            iVar3 = _OPENSSL_sk_num();
          } while (iVar7 < iVar3);
        }
        else {
          iVar7 = 0;
          do {
            lVar4 = _OPENSSL_sk_value();
            if ((**(int **)(lVar4 + 8) == 0) && (iVar2 = _OPENSSL_sk_find(), -1 < iVar2)) {
              *(void*)(this_ptr + 0xb0) = 0x2e;
              *(int *)(this_ptr + 0xac) = local_40;
              *(int64_t *)(this_ptr + 0xb8) = local_48;
              local_34 = (**(code **)(this_ptr + 0x38))();
              iVar2 = 0;
              if (local_34 == 0) break;
            }
            iVar7 = iVar7 + 1;
            iVar3 = _OPENSSL_sk_num();
            iVar2 = local_34;
          } while (iVar7 < iVar3);
        }
      }
      goto LAB_010bca42;
    }
    _ERR_put_error(0x201db1e,0x41,0x4bc,param_4,in_stack_ffffffffffffffc8);
    if (this_ptr != 0) {
      *(void*)(this_ptr + 0xb0) = 0x11;
    }
  }
  iVar2 = 0;
LAB_010bca42:
  _OPENSSL_sk_free();
  return iVar2;
LAB_010bc88b:
  if (this_ptr == 0) goto LAB_010bca37;
  *(void*)(this_ptr + 0xb0) = 0x2e;
  *(int *)(this_ptr + 0xac) = local_40;
  *(int64_t *)(this_ptr + 0xb8) = local_48;
  local_34 = (**(code **)(this_ptr + 0x38))();
LAB_010bc566:
  iVar2 = 0;
  if (local_34 == 0) goto LAB_010bca42;
LAB_010bc571:
  local_40 = local_40 + 1;
  iVar2 = _OPENSSL_sk_num();
  if (iVar2 <= local_40) goto LAB_010bc904;
  goto LAB_010bc592;
LAB_010bca37:
  iVar2 = 0;
  goto LAB_010bca42;
}

