// Function: FUN_012e8440
// Address: 012e8440
// Size: 785 bytes
// Class: MULSSGenerator

uint64_t FUN_012e8440(void* param_1)

{
  uint64_t uVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  int iVar5;
  int iVar6;
  void *pvVar7;
  int64_t lVar8;
  int64_t lVar9;
  uint64_t uVar10;
  uint64_t *arg1;
  uint64_t *this_ptr;
  
  uVar1 = *this_ptr;
  uVar3 = this_ptr[1];
  if (((char)uVar3 != '\0') && (uVar1 != 0)) {
    FUN_00d50b00();
  }
  uVar2 = *arg1;
  uVar4 = arg1[1];
  if (((char)uVar4 != '\0') && (uVar2 != 0)) {
    FUN_00d50b00();
  }
  pvVar7 = _pthread_getspecific(param_1);
  if ((pvVar7 == (void *)0x0) || (lVar8 = FUN_00e8b990(), lVar8 == 0)) {
    lVar8 = *(int64_t *)(uVar1 + 0x110);
  }
  else {
    lVar8 = *(int64_t *)
             (*(int64_t *)(uVar1 + 0x20 + (uint64_t)(*(uint *)(lVar8 + 0x154) & 1) * 8) + 0x110);
  }
  if (lVar8 != 0) {
    pvVar7 = _pthread_getspecific(param_1);
    if ((pvVar7 == (void *)0x0) || (lVar8 = FUN_00e8b990(), lVar8 == 0)) {
      lVar8 = *(int64_t *)(uVar2 + 0x110);
    }
    else {
      lVar8 = *(int64_t *)
               (*(int64_t *)(uVar2 + 0x20 + (uint64_t)(*(uint *)(lVar8 + 0x154) & 1) * 8) + 0x110)
      ;
    }
    if (lVar8 != 0) {
      pvVar7 = _pthread_getspecific(param_1);
      uVar10 = uVar1;
      if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
        uVar10 = *(uint64_t *)(uVar1 + 0x20 + (uint64_t)(*(uint *)(lVar8 + 0x154) & 1) * 8);
      }
      lVar8 = *(int64_t *)(uVar10 + 0x110);
      pvVar7 = _pthread_getspecific(param_1);
      if ((pvVar7 == (void *)0x0) || (lVar9 = FUN_00e8b990(), lVar9 == 0)) {
        lVar9 = *(int64_t *)(uVar2 + 0x110);
      }
      else {
        lVar9 = *(int64_t *)
                 (*(int64_t *)(uVar2 + 0x20 + (uint64_t)(*(uint *)(lVar9 + 0x154) & 1) * 8) +
                 0x110);
      }
      if (lVar8 == lVar9) {
        pvVar7 = _pthread_getspecific(param_1);
        uVar10 = uVar1;
        if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
          uVar10 = *(uint64_t *)(uVar1 + 0x20 + (uint64_t)(*(uint *)(lVar8 + 0x154) & 1) * 8);
        }
        lVar8 = *(int64_t *)(uVar10 + 0x110);
        pvVar7 = _pthread_getspecific(param_1);
        if ((pvVar7 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
          lVar8 = *(int64_t *)(lVar8 + 0x20 + (uint64_t)(*(uint *)(lVar9 + 0x154) & 1) * 8);
        }
        lVar8 = *(int64_t *)(lVar8 + 0xa8);
        if (lVar8 != 0) {
          FUN_00d50b00();
        }
        iVar5 = FUN_00d23d20();
        if (lVar8 != 0) {
          FUN_00d50b20();
        }
        pvVar7 = _pthread_getspecific(param_1);
        uVar10 = uVar2;
        if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
          uVar10 = *(uint64_t *)(uVar2 + 0x20 + (uint64_t)(*(uint *)(lVar8 + 0x154) & 1) * 8);
        }
        lVar8 = *(int64_t *)(uVar10 + 0x110);
        pvVar7 = _pthread_getspecific(param_1);
        if ((pvVar7 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
          lVar8 = *(int64_t *)(lVar8 + 0x20 + (uint64_t)(*(uint *)(lVar9 + 0x154) & 1) * 8);
        }
        lVar8 = *(int64_t *)(lVar8 + 0xa8);
        if (lVar8 != 0) {
          FUN_00d50b00();
        }
        iVar6 = FUN_00d23d20();
        if (lVar8 != 0) {
          FUN_00d50b20();
        }
        uVar10 = 0xffffffff;
        if (iVar6 <= iVar5) {
          uVar10 = (uint64_t)(iVar6 < iVar5);
        }
        goto joined_r0x012e85ce;
      }
    }
  }
  uVar10 = 0xffffffff;
  if (uVar2 <= uVar1) {
    uVar10 = (uint64_t)(uVar1 != uVar2);
  }
joined_r0x012e85ce:
  if (((char)uVar4 != '\0') && (uVar2 != 0)) {
    FUN_00d50b20();
  }
  if (((char)uVar3 != '\0') && (uVar1 != 0)) {
    FUN_00d50b20();
  }
  return uVar10;
}

