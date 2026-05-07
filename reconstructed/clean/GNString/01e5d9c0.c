// Function: FUN_01e5d9c0
// Address: 01e5d9c0
// Size: 1055 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_01e5d9c0(uint64_t param_1,uint64_t param_2)

{
  void*puVar1;
  char cVar2;
  char cVar3;
  int64_t lVar4;
  int64_t *this_ptr;
  uint32_t extraout_XMM0_Da;
  uint32_t uVar5;
  uint32_t uVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  
  puVar1 = PTR__objc_msgSend_024a9998;
  fVar11 = (float)((uint64_t)param_2 >> 0x20);
  fVar9 = (float)param_2;
  cVar2 = (*PTR__objc_msgSend_024a9998)();
  _objc_alloc();
  (*puVar1)();
  lVar4 = (*puVar1)();
  cVar3 = (*puVar1)();
  if (lVar4 == 0) {
    (*PTR__objc_msgSend_024a9998)(extraout_XMM0_Da,0);
  }
  else if (cVar3 != '\0') {
    (*PTR__objc_msgSend_024a9998)();
  }
  (*PTR__objc_release_024a99a0)();
  FUN_01e58640();
  lVar4 = local_60;
  FUN_00d50b00();
  cVar3 = FUN_00d23d70();
  FUN_00d50b20();
  if ((local_58 != '\0') && (lVar4 != 0)) {
    FUN_00d50b20();
  }
  if (cVar3 == '\0') {
    FUN_01e58640();
    FUN_00d50b00();
    FUN_00d21140();
    FUN_00d50b20();
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
  }
  if (cVar2 == '\0') {
    if (this_ptr[3] == 0) {
      FUN_01f50d20();
    }
    else {
      FUN_01d907a0();
    }
    if (this_ptr != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    FUN_01e5b880();
    FUN_01f514b0();
    if (this_ptr != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    uVar5 = FUN_01e5b880();
    fVar10 = fVar9;
    uVar6 = FUN_01f51370();
    uVar7 = FUN_00d05360(uVar5,fVar9,uVar6,fVar10);
    fVar10 = fVar9;
    fVar12 = fVar11;
    uVar8 = FUN_01e5b880();
    if ((((((float)uVar7 != (float)uVar8) || (NAN((float)uVar7) || NAN((float)uVar8))) ||
         ((float)((uint64_t)uVar7 >> 0x20) != (float)((uint64_t)uVar8 >> 0x20))) ||
        ((fVar9 != fVar10 || (NAN(fVar9) || NAN(fVar10))))) || (fVar11 != fVar12)) {
      FUN_01f51370();
      FUN_01e5c410();
    }
    if (this_ptr != (int64_t *)0x0) {
      FUN_00d50b20();
      FUN_00d50b20();
    }
  }
  if ((int64_t *)this_ptr[4] != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)this_ptr[4] + 0x498))();
  }
  FUN_00d403d0();
  lVar4 = g_027f0e38;
  if (g_027f0e38 != 0) {
    FUN_00d50b00();
  }
  FUN_00d50b00();
  local_70 = 0;
  local_68 = '\0';
  FUN_00d40470(&local_70,&stack0xffffffffffffffb0,1,3);
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if (this_ptr != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  FUN_01f27fe0();
  (**(code **)(*this_ptr + 0x4b8))();
  return;
}

