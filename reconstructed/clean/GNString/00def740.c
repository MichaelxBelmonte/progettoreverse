// Function: FUN_00def740
// Address: 00def740
// Size: 598 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


uint64_t FUN_00def740(void)

{
  int64_t lVar1;
  char cVar2;
  int64_t *arg1;
  int64_t this_ptr;
  uint64_t unaff_R12;
  uint64_t uVar3;
  int64_t *plVar4;
  undefined7 uVar5;
  int iVar6;
  uint64_t local_88;
  uint8_t local_80;
  uint64_t local_60;
  uint8_t local_58;
  
  uVar3 = CONCAT71((int7)((uint64_t)unaff_R12 >> 8),1);
  if (*arg1 == this_ptr) goto LAB_00def7b7;
  if (*arg1 != 0) {
    FUN_00d4efa0();
    FUN_00d4efa0();
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    if (local_88 == local_60) {
      plVar4 = *(int64_t **)(this_ptr + 0x20);
      if (plVar4 != (int64_t *)0x0) {
        lVar1 = *(int64_t *)(*arg1 + 0x20);
        if (lVar1 != 0) {
          FUN_00d50b00();
          cVar2 = (**(code **)(*plVar4 + 0x50))();
          uVar3 = CONCAT71((int7)((uint64_t)plVar4 >> 8),1);
          if (lVar1 != 0) {
            FUN_00d50b20();
          }
          if (cVar2 != '\0') goto LAB_00def7b7;
          plVar4 = *(int64_t **)(this_ptr + 0x20);
          if (plVar4 == (int64_t *)0x0) goto LAB_00def878;
        }
        lVar1 = *(int64_t *)(*arg1 + 0x20);
        if (lVar1 != 0) {
          FUN_00d50b00();
          cVar2 = (**(code **)(*plVar4 + 0x50))();
          if (lVar1 != 0) {
            FUN_00d50b20();
          }
          if (cVar2 == '\0') goto LAB_00def7b4;
        }
      }
LAB_00def878:
      lVar1 = *(int64_t *)(this_ptr + 0x30);
      uVar5 = (undefined7)((uint64_t)lVar1 >> 8);
      if (lVar1 != 0) {
        iVar6 = 0;
        do {
          if (*(int *)(lVar1 + 0xc) <= iVar6) {
            FUN_00018280();
            goto LAB_00def90e;
          }
          cVar2 = FUN_00d23d70();
          iVar6 = iVar6 + 1;
        } while (cVar2 == '\0');
        FUN_00018280();
        uVar3 = CONCAT71(uVar5,1);
        goto LAB_00def7b7;
      }
LAB_00def90e:
      lVar1 = *(int64_t *)(this_ptr + 0x28);
      if (lVar1 != 0) {
        iVar6 = 0;
        uVar3 = CONCAT71(uVar5,1);
        do {
          if (*(int *)(lVar1 + 0xc) <= iVar6) {
            FUN_00018280();
            goto LAB_00def7b4;
          }
          cVar2 = FUN_00defac0();
          iVar6 = iVar6 + 1;
        } while (cVar2 == '\0');
        FUN_00018280();
        goto LAB_00def7b7;
      }
    }
  }
LAB_00def7b4:
  uVar3 = 0;
LAB_00def7b7:
  return uVar3 & 0xffffffff;
}

