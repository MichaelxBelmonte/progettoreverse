// Function: FUN_00b225a0
// Address: 00b225a0
// Size: 1686 bytes
// Class: Unknown

uint64_t FUN_00b225a0(uint64_t param_1,uint *param_2,uint *param_3)

{
  uint32_t uVar1;
  uint uVar2;
  uint uVar3;
  int64_t lVar4;
  int64_t lVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint64_t uVar9;
  void*puVar10;
  void*puVar11;
  uint uVar12;
  uint uVar13;
  int64_t lVar14;
  uint64_t uVar15;
  void*puVar16;
  int unaff_EDI;
  void*puVar17;
  int iVar18;
  uint64_t uVar19;
  void *pvVar20;
  uint uVar21;
  int64_t *local_res8;
  
  FUN_00da71a0();
  if (local_res8 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  if ((char)local_res8[0x22] == '\0') {
    uVar2 = *(uint *)((int64_t)local_res8 + 0xa4);
    if ((((int)local_res8[0x1a] == unaff_EDI) && (uVar6 = *param_2, uVar6 != 0)) &&
       (uVar13 = *(uint *)(local_res8 + 0x14), uVar13 != 0)) {
      uVar21 = 0;
      uVar12 = 0;
      do {
        uVar15 = (uint64_t)uVar12;
        puVar11 = (void*)(uVar15 * 0x10);
        uVar3 = (param_2 + 2)[uVar15 * 4];
        uVar19 = (uint64_t)*(int *)((int64_t)local_res8 + 0xc);
        if ((void *)(uVar3 * uVar19 * 4) == (void *)(uint64_t)(param_2 + 3)[uVar15 * 4]) {
          puVar16 = *(void**)(param_2 + 4 + uVar15 * 4);
          iVar18 = *(int *)((int64_t)local_res8 + 0x114);
          lVar4 = local_res8[(int64_t)iVar18 + 0x23];
          if (uVar3 == 1) {
            _memcpy(puVar11,(void *)(uint64_t)(param_2 + 3)[uVar15 * 4],1);
            iVar18 = *(int *)((int64_t)local_res8 + 0x114);
          }
          else {
            uVar7 = uVar13 - uVar21;
            uVar6 = uVar3;
            if (uVar7 < uVar3) {
              uVar6 = uVar7;
            }
            if (uVar6 != 0) {
              if (uVar7 < uVar3) {
                lVar14 = 0;
                do {
                  if ((uint64_t)uVar6 - 1 < 3) {
                    uVar15 = 0;
                  }
                  else {
                    uVar15 = 0;
                    puVar17 = puVar16;
                    do {
                      puVar11 = puVar17;
                      uVar9 = uVar21 + uVar15;
                      iVar8 = (int)uVar9;
                      *(void*)(*(int64_t *)(lVar4 + (uVar9 & 0xffffffff) * 8) + lVar14 * 4)
                           = puVar16[uVar15];
                      *(void*)
                       (*(int64_t *)(lVar4 + (uint64_t)(iVar8 + 1) * 8) + lVar14 * 4) =
                           puVar16[uVar15 + 1];
                      *(void*)
                       (*(int64_t *)(lVar4 + (uint64_t)(iVar8 + 2) * 8) + lVar14 * 4) =
                           puVar16[uVar15 + 2];
                      *(void*)
                       (*(int64_t *)(lVar4 + (uint64_t)(iVar8 + 3) * 8) + lVar14 * 4) =
                           puVar16[uVar15 + 3];
                      lVar5 = uVar15 + 4;
                      uVar15 = uVar15 + 4;
                      puVar17 = puVar16 + lVar5;
                    } while ((uVar6 & 0xfffffffc) != uVar15);
                    puVar16 = puVar11 + 4;
                    puVar11 = puVar11 + 3;
                  }
                  if ((uint64_t)(uVar6 & 3) != 0) {
                    uVar7 = (int)uVar15 + uVar21;
                    puVar11 = puVar16 + -1;
                    uVar15 = (uint64_t)(uVar6 & 3);
                    do {
                      puVar16 = puVar11 + 1;
                      puVar11 = puVar11 + 1;
                      *(void*)(*(int64_t *)(lVar4 + (uint64_t)uVar7 * 8) + lVar14 * 4) =
                           *puVar16;
                      uVar7 = uVar7 + 1;
                      uVar15 = uVar15 - 1;
                    } while (uVar15 != 0);
                  }
                  puVar16 = puVar11 + (uint64_t)(~uVar6 + uVar3) + 2;
                  lVar14 = lVar14 + 1;
                  uVar7 = (int)uVar19 - 1;
                  uVar19 = (uint64_t)uVar7;
                } while (uVar7 != 0);
              }
              else {
                lVar14 = 0;
                do {
                  uVar15 = 0;
                  puVar11 = puVar16;
                  if (2 < (uint64_t)uVar6 - 1) {
                    do {
                      puVar17 = puVar11;
                      uVar9 = uVar21 + uVar15;
                      iVar8 = (int)uVar9;
                      *(void*)(*(int64_t *)(lVar4 + (uVar9 & 0xffffffff) * 8) + lVar14 * 4)
                           = puVar16[uVar15];
                      *(void*)
                       (*(int64_t *)(lVar4 + (uint64_t)(iVar8 + 1) * 8) + lVar14 * 4) =
                           puVar16[uVar15 + 1];
                      *(void*)
                       (*(int64_t *)(lVar4 + (uint64_t)(iVar8 + 2) * 8) + lVar14 * 4) =
                           puVar16[uVar15 + 2];
                      *(void*)
                       (*(int64_t *)(lVar4 + (uint64_t)(iVar8 + 3) * 8) + lVar14 * 4) =
                           puVar16[uVar15 + 3];
                      lVar5 = uVar15 + 4;
                      uVar15 = uVar15 + 4;
                      puVar11 = puVar16 + lVar5;
                    } while ((uVar6 & 0xfffffffc) != uVar15);
                    puVar16 = puVar17 + 4;
                  }
                  if ((uint64_t)(uVar6 & 3) != 0) {
                    uVar7 = (int)uVar15 + uVar21;
                    uVar15 = (uint64_t)(uVar6 & 3);
                    do {
                      uVar1 = *puVar16;
                      puVar16 = puVar16 + 1;
                      *(void*)(*(int64_t *)(lVar4 + (uint64_t)uVar7 * 8) + lVar14 * 4) =
                           uVar1;
                      uVar7 = uVar7 + 1;
                      uVar15 = uVar15 - 1;
                    } while (uVar15 != 0);
                  }
                  lVar14 = lVar14 + 1;
                  uVar7 = (int)uVar19 - 1;
                  uVar19 = (uint64_t)uVar7;
                } while (uVar7 != 0);
              }
            }
          }
          *(uint *)((int64_t)local_res8 + 0x114) =
               (iVar18 + 1) - ((iVar18 - (iVar18 + 1 >> 0x1f)) + 1U & 0xfffffffe);
          uVar6 = *param_2;
        }
        uVar12 = uVar12 + 1;
      } while ((uVar12 < uVar6) && (uVar21 = uVar21 + uVar3, uVar21 < uVar13));
    }
    if (*(int *)((int64_t)local_res8 + 0xd4) == unaff_EDI) {
      iVar18 = *(int *)((int64_t)local_res8 + 0x114);
      local_res8[0x12] =
           local_res8
           [(int64_t)(int)((iVar18 - ((iVar18 - (iVar18 + 1 >> 0x1f)) + 1U & 0xfffffffe)) + 1) +
            0x23];
      (**(code **)(*local_res8 + 0x6f0))();
      puVar11 = (void*)(uint64_t)*param_3;
      if ((*param_3 != 0) && (uVar2 != 0)) {
        uVar15 = 0;
        pvVar20 = (void *)0x0;
        do {
          uVar6 = param_3[uVar15 * 4 + 2];
          uVar19 = (uint64_t)*(int *)((int64_t)local_res8 + 0xc);
          iVar18 = (int)pvVar20;
          if ((void *)(uVar6 * uVar19 * 4) == (void *)(uint64_t)param_3[uVar15 * 4 + 3]) {
            puVar16 = *(void**)(param_3 + uVar15 * 4 + 4);
            if (uVar6 == 1) {
              _memcpy(pvVar20,(void *)(uint64_t)param_3[uVar15 * 4 + 3],(size_t)puVar16);
              puVar11 = (void*)(uint64_t)*param_3;
            }
            else {
              uVar12 = uVar2 - iVar18;
              uVar13 = uVar6;
              if (uVar12 < uVar6) {
                uVar13 = uVar12;
              }
              if (uVar13 != 0) {
                lVar4 = local_res8[0x13];
                if (uVar12 < uVar6) {
                  lVar14 = 0;
                  puVar17 = puVar11;
                  do {
                    if ((uint64_t)uVar13 - 1 < 3) {
                      uVar9 = 0;
                    }
                    else {
                      uVar9 = 0;
                      puVar10 = puVar16;
                      do {
                        puVar17 = puVar10;
                        iVar8 = (int)((int64_t)pvVar20 + uVar9);
                        puVar16[uVar9] =
                             *(void*)
                              (*(int64_t *)(lVar4 + ((int64_t)pvVar20 + uVar9 & 0xffffffff) * 8) +
                              lVar14 * 4);
                        puVar16[uVar9 + 1] =
                             *(void*)
                              (*(int64_t *)(lVar4 + (uint64_t)(iVar8 + 1) * 8) + lVar14 * 4);
                        puVar16[uVar9 + 2] =
                             *(void*)
                              (*(int64_t *)(lVar4 + (uint64_t)(iVar8 + 2) * 8) + lVar14 * 4);
                        puVar16[uVar9 + 3] =
                             *(void*)
                              (*(int64_t *)(lVar4 + (uint64_t)(iVar8 + 3) * 8) + lVar14 * 4);
                        lVar5 = uVar9 + 4;
                        uVar9 = uVar9 + 4;
                        puVar10 = puVar16 + lVar5;
                      } while ((uVar13 & 0xfffffffc) != uVar9);
                      puVar16 = puVar17 + 4;
                      puVar17 = puVar17 + 3;
                    }
                    if ((uint64_t)(uVar13 & 3) != 0) {
                      uVar12 = (int)uVar9 + iVar18;
                      puVar17 = puVar16 + -1;
                      uVar9 = (uint64_t)(uVar13 & 3);
                      do {
                        puVar17[1] = *(void*)
                                      (*(int64_t *)(lVar4 + (uint64_t)uVar12 * 8) + lVar14 * 4);
                        puVar17 = puVar17 + 1;
                        uVar12 = uVar12 + 1;
                        uVar9 = uVar9 - 1;
                      } while (uVar9 != 0);
                    }
                    puVar16 = puVar17 + (uint64_t)(~uVar13 + uVar6) + 2;
                    lVar14 = lVar14 + 1;
                    uVar12 = (int)uVar19 - 1;
                    uVar19 = (uint64_t)uVar12;
                  } while (uVar12 != 0);
                }
                else {
                  lVar14 = 0;
                  do {
                    uVar9 = 0;
                    puVar17 = puVar16;
                    if (2 < (uint64_t)uVar13 - 1) {
                      do {
                        puVar10 = puVar17;
                        iVar8 = (int)((int64_t)pvVar20 + uVar9);
                        puVar16[uVar9] =
                             *(void*)
                              (*(int64_t *)(lVar4 + ((int64_t)pvVar20 + uVar9 & 0xffffffff) * 8) +
                              lVar14 * 4);
                        puVar16[uVar9 + 1] =
                             *(void*)
                              (*(int64_t *)(lVar4 + (uint64_t)(iVar8 + 1) * 8) + lVar14 * 4);
                        puVar16[uVar9 + 2] =
                             *(void*)
                              (*(int64_t *)(lVar4 + (uint64_t)(iVar8 + 2) * 8) + lVar14 * 4);
                        puVar16[uVar9 + 3] =
                             *(void*)
                              (*(int64_t *)(lVar4 + (uint64_t)(iVar8 + 3) * 8) + lVar14 * 4);
                        lVar5 = uVar9 + 4;
                        uVar9 = uVar9 + 4;
                        puVar17 = puVar16 + lVar5;
                      } while ((uVar13 & 0xfffffffc) != uVar9);
                      puVar16 = puVar10 + 4;
                    }
                    if ((uint64_t)(uVar13 & 3) != 0) {
                      uVar12 = (int)uVar9 + iVar18;
                      uVar9 = (uint64_t)(uVar13 & 3);
                      do {
                        *puVar16 = *(void*)
                                    (*(int64_t *)(lVar4 + (uint64_t)uVar12 * 8) + lVar14 * 4);
                        puVar16 = puVar16 + 1;
                        uVar12 = uVar12 + 1;
                        uVar9 = uVar9 - 1;
                      } while (uVar9 != 0);
                    }
                    lVar14 = lVar14 + 1;
                    uVar12 = (int)uVar19 - 1;
                    uVar19 = (uint64_t)uVar12;
                  } while (uVar12 != 0);
                }
              }
            }
          }
          uVar13 = (int)uVar15 + 1;
          uVar15 = (uint64_t)uVar13;
        } while ((uVar13 < (uint)puVar11) &&
                (pvVar20 = (void *)(uint64_t)(iVar18 + uVar6), iVar18 + uVar6 < uVar2));
      }
    }
  }
  if (local_res8 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  FUN_00da71b0();
  return 0;
}

