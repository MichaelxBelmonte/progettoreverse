// Function: FUN_00355420
// Address: 00355420
// Size: 539 bytes
// Class: Unknown

uint8_t FUN_00355420(uint64_t param_1,int param_2)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  float fVar4;
  uint32_t uVar5;
  int64_t local_a0;
  char local_98;
  int64_t local_90;
  char local_88;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  float local_2c;
  
  if (param_2 != 0) {
    FUN_01c00e50();
    lVar2 = local_40;
    if ((((local_38 == '\0') && (local_40 != 0)) && (FUN_00d50b00(), local_38 != '\0')) &&
       (local_40 != 0)) {
      FUN_00d50b20();
    }
    FUN_0049e420();
    lVar3 = local_40;
    if (((local_38 == '\0') && (local_40 != 0)) &&
       ((FUN_00d50b00(), local_38 != '\0' && (local_40 != 0)))) {
      FUN_00d50b20();
    }
    local_2c = (float)FUN_01bbf250();
    fVar4 = (float)FUN_00075620();
    lVar1 = g_026d8460;
    if (local_2c <= fVar4) {
      if (g_026d8460 != 0) {
        FUN_00d50b00();
      }
      local_50 = lVar1;
      local_48 = '\x01';
      FUN_01bbf250();
      FUN_0049e560(&local_50,g_023b2d70,g_02390450);
      if ((local_88 != '\0') && (local_90 != 0)) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      if (g_026d8460 != 0) {
        FUN_00d50b00();
      }
      local_2c = (float)FUN_01bbf250();
      uVar5 = FUN_00075620();
      FUN_0049e560(local_2c,uVar5,g_02390450);
      if ((local_98 != '\0') && (local_a0 != 0)) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
    }
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  return 1;
}

