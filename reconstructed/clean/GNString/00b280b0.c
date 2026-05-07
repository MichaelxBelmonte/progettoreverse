// Function: FUN_00b280b0
// Address: 00b280b0
// Size: 1214 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


uint64_t FUN_00b280b0(uint64_t param_1,uint64_t param_2)

{
  int64_t *plVar1;
  void*puVar2;
  int64_t lVar3;
  int iVar4;
  uint uVar5;
  uint64_t uVar6;
  double *pdVar7;
  uint64_t uVar8;
  int64_t lVar9;
  uint64_t uVar10;
  uint64_t uVar11;
  int64_t lVar12;
  uint *this_ptr;
  uint64_t uVar13;
  int64_t lVar14;
  double dVar15;
  double local_58;
  
  uVar5 = this_ptr[1];
  uVar8 = (uint64_t)uVar5;
  if (uVar8 != 0) {
    param_1 = *(uint64_t *)(*(int64_t *)(this_ptr + 4) + 0xf0);
    uVar11 = *(uint64_t *)(*(int64_t *)(this_ptr + 4) + 0x100);
    if ((uVar5 < 4) || ((param_1 < uVar11 + uVar8 * 8 && (uVar11 < param_1 + uVar8 * 8)))) {
      uVar10 = 0;
    }
    else {
      uVar10 = (uint64_t)(uVar5 & 0xfffffffc);
      uVar6 = (uVar10 - 4 >> 2) + 1;
      uVar13 = (uint64_t)((uint)uVar6 & 3);
      if (uVar10 - 4 < 0xc) {
        lVar9 = 0;
      }
      else {
        lVar14 = -(uVar6 & 0xfffffffffffffffc);
        lVar9 = 0;
        do {
          puVar2 = (void*)(param_1 + lVar9 * 8);
          *puVar2 = 0;
          puVar2[1] = 0;
          puVar2 = (void*)(param_1 + 0x10 + lVar9 * 8);
          *puVar2 = 0;
          puVar2[1] = 0;
          puVar2 = (void*)(uVar11 + lVar9 * 8);
          *puVar2 = 0;
          puVar2[1] = 0;
          puVar2 = (void*)(uVar11 + 0x10 + lVar9 * 8);
          *puVar2 = 0;
          puVar2[1] = 0;
          puVar2 = (void*)(param_1 + 0x20 + lVar9 * 8);
          *puVar2 = 0;
          puVar2[1] = 0;
          puVar2 = (void*)(param_1 + 0x30 + lVar9 * 8);
          *puVar2 = 0;
          puVar2[1] = 0;
          puVar2 = (void*)(uVar11 + 0x20 + lVar9 * 8);
          *puVar2 = 0;
          puVar2[1] = 0;
          puVar2 = (void*)(uVar11 + 0x30 + lVar9 * 8);
          *puVar2 = 0;
          puVar2[1] = 0;
          puVar2 = (void*)(param_1 + 0x40 + lVar9 * 8);
          *puVar2 = 0;
          puVar2[1] = 0;
          puVar2 = (void*)(param_1 + 0x50 + lVar9 * 8);
          *puVar2 = 0;
          puVar2[1] = 0;
          puVar2 = (void*)(uVar11 + 0x40 + lVar9 * 8);
          *puVar2 = 0;
          puVar2[1] = 0;
          puVar2 = (void*)(uVar11 + 0x50 + lVar9 * 8);
          *puVar2 = 0;
          puVar2[1] = 0;
          puVar2 = (void*)(param_1 + 0x60 + lVar9 * 8);
          *puVar2 = 0;
          puVar2[1] = 0;
          puVar2 = (void*)(param_1 + 0x70 + lVar9 * 8);
          *puVar2 = 0;
          puVar2[1] = 0;
          puVar2 = (void*)(uVar11 + 0x60 + lVar9 * 8);
          *puVar2 = 0;
          puVar2[1] = 0;
          puVar2 = (void*)(uVar11 + 0x70 + lVar9 * 8);
          *puVar2 = 0;
          puVar2[1] = 0;
          lVar9 = lVar9 + 0x10;
          lVar14 = lVar14 + 4;
        } while (lVar14 != 0);
      }
      if (uVar13 != 0) {
        lVar14 = uVar11 + lVar9 * 8;
        lVar9 = param_1 + lVar9 * 8;
        lVar12 = 0;
        do {
          puVar2 = (void*)(lVar9 + lVar12);
          *puVar2 = 0;
          puVar2[1] = 0;
          puVar2 = (void*)(lVar9 + 0x10 + lVar12);
          *puVar2 = 0;
          puVar2[1] = 0;
          puVar2 = (void*)(lVar14 + lVar12);
          *puVar2 = 0;
          puVar2[1] = 0;
          puVar2 = (void*)(lVar14 + 0x10 + lVar12);
          *puVar2 = 0;
          puVar2[1] = 0;
          lVar12 = lVar12 + 0x20;
        } while (uVar13 << 5 != lVar12);
      }
      if (uVar10 == uVar8) goto LAB_00b28298;
    }
    uVar13 = ~uVar10;
    uVar6 = uVar8 & 3;
    if ((uVar5 & 3) != 0) {
      do {
        *(void*)(param_1 + uVar10 * 8) = 0;
        *(void*)(uVar11 + uVar10 * 8) = 0;
        uVar10 = uVar10 + 1;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
    }
    if (2 < uVar13 + uVar8) {
      do {
        *(void*)(param_1 + uVar10 * 8) = 0;
        *(void*)(uVar11 + uVar10 * 8) = 0;
        *(void*)(param_1 + 8 + uVar10 * 8) = 0;
        *(void*)(uVar11 + 8 + uVar10 * 8) = 0;
        *(void*)(param_1 + 0x10 + uVar10 * 8) = 0;
        *(void*)(uVar11 + 0x10 + uVar10 * 8) = 0;
        *(void*)(param_1 + 0x18 + uVar10 * 8) = 0;
        *(void*)(uVar11 + 0x18 + uVar10 * 8) = 0;
        uVar10 = uVar10 + 4;
      } while (uVar8 != uVar10);
    }
  }
LAB_00b28298:
  if (param_2 != 0) {
    lVar9 = *(int64_t *)(this_ptr + 4);
    do {
      if (param_2 < *(uint64_t *)(lVar9 + 0x18)) {
        FUN_00b285a0(param_1,param_2);
        uVar8 = (uint64_t)this_ptr[1];
        lVar9 = *(int64_t *)(this_ptr + 4);
        *(int64_t *)(lVar9 + 0x10) = *(int64_t *)(lVar9 + 0x10) + param_2 * uVar8;
        if ((~*this_ptr & 0xb) == 0) {
          *(int64_t *)(lVar9 + 0xe0) = *(int64_t *)(lVar9 + 0xe0) + param_2;
        }
        *(int64_t *)(lVar9 + 0x18) = *(int64_t *)(lVar9 + 0x18) - param_2;
        break;
      }
      FUN_00b285a0();
      lVar9 = *(int64_t *)(this_ptr + 4);
      lVar14 = *(int64_t *)(lVar9 + 0x18);
      *(int64_t *)(lVar9 + 0x10) = *(int64_t *)(lVar9 + 0x10) + (uint64_t)this_ptr[1] * lVar14;
      uVar5 = *this_ptr;
      if ((~uVar5 & 5) == 0) {
        iVar4 = FUN_00b27ba0(lVar9,0);
        if (iVar4 != 0) {
          return 1;
        }
        uVar5 = *this_ptr;
      }
      lVar9 = *(int64_t *)(this_ptr + 4);
      if ((~uVar5 & 0xb) == 0) {
        lVar12 = *(int64_t *)(lVar9 + 0x28);
        uVar11 = *(int64_t *)(lVar9 + 0xe0) + *(int64_t *)(lVar9 + 0x18);
        *(uint64_t *)(lVar9 + 0xe0) = uVar11;
        uVar8 = lVar12 * 0x1e;
        if (uVar11 == uVar8) {
          if (uVar11 <= *(uint64_t *)(lVar9 + 8)) {
            FUN_00b27ba0();
            lVar9 = *(int64_t *)(this_ptr + 4);
            if (g_028a0eb0 <= local_58) {
              if (*(int *)(lVar9 + 200) == 0) {
                lVar12 = *(int64_t *)(lVar9 + 0xc0);
                if (lVar12 == *(int64_t *)(lVar9 + 0xb8)) {
                  pdVar7 = *(double **)(lVar9 + 0xa8);
                  dVar15 = pdVar7[1];
                  *(double *)(lVar9 + 0xa8) = dVar15;
                  if (dVar15 == 0.0) {
                    *(int64_t *)(lVar9 + 0xb0) = lVar9 + 0xa8;
                  }
                }
                else {
                  pdVar7 = _malloc((size_t)uVar8);
                  if (pdVar7 == (double *)0x0) {
                    return 1;
                  }
                  *(int64_t *)(lVar9 + 0xc0) = lVar12 + 1;
                }
                *pdVar7 = local_58;
                pdVar7[1] = 0.0;
                **(void**)(lVar9 + 0xb0) = pdVar7;
                lVar9 = *(int64_t *)(this_ptr + 4);
                *(double **)(lVar9 + 0xb0) = pdVar7 + 1;
              }
              else {
                uVar8 = 1000;
                uVar11 = 0;
                do {
                  while (uVar10 = uVar11 + uVar8 >> 1,
                        *(double *)(&g_028a0eb0 + uVar10 * 8) <= local_58) {
                    uVar11 = uVar10;
                    if (uVar8 - uVar10 == 1) goto LAB_00b283dc;
                  }
                  lVar12 = uVar10 - uVar11;
                  uVar8 = uVar10;
                  uVar10 = uVar11;
                } while (lVar12 != 1);
LAB_00b283dc:
                plVar1 = (int64_t *)(*(int64_t *)(lVar9 + 0xd8) + uVar10 * 8);
                *plVar1 = *plVar1 + 1;
              }
            }
          }
          lVar12 = *(int64_t *)(lVar9 + 0x28);
          *(int64_t *)(lVar9 + 0xe0) = lVar12 * 0x14;
        }
      }
      else {
        lVar12 = *(int64_t *)(lVar9 + 0x28);
      }
      param_1 = param_2 - lVar14;
      *(int64_t *)(lVar9 + 0x18) = lVar12;
      uVar8 = (uint64_t)this_ptr[1];
      if (*(int64_t *)(lVar9 + 0x10) == *(int64_t *)(lVar9 + 8) * uVar8) {
        *(void*)(lVar9 + 0x10) = 0;
      }
      param_2 = param_1;
    } while (param_1 != 0);
  }
  if ((int)uVar8 != 0) {
    lVar9 = *(int64_t *)(this_ptr + 4);
    lVar14 = *(int64_t *)(lVar9 + 0xe8);
    lVar12 = *(int64_t *)(lVar9 + 0xf0);
    lVar3 = *(int64_t *)(lVar9 + 0x100);
    lVar9 = *(int64_t *)(lVar9 + 0xf8);
    uVar11 = 0;
    do {
      dVar15 = *(double *)(lVar12 + uVar11 * 8);
      pdVar7 = (double *)(lVar14 + uVar11 * 8);
      if (dVar15 < *pdVar7 || dVar15 == *pdVar7) {
        dVar15 = *(double *)(lVar3 + uVar11 * 8);
        pdVar7 = (double *)(lVar9 + uVar11 * 8);
        if (*pdVar7 <= dVar15 && dVar15 != *pdVar7) goto LAB_00b2857c;
      }
      else {
        *(double *)(lVar14 + uVar11 * 8) = dVar15;
        dVar15 = *(double *)(lVar3 + uVar11 * 8);
        pdVar7 = (double *)(lVar9 + uVar11 * 8);
        if (*pdVar7 <= dVar15 && dVar15 != *pdVar7) {
LAB_00b2857c:
          *(double *)(lVar9 + uVar11 * 8) = dVar15;
        }
      }
      uVar11 = uVar11 + 1;
    } while (uVar8 != uVar11);
  }
  return 0;
}

