// Function: FUN_00cbd950
// Address: 00cbd950
// Size: 765 bytes
// Class: GNEditingContextReadCopySyncObserver
// === GNEditingContextReadCopySyncObserver properties ===
//                   _readCopySyncObserversLock
//                   _objectsWithReadCopies
//                   _message
//                   _developerMessage


bool FUN_00cbd950(void)

{
  int64_t lVar1;
  int64_t lVar2;
  void*puVar3;
  int64_t *arg1;
  uint64_t uVar4;
  uint64_t extraout_XMM0_Qa;
  void*local_c8;
  uint8_t local_c0;
  uint8_t local_b8 [8];
  uint8_t local_b0;
  int64_t local_a8;
  char local_a0;
  int64_t local_98;
  char local_90;
  int64_t local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  int64_t local_68;
  int local_60;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  char local_40;
  void*local_38;
  
  puVar3 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar3 = &g_0256bf50;
  puVar3[2] = 0;
  uVar4 = FUN_00d500e0();
  lVar1 = *arg1;
  lVar2 = puVar3[2];
  if (lVar2 != lVar1) {
    if (lVar1 != 0) {
      uVar4 = FUN_00d50b00();
    }
    puVar3[2] = lVar1;
    if (lVar2 != 0) {
      uVar4 = FUN_00d50b20();
    }
  }
  local_c0 = 0;
  local_c8 = puVar3;
  FUN_00cbd790(uVar4,&local_c8);
  local_58 = local_88;
  local_50 = 0;
  if (local_80 == '\0') {
    if (local_88 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_80 = '\0';
  }
  local_50 = '\x01';
  uVar4 = FUN_00e191b0(g_023b2c70,&local_58);
  lVar1 = local_48;
  if (local_40 == '\0') {
    if (local_48 != 0) {
      uVar4 = FUN_00d50b00();
    }
  }
  else {
    local_40 = '\0';
  }
  local_b0 = 1;
  FUN_00cbd5a0(uVar4,local_b8);
  lVar2 = local_78;
  if ((local_70 == '\0') && (local_78 != 0)) {
    FUN_00d50b00();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    if (*(int64_t *)(lVar2 + 0x10) != 0) {
      local_70 = '\0';
      local_78 = 0;
      local_68 = *(int64_t *)(*(int64_t *)(lVar2 + 0x10) + 0x10);
      local_60 = 0;
      if (0 < *(int *)(local_68 + 0xc)) {
        local_38 = puVar3;
        do {
          local_78 = *(int64_t *)(*(int64_t *)(local_68 + 0x10) + (int64_t)local_60 * 8);
          FUN_00cbde50((int64_t)local_60,&local_78);
          lVar1 = local_48;
          if ((((local_40 == '\0') && (local_48 != 0)) && (FUN_00d50b00(), local_40 != '\0')) &&
             (local_48 != 0)) {
            FUN_00d50b20();
          }
          local_98 = FUN_00d45790();
          local_a8 = lVar1;
          local_a0 = '\0';
          local_90 = '\0';
          FUN_019b43b0(extraout_XMM0_Qa,&local_98);
          if ((local_90 != '\0') && (local_98 != 0)) {
            FUN_00d50b20();
          }
          if ((local_a0 != '\0') && (local_a8 != 0)) {
            FUN_00d50b20();
          }
          if (lVar1 != 0) {
            FUN_00d50b20();
          }
          puVar3 = local_38;
          local_60 = local_60 + 1;
        } while (local_60 < *(int *)(local_68 + 0xc));
        if ((local_70 != '\0') && (local_78 != 0)) {
          FUN_00d50b20();
        }
      }
    }
    FUN_00d50b20();
    if (puVar3 == (void*)0x0) goto LAB_00cbdc35;
  }
  FUN_00d50b20();
LAB_00cbdc35:
  return lVar2 != 0;
}

