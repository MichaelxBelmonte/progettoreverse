// Function: FUN_018daf60
// Address: 018daf60
// Size: 3485 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x018db90b) */
/* WARNING: Removing unreachable block (ram,0x018db914) */
/* WARNING: Removing unreachable block (ram,0x018db630) */
/* WARNING: Removing unreachable block (ram,0x018db639) */
/* WARNING: Removing unreachable block (ram,0x018db93b) */
/* WARNING: Removing unreachable block (ram,0x018db944) */
/* WARNING: Removing unreachable block (ram,0x018dba05) */
/* WARNING: Removing unreachable block (ram,0x018dba0e) */
/* WARNING: Removing unreachable block (ram,0x018dbd16) */
/* WARNING: Removing unreachable block (ram,0x018dbd23) */
/* WARNING: Removing unreachable block (ram,0x018db12a) */
/* WARNING: Removing unreachable block (ram,0x018db133) */
/* WARNING: Removing unreachable block (ram,0x018dbb8e) */
/* WARNING: Removing unreachable block (ram,0x018dbb97) */

undefined8 * FUN_018daf60(char param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  float fVar1;
  uint uVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  uint uVar6;
  bool bVar7;
  bool bVar8;
  byte bVar9;
  char cVar10;
  int iVar11;
  int iVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  int iVar16;
  ulonglong uVar17;
  longlong lVar18;
  longlong lVar19;
  longlong *unaff_RSI;
  longlong lVar20;
  longlong lVar21;
  undefined8 *unaff_RDI;
  bool bVar22;
  float fVar23;
  longlong *local_res8;
  longlong *local_res10;
  undefined8 *local_170;
  undefined1 local_168;
  undefined8 *local_160;
  undefined1 local_158;
  undefined8 *local_150;
  undefined1 local_148;
  ulonglong local_140;
  ulonglong local_138;
  code *local_130;
  undefined *local_128;
  ulonglong local_120;
  undefined *local_118;
  code *local_110;
  ulonglong local_108;
  undefined8 *local_100;
  char local_f8;
  longlong local_f0;
  char local_e8;
  longlong local_e0;
  char local_d8;
  undefined8 *local_d0;
  char local_c8;
  undefined4 local_bc;
  undefined8 *local_b8;
  int local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  longlong local_98;
  undefined8 *local_90;
  float local_84;
  undefined8 *local_60;
  undefined8 *local_58;
  undefined8 *local_48;
  char local_40;
  
  local_bc = param_3;
  local_a0 = param_4;
  local_9c = param_2;
  FUN_018d8790();
  if ((local_40 == '\0') && (local_48 != (undefined8 *)0x0)) {
    FUN_00d50b00();
  }
  local_108 = (ulonglong)*(uint *)((longlong)local_48 + 0xc);
  puVar13 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  local_128 = &DAT_02572358;
  *puVar13 = &DAT_02572358;
  local_130 = DAT_02572370;
  (*DAT_02572370)();
  local_b8 = local_48;
  local_90 = puVar13;
  if ((int)local_108 < 1) {
    local_84 = DAT_02391078;
    bVar7 = false;
    local_60 = (undefined8 *)0x0;
    bVar8 = false;
    local_58 = (undefined8 *)0x0;
  }
  else {
    local_110 = DAT_025683d8;
    bVar9 = (byte)local_a0;
    local_140 = 0xc;
    if (param_1 != '\0') {
      local_140 = 1;
    }
    local_84 = DAT_02391078;
    uVar17 = 0;
    local_118 = &DAT_025683c0;
    local_58 = (undefined8 *)0x0;
    bVar8 = false;
    local_60 = (undefined8 *)0x0;
    bVar7 = false;
    do {
      lVar19 = *(longlong *)(local_b8[2] + uVar17 * 8);
      local_138 = uVar17;
      if (lVar19 != 0) {
        FUN_00d50b00();
      }
      uVar17 = 0;
      local_98 = lVar19;
      do {
        puVar13 = local_48;
        if (*(char *)(*(longlong *)(*unaff_RSI + 0x10) + uVar17) == '\0') {
          uVar17 = uVar17 + 1;
        }
        else {
          FUN_00c8e690();
          if ((local_40 == '\0') && (local_48 != (undefined8 *)0x0)) {
            FUN_00d50b00();
          }
          FUN_00c92170();
          lVar20 = *(longlong *)(*unaff_RSI + 0x10);
          puVar3 = (undefined1 *)local_48[2];
          iVar12 = (int)uVar17;
          *puVar3 = *(undefined1 *)
                     (lVar20 + (ulonglong)(uint)(iVar12 + (int)((uVar17 & 0xffffffff) / 0xc) * -0xc)
                     );
          local_120 = uVar17 + 1;
          puVar3[1] = *(undefined1 *)
                       (lVar20 + (ulonglong)
                                 (uint)((int)local_120 +
                                       (int)((local_120 & 0xffffffff) / 0xc) * -0xc));
          puVar3[2] = *(undefined1 *)
                       (lVar20 + (ulonglong)(((iVar12 + 2U) / 0xc) * -0xc + iVar12 + 2));
          puVar3[3] = *(undefined1 *)
                       (lVar20 + (ulonglong)(((iVar12 + 3U) / 0xc) * -0xc + iVar12 + 3));
          puVar3[4] = *(undefined1 *)
                       (lVar20 + (ulonglong)(((iVar12 + 4U) / 0xc) * -0xc + iVar12 + 4));
          puVar3[5] = *(undefined1 *)
                       (lVar20 + (ulonglong)(((iVar12 + 5U) / 0xc) * -0xc + iVar12 + 5));
          puVar3[6] = *(undefined1 *)
                       (lVar20 + (ulonglong)(((iVar12 + 6U) / 0xc) * -0xc + iVar12 + 6));
          puVar3[7] = *(undefined1 *)
                       (lVar20 + (ulonglong)(((iVar12 + 7U) / 0xc) * -0xc + iVar12 + 7));
          puVar3[8] = *(undefined1 *)
                       (lVar20 + (ulonglong)(((iVar12 + 8U) / 0xc) * -0xc + iVar12 + 8));
          puVar3[9] = *(undefined1 *)
                       (lVar20 + (ulonglong)(((iVar12 + 9U) / 0xc) * -0xc + iVar12 + 9));
          puVar3[10] = *(undefined1 *)
                        (lVar20 + (ulonglong)(((iVar12 + 10U) / 0xc) * -0xc + iVar12 + 10));
          puVar3[0xb] = *(undefined1 *)
                         (lVar20 + (ulonglong)(((iVar12 + 0xbU) / 0xc) * -0xc + iVar12 + 0xb));
          if ((char)local_bc == '\0') {
LAB_018db357:
          }
          else {
            puVar14 = (undefined8 *)FUN_00e8fc40();
            FUN_00d4ff40();
            *puVar14 = local_118;
            (*local_110)();
            FUN_00c92170();
            FUN_00c92160();
            if ((bVar8) && (local_58 != (undefined8 *)0x0)) {
              FUN_00d50b20();
              local_58 = puVar14;
              bVar8 = true;
              goto LAB_018db357;
            }
            local_58 = puVar14;
            bVar8 = true;
          }
          puVar14 = local_60;
          bVar22 = bVar7;
          if ((char)local_a0 != '\0') {
            puVar14 = (undefined8 *)FUN_00e8fc40();
            FUN_00d4ff40();
            *puVar14 = local_118;
            (*local_110)();
            FUN_00c92170();
            FUN_00c92160();
            bVar22 = true;
            if ((bVar7) && (local_60 != (undefined8 *)0x0)) {
              FUN_00d50b20();
            }
          }
          local_a4 = 0;
          local_168 = 0;
          local_158 = 0;
          local_170 = local_58;
          local_160 = puVar14;
          iVar11 = FUN_018e1f10(&local_160,&local_170,&local_a4);
          fVar23 = local_84;
          if ((-1 < iVar11) && (((bVar9 ^ 1) & iVar11 == 0) == 0)) {
            local_48 = (undefined8 *)FUN_00e8fc40();
            FUN_00d4ff40();
            *local_48 = &DAT_02614f50;
            local_48[2] = 0;
            local_48[3] = 0;
            local_48[4] = 0;
            local_48[5] = 0;
            local_48[6] = 0;
            FUN_00d500e0();
            lVar20 = local_48[2];
            if (lVar20 != lVar19) {
              if (local_98 != 0) {
                FUN_00d50b00();
              }
              local_48[2] = local_98;
              if (lVar20 != 0) {
                FUN_00d50b20();
              }
            }
            *(int *)(local_48 + 3) = iVar12;
            *(undefined4 *)((longlong)local_48 + 0x1c) = local_9c;
            *(int *)(local_48 + 4) = iVar11;
            puVar4 = (undefined8 *)local_48[5];
            if (puVar4 != local_58) {
              if (local_58 != (undefined8 *)0x0) {
                FUN_00d50b00();
              }
              local_48[5] = local_58;
              if (puVar4 != (undefined8 *)0x0) {
                FUN_00d50b20();
              }
            }
            puVar4 = (undefined8 *)local_48[6];
            if (puVar4 != puVar14) {
              if (puVar14 != (undefined8 *)0x0) {
                FUN_00d50b00();
              }
              local_48[6] = puVar14;
              if (puVar4 != (undefined8 *)0x0) {
                FUN_00d50b20();
              }
            }
            *(undefined4 *)((longlong)local_48 + 0x24) = 0;
            if (puVar14 == (undefined8 *)0x0) {
              fVar23 = 0.0;
            }
            else {
              uVar2 = *(uint *)(puVar14 + 3);
              uVar6 = uVar2;
              if ((int)uVar2 < 0) {
                uVar6 = uVar2 + 3;
              }
              if ((((6 < uVar2 + 3) && (lVar19 = *local_res8, lVar19 != 0)) &&
                  (iVar11 = *(int *)(lVar19 + 0x18), 6 < iVar11 + 3U)) &&
                 ((3 < (int)uVar2 && (3 < iVar11)))) {
                uVar17 = (ulonglong)(uint)((int)uVar6 >> 2);
                do {
                  iVar16 = iVar11 + 3;
                  if (-1 < iVar11) {
                    iVar16 = iVar11;
                  }
                  if (3 < iVar11) {
                    iVar11 = *(int *)(puVar14[2] + (uVar17 - 1 & 0xffffffff) * 4);
                    iVar11 = iVar11 + (((uint)(iVar11 / 6 + (iVar11 >> 0x1f)) >> 1) -
                                      (iVar11 >> 0x1f)) * -0xc + iVar12;
                    lVar20 = 0;
                    do {
                      if (*(int *)(*(longlong *)(lVar19 + 0x10) + lVar20 * 4) ==
                          iVar11 + (((uint)(iVar11 / 6 + (iVar11 >> 0x1f)) >> 1) - (iVar11 >> 0x1f))
                                   * -0xc) {
                        FUN_00e7b4e0();
                        FUN_00c921e0();
                        break;
                      }
                      lVar20 = lVar20 + 1;
                    } while (iVar16 >> 2 != (int)lVar20);
                  }
                  if ((longlong)uVar17 < 2) break;
                  lVar19 = *local_res8;
                  iVar11 = *(int *)(lVar19 + 0x18);
                  uVar17 = uVar17 - 1;
                } while( true );
              }
              if (local_58 == (undefined8 *)0x0) {
                fVar23 = *(float *)((longlong)local_48 + 0x24);
              }
              else {
                iVar12 = *(int *)(puVar14 + 3);
                iVar11 = iVar12 + 3;
                if (-1 < iVar12) {
                  iVar11 = iVar12;
                }
                iVar12 = *(int *)(local_58 + 3);
                iVar16 = iVar12 + 3;
                if (-1 < iVar12) {
                  iVar16 = iVar12;
                }
                fVar23 = (float)(iVar16 >> 2) +
                         (float)(iVar11 >> 2) * DAT_0239011c + (float)local_a4 * DAT_0239011c;
                *(float *)((longlong)local_48 + 0x24) = fVar23;
              }
            }
            lVar19 = local_98;
            local_40 = '\0';
            FUN_00d21140();
            FUN_00d50b20();
            if (local_84 <= fVar23) {
              fVar23 = local_84;
            }
          }
          local_84 = fVar23;
          uVar17 = local_120;
          local_60 = puVar14;
          bVar7 = bVar22;
          if (puVar13 != (undefined8 *)0x0) {
            FUN_00d50b20();
            uVar17 = local_120;
          }
        }
      } while (uVar17 != local_140);
      if (lVar19 != 0) {
        FUN_00d50b20();
      }
      uVar17 = local_138 + 1;
    } while (uVar17 != local_108);
  }
  puVar13 = local_48;
  puVar14 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar14 = local_128;
  (*local_130)();
  if (*(int *)((longlong)local_90 + 0xc) == 0) {
    *unaff_RDI = puVar14;
    *(undefined1 *)(unaff_RDI + 1) = 1;
  }
  else {
    if (*local_res10 != 0) {
      local_100 = local_90;
      local_f8 = '\0';
      FUN_018e4140();
      if (local_40 == '\0') {
        if (local_48 != (undefined8 *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_40 = '\0';
      }
      if ((local_f8 != '\0') && (local_100 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      do {
        iVar12 = *(int *)((longlong)puVar13 + 0xc);
        if (iVar12 == 0) break;
        local_48 = *(undefined8 **)puVar13[2];
        if (local_48 != (undefined8 *)0x0) {
          FUN_00d50b00();
          iVar12 = *(int *)((longlong)puVar13 + 0xc);
        }
        if (0 < iVar12) {
          lVar19 = 0;
          fVar23 = DAT_02391078;
          do {
            puVar4 = *(undefined8 **)(puVar13[2] + lVar19 * 8);
            fVar1 = *(float *)((longlong)puVar4 + 0x24);
            if (((fVar1 < fVar23) && (fVar23 = fVar1, local_48 != puVar4)) &&
               (FUN_00d50b00(), bVar22 = local_48 != (undefined8 *)0x0, local_48 = puVar4, bVar22))
            {
              FUN_00d50b20();
            }
            lVar19 = lVar19 + 1;
          } while (lVar19 < *(int *)((longlong)puVar13 + 0xc));
        }
        lVar19 = local_48[2];
        lVar20 = *local_res10;
        if (lVar19 == lVar20) {
          FUN_00d21140();
        }
        else {
          FUN_00d23f50();
        }
        local_40 = '\0';
        FUN_00d50b20();
      } while (lVar19 != lVar20);
      FUN_00d50b20();
    }
    iVar12 = *(int *)((longlong)puVar14 + 0xc);
    if (iVar12 == 0) {
      if (0 < *(int *)((longlong)local_90 + 0xc)) {
        lVar19 = 0;
        do {
          puVar13 = *(undefined8 **)(local_90[2] + lVar19 * 8);
          fVar23 = *(float *)((longlong)puVar13 + 0x24);
          if ((fVar23 == local_84) && (!NAN(fVar23) && !NAN(local_84))) {
            FUN_00d50b00();
            local_40 = '\0';
            FUN_00d21140();
            FUN_00d50b20();
            local_48 = puVar13;
          }
          lVar19 = lVar19 + 1;
        } while (lVar19 < *(int *)((longlong)local_90 + 0xc));
      }
      local_148 = 0;
      local_150 = puVar14;
      FUN_018e4230();
      iVar12 = *(int *)((longlong)puVar14 + 0xc);
    }
    if (0 < iVar12) {
      lVar19 = 0;
      do {
        lVar20 = *(longlong *)(puVar14[2] + lVar19 * 8);
        if (lVar20 != 0) {
          FUN_00d50b00();
        }
        if (*(longlong *)(lVar20 + 0x28) != 0) {
          lVar5 = **(longlong **)(*(longlong *)(*(longlong *)(lVar20 + 0x10) + 0x18) + 0x10);
          if (lVar5 != 0) {
            FUN_00d50b00();
          }
          lVar21 = DAT_027cc8c0;
          if (DAT_027cc8c0 != 0) {
            FUN_00d50b00();
          }
          local_f0 = lVar21;
          local_e8 = '\x01';
          cVar10 = FUN_00d90eb0();
          if ((local_e8 != '\0') && (local_f0 != 0)) {
            FUN_00d50b20();
          }
          lVar21 = DAT_027cc8c0;
          if (cVar10 != '\0') {
            if (DAT_027cc8c0 != 0) {
              FUN_00d50b00();
            }
            local_e0 = lVar21;
            local_d8 = '\x01';
            uVar15 = FUN_00d90650();
            if ((local_d8 != '\0') && (local_e0 != 0)) {
              FUN_00d50b20();
            }
            iVar12 = FUN_00d8c7a0();
            if ((int)((ulonglong)uVar15 >> 0x20) + (int)uVar15 < iVar12) {
              FUN_00d8f140();
              if ((local_40 == '\0') && (local_48 != (undefined8 *)0x0)) {
                FUN_00d50b00();
              }
              local_c8 = '\0';
              local_d0 = local_48;
              iVar12 = FUN_018d7dd0();
              if ((local_c8 != '\0') && (local_d0 != (undefined8 *)0x0)) {
                FUN_00d50b20();
              }
              if (iVar12 != -1) {
                iVar11 = *(int *)(local_58 + 3);
                lVar21 = (longlong)iVar11;
                iVar16 = iVar11 + 3;
                if (-1 < lVar21) {
                  iVar16 = iVar11;
                }
                if (3 < lVar21) {
                  iVar16 = iVar16 >> 2;
                  lVar18 = 0;
                  do {
                    if (*(int *)(local_58[2] + lVar18 * 4) == iVar12) goto LAB_018dbc42;
                    lVar18 = lVar18 + 1;
                  } while (iVar16 != (int)lVar18);
                }
                FUN_00c8e340(iVar16,1);
                *(int *)(local_58[2] + lVar21) = iVar12;
              }
LAB_018dbc42:
              if (local_48 != (undefined8 *)0x0) {
                FUN_00d50b20();
              }
            }
          }
          if (lVar5 != 0) {
            FUN_00d50b20();
          }
        }
        if (lVar20 != 0) {
          FUN_00d50b20();
        }
        lVar19 = lVar19 + 1;
      } while (lVar19 < *(int *)((longlong)puVar14 + 0xc));
    }
    *unaff_RDI = puVar14;
    *(undefined1 *)(unaff_RDI + 1) = 1;
    if (local_90 == (undefined8 *)0x0) goto LAB_018dbca6;
  }
  FUN_00d50b20();
LAB_018dbca6:
  if ((bVar7) && (local_60 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  if ((bVar8) && (local_58 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  if (local_b8 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}


