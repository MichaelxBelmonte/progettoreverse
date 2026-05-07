// Function: FUN_00ba1e20
// Address: 00ba1e20
// Size: 834 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


bool FUN_00ba1e20(uint64_t *param_1,uint *param_2,uint64_t param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  uint64_t arg1;
  void*this_ptr;
  uint64_t uVar5;
  bool bVar6;
  int64_t local_d8;
  char local_d0;
  int64_t local_c8;
  char local_c0;
  int64_t local_b8;
  char local_b0;
  int64_t local_a8;
  char local_a0;
  uint64_t local_78;
  char local_70;
  int64_t local_68;
  uint local_5c;
  uint8_t local_58;
  uint local_54;
  uint8_t local_50;
  uint local_4c;
  int local_48;
  uint local_44;
  uint local_40;
  byte local_3c [4];
  int64_t local_38;
  
  local_38 = *(int64_t *)PTR____stack_chk_guard_024a9898;
  local_48 = 8;
  (**(code **)(*(int64_t *)*this_ptr + 0x380))(&local_48,&local_44);
  bVar6 = local_48 != 8;
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  uVar1 = local_40;
  if (local_78 != 0 || bVar6) {
    bVar6 = false;
    goto LAB_00ba213b;
  }
  local_58 = 0;
  local_50 = 0;
  local_54 = CONCAT13((uint8_t)local_40,local_44._1_3_);
  local_5c = local_44;
  iVar2 = FUN_00ccce90();
  local_4c = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  if (iVar2 == 0) {
    local_4c = uVar1;
  }
  if ((int)param_4 < 1) {
LAB_00ba1f99:
    (**(code **)(*(int64_t *)*this_ptr + 0x390))();
    if ((local_d0 != '\0') && (local_d8 != 0)) {
      FUN_00d50b20();
    }
    if ((0 < (int)local_4c) && ((uint64_t)local_4c + local_68 <= arg1)) goto LAB_00ba205d;
LAB_00ba1fe1:
    local_48 = 1;
    (**(code **)(*(int64_t *)*this_ptr + 0x380))(&local_48,local_3c);
    bVar6 = local_48 == 1;
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    bVar6 = local_78 == 0 && bVar6;
    iVar2 = FUN_00ccce90();
    uVar1 = (uint)local_3c[0] | (local_40._1_3_ & 0xff0000) >> 8 | (local_40._1_3_ & 0xff00) << 8 |
            CONCAT13(local_3c[0],local_40._1_3_) << 0x18;
    if (iVar2 == 0) {
      uVar1 = CONCAT13(local_3c[0],local_40._1_3_);
    }
    *param_2 = local_54;
  }
  else {
    iVar2 = FUN_00e7de00();
    if (iVar2 != 0) {
      uVar5 = (uint64_t)param_4;
      uVar3 = 1;
      do {
        uVar4 = uVar3;
        uVar3 = uVar4;
        if (uVar5 == uVar4) break;
        iVar2 = FUN_00e7de00(uVar4,4);
        uVar3 = uVar4 + 1;
      } while (iVar2 != 0);
      if (uVar5 <= uVar4) {
        iVar2 = FUN_00e7de00(uVar3,4);
        if (iVar2 != 0) {
          uVar3 = 1;
          do {
            uVar4 = uVar3;
            if (uVar5 == uVar4) break;
            iVar2 = FUN_00e7de00(uVar4,4);
            uVar3 = uVar4 + 1;
          } while (iVar2 != 0);
          if (uVar5 <= uVar4) goto LAB_00ba1f99;
        }
        goto LAB_00ba1fe1;
      }
    }
LAB_00ba205d:
    *param_2 = local_5c;
    bVar6 = true;
    uVar1 = local_4c;
  }
  if ((int)uVar1 < 0) {
    bVar6 = false;
  }
  else {
    *param_1 = (uint64_t)uVar1;
    (**(code **)(*(int64_t *)*this_ptr + 0x390))((uint64_t)uVar1,&local_68);
    if ((local_c0 != '\0') && (local_c8 != 0)) {
      FUN_00d50b20();
    }
    (**(code **)(*(int64_t *)*this_ptr + 0x398))();
    if ((local_b0 != '\0') && (local_b8 != 0)) {
      FUN_00d50b20();
    }
    (**(code **)(*(int64_t *)*this_ptr + 0x3a0))();
    if ((local_a0 != '\0') && (local_a8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_78 < *param_1 + local_68) && (iVar2 = FUN_00e7ddf0(), iVar2 != 0)) {
      bVar6 = false;
    }
  }
LAB_00ba213b:
  if (*(int64_t *)PTR____stack_chk_guard_024a9898 == local_38) {
    return bVar6;
  }
                      ___stack_chk_fail();
}

