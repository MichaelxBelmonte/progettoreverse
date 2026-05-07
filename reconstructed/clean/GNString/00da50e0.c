// Function: FUN_00da50e0
// Address: 00da50e0
// Size: 783 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


uint64_t FUN_00da50e0(uint64_t param_1,void *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  void *pvVar4;
  uint64_t uVar5;
  int64_t lVar6;
  pthread_t p_Var7;
  int iVar8;
  void* pVar9;
  uint64_t uVar10;
  uint unaff_ESI;
  uint64_t this_ptr;
  int64_t lVar11;
  int64_t lVar12;
  bool bVar13;
  uint32_t local_58;
  uint32_t uStack_54;
  char local_50;
  
  iVar3 = *(int *)(*(int64_t *)(this_ptr + 0x10) + 0x18);
  iVar8 = iVar3 + 7;
  if (-1 < iVar3) {
    iVar8 = iVar3;
  }
  uVar1 = iVar8 >> 3;
  if ((int)unaff_ESI <= iVar8 >> 3) {
    uVar1 = unaff_ESI;
  }
  uVar10 = (uint64_t)uVar1;
  iVar3 = FUN_00e31390();
  if ((*(int *)(this_ptr + 0xc) == 4) ||
     (pvVar4 = _pthread_getspecific((void*)uVar10), pvVar4 != (void *)0x0)) {
    bVar13 = false;
    lVar12 = 0;
    uVar5 = this_ptr;
    while (iVar3 < (int)uVar1) {
      FUN_00da4d70();
      lVar6 = CONCAT44(uStack_54,local_58);
      if (lVar6 == lVar12) {
        if ((bVar13) || (lVar6 == 0)) {
          if ((local_50 != '\0') && (lVar6 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          bVar13 = true;
          if (local_50 == '\0') {
            FUN_00d50b00();
          }
        }
      }
      else if (local_50 == '\0') {
        if (lVar6 != 0) {
          FUN_00d50b00();
        }
        if ((!bVar13) || (lVar12 == 0)) goto LAB_00da5220;
        FUN_00d50b20();
        lVar12 = lVar6;
        bVar13 = true;
      }
      else if ((bVar13) && (lVar12 != 0)) {
        FUN_00d50b20();
        lVar12 = lVar6;
        bVar13 = true;
      }
      else {
LAB_00da5220:
        lVar12 = lVar6;
        bVar13 = true;
      }
      FUN_00e316f0();
      iVar3 = FUN_00e31390();
      if (iVar3 < (int)uVar1) {
        *(int *)(lVar12 + 0x60) = iVar3;
        if ((!bVar13) && (lVar12 != 0)) {
          FUN_00d50b00();
        }
        lVar6 = *(int64_t *)(*(int64_t *)(this_ptr + 0x10) + 0x10);
        *(int64_t *)(lVar6 + (int64_t)iVar3 * 8) = lVar12;
        bVar13 = false;
        iVar3 = FUN_00e31530(lVar6,0);
      }
      uVar5 = FUN_00e31730();
    }
    if ((bVar13) && (lVar12 != 0)) {
      uVar5 = FUN_00d50b20();
    }
  }
  else {
    uVar5 = (uint64_t)uVar1;
    if (iVar3 < (int)uVar1) {
      lVar12 = 0;
      do {
        FUN_00e316f0();
        iVar3 = FUN_00e31390();
        pVar9 = (void*)uVar10;
        lVar6 = lVar12;
        if (iVar3 < (int)uVar1) {
          lVar6 = *(int64_t *)(this_ptr + 0x20);
          if (*(int64_t *)(lVar6 + 0x20) == 0) {
            p_Var7 = _pthread_self();
            *(pthread_t *)(lVar6 + 0x10) = p_Var7;
          }
          _pthread_setspecific(pVar9,param_2);
          uVar2 = MXCSR;
          *(uint *)(lVar6 + 0x70) = MXCSR;
          if ((~MXCSR & 0x8040) != 0) {
            MXCSR = MXCSR | 0x804;
          }
          *(void*)(lVar6 + 100) = 1;
          FUN_00da4d70();
          lVar6 = CONCAT44(uStack_54,uVar2);
          if (lVar6 == lVar12) {
            lVar11 = lVar12;
            if (lVar6 == 0) goto LAB_00da53ce;
            lVar6 = lVar12;
            if (local_50 == '\0') {
              FUN_00d50b00();
            }
LAB_00da52be:
            *(int *)(lVar6 + 0x60) = iVar3;
          }
          else {
            if (local_50 != '\0') goto LAB_00da52be;
            lVar11 = lVar6;
            if (lVar6 != 0) {
              FUN_00d50b00();
            }
LAB_00da53ce:
            *(int *)(lVar11 + 0x60) = iVar3;
            bVar13 = lVar6 == lVar12;
            lVar6 = lVar11;
            if ((bVar13) && (lVar11 != 0)) {
              FUN_00d50b00();
            }
          }
          uVar10 = *(uint64_t *)(*(int64_t *)(this_ptr + 0x10) + 0x10);
          *(int64_t *)(uVar10 + (int64_t)iVar3 * 8) = lVar6;
          param_2 = (void *)0x0;
          iVar3 = FUN_00e31530();
          FUN_00da5480();
        }
        uVar5 = FUN_00e31730();
        lVar12 = lVar6;
      } while (iVar3 < (int)uVar1);
    }
  }
  return uVar5;
}

