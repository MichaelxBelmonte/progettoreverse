// Function: FUN_01893e60
// Address: 01893e60
// Size: 703 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_01893e60(uint64_t param_1)

{
  int64_t lVar1;
  int64_t *plVar2;
  int64_t arg1;
  int64_t *plVar3;
  int64_t *local_98;
  char local_90;
  int64_t local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  int64_t *local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  int64_t *local_48;
  char local_40;
  int64_t *local_38;
  char local_30;
  
  FUN_00d8ede0();
  local_68 = local_48;
  local_60 = 0;
  if (local_40 == '\0') {
    if (local_48 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_40 = '\0';
  }
  local_60 = '\x01';
  FUN_00cddf30();
  plVar3 = local_38;
  if (local_30 == '\0') {
    if (((local_38 != (int64_t *)0x0) && (FUN_00d50b00(), local_30 != '\0')) &&
       (local_38 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_30 = '\0';
  }
  if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  local_70 = 0;
  lVar1 = *(int64_t *)(arg1 + 0x40);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  local_70 = '\x01';
  local_78 = lVar1;
  FUN_00e2e660();
  plVar2 = local_38;
  if (local_30 == '\0') {
    if (((local_38 != (int64_t *)0x0) && (FUN_00d50b00(), local_30 != '\0')) &&
       (local_38 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_30 = '\0';
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d97ce0(param_1,2);
  local_58 = local_88;
  local_50 = 0;
  if (local_80 == '\0') {
    if (local_88 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_80 = '\0';
  }
  local_50 = '\x01';
  (**(code **)(*plVar3 + 0x400))(param_1,&local_58);
  local_98 = plVar2;
  local_90 = '\0';
  (**(code **)(*local_48 + 0x400))(param_1,&local_98);
  if (plVar3 != local_38) {
    plVar3 = local_38;
    if (local_30 != '\0') {
      FUN_00d50b20();
      local_30 = '\0';
      goto LAB_0189406e;
    }
    if (local_38 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
LAB_0189406e:
  if ((local_90 != '\0') && (local_98 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(*plVar3 + 0x368))();
  FUN_00d8f140(param_1,1);
  if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar2 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}

