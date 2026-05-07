// Function: FUN_00ae9b20
// Address: 00ae9b20
// Size: 1315 bytes
// Class: Unknown

void FUN_00ae9b20(uint64_t param_1,uint param_2,uint param_3,uint64_t param_4)

{
  int64_t lVar1;
  uint64_t uVar2;
  uint uVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  int64_t arg1;
  int64_t this_ptr;
  uint uVar6;
  uint uVar7;
  uint64_t uVar8;
  uint32_t uVar9;
  uint local_40;
  
  uVar6 = (uint)param_4;
  uVar7 = (uint)(param_4 & 0xff);
  if (uVar6 == param_3) {
    if (uVar7 == 0) {
      return;
    }
    uVar7 = 0;
    do {
      FUN_00ae9a30(param_1,param_2);
      uVar7 = uVar7 + 1;
    } while ((uVar6 & 0xff) != uVar7);
    return;
  }
  local_40 = param_3 & 0xff;
  if ((param_3 & 0xff) == 0) {
    return;
  }
  if (uVar7 == 0) {
    FUN_00ae9740(param_3,param_1);
    return;
  }
  uVar3 = param_3 >> 8 & 0xff;
  uVar4 = (uint64_t)(uVar3 - 1);
  if (uVar3 == 0) {
    uVar4 = 0;
  }
  if ((uVar6 >> 8 & 0xff) == 0) {
    uVar9 = FUN_00ae9a30(param_1,param_2);
    if (1 < uVar7) {
      uVar8 = 1;
      do {
        if ((*(int64_t *)(this_ptr + uVar4 * 8) != 0) &&
           (*(int64_t *)(arg1 + uVar8 * 8) != 0)) {
          uVar9 = (**(code **)(g_02786500 + 0x28))(uVar9,param_1);
        }
        uVar8 = uVar8 + 1;
      } while ((param_4 & 0xff) != uVar8);
      (**(code **)(g_02786500 + 0x20))(g_02390124 / (float)uVar7);
    }
  }
  else {
    FUN_00ae9a30(param_1,param_2);
  }
  if (uVar3 == 0) {
    uVar8 = 1;
    if (1 < local_40) {
      uVar8 = (uint64_t)param_3 & 0xff;
    }
    uVar5 = 0;
    do {
      if (uVar4 != uVar5) {
        FUN_00ae9a30(param_1,param_2);
      }
      uVar5 = uVar5 + 1;
    } while (uVar8 != uVar5);
    return;
  }
  uVar6 = param_2 - 0x10;
  if (0x10 < param_2 - 0x10) {
    uVar6 = param_2;
  }
  if (param_2 == 0x44) {
    uVar8 = 1;
    if (1 < local_40) {
      uVar8 = (uint64_t)param_3 & 0xff;
    }
    uVar5 = 0;
    if (uVar6 == 3) {
      do {
        if ((uVar4 != uVar5) && (*(int64_t *)(this_ptr + uVar5 * 8) != 0)) {
          (**(code **)(g_02786500 + 0x40))();
        }
        uVar5 = uVar5 + 1;
      } while (uVar8 != uVar5);
      return;
    }
    do {
      if ((uVar4 != uVar5) && (*(int64_t *)(this_ptr + uVar5 * 8) != 0)) {
        (**(code **)(g_02786500 + 0x40))();
      }
      uVar5 = uVar5 + 1;
    } while (uVar8 != uVar5);
    return;
  }
  uVar8 = 1;
  if (1 < local_40) {
    uVar8 = (uint64_t)param_3 & 0xff;
  }
  uVar7 = (uint)uVar8;
  if ((int)uVar6 < 3) {
    if (local_40 < 2) {
      uVar2 = 0;
    }
    else {
      uVar5 = 0;
      do {
        if ((uVar4 != uVar5) && (*(int64_t *)(this_ptr + uVar5 * 8) != 0)) {
          ___bzero();
        }
        if ((uVar5 + 1 != uVar4) && (*(int64_t *)(this_ptr + 8 + uVar5 * 8) != 0)) {
          ___bzero();
        }
        uVar2 = uVar5 + 2;
        uVar5 = uVar5 + 2;
      } while ((uVar7 & 0xfe) != uVar2);
    }
    if ((uVar8 & 1) == 0) {
      return;
    }
    if (uVar2 == uVar4) {
      return;
    }
    lVar1 = *(int64_t *)(this_ptr + uVar2 * 8);
    goto joined_r0x00ae9f2f;
  }
  if (uVar6 == 3) {
    if (local_40 < 2) {
LAB_00ae9f1b:
      uVar2 = 0;
    }
    else {
      uVar5 = 0;
      do {
        if ((uVar4 != uVar5) && (*(int64_t *)(this_ptr + uVar5 * 8) != 0)) {
          ___bzero();
        }
        if ((uVar5 + 1 != uVar4) && (*(int64_t *)(this_ptr + 8 + uVar5 * 8) != 0)) {
          ___bzero();
        }
        uVar2 = uVar5 + 2;
        uVar5 = uVar5 + 2;
      } while ((uVar7 & 0xfe) != uVar2);
    }
  }
  else {
    if (uVar6 == 4) {
      if (local_40 < 2) {
        uVar2 = 0;
      }
      else {
        uVar5 = 0;
        do {
          if ((uVar4 != uVar5) && (*(int64_t *)(this_ptr + uVar5 * 8) != 0)) {
            ___bzero();
          }
          if ((uVar5 + 1 != uVar4) && (*(int64_t *)(this_ptr + 8 + uVar5 * 8) != 0)) {
            ___bzero();
          }
          uVar2 = uVar5 + 2;
          uVar5 = uVar5 + 2;
        } while ((uVar7 & 0xfe) != uVar2);
      }
      if ((uVar8 & 1) == 0) {
        return;
      }
      if (uVar2 == uVar4) {
        return;
      }
      lVar1 = *(int64_t *)(this_ptr + uVar2 * 8);
      goto joined_r0x00ae9f2f;
    }
    if (0x3f < (int)uVar6) {
      uVar5 = 0;
      do {
        if ((uVar4 != uVar5) && (*(int64_t *)(this_ptr + uVar5 * 8) != 0)) {
          ___bzero();
        }
        uVar5 = uVar5 + 1;
      } while (uVar8 != uVar5);
      return;
    }
    if (local_40 < 2) goto LAB_00ae9f1b;
    uVar5 = 0;
    do {
      if ((uVar4 != uVar5) && (*(int64_t *)(this_ptr + uVar5 * 8) != 0)) {
        ___bzero();
      }
      if ((uVar5 + 1 != uVar4) && (*(int64_t *)(this_ptr + 8 + uVar5 * 8) != 0)) {
        ___bzero();
      }
      uVar2 = uVar5 + 2;
      uVar5 = uVar5 + 2;
    } while ((uVar7 & 0xfe) != uVar2);
  }
  if ((uVar8 & 1) == 0) {
    return;
  }
  if (uVar2 == uVar4) {
    return;
  }
  lVar1 = *(int64_t *)(this_ptr + uVar2 * 8);
joined_r0x00ae9f2f:
  if (lVar1 != 0) {
    ___bzero();
  }
  return;
}

