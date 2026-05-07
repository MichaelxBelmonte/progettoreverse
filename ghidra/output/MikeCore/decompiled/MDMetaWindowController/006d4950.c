// Function: FUN_006d4950
// Address: 006d4950
// Size: 520 bytes
// Class: MDMetaWindowController


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006d4950(void)

{
  longlong lVar1;
  longlong lVar2;
  byte bVar3;
  ulonglong uVar4;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  double dVar5;
  undefined8 uVar6;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  FUN_006cc1e0();
  local_50 = *unaff_RSI;
  local_48 = '\0';
  FUN_01f06a80();
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  FUN_006d46f0();
  lVar1 = local_40;
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (lVar1 == 0) {
    *(undefined1 *)(unaff_RDI + 0xd9) = 1;
    lVar1 = DAT_026e1810;
  }
  else {
    FUN_006ce3a0();
    lVar1 = DAT_026e1810;
  }
  DAT_026e1810 = lVar1;
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  dVar5 = (double)FUN_00e7d6f0();
  uVar4 = (ulonglong)(dVar5 * DAT_023907c0);
  dVar5 = dVar5 * DAT_023907c0 - _DAT_023907c8;
  uVar6 = FUN_0071a120();
  if ((((local_38 == '\0') && (local_40 != 0)) && (uVar6 = FUN_00d50b00(), local_38 != '\0')) &&
     (local_40 != 0)) {
    uVar6 = FUN_00d50b20();
  }
  bVar3 = (byte)(((longlong)dVar5 & (longlong)uVar4 >> 0x3f | uVar4) / 3);
  local_58 = '\0';
  local_60 = lVar1;
  FUN_000175c0(uVar6,&local_60);
  lVar2 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
      FUN_00d50b20();
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
  if ((lVar2 != 0 & bVar3) != 0) {
    FUN_006d4ca0();
  }
  return;
}


