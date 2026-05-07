// Function: FUN_01d614c0
// Address: 01d614c0
// Size: 1373 bytes
// Class: GNMenu


/* WARNING: Removing unreachable block (ram,0x01d61a06) */
/* WARNING: Removing unreachable block (ram,0x01d61a12) */

void FUN_01d614c0(void)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  code *pcVar5;
  bool bVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  longlong *unaff_RSI;
  undefined8 *puVar10;
  longlong lVar11;
  longlong lVar12;
  longlong *local_50;
  longlong local_48;
  char local_40;
  
  pcVar5 = DAT_026846e8;
  lVar7 = *unaff_RSI;
  uVar1 = *(uint *)(*(longlong *)(lVar7 + 0x18) + 0xc);
  if ((int)uVar1 < 1) {
    return;
  }
  lVar12 = 0;
  lVar11 = 0;
  bVar3 = false;
  bVar2 = false;
  local_50 = (longlong *)0x0;
  bVar4 = false;
  puVar10 = (undefined8 *)0x0;
  do {
    lVar7 = *(longlong *)(*(longlong *)(*(longlong *)(lVar7 + 0x18) + 0x10) + lVar12 * 8);
    if (lVar7 != 0) {
      FUN_00d50b00();
    }
    if (lVar11 == lVar7) {
      if ((!bVar3) && (lVar7 = lVar11, lVar11 != 0)) goto LAB_01d61583;
      if (lVar11 == 0) {
        lVar11 = 0;
      }
      else {
        FUN_00d50b20();
      }
    }
    else {
      if ((bVar3) && (lVar11 != 0)) {
        FUN_00d50b20();
      }
LAB_01d61583:
      lVar11 = lVar7;
      bVar3 = true;
    }
    puVar8 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar8 = &DAT_026846d0;
    puVar8[2] = &DAT_02684a60;
    *(undefined1 *)(puVar8 + 3) = 0;
    *(undefined8 *)((longlong)puVar8 + 0x1c) = 0;
    *(undefined8 *)((longlong)puVar8 + 0x24) = 0;
    *(undefined8 *)((longlong)puVar8 + 0x2c) = 0;
    *(undefined8 *)((longlong)puVar8 + 0x34) = 0;
    *(undefined8 *)((longlong)puVar8 + 0x3a) = 0;
    *(undefined8 *)((longlong)puVar8 + 0x42) = 0;
    puVar8[10] = 0;
    puVar8[0xb] = 0;
    puVar8[0xc] = 0;
    puVar8[0xd] = 0;
    *(undefined2 *)(puVar8 + 0xe) = 0;
    (*pcVar5)();
    if (puVar8 == puVar10) {
      puVar8 = puVar10;
      if (bVar2) {
        FUN_00d50b20();
        bVar6 = bVar2;
      }
      else {
        bVar6 = true;
      }
    }
    else {
      bVar6 = true;
      if ((bVar2) && (puVar10 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
    }
    bVar2 = bVar6;
    FUN_01d65230();
    if (local_40 == '\0') {
      if (local_48 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_40 = '\0';
    }
    FUN_01d64eb0();
    if (local_48 != 0) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    FUN_01d65460();
    if (local_40 == '\0') {
      if (local_48 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_40 = '\0';
    }
    FUN_01d65120();
    if (local_48 != 0) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    FUN_01d654b0();
    if (local_40 == '\0') {
      if (local_48 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_40 = '\0';
    }
    FUN_01d65190();
    if (local_48 != 0) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    FUN_01d65ec0();
    if (local_40 == '\0') {
      if (local_48 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_40 = '\0';
    }
    FUN_01d651e0();
    if (local_48 != 0) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    FUN_01d5d8d0();
    FUN_01d65320();
    FUN_01d65260();
    FUN_01d65e30();
    FUN_01d66ab0();
    FUN_01d654a0();
    FUN_01d65490();
    FUN_01d64cb0();
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if (local_48 != 0) {
      plVar9 = (longlong *)FUN_00e8fc40();
      FUN_001d7da0();
      (**(code **)(*plVar9 + 0x18))();
      if (plVar9 == local_50) {
        plVar9 = local_50;
        if (bVar4) {
          FUN_00d50b20();
          bVar6 = bVar4;
        }
        else {
          bVar6 = true;
        }
      }
      else {
        bVar6 = true;
        if ((bVar4) && (local_50 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      local_50 = plVar9;
      FUN_01d64cb0();
      if (local_40 == '\0') {
        if (local_48 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_40 = '\0';
      }
      FUN_01d614c0();
      if (local_48 != 0) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      FUN_01d654e0();
      bVar4 = bVar6;
    }
    if ((ulonglong)uVar1 - 1 == lVar12) {
      if ((bVar4) && (local_50 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (puVar8 != (undefined8 *)0x0) {
        FUN_00d50b20();
      }
      if (!bVar3) {
        return;
      }
      if (lVar11 == 0) {
        return;
      }
      FUN_00d50b20();
      return;
    }
    lVar7 = *unaff_RSI;
    lVar12 = lVar12 + 1;
    puVar10 = puVar8;
  } while( true );
}


