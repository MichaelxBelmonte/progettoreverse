// Function: FUN_01d694d0
// Address: 01d694d0
// Size: 593 bytes
// Class: GNMenuItem
// === GNMenuItem properties ===
//                   _isKeyboardNavigationEnabled
//                   _lastModalResult
//                   _additionalResourceDirectories
//                   _preferencesDisplayGroup


void FUN_01d694d0(uint64_t param_1,uint32_t param_2)

{
  int64_t lVar1;
  int64_t lVar2;
  char cVar3;
  int iVar4;
  int64_t *arg1;
  int64_t *this_ptr;
  uint32_t uVar5;
  uint32_t uVar6;
  int64_t local_38;
  char local_30;
  
  iVar4 = FUN_01d3a5a0();
  if (iVar4 == 1) {
    cVar3 = (**(code **)(*this_ptr + 0xb30))();
    if ((cVar3 != '\0') && (iVar4 = FUN_01d3b620(), iVar4 == 1)) {
      FUN_01d3abf0();
      uVar5 = FUN_01e466c0();
      cVar3 = (**(code **)(*this_ptr + 0xb30))();
      if (cVar3 != '\0') {
        uVar6 = FUN_01e08670();
        cVar3 = FUN_00d05410(uVar5,uVar6,param_2);
        if (cVar3 != '\0') {
          (**(code **)(*this_ptr + 0xb38))();
        }
      }
    }
    FUN_01e42250();
    *(void*)(this_ptr + 0x48) = 0;
                                            (**(code **)(*this_ptr + 0x620))();
    return;
  }
  iVar4 = FUN_01d3a5a0();
  if (iVar4 == 2) {
    FUN_01d3d730();
    if (local_30 == '\0') {
      if (local_38 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_30 = '\0';
    }
    (**(code **)(*this_ptr + 0x958))();
    if (local_38 != 0) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    iVar4 = FUN_01d3a5a0();
    if (iVar4 != 4) {
      return;
    }
    lVar1 = this_ptr[0x48];
    iVar4 = FUN_01d3b590();
    if (iVar4 <= (int)lVar1) goto LAB_01d696a1;
    FUN_01d3d730();
    if (local_30 == '\0') {
      if (local_38 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_30 = '\0';
    }
    (**(code **)(*this_ptr + 0x958))();
    if (local_38 != 0) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
  }
  lVar1 = *arg1;
  lVar2 = this_ptr[0x49];
  if (lVar2 != lVar1) {
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    this_ptr[0x49] = lVar1;
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
LAB_01d696a1:
  uVar5 = FUN_01d3b590();
  *(void*)(this_ptr + 0x48) = uVar5;
  FUN_01d11e80();
  return;
}

