// Function: FUN_00e07ae0
// Address: 00e07ae0
// Size: 1296 bytes
// Class: GNDistinction
// String references:
//   "Duration: %f ms"
//   "OSVersion: %f"
//   "operatingSystemVersion"

void FUN_00e07ae0(void)

{
  int64_t lVar1;
  void*puVar2;
  void*puVar3;
  int64_t lVar4;
  uint64_t uVar5;
  uint uVar6;
  int iVar7;
  int64_t *arg1;
  uint64_t uVar8;
  uint64_t uVar9;
  void*puVar10;
  uint64_t extraout_XMM0_Qa;
  uint64_t extraout_XMM0_Qa_00;
  double dVar11;
  uint64_t uVar12;
  double local_b0;
  void*local_88;
  char local_80;
  void*local_78;
  uint local_70;
  double local_68;
  void*local_60;
  char local_58;
  void*local_50;
  void*local_48;
  uint local_40;
  double local_38;
  
  FUN_00d8ede0();
  puVar10 = local_48;
  if (((char)local_40 == '\0') && (local_48 != (void*)0x0)) {
    FUN_00d50b00();
    if (((char)local_40 != '\0') && (local_48 != (void*)0x0)) {
      FUN_00d50b20();
    }
  }
  lVar1 = *arg1;
  local_50 = puVar10;
  if (lVar1 == 0) {
    puVar3 = (void*)0x0;
  }
  else {
    puVar3 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar3 = &g_02572358;
    (*g_02572370)();
    puVar10 = g_027850e8;
    if (g_027850e8 != (void*)0x0) {
      FUN_00d50b00();
    }
    local_48 = puVar10;
    local_40 = local_40 & 0xffffff00;
    FUN_00d21140();
    if (((char)local_40 != '\0') && (local_48 != (void*)0x0)) {
      FUN_00d50b20();
    }
    if (puVar10 != (void*)0x0) {
      FUN_00d50b20();
    }
    local_b0 = (double)FUN_00e7d6f0();
  }
  lVar4 = (*PTR__objc_msgSend_024a9998)();
  if (lVar4 == 0) {
    uVar9 = 0;
    uVar8 = 0;
    uVar5 = 0;
  }
  else {
    _objc_msgSend_stret(extraout_XMM0_Qa,PTR_s_operatingSystemVersion_026c94b0);
    uVar5 = (uint64_t)local_48 & 0xffffffff;
    uVar9 = (uint64_t)local_38 & 0xffffffff;
    uVar8 = (uint64_t)local_40 << 0x20;
  }
  FUN_00e08370(0x42,0x30,uVar8 | uVar5,uVar9);
  puVar2 = local_50;
  puVar10 = local_78;
  if (local_50 == local_78) {
    puVar10 = local_50;
    if (((char)local_70 != '\0') && (local_78 != (void*)0x0)) {
      FUN_00d50b20();
      puVar10 = local_50;
    }
  }
  else if ((char)local_70 == '\0') {
    if (local_78 != (void*)0x0) {
      FUN_00d50b00();
    }
    if (puVar2 != (void*)0x0) {
      FUN_00d50b20();
    }
  }
  else if (local_50 != (void*)0x0) {
    FUN_00d50b20();
  }
  local_40 = local_40 & 0xffffff00;
  local_48 = puVar10;
  FUN_00d21140();
  if (((char)local_40 != '\0') && (local_48 != (void*)0x0)) {
    FUN_00d50b20();
  }
  if (*arg1 != 0) {
    local_50 = puVar10;
    lVar4 = (*PTR__objc_msgSend_024a9998)();
    if (lVar4 == 0) {
      uVar6 = 0;
      dVar11 = 0.0;
      local_38._0_4_ = 0;
    }
    else {
      _objc_msgSend_stret(extraout_XMM0_Qa_00,PTR_s_operatingSystemVersion_026c94b0);
      dVar11 = (double)(int)local_48;
      uVar6 = local_40;
      if (0x3e6 < (int)local_40) {
        uVar6 = 999;
      }
    }
    iVar7 = 999;
    if (local_38._0_4_ < 999) {
      iVar7 = local_38._0_4_;
    }
    local_68 = (double)iVar7 * g_023d7d68 + (double)(int)uVar6 * g_02391038 + dVar11;
    local_70 = 1;
    local_78 = &g_024de5e0;
    FUN_00d8cb40(iVar7,&local_78);
    puVar10 = local_60;
    if (local_58 == '\0') {
      if (local_60 != (void*)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_58 = '\0';
    }
    local_48 = puVar10;
    local_40 = local_40 & 0xffffff00;
    FUN_00d21140();
    if (((char)local_40 != '\0') && (local_48 != (void*)0x0)) {
      FUN_00d50b20();
    }
    if (puVar10 != (void*)0x0) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != (void*)0x0)) {
      FUN_00d50b20();
    }
    dVar11 = (double)FUN_00e7d6f0();
    local_38 = (dVar11 - local_b0) * g_023907c0;
    local_40 = 1;
    local_48 = &g_024de5e0;
    FUN_00d8cb40(local_38,&local_48);
    puVar10 = local_50;
    puVar2 = local_60;
    if (local_58 == '\0') {
      if (local_60 != (void*)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_58 = '\0';
    }
    local_78 = puVar2;
    local_70 = local_70 & 0xffffff00;
    FUN_00d21140();
    if (((char)local_70 != '\0') && (local_78 != (void*)0x0)) {
      FUN_00d50b20();
    }
    if (puVar2 != (void*)0x0) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != (void*)0x0)) {
      FUN_00d50b20();
    }
    uVar12 = FUN_00d92220();
    local_88 = local_60;
    local_80 = 0;
    if (local_58 == '\0') {
      if (local_60 != (void*)0x0) {
        uVar12 = FUN_00d50b00();
      }
    }
    else {
      local_58 = '\0';
    }
    local_80 = '\x01';
    FUN_00d95130(uVar12,&local_88);
    puVar2 = local_78;
    if ((char)local_70 == '\0') {
      if (local_78 != (void*)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_70 = local_70 & 0xffffff00;
    }
    local_48 = puVar2;
    local_40 = local_40 & 0xffffff00;
    FUN_00d21140();
    if (((char)local_40 != '\0') && (local_48 != (void*)0x0)) {
      FUN_00d50b20();
    }
    if (puVar2 != (void*)0x0) {
      FUN_00d50b20();
    }
    if (((char)local_70 != '\0') && (local_78 != (void*)0x0)) {
      FUN_00d50b20();
    }
    if ((local_80 != '\0') && (local_88 != (void*)0x0)) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != (void*)0x0)) {
      FUN_00d50b20();
    }
  }
  if ((lVar1 != 0) && (puVar3 != (void*)0x0)) {
    FUN_00d50b20();
  }
  if (puVar10 != (void*)0x0) {
    FUN_00d50b20();
  }
  return;
}

