// Function: FUN_00b31d20
// Address: 00b31d20
// Size: 501 bytes
// Class: GNAudioProcessor

void FUN_00b31d20(void)

{
  int64_t *plVar1;
  int64_t lVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  void*arg1;
  int64_t *this_ptr;
  
  lVar2 = g_0275e470;
  plVar1 = (int64_t *)*arg1;
  if (g_0275e470 != 0) {
    FUN_00d50b00();
  }
  (**(code **)(*plVar1 + 0x5a0))();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  cVar3 = (**(code **)(*this_ptr + 0x548))();
  plVar1 = (int64_t *)*arg1;
  if (cVar3 == '\0') {
    (**(code **)(*plVar1 + 0x400))();
  }
  else {
    lVar2 = this_ptr[6];
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    (**(code **)(*plVar1 + 0x400))();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  cVar3 = (**(code **)(*this_ptr + 0x550))();
  plVar1 = (int64_t *)*arg1;
  if (cVar3 == '\0') {
    (**(code **)(*plVar1 + 0x400))();
  }
  else {
    lVar2 = this_ptr[7];
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    (**(code **)(*plVar1 + 0x400))();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  plVar1 = (int64_t *)*arg1;
  (**(code **)(*this_ptr + 0x558))();
  (**(code **)(*plVar1 + 0x3a8))();
  cVar3 = (**(code **)(*this_ptr + 0x558))();
  if (cVar3 != '\0') {
    iVar4 = (**(code **)(*this_ptr + 0x448))();
    (**(code **)(*(int64_t *)*arg1 + 0x3b8))();
    if (0 < iVar4) {
      iVar5 = 0;
      do {
        plVar1 = (int64_t *)*arg1;
        (**(code **)(*this_ptr + 0x458))();
        (**(code **)(*plVar1 + 0x3c0))();
        iVar5 = iVar5 + 1;
      } while (iVar4 != iVar5);
    }
  }
  return;
}

