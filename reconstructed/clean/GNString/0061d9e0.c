// Function: FUN_0061d9e0
// Address: 0061d9e0
// Size: 1286 bytes
// Class: GNString
// String references:
//   "GNString"
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


uint64_t FUN_0061d9e0(uint64_t param_1,uint32_t param_2)

{
  int64_t lVar1;
  int64_t *plVar2;
  int64_t *plVar3;
  int64_t *plVar4;
  byte bVar5;
  char cVar6;
  uint64_t uVar7;
  int64_t **pplVar8;
  int64_t *plVar9;
  double dVar10;
  uint64_t uVar11;
  int64_t local_b0;
  char local_a8;
  int64_t local_a0;
  char local_98;
  int64_t *local_90;
  char local_88;
  int64_t *local_80;
  char local_78;
  int64_t *local_70;
  char local_68;
  uint32_t local_5c;
  uint64_t local_58;
  int64_t local_50;
  char local_48;
  int64_t *local_40;
  char local_38;
  
  lVar1 = g_026f6fa0;
  local_5c = param_2;
  if (g_026f6fa0 != 0) {
    FUN_00d50b00();
  }
  dVar10 = (double)FUN_00e7d6f0();
  uVar7 = (uint64_t)(dVar10 * g_023907c0);
  dVar10 = dVar10 * g_023907c0 - g_023907c8;
  uVar11 = FUN_0071a120();
  plVar2 = local_40;
  if ((((local_38 == '\0') && (local_40 != (int64_t *)0x0)) &&
      (uVar11 = FUN_00d50b00(), local_38 != '\0')) && (local_40 != (int64_t *)0x0)) {
    uVar11 = FUN_00d50b20();
  }
  bVar5 = (byte)(((int64_t)dVar10 & (int64_t)uVar7 >> 0x3f | uVar7) / 3);
  local_50 = lVar1;
  local_48 = '\0';
  FUN_000175c0(uVar11,&local_50);
  plVar9 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != (int64_t *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
       (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if (plVar9 != (int64_t *)0x0) {
    local_38 = '\0';
    local_40 = plVar9;
    bVar5 = FUN_00c70bc0();
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  FUN_00d50b20();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  bVar5 = plVar9 != (int64_t *)0x0 & bVar5;
  if (bVar5 == 0) goto LAB_0061de1c;
  FUN_01caeae0();
  plVar9 = local_40;
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar9 == (int64_t *)0x0) {
    local_58 = 0;
    plVar9 = (int64_t *)0x0;
  }
  else {
    FUN_01caeae0();
    uVar11 = FUN_01d66da0();
    local_a0 = g_02726cf0;
    if (g_02726cf0 != 0) {
      uVar11 = FUN_00d50b00();
    }
    local_98 = '\x01';
    pplVar8 = &local_40;
    uVar11 = FUN_000175c0(uVar11,&local_a0);
    plVar9 = local_40;
    uVar11 = CONCAT71((int7)((uint64_t)uVar11 >> 8),g_026fd0c0);
    if ((g_026fd0c0 == '\0') && (uVar11 = ___cxa_guard_acquire(), (int)uVar11 != 0)) {
      g_026d5e58 = FUN_00d4fe50();
      g_026d5e40 = "GNString";
      g_026d5e48 = 0x40;
      g_026d5e50 = FUN_0005d920;
      g_026d5e60 = 0;
      ram_00000000026d5e68 = 0;
      g_026d5e70 = 0;
      ram_00000000026d5e78 = 0;
      g_026d5e80 = 0;
      ram_00000000026d5e88 = 0;
      g_026d5e90 = 0;
      ram_00000000026d5e98 = 0;
      g_026d5ea0 = 0;
      ram_00000000026d5ea8 = 0;
      g_026d5eb0 = 0;
      ram_00000000026d5eb8 = 0;
      g_026d5ec0 = 0;
      ram_00000000026d5ec8 = 0;
      g_026d5ed0 = 0;
      ram_00000000026d5ed8 = 0;
      g_026d5ee0 = 0;
      ram_00000000026d5ee8 = 0;
      g_026d5ef0 = 0;
      ram_00000000026d5ef8 = 0;
      g_026d5f00 = 0;
      uVar11 = ___cxa_guard_release();
    }
    if (plVar9 == (int64_t *)0x0) {
LAB_0061dc0e:
      pplVar8 = (int64_t **)&g_02802688;
    }
    else {
      (**(code **)(*plVar9 + 0x360))();
      uVar11 = FUN_00e85ea0();
      if ((char)uVar11 == '\0') goto LAB_0061dc0e;
    }
    plVar9 = *pplVar8;
    if (plVar9 == (int64_t *)0x0) {
      local_58 = 0;
      plVar9 = (int64_t *)0x0;
    }
    else {
      if (*(char *)(pplVar8 + 1) == '\0') {
        uVar11 = FUN_00d50b00();
      }
      else {
        *(void*)(pplVar8 + 1) = 0;
      }
      local_58 = CONCAT71((int7)((uint64_t)uVar11 >> 8),1);
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_98 != '\0') && (local_a0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_a8 != '\0') && (local_b0 != 0)) {
      FUN_00d50b20();
    }
  }
  FUN_0141b1a0();
  plVar3 = local_40;
  if ((((local_38 == '\0') && (local_40 != (int64_t *)0x0)) && (FUN_00d50b00(), local_38 != '\0'))
     && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_5c != '\0') && (plVar9 != (int64_t *)0x0)) {
    local_90 = plVar3;
    local_88 = '\0';
    cVar6 = (**(code **)(*plVar9 + 0x50))();
    if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (cVar6 == '\0') {
      local_78 = '\0';
      local_80 = plVar9;
      FUN_0141b400();
      if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_01f27fe0();
      FUN_002813d0();
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  FUN_01caeae0();
  plVar4 = local_40;
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar4 != (int64_t *)0x0) {
    FUN_01caeae0();
    local_70 = plVar3;
    local_68 = '\0';
    (**(code **)(*plVar9 + 0x50))();
    FUN_01d66ab0();
    if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  if (plVar3 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (((char)local_58 != '\0') && (plVar9 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
LAB_0061de1c:
  return CONCAT71((int7)((uint64_t)plVar2 >> 8),bVar5) & 0xffffffff;
}

