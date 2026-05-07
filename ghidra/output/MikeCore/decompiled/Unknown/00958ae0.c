// Function: FUN_00958ae0
// Address: 00958ae0
// Size: 636 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x00958cd6) */
/* WARNING: Removing unreachable block (ram,0x00958c1d) */
/* WARNING: Removing unreachable block (ram,0x00958bf0) */
/* WARNING: Removing unreachable block (ram,0x00958c0b) */
/* WARNING: Removing unreachable block (ram,0x00958cbd) */
/* WARNING: Removing unreachable block (ram,0x00958ce8) */

void FUN_00958ae0(id *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  ulong uVar3;
  locale *this;
  ulonglong uVar4;
  ulonglong unaff_RSI;
  longlong *unaff_RDI;
  
  lVar1 = *(longlong *)PTR____stack_chk_guard_024a9898;
  FUN_009540a0();
  plVar2 = (longlong *)std::locale::use_facet(param_1);
  this = (locale *)*plVar2;
  (**(code **)(this + 0x38))();
  std::locale::~locale(this);
  if (unaff_RDI[1] - *unaff_RDI == 0) {
    uVar3 = 0xffffffff;
    FUN_0094a9d0();
  }
  else {
    uVar4 = (unaff_RDI[1] - *unaff_RDI >> 3) * -0x1111111111111111;
    if (uVar4 < unaff_RSI) {
      uVar4 = 0x7fffffffffffffff;
      FUN_00926c7a();
      FUN_009193a2();
    }
    else {
      FUN_009193a2();
      uVar3 = (ulong)uVar4;
      if (unaff_RSI == 0) goto LAB_00958d25;
    }
    do {
      FUN_00926cf6();
      uVar3 = (ulong)uVar4;
      unaff_RSI = unaff_RSI - 1;
    } while (unaff_RSI != 0);
  }
LAB_00958d25:
  std::string::resize(uVar3,'\0');
  if (*(longlong *)PTR____stack_chk_guard_024a9898 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}


