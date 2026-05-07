// Function: FUN_00177bb0
// Address: 00177bb0
// Size: 556 bytes
// Class: MDTooltipsPrefCtrl

void FUN_00177bb0(void)

{
  int64_t *plVar1;
  bool bVar2;
  int iVar3;
  int unaff_ESI;
  int64_t *this_ptr;
  int64_t *local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  
  iVar3 = (int)this_ptr[0x11];
  if ((unaff_ESI < 1) || (iVar3 != unaff_ESI)) {
    if ((iVar3 == 0 && unaff_ESI == 0) && (1 < *(int *)(this_ptr[0x10] + 0xc))) {
      (**(code **)(*this_ptr + 0x5e0))();
      bVar2 = true;
    }
    else if (iVar3 == unaff_ESI) {
      plVar1 = *(int64_t **)(*(int64_t *)(this_ptr[0x10] + 0x10) + (int64_t)unaff_ESI * 8);
      if (plVar1 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      (**(code **)(*plVar1 + 0x4f0))();
      FUN_00176c40();
      FUN_01e53c20();
      if (local_48 == '\0') {
        if (local_50 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_48 = '\0';
      }
      (**(code **)(*local_60 + 0x470))();
      if (local_50 != 0) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      if (local_58 != '\0') {
        FUN_00d50b20();
      }
      bVar2 = true;
      FUN_00d50b20();
    }
    else {
      bVar2 = unaff_ESI < iVar3;
    }
  }
  else {
    (**(code **)(*this_ptr + 0x5e0))();
    bVar2 = false;
  }
  FUN_00d23620();
  if (this_ptr[0x12] != 0) {
    FUN_00d50b00();
    FUN_00d50b20();
    plVar1 = (int64_t *)this_ptr[0x12];
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    (**(code **)(*plVar1 + 0xa60))();
    FUN_00d50b20();
    plVar1 = (int64_t *)this_ptr[0x12];
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    iVar3 = (**(code **)(*plVar1 + 0xaa0))();
    FUN_00d50b20();
    if (iVar3 == 0) {
      plVar1 = (int64_t *)this_ptr[0x12];
      if (plVar1 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      (**(code **)(*plVar1 + 0x478))();
      FUN_00d50b20();
      if (this_ptr[0x12] != 0) {
        this_ptr[0x12] = 0;
        FUN_00d50b20();
      }
    }
  }
  if (bVar2) {
    *(int *)(this_ptr + 0x11) = (int)this_ptr[0x11] + -1;
  }
  return;
}

