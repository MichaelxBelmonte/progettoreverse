// Function: FUN_01d45080
// Address: 01d45080
// Size: 604 bytes
// Class: Unknown

void FUN_01d45080(void)

{
  void*puVar1;
  double dVar2;
  void*puVar3;
  byte bVar4;
  void*puVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  int64_t lVar8;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t local_40;
  char local_38;
  
  lVar8 = arg1[8];
  if (lVar8 == 0) {
    puVar5 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar5 = &g_026a7ac8;
    puVar5[2] = 0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = 0;
    (*g_026a7ae0)();
    puVar1 = (void*)arg1[8];
    if (puVar1 == puVar5) {
      FUN_00d50b20();
    }
    else {
      arg1[8] = (int64_t)puVar5;
      if (puVar1 != (void*)0x0) {
        FUN_00d50b20();
      }
    }
    FUN_01d448b0();
    if ((local_38 == '\0') && (local_40 != 0)) {
      FUN_00d50b00();
    }
    FUN_01e9d9f0();
    if (local_40 != 0) {
      FUN_00d50b20();
    }
    _objc_alloc();
    puVar3 = PTR__objc_msgSend_024a9998;
    (*PTR__objc_msgSend_024a9998)();
    dVar2 = (double)(*puVar3)();
    (*PTR__objc_release_024a99a0)();
    FUN_01e9da50((float)dVar2);
    _objc_alloc();
    (*puVar3)();
    (*puVar3)();
    uVar6 = (*puVar3)((void*)arg1[2],*(void*)arg1[2]);
    bVar4 = (byte)uVar6 << 4 | (byte)uVar6 >> 4;
    uVar7 = CONCAT71((int7)((uint64_t)uVar6 >> 8),bVar4) & 0xffffffffffffffcc;
    uVar7 = CONCAT71((int7)(uVar7 >> 8),(byte)uVar7 >> 2 | (bVar4 & 0x33) << 2) & 0xffffffff;
    (*PTR__objc_release_024a99a0)
              (arg1[2],CONCAT71((int7)(uVar7 >> 8),(byte)uVar7 >> 1));
    FUN_01e9dcc0();
    (**(code **)(*arg1 + 0x148))();
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    FUN_01e9dce0();
    if (local_40 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    lVar8 = arg1[8];
  }
  *(void*)(this_ptr + 1) = 0;
  if (lVar8 != 0) {
    FUN_00d50b00();
  }
  *this_ptr = lVar8;
  *(void*)(this_ptr + 1) = 1;
  return;
}

