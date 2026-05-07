// Function: FUN_0191ce40
// Address: 0191ce40
// Size: 810 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_0191ce40(uint32_t param_1,float param_2)

{
  int64_t lVar1;
  bool bVar2;
  int64_t *plVar3;
  char cVar4;
  int64_t *plVar5;
  void*arg1;
  int64_t *this_ptr;
  int64_t **pplVar6;
  float fVar7;
  int64_t *local_40;
  char local_38;
  
  FUN_01d48370();
  plVar5 = (int64_t *)*arg1;
  FUN_01e3f820();
  (**(code **)(*plVar5 + 0x390))();
  FUN_01d77a60(param_1);
  FUN_01d48390();
  fVar7 = (float)FUN_01e3f820();
  if ((g_028b0a78 == (int64_t *)0x0) || (g_028b0a81 == '\0')) {
    FUN_00e8cb50();
    if (g_028b0a78 == (int64_t *)0x0) {
      FUN_01cfbee0(g_0241af10,g_0241af10,g_0241af10);
      plVar5 = g_028b0a78;
      if (g_028b0a78 != local_40) {
        if (local_38 == '\0') {
          if (local_40 == (int64_t *)0x0) {
            plVar5 = (int64_t *)0x0;
          }
          else {
            FUN_00d50b00();
            plVar5 = local_40;
          }
        }
        else {
          local_38 = '\0';
          plVar5 = local_40;
        }
        bVar2 = g_028b0a78 != (int64_t *)0x0;
        g_028b0a78 = plVar5;
        if (bVar2) {
          FUN_00d50b20();
          plVar5 = local_40;
        }
      }
      if ((plVar5 != (int64_t *)0x0) && (g_028b0a80 == '\0')) {
        g_028b0a80 = '\x01';
        FUN_00e8cb90();
        plVar5 = local_40;
      }
      if ((local_38 != '\0') && (plVar5 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      g_028b0a81 = '\x01';
      FUN_00e8cb70();
    }
    else {
      g_028b0a81 = '\x01';
      FUN_00e8cb70();
    }
  }
  pplVar6 = &local_40;
  (**(code **)(*this_ptr + 0x640))();
  plVar5 = local_40;
  FUN_00209700();
  if (plVar5 != (int64_t *)0x0) {
    (**(code **)(*plVar5 + 0x360))();
    cVar4 = FUN_00e85ea0();
    if (cVar4 != '\0') goto LAB_0191d015;
  }
  pplVar6 = (int64_t **)&g_02802688;
LAB_0191d015:
  plVar5 = *pplVar6;
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  plVar3 = g_028b0a78;
  if (plVar5 == (int64_t *)0x0) {
    if (g_028b0a78 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    FUN_01d488d0();
    if (plVar3 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  else {
    (**(code **)(*this_ptr + 0x640))();
    lVar1 = local_40[0x11];
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    FUN_01d488d0();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  (**(code **)(*this_ptr + 0x640))();
  FUN_01cb3a30(fVar7 + param_2 + g_023b5de0 + g_0241af20,g_02394298);
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  return;
}

