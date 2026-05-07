// Function: FUN_01f170f0
// Address: 01f170f0
// Size: 660 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_01f170f0(void)

{
  int64_t *plVar1;
  bool bVar2;
  char cVar3;
  int64_t lVar4;
  int64_t this_ptr;
  int64_t *plVar5;
  int64_t lVar6;
  int64_t local_78;
  char local_70;
  int64_t *local_58;
  char local_50;
  int64_t *local_48;
  char local_40;
  
  if (*(int *)(*(int64_t *)(this_ptr + 0x140) + 0xc) == 0) {
    FUN_01f03a80();
    if (local_50 == '\0') {
      if (local_58 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_50 = '\0';
    }
    local_48 = local_58;
    local_40 = '\0';
    FUN_00d243f0();
    if (local_58 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  FUN_00d216c0();
  lVar4 = *(int64_t *)(this_ptr + 0x140);
  if (0 < *(int *)(lVar4 + 0xc)) {
    lVar6 = 0;
    plVar5 = (int64_t *)0x0;
    bVar2 = false;
    do {
      plVar1 = *(int64_t **)(*(int64_t *)(lVar4 + 0x10) + lVar6 * 8);
      if (plVar5 == plVar1) {
        if ((!bVar2) && (plVar5 != (int64_t *)0x0)) {
          bVar2 = true;
          FUN_00d50b00();
        }
      }
      else {
        if (plVar1 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        if ((bVar2) && (plVar5 != (int64_t *)0x0)) {
          FUN_00d50b20();
          bVar2 = true;
          plVar5 = plVar1;
        }
        else {
          bVar2 = true;
          plVar5 = plVar1;
        }
      }
      if (*(int64_t *)(this_ptr + 0x138) != 0) {
        (**(code **)(*plVar5 + 0x5c8))();
        if (local_48 == (int64_t *)0x0) {
          cVar3 = '\0';
        }
        else {
          (**(code **)(*plVar5 + 0x5c8))();
          (**(code **)(**(int64_t **)(this_ptr + 0x138) + 0x370))();
          if (local_70 == '\0') {
            if (local_78 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_70 = '\0';
          }
          cVar3 = (**(code **)(*local_58 + 0x50))();
          if (local_78 != 0) {
            FUN_00d50b20();
          }
          if ((local_70 != '\0') && (local_78 != 0)) {
            FUN_00d50b20();
          }
          if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (cVar3 != '\0') {
          local_40 = '\0';
          FUN_00d21140();
          local_48 = plVar5;
        }
      }
      lVar6 = lVar6 + 1;
      lVar4 = *(int64_t *)(this_ptr + 0x140);
    } while (lVar6 < *(int *)(lVar4 + 0xc));
    if ((bVar2) && (plVar5 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  return;
}

