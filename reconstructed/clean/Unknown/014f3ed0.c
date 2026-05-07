// Function: FUN_014f3ed0
// Address: 014f3ed0
// Size: 827 bytes
// Class: Unknown

uint64_t FUN_014f3ed0(void* param_1)

{
  uint64_t uVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  void *pvVar6;
  uint64_t uVar7;
  int64_t *this_ptr;
  uint uVar8;
  int64_t lVar9;
  uint64_t uVar10;
  uint64_t uVar11;
  int64_t local_48;
  char local_40;
  
  pvVar6 = _pthread_getspecific(param_1);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_014c2a40();
  if ((local_40 == '\0') && (local_48 != 0)) {
    FUN_00d50b00();
  }
  pvVar6 = _pthread_getspecific(param_1);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar4 = FUN_014c2f80();
  iVar5 = FUN_014c2f20();
  if (uVar4 == iVar5 - 1U) {
    uVar8 = *(uint *)(local_48 + 0xc);
    if ((int)uVar8 < 1) {
LAB_014f41df:
      uVar7 = (uint64_t)uVar4;
      bVar2 = false;
      uVar11 = 0;
    }
    else {
      lVar9 = (uint64_t)uVar8 + 1;
      bVar2 = false;
      uVar10 = 0;
      do {
        uVar8 = uVar8 - 1;
        uVar7 = *(uint64_t *)(*(int64_t *)(local_48 + 0x10) + (uint64_t)uVar8 * 8);
        if (uVar10 == uVar7) {
          uVar11 = uVar10;
          bVar3 = bVar2;
          if ((!bVar2) && (uVar7 != 0)) {
            FUN_00d50b00();
            bVar3 = true;
          }
        }
        else {
          if (uVar7 != 0) {
            FUN_00d50b00();
          }
          bVar3 = true;
          uVar11 = uVar7;
          if ((bVar2) && (uVar10 != 0)) {
            FUN_00d50b20();
          }
        }
        bVar2 = bVar3;
        FUN_00d23370();
        lVar9 = lVar9 + -1;
        uVar10 = uVar11;
      } while (1 < lVar9);
    }
LAB_014f41e5:
    (**(code **)(*this_ptr + 0x450))();
    FUN_014ef8f0();
    uVar7 = CONCAT71((int7)(uVar7 >> 8),1);
    if ((bVar2) && (uVar11 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    pvVar6 = _pthread_getspecific(param_1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar4 = FUN_014c2f20();
    iVar5 = FUN_014c2f80();
    if (uVar4 == iVar5 + 1U) {
      if (*(int *)(local_48 + 0xc) < 1) goto LAB_014f41df;
      uVar7 = 0;
      uVar10 = 0;
      bVar3 = false;
      do {
        uVar1 = *(uint64_t *)(*(int64_t *)(local_48 + 0x10) + uVar7 * 8);
        if (uVar10 == uVar1) {
          uVar11 = uVar10;
          bVar2 = bVar3;
          if ((!bVar3) && (uVar1 != 0)) {
            bVar2 = true;
            FUN_00d50b00();
          }
        }
        else {
          if (uVar1 != 0) {
            FUN_00d50b00();
          }
          bVar2 = true;
          uVar11 = uVar1;
          if ((bVar3) && (uVar10 != 0)) {
            FUN_00d50b20();
          }
        }
        FUN_00d21140();
        uVar7 = uVar7 + 1;
        uVar10 = uVar11;
        bVar3 = bVar2;
      } while ((int64_t)uVar7 < (int64_t)*(int *)(local_48 + 0xc));
      goto LAB_014f41e5;
    }
    uVar7 = 0;
    if (local_48 == 0) goto LAB_014f4223;
  }
  FUN_00d50b20();
LAB_014f4223:
  return uVar7 & 0xffffffff;
}

