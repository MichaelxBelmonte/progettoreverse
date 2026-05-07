// Function: FUN_00875310
// Address: 00875310
// Size: 1568 bytes
// Class: MDToolbarLeftConfigCtrl

void FUN_00875310(void)

{
  void*puVar1;
  int64_t *plVar2;
  uint64_t uVar3;
  int64_t lVar4;
  char cVar5;
  void*puVar6;
  int64_t *plVar7;
  int64_t *this_ptr;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint8_t auVar12 [16];
  uint8_t auVar13 [16];
  int64_t *local_80;
  char local_78;
  int64_t *local_70;
  char local_68;
  int64_t *local_60;
  char local_58;
  int64_t *local_50;
  char local_48;
  int64_t *local_30;
  char local_28;
  
  FUN_004b3c80();
  FUN_004b4d40();
  lVar4 = g_027403f0;
  if (g_027403f0 != 0) {
    FUN_00d50b00();
  }
  FUN_003b6200();
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  if ((local_28 != '\0') && (local_30 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_004b4d40();
  FUN_01f27fe0();
  cVar5 = (**(code **)(*local_80 + 0x450))();
  uVar8 = g_02394298;
  if (cVar5 == '\0') {
    uVar8 = g_02390124;
  }
  FUN_01f27fe0();
  cVar5 = (**(code **)(*local_70 + 0x450))();
  uVar9 = g_02394298;
  if (cVar5 == '\0') {
    uVar9 = g_02390124;
  }
  FUN_01f27fe0();
  cVar5 = (**(code **)(*local_60 + 0x450))();
  uVar10 = g_02394298;
  if (cVar5 == '\0') {
    uVar10 = g_02390124;
  }
  FUN_01f27fe0();
  cVar5 = (**(code **)(*local_50 + 0x450))();
  uVar11 = g_02394298;
  if (cVar5 == '\0') {
    uVar11 = g_02390124;
  }
  auVar13 = insertps(ZEXT416(uVar10),ZEXT416(uVar11),0x10);
  auVar12 = insertps(ZEXT416(uVar8),uVar9,0x10);
  (**(code **)(*local_30 + 0x940))(auVar12._0_8_,auVar13._0_8_);
  if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_28 != '\0') && (local_30 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  puVar6 = (void*)FUN_00e8fc40();
  FUN_000161a0();
  *puVar6 = &g_024c5a38;
  puVar6[0xe] = 0;
  puVar6[0xf] = 0;
  puVar6[0x10] = 0;
  puVar6[0x11] = 0;
  puVar6[0x12] = 0;
  (*g_024c5a50)();
  puVar1 = (void*)this_ptr[0x14];
  if (puVar1 == puVar6) {
    FUN_00d50b20();
  }
  else {
    this_ptr[0x14] = (int64_t)puVar6;
    if (puVar1 != (void*)0x0) {
      FUN_00d50b20();
    }
  }
  puVar6 = (void*)FUN_00e8fc40();
  FUN_000161a0();
  *puVar6 = &g_024f5620;
  puVar6[0xe] = 0;
  puVar6[0xf] = 0;
  puVar6[0x10] = 0;
  puVar6[0x11] = 0;
  puVar6[0x12] = 0;
  puVar6[0x13] = 0;
  (*g_024f5638)();
  puVar1 = (void*)this_ptr[0x15];
  if (puVar1 == puVar6) {
    FUN_00d50b20();
  }
  else {
    this_ptr[0x15] = (int64_t)puVar6;
    if (puVar1 != (void*)0x0) {
      FUN_00d50b20();
    }
  }
  puVar6 = (void*)FUN_00e8fc40();
  FUN_000161a0();
  *puVar6 = &g_024cc728;
  puVar6[0xe] = 0;
  puVar6[0xf] = 0;
  puVar6[0x10] = 0;
  puVar6[0x11] = 0;
  puVar6[0x12] = 0;
  puVar6[0x13] = 0;
  puVar6[0x14] = 0;
  puVar6[0x15] = 0;
  puVar6[0x16] = 0;
  puVar6[0x17] = 0;
  puVar6[0x18] = 0;
  puVar6[0x19] = 0;
  puVar6[0x1a] = 0;
  puVar6[0x1b] = 0;
  puVar6[0x1c] = 0;
  (*g_024cc740)();
  puVar1 = (void*)this_ptr[0x11];
  if (puVar1 == puVar6) {
    FUN_00d50b20();
  }
  else {
    this_ptr[0x11] = (int64_t)puVar6;
    if (puVar1 != (void*)0x0) {
      FUN_00d50b20();
    }
  }
  puVar6 = (void*)FUN_00e8fc40();
  FUN_000161a0();
  *puVar6 = &g_024c6008;
  puVar6[0xe] = &g_024c65f8;
  puVar6[0xf] = &g_024c6640;
  puVar6[0x10] = 0;
  puVar6[0x11] = 0;
  puVar6[0x12] = 0;
  puVar6[0x13] = 0;
  puVar6[0x14] = 0;
  puVar6[0x15] = 0;
  puVar6[0x16] = 0;
  puVar6[0x17] = 0;
  puVar6[0x18] = 0;
  puVar6[0x19] = 0;
  puVar6[0x1a] = 0;
  puVar6[0x1b] = 0;
  puVar6[0x1c] = 0;
  puVar6[0x1d] = 0;
  puVar6[0x1e] = 0;
  puVar6[0x1f] = 0;
  puVar6[0x20] = 0;
  puVar6[0x21] = 0;
  *(void*)((int64_t)puVar6 + 0x10c) = 0;
  *(void*)((int64_t)puVar6 + 0x114) = 0;
  puVar6[0x24] = 0;
  puVar6[0x25] = 0;
  *(void*)(puVar6 + 0x26) = 0;
  (*g_024c6020)();
  puVar1 = (void*)this_ptr[0x12];
  if (puVar1 == puVar6) {
    FUN_00d50b20();
  }
  else {
    this_ptr[0x12] = (int64_t)puVar6;
    if (puVar1 != (void*)0x0) {
      FUN_00d50b20();
    }
  }
  puVar6 = (void*)FUN_00e8fc40();
  FUN_000161a0();
  *puVar6 = &g_024d1190;
  puVar6[0xe] = 0;
  puVar6[0xf] = 0;
  puVar6[0x10] = 0;
  puVar6[0x11] = 0;
  puVar6[0x12] = 0;
  puVar6[0x13] = 0;
  puVar6[0x14] = 0;
  puVar6[0x15] = 0;
  puVar6[0x16] = 0;
  puVar6[0x17] = 0;
  puVar6[0x18] = 0;
  puVar6[0x19] = 0;
  puVar6[0x1a] = 0;
  puVar6[0x1b] = 0;
  puVar6[0x1c] = 0;
  uVar3 = _UNK_02393728;
  puVar6[0x1d] = g_02393720;
  puVar6[0x1e] = uVar3;
  puVar6[0x1f] = 0;
  (*g_024d11a8)();
  puVar1 = (void*)this_ptr[0x19];
  if (puVar1 == puVar6) {
    FUN_00d50b20();
  }
  else {
    this_ptr[0x19] = (int64_t)puVar6;
    if (puVar1 != (void*)0x0) {
      FUN_00d50b20();
    }
  }
  puVar6 = (void*)FUN_00e8fc40();
  FUN_000161a0();
  *puVar6 = &g_024cccf8;
  puVar6[0xe] = 0;
  puVar6[0xf] = 0;
  puVar6[0x10] = 0;
  puVar6[0x11] = 0;
  puVar6[0x12] = 0;
  (*g_024ccd10)();
  puVar1 = (void*)this_ptr[0x13];
  if (puVar1 == puVar6) {
    FUN_00d50b20();
  }
  else {
    this_ptr[0x13] = (int64_t)puVar6;
    if (puVar1 != (void*)0x0) {
      FUN_00d50b20();
    }
  }
  puVar6 = (void*)FUN_00e8fc40();
  FUN_000161a0();
  *puVar6 = &g_02516a00;
  puVar6[0xe] = 0;
  (*g_02516a18)();
  puVar1 = (void*)this_ptr[0x16];
  if (puVar1 == puVar6) {
    FUN_00d50b20();
  }
  else {
    this_ptr[0x16] = (int64_t)puVar6;
    if (puVar1 != (void*)0x0) {
      FUN_00d50b20();
    }
  }
  plVar7 = (int64_t *)FUN_00e8fc40();
  FUN_000f58f0();
  (**(code **)(*plVar7 + 0x18))();
  plVar2 = (int64_t *)this_ptr[0x17];
  if (plVar2 == plVar7) {
    FUN_00d50b20();
  }
  else {
    this_ptr[0x17] = (int64_t)plVar7;
    if (plVar2 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  puVar6 = (void*)FUN_00e8fc40();
  FUN_000161a0();
  *puVar6 = &g_024c3820;
  puVar6[0xe] = 0;
  puVar6[0xf] = 0;
  puVar6[0x10] = 0;
  puVar6[0x11] = 0;
  puVar6[0x12] = 0;
  (*g_024c3838)();
  puVar1 = (void*)this_ptr[0x18];
  if (puVar1 == puVar6) {
    FUN_00d50b20();
  }
  else {
    this_ptr[0x18] = (int64_t)puVar6;
    if (puVar1 != (void*)0x0) {
      FUN_00d50b20();
    }
  }
  (**(code **)(*this_ptr + 0x608))();
  return;
}

