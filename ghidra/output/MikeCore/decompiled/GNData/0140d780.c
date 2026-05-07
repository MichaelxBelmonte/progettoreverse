// Function: FUN_0140d780
// Address: 0140d780
// Size: 696 bytes
// Class: GNData


void FUN_0140d780(void)

{
  longlong lVar1;
  char cVar2;
  char *pcVar3;
  longlong unaff_RDI;
  longlong local_48;
  char local_40 [8];
  longlong local_38;
  char local_30;
  char local_28 [8];
  
  lVar1 = DAT_027df510;
  if (*(longlong *)(unaff_RDI + 0x20) == 0) {
    return;
  }
  if (DAT_027df510 != 0) {
    FUN_00d50b00();
  }
  cVar2 = FUN_0140cda0();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = DAT_027cc8f0;
  if (cVar2 == '\0') {
    if (DAT_027cc8f0 != 0) {
      FUN_00d50b00();
    }
    cVar2 = FUN_0140cda0();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    lVar1 = DAT_027cc900;
    if (cVar2 == '\0') {
      if (DAT_027cc900 != 0) {
        FUN_00d50b00();
      }
      cVar2 = FUN_0140d110();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = DAT_027df560;
      if (cVar2 != '\0') {
        FUN_01715d40();
        FUN_01715d40();
        *(undefined1 *)(unaff_RDI + 0x2a) = 1;
        return;
      }
      if (DAT_027df560 != 0) {
        FUN_00d50b00();
      }
      cVar2 = FUN_0140cda0();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      if (cVar2 != '\0') {
        FUN_01715d40();
        FUN_01715d40();
        *(undefined1 *)(unaff_RDI + 0x28) = 1;
        return;
      }
      FUN_01729150();
      FUN_00d23310();
      pcVar3 = local_28;
      if (local_40[0] != '\0') {
        pcVar3 = local_40;
      }
      local_28[0] = local_40[0];
      *pcVar3 = '\0';
      if ((local_40[0] != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if ((local_28[0] == '\0') && (local_48 != 0)) {
        FUN_00d50b00();
      }
      cVar2 = FUN_0140cda0();
      if (local_48 != 0) {
        FUN_00d50b20();
      }
      if ((local_30 != '\0') && (local_38 != 0)) {
        FUN_00d50b20();
      }
      if (cVar2 == '\0') {
        if (*(longlong *)(unaff_RDI + 0x50) == 0) {
          FUN_01715d40();
        }
      }
      else {
        *(undefined1 *)(unaff_RDI + 0x29) = 1;
        FUN_01715d40();
        FUN_01715d40();
      }
      FUN_01715d40();
      return;
    }
  }
  FUN_01715d40();
  FUN_01715d40();
  return;
}


