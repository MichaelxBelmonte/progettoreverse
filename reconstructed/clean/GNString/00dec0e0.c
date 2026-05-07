// Function: FUN_00dec0e0
// Address: 00dec0e0
// Size: 1202 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_00dec0e0(void)

{
  bool bVar1;
  bool bVar2;
  int64_t lVar3;
  uint64_t uVar4;
  int64_t lVar5;
  void*puVar6;
  void*this_ptr;
  bool bVar7;
  uint32_t uVar8;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  char local_40;
  int64_t local_38;
  char local_30;
  
  puVar6 = g_028a8750;
  if ((g_028a8750 == (void*)0x0) || (g_028a8759 == '\0')) {
    FUN_00e8cb50();
    if (g_028a8750 == (void*)0x0) {
      puVar6 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar6 = &g_025818d0;
      *(void*)(puVar6 + 3) = 0;
      *(void*)((int64_t)puVar6 + 0x1c) = 0;
      *(void*)((int64_t)puVar6 + 0x24) = 0;
      *(void*)((int64_t)puVar6 + 0x2c) = 0;
      *(void*)((int64_t)puVar6 + 0x34) = 0;
      *(void*)((int64_t)puVar6 + 0x3c) = 0;
      *(void*)((int64_t)puVar6 + 0x44) = 0;
      *(void*)((int64_t)puVar6 + 0x4c) = 0;
      FUN_00d500e0();
      if (g_028a8750 == puVar6) {
        bVar2 = false;
        bVar1 = false;
      }
      else {
        bVar2 = true;
        bVar1 = true;
        bVar7 = g_028a8750 != (void*)0x0;
        g_028a8750 = puVar6;
        if (bVar7) {
          FUN_00d50b20();
        }
      }
      if (g_028a8758 == '\0') {
        g_028a8758 = '\x01';
        FUN_00e8cb90();
        bVar1 = bVar2;
      }
      if (!bVar1) {
        FUN_00d50b20();
      }
      FUN_00dec980();
      FUN_00003040();
      uVar4 = g_025908a0;
      uVar8 = FUN_00d8cb40(&g_025908a0,g_025908a0);
      lVar3 = g_02787830;
      if ((local_40 == '\0') && (local_48 != 0)) {
        uVar8 = FUN_00d50b00();
        lVar3 = g_02787830;
      }
      g_02787830 = lVar3;
      if (lVar3 != 0) {
        uVar8 = FUN_00d50b00();
      }
      local_30 = '\0';
      local_38 = lVar3;
      FUN_00ca0840(uVar8,&local_38);
      if ((local_30 != '\0') && (local_38 != 0)) {
        FUN_00d50b20();
      }
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      if (local_48 != 0) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      FUN_00dec980();
      uVar8 = FUN_00003050();
      uVar8 = FUN_00d8cb40(uVar8,uVar4);
      if (local_48 != 0) {
        uVar8 = FUN_00d50b00();
      }
      lVar3 = g_027d2068;
      if (g_027d2068 != 0) {
        uVar8 = FUN_00d50b00();
      }
      local_30 = '\0';
      local_38 = lVar3;
      FUN_00ca0840(uVar8,&local_38);
      if ((local_30 != '\0') && (local_38 != 0)) {
        FUN_00d50b20();
      }
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      if (local_48 != 0) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      FUN_00dec980();
      uVar8 = FUN_00003060();
      uVar8 = FUN_00d8cb40(uVar8,uVar4);
      if (local_48 != 0) {
        uVar8 = FUN_00d50b00();
      }
      lVar3 = g_02787840;
      if (g_02787840 != 0) {
        uVar8 = FUN_00d50b00();
      }
      local_30 = '\0';
      local_38 = lVar3;
      FUN_00ca0840(uVar8,&local_38);
      if ((local_30 != '\0') && (local_38 != 0)) {
        FUN_00d50b20();
      }
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      if (local_48 != 0) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      uVar8 = FUN_00dec980();
      lVar3 = g_02788fa8;
      if (g_02788fa8 != 0) {
        uVar8 = FUN_00d50b00();
      }
      lVar5 = g_02788fb0;
      if (g_02788fb0 != 0) {
        uVar8 = FUN_00d50b00();
      }
      local_38 = lVar5;
      local_30 = '\0';
      FUN_00ca0840(uVar8,&local_38);
      if ((local_30 != '\0') && (local_38 != 0)) {
        FUN_00d50b20();
      }
      if (lVar5 != 0) {
        FUN_00d50b20();
      }
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      g_028a8759 = '\x01';
      FUN_00e8cb70();
    }
    else {
      g_028a8759 = '\x01';
      FUN_00e8cb70();
    }
    puVar6 = g_028a8750;
    *(void*)(this_ptr + 1) = 0;
    if (puVar6 == (void*)0x0) {
      puVar6 = (void*)0x0;
      goto LAB_00dec574;
    }
  }
  else {
    *(void*)(this_ptr + 1) = 0;
  }
  FUN_00d50b00();
LAB_00dec574:
  *this_ptr = puVar6;
  *(void*)(this_ptr + 1) = 1;
  return;
}

