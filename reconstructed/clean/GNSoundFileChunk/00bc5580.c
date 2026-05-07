// Function: FUN_00bc5580
// Address: 00bc5580
// Size: 1689 bytes
// Class: GNSoundFileChunk
// === GNSoundFileChunk properties ===
//                   _isLoop
//                   _beats
//                   _tonalKey
//                   _tonalGender
//                   _readBuffer
//                   _channelCount
//                   _bitsPerSample
//                   _isFloat
//                   _isLittleEndian


void FUN_00bc5580(void)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint32_t uVar6;
  int64_t *plVar7;
  void*puVar8;
  int64_t lVar9;
  int64_t lVar10;
  void*arg1;
  uint64_t uVar11;
  void*this_ptr;
  bool bVar12;
  uint64_t extraout_XMM0_Qa;
  uint64_t extraout_XMM0_Qa_00;
  uint64_t uVar13;
  double dVar14;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  char local_40;
  void*local_38;
  char local_30;
  
  if ((g_028a56f0 == 0) || (g_028a56f9 == '\0')) {
    FUN_00e8cb50();
    if (g_028a56f0 == 0) {
      FUN_00bc5e50();
      puVar8 = (void*)g_028a56d0;
      if ((void*)g_028a56d0 != local_38) {
        if (local_30 == '\0') {
          if (local_38 == (void*)0x0) {
            puVar8 = (void*)0x0;
          }
          else {
            FUN_00d50b00();
            puVar8 = local_38;
          }
        }
        else {
          local_30 = '\0';
          puVar8 = local_38;
        }
        bVar2 = g_028a56d0 != 0;
        g_028a56d0 = (int64_t)puVar8;
        if (bVar2) {
          FUN_00d50b20();
          puVar8 = local_38;
        }
      }
      if ((puVar8 != (void*)0x0) && (g_028a56d8 == '\0')) {
        g_028a56d8 = '\x01';
        FUN_00e8cb90();
        puVar8 = local_38;
      }
      if ((local_30 != '\0') && (puVar8 != (void*)0x0)) {
        FUN_00d50b20();
      }
      puVar8 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar8 = &g_02581c90;
      (*g_02581ca8)();
      if (g_028a56e0 == puVar8) {
        bVar1 = false;
        bVar2 = false;
      }
      else {
        bVar1 = true;
        bVar2 = true;
        bVar12 = g_028a56e0 != (void*)0x0;
        g_028a56e0 = puVar8;
        if (bVar12) {
          FUN_00d50b20();
        }
      }
      if (g_028a56e8 == '\0') {
        g_028a56e8 = '\x01';
        FUN_00e8cb90();
        bVar2 = bVar1;
      }
      if (!bVar2) {
        FUN_00d50b20();
      }
      local_58 = 0;
      local_50 = '\0';
      FUN_00da62d0(g_02391038,&local_58);
      puVar8 = (void*)g_028a56f0;
      if ((void*)g_028a56f0 != local_38) {
        if (local_30 == '\0') {
          if (local_38 == (void*)0x0) {
            puVar8 = (void*)0x0;
          }
          else {
            FUN_00d50b00();
            puVar8 = local_38;
          }
        }
        else {
          local_30 = '\0';
          puVar8 = local_38;
        }
        bVar2 = g_028a56f0 != 0;
        g_028a56f0 = (int64_t)puVar8;
        if (bVar2) {
          FUN_00d50b20();
          puVar8 = local_38;
        }
      }
      if ((puVar8 != (void*)0x0) && (g_028a56f8 == '\0')) {
        g_028a56f8 = '\x01';
        FUN_00e8cb90();
        puVar8 = local_38;
      }
      if ((local_30 != '\0') && (puVar8 != (void*)0x0)) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      g_028a56f9 = '\x01';
      FUN_00e8cb70();
    }
    else {
      g_028a56f9 = '\x01';
      FUN_00e8cb70();
    }
  }
  if ((g_028a5730 == 0) || (g_028a5739 == '\0')) {
    FUN_00e8cb50();
    if (g_028a5730 == 0) {
      puVar8 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar8 = &g_02572358;
      (*g_02572370)();
      if (g_028a5700 == puVar8) {
        bVar1 = false;
        bVar2 = false;
      }
      else {
        bVar1 = true;
        bVar2 = true;
        bVar12 = g_028a5700 != (void*)0x0;
        g_028a5700 = puVar8;
        if (bVar12) {
          FUN_00d50b20();
        }
      }
      if (g_028a5708 == '\0') {
        g_028a5708 = '\x01';
        FUN_00e8cb90();
        bVar2 = bVar1;
      }
      if (!bVar2) {
        FUN_00d50b20();
      }
      plVar7 = (int64_t *)FUN_00e8fc40();
      FUN_00d4ff40();
      *plVar7 = (int64_t)&g_02573318;
      (*g_02573330)();
      if (g_028a5710 == plVar7) {
        bVar1 = false;
        bVar2 = false;
      }
      else {
        bVar1 = true;
        bVar2 = true;
        bVar12 = g_028a5710 != (int64_t *)0x0;
        g_028a5710 = plVar7;
        if (bVar12) {
          FUN_00d50b20();
        }
      }
      if (g_028a5718 == '\0') {
        g_028a5718 = '\x01';
        FUN_00e8cb90();
        bVar2 = bVar1;
      }
      if (!bVar2) {
        FUN_00d50b20();
      }
      puVar8 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar8 = &g_02581c90;
      (*g_02581ca8)();
      if (g_028a5720 == puVar8) {
        bVar1 = false;
        bVar2 = false;
      }
      else {
        bVar1 = true;
        bVar2 = true;
        bVar12 = g_028a5720 != (void*)0x0;
        g_028a5720 = puVar8;
        if (bVar12) {
          FUN_00d50b20();
        }
      }
      if (g_028a5728 == '\0') {
        g_028a5728 = '\x01';
        FUN_00e8cb90();
        bVar2 = bVar1;
      }
      if (!bVar2) {
        FUN_00d50b20();
      }
      local_48 = 0;
      local_40 = '\0';
      FUN_00da62d0(g_02391038,&local_48);
      puVar8 = (void*)g_028a5730;
      if ((void*)g_028a5730 != local_38) {
        if (local_30 == '\0') {
          if (local_38 == (void*)0x0) {
            puVar8 = (void*)0x0;
          }
          else {
            FUN_00d50b00();
            puVar8 = local_38;
          }
        }
        else {
          local_30 = '\0';
          puVar8 = local_38;
        }
        bVar2 = g_028a5730 != 0;
        g_028a5730 = (int64_t)puVar8;
        if (bVar2) {
          FUN_00d50b20();
          puVar8 = local_38;
        }
      }
      if ((puVar8 != (void*)0x0) && (g_028a5738 == '\0')) {
        g_028a5738 = '\x01';
        FUN_00e8cb90();
        puVar8 = local_38;
      }
      if ((local_30 != '\0') && (puVar8 != (void*)0x0)) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      g_028a5739 = '\x01';
      FUN_00e8cb70();
    }
    else {
      g_028a5739 = '\x01';
      FUN_00e8cb70();
    }
  }
  puVar8 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar8 = &g_0254a198;
  puVar8[2] = 0;
  puVar8[3] = 0;
  puVar8[4] = 0;
  FUN_00d500e0();
  puVar8[2] = *arg1;
  iVar3 = FUN_00b7a700();
  uVar13 = extraout_XMM0_Qa;
  if (g_028024fc == 0) {
    iVar4 = FUN_00e83090();
    iVar5 = iVar4 + 3;
    if (-1 < iVar4) {
      iVar5 = iVar4;
    }
    g_028024fc = iVar5 >> 2;
    uVar13 = extraout_XMM0_Qa_00;
  }
  *(int *)(puVar8 + 4) = g_028024fc / iVar3;
  if (1 < iVar3) {
    uVar6 = FUN_00e7d930(uVar13,1);
    *(void*)(puVar8 + 4) = uVar6;
  }
  dVar14 = (double)FUN_00e7d6f0();
  lVar9 = FUN_00e7dae0(((dVar14 - g_02765b70) - g_028024d8) * g_02411988);
  lVar10 = 0;
  if (0 < lVar9) {
    lVar10 = lVar9;
  }
  uVar11 = (uint64_t)(lVar10 - lVar9 != 0);
  lVar9 = (((lVar10 - lVar9) - uVar11) / 0xffffffff + uVar11) * 0xffffffff + lVar9;
  lVar10 = 0xffffffff;
  if (lVar9 < 0xffffffff) {
    lVar10 = lVar9;
  }
  *(int *)((int64_t)puVar8 + 0x24) =
       (int)lVar9 + (int)((uint64_t)((lVar9 + 0xfffffffe) - lVar10) / 0xffffffff);
  (**(code **)(*g_028a5710 + 0x368))();
  local_30 = '\0';
  local_38 = puVar8;
  FUN_00d21140();
  if ((local_30 != '\0') && (local_38 != (void*)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(*g_028a5710 + 0x378))();
  FUN_00bc6940();
  *this_ptr = puVar8;
  *(void*)(this_ptr + 1) = 1;
  return;
}

