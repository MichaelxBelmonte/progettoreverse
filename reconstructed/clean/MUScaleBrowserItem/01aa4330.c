// Function: FUN_01aa4330
// Address: 01aa4330
// Size: 541 bytes
// Class: MUScaleBrowserItem
// String references:
//   "MUScaleBrowserItem"

uint64_t FUN_01aa4330(void)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  int64_t *plVar7;
  undefined7 uVar9;
  uint64_t uVar8;
  int64_t *arg1;
  int64_t *this_ptr;
  
  plVar7 = (int64_t *)*arg1;
  uVar9 = (undefined7)((uint64_t)plVar7 >> 8);
  if (plVar7 == this_ptr) {
    uVar8 = CONCAT71(uVar9,1);
    goto LAB_01aa4492;
  }
  if ((g_02737920 == '\0') && (iVar6 = ___cxa_guard_acquire(), iVar6 != 0)) {
    g_027e2e88 = FUN_00d4fe50();
    g_027e2e70 = "MUScaleBrowserItem";
    g_027e2e78 = 0x20;
    g_027e2e80 = FUN_00841ad0;
    g_027e2e90 = 0;
    ram_00000000027e2e98 = 0;
    g_027e2ea0 = 0;
    ram_00000000027e2ea8 = 0;
    g_027e2eb0 = 0;
    ram_00000000027e2eb8 = 0;
    g_027e2ec0 = 0;
    ram_00000000027e2ec8 = 0;
    g_027e2ed0 = 0;
    ram_00000000027e2ed8 = 0;
    g_027e2ee0 = 0;
    ram_00000000027e2ee8 = 0;
    g_027e2ef0 = 0;
    ram_00000000027e2ef8 = 0;
    g_027e2f00 = 0;
    ram_00000000027e2f08 = 0;
    g_027e2f10 = 0;
    ram_00000000027e2f18 = 0;
    g_027e2f20 = 0;
    ram_00000000027e2f28 = 0;
    g_027e2f30 = 0;
    ___cxa_guard_release();
  }
  if (plVar7 == (int64_t *)0x0) {
LAB_01aa4388:
    plVar7 = &g_02802688;
  }
  else {
    (**(code **)(*plVar7 + 0x360))();
    cVar4 = FUN_00e85ea0();
    plVar7 = arg1;
    if (cVar4 == '\0') goto LAB_01aa4388;
  }
  if (*plVar7 == 0) {
    uVar8 = 0;
  }
  else {
    lVar1 = this_ptr[3];
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    lVar2 = *(int64_t *)(*arg1 + 0x18);
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    if (lVar1 == lVar2) {
      uVar8 = CONCAT71(uVar9,1);
    }
    else if (this_ptr[3] == 0) {
      uVar8 = 0;
    }
    else {
      FUN_00d50b00();
      if (*(int64_t *)(*arg1 + 0x18) == 0) {
        uVar8 = 0;
      }
      else {
        FUN_00d50b00();
        plVar7 = (int64_t *)this_ptr[3];
        if (plVar7 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        lVar3 = *(int64_t *)(*arg1 + 0x18);
        if (lVar3 != 0) {
          FUN_00d50b00();
        }
        uVar5 = (**(code **)(*plVar7 + 0x50))();
        uVar8 = (uint64_t)uVar5;
        if (lVar3 != 0) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
LAB_01aa4492:
  return uVar8 & 0xffffffff;
}

