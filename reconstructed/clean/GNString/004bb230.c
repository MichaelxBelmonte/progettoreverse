// Function: FUN_004bb230
// Address: 004bb230
// Size: 731 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


uint64_t FUN_004bb230(uint64_t param_1,int param_2)

{
  int64_t lVar1;
  bool bVar2;
  int64_t lVar3;
  int iVar4;
  int64_t lVar5;
  char *pcVar6;
  int64_t this_ptr;
  int64_t local_a8;
  char local_a0;
  int64_t local_58;
  char local_50 [8];
  int64_t local_48;
  uint64_t local_40;
  int local_38;
  char local_30 [8];
  
  lVar5 = local_58;
  if (param_2 == 0) {
    return 1;
  }
  FUN_00d6f370();
  iVar4 = FUN_01caea20();
  lVar1 = *(int64_t *)(*(int64_t *)(*(int64_t *)(this_ptr + 0x80) + 0x10) + (int64_t)iVar4 * 8)
  ;
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  lVar3 = g_027096c8;
  if (g_027096c8 != 0) {
    FUN_00d50b00();
  }
  FUN_00d6f570();
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if ((local_50[0] != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  FUN_004bb140();
  FUN_00b88680();
  if (local_50[0] == '\0') {
    if (local_58 == 0) goto LAB_004bb3dc;
    FUN_00d50b00();
    if ((local_50[0] != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
  }
  else if (local_58 == 0) {
LAB_004bb3dc:
    bVar2 = true;
    goto LAB_004bb3ed;
  }
  local_50[0] = '\0';
  local_58 = 0;
  local_48 = lVar5;
  local_40 = 0xffffffff;
  local_38 = 0;
  while( true ) {
    lVar5 = (int64_t)(int)local_40;
    iVar4 = (int)local_40 + 1;
    local_40 = CONCAT44(local_40._4_4_,iVar4);
    if (*(int *)(local_48 + 0xc) <= iVar4) break;
    local_58 = *(int64_t *)(*(int64_t *)(local_48 + 0x10) + 8 + lVar5 * 8);
    iVar4 = FUN_00d45870();
    if (iVar4 == 0x41) {
      FUN_00136b80();
      goto LAB_004bb4f4;
    }
    if (local_40._4_4_ != 0) {
      if (local_40._4_4_ < 1) {
        iVar4 = -local_40._4_4_;
      }
      else {
        local_40 = CONCAT44(local_40._4_4_,(int)local_40 - local_40._4_4_);
        FUN_00d23690();
        local_38 = local_38 + local_40._4_4_;
        iVar4 = 0;
      }
      local_40 = CONCAT44(iVar4,(int)local_40);
    }
  }
  FUN_00136b80();
  bVar2 = false;
LAB_004bb3ed:
  FUN_00d6f370();
  FUN_00d23340();
  pcVar6 = local_30;
  if (local_50[0] != '\0') {
    pcVar6 = local_50;
  }
  local_30[0] = local_50[0];
  *pcVar6 = '\0';
  if ((local_50[0] != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  lVar5 = g_027096d0;
  if (local_30[0] == '\0') {
    if (local_58 != 0) {
      FUN_00d50b00();
      lVar5 = g_027096d0;
    }
  }
  else {
    local_30[0] = '\0';
  }
  g_027096d0 = lVar5;
  if (lVar5 != 0) {
    FUN_00d50b00();
  }
  FUN_00d6f570();
  if (lVar5 != 0) {
    FUN_00d50b20();
  }
  if (local_58 != 0) {
    FUN_00d50b20();
  }
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    FUN_00d50b20();
  }
  if (!bVar2) {
LAB_004bb4f4:
    FUN_00d50b20();
  }
  return 1;
}

