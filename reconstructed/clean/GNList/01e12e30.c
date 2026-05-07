// Function: FUN_01e12e30
// Address: 01e12e30
// Size: 1303 bytes
// Class: GNList
// === GNList properties ===
//   GNInt           _archiveVersion
//   bool            _awakesObjectsAfterDecoding
//   bool            _isCancelled
//   GNInt           _currentObjectGraphIdx
//   GNInt           _predictedDecodedValuesIndex


void FUN_01e12e30(uint64_t param_1,uint64_t param_2)

{
  int64_t lVar1;
  code *pcVar2;
  int64_t *plVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  uint64_t uVar7;
  int64_t *plVar8;
  int iVar9;
  int64_t this_ptr;
  int64_t *plVar10;
  int64_t *local_c0;
  char local_b8;
  uint64_t local_70;
  uint64_t local_50;
  uint64_t local_48;
  int64_t *local_40;
  char local_38;
  
  (**(code **)(**(int64_t **)(this_ptr + 0x138) + 0x388))();
  cVar4 = FUN_00e7b6c0();
  pcVar2 = g_026a96a0;
  iVar9 = (int)(param_2 >> 0x20);
  if (cVar4 == '\0') {
    iVar9 = iVar9 + (int)param_2;
    local_50 = param_2;
    do {
      (**(code **)(**(int64_t **)(this_ptr + 0x138) + 0x398))(&local_48,local_50);
      plVar10 = local_40;
      if ((((local_38 == '\0') && (local_40 != (int64_t *)0x0)) &&
          (FUN_00d50b00(), local_38 != '\0')) && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      plVar8 = (int64_t *)FUN_00e8fc40();
      FUN_00d4ff40();
      *plVar8 = (int64_t)&g_026a9688;
      plVar8[3] = 0;
      *(void*)(plVar8 + 4) = 0;
      plVar8[5] = 0;
      plVar8[6] = 0;
      (*pcVar2)();
      (**(code **)(*plVar10 + 0x378))();
      plVar3 = local_40;
      if (local_38 == '\0') {
        if (local_40 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      (**(code **)(*plVar8 + 0x370))();
      if (plVar3 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      (**(code **)(*plVar10 + 0x390))();
      (**(code **)(*plVar8 + 0x398))();
      (**(code **)(*plVar8 + 0x380))();
      iVar5 = local_48._4_4_ + (int)local_48;
      plVar10 = *(int64_t **)(this_ptr + 0x138);
      if (iVar5 < iVar9) {
        uVar7 = FUN_00e7b4e0();
        lVar1 = *plVar10;
        (**(code **)(lVar1 + 0x390))(lVar1,uVar7);
        local_50 = (uint64_t)(uint)(local_48._4_4_ + (int)local_48);
      }
      else {
        uVar7 = FUN_00e7b4e0();
        lVar1 = *plVar10;
        (**(code **)(lVar1 + 0x390))(lVar1,uVar7);
      }
      FUN_00d50b20();
      FUN_00d50b20();
    } while (iVar5 < iVar9);
  }
  else {
    (**(code **)(**(int64_t **)(this_ptr + 0x138) + 0x398))(&local_48,param_2 & 0xffffffff);
    plVar10 = local_40;
    if (((local_38 == '\0') && (local_40 != (int64_t *)0x0)) &&
       ((FUN_00d50b00(), local_38 != '\0' && (local_40 != (int64_t *)0x0)))) {
      FUN_00d50b20();
    }
    while( true ) {
      (**(code **)(*plVar10 + 0x380))();
      if (iVar9 + (int)param_2 <= local_48._4_4_ + (int)local_48) break;
      (**(code **)(**(int64_t **)(this_ptr + 0x138) + 0x398))(&local_70);
      plVar3 = local_40;
      if ((((local_38 == '\0') && (local_40 != (int64_t *)0x0)) &&
          (FUN_00d50b00(), local_38 != '\0')) && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      (**(code **)(*plVar3 + 0x378))();
      (**(code **)(*plVar10 + 0x378))();
      if (local_40 == local_c0) {
        iVar5 = (**(code **)(*plVar3 + 0x390))();
        iVar6 = (**(code **)(*plVar10 + 0x390))();
        if ((local_b8 != '\0') && (local_c0 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (iVar5 == iVar6) {
          plVar8 = *(int64_t **)(this_ptr + 0x138);
          uVar7 = FUN_00e7b4e0();
          (**(code **)(*plVar8 + 0x390))(*plVar8,uVar7);
        }
      }
      else {
        if ((local_b8 != '\0') && (local_c0 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      if (plVar3 != plVar10) {
        FUN_00d50b00();
        FUN_00d50b20();
        plVar10 = plVar3;
      }
      local_48 = local_70;
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  return;
}

