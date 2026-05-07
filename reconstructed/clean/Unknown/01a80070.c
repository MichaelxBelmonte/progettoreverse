// Function: FUN_01a80070
// Address: 01a80070
// Size: 722 bytes
// Class: Unknown

void FUN_01a80070(uint32_t param_1,uint32_t param_2)

{
  uint64_t uVar1;
  int64_t lVar2;
  int64_t lVar3;
  int unaff_ESI;
  int64_t this_ptr;
  int64_t lVar4;
  uint32_t uVar5;
  uint64_t local_b0;
  uint8_t local_a8;
  int64_t local_a0;
  uint8_t local_98;
  uint64_t local_90;
  uint8_t local_88;
  int64_t local_80;
  uint64_t local_78;
  uint8_t local_70;
  int64_t local_68;
  uint64_t local_60;
  int local_58;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  if (unaff_ESI == 0) {
    uVar5 = FUN_01a7c080();
  }
  else {
    local_68 = *(int64_t *)(this_ptr + 0x38);
    uVar5 = param_1;
    if (local_68 != 0) {
      local_70 = 0;
      local_78 = 0;
      local_60._0_4_ = -1;
      local_60._4_4_ = 0;
      local_58 = 0;
      while( true ) {
        lVar3 = (int64_t)(int)local_60;
        local_60._0_4_ = (int)local_60 + 1;
        if (*(int *)(local_68 + 0xc) <= (int)local_60) break;
        local_78 = *(void*)(*(int64_t *)(local_68 + 0x10) + 8 + lVar3 * 8);
        FUN_01a7fa50();
        if (local_60._4_4_ != 0) {
          if (local_60._4_4_ < 1) {
            local_60._4_4_ = -local_60._4_4_;
          }
          else {
            local_60._0_4_ = (int)local_60 - local_60._4_4_;
            FUN_00d23690();
            local_58 = local_58 + local_60._4_4_;
            local_60._4_4_ = 0;
          }
        }
      }
      uVar5 = FUN_01a80d20();
      lVar3 = *(int64_t *)(this_ptr + 0x38);
      goto joined_r0x01a80156;
    }
  }
  lVar3 = *(int64_t *)(this_ptr + 0x38);
joined_r0x01a80156:
  if (lVar3 != 0) {
    local_70 = 0;
    local_78 = 0;
    local_58 = 0;
    local_60 = 0;
    local_68 = lVar3;
    if (0 < *(int *)(lVar3 + 0xc)) {
      lVar4 = 0;
      do {
        uVar1 = *(void*)(*(int64_t *)(lVar3 + 0x10) + lVar4 * 8);
        local_a8 = 0;
        local_b0 = uVar1;
        local_78 = uVar1;
        FUN_01a7f860(uVar5,&local_b0);
        lVar2 = local_40;
        if ((local_38 == '\0') && (local_40 != 0)) {
          FUN_00d50b00();
        }
        local_80 = lVar2;
        FUN_01a58dc0();
        local_50 = local_40;
        local_48 = 0;
        if (local_38 == '\0') {
          if (local_40 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        local_48 = '\x01';
        uVar5 = FUN_01e437f0(param_1);
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        uVar5 = FUN_01a87460(uVar5,param_2);
        lVar2 = local_40;
        if (local_38 == '\0') {
          if (local_40 != 0) {
            uVar5 = FUN_00d50b00();
            if ((local_38 != '\0') && (local_40 != 0)) {
              uVar5 = FUN_00d50b20();
            }
            goto LAB_01a80300;
          }
        }
        else if (local_40 != 0) {
LAB_01a80300:
          local_a0 = lVar2;
          local_98 = 0;
          local_88 = 0;
          local_90 = uVar1;
          FUN_01a7fb40(uVar5,&local_90);
          uVar5 = FUN_00d50b20();
        }
        if (local_80 != 0) {
          uVar5 = FUN_00d50b20();
        }
        lVar4 = lVar4 + 1;
        local_60 = CONCAT44(local_60._4_4_,(int)lVar4);
      } while ((int)lVar4 < *(int *)(lVar3 + 0xc));
    }
    FUN_01a80d20();
  }
  return;
}

