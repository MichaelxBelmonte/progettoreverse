// Function: FUN_01eda150
// Address: 01eda150
// Size: 751 bytes
// Class: GNTextAutoCompleterItem

void* FUN_01eda150(void)

{
  int64_t *plVar1;
  int64_t lVar2;
  bool bVar3;
  void*puVar4;
  uint64_t uVar5;
  undefined7 uVar7;
  uint64_t uVar6;
  int64_t arg1;
  void*this_ptr;
  int64_t lVar8;
  int64_t lVar9;
  int64_t lVar10;
  int64_t local_68;
  char local_60;
  void*local_58;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  uint64_t local_38;
  
  FUN_01ed7190();
  local_40 = local_50;
  if (local_50 == 0) {
    bVar3 = true;
    local_40 = 0;
  }
  else {
    if (local_48 == '\0') {
      FUN_00d50b00();
    }
    if ((*(int *)(local_40 + 0xc) != 0) && (*(int64_t *)(arg1 + 0x2a0) != 0)) {
      puVar4 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar4 = &g_02572358;
      (*g_02572370)();
      local_58 = puVar4;
      if (*(int *)(local_40 + 0xc) < 1) {
        local_38 = 0;
        lVar9 = 0;
      }
      else {
        lVar10 = 0;
        lVar9 = 0;
        local_38 = 0;
        do {
          plVar1 = *(int64_t **)(arg1 + 0x2a0);
          FUN_00d50b00();
          lVar2 = *(int64_t *)(*(int64_t *)(local_40 + 0x10) + lVar10 * 8);
          local_60 = 0;
          if (lVar2 != 0) {
            FUN_00d50b00();
          }
          local_60 = '\x01';
          local_68 = lVar2;
          uVar5 = (**(code **)(*plVar1 + 0x40))(&local_68,&stack0xffffffffffffff88);
          lVar8 = local_50;
          uVar7 = (undefined7)((uint64_t)lVar2 >> 8);
          if (local_50 == lVar9) {
            lVar8 = lVar9;
            if (((char)local_38 != '\0') || (local_50 == 0)) {
              uVar6 = local_38 & 0xffffffff;
              goto joined_r0x01eda2f9;
            }
            if (local_48 == '\0') {
              FUN_00d50b00();
              goto LAB_01eda310;
            }
LAB_01eda2a4:
            local_48 = '\0';
            local_38 = CONCAT71((int7)((uint64_t)uVar5 >> 8),1);
            lVar9 = lVar8;
          }
          else {
            if (local_48 != '\0') {
              if (((char)local_38 != '\0') && (lVar9 != 0)) {
                uVar5 = FUN_00d50b20();
              }
              goto LAB_01eda2a4;
            }
            if (local_50 != 0) {
              FUN_00d50b00();
            }
            uVar6 = CONCAT71(uVar7,1);
            if (((char)local_38 != '\0') && (lVar9 != 0)) {
              FUN_00d50b20();
              lVar9 = lVar8;
LAB_01eda310:
              uVar6 = CONCAT71(uVar7,1);
              lVar8 = lVar9;
            }
joined_r0x01eda2f9:
            lVar9 = lVar8;
            if ((local_48 == '\0') || (local_50 == 0)) {
              local_38 = uVar6 & 0xffffffff;
            }
            else {
              FUN_00d50b20();
              local_38 = uVar6 & 0xffffffff;
            }
          }
          if ((local_60 != '\0') && (local_68 != 0)) {
            FUN_00d50b20();
          }
          if (arg1 != 0) {
            FUN_00d50b20();
          }
          if (lVar9 != 0) {
            FUN_00d21140();
          }
          lVar10 = lVar10 + 1;
        } while (lVar10 < *(int *)(local_40 + 0xc));
      }
      *this_ptr = local_58;
      *(void*)(this_ptr + 1) = 1;
      bVar3 = false;
      if (((char)local_38 != '\0') && (lVar9 != 0)) {
        FUN_00d50b20();
        bVar3 = false;
      }
      goto LAB_01eda3ec;
    }
    bVar3 = false;
  }
  *(void*)(this_ptr + 1) = 0;
  *this_ptr = 0;
LAB_01eda3ec:
  if (!bVar3) {
    FUN_00d50b20();
  }
  return this_ptr;
}

