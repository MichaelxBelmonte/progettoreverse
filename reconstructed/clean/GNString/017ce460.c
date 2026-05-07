// Function: FUN_017ce460
// Address: 017ce460
// Size: 802 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


uint32_t FUN_017ce460(int64_t *param_1)

{
  int64_t lVar1;
  int64_t *plVar2;
  void *pvVar3;
  int64_t lVar4;
  int64_t *plVar5;
  void* pVar6;
  char *pcVar7;
  int64_t this_ptr;
  int64_t *local_40;
  char local_38 [8];
  char local_30 [8];
  
  if ((g_028af458 == (int64_t *)0x0) || (g_028af461 == '\0')) {
    FUN_00e8cb50();
    if (g_028af458 == (int64_t *)0x0) {
      lVar4 = *(int64_t *)(this_ptr + 0x58);
      if (lVar4 != 0) {
        FUN_00d50b00();
      }
      pvVar3 = _pthread_getspecific((void*)param_1);
      lVar1 = g_027d3868;
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
        lVar1 = g_027d3868;
      }
      g_027d3868 = lVar1;
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      FUN_018bf620();
      plVar5 = g_028af458;
      if (g_028af458 != local_40) {
        param_1 = g_028af458;
        if (local_38[0] == '\0') {
          if (local_40 == (int64_t *)0x0) {
            plVar5 = (int64_t *)0x0;
          }
          else {
            FUN_00d50b00();
            plVar5 = local_40;
            param_1 = g_028af458;
          }
        }
        else {
          local_38[0] = '\0';
          plVar5 = local_40;
        }
        g_028af458 = plVar5;
        if (param_1 != (int64_t *)0x0) {
          FUN_00d50b20();
          plVar5 = local_40;
        }
      }
      if ((plVar5 != (int64_t *)0x0) && (g_028af460 == '\0')) {
        g_028af460 = '\x01';
        FUN_00e8cb90();
        plVar5 = local_40;
      }
      if ((local_38[0] != '\0') && (plVar5 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      g_028af461 = '\x01';
      FUN_00e8cb70();
    }
    else {
      g_028af461 = '\x01';
      FUN_00e8cb70();
    }
  }
  lVar4 = *(int64_t *)(this_ptr + 0x58);
  if (lVar4 != 0) {
    FUN_00d50b00();
  }
  pvVar3 = _pthread_getspecific((void*)param_1);
  plVar5 = g_028af458;
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
    plVar5 = g_028af458;
  }
  g_028af458 = plVar5;
  if (plVar5 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  FUN_018bf930();
  pVar6 = (void*)CONCAT71((int7)((uint64_t)param_1 >> 8),local_38[0]);
  pcVar7 = local_30;
  if (local_38[0] != '\0') {
    pcVar7 = local_38;
  }
  local_30[0] = local_38[0];
  *pcVar7 = '\0';
  if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar5 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  plVar5 = g_028af458;
  pvVar3 = _pthread_getspecific(pVar6);
  plVar2 = g_028af458;
  if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), plVar5 = plVar2, lVar4 != 0)) {
    plVar5 = (int64_t *)plVar2[(uint64_t)(*(uint *)(lVar4 + 0x154) & 1) + 4];
  }
  (**(code **)(*plVar5 + 0x388))();
  if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_30[0] != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  return 0xffffffff;
}

