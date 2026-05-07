// Function: FUN_00e31de0
// Address: 00e31de0
// Size: 801 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


uint64_t FUN_00e31de0(void)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  uint64_t uVar4;
  uint64_t arg1;
  void*this_ptr;
  uint uVar5;
  bool bVar6;
  uint local_40;
  
  local_40 = FUN_00e31390();
LAB_00e31e44:
  do {
    while ((local_40 & 1) != 0) {
      FUN_00da6800();
      local_40 = FUN_00e31390();
    }
    cVar1 = FUN_00e314a0(0);
  } while (cVar1 == '\0');
  FUN_00e31390();
  do {
    cVar1 = FUN_00e314a0(1);
  } while (cVar1 == '\0');
  uVar2 = FUN_00e31390();
  uVar4 = (**this_ptr)();
  uVar4 = (uVar4 & 0xffffffff) % (uint64_t)uVar2;
  cVar1 = FUN_00e31450(3,arg1);
  if (cVar1 != '\0') {
LAB_00e31fd3:
    iVar3 = FUN_00e31390();
    cVar1 = FUN_00e314a0(0,iVar3 + -2);
    while (cVar1 == '\0') {
      cVar1 = FUN_00e314a0(0,iVar3 + -2);
    }
    FUN_00e31650();
    cVar1 = FUN_00e314a0(0,local_40);
    while (cVar1 == '\0') {
      cVar1 = FUN_00e314a0(0,local_40);
    }
    return arg1;
  }
  bVar6 = true;
  do {
    cVar1 = (*this_ptr[1])();
    if (cVar1 != '\0') {
      iVar3 = FUN_00e31390();
      cVar1 = FUN_00e314a0(0,iVar3 + -2);
      while (cVar1 == '\0') {
        cVar1 = FUN_00e314a0(0,iVar3 + -2);
      }
      cVar1 = FUN_00e314a0(0,local_40);
      while (cVar1 == '\0') {
        cVar1 = FUN_00e314a0(0,local_40);
      }
      return 0;
    }
    if (bVar6) {
      cVar1 = FUN_00e31a80();
      if (cVar1 != '\0') break;
      bVar6 = false;
    }
    uVar5 = (int)uVar4 + 1;
    if (uVar5 == uVar2) {
      uVar5 = 0;
    }
    uVar4 = (uint64_t)uVar5;
    cVar1 = FUN_00e31450(3,arg1);
    if (cVar1 != '\0') goto LAB_00e31fd3;
  } while( true );
  local_40 = FUN_00e31390();
  goto LAB_00e31e44;
}

