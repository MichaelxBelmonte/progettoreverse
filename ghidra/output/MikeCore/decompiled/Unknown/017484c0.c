// Function: FUN_017484c0
// Address: 017484c0
// Size: 4631 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x01748ade) */
/* WARNING: Removing unreachable block (ram,0x01748ae7) */
/* WARNING: Removing unreachable block (ram,0x0174917e) */
/* WARNING: Removing unreachable block (ram,0x01749187) */

ulonglong FUN_017484c0(pthread_key_t param_1)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  bool bVar14;
  char cVar15;
  int iVar16;
  void *pvVar17;
  pthread_key_t pVar18;
  ulonglong uVar19;
  longlong lVar20;
  uint uVar21;
  ulonglong uVar22;
  longlong lVar23;
  longlong lVar24;
  longlong unaff_RDI;
  ulonglong uVar25;
  longlong lVar26;
  uint uVar27;
  ulonglong uVar28;
  uint uVar29;
  int iVar30;
  ulonglong uVar31;
  longlong local_98;
  char local_90;
  longlong local_48;
  char local_40;
  
  cVar15 = FUN_0173ed60();
  uVar31 = 0xffffffff;
  if (cVar15 != '\0') {
    FUN_0174c730();
    if ((local_40 == '\0') && (local_48 != 0)) {
      FUN_00d50b00();
    }
    FUN_0173ba80();
    pvVar17 = _pthread_getspecific(param_1);
    if (pvVar17 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0174c730();
    if ((local_40 == '\0') && (local_48 != 0)) {
      FUN_00d50b00();
    }
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
    lVar23 = *(longlong *)(unaff_RDI + 0x58);
    if (lVar23 != 0) {
      FUN_00d50b00();
    }
    pvVar17 = _pthread_getspecific(param_1);
    if (pvVar17 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01736e70();
    iVar5 = *(int *)(local_48 + 0xc);
    if (local_40 != '\0') {
      FUN_00d50b20();
    }
    if (lVar23 != 0) {
      FUN_00d50b20();
    }
    uVar31 = 0xffffffff;
    if (0 < iVar5) {
      if ((local_48 == 0) || (local_48 == 0)) {
        iVar16 = 0;
        do {
          lVar23 = *(longlong *)(local_48 + 0x10);
          bVar14 = true;
          if (*(int *)(lVar23 + 4) == 0) {
            uVar31 = 2;
            if ((*(int *)(lVar23 + 8) == 0) && (uVar31 = 3, *(int *)(lVar23 + 0xc) == 0)) {
              if (*(int *)(lVar23 + 0x10) == 0) {
                if (*(int *)(lVar23 + 0x14) == 0) {
                  if (*(int *)(lVar23 + 0x18) == 0) {
                    if (*(int *)(lVar23 + 0x1c) == 0) {
                      if (*(int *)(lVar23 + 0x20) == 0) {
                        if (*(int *)(lVar23 + 0x24) == 0) {
                          if (*(int *)(lVar23 + 0x28) == 0) {
                            if (*(int *)(lVar23 + 0x2c) == 0) {
                              if (*(int *)(lVar23 + 0x30) == 0) {
                                if (*(int *)(lVar23 + 0x34) == 0) {
                                  if (*(int *)(lVar23 + 0x38) == 0) {
                                    if (*(int *)(lVar23 + 0x3c) == 0) {
                                      if (*(int *)(lVar23 + 0x40) == 0) {
                                        if (*(int *)(lVar23 + 0x44) == 0) {
                                          if (*(int *)(lVar23 + 0x48) == 0) {
                                            if (*(int *)(lVar23 + 0x4c) == 0) {
                                              if (*(int *)(lVar23 + 0x50) == 0) {
                                                if (*(int *)(lVar23 + 0x54) == 0) {
                                                  if (*(int *)(lVar23 + 0x58) == 0) {
                                                    if (*(int *)(lVar23 + 0x5c) == 0) break;
                                                    uVar31 = 0x17;
                                                  }
                                                  else {
                                                    uVar31 = 0x16;
                                                  }
                                                }
                                                else {
                                                  uVar31 = 0x15;
                                                }
                                              }
                                              else {
                                                uVar31 = 0x14;
                                              }
                                            }
                                            else {
                                              uVar31 = 0x13;
                                            }
                                          }
                                          else {
                                            uVar31 = 0x12;
                                          }
                                        }
                                        else {
                                          uVar31 = 0x11;
                                        }
                                      }
                                      else {
                                        uVar31 = 0x10;
                                      }
                                    }
                                    else {
                                      uVar31 = 0xf;
                                    }
                                  }
                                  else {
                                    uVar31 = 0xe;
                                  }
                                }
                                else {
                                  uVar31 = 0xd;
                                }
                              }
                              else {
                                uVar31 = 0xc;
                              }
                            }
                            else {
                              uVar31 = 0xb;
                            }
                          }
                          else {
                            uVar31 = 10;
                          }
                        }
                        else {
                          uVar31 = 9;
                        }
                      }
                      else {
                        uVar31 = 8;
                      }
                    }
                    else {
                      uVar31 = 7;
                    }
                  }
                  else {
                    uVar31 = 6;
                  }
                }
                else {
                  uVar31 = 5;
                }
              }
              else {
                uVar31 = 4;
              }
              bVar14 = false;
            }
          }
          else {
            uVar31 = 1;
          }
          FUN_00c8e690();
          if ((local_40 == '\0') && (local_48 != 0)) {
            FUN_00d50b00();
          }
          FUN_00c92170();
          FUN_00c92160();
          uVar8 = *(ulonglong *)(local_48 + 0x10);
          uVar9 = *(ulonglong *)(local_48 + 0x10);
          uVar29 = (uint)uVar31;
          if ((bVar14) || ((uVar9 < uVar8 + uVar31 * 4 && (uVar8 < uVar9 + uVar31 * 4)))) {
            uVar22 = 0;
LAB_017491ce:
            uVar19 = ~uVar22;
            for (uVar25 = uVar31 & 3; uVar25 != 0; uVar25 = uVar25 - 1) {
              *(undefined4 *)(uVar9 + uVar22 * 4) = *(undefined4 *)(uVar8 + uVar22 * 4);
              uVar22 = uVar22 + 1;
            }
            if (2 < uVar19 + uVar31) {
              do {
                *(undefined4 *)(uVar9 + uVar22 * 4) = *(undefined4 *)(uVar8 + uVar22 * 4);
                *(undefined4 *)(uVar9 + 4 + uVar22 * 4) = *(undefined4 *)(uVar8 + 4 + uVar22 * 4);
                *(undefined4 *)(uVar9 + 8 + uVar22 * 4) = *(undefined4 *)(uVar8 + 8 + uVar22 * 4);
                *(undefined4 *)(uVar9 + 0xc + uVar22 * 4) =
                     *(undefined4 *)(uVar8 + 0xc + uVar22 * 4);
                uVar22 = uVar22 + 4;
              } while (uVar31 != uVar22);
            }
          }
          else {
            uVar22 = (ulonglong)(uVar29 & 0xfffffffc);
            uVar25 = (uVar22 - 4 >> 2) + 1;
            uVar19 = (ulonglong)((uint)uVar25 & 7);
            if (uVar22 - 4 < 0x1c) {
              lVar20 = 0;
            }
            else {
              lVar23 = -(uVar25 & 0xfffffffffffffff8);
              lVar20 = 0;
              do {
                puVar1 = (undefined8 *)(uVar8 + lVar20 * 4);
                uVar13 = puVar1[1];
                puVar4 = (undefined8 *)(uVar9 + lVar20 * 4);
                *puVar4 = *puVar1;
                puVar4[1] = uVar13;
                puVar1 = (undefined8 *)(uVar8 + 0x10 + lVar20 * 4);
                uVar13 = puVar1[1];
                puVar4 = (undefined8 *)(uVar9 + 0x10 + lVar20 * 4);
                *puVar4 = *puVar1;
                puVar4[1] = uVar13;
                puVar1 = (undefined8 *)(uVar8 + 0x20 + lVar20 * 4);
                uVar13 = puVar1[1];
                puVar4 = (undefined8 *)(uVar9 + 0x20 + lVar20 * 4);
                *puVar4 = *puVar1;
                puVar4[1] = uVar13;
                puVar1 = (undefined8 *)(uVar8 + 0x30 + lVar20 * 4);
                uVar13 = puVar1[1];
                puVar4 = (undefined8 *)(uVar9 + 0x30 + lVar20 * 4);
                *puVar4 = *puVar1;
                puVar4[1] = uVar13;
                puVar1 = (undefined8 *)(uVar8 + 0x40 + lVar20 * 4);
                uVar13 = puVar1[1];
                puVar4 = (undefined8 *)(uVar9 + 0x40 + lVar20 * 4);
                *puVar4 = *puVar1;
                puVar4[1] = uVar13;
                puVar1 = (undefined8 *)(uVar8 + 0x50 + lVar20 * 4);
                uVar13 = puVar1[1];
                puVar4 = (undefined8 *)(uVar9 + 0x50 + lVar20 * 4);
                *puVar4 = *puVar1;
                puVar4[1] = uVar13;
                puVar1 = (undefined8 *)(uVar8 + 0x60 + lVar20 * 4);
                uVar13 = puVar1[1];
                puVar4 = (undefined8 *)(uVar9 + 0x60 + lVar20 * 4);
                *puVar4 = *puVar1;
                puVar4[1] = uVar13;
                puVar2 = (undefined4 *)(uVar8 + 0x70 + lVar20 * 4);
                uVar10 = puVar2[1];
                uVar11 = puVar2[2];
                uVar12 = puVar2[3];
                puVar3 = (undefined4 *)(uVar9 + 0x70 + lVar20 * 4);
                *puVar3 = *puVar2;
                puVar3[1] = uVar10;
                puVar3[2] = uVar11;
                puVar3[3] = uVar12;
                lVar20 = lVar20 + 0x20;
                lVar23 = lVar23 + 8;
              } while (lVar23 != 0);
            }
            if (uVar19 != 0) {
              lVar23 = 0;
              do {
                puVar2 = (undefined4 *)(uVar8 + lVar20 * 4 + lVar23);
                uVar10 = puVar2[1];
                uVar11 = puVar2[2];
                uVar12 = puVar2[3];
                puVar3 = (undefined4 *)(uVar9 + lVar20 * 4 + lVar23);
                *puVar3 = *puVar2;
                puVar3[1] = uVar10;
                puVar3[2] = uVar11;
                puVar3[3] = uVar12;
                lVar23 = lVar23 + 0x10;
              } while (uVar19 << 4 != lVar23);
            }
            if (uVar22 != uVar31) goto LAB_017491ce;
          }
          uVar27 = -uVar29 + 0x18;
          uVar22 = (ulonglong)uVar27;
          if ((uVar27 < 4) ||
             ((uVar8 < uVar8 + (uVar31 + uVar22) * 4 && (uVar8 + uVar31 * 4 < uVar8 + uVar22 * 4))))
          {
            uVar25 = 0;
LAB_01749323:
            uVar28 = ~uVar25;
            uVar19 = uVar22 & 3;
            if ((uVar27 & 3) != 0) {
              do {
                *(undefined4 *)(uVar8 + uVar25 * 4) =
                     *(undefined4 *)(uVar8 + uVar31 * 4 + uVar25 * 4);
                uVar25 = uVar25 + 1;
                uVar19 = uVar19 - 1;
              } while (uVar19 != 0);
            }
            if (2 < uVar28 + uVar22) {
              lVar23 = uVar8 + uVar31 * 4;
              do {
                *(undefined4 *)(uVar8 + uVar25 * 4) = *(undefined4 *)(lVar23 + uVar25 * 4);
                *(undefined4 *)(uVar8 + 4 + uVar25 * 4) = *(undefined4 *)(lVar23 + 4 + uVar25 * 4);
                *(undefined4 *)(uVar8 + 8 + uVar25 * 4) = *(undefined4 *)(lVar23 + 8 + uVar25 * 4);
                *(undefined4 *)(uVar8 + 0xc + uVar25 * 4) =
                     *(undefined4 *)(lVar23 + 0xc + uVar25 * 4);
                uVar25 = uVar25 + 4;
              } while (uVar22 != uVar25);
            }
          }
          else {
            uVar25 = (ulonglong)(uVar27 & 0xfffffffc);
            uVar19 = (uVar25 - 4 >> 2) + 1;
            uVar28 = (ulonglong)((uint)uVar19 & 3);
            if (uVar25 - 4 < 0xc) {
              lVar24 = 0;
            }
            else {
              lVar23 = uVar8 + uVar31 * 4;
              lVar20 = -(uVar19 & 0xfffffffffffffffc);
              lVar24 = 0;
              do {
                puVar4 = (undefined8 *)(lVar23 + lVar24 * 4);
                uVar13 = puVar4[1];
                puVar1 = (undefined8 *)(uVar8 + lVar24 * 4);
                *puVar1 = *puVar4;
                puVar1[1] = uVar13;
                puVar1 = (undefined8 *)(lVar23 + 0x10 + lVar24 * 4);
                uVar13 = puVar1[1];
                puVar4 = (undefined8 *)(uVar8 + 0x10 + lVar24 * 4);
                *puVar4 = *puVar1;
                puVar4[1] = uVar13;
                puVar1 = (undefined8 *)(lVar23 + 0x20 + lVar24 * 4);
                uVar13 = puVar1[1];
                puVar4 = (undefined8 *)(uVar8 + 0x20 + lVar24 * 4);
                *puVar4 = *puVar1;
                puVar4[1] = uVar13;
                puVar2 = (undefined4 *)(lVar23 + 0x30 + lVar24 * 4);
                uVar10 = puVar2[1];
                uVar11 = puVar2[2];
                uVar12 = puVar2[3];
                puVar3 = (undefined4 *)(uVar8 + 0x30 + lVar24 * 4);
                *puVar3 = *puVar2;
                puVar3[1] = uVar10;
                puVar3[2] = uVar11;
                puVar3[3] = uVar12;
                lVar24 = lVar24 + 0x10;
                lVar20 = lVar20 + 4;
              } while (lVar20 != 0);
            }
            if (uVar28 != 0) {
              lVar23 = uVar8 + lVar24 * 4;
              lVar20 = 0;
              do {
                puVar2 = (undefined4 *)(lVar23 + uVar31 * 4 + lVar20);
                uVar10 = puVar2[1];
                uVar11 = puVar2[2];
                uVar12 = puVar2[3];
                puVar3 = (undefined4 *)(lVar23 + lVar20);
                *puVar3 = *puVar2;
                puVar3[1] = uVar10;
                puVar3[2] = uVar11;
                puVar3[3] = uVar12;
                lVar20 = lVar20 + 0x10;
              } while (uVar28 << 4 != lVar20);
            }
            if (uVar25 != uVar22) goto LAB_01749323;
          }
          uVar22 = (ulonglong)(int)uVar27;
          uVar21 = uVar27;
          if ((bVar14) || ((uVar8 + uVar22 * 4 < uVar9 + uVar31 * 4 && (uVar9 < uVar8 + 0x60)))) {
joined_r0x01749475:
            uVar31 = uVar22;
            if ((uVar22 & 1) != 0) {
              *(undefined4 *)(uVar8 + uVar22 * 4) =
                   *(undefined4 *)(uVar9 + (longlong)(int)(uVar21 - uVar27) * 4);
              uVar21 = uVar21 + 1;
              uVar31 = uVar22 + 1;
            }
            if (uVar22 != 0x17) {
              lVar23 = uVar8 + uVar31 * 4;
              lVar20 = uVar9 + ((ulonglong)uVar21 - (longlong)(int)-uVar29) * 4;
              lVar24 = 0;
              do {
                *(undefined4 *)(lVar23 + lVar24 * 4) = *(undefined4 *)(lVar20 + -0x60 + lVar24 * 4);
                *(undefined4 *)(lVar23 + 4 + lVar24 * 4) =
                     *(undefined4 *)(lVar20 + -0x5c + lVar24 * 4);
                lVar24 = lVar24 + 2;
              } while (0x18 - uVar31 != lVar24);
            }
          }
          else {
            uVar25 = (ulonglong)(uVar29 & 0xfffffffc);
            uVar19 = (uVar25 - 4 >> 2) + 1;
            uVar28 = (ulonglong)((uint)uVar19 & 3);
            if (uVar25 - 4 < 0xc) {
              lVar20 = 0;
            }
            else {
              lVar23 = uVar8 + uVar22 * 4;
              lVar24 = -(uVar19 & 0xfffffffffffffffc);
              lVar26 = 0;
              lVar20 = 0;
              do {
                puVar1 = (undefined8 *)(uVar9 + (lVar26 >> 0x1e));
                uVar13 = puVar1[1];
                puVar4 = (undefined8 *)(lVar23 + lVar20 * 4);
                *puVar4 = *puVar1;
                puVar4[1] = uVar13;
                puVar1 = (undefined8 *)(uVar9 + (lVar26 + 0x400000000 >> 0x1e));
                uVar13 = puVar1[1];
                puVar4 = (undefined8 *)(lVar23 + 0x10 + lVar20 * 4);
                *puVar4 = *puVar1;
                puVar4[1] = uVar13;
                puVar1 = (undefined8 *)(uVar9 + (lVar26 + 0x800000000 >> 0x1e));
                uVar13 = puVar1[1];
                puVar4 = (undefined8 *)(lVar23 + 0x20 + lVar20 * 4);
                *puVar4 = *puVar1;
                puVar4[1] = uVar13;
                puVar2 = (undefined4 *)(uVar9 + (lVar26 + 0xc00000000 >> 0x1e));
                uVar10 = puVar2[1];
                uVar11 = puVar2[2];
                uVar12 = puVar2[3];
                puVar3 = (undefined4 *)(lVar23 + 0x30 + lVar20 * 4);
                *puVar3 = *puVar2;
                puVar3[1] = uVar10;
                puVar3[2] = uVar11;
                puVar3[3] = uVar12;
                lVar20 = lVar20 + 0x10;
                lVar26 = lVar26 + 0x1000000000;
                lVar24 = lVar24 + 4;
              } while (lVar24 != 0);
            }
            if (uVar28 != 0) {
              lVar23 = lVar20 << 0x20;
              lVar24 = 0;
              do {
                puVar2 = (undefined4 *)(uVar9 + (lVar23 >> 0x1e));
                uVar10 = puVar2[1];
                uVar11 = puVar2[2];
                uVar12 = puVar2[3];
                puVar3 = (undefined4 *)(uVar8 + (lVar20 - uVar31) * 4 + 0x60 + lVar24);
                *puVar3 = *puVar2;
                puVar3[1] = uVar10;
                puVar3[2] = uVar11;
                puVar3[3] = uVar12;
                lVar23 = lVar23 + 0x400000000;
                lVar24 = lVar24 + 0x10;
              } while (uVar28 << 4 != lVar24);
            }
            if (uVar25 != uVar31) {
              uVar22 = uVar22 + uVar25;
              uVar21 = (uVar29 & 0xfffffffc) + uVar27;
              goto joined_r0x01749475;
            }
          }
          if (local_48 != 0) {
            FUN_00d50b20();
          }
          iVar16 = iVar16 + 1;
        } while (iVar16 != iVar5);
      }
      else {
        iVar30 = -iVar5;
        iVar16 = 0;
        do {
          piVar6 = *(int **)(local_48 + 0x10);
          piVar7 = *(int **)(local_48 + 0x10);
          if (*piVar6 != 3) {
            if (*piVar7 == 3) goto LAB_01748930;
LAB_01748689:
            if (piVar6[1] != 3) {
              if (piVar7[1] != 3) goto LAB_017486a9;
              goto LAB_01748930;
            }
            if (piVar7[1] != 3) goto LAB_01748930;
LAB_017486a9:
            if (piVar6[2] != 3) {
              if (piVar7[2] != 3) goto LAB_017486c5;
              goto LAB_01748930;
            }
            if (piVar7[2] != 3) goto LAB_01748930;
LAB_017486c5:
            if (piVar6[3] != 3) {
              if (piVar7[3] != 3) goto LAB_017486e1;
              goto LAB_01748930;
            }
            if (piVar7[3] != 3) goto LAB_01748930;
LAB_017486e1:
            if (piVar6[4] != 3) {
              if (piVar7[4] != 3) goto LAB_017486fd;
              goto LAB_01748930;
            }
            if (piVar7[4] != 3) goto LAB_01748930;
LAB_017486fd:
            if (piVar6[5] != 3) {
              if (piVar7[5] != 3) goto LAB_01748719;
              goto LAB_01748930;
            }
            if (piVar7[5] != 3) goto LAB_01748930;
LAB_01748719:
            if (piVar6[6] != 3) {
              if (piVar7[6] != 3) goto LAB_01748735;
              goto LAB_01748930;
            }
            if (piVar7[6] != 3) goto LAB_01748930;
LAB_01748735:
            if (piVar6[7] != 3) {
              if (piVar7[7] != 3) goto LAB_01748751;
              goto LAB_01748930;
            }
            if (piVar7[7] != 3) goto LAB_01748930;
LAB_01748751:
            if (piVar6[8] != 3) {
              if (piVar7[8] != 3) goto LAB_0174876d;
              goto LAB_01748930;
            }
            if (piVar7[8] != 3) goto LAB_01748930;
LAB_0174876d:
            if (piVar6[9] != 3) {
              if (piVar7[9] != 3) goto LAB_01748789;
              goto LAB_01748930;
            }
            if (piVar7[9] != 3) goto LAB_01748930;
LAB_01748789:
            if (piVar6[10] != 3) {
              if (piVar7[10] != 3) goto LAB_017487a5;
              goto LAB_01748930;
            }
            if (piVar7[10] != 3) goto LAB_01748930;
LAB_017487a5:
            if (piVar6[0xb] != 3) {
              if (piVar7[0xb] != 3) goto LAB_017487c1;
              goto LAB_01748930;
            }
            if (piVar7[0xb] != 3) goto LAB_01748930;
LAB_017487c1:
            if (piVar6[0xc] != 3) {
              if (piVar7[0xc] != 3) goto LAB_017487dd;
              goto LAB_01748930;
            }
            if (piVar7[0xc] != 3) goto LAB_01748930;
LAB_017487dd:
            if (piVar6[0xd] != 3) {
              if (piVar7[0xd] != 3) goto LAB_017487f9;
              goto LAB_01748930;
            }
            if (piVar7[0xd] != 3) goto LAB_01748930;
LAB_017487f9:
            if (piVar6[0xe] != 3) {
              if (piVar7[0xe] != 3) goto LAB_01748815;
              goto LAB_01748930;
            }
            if (piVar7[0xe] != 3) goto LAB_01748930;
LAB_01748815:
            if (piVar6[0xf] != 3) {
              if (piVar7[0xf] != 3) goto LAB_01748831;
              goto LAB_01748930;
            }
            if (piVar7[0xf] != 3) goto LAB_01748930;
LAB_01748831:
            if (piVar6[0x10] != 3) {
              if (piVar7[0x10] != 3) goto LAB_0174884d;
              goto LAB_01748930;
            }
            if (piVar7[0x10] != 3) goto LAB_01748930;
LAB_0174884d:
            if (piVar6[0x11] != 3) {
              if (piVar7[0x11] != 3) goto LAB_01748872;
              goto LAB_01748930;
            }
            if (piVar7[0x11] != 3) goto LAB_01748930;
LAB_01748872:
            if (piVar6[0x12] != 3) {
              if (piVar7[0x12] != 3) goto LAB_01748894;
              goto LAB_01748930;
            }
            if (piVar7[0x12] != 3) goto LAB_01748930;
LAB_01748894:
            if (piVar6[0x13] != 3) {
              if (piVar7[0x13] != 3) goto LAB_017488b6;
              goto LAB_01748930;
            }
            if (piVar7[0x13] != 3) goto LAB_01748930;
LAB_017488b6:
            if (piVar6[0x14] != 3) {
              if (piVar7[0x14] != 3) goto LAB_017488d1;
              goto LAB_01748930;
            }
            if (piVar7[0x14] != 3) goto LAB_01748930;
LAB_017488d1:
            if (piVar6[0x15] != 3) {
              if (piVar7[0x15] != 3) goto LAB_017488ec;
              goto LAB_01748930;
            }
            if (piVar7[0x15] != 3) goto LAB_01748930;
LAB_017488ec:
            if (piVar6[0x16] != 3) {
              if (piVar7[0x16] != 3) goto LAB_01748907;
              goto LAB_01748930;
            }
            if (piVar7[0x16] != 3) goto LAB_01748930;
LAB_01748907:
            pVar18 = piVar7[0x17];
            if (piVar6[0x17] != 3) {
              if (pVar18 != 3) goto LAB_0174964d;
              goto LAB_01748930;
            }
            if (pVar18 != 3) goto LAB_01748930;
LAB_0174964d:
            lVar23 = *(longlong *)(unaff_RDI + 0x58);
            if (lVar23 != 0) {
              FUN_00d50b00();
            }
            pvVar17 = _pthread_getspecific(pVar18);
            if (pvVar17 != (void *)0x0) {
              FUN_00e8b990();
            }
            iVar16 = FUN_01736c50();
            if (lVar23 != 0) {
              FUN_00d50b20();
            }
            iVar16 = iVar16 + iVar30;
            do {
              iVar16 = iVar16 + iVar5;
            } while (iVar16 < 0);
            uVar31 = (longlong)iVar16 % (longlong)iVar5 & 0xffffffff;
            goto LAB_017496e6;
          }
          if (*piVar7 == 3) goto LAB_01748689;
LAB_01748930:
          uVar31 = 1;
          bVar14 = true;
          if (((piVar6[1] == 0) && (uVar31 = 2, piVar6[2] == 0)) && (uVar31 = 3, piVar6[3] == 0)) {
            if (piVar6[4] == 0) {
              if (piVar6[5] == 0) {
                if (piVar6[6] == 0) {
                  if (piVar6[7] == 0) {
                    if (piVar6[8] == 0) {
                      if (piVar6[9] == 0) {
                        if (piVar6[10] == 0) {
                          if (piVar6[0xb] == 0) {
                            if (piVar6[0xc] == 0) {
                              if (piVar6[0xd] == 0) {
                                if (piVar6[0xe] == 0) {
                                  if (piVar6[0xf] == 0) {
                                    if (piVar6[0x10] == 0) {
                                      if (piVar6[0x11] == 0) {
                                        if (piVar6[0x12] == 0) {
                                          if (piVar6[0x13] == 0) {
                                            if (piVar6[0x14] == 0) {
                                              if (piVar6[0x15] == 0) {
                                                if (piVar6[0x16] == 0) {
                                                  if (piVar6[0x17] == 0) {
                                                    uVar31 = 0xffffffff;
                                                    goto LAB_017496eb;
                                                  }
                                                  uVar31 = 0x17;
                                                }
                                                else {
                                                  uVar31 = 0x16;
                                                }
                                              }
                                              else {
                                                uVar31 = 0x15;
                                              }
                                            }
                                            else {
                                              uVar31 = 0x14;
                                            }
                                          }
                                          else {
                                            uVar31 = 0x13;
                                          }
                                        }
                                        else {
                                          uVar31 = 0x12;
                                        }
                                      }
                                      else {
                                        uVar31 = 0x11;
                                      }
                                    }
                                    else {
                                      uVar31 = 0x10;
                                    }
                                  }
                                  else {
                                    uVar31 = 0xf;
                                  }
                                }
                                else {
                                  uVar31 = 0xe;
                                }
                              }
                              else {
                                uVar31 = 0xd;
                              }
                            }
                            else {
                              uVar31 = 0xc;
                            }
                          }
                          else {
                            uVar31 = 0xb;
                          }
                        }
                        else {
                          uVar31 = 10;
                        }
                      }
                      else {
                        uVar31 = 9;
                      }
                    }
                    else {
                      uVar31 = 8;
                    }
                  }
                  else {
                    uVar31 = 7;
                  }
                }
                else {
                  uVar31 = 6;
                }
              }
              else {
                uVar31 = 5;
              }
            }
            else {
              uVar31 = 4;
            }
            bVar14 = false;
          }
          FUN_00c8e690();
          if ((local_40 == '\0') && (local_48 != 0)) {
            FUN_00d50b00();
          }
          FUN_00c92170();
          FUN_00c92160();
          uVar8 = *(ulonglong *)(local_48 + 0x10);
          uVar9 = *(ulonglong *)(local_48 + 0x10);
          uVar29 = (uint)uVar31;
          if ((bVar14) || ((uVar9 < uVar8 + uVar31 * 4 && (uVar8 < uVar9 + uVar31 * 4)))) {
            uVar22 = 0;
LAB_01748b2e:
            uVar19 = ~uVar22;
            for (uVar25 = uVar31 & 3; uVar25 != 0; uVar25 = uVar25 - 1) {
              *(undefined4 *)(uVar9 + uVar22 * 4) = *(undefined4 *)(uVar8 + uVar22 * 4);
              uVar22 = uVar22 + 1;
            }
            if (2 < uVar19 + uVar31) {
              do {
                *(undefined4 *)(uVar9 + uVar22 * 4) = *(undefined4 *)(uVar8 + uVar22 * 4);
                *(undefined4 *)(uVar9 + 4 + uVar22 * 4) = *(undefined4 *)(uVar8 + 4 + uVar22 * 4);
                *(undefined4 *)(uVar9 + 8 + uVar22 * 4) = *(undefined4 *)(uVar8 + 8 + uVar22 * 4);
                *(undefined4 *)(uVar9 + 0xc + uVar22 * 4) =
                     *(undefined4 *)(uVar8 + 0xc + uVar22 * 4);
                uVar22 = uVar22 + 4;
              } while (uVar31 != uVar22);
            }
          }
          else {
            uVar22 = (ulonglong)(uVar29 & 0xfffffffc);
            uVar25 = (uVar22 - 4 >> 2) + 1;
            uVar19 = (ulonglong)((uint)uVar25 & 7);
            if (uVar22 - 4 < 0x1c) {
              lVar20 = 0;
            }
            else {
              lVar23 = -(uVar25 & 0xfffffffffffffff8);
              lVar20 = 0;
              do {
                puVar1 = (undefined8 *)(uVar8 + lVar20 * 4);
                uVar13 = puVar1[1];
                puVar4 = (undefined8 *)(uVar9 + lVar20 * 4);
                *puVar4 = *puVar1;
                puVar4[1] = uVar13;
                puVar1 = (undefined8 *)(uVar8 + 0x10 + lVar20 * 4);
                uVar13 = puVar1[1];
                puVar4 = (undefined8 *)(uVar9 + 0x10 + lVar20 * 4);
                *puVar4 = *puVar1;
                puVar4[1] = uVar13;
                puVar1 = (undefined8 *)(uVar8 + 0x20 + lVar20 * 4);
                uVar13 = puVar1[1];
                puVar4 = (undefined8 *)(uVar9 + 0x20 + lVar20 * 4);
                *puVar4 = *puVar1;
                puVar4[1] = uVar13;
                puVar1 = (undefined8 *)(uVar8 + 0x30 + lVar20 * 4);
                uVar13 = puVar1[1];
                puVar4 = (undefined8 *)(uVar9 + 0x30 + lVar20 * 4);
                *puVar4 = *puVar1;
                puVar4[1] = uVar13;
                puVar1 = (undefined8 *)(uVar8 + 0x40 + lVar20 * 4);
                uVar13 = puVar1[1];
                puVar4 = (undefined8 *)(uVar9 + 0x40 + lVar20 * 4);
                *puVar4 = *puVar1;
                puVar4[1] = uVar13;
                puVar1 = (undefined8 *)(uVar8 + 0x50 + lVar20 * 4);
                uVar13 = puVar1[1];
                puVar4 = (undefined8 *)(uVar9 + 0x50 + lVar20 * 4);
                *puVar4 = *puVar1;
                puVar4[1] = uVar13;
                puVar1 = (undefined8 *)(uVar8 + 0x60 + lVar20 * 4);
                uVar13 = puVar1[1];
                puVar4 = (undefined8 *)(uVar9 + 0x60 + lVar20 * 4);
                *puVar4 = *puVar1;
                puVar4[1] = uVar13;
                puVar2 = (undefined4 *)(uVar8 + 0x70 + lVar20 * 4);
                uVar10 = puVar2[1];
                uVar11 = puVar2[2];
                uVar12 = puVar2[3];
                puVar3 = (undefined4 *)(uVar9 + 0x70 + lVar20 * 4);
                *puVar3 = *puVar2;
                puVar3[1] = uVar10;
                puVar3[2] = uVar11;
                puVar3[3] = uVar12;
                lVar20 = lVar20 + 0x20;
                lVar23 = lVar23 + 8;
              } while (lVar23 != 0);
            }
            if (uVar19 != 0) {
              lVar23 = 0;
              do {
                puVar2 = (undefined4 *)(uVar8 + lVar20 * 4 + lVar23);
                uVar10 = puVar2[1];
                uVar11 = puVar2[2];
                uVar12 = puVar2[3];
                puVar3 = (undefined4 *)(uVar9 + lVar20 * 4 + lVar23);
                *puVar3 = *puVar2;
                puVar3[1] = uVar10;
                puVar3[2] = uVar11;
                puVar3[3] = uVar12;
                lVar23 = lVar23 + 0x10;
              } while (uVar19 << 4 != lVar23);
            }
            if (uVar22 != uVar31) goto LAB_01748b2e;
          }
          uVar27 = -uVar29 + 0x18;
          uVar22 = (ulonglong)uVar27;
          if ((uVar27 < 4) ||
             ((uVar8 < uVar8 + (uVar31 + uVar22) * 4 && (uVar8 + uVar31 * 4 < uVar8 + uVar22 * 4))))
          {
            uVar25 = 0;
LAB_01748c83:
            uVar28 = ~uVar25;
            uVar19 = uVar22 & 3;
            if ((uVar27 & 3) != 0) {
              do {
                *(undefined4 *)(uVar8 + uVar25 * 4) =
                     *(undefined4 *)(uVar8 + uVar31 * 4 + uVar25 * 4);
                uVar25 = uVar25 + 1;
                uVar19 = uVar19 - 1;
              } while (uVar19 != 0);
            }
            if (2 < uVar28 + uVar22) {
              lVar23 = uVar8 + uVar31 * 4;
              do {
                *(undefined4 *)(uVar8 + uVar25 * 4) = *(undefined4 *)(lVar23 + uVar25 * 4);
                *(undefined4 *)(uVar8 + 4 + uVar25 * 4) = *(undefined4 *)(lVar23 + 4 + uVar25 * 4);
                *(undefined4 *)(uVar8 + 8 + uVar25 * 4) = *(undefined4 *)(lVar23 + 8 + uVar25 * 4);
                *(undefined4 *)(uVar8 + 0xc + uVar25 * 4) =
                     *(undefined4 *)(lVar23 + 0xc + uVar25 * 4);
                uVar25 = uVar25 + 4;
              } while (uVar22 != uVar25);
            }
          }
          else {
            uVar25 = (ulonglong)(uVar27 & 0xfffffffc);
            uVar19 = (uVar25 - 4 >> 2) + 1;
            uVar28 = (ulonglong)((uint)uVar19 & 3);
            if (uVar25 - 4 < 0xc) {
              lVar24 = 0;
            }
            else {
              lVar23 = uVar8 + uVar31 * 4;
              lVar20 = -(uVar19 & 0xfffffffffffffffc);
              lVar24 = 0;
              do {
                puVar4 = (undefined8 *)(lVar23 + lVar24 * 4);
                uVar13 = puVar4[1];
                puVar1 = (undefined8 *)(uVar8 + lVar24 * 4);
                *puVar1 = *puVar4;
                puVar1[1] = uVar13;
                puVar1 = (undefined8 *)(lVar23 + 0x10 + lVar24 * 4);
                uVar13 = puVar1[1];
                puVar4 = (undefined8 *)(uVar8 + 0x10 + lVar24 * 4);
                *puVar4 = *puVar1;
                puVar4[1] = uVar13;
                puVar1 = (undefined8 *)(lVar23 + 0x20 + lVar24 * 4);
                uVar13 = puVar1[1];
                puVar4 = (undefined8 *)(uVar8 + 0x20 + lVar24 * 4);
                *puVar4 = *puVar1;
                puVar4[1] = uVar13;
                puVar2 = (undefined4 *)(lVar23 + 0x30 + lVar24 * 4);
                uVar10 = puVar2[1];
                uVar11 = puVar2[2];
                uVar12 = puVar2[3];
                puVar3 = (undefined4 *)(uVar8 + 0x30 + lVar24 * 4);
                *puVar3 = *puVar2;
                puVar3[1] = uVar10;
                puVar3[2] = uVar11;
                puVar3[3] = uVar12;
                lVar24 = lVar24 + 0x10;
                lVar20 = lVar20 + 4;
              } while (lVar20 != 0);
            }
            if (uVar28 != 0) {
              lVar23 = uVar8 + lVar24 * 4;
              lVar20 = 0;
              do {
                puVar2 = (undefined4 *)(lVar23 + uVar31 * 4 + lVar20);
                uVar10 = puVar2[1];
                uVar11 = puVar2[2];
                uVar12 = puVar2[3];
                puVar3 = (undefined4 *)(lVar23 + lVar20);
                *puVar3 = *puVar2;
                puVar3[1] = uVar10;
                puVar3[2] = uVar11;
                puVar3[3] = uVar12;
                lVar20 = lVar20 + 0x10;
              } while (uVar28 << 4 != lVar20);
            }
            if (uVar25 != uVar22) goto LAB_01748c83;
          }
          uVar22 = (ulonglong)(int)uVar27;
          uVar21 = uVar27;
          if ((bVar14) || ((uVar8 + uVar22 * 4 < uVar9 + uVar31 * 4 && (uVar9 < uVar8 + 0x60)))) {
joined_r0x01748dd5:
            uVar31 = uVar22;
            if ((uVar22 & 1) != 0) {
              *(undefined4 *)(uVar8 + uVar22 * 4) =
                   *(undefined4 *)(uVar9 + (longlong)(int)(uVar21 - uVar27) * 4);
              uVar21 = uVar21 + 1;
              uVar31 = uVar22 + 1;
            }
            if (uVar22 != 0x17) {
              lVar23 = uVar8 + uVar31 * 4;
              lVar20 = uVar9 + ((ulonglong)uVar21 - (longlong)(int)-uVar29) * 4;
              lVar24 = 0;
              do {
                *(undefined4 *)(lVar23 + lVar24 * 4) = *(undefined4 *)(lVar20 + -0x60 + lVar24 * 4);
                *(undefined4 *)(lVar23 + 4 + lVar24 * 4) =
                     *(undefined4 *)(lVar20 + -0x5c + lVar24 * 4);
                lVar24 = lVar24 + 2;
              } while (0x18 - uVar31 != lVar24);
            }
          }
          else {
            uVar25 = (ulonglong)(uVar29 & 0xfffffffc);
            uVar19 = (uVar25 - 4 >> 2) + 1;
            uVar28 = (ulonglong)((uint)uVar19 & 3);
            if (uVar25 - 4 < 0xc) {
              lVar20 = 0;
            }
            else {
              lVar23 = uVar8 + uVar22 * 4;
              lVar24 = -(uVar19 & 0xfffffffffffffffc);
              lVar26 = 0;
              lVar20 = 0;
              do {
                puVar1 = (undefined8 *)(uVar9 + (lVar26 >> 0x1e));
                uVar13 = puVar1[1];
                puVar4 = (undefined8 *)(lVar23 + lVar20 * 4);
                *puVar4 = *puVar1;
                puVar4[1] = uVar13;
                puVar1 = (undefined8 *)(uVar9 + (lVar26 + 0x400000000 >> 0x1e));
                uVar13 = puVar1[1];
                puVar4 = (undefined8 *)(lVar23 + 0x10 + lVar20 * 4);
                *puVar4 = *puVar1;
                puVar4[1] = uVar13;
                puVar1 = (undefined8 *)(uVar9 + (lVar26 + 0x800000000 >> 0x1e));
                uVar13 = puVar1[1];
                puVar4 = (undefined8 *)(lVar23 + 0x20 + lVar20 * 4);
                *puVar4 = *puVar1;
                puVar4[1] = uVar13;
                puVar2 = (undefined4 *)(uVar9 + (lVar26 + 0xc00000000 >> 0x1e));
                uVar10 = puVar2[1];
                uVar11 = puVar2[2];
                uVar12 = puVar2[3];
                puVar3 = (undefined4 *)(lVar23 + 0x30 + lVar20 * 4);
                *puVar3 = *puVar2;
                puVar3[1] = uVar10;
                puVar3[2] = uVar11;
                puVar3[3] = uVar12;
                lVar20 = lVar20 + 0x10;
                lVar26 = lVar26 + 0x1000000000;
                lVar24 = lVar24 + 4;
              } while (lVar24 != 0);
            }
            if (uVar28 != 0) {
              lVar23 = lVar20 << 0x20;
              lVar24 = 0;
              do {
                puVar2 = (undefined4 *)(uVar9 + (lVar23 >> 0x1e));
                uVar10 = puVar2[1];
                uVar11 = puVar2[2];
                uVar12 = puVar2[3];
                puVar3 = (undefined4 *)(uVar8 + (lVar20 - uVar31) * 4 + 0x60 + lVar24);
                *puVar3 = *puVar2;
                puVar3[1] = uVar10;
                puVar3[2] = uVar11;
                puVar3[3] = uVar12;
                lVar23 = lVar23 + 0x400000000;
                lVar24 = lVar24 + 0x10;
              } while (uVar28 << 4 != lVar24);
            }
            if (uVar25 != uVar31) {
              uVar22 = uVar22 + uVar25;
              uVar21 = (uVar29 & 0xfffffffc) + uVar27;
              goto joined_r0x01748dd5;
            }
          }
          if (local_48 != 0) {
            FUN_00d50b20();
          }
          iVar16 = iVar16 + 1;
          iVar30 = iVar30 + 1;
        } while (iVar16 != iVar5);
      }
      uVar31 = 0xffffffff;
    }
LAB_017496e6:
    if (local_48 != 0) {
LAB_017496eb:
      FUN_00d50b20();
    }
    if (local_48 != 0) {
      FUN_00d50b20();
    }
  }
  return uVar31;
}


