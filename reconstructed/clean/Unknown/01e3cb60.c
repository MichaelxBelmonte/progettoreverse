// Function: FUN_01e3cb60
// Address: 01e3cb60
// Size: 807 bytes
// Class: Unknown

uint64_t FUN_01e3cb60(uint64_t param_1,uint64_t param_2)

{
  bool bVar1;
  uint uVar2;
  uint64_t uVar3;
  int64_t lVar4;
  int64_t *in_RDX;
  int64_t *plVar5;
  int64_t *arg1;
  int64_t this_ptr;
  int64_t *plVar6;
  int64_t lVar7;
  float fVar8;
  float fVar9;
  uint64_t uVar10;
  float extraout_XMM0_Db;
  float fVar12;
  float fVar13;
  float fVar14;
  int64_t local_60;
  char local_58;
  float fVar11;
  
  fVar8 = (float)((uint64_t)param_2 >> 0x20);
  fVar12 = (float)param_2;
  fVar14 = (float)((uint64_t)param_1 >> 0x20);
  fVar9 = (float)param_1;
  plVar6 = *(int64_t **)(this_ptr + 0x30);
  plVar5 = (int64_t *)0x0;
  if (plVar6 != (int64_t *)0x0) {
    FUN_00d50b00();
    local_60 = *in_RDX;
    local_58 = '\0';
    uVar2 = (**(code **)(*plVar6 + 0x5a0))(fVar9,&local_60);
    plVar5 = (int64_t *)(uint64_t)uVar2;
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if (this_ptr != 0) {
      FUN_00d50b20();
    }
    if ((char)uVar2 == '\0') {
      uVar3 = 0;
      goto LAB_01e3ceac;
    }
  }
  uVar10 = (**(code **)(*(int64_t *)*arg1 + 0x4d8))();
  fVar11 = (float)((uint64_t)uVar10 >> 0x20);
  fVar13 = 0.0;
  if (((fVar14 == 0.0) && (!NAN(fVar14))) ||
     (lVar4 = *(int64_t *)(this_ptr + 0x38), *(int *)(lVar4 + 0xc) < 1)) {
    bVar1 = false;
    plVar6 = (int64_t *)0x0;
  }
  else {
    fVar8 = fVar11 + fVar8 + g_02390d00;
    lVar7 = 0;
    plVar6 = (int64_t *)0x0;
    bVar1 = false;
    fVar13 = fVar11;
    fVar14 = fVar11;
    do {
      plVar5 = *(int64_t **)(*(int64_t *)(lVar4 + 0x10) + lVar7 * 8);
      if (plVar6 == plVar5) {
        if ((!bVar1) && (plVar6 != (int64_t *)0x0)) {
          bVar1 = true;
          FUN_00d50b00();
        }
      }
      else {
        if (plVar5 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        if ((bVar1) && (plVar6 != (int64_t *)0x0)) {
          FUN_00d50b20();
          bVar1 = true;
          plVar6 = plVar5;
        }
        else {
          bVar1 = true;
          plVar6 = plVar5;
        }
      }
      if ((int64_t *)*arg1 != plVar6) {
        (**(code **)(*plVar6 + 0x4d8))();
        fVar14 = fVar14 + extraout_XMM0_Db;
        fVar13 = fVar14 + g_02390d00;
        if (((fVar11 < fVar13) && (extraout_XMM0_Db < fVar8)) &&
           (uVar3 = (**(code **)(*plVar6 + 0x560))(), (uVar3 & 0x10) == 0)) goto LAB_01e3ce8b;
      }
      lVar7 = lVar7 + 1;
      lVar4 = *(int64_t *)(this_ptr + 0x38);
    } while (lVar7 < *(int *)(lVar4 + 0xc));
  }
  uVar3 = CONCAT71((int7)((uint64_t)plVar5 >> 8),1);
  if (((fVar9 != g_0239424c) || (NAN(fVar9) || NAN(g_0239424c))) &&
     (lVar4 = *(int64_t *)(this_ptr + 0x38), 0 < *(int *)(lVar4 + 0xc))) {
    fVar9 = fVar12 + (float)uVar10 + g_02390d00;
    lVar7 = 0;
    do {
      plVar5 = *(int64_t **)(*(int64_t *)(lVar4 + 0x10) + lVar7 * 8);
      if (plVar6 == plVar5) {
        if ((!bVar1) && (plVar6 != (int64_t *)0x0)) {
          bVar1 = true;
          FUN_00d50b00();
        }
      }
      else {
        if (plVar5 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        if ((bVar1) && (plVar6 != (int64_t *)0x0)) {
          FUN_00d50b20();
          bVar1 = true;
          plVar6 = plVar5;
        }
        else {
          bVar1 = true;
          plVar6 = plVar5;
        }
      }
      if ((int64_t *)*arg1 != plVar6) {
        fVar14 = (float)(**(code **)(*plVar6 + 0x4d8))();
        fVar13 = fVar13 + fVar14 + g_02390d00;
        if ((((float)uVar10 < fVar13) && (fVar14 < fVar9)) &&
           (uVar3 = (**(code **)(*plVar6 + 0x560))(), (uVar3 & 2) == 0)) goto LAB_01e3ce8b;
      }
      lVar7 = lVar7 + 1;
      lVar4 = *(int64_t *)(this_ptr + 0x38);
    } while (lVar7 < *(int *)(lVar4 + 0xc));
    uVar3 = CONCAT71((int7)((uint64_t)plVar5 >> 8),1);
  }
  goto joined_r0x01e3ce90;
LAB_01e3ce8b:
  uVar3 = 0;
joined_r0x01e3ce90:
  if ((bVar1) && (plVar6 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
LAB_01e3ceac:
  return uVar3 & 0xffffffff;
}

