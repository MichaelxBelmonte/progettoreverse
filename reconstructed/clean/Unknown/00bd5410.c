// Function: FUN_00bd5410
// Address: 00bd5410
// Size: 813 bytes
// Class: Unknown

void FUN_00bd5410(uint64_t param_1,int64_t param_2,uint param_3)

{
  int64_t lVar1;
  char cVar2;
  int64_t lVar3;
  void *pvVar4;
  char *pcVar5;
  uint64_t uVar6;
  int64_t arg1;
  int64_t *this_ptr;
  uint uVar7;
  void *pvVar8;
  int64_t local_58;
  char local_50 [8];
  int64_t local_48;
  int64_t local_40;
  char local_38 [8];
  
  uVar6 = param_1;
  uVar7 = param_3;
  local_48 = param_2;
  FUN_00b31a00();
  pvVar4 = (void *)CONCAT71((int7)(uVar6 >> 8),local_50[0]);
  pcVar5 = local_38;
  if (local_50[0] != '\0') {
    pcVar5 = local_50;
  }
  local_38[0] = local_50[0];
  *pcVar5 = '\0';
  if ((local_50[0] != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  local_40 = local_58;
  cVar2 = FUN_00bc4810();
  if (cVar2 == '\0') {
    *(void*)((int64_t)this_ptr + 0x4a) = 0;
    this_ptr[10] = -0x8000000000000000;
    FUN_00bc4890();
  }
  else {
    cVar2 = FUN_00bc47c0();
    if (cVar2 == '\0') {
      lVar3 = 0;
    }
    else {
      lVar3 = FUN_00bc4780();
    }
    cVar2 = FUN_00bc4910();
    if (cVar2 == '\0') {
      if (*(char *)((int64_t)this_ptr + 0x4a) == '\0') {
        if (lVar3 == 0) {
          if (this_ptr[10] != -0x8000000000000000) {
            FUN_00bc4830();
          }
        }
        else if (*(char *)((int64_t)this_ptr + 0x4b) == '\0') {
          *(void*)((int64_t)this_ptr + 0x4a) = 1;
          *(void*)((int64_t)this_ptr + 0x4b) = 0;
          goto joined_r0x00bd5536;
        }
      }
      *(void*)((int64_t)this_ptr + 0x4b) = 0;
    }
    else {
      if (*(char *)((int64_t)this_ptr + 0x4b) != '\0') {
        lVar1 = this_ptr[10];
        pvVar4 = (void *)0x8000000000000000;
        if ((lVar1 != -0x8000000000000000) &&
           ((pvVar4 = (void *)(lVar1 + -0x10), lVar3 < (int64_t)pvVar4 || (lVar1 + 0x10 < lVar3))))
        {
          (**(code **)(*this_ptr + 0x4e0))();
        }
      }
      this_ptr[10] = lVar3 + (int)param_1;
      *(char *)((int64_t)this_ptr + 0x4b) = cVar2;
    }
  }
joined_r0x00bd5536:
  if (((g_02802510 == '\0') || (this_ptr[6] != 0)) || (cVar2 = FUN_00bc4910(), cVar2 != '\0')) {
    FUN_00bce3f0();
    if (local_50[0] == '\0') {
      if (local_58 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_50[0] = '\0';
    }
    FUN_00b332c0();
    if (local_58 != 0) {
      FUN_00d50b20();
    }
    if ((local_50[0] != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    (**(code **)(*(int64_t *)this_ptr[5] + 0x5b0))();
    if ((local_48 == 0) ||
       ((cVar2 = (**(code **)(*(int64_t *)this_ptr[5] + 0x5a8))(), cVar2 != '\0' &&
        (cVar2 = (**(code **)(*(int64_t *)this_ptr[5] + 0x598))(), cVar2 == '\0')))) {
      if ((0 < (int)param_3) && ((arg1 != 0 && (local_48 != 0)))) {
        pvVar8 = (void *)((int64_t)(int)param_1 << 2);
        if (param_3 == 1) {
          uVar6 = 0;
        }
        else {
          uVar6 = 0;
          do {
            if ((*(int64_t *)(arg1 + uVar6 * 8) != 0) &&
               (*(int64_t *)(local_48 + uVar6 * 8) != 0)) {
              _memcpy(pvVar4,pvVar8,uVar7);
            }
            if ((*(int64_t *)(arg1 + 8 + uVar6 * 8) != 0) &&
               (*(int64_t *)(local_48 + 8 + uVar6 * 8) != 0)) {
              _memcpy(pvVar4,pvVar8,uVar7);
            }
            uVar6 = uVar6 + 2;
          } while ((param_3 & 0xfffffffe) != uVar6);
        }
        if ((((param_3 & 1) != 0) && (*(int64_t *)(arg1 + uVar6 * 8) != 0)) &&
           (*(int64_t *)(local_48 + uVar6 * 8) != 0)) {
          _memcpy(pvVar4,pvVar8,uVar7);
        }
      }
    }
    else {
      (**(code **)(*(int64_t *)this_ptr[5] + 0x400))(param_1 & 0xffffffff,local_48);
    }
    FUN_00bce420();
  }
  if ((local_38[0] != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  return;
}

