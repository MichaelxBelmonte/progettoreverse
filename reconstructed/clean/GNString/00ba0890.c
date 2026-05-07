// Function: FUN_00ba0890
// Address: 00ba0890
// Size: 1255 bytes
// Class: GNString
// String references:
//   ".snd"
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_00ba0890(void)

{
  int *piVar1;
  int64_t lVar2;
  int iVar3;
  uint64_t uVar4;
  void*arg1;
  int64_t this_ptr;
  bool bVar5;
  bool bVar6;
  int local_54 [2];
  uint8_t local_4c;
  int64_t local_48;
  char local_40;
  int local_34;
  
  FUN_00b9d1d0();
  uVar4 = (**(code **)(*(int64_t *)*arg1 + 0x3a8))();
  local_4c = 0;
  local_54[1] = 0;
  local_54[0] = 4;
  (**(code **)(**(int64_t **)(this_ptr + 0x20) + 0x380))(local_54,local_54 + 1);
  bVar5 = local_48 != 0;
  bVar6 = local_54[0] != 4;
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  lVar2 = g_02764880;
  if (bVar5 || bVar6) {
    if (g_02764880 != 0) {
      FUN_00d50b00();
    }
    FUN_00cc78b0();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  iVar3 = FUN_00e7de00();
  lVar2 = g_02764880;
  if (iVar3 != 0) {
    if (g_02764880 != 0) {
      FUN_00d50b00();
    }
    FUN_00cc78b0();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_00ccd540(&local_34);
  bVar5 = local_48 != 0;
  bVar6 = local_34 != 4;
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  lVar2 = g_02765700;
  if (bVar5 || bVar6) {
    if (g_02765700 != 0) {
      FUN_00d50b00();
    }
    FUN_00cc78b0();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  piVar1 = (int *)(this_ptr + 0x34);
  FUN_00ccd540(&local_34,piVar1);
  bVar5 = local_48 != 0;
  bVar6 = local_34 != 4;
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  lVar2 = g_02765700;
  if (bVar5 || bVar6) {
    if (g_02765700 != 0) {
      FUN_00d50b00();
    }
    FUN_00cc78b0();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_00ccd540(&local_34,(int *)(this_ptr + 0x38));
  bVar5 = local_48 != 0;
  bVar6 = local_34 != 4;
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  lVar2 = g_02765700;
  if (bVar5 || bVar6) {
    if (g_02765700 != 0) {
      FUN_00d50b00();
    }
    FUN_00cc78b0();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_00ccd540(&local_34,this_ptr + 0x3c);
  bVar5 = local_48 != 0;
  bVar6 = local_34 != 4;
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  lVar2 = g_02765700;
  if (bVar5 || bVar6) {
    if (g_02765700 != 0) {
      FUN_00d50b00();
    }
    FUN_00cc78b0();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_00ccd540(&local_34,this_ptr + 0x40);
  bVar5 = local_48 != 0;
  bVar6 = local_34 != 4;
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  lVar2 = g_02765700;
  if (bVar5 || bVar6) {
    if (g_02765700 != 0) {
      FUN_00d50b00();
    }
    FUN_00cc78b0();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_00ccd540(&local_34,this_ptr + 0x44);
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  lVar2 = g_02765700;
  if (local_48 != 0 || local_34 != 4) {
    if (g_02765700 != 0) {
      FUN_00d50b00();
    }
    FUN_00cc78b0();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  lVar2 = g_02764880;
  if (3 < *(int *)(this_ptr + 0x38) - 2U) {
    if (g_02764880 != 0) {
      FUN_00d50b00();
    }
    FUN_00cc78b0();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  if (uVar4 < (uint64_t)((int64_t)*piVar1 + (int64_t)*(int *)(this_ptr + 0x30))) {
    *piVar1 = (int)uVar4 - *(int *)(this_ptr + 0x30);
  }
  return;
}

