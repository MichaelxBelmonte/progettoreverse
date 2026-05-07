// Function: FUN_00c62b20
// Address: 00c62b20
// Size: 750 bytes
// Class: GNPopUpButton

float FUN_00c62b20(void)

{
  int64_t lVar1;
  int64_t lVar2;
  char cVar3;
  int iVar4;
  int64_t *arg1;
  float fVar5;
  uint32_t uVar6;
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
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  float local_2c;
  
  local_2c = 0.0;
  if ((*arg1 != 0) && (iVar4 = FUN_00d8c7a0(), local_a0 = g_02704060, iVar4 != 0)) {
    if (g_02704060 != 0) {
      FUN_00d50b00();
    }
    local_98 = '\x01';
    FUN_00d91000(1,&local_a0);
    lVar2 = local_40;
    if (local_38 == '\0') {
      if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
    }
    if ((local_98 != '\0') && (local_a0 != 0)) {
      FUN_00d50b20();
    }
    if (*(int *)(lVar2 + 0xc) < 1) {
      local_2c = 0.0;
    }
    else {
      lVar1 = **(int64_t **)(lVar2 + 0x10);
      local_58 = 0;
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      local_58 = '\x01';
      local_60 = lVar1;
      fVar5 = (float)FUN_00d4afa0();
      local_2c = 0.0;
      if ((0.0 <= fVar5) && (local_2c = fVar5, g_023908e0 < fVar5)) {
        local_2c = g_023908e0;
      }
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      uVar6 = FUN_00d95590();
      local_50 = local_80;
      local_48 = 0;
      if (local_78 == '\0') {
        if (local_80 != 0) {
          uVar6 = FUN_00d50b00();
        }
      }
      else {
        local_78 = '\0';
      }
      local_48 = '\x01';
      FUN_00d97f20(uVar6,&local_50);
      local_90 = g_02704060;
      if (g_02704060 != 0) {
        FUN_00d50b00();
      }
      local_88 = '\x01';
      cVar3 = FUN_00d90870();
      if ((local_88 != '\0') && (local_90 != 0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      if ((local_78 != '\0') && (local_80 != 0)) {
        FUN_00d50b20();
      }
      if (cVar3 != '\0') {
        local_2c = g_02390d38 - local_2c;
      }
      if (1 < *(int *)(lVar2 + 0xc)) {
        lVar2 = *(int64_t *)(*(int64_t *)(lVar2 + 0x10) + 8);
        local_68 = 0;
        if (lVar2 != 0) {
          FUN_00d50b00();
        }
        local_68 = '\x01';
        local_70 = lVar2;
        fVar5 = (float)FUN_00d4afa0();
        local_2c = 0.0;
        if ((0.0 <= fVar5) && (local_2c = fVar5, g_023908e0 < fVar5)) {
          local_2c = g_023908e0;
        }
        local_2c = g_02390d38 - local_2c;
        if ((local_68 != '\0') && (local_70 != 0)) {
          FUN_00d50b20();
        }
      }
    }
    FUN_00d50b20();
    local_2c = local_2c / g_02390d38;
  }
  return local_2c;
}

