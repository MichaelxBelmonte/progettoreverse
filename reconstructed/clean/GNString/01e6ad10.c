// Function: FUN_01e6ad10
// Address: 01e6ad10
// Size: 827 bytes
// Class: GNString
// String references:
//   "printerWithName:"
//   "objectAtIndex:"
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void*
FUN_01e6ad10(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  bool bVar1;
  bool bVar2;
  void*puVar3;
  code *pcVar4;
  uint64_t uVar5;
  void*puVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  int64_t lVar9;
  void*puVar10;
  void*this_ptr;
  uint64_t uVar11;
  bool bVar12;
  bool bVar13;
  
  puVar6 = g_028ba0f0;
  if ((g_028ba0f0 == (void*)0x0) || (g_028ba0f9 == '\0')) {
    FUN_00e8cb50();
    if (g_028ba0f0 == (void*)0x0) {
      _objc_alloc();
      uVar5 = (*PTR__objc_msgSend_024a9998)();
      (*PTR__objc_msgSend_024a9998)();
      puVar6 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar6 = &g_02572358;
      pcVar4 = g_02572370;
      (*g_02572370)();
      if (g_028ba0f0 == puVar6) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
        bVar12 = g_028ba0f0 != (void*)0x0;
        g_028ba0f0 = puVar6;
        if (bVar12) {
          FUN_00d50b20();
        }
      }
      if (g_028ba0f8 == '\0') {
        g_028ba0f8 = '\x01';
        FUN_00e8cb90();
      }
      if (!bVar1) {
        FUN_00d50b20();
      }
      puVar3 = PTR__objc_msgSend_024a9998;
      bVar1 = false;
      puVar6 = (void*)0x0;
      for (uVar11 = 0; uVar7 = (*puVar3)(), uVar11 < uVar7; uVar11 = uVar11 + 1) {
        uVar8 = (*puVar3)(param_1,uVar11,param_3,param_4,uVar5);
        lVar9 = (*puVar3)(param_1,uVar8);
        puVar10 = puVar6;
        if (lVar9 != 0) {
          puVar10 = (void*)FUN_00e8fc40();
          FUN_00d4ff40();
          *puVar10 = &g_026a3ec0;
          puVar10[2] = 0;
          FUN_00d500e0();
          if (puVar10 == puVar6) {
            if (bVar1) {
              FUN_00d50b20();
              puVar10 = puVar6;
              bVar12 = bVar1;
            }
            else {
              bVar12 = true;
              puVar10 = puVar6;
            }
          }
          else {
            bVar12 = true;
            if ((bVar1) && (puVar6 != (void*)0x0)) {
              FUN_00d50b20();
            }
          }
          (*PTR__objc_retain_024a99a8)();
          *(int64_t *)(puVar10[2] + 0x10) = lVar9;
          FUN_00d21140();
          bVar1 = bVar12;
        }
        puVar6 = puVar10;
      }
      (*PTR__objc_release_024a99a0)();
      if (g_028ba0f0 == (void*)0x0) {
        puVar10 = (void*)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar10 = &g_02572358;
        (*pcVar4)();
        if (g_028ba0f0 == puVar10) {
          bVar2 = false;
          bVar12 = false;
        }
        else {
          bVar2 = true;
          bVar12 = true;
          bVar13 = g_028ba0f0 != (void*)0x0;
          g_028ba0f0 = puVar10;
          if (bVar13) {
            FUN_00d50b20();
          }
        }
        if (g_028ba0f8 == '\0') {
          g_028ba0f8 = '\x01';
          FUN_00e8cb90();
          bVar12 = bVar2;
        }
        if (!bVar12) {
          FUN_00d50b20();
        }
      }
      if ((bVar1) && (puVar6 != (void*)0x0)) {
        FUN_00d50b20();
      }
      g_028ba0f9 = '\x01';
      FUN_00e8cb70();
    }
    else {
      g_028ba0f9 = '\x01';
      FUN_00e8cb70();
    }
    puVar6 = g_028ba0f0;
    *(void*)(this_ptr + 1) = 0;
    if (puVar6 == (void*)0x0) {
      puVar6 = (void*)0x0;
      goto LAB_01e6b041;
    }
  }
  else {
    *(void*)(this_ptr + 1) = 0;
  }
  FUN_00d50b00();
LAB_01e6b041:
  *this_ptr = puVar6;
  *(void*)(this_ptr + 1) = 1;
  return this_ptr;
}

