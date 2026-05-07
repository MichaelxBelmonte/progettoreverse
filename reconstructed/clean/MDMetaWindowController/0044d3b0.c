// Function: FUN_0044d3b0
// Address: 0044d3b0
// Size: 523 bytes
// Class: MDMetaWindowController

void FUN_0044d3b0(void)

{
  int64_t lVar1;
  int iVar2;
  int unaff_ESI;
  int unaff_EDI;
  int64_t local_70;
  char local_68;
  int local_5c;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  char local_40;
  int64_t local_38;
  char local_30;
  
  iVar2 = FUN_0044c3a0();
  if ((iVar2 != unaff_EDI) || (local_5c != unaff_ESI)) {
    FUN_00d6f370();
    lVar1 = g_02705eb8;
    if (g_02705eb8 != 0) {
      FUN_00d50b00();
    }
    FUN_00d707b0();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d6f370();
    lVar1 = g_02705ec0;
    if (g_02705ec0 != 0) {
      FUN_00d50b00();
    }
    FUN_00d707b0();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d403d0();
    lVar1 = g_02705ed0;
    if (g_02705ed0 != 0) {
      FUN_00d50b00();
    }
    FUN_01f27fe0();
    local_48 = local_58;
    local_40 = 0;
    if (local_50 == '\0') {
      if (local_58 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_50 = '\0';
    }
    local_40 = '\x01';
    local_68 = '\0';
    local_70 = 0;
    FUN_00d40470(&local_70,&local_48,1,3);
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
  }
  return;
}

