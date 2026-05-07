// Function: FUN_00d4c4e0
// Address: 00d4c4e0
// Size: 707 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


uint32_t FUN_00d4c4e0(void)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  uint32_t uVar4;
  int64_t *arg1;
  int64_t this_ptr;
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
  
  lVar1 = *(int64_t *)(this_ptr + 0x18);
  if (lVar1 != 0) {
    local_78 = 0;
    FUN_00d50b00();
    local_78 = '\x01';
    local_80 = lVar1;
    FUN_00d8ede0();
    local_70 = local_50;
    local_68 = 0;
    if (local_48 == '\0') {
      if (local_50 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_48 = '\0';
    }
    local_68 = '\x01';
    FUN_00d98db0(&local_70,&local_80,0);
    lVar3 = local_40;
    lVar1 = *arg1;
    if (lVar1 == local_40) {
      if (((char)arg1[1] != '\0') || (local_40 == 0)) goto LAB_00d4c5ec;
      if (local_38 == '\0') {
        FUN_00d50b00();
        goto LAB_00d4c5e7;
      }
LAB_00d4c5b0:
      *(void*)(arg1 + 1) = 1;
      local_38 = '\0';
    }
    else {
      lVar2 = arg1[1];
      if (local_38 != '\0') {
        *arg1 = local_40;
        if (((char)lVar2 != '\0') && (lVar1 != 0)) {
          FUN_00d50b20();
        }
        goto LAB_00d4c5b0;
      }
      if (local_40 != 0) {
        FUN_00d50b00();
      }
      *arg1 = lVar3;
      if (((char)lVar2 != '\0') && (lVar1 != 0)) {
        FUN_00d50b20();
      }
LAB_00d4c5e7:
      *(void*)(arg1 + 1) = 1;
LAB_00d4c5ec:
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
  }
  FUN_00d95590();
  local_60 = local_50;
  local_58 = 0;
  if (local_48 == '\0') {
    if (local_50 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_48 = '\0';
  }
  local_58 = '\x01';
  FUN_00d97f20();
  lVar3 = local_40;
  lVar1 = *arg1;
  if (lVar1 == local_40) {
    if (((char)arg1[1] != '\0') || (local_40 == 0)) goto LAB_00d4c70c;
    if (local_38 == '\0') {
      FUN_00d50b00();
      goto LAB_00d4c707;
    }
  }
  else {
    lVar2 = arg1[1];
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
      *arg1 = lVar3;
      if (((char)lVar2 != '\0') && (lVar1 != 0)) {
        FUN_00d50b20();
      }
LAB_00d4c707:
      *(void*)(arg1 + 1) = 1;
LAB_00d4c70c:
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      goto LAB_00d4c720;
    }
    *arg1 = local_40;
    if (((char)lVar2 != '\0') && (lVar1 != 0)) {
      FUN_00d50b20();
    }
  }
  *(void*)(arg1 + 1) = 1;
  local_38 = '\0';
LAB_00d4c720:
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  lVar1 = g_0277dd00;
  if (g_0277dd00 != 0) {
    FUN_00d50b00();
  }
  uVar4 = FUN_00d90dc0();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  return uVar4;
}

