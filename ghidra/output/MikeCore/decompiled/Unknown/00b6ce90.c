// Function: FUN_00b6ce90
// Address: 00b6ce90
// Size: 1826 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x00b6d447) */
/* WARNING: Removing unreachable block (ram,0x00b6d450) */
/* WARNING: Removing unreachable block (ram,0x00b6d090) */
/* WARNING: Removing unreachable block (ram,0x00b6d099) */
/* WARNING: Removing unreachable block (ram,0x00b6d1cd) */
/* WARNING: Removing unreachable block (ram,0x00b6d1d6) */
/* WARNING: Removing unreachable block (ram,0x00b6d59d) */
/* WARNING: Removing unreachable block (ram,0x00b6d5a6) */
/* WARNING: Removing unreachable block (ram,0x00b6d22f) */
/* WARNING: Removing unreachable block (ram,0x00b6d234) */
/* WARNING: Removing unreachable block (ram,0x00b6d0ec) */
/* WARNING: Removing unreachable block (ram,0x00b6d0f9) */
/* WARNING: Removing unreachable block (ram,0x00b6d4af) */
/* WARNING: Removing unreachable block (ram,0x00b6d4bc) */

void FUN_00b6ce90(void)

{
  undefined8 *puVar1;
  bool bVar2;
  code *pcVar3;
  char cVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong lVar9;
  uint uVar10;
  ulonglong uVar11;
  bool bVar12;
  longlong local_78;
  char local_70;
  undefined8 *local_58;
  undefined8 *local_50;
  char local_48;
  
  if (DAT_028a5308 == 0 && DAT_028a5318 == 0) {
    FUN_00b6d8e0();
    return;
  }
  puVar6 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar6 = &DAT_02572358;
  pcVar3 = DAT_02572370;
  (*DAT_02572370)();
  lVar7 = _MIDIGetNumberOfSources();
  if (lVar7 == 0) {
    bVar2 = false;
    puVar8 = (undefined8 *)0x0;
  }
  else {
    lVar9 = 0;
    puVar8 = (undefined8 *)0x0;
    bVar2 = false;
    do {
      uVar5 = _MIDIGetSource();
      FUN_00b6cbd0();
      if (local_50 == puVar8) {
        puVar1 = puVar8;
        if ((bVar2) || (local_50 == (undefined8 *)0x0)) {
          bVar12 = bVar2;
          if ((local_48 != '\0') && (local_50 != (undefined8 *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          bVar12 = true;
          if (local_48 == '\0') {
            FUN_00d50b00();
          }
        }
      }
      else {
        puVar1 = local_50;
        if (local_48 == '\0') {
          if (local_50 != (undefined8 *)0x0) {
            FUN_00d50b00();
          }
          bVar12 = true;
          if (bVar2) {
            if (puVar8 == (undefined8 *)0x0) goto LAB_00b6d010;
            FUN_00d50b20();
          }
        }
        else if ((bVar2) && (puVar8 != (undefined8 *)0x0)) {
          FUN_00d50b20();
          bVar12 = true;
        }
        else {
LAB_00b6d010:
          bVar12 = true;
        }
      }
      bVar2 = bVar12;
      puVar8 = puVar1;
      if (puVar8 == (undefined8 *)0x0) {
        puVar8 = (undefined8 *)FUN_00e8fc40();
        FUN_00b6fa70();
        *puVar8 = &DAT_0253d668;
        *(undefined2 *)(puVar8 + 5) = 0;
        *(undefined1 *)((longlong)puVar8 + 0x2a) = 0;
        puVar8[10] = 0;
        puVar8[6] = 0;
        puVar8[7] = 0;
        *(undefined8 *)((longlong)puVar8 + 0x3d) = 0;
        *(undefined8 *)((longlong)puVar8 + 0x45) = 0;
        FUN_00d500e0();
        *(undefined4 *)puVar8[4] = uVar5;
        *(undefined2 *)(puVar8 + 5) = 1;
        FUN_00d21140();
        bVar2 = true;
      }
      local_48 = '\0';
      FUN_00d21140();
      lVar9 = lVar9 + 1;
      local_50 = puVar8;
    } while (lVar7 != lVar9);
  }
  uVar10 = *(uint *)(DAT_028a5308 + 0xc);
  uVar11 = (ulonglong)uVar10;
  if (0 < (int)uVar10) {
    while( true ) {
      uVar10 = uVar10 - 1;
      puVar1 = *(undefined8 **)(*(longlong *)(DAT_028a5308 + 0x10) + (ulonglong)uVar10 * 8);
      if (puVar8 == puVar1) {
        puVar1 = puVar8;
        bVar12 = bVar2;
        if ((!bVar2) && (puVar8 != (undefined8 *)0x0)) {
          FUN_00d50b00();
          bVar12 = true;
        }
      }
      else {
        if (puVar1 != (undefined8 *)0x0) {
          FUN_00d50b00();
        }
        bVar12 = true;
        if ((bVar2) && (puVar8 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
      }
      bVar2 = bVar12;
      puVar8 = puVar1;
      local_48 = '\0';
      cVar4 = FUN_00d23d70();
      if (cVar4 == '\0') {
        FUN_00b501f0();
        if (puVar8 == (undefined8 *)0x0) {
          bVar12 = false;
        }
        else {
          FUN_00b501f0();
          bVar12 = *(int *)(local_78 + 0xc) != 0;
          if ((local_70 != '\0') && (local_78 != 0)) {
            FUN_00d50b20();
          }
        }
        if (bVar12) {
          FUN_00b50510();
        }
        FUN_00d23620();
      }
      local_50 = puVar8;
      if ((longlong)uVar11 < 2) break;
      uVar11 = uVar11 - 1;
    }
  }
  local_58 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *local_58 = &DAT_02572358;
  (*pcVar3)();
  if (puVar6 == local_58) {
    FUN_00d50b20();
    local_58 = puVar6;
  }
  else if (puVar6 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  lVar7 = _MIDIGetNumberOfDestinations();
  if (lVar7 != 0) {
    lVar9 = 0;
    do {
      _MIDIGetDestination();
      FUN_00b6cd30();
      if (local_50 == puVar8) {
        puVar6 = puVar8;
        if ((bVar2) || (local_50 == (undefined8 *)0x0)) {
          bVar12 = bVar2;
          if ((local_48 != '\0') && (local_50 != (undefined8 *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          bVar12 = true;
          if (local_48 == '\0') {
            FUN_00d50b00();
          }
        }
      }
      else {
        puVar6 = local_50;
        if (local_48 == '\0') {
          if (local_50 != (undefined8 *)0x0) {
            FUN_00d50b00();
          }
          bVar12 = true;
          if (bVar2) {
            if (puVar8 == (undefined8 *)0x0) goto LAB_00b6d3c0;
            FUN_00d50b20();
          }
        }
        else if ((bVar2) && (puVar8 != (undefined8 *)0x0)) {
          FUN_00d50b20();
          bVar12 = true;
        }
        else {
LAB_00b6d3c0:
          bVar12 = true;
        }
      }
      bVar2 = bVar12;
      puVar8 = puVar6;
      if (puVar8 == (undefined8 *)0x0) {
        puVar8 = (undefined8 *)FUN_00e8fc40();
        FUN_00b6fa70();
        *puVar8 = &DAT_0253d668;
        *(undefined2 *)(puVar8 + 5) = 0;
        *(undefined1 *)((longlong)puVar8 + 0x2a) = 0;
        puVar8[10] = 0;
        puVar8[6] = 0;
        puVar8[7] = 0;
        *(undefined8 *)((longlong)puVar8 + 0x3d) = 0;
        *(undefined8 *)((longlong)puVar8 + 0x45) = 0;
        FUN_00d500e0();
        uVar5 = _MIDIGetDestination();
        *(undefined4 *)puVar8[4] = uVar5;
        *(undefined2 *)(puVar8 + 5) = 0x100;
        FUN_00d21140();
        bVar2 = true;
      }
      local_48 = '\0';
      FUN_00d21140();
      lVar9 = lVar9 + 1;
      local_50 = puVar8;
    } while (lVar7 != lVar9);
  }
  uVar10 = *(uint *)(DAT_028a5318 + 0xc);
  uVar11 = (ulonglong)uVar10;
  if (0 < (int)uVar10) {
    while( true ) {
      uVar10 = uVar10 - 1;
      puVar6 = *(undefined8 **)(*(longlong *)(DAT_028a5318 + 0x10) + (ulonglong)uVar10 * 8);
      if (puVar8 == puVar6) {
        puVar6 = puVar8;
        bVar12 = bVar2;
        if ((!bVar2) && (puVar8 != (undefined8 *)0x0)) {
          FUN_00d50b00();
          bVar12 = true;
        }
      }
      else {
        if (puVar6 != (undefined8 *)0x0) {
          FUN_00d50b00();
        }
        bVar12 = true;
        if ((bVar2) && (puVar8 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
      }
      bVar2 = bVar12;
      puVar8 = puVar6;
      cVar4 = FUN_00d23d70();
      if (cVar4 == '\0') {
        FUN_00d23620();
      }
      if ((longlong)uVar11 < 2) break;
      uVar11 = uVar11 - 1;
    }
  }
  if (local_58 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  if ((bVar2) && (puVar8 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  return;
}


