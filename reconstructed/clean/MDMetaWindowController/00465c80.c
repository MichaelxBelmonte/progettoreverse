// Function: FUN_00465c80
// Address: 00465c80
// Size: 4224 bytes
// Class: MDMetaWindowController
// String references:
//   "MDMetaWindowController"

void FUN_00465c80(uint64_t param_1,uint64_t param_2)

{
  int64_t lVar1;
  code *pcVar2;
  char cVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  void*puVar7;
  char *pcVar8;
  int64_t **pplVar9;
  int64_t *this_ptr;
  int64_t *plVar10;
  int64_t *plVar11;
  int64_t *plVar12;
  bool bVar13;
  bool bVar14;
  uint64_t uVar15;
  void*local_f8;
  uint8_t local_f0;
  void*local_e8;
  uint8_t local_e0;
  void*local_d8;
  uint8_t local_d0;
  int64_t local_c8;
  uint8_t local_c0;
  int64_t local_b8;
  uint8_t local_b0;
  int64_t local_a8;
  uint8_t local_a0;
  void*local_98;
  uint64_t local_90;
  int64_t *local_88;
  char local_80;
  int64_t *local_78;
  void*local_70;
  void*local_68;
  uint32_t local_5c;
  byte local_50;
  char local_48 [8];
  int64_t *local_40;
  char local_38 [8];
  
  puVar7 = (void*)FUN_00e8fc40();
  local_98 = puVar7;
  FUN_00d4ff40();
  *puVar7 = &g_02572358;
  pcVar2 = g_02572370;
  (*g_02572370)();
  puVar7 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar7 = &g_02572358;
  (*pcVar2)();
  local_70 = puVar7;
  puVar7 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar7 = &g_02572358;
  (*pcVar2)();
  plVar12 = g_026db000;
  local_68 = puVar7;
  if (g_026db000 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  FUN_00e7d6f0();
  uVar15 = FUN_0071a120();
  if ((((local_38[0] == '\0') && (local_40 != (int64_t *)0x0)) &&
      (uVar15 = FUN_00d50b00(), local_38[0] != '\0')) && (local_40 != (int64_t *)0x0)) {
    uVar15 = FUN_00d50b20();
  }
  local_88 = plVar12;
  local_80 = '\0';
  FUN_000175c0(uVar15,&local_88);
  plVar11 = local_40;
  if (local_38[0] == '\0') {
    if (((local_40 != (int64_t *)0x0) && (FUN_00d50b00(), local_38[0] != '\0')) &&
       (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38[0] = '\0';
  }
  if ((local_80 != '\0') && (local_88 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  plVar10 = this_ptr;
  if (plVar11 != (int64_t *)0x0) {
    local_38[0] = '\0';
    local_40 = plVar11;
    uVar5 = FUN_00c70bc0();
    plVar10 = (int64_t *)(uint64_t)uVar5;
    if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  FUN_00d50b20();
  if (plVar12 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (this_ptr != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  local_50 = plVar11 != (int64_t *)0x0 & (byte)plVar10;
  local_48[0] = '\0';
  local_88 = this_ptr;
  do {
    plVar12 = local_88;
    (**(code **)(*local_88 + 0x370))();
    plVar11 = local_40;
    if (local_40 == plVar12) {
      if (((local_48[0] == '\0') && (local_40 != (int64_t *)0x0)) && (local_38[0] != '\0')) {
        local_48[0] = '\x01';
        plVar11 = plVar12;
        goto LAB_00465ee7;
      }
    }
    else {
      local_88 = local_40;
      if (local_38[0] == '\0') {
        if (local_48[0] == '\0') {
          pcVar8 = local_48;
        }
        else {
          FUN_00d50b20();
          pcVar8 = local_48;
        }
      }
      else {
        if (local_48[0] != '\0') {
          FUN_00d50b20();
        }
        local_48[0] = '\x01';
LAB_00465ee7:
        local_48[0] = '\x01';
        pcVar8 = local_38;
      }
      *pcVar8 = '\0';
      plVar12 = plVar11;
    }
    if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((g_026fddb0 == '\0') && (iVar6 = ___cxa_guard_acquire(), iVar6 != 0)) {
      g_026e0ab8 = FUN_00015ff0();
      g_026e0aa0 = "MDMetaWindowController";
      g_026e0aa8 = 0x198;
      g_026e0ab0 = FUN_0006dea0;
      g_026e0ac0 = 0;
      ram_00000000026e0ac8 = 0;
      g_026e0ad0 = 0;
      g_026e0b48 = 0;
      ram_00000000026e0b50 = 0;
      g_026e0b58 = 0;
      g_026e0b5a = 1;
      g_026e0ad8 = 0;
      ram_00000000026e0ae0 = 0;
      g_026e0ae8 = 0;
      ram_00000000026e0af0 = 0;
      g_026e0af8 = 0;
      ram_00000000026e0b00 = 0;
      g_026e0b08 = 0;
      ram_00000000026e0b10 = 0;
      g_026e0b18 = 0;
      ram_00000000026e0b20 = 0;
      g_026e0b28 = 0;
      ram_00000000026e0b30 = 0;
      g_026e0b38 = 0;
      ram_00000000026e0b40 = 0;
      g_026e0b63 = 0;
      g_026e0b5b = 0;
      ___cxa_guard_release();
    }
    pplVar9 = (int64_t **)&g_02802688;
    if (plVar12 != (int64_t *)0x0) {
      (**(code **)(*plVar12 + 0x360))();
      cVar3 = FUN_00e85ea0();
      pplVar9 = &local_88;
      if (cVar3 == '\0') {
        pplVar9 = (int64_t **)&g_02802688;
      }
    }
    plVar12 = local_88;
    if (*pplVar9 != (int64_t *)0x0) {
      if ((local_48[0] == '\0') && (local_88 != (int64_t *)0x0)) {
        FUN_00d50b00();
      }
      if (this_ptr == (int64_t *)0x0) goto LAB_00466079;
      goto LAB_00466074;
    }
  } while (local_88 != (int64_t *)0x0);
  plVar12 = (int64_t *)0x0;
  if (this_ptr != (int64_t *)0x0) {
LAB_00466074:
    FUN_00d50b20();
  }
LAB_00466079:
  bVar14 = true;
  if (plVar12 == (int64_t *)0x0) {
    bVar13 = false;
    local_78 = (int64_t *)0x0;
    local_90 = 0;
    local_5c = 1;
    goto LAB_00466248;
  }
  FUN_0062abf0();
  bVar13 = local_40[0x61] != 0;
  if (local_38[0] != '\0') {
    FUN_00d50b20();
  }
  uVar15 = (**(code **)(*plVar12 + 0x5e0))();
  if (local_38[0] == '\0') {
    if (local_40 == (int64_t *)0x0) goto LAB_00466154;
    FUN_00d50b00();
    if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
LAB_0046610a:
    FUN_00756eb0();
    local_78 = local_40;
    if (local_40 == (int64_t *)0x0) {
      local_90 = 0;
      local_78 = (int64_t *)0x0;
    }
    else {
      local_90 = CONCAT71((int7)((uint64_t)local_40 >> 8),1);
      if (((local_38[0] == '\0') && (FUN_00d50b00(), local_38[0] != '\0')) &&
         (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    uVar15 = FUN_00d50b20();
    if (local_78 == (int64_t *)0x0) {
      local_5c = (uint32_t)CONCAT71((int7)((uint64_t)uVar15 >> 8),1);
      local_78 = (int64_t *)0x0;
    }
    else {
      bVar4 = (**(code **)(*local_78 + 0x4a0))();
      local_50 = local_50 & bVar4;
      local_5c = 0;
    }
  }
  else {
    if (local_40 != (int64_t *)0x0) goto LAB_0046610a;
LAB_00466154:
    local_5c = (uint32_t)CONCAT71((int7)((uint64_t)uVar15 >> 8),1);
    local_78 = (int64_t *)0x0;
    local_90 = 0;
  }
  FUN_00643590();
  iVar6 = *(int *)((int64_t)local_40 + 0xc);
  if (local_38[0] != '\0') {
    FUN_00d50b20();
  }
  if (iVar6 != 0) {
    FUN_00643590();
    FUN_00d23310();
    plVar11 = local_40;
    pcVar8 = local_48;
    if (local_38[0] != '\0') {
      pcVar8 = local_38;
    }
    local_48[0] = local_38[0];
    *pcVar8 = '\0';
    if ((local_38[0] != '\0') && (plVar11 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    iVar6 = FUN_00228b30();
    bVar14 = iVar6 == 0;
    if ((local_48[0] != '\0') && (plVar11 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_80 != '\0') && (local_88 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
LAB_00466248:
  if ((this_ptr[0x1b] != 0) && (this_ptr[0x17] != 0)) {
    FUN_01e53c20();
    FUN_01e3f820();
    FUN_00714750(param_2);
    if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  puVar7 = local_98;
  plVar11 = (int64_t *)this_ptr[0x1c];
  if ((char)this_ptr[0x11] == '\0') {
    if (plVar11 != (int64_t *)0x0) {
      FUN_00d50b00();
      local_38[0] = '\0';
      local_40 = plVar11;
      FUN_00d21140();
      if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    if (bVar13) {
      lVar1 = this_ptr[0x1a];
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      local_38[0] = '\0';
      local_40 = (int64_t *)lVar1;
      FUN_00d21140();
      if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
    }
    else {
      lVar1 = this_ptr[0x19];
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      local_38[0] = '\0';
      local_40 = (int64_t *)lVar1;
      FUN_00d21140();
      if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
    }
    lVar1 = this_ptr[0x16];
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    local_38[0] = '\0';
    local_40 = (int64_t *)lVar1;
    FUN_00d21140();
    if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    lVar1 = this_ptr[0x17];
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    local_38[0] = '\0';
    local_40 = (int64_t *)lVar1;
    FUN_00d21140();
    if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    lVar1 = this_ptr[0x20];
    if (lVar1 != 0) {
      FUN_00d50b00();
      local_38[0] = '\0';
      local_40 = (int64_t *)lVar1;
      FUN_00d21140();
      if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    lVar1 = this_ptr[0x1d];
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    local_38[0] = '\0';
    local_40 = (int64_t *)lVar1;
    FUN_00d21140();
    if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    lVar1 = this_ptr[0x25];
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    local_38[0] = '\0';
    local_40 = (int64_t *)lVar1;
    FUN_00d21140();
    if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if (bVar13) {
      lVar1 = this_ptr[0x13];
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      local_38[0] = '\0';
      local_40 = (int64_t *)lVar1;
      FUN_00d21140();
      if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      FUN_003ad150();
      lVar1 = this_ptr[0x1f];
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      local_38[0] = '\0';
      local_40 = (int64_t *)lVar1;
      FUN_00d21140();
      if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
    }
    lVar1 = this_ptr[0x24];
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    local_38[0] = '\0';
    local_40 = (int64_t *)lVar1;
    uVar15 = FUN_00d21140();
    if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
      uVar15 = FUN_00d50b20();
    }
    if (lVar1 != 0) {
      uVar15 = FUN_00d50b20();
    }
  }
  else {
    if (plVar11 != (int64_t *)0x0) {
      FUN_00d50b00();
      local_38[0] = '\0';
      local_40 = plVar11;
      FUN_00d21140();
      if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    lVar1 = this_ptr[0x14];
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    local_38[0] = '\0';
    local_40 = (int64_t *)lVar1;
    FUN_00d21140();
    if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if (bVar13) {
      lVar1 = this_ptr[0x1a];
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      local_38[0] = '\0';
      local_40 = (int64_t *)lVar1;
      FUN_00d21140();
      if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
    }
    else {
      lVar1 = this_ptr[0x19];
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      local_38[0] = '\0';
      local_40 = (int64_t *)lVar1;
      FUN_00d21140();
      if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
    }
    lVar1 = this_ptr[0x16];
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    local_38[0] = '\0';
    local_40 = (int64_t *)lVar1;
    FUN_00d21140();
    if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    lVar1 = this_ptr[0x1b];
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    local_38[0] = '\0';
    local_40 = (int64_t *)lVar1;
    FUN_00d21140();
    if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    lVar1 = this_ptr[0x23];
    if (lVar1 != 0) {
      FUN_00d50b00();
      local_38[0] = '\0';
      local_40 = (int64_t *)lVar1;
      FUN_00d21140();
      if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    lVar1 = this_ptr[0x20];
    if (lVar1 != 0) {
      FUN_00d50b00();
      local_38[0] = '\0';
      local_40 = (int64_t *)lVar1;
      FUN_00d21140();
      if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    lVar1 = this_ptr[0x1d];
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    local_38[0] = '\0';
    local_40 = (int64_t *)lVar1;
    FUN_00d21140();
    if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if ((bool)(!bVar14 & bVar13)) {
      lVar1 = this_ptr[0x1f];
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      local_38[0] = '\0';
      local_40 = (int64_t *)lVar1;
      FUN_00d21140();
      if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
    }
    if ((local_50 != 0) && (bVar14)) {
      lVar1 = this_ptr[0x18];
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      local_38[0] = '\0';
      local_40 = (int64_t *)lVar1;
      FUN_00d21140();
      if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
    }
    lVar1 = this_ptr[0x25];
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    puVar7 = local_98;
    local_38[0] = '\0';
    local_40 = (int64_t *)lVar1;
    FUN_00d21140();
    if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    lVar1 = this_ptr[0x13];
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    local_38[0] = '\0';
    local_40 = (int64_t *)lVar1;
    FUN_00d21140();
    if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    FUN_003ad150();
    if ((bVar13) && (lVar1 = this_ptr[0x22], lVar1 != 0)) {
      FUN_00d50b00();
      local_38[0] = '\0';
      local_40 = (int64_t *)lVar1;
      FUN_00d21140();
      if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    lVar1 = this_ptr[0x24];
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    local_38[0] = '\0';
    local_40 = (int64_t *)lVar1;
    uVar15 = FUN_00d21140();
    if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
      uVar15 = FUN_00d50b20();
    }
    if (lVar1 != 0) {
      uVar15 = FUN_00d50b20();
    }
  }
  uVar15 = FUN_004b43d0(uVar15,0);
  plVar11 = local_40;
  if (local_38[0] == '\0') {
    if (local_40 != (int64_t *)0x0) {
      uVar15 = FUN_00d50b00();
    }
  }
  else {
    local_38[0] = '\0';
  }
  local_c0 = 1;
  local_c8 = (int64_t)plVar11;
  local_f0 = 0;
  local_f8 = puVar7;
  uVar15 = FUN_00467a40(uVar15,&local_f8);
  if (plVar11 != (int64_t *)0x0) {
    uVar15 = FUN_00d50b20();
  }
  if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
    uVar15 = FUN_00d50b20();
  }
  uVar15 = FUN_004b43d0(uVar15,1);
  plVar11 = local_40;
  if (local_38[0] == '\0') {
    if (local_40 != (int64_t *)0x0) {
      uVar15 = FUN_00d50b00();
    }
  }
  else {
    local_38[0] = '\0';
  }
  local_b0 = 1;
  local_b8 = (int64_t)plVar11;
  local_e8 = local_68;
  local_e0 = 0;
  uVar15 = FUN_00467a40(uVar15,&local_e8);
  if (plVar11 != (int64_t *)0x0) {
    uVar15 = FUN_00d50b20();
  }
  if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
    uVar15 = FUN_00d50b20();
  }
  uVar15 = FUN_004b43d0(uVar15,2);
  plVar11 = local_40;
  if (local_38[0] == '\0') {
    if (local_40 != (int64_t *)0x0) {
      uVar15 = FUN_00d50b00();
    }
  }
  else {
    local_38[0] = '\0';
  }
  local_a0 = 1;
  local_a8 = (int64_t)plVar11;
  local_d8 = local_70;
  local_d0 = 0;
  FUN_00467a40(uVar15,&local_d8);
  if (plVar11 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(*this_ptr + 0x5c0))();
  if ((char)local_90 != '\0' && (char)local_5c == '\0') {
    FUN_00d50b20();
  }
  if (plVar12 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (local_68 != (void*)0x0) {
    FUN_00d50b20();
  }
  if (local_70 != (void*)0x0) {
    FUN_00d50b20();
  }
  if (puVar7 != (void*)0x0) {
    FUN_00d50b20();
  }
  return;
}

