// Function: FUN_01550b90
// Address: 01550b90
// Size: 1809 bytes
// Class: MUVoiceMapperVoiceOption
// === MUVoiceMapperVoiceOption properties ===
//                   _transpositionInterval
//                   _totalPitchDelta
//                   _totalMoveDelta
//                   _totalPitchCount
//                   _totalMoveCount
//                   _resetOnly


int64_t * FUN_01550b90(uint param_1,uint param_2)

{
  void*puVar1;
  uint8_t auVar2 [16];
  uint8_t auVar3 [16];
  int64_t lVar4;
  uint64_t uVar5;
  void*puVar6;
  void*puVar7;
  int64_t lVar8;
  void*puVar9;
  uint64_t uVar10;
  int64_t lVar11;
  int64_t lVar12;
  char cVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  void*puVar17;
  uint64_t uVar18;
  void*puVar19;
  int64_t *arg1;
  int64_t *this_ptr;
  uint uVar20;
  void*puVar21;
  int iVar22;
  uint64_t uVar23;
  uint64_t uVar24;
  void*puVar25;
  float fVar26;
  uint64_t local_a0;
  int64_t local_58;
  char local_50;
  
  local_a0 = (uint64_t)param_1;
  puVar17 = (void*)(uint64_t)param_2;
  iVar14 = param_2 * 8 + -4;
  FUN_00c8e690();
  if ((local_50 == '\0') && (local_58 != 0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  lVar4 = *(int64_t *)(local_58 + 0x10);
  GNFastFourierTransformer_create();
  if ((local_50 == '\0') && (local_58 != 0)) {
    FUN_00d50b00();
  }
  puVar7 = (void*)FUN_00e83010();
  if (0 < (int)param_1) {
    puVar25 = *(void**)(*arg1 + 0x10);
    lVar8 = (int64_t)(int)(param_2 * 8 + -8);
    if ((int)param_2 < 3) {
      iVar15 = 2;
      uVar23 = 0;
      do {
        ___bzero();
        *puVar7 = puVar25[uVar23 * 2];
        puVar7[3] = puVar25[uVar23 * 2 + 1];
        puVar17 = (void*)(lVar4 + (int64_t)iVar15 * 4);
        FUN_00e83640(lVar4,puVar17);
        fVar26 = (float)(**(code **)(g_02786500 + 0x10))();
        if (g_0239109c < fVar26) {
          (**(code **)(g_02786500 + 0x20))(g_0239109c / fVar26);
        }
        puVar17[-1] = *(void*)((int64_t)puVar17 + lVar8 * 4 + -8);
        *(void*)((int64_t)puVar17 + lVar8 * 4) = *puVar17;
        uVar23 = uVar23 + 1;
        iVar15 = iVar15 + iVar14;
      } while (local_a0 != uVar23);
    }
    else {
      puVar1 = (void*)(puVar7 + 2);
      iVar15 = param_2 - 1;
      uVar23 = (uint64_t)(param_2 - 3);
      if (param_2 - 3 < 7) {
        iVar22 = 2;
        do {
          ___bzero();
          puVar21 = puVar25 + 2;
          *puVar7 = *puVar25;
          puVar7[3] = puVar25[1];
          if (iVar15 == 2) {
            puVar9 = puVar21;
            puVar17 = puVar1;
            puVar21 = puVar25 + 1;
          }
          else {
            puVar7[5] = puVar25[2];
            puVar9 = puVar25 + 3;
            puVar17 = (void*)(puVar7 + 4);
            if (iVar15 != 3) {
              puVar7[7] = puVar25[3];
              puVar9 = puVar25 + 4;
              puVar17 = (void*)(puVar7 + 6);
              puVar21 = puVar25 + 3;
              if (iVar15 != 4) {
                puVar7[9] = puVar25[4];
                puVar9 = puVar25 + 5;
                puVar17 = (void*)(puVar7 + 8);
                puVar21 = puVar25 + 4;
                if (iVar15 != 5) {
                  puVar7[0xb] = puVar25[5];
                  puVar9 = puVar25 + 6;
                  puVar17 = (void*)(puVar7 + 10);
                  puVar21 = puVar25 + 5;
                  if (iVar15 != 6) {
                    puVar7[0xd] = puVar25[6];
                    puVar9 = puVar25 + 7;
                    puVar17 = (void*)(puVar7 + 0xc);
                    puVar21 = puVar25 + 6;
                    if (iVar15 != 7) {
                      puVar7[0xf] = puVar25[7];
                      puVar9 = puVar25 + 8;
                      puVar17 = (void*)(puVar7 + 0xe);
                      puVar21 = puVar25 + 7;
                    }
                  }
                }
              }
            }
          }
          *(void*)((int64_t)puVar17 + 0xc) = *puVar9;
          puVar17 = (void*)(lVar4 + (int64_t)iVar22 * 4);
          FUN_00e83640(lVar4,puVar17);
          fVar26 = (float)(**(code **)(g_02786500 + 0x10))();
          if (g_0239109c < fVar26) {
            (**(code **)(g_02786500 + 0x20))(g_0239109c / fVar26);
          }
          puVar25 = puVar21 + 2;
          puVar17[-1] = *(void*)((int64_t)puVar17 + lVar8 * 4 + -8);
          *(void*)((int64_t)puVar17 + lVar8 * 4) = *puVar17;
          iVar22 = iVar22 + iVar14;
          local_a0 = local_a0 - 1;
        } while (local_a0 != 0);
      }
      else {
        uVar24 = uVar23 + 1 & 0xfffffffffffffff8;
        uVar18 = 0;
        do {
          ___bzero();
          *puVar7 = *puVar25;
          puVar21 = puVar25 + 1;
          if ((puVar7 + 3 < puVar25 + uVar23 + 2) && (puVar21 < puVar7 + uVar23 * 2 + 4)) {
            puVar19 = puVar1;
            uVar16 = 1;
LAB_01551120:
            uVar20 = (param_2 - 2) - uVar16;
            if ((~uVar16 + param_2 & 7) != 0) {
              cVar13 = (char)uVar16;
              lVar12 = 0;
              puVar6 = puVar19;
              do {
                puVar17 = puVar6;
                lVar11 = lVar12;
                *(void*)((int64_t)puVar19 + lVar11 * 2 + 4) =
                     *(void*)((int64_t)puVar21 + lVar11);
                uVar16 = uVar16 + 1;
                lVar12 = lVar11 + 4;
                puVar6 = puVar17 + 1;
              } while (((byte)(((char)param_2 + '\a') - cVar13) & 7) << 2 != (int)lVar12);
              puVar25 = (void*)((int64_t)puVar21 + lVar11);
              puVar19 = puVar17 + 1;
              puVar21 = (void*)((int64_t)puVar21 + lVar12);
            }
            if (6 < uVar20) {
              iVar22 = iVar15 - uVar16;
              puVar17 = puVar19 + -1;
              do {
                puVar25 = puVar21;
                *(void*)((int64_t)puVar17 + 0xc) = *puVar25;
                *(void*)((int64_t)puVar17 + 0x14) = puVar25[1];
                *(void*)((int64_t)puVar17 + 0x1c) = puVar25[2];
                *(void*)((int64_t)puVar17 + 0x24) = puVar25[3];
                *(void*)((int64_t)puVar17 + 0x2c) = puVar25[4];
                *(void*)((int64_t)puVar17 + 0x34) = puVar25[5];
                *(void*)((int64_t)puVar17 + 0x3c) = puVar25[6];
                *(void*)((int64_t)puVar17 + 0x44) = puVar25[7];
                puVar21 = puVar25 + 8;
                puVar17 = puVar17 + 8;
                iVar22 = iVar22 + -8;
              } while (iVar22 != 0);
              puVar25 = puVar25 + 7;
            }
          }
          else {
            puVar21 = puVar21 + uVar24;
            uVar10 = 0;
            do {
              auVar2 = *(uint8_t (*) [16])(puVar25 + uVar10 + 1);
              auVar3 = *(uint8_t (*) [16])(puVar25 + uVar10 + 5);
              puVar7[uVar10 * 2 + 3] = auVar2._0_4_;
              uVar5 = extractps(auVar2,1);
              *(void*)(puVar7 + uVar10 * 2 + 5) = uVar5;
              uVar5 = extractps(auVar2,2);
              *(void*)(puVar7 + uVar10 * 2 + 7) = uVar5;
              uVar5 = extractps(auVar2,3);
              *(void*)(puVar7 + uVar10 * 2 + 9) = uVar5;
              puVar7[uVar10 * 2 + 0xb] = auVar3._0_4_;
              uVar5 = extractps(auVar3,1);
              *(void*)(puVar7 + uVar10 * 2 + 0xd) = uVar5;
              uVar5 = extractps(auVar3,2);
              *(void*)(puVar7 + uVar10 * 2 + 0xf) = uVar5;
              uVar5 = extractps(auVar3,3);
              *(void*)(puVar7 + uVar10 * 2 + 0x11) = uVar5;
              uVar10 = uVar10 + 8;
            } while (uVar24 != uVar10);
            puVar19 = puVar1 + uVar24;
            uVar16 = (int)uVar24 + 1;
            if (uVar23 + 1 != uVar24) goto LAB_01551120;
            puVar25 = puVar25 + uVar24;
            puVar17 = (void*)(puVar7 + uVar24 * 2);
          }
          *(void*)((int64_t)puVar17 + 0xc) = *puVar21;
          puVar19 = (void*)(lVar4 + (int64_t)(int)(iVar14 * (int)uVar18 | 2) * 4);
          puVar17 = puVar19;
          FUN_00e83640();
          fVar26 = (float)(**(code **)(g_02786500 + 0x10))();
          if (g_0239109c < fVar26) {
            (**(code **)(g_02786500 + 0x20))(g_0239109c / fVar26);
          }
          puVar25 = puVar25 + 2;
          puVar19[-1] = *(void*)((int64_t)puVar19 + lVar8 * 4 + -8);
          *(void*)((int64_t)puVar19 + lVar8 * 4) = *puVar19;
          uVar18 = uVar18 + 1;
        } while (uVar18 != local_a0);
      }
    }
  }
  FUN_00e83070();
  *this_ptr = local_58;
  *(void*)(this_ptr + 1) = 1;
  if (local_58 != 0) {
    FUN_00d50b20();
  }
  return this_ptr;
}

