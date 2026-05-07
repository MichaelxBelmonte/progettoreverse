// Function: FUN_00958ae0
// Address: 00958ae0
// Size: 636 bytes
// Class: Unknown

void FUN_00958ae0(id *param_1)

{
  int64_t lVar1;
  int64_t *plVar2;
  ulong uVar3;
  locale *this;
  uint64_t uVar4;
  uint64_t arg1;
  int64_t *this_ptr;
  
  lVar1 = *(int64_t *)PTR____stack_chk_guard_024a9898;
  FUN_009540a0();
  plVar2 = (int64_t *)std::locale::use_facet(param_1);
  this = (locale *)*plVar2;
  (**(code **)(this + 0x38))();
  std::locale::~locale(this);
  if (this_ptr[1] - *this_ptr == 0) {
    uVar3 = 0xffffffff;
    FUN_0094a9d0();
  }
  else {
    uVar4 = (this_ptr[1] - *this_ptr >> 3) * -0x1111111111111111;
    if (uVar4 < arg1) {
      uVar4 = 0x7fffffffffffffff;
      FUN_00926c7a();
      FUN_009193a2();
    }
    else {
      FUN_009193a2();
      uVar3 = (ulong)uVar4;
      if (arg1 == 0) goto LAB_00958d25;
    }
    do {
      FUN_00926cf6();
      uVar3 = (ulong)uVar4;
      arg1 = arg1 - 1;
    } while (arg1 != 0);
  }
LAB_00958d25:
  std::string::resize(uVar3,'\0');
  if (*(int64_t *)PTR____stack_chk_guard_024a9898 == lVar1) {
    return;
  }
                      ___stack_chk_fail();
}

