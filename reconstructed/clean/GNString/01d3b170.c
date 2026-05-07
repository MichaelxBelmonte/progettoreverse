// Function: FUN_01d3b170
// Address: 01d3b170
// Size: 688 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


uint64_t FUN_01d3b170(uint64_t param_1)

{
  uint uVar1;
  uint uVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t *plVar5;
  char cVar6;
  int iVar7;
  bool bVar8;
  int64_t *arg1;
  int64_t this_ptr;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  
  if (*arg1 == this_ptr) {
LAB_01d3b39a:
    param_1 = CONCAT71((int7)(param_1 >> 8),1);
  }
  else {
    if (*arg1 != 0) {
      FUN_00d4efa0();
      FUN_00d4efa0();
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      param_1 = 0;
      if (((local_60 != local_70) || (*(int *)(this_ptr + 0xc) != 2)) ||
         (*(int *)(*arg1 + 0xc) != 2)) goto LAB_01d3b40f;
      uVar1 = *(uint *)(this_ptr + 0x20);
      uVar2 = *(uint *)(*arg1 + 0x20);
      bVar8 = uVar1 == uVar2 && (uVar1 & 0xfff40) != 0;
      param_1 = (uint64_t)bVar8;
      if ((bVar8) || (uVar1 != uVar2)) goto LAB_01d3b40f;
      if (*(int64_t *)(this_ptr + 0x10) == 0) {
LAB_01d3b2d1:
        if (*(int64_t *)(this_ptr + 0x18) != 0) {
          FUN_00d50b00();
          lVar3 = *(int64_t *)(this_ptr + 0x18);
          if (lVar3 != 0) {
            FUN_00d50b00();
          }
          iVar7 = FUN_00d8c7a0();
          if ((iVar7 == 0) || (*(int64_t *)(*arg1 + 0x18) == 0)) {
            bVar8 = false;
          }
          else {
            FUN_00d50b00();
            bVar8 = true;
            FUN_00d50b20();
          }
          if (lVar3 != 0) {
            FUN_00d50b20();
          }
          FUN_00d50b20();
          if (bVar8) {
            plVar5 = *(int64_t **)(this_ptr + 0x18);
            if (plVar5 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
            lVar3 = *(int64_t *)(*arg1 + 0x18);
            if (lVar3 != 0) {
              FUN_00d50b00();
            }
            cVar6 = (**(code **)(*plVar5 + 0x50))();
            if (lVar3 != 0) {
              FUN_00d50b20();
            }
            FUN_00d50b20();
            if (cVar6 != '\0') goto LAB_01d3b39a;
          }
        }
      }
      else {
        FUN_00d50b00();
        lVar3 = *(int64_t *)(*arg1 + 0x10);
        if (lVar3 != 0) {
          FUN_00d50b00();
          FUN_00d50b20();
        }
        FUN_00d50b20();
        if (lVar3 == 0) goto LAB_01d3b2d1;
        lVar3 = *(int64_t *)(this_ptr + 0x10);
        if (lVar3 != 0) {
          FUN_00d50b00();
        }
        lVar4 = *(int64_t *)(*arg1 + 0x10);
        if (lVar4 != 0) {
          FUN_00d50b00();
        }
        iVar7 = FUN_00d92520();
        if (lVar4 != 0) {
          FUN_00d50b20();
        }
        if (lVar3 != 0) {
          FUN_00d50b20();
        }
        if (iVar7 == 0) goto LAB_01d3b39a;
      }
      if (*(int64_t *)(this_ptr + 0x18) == 0) {
        if (*(int64_t *)(*arg1 + 0x18) == 0) {
          if (*(int64_t *)(this_ptr + 0x10) == 0) {
            param_1 = CONCAT71((int7)(param_1 >> 8),1);
            if (*(int64_t *)(*arg1 + 0x10) == 0) goto LAB_01d3b40f;
            FUN_00d50b00();
            FUN_00d50b20();
          }
          else {
            FUN_00d50b00();
            FUN_00d50b20();
          }
        }
        else {
          FUN_00d50b00();
          FUN_00d50b20();
        }
      }
      else {
        FUN_00d50b00();
        FUN_00d50b20();
      }
    }
    param_1 = 0;
  }
LAB_01d3b40f:
  return param_1 & 0xffffffff;
}

