// Function: FUN_01db5400
// Address: 01db5400
// Size: 1084 bytes
// Class: GNScrollView
// === GNScrollView properties ===
//   GNBorderStyle   _borderStyle
//   GNRulerHeaderLocation _rulerHeaderLocation


void* FUN_01db5400(void)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  code *pcVar5;
  int64_t *plVar6;
  void*puVar7;
  int64_t lVar8;
  void*puVar9;
  int64_t *arg1;
  void*this_ptr;
  int64_t lVar10;
  int64_t lVar11;
  void*puVar12;
  int64_t local_88;
  char local_80;
  
  plVar6 = (int64_t *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar6 + 0x18))();
  puVar7 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar7 = &g_02572358;
  (*g_02572370)();
  lVar8 = g_027f22c8;
  if (g_027f22c8 != 0) {
    FUN_00d50b00();
  }
  FUN_00ca0840();
  if (lVar8 != 0) {
    FUN_00d50b20();
  }
  pcVar5 = g_02575d98;
  lVar8 = arg1[0x28];
  if (*(int *)(lVar8 + 0xc) < 1) {
    bVar2 = false;
    lVar11 = 0;
    bVar3 = false;
    puVar12 = (void*)0x0;
  }
  else {
    lVar10 = 0;
    puVar12 = (void*)0x0;
    bVar3 = false;
    lVar11 = 0;
    bVar2 = false;
    do {
      lVar8 = *(int64_t *)(*(int64_t *)(lVar8 + 0x10) + lVar10 * 8);
      if (lVar11 == lVar8) {
        if ((!bVar2) && (lVar11 != 0)) {
          bVar2 = true;
          FUN_00d50b00();
        }
      }
      else {
        if (lVar8 != 0) {
          FUN_00d50b00();
        }
        if ((bVar2) && (lVar11 != 0)) {
          FUN_00d50b20();
          bVar2 = true;
          lVar11 = lVar8;
        }
        else {
          bVar2 = true;
          lVar11 = lVar8;
        }
      }
      puVar9 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar9 = &g_02575d80;
      (*pcVar5)();
      if (puVar9 == puVar12) {
        if (bVar3) {
          FUN_00d50b20();
LAB_01db562e:
          cVar1 = *(char *)(lVar11 + 0xd);
        }
        else {
          cVar1 = *(char *)(lVar11 + 0xd);
          bVar3 = true;
        }
      }
      else {
        bVar4 = true;
        if (bVar3) {
          if (puVar12 != (void*)0x0) {
            FUN_00d50b20();
            puVar12 = puVar9;
            bVar3 = bVar4;
            goto LAB_01db562e;
          }
          cVar1 = *(char *)(lVar11 + 0xd);
          puVar12 = puVar9;
          bVar3 = bVar4;
        }
        else {
          cVar1 = *(char *)(lVar11 + 0xd);
          puVar12 = puVar9;
          bVar3 = bVar4;
        }
      }
      if (cVar1 == '\0') {
        (**(code **)(**(int64_t **)(lVar11 + 0x20) + 0x4d8))();
      }
      FUN_00d46080();
      FUN_00d21140();
      lVar10 = lVar10 + 1;
      lVar8 = arg1[0x28];
    } while (lVar10 < *(int *)(lVar8 + 0xc));
  }
  lVar8 = g_027f22d0;
  if (g_027f22d0 != 0) {
    FUN_00d50b00();
  }
  (**(code **)(*arg1 + 0x88))();
  lVar10 = g_027f22d0;
  if ((local_80 == '\0') && (local_88 != 0)) {
    FUN_00d50b00();
    lVar10 = g_027f22d0;
  }
  g_027f22d0 = lVar10;
  if (lVar10 != 0) {
    FUN_00d50b00();
  }
  FUN_00ca0840();
  if (lVar10 != 0) {
    FUN_00d50b20();
  }
  if (local_88 != 0) {
    FUN_00d50b20();
  }
  if (lVar8 != 0) {
    FUN_00d50b20();
  }
  *this_ptr = plVar6;
  *(void*)(this_ptr + 1) = 1;
  if (puVar7 != (void*)0x0) {
    FUN_00d50b20();
  }
  if ((bVar2) && (lVar11 != 0)) {
    FUN_00d50b20();
  }
  if ((bVar3) && (puVar12 != (void*)0x0)) {
    FUN_00d50b20();
  }
  return this_ptr;
}

