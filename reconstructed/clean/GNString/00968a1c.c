// Function: FUN_00968a1c
// Address: 00968a1c
// Size: 1844 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_00968a1c(uint *param_1,uint *param_2)

{
  int64_t lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  uint *puVar6;
  int64_t lVar7;
  int64_t lVar8;
  uint8_t auVar9 [16];
  uint8_t auVar10 [16];
  uint uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  int64_t lVar15;
  uint64_t uVar16;
  uint uVar17;
  int iVar18;
  uint64_t uVar19;
  int64_t lVar20;
  int iVar21;
  uint *arg1;
  int64_t lVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint *this_ptr;
  uint64_t uVar26;
  uint uVar27;
  int64_t lVar29;
  uint uVar30;
  bool bVar31;
  uint local_34;
  uint64_t uVar28;
  
  if (this_ptr[0x5a] == 0) {
    puVar5 = *(uint **)(this_ptr + 0x36);
    if (arg1 == param_2) {
      FUN_0096936d();
    }
    if (*param_2 == 0) {
      FUN_0096936d();
    }
    if (this_ptr[0x5a] == 0) {
      uVar2 = *arg1;
      uVar11 = *param_2 & 0x80000000;
      *arg1 = uVar2 & 0x7fffffff;
      uVar27 = *param_2 & 0x7fffffff;
      uVar28 = (uint64_t)uVar27;
      *param_2 = uVar27;
      uVar12 = *arg1;
      FUN_00969bc3();
      local_34 = *puVar5;
      if ((this_ptr[5] != 0) && ((int)this_ptr[4] <= (int)(local_34 - uVar27))) {
        FUN_0096936d();
        return;
      }
      uVar2 = uVar2 & 0x80000000;
      uVar30 = 0;
      if (uVar12 == uVar27) {
        puVar6 = *(uint **)(puVar5 + 2);
        if (uVar27 == 1) {
          uVar30 = *puVar6 / **(uint **)(param_2 + 2);
          *puVar6 = *puVar6 % **(uint **)(param_2 + 2);
          FUN_0096959f();
        }
        else if ((puVar6[uVar28 - 1] >> 2 < *(uint *)(*(int64_t *)(param_2 + 2) + -4 + uVar28 * 4))
                && (iVar13 = FUN_00969df5(), -1 < iVar13)) {
          uVar30 = 0;
          do {
            FUN_00967d35(puVar5,param_2);
            uVar30 = uVar30 + 1;
            iVar13 = FUN_00969df5();
          } while (-1 < iVar13);
        }
      }
      uVar12 = uVar11 ^ uVar2;
      iVar13 = FUN_00969df5();
      if (iVar13 < 0) {
        if (arg1 != param_1) {
          FUN_00969bc3();
          if (*arg1 != 0) {
            *arg1 = *arg1 | uVar2;
          }
        }
        if (param_2 != param_1) {
          FUN_00969412();
          **(uint **)(param_1 + 2) = uVar30;
          if (uVar30 != 0) {
            *param_1 = uVar12 | 1;
          }
        }
      }
      else {
        if (uVar27 != 1) {
          if (param_2 != param_1) {
            FUN_00969412();
          }
          lVar15 = (int64_t)(int)local_34;
          iVar13 = FUN_00968521();
          uVar30 = this_ptr[5];
          this_ptr[5] = 0;
          if (*this_ptr == 0) {
            if (iVar13 != 1) {
              FUN_009680a0(puVar5);
            }
            if ((int)uVar27 <= (int)local_34) {
              lVar29 = *(int64_t *)(param_2 + 2);
              uVar3 = *(uint *)(lVar29 + -4 + uVar28 * 4);
              uVar4 = *(uint *)(lVar29 + -8 + uVar28 * 4);
              lVar7 = *(int64_t *)(puVar5 + 2);
              do {
                lVar8 = lVar15 + -1;
                uVar17 = *(uint *)(lVar7 + -4 + lVar15 * 4);
                uVar23 = *(uint *)(lVar7 + lVar15 * 4);
                if (uVar23 == uVar3) {
                  uVar16 = 0xffffffff;
                  uVar25 = uVar17 + uVar3;
                  if (!CARRY4(uVar17,uVar3)) goto LAB_00968f8e;
                  lVar20 = (lVar8 - uVar28) + 1;
                  uVar16 = 0xffffffff;
LAB_00968fc4:
                  iVar21 = (int)uVar16;
                  if (uVar27 == 0) {
                    uVar17 = 0;
                  }
                  else {
                    lVar1 = lVar7 + lVar20 * 4;
                    uVar19 = 0;
                    uVar26 = 0;
                    do {
                      lVar22 = uVar26 + (uint64_t)*(uint *)(lVar29 + uVar19 * 4) *
                                        (uVar16 & 0xffffffff);
                      puVar6 = (uint *)(lVar1 + uVar19 * 4);
                      uVar17 = *puVar6;
                      uVar23 = (uint)lVar22;
                      *puVar6 = *puVar6 - uVar23;
                      uVar17 = (int)((uint64_t)lVar22 >> 0x20) + (uint)(uVar17 < uVar23);
                      uVar26 = (uint64_t)uVar17;
                      uVar19 = uVar19 + 1;
                    } while (uVar28 != uVar19);
                    uVar23 = *(uint *)(lVar7 + lVar15 * 4);
                    if (uVar23 < uVar17) {
                      *(void*)(lVar7 + lVar15 * 4) = 0;
                      uVar16 = 0;
                      iVar14 = 0;
                      do {
                        uVar17 = *(uint *)(lVar29 + uVar16 * 4);
                        uVar23 = *(int *)(lVar1 + uVar16 * 4) + iVar14;
                        iVar18 = 0;
                        if (uVar23 + uVar17 <= uVar17) {
                          iVar18 = iVar14;
                        }
                        iVar14 = 1;
                        if (!CARRY4(uVar23,uVar17)) {
                          iVar14 = iVar18;
                        }
                        *(uint *)(lVar1 + uVar16 * 4) = uVar23 + uVar17;
                        uVar16 = uVar16 + 1;
                      } while (uVar28 != uVar16);
                      iVar21 = iVar21 + -1;
                      goto LAB_0096906f;
                    }
                  }
                  *(uint *)(lVar7 + lVar15 * 4) = uVar23 - uVar17;
                }
                else {
                  auVar10._4_4_ = uVar23;
                  auVar10._0_4_ = uVar17;
                  auVar10._8_8_ = 0;
                  uVar16 = SUB168(auVar10 / ZEXT416(uVar3),0);
                  uVar25 = uVar17 - uVar3 * SUB164(auVar10 / ZEXT416(uVar3),0);
LAB_00968f8e:
                  do {
                    lVar20 = (uVar16 & 0xffffffff) * (uint64_t)uVar4;
                    uVar17 = (uint)((uint64_t)lVar20 >> 0x20);
                    if ((uVar17 < uVar25) ||
                       ((uVar25 == uVar17 && ((uint)lVar20 <= *(uint *)(lVar7 + -8 + lVar15 * 4)))))
                    break;
                    uVar16 = (uint64_t)((int)uVar16 - 1);
                    bVar31 = CARRY4(uVar25,uVar3);
                    uVar25 = uVar25 + uVar3;
                  } while (!bVar31);
                  lVar20 = (lVar8 - uVar28) + 1;
                  if ((int)uVar16 != 0) goto LAB_00968fc4;
                  iVar21 = 0;
                }
LAB_0096906f:
                if ((local_34 == (uint)lVar15) && (iVar21 == 0)) {
                  local_34 = local_34 - 1;
                }
                else if (param_2 != param_1) {
                  *(int *)(*(int64_t *)(param_1 + 2) + lVar20 * 4) = iVar21;
                }
                bVar31 = (int64_t)uVar28 < lVar15;
                lVar15 = lVar8;
              } while (bVar31);
            }
          }
          else {
            if (iVar13 != 1) {
              FUN_009680a0(puVar5);
            }
            if ((int)uVar27 <= (int)local_34) {
              lVar7 = *(int64_t *)(param_2 + 2);
              uVar3 = *(uint *)(lVar7 + -4 + uVar28 * 4);
              uVar4 = *(uint *)(lVar7 + -8 + uVar28 * 4);
              lVar8 = *(int64_t *)(puVar5 + 2);
              lVar29 = lVar8 + (lVar15 - uVar28) * 4;
              do {
                uVar17 = *(uint *)(lVar8 + lVar15 * 4);
                if (uVar17 == uVar3) {
                  uVar26 = (uint64_t)*this_ptr;
                  uVar16 = (uint64_t)(*this_ptr - 1);
                  uVar23 = *(int *)(lVar8 + -4 + lVar15 * 4) + uVar3;
                }
                else {
                  uVar26 = (uint64_t)*this_ptr;
                  uVar19 = (uint64_t)*(uint *)(lVar8 + -4 + lVar15 * 4) + uVar17 * uVar26;
                  auVar9._8_8_ = 0;
                  auVar9._0_8_ = uVar19;
                  uVar16 = SUB168(auVar9 / ZEXT416(uVar3),0);
                  uVar23 = (int)uVar19 - uVar3 * SUB164(auVar9 / ZEXT416(uVar3),0);
                }
                uVar25 = (uint)uVar26;
                if (uVar23 < uVar25) {
                  do {
                    uVar19 = (uVar16 & 0xffffffff) * (uint64_t)uVar4;
                    if (uVar25 == this_ptr[3]) {
                      uVar24 = (uint)(uVar19 >> ((byte)this_ptr[2] & 0x3f));
                    }
                    else {
                      uVar24 = (uint)(uVar19 / uVar26);
                    }
                    if ((uVar24 < uVar23) ||
                       ((uVar23 == uVar24 &&
                        ((int)uVar19 - uVar25 * uVar24 <= *(uint *)(lVar8 + -8 + lVar15 * 4)))))
                    break;
                    uVar16 = (uint64_t)((int)uVar16 - 1);
                    uVar23 = uVar23 + uVar3;
                  } while (uVar23 < uVar25);
                }
                iVar21 = (int)uVar16;
                if (iVar21 == 0) {
                  iVar21 = 0;
                }
                else {
                  if (uVar27 == 0) {
                    uVar23 = 0;
                  }
                  else {
                    lVar20 = 0;
                    uVar23 = 0;
                    while( true ) {
                      uVar19 = (uint64_t)uVar23 +
                               (uint64_t)*(uint *)(lVar7 + lVar20 * 4) * (uVar16 & 0xffffffff);
                      uVar17 = (uint)uVar26;
                      if (uVar17 == this_ptr[3]) {
                        iVar14 = (int)(uVar19 >> ((byte)this_ptr[2] & 0x3f));
                      }
                      else {
                        iVar14 = (int)(uVar19 / uVar26);
                      }
                      uVar24 = (int)uVar19 - uVar17 * iVar14;
                      uVar25 = *(uint *)(lVar29 + lVar20 * 4);
                      if (uVar25 >= uVar24) {
                        uVar17 = 0;
                      }
                      uVar23 = iVar14 + (uint)(uVar25 < uVar24);
                      *(uint *)(lVar29 + lVar20 * 4) = uVar17 + (uVar25 - uVar24);
                      if (uVar28 - 1 == lVar20) break;
                      lVar20 = lVar20 + 1;
                      uVar26 = (uint64_t)*this_ptr;
                    }
                    uVar17 = *(uint *)(lVar8 + lVar15 * 4);
                    if (uVar17 < uVar23) {
                      *(void*)(lVar8 + lVar15 * 4) = 0;
                      uVar16 = 0;
                      uVar17 = 0;
                      do {
                        uVar23 = uVar17 + *(int *)(lVar29 + uVar16 * 4) +
                                 *(int *)(lVar7 + uVar16 * 4);
                        uVar17 = *this_ptr;
                        bVar31 = uVar17 <= uVar23;
                        if (!bVar31) {
                          uVar17 = 0;
                        }
                        *(uint *)(lVar29 + uVar16 * 4) = uVar23 - uVar17;
                        uVar16 = uVar16 + 1;
                        uVar17 = (uint)bVar31;
                      } while (uVar28 != uVar16);
                      iVar21 = iVar21 + -1;
                      goto LAB_00968eb5;
                    }
                  }
                  *(uint *)(lVar8 + lVar15 * 4) = uVar17 - uVar23;
                }
LAB_00968eb5:
                if ((local_34 == (uint)lVar15) && (iVar21 == 0)) {
                  local_34 = local_34 - 1;
                }
                else if (param_2 != param_1) {
                  *(int *)(*(int64_t *)(param_1 + 2) + 4 + ((lVar15 + -1) - uVar28) * 4) = iVar21;
                }
                lVar29 = lVar29 + -4;
                bVar31 = (int64_t)uVar28 < lVar15;
                lVar15 = lVar15 + -1;
              } while (bVar31);
            }
          }
          if (param_2 != param_1) {
            *param_1 = (local_34 - uVar27) + 1 | uVar12;
          }
          *puVar5 = uVar27;
          FUN_0096959f();
          FUN_0096959f();
          if (arg1 != param_1) {
            FUN_0096959f();
            if (iVar13 == 1) {
              FUN_00969bc3();
            }
            else {
              FUN_00968278(arg1);
            }
            if (*arg1 != 0) {
              *arg1 = *arg1 | uVar2;
            }
          }
          if (iVar13 != 1) {
            FUN_00968278(param_2);
          }
          *param_2 = *param_2 | uVar11;
          this_ptr[5] = uVar30;
          return;
        }
        iVar13 = FUN_00968278(puVar5,**(void**)(param_2 + 2));
        if (param_2 != param_1) {
          FUN_00969bc3();
          *param_1 = *param_1 | uVar12;
        }
        if (arg1 != param_1) {
          FUN_00969412();
          **(int **)(arg1 + 2) = iVar13;
          if (iVar13 != 0) {
            *arg1 = uVar2 | 1;
          }
        }
      }
      *param_2 = *param_2 | uVar11;
    }
  }
  return;
}

