// Function: FUN_012d6b30
// Address: 012d6b30
// Size: 851 bytes
// Class: GNList


/* WARNING: Removing unreachable block (ram,0x012d6d3f) */
/* WARNING: Removing unreachable block (ram,0x012d6d48) */
/* WARNING: Removing unreachable block (ram,0x012d6db0) */
/* WARNING: Removing unreachable block (ram,0x012d6db9) */
/* WARNING: Removing unreachable block (ram,0x012d6dc4) */
/* WARNING: Removing unreachable block (ram,0x012d6dcd) */

ulonglong FUN_012d6b30(void)

{
  longlong lVar1;
  undefined8 *puVar2;
  code *pcVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  char *pcVar6;
  uint uVar7;
  undefined8 *puVar8;
  byte bVar9;
  undefined8 *local_58;
  char local_50 [8];
  byte local_39;
  char local_38;
  
  pcVar3 = DAT_02572370;
  uVar5 = 0;
  puVar8 = (undefined8 *)0x0;
  do {
    uVar4 = FUN_012d9e20();
    bVar9 = (byte)uVar5;
    if (local_58 == puVar8) {
      local_39 = bVar9;
      puVar2 = puVar8;
      if ((bVar9 == 0) && (local_58 != (undefined8 *)0x0)) {
        if (local_50[0] != '\0') {
          local_39 = 1;
          uVar5 = uVar4;
          goto joined_r0x012d6bcd;
        }
        local_39 = 1;
        uVar5 = FUN_00d50b00();
      }
joined_r0x012d6e89:
      puVar8 = puVar2;
      if ((local_50[0] != '\0') && (local_58 != (undefined8 *)0x0)) {
        uVar5 = FUN_00d50b20();
      }
    }
    else {
      if (local_50[0] == '\0') {
        if (local_58 != (undefined8 *)0x0) {
          uVar4 = FUN_00d50b00();
        }
        local_39 = 1;
        uVar5 = uVar4;
        puVar2 = local_58;
        if ((bVar9 != 0) && (puVar8 != (undefined8 *)0x0)) {
          uVar5 = FUN_00d50b20();
        }
        goto joined_r0x012d6e89;
      }
      if ((bVar9 != 0) && (puVar8 != (undefined8 *)0x0)) {
        uVar4 = FUN_00d50b20();
      }
      local_39 = 1;
      uVar5 = uVar4;
      puVar8 = local_58;
    }
joined_r0x012d6bcd:
    if (puVar8 == (undefined8 *)0x0) {
      return uVar5;
    }
    FUN_00c9fe20();
    local_38 = local_50[0];
    pcVar6 = local_50;
    if (local_50[0] == '\0') {
      pcVar6 = &stack0xffffffffffffffc8;
    }
    *pcVar6 = '\0';
    if ((local_50[0] != '\0') && (local_58 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
    lVar1 = *(longlong *)local_58[2];
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    if (local_38 != '\0') {
      FUN_00d50b20();
    }
    FUN_00ca1380();
    local_38 = local_50[0];
    pcVar6 = local_50;
    if (local_50[0] == '\0') {
      pcVar6 = &stack0xffffffffffffffc8;
    }
    *pcVar6 = '\0';
    if ((local_50[0] != '\0') && (local_58 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
    puVar2 = *(undefined8 **)local_58[2];
    if (puVar2 != (undefined8 *)0x0) {
      FUN_00d50b00();
    }
    if (local_38 != '\0') {
      FUN_00d50b20();
    }
    FUN_012d9d70();
    if (local_50[0] == '\0') {
      if (((local_58 != (undefined8 *)0x0) && (FUN_00d50b00(), local_50[0] != '\0')) &&
         (local_58 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_50[0] = '\0';
    }
    if (local_58 == (undefined8 *)0x0) {
      local_58 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *local_58 = &DAT_02572358;
      (*pcVar3)();
      FUN_012d9ec0();
    }
    local_50[0] = '\0';
    FUN_00d21140();
    if ((local_50[0] != '\0') && (puVar2 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
    if (local_58 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
    if (puVar2 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
    uVar7 = (uint)local_39;
    uVar5 = (ulonglong)uVar7;
    local_58 = puVar2;
    if (lVar1 != 0) {
      FUN_00d50b20();
      uVar5 = (ulonglong)uVar7;
    }
  } while( true );
}


