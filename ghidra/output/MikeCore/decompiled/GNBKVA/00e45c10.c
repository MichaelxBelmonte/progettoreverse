// Function: FUN_00e45c10
// Address: 00e45c10
// Size: 510 bytes
// Class: GNBKVA


void FUN_00e45c10(void)

{
  longlong lVar1;
  char cVar2;
  char *pcVar3;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  char local_40 [8];
  char local_38 [8];
  
  FUN_00e38430();
  FUN_00e39e40();
  FUN_00e38430();
  FUN_00e39e40();
  FUN_00e39e40();
  FUN_00e39e40();
  FUN_00e38f50();
  FUN_00e39e40();
  *(undefined1 *)(unaff_RDI + 0x2c) = 1;
  lVar1 = *unaff_RSI;
  local_40[0] = '\0';
  FUN_00e38fb0();
  if ((local_40[0] != '\0') && (lVar1 != 0)) {
    FUN_00d50b20();
  }
  while( true ) {
    FUN_00e46bf0();
    local_38[0] = local_40[0];
    pcVar3 = local_40;
    if (local_40[0] == '\0') {
      pcVar3 = local_38;
    }
    *pcVar3 = '\0';
    if ((local_40[0] != '\0') && (lVar1 != 0)) {
      FUN_00d50b20();
    }
    if (lVar1 == 0) break;
    local_40[0] = '\0';
    cVar2 = FUN_00e3a2e0();
    if ((local_40[0] != '\0') && (lVar1 != 0)) {
      FUN_00d50b20();
    }
    if (cVar2 == '\0') {
      local_40[0] = '\0';
      FUN_00e3a1c0();
      if ((local_40[0] != '\0') && (lVar1 != 0)) {
        FUN_00d50b20();
      }
      local_40[0] = '\0';
      FUN_00e3a1c0();
      if ((local_40[0] != '\0') && (lVar1 != 0)) {
        FUN_00d50b20();
      }
      FUN_00e46c90();
      local_40[0] = '\0';
      FUN_00e3a1c0();
      if ((local_40[0] != '\0') && (lVar1 != 0)) {
        FUN_00d50b20();
      }
    }
    if (local_38[0] != '\0') {
      FUN_00d50b20();
    }
  }
  FUN_00e474c0();
  return;
}


