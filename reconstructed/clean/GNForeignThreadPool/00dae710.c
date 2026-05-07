// Function: FUN_00dae710
// Address: 00dae710
// Size: 523 bytes
// Class: GNForeignThreadPool
// === GNForeignThreadPool properties ===
//   GNThreadPriorityGroup _priority
//                   _threadPool
//                   _allocCount
//                   _allocLock
//                   _allocThread
//                   _indexHint


uint64_t FUN_00dae710(void)

{
  uint uVar1;
  int64_t *plVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t this_ptr;
  uint64_t unaff_R14;
  undefined7 uVar5;
  uint64_t uVar6;
  bool bVar7;
  int64_t local_90;
  char local_88;
  int64_t local_80;
  int local_78;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  
  lVar4 = *(int64_t *)(this_ptr + 0x28);
  uVar1 = *(uint *)(lVar4 + 0xc);
  if ((int)uVar1 < 1) {
    bVar7 = false;
    uVar5 = 0;
  }
  else {
    uVar5 = (undefined7)((uint64_t)unaff_R14 >> 8);
    bVar7 = true;
    uVar6 = 1;
    while( true ) {
      plVar2 = *(int64_t **)(*(int64_t *)(lVar4 + 0x10) + -8 + uVar6 * 8);
      FUN_00d50b00();
      (**(code **)(*plVar2 + 0x130))();
      if (this_ptr != 0) {
        FUN_00d50b20();
      }
      if (*(char *)(this_ptr + 0x48) == '\0') goto LAB_00dae91a;
      bVar7 = uVar6 < uVar1;
      if (uVar1 == uVar6) break;
      lVar4 = *(int64_t *)(this_ptr + 0x28);
      uVar6 = uVar6 + 1;
    }
  }
  lVar4 = *(int64_t *)(this_ptr + 0x50);
  if (lVar4 != 0) {
    lVar3 = *(int64_t *)(lVar4 + 0x10);
    if (0 < *(int *)(lVar3 + 0xc)) {
      lVar4 = 0;
      do {
        local_70 = *(int64_t *)(*(int64_t *)(lVar3 + 0x10) + lVar4 * 8);
        local_68 = '\0';
        FUN_00d23f50();
        if ((local_68 != '\0') && (local_70 != 0)) {
          FUN_00d50b20();
        }
        lVar4 = lVar4 + 1;
      } while (lVar4 < *(int *)(lVar3 + 0xc));
      lVar4 = *(int64_t *)(this_ptr + 0x50);
      if (lVar4 == 0) goto LAB_00dae91a;
    }
    local_88 = '\0';
    local_80 = *(int64_t *)(lVar4 + 0x10);
    local_78 = 0;
    if (0 < *(int *)(local_80 + 0xc)) {
      do {
        local_90 = *(int64_t *)(*(int64_t *)(local_80 + 0x10) + (int64_t)local_78 * 8);
        FUN_012d5b70((int64_t)local_78,&local_90);
        lVar4 = local_60;
        if (local_58 == '\0') {
          if (local_60 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_58 = '\0';
        }
        FUN_00d21140();
        if (lVar4 != 0) {
          FUN_00d50b20();
        }
        if ((local_58 != '\0') && (local_60 != 0)) {
          FUN_00d50b20();
        }
        local_78 = local_78 + 1;
      } while (local_78 < *(int *)(local_80 + 0xc));
      if ((local_88 != '\0') && (local_90 != 0)) {
        FUN_00d50b20();
      }
    }
  }
LAB_00dae91a:
  return CONCAT71(uVar5,~bVar7) & 0xffffff01;
}

