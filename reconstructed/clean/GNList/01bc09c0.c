// Function: FUN_01bc09c0
// Address: 01bc09c0
// Size: 1144 bytes
// Class: GNList
// === GNList properties ===
//   GNInt           _archiveVersion
//   bool            _awakesObjectsAfterDecoding
//   bool            _isCancelled
//   GNInt           _currentObjectGraphIdx
//   GNInt           _predictedDecodedValuesIndex


int64_t * FUN_01bc09c0(void)

{
  int iVar1;
  int64_t lVar2;
  uint64_t uVar3;
  int iVar4;
  char cVar5;
  uint64_t in_RAX;
  uint64_t *puVar6;
  int64_t lVar7;
  int iVar8;
  int64_t *arg1;
  int64_t lVar9;
  int64_t *this_ptr;
  uint uVar10;
  int64_t local_b0;
  uint8_t local_a8;
  uint64_t local_a0;
  char local_98;
  int local_74;
  int64_t local_70;
  char local_68 [8];
  int64_t local_60;
  uint64_t local_58;
  int local_50;
  uint64_t local_48;
  char local_40;
  uint32_t local_34;
  
  lVar2 = local_70;
  if ((arg1[7] == 0) || (in_RAX = (**(code **)(*arg1 + 0x3b8))(), local_70 == 0)) {
    local_34 = (uint32_t)CONCAT71((int7)((uint64_t)in_RAX >> 8),1);
    local_74 = 0;
  }
  else {
    if ((local_68[0] == '\0') && ((FUN_00d50b00(), local_68[0] != '\0' && (local_70 != 0)))) {
      FUN_00d50b20();
    }
    local_74 = *(int *)(local_70 + 0xc);
    if (0 < local_74) {
      local_68[0] = '\0';
      local_70 = 0;
      local_60 = lVar2;
      local_58 = 0xffffffff;
      local_50 = 0;
      local_58._4_4_ = 0;
      while( true ) {
        if (local_58._4_4_ != 0) {
          if (local_58._4_4_ < 1) {
            iVar8 = -local_58._4_4_;
          }
          else {
            iVar8 = (int)local_58 - local_58._4_4_;
            local_58 = CONCAT44(local_58._4_4_,iVar8);
            FUN_00d23690();
            local_50 = local_50 + local_58._4_4_;
            iVar8 = 0;
          }
          local_58 = CONCAT44(iVar8,(int)local_58);
        }
        iVar4 = (int)local_58;
        iVar8 = (int)local_58 + 1;
        local_58 = CONCAT44(local_58._4_4_,iVar8);
        if (*(int *)(local_60 + 0xc) <= iVar8) break;
        local_70 = *(int64_t *)(*(int64_t *)(local_60 + 0x10) + (int64_t)iVar8 * 8);
        lVar2 = arg1[4];
        iVar1 = *(int *)(lVar2 + 0xc);
        lVar7 = (int64_t)(iVar8 + local_50);
        if ((iVar1 <= iVar8 + local_50) ||
           (*(int64_t *)(*(int64_t *)(*(int64_t *)(lVar2 + 0x10) + lVar7 * 8) + 0x20) != local_70
           )) {
          lVar9 = lVar7 << 0x20;
          uVar10 = ~(iVar4 + local_50);
          do {
            lVar7 = lVar7 + 1;
            if (iVar1 <= lVar7) goto LAB_01bc0b42;
            lVar9 = lVar9 + 0x100000000;
            uVar10 = uVar10 - 1;
          } while (*(int64_t *)(*(int64_t *)(*(int64_t *)(lVar2 + 0x10) + lVar7 * 8) + 0x20) ==
                   local_70);
          if (uVar10 == 1) {
LAB_01bc0b42:
            local_a8 = 0;
            local_b0 = local_70;
            FUN_01bc1070((int64_t)iVar1,&local_b0);
            uVar3 = local_a0;
            if (local_98 == '\0') {
              if (local_a0 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_98 = '\0';
            }
            local_48 = uVar3;
            local_40 = '\0';
            FUN_00d23370();
            if ((local_40 != '\0') && (local_48 != 0)) {
              FUN_00d50b20();
            }
            if (uVar3 != 0) {
              FUN_00d50b20();
            }
          }
          else {
            uVar3 = *(uint64_t *)(*(int64_t *)(lVar2 + 0x10) + (lVar9 >> 0x1d));
            if (uVar3 != 0) {
              FUN_00d50b00();
            }
            FUN_00d23620();
            local_40 = '\0';
            local_48 = uVar3;
            FUN_00d23370();
            if ((local_40 != '\0') && (local_48 != 0)) {
              FUN_00d50b20();
            }
            if (uVar3 != 0) {
              FUN_00d50b20();
            }
          }
        }
      }
      FUN_00083b20();
    }
    local_34 = 0;
  }
  while (lVar2 = arg1[4], local_74 < *(int *)(lVar2 + 0xc)) {
    FUN_00d23340();
    local_48 = CONCAT71(local_48._1_7_,local_68[0]);
    puVar6 = (uint64_t *)local_68;
    if (local_68[0] == '\0') {
      puVar6 = &local_48;
    }
    *(char *)puVar6 = '\0';
    if ((local_68[0] != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    if ((char)local_48 == '\0') {
      if (local_70 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_48 = local_48 & 0xffffffffffffff00;
    }
    local_68[0] = '\0';
    cVar5 = FUN_00d23d70();
    if ((local_68[0] != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    if (local_70 != 0) {
      FUN_00d50b20();
    }
    if (cVar5 != '\0') {
      FUN_00d23340();
      local_48 = CONCAT71(local_48._1_7_,local_68[0]);
      puVar6 = (uint64_t *)local_68;
      if (local_68[0] == '\0') {
        puVar6 = &local_48;
      }
      *(char *)puVar6 = '\0';
      if ((local_68[0] != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      if ((char)local_48 == '\0') {
        if (local_70 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_48 = local_48 & 0xffffffffffffff00;
      }
      local_68[0] = '\0';
      FUN_00d23f50();
      if ((local_68[0] != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      if (local_70 != 0) {
        FUN_00d50b20();
      }
    }
    FUN_00d23340();
    local_48 = CONCAT71(local_48._1_7_,local_68[0]);
    puVar6 = (uint64_t *)local_68;
    if (local_68[0] == '\0') {
      puVar6 = &local_48;
    }
    *(char *)puVar6 = '\0';
    if ((local_68[0] != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d50130();
    if (((char)local_48 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d23740();
  }
  *(int *)(arg1 + 0xb) = local_74;
  *(void*)(this_ptr + 1) = 0;
  FUN_00d50b00();
  *this_ptr = lVar2;
  *(void*)(this_ptr + 1) = 1;
  if ((char)local_34 == '\0') {
    FUN_00d50b20();
  }
  return this_ptr;
}

