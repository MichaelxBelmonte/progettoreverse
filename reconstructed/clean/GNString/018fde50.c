// Function: FUN_018fde50
// Address: 018fde50
// Size: 1399 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


uint64_t FUN_018fde50(uint param_1,uint *param_2)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  void *pvVar4;
  int64_t lVar5;
  uint uVar6;
  int64_t *arg1;
  int64_t this_ptr;
  uint uVar7;
  uint uVar8;
  double dVar9;
  double dVar10;
  uint64_t uVar11;
  
  if (*arg1 == 0) {
    return g_02395720;
  }
  if (param_2 != (uint *)0x0) {
    param_1 = *param_2;
    if (-1 < (int64_t)(int)param_1) {
      iVar1 = *(int *)(*(int64_t *)(this_ptr + 0x38) + 0xc);
      if (((int)param_1 < iVar1) &&
         (lVar5 = *(int64_t *)(*(int64_t *)(this_ptr + 0x38) + 0x10),
         *(int64_t *)(lVar5 + (uint64_t)param_1 * 8) == *arg1)) {
        if (param_1 != iVar1 - 1U) {
          lVar5 = *(int64_t *)(lVar5 + 8 + (uint64_t)param_1 * 8);
          if (lVar5 != 0) {
            FUN_00d50b00();
          }
          uVar11 = FUN_019079d0();
          if (lVar5 == 0) {
            return uVar11;
          }
          FUN_00d50b20();
          return uVar11;
        }
        lVar5 = *(int64_t *)(lVar5 + -8 + (int64_t)(int)param_1 * 8);
        if (lVar5 != 0) {
          FUN_00d50b00();
        }
        uVar11 = FUN_019079d0();
        if (lVar5 == 0) {
          return uVar11;
        }
        FUN_00d50b20();
        return uVar11;
      }
    }
  }
  cVar2 = FUN_018fe550();
  if (cVar2 != '\0') {
    if (param_2 == (uint *)0x0) {
      lVar5 = *(int64_t *)(this_ptr + 0x38);
    }
    else {
      lVar5 = *(int64_t *)(this_ptr + 0x38);
      *param_2 = *(int *)(lVar5 + 0xc) - 1;
    }
    lVar5 = *(int64_t *)(*(int64_t *)(lVar5 + 0x10) + -0x10 + (int64_t)*(int *)(lVar5 + 0xc) * 8)
    ;
    if (lVar5 != 0) {
      FUN_00d50b00();
    }
    uVar11 = FUN_019079d0();
    if (lVar5 == 0) {
      return uVar11;
    }
    FUN_00d50b20();
    return uVar11;
  }
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  dVar9 = (double)FUN_01907950();
  iVar1 = *(int *)(*(int64_t *)(this_ptr + 0x38) + 0xc);
  dVar10 = (double)FUN_01907950();
  if (dVar9 < dVar10) {
    uVar6 = 0;
    goto joined_r0x018fe3c9;
  }
  uVar6 = iVar1 - 2;
  dVar10 = (double)FUN_01907950();
  if (dVar10 <= dVar9) goto joined_r0x018fe3c9;
  uVar8 = 1;
  if (param_2 == (uint *)0x0) {
    uVar7 = iVar1 - 2;
  }
  else {
    uVar7 = *param_2;
    if (uVar7 == 0xffffffff) {
      uVar7 = iVar1 - 2;
    }
    else {
      uVar3 = uVar7;
      if ((int)uVar6 < (int)uVar7) {
        uVar3 = iVar1 - 2;
      }
      if ((int)uVar7 < 1) {
        uVar3 = 1;
      }
      dVar10 = (double)FUN_01907950();
      if (dVar10 <= dVar9) {
        uVar8 = uVar3;
        if ((int)uVar3 < iVar1 + -1) {
          uVar7 = uVar3 + 1;
          dVar10 = (double)FUN_01907950();
          if (dVar9 < dVar10) goto LAB_018fe37b;
        }
        uVar7 = uVar3 + 2;
        if (((iVar1 <= (int)uVar7) || (dVar10 = (double)FUN_01907950(), dVar10 <= dVar9)) &&
           ((uVar7 = uVar3 + 3, iVar1 <= (int)uVar7 ||
            (dVar10 = (double)FUN_01907950(), dVar10 <= dVar9)))) {
          uVar7 = iVar1 - 2;
        }
      }
      else {
        uVar8 = 1;
        uVar7 = uVar3;
        if (0 < (int)uVar3) {
          dVar10 = (double)FUN_01907950();
          uVar8 = uVar3 - 1;
          if (dVar9 < dVar10) {
            if ((int)uVar3 < 2) {
              uVar7 = 1;
              uVar8 = 1;
            }
            else {
              dVar10 = (double)FUN_01907950();
              uVar8 = uVar3 - 2;
              if (dVar9 < dVar10) {
                if ((int)uVar3 < 3) {
                  uVar7 = 2;
                  uVar8 = 1;
                }
                else {
                  dVar10 = (double)FUN_01907950();
                  uVar8 = uVar3 - 3;
                  if (dVar9 < dVar10) {
                    uVar8 = 1;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_018fe37b:
  do {
    uVar6 = uVar8;
    if (uVar7 - uVar8 == 1) break;
    uVar6 = (int)(uVar7 - uVar8) / 2 + uVar8;
    dVar10 = (double)FUN_01907950();
    uVar3 = uVar6;
    if (dVar9 <= dVar10) {
      uVar3 = uVar8;
      uVar7 = uVar6;
    }
    uVar8 = uVar3;
  } while ((dVar10 != dVar9) || (NAN(dVar10) || NAN(dVar9)));
joined_r0x018fe3c9:
  if (param_2 != (uint *)0x0) {
    *param_2 = uVar6;
  }
  lVar5 = *(int64_t *)
           (*(int64_t *)(*(int64_t *)(this_ptr + 0x38) + 0x10) + 8 + (int64_t)(int)uVar6 * 8);
  if (lVar5 != 0) {
    FUN_00d50b00();
  }
  uVar11 = FUN_019079d0();
  if (lVar5 != 0) {
    FUN_00d50b20();
  }
  return uVar11;
}

