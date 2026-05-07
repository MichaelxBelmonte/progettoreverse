// Function: FUN_004bc230
// Address: 004bc230
// Size: 996 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_004bc230(uint64_t param_1)

{
  int64_t *plVar1;
  char cVar2;
  int iVar3;
  int64_t this_ptr;
  int64_t *plVar4;
  int64_t lVar5;
  int64_t local_c8;
  char local_c0;
  int64_t *local_b8;
  char local_b0;
  int64_t *local_a8;
  char local_a0;
  int64_t *local_98;
  char local_90;
  int64_t local_88;
  char local_80;
  int64_t *local_78;
  char local_70;
  int64_t *local_68;
  uint64_t local_60;
  uint32_t local_58;
  int local_4c;
  int64_t *local_48;
  int64_t local_40;
  char local_38;
  
  iVar3 = FUN_01d6fde0();
  lVar5 = g_027e3c00;
  while (g_027e3c00 = lVar5, 1 < iVar3) {
    FUN_01d70040();
    iVar3 = FUN_01d6fde0();
    lVar5 = g_027e3c00;
  }
  if (iVar3 == 0) {
    if (lVar5 != 0) {
      FUN_00d50b00();
    }
    local_c0 = '\x01';
    local_c8 = lVar5;
    FUN_00e427c0(param_1,&local_c8);
    local_98 = local_78;
    local_90 = 0;
    if (local_70 == '\0') {
      if (local_78 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_70 = '\0';
    }
    local_90 = '\x01';
    FUN_01d6f990();
    if ((local_90 != '\0') && (local_98 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_c0 != '\0') && (local_c8 != 0)) {
      FUN_00d50b20();
    }
  }
  FUN_01b57f70();
  FUN_01b57e50();
  plVar4 = local_78;
  if (local_70 == '\0') {
    if (((local_78 != (int64_t *)0x0) && (FUN_00d50b00(), local_70 != '\0')) &&
       (local_78 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_70 = '\0';
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  FUN_01b57f70();
  FUN_01b58c00();
  plVar1 = local_78;
  if (local_70 == '\0') {
    if (((local_78 != (int64_t *)0x0) && (FUN_00d50b00(), local_70 != '\0')) &&
       (local_78 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_70 = '\0';
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (plVar1 != (int64_t *)0x0) {
    local_48 = plVar4;
    local_70 = '\0';
    local_78 = (int64_t *)0x0;
    local_68 = plVar1;
    local_58 = 0;
    local_60 = 0;
    if (*(int *)((int64_t)plVar1 + 0xc) < 1) {
      local_4c = 0;
    }
    else {
      lVar5 = 0;
      local_4c = 0;
      do {
        plVar4 = *(int64_t **)(plVar1[2] + lVar5 * 8);
        local_b8 = local_48;
        local_b0 = '\0';
        local_78 = plVar4;
        cVar2 = (**(code **)(*plVar4 + 0x50))();
        if ((local_b0 != '\0') && (local_b8 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (cVar2 != '\0') {
          local_4c = (int)lVar5 + 1;
        }
        local_a0 = '\0';
        local_a8 = plVar4;
        FUN_00e427c0(param_1,&local_a8);
        local_88 = local_40;
        local_80 = 0;
        if (local_38 == '\0') {
          if (local_40 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        local_80 = '\x01';
        FUN_01d6f990();
        if ((local_80 != '\0') && (local_88 != 0)) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if ((local_a0 != '\0') && (local_a8 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        lVar5 = lVar5 + 1;
        local_60 = CONCAT44(local_60._4_4_,(int)lVar5);
      } while ((int)lVar5 < *(int *)((int64_t)plVar1 + 0xc));
    }
    FUN_00018280();
    plVar4 = local_48;
  }
  (**(code **)(**(int64_t **)(this_ptr + 0x70) + 0x918))();
  if (plVar1 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (plVar4 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}

