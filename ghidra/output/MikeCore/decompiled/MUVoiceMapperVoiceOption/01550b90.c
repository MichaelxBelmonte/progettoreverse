// Function: FUN_01550b90
// Address: 01550b90
// Size: 1809 bytes
// Class: MUVoiceMapperVoiceOption


/* WARNING: Removing unreachable block (ram,0x01550bec) */
/* WARNING: Removing unreachable block (ram,0x01550bf5) */
/* WARNING: Removing unreachable block (ram,0x01550c52) */
/* WARNING: Removing unreachable block (ram,0x01550c5b) */

longlong * FUN_01550b90(uint param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  longlong lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined4 *puVar7;
  longlong lVar8;
  undefined4 *puVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  char cVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  undefined8 *puVar17;
  ulonglong uVar18;
  undefined8 *puVar19;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  uint uVar20;
  undefined4 *puVar21;
  int iVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  undefined4 *puVar25;
  float fVar26;
  ulonglong local_a0;
  longlong local_58;
  char local_50;
  
  local_a0 = (ulonglong)param_1;
  puVar17 = (undefined8 *)(ulonglong)param_2;
  iVar14 = param_2 * 8 + -4;
  FUN_00c8e690();
  if ((local_50 == '\0') && (local_58 != 0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  lVar4 = *(longlong *)(local_58 + 0x10);
  FUN_00e83120();
  if ((local_50 == '\0') && (local_58 != 0)) {
    FUN_00d50b00();
  }
  puVar7 = (undefined4 *)FUN_00e83010();
  if (0 < (int)param_1) {
    puVar25 = *(undefined4 **)(*unaff_RSI + 0x10);
    lVar8 = (longlong)(int)(param_2 * 8 + -8);
    if ((int)param_2 < 3) {
      iVar15 = 2;
      uVar23 = 0;
      do {
        ___bzero();
        *puVar7 = puVar25[uVar23 * 2];
        puVar7[3] = puVar25[uVar23 * 2 + 1];
        puVar17 = (undefined8 *)(lVar4 + (longlong)iVar15 * 4);
        FUN_00e83640(lVar4,puVar17);
        fVar26 = (float)(**(code **)(DAT_02786500 + 0x10))();
        if (DAT_0239109c < fVar26) {
          (**(code **)(DAT_02786500 + 0x20))(DAT_0239109c / fVar26);
        }
        puVar17[-1] = *(undefined8 *)((longlong)puVar17 + lVar8 * 4 + -8);
        *(undefined8 *)((longlong)puVar17 + lVar8 * 4) = *puVar17;
        uVar23 = uVar23 + 1;
        iVar15 = iVar15 + iVar14;
      } while (local_a0 != uVar23);
    }
    else {
      puVar1 = (undefined8 *)(puVar7 + 2);
      iVar15 = param_2 - 1;
      uVar23 = (ulonglong)(param_2 - 3);
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
            puVar17 = (undefined8 *)(puVar7 + 4);
            if (iVar15 != 3) {
              puVar7[7] = puVar25[3];
              puVar9 = puVar25 + 4;
              puVar17 = (undefined8 *)(puVar7 + 6);
              puVar21 = puVar25 + 3;
              if (iVar15 != 4) {
                puVar7[9] = puVar25[4];
                puVar9 = puVar25 + 5;
                puVar17 = (undefined8 *)(puVar7 + 8);
                puVar21 = puVar25 + 4;
                if (iVar15 != 5) {
                  puVar7[0xb] = puVar25[5];
                  puVar9 = puVar25 + 6;
                  puVar17 = (undefined8 *)(puVar7 + 10);
                  puVar21 = puVar25 + 5;
                  if (iVar15 != 6) {
                    puVar7[0xd] = puVar25[6];
                    puVar9 = puVar25 + 7;
                    puVar17 = (undefined8 *)(puVar7 + 0xc);
                    puVar21 = puVar25 + 6;
                    if (iVar15 != 7) {
                      puVar7[0xf] = puVar25[7];
                      puVar9 = puVar25 + 8;
                      puVar17 = (undefined8 *)(puVar7 + 0xe);
                      puVar21 = puVar25 + 7;
                    }
                  }
                }
              }
            }
          }
          *(undefined4 *)((longlong)puVar17 + 0xc) = *puVar9;
          puVar17 = (undefined8 *)(lVar4 + (longlong)iVar22 * 4);
          FUN_00e83640(lVar4,puVar17);
          fVar26 = (float)(**(code **)(DAT_02786500 + 0x10))();
          if (DAT_0239109c < fVar26) {
            (**(code **)(DAT_02786500 + 0x20))(DAT_0239109c / fVar26);
          }
          puVar25 = puVar21 + 2;
          puVar17[-1] = *(undefined8 *)((longlong)puVar17 + lVar8 * 4 + -8);
          *(undefined8 *)((longlong)puVar17 + lVar8 * 4) = *puVar17;
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
                *(undefined4 *)((longlong)puVar19 + lVar11 * 2 + 4) =
                     *(undefined4 *)((longlong)puVar21 + lVar11);
                uVar16 = uVar16 + 1;
                lVar12 = lVar11 + 4;
                puVar6 = puVar17 + 1;
              } while (((byte)(((char)param_2 + '\a') - cVar13) & 7) << 2 != (int)lVar12);
              puVar25 = (undefined4 *)((longlong)puVar21 + lVar11);
              puVar19 = puVar17 + 1;
              puVar21 = (undefined4 *)((longlong)puVar21 + lVar12);
            }
            if (6 < uVar20) {
              iVar22 = iVar15 - uVar16;
              puVar17 = puVar19 + -1;
              do {
                puVar25 = puVar21;
                *(undefined4 *)((longlong)puVar17 + 0xc) = *puVar25;
                *(undefined4 *)((longlong)puVar17 + 0x14) = puVar25[1];
                *(undefined4 *)((longlong)puVar17 + 0x1c) = puVar25[2];
                *(undefined4 *)((longlong)puVar17 + 0x24) = puVar25[3];
                *(undefined4 *)((longlong)puVar17 + 0x2c) = puVar25[4];
                *(undefined4 *)((longlong)puVar17 + 0x34) = puVar25[5];
                *(undefined4 *)((longlong)puVar17 + 0x3c) = puVar25[6];
                *(undefined4 *)((longlong)puVar17 + 0x44) = puVar25[7];
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
              auVar2 = *(undefined1 (*) [16])(puVar25 + uVar10 + 1);
              auVar3 = *(undefined1 (*) [16])(puVar25 + uVar10 + 5);
              puVar7[uVar10 * 2 + 3] = auVar2._0_4_;
              uVar5 = extractps(auVar2,1);
              *(undefined8 *)(puVar7 + uVar10 * 2 + 5) = uVar5;
              uVar5 = extractps(auVar2,2);
              *(undefined8 *)(puVar7 + uVar10 * 2 + 7) = uVar5;
              uVar5 = extractps(auVar2,3);
              *(undefined8 *)(puVar7 + uVar10 * 2 + 9) = uVar5;
              puVar7[uVar10 * 2 + 0xb] = auVar3._0_4_;
              uVar5 = extractps(auVar3,1);
              *(undefined8 *)(puVar7 + uVar10 * 2 + 0xd) = uVar5;
              uVar5 = extractps(auVar3,2);
              *(undefined8 *)(puVar7 + uVar10 * 2 + 0xf) = uVar5;
              uVar5 = extractps(auVar3,3);
              *(undefined8 *)(puVar7 + uVar10 * 2 + 0x11) = uVar5;
              uVar10 = uVar10 + 8;
            } while (uVar24 != uVar10);
            puVar19 = puVar1 + uVar24;
            uVar16 = (int)uVar24 + 1;
            if (uVar23 + 1 != uVar24) goto LAB_01551120;
            puVar25 = puVar25 + uVar24;
            puVar17 = (undefined8 *)(puVar7 + uVar24 * 2);
          }
          *(undefined4 *)((longlong)puVar17 + 0xc) = *puVar21;
          puVar19 = (undefined8 *)(lVar4 + (longlong)(int)(iVar14 * (int)uVar18 | 2) * 4);
          puVar17 = puVar19;
          FUN_00e83640();
          fVar26 = (float)(**(code **)(DAT_02786500 + 0x10))();
          if (DAT_0239109c < fVar26) {
            (**(code **)(DAT_02786500 + 0x20))(DAT_0239109c / fVar26);
          }
          puVar25 = puVar25 + 2;
          puVar19[-1] = *(undefined8 *)((longlong)puVar19 + lVar8 * 4 + -8);
          *(undefined8 *)((longlong)puVar19 + lVar8 * 4) = *puVar19;
          uVar18 = uVar18 + 1;
        } while (uVar18 != local_a0);
      }
    }
  }
  FUN_00e83070();
  *unaff_RDI = local_58;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  if (local_58 != 0) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}


