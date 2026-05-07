// Function: FUN_006e5a00
// Address: 006e5a00
// Size: 528 bytes
// Class: MDTempIOCtrl


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_006e5a00(void)

{
  longlong lVar1;
  longlong lVar2;
  byte bVar3;
  ulonglong uVar4;
  double dVar5;
  undefined8 uVar6;
  longlong local_68;
  char local_60;
  longlong local_58;
  char local_50;
  longlong local_48;
  char local_40;
  longlong local_38;
  char local_30;
  
  lVar1 = DAT_026de5d8;
  if (DAT_026de5d8 != 0) {
    FUN_00d50b00();
  }
  dVar5 = (double)FUN_00e7d6f0();
  uVar4 = (ulonglong)(dVar5 * DAT_023907c0);
  dVar5 = dVar5 * DAT_023907c0 - _DAT_023907c8;
  uVar6 = FUN_0071a120();
  if ((local_30 == '\0') && (local_38 != 0)) {
    uVar6 = FUN_00d50b00();
    if ((local_30 != '\0') && (local_38 != 0)) {
      uVar6 = FUN_00d50b20();
    }
  }
  bVar3 = (byte)(((longlong)dVar5 & (longlong)uVar4 >> 0x3f | uVar4) / 3);
  local_48 = lVar1;
  local_40 = '\0';
  FUN_000175c0(uVar6,&local_48);
  lVar2 = local_38;
  if (local_30 == '\0') {
    if (local_38 != 0) {
      FUN_00d50b00();
      if ((local_30 != '\0') && (local_38 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    local_30 = '\0';
  }
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    local_30 = '\0';
    local_38 = lVar2;
    bVar3 = FUN_00c70bc0();
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  FUN_00d50b20();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if ((lVar2 != 0 & bVar3) == 0) {
    uVar4 = 0;
  }
  else {
    FUN_00d6f370();
    lVar1 = DAT_02727640;
    if (DAT_02727640 != 0) {
      FUN_00d50b00();
    }
    local_68 = lVar1;
    local_60 = '\x01';
    local_58 = 0;
    local_50 = '\0';
    FUN_00d704d0(&local_58,&local_68);
    uVar4 = CONCAT71((int7)((ulonglong)lVar1 >> 8),local_38 == 0);
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
  }
  return uVar4 & 0xffffffff;
}


