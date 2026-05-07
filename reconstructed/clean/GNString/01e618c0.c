// Function: FUN_01e618c0
// Address: 01e618c0
// Size: 738 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_01e618c0(void)

{
  bool bVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t *this_ptr;
  int64_t local_28;
  char local_20;
  
  lVar4 = g_028ba060;
  if ((g_028ba060 == 0) || (g_028ba069 == '\0')) {
    FUN_00e8cb50();
    lVar4 = g_027f3fb0;
    if (g_028ba060 == 0) {
      if (g_027f3fb0 != 0) {
        FUN_00d50b00();
      }
      lVar2 = g_027fecc0;
      if (g_027fecc0 != 0) {
        FUN_00d50b00();
      }
      FUN_01d43f00(g_02390d28,0);
      lVar3 = g_028ba060;
      if (g_028ba060 != local_28) {
        if (local_20 == '\0') {
          if (local_28 == 0) {
            lVar3 = 0;
          }
          else {
            FUN_00d50b00();
            lVar3 = local_28;
          }
        }
        else {
          local_20 = '\0';
          lVar3 = local_28;
        }
        bVar1 = g_028ba060 != 0;
        g_028ba060 = lVar3;
        if (bVar1) {
          FUN_00d50b20();
          lVar3 = local_28;
        }
      }
      if ((lVar3 != 0) && (g_028ba068 == '\0')) {
        g_028ba068 = '\x01';
        FUN_00e8cb90();
        lVar3 = local_28;
      }
      if ((local_20 != '\0') && (lVar3 != 0)) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      lVar4 = g_027f3fb8;
      if (g_028ba060 == 0) {
        if (g_027f3fb8 != 0) {
          FUN_00d50b00();
        }
        lVar2 = g_027fecc0;
        if (g_027fecc0 != 0) {
          FUN_00d50b00();
        }
        FUN_01d43f00(g_023b160c,0);
        lVar3 = g_028ba060;
        if (g_028ba060 != local_28) {
          if (local_20 == '\0') {
            if (local_28 == 0) {
              lVar3 = 0;
            }
            else {
              FUN_00d50b00();
              lVar3 = local_28;
            }
          }
          else {
            local_20 = '\0';
            lVar3 = local_28;
          }
          bVar1 = g_028ba060 != 0;
          g_028ba060 = lVar3;
          if (bVar1) {
            FUN_00d50b20();
            lVar3 = local_28;
          }
        }
        if ((lVar3 != 0) && (g_028ba068 == '\0')) {
          g_028ba068 = '\x01';
          FUN_00e8cb90();
          lVar3 = local_28;
        }
        if ((local_20 != '\0') && (lVar3 != 0)) {
          FUN_00d50b20();
        }
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        if (lVar4 != 0) {
          FUN_00d50b20();
        }
      }
      else {
        *(void*)(g_028ba060 + 0x28) = 0;
      }
      g_028ba069 = '\x01';
      FUN_00e8cb70();
    }
    else {
      g_028ba069 = '\x01';
      FUN_00e8cb70();
    }
    lVar4 = g_028ba060;
    *(void*)(this_ptr + 1) = 0;
    if (lVar4 == 0) {
      lVar4 = 0;
      goto LAB_01e61a5a;
    }
  }
  else {
    *(void*)(this_ptr + 1) = 0;
  }
  FUN_00d50b00();
LAB_01e61a5a:
  *this_ptr = lVar4;
  *(void*)(this_ptr + 1) = 1;
  return;
}

