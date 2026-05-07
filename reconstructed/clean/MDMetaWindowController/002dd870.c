// Function: FUN_002dd870
// Address: 002dd870
// Size: 575 bytes
// Class: MDMetaWindowController

float FUN_002dd870(void)

{
  int iVar1;
  int64_t lVar2;
  int iVar3;
  int iVar4;
  int64_t local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  char local_40;
  float local_34;
  
  FUN_00d8ca50();
  local_88 = g_027d3890;
  if (g_027d3890 != 0) {
    FUN_00d50b00();
  }
  local_80 = '\x01';
  FUN_00d91000(1,&local_88);
  lVar2 = local_78;
  if (local_70 == '\0') {
    if (local_78 != 0) {
      FUN_00d50b00();
      if ((local_70 != '\0') && (local_78 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    local_70 = '\0';
  }
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  iVar1 = *(int *)(lVar2 + 0xc);
  if (iVar1 == 3) {
    iVar4 = FUN_00d8d560();
    iVar3 = FUN_00d8d560();
    iVar1 = -iVar4;
    if (0 < iVar4) {
      iVar1 = iVar4;
    }
    iVar4 = -iVar3;
    if (0 < iVar3) {
      iVar4 = iVar3;
    }
    lVar2 = *(int64_t *)(*(int64_t *)(lVar2 + 0x10) + 0x10);
    local_40 = 0;
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    local_40 = '\x01';
    local_48 = lVar2;
    local_34 = (float)FUN_00d4afa0();
    local_34 = (float)(iVar4 * 0x3c) + (float)iVar1 * g_023941f0 + local_34;
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
  }
  else if (iVar1 == 2) {
    iVar4 = FUN_00d8d560();
    iVar1 = -iVar4;
    if (0 < iVar4) {
      iVar1 = iVar4;
    }
    lVar2 = *(int64_t *)(*(int64_t *)(lVar2 + 0x10) + 8);
    local_50 = 0;
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    local_50 = '\x01';
    local_58 = lVar2;
    local_34 = (float)FUN_00d4afa0();
    local_34 = (float)iVar1 * g_023941f0 + local_34;
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_34 = 0.0;
    if (iVar1 == 1) {
      lVar2 = **(int64_t **)(lVar2 + 0x10);
      local_60 = 0;
      if (lVar2 != 0) {
        FUN_00d50b00();
      }
      local_60 = '\x01';
      local_68 = lVar2;
      local_34 = (float)FUN_00d4afa0();
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  FUN_00d50b20();
  return local_34;
}

