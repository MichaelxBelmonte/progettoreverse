// Function: FUN_013e8800
// Address: 013e8800
// Size: 1232 bytes
// Class: Unknown

void FUN_013e8800(int param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  double dVar1;
  int64_t lVar2;
  bool bVar3;
  void* pVar4;
  void *pvVar5;
  int64_t lVar6;
  int64_t lVar7;
  uint64_t uVar8;
  void* pVar9;
  void* pVar10;
  uint64_t uVar11;
  uint uVar12;
  int64_t lVar13;
  int64_t *this_ptr;
  int64_t lVar14;
  double dVar15;
  uint64_t extraout_XMM0_Qa;
  uint64_t extraout_XMM0_Qa_00;
  double dVar16;
  uint64_t local_50;
  uint64_t local_48;
  char local_40;
  
  lVar7 = this_ptr[0x1d];
  uVar12 = *(uint *)(lVar7 + 0xc);
  local_48 = (uint64_t)uVar12;
  if (0 < (int)uVar12) {
    lVar13 = 0;
    bVar3 = false;
    lVar6 = 0;
    pVar10 = 0;
    do {
      uVar12 = uVar12 - 1;
      uVar11 = (uint64_t)uVar12;
      lVar7 = *(int64_t *)(*(int64_t *)(lVar7 + 0x10) + uVar11 * 8);
      pVar9 = uVar12;
      if (lVar13 == lVar7) {
        if ((!bVar3) && (lVar13 != 0)) {
          FUN_00d50b00();
          pVar9 = (void*)uVar11;
          lVar7 = lVar13;
          goto LAB_013e88c0;
        }
        lVar2 = *(int64_t *)(lVar13 + 0x10);
      }
      else {
        if (lVar7 != 0) {
          FUN_00d50b00();
          pVar9 = (void*)uVar11;
        }
        if ((bVar3) && (lVar13 != 0)) {
          FUN_00d50b20();
        }
LAB_013e88c0:
        bVar3 = true;
        lVar2 = *(int64_t *)(lVar7 + 0x10);
        lVar13 = lVar7;
      }
      if (lVar2 != 0) {
        FUN_00d50b00();
      }
      local_40 = (char)pVar10;
      if (lVar2 == lVar6) {
        pVar4 = pVar10;
        if (lVar2 != 0) {
          pVar4 = 1;
        }
        lVar14 = lVar6;
        pVar9 = pVar10;
        if ((local_40 != '\0') && (pVar4 = pVar10, lVar2 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        pVar4 = 1;
        lVar14 = lVar2;
        if ((local_40 != '\0') && (lVar6 != 0)) {
          FUN_00d50b20();
        }
      }
      pvVar5 = _pthread_getspecific(pVar9);
      lVar7 = lVar14;
      if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
        lVar7 = *(int64_t *)(lVar14 + 0x20 + (uint64_t)(*(uint *)(lVar6 + 0x154) & 1) * 8);
      }
      dVar1 = *(double *)(lVar7 + 0xc0);
      pvVar5 = _pthread_getspecific(pVar9);
      lVar7 = lVar14;
      if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
        lVar7 = *(int64_t *)(lVar14 + 0x20 + (uint64_t)(*(uint *)(lVar6 + 0x154) & 1) * 8);
      }
      dVar16 = *(double *)(lVar7 + 0xb8);
      dVar15 = (double)FUN_00b335d0();
      lVar7 = FUN_012dd9d0();
      lVar6 = (int64_t)(int)((dVar1 - dVar16) * dVar15);
      if (lVar6 < lVar7 - *(int64_t *)(lVar13 + 0x18)) {
        uVar8 = FUN_012dd9d0();
        FUN_013e7d10(extraout_XMM0_Qa,uVar8);
      }
      else {
        lVar7 = FUN_012dd9d0();
        if (lVar6 < (lVar7 + param_1) - *(int64_t *)(lVar13 + 0x18)) {
          FUN_013e7d10(extraout_XMM0_Qa_00,*(int64_t *)(lVar13 + 0x18) + lVar6,param_3,param_4,0);
        }
      }
      if ((int64_t)local_48 < 2) goto LAB_013e8ab3;
      local_48 = local_48 - 1;
      lVar7 = this_ptr[0x1d];
      lVar6 = lVar14;
      pVar10 = pVar4;
    } while( true );
  }
  bVar3 = false;
  lVar13 = 0;
  pVar4 = 0;
  lVar14 = 0;
  lVar7 = this_ptr[0x1e];
  uVar12 = *(uint *)(lVar7 + 0xc);
joined_r0x013e8ac8:
  if (0 < (int)uVar12) {
    local_50 = (uint64_t)uVar12;
    lVar6 = lVar14;
    do {
      uVar12 = uVar12 - 1;
      uVar11 = (uint64_t)uVar12;
      lVar7 = *(int64_t *)(*(int64_t *)(lVar7 + 0x10) + uVar11 * 8);
      pVar10 = uVar12;
      if (lVar13 == lVar7) {
        if ((!bVar3) && (lVar13 != 0)) {
          FUN_00d50b00();
          pVar10 = (void*)uVar11;
          lVar7 = lVar13;
          goto LAB_013e8b50;
        }
        lVar2 = *(int64_t *)(lVar13 + 0x10);
      }
      else {
        if (lVar7 != 0) {
          FUN_00d50b00();
          pVar10 = (void*)uVar11;
        }
        if ((bVar3) && (lVar13 != 0)) {
          FUN_00d50b20();
        }
LAB_013e8b50:
        bVar3 = true;
        lVar2 = *(int64_t *)(lVar7 + 0x10);
        lVar13 = lVar7;
      }
      if (lVar2 != 0) {
        FUN_00d50b00();
      }
      local_40 = (char)pVar4;
      if (lVar2 == lVar6) {
        pVar9 = pVar4;
        if (lVar2 != 0) {
          pVar9 = 1;
        }
        lVar14 = lVar6;
        pVar10 = pVar4;
        if ((local_40 != '\0') && (pVar9 = pVar4, lVar2 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        pVar9 = 1;
        lVar14 = lVar2;
        if ((local_40 != '\0') && (lVar6 != 0)) {
          FUN_00d50b20();
        }
      }
      pVar4 = pVar9;
      pvVar5 = _pthread_getspecific(pVar10);
      lVar7 = lVar14;
      if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
        lVar7 = *(int64_t *)(lVar14 + 0x20 + (uint64_t)(*(uint *)(lVar6 + 0x154) & 1) * 8);
      }
      dVar1 = *(double *)(lVar7 + 0xf0);
      dVar16 = (double)FUN_00b335d0();
      lVar7 = FUN_012dd9d0();
      if ((int64_t)(int)(dVar1 * dVar16) < lVar7 - *(int64_t *)(lVar13 + 0x18)) {
        (**(code **)(*this_ptr + 0x6a8))();
        FUN_00d23620();
      }
      if ((int64_t)local_50 < 2) goto LAB_013e8cc9;
      local_50 = local_50 - 1;
      lVar7 = this_ptr[0x1e];
      lVar6 = lVar14;
    } while( true );
  }
  if (bVar3) {
LAB_013e8cfe:
    if (lVar13 != 0) {
      FUN_00d50b20();
    }
  }
LAB_013e8d0b:
  local_40 = (char)pVar4;
  if ((local_40 != '\0') && (lVar14 != 0)) {
    FUN_00d50b20();
  }
  return;
LAB_013e8ab3:
  lVar7 = this_ptr[0x1e];
  uVar12 = *(uint *)(lVar7 + 0xc);
  goto joined_r0x013e8ac8;
LAB_013e8cc9:
  if (!bVar3) goto LAB_013e8d0b;
  goto LAB_013e8cfe;
}

