// Function: FUN_01effce0
// Address: 01effce0
// Size: 518 bytes
// Class: GNPopUpButton

void FUN_01effce0(void)

{
  int64_t *plVar1;
  bool bVar2;
  char cVar3;
  int64_t *plVar4;
  void*this_ptr;
  int64_t lVar5;
  bool bVar6;
  bool bVar7;
  
  if (g_028ba670 == (int64_t *)*this_ptr) {
    return;
  }
  if (g_028ba670 != (int64_t *)0x0) {
    if (((int64_t *)*this_ptr != (int64_t *)0x0) &&
       (cVar3 = (**(code **)(*g_028ba670 + 0x50))(), cVar3 != '\0')) {
      return;
    }
    if ((g_028ba670 != (int64_t *)0x0) && (g_028ba679 != '\0')) goto LAB_01effe06;
  }
  FUN_00e8cb50();
  if (g_028ba670 == (int64_t *)0x0) {
    plVar4 = (int64_t *)FUN_00e8fc40();
    FUN_00d4ff40();
    *plVar4 = (int64_t)&g_02572358;
    (*g_02572370)();
    if (g_028ba670 == plVar4) {
      bVar2 = false;
      bVar7 = false;
    }
    else {
      bVar2 = true;
      bVar7 = true;
      bVar6 = g_028ba670 != (int64_t *)0x0;
      g_028ba670 = plVar4;
      if (bVar6) {
        FUN_00d50b20();
      }
    }
    if (g_028ba678 == '\0') {
      g_028ba678 = '\x01';
      FUN_00e8cb90();
      bVar7 = bVar2;
    }
    if (!bVar7) {
      FUN_00d50b20();
    }
    g_028ba679 = '\x01';
    FUN_00e8cb70();
  }
  else {
    g_028ba679 = '\x01';
    FUN_00e8cb70();
  }
LAB_01effe06:
  FUN_00d243f0();
  if ((g_028ba660 != 0) && (0 < *(int *)(g_028ba660 + 0xc))) {
    lVar5 = 0;
    plVar4 = (int64_t *)0x0;
    do {
      plVar1 = *(int64_t **)(*(int64_t *)(g_028ba660 + 0x10) + lVar5 * 8);
      if (plVar4 != plVar1) {
        if (plVar1 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        bVar7 = plVar4 != (int64_t *)0x0;
        plVar4 = plVar1;
        if (bVar7) {
          FUN_00d50b20();
        }
      }
      (**(code **)(*plVar4 + 0x5e8))();
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(g_028ba660 + 0xc));
    FUN_00d50b20();
  }
  return;
}

