// Function: FUN_01e15b80
// Address: 01e15b80
// Size: 668 bytes
// Class: GNList
// === GNList properties ===
//   GNInt           _archiveVersion
//   bool            _awakesObjectsAfterDecoding
//   bool            _isCancelled
//   GNInt           _currentObjectGraphIdx
//   GNInt           _predictedDecodedValuesIndex


void FUN_01e15b80(uint64_t param_1,uint64_t param_2)

{
  int64_t *plVar1;
  uint uVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  uint64_t uVar6;
  uint uVar7;
  uint64_t uVar8;
  uint64_t arg1;
  int64_t *this_ptr;
  uint64_t uVar9;
  uint64_t extraout_XMM0_Qa;
  uint64_t extraout_XMM0_Qb;
  uint8_t auVar10 [16];
  uint8_t auVar11 [16];
  float fVar12;
  float fVar13;
  float in_XMM1_Dc;
  float in_XMM1_Dd;
  int64_t *local_78;
  char local_70;
  int64_t local_58;
  char local_50;
  int64_t *local_48;
  
  fVar13 = (float)((uint64_t)param_2 >> 0x20);
  fVar12 = (float)param_2;
  *(void*)(this_ptr + 0x31) = 1;
  uVar6 = (**(code **)(*(int64_t *)this_ptr[0x27] + 0x388))();
  uVar8 = arg1;
  if ((int)arg1 < (int)uVar6) {
    uVar8 = uVar6;
  }
  uVar7 = (int)(uVar6 >> 0x20) + (int)uVar6;
  uVar2 = (uint)uVar8;
  if ((int)uVar7 < (int)(uint)uVar8) {
    uVar2 = uVar7;
  }
  uVar8 = (uint64_t)(uVar7 - uVar2);
  if ((int)(uVar2 + (int)(arg1 >> 0x20)) <= (int)uVar7) {
    uVar8 = arg1 >> 0x20;
  }
  cVar4 = FUN_00e7b6c0();
  if (cVar4 == '\0') {
    *(uint64_t *)((int64_t)this_ptr + 0x164) = (uint64_t)uVar2 + (uVar8 << 0x20);
    if (((char)this_ptr[0x35] != '\0') && ((int)uVar8 == 0)) {
      iVar5 = (**(code **)(*(int64_t *)this_ptr[0x27] + 0x3e0))();
      if ((iVar5 == -1) ||
         (((uVar7 = FUN_01eab6a0(), uVar2 != uVar7 || (*(int *)((int64_t)this_ptr + 0x1cc) == -1))
          || (*(int *)((int64_t)this_ptr + 0x1cc) != iVar5 + -1)))) {
        uVar9 = FUN_01eabe50();
      }
      else {
        uVar9 = FUN_01eabe50();
        FUN_01eabd30();
        auVar11._8_8_ = extraout_XMM0_Qb;
        auVar11._0_8_ = uVar9;
        auVar10._0_4_ = fVar12 + (float)uVar9;
        auVar10._4_4_ = fVar13 + (float)((uint64_t)uVar9 >> 0x20);
        auVar10._8_4_ = in_XMM1_Dc + (float)extraout_XMM0_Qb;
        auVar10._12_4_ = in_XMM1_Dd + (float)((uint64_t)extraout_XMM0_Qb >> 0x20);
        auVar11 = blendps(auVar10,auVar11,2);
        uVar9 = auVar11._0_8_;
      }
      (**(code **)(*this_ptr + 0x518))(uVar9);
    }
    plVar1 = (int64_t *)this_ptr[0x29];
    if (plVar1 == (int64_t *)0x0) {
      local_48 = (int64_t *)0x0;
    }
    else {
      FUN_00d50b00();
      local_48 = plVar1;
    }
    FUN_01cb4790();
    (**(code **)(*local_78 + 0x4a8))(1,0x11);
    if (local_58 == 0) {
      bVar3 = true;
    }
    else if (local_50 == '\0') {
      FUN_00d50b00();
      bVar3 = false;
    }
    else {
      bVar3 = false;
    }
    if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    cVar4 = (**(code **)(*local_48 + 0x50))();
    if (cVar4 == '\0') {
      uVar9 = (**(code **)(*(int64_t *)this_ptr[0x27] + 0x388))();
      uVar9 = FUN_01e12e30(extraout_XMM0_Qa,uVar9);
      if ((int)this_ptr[0x2d] != 0) {
        FUN_01e12e30(uVar9,*(void*)((int64_t)this_ptr + 0x164));
      }
    }
    (**(code **)(*this_ptr + 0x620))();
    if (!bVar3 && local_58 != 0) {
      FUN_00d50b20();
    }
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  return;
}

