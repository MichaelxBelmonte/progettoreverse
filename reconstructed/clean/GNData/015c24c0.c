// Function: FUN_015c24c0
// Address: 015c24c0
// Size: 547 bytes
// Class: GNData
// === GNData properties ===
//   double          _firstSpectrumTime
//   double          _spectraTimeDistance


void FUN_015c24c0(double param_1,int param_2)

{
  int iVar1;
  int64_t lVar2;
  int iVar3;
  int iVar4;
  uint64_t uVar5;
  int iVar6;
  int *arg1;
  int64_t lVar7;
  uint64_t uVar8;
  int *this_ptr;
  int iVar9;
  int iVar10;
  uint64_t uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  double dVar15;
  int64_t local_48;
  
  lVar2 = FUN_00e83010();
  iVar13 = -4;
  iVar12 = -3;
  iVar1 = -2;
  local_48 = 0;
  iVar3 = -1;
  uVar11 = 0;
  dVar15 = param_1;
  iVar9 = 1;
  iVar10 = 1;
  do {
    iVar14 = (int)dVar15;
    *(int *)(lVar2 + uVar11 * 4) = iVar14;
    if (uVar11 == 0) {
      iVar4 = 1;
    }
    else {
      uVar5 = (uint64_t)((uint)uVar11 & 3);
      if (uVar11 - 1 < 3) {
        iVar4 = 1;
        uVar8 = uVar11;
      }
      else {
        iVar4 = 1;
        lVar7 = 0;
        do {
          iVar6 = (int)lVar7;
          iVar4 = *(int *)(lVar2 + (uint64_t)(uint)(iVar3 + iVar6) * 4) * iVar14 + iVar4;
          iVar14 = *(int *)(lVar2 + (uint64_t)(uint)(iVar1 + iVar6) * 4) * iVar4 + iVar14;
          iVar4 = *(int *)(lVar2 + (uint64_t)(uint)(iVar12 + iVar6) * 4) * iVar14 + iVar4;
          iVar14 = *(int *)(lVar2 + (uint64_t)(uint)(iVar6 + iVar13) * 4) * iVar4 + iVar14;
          lVar7 = lVar7 + -4;
        } while (-lVar7 != (uVar11 & 0xfffffffffffffffc));
        uVar8 = lVar7 - local_48;
      }
      if (uVar5 != 0) {
        uVar8 = uVar8 + 0xffffffff;
        iVar6 = iVar4;
        do {
          iVar4 = iVar14;
          iVar14 = *(int *)(lVar2 + (uVar8 & 0xffffffff) * 4) * iVar4 + iVar6;
          uVar8 = uVar8 - 1;
          uVar5 = uVar5 - 1;
          iVar6 = iVar4;
        } while (uVar5 != 0);
      }
    }
    if (((param_2 < iVar4) || (param_2 < iVar14)) ||
       (iVar9 = iVar14, iVar10 = iVar4,
       (double)((uint64_t)((double)iVar14 / (double)iVar4 - param_1) & g_023908f0) <
       g_023d7d68)) break;
    dVar15 = (double)_modf();
    dVar15 = g_0238fee8 / dVar15;
    uVar11 = uVar11 + 1;
    local_48 = local_48 + -1;
    iVar13 = iVar13 + 1;
    iVar12 = iVar12 + 1;
    iVar1 = iVar1 + 1;
    iVar3 = iVar3 + 1;
  } while (uVar11 != 0x40);
  *this_ptr = iVar9;
  *arg1 = iVar10;
  FUN_00e83070();
  return;
}

