// Function: FUN_00e2df70
// Address: 00e2df70
// Size: 1201 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_00e2df70(uint64_t param_1,int64_t *param_2)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t *arg1;
  int64_t *this_ptr;
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
  int64_t local_40;
  char local_38;
  
  lVar1 = g_027259e0;
  if (g_027259e0 != 0) {
    FUN_00d50b00();
  }
  lVar3 = g_026e17f8;
  local_b0 = lVar1;
  local_a8 = '\x01';
  if (g_026e17f8 != 0) {
    FUN_00d50b00();
  }
  local_a0 = lVar3;
  local_98 = '\x01';
  FUN_00d98db0(&local_a0,&local_b0,0);
  lVar3 = local_40;
  lVar1 = *arg1;
  if (lVar1 == local_40) {
    if (((char)arg1[1] == '\0') && (local_40 != 0)) {
      if (local_38 != '\0') goto LAB_00e2e046;
      FUN_00d50b00();
      goto LAB_00e2e07d;
    }
LAB_00e2e081:
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
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
LAB_00e2e07d:
      *(void*)(arg1 + 1) = 1;
      goto LAB_00e2e081;
    }
    *arg1 = local_40;
    if (((char)lVar2 != '\0') && (lVar1 != 0)) {
      FUN_00d50b20();
    }
LAB_00e2e046:
    *(void*)(arg1 + 1) = 1;
    local_38 = '\0';
  }
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_a8 != '\0') && (local_b0 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d99300();
  lVar3 = local_40;
  lVar1 = *arg1;
  if (lVar1 == local_40) {
    if (((char)arg1[1] == '\0') && (local_40 != 0)) {
      if (local_38 != '\0') goto LAB_00e2e123;
      FUN_00d50b00();
      goto LAB_00e2e156;
    }
LAB_00e2e15a:
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
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
LAB_00e2e156:
      *(void*)(arg1 + 1) = 1;
      goto LAB_00e2e15a;
    }
    *arg1 = local_40;
    if (((char)lVar2 != '\0') && (lVar1 != 0)) {
      FUN_00d50b20();
    }
LAB_00e2e123:
    *(void*)(arg1 + 1) = 1;
  }
  local_90 = *param_2;
  local_88 = '\0';
  FUN_00d8ede0();
  local_50 = local_60;
  local_48 = 0;
  if (local_58 == '\0') {
    if (local_60 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_58 = '\0';
  }
  local_48 = '\x01';
  FUN_00d997b0(&local_50,&local_90);
  lVar3 = local_40;
  lVar1 = *arg1;
  if (lVar1 == local_40) {
    if (((char)arg1[1] == '\0') && (local_40 != 0)) {
      if (local_38 != '\0') goto LAB_00e2e225;
      FUN_00d50b00();
      goto LAB_00e2e25d;
    }
LAB_00e2e262:
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
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
LAB_00e2e25d:
      *(void*)(arg1 + 1) = 1;
      goto LAB_00e2e262;
    }
    *arg1 = local_40;
    if (((char)lVar2 != '\0') && (lVar1 != 0)) {
      FUN_00d50b20();
    }
LAB_00e2e225:
    *(void*)(arg1 + 1) = 1;
    local_38 = '\0';
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  lVar1 = g_02786230;
  if (g_02786230 != 0) {
    FUN_00d50b00();
  }
  lVar3 = g_026e17f8;
  local_80 = lVar1;
  local_78 = '\x01';
  if (g_026e17f8 != 0) {
    FUN_00d50b00();
  }
  local_70 = lVar3;
  local_68 = '\x01';
  FUN_00d98db0(&local_70,&local_80,0);
  lVar3 = local_40;
  lVar1 = *arg1;
  if (lVar1 == local_40) {
    if (((char)arg1[1] != '\0') || (local_40 == 0)) goto LAB_00e2e392;
    if (local_38 == '\0') {
      FUN_00d50b00();
      goto LAB_00e2e38d;
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
LAB_00e2e38d:
      *(void*)(arg1 + 1) = 1;
LAB_00e2e392:
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      goto LAB_00e2e3a6;
    }
    *arg1 = local_40;
    if (((char)lVar2 != '\0') && (lVar1 != 0)) {
      FUN_00d50b20();
    }
  }
  *(void*)(arg1 + 1) = 1;
  local_38 = '\0';
LAB_00e2e3a6:
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  *(void*)(this_ptr + 1) = 0;
  lVar1 = *arg1;
  if ((char)arg1[1] == '\0') {
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    *this_ptr = lVar1;
    *(void*)(this_ptr + 1) = 1;
  }
  else {
    *this_ptr = lVar1;
    *(void*)(this_ptr + 1) = 1;
    *(void*)(arg1 + 1) = 0;
  }
  return;
}

