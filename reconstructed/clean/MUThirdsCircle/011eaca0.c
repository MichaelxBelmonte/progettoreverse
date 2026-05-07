// Function: FUN_011eaca0
// Address: 011eaca0
// Size: 1080 bytes
// Class: MUThirdsCircle
// === MUThirdsCircle properties ===
//                   _thirdsCircleValues
//                   _chordExtension
//                   _fundamentalPitchClass
//                   _matchQuality


void FUN_011eaca0(void)

{
  uint uVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t lVar5;
  code *pcVar6;
  uint64_t uVar7;
  void*puVar8;
  int64_t lVar9;
  int64_t lVar10;
  uint64_t uVar11;
  uint64_t uVar12;
  uint uVar13;
  uint uVar14;
  int64_t this_ptr;
  uint uVar15;
  uint64_t uVar16;
  int64_t local_70;
  char local_68;
  
  uVar14 = *(uint *)(*(int64_t *)(this_ptr + 0x160) + 0xc);
  uVar7 = (uint64_t)uVar14;
  uVar1 = *(uint *)(*(int64_t *)(this_ptr + 0x1d0) + 0x24);
  puVar8 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar8 = &g_02572358;
  pcVar6 = g_02572370;
  (*g_02572370)();
  lVar2 = *(int64_t *)(this_ptr + 0x280);
  *(void**)(this_ptr + 0x280) = puVar8;
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  FUN_00d21370();
  if (0 < (int)uVar14) {
    if ((int)uVar1 < 1) {
      do {
        puVar8 = (void*)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar8 = &g_02572358;
        (*pcVar6)();
        FUN_00d21370();
        FUN_00d21140();
        FUN_00d50b20();
        uVar14 = uVar14 - 1;
      } while (uVar14 != 0);
    }
    else {
      uVar13 = 0;
      do {
        puVar8 = (void*)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar8 = &g_02572358;
        (*pcVar6)();
        FUN_00d21370();
        FUN_00d21140();
        uVar15 = 0;
        do {
          FUN_0181de80();
          if (local_68 == '\0') {
            if (local_70 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_68 = '\0';
          }
          FUN_00d21140();
          if (local_70 != 0) {
            FUN_00d50b20();
          }
          if ((local_68 != '\0') && (local_70 != 0)) {
            FUN_00d50b20();
          }
          uVar15 = uVar15 + 1;
        } while (uVar1 != uVar15);
        if (puVar8 != (void*)0x0) {
          FUN_00d50b20();
        }
        uVar13 = uVar13 + 1;
      } while (uVar13 != uVar14);
    }
    if ((int)uVar1 < 1) {
      uVar16 = 0;
      do {
        lVar2 = *(int64_t *)(*(int64_t *)(*(int64_t *)(this_ptr + 0x160) + 0x10) + uVar16 * 8);
        if (lVar2 != 0) {
          FUN_00d50b00();
        }
        lVar3 = *(int64_t *)(*(int64_t *)(*(int64_t *)(this_ptr + 0x280) + 0x10) + uVar16 * 8);
        if (lVar3 != 0) {
          FUN_00d50b00();
        }
        FUN_015c6b60();
        FUN_015c6310();
        if (lVar3 != 0) {
          FUN_00d50b20();
        }
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        uVar16 = uVar16 + 1;
      } while (uVar7 != uVar16);
    }
    else {
      uVar16 = 0;
      do {
        lVar2 = *(int64_t *)(*(int64_t *)(*(int64_t *)(this_ptr + 0x160) + 0x10) + uVar16 * 8);
        if (lVar2 != 0) {
          FUN_00d50b00();
        }
        lVar3 = *(int64_t *)(*(int64_t *)(*(int64_t *)(this_ptr + 0x280) + 0x10) + uVar16 * 8);
        if (lVar3 != 0) {
          FUN_00d50b00();
        }
        lVar9 = FUN_015c6b60();
        lVar10 = FUN_015c6310();
        lVar4 = *(int64_t *)(lVar3 + 0x10);
        if ((uint64_t)uVar1 - 1 < 3) {
          uVar11 = 0;
        }
        else {
          uVar11 = 0;
          do {
            lVar5 = *(int64_t *)(lVar4 + uVar11 * 8);
            *(void*)(lVar5 + 0x14) = *(void*)(lVar9 + uVar11 * 4);
            *(void*)(lVar5 + 0x1c) = *(void*)(lVar10 + uVar11 * 4);
            lVar5 = *(int64_t *)(lVar4 + 8 + uVar11 * 8);
            *(void*)(lVar5 + 0x14) = *(void*)(lVar9 + 4 + uVar11 * 4);
            *(void*)(lVar5 + 0x1c) = *(void*)(lVar10 + 4 + uVar11 * 4);
            lVar5 = *(int64_t *)(lVar4 + 0x10 + uVar11 * 8);
            *(void*)(lVar5 + 0x14) = *(void*)(lVar9 + 8 + uVar11 * 4);
            *(void*)(lVar5 + 0x1c) = *(void*)(lVar10 + 8 + uVar11 * 4);
            lVar5 = *(int64_t *)(lVar4 + 0x18 + uVar11 * 8);
            *(void*)(lVar5 + 0x14) = *(void*)(lVar9 + 0xc + uVar11 * 4);
            *(void*)(lVar5 + 0x1c) = *(void*)(lVar10 + 0xc + uVar11 * 4);
            uVar11 = uVar11 + 4;
          } while ((uVar1 & 0xfffffffc) != uVar11);
        }
        if ((uint64_t)(uVar1 & 3) != 0) {
          uVar12 = 0;
          do {
            lVar5 = *(int64_t *)(lVar4 + uVar11 * 8 + uVar12 * 8);
            *(void*)(lVar5 + 0x14) = *(void*)(lVar9 + uVar11 * 4 + uVar12 * 4);
            *(void*)(lVar5 + 0x1c) = *(void*)(lVar10 + uVar11 * 4 + uVar12 * 4);
            uVar12 = uVar12 + 1;
          } while ((uVar1 & 3) != uVar12);
        }
        if (lVar3 != 0) {
          FUN_00d50b20();
        }
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        uVar16 = uVar16 + 1;
      } while (uVar16 != uVar7);
    }
  }
  return;
}

