// Function: FUN_012502a0
// Address: 012502a0
// Size: 3760 bytes
// Class: GNList
// === GNList properties ===
//   GNInt           _archiveVersion
//   bool            _awakesObjectsAfterDecoding
//   bool            _isCancelled
//   GNInt           _currentObjectGraphIdx
//   GNInt           _predictedDecodedValuesIndex


void FUN_012502a0(void *param_1,void *param_2,size_t param_3)

{
  uint64_t *puVar1;
  uint32_t uVar2;
  int64_t lVar3;
  void*puVar4;
  char cVar5;
  byte bVar6;
  byte bVar7;
  uint uVar8;
  int iVar9;
  uint64_t uVar10;
  void*puVar11;
  int iVar12;
  void *pvVar13;
  uint64_t uVar14;
  int64_t lVar15;
  int iVar16;
  uint64_t uVar17;
  int64_t *arg1;
  int64_t *this_ptr;
  size_t sVar18;
  int iVar19;
  uint uVar20;
  int64_t lVar21;
  uint64_t uVar22;
  bool bVar23;
  bool bVar24;
  uint64_t local_b8;
  uint64_t local_b0;
  void *local_70;
  int local_68;
  char local_60;
  uint64_t local_58;
  char local_50;
  
  uVar17 = (uint64_t)param_2 >> 0x20;
  if ((uVar17 == 0) && ((uint64_t)param_1 >> 0x20 == 0)) {
LAB_01250300:
    FUN_0124f820();
  }
  else {
    sVar18 = param_3;
    if ((uVar17 != 0) &&
       (((uint64_t)param_1 >> 0x20 != 0 && (cVar5 = FUN_00e7c020(), cVar5 == '\0')))) {
      return;
    }
    iVar9 = *(int *)(this_ptr[9] + 0x18);
    iVar19 = iVar9 + 7;
    if (-1 < iVar9) {
      iVar19 = iVar9;
    }
    local_70 = (void *)0x0;
    bVar24 = true;
    bVar6 = 1;
    bVar23 = true;
    local_60 = (char)param_3;
    local_b8 = param_2;
    if (uVar17 != 0) {
      uVar8 = FUN_01251eb0(iVar19,0);
      if ((int)uVar8 < 1) {
        local_58 = FUN_00e7bdb0();
        if (local_58 >> 0x20 != 0) goto LAB_012503b0;
LAB_012503da:
        bVar6 = 0;
        lVar21 = *arg1;
        if (lVar21 == 0) goto LAB_012503fb;
LAB_012503ed:
        if (local_60 != '\0') goto LAB_012503fb;
      }
      else {
        local_58 = *(uint64_t *)(*(int64_t *)(this_ptr[9] + 0x10) + (uint64_t)(uVar8 - 1) * 8);
        if (local_58 >> 0x20 == 0) goto LAB_012503da;
LAB_012503b0:
        local_b8._4_4_ = (int)((uint64_t)param_2 >> 0x20);
        if (local_b8._4_4_ == 0) goto LAB_012503da;
        bVar6 = FUN_00e7c000();
        lVar21 = *arg1;
        if (lVar21 != 0) goto LAB_012503ed;
LAB_012503fb:
        uVar20 = uVar8 - bVar6;
        local_70 = (void *)(uint64_t)uVar20;
        uVar17 = *(uint64_t *)(*(int64_t *)(this_ptr[10] + 0x10) + (int64_t)(int)uVar20 * 8);
        cVar5 = uVar17 == 0;
        if (!(bool)cVar5) {
          FUN_00d50b00();
        }
        if (lVar21 != 0) {
          local_50 = '\0';
          cVar5 = FUN_00d51e10();
          local_58 = uVar17;
        }
        if (uVar17 != 0) {
          FUN_00d50b20();
        }
        if (cVar5 != '\0') {
          if ((int)uVar20 < 1) {
            local_b8 = (void *)FUN_00e7bdb0();
          }
          else {
            local_b8 = *(void **)(*(int64_t *)(this_ptr[9] + 0x10) + (uint64_t)(uVar20 - 1) * 8);
          }
          bVar23 = uVar20 == 0;
          bVar6 = 1;
          goto LAB_012504d5;
        }
      }
      bVar23 = false;
      local_70 = (void *)(uint64_t)uVar8;
    }
LAB_012504d5:
    puVar1 = (uint64_t *)(this_ptr + 9);
    iVar19 = iVar19 >> 3;
    iVar9 = iVar19;
    local_b0 = param_1;
    if ((uint64_t)param_1 >> 0x20 == 0) {
LAB_0125064e:
      bVar7 = 1;
      local_68 = iVar9;
      if ((bool)(bVar23 & bVar24)) goto LAB_01250300;
    }
    else {
      iVar9 = FUN_01251eb0();
      if (iVar9 < 1) {
        local_58 = FUN_00e7bdb0();
        if (local_58 >> 0x20 != 0) goto LAB_01250544;
LAB_01250579:
        bVar7 = 0;
        lVar21 = *arg1;
        local_68 = iVar9;
        if (lVar21 == 0) goto LAB_0125059d;
LAB_01250593:
        if (local_60 != '\0') goto LAB_0125059d;
      }
      else {
        local_58 = *(uint64_t *)(*(int64_t *)(this_ptr[9] + 0x10) + (uint64_t)(iVar9 - 1) * 8);
        if (local_58 >> 0x20 == 0) goto LAB_01250579;
LAB_01250544:
        local_b0._4_4_ = (int)((uint64_t)param_1 >> 0x20);
        if (local_b0._4_4_ == 0) goto LAB_01250579;
        bVar7 = FUN_00e7c000();
        local_68 = iVar9 - (uint)bVar7;
        lVar21 = *arg1;
        if (lVar21 != 0) goto LAB_01250593;
LAB_0125059d:
        uVar17 = *(uint64_t *)(*(int64_t *)(this_ptr[10] + 0x10) + (int64_t)iVar9 * 8);
        cVar5 = uVar17 == 0;
        if (!(bool)cVar5) {
          FUN_00d50b00();
        }
        if (lVar21 != 0) {
          local_50 = '\0';
          cVar5 = FUN_00d51e10();
          local_58 = uVar17;
        }
        if (uVar17 != 0) {
          FUN_00d50b20();
        }
        if (cVar5 != '\0') {
          iVar12 = *(int *)(*puVar1 + 0x18);
          iVar16 = iVar12 + 7;
          if (-1 < iVar12) {
            iVar16 = iVar12;
          }
          if (iVar9 < iVar16 >> 3) {
            local_b0 = *(void **)(*(int64_t *)(*puVar1 + 0x10) + (int64_t)iVar9 * 8);
          }
          else {
            local_b0 = (void *)FUN_00e7bdb0();
          }
          bVar24 = iVar9 == iVar19;
          goto LAB_0125064e;
        }
      }
    }
    iVar9 = (int)local_70;
    if (iVar9 < 1) {
      FUN_00e7bdb0();
      uVar17 = *puVar1;
    }
    else {
      uVar17 = this_ptr[9];
    }
    iVar12 = *(int *)(uVar17 + 0x18);
    iVar16 = iVar12 + 7;
    if (-1 < iVar12) {
      iVar16 = iVar12;
    }
    if (local_68 < iVar16 >> 3) {
      uVar10 = *(void*)(*(int64_t *)(uVar17 + 0x10) + (int64_t)local_68 * 8);
    }
    else {
      uVar10 = FUN_00e7bdb0();
    }
    pvVar13 = local_70;
    FUN_0124f500();
    FUN_00c8e710();
    if ((local_50 == '\0') && (local_58 != 0)) {
      FUN_00d50b00();
    }
    FUN_00c92170();
    FUN_00c92160();
    if (iVar9 != 0) {
      FUN_00c8e340();
      if (*puVar1 != 0) {
        FUN_00d50b00();
      }
      _memcpy(pvVar13,(void *)(int64_t)(iVar9 * 8),sVar18);
      FUN_00d50b20();
    }
    if (bVar6 == 0) {
      iVar12 = *(int *)(local_58 + 0x18);
      FUN_00c8e340();
      *(void **)(*(int64_t *)(local_58 + 0x10) + (int64_t)iVar12) = local_b8;
      pvVar13 = local_b8;
    }
    if (bVar7 == 0) {
      iVar12 = *(int *)(local_58 + 0x18);
      FUN_00c8e340();
      *(void **)(*(int64_t *)(local_58 + 0x10) + (int64_t)iVar12) = local_b0;
      pvVar13 = local_b0;
    }
    if (iVar19 - local_68 != 0) {
      FUN_00c8e340();
      if (*puVar1 != 0) {
        FUN_00d50b00();
      }
      _memcpy(pvVar13,(void *)(int64_t)((iVar19 - local_68) * 8),sVar18);
      FUN_00d50b20();
    }
    uVar8 = iVar9 - (uint)bVar6;
    puVar11 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar11 = &g_02572358;
    (*g_02572370)();
    FUN_00d227e0();
    FUN_00d22760();
    FUN_00d227d0();
    FUN_00d21370();
    uVar20 = uVar8 + 1;
    if (-1 < (int)uVar8) {
      uVar17 = 0;
      do {
        lVar21 = *(int64_t *)(*(int64_t *)(this_ptr[10] + 0x10) + uVar17 * 8);
        if (lVar21 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar21 != 0) {
          FUN_00d50b20();
        }
        uVar17 = uVar17 + 1;
      } while (uVar20 != uVar17);
    }
    iVar12 = (uint)bVar7 + local_68 + (uint)(uVar8 == (uint)bVar7 + local_68);
    if ((int)uVar20 < iVar12) {
      lVar21 = (int64_t)(int)(uVar8 + 2) + -1;
      bVar24 = false;
      uVar14 = (int64_t)(int)uVar20;
      uVar17 = (uint64_t)uVar8;
      do {
        uVar22 = uVar14;
        lVar3 = *(int64_t *)(*(int64_t *)(this_ptr[10] + 0x10) + uVar22 * 8);
        if (lVar3 != 0) {
          FUN_00d50b00();
          bVar23 = bVar24;
          if (*arg1 == lVar3) {
            bVar23 = true;
            if (bVar24) {
              FUN_00d64850();
              *(int *)(this_ptr + 8) = (int)this_ptr[8] + -1;
              FUN_00d64910();
              bVar23 = bVar24;
            }
          }
          else {
            if ((int)this_ptr[8] != 0) {
              if (-1 < (int)uVar8) {
                uVar14 = 0;
                do {
                  if (*(int64_t *)(*(int64_t *)(this_ptr[10] + 0x10) + uVar14 * 8) == lVar3) {
                    FUN_00d64850();
                    *(int *)(this_ptr + 8) = (int)this_ptr[8] + -1;
                    FUN_00d64910();
                    goto LAB_01250a11;
                  }
                  uVar14 = uVar14 + 1;
                } while (uVar20 != uVar14);
              }
              if ((int)uVar17 + 2 <= iVar19) {
                lVar15 = lVar21;
                do {
                  if (*(int64_t *)(*(int64_t *)(this_ptr[10] + 0x10) + 8 + lVar15 * 8) == lVar3)
                  {
                    FUN_00d64850();
                    *(int *)(this_ptr + 8) = (int)this_ptr[8] + -1;
                    FUN_00d64910();
                    goto LAB_01250a11;
                  }
                  lVar15 = lVar15 + 1;
                } while (lVar15 < iVar19);
              }
            }
            (**(code **)(*this_ptr + 0x378))();
            FUN_00d64d10();
            FUN_00d23f50();
            FUN_00d651a0();
          }
LAB_01250a11:
          FUN_00d50b20();
          bVar24 = bVar23;
        }
        lVar21 = lVar21 + 1;
        uVar14 = uVar22 + 1;
        uVar17 = uVar22;
      } while ((int64_t)(uVar22 + 1) < (int64_t)iVar12);
    }
    else {
      bVar24 = false;
    }
    FUN_00d21140();
    if ((*arg1 != 0) && (!bVar24)) {
      cVar5 = FUN_00d24090();
      if (cVar5 == '\0') {
        FUN_00d649d0();
        FUN_00d21140();
        FUN_00d64e50();
        (**(code **)(*this_ptr + 0x370))();
      }
      else {
        FUN_00d64850();
        *(int *)(this_ptr + 8) = (int)this_ptr[8] + 1;
        FUN_00d64910();
      }
    }
    if ((iVar9 == local_68 && bVar6 == 0) && bVar7 == 0) {
      uVar17 = *(uint64_t *)(*(int64_t *)(this_ptr[10] + 0x10) + (int64_t)iVar9 * 8);
      if (uVar17 == 0) {
        FUN_00d21140();
      }
      else {
        FUN_00d51d20();
        if ((local_50 == '\0') && (local_58 != 0)) {
          FUN_00d50b00();
        }
        if (local_58 == uVar17) {
          FUN_00d64850();
          *(int *)(this_ptr + 8) = (int)this_ptr[8] + 1;
          FUN_00d64910();
        }
        else {
          FUN_00d649d0();
          FUN_00d21140();
          FUN_00d64e50();
          (**(code **)(*this_ptr + 0x370))();
        }
        FUN_00d21140();
        if (local_58 != 0) {
          FUN_00d50b20();
        }
      }
    }
    uVar2 = *(void*)((int64_t)puVar11 + 0xc);
    if (iVar12 <= iVar19) {
      lVar21 = (int64_t)iVar12;
      iVar9 = (iVar19 - iVar12) + 1;
      do {
        lVar3 = *(int64_t *)(*(int64_t *)(this_ptr[10] + 0x10) + lVar21 * 8);
        if (lVar3 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar3 != 0) {
          FUN_00d50b20();
        }
        lVar21 = lVar21 + 1;
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
    }
    FUN_00d64850();
    uVar17 = *puVar1;
    if (uVar17 != local_58) {
      if (local_58 != 0) {
        FUN_00d50b00();
      }
      *puVar1 = local_58;
      if (uVar17 != 0) {
        FUN_00d50b20();
      }
    }
    FUN_00d64910();
    FUN_00d64850();
    puVar4 = (void*)this_ptr[10];
    if (puVar4 != puVar11) {
      if (puVar11 != (void*)0x0) {
        FUN_00d50b00();
      }
      this_ptr[10] = (int64_t)puVar11;
      if (puVar4 != (void*)0x0) {
        FUN_00d50b20();
      }
    }
    FUN_00d64910();
    FUN_0124f660(local_70,uVar10,uVar2);
    if (puVar11 != (void*)0x0) {
      FUN_00d50b20();
    }
    if (local_58 != 0) {
      FUN_00d50b20();
    }
  }
  return;
}

