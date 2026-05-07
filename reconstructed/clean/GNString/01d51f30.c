// Function: FUN_01d51f30
// Address: 01d51f30
// Size: 573 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_01d51f30(int param_1,int64_t param_2)

{
  uint8_t uVar1;
  bool bVar2;
  int64_t lVar3;
  int64_t *plVar4;
  int64_t lVar5;
  int64_t lVar6;
  int iVar7;
  int64_t lVar8;
  uint uVar9;
  uint32_t unaff_ESI;
  int64_t this_ptr;
  int64_t lVar10;
  uint64_t uVar11;
  int64_t lVar12;
  int64_t lVar13;
  int iVar14;
  int64_t lVar15;
  int iVar16;
  
  uVar9 = (uint)*(float *)(this_ptr + 0x20);
  bVar2 = true;
  switch(unaff_ESI) {
  case 0:
    lVar6 = 3;
    lVar13 = 1;
    lVar12 = 2;
    lVar10 = 0;
    goto LAB_01d51feb;
  case 1:
    lVar6 = 3;
    lVar10 = 2;
    lVar13 = 1;
    lVar12 = 0;
    goto LAB_01d51feb;
  case 2:
    lVar10 = 3;
    lVar13 = 2;
    lVar12 = 1;
    break;
  case 3:
    lVar6 = -1;
    lVar13 = 1;
    lVar12 = 2;
    lVar10 = 0;
    bVar2 = false;
    goto LAB_01d51feb;
  case 4:
    lVar13 = 1;
    lVar12 = 2;
    lVar10 = 0;
    break;
  case 5:
    lVar10 = 2;
    lVar13 = 1;
    lVar12 = 0;
    break;
  default:
    lVar12 = 0;
    lVar13 = 0;
    lVar10 = 0;
  }
  lVar6 = 0;
LAB_01d51feb:
  plVar4 = *(int64_t **)(this_ptr + 0x50);
  iVar16 = (int)plVar4[2];
  iVar7 = iVar16 + 7;
  if (-1 < iVar16) {
    iVar7 = iVar16;
  }
  if ((0 < (int)uVar9) && (iVar16 = (int)*(float *)(this_ptr + 0x1c), 0 < iVar16)) {
    iVar7 = (iVar7 >> 3) * iVar16;
    if (iVar7 <= param_1) {
      iVar7 = param_1;
    }
    if (bVar2) {
      iVar14 = 0;
      uVar11 = 0;
      do {
        lVar15 = uVar11 * (int64_t)iVar7 + param_2;
        lVar5 = (int64_t)iVar14 + plVar4[1];
        lVar8 = 0;
        while( true ) {
          lVar3 = plVar4[2];
          *(void*)(lVar5 + lVar8 * 4) = *(void*)(lVar15 + lVar12);
          *(void*)(lVar5 + 1 + lVar8 * 4) = *(void*)(lVar15 + lVar13);
          *(void*)(lVar5 + 2 + lVar8 * 4) = *(void*)(lVar15 + lVar10);
          if ((int)lVar3 == 0x20) {
            lVar3 = 4;
            *(void*)(lVar5 + 3 + lVar8 * 4) = *(void*)(lVar15 + lVar6);
          }
          else {
            lVar3 = 3;
            *(void*)(lVar5 + 3 + lVar8 * 4) = 0xff;
          }
          if (iVar16 + -1 == (int)lVar8) break;
          lVar15 = lVar15 + lVar3;
          plVar4 = *(int64_t **)(this_ptr + 0x50);
          lVar8 = lVar8 + 1;
        }
        uVar11 = uVar11 + 1;
        plVar4 = *(int64_t **)(this_ptr + 0x50);
        iVar14 = iVar14 + iVar16 * 4;
      } while (uVar11 != uVar9);
    }
    else {
      iVar14 = 0;
      uVar11 = 0;
      do {
        lVar6 = uVar11 * (int64_t)iVar7 + param_2;
        lVar5 = (int64_t)iVar14 + plVar4[1];
        lVar8 = 0;
        while( true ) {
          lVar15 = plVar4[2];
          *(void*)(lVar5 + lVar8 * 4) = *(void*)(lVar6 + lVar12);
          *(void*)(lVar5 + 1 + lVar8 * 4) = *(void*)(lVar6 + lVar13);
          uVar1 = *(void*)(lVar6 + lVar10);
          lVar3 = 4;
          if ((int)lVar15 != 0x20) {
            *(void*)(lVar5 + 3 + lVar8 * 4) = 0xff;
            lVar3 = 3;
          }
          *(void*)(lVar5 + 2 + lVar8 * 4) = uVar1;
          if (iVar16 + -1 == (int)lVar8) break;
          lVar6 = lVar6 + lVar3;
          plVar4 = *(int64_t **)(this_ptr + 0x50);
          lVar8 = lVar8 + 1;
        }
        uVar11 = uVar11 + 1;
        plVar4 = *(int64_t **)(this_ptr + 0x50);
        iVar14 = iVar14 + iVar16 * 4;
      } while (uVar11 != uVar9);
    }
  }
  if (*plVar4 != 0) {
    _CGImageRelease();
    **(void**)(this_ptr + 0x50) = 0;
  }
  return;
}

