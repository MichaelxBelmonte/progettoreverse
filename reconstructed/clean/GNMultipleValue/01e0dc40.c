// Function: FUN_01e0dc40
// Address: 01e0dc40
// Size: 645 bytes
// Class: GNMultipleValue

void FUN_01e0dc40(uint64_t param_1,uint64_t param_2)

{
  bool bVar1;
  char cVar2;
  int64_t lVar3;
  int64_t *this_ptr;
  float fVar4;
  int64_t local_50;
  char local_48;
  int64_t local_30;
  char local_28;
  
  fVar4 = (float)((uint64_t)param_2 >> 0x20);
  FUN_01e47f00();
  if (((int64_t *)this_ptr[0x27] != (int64_t *)0x0) &&
     (cVar2 = (**(code **)(*(int64_t *)this_ptr[0x27] + 0x9a0))(), cVar2 != '\0')) {
    g_028b90d0 = 0;
    cVar2 = (**(code **)(*(int64_t *)this_ptr[0x27] + 0xac8))();
    if (cVar2 != '\0') {
      FUN_01e057f0();
    }
    (**(code **)(*(int64_t *)this_ptr[0x27] + 0x960))();
    if (local_48 == '\0') {
      if (local_50 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_48 = '\0';
    }
    FUN_00d8dab0();
    if (local_28 == '\0') {
      if (local_30 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_28 = '\0';
    }
    if (local_50 != 0) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    lVar3 = g_028b90a0;
    if (g_028b90a0 != local_30) {
      if (local_30 != 0) {
        FUN_00d50b00();
      }
      g_028b90a0 = local_30;
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
    }
    if ((local_30 != 0) && (g_028b90a8 == '\0')) {
      g_028b90a8 = '\x01';
      FUN_00e8cb90();
    }
    FUN_01e3f820();
    bVar1 = (float)((uint64_t)param_1 >> 0x20) < fVar4 * g_0239011c;
    *(uint *)(this_ptr + 0x28) = (bVar1 - 1) + (uint)bVar1;
    (**(code **)(*this_ptr + 0x620))();
    FUN_01e1eb80((int)g_023942d0);
    lVar3 = g_028b90c0;
    if (g_028b90c0 != local_30) {
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
      bVar1 = g_028b90c0 != 0;
      g_028b90c0 = lVar3;
      if (bVar1) {
        FUN_00d50b20();
        lVar3 = local_30;
      }
    }
    if ((lVar3 != 0) && (g_028b90c8 == '\0')) {
      g_028b90c8 = '\x01';
      FUN_00e8cb90();
      lVar3 = local_30;
    }
    if ((local_28 != '\0') && (lVar3 != 0)) {
      FUN_00d50b20();
    }
    g_028b90d1 = 1;
    if (local_30 != 0) {
      FUN_00d50b20();
    }
  }
  return;
}

