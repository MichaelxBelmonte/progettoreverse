// Function: FUN_00bc61d0
// Address: 00bc61d0
// Size: 1096 bytes
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


void FUN_00bc61d0(void)

{
  uint8_t auVar1 [16];
  bool bVar2;
  code *pcVar3;
  int iVar4;
  void*puVar5;
  void*puVar6;
  int64_t lVar7;
  int64_t lVar8;
  uint64_t uVar9;
  double dVar10;
  int local_58;
  
  puVar5 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar5 = &g_02572358;
  pcVar3 = g_02572370;
  (*g_02572370)();
  do {
    iVar4 = FUN_00e31390();
    if (iVar4 != 0) break;
    puVar6 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar6 = &g_02572358;
    (*pcVar3)();
    (**(code **)(*g_028a5710 + 0x368))();
    lVar8 = g_028a5700;
    if (g_028a5700 != 0) {
      FUN_00d50b00();
    }
    FUN_00d243f0();
    if (lVar8 != 0) {
      FUN_00d50b20();
    }
    if (puVar5 != (void*)0x0) {
      local_58 = -1;
      while (local_58 = local_58 + 1, local_58 < *(int *)((int64_t)puVar5 + 0xc)) {
        FUN_00d21140();
      }
      FUN_00bcdaf0();
    }
    (**(code **)(*g_028a5710 + 0x378))();
    dVar10 = (double)FUN_00e7d6f0();
    lVar7 = FUN_00e7dae0(((dVar10 - g_02765b70) - g_028024d8) * g_02411988);
    lVar8 = 0;
    if (0 < lVar7) {
      lVar8 = lVar7;
    }
    uVar9 = (uint64_t)(lVar8 - lVar7 != 0);
    lVar7 = (((lVar8 - lVar7) - uVar9) / 0xffffffff + uVar9) * 0xffffffff + lVar7;
    lVar8 = 0xffffffff;
    if (lVar7 < 0xffffffff) {
      lVar8 = lVar7;
    }
    auVar1._8_8_ = 0;
    auVar1._0_8_ = (lVar7 + 0xfffffffe) - lVar8;
    FUN_00e7dae0((dVar10 - g_028024d8) * g_02411988,
                 SUB168(auVar1 * ZEXT816(0x8000000080000001),8));
    if (puVar5 == (void*)0x0) {
LAB_00bc670c:
      FUN_00d216c0();
      FUN_00d216c0();
      FUN_00e8f8c0();
      bVar2 = true;
      FUN_00dee5a0(g_023934c8);
    }
    else {
      local_58 = -1;
      do {
        do {
          local_58 = local_58 + 1;
          if (*(int *)((int64_t)puVar5 + 0xc) <= local_58) {
            FUN_00bcdaf0();
            goto LAB_00bc670c;
          }
          iVar4 = FUN_00b88630();
        } while (iVar4 == 10);
        FUN_00bc7190();
        iVar4 = FUN_00e31390();
      } while (iVar4 == 0);
      FUN_00bcdaf0();
      bVar2 = false;
    }
    if (puVar6 != (void*)0x0) {
      FUN_00d50b20();
    }
  } while (bVar2);
  if (puVar5 != (void*)0x0) {
    FUN_00d50b20();
  }
  return;
}

