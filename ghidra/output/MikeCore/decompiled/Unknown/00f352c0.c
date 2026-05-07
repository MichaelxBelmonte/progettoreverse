// Function: FUN_00f352c0
// Address: 00f352c0
// Size: 3907 bytes
// Class: Unknown


uint FUN_00f352c0(uint *param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  uint *puVar10;
  void *pvVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  undefined8 *puVar14;
  undefined4 *puVar15;
  longlong lVar16;
  longlong *plVar17;
  bool bVar18;
  uint *puVar19;
  ulonglong uVar20;
  uint *puVar21;
  longlong lVar22;
  longlong unaff_RDI;
  uint uVar23;
  uint *puVar24;
  bool bVar25;
  bool bVar26;
  uint *local_88;
  undefined4 local_54;
  uint local_50;
  int local_4c;
  uint local_34;
  
  puVar9 = param_1;
  iVar2 = FUN_00f425b0();
  bVar25 = unaff_RDI == 0;
  bVar26 = param_1 == (uint *)0x0;
  bVar18 = bVar26 || bVar25;
  local_88 = (uint *)CONCAT71((int7)((ulonglong)puVar9 >> 8),bVar18);
  if (!bVar26 && !bVar25) {
    param_1[0x14] = 0;
    **(undefined4 **)(param_1 + 0x10) = 0xffffffff;
  }
  puVar9 = _malloc((size_t)local_88);
  uVar3 = 0xc;
  if (puVar9 != (uint *)0x0) {
    *puVar9 = 0xffffffff;
    puVar10 = _malloc((size_t)local_88);
    if (puVar10 != (uint *)0x0) {
      *puVar10 = 0xffffffff;
      FUN_00f42690();
      local_34 = 0;
      uVar3 = FUN_00f425c0();
      iVar4 = FUN_00f425b0();
      local_4c = -1;
      if (iVar2 < iVar4) {
        local_50 = 0;
        uVar8 = 0;
        if (uVar3 == 0) {
          local_4c = -1;
          uVar8 = 0;
          local_50 = 0;
          local_34 = 0;
          puVar24 = (uint *)((longlong)&MACH_HEADER.magic + 1);
          local_54 = 0;
          puVar19 = local_88;
          do {
            uVar5 = FUN_00f42760();
            uVar7 = (uint)puVar24;
            local_88 = &switchD_00f35421::switchdataD_00f3620c;
            switch(uVar5) {
            case 0:
              puVar12 = (undefined4 *)FUN_00f42780();
              iVar4 = puVar12[5];
              if (-1 < (longlong)iVar4) {
                uVar20 = 0;
                do {
                  puVar19 = puVar9 + uVar20;
                  uVar20 = uVar20 + 1;
                } while (-1 < (int)*puVar19);
                local_88 = (uint *)(ulonglong)((int)uVar20 - 1);
                puVar9[(longlong)local_88] = iVar4 * 2;
                puVar9[uVar20 & 0xffffffff] = 0xffffffff;
                if (!bVar26 && !bVar25) {
                  iVar6 = 1;
                  lVar16 = 0;
                  do {
                    iVar6 = iVar6 + -1;
                    piVar1 = (int *)((longlong)puVar10 + lVar16);
                    lVar16 = lVar16 + 4;
                  } while (-1 < *piVar1);
                  lVar16 = *(longlong *)(param_1 + 8);
                  lVar22 = (longlong)iVar4 * 0x10;
                  *(undefined8 *)(lVar16 + 8 + lVar22) = 0;
                  local_88 = param_1;
                  if (iVar6 != 0) {
                    pvVar11 = _malloc((size_t)param_1);
                    if (pvVar11 == (void *)0x0) {
                      uVar3 = 0xc;
                      break;
                    }
                    *(void **)(lVar22 + lVar16 + 8) = pvVar11;
                    uVar20 = 0;
                    uVar3 = *puVar10;
                    while (-1 < (int)uVar3) {
                      *(uint *)((longlong)pvVar11 + uVar20 * 4) = uVar3;
                      lVar16 = uVar20 + 1;
                      uVar20 = uVar20 + 1;
                      uVar3 = puVar10[lVar16];
                    }
                    local_88 = (uint *)(uVar20 & 0xffffffff);
                    *(undefined4 *)((longlong)pvVar11 + (longlong)local_88 * 4) = 0xffffffff;
                  }
                }
                uVar3 = FUN_00f425c0();
                if ((uVar3 != 0) || (uVar3 = FUN_00f425c0(), uVar3 != 0)) {
                  local_88 = (uint *)(ulonglong)uVar3;
                  break;
                }
              }
              uVar3 = 0;
              puVar21 = &switchD_00f358e4::switchdataD_00f36228;
              puVar19 = puVar24;
              switch(*puVar12) {
              case 0:
                local_88 = (uint *)(ulonglong)local_34;
                if (((**(longlong **)(puVar12 + 2) < 0) && (**(longlong **)(puVar12 + 2) != -4)) ||
                   ((int)*puVar9 < 0)) {
                  puVar19 = (uint *)(ulonglong)local_34;
                }
                else {
                  if (bVar26 || bVar25) {
                    puVar12[7] = 1;
                    uVar3 = 0;
                  }
                  else {
                    plVar17 = (longlong *)FUN_00f3f480(0,0,0x10);
                    uVar3 = 0xc;
                    if (plVar17 != (longlong *)0x0) {
                      lVar16 = FUN_00f33800(0xffffffff,local_34);
                      *plVar17 = lVar16;
                      if (lVar16 != 0) {
                        puVar13 = (undefined4 *)FUN_00f3f480(0,0,0x30);
                        plVar17[1] = (longlong)puVar13;
                        if (puVar13 != (undefined4 *)0x0) {
                          *(undefined8 *)(puVar13 + 2) = *(undefined8 *)(puVar12 + 2);
                          *puVar13 = *puVar12;
                          *(undefined8 *)(puVar13 + 4) = 0xffffffffffffffff;
                          *(undefined8 *)(puVar13 + 7) = 0;
                          *(undefined8 *)(puVar13 + 9) = 0;
                          puVar13[0xb] = 0;
                          *(longlong **)(puVar12 + 2) = plVar17;
                          *puVar12 = 1;
                          uVar3 = 0;
                        }
                      }
                    }
                    local_88 = (uint *)(longlong)(int)local_34;
                    *(undefined4 *)(*(longlong *)(param_1 + 0xe) + (longlong)local_88 * 4) =
                         local_54;
                    if (-1 < local_4c) {
                      lVar16 = *(longlong *)(param_1 + 0x10);
                      uVar20 = 0;
                      do {
                        lVar22 = uVar20 * 4;
                        uVar20 = uVar20 + 1;
                      } while (-1 < *(int *)(lVar16 + lVar22));
                      *(uint *)(lVar16 + (ulonglong)((int)uVar20 - 1) * 4) = local_34;
                      *(int *)(lVar16 + (uVar20 & 0xffffffff) * 4) = local_4c;
                      local_88 = (uint *)(ulonglong)((int)uVar20 + 1);
                      *(undefined4 *)(lVar16 + (longlong)local_88 * 4) = 0xffffffff;
                      local_50 = local_50 + 1;
                      local_4c = -1;
                    }
                    uVar20 = (ulonglong)*puVar9;
                    if (-1 < (int)*puVar9) {
                      lVar16 = *(longlong *)(param_1 + 8);
                      local_88 = puVar9 + 1;
                      do {
                        while (lVar22 = (uVar20 >> 1) * 0x10, (uVar20 & 1) == 0) {
                          *(uint *)(lVar16 + lVar22) = local_34;
                          uVar23 = *local_88;
                          uVar20 = (ulonglong)uVar23;
                          local_88 = local_88 + 1;
                          if ((int)uVar23 < 0) goto LAB_00f35d82;
                        }
                        *(uint *)(lVar16 + 4 + lVar22) = local_34;
                        uVar23 = *local_88;
                        uVar20 = (ulonglong)uVar23;
                        local_88 = local_88 + 1;
                      } while (-1 < (int)uVar23);
                    }
                  }
LAB_00f35d82:
                  *puVar9 = 0xffffffff;
                  uVar8 = uVar8 + 1;
                  puVar24 = (uint *)(ulonglong)(uVar7 + 1);
                }
                break;
              case 1:
                lVar16 = **(longlong **)(puVar12 + 2);
                lVar22 = (*(longlong **)(puVar12 + 2))[1];
                uVar3 = FUN_00f42690();
                if (uVar3 == 0) {
                  uVar3 = FUN_00f425c0();
                  local_88 = puVar21;
                  if (((uVar3 == 0) && (uVar3 = FUN_00f42690(), local_88 = puVar21, uVar3 == 0)) &&
                     (uVar3 = FUN_00f425c0(), local_88 = puVar21, uVar3 == 0)) {
                    uVar3 = FUN_00f425c0();
                    if (uVar3 != 0) goto LAB_00f35bee;
                    if (0 < *(int *)(lVar16 + 0x1c)) {
                      puVar24 = (uint *)(ulonglong)((0 < *(int *)(lVar22 + 0x1c)) + uVar7);
                    }
                    uVar3 = FUN_00f425c0();
                    local_88 = puVar21;
                    if (((uVar3 == 0) && (uVar3 = FUN_00f425c0(), local_88 = puVar21, uVar3 == 0))
                       && (uVar3 = FUN_00f42690(), local_88 = puVar21, uVar3 == 0)) {
                      uVar3 = FUN_00f425c0();
                      local_88 = puVar21;
                    }
                  }
LAB_00f35e1a:
                  puVar19 = (uint *)(ulonglong)local_34;
                }
                else {
LAB_00f35bee:
                  local_88 = (uint *)(ulonglong)uVar3;
                  puVar19 = (uint *)(ulonglong)local_34;
                }
                break;
              case 2:
                lVar16 = *(longlong *)(puVar12 + 2);
                if (bVar18) {
                  uVar3 = FUN_00f425c0();
                  local_88 = puVar21;
                }
                else {
                  uVar3 = FUN_00f425c0();
                  if (uVar3 != 0) goto LAB_00f35bee;
                  uVar3 = FUN_00f425c0();
                  local_88 = puVar21;
                }
                if ((((uVar3 != 0) || (uVar3 = FUN_00f42690(), uVar3 != 0)) ||
                    (uVar3 = FUN_00f425c0(), uVar3 != 0)) ||
                   ((uVar3 = FUN_00f42690(), uVar3 != 0 || (uVar3 = FUN_00f425c0(), uVar3 != 0))))
                goto LAB_00f35bee;
                if (((int)*puVar9 < 0) && ((*(byte *)(lVar16 + 0x10) & 1) == 0)) {
                  local_54 = 0;
                  uVar3 = 0;
                  puVar19 = (uint *)(ulonglong)local_34;
                }
                else {
                  if (bVar26 || bVar25) {
                    uVar3 = 0;
                  }
                  else {
                    plVar17 = (longlong *)FUN_00f3f480(0,0,0x10);
                    uVar3 = 0xc;
                    if (plVar17 != (longlong *)0x0) {
                      lVar22 = FUN_00f33800(0xffffffff,local_34);
                      *plVar17 = lVar22;
                      if (lVar22 != 0) {
                        puVar13 = (undefined4 *)FUN_00f3f480(0,0,0x30);
                        plVar17[1] = (longlong)puVar13;
                        if (puVar13 != (undefined4 *)0x0) {
                          *(undefined8 *)(puVar13 + 2) = *(undefined8 *)(puVar12 + 2);
                          *puVar13 = *puVar12;
                          *(undefined8 *)(puVar13 + 4) = 0xffffffffffffffff;
                          *(undefined8 *)(puVar13 + 7) = 0;
                          *(undefined8 *)(puVar13 + 9) = 0;
                          puVar13[0xb] = 0;
                          *(longlong **)(puVar12 + 2) = plVar17;
                          *puVar12 = 1;
                          uVar3 = 0;
                        }
                      }
                    }
                    local_88 = (uint *)(longlong)(int)local_34;
                    if ((*(byte *)(lVar16 + 0x10) & 1) != 0) {
                      local_54 = 1;
                    }
                    *(undefined4 *)(*(longlong *)(param_1 + 0xe) + (longlong)local_88 * 4) =
                         local_54;
                    if (-1 < local_4c) {
                      lVar16 = *(longlong *)(param_1 + 0x10);
                      uVar20 = 0;
                      do {
                        lVar22 = uVar20 * 4;
                        uVar20 = uVar20 + 1;
                      } while (-1 < *(int *)(lVar16 + lVar22));
                      *(uint *)(lVar16 + (ulonglong)((int)uVar20 - 1) * 4) = local_34;
                      *(int *)(lVar16 + (uVar20 & 0xffffffff) * 4) = local_4c;
                      local_88 = (uint *)(ulonglong)((int)uVar20 + 1);
                      *(undefined4 *)(lVar16 + (longlong)local_88 * 4) = 0xffffffff;
                      local_50 = local_50 + 1;
                      local_4c = -1;
                    }
                    uVar20 = (ulonglong)*puVar9;
                    if (-1 < (int)*puVar9) {
                      lVar16 = *(longlong *)(param_1 + 8);
                      local_88 = puVar9 + 1;
                      do {
                        while (lVar22 = (uVar20 >> 1) * 0x10, (uVar20 & 1) == 0) {
                          *(uint *)(lVar16 + lVar22) = local_34;
                          uVar23 = *local_88;
                          uVar20 = (ulonglong)uVar23;
                          local_88 = local_88 + 1;
                          if ((int)uVar23 < 0) goto LAB_00f35f67;
                        }
                        *(uint *)(lVar16 + 4 + lVar22) = local_34;
                        uVar23 = *local_88;
                        uVar20 = (ulonglong)uVar23;
                        local_88 = local_88 + 1;
                      } while (-1 < (int)uVar23);
                    }
                  }
LAB_00f35f67:
                  *puVar9 = 0xffffffff;
                  uVar8 = uVar8 + 1;
                  local_54 = 0;
                  puVar24 = (uint *)(ulonglong)(uVar7 + 1);
                }
                break;
              case 3:
                local_88 = (uint *)**(undefined8 **)(puVar12 + 2);
                uVar23 = uVar7 + 1;
                puVar19 = (uint *)(ulonglong)uVar23;
                uVar3 = FUN_00f425c0();
                if ((uVar3 != 0) || (uVar3 = FUN_00f425c0(), uVar3 != 0)) goto LAB_00f35bee;
                uVar3 = FUN_00f42690();
                if ((uVar3 != 0) ||
                   ((((uVar3 = FUN_00f425c0(), uVar3 != 0 || (uVar3 = FUN_00f42690(), uVar3 != 0))
                     || (uVar3 = FUN_00f42690(), uVar3 != 0)) ||
                    ((uVar3 = FUN_00f42690(), uVar3 != 0 || (uVar3 = FUN_00f425c0(), uVar3 != 0)))))
                   ) goto LAB_00f35e1a;
                uVar3 = FUN_00f42690();
                if ((uVar3 == 0) &&
                   (((uVar3 = FUN_00f425c0(), uVar3 == 0 && (uVar3 = FUN_00f425c0(), uVar3 == 0)) &&
                    ((uVar3 = FUN_00f42690(), uVar3 == 0 && (uVar3 = FUN_00f425c0(), uVar3 == 0)))))
                   ) {
                  if ((int)*puVar9 < 0) {
                    uVar3 = 0;
                    puVar21 = (uint *)(ulonglong)local_34;
                    local_88 = puVar24;
                  }
                  else {
                    uVar3 = 0;
                    if (!bVar26 && !bVar25) {
                      plVar17 = (longlong *)FUN_00f3f480(0,0,0x10);
                      uVar3 = 0xc;
                      if (plVar17 != (longlong *)0x0) {
                        lVar16 = FUN_00f33800(0xffffffff,local_34);
                        *plVar17 = lVar16;
                        if (lVar16 != 0) {
                          puVar13 = (undefined4 *)FUN_00f3f480(0,0,0x30);
                          plVar17[1] = (longlong)puVar13;
                          if (puVar13 != (undefined4 *)0x0) {
                            *(undefined8 *)(puVar13 + 2) = *(undefined8 *)(puVar12 + 2);
                            *puVar13 = *puVar12;
                            *(undefined8 *)(puVar13 + 4) = 0xffffffffffffffff;
                            *(undefined8 *)(puVar13 + 7) = 0;
                            *(undefined8 *)(puVar13 + 9) = 0;
                            puVar13[0xb] = 0;
                            *(longlong **)(puVar12 + 2) = plVar17;
                            *puVar12 = 1;
                            uVar3 = 0;
                          }
                        }
                      }
                      *(undefined4 *)(*(longlong *)(param_1 + 0xe) + (longlong)(int)local_34 * 4) =
                           local_54;
                      if (-1 < local_4c) {
                        lVar16 = *(longlong *)(param_1 + 0x10);
                        uVar20 = 0;
                        do {
                          lVar22 = uVar20 * 4;
                          uVar20 = uVar20 + 1;
                        } while (-1 < *(int *)(lVar16 + lVar22));
                        *(uint *)(lVar16 + (ulonglong)((int)uVar20 - 1) * 4) = local_34;
                        *(int *)(lVar16 + (uVar20 & 0xffffffff) * 4) = local_4c;
                        *(undefined4 *)(lVar16 + (ulonglong)((int)uVar20 + 1) * 4) = 0xffffffff;
                        local_50 = local_50 + 1;
                        local_4c = -1;
                      }
                      uVar20 = (ulonglong)*puVar9;
                      if (-1 < (int)*puVar9) {
                        lVar16 = *(longlong *)(param_1 + 8);
                        puVar21 = puVar9 + 1;
                        do {
                          while (lVar22 = (uVar20 >> 1) * 0x10, (uVar20 & 1) == 0) {
                            *(uint *)(lVar16 + lVar22) = local_34;
                            uVar23 = *puVar21;
                            uVar20 = (ulonglong)uVar23;
                            puVar21 = puVar21 + 1;
                            if ((int)uVar23 < 0) goto LAB_00f360c5;
                          }
                          *(uint *)(lVar16 + 4 + lVar22) = local_34;
                          uVar23 = *puVar21;
                          uVar20 = (ulonglong)uVar23;
                          puVar21 = puVar21 + 1;
                        } while (-1 < (int)uVar23);
                      }
                    }
LAB_00f360c5:
                    *puVar9 = 0xffffffff;
                    uVar8 = uVar8 + 1;
                    uVar23 = uVar7 + 2;
                    puVar21 = puVar24;
                    local_88 = puVar19;
                  }
                  puVar24 = (uint *)(ulonglong)((int)local_88 + 2);
                  local_34 = uVar23;
                  if ((int)puVar12[6] < 1) {
                    local_34 = (uint)puVar21;
                    puVar24 = local_88;
                  }
                }
                puVar19 = (uint *)(ulonglong)local_34;
                break;
              default:
                puVar19 = (uint *)(ulonglong)local_34;
                uVar3 = 0;
              }
              uVar7 = (uint)puVar24;
              if (-1 < (int)puVar12[5]) {
                local_88 = (uint *)0x0;
                do {
                  puVar24 = puVar10 + (longlong)local_88;
                  local_88 = (uint *)((longlong)local_88 + 1);
                } while (-1 < (int)*puVar24);
                puVar10[(int)local_88 - 1] = puVar12[5];
                puVar10[(ulonglong)local_88 & 0xffffffff] = 0xffffffff;
              }
              local_34 = (uint)puVar19;
              break;
            case 1:
              lVar16 = FUN_00f42780();
              if (bVar26 || bVar25) {
                iVar4 = *(int *)(**(longlong **)(lVar16 + 8) + 0x1c);
                iVar6 = FUN_00f42760();
                *(int *)(lVar16 + 0x1c) = iVar6 + iVar4;
                local_4c = -1;
LAB_00f35818:
                local_88 = (uint *)((longlong)&MACH_HEADER.magic + 1);
              }
              else {
                iVar4 = FUN_00f42760();
                iVar6 = FUN_00f42760();
                if (iVar4 == 0) goto LAB_00f35818;
                local_88 = (uint *)0x0;
                local_4c = iVar6;
              }
              if (!bVar26 && !bVar25) {
                local_54 = SUB84(local_88,0);
              }
              uVar3 = 0;
              break;
            case 2:
              puVar9 = puVar9 + -1;
              do {
                puVar24 = puVar9 + 1;
                puVar9 = puVar9 + 1;
                puVar19 = local_88;
              } while (-1 < (int)*puVar24);
            default:
switchD_00f35421_default:
              local_88 = puVar19;
              uVar3 = 0;
              break;
            case 3:
              puVar12 = (undefined4 *)FUN_00f42780();
              puVar13 = (undefined4 *)FUN_00f42780();
              lVar16 = FUN_00f42780();
              iVar4 = FUN_00f42760();
              if (bVar18) {
                local_88 = (uint *)(*(longlong **)(lVar16 + 8))[1];
                *(uint *)(lVar16 + 0x1c) =
                     iVar4 + *(int *)(**(longlong **)(lVar16 + 8) + 0x1c) + local_88[7] +
                     (uint)(0 < *(int *)(lVar16 + 0x18)) * 2;
              }
              puVar9 = (uint *)FUN_00f42780();
              iVar4 = FUN_00f42760();
              iVar6 = FUN_00f42760();
              local_54 = 1;
              puVar19 = local_88;
              if (*(int *)(lVar16 + 0x18) < 1) goto switchD_00f35421_default;
              uVar3 = 0;
              if (!bVar26 && !bVar25) {
                puVar14 = (undefined8 *)FUN_00f3f480(0,0,0x10);
                if (puVar14 != (undefined8 *)0x0) {
                  lVar16 = FUN_00f33800(0xffffffff);
                  puVar14[1] = lVar16;
                  if (lVar16 != 0) {
                    puVar15 = (undefined4 *)FUN_00f3f480(0,0,0x30);
                    *puVar14 = puVar15;
                    if (puVar15 != (undefined4 *)0x0) {
                      *(undefined8 *)(puVar15 + 2) = *(undefined8 *)(puVar12 + 2);
                      *puVar15 = *puVar12;
                      *(undefined8 *)(puVar15 + 4) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar15 + 7) = 0;
                      *(undefined8 *)(puVar15 + 9) = 0;
                      puVar15[0xb] = 0;
                      *(undefined8 **)(puVar12 + 2) = puVar14;
                      *puVar12 = 1;
                    }
                  }
                }
                *(undefined4 *)(*(longlong *)(param_1 + 0xe) + (longlong)iVar4 * 4) = 1;
                puVar14 = (undefined8 *)FUN_00f3f480(0,0,0x10);
                if (puVar14 == (undefined8 *)0x0) {
LAB_00f3582e:
                  uVar3 = 0xc;
                }
                else {
                  lVar16 = FUN_00f33800(0xffffffff);
                  puVar14[1] = lVar16;
                  if (lVar16 == 0) goto LAB_00f3582e;
                  puVar12 = (undefined4 *)FUN_00f3f480(0,0,0x30);
                  *puVar14 = puVar12;
                  uVar3 = 0xc;
                  if (puVar12 != (undefined4 *)0x0) {
                    *(undefined8 *)(puVar12 + 2) = *(undefined8 *)(puVar13 + 2);
                    *puVar12 = *puVar13;
                    *(undefined8 *)(puVar12 + 4) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar12 + 7) = 0;
                    *(undefined8 *)(puVar12 + 9) = 0;
                    puVar12[0xb] = 0;
                    *(undefined8 **)(puVar13 + 2) = puVar14;
                    *puVar13 = 1;
                    uVar3 = 0;
                  }
                }
                local_88 = (uint *)(longlong)iVar6;
                *(undefined4 *)(*(longlong *)(param_1 + 0xe) + (longlong)local_88 * 4) = 1;
              }
              uVar8 = uVar8 + 2;
              break;
            case 4:
              uVar3 = FUN_00f42760();
              uVar7 = FUN_00f42760();
              if (-1 < (int)uVar3) {
                local_34 = uVar3;
              }
              uVar3 = 0;
              break;
            case 5:
              lVar16 = FUN_00f42780();
              uVar3 = 0;
              if (bVar18) {
                uVar3 = *(int *)((*(longlong **)(lVar16 + 8))[1] + 0x1c) +
                        *(int *)(**(longlong **)(lVar16 + 8) + 0x1c);
                local_88 = (uint *)(ulonglong)uVar3;
                *(uint *)(lVar16 + 0x1c) = uVar3;
                uVar3 = 0;
              }
              break;
            case 6:
              iVar4 = FUN_00f42760();
              uVar20 = 0;
              do {
                puVar19 = puVar9 + uVar20;
                uVar20 = uVar20 + 1;
              } while (-1 < (int)*puVar19);
              puVar9[(int)uVar20 - 1] = iVar4 * 2 + 1;
              puVar9[uVar20 & 0xffffffff] = 0xffffffff;
              lVar16 = -0x200000000;
              local_88 = puVar10;
              do {
                lVar16 = lVar16 + 0x100000000;
                uVar3 = *local_88;
                local_88 = local_88 + 1;
              } while (-1 < (int)uVar3);
              *(undefined4 *)((longlong)puVar10 + (lVar16 >> 0x1e)) = 0xffffffff;
              uVar3 = 0;
            }
            iVar4 = FUN_00f425b0();
          } while ((iVar2 < iVar4) &&
                  (puVar24 = (uint *)(ulonglong)uVar7, puVar19 = local_88, uVar3 == 0));
        }
      }
      else {
        local_50 = 0;
        uVar8 = 0;
      }
      if (!bVar26 && !bVar25) {
        local_88 = (uint *)(ulonglong)*puVar9;
        if (-1 < (int)*puVar9) {
          lVar16 = *(longlong *)(param_1 + 8);
          puVar9 = puVar9 + 1;
          do {
            while (lVar22 = ((ulonglong)local_88 >> 1) * 0x10, ((ulonglong)local_88 & 1) == 0) {
              *(uint *)(lVar16 + lVar22) = uVar8;
              uVar7 = *puVar9;
              local_88 = (uint *)(ulonglong)uVar7;
              puVar9 = puVar9 + 1;
              if ((int)uVar7 < 0) goto LAB_00f3619a;
            }
            *(uint *)(lVar16 + 4 + lVar22) = uVar8;
            uVar7 = *puVar9;
            local_88 = (uint *)(ulonglong)uVar7;
            puVar9 = puVar9 + 1;
          } while (-1 < (int)uVar7);
        }
LAB_00f3619a:
        if (-1 < local_4c) {
          lVar16 = *(longlong *)(param_1 + 0x10);
          uVar20 = 0;
          do {
            lVar22 = uVar20 * 4;
            uVar20 = uVar20 + 1;
          } while (-1 < *(int *)(lVar16 + lVar22));
          *(uint *)(lVar16 + (ulonglong)((int)uVar20 - 1) * 4) = local_34;
          *(int *)(lVar16 + (uVar20 & 0xffffffff) * 4) = local_4c;
          local_88 = (uint *)(ulonglong)((int)uVar20 + 1);
          *(undefined4 *)(lVar16 + (longlong)local_88 * 4) = 0xffffffff;
          local_50 = local_50 + 1;
        }
      }
      param_1[0x14] = uVar8;
      param_1[0x12] = uVar8;
      param_1[0x13] = local_50;
      _free(local_88);
    }
    _free(local_88);
  }
  return uVar3;
}


