// Function: FUN_01d62660
// Address: 01d62660
// Size: 799 bytes
// Class: GNMenu
// === GNMenu properties ===
//                   _mainWindow
//                   _keyWindow
//                   _infoController


void FUN_01d62660(void)

{
  int64_t lVar1;
  char cVar2;
  int64_t lVar3;
  int64_t this_ptr;
  uint uVar4;
  uint64_t uVar5;
  int64_t local_48;
  char local_40;
  
  lVar3 = *(int64_t *)(this_ptr + 0x18);
  uVar4 = *(uint *)(lVar3 + 0xc);
  uVar5 = (uint64_t)uVar4;
  if (0 < (int)uVar4) {
    while( true ) {
      uVar4 = uVar4 - 1;
      lVar3 = *(int64_t *)(*(int64_t *)(lVar3 + 0x10) + (uint64_t)uVar4 * 8);
      if (lVar3 != 0) {
        FUN_00d50b00();
      }
      cVar2 = FUN_01d65330();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      if (cVar2 == '\0') break;
      lVar3 = *(int64_t *)
               (*(int64_t *)(*(int64_t *)(this_ptr + 0x18) + 0x10) + (uint64_t)uVar4 * 8);
      if (lVar3 != 0) {
        FUN_00d50b00();
      }
      FUN_01d5dde0();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      if ((int64_t)uVar5 < 2) break;
      uVar5 = uVar5 - 1;
      lVar3 = *(int64_t *)(this_ptr + 0x18);
    }
    lVar3 = *(int64_t *)(this_ptr + 0x18);
    uVar4 = *(uint *)(lVar3 + 0xc);
    if (1 < (int)uVar4) {
      uVar5 = (uint64_t)(uVar4 - 2);
      lVar3 = *(int64_t *)(*(int64_t *)(lVar3 + 0x10) + uVar5 * 8);
      while( true ) {
        if (lVar3 != 0) {
          FUN_00d50b00();
        }
        cVar2 = FUN_01d65330();
        if (cVar2 == '\0') {
          cVar2 = '\0';
        }
        else {
          lVar1 = *(int64_t *)
                   (*(int64_t *)(*(int64_t *)(this_ptr + 0x18) + 0x10) + 8 + uVar5 * 8);
          if (lVar1 != 0) {
            FUN_00d50b00();
          }
          cVar2 = FUN_01d65330();
          if (lVar1 != 0) {
            FUN_00d50b20();
          }
        }
        if (lVar3 != 0) {
          FUN_00d50b20();
        }
        if (cVar2 != '\0') {
          lVar3 = *(int64_t *)(*(int64_t *)(*(int64_t *)(this_ptr + 0x18) + 0x10) + uVar5 * 8);
          if (lVar3 != 0) {
            FUN_00d50b00();
          }
          FUN_01d5dde0();
          if (lVar3 != 0) {
            FUN_00d50b20();
          }
        }
        if ((int64_t)uVar5 < 1) break;
        uVar5 = uVar5 - 1;
        lVar3 = *(int64_t *)(*(int64_t *)(*(int64_t *)(this_ptr + 0x18) + 0x10) + uVar5 * 8);
      }
      lVar3 = *(int64_t *)(this_ptr + 0x18);
      uVar4 = *(uint *)(lVar3 + 0xc);
    }
  }
  if (uVar4 != 0) {
    lVar3 = **(int64_t **)(lVar3 + 0x10);
    if (lVar3 != 0) {
      FUN_00d50b00();
    }
    cVar2 = FUN_01d65330();
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    if (cVar2 != '\0') {
      lVar3 = **(int64_t **)(*(int64_t *)(this_ptr + 0x18) + 0x10);
      if (lVar3 != 0) {
        FUN_00d50b00();
      }
      FUN_01d5dde0();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
    }
  }
  lVar3 = *(int64_t *)(this_ptr + 0x18);
  uVar4 = *(uint *)(lVar3 + 0xc);
  uVar5 = (uint64_t)uVar4;
  if (0 < (int)uVar4) {
    while( true ) {
      uVar4 = uVar4 - 1;
      lVar3 = *(int64_t *)(*(int64_t *)(lVar3 + 0x10) + (uint64_t)uVar4 * 8);
      if (lVar3 != 0) {
        FUN_00d50b00();
      }
      cVar2 = FUN_01d64c70();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      if (cVar2 != '\0') {
        lVar3 = *(int64_t *)
                 (*(int64_t *)(*(int64_t *)(this_ptr + 0x18) + 0x10) + (uint64_t)uVar4 * 8);
        if (lVar3 != 0) {
          FUN_00d50b00();
        }
        FUN_01d64cb0();
        FUN_01d62660();
        if ((local_40 != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
        if (lVar3 != 0) {
          FUN_00d50b20();
        }
      }
      if ((int64_t)uVar5 < 2) break;
      uVar5 = uVar5 - 1;
      lVar3 = *(int64_t *)(this_ptr + 0x18);
    }
  }
  return;
}

