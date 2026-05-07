// Function: FUN_01f0aca0
// Address: 01f0aca0
// Size: 848 bytes
// Class: GNList
// === GNList properties ===
//   GNInt           _archiveVersion
//   bool            _awakesObjectsAfterDecoding
//   bool            _isCancelled
//   GNInt           _currentObjectGraphIdx
//   GNInt           _predictedDecodedValuesIndex


uint64_t FUN_01f0aca0(uint64_t param_1,char param_2)

{
  int64_t lVar1;
  int64_t *plVar2;
  char cVar3;
  uint uVar4;
  int64_t *arg1;
  int64_t *this_ptr;
  undefined7 uVar6;
  uint64_t uVar5;
  int64_t local_a0;
  char local_98;
  int64_t local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t *local_50;
  char local_48;
  int64_t *local_40;
  char local_38;
  
  FUN_01cae990();
  plVar2 = local_40;
  lVar1 = g_027ff010;
  if (g_027ff010 != 0) {
    FUN_00d50b00();
  }
  cVar3 = (**(code **)(*plVar2 + 0x50))();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  lVar1 = g_027e7c20;
  if (cVar3 == '\0') {
    local_60 = *arg1;
    local_58 = '\0';
    uVar4 = FUN_01d827c0(param_1,param_2);
    uVar5 = (uint64_t)uVar4;
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    if (g_027e7c20 != 0) {
      FUN_00d50b00();
    }
    local_a0 = lVar1;
    local_98 = '\x01';
    FUN_01ccaae0(param_1,&local_a0);
    plVar2 = local_40;
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_98 != '\0') && (local_a0 != 0)) {
      FUN_00d50b20();
    }
    lVar1 = g_027edfc8;
    uVar6 = (undefined7)((uint64_t)arg1 >> 8);
    if (plVar2 == (int64_t *)0x0) {
      if (g_027edfc8 != 0) {
        FUN_00d50b00();
      }
      local_80 = lVar1;
      local_78 = '\x01';
      FUN_01ccaae0(param_1,&local_80);
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_78 != '\0') && (local_80 != 0)) {
        FUN_00d50b20();
      }
      lVar1 = g_027edfc8;
      uVar5 = CONCAT71(uVar6,local_40 != (int64_t *)0x0);
      if ((local_40 != (int64_t *)0x0) && (param_2 != '\0')) {
        if (g_027edfc8 != 0) {
          FUN_00d50b00();
        }
        local_70 = lVar1;
        local_68 = '\x01';
        (**(code **)(*this_ptr + 0x500))();
        uVar5 = CONCAT71(uVar6,1);
        if ((local_68 != '\0') && (local_70 != 0)) {
          FUN_00d50b20();
        }
      }
    }
    else {
      uVar5 = CONCAT71(uVar6,1);
      if (param_2 != '\0') {
        FUN_01ccad60();
        plVar2 = local_40;
        if ((((local_38 == '\0') && (local_40 != (int64_t *)0x0)) &&
            (FUN_00d50b00(), local_38 != '\0')) && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        FUN_01d65e30();
        FUN_01d66ab0();
        FUN_01d65e30();
        FUN_00d46300();
        local_50 = local_40;
        local_48 = 0;
        local_90 = g_027e7c20;
        if (local_38 == '\0') {
          if (local_40 != (int64_t *)0x0) {
            FUN_00d50b00();
            local_90 = g_027e7c20;
          }
        }
        else {
          local_38 = '\0';
        }
        local_48 = '\x01';
        g_027e7c20 = local_90;
        if (local_90 != 0) {
          local_48 = '\x01';
          FUN_00d50b00();
        }
        local_88 = '\x01';
        (**(code **)(*this_ptr + 0x4d0))(param_1,&local_90);
        if ((local_88 != '\0') && (local_90 != 0)) {
          FUN_00d50b20();
        }
        if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar2 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
      }
    }
  }
  return uVar5 & 0xffffffff;
}

