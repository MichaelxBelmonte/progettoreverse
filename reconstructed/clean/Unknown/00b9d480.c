// Function: FUN_00b9d480
// Address: 00b9d480
// Size: 841 bytes
// Class: Unknown

void FUN_00b9d480(uint64_t param_1,int param_2,uint64_t param_3,int64_t param_4)

{
  int64_t lVar1;
  bool bVar2;
  int64_t lVar3;
  int iVar4;
  int iVar5;
  int64_t lVar6;
  int iVar7;
  int64_t arg1;
  int64_t this_ptr;
  int64_t lVar8;
  uint64_t unaff_R13;
  uint64_t uVar9;
  uint64_t uVar10;
  void*local_res8;
  int local_res10;
  int64_t local_res18;
  int64_t local_b0;
  char local_a8;
  int64_t local_70;
  int local_5c;
  uint64_t local_58;
  int64_t local_50;
  char local_48;
  int local_40;
  int local_3c;
  int64_t local_38;
  
  if (local_res18 == 0) {
    if (local_res10 == 0) {
      unaff_R13 = 0;
      local_res10 = FUN_00cce2f0();
    }
    local_3c = local_res10;
    FUN_00b7be00();
    lVar8 = local_50;
    if (((local_48 == '\0') && (FUN_00d50b00(), local_48 != '\0')) && (local_50 != 0)) {
      FUN_00d50b20();
    }
    local_70 = *(int64_t *)(lVar8 + 0x10);
    uVar9 = CONCAT71((int7)((uint64_t)unaff_R13 >> 8),1);
  }
  else {
    local_3c = local_res10;
    uVar9 = 0;
    lVar8 = 0;
    local_70 = local_res18;
  }
  iVar4 = FUN_00ae7ec0();
  local_58 = uVar9;
  local_38 = lVar8;
  if (0 < param_2) {
    iVar7 = (int)(param_3 & 0xff);
    local_40 = iVar4 * iVar7;
    lVar6 = (int64_t)local_40;
    lVar8 = arg1;
    if (iVar7 == 0) {
      do {
        local_5c = local_40 * param_2;
        iVar4 = param_2;
        if (local_3c < local_5c) {
          iVar4 = local_3c / local_40;
          local_5c = iVar4 * local_40;
        }
        (**(code **)(*(int64_t *)*local_res8 + 0x3a0))();
        if ((local_a8 != '\0') && (local_b0 != 0)) {
          FUN_00d50b20();
        }
        (**(code **)(*(int64_t *)*local_res8 + 0x380))(&local_5c,local_70);
        if (local_48 == '\0') {
          if (local_50 != 0) {
            FUN_00d50b00();
            if ((local_48 != '\0') && (local_50 != 0)) {
              FUN_00d50b20();
            }
            goto LAB_00b9d6c0;
          }
        }
        else if (local_50 != 0) {
LAB_00b9d6c0:
          FUN_00d50b20();
        }
        iVar7 = param_2 - iVar4;
        bVar2 = iVar4 <= param_2;
        param_2 = iVar7;
      } while (iVar7 != 0 && bVar2);
    }
    else {
      do {
        local_5c = local_40 * param_2;
        iVar4 = param_2;
        if (local_3c < local_5c) {
          iVar4 = local_3c / local_40;
          local_5c = iVar4 * local_40;
        }
        (**(code **)(*(int64_t *)*local_res8 + 0x3a0))(local_5c,lVar8 * lVar6 + param_4);
        if ((local_a8 != '\0') && (local_b0 != 0)) {
          FUN_00d50b20();
        }
        (**(code **)(*(int64_t *)*local_res8 + 0x380))(&local_5c,local_70);
        lVar3 = local_50;
        if ((((local_48 == '\0') && (local_50 != 0)) && (FUN_00d50b00(), local_48 != '\0')) &&
           (local_50 != 0)) {
          FUN_00d50b20();
        }
        uVar10 = 0;
        do {
          lVar1 = *(int64_t *)(this_ptr + uVar10 * 8);
          if (lVar1 != 0) {
            FUN_00ae80c0(uVar10 & 0xffffffff,iVar7,lVar1 + (lVar8 - arg1) * 4,0x44);
          }
          uVar10 = uVar10 + 1;
        } while ((param_3 & 0xff) != uVar10);
        if (lVar3 != 0) {
          FUN_00d50b20();
        }
        iVar5 = param_2 - iVar4;
        bVar2 = iVar4 <= param_2;
        lVar8 = lVar8 + iVar4;
        param_2 = iVar5;
      } while (iVar5 != 0 && bVar2);
    }
  }
  if ((local_38 != 0) && (FUN_00b7c2b0(), local_res18 == 0)) {
    FUN_00d50b20();
  }
  return;
}

