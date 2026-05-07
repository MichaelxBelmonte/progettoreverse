// Function: FUN_00d301b0
// Address: 00d301b0
// Size: 737 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_00d301b0(void)

{
  int64_t *plVar1;
  int64_t lVar2;
  char cVar3;
  int64_t lVar4;
  int64_t *arg1;
  int64_t *this_ptr;
  
  lVar4 = g_0277d5a8;
  plVar1 = (int64_t *)*arg1;
  if (plVar1 != (int64_t *)0x0) {
    if (g_0277d5a8 != 0) {
      FUN_00d50b00();
    }
    cVar3 = (**(code **)(*plVar1 + 0x50))();
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
    lVar4 = g_0277d5b8;
    if (cVar3 == '\0') {
      plVar1 = (int64_t *)*arg1;
      if (g_0277d5b8 != 0) {
        FUN_00d50b00();
      }
      cVar3 = (**(code **)(*plVar1 + 0x50))();
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      lVar4 = g_0277d5e0;
      lVar2 = g_0277d5b0;
      if (cVar3 != '\0') {
        *(void*)(this_ptr + 1) = 0;
        goto joined_r0x00d30290;
      }
      plVar1 = (int64_t *)*arg1;
      if (g_0277d5b0 != 0) {
        FUN_00d50b00();
      }
      cVar3 = (**(code **)(*plVar1 + 0x50))();
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      lVar4 = g_0277d5e8;
      lVar2 = g_0277d5c0;
      if (cVar3 != '\0') {
        *(void*)(this_ptr + 1) = 0;
        goto joined_r0x00d30290;
      }
      plVar1 = (int64_t *)*arg1;
      if (g_0277d5c0 != 0) {
        FUN_00d50b00();
      }
      cVar3 = (**(code **)(*plVar1 + 0x50))();
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      lVar4 = g_0277d5f0;
      lVar2 = g_0277d5d0;
      if (cVar3 != '\0') {
        *(void*)(this_ptr + 1) = 0;
        goto joined_r0x00d30290;
      }
      plVar1 = (int64_t *)*arg1;
      if (g_0277d5d0 != 0) {
        FUN_00d50b00();
      }
      cVar3 = (**(code **)(*plVar1 + 0x50))();
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      lVar4 = g_0277d5f8;
      lVar2 = g_0277d5c8;
      if (cVar3 != '\0') {
        *(void*)(this_ptr + 1) = 0;
        goto joined_r0x00d30290;
      }
      plVar1 = (int64_t *)*arg1;
      if (g_0277d5c8 != 0) {
        FUN_00d50b00();
      }
      cVar3 = (**(code **)(*plVar1 + 0x50))();
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      lVar4 = g_0277d600;
      lVar2 = g_0277d5d8;
      if (cVar3 != '\0') {
        *(void*)(this_ptr + 1) = 0;
        goto joined_r0x00d30290;
      }
      plVar1 = (int64_t *)*arg1;
      if (g_0277d5d8 != 0) {
        FUN_00d50b00();
      }
      cVar3 = (**(code **)(*plVar1 + 0x50))();
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      lVar4 = g_0277d608;
      if (cVar3 != '\0') {
        *(void*)(this_ptr + 1) = 0;
        goto joined_r0x00d30290;
      }
    }
  }
  lVar4 = g_0277d610;
  *(void*)(this_ptr + 1) = 0;
joined_r0x00d30290:
  if (lVar4 == 0) {
    lVar4 = 0;
  }
  else {
    FUN_00d50b00();
  }
  *this_ptr = lVar4;
  *(void*)(this_ptr + 1) = 1;
  return;
}

