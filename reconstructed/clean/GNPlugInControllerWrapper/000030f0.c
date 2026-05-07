// Function: FUN_000030f0
// Address: 000030f0
// Size: 612 bytes
// Class: GNPlugInControllerWrapper

void FUN_000030f0(void)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t *plVar3;
  uint64_t uVar4;
  int64_t *local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  char local_40;
  uint32_t local_34;
  
  FUN_01f282c0();
  plVar3 = (int64_t *)FUN_00e8fc40();
  FUN_00005410();
  (**(code **)(*plVar3 + 0x18))();
  uVar4 = (**(code **)(*plVar3 + 0x4c8))();
  if (local_40 == '\0') {
    if (local_48 != 0) {
      FUN_00d50b00();
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      goto LAB_00003168;
    }
  }
  else if (local_48 != 0) {
LAB_00003168:
    FUN_00d6f2a0();
    local_34 = 0;
    goto LAB_000031b1;
  }
  local_34 = (uint32_t)CONCAT71((int7)((uint64_t)uVar4 >> 8),1);
LAB_000031b1:
  FUN_00d6f370();
  lVar2 = local_48;
  if ((((local_40 == '\0') && (local_48 != 0)) && (FUN_00d50b00(), local_40 != '\0')) &&
     (local_48 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d32c80();
  FUN_00df2e00();
  FUN_00e36330();
  FUN_00e36840();
  FUN_00e36990();
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(*plVar3 + 0x460))();
  FUN_00d403d0();
  lVar1 = g_026cb120;
  if (g_026cb120 != 0) {
    FUN_00d50b00();
  }
  local_60 = '\0';
  local_58 = 0;
  local_50 = '\0';
  local_68 = plVar3;
  FUN_00d40470(&local_58,&local_68,1,3);
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if ((char)local_34 == '\0') {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}

