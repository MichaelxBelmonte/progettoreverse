// Function: FUN_00c3b010
// Address: 00c3b010
// Size: 734 bytes
// Class: GNOverloudCompG
// === GNOverloudCompG properties ===
//   float           _minValue
//   float           _maxValue
//   float           _offValue


void FUN_00c3b010(void)

{
  int64_t lVar1;
  void*puVar2;
  void*puVar3;
  int64_t this_ptr;
  int64_t lVar4;
  bool bVar5;
  int64_t local_88;
  uint8_t local_80;
  int64_t local_78;
  uint8_t local_70;
  int64_t local_68;
  uint8_t local_60;
  int64_t local_58;
  uint8_t local_50;
  int64_t local_48;
  uint8_t local_40;
  int64_t local_38;
  uint8_t local_30;
  
  *(void*)(this_ptr + 0xb8) = 0x15;
  lVar1 = g_0276ce58;
  if (g_0276ce58 == 0) {
    lVar4 = *(int64_t *)(this_ptr + 0x90);
    if (lVar4 == 0) goto LAB_00c3b076;
  }
  else {
    FUN_00d50b00();
    lVar4 = *(int64_t *)(this_ptr + 0x90);
    if (lVar4 == lVar1) {
      FUN_00d50b20();
      goto LAB_00c3b076;
    }
  }
  *(int64_t *)(this_ptr + 0x90) = lVar1;
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
LAB_00c3b076:
  *(void*)(this_ptr + 0xa8) = 4;
  if ((g_028a5f98 == (void*)0x0) || (g_028a5fa1 == '\0')) {
    FUN_00e8cb50();
    if (g_028a5f98 == (void*)0x0) {
      puVar3 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar3 = &g_0254ed40;
      puVar3[2] = 0;
      puVar3[3] = 0;
      puVar3[4] = 0;
      puVar3[5] = 0;
      FUN_00d500e0();
      bVar5 = g_028a5f98 == (void*)0x0;
      g_028a5f98 = puVar3;
      if (((bVar5) || (FUN_00d50b20(), lVar1 = g_0276c380, g_028a5f98 != (void*)0x0)) &&
         (lVar1 = g_0276c380, g_028a5fa0 == '\0')) {
        g_028a5fa0 = '\x01';
        FUN_00e8cb90();
        lVar1 = g_0276c380;
      }
      g_0276c380 = lVar1;
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_0276c388;
      local_80 = 1;
      local_88 = lVar1;
      if (g_0276c388 != 0) {
        FUN_00d50b00();
      }
      local_78 = lVar4;
      local_70 = 1;
      FUN_00bf1030(&local_78,&local_88);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = g_0276ce60;
      if (g_0276ce60 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_0276ce68;
      local_68 = lVar1;
      local_60 = 1;
      if (g_0276ce68 != 0) {
        FUN_00d50b00();
      }
      local_58 = lVar4;
      local_50 = 1;
      FUN_00bf1030(&local_58,&local_68);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = g_0276be48;
      if (g_0276be48 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_0276be50;
      local_48 = lVar1;
      local_40 = 1;
      if (g_0276be50 != 0) {
        FUN_00d50b00();
      }
      local_38 = lVar4;
      local_30 = 1;
      FUN_00bf1030(&local_38,&local_48);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      g_028a5fa1 = '\x01';
      FUN_00e8cb70();
    }
    else {
      g_028a5fa1 = '\x01';
      FUN_00e8cb70();
    }
    puVar3 = *(void**)(this_ptr + 0xb0);
    if (puVar3 == g_028a5f98) {
      return;
    }
  }
  else {
    puVar3 = *(void**)(this_ptr + 0xb0);
    if (puVar3 == g_028a5f98) {
      return;
    }
  }
  puVar2 = g_028a5f98;
  if (g_028a5f98 != (void*)0x0) {
    FUN_00d50b00();
  }
  *(void**)(this_ptr + 0xb0) = puVar2;
  if (puVar3 == (void*)0x0) {
    return;
  }
  FUN_00d50b20();
  return;
}

