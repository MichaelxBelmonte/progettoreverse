// Function: FUN_00c05b10
// Address: 00c05b10
// Size: 993 bytes
// Class: GNOverloudGainReductionView

void FUN_00c05b10(void)

{
  int64_t lVar1;
  void*puVar2;
  void*puVar3;
  int64_t this_ptr;
  int64_t lVar4;
  bool bVar5;
  int64_t local_c8;
  uint8_t local_c0;
  int64_t local_b8;
  uint8_t local_b0;
  int64_t local_a8;
  uint8_t local_a0;
  int64_t local_98;
  uint8_t local_90;
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
  
  *(void*)(this_ptr + 0xb8) = 7;
  lVar1 = g_0276c138;
  if (g_0276c138 == 0) {
    lVar4 = *(int64_t *)(this_ptr + 0x90);
    if (lVar4 == 0) goto LAB_00c05b79;
  }
  else {
    FUN_00d50b00();
    lVar4 = *(int64_t *)(this_ptr + 0x90);
    if (lVar4 == lVar1) {
      FUN_00d50b20();
      goto LAB_00c05b79;
    }
  }
  *(int64_t *)(this_ptr + 0x90) = lVar1;
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
LAB_00c05b79:
  *(void*)(this_ptr + 0xa8) = 4;
  if ((g_028a5bf8 == (void*)0x0) || (g_028a5c01 == '\0')) {
    FUN_00e8cb50();
    if (g_028a5bf8 == (void*)0x0) {
      puVar3 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar3 = &g_0254ed40;
      puVar3[2] = 0;
      puVar3[3] = 0;
      puVar3[4] = 0;
      puVar3[5] = 0;
      FUN_00d500e0();
      bVar5 = g_028a5bf8 == (void*)0x0;
      g_028a5bf8 = puVar3;
      if (((bVar5) || (FUN_00d50b20(), lVar1 = g_0276c0a8, g_028a5bf8 != (void*)0x0)) &&
         (lVar1 = g_0276c0a8, g_028a5c00 == '\0')) {
        g_028a5c00 = '\x01';
        FUN_00e8cb90();
        lVar1 = g_0276c0a8;
      }
      g_0276c0a8 = lVar1;
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_0276c0b0;
      local_c0 = 1;
      local_c8 = lVar1;
      if (g_0276c0b0 != 0) {
        FUN_00d50b00();
      }
      local_b8 = lVar4;
      local_b0 = 1;
      FUN_00bf1030(&local_b8,&local_c8);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = g_0276c140;
      if (g_0276c140 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_0276c148;
      local_a8 = lVar1;
      local_a0 = 1;
      if (g_0276c148 != 0) {
        FUN_00d50b00();
      }
      local_98 = lVar4;
      local_90 = 1;
      FUN_00bf1030(&local_98,&local_a8);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = g_027bed58;
      if (g_027bed58 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_0276bfe0;
      local_88 = lVar1;
      local_80 = 1;
      if (g_0276bfe0 != 0) {
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
      lVar1 = g_0276c0b8;
      if (g_0276c0b8 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_0276c0c0;
      local_68 = lVar1;
      local_60 = 1;
      if (g_0276c0c0 != 0) {
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
      lVar1 = g_0276c0c8;
      if (g_0276c0c8 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_0276c0d0;
      local_48 = lVar1;
      local_40 = 1;
      if (g_0276c0d0 != 0) {
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
      g_028a5c01 = '\x01';
      FUN_00e8cb70();
    }
    else {
      g_028a5c01 = '\x01';
      FUN_00e8cb70();
    }
    puVar3 = *(void**)(this_ptr + 0xb0);
    if (puVar3 == g_028a5bf8) {
      return;
    }
  }
  else {
    puVar3 = *(void**)(this_ptr + 0xb0);
    if (puVar3 == g_028a5bf8) {
      return;
    }
  }
  puVar2 = g_028a5bf8;
  if (g_028a5bf8 != (void*)0x0) {
    FUN_00d50b00();
  }
  *(void**)(this_ptr + 0xb0) = puVar2;
  if (puVar3 == (void*)0x0) {
    return;
  }
  FUN_00d50b20();
  return;
}

