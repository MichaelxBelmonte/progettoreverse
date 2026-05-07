// Function: FUN_01f32210
// Address: 01f32210
// Size: 1227 bytes
// Class: Unknown

void FUN_01f32210(void)

{
  bool bVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t lVar4;
  bool bVar5;
  int64_t local_48;
  char local_40;
  
  lVar2 = g_02800040;
  if ((g_02800040 == 0) || (FUN_00d50b00(), lVar4 = g_02800040, g_02800040 == 0)) {
    lVar4 = 0;
  }
  else {
    FUN_00d50b00();
  }
  FUN_01d61e70();
  if (local_40 == '\0') {
    if (local_48 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_40 = '\0';
  }
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  lVar2 = g_026fb8b8;
  if (local_48 == 0) {
    return;
  }
  if (g_026fb8b8 != 0) {
    FUN_00d50b00();
  }
  FUN_01d5e6e0();
  lVar4 = local_48;
  if (local_48 == 0) {
    bVar5 = true;
    lVar4 = 0;
    bVar1 = false;
  }
  else if (local_40 == '\0') {
    FUN_00d50b00();
    bVar5 = false;
    bVar1 = true;
  }
  else {
    local_40 = '\0';
    bVar1 = true;
    bVar5 = false;
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if (!bVar5) {
    FUN_01d66e50();
  }
  lVar2 = g_026fb8c0;
  if (g_026fb8c0 != 0) {
    FUN_00d50b00();
  }
  FUN_01d5e6e0();
  if (local_48 == lVar4) {
    if ((bool)(bVar5 & local_48 != 0)) {
      if (local_40 != '\0') goto LAB_01f32425;
      bVar1 = true;
      FUN_00d50b00();
    }
LAB_01f32484:
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    if (local_40 == '\0') {
      if (local_48 != 0) {
        FUN_00d50b00();
      }
      bVar5 = (bool)(bVar1 & lVar4 != 0);
      bVar1 = true;
      lVar4 = local_48;
      if (bVar5) {
        FUN_00d50b20();
      }
      goto LAB_01f32484;
    }
    bVar5 = lVar4 != 0;
    lVar4 = local_48;
    if ((bool)(bVar1 & bVar5)) {
      FUN_00d50b20();
    }
LAB_01f32425:
    local_40 = '\0';
    bVar1 = true;
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if (lVar4 != 0) {
    FUN_01d66e50();
  }
  lVar2 = g_026fb8c8;
  if (g_026fb8c8 != 0) {
    FUN_00d50b00();
  }
  FUN_01d5e6e0();
  if (local_48 == lVar4) {
    lVar3 = lVar4;
    bVar5 = bVar1;
    if ((!bVar1) && (local_48 != 0)) {
      if (local_40 != '\0') goto LAB_01f32532;
      FUN_00d50b00();
      bVar5 = true;
    }
  }
  else {
    lVar3 = local_48;
    if (local_40 != '\0') {
      if ((bVar1) && (lVar4 != 0)) {
        FUN_00d50b20();
      }
LAB_01f32532:
      local_40 = '\0';
      bVar5 = true;
      goto LAB_01f325ce;
    }
    if (local_48 != 0) {
      FUN_00d50b00();
    }
    bVar5 = true;
    if ((bVar1) && (lVar4 != 0)) {
      FUN_00d50b20();
    }
  }
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
LAB_01f325ce:
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if (lVar3 != 0) {
    FUN_01d66e50();
  }
  FUN_01d62660();
  FUN_01da4890();
  if (local_48 == 0) {
    bVar1 = true;
  }
  else {
    if (local_40 == '\0') {
      FUN_00d50b00();
    }
    FUN_01da8a40();
    bVar1 = false;
  }
  FUN_01f329a0();
  FUN_01d5cff0();
  if (!bVar1) {
    FUN_00d50b20();
  }
  if ((bVar5) && (lVar3 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}

