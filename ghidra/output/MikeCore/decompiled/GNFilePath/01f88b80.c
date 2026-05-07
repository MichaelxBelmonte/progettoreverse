// Function: FUN_01f88b80
// Address: 01f88b80
// Size: 505 bytes
// Class: GNFilePath


/* WARNING: Removing unreachable block (ram,0x01f88c34) */
/* WARNING: Removing unreachable block (ram,0x01f88d01) */
/* WARNING: Removing unreachable block (ram,0x01f88d0a) */
/* WARNING: Removing unreachable block (ram,0x01f88d45) */
/* WARNING: Removing unreachable block (ram,0x01f88d52) */
/* WARNING: Removing unreachable block (ram,0x01f88c40) */
/* WARNING: Removing unreachable block (ram,0x01f88c60) */
/* WARNING: Removing unreachable block (ram,0x01f88c42) */
/* WARNING: Removing unreachable block (ram,0x01f88c62) */

undefined4 FUN_01f88b80(void)

{
  longlong lVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong local_78;
  char local_70;
  longlong local_58;
  char local_50;
  int local_40;
  
  lVar1 = local_58;
  puVar4 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar4 = &DAT_025795a8;
  (*DAT_025795c0)();
  FUN_01caf660();
  FUN_01cafb00();
  if (local_50 == '\0') {
    if (local_58 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_50 = '\0';
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  if (local_58 != 0) {
    local_50 = '\0';
    local_58 = 0;
    local_40 = -1;
    while( true ) {
      lVar5 = (longlong)local_40;
      local_40 = local_40 + 1;
      if (*(int *)(lVar1 + 0xc) <= local_40) break;
      local_58 = *(longlong *)(*(longlong *)(lVar1 + 0x10) + 8 + lVar5 * 8);
      FUN_01f87f60();
    }
    FUN_01cb0380();
    FUN_00d50b20();
  }
  iVar2 = FUN_00d8c7a0();
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    FUN_00d8cbf0();
    uVar3 = FUN_00c91c80();
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
  }
  if (puVar4 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  return uVar3;
}


