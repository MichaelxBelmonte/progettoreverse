// Function: FUN_01900ec0
// Address: 01900ec0
// Size: 981 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


int64_t * FUN_01900ec0(uint *param_1,int64_t *param_2)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  void *pvVar4;
  uint *puVar5;
  uint uVar6;
  int64_t arg1;
  int64_t *this_ptr;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int64_t lVar10;
  double dVar11;
  double dVar12;
  
  if (*param_2 == 0) {
LAB_0190112c:
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
    return this_ptr;
  }
  puVar5 = param_1;
  if (param_1 != (uint *)0x0) {
    uVar6 = *param_1;
    if (-1 < (int)uVar6) {
      puVar5 = *(uint **)(arg1 + 0x38);
      puVar1 = puVar5 + 3;
      if (((int)uVar6 < (int)*puVar1) &&
         (puVar5 = *(uint **)(puVar5 + 4), *(int64_t *)(puVar5 + (uint64_t)uVar6 * 2) == *param_2)
         ) {
        if (uVar6 == *puVar1 - 1) goto LAB_0190112c;
        *param_1 = uVar6 + 1;
        lVar10 = *(int64_t *)(puVar5 + (uint64_t)uVar6 * 2 + 2);
        *(void*)(this_ptr + 1) = 0;
        if (lVar10 != 0) {
          FUN_00d50b00();
        }
        *this_ptr = lVar10;
        goto LAB_0190111e;
      }
    }
  }
  pvVar4 = _pthread_getspecific((void*)puVar5);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  dVar11 = (double)FUN_01907950();
  iVar2 = *(int *)(*(int64_t *)(arg1 + 0x38) + 0xc);
  dVar12 = (double)FUN_01907950();
  if (dVar12 <= dVar11) {
    uVar6 = iVar2 - 2;
    dVar12 = (double)FUN_01907950();
    if (dVar11 < dVar12) {
      uVar9 = 1;
      uVar8 = uVar6;
      if ((param_1 != (uint *)0x0) && (uVar3 = *param_1, uVar3 != 0xffffffff)) {
        uVar7 = uVar3;
        if ((int)uVar6 < (int)uVar3) {
          uVar7 = uVar6;
        }
        if ((int)uVar3 < 1) {
          uVar7 = 1;
        }
        dVar12 = (double)FUN_01907950();
        if (dVar12 <= dVar11) {
          uVar9 = uVar7;
          if ((int)uVar7 < iVar2 + -1) {
            uVar8 = uVar7 + 1;
            dVar12 = (double)FUN_01907950();
            if (dVar11 < dVar12) goto LAB_0190124b;
          }
          uVar8 = uVar7 + 2;
          if ((((iVar2 <= (int)uVar8) || (dVar12 = (double)FUN_01907950(), dVar12 <= dVar11)) &&
              (uVar8 = uVar6, (int)(uVar7 + 3) < iVar2)) &&
             (dVar12 = (double)FUN_01907950(), dVar11 < dVar12)) {
            uVar8 = uVar7 + 3;
          }
        }
        else {
          uVar9 = 1;
          uVar8 = uVar7;
          if (0 < (int)uVar7) {
            dVar12 = (double)FUN_01907950();
            uVar9 = uVar7 - 1;
            if (dVar11 < dVar12) {
              if ((int)uVar7 < 2) {
                uVar9 = 1;
                uVar8 = 1;
              }
              else {
                dVar12 = (double)FUN_01907950();
                uVar9 = uVar7 - 2;
                if (dVar11 < dVar12) {
                  if ((int)uVar7 < 3) {
                    uVar9 = 1;
                    uVar8 = 2;
                  }
                  else {
                    dVar12 = (double)FUN_01907950();
                    uVar9 = uVar7 - 3;
                    if (dVar11 < dVar12) {
                      uVar9 = 1;
                    }
                  }
                }
              }
            }
          }
        }
      }
LAB_0190124b:
      do {
        uVar6 = uVar9;
        if (uVar8 - uVar9 == 1) break;
        uVar6 = (int)(uVar8 - uVar9) / 2 + uVar9;
        dVar12 = (double)FUN_01907950();
        uVar3 = uVar6;
        if (dVar11 <= dVar12) {
          uVar3 = uVar9;
          uVar8 = uVar6;
        }
        uVar9 = uVar3;
      } while ((dVar12 != dVar11) || (NAN(dVar12) || NAN(dVar11)));
    }
    if (param_1 != (uint *)0x0) goto LAB_019010ad;
LAB_019010b0:
    if (uVar6 == 0) goto LAB_019010b4;
LAB_019010d1:
    lVar10 = *(int64_t *)
              (*(int64_t *)(*(int64_t *)(arg1 + 0x38) + 0x10) + 8 + (int64_t)(int)uVar6 * 8)
    ;
    dVar12 = (double)FUN_01907950();
    if ((uVar6 != *(int *)(*(int64_t *)(arg1 + 0x38) + 0xc) - 2U) || (dVar11 < dVar12))
    goto LAB_01901104;
LAB_01901118:
    lVar10 = 0;
  }
  else {
    uVar6 = 0;
    if (param_1 != (uint *)0x0) {
LAB_019010ad:
      *param_1 = uVar6;
      goto LAB_019010b0;
    }
LAB_019010b4:
    lVar10 = **(int64_t **)(*(int64_t *)(arg1 + 0x38) + 0x10);
    dVar12 = (double)FUN_01907950();
    uVar6 = 0;
    if (dVar12 <= dVar11) goto LAB_019010d1;
LAB_01901104:
    *(void*)(this_ptr + 1) = 0;
    if (lVar10 == 0) goto LAB_01901118;
    FUN_00d50b00();
  }
  *this_ptr = lVar10;
LAB_0190111e:
  *(void*)(this_ptr + 1) = 1;
  return this_ptr;
}

