// Function: FUN_01d534b0
// Address: 01d534b0
// Size: 1210 bytes
// Class: Unknown

void FUN_01d534b0(uint64_t param_1,int64_t *param_2,uint64_t param_3,uint64_t param_4)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t arg1;
  int64_t *this_ptr;
  int64_t lVar3;
  int64_t lVar4;
  int64_t lVar5;
  int64_t *plVar6;
  int64_t lVar7;
  uint64_t uVar8;
  int64_t local_90;
  char in_stack_ffffffffffffff78;
  uint8_t uVar9;
  int64_t lVar10;
  uint32_t uVar11;
  uint32_t uVar12;
  int64_t local_48;
  char local_40;
  
  FUN_01d4ed90(*(void*)(arg1 + 0x1c),*(void*)(arg1 + 0x48));
  lVar1 = *param_2;
  lVar3 = *(int64_t *)(lVar1 + 0x10);
  if (lVar3 == local_90) {
    if ((in_stack_ffffffffffffff78 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    if ((in_stack_ffffffffffffff78 == '\0') && (local_90 != 0)) {
      FUN_00d50b00();
      lVar3 = *(int64_t *)(lVar1 + 0x10);
    }
    *(int64_t *)(lVar1 + 0x10) = local_90;
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
  }
  uVar8 = (**(code **)(*(int64_t *)*param_2 + 0x368))(*(void*)(arg1 + 0x1c));
  FUN_01d4ed90(uVar8,*(void*)(arg1 + 0x48));
  lVar1 = *param_2;
  lVar3 = *(int64_t *)(lVar1 + 0x18);
  if (lVar3 == local_90) {
    if ((in_stack_ffffffffffffff78 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    if ((in_stack_ffffffffffffff78 == '\0') && (local_90 != 0)) {
      FUN_00d50b00();
      lVar3 = *(int64_t *)(lVar1 + 0x18);
    }
    *(int64_t *)(lVar1 + 0x18) = local_90;
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
  }
  lVar1 = *(int64_t *)(*param_2 + 0x10);
  if (*(int64_t *)(lVar1 + 0x30) != 0) {
    FUN_01d480c0();
    FUN_01d48370();
    (**(code **)(**(int64_t **)(lVar1 + 0x30) + 0x530))();
    lVar1 = *(int64_t *)(*param_2 + 0x10);
  }
  lVar1 = *(int64_t *)(lVar1 + 0x30);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  FUN_01d48ba0();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  plVar6 = *(int64_t **)(*(int64_t *)(*param_2 + 0x10) + 0x30);
  if (plVar6 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  FUN_00d50b00();
  (**(code **)(*plVar6 + 0x400))(0);
  if (arg1 != 0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  plVar6 = (int64_t *)*param_2;
  if (*(int64_t *)(plVar6[2] + 0x30) != 0) {
    FUN_01d48390();
    FUN_01d481c0();
    plVar6 = (int64_t *)*param_2;
  }
  (**(code **)(*plVar6 + 0x370))();
  lVar1 = *(int64_t *)(*param_2 + 0x18);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  lVar3 = *(int64_t *)(arg1 + 0x40);
  if (lVar3 != 0) {
    uVar9 = 0;
    uVar12 = 0;
    uVar8 = 0;
    if (0 < *(int *)(lVar3 + 0xc)) {
      lVar7 = 0;
      lVar10 = lVar3;
      do {
        lVar2 = *(int64_t *)(*(int64_t *)(lVar3 + 0x10) + lVar7 * 8);
        FUN_01d4ed90(*(void*)(lVar2 + 0x1c),*(void*)(lVar2 + 0x48),param_3,param_4,
                     uVar9,lVar10,uVar8,uVar12);
        uVar11 = (uint32_t)((uint64_t)uVar8 >> 0x20);
        lVar5 = *param_2;
        lVar4 = *(int64_t *)(lVar5 + 0x10);
        if (lVar4 == local_48) {
          if ((local_40 != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          if ((local_40 == '\0') && (local_48 != 0)) {
            FUN_00d50b00();
            lVar4 = *(int64_t *)(lVar5 + 0x10);
          }
          *(int64_t *)(lVar5 + 0x10) = local_48;
          if (lVar4 != 0) {
            FUN_00d50b20();
          }
        }
        uVar8 = (**(code **)(*(int64_t *)*param_2 + 0x368))(*(void*)(lVar2 + 0x1c));
        FUN_01d4ed90(uVar8,*(void*)(lVar2 + 0x48));
        lVar2 = *param_2;
        lVar5 = *(int64_t *)(lVar2 + 0x18);
        if (lVar5 == local_48) {
          if ((local_40 != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          if ((local_40 == '\0') && (local_48 != 0)) {
            FUN_00d50b00();
            lVar5 = *(int64_t *)(lVar2 + 0x18);
          }
          *(int64_t *)(lVar2 + 0x18) = local_48;
          if (lVar5 != 0) {
            FUN_00d50b20();
          }
        }
        lVar2 = *(int64_t *)(*param_2 + 0x10);
        if (*(int64_t *)(lVar2 + 0x30) != 0) {
          FUN_01d480c0();
          FUN_01d48370();
          (**(code **)(**(int64_t **)(lVar2 + 0x30) + 0x530))();
          lVar2 = *(int64_t *)(*param_2 + 0x10);
        }
        lVar2 = *(int64_t *)(lVar2 + 0x30);
        if (lVar2 != 0) {
          FUN_00d50b00();
        }
        FUN_01d48ba0();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        plVar6 = *(int64_t **)(*(int64_t *)(*param_2 + 0x10) + 0x30);
        if (plVar6 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        (**(code **)(*plVar6 + 0x400))(0);
        FUN_00d50b20();
        plVar6 = (int64_t *)*param_2;
        if (*(int64_t *)(plVar6[2] + 0x30) != 0) {
          FUN_01d48390();
          FUN_01d481c0();
          plVar6 = (int64_t *)*param_2;
        }
        (**(code **)(*plVar6 + 0x370))();
        local_48 = *(int64_t *)(*param_2 + 0x18);
        if (local_48 != 0) {
          FUN_00d50b00();
        }
        local_40 = '\0';
        FUN_00d21140();
        if (local_48 != 0) {
          FUN_00d50b20();
        }
        lVar7 = lVar7 + 1;
        uVar8 = CONCAT44(uVar11,(int)lVar7);
      } while ((int)lVar7 < *(int *)(lVar3 + 0xc));
    }
    FUN_01d565a0();
  }
  *this_ptr = lVar1;
  *(void*)(this_ptr + 1) = 1;
  return;
}

