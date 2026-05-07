// Function: FUN_00dfd400
// Address: 00dfd400
// Size: 837 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_00dfd400(uint64_t param_1)

{
  int64_t lVar1;
  int64_t lVar2;
  int iVar3;
  int64_t *this_ptr;
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
  int64_t local_40;
  char local_38;
  
  lVar1 = g_02784aa8;
  if (g_02784aa8 != 0) {
    param_1 = FUN_00d50b00();
  }
  local_90 = lVar1;
  local_88 = '\x01';
  FUN_000175c0(param_1,&local_90);
  lVar1 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  if (lVar1 == 0) {
    FUN_00dfa590();
    *(void*)(this_ptr + 1) = 0;
    if (local_38 == '\0') {
      if (local_40 == 0) {
        local_40 = 0;
      }
      else {
        FUN_00d50b00();
      }
    }
    *this_ptr = local_40;
    *(void*)(this_ptr + 1) = 1;
    return;
  }
  local_80 = lVar1;
  local_78 = '\0';
  FUN_00d97750();
  lVar1 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  lVar2 = g_02784ab8;
  if (lVar1 == 0) {
    FUN_00dfa740();
    *(void*)(this_ptr + 1) = 0;
    if (local_38 == '\0') {
      if (local_40 == 0) {
        local_40 = 0;
      }
      else {
        FUN_00d50b00();
      }
    }
    *this_ptr = local_40;
    *(void*)(this_ptr + 1) = 1;
    goto LAB_00dfd72b;
  }
  local_70 = lVar1;
  local_68 = '\0';
  if (g_02784ab8 != 0) {
    FUN_00d50b00();
  }
  local_60 = lVar2;
  local_58 = '\x01';
  local_50 = 0;
  local_48 = '\0';
  FUN_00c99930(&local_50,&local_60,0);
  lVar1 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if (lVar1 == 0) {
    FUN_00dfa740();
    *(void*)(this_ptr + 1) = 0;
    if (local_38 == '\0') {
      if (local_40 == 0) {
        local_40 = 0;
      }
      else {
        FUN_00d50b00();
      }
    }
    *this_ptr = local_40;
    *(void*)(this_ptr + 1) = 1;
  }
  else {
    iVar3 = FUN_00c94860();
    FUN_00c948d0((double)iVar3);
    lVar1 = local_40;
    *(void*)(this_ptr + 1) = 0;
    if (local_38 == '\0') {
      if (local_40 == 0) {
        local_40 = 0;
        goto LAB_00dfd589;
      }
      FUN_00d50b00();
      *this_ptr = lVar1;
      *(void*)(this_ptr + 1) = 1;
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
LAB_00dfd589:
      *this_ptr = local_40;
      *(void*)(this_ptr + 1) = 1;
    }
    FUN_00d50b20();
  }
  FUN_00d50b20();
LAB_00dfd72b:
  FUN_00d50b20();
  return;
}

