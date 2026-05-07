// Function: FUN_01a05b50
// Address: 01a05b50
// Size: 606 bytes
// Class: Unknown

void FUN_01a05b50(void)

{
  int64_t *plVar1;
  int iVar2;
  float extraout_XMM0_Db;
  uint64_t local_58;
  uint8_t local_50;
  uint64_t local_40;
  uint8_t local_38;
  
  FUN_01d51a40();
  if (local_38 == '\0') {
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  plVar1 = (int64_t *)FUN_00e8fc40();
  FUN_00152930();
  (**(code **)(*plVar1 + 0x18))();
  FUN_01d526f0();
  FUN_01d4eaa0();
  FUN_01d52740();
  FUN_01d480c0();
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01d52740();
  (**(code **)(*local_40 + 0x400))(0);
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01d52740();
  FUN_01d481c0();
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  for (iVar2 = 0; FUN_01d526f0(), (float)iVar2 < extraout_XMM0_Db; iVar2 = iVar2 + 1) {
    FUN_01d530d0(iVar2,0);
    if (local_50 == '\0') {
      if (local_58 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_50 = '\0';
    }
    FUN_00d21140();
    if (local_58 != 0) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
  }
  if (plVar1 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (local_40 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}

