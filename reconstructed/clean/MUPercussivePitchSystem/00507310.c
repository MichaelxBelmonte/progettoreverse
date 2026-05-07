// Function: FUN_00507310
// Address: 00507310
// Size: 654 bytes
// Class: MUPercussivePitchSystem

void FUN_00507310(void)

{
  int64_t lVar1;
  int64_t lVar2;
  byte bVar3;
  uint64_t uVar4;
  int64_t this_ptr;
  double dVar5;
  uint64_t uVar6;
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
  
  lVar1 = g_026f6fd0;
  if (*(int64_t *)(this_ptr + 0x200) != 0) {
    if (g_026f6fd0 != 0) {
      FUN_00d50b00();
    }
    dVar5 = (double)FUN_00e7d6f0();
    uVar4 = (uint64_t)(dVar5 * g_023907c0);
    dVar5 = dVar5 * g_023907c0 - g_023907c8;
    uVar6 = FUN_0071a120();
    if ((((local_38 == '\0') && (local_40 != 0)) && (uVar6 = FUN_00d50b00(), local_38 != '\0')) &&
       (local_40 != 0)) {
      uVar6 = FUN_00d50b20();
    }
    bVar3 = (byte)(((int64_t)dVar5 & (int64_t)uVar4 >> 0x3f | uVar4) / 3);
    local_80 = lVar1;
    local_78 = '\0';
    FUN_000175c0(uVar6,&local_80);
    lVar2 = local_40;
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
      local_58 = '\0';
      local_60 = 0;
      FUN_01cef3b0();
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      FUN_01cef410();
      lVar1 = local_40;
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      lVar2 = g_02709e60;
      if (lVar1 == 0) {
        if (g_02709e60 != 0) {
          FUN_00d50b00();
        }
        local_70 = lVar2;
        local_68 = '\x01';
        FUN_01d51a40();
        local_50 = local_40;
        local_48 = 0;
        if (local_38 == '\0') {
          if (local_40 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        local_48 = '\x01';
        FUN_01cef3b0();
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if ((local_68 != '\0') && (local_70 != 0)) {
          FUN_00d50b20();
        }
      }
    }
  }
  return;
}

