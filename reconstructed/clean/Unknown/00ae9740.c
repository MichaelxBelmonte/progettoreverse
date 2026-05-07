// Function: FUN_00ae9740
// Address: 00ae9740
// Size: 691 bytes
// Class: Unknown

void FUN_00ae9740(uint param_1)

{
  uint64_t uVar1;
  int64_t lVar2;
  uint uVar3;
  uint uVar4;
  uint64_t uVar5;
  uint unaff_ESI;
  int64_t this_ptr;
  uint64_t uVar6;
  
  uVar3 = unaff_ESI - 0x10;
  if (0x10 < unaff_ESI - 0x10) {
    uVar3 = unaff_ESI;
  }
  uVar4 = param_1 & 0xff;
  if (uVar4 != 0) {
    uVar6 = (uint64_t)uVar4;
    if (unaff_ESI == 0x44) {
      if (uVar3 == 3) {
        do {
          lVar2 = uVar6 * 8;
          uVar6 = uVar6 - 1;
          if (*(int64_t *)(this_ptr + -8 + lVar2) != 0) {
            (**(code **)(g_02786500 + 0x40))();
          }
        } while (uVar6 != 0);
      }
      else {
        do {
          lVar2 = uVar6 * 8;
          uVar6 = uVar6 - 1;
          if (*(int64_t *)(this_ptr + -8 + lVar2) != 0) {
            (**(code **)(g_02786500 + 0x40))();
          }
        } while (uVar6 != 0);
      }
    }
    else if ((int)uVar3 < 3) {
      uVar1 = uVar6 - 1;
      uVar5 = uVar6 & 3;
      if ((param_1 & 3) != 0) {
        do {
          if (*(int64_t *)(this_ptr + -8 + uVar6 * 8) != 0) {
            ___bzero();
          }
          uVar6 = uVar6 - 1;
          uVar5 = uVar5 - 1;
        } while (uVar5 != 0);
      }
      if (2 < uVar1) {
        do {
          if (*(int64_t *)(this_ptr + -8 + uVar6 * 8) != 0) {
            ___bzero();
          }
          if (*(int64_t *)(this_ptr + -0x10 + uVar6 * 8) != 0) {
            ___bzero();
          }
          if (*(int64_t *)(this_ptr + -0x18 + uVar6 * 8) != 0) {
            ___bzero();
          }
          lVar2 = uVar6 * 8;
          uVar6 = uVar6 - 4;
          if (*(int64_t *)(this_ptr + -0x20 + lVar2) != 0) {
            ___bzero();
          }
        } while (uVar6 != 0);
      }
    }
    else if (uVar3 == 3) {
      if (((param_1 & 1) != 0) &&
         (lVar2 = uVar6 * 8, uVar6 = uVar6 - 1, *(int64_t *)(this_ptr + -8 + lVar2) != 0)) {
        ___bzero();
      }
      if (uVar4 != 1) {
        do {
          if (*(int64_t *)(this_ptr + -8 + uVar6 * 8) != 0) {
            ___bzero();
          }
          lVar2 = uVar6 * 8;
          uVar6 = uVar6 - 2;
          if (*(int64_t *)(this_ptr + -0x10 + lVar2) != 0) {
            ___bzero();
          }
        } while (uVar6 != 0);
      }
    }
    else if (uVar3 == 4) {
      if (((param_1 & 1) != 0) &&
         (lVar2 = uVar6 * 8, uVar6 = uVar6 - 1, *(int64_t *)(this_ptr + -8 + lVar2) != 0)) {
        ___bzero();
      }
      if (uVar4 != 1) {
        do {
          if (*(int64_t *)(this_ptr + -8 + uVar6 * 8) != 0) {
            ___bzero();
          }
          lVar2 = uVar6 * 8;
          uVar6 = uVar6 - 2;
          if (*(int64_t *)(this_ptr + -0x10 + lVar2) != 0) {
            ___bzero();
          }
        } while (uVar6 != 0);
      }
    }
    else if ((int)uVar3 < 0x40) {
      if (((param_1 & 1) != 0) &&
         (lVar2 = uVar6 * 8, uVar6 = uVar6 - 1, *(int64_t *)(this_ptr + -8 + lVar2) != 0)) {
        ___bzero();
      }
      if (uVar4 != 1) {
        do {
          if (*(int64_t *)(this_ptr + -8 + uVar6 * 8) != 0) {
            ___bzero();
          }
          lVar2 = uVar6 * 8;
          uVar6 = uVar6 - 2;
          if (*(int64_t *)(this_ptr + -0x10 + lVar2) != 0) {
            ___bzero();
          }
        } while (uVar6 != 0);
      }
    }
    else {
      do {
        lVar2 = uVar6 * 8;
        uVar6 = uVar6 - 1;
        if (*(int64_t *)(this_ptr + -8 + lVar2) != 0) {
          ___bzero();
        }
      } while (uVar6 != 0);
    }
  }
  return;
}

