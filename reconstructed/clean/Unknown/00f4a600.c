// Function: FUN_00f4a600
// Address: 00f4a600
// Size: 2884 bytes
// Class: Unknown

uint64_t FUN_00f4a600(int64_t *param_1,uint param_2,uint *param_3,void*param_4)

{
  ushort *puVar1;
  int64_t lVar2;
  void*puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint64_t uVar7;
  uint uVar8;
  uint uVar9;
  uint8_t uVar10;
  uint uVar11;
  uint64_t uVar12;
  uint64_t uVar13;
  int64_t arg1;
  ushort uVar14;
  int unaff_EDI;
  int iVar15;
  int iVar16;
  uint64_t uVar17;
  uint64_t uVar18;
  byte bVar19;
  byte bVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint64_t uVar24;
  int64_t lVar25;
  uint uVar26;
  bool bVar27;
  void*local_c0;
  void*local_b8;
  uint local_88;
  uint local_84;
  ushort auStack_78 [5];
  short local_6e;
  short local_6c;
  short local_6a;
  short local_68;
  short local_66;
  short local_64;
  short local_62;
  short local_60;
  short local_5e;
  short local_5c;
  short local_5a;
  ushort local_58 [16];
  int64_t local_38;
  
  local_38 = *(int64_t *)PTR____stack_chk_guard_024a9898;
  local_58[0] = 0;
  local_58[1] = 0;
  local_58[2] = 0;
  local_58[3] = 0;
  local_58[4] = 0;
  local_58[5] = 0;
  local_58[6] = 0;
  local_58[7] = 0;
  local_58[8] = 0;
  local_58[9] = 0;
  local_58[10] = 0;
  local_58[0xb] = 0;
  local_58[0xc] = 0;
  local_58[0xd] = 0;
  local_58[0xe] = 0;
  local_58[0xf] = 0;
  if (param_2 == 0) {
    uVar21 = *param_3;
LAB_00f4a6cc:
    if (local_58[0xe] != 0) {
      uVar24 = 0xe;
LAB_00f4a767:
      uVar4 = 0;
      goto LAB_00f4a76a;
    }
    if (local_58[0xd] != 0) {
      uVar24 = 0xd;
      goto LAB_00f4a767;
    }
    if (local_58[0xc] != 0) {
      uVar24 = 0xc;
      goto LAB_00f4a767;
    }
    if (local_58[0xb] != 0) {
      uVar24 = 0xb;
      goto LAB_00f4a767;
    }
    if (local_58[10] != 0) {
      uVar24 = 10;
      goto LAB_00f4a767;
    }
    if (local_58[9] != 0) {
      uVar24 = 9;
      goto LAB_00f4a767;
    }
    if (local_58[8] != 0) {
      uVar24 = 8;
      goto LAB_00f4a767;
    }
    if (local_58[7] != 0) {
      uVar24 = 7;
      goto LAB_00f4a767;
    }
    if (local_58[6] != 0) {
      uVar24 = 6;
      goto LAB_00f4a767;
    }
    if (local_58[5] != 0) {
      uVar24 = 5;
      goto LAB_00f4a767;
    }
    if (local_58[4] != 0) {
      uVar24 = 4;
LAB_00f4b0d8:
      uVar4 = 0;
      goto LAB_00f4a76a;
    }
    if (local_58[3] != 0) {
      uVar24 = 3;
      goto LAB_00f4b0d8;
    }
    if (local_58[2] != 0) {
      uVar24 = 2;
      goto LAB_00f4b0d8;
    }
    if (local_58[1] == 0) {
      puVar3 = (void*)*param_1;
      *param_1 = (int64_t)(puVar3 + 1);
      *puVar3 = 0x140;
      puVar3 = (void*)*param_1;
      *param_1 = (int64_t)(puVar3 + 1);
      *puVar3 = 0x140;
      uVar21 = 1;
      goto LAB_00f4b05e;
    }
    uVar22 = 1;
    bVar27 = false;
    uVar21 = (uint)(uVar21 != 0);
    uVar4 = 0;
    uVar13 = 1;
  }
  else {
    if ((uint64_t)param_2 - 1 < 3) {
      uVar24 = 0;
    }
    else {
      uVar24 = 0;
      do {
        local_58[*(ushort *)(arg1 + uVar24 * 2)] =
             local_58[*(ushort *)(arg1 + uVar24 * 2)] + 1;
        local_58[*(ushort *)(arg1 + 2 + uVar24 * 2)] =
             local_58[*(ushort *)(arg1 + 2 + uVar24 * 2)] + 1;
        local_58[*(ushort *)(arg1 + 4 + uVar24 * 2)] =
             local_58[*(ushort *)(arg1 + 4 + uVar24 * 2)] + 1;
        local_58[*(ushort *)(arg1 + 6 + uVar24 * 2)] =
             local_58[*(ushort *)(arg1 + 6 + uVar24 * 2)] + 1;
        uVar24 = uVar24 + 4;
      } while ((param_2 & 0xfffffffc) != uVar24);
    }
    if ((uint64_t)(param_2 & 3) != 0) {
      uVar13 = 0;
      do {
        local_58[*(ushort *)(arg1 + uVar24 * 2 + uVar13 * 2)] =
             local_58[*(ushort *)(arg1 + uVar24 * 2 + uVar13 * 2)] + 1;
        uVar13 = uVar13 + 1;
      } while ((param_2 & 3) != uVar13);
    }
    uVar4 = (uint)local_58[0xf];
    uVar21 = *param_3;
    uVar24 = 0xf;
    if (local_58[0xf] == 0) goto LAB_00f4a6cc;
LAB_00f4a76a:
    uVar22 = (uint)uVar24;
    if (uVar22 < uVar21) {
      uVar21 = uVar22;
    }
    uVar13 = 1;
    do {
      if (local_58[uVar13] != 0) {
        bVar27 = true;
        goto LAB_00f4a79b;
      }
      uVar13 = uVar13 + 1;
    } while (uVar24 != uVar13);
    bVar27 = true;
    uVar13 = uVar24;
  }
LAB_00f4a79b:
  uVar24 = (uint64_t)uVar21;
  if (uVar21 < (uint)uVar13) {
    uVar24 = uVar13 & 0xffffffff;
  }
  uVar21 = (uint)uVar24;
  uVar7 = 0xffffffff;
  if (local_58[1] < 3) {
    iVar15 = 4 - ((uint)local_58[2] + (uint)local_58[1] * 2);
    if (-1 < iVar15) {
      iVar15 = iVar15 * 2 - (uint)local_58[3];
      if (-1 < iVar15) {
        iVar15 = iVar15 * 2 - (uint)local_58[4];
        if (-1 < iVar15) {
          iVar15 = iVar15 * 2 - (uint)local_58[5];
          if (-1 < iVar15) {
            iVar15 = iVar15 * 2 - (uint)local_58[6];
            if (-1 < iVar15) {
              iVar15 = iVar15 * 2 - (uint)local_58[7];
              if (-1 < iVar15) {
                iVar15 = iVar15 * 2 - (uint)local_58[8];
                if (-1 < iVar15) {
                  iVar15 = iVar15 * 2 - (uint)local_58[9];
                  if (-1 < iVar15) {
                    iVar15 = iVar15 * 2 - (uint)local_58[10];
                    if (-1 < iVar15) {
                      iVar15 = iVar15 * 2 - (uint)local_58[0xb];
                      if (-1 < iVar15) {
                        iVar15 = iVar15 * 2 - (uint)local_58[0xc];
                        if (-1 < iVar15) {
                          iVar15 = iVar15 * 2 - (uint)local_58[0xd];
                          if (-1 < iVar15) {
                            iVar15 = iVar15 * 2 - (uint)local_58[0xe];
                            if (((-1 < iVar15) && (iVar15 = iVar15 * 2 - uVar4, -1 < iVar15)) &&
                               ((iVar15 == 0 || (unaff_EDI != 0 && !bVar27)))) {
                              auStack_78[1] = 0;
                              auStack_78[2] = local_58[1];
                              auStack_78[4] = local_58[3] + local_58[2] + local_58[1];
                              auStack_78[3] = local_58[2] + local_58[1];
                              local_6e = local_58[4] + auStack_78[4];
                              local_6c = local_58[5] + local_6e;
                              local_6a = local_58[6] + local_6c;
                              local_68 = local_58[7] + local_6a;
                              local_66 = local_58[8] + local_68;
                              local_64 = local_58[9] + local_66;
                              local_62 = local_58[10] + local_64;
                              local_60 = local_58[0xb] + local_62;
                              local_5e = local_58[0xc] + local_60;
                              local_5c = local_58[0xd] + local_5e;
                              local_5a = local_58[0xe] + local_5c;
                              if (param_2 != 0) {
                                if (param_2 == 1) {
                                  uVar12 = 0;
                                }
                                else {
                                  uVar12 = 0;
                                  do {
                                    uVar17 = (uint64_t)*(ushort *)(arg1 + uVar12 * 2);
                                    if (uVar17 != 0) {
                                      uVar14 = auStack_78[uVar17];
                                      auStack_78[uVar17] = uVar14 + 1;
                                      *(short *)(param_4 + (uint64_t)uVar14 * 2) = (short)uVar12;
                                    }
                                    uVar17 = (uint64_t)*(ushort *)(arg1 + 2 + uVar12 * 2);
                                    if (uVar17 != 0) {
                                      uVar14 = auStack_78[uVar17];
                                      auStack_78[uVar17] = uVar14 + 1;
                                      *(short *)(param_4 + (uint64_t)uVar14 * 2) =
                                           (short)uVar12 + 1;
                                    }
                                    uVar12 = uVar12 + 2;
                                  } while ((param_2 & 0xfffffffe) != uVar12);
                                }
                                if (((param_2 & 1) != 0) &&
                                   (uVar17 = (uint64_t)*(ushort *)(arg1 + uVar12 * 2),
                                   uVar17 != 0)) {
                                  uVar14 = auStack_78[uVar17];
                                  auStack_78[uVar17] = uVar14 + 1;
                                  *(short *)(param_4 + (uint64_t)uVar14 * 2) = (short)uVar12;
                                }
                              }
                              bVar20 = (byte)uVar24;
                              if (unaff_EDI == 0) {
                                local_88 = 0x14;
                                bVar27 = false;
                                local_c0 = param_4;
                                local_b8 = param_4;
LAB_00f4ac2c:
                                uVar4 = 1 << (bVar20 & 0x1f);
                                uVar23 = uVar4 - 1;
                                lVar25 = *param_1;
                                if (!bVar27) {
                                  uVar12 = 0xffffffff;
                                  uVar26 = 0;
                                  uVar5 = 0;
                                  uVar17 = 0;
                                  do {
                                    uVar11 = (uint)uVar12;
                                    uVar6 = 1 << ((byte)uVar24 & 0x1f);
                                    do {
                                      bVar19 = (char)uVar13 - (byte)uVar5;
                                      uVar14 = *(ushort *)(param_4 + (uint64_t)uVar26 * 2);
                                      if (uVar14 + 1 < local_88) {
                                        uVar10 = 0;
                                      }
                                      else if (uVar14 < local_88) {
                                        uVar10 = 0x60;
                                        uVar14 = 0;
                                      }
                                      else {
                                        uVar10 = local_b8[(uint64_t)(uVar14 - local_88) * 2];
                                        uVar14 = *(ushort *)
                                                  (local_c0 + (uint64_t)(uVar14 - local_88) * 2);
                                      }
                                      iVar15 = -1 << (bVar19 & 0x1f);
                                      uVar8 = (uint)uVar17;
                                      uVar9 = uVar6;
                                      do {
                                        uVar24 = (uint64_t)
                                                 ((uVar8 >> ((byte)uVar5 & 0x1f)) + iVar15 + uVar9);
                                        *(void*)(lVar25 + uVar24 * 4) = uVar10;
                                        *(byte *)(lVar25 + 1 + uVar24 * 4) = bVar19;
                                        *(ushort *)(lVar25 + 2 + uVar24 * 4) = uVar14;
                                        uVar9 = uVar9 + iVar15;
                                      } while (uVar9 != 0);
                                      uVar24 = (uint64_t)(uint)(1 << ((char)uVar13 - 1U & 0x1f));
                                      do {
                                        uVar9 = (uint)uVar24;
                                        uVar24 = uVar24 >> 1;
                                      } while ((uVar9 & uVar8) != 0);
                                      uVar8 = (uVar9 - 1 & uVar8) + uVar9;
                                      if (uVar9 == 0) {
                                        uVar8 = 0;
                                      }
                                      uVar17 = (uint64_t)uVar8;
                                      uVar26 = uVar26 + 1;
                                      puVar1 = local_58 + (uVar13 & 0xffffffff);
                                      *puVar1 = *puVar1 - 1;
                                      if (*puVar1 == 0) {
                                        if ((uint)uVar13 == uVar22) goto LAB_00f4b02f;
                                        uVar13 = (uint64_t)
                                                 *(ushort *)
                                                  (arg1 +
                                                  (uint64_t)
                                                  *(ushort *)(param_4 + (uint64_t)uVar26 * 2) * 2);
                                      }
                                      uVar9 = (uint)uVar13;
                                    } while ((uVar9 <= uVar21) ||
                                            (uVar8 = uVar8 & uVar23, uVar12 = (uint64_t)uVar8,
                                            uVar8 == uVar11));
                                    if (uVar5 == 0) {
                                      uVar5 = uVar21;
                                    }
                                    uVar11 = uVar9 - uVar5;
                                    iVar15 = 1 << ((byte)uVar11 & 0x1f);
                                    if (uVar9 < uVar22) {
                                      uVar11 = uVar22 - uVar5;
                                      uVar24 = uVar13 & 0xffffffff;
                                      do {
                                        iVar16 = iVar15 - (uint)local_58[uVar24];
                                        if (iVar16 == 0 || iVar15 < (int)(uint)local_58[uVar24]) {
                                          uVar11 = (int)uVar24 - uVar5;
                                          break;
                                        }
                                        iVar15 = iVar16 * 2;
                                        uVar24 = uVar24 + 1;
                                      } while ((uint)uVar24 < uVar22);
                                      iVar15 = 1 << ((byte)uVar11 & 0x1f);
                                    }
                                    uVar24 = (uint64_t)uVar11;
                                    lVar25 = lVar25 + (uint64_t)uVar6 * 4;
                                    uVar4 = uVar4 + iVar15;
                                    lVar2 = *param_1;
                                    *(char *)(lVar2 + uVar12 * 4) = (char)uVar11;
                                    *(byte *)(lVar2 + 1 + uVar12 * 4) = bVar20;
                                    *(short *)(lVar2 + 2 + uVar12 * 4) =
                                         (short)((uint)((int)lVar25 - (int)lVar2) >> 2);
                                  } while( true );
                                }
                                local_84 = 0xffffffff;
                                uVar12 = 0;
                                uVar5 = 0;
                                uVar17 = 0;
                                do {
                                  uVar26 = 1 << ((byte)uVar24 & 0x1f);
                                  do {
                                    bVar19 = (char)uVar13 - (byte)uVar5;
                                    uVar14 = *(ushort *)(param_4 + uVar12 * 2);
                                    if (uVar14 + 1 < local_88) {
                                      uVar10 = 0;
                                    }
                                    else if (uVar14 < local_88) {
                                      uVar10 = 0x60;
                                      uVar14 = 0;
                                    }
                                    else {
                                      uVar24 = (uint64_t)(uVar14 - local_88);
                                      uVar10 = local_b8[uVar24 * 2];
                                      uVar14 = *(ushort *)(local_c0 + uVar24 * 2);
                                    }
                                    iVar15 = -1 << (bVar19 & 0x1f);
                                    uVar11 = (uint)uVar17;
                                    uVar6 = uVar26;
                                    do {
                                      uVar24 = (uint64_t)
                                               ((uVar11 >> ((byte)uVar5 & 0x1f)) + iVar15 + uVar6);
                                      *(void*)(lVar25 + uVar24 * 4) = uVar10;
                                      *(byte *)(lVar25 + 1 + uVar24 * 4) = bVar19;
                                      *(ushort *)(lVar25 + 2 + uVar24 * 4) = uVar14;
                                      uVar6 = uVar6 + iVar15;
                                    } while (uVar6 != 0);
                                    uVar24 = (uint64_t)(uint)(1 << ((char)uVar13 - 1U & 0x1f));
                                    do {
                                      uVar6 = (uint)uVar24;
                                      uVar24 = uVar24 >> 1;
                                    } while ((uVar6 & uVar11) != 0);
                                    uVar11 = (uVar6 - 1 & uVar11) + uVar6;
                                    if (uVar6 == 0) {
                                      uVar11 = 0;
                                    }
                                    uVar17 = (uint64_t)uVar11;
                                    uVar12 = (uint64_t)((int)uVar12 + 1);
                                    puVar1 = local_58 + (uVar13 & 0xffffffff);
                                    *puVar1 = *puVar1 - 1;
                                    if (*puVar1 == 0) {
                                      if ((uint)uVar13 == uVar22) goto LAB_00f4b02f;
                                      uVar13 = (uint64_t)
                                               *(ushort *)
                                                (arg1 +
                                                (uint64_t)*(ushort *)(param_4 + uVar12 * 2) * 2);
                                    }
                                    uVar6 = (uint)uVar13;
                                  } while ((uVar6 <= uVar21) ||
                                          (uVar11 = uVar11 & uVar23, uVar11 == local_84));
                                  if (uVar5 == 0) {
                                    uVar5 = uVar21;
                                  }
                                  uVar9 = uVar6 - uVar5;
                                  iVar15 = 1 << ((byte)uVar9 & 0x1f);
                                  if (uVar6 < uVar22) {
                                    uVar9 = uVar22 - uVar5;
                                    uVar24 = uVar13 & 0xffffffff;
                                    do {
                                      iVar16 = iVar15 - (uint)local_58[uVar24];
                                      if (iVar16 == 0 || iVar15 < (int)(uint)local_58[uVar24]) {
                                        uVar9 = (int)uVar24 - uVar5;
                                        break;
                                      }
                                      iVar15 = iVar16 * 2;
                                      uVar24 = uVar24 + 1;
                                    } while ((uint)uVar24 < uVar22);
                                    iVar15 = 1 << ((byte)uVar9 & 0x1f);
                                  }
                                  uVar24 = (uint64_t)uVar9;
                                  uVar4 = uVar4 + iVar15;
                                  if (0x250 < uVar4) goto LAB_00f4b0b1;
                                  lVar25 = lVar25 + (uint64_t)uVar26 * 4;
                                  lVar2 = *param_1;
                                  uVar18 = (uint64_t)uVar11;
                                  *(char *)(lVar2 + uVar18 * 4) = (char)uVar9;
                                  *(byte *)(lVar2 + 1 + uVar18 * 4) = bVar20;
                                  *(short *)(lVar2 + 2 + uVar18 * 4) =
                                       (short)((uint)((int)lVar25 - (int)lVar2) >> 2);
                                  local_84 = uVar11;
                                } while( true );
                              }
                              if (unaff_EDI == 1) {
                                uVar7 = 1;
                                if (uVar21 < 10) {
                                  uVar4 = 1 << (bVar20 & 0x1f);
                                  uVar5 = uVar4 - 1;
                                  lVar25 = *param_1;
                                  local_88 = 0xffffffff;
                                  uVar26 = 0;
                                  uVar23 = 0;
                                  uVar17 = 0;
                                  do {
                                    uVar6 = 1 << ((byte)uVar24 & 0x1f);
                                    uVar24 = (uint64_t)uVar26;
                                    do {
                                      bVar19 = (char)uVar13 - (byte)uVar23;
                                      uVar14 = *(ushort *)(param_4 + uVar24 * 2);
                                      if (uVar14 < 0x100) {
                                        uVar10 = 0;
                                      }
                                      else if (uVar14 == 0x100) {
                                        uVar10 = 0x60;
                                        uVar14 = 0;
                                      }
                                      else {
                                        uVar10 = (&g_023e7ea0)[(uint64_t)(uVar14 - 0x101) * 2];
                                        uVar14 = *(ushort *)
                                                  (&g_023e7e60 + (uint64_t)(uVar14 - 0x101) * 2);
                                      }
                                      iVar15 = -1 << (bVar19 & 0x1f);
                                      uVar11 = (uint)uVar17;
                                      uVar26 = uVar6;
                                      do {
                                        uVar12 = (uint64_t)
                                                 ((uVar11 >> ((byte)uVar23 & 0x1f)) + iVar15 +
                                                 uVar26);
                                        *(void*)(lVar25 + uVar12 * 4) = uVar10;
                                        *(byte *)(lVar25 + 1 + uVar12 * 4) = bVar19;
                                        *(ushort *)(lVar25 + 2 + uVar12 * 4) = uVar14;
                                        uVar26 = uVar26 + iVar15;
                                      } while (uVar26 != 0);
                                      uVar12 = (uint64_t)(uint)(1 << ((char)uVar13 - 1U & 0x1f));
                                      do {
                                        uVar26 = (uint)uVar12;
                                        uVar12 = uVar12 >> 1;
                                      } while ((uVar26 & uVar11) != 0);
                                      uVar11 = (uVar26 - 1 & uVar11) + uVar26;
                                      if (uVar26 == 0) {
                                        uVar11 = 0;
                                      }
                                      uVar17 = (uint64_t)uVar11;
                                      uVar26 = (int)uVar24 + 1;
                                      uVar24 = (uint64_t)uVar26;
                                      puVar1 = local_58 + (uVar13 & 0xffffffff);
                                      *puVar1 = *puVar1 - 1;
                                      if (*puVar1 == 0) {
                                        if ((uint)uVar13 == uVar22) goto LAB_00f4b02f;
                                        uVar13 = (uint64_t)
                                                 *(ushort *)
                                                  (arg1 +
                                                  (uint64_t)*(ushort *)(param_4 + uVar24 * 2) * 2);
                                      }
                                      uVar9 = (uint)uVar13;
                                    } while ((uVar9 <= uVar21) ||
                                            (uVar11 = uVar11 & uVar5, uVar11 == local_88));
                                    if (uVar23 == 0) {
                                      uVar23 = uVar21;
                                    }
                                    uVar8 = uVar9 - uVar23;
                                    iVar15 = 1 << ((byte)uVar8 & 0x1f);
                                    if (uVar9 < uVar22) {
                                      uVar8 = uVar22 - uVar23;
                                      uVar24 = uVar13 & 0xffffffff;
                                      do {
                                        iVar16 = iVar15 - (uint)local_58[uVar24];
                                        if (iVar16 == 0 || iVar15 < (int)(uint)local_58[uVar24]) {
                                          uVar8 = (int)uVar24 - uVar23;
                                          break;
                                        }
                                        iVar15 = iVar16 * 2;
                                        uVar24 = uVar24 + 1;
                                      } while ((uint)uVar24 < uVar22);
                                      iVar15 = 1 << ((byte)uVar8 & 0x1f);
                                    }
                                    uVar24 = (uint64_t)uVar8;
                                    uVar4 = uVar4 + iVar15;
                                    if (0x354 < uVar4) goto LAB_00f4b0b1;
                                    lVar25 = lVar25 + (uint64_t)uVar6 * 4;
                                    lVar2 = *param_1;
                                    uVar12 = (uint64_t)uVar11;
                                    *(char *)(lVar2 + uVar12 * 4) = (char)uVar8;
                                    *(byte *)(lVar2 + 1 + uVar12 * 4) = bVar20;
                                    *(short *)(lVar2 + 2 + uVar12 * 4) =
                                         (short)((uint)((int)lVar25 - (int)lVar2) >> 2);
                                    local_88 = uVar11;
                                  } while( true );
                                }
                              }
                              else {
                                local_88 = 0;
                                local_b8 = &g_023e7f20;
                                local_c0 = &g_023e7ee0;
                                bVar27 = unaff_EDI == 2;
                                if ((!bVar27) || (uVar7 = 1, uVar21 < 10)) goto LAB_00f4ac2c;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  goto LAB_00f4b06a;
LAB_00f4b0b1:
  if (*(int64_t *)PTR____stack_chk_guard_024a9898 == local_38) {
    return 1;
  }
  goto LAB_00f4b0c6;
LAB_00f4b02f:
  if ((int)uVar17 != 0) {
    *(void*)(lVar25 + uVar17 * 4) = 0x40;
    *(byte *)(lVar25 + 1 + uVar17 * 4) = bVar19;
    *(void*)(lVar25 + 2 + uVar17 * 4) = 0;
  }
  *param_1 = *param_1 + (uint64_t)uVar4 * 4;
LAB_00f4b05e:
  *param_3 = uVar21;
  uVar7 = 0;
LAB_00f4b06a:
  if (*(int64_t *)PTR____stack_chk_guard_024a9898 == local_38) {
    return uVar7;
  }
LAB_00f4b0c6:
                      ___stack_chk_fail();
}

