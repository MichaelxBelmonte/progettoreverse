// Function: FUN_01312080
// Address: 01312080
// Size: 648 bytes
// Class: Unknown

uint64_t FUN_01312080(void* param_1,int64_t *param_2)

{
  char cVar1;
  void *pvVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t lVar5;
  uint64_t uVar6;
  uint64_t *arg1;
  int iVar7;
  int64_t local_58;
  char local_50;
  int local_40;
  
  lVar5 = local_58;
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e6160();
  if (local_50 == '\0') {
    if (local_58 != 0) {
      FUN_00d50b00();
      goto LAB_01312115;
    }
  }
  else if (local_58 != 0) {
LAB_01312115:
    local_50 = '\0';
    local_58 = 0;
    local_40 = -1;
    do {
      do {
        param_1 = 0;
        lVar3 = (int64_t)local_40;
        local_40 = local_40 + 1;
        if (*(int *)(lVar5 + 0xc) <= local_40) {
          FUN_000be170();
          FUN_00d50b20();
          goto LAB_013121f4;
        }
        local_58 = *(int64_t *)(*(int64_t *)(lVar5 + 0x10) + 8 + lVar3 * 8);
      } while (local_58 == *param_2);
      pvVar2 = _pthread_getspecific(0);
      lVar3 = local_58;
      if ((pvVar2 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
        lVar3 = *(int64_t *)(local_58 + 0x20 + (uint64_t)(*(uint *)(lVar4 + 0x154) & 1) * 8);
      }
      cVar1 = FUN_012f49f0();
    } while (cVar1 == '\0');
    FUN_000be170();
    uVar6 = CONCAT71((int7)((uint64_t)lVar3 >> 8),1);
    FUN_00d50b20();
    goto LAB_013122ff;
  }
LAB_013121f4:
  uVar6 = *arg1;
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    uVar6 = *arg1;
    lVar5 = FUN_00e8b990();
    if (lVar5 != 0) {
      uVar6 = *(uint64_t *)(uVar6 + 0x20 + (uint64_t)(*(uint *)(lVar5 + 0x154) & 1) * 8);
    }
  }
  FUN_012e6160();
  if (local_50 == '\0') {
    if (local_58 != 0) {
      FUN_00d50b00();
      goto LAB_01312267;
    }
  }
  else if (local_58 != 0) {
LAB_01312267:
    iVar7 = 0;
    do {
      uVar6 = CONCAT71((int7)(uVar6 >> 8),iVar7 < *(int *)(local_58 + 0xc));
      if (*(int *)(local_58 + 0xc) <= iVar7) break;
      cVar1 = FUN_01312080();
      iVar7 = iVar7 + 1;
    } while (cVar1 == '\0');
    FUN_000be170();
    FUN_00d50b20();
    goto LAB_013122ff;
  }
  uVar6 = 0;
LAB_013122ff:
  return uVar6 & 0xffffffff;
}

