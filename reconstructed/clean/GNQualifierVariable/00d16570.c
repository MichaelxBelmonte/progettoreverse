// Function: FUN_00d16570
// Address: 00d16570
// Size: 1132 bytes
// Class: GNQualifierVariable
// String references:
//   "Error in variable substitution: value for variable %@ not found"
//   "GNQualifierVariable"

void FUN_00d16570(uint64_t param_1,void*param_2)

{
  int64_t *plVar1;
  void*puVar2;
  void*puVar3;
  char cVar4;
  int iVar5;
  void*puVar6;
  int64_t *plVar7;
  int64_t arg1;
  int64_t *this_ptr;
  int64_t lVar8;
  uint32_t uVar9;
  void*local_98;
  uint8_t local_90;
  int64_t local_88;
  char local_80;
  int64_t *local_78;
  int64_t local_70;
  char local_68;
  void*local_60;
  uint local_58;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  plVar7 = *(int64_t **)(arg1 + 0x20);
  if ((g_0277ce78 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
    g_0277cdc8 = FUN_00d4fe50();
    g_0277cdb0 = "GNQualifierVariable";
    g_0277cdb8 = 0x18;
    g_0277cdc0 = FUN_00d17140;
    g_0277cdd0 = 0;
    ram_000000000277cdd8 = 0;
    g_0277cde0 = 0;
    g_0277ce58 = 0;
    ram_000000000277ce60 = 0;
    g_0277ce68 = 0;
    g_0277ce6a = 1;
    g_0277cde8 = 0;
    ram_000000000277cdf0 = 0;
    g_0277cdf8 = 0;
    ram_000000000277ce00 = 0;
    g_0277ce08 = 0;
    ram_000000000277ce10 = 0;
    g_0277ce18 = 0;
    ram_000000000277ce20 = 0;
    g_0277ce28 = 0;
    ram_000000000277ce30 = 0;
    g_0277ce38 = 0;
    ram_000000000277ce40 = 0;
    g_0277ce48 = 0;
    ram_000000000277ce50 = 0;
    g_0277ce73 = 0;
    g_0277ce6b = 0;
    ___cxa_guard_release();
  }
  if (plVar7 != (int64_t *)0x0) {
    (**(code **)(*plVar7 + 0x360))();
    cVar4 = FUN_00e85ea0();
    plVar7 = (int64_t *)(arg1 + 0x20);
    if (cVar4 != '\0') goto LAB_00d165ce;
  }
  plVar7 = &g_02802688;
LAB_00d165ce:
  plVar7 = (int64_t *)*plVar7;
  if (plVar7 == (int64_t *)0x0) {
    *(void*)(this_ptr + 1) = 0;
    FUN_00d50b00();
    *this_ptr = arg1;
    *(void*)(this_ptr + 1) = 1;
  }
  else {
    FUN_00d50b00();
    plVar1 = (int64_t *)*param_2;
    local_78 = plVar7;
    uVar9 = (**(code **)(*plVar7 + 0x370))();
    local_40 = local_70;
    local_38 = 0;
    if (local_68 == '\0') {
      if (local_70 != 0) {
        uVar9 = FUN_00d50b00();
      }
    }
    else {
      local_68 = '\0';
    }
    local_38 = '\x01';
    uVar9 = (**(code **)(*plVar1 + 0x98))(uVar9,&local_40);
    puVar3 = local_60;
    if ((char)local_58 == '\0') {
      if (local_60 != (void*)0x0) {
        uVar9 = FUN_00d50b00();
        if (((char)local_58 != '\0') && (local_60 != (void*)0x0)) {
          uVar9 = FUN_00d50b20();
        }
      }
    }
    else {
      local_58 = local_58 & 0xffffff00;
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      uVar9 = FUN_00d50b20();
    }
    if ((local_68 != '\0') && (local_70 != 0)) {
      uVar9 = FUN_00d50b20();
    }
    lVar8 = g_0277cc08;
    if (puVar3 == (void*)0x0) {
      if (g_0277cc08 != 0) {
        uVar9 = FUN_00d50b00();
      }
      local_88 = lVar8;
      local_80 = '\x01';
      lVar8 = *(int64_t *)(arg1 + 0x20);
      local_58 = 1;
      local_60 = &g_024c5048;
      if (lVar8 != 0) {
        uVar9 = FUN_00d50b00();
      }
      local_48 = '\x01';
      local_50 = lVar8;
      FUN_00cc7b40(uVar9,&local_60);
      local_60 = &g_024c5048;
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      if ((local_80 != '\0') && (local_88 != 0)) {
        FUN_00d50b20();
      }
      *(void*)(this_ptr + 1) = 0;
      *this_ptr = 0;
      FUN_00d50b20();
    }
    else {
      puVar2 = *(void**)(arg1 + 0x10);
      if (puVar2 != (void*)0x0) {
        FUN_00d50b00();
      }
      switch(*(void*)(arg1 + 0x28)) {
      default:
        lVar8 = g_0277cbb0;
        break;
      case 1:
        lVar8 = g_0277cbb8;
        break;
      case 2:
        lVar8 = g_0277cbc0;
        break;
      case 3:
        lVar8 = g_0277cbc8;
        break;
      case 4:
        lVar8 = g_0277cbd0;
        break;
      case 5:
        lVar8 = g_0277cbd8;
        break;
      case 6:
        lVar8 = g_0277cbe0;
        break;
      case 7:
        lVar8 = g_02704028;
        break;
      case 8:
        lVar8 = g_0277cbf0;
        break;
      case 9:
        lVar8 = g_0277cbf8;
      }
      if (lVar8 == 0) {
        lVar8 = 0;
      }
      else {
        FUN_00d50b00();
      }
      puVar6 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar6 = &g_025718a8;
      puVar6[2] = 0;
      puVar6[3] = 0;
      *(void*)((int64_t)puVar6 + 0x1c) = 0;
      *(void*)((int64_t)puVar6 + 0x24) = 0;
      FUN_00d500e0();
      local_58 = local_58 & 0xffffff00;
      local_68 = 0;
      local_98 = puVar3;
      local_90 = 0;
      local_70 = lVar8;
      local_60 = puVar2;
      FUN_00d14950(&local_98,&local_70);
      *this_ptr = (int64_t)puVar6;
      *(void*)(this_ptr + 1) = 1;
      if (lVar8 != 0) {
        FUN_00d50b20();
      }
      if (puVar2 != (void*)0x0) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
      FUN_00d50b20();
    }
  }
  return;
}

