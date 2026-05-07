// Function: FUN_00b75d60
// Address: 00b75d60
// Size: 709 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_00b75d60(int *param_1,int *param_2)

{
  int iVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  uint uVar4;
  uint64_t arg1;
  int64_t this_ptr;
  int64_t lVar5;
  uint64_t uVar6;
  bool bVar7;
  int64_t local_88;
  char local_80;
  uint32_t local_58;
  uint32_t uStack_54;
  char local_50;
  int *local_48;
  int64_t local_40;
  int local_34;
  
  uVar4 = **(uint **)(this_ptr + 0x30);
  if (arg1 >> 0x20 == 0) {
    uVar2 = (arg1 & 0xffffffff) / (uint64_t)uVar4;
    if (uVar2 != *(uint64_t *)(this_ptr + 0x78)) goto LAB_00b75db0;
  }
  else {
    uVar2 = (int64_t)arg1 / (int64_t)(uint64_t)uVar4;
    if (uVar2 != *(uint64_t *)(this_ptr + 0x78)) {
LAB_00b75db0:
      *(void*)(this_ptr + 0x78) = 0xffffffffffffffff;
      *(uint *)(this_ptr + 0x80) = uVar4 * uVar4;
      local_48 = param_2;
      if ((-1 < (int64_t)uVar2) && (iVar1 = FUN_00b75b90(), (int64_t)uVar2 < (int64_t)iVar1)) {
        uVar4 = (uint)uVar2;
        lVar5 = *(int64_t *)
                 (*(int64_t *)(*(int64_t *)(this_ptr + 0x98) + 0x10) +
                 (int64_t)(int)(uVar2 >> 4) * 8);
        if (lVar5 != 0) {
          local_40 = lVar5;
          FUN_00d50b00();
          lVar5 = local_40;
        }
        if ((uVar2 & 0xf) == 0) {
          uVar6 = 0;
        }
        else {
          uVar6 = (uint64_t)(uVar4 & 0xf);
          if (6 < uVar6 - 1) {
            uVar3 = 0;
            do {
              uVar3 = uVar3 + 8;
            } while ((uVar4 & 8) != uVar3);
          }
          if ((uint64_t)(uVar4 & 7) != 0) {
            uVar3 = 0;
            do {
              uVar3 = uVar3 + 1;
            } while ((uVar4 & 7) != uVar3);
          }
        }
        local_40 = CONCAT44(local_40._4_4_,*(void*)(*(int64_t *)(lVar5 + 0x10) + uVar6 * 4))
        ;
        FUN_00d50b20();
        param_2 = local_48;
        local_34 = (int)local_40;
        FUN_00c66840();
        (**(code **)(**(int64_t **)(this_ptr + 0x20) + 0x3a0))();
        if (CONCAT44(uStack_54,local_58) == 0) {
          iVar1 = (int)local_40;
          (**(code **)(**(int64_t **)(this_ptr + 0x20) + 0x380))(&local_34);
          bVar7 = local_34 == iVar1;
          if ((local_80 != '\0') && (local_88 != 0)) {
            FUN_00d50b20();
          }
          bVar7 = local_88 == 0 && bVar7;
          param_2 = local_48;
        }
        else {
          bVar7 = false;
        }
        if ((local_50 != '\0') && (CONCAT44(uStack_54,local_58) != 0)) {
          FUN_00d50b20();
        }
        if (bVar7) {
          FUN_00c66a40(*(void*)(this_ptr + 0x68),
                       *(void*)(*(int64_t *)(this_ptr + 0x90) + 0x10),
                       *(void*)(this_ptr + 0x54),&local_58);
          *(uint64_t *)(this_ptr + 0x78) = uVar2;
          *(void*)(this_ptr + 0x80) = local_58;
        }
        uVar4 = **(uint **)(this_ptr + 0x30);
        goto joined_r0x00b75e88;
      }
      lVar5 = g_02765700;
      if (g_02765700 != 0) {
        FUN_00d50b00();
      }
      FUN_00cc78b0();
      param_2 = local_48;
      if (lVar5 != 0) {
        FUN_00d50b20();
      }
    }
  }
  uVar4 = **(uint **)(this_ptr + 0x30);
joined_r0x00b75e88:
  if (arg1 >> 0x20 == 0) {
    iVar1 = (int)((arg1 & 0xffffffff) % (uint64_t)uVar4);
  }
  else {
    iVar1 = (int)((int64_t)arg1 % (int64_t)(uint64_t)uVar4);
  }
  *param_2 = iVar1;
  *param_1 = *(int *)(this_ptr + 0x80) - iVar1;
  return;
}

