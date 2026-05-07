// Function: FUN_00e269c0
// Address: 00e269c0
// Size: 795 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_00e269c0(void)

{
  int64_t lVar1;
  int64_t lVar2;
  char cVar3;
  void*this_ptr;
  bool bVar4;
  int64_t local_60;
  char local_58;
  int64_t *local_40;
  char local_38;
  
  lVar1 = g_027f37d8;
  if (g_027f37d8 != 0) {
    FUN_00d50b00();
  }
  FUN_000175c0();
  if (local_38 == '\0') {
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = g_027f37f0;
  if (local_40 != (int64_t *)0x0) {
    if (g_027f37f0 != 0) {
      FUN_00d50b00();
    }
    cVar3 = (**(code **)(*local_40 + 0x50))();
    lVar2 = g_027fec90;
    if (cVar3 == '\0') {
      bVar4 = false;
    }
    else {
      if (g_027fec90 != 0) {
        FUN_00d50b00();
      }
      FUN_000175c0();
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      bVar4 = local_40 != (int64_t *)0x0;
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if (bVar4) {
      FUN_00c80cd0();
      if ((local_38 == '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b00();
      }
      if (local_40 != (int64_t *)0x0) {
        FUN_00d8ede0();
        lVar1 = g_027f37e0;
        if ((local_58 == '\0') && (local_60 != 0)) {
          FUN_00d50b00();
          lVar1 = g_027f37e0;
        }
        g_027f37e0 = lVar1;
        if (lVar1 != 0) {
          FUN_00d50b00();
        }
        FUN_00ca0840();
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
        if (local_60 != 0) {
          FUN_00d50b20();
        }
        *this_ptr = local_40;
        *(void*)(this_ptr + 1) = 1;
        goto joined_r0x00e26bf1;
      }
    }
  }
  *(void*)(this_ptr + 1) = 0;
  *this_ptr = 0;
joined_r0x00e26bf1:
  if (local_40 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}

