// Function: FUN_01a77500
// Address: 01a77500
// Size: 568 bytes
// Class: MUTimeHandleToolViewInfo
// === MUTimeHandleToolViewInfo properties ===
//                   _viewsWithSelection
//                   _editElement
//                   _removedPredecessors
//                   _removedSuccessors


void FUN_01a77500(void)

{
  int64_t *plVar1;
  bool bVar2;
  int64_t *plVar3;
  int64_t lVar4;
  int64_t lVar5;
  int64_t *this_ptr;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  char local_40;
  
  FUN_00d50100();
  if ((g_028b3008 == 0) || (g_028b3011 == '\0')) {
    FUN_00e8cb50();
    lVar5 = g_027e2888;
    if (g_028b3008 == 0) {
      if (g_027e2888 != 0) {
        FUN_00d50b00();
      }
      FUN_01d51a40();
      if (local_50 == '\0') {
        if (local_58 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_50 = '\0';
      }
      FUN_01d20ca0(g_0241f3f0);
      lVar4 = g_028b3008;
      if (g_028b3008 != local_48) {
        if (local_40 == '\0') {
          if (local_48 == 0) {
            lVar4 = 0;
          }
          else {
            FUN_00d50b00();
            lVar4 = local_48;
          }
        }
        else {
          local_40 = '\0';
          lVar4 = local_48;
        }
        bVar2 = g_028b3008 != 0;
        g_028b3008 = lVar4;
        if (bVar2) {
          FUN_00d50b20();
          lVar4 = local_48;
        }
      }
      if ((lVar4 != 0) && (g_028b3010 == '\0')) {
        g_028b3010 = '\x01';
        FUN_00e8cb90();
        lVar4 = local_48;
      }
      if ((local_40 != '\0') && (lVar4 != 0)) {
        FUN_00d50b20();
      }
      if (local_58 != 0) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if (lVar5 != 0) {
        FUN_00d50b20();
      }
      g_028b3011 = '\x01';
      FUN_00e8cb70();
    }
    else {
      g_028b3011 = '\x01';
      FUN_00e8cb70();
    }
    if (g_028b3008 == 0) {
      lVar5 = 0;
      goto LAB_01a776b9;
    }
  }
  lVar5 = g_028b3008;
  FUN_00d50b00();
LAB_01a776b9:
  (**(code **)(*this_ptr + 0x390))();
  if (lVar5 != 0) {
    FUN_00d50b20();
  }
  plVar3 = (int64_t *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar3 + 0x18))();
  plVar1 = (int64_t *)this_ptr[9];
  if (plVar1 == plVar3) {
    FUN_00d50b20();
  }
  else {
    this_ptr[9] = (int64_t)plVar3;
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  return;
}

