// Function: FUN_004ba5c0
// Address: 004ba5c0
// Size: 738 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_004ba5c0(void)

{
  int64_t lVar1;
  int iVar2;
  int iVar3;
  int64_t lVar4;
  int64_t this_ptr;
  bool bVar5;
  int64_t local_98;
  char local_90;
  int64_t local_78;
  char local_70;
  int64_t local_58;
  char local_50;
  int local_40;
  
  FUN_01e53c20();
  if (local_58 == 0) {
    FUN_01e53c20();
    FUN_01e42030();
    bVar5 = local_78 == 0;
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    bVar5 = false;
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if (bVar5) {
    return;
  }
  iVar2 = FUN_004bb140();
  lVar1 = *(int64_t *)(this_ptr + 0x80);
  if (lVar1 != 0) {
    local_50 = '\0';
    local_58 = 0;
    local_40 = -1;
    do {
      lVar4 = (int64_t)local_40;
      local_40 = local_40 + 1;
      if (*(int *)(lVar1 + 0xc) <= local_40) break;
      local_58 = *(int64_t *)(*(int64_t *)(lVar1 + 0x10) + 8 + lVar4 * 8);
      iVar3 = FUN_00d45870();
    } while (iVar3 != iVar2);
    FUN_00136b80();
  }
  FUN_01d6ed40();
  if (*(int64_t *)(this_ptr + 0x78) == 0) {
    return;
  }
  FUN_01d6f8d0();
  FUN_00b88680();
  if (local_50 == '\0') {
    if (local_58 == 0) goto LAB_004ba89a;
    FUN_00d50b00();
  }
  else if (local_58 == 0) goto LAB_004ba89a;
  if (0 < *(int *)(local_58 + 0xc)) {
    iVar2 = 0;
    do {
      FUN_00d45870();
      FUN_00ae7020();
      if (local_70 == '\0') {
        if (local_78 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_70 = '\0';
      }
      FUN_01d6f990();
      if (local_78 != 0) {
        FUN_00d50b20();
      }
      if ((local_70 != '\0') && (local_78 != 0)) {
        FUN_00d50b20();
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(local_58 + 0xc));
  }
  FUN_00136b80();
  FUN_00d50b20();
LAB_004ba89a:
  FUN_01d6ed40();
  return;
}

