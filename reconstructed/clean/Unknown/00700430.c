// Function: FUN_00700430
// Address: 00700430
// Size: 1006 bytes
// Class: Unknown

uint64_t FUN_00700430(uint64_t param_1,char param_2)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  void *pvVar4;
  int64_t lVar5;
  uint64_t uVar6;
  int64_t *this_ptr;
  int64_t lVar7;
  int64_t *local_c0;
  char local_b8;
  int64_t local_78;
  char local_70;
  int64_t local_58;
  char local_50;
  int local_40;
  
  (**(code **)(*this_ptr + 0x5d8))();
  if (local_50 == '\0') {
    if (local_58 == 0) goto LAB_0070050e;
    FUN_00d50b00();
LAB_00700497:
    FUN_0063f230();
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if (local_58 == 0) {
      bVar2 = false;
      lVar5 = this_ptr[2];
    }
    else {
      FUN_0063f230();
      cVar3 = FUN_00212c70();
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      bVar2 = false;
      uVar6 = 0;
      if (cVar3 != '\0') goto LAB_00700817;
      lVar5 = this_ptr[2];
    }
  }
  else {
    if (local_58 != 0) goto LAB_00700497;
LAB_0070050e:
    bVar2 = true;
    lVar5 = this_ptr[2];
  }
  if (lVar5 != 0) {
    FUN_00d50b00();
  }
  FUN_002eacb0();
  if ((local_50 == '\0') && (local_58 != 0)) {
    FUN_00d50b00();
  }
  if (lVar5 != 0) {
    FUN_00d50b20();
  }
  if (*(int *)(local_58 + 0xc) == 0) {
    uVar6 = 0;
  }
  else {
    local_40 = -1;
    uVar6 = 0;
    while (local_40 = local_40 + 1, local_40 < *(int *)(local_58 + 0xc)) {
      FUN_004f9cf0();
      iVar1 = *(int *)(local_78 + 0xc);
      if ((local_70 != '\0') && (local_78 != 0)) {
        FUN_00d50b20();
      }
      if (1 < iVar1) {
        uVar6 = 1;
      }
    }
    lVar5 = local_58;
    FUN_000be170();
    if ((uVar6 == 0) || (param_2 == '\0')) {
      if (local_58 == 0) goto LAB_00700817;
    }
    else {
      if (0 < *(int *)(local_58 + 0xc)) {
        lVar7 = 0;
        do {
          uVar6 = *(uint64_t *)(*(int64_t *)(local_58 + 0x10) + lVar7 * 8);
          FUN_006f3f00();
          (**(code **)(*local_c0 + 0x628))();
          pvVar4 = _pthread_getspecific((void*)lVar5);
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_004a2840();
          if ((local_70 != '\0') && (local_78 != 0)) {
            FUN_00d50b20();
          }
          if (local_b8 != '\0') {
            FUN_00d50b20();
          }
          lVar7 = lVar7 + 1;
        } while ((int)lVar7 < *(int *)(local_58 + 0xc));
      }
      FUN_000be170();
      uVar6 = CONCAT71((int7)(uVar6 >> 8),1);
    }
  }
  FUN_00d50b20();
LAB_00700817:
  if (!bVar2) {
    FUN_00d50b20();
  }
  return uVar6 & 0xffffffff;
}

