// Function: FUN_01dce080
// Address: 01dce080
// Size: 676 bytes
// Class: GNScrollView
// === GNScrollView properties ===
//   GNBorderStyle   _borderStyle
//   GNRulerHeaderLocation _rulerHeaderLocation


void FUN_01dce080(uint64_t param_1,uint32_t param_2)

{
  int64_t lVar1;
  int unaff_ESI;
  int64_t *this_ptr;
  int64_t lVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  int64_t local_78;
  char local_70;
  int64_t local_58;
  int64_t local_50;
  int64_t local_48;
  int64_t local_40;
  
  lVar2 = (int64_t)unaff_ESI;
  lVar1 = *(int64_t *)(*(int64_t *)(this_ptr[0x2c] + 0x10) + lVar2 * 8);
  if (lVar1 == 0) {
    local_58 = 0;
  }
  else {
    FUN_00d50b00();
    local_58 = lVar1;
  }
  FUN_00d23620();
  local_40 = local_58;
  FUN_00d23370(param_1,param_2);
  if (*(int *)(this_ptr[0x2f] + 0xc) == 0) {
    bVar3 = false;
    local_50 = 0;
  }
  else {
    local_50 = *(int64_t *)(*(int64_t *)(this_ptr[0x2f] + 0x10) + lVar2 * 8);
    bVar3 = local_50 == 0;
    if (bVar3) {
      local_50 = 0;
    }
    else {
      FUN_00d50b00();
    }
    bVar3 = !bVar3;
    FUN_00d23620();
    local_40 = local_50;
    FUN_00d23370(param_1,param_2);
  }
  if (((char)this_ptr[0x4f] == '\0') || (*(int *)(this_ptr[0x51] + 0xc) == 0)) {
    bVar4 = false;
    local_48 = 0;
  }
  else {
    local_48 = *(int64_t *)(*(int64_t *)(this_ptr[0x51] + 0x10) + lVar2 * 8);
    bVar4 = local_48 == 0;
    if (bVar4) {
      local_48 = 0;
    }
    else {
      FUN_00d50b00();
    }
    bVar4 = !bVar4;
    FUN_00d23620();
    local_40 = local_48;
    FUN_00d23370(param_1,param_2);
  }
  (**(code **)(*this_ptr + 0xa20))(param_1,0);
  (**(code **)(*this_ptr + 0x620))();
  FUN_01e42030();
  if (local_40 == 0) {
    bVar5 = false;
  }
  else {
    FUN_01e4c160();
    bVar5 = local_78 != 0;
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
  }
  if (bVar5) {
    FUN_01e42030();
    FUN_01d86b20();
  }
  if ((bVar4) && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if ((bVar3) && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((lVar1 != 0) && (local_58 != 0)) {
    FUN_00d50b20();
  }
  return;
}

