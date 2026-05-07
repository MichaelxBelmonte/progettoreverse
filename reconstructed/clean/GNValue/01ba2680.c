// Function: FUN_01ba2680
// Address: 01ba2680
// Size: 632 bytes
// Class: GNValue

uint64_t FUN_01ba2680(void* param_1,char param_2)

{
  int64_t *plVar1;
  int64_t lVar2;
  uint uVar3;
  void *pvVar4;
  int64_t *this_ptr;
  uint64_t uVar5;
  float fVar6;
  uint32_t uVar7;
  float fVar8;
  int64_t local_78;
  char local_70;
  int64_t local_48;
  char local_40;
  
  uVar3 = (**(code **)(*this_ptr + 0x688))();
  uVar5 = (uint64_t)uVar3;
  if (((char)uVar3 != '\0') && (param_2 != '\0')) {
    plVar1 = (int64_t *)this_ptr[0x1c];
    (**(code **)(*(int64_t *)this_ptr[0x1b] + 0x960))();
    if (local_40 == '\0') {
      if (local_48 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_40 = '\0';
    }
    fVar6 = (float)(**(code **)(*plVar1 + 0x380))();
    if (local_48 != 0) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    uVar7 = (**(code **)(*this_ptr + 0x3f8))();
    if ((local_40 == '\0') && (local_48 != 0)) {
      uVar7 = FUN_00d50b00();
    }
    if (0 < *(int *)(local_48 + 0xc)) {
      uVar5 = 0;
      do {
        lVar2 = *(int64_t *)(*(int64_t *)(local_48 + 0x10) + uVar5 * 8);
        if (lVar2 != 0) {
          uVar7 = FUN_00d50b00();
        }
        local_70 = '\0';
        local_78 = lVar2;
        FUN_019a54a0(uVar7,&local_78);
        if (local_40 == '\0') {
          if (local_48 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_40 = '\0';
        }
        if ((local_70 != '\0') && (local_78 != 0)) {
          FUN_00d50b20();
        }
        if (local_48 == 0) {
          pvVar4 = _pthread_getspecific(param_1);
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          uVar7 = FUN_01259600(fVar6);
        }
        else {
          pvVar4 = _pthread_getspecific(param_1);
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          fVar8 = (float)FUN_00d459e0();
          FUN_01259600(fVar8 + fVar6);
          uVar7 = FUN_00d50b20();
        }
        if (lVar2 != 0) {
          uVar7 = FUN_00d50b20();
        }
        uVar5 = uVar5 + 1;
      } while ((int64_t)uVar5 < (int64_t)*(int *)(local_48 + 0xc));
    }
    FUN_00d50b20();
    uVar5 = CONCAT71((int7)(uVar5 >> 8),(char)uVar3);
  }
  return uVar5 & 0xffffffff;
}

