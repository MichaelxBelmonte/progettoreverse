// Function: FUN_01259a60
// Address: 01259a60
// Size: 549 bytes
// Class: GNString
// String references:
//   "_sourceTimeForElementTimeFunction"
//   "_warpTimeForElementTimeFunction"
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_01259a60(void)

{
  int64_t *plVar1;
  char cVar2;
  int64_t lVar3;
  uint64_t uVar4;
  void*arg1;
  int64_t *this_ptr;
  int64_t local_38;
  char local_30;
  
  lVar3 = g_027bebd8;
  plVar1 = (int64_t *)*arg1;
  if (g_027bebd8 != 0) {
    FUN_00d50b00();
  }
  cVar2 = (**(code **)(*plVar1 + 0x590))();
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  lVar3 = g_027bebd8;
  if (cVar2 != '\0') {
    plVar1 = (int64_t *)*arg1;
    if (g_027bebd8 != 0) {
      FUN_00d50b00();
    }
    (**(code **)(*plVar1 + 0x578))();
    if ((local_30 == '\0') && (local_38 != 0)) {
      FUN_00d50b00();
    }
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    FUN_0006e1c0();
    lVar3 = FUN_00e85ef0();
    if (lVar3 == 0) {
      lVar3 = FUN_00e858c0();
      if (lVar3 == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(void*)(lVar3 + 0x28);
      }
    }
    else {
      uVar4 = *(void*)(lVar3 + 0x30);
    }
    (**(code **)(*this_ptr + 0x200))(0,uVar4,0);
    this_ptr[0x29] = -0x4010000000000000;
    FUN_0006e1c0();
    lVar3 = FUN_00e85ef0();
    if (lVar3 == 0) {
      lVar3 = FUN_00e858c0();
      if (lVar3 == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(void*)(lVar3 + 0x28);
      }
    }
    else {
      uVar4 = *(void*)(lVar3 + 0x30);
    }
    (**(code **)(*this_ptr + 0x200))(0,uVar4,0);
    if (local_38 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_00d61ea0();
  return;
}

