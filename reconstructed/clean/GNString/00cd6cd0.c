// Function: FUN_00cd6cd0
// Address: 00cd6cd0
// Size: 628 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_00cd6cd0(uint64_t param_1)

{
  int iVar1;
  int64_t *plVar2;
  char cVar3;
  uint64_t uVar4;
  int64_t arg1;
  int64_t *this_ptr;
  int64_t lVar5;
  int64_t lVar6;
  uint8_t local_78 [8];
  uint8_t local_70;
  int64_t local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  char local_40;
  uint64_t local_38;
  
  (**(code **)(**(int64_t **)(*(int64_t *)(arg1 + 0x40) + 0x30) + 0x368))();
  lVar6 = *(int64_t *)(arg1 + 0x40);
  if (*(int64_t *)(lVar6 + 0x38) == 0) {
    (**(code **)(**(int64_t **)(lVar6 + 0x30) + 0x378))();
    *(void*)(this_ptr + 1) = 0;
  }
  else {
    plVar2 = *(int64_t **)(arg1 + 0x50);
    if (plVar2 == (int64_t *)0x0) {
      iVar1 = *(int *)(arg1 + 0x48);
      if (iVar1 == 0) {
        local_38 = 0;
        lVar5 = 0;
      }
      else {
        lVar6 = *(int64_t *)(*(int64_t *)(lVar6 + 0x20) + 0x10);
        FUN_00d50b00();
        uVar4 = FUN_00cd0ea0(param_1,*(void*)(lVar6 + 0x20 + (uint64_t)(iVar1 - 1) * 0x23c))
        ;
        if (local_68 == 0) {
          local_38 = 0;
        }
        else {
          local_38 = CONCAT71((int7)((uint64_t)uVar4 >> 8),1);
          if (local_60 == '\0') {
            FUN_00d50b00();
          }
        }
        FUN_00d50b20();
        lVar6 = *(int64_t *)(arg1 + 0x40);
        lVar5 = local_68;
      }
      (**(code **)(**(int64_t **)(lVar6 + 0x30) + 0x378))();
    }
    else {
      FUN_00d50b00();
      (**(code **)(**(int64_t **)(*(int64_t *)(arg1 + 0x40) + 0x30) + 0x378))();
      local_58 = g_02704060;
      if (g_02704060 != 0) {
        FUN_00d50b00();
      }
      local_50 = '\x01';
      cVar3 = (**(code **)(*plVar2 + 0x50))();
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if (cVar3 == '\0') {
        lVar6 = *(int64_t *)(arg1 + 0x40);
        if (lVar6 != 0) {
          FUN_00d50b00();
        }
        FUN_00d8ee20();
        lVar5 = local_48;
        if (local_40 == '\0') {
          if (local_48 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_40 = '\0';
        }
        local_70 = 1;
        uVar4 = FUN_00cd0c90(param_1,local_78);
        if (local_68 == 0) {
          local_38 = 0;
        }
        else {
          local_38 = CONCAT71((int7)((uint64_t)uVar4 >> 8),1);
          if (local_60 == '\0') {
            FUN_00d50b00();
          }
        }
        if (lVar5 != 0) {
          FUN_00d50b20();
        }
        if ((local_40 != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
        lVar5 = local_68;
        if (lVar6 != 0) {
          FUN_00d50b20();
        }
      }
      else {
        local_38 = 0;
        lVar5 = 0;
      }
      FUN_00d50b20();
    }
    *(void*)(this_ptr + 1) = 0;
    if ((char)local_38 != '\0') goto LAB_00cd6f28;
    if (lVar5 != 0) {
      FUN_00d50b00();
      goto LAB_00cd6f28;
    }
  }
  lVar5 = 0;
LAB_00cd6f28:
  *this_ptr = lVar5;
  *(void*)(this_ptr + 1) = 1;
  return;
}

