// Function: FUN_00e9ecb0
// Address: 00e9ecb0
// Size: 4186 bytes
// Class: Unknown
// String references:
//   "/System/Library/Frameworks/QuartzCore.framework/Versions/A/QuartzCore"
//   " {0x%08x, 0x%08x}"
//   "\n    combined CRCs: stored = 0x%08x, computed = 0x%08x"

uint64_t FUN_00e9ecb0(uint64_t param_1,FILE *param_2)

{
  int *piVar1;
  uint *puVar2;
  uint16_t uVar3;
  uint16_t uVar4;
  ushort uVar5;
  ushort uVar6;
  uint uVar7;
  int64_t *plVar8;
  int64_t lVar9;
  byte bVar10;
  uint uVar11;
  uint6 uVar12;
  int iVar13;
  uint64_t uVar14;
  int64_t lVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  FILE *pFVar21;
  uint uVar22;
  int iVar23;
  uint uVar24;
  int iVar25;
  int iVar26;
  int64_t this_ptr;
  uint uVar27;
  int iVar28;
  void*puVar29;
  uint8_t uVar30;
  uint uVar31;
  int64_t local_38;
  
  uVar14 = 0xfffffffe;
  if (((this_ptr != 0) && (plVar8 = *(int64_t **)(this_ptr + 0x30), plVar8 != (int64_t *)0x0))
     && (*plVar8 == this_ptr)) {
    iVar19 = (int)plVar8[1];
LAB_00e9ecf0:
    do {
      if (iVar19 == 1) {
        return 0xffffffff;
      }
      if (iVar19 == 2) {
        if (*(char *)((int64_t)plVar8 + 0x2c) == '\0') {
          if (*(char *)((int64_t)plVar8 + 0x14) == '\0') {
            uVar20 = *(uint *)(plVar8 + 0x18e);
            uVar31 = (uint)*(byte *)((int64_t)plVar8 + 0xc);
            param_2 = (FILE *)(uint64_t)*(uint *)(plVar8 + 2);
            lVar9 = plVar8[0x18a];
            uVar14 = (uint64_t)*(uint *)((int64_t)plVar8 + 0x3c);
            puVar29 = *(void**)(*plVar8 + 0x18);
            iVar19 = *(int *)(*plVar8 + 0x20);
            uVar17 = *(uint *)(plVar8 + 0x1f4a);
            uVar24 = uVar17 + 1;
            uVar18 = (int)plVar8[5] * 100000;
            uVar16 = *(uint *)(plVar8 + 8);
            iVar13 = iVar19;
            uVar22 = *(uint *)((int64_t)plVar8 + 0x444);
            while( true ) {
              uVar27 = uVar22;
              uVar30 = (uint8_t)uVar31;
              uVar22 = (uint)uVar14;
              iVar23 = (int)param_2;
              if (iVar23 < 1) goto LAB_00e9fa4c;
              if (iVar13 == 0) break;
              param_2 = (FILE *)((int64_t)&param_2[-1]._offset + 7);
              lVar15 = 0;
              while ((int)param_2 != (int)lVar15) {
                puVar29[lVar15] = uVar30;
                uVar20 = uVar20 << 8 ^
                         *(uint *)(&g_02789c20 + (uint64_t)(uVar20 >> 0x18 ^ uVar31 & 0xff) * 4);
                lVar15 = lVar15 + 1;
                if (iVar13 == (int)lVar15) {
                  puVar29 = puVar29 + lVar15;
                  iVar23 = iVar23 - (int)lVar15;
                  iVar13 = 0;
                  goto LAB_00e9fb82;
                }
              }
              iVar13 = iVar13 - (int)lVar15;
              puVar29 = puVar29 + lVar15;
              uVar22 = uVar27;
              do {
                uVar27 = uVar22;
                uVar30 = (uint8_t)uVar31;
                uVar22 = (uint)uVar14;
                param_2 = (FILE *)(uint64_t)uVar24;
                if (iVar13 == 0) {
                  iVar13 = 0;
                  iVar23 = 1;
                  goto LAB_00e9fb82;
                }
                *puVar29 = uVar30;
                uVar20 = uVar20 << 8 ^
                         *(uint *)(&g_02789c20 + (uint64_t)(uVar31 & 0xff ^ uVar20 >> 0x18) * 4);
                puVar29 = puVar29 + 1;
                iVar13 = iVar13 + -1;
LAB_00e9fa4c:
                uVar31 = uVar16;
                param_2 = (FILE *)(uint64_t)uVar24;
                uVar22 = (uint)uVar14;
                if ((int)uVar24 < (int)uVar27) {
                  return 0xfffffffc;
                }
                if (uVar27 == uVar24) {
                  iVar23 = 0;
                  uVar16 = uVar31;
                  uVar27 = uVar24;
                  goto LAB_00e9fb82;
                }
                if (uVar18 <= uVar22) {
                  return 0xfffffffc;
                }
                uVar7 = *(uint *)(lVar9 + uVar14 * 4);
                uVar16 = uVar7 & 0xff;
                uVar7 = uVar7 >> 8;
                uVar14 = (uint64_t)uVar7;
                uVar22 = uVar27 + 1;
              } while ((uVar16 != uVar31) || (uVar16 = uVar31, uVar27 == uVar17));
              if (uVar18 <= uVar7) {
                return 0xfffffffc;
              }
              uVar7 = *(uint *)(lVar9 + uVar14 * 4);
              uVar11 = uVar7 >> 8;
              uVar14 = (uint64_t)uVar11;
              param_2 = (FILE *)((int64_t)&MACH_HEADER.magic + 2);
              uVar22 = uVar24;
              if ((uVar27 + 2 != uVar24) &&
                 (uVar16 = uVar7 & 0xff, uVar22 = uVar27 + 2, uVar16 == uVar31)) {
                if (uVar18 <= uVar11) {
                  return 0xfffffffc;
                }
                uVar7 = *(uint *)(lVar9 + uVar14 * 4);
                uVar11 = uVar7 >> 8;
                uVar14 = (uint64_t)uVar11;
                param_2 = (FILE *)((int64_t)&MACH_HEADER.magic + 3);
                uVar16 = uVar31;
                uVar22 = uVar24;
                if ((uVar27 + 3 != uVar24) &&
                   (uVar16 = uVar7 & 0xff, uVar22 = uVar27 + 3, uVar16 == uVar31)) {
                  if (uVar18 <= uVar11) {
                    return 0xfffffffc;
                  }
                  uVar16 = *(uint *)(lVar9 + uVar14 * 4);
                  uVar22 = uVar16 >> 8;
                  if (uVar18 <= uVar22) {
                    return 0xfffffffc;
                  }
                  param_2 = (FILE *)(uint64_t)((uVar16 & 0xff) + 4);
                  uVar22 = *(uint *)(lVar9 + (uint64_t)uVar22 * 4);
                  uVar16 = uVar22 & 0xff;
                  uVar14 = (uint64_t)(uVar22 >> 8);
                  uVar22 = uVar27 + 5;
                }
              }
            }
            iVar13 = 0;
LAB_00e9fb82:
            lVar15 = *plVar8;
            uVar24 = iVar19 - iVar13;
            puVar2 = (uint *)(lVar15 + 0x24);
            uVar17 = *puVar2;
            *puVar2 = *puVar2 + uVar24;
            if (CARRY4(uVar17,uVar24)) {
              *(int *)(lVar15 + 0x28) = *(int *)(lVar15 + 0x28) + 1;
            }
            *(uint *)(plVar8 + 0x18e) = uVar20;
            *(void*)((int64_t)plVar8 + 0xc) = uVar30;
            *(int *)(plVar8 + 2) = iVar23;
            *(uint *)((int64_t)plVar8 + 0x444) = uVar27;
            *(uint *)(plVar8 + 8) = uVar16;
            plVar8[0x18a] = lVar9;
            *(uint *)((int64_t)plVar8 + 0x3c) = uVar22;
            *(void**)(lVar15 + 0x18) = puVar29;
            *(int *)(lVar15 + 0x20) = iVar13;
          }
          else {
            local_38 = *plVar8;
            if (*(int *)(local_38 + 0x20) != 0) {
              iVar19 = (int)plVar8[2];
              do {
                while (iVar19 == 0) {
                  uVar20 = *(uint *)((int64_t)plVar8 + 0x444);
                  uVar17 = *(uint *)(plVar8 + 0x1f4a);
                  if (uVar20 == uVar17 + 1) goto LAB_00e9fbc1;
                  if ((int)(uVar17 + 1) <= (int)uVar20) {
                    return 0xfffffffc;
                  }
                  *(void*)(plVar8 + 2) = 1;
                  uVar16 = *(uint *)(plVar8 + 8);
                  *(char *)((int64_t)plVar8 + 0xc) = (char)uVar16;
                  uVar22 = (int)plVar8[5] * 100000;
                  if (uVar22 <= *(uint *)((int64_t)plVar8 + 0x3c)) {
                    return 0xfffffffc;
                  }
                  lVar9 = plVar8[0x18a];
                  uVar24 = *(uint *)(lVar9 + (uint64_t)*(uint *)((int64_t)plVar8 + 0x3c) * 4);
                  param_2 = (FILE *)(uint64_t)uVar24;
                  uVar18 = uVar24 >> 8;
                  *(uint *)((int64_t)plVar8 + 0x3c) = uVar18;
                  iVar13 = (int)plVar8[3];
                  if (iVar13 == 0) {
                    iVar13 = (&g_0278a020)[*(int *)((int64_t)plVar8 + 0x1c)];
                    iVar19 = *(int *)((int64_t)plVar8 + 0x1c) + 1;
                    if (iVar19 == 0x200) {
                      iVar19 = 0;
                    }
                    *(int *)((int64_t)plVar8 + 0x1c) = iVar19;
                  }
                  iVar13 = iVar13 + -1;
                  *(int *)(plVar8 + 3) = iVar13;
                  *(uint *)((int64_t)plVar8 + 0x444) = uVar20 + 1;
                  iVar19 = 1;
                  if (uVar20 != uVar17) {
                    uVar24 = uVar24 & 0xff ^ (uint)(iVar13 == 1);
                    if (uVar24 == uVar16) {
                      *(void*)(plVar8 + 2) = 2;
                      if (uVar22 <= uVar18) {
                        return 0xfffffffc;
                      }
                      uVar24 = *(uint *)(lVar9 + (uint64_t)uVar18 * 4);
                      uVar18 = uVar24 >> 8;
                      *(uint *)((int64_t)plVar8 + 0x3c) = uVar18;
                      if (iVar13 == 0) {
                        iVar13 = (&g_0278a020)[*(int *)((int64_t)plVar8 + 0x1c)];
                        iVar19 = *(int *)((int64_t)plVar8 + 0x1c) + 1;
                        if (iVar19 == 0x200) {
                          iVar19 = 0;
                        }
                        *(int *)((int64_t)plVar8 + 0x1c) = iVar19;
                      }
                      iVar13 = iVar13 + -1;
                      *(int *)(plVar8 + 3) = iVar13;
                      uVar31 = uVar20 + 2;
                      param_2 = (FILE *)(uint64_t)uVar31;
                      *(uint *)((int64_t)plVar8 + 0x444) = uVar31;
                      iVar19 = 2;
                      if (uVar20 + 1 != uVar17) {
                        uVar24 = uVar24 & 0xff ^ (uint)(iVar13 == 1);
                        if (uVar24 != uVar16) goto LAB_00e9f258;
                        *(void*)(plVar8 + 2) = 3;
                        if (uVar22 <= uVar18) {
                          return 0xfffffffc;
                        }
                        uVar24 = *(uint *)(lVar9 + (uint64_t)uVar18 * 4);
                        uVar18 = uVar24 >> 8;
                        param_2 = (FILE *)(uint64_t)uVar18;
                        *(uint *)((int64_t)plVar8 + 0x3c) = uVar18;
                        if (iVar13 == 0) {
                          iVar13 = (&g_0278a020)[*(int *)((int64_t)plVar8 + 0x1c)];
                          iVar19 = *(int *)((int64_t)plVar8 + 0x1c) + 1;
                          if (iVar19 == 0x200) {
                            iVar19 = 0;
                          }
                          *(int *)((int64_t)plVar8 + 0x1c) = iVar19;
                        }
                        iVar13 = iVar13 + -1;
                        *(int *)(plVar8 + 3) = iVar13;
                        *(uint *)((int64_t)plVar8 + 0x444) = uVar20 + 3;
                        iVar19 = 3;
                        if (uVar31 != uVar17) {
                          uVar17 = uVar24 & 0xff ^ (uint)(iVar13 == 1);
                          if (uVar17 == uVar16) {
                            if (uVar22 <= uVar18) {
                              return 0xfffffffc;
                            }
                            uVar17 = *(uint *)(lVar9 + (int64_t)param_2 * 4);
                            param_2 = (FILE *)(uint64_t)uVar17;
                            uVar16 = uVar17 >> 8;
                            *(uint *)((int64_t)plVar8 + 0x3c) = uVar16;
                            if (iVar13 == 0) {
                              iVar13 = (&g_0278a020)[*(int *)((int64_t)plVar8 + 0x1c)];
                              iVar19 = *(int *)((int64_t)plVar8 + 0x1c) + 1;
                              if (iVar19 == 0x200) {
                                iVar19 = 0;
                              }
                              *(int *)((int64_t)plVar8 + 0x1c) = iVar19;
                            }
                            iVar13 = iVar13 + -1;
                            *(int *)(plVar8 + 3) = iVar13;
                            *(uint *)((int64_t)plVar8 + 0x444) = uVar20 + 4;
                            iVar19 = (uVar17 & 0xff ^ (uint)(iVar13 == 1)) + 4;
                            *(int *)(plVar8 + 2) = iVar19;
                            if (uVar22 <= uVar16) {
                              return 0xfffffffc;
                            }
                            uVar17 = *(uint *)(lVar9 + (uint64_t)uVar16 * 4);
                            uVar16 = uVar17 & 0xff;
                            *(uint *)(plVar8 + 8) = uVar16;
                            *(uint *)((int64_t)plVar8 + 0x3c) = uVar17 >> 8;
                            if (iVar13 == 0) {
                              iVar13 = (&g_0278a020)[*(int *)((int64_t)plVar8 + 0x1c)];
                              iVar23 = *(int *)((int64_t)plVar8 + 0x1c) + 1;
                              param_2 = (FILE *)0x0;
                              if (iVar23 == 0x200) {
                                iVar23 = 0;
                              }
                              *(int *)((int64_t)plVar8 + 0x1c) = iVar23;
                            }
                            *(int *)(plVar8 + 3) = iVar13 + -1;
                            *(uint *)(plVar8 + 8) = uVar16 ^ iVar13 + -1 == 1;
                            *(uint *)((int64_t)plVar8 + 0x444) = uVar20 + 5;
                          }
                          else {
                            *(uint *)(plVar8 + 8) = uVar17;
                          }
                        }
                      }
                    }
                    else {
LAB_00e9f258:
                      param_2 = (FILE *)(uint64_t)uVar24;
                      *(uint *)(plVar8 + 8) = uVar24;
                    }
                  }
                  if (*(int *)(local_38 + 0x20) == 0) goto LAB_00e9fbc1;
                }
                **(void**)(local_38 + 0x18) = *(void*)((int64_t)plVar8 + 0xc);
                param_2 = (FILE *)(uint64_t)
                                  ((uint)*(byte *)((int64_t)plVar8 + 0xc) ^
                                  *(uint *)(plVar8 + 0x18e) >> 0x18);
                *(uint *)(plVar8 + 0x18e) =
                     *(uint *)(plVar8 + 0x18e) << 8 ^
                     *(uint *)(&g_02789c20 + (int64_t)param_2 * 4);
                iVar19 = (int)plVar8[2] + -1;
                *(int *)(plVar8 + 2) = iVar19;
                local_38 = *plVar8;
                *(int64_t *)(local_38 + 0x18) = *(int64_t *)(local_38 + 0x18) + 1;
                iVar13 = *(int *)(local_38 + 0x20) + -1;
                *(int *)(local_38 + 0x20) = iVar13;
                piVar1 = (int *)(local_38 + 0x24);
                *piVar1 = *piVar1 + 1;
                if (*piVar1 == 0) {
                  *(int *)(local_38 + 0x28) = *(int *)(local_38 + 0x28) + 1;
                }
              } while (iVar13 != 0);
            }
          }
        }
        else {
          local_38 = *plVar8;
          if (*(char *)((int64_t)plVar8 + 0x14) == '\0') {
            if (*(int *)(local_38 + 0x20) != 0) {
              iVar19 = (int)plVar8[2];
              do {
                while (iVar19 == 0) {
                  iVar13 = *(int *)((int64_t)plVar8 + 0x444);
                  iVar23 = (int)plVar8[0x1f4a];
                  if (iVar13 == iVar23 + 1) goto LAB_00e9fbc1;
                  if (iVar23 + 1 <= iVar13) {
                    return 0xfffffffc;
                  }
                  *(void*)(plVar8 + 2) = 1;
                  uVar20 = *(uint *)((int64_t)plVar8 + 0x3c);
                  uVar17 = *(uint *)(plVar8 + 8);
                  *(char *)((int64_t)plVar8 + 0xc) = (char)uVar17;
                  uVar16 = (int)plVar8[5] * 100000;
                  if (uVar16 <= uVar20) {
                    return 0xfffffffc;
                  }
                  pFVar21 = (FILE *)0x0;
                  uVar22 = 0x100;
                  do {
                    while( true ) {
                      uVar24 = (int)((int)pFVar21 + uVar22) >> 1;
                      param_2 = (FILE *)(uint64_t)uVar24;
                      if (*(int *)((int64_t)plVar8 + (int64_t)(int)uVar24 * 4 + 0x448) <=
                          (int)uVar20) break;
                      param_2 = pFVar21;
                      uVar22 = uVar24;
                      if (uVar24 - (int)pFVar21 == 1) goto LAB_00e9f638;
                    }
                    pFVar21 = param_2;
                  } while (uVar22 - uVar24 != 1);
LAB_00e9f638:
                  lVar9 = plVar8[0x18b];
                  lVar15 = plVar8[0x18c];
                  uVar3 = *(void*)(lVar9 + (uint64_t)uVar20 * 2);
                  bVar10 = *(byte *)(lVar15 + (uint64_t)(uVar20 >> 1)) >>
                           ((char)uVar20 * '\x04' & 4U);
                  uVar12 = (uint6)CONCAT12(bVar10,uVar3) & 0xfffff;
                  uVar20 = (uint)uVar12;
                  *(uint *)((int64_t)plVar8 + 0x3c) = uVar20;
                  *(int *)((int64_t)plVar8 + 0x444) = iVar13 + 1;
                  iVar19 = 1;
                  if (iVar13 != iVar23) {
                    uVar22 = (uint)param_2 & 0xff;
                    if (uVar22 == uVar17) {
                      *(void*)(plVar8 + 2) = 2;
                      if (uVar16 <= uVar20) {
                        return 0xfffffffc;
                      }
                      pFVar21 = (FILE *)0x0;
                      uVar22 = 0x100;
                      do {
                        while( true ) {
                          uVar24 = (int)((int)pFVar21 + uVar22) >> 1;
                          param_2 = (FILE *)(uint64_t)uVar24;
                          if (*(int *)((int64_t)plVar8 + (int64_t)(int)uVar24 * 4 + 0x448) <=
                              (int)uVar20) break;
                          param_2 = pFVar21;
                          uVar22 = uVar24;
                          if (uVar24 - (int)pFVar21 == 1) goto LAB_00e9f6e8;
                        }
                        pFVar21 = param_2;
                      } while (uVar22 - uVar24 != 1);
LAB_00e9f6e8:
                      uVar4 = *(void*)(lVar9 + (uint64_t)uVar12 * 2);
                      bVar10 = *(byte *)(lVar15 + (uint64_t)
                                                  (((uint6)CONCAT12(bVar10,uVar3) & 0xfffff) >> 1))
                               >> (((byte)uVar3 & 1) << 2);
                      uVar12 = (uint6)CONCAT12(bVar10,uVar4) & 0xfffff;
                      uVar20 = (uint)uVar12;
                      *(uint *)((int64_t)plVar8 + 0x3c) = uVar20;
                      *(int *)((int64_t)plVar8 + 0x444) = iVar13 + 2;
                      iVar19 = 2;
                      if (iVar13 + 1 != iVar23) {
                        uVar22 = (uint)param_2 & 0xff;
                        if (uVar22 != uVar17) goto LAB_00e9f594;
                        *(void*)(plVar8 + 2) = 3;
                        if (uVar16 <= uVar20) {
                          return 0xfffffffc;
                        }
                        pFVar21 = (FILE *)0x0;
                        uVar22 = 0x100;
                        do {
                          while( true ) {
                            uVar24 = (int)((int)pFVar21 + uVar22) >> 1;
                            param_2 = (FILE *)(uint64_t)uVar24;
                            if (*(int *)((int64_t)plVar8 + (int64_t)(int)uVar24 * 4 + 0x448) <=
                                (int)uVar20) break;
                            param_2 = pFVar21;
                            uVar22 = uVar24;
                            if (uVar24 - (int)pFVar21 == 1) goto LAB_00e9f787;
                          }
                          pFVar21 = param_2;
                        } while (uVar22 - uVar24 != 1);
LAB_00e9f787:
                        uVar3 = *(void*)(lVar9 + (uint64_t)uVar12 * 2);
                        bVar10 = *(byte *)(lVar15 + (uint64_t)
                                                    (((uint6)CONCAT12(bVar10,uVar4) & 0xfffff) >> 1)
                                          ) >> (((byte)uVar4 & 1) << 2);
                        uVar12 = (uint6)CONCAT12(bVar10,uVar3) & 0xfffff;
                        uVar20 = (uint)uVar12;
                        *(uint *)((int64_t)plVar8 + 0x3c) = uVar20;
                        *(int *)((int64_t)plVar8 + 0x444) = iVar13 + 3;
                        iVar19 = 3;
                        if (iVar13 + 2 != iVar23) {
                          uVar22 = (uint)param_2 & 0xff;
                          if (uVar22 != uVar17) goto LAB_00e9f594;
                          if (uVar16 <= uVar20) {
                            return 0xfffffffc;
                          }
                          uVar17 = 0x100;
                          uVar22 = 0;
                          do {
                            while (uVar24 = (int)(uVar22 + uVar17) >> 1,
                                  *(int *)((int64_t)plVar8 + (int64_t)(int)uVar24 * 4 + 0x448) <=
                                  (int)uVar20) {
                              uVar22 = uVar24;
                              if (uVar17 - uVar24 == 1) goto LAB_00e9f818;
                            }
                            iVar19 = uVar24 - uVar22;
                            uVar17 = uVar24;
                            uVar24 = uVar22;
                          } while (iVar19 != 1);
LAB_00e9f818:
                          bVar10 = *(byte *)(lVar15 + (uint64_t)
                                                      (((uint6)CONCAT12(bVar10,uVar3) & 0xfffff) >>
                                                      1)) >> (((byte)uVar3 & 1) << 2);
                          uVar3 = *(void*)(lVar9 + (uint64_t)uVar12 * 2);
                          uVar12 = (uint6)CONCAT12(bVar10,uVar3) & 0xfffff;
                          param_2 = (FILE *)(uint64_t)uVar12;
                          uVar20 = (uint)uVar12;
                          *(uint *)((int64_t)plVar8 + 0x3c) = uVar20;
                          *(int *)((int64_t)plVar8 + 0x444) = iVar13 + 4;
                          iVar19 = (uVar24 & 0xff) + 4;
                          *(int *)(plVar8 + 2) = iVar19;
                          if (uVar16 <= uVar20) {
                            return 0xfffffffc;
                          }
                          iVar23 = 0x100;
                          iVar28 = 0;
                          do {
                            while (iVar25 = iVar28 + iVar23 >> 1,
                                  *(int *)((int64_t)plVar8 + (int64_t)iVar25 * 4 + 0x448) <=
                                  (int)uVar20) {
                              iVar28 = iVar25;
                              if (iVar23 - iVar25 == 1) goto LAB_00e9f89a;
                            }
                            iVar26 = iVar25 - iVar28;
                            iVar23 = iVar25;
                            iVar25 = iVar28;
                          } while (iVar26 != 1);
LAB_00e9f89a:
                          *(int *)(plVar8 + 8) = iVar25;
                          *(uint *)((int64_t)plVar8 + 0x3c) =
                               (*(byte *)(lVar15 + (uint64_t)
                                                   (((uint6)CONCAT12(bVar10,uVar3) & 0xfffff) >> 1))
                                >> (((byte)uVar3 & 1) << 2) & 0xf) << 0x10 |
                               (uint)*(ushort *)(lVar9 + (int64_t)param_2 * 2);
                          *(int *)((int64_t)plVar8 + 0x444) = iVar13 + 5;
                        }
                      }
                    }
                    else {
LAB_00e9f594:
                      *(uint *)(plVar8 + 8) = uVar22;
                    }
                  }
                  if (*(int *)(local_38 + 0x20) == 0) goto LAB_00e9fbc1;
                }
                **(void**)(local_38 + 0x18) = *(void*)((int64_t)plVar8 + 0xc);
                param_2 = (FILE *)(uint64_t)
                                  ((uint)*(byte *)((int64_t)plVar8 + 0xc) ^
                                  *(uint *)(plVar8 + 0x18e) >> 0x18);
                *(uint *)(plVar8 + 0x18e) =
                     *(uint *)(plVar8 + 0x18e) << 8 ^
                     *(uint *)(&g_02789c20 + (int64_t)param_2 * 4);
                iVar19 = (int)plVar8[2] + -1;
                *(int *)(plVar8 + 2) = iVar19;
                local_38 = *plVar8;
                *(int64_t *)(local_38 + 0x18) = *(int64_t *)(local_38 + 0x18) + 1;
                iVar13 = *(int *)(local_38 + 0x20) + -1;
                *(int *)(local_38 + 0x20) = iVar13;
                piVar1 = (int *)(local_38 + 0x24);
                *piVar1 = *piVar1 + 1;
                if (*piVar1 == 0) {
                  *(int *)(local_38 + 0x28) = *(int *)(local_38 + 0x28) + 1;
                }
              } while (iVar13 != 0);
            }
          }
          else if (*(int *)(local_38 + 0x20) != 0) {
            iVar19 = (int)plVar8[2];
            do {
              while (iVar19 == 0) {
                iVar13 = *(int *)((int64_t)plVar8 + 0x444);
                iVar23 = (int)plVar8[0x1f4a];
                if (iVar13 == iVar23 + 1) goto LAB_00e9fbc1;
                if (iVar23 + 1 <= iVar13) {
                  return 0xfffffffc;
                }
                *(void*)(plVar8 + 2) = 1;
                uVar20 = *(uint *)((int64_t)plVar8 + 0x3c);
                uVar17 = *(uint *)(plVar8 + 8);
                *(char *)((int64_t)plVar8 + 0xc) = (char)uVar17;
                uVar16 = (int)plVar8[5] * 100000;
                if (uVar16 <= uVar20) {
                  return 0xfffffffc;
                }
                uVar22 = 0x100;
                uVar24 = 0;
                do {
                  while (uVar18 = (int)(uVar24 + uVar22) >> 1,
                        *(int *)((int64_t)plVar8 + (int64_t)(int)uVar18 * 4 + 0x448) <=
                        (int)uVar20) {
                    uVar24 = uVar18;
                    if (uVar22 - uVar18 == 1) goto LAB_00e9ede8;
                  }
                  iVar19 = uVar18 - uVar24;
                  uVar22 = uVar18;
                  uVar18 = uVar24;
                } while (iVar19 != 1);
LAB_00e9ede8:
                param_2 = (FILE *)((int64_t)&MACH_HEADER.magic + 1);
                lVar9 = plVar8[0x18c];
                bVar10 = *(byte *)(lVar9 + (uint64_t)(uVar20 >> 1)) >> ((char)uVar20 * '\x04' & 4U)
                ;
                lVar15 = plVar8[0x18b];
                uVar3 = *(void*)(lVar15 + (uint64_t)uVar20 * 2);
                uVar12 = (uint6)CONCAT12(bVar10,uVar3) & 0xfffff;
                uVar20 = (uint)uVar12;
                *(uint *)((int64_t)plVar8 + 0x3c) = uVar20;
                iVar28 = (int)plVar8[3];
                if (iVar28 == 0) {
                  iVar28 = (&g_0278a020)[*(int *)((int64_t)plVar8 + 0x1c)];
                  iVar19 = *(int *)((int64_t)plVar8 + 0x1c) + 1;
                  param_2 = (FILE *)0x0;
                  if (iVar19 == 0x200) {
                    iVar19 = 0;
                  }
                  *(int *)((int64_t)plVar8 + 0x1c) = iVar19;
                }
                iVar28 = iVar28 + -1;
                *(int *)(plVar8 + 3) = iVar28;
                *(int *)((int64_t)plVar8 + 0x444) = iVar13 + 1;
                iVar19 = 1;
                if (iVar13 != iVar23) {
                  uVar22 = uVar18 & 0xff ^ (uint)(iVar28 == 1);
                  if (uVar22 == uVar17) {
                    *(void*)(plVar8 + 2) = 2;
                    if (uVar16 <= uVar20) {
                      return 0xfffffffc;
                    }
                    uVar22 = 0x100;
                    uVar24 = 0;
                    do {
                      while (uVar18 = (int)(uVar24 + uVar22) >> 1,
                            *(int *)((int64_t)plVar8 + (int64_t)(int)uVar18 * 4 + 0x448) <=
                            (int)uVar20) {
                        uVar24 = uVar18;
                        if (uVar22 - uVar18 == 1) goto LAB_00e9eed8;
                      }
                      iVar19 = uVar18 - uVar24;
                      uVar22 = uVar18;
                      uVar18 = uVar24;
                    } while (iVar19 != 1);
LAB_00e9eed8:
                    uVar4 = *(void*)(lVar15 + (uint64_t)uVar12 * 2);
                    bVar10 = *(byte *)(lVar9 + (uint64_t)
                                               (((uint6)CONCAT12(bVar10,uVar3) & 0xfffff) >> 1)) >>
                             (((byte)uVar3 & 1) << 2);
                    uVar12 = (uint6)CONCAT12(bVar10,uVar4) & 0xfffff;
                    param_2 = (FILE *)(uint64_t)uVar12;
                    uVar20 = (uint)uVar12;
                    *(uint *)((int64_t)plVar8 + 0x3c) = uVar20;
                    if (iVar28 == 0) {
                      iVar28 = (&g_0278a020)[*(int *)((int64_t)plVar8 + 0x1c)];
                      iVar19 = *(int *)((int64_t)plVar8 + 0x1c) + 1;
                      if (iVar19 == 0x200) {
                        iVar19 = 0;
                      }
                      *(int *)((int64_t)plVar8 + 0x1c) = iVar19;
                    }
                    iVar28 = iVar28 + -1;
                    *(int *)(plVar8 + 3) = iVar28;
                    *(int *)((int64_t)plVar8 + 0x444) = iVar13 + 2;
                    iVar19 = 2;
                    if (iVar13 + 1 != iVar23) {
                      uVar22 = uVar18 & 0xff ^ (uint)(iVar28 == 1);
                      if (uVar22 == uVar17) {
                        *(void*)(plVar8 + 2) = 3;
                        if (uVar16 <= uVar20) {
                          return 0xfffffffc;
                        }
                        uVar22 = 0x100;
                        uVar24 = 0;
                        do {
                          while (uVar18 = (int)(uVar24 + uVar22) >> 1,
                                *(int *)((int64_t)plVar8 + (int64_t)(int)uVar18 * 4 + 0x448) <=
                                (int)uVar20) {
                            uVar24 = uVar18;
                            if (uVar22 - uVar18 == 1) goto LAB_00e9efb1;
                          }
                          iVar19 = uVar18 - uVar24;
                          uVar22 = uVar18;
                          uVar18 = uVar24;
                        } while (iVar19 != 1);
LAB_00e9efb1:
                        uVar5 = *(ushort *)(lVar15 + (int64_t)param_2 * 2);
                        bVar10 = *(byte *)(lVar9 + (uint64_t)
                                                   (((uint6)CONCAT12(bVar10,uVar4) & 0xfffff) >> 1))
                                 >> (((byte)uVar4 & 1) << 2);
                        uVar12 = (uint6)CONCAT12(bVar10,uVar5) & 0xfffff;
                        param_2 = (FILE *)(uint64_t)uVar12;
                        uVar20 = (uint)uVar12;
                        *(uint *)((int64_t)plVar8 + 0x3c) = uVar20;
                        if (iVar28 == 0) {
                          iVar28 = (&g_0278a020)[*(int *)((int64_t)plVar8 + 0x1c)];
                          iVar19 = *(int *)((int64_t)plVar8 + 0x1c) + 1;
                          if (iVar19 == 0x200) {
                            iVar19 = 0;
                          }
                          *(int *)((int64_t)plVar8 + 0x1c) = iVar19;
                        }
                        iVar28 = iVar28 + -1;
                        *(int *)(plVar8 + 3) = iVar28;
                        *(int *)((int64_t)plVar8 + 0x444) = iVar13 + 3;
                        iVar19 = 3;
                        if (iVar13 + 2 != iVar23) {
                          uVar22 = uVar18 & 0xff ^ (uint)(iVar28 == 1);
                          if (uVar22 != uVar17) goto LAB_00e9f1bf;
                          if (uVar16 <= uVar20) {
                            return 0xfffffffc;
                          }
                          uVar17 = 0x100;
                          uVar22 = 0;
                          do {
                            while (uVar24 = (int)(uVar22 + uVar17) >> 1,
                                  *(int *)((int64_t)plVar8 + (int64_t)(int)uVar24 * 4 + 0x448) <=
                                  (int)uVar20) {
                              uVar22 = uVar24;
                              if (uVar17 - uVar24 == 1) goto LAB_00e9f080;
                            }
                            iVar19 = uVar24 - uVar22;
                            uVar17 = uVar24;
                            uVar24 = uVar22;
                          } while (iVar19 != 1);
LAB_00e9f080:
                          uVar6 = *(ushort *)(lVar15 + (int64_t)param_2 * 2);
                          bVar10 = *(byte *)(lVar9 + (uint64_t)
                                                     (((uint6)CONCAT12(bVar10,uVar5) & 0xfffff) >> 1
                                                     )) >>
                                   (sbyte)(((uint64_t)uVar5 & 0x3fffffffffffffc1) << 2);
                          uVar12 = (uint6)CONCAT12(bVar10,uVar6) & 0xfffff;
                          uVar20 = (uint)uVar12;
                          *(uint *)((int64_t)plVar8 + 0x3c) = uVar20;
                          if (iVar28 == 0) {
                            iVar28 = (&g_0278a020)[*(int *)((int64_t)plVar8 + 0x1c)];
                            iVar19 = *(int *)((int64_t)plVar8 + 0x1c) + 1;
                            if (iVar19 == 0x200) {
                              iVar19 = 0;
                            }
                            *(int *)((int64_t)plVar8 + 0x1c) = iVar19;
                          }
                          iVar28 = iVar28 + -1;
                          *(int *)(plVar8 + 3) = iVar28;
                          *(int *)((int64_t)plVar8 + 0x444) = iVar13 + 4;
                          iVar19 = (uVar24 & 0xff ^ (uint)(iVar28 == 1)) + 4;
                          *(int *)(plVar8 + 2) = iVar19;
                          if (uVar16 <= uVar20) {
                            return 0xfffffffc;
                          }
                          uVar17 = 0x100;
                          uVar16 = 0;
                          do {
                            while (uVar22 = (int)(uVar16 + uVar17) >> 1,
                                  *(int *)((int64_t)plVar8 + (int64_t)(int)uVar22 * 4 + 0x448) <=
                                  (int)uVar20) {
                              uVar16 = uVar22;
                              if (uVar17 - uVar22 == 1) goto LAB_00e9f13f;
                            }
                            iVar23 = uVar22 - uVar16;
                            uVar17 = uVar22;
                            uVar22 = uVar16;
                          } while (iVar23 != 1);
LAB_00e9f13f:
                          *(uint *)(plVar8 + 8) = uVar22;
                          uVar20 = (*(byte *)(lVar9 + (uint64_t)
                                                      (((uint6)CONCAT12(bVar10,uVar6) & 0xfffff) >>
                                                      1)) >>
                                    (sbyte)(((uint64_t)uVar6 & 0x3fffffffffffffc1) << 2) & 0xf) <<
                                   0x10 | (uint)*(ushort *)(lVar15 + (uint64_t)uVar12 * 2);
                          param_2 = (FILE *)(uint64_t)uVar20;
                          *(uint *)((int64_t)plVar8 + 0x3c) = uVar20;
                          if (iVar28 == 0) {
                            iVar28 = (&g_0278a020)[*(int *)((int64_t)plVar8 + 0x1c)];
                            iVar23 = *(int *)((int64_t)plVar8 + 0x1c) + 1;
                            param_2 = (FILE *)0x0;
                            if (iVar23 == 0x200) {
                              iVar23 = 0;
                            }
                            *(int *)((int64_t)plVar8 + 0x1c) = iVar23;
                          }
                          *(int *)(plVar8 + 3) = iVar28 + -1;
                          *(uint *)(plVar8 + 8) = uVar22 ^ iVar28 + -1 == 1;
                          *(int *)((int64_t)plVar8 + 0x444) = iVar13 + 5;
                        }
                      }
                      else {
LAB_00e9f1bf:
                        *(uint *)(plVar8 + 8) = uVar22;
                      }
                    }
                  }
                  else {
                    *(uint *)(plVar8 + 8) = uVar22;
                  }
                }
                if (*(int *)(local_38 + 0x20) == 0) goto LAB_00e9fbc1;
              }
              **(void**)(local_38 + 0x18) = *(void*)((int64_t)plVar8 + 0xc);
              param_2 = (FILE *)(uint64_t)
                                ((uint)*(byte *)((int64_t)plVar8 + 0xc) ^
                                *(uint *)(plVar8 + 0x18e) >> 0x18);
              *(uint *)(plVar8 + 0x18e) =
                   *(uint *)(plVar8 + 0x18e) << 8 ^ *(uint *)(&g_02789c20 + (int64_t)param_2 * 4)
              ;
              iVar19 = (int)plVar8[2] + -1;
              *(int *)(plVar8 + 2) = iVar19;
              local_38 = *plVar8;
              *(int64_t *)(local_38 + 0x18) = *(int64_t *)(local_38 + 0x18) + 1;
              iVar13 = *(int *)(local_38 + 0x20) + -1;
              *(int *)(local_38 + 0x20) = iVar13;
              piVar1 = (int *)(local_38 + 0x24);
              *piVar1 = *piVar1 + 1;
              if (*piVar1 == 0) {
                *(int *)(local_38 + 0x28) = *(int *)(local_38 + 0x28) + 1;
              }
            } while (iVar13 != 0);
          }
        }
LAB_00e9fbc1:
        if (*(int *)((int64_t)plVar8 + 0x444) != (int)plVar8[0x1f4a] + 1) {
          return 0;
        }
        if ((int)plVar8[2] != 0) {
          return 0;
        }
        uVar20 = ~*(uint *)(plVar8 + 0x18e);
        *(uint *)(plVar8 + 0x18e) = uVar20;
        if (*(int *)((int64_t)plVar8 + 0x34) < 3) {
          if (1 < *(int *)((int64_t)plVar8 + 0x34)) goto LAB_00e9fc40;
LAB_00e9fc26:
          uVar20 = *(uint *)(plVar8 + 0x18e);
          if (uVar20 != *(uint *)(plVar8 + 0x18d)) {
            return 0xfffffffc;
          }
        }
        else {
          param_2 = (FILE *)(uint64_t)*(uint *)(plVar8 + 0x18d);
          _fprintf((FILE *)(uint64_t)uVar20,(char *)param_2);
          if (*(int *)((int64_t)plVar8 + 0x34) < 2) goto LAB_00e9fc26;
LAB_00e9fc40:
          _fputc(uVar20,param_2);
          uVar20 = *(uint *)(plVar8 + 0x18e);
          if (uVar20 != *(uint *)(plVar8 + 0x18d)) {
            return 0xfffffffc;
          }
        }
        *(uint *)((int64_t)plVar8 + 0xc74) =
             (*(int *)((int64_t)plVar8 + 0xc74) << 1 |
             (uint)(*(int *)((int64_t)plVar8 + 0xc74) < 0)) ^ uVar20;
        *(void*)(plVar8 + 1) = 0xe;
        uVar14 = FUN_00ea47f0();
        iVar19 = (int)uVar14;
      }
      else {
        if (iVar19 < 10) goto LAB_00e9ecf0;
        uVar14 = FUN_00ea47f0();
        iVar19 = (int)uVar14;
      }
      if (iVar19 == 4) {
        if (2 < *(int *)((int64_t)plVar8 + 0x34)) {
          _fprintf((FILE *)(uint64_t)*(uint *)((int64_t)plVar8 + 0xc74),
                   (char *)(uint64_t)*(uint *)((int64_t)plVar8 + 0xc6c));
        }
        return (uint64_t)
               ((uint)(*(int *)((int64_t)plVar8 + 0xc74) == *(int *)((int64_t)plVar8 + 0xc6c)) * 8
               - 4);
      }
      iVar19 = 2;
    } while ((int)plVar8[1] == 2);
  }
  return uVar14;
}

