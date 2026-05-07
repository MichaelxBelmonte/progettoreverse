// Function: FUN_00e3f120
// Address: 00e3f120
// Size: 706 bytes
// Class: GNString


/* WARNING: Removing unreachable block (ram,0x00e3f1cf) */
/* WARNING: Removing unreachable block (ram,0x00e3f1d8) */

ulonglong FUN_00e3f120(void)

{
  longlong lVar1;
  int iVar2;
  char *pcVar3;
  longlong lVar4;
  longlong *unaff_RSI;
  ulonglong uVar5;
  longlong local_48;
  char local_40 [8];
  char local_38 [8];
  
  uVar5 = 0;
  while( true ) {
    FUN_00ca1380();
    local_38[0] = local_40[0];
    pcVar3 = local_40;
    if (local_40[0] == '\0') {
      pcVar3 = local_38;
    }
    *pcVar3 = '\0';
    if ((local_40[0] != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if ((longlong *)*unaff_RSI != (longlong *)0x0) {
      (**(code **)(*(longlong *)*unaff_RSI + 0x10))();
    }
    iVar2 = FUN_00d23d20();
    if ((local_38[0] != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if (iVar2 == -1) break;
    FUN_00c9fe20();
    local_38[0] = local_40[0];
    pcVar3 = local_40;
    if (local_40[0] == '\0') {
      pcVar3 = local_38;
    }
    *pcVar3 = '\0';
    if ((local_40[0] != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    lVar4 = (longlong)iVar2;
    lVar1 = *(longlong *)(*(longlong *)(local_48 + 0x10) + lVar4 * 8);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    local_40[0] = '\0';
    FUN_00ca13a0();
    if ((local_40[0] != '\0') && (lVar1 != 0)) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if (local_38[0] != '\0') {
      FUN_00d50b20();
    }
    FUN_00c9fe20();
    local_38[0] = local_40[0];
    pcVar3 = local_40;
    if (local_40[0] == '\0') {
      pcVar3 = local_38;
    }
    *pcVar3 = '\0';
    if ((local_40[0] != '\0') && (lVar1 != 0)) {
      FUN_00d50b20();
    }
    lVar1 = *(longlong *)(*(longlong *)(lVar1 + 0x10) + lVar4 * 8);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    local_40[0] = '\0';
    FUN_00ca13a0();
    if ((local_40[0] != '\0') && (lVar1 != 0)) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if (local_38[0] != '\0') {
      FUN_00d50b20();
    }
    FUN_00c9fe20();
    local_38[0] = local_40[0];
    pcVar3 = local_40;
    if (local_40[0] == '\0') {
      pcVar3 = local_38;
    }
    *pcVar3 = '\0';
    if ((local_40[0] != '\0') && (lVar1 != 0)) {
      FUN_00d50b20();
    }
    local_48 = *(longlong *)(*(longlong *)(lVar1 + 0x10) + lVar4 * 8);
    if (local_48 != 0) {
      FUN_00d50b00();
    }
    local_40[0] = '\0';
    FUN_00ca13a0();
    if ((local_40[0] != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if (local_48 != 0) {
      FUN_00d50b20();
    }
    if (local_38[0] != '\0') {
      FUN_00d50b20();
    }
    uVar5 = CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
  }
  return uVar5 & 0xffffff01;
}


