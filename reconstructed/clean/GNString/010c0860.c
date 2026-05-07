// Function: FUN_010c0860
// Address: 010c0860
// Size: 1486 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


uint64_t FUN_010c0860(uint64_t param_1,void*param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  void*puVar5;
  int *piVar6;
  uint64_t uVar7;
  int64_t arg1;
  int64_t this_ptr;
  bool bVar8;
  int64_t local_50;
  int64_t local_48;
  int64_t local_40;
  uint local_34;
  
  if ((arg1 == 0) || (iVar2 = _OPENSSL_sk_num(), iVar2 < 1)) {
    if (this_ptr == 0) {
      return 0;
    }
LAB_010c08b9:
    *(void*)(this_ptr + 0xb0) = 1;
    return 0;
  }
  if ((this_ptr == 0) && (param_2 == (void*)0x0)) {
    return 0;
  }
  if ((this_ptr != 0) && (*(int64_t *)(this_ptr + 0x38) == 0)) goto LAB_010c08b9;
  iVar2 = 0;
  if (param_2 == (void*)0x0) {
    local_48 = _OPENSSL_sk_value();
    param_2 = *(void**)(local_48 + 0x128);
    if (param_2 == (void*)0x0) {
      return 1;
    }
  }
  else {
    iVar2 = -1;
    local_48 = 0;
  }
  iVar3 = FUN_010bf9e0();
  if (iVar3 == 0) {
LAB_010c0917:
    if (this_ptr == 0) {
      return 0;
    }
    *(void*)(this_ptr + 0xb0) = 0x29;
    *(int *)(this_ptr + 0xac) = iVar2;
    *(int64_t *)(this_ptr + 0xb8) = local_48;
    local_34 = (**(code **)(this_ptr + 0x38))();
    if (local_34 == 0) {
      return 0;
    }
  }
  else {
    iVar3 = FUN_010bf9e0();
    local_34 = 1;
    if (iVar3 == 0) goto LAB_010c0917;
  }
  piVar6 = (int *)*param_2;
  bVar1 = false;
  if (piVar6 == (int *)0x0) {
    local_50 = 0;
    bVar8 = false;
  }
  else if (*piVar6 == 1) {
    bVar8 = false;
    local_50 = *(int64_t *)(piVar6 + 2);
  }
  else {
    bVar8 = *piVar6 == 0;
    local_50 = 0;
  }
  piVar6 = (int *)param_2[1];
  if (piVar6 != (int *)0x0) {
    bVar1 = false;
    if (*piVar6 == 1) {
      local_40 = *(int64_t *)(piVar6 + 2);
      goto LAB_010c09bf;
    }
    if (*piVar6 == 0) {
      bVar1 = true;
    }
  }
  local_40 = 0;
LAB_010c09bf:
  iVar2 = iVar2 + 1;
  iVar3 = _OPENSSL_sk_num();
  if (iVar2 < iVar3) {
    do {
      local_48 = _OPENSSL_sk_value();
      if (local_48 == 0) goto LAB_010c0db8;
      if (*(int64_t *)(local_48 + 0x128) == 0) {
        if (local_50 == 0 && local_40 == 0) {
          local_50 = 0;
          local_40 = 0;
        }
        else {
          if (this_ptr == 0) {
            return 0;
          }
          *(void*)(this_ptr + 0xb0) = 0x2e;
          *(int *)(this_ptr + 0xac) = iVar2;
          *(int64_t *)(this_ptr + 0xb8) = local_48;
          local_34 = (**(code **)(this_ptr + 0x38))();
          if (local_34 == 0) {
            return 0;
          }
        }
      }
      else {
        iVar3 = FUN_010bf9e0();
        if ((iVar3 == 0) || (iVar3 = FUN_010bf9e0(), iVar3 == 0)) {
          if (this_ptr == 0) {
            return 0;
          }
          *(void*)(this_ptr + 0xb0) = 0x29;
          *(int *)(this_ptr + 0xac) = iVar2;
          *(int64_t *)(this_ptr + 0xb8) = local_48;
          local_34 = (**(code **)(this_ptr + 0x38))();
          if (local_34 == 0) {
            return 0;
          }
          puVar5 = *(void**)(local_48 + 0x128);
          piVar6 = (int *)*puVar5;
          if ((piVar6 == (int *)0x0) && (local_50 != 0)) goto LAB_010c0ac6;
LAB_010c0b79:
          if (piVar6 != (int *)0x0) goto LAB_010c0b7e;
LAB_010c0bb4:
          piVar6 = (int *)puVar5[1];
          if ((piVar6 == (int *)0x0) && (local_40 != 0)) {
            if (this_ptr == 0) {
              return 0;
            }
LAB_010c0bdb:
            *(void*)(this_ptr + 0xb0) = 0x2e;
            *(int *)(this_ptr + 0xac) = iVar2;
            *(int64_t *)(this_ptr + 0xb8) = local_48;
            local_34 = (**(code **)(this_ptr + 0x38))();
            if (local_34 == 0) {
              return 0;
            }
            piVar6 = *(int **)(*(int64_t *)(local_48 + 0x128) + 8);
            local_40 = 0;
            bVar1 = false;
          }
        }
        else {
          puVar5 = *(void**)(local_48 + 0x128);
          piVar6 = (int *)*puVar5;
          if (piVar6 == (int *)0x0) {
            if (local_50 == 0) goto LAB_010c0b79;
            if (this_ptr == 0) {
              return 0;
            }
LAB_010c0ac6:
            *(void*)(this_ptr + 0xb0) = 0x2e;
            *(int *)(this_ptr + 0xac) = iVar2;
            *(int64_t *)(this_ptr + 0xb8) = local_48;
            local_34 = (**(code **)(this_ptr + 0x38))();
            if (local_34 == 0) {
              return 0;
            }
            puVar5 = *(void**)(local_48 + 0x128);
            piVar6 = (int *)*puVar5;
            local_50 = 0;
            bVar8 = false;
          }
          if (piVar6 == (int *)0x0) goto LAB_010c0bb4;
LAB_010c0b7e:
          if (*piVar6 != 1) goto LAB_010c0bb4;
          if (bVar8) {
LAB_010c0baa:
            local_50 = *(int64_t *)(piVar6 + 2);
            bVar8 = false;
            goto LAB_010c0bb4;
          }
          iVar3 = FUN_010c06d0();
          if (iVar3 != 0) {
            puVar5 = *(void**)(local_48 + 0x128);
            piVar6 = (int *)*puVar5;
            goto LAB_010c0baa;
          }
          if (this_ptr == 0) {
            return 0;
          }
          *(void*)(this_ptr + 0xb0) = 0x2e;
          *(int *)(this_ptr + 0xac) = iVar2;
          *(int64_t *)(this_ptr + 0xb8) = local_48;
          local_34 = (**(code **)(this_ptr + 0x38))();
          if (local_34 == 0) {
            return 0;
          }
          piVar6 = *(int **)(*(int64_t *)(local_48 + 0x128) + 8);
          bVar8 = false;
          if ((piVar6 == (int *)0x0) && (local_40 != 0)) goto LAB_010c0bdb;
        }
        if ((piVar6 != (int *)0x0) && (*piVar6 == 1)) {
          if (!bVar1) {
            iVar3 = FUN_010c06d0();
            if (iVar3 == 0) {
              if (this_ptr == 0) {
                return 0;
              }
              *(void*)(this_ptr + 0xb0) = 0x2e;
              *(int *)(this_ptr + 0xac) = iVar2;
              *(int64_t *)(this_ptr + 0xb8) = local_48;
              bVar1 = false;
              local_34 = (**(code **)(this_ptr + 0x38))();
              if (local_34 == 0) {
                return 0;
              }
              goto LAB_010c09e0;
            }
            piVar6 = *(int **)(*(int64_t *)(local_48 + 0x128) + 8);
          }
          local_40 = *(int64_t *)(piVar6 + 2);
          bVar1 = false;
        }
      }
LAB_010c09e0:
      iVar2 = iVar2 + 1;
      iVar3 = _OPENSSL_sk_num();
    } while (iVar2 < iVar3);
  }
  uVar7 = (uint64_t)local_34;
  if (local_48 != 0) {
    puVar5 = *(void**)(local_48 + 0x128);
    if (puVar5 == (void*)0x0) {
      return uVar7;
    }
    if (((int *)*puVar5 == (int *)0x0) || (*(int *)*puVar5 != 0)) {
      piVar6 = (int *)puVar5[1];
    }
    else {
      if (this_ptr == 0) {
        return 0;
      }
      *(void*)(this_ptr + 0xb0) = 0x2e;
      *(int *)(this_ptr + 0xac) = iVar2;
      *(int64_t *)(this_ptr + 0xb8) = local_48;
      uVar4 = (**(code **)(this_ptr + 0x38))();
      if (uVar4 == 0) {
        return 0;
      }
      uVar7 = (uint64_t)uVar4;
      piVar6 = *(int **)(*(int64_t *)(local_48 + 0x128) + 8);
    }
    if (piVar6 == (int *)0x0) {
      return uVar7;
    }
    if (*piVar6 == 0) {
      if (this_ptr != 0) {
        *(void*)(this_ptr + 0xb0) = 0x2e;
        *(int *)(this_ptr + 0xac) = iVar2;
        *(int64_t *)(this_ptr + 0xb8) = local_48;
                                                uVar7 = (**(code **)(this_ptr + 0x38))();
        return uVar7;
      }
      return 0;
    }
    return uVar7;
  }
LAB_010c0db8:
  if (this_ptr == 0) {
    return 0;
  }
  *(void*)(this_ptr + 0xb0) = 1;
  return 0;
}

