// Function: FUN_01b4cd30
// Address: 01b4cd30
// Size: 799 bytes
// Class: MUScaleBrowserItem

uint64_t FUN_01b4cd30(void)

{
  int64_t *plVar1;
  int64_t *plVar2;
  char cVar3;
  uint uVar4;
  uint32_t uVar5;
  uint64_t uVar6;
  void*arg1;
  void*this_ptr;
  int64_t lVar7;
  int64_t local_a8;
  char local_a0;
  int64_t local_88;
  char local_80;
  int64_t *local_40;
  char local_38;
  
  cVar3 = (**(code **)(*(int64_t *)*arg1 + 0x398))();
  if (cVar3 != '\0') {
    plVar1 = (int64_t *)*this_ptr;
    (**(code **)(*(int64_t *)*arg1 + 0x390))();
    if (local_80 == '\0') {
      if (local_88 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_80 = '\0';
    }
    uVar4 = (**(code **)(*plVar1 + 0x50))();
    uVar6 = (uint64_t)uVar4;
    if (local_88 != 0) {
      FUN_00d50b20();
    }
    if (local_80 != '\0') {
      if (local_88 != 0) {
        FUN_00d50b20();
        return uVar6;
      }
      return uVar6;
    }
    return uVar6;
  }
  cVar3 = (**(code **)(*(int64_t *)*arg1 + 0x3a0))();
  if (cVar3 != '\0') {
    (**(code **)(*(int64_t *)*arg1 + 1000))();
    if (local_80 == '\0') {
      if (local_88 == 0) {
        return 0;
      }
      FUN_00d50b00();
    }
    else if (local_88 == 0) {
      return 0;
    }
    if (0 < *(int *)(local_88 + 0xc)) {
      lVar7 = 0;
      do {
        plVar1 = *(int64_t **)(*(int64_t *)(local_88 + 0x10) + lVar7 * 8);
        cVar3 = (**(code **)(*plVar1 + 0x3a0))();
        if (cVar3 == '\0') {
          (**(code **)(*plVar1 + 0x370))();
          FUN_017a9f30();
          if (local_a0 == '\0') {
            if (local_a8 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_a0 = '\0';
          }
          cVar3 = (**(code **)(*local_40 + 0x50))();
          if (local_a8 != 0) {
            FUN_00d50b20();
          }
          if ((local_a0 != '\0') && (local_a8 != 0)) {
            FUN_00d50b20();
          }
          if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (cVar3 != '\0') goto LAB_01b4cf91;
        }
        else {
LAB_01b4cf91:
          plVar2 = (int64_t *)*this_ptr;
          (**(code **)(*plVar1 + 0x390))();
          if (local_38 == '\0') {
            if (local_40 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_38 = '\0';
          }
          uVar5 = (**(code **)(*plVar2 + 0x50))();
          if (local_40 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
          if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((char)uVar5 != '\0') {
            FUN_00115910();
            FUN_00d50b20();
            return CONCAT71((uint7)(uint3)((uint)uVar5 >> 8),1);
          }
        }
        lVar7 = lVar7 + 1;
      } while ((int)lVar7 < *(int *)(local_88 + 0xc));
    }
    FUN_00115910();
    FUN_00d50b20();
  }
  return 0;
}

