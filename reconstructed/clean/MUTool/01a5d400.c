// Function: FUN_01a5d400
// Address: 01a5d400
// Size: 561 bytes
// Class: MUTool
// String references:
//   "%@7"

void FUN_01a5d400(void)

{
  char *pcVar1;
  int64_t local_b8;
  char local_b0 [8];
  int64_t local_a8;
  char local_a0;
  int64_t local_98;
  char local_90;
  int64_t local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  void*local_68;
  uint32_t local_60;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  char local_40;
  char local_38 [8];
  
  FUN_01d70da0();
  FUN_01d701d0();
  local_88 = g_027e2260;
  if (g_027e2260 != 0) {
    FUN_00d50b00();
  }
  local_80 = '\x01';
  FUN_01d64eb0();
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  if (((char)local_60 != '\0') && (local_68 != (void*)0x0)) {
    FUN_00d50b20();
  }
  FUN_01d70010();
  FUN_017281b0();
  FUN_00d23310();
  pcVar1 = local_38;
  if (local_b0[0] != '\0') {
    pcVar1 = local_b0;
  }
  local_38[0] = local_b0[0];
  *pcVar1 = '\0';
  if ((local_b0[0] != '\0') && (local_b8 != 0)) {
    FUN_00d50b20();
  }
  local_60 = 1;
  local_68 = &g_024c5048;
  local_50 = 0;
  if (local_b8 != 0) {
    FUN_00d50b00();
  }
  local_58 = local_b8;
  local_50 = '\x01';
  FUN_00d8cb40();
  local_48 = local_78;
  local_40 = 0;
  if (local_70 == '\0') {
    if (local_78 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_70 = '\0';
  }
  local_40 = '\x01';
  FUN_01d64eb0();
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  local_68 = &g_024c5048;
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38[0] != '\0') && (local_b8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_90 != '\0') && (local_98 != 0)) {
    FUN_00d50b20();
  }
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    FUN_00d50b20();
  }
  FUN_01d6ed40();
  FUN_01d6ed40();
  return;
}

