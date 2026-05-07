// Function: FUN_01e61dc0
// Address: 01e61dc0
// Size: 726 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_01e61dc0(void)

{
  bool bVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t *arg1;
  int64_t *this_ptr;
  uint32_t uVar5;
  int64_t local_70;
  char local_68;
  int64_t local_40;
  char local_38;
  int64_t local_30;
  char local_28;
  
  lVar4 = g_028ba070;
  if ((g_028ba070 == 0) || (g_028ba079 == '\0')) {
    FUN_00e8cb50();
    lVar4 = g_027f3fb0;
    if (g_028ba070 == 0) {
      if (g_027f3fb0 != 0) {
        FUN_00d50b00();
      }
      lVar2 = g_027fecd0;
      if (g_027fecd0 != 0) {
        FUN_00d50b00();
      }
      FUN_01d43f00(g_02390d28,0);
      lVar3 = g_028ba070;
      if (g_028ba070 != local_30) {
        if (local_28 == '\0') {
          if (local_30 == 0) {
            lVar3 = 0;
          }
          else {
            FUN_00d50b00();
            lVar3 = local_30;
          }
        }
        else {
          local_28 = '\0';
          lVar3 = local_30;
        }
        bVar1 = g_028ba070 != 0;
        g_028ba070 = lVar3;
        if (bVar1) {
          FUN_00d50b20();
          lVar3 = local_30;
        }
      }
      if ((lVar3 != 0) && (g_028ba078 == '\0')) {
        g_028ba078 = '\x01';
        FUN_00e8cb90();
        lVar3 = local_30;
      }
      if ((local_28 != '\0') && (lVar3 != 0)) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (g_028ba070 == 0) {
        uVar5 = (**(code **)(*arg1 + 0x370))();
        local_40 = g_027fecd0;
        if (g_027fecd0 != 0) {
          uVar5 = FUN_00d50b00();
        }
        local_38 = '\x01';
        FUN_01d44ed0(uVar5,&local_40);
        lVar4 = g_028ba070;
        if (g_028ba070 != local_30) {
          if (local_28 == '\0') {
            if (local_30 == 0) {
              lVar4 = 0;
            }
            else {
              FUN_00d50b00();
              lVar4 = local_30;
            }
          }
          else {
            local_28 = '\0';
            lVar4 = local_30;
          }
          bVar1 = g_028ba070 != 0;
          g_028ba070 = lVar4;
          if (bVar1) {
            FUN_00d50b20();
            lVar4 = local_30;
          }
        }
        if ((lVar4 != 0) && (g_028ba078 == '\0')) {
          g_028ba078 = '\x01';
          FUN_00e8cb90();
          lVar4 = local_30;
        }
        if ((local_28 != '\0') && (lVar4 != 0)) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if ((local_68 != '\0') && (local_70 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        *(void*)(g_028ba070 + 0x28) = 0;
      }
      g_028ba079 = '\x01';
      FUN_00e8cb70();
    }
    else {
      g_028ba079 = '\x01';
      FUN_00e8cb70();
    }
    lVar4 = g_028ba070;
    *(void*)(this_ptr + 1) = 0;
    if (lVar4 == 0) {
      lVar4 = 0;
      goto LAB_01e61f5f;
    }
  }
  else {
    *(void*)(this_ptr + 1) = 0;
  }
  FUN_00d50b00();
LAB_01e61f5f:
  *this_ptr = lVar4;
  *(void*)(this_ptr + 1) = 1;
  return;
}

