// Function: FUN_01c32a00
// Address: 01c32a00
// Size: 645 bytes
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


void FUN_01c32a00(uint64_t param_1,uint32_t param_2)

{
  int64_t lVar1;
  char cVar2;
  uint8_t uVar3;
  byte bVar4;
  int iVar5;
  int64_t lVar6;
  int64_t *arg1;
  int64_t *this_ptr;
  uint32_t uVar7;
  uint32_t uVar8;
  uint32_t uVar9;
  int64_t local_40;
  char local_38;
  
  cVar2 = (**(code **)(*this_ptr + 0xb40))();
  if (((cVar2 != '\0') && (iVar5 = FUN_01d3a5a0(), iVar5 == 1)) &&
     (iVar5 = FUN_01d3b630(), iVar5 == 1)) {
    FUN_01d3abf0();
    uVar7 = FUN_01e466c0();
    uVar8 = (**(code **)(*this_ptr + 0xb58))();
    cVar2 = FUN_00d05410(uVar7,uVar8,param_2);
    if (cVar2 != '\0') {
      *(void*)(this_ptr + 0x3d) = 1;
LAB_01c32a90:
      (**(code **)(*this_ptr + 0x620))();
      (**(code **)(*this_ptr + 0x658))();
      lVar6 = *arg1;
      if (lVar6 == local_40) {
        if (((char)arg1[1] == '\0') && (local_40 != 0)) {
          if (local_38 == '\0') {
            FUN_00d50b00();
            goto LAB_01c32b3c;
          }
LAB_01c32af2:
          *(void*)(arg1 + 1) = 1;
          local_38 = '\0';
        }
        lVar6 = *arg1;
        uVar7 = uVar8;
      }
      else {
        lVar1 = arg1[1];
        if (local_38 != '\0') {
          *arg1 = local_40;
          if (((char)lVar1 != '\0') && (lVar6 != 0)) {
            FUN_00d50b20();
          }
          goto LAB_01c32af2;
        }
        if (local_40 != 0) {
          FUN_00d50b00();
        }
        *arg1 = local_40;
        if (((char)lVar1 != '\0') && (lVar6 != 0)) {
          FUN_00d50b20();
        }
LAB_01c32b3c:
        *(void*)(arg1 + 1) = 1;
        lVar6 = *arg1;
        uVar7 = uVar8;
      }
      if (lVar6 != 0) {
        iVar5 = FUN_01d3a5a0();
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if (iVar5 == 6) goto LAB_01c32bbf;
        FUN_01d3abf0();
        uVar9 = FUN_01e466c0();
        uVar8 = (**(code **)(*this_ptr + 0xb58))();
        uVar3 = FUN_00d05410(uVar9,uVar8,uVar7);
        *(void*)(this_ptr + 0x3d) = uVar3;
        goto LAB_01c32a90;
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
LAB_01c32bbf:
      *(void*)(this_ptr + 0x3d) = 0;
      (**(code **)(*this_ptr + 0x620))();
      if ((*arg1 != 0) && (iVar5 = FUN_01d3a5a0(), iVar5 == 6)) {
        FUN_01d3abf0();
        uVar8 = FUN_01e466c0();
        uVar9 = (**(code **)(*this_ptr + 0xb58))();
        cVar2 = FUN_00d05410(uVar8,uVar9,uVar7);
        if (cVar2 != '\0') {
          cVar2 = (**(code **)(*this_ptr + 0xb18))();
          lVar6 = 0x162;
          if (cVar2 == '\0') {
            bVar4 = (**(code **)(*this_ptr + 0xaf0))();
            lVar6 = (uint64_t)bVar4 + 0x161;
          }
          (**(code **)(*this_ptr + lVar6 * 8))();
        }
      }
    }
  }
  FUN_01d122b0();
  return;
}

