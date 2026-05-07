// Function: FUN_0023c880
// Address: 0023c880
// Size: 671 bytes
// Class: Unknown

bool FUN_0023c880(uint64_t param_1,int param_2)

{
  int64_t lVar1;
  int64_t lVar2;
  byte bVar3;
  uint64_t uVar4;
  int64_t this_ptr;
  bool bVar5;
  double dVar6;
  uint64_t uVar7;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  if (param_2 == 0) {
    FUN_01caeae0();
    lVar1 = local_40;
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_01caeae0();
      FUN_00212b00();
      FUN_01d66ab0();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  lVar1 = g_026f6ea0;
  if (g_026f6ea0 != 0) {
    FUN_00d50b00();
  }
  dVar6 = (double)FUN_00e7d6f0();
  uVar4 = (uint64_t)(dVar6 * g_023907c0);
  dVar6 = dVar6 * g_023907c0 - g_023907c8;
  uVar7 = FUN_0071a120();
  if ((local_38 == '\0') && (local_40 != 0)) {
    uVar7 = FUN_00d50b00();
    if ((local_38 != '\0') && (local_40 != 0)) {
      uVar7 = FUN_00d50b20();
    }
  }
  bVar3 = (byte)(((int64_t)dVar6 & (int64_t)uVar4 >> 0x3f | uVar4) / 3);
  local_60 = lVar1;
  local_58 = '\0';
  FUN_000175c0(uVar7,&local_60);
  lVar2 = local_40;
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
      if ((local_38 != '\0') && (local_40 != 0)) {
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
  if (lVar2 != 0) {
    local_38 = '\0';
    local_40 = lVar2;
    bVar3 = FUN_00c70bc0();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  FUN_00d50b20();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if ((lVar2 != 0 & bVar3) == 0) {
    bVar5 = false;
  }
  else {
    bVar5 = *(int *)(this_ptr + 0x198) == 2;
    if ((bVar5) && ((char)param_2 != '\0')) {
      FUN_00212b00();
      (**(code **)(&UNK_00001550 + **(int64_t **)(this_ptr + 0x90)))();
      FUN_019f7880();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      uVar7 = FUN_00d6f370();
      local_50 = g_026f6ce0;
      if (g_026f6ce0 != 0) {
        uVar7 = FUN_00d50b00();
      }
      local_48 = '\x01';
      FUN_00d70ea0(uVar7,&local_50);
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      bVar5 = true;
    }
  }
  return bVar5;
}

