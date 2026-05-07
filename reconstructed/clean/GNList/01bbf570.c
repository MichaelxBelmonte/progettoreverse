// Function: FUN_01bbf570
// Address: 01bbf570
// Size: 955 bytes
// Class: GNList
// === GNList properties ===
//   GNInt           _archiveVersion
//   bool            _awakesObjectsAfterDecoding
//   bool            _isCancelled
//   GNInt           _currentObjectGraphIdx
//   GNInt           _predictedDecodedValuesIndex


int64_t * FUN_01bbf570(void)

{
  int iVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t lVar4;
  uint64_t uVar5;
  char *pcVar6;
  int64_t lVar7;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t lVar8;
  int64_t lVar9;
  char local_70;
  undefined7 uStack_6f;
  char local_68;
  int64_t *local_60;
  int local_54;
  int64_t *local_48;
  char local_40 [12];
  uint32_t local_34;
  
  uVar5 = (**(code **)(*arg1 + 0x3b0))();
  local_60 = local_48;
  if (local_40[0] == '\0') {
    if (local_48 == (int64_t *)0x0) goto LAB_01bbf83e;
    FUN_00d50b00();
    if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    local_54 = *(int *)((int64_t)local_48 + 0xc);
  }
  else {
    if (local_48 == (int64_t *)0x0) {
LAB_01bbf83e:
      local_54 = 0;
      local_34 = (uint32_t)CONCAT71((int7)((uint64_t)uVar5 >> 8),1);
      goto LAB_01bbf84a;
    }
    local_54 = *(int *)((int64_t)local_48 + 0xc);
  }
  if (0 < local_54) {
    lVar8 = 1;
    lVar9 = 0;
    do {
      iVar1 = *(int *)(arg1[3] + 0xc);
      if (lVar9 < iVar1) {
        lVar2 = *(int64_t *)(arg1[3] + 0x10);
        lVar3 = *(int64_t *)(local_60[2] + lVar9 * 8);
        lVar4 = lVar8;
        if (*(int64_t *)(*(int64_t *)(lVar2 + lVar9 * 8) + 0x38) != lVar3) {
          do {
            lVar7 = lVar4;
            if (iVar1 <= lVar7) goto LAB_01bbf740;
            lVar4 = lVar7 + 1;
          } while (*(int64_t *)(*(int64_t *)(lVar2 + lVar7 * 8) + 0x38) != lVar3);
          if ((int)lVar7 < iVar1) {
            local_48 = *(int64_t **)(lVar2 + -8 + (lVar7 + 1) * 8);
            if (local_48 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
            FUN_00d23620();
            local_40[0] = '\0';
            FUN_00d23370();
            if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if (local_48 != (int64_t *)0x0) {
              FUN_00d50b20();
            }
          }
          else {
LAB_01bbf740:
            if (lVar3 != 0) {
              FUN_00d50b00();
            }
            FUN_01bbf390();
            local_48 = (int64_t *)CONCAT71(uStack_6f,local_70);
            if (local_68 == '\0') {
              if (local_48 != (int64_t *)0x0) {
                FUN_00d50b00();
              }
            }
            else {
              local_68 = '\0';
            }
            local_40[0] = '\0';
            FUN_00d23370();
            if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if (local_48 != (int64_t *)0x0) {
              FUN_00d50b20();
            }
            if (lVar3 != 0) {
              FUN_00d50b20();
            }
          }
        }
      }
      else {
        lVar2 = *(int64_t *)(local_60[2] + lVar9 * 8);
        if (lVar2 != 0) {
          FUN_00d50b00();
        }
        FUN_01bbf390();
        local_48 = (int64_t *)CONCAT71(uStack_6f,local_70);
        if (local_68 == '\0') {
          if (local_48 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_68 = '\0';
        }
        local_40[0] = '\0';
        FUN_00d23370();
        if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (local_48 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
      }
      lVar9 = lVar9 + 1;
      lVar8 = lVar8 + 1;
    } while (lVar9 < *(int *)((int64_t)local_60 + 0xc));
  }
  local_34 = 0;
LAB_01bbf84a:
  while (lVar8 = arg1[3], local_54 < *(int *)(lVar8 + 0xc)) {
    FUN_00d23340();
    local_70 = local_40[0];
    pcVar6 = local_40;
    if (local_40[0] == '\0') {
      pcVar6 = &local_70;
    }
    *pcVar6 = '\0';
    if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    (**(code **)(*local_48 + 0x370))();
    if (local_70 != '\0') {
      FUN_00d50b20();
    }
    FUN_00d23740();
  }
  *(void*)(this_ptr + 1) = 0;
  FUN_00d50b00();
  *this_ptr = lVar8;
  *(void*)(this_ptr + 1) = 1;
  if ((char)local_34 == '\0') {
    FUN_00d50b20();
  }
  return this_ptr;
}

