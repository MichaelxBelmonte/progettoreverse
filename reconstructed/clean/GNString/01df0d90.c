// Function: FUN_01df0d90
// Address: 01df0d90
// Size: 517 bytes
// Class: GNString
// String references:
//   "GNString"
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_01df0d90(uint32_t param_1)

{
  int64_t lVar1;
  char cVar2;
  int iVar3;
  int64_t *plVar4;
  int64_t *plVar5;
  void*this_ptr;
  int64_t local_60;
  char local_58;
  int64_t *local_50;
  char local_48;
  int64_t *local_40;
  char local_38;
  int64_t *local_30;
  
  lVar1 = g_02724b68;
  if (g_02724b68 != 0) {
    FUN_00d50b00();
  }
  local_60 = lVar1;
  local_58 = '\x01';
  FUN_01ccc2f0(param_1,&local_60);
  plVar5 = local_40;
  local_30 = local_40;
  if (local_38 == '\0') {
    if (local_40 == (int64_t *)0x0) {
      local_30 = (int64_t *)0x0;
      plVar5 = (int64_t *)0x0;
    }
    else {
      FUN_00d50b00();
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if (plVar5 == (int64_t *)0x0) {
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
  }
  else {
    // [STATIC_INIT: property registration]
    (**(code **)(*plVar5 + 0x360))();
    cVar2 = FUN_00e85ea0();
    plVar5 = local_30;
    plVar4 = local_30;
    if (cVar2 == '\0') {
      plVar4 = g_02802688;
    }
    if (plVar4 == (int64_t *)0x0) {
      *this_ptr = local_30;
      *(void*)(this_ptr + 1) = 1;
    }
    else {
      local_50 = local_30;
      local_48 = '\0';
      FUN_01cfb480();
      if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar5 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
    }
  }
  return;
}

