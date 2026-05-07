// Function: FUN_01a7bc70
// Address: 01a7bc70
// Size: 695 bytes
// Class: Unknown

void FUN_01a7bc70(void)

{
  uint64_t uVar1;
  uint uVar2;
  uint64_t uVar3;
  uint64_t *puVar4;
  int64_t lVar5;
  uint64_t uVar6;
  int64_t local_e0;
  char local_d8;
  int64_t local_c8;
  uint64_t local_c0 [2];
  uint32_t local_b0;
  uint64_t local_ac;
  int64_t local_a0;
  char local_98;
  int64_t local_90;
  uint64_t local_88;
  char local_80;
  int64_t local_78;
  uint64_t local_70;
  uint32_t local_68;
  uint64_t local_60;
  uint8_t local_58;
  uint64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  FUN_00c9fe20();
  puVar4 = &local_60;
  if ((char)local_c0[0] != '\0') {
    puVar4 = local_c0;
  }
  local_60 = CONCAT71(local_60._1_7_,(char)local_c0[0]);
  *(void*)puVar4 = 0;
  if (((char)local_c0[0] != '\0') && (local_c8 != 0)) {
    FUN_00d50b20();
  }
  local_38 = 0;
  if ((char)local_60 == '\0') {
    if (local_c8 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_60 = local_60 & 0xffffffffffffff00;
  }
  local_38 = '\x01';
  local_40 = local_c8;
  FUN_00243390();
  uVar6 = local_88;
  if (local_80 == '\0') {
    if (((local_88 != 0) && (FUN_00d50b00(), local_80 != '\0')) && (local_88 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_80 = '\0';
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (uVar6 != 0) {
    local_80 = 0;
    local_88 = 0;
    local_78 = uVar6;
    local_68 = 0;
    local_70 = 0;
    if (0 < *(int *)(uVar6 + 0xc)) {
      uVar3 = 0;
      local_90 = uVar6;
      do {
        uVar1 = *(uint64_t *)(*(int64_t *)(uVar6 + 0x10) + uVar3 * 8);
        local_48 = '\0';
        local_88 = uVar1;
        local_50 = uVar1;
        FUN_01a78a20(uVar3,&local_50);
        FUN_01a76f60();
        if (local_d8 == '\0') {
          if (local_e0 != 0) {
            FUN_00d50b00();
            goto LAB_01a7be11;
          }
        }
        else {
          local_d8 = '\0';
          if (local_e0 != 0) {
LAB_01a7be11:
            local_c0[0]._0_1_ = '\0';
            local_ac = 0;
            for (lVar5 = 0; local_b0 = (uint32_t)lVar5, lVar5 < *(int *)(local_e0 + 0xc);
                lVar5 = lVar5 + 1) {
              local_58 = 0;
              local_60 = uVar1;
              FUN_01a7b3d0();
            }
            FUN_01a81420();
            FUN_00d50b20();
            uVar6 = local_90;
          }
        }
        if ((local_98 != '\0') && (local_a0 != 0)) {
          FUN_00d50b20();
        }
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        uVar2 = (int)uVar3 + 1;
        uVar3 = (uint64_t)uVar2;
        local_70 = CONCAT44(local_70._4_4_,uVar2);
      } while ((int)uVar2 < *(int *)(uVar6 + 0xc));
    }
    FUN_001159b0();
    FUN_00d50b20();
  }
  return;
}

