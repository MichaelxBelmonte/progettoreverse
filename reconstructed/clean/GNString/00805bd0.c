// Function: FUN_00805bd0
// Address: 00805bd0
// Size: 657 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_00805bd0(void)

{
  int64_t *plVar1;
  int64_t lVar2;
  char cVar3;
  int64_t *plVar4;
  void*arg1;
  int64_t this_ptr;
  int64_t local_b0;
  char local_a8;
  int64_t local_a0;
  char local_98;
  int64_t local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t *local_30;
  char local_28;
  
  *(void*)(this_ptr + 0xc0) = *arg1;
  FUN_01f27fe0();
  cVar3 = (**(code **)(*local_30 + 0x450))();
  if ((local_28 != '\0') && (local_30 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar3 != '\0') {
    return;
  }
  FUN_00d50b00();
  local_b0 = g_0272fbc8;
  if (g_0272fbc8 != 0) {
    FUN_00d50b00();
  }
  lVar2 = g_026de540;
  local_a8 = '\x01';
  if (g_026de540 != 0) {
    FUN_00d50b00();
  }
  local_a0 = lVar2;
  local_98 = '\x01';
  local_90 = 0;
  local_88 = '\0';
  FUN_000bf690(&local_a0,&local_b0,&local_90);
  plVar1 = *(int64_t **)(this_ptr + 0xd0);
  plVar4 = plVar1;
  if (plVar1 == local_30) goto LAB_00805d0f;
  plVar4 = local_30;
  if (local_28 == '\0') {
    if (local_30 == (int64_t *)0x0) {
      plVar4 = (int64_t *)0x0;
      goto LAB_00805cc4;
    }
    FUN_00d50b00();
    plVar1 = *(int64_t **)(this_ptr + 0xd0);
    *(int64_t **)(this_ptr + 0xd0) = local_30;
  }
  else {
    local_28 = '\0';
LAB_00805cc4:
    *(int64_t **)(this_ptr + 0xd0) = plVar4;
  }
  if (plVar1 != (int64_t *)0x0) {
    FUN_00d50b20();
    plVar4 = local_30;
  }
LAB_00805d0f:
  if ((local_28 != '\0') && (plVar4 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_a8 != '\0') && (local_b0 != 0)) {
    FUN_00d50b20();
  }
  if (this_ptr != 0) {
    FUN_00d50b20();
  }
  lVar2 = g_026de548;
  if (g_026de548 != 0) {
    FUN_00d50b00();
  }
  local_80 = lVar2;
  local_78 = '\x01';
  local_70 = 0;
  local_68 = '\0';
  FUN_000bf780();
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  lVar2 = g_026f6da0;
  if (g_026f6da0 != 0) {
    FUN_00d50b00();
  }
  local_60 = lVar2;
  local_58 = '\x01';
  local_50 = 0;
  local_48 = '\0';
  FUN_000bf780();
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  return;
}

