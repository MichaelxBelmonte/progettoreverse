// Function: FUN_00e3cd10
// Address: 00e3cd10
// Size: 589 bytes
// Class: GNData
// String references:
//   "GNData"
//   "%@"
//   ", "
// === GNData properties ===
//   double          _firstSpectrumTime
//   double          _spectraTimeDistance


void FUN_00e3cd10(uint64_t param_1,int64_t *param_2)

{
  int64_t *plVar1;
  int64_t lVar2;
  uint64_t uVar3;
  int64_t lVar4;
  char cVar5;
  int iVar6;
  void*puVar7;
  int iVar8;
  void*this_ptr;
  int64_t lVar9;
  uint32_t uVar10;
  void*local_68;
  uint32_t local_60;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  char local_40;
  uint32_t local_34;
  
  puVar7 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar7 = &g_025795a8;
  (*g_025795c0)();
  plVar1 = (int64_t *)*param_2;
  // [STATIC_INIT: property registration]
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x360))();
    cVar5 = FUN_00e85ea0();
    if (cVar5 != '\0') goto LAB_00e3cd90;
  }
  param_2 = &g_02802688;
LAB_00e3cd90:
  uVar3 = g_025908a0;
  lVar2 = *param_2;
  if ((lVar2 != 0) && (3 < *(int *)(lVar2 + 0x18))) {
    lVar9 = 0;
    do {
      local_34 = *(void*)(*(int64_t *)(lVar2 + 0x10) + lVar9 * 4);
      if ((int)lVar9 != 0) {
        FUN_00d94d80(local_34,uVar3);
      }
      uVar10 = (**(code **)(*g_028a8be0 + 0x378))(local_34);
      lVar4 = local_48;
      local_60 = 1;
      local_68 = &g_024c5048;
      local_50 = 0;
      if (local_48 != 0) {
        uVar10 = FUN_00d50b00();
      }
      local_58 = lVar4;
      local_50 = '\x01';
      FUN_00d94d80(uVar10,&local_68);
      local_68 = &g_024c5048;
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      iVar6 = *(int *)(lVar2 + 0x18);
      iVar8 = iVar6 + 3;
      if (-1 < iVar6) {
        iVar8 = iVar6;
      }
      lVar9 = lVar9 + 1;
    } while ((int)lVar9 < iVar8 >> 2);
  }
  FUN_00d8c7d0();
  *this_ptr = puVar7;
  *(void*)(this_ptr + 1) = 1;
  return;
}

