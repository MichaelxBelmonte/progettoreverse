// Function: FUN_01c31df0
// Address: 01c31df0
// Size: 927 bytes
// Class: GNCoord
// === GNCoord properties ===
//   GNInt           _loopSetOrderIndex
//   float           _tempo
//   GNCoord         _minWidthToDisplayLoopId
//   float           _matchGrade
//   GNCoord         _minIconWidth
//                   _drawsHorizontalGrid
//                   _drawsVerticalGrid
//                   _intercellSpacing
//                   _valueLists
//                   _rowCount
//                   _needsReload
//                   _userObject
//                   _autoresizesAllColumnsToFit
//                   _selectedRows
//                   _explititlySelectedRows
//                   _lastSelectedRow


void FUN_01c31df0(void)

{
  int64_t *plVar1;
  uint uVar2;
  uint uVar3;
  int64_t lVar4;
  int64_t *plVar5;
  uint64_t uVar6;
  int64_t this_ptr;
  float fVar7;
  double dVar8;
  float fVar9;
  float fVar10;
  int64_t local_70;
  char local_68;
  int64_t *local_40;
  char local_38;
  
  if (*(float *)(this_ptr + 0x74) <= 0.0) {
    *(void*)(this_ptr + 0x74) = 0x3f800000;
  }
  if (*(float *)(this_ptr + 0x70) <= 0.0) {
    *(void*)(this_ptr + 0x70) = 0x3f800000;
  }
  FUN_01d4e800(*(void*)(this_ptr + 0x70));
  plVar1 = *(int64_t **)(this_ptr + 0x68);
  plVar5 = plVar1;
  if (plVar1 == local_40) goto LAB_01c31e9c;
  plVar5 = local_40;
  if (local_38 == '\0') {
    if (local_40 == (int64_t *)0x0) {
      plVar5 = (int64_t *)0x0;
      goto LAB_01c31e5a;
    }
    FUN_00d50b00();
    plVar1 = *(int64_t **)(this_ptr + 0x68);
    *(int64_t **)(this_ptr + 0x68) = local_40;
  }
  else {
    local_38 = '\0';
LAB_01c31e5a:
    *(int64_t **)(this_ptr + 0x68) = plVar5;
  }
  if (plVar1 != (int64_t *)0x0) {
    FUN_00d50b20();
    plVar5 = local_40;
  }
LAB_01c31e9c:
  if ((local_38 != '\0') && (plVar5 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  lVar4 = *(int64_t *)(this_ptr + 0x60);
  if (lVar4 != 0) {
    FUN_00d50b00();
  }
  FUN_00b810f0();
  if (local_38 == '\0') {
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  if (local_40 != (int64_t *)0x0) {
    uVar2 = FUN_00e7d780(*(void*)(this_ptr + 0x70));
    lVar4 = FUN_00e83020();
    dVar8 = (double)FUN_00b7a6e0();
    uVar3 = FUN_00e7d850(dVar8 * g_0241c3f0);
    if ((int)uVar3 < (int)uVar2) {
      uVar2 = uVar3;
    }
    FUN_00b86d20(g_0241c3f0,0,uVar2);
    FUN_01d52740();
    FUN_01d480c0();
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_01d52740();
    FUN_01d48b40(g_02390124);
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_01d52740();
    FUN_01cfc6a0(g_0239011c);
    if (local_68 == '\0') {
      if (local_70 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_68 = '\0';
    }
    FUN_01d488d0();
    if (local_70 != 0) {
      FUN_00d50b20();
    }
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (0 < (int)uVar2) {
      fVar9 = *(float *)(this_ptr + 0x74) * g_0239011c;
      fVar7 = g_0239011c * fVar9;
      uVar6 = 0;
      do {
        FUN_01d52740();
        fVar10 = *(float *)(lVar4 + uVar6 * 4) * fVar7;
        (**(code **)(*local_40 + 0x3e0))
                  ((float)(int)uVar6,fVar9 + fVar10,(float)(int)uVar6,fVar9 - fVar10);
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        uVar6 = uVar6 + 1;
      } while (uVar2 != uVar6);
    }
    FUN_01d52740();
    FUN_01d481c0();
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00e83070();
    FUN_00d50b20();
  }
  return;
}

