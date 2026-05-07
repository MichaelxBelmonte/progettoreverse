// Function: FUN_01f08cf0
// Address: 01f08cf0
// Size: 1491 bytes
// Class: GNList
// === GNList properties ===
//   GNInt           _archiveVersion
//   bool            _awakesObjectsAfterDecoding
//   bool            _isCancelled
//   GNInt           _currentObjectGraphIdx
//   GNInt           _predictedDecodedValuesIndex


void FUN_01f08cf0(void)

{
  int64_t lVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  int64_t *plVar5;
  int64_t lVar6;
  int64_t this_ptr;
  int64_t *plVar7;
  int64_t *plVar8;
  byte bVar9;
  bool bVar10;
  int64_t local_60;
  int64_t *local_40;
  char local_38;
  
  lVar1 = *(int64_t *)(this_ptr + 0x48);
  if (lVar1 == 0) {
    local_60 = 0;
  }
  else {
    FUN_00d50b00();
    local_60 = lVar1;
  }
  FUN_01ccad60();
  if (local_40 == (int64_t *)0x0) {
    bVar3 = true;
    bVar4 = true;
    plVar5 = (int64_t *)0x0;
    lVar6 = g_02800140;
  }
  else {
    if (local_38 == '\0') {
      FUN_00d50b00();
    }
    bVar3 = false;
    bVar4 = false;
    plVar5 = local_40;
    lVar6 = g_02800140;
  }
  g_02800140 = lVar6;
  if (lVar6 != 0) {
    FUN_00d50b00();
    bVar4 = bVar3;
  }
  FUN_01ccaae0();
  plVar8 = local_40;
  if (local_40 == (int64_t *)0x0) {
    bVar9 = 1;
    plVar8 = (int64_t *)0x0;
    bVar3 = false;
  }
  else if (local_38 == '\0') {
    FUN_00d50b00();
    bVar9 = 0;
    bVar3 = true;
  }
  else {
    local_38 = '\0';
    bVar3 = true;
    bVar9 = 0;
  }
  if (lVar6 != 0) {
    FUN_00d50b20();
  }
  lVar6 = g_027e7c20;
  if (((plVar8 != (int64_t *)0x0) && (local_60 != 0)) && (plVar5 != (int64_t *)0x0)) {
    (**(code **)(*plVar5 + 0x80))();
    goto LAB_01f09274;
  }
  if (g_027e7c20 != 0) {
    FUN_00d50b00();
  }
  FUN_01ccaae0();
  if (local_40 == plVar8) {
    if ((bool)(bVar9 & local_40 != (int64_t *)0x0)) {
      if (local_38 != '\0') goto LAB_01f08f32;
      bVar3 = true;
      FUN_00d50b00();
    }
LAB_01f08f94:
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    if (local_38 == '\0') {
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      bVar10 = (bool)(bVar3 & plVar8 != (int64_t *)0x0);
      bVar3 = true;
      plVar8 = local_40;
      if (bVar10) {
        FUN_00d50b20();
      }
      goto LAB_01f08f94;
    }
    bVar10 = plVar8 != (int64_t *)0x0;
    plVar8 = local_40;
    if ((bool)(bVar3 & bVar10)) {
      FUN_00d50b20();
    }
LAB_01f08f32:
    local_38 = '\0';
    bVar3 = true;
  }
  if (lVar6 != 0) {
    FUN_00d50b20();
  }
  lVar6 = g_027e7c20;
  if (g_027e7c20 != 0) {
    FUN_00d50b00();
  }
  FUN_01ccab60();
  if (local_40 == (int64_t *)0x0) {
    bVar10 = true;
    plVar7 = (int64_t *)0x0;
  }
  else {
    plVar7 = local_40;
    if (local_38 == '\0') {
      FUN_00d50b00();
      bVar10 = false;
    }
    else {
      local_38 = '\0';
      bVar10 = false;
    }
  }
  if (lVar6 != 0) {
    FUN_00d50b20();
  }
  if ((local_60 != 0) && (plVar5 != (int64_t *)0x0)) {
    if ((plVar8 == (int64_t *)0x0) || (plVar7 == (int64_t *)0x0)) {
      if ((plVar8 == (int64_t *)0x0) || (plVar7 != (int64_t *)0x0)) goto LAB_01f09258;
      FUN_01d836c0();
      if (local_40 == (int64_t *)0x0) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
        if (local_38 == '\0') {
          FUN_00d50b00();
        }
      }
      (**(code **)(*plVar5 + 0x80))();
    }
    else {
      FUN_01d26620();
      if (local_40 == (int64_t *)0x0) {
        bVar2 = false;
      }
      else if (local_38 == '\0') {
        FUN_00d50b00();
        bVar2 = true;
      }
      else {
        bVar2 = true;
      }
      (**(code **)(*plVar5 + 0x80))();
    }
    if ((bVar2) && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
LAB_01f09258:
  if (!bVar10 && plVar7 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
LAB_01f09274:
  if ((bVar3) && (plVar8 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (!bVar4 && plVar5 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((lVar1 != 0) && (local_60 != 0)) {
    FUN_00d50b20();
  }
  return;
}

