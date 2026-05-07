// Function: FUN_00e31a80
// Address: 00e31a80
// Size: 841 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


uint64_t FUN_00e31a80(uint64_t param_1,uint param_2)

{
  int64_t lVar1;
  int64_t lVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint64_t uVar7;
  int64_t lVar8;
  uint64_t uVar9;
  int64_t lVar10;
  uint64_t uVar11;
  uint64_t uVar12;
  uint unaff_ESI;
  void*this_ptr;
  uint uVar13;
  
  uVar12 = 0;
  uVar4 = FUN_00e31390();
  iVar5 = FUN_00c8d180();
  if ((int)uVar4 < iVar5) {
    uVar12 = 0;
    iVar5 = FUN_00e31390();
    if ((int)uVar4 < iVar5 * 2 + 2) {
      uVar6 = FUN_00c8d190();
      uVar12 = (uint64_t)uVar6;
      if ((unaff_ESI & 1) == 0) {
LAB_00e31b20:
        uVar13 = unaff_ESI | 1;
        cVar3 = FUN_00e314a0(0);
        if (cVar3 == '\0') goto code_r0x00e31b3c;
        uVar11 = (uint64_t)(param_2 & 1 ^ 1);
        *(void*)(this_ptr + uVar11 * 2 + 2) = 0;
        *(uint *)((int64_t)this_ptr + uVar11 * 0x10 + 0x14) = uVar6;
        uVar7 = FUN_00e83020();
        this_ptr[uVar11 * 2 + 3] = uVar7;
        while (3 < uVar13) {
          FUN_00da6800();
          uVar13 = FUN_00e31390();
        }
        if (0 < (int)uVar4) {
          uVar12 = 0;
          do {
            lVar8 = FUN_00e313b0();
            if (lVar8 != 0) {
              uVar9 = (**this_ptr)();
              uVar9 = (uVar9 & 0xffffffff) % (uint64_t)uVar6;
              lVar1 = this_ptr[uVar11 * 2 + 3];
              lVar10 = (int64_t)(int)uVar9;
              lVar2 = *(int64_t *)(lVar1 + lVar10 * 8);
              while (lVar2 != 0) {
                uVar13 = (int)uVar9 + 1;
                uVar9 = (uint64_t)uVar13;
                if (uVar13 == uVar6) {
                  uVar9 = 0;
                }
                lVar10 = (int64_t)(int)uVar9;
                lVar2 = *(int64_t *)(lVar1 + lVar10 * 8);
              }
              *(int64_t *)(lVar1 + lVar10 * 8) = lVar8;
              *(int *)(this_ptr + uVar11 * 2 + 2) = *(int *)(this_ptr + uVar11 * 2 + 2) + 1;
            }
            uVar12 = uVar12 + 1;
          } while (uVar12 != uVar4);
        }
        uVar12 = this_ptr[(uint64_t)(param_2 & 1) * 2 + 3];
        FUN_00e313d0();
        FUN_00e313d0();
        FUN_00e313f0();
        cVar3 = FUN_00e314a0(3,uVar11);
        if (cVar3 == '\0') {
          iVar5 = 0x800;
          do {
            if (iVar5 < 2) {
              FUN_00da6800();
              iVar5 = 0x800;
            }
            else {
              iVar5 = iVar5 + -1;
            }
            cVar3 = FUN_00e314a0(3,uVar11);
          } while (cVar3 == '\0');
        }
        FUN_00e313d0();
        FUN_00e83070();
        goto LAB_00e31d72;
      }
LAB_00e31b46:
      cVar3 = FUN_00e314a0(0,unaff_ESI - 2);
      while (cVar3 == '\0') {
        cVar3 = FUN_00e314a0(0,unaff_ESI - 2);
      }
      iVar5 = FUN_00e31390();
      cVar3 = FUN_00e314a0(0,iVar5 + -2);
      while (cVar3 == '\0') {
        cVar3 = FUN_00e314a0(0,iVar5 + -2);
      }
      do {
        FUN_00da6800();
        uVar4 = FUN_00e31390();
      } while ((uVar4 & 1) != 0);
LAB_00e31d72:
      uVar12 = CONCAT71((int7)(uVar12 >> 8),1);
    }
  }
  return uVar12 & 0xffffffff;
code_r0x00e31b3c:
  if ((unaff_ESI & 1) != 0) goto LAB_00e31b46;
  goto LAB_00e31b20;
}

