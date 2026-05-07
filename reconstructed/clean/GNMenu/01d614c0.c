// Function: FUN_01d614c0
// Address: 01d614c0
// Size: 1373 bytes
// Class: GNMenu
// === GNMenu properties ===
//                   _mainWindow
//                   _keyWindow
//                   _infoController


void FUN_01d614c0(void)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  code *pcVar5;
  bool bVar6;
  int64_t lVar7;
  void*puVar8;
  int64_t *plVar9;
  int64_t *arg1;
  void*puVar10;
  int64_t lVar11;
  int64_t lVar12;
  int64_t *local_50;
  int64_t local_48;
  char local_40;
  
  pcVar5 = g_026846e8;
  lVar7 = *arg1;
  uVar1 = *(uint *)(*(int64_t *)(lVar7 + 0x18) + 0xc);
  if ((int)uVar1 < 1) {
    return;
  }
  lVar12 = 0;
  lVar11 = 0;
  bVar3 = false;
  bVar2 = false;
  local_50 = (int64_t *)0x0;
  bVar4 = false;
  puVar10 = (void*)0x0;
  do {
    lVar7 = *(int64_t *)(*(int64_t *)(*(int64_t *)(lVar7 + 0x18) + 0x10) + lVar12 * 8);
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
    puVar8 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar8 = &g_026846d0;
    puVar8[2] = &g_02684a60;
    *(void*)(puVar8 + 3) = 0;
    *(void*)((int64_t)puVar8 + 0x1c) = 0;
    *(void*)((int64_t)puVar8 + 0x24) = 0;
    *(void*)((int64_t)puVar8 + 0x2c) = 0;
    *(void*)((int64_t)puVar8 + 0x34) = 0;
    *(void*)((int64_t)puVar8 + 0x3a) = 0;
    *(void*)((int64_t)puVar8 + 0x42) = 0;
    puVar8[10] = 0;
    puVar8[0xb] = 0;
    puVar8[0xc] = 0;
    puVar8[0xd] = 0;
    *(void*)(puVar8 + 0xe) = 0;
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
      if ((bVar2) && (puVar10 != (void*)0x0)) {
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
      plVar9 = (int64_t *)FUN_00e8fc40();
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
        if ((bVar4) && (local_50 != (int64_t *)0x0)) {
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
    if ((uint64_t)uVar1 - 1 == lVar12) {
      if ((bVar4) && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (puVar8 != (void*)0x0) {
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
    lVar7 = *arg1;
    lVar12 = lVar12 + 1;
    puVar10 = puVar8;
  } while( true );
}

