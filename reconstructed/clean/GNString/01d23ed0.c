// Function: FUN_01d23ed0
// Address: 01d23ed0
// Size: 699 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_01d23ed0(void)

{
  void*arg1;
  int64_t this_ptr;
  int64_t lVar1;
  bool bVar2;
  int64_t local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  int64_t *local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  FUN_00d50f50();
  if (*(char *)(this_ptr + 0x70) == '\0') goto LAB_01d2416f;
  *(void*)(this_ptr + 0x80) = 1;
  FUN_00d403d0();
  lVar1 = g_027ef960;
  if (g_027ef960 != 0) {
    FUN_00d50b00();
  }
  FUN_00d50b00();
  local_80 = 0;
  local_78 = '\0';
  FUN_00d40470(&local_80,&stack0xffffffffffffffa0,1,3);
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  if (this_ptr != 0) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  lVar1 = g_027ef968;
  if ((*(char *)(this_ptr + 0x70) == '\0') || (*(char *)(this_ptr + 0x9c) != '\0'))
  goto LAB_01d2416f;
  if (g_027ef968 != 0) {
    FUN_00d50b00();
  }
  (**(code **)(*(int64_t *)*arg1 + 0x5e0))();
  local_70 = g_027f3830;
  if (g_027f3830 != 0) {
    FUN_00d50b00();
  }
  local_68 = '\x01';
  FUN_000175c0();
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (local_40 != 0) {
    FUN_01e2ce20();
    (**(code **)(*local_50 + 0x390))();
    if (local_40 == lVar1) {
LAB_01d24132:
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
        bVar2 = lVar1 != 0;
        lVar1 = local_40;
        if (bVar2) {
          FUN_00d50b20();
        }
        goto LAB_01d24132;
      }
      bVar2 = lVar1 != 0;
      lVar1 = local_40;
      if (bVar2) {
        FUN_00d50b20();
      }
    }
    if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
LAB_01d2416f:
  FUN_01d2b270();
  return;
}

