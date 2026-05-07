// Function: FUN_01d27270
// Address: 01d27270
// Size: 941 bytes
// Class: GNMultipleValue
// String references:
//   "GNMultipleValue"

void FUN_01d27270(uint64_t param_1,void*param_2)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  uint32_t uVar4;
  int iVar5;
  int64_t lVar6;
  int64_t *plVar7;
  int64_t *arg1;
  int64_t this_ptr;
  int64_t lVar8;
  uint64_t local_c8;
  uint8_t local_c0;
  int64_t local_b8;
  uint8_t local_b0;
  uint64_t local_a8;
  uint8_t local_a0;
  int64_t local_98;
  uint8_t local_90;
  uint64_t local_88;
  uint8_t local_80;
  void*local_78;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_31;
  
  local_78 = param_2;
  if (*(int *)(*(int64_t *)(this_ptr + 0x20) + 0xc) < 2) {
    iVar5 = FUN_01d26e20();
    if (iVar5 == -1) {
      return;
    }
    local_98 = *arg1;
    local_90 = 0;
    local_88 = *local_78;
    local_80 = 0;
    FUN_01d27780(iVar5,&local_88);
    return;
  }
  plVar7 = (int64_t *)*arg1;
  if ((g_0277a3a0 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
    g_026d3c38 = FUN_00d4fe50();
    g_026d3c20 = "GNMultipleValue";
    g_026d3c28 = 0x18;
    g_026d3c30 = FUN_00050c70;
    g_026d3c40 = 0;
    ram_00000000026d3c48 = 0;
    g_026d3c50 = 0;
    ram_00000000026d3c58 = 0;
    g_026d3c60 = 0;
    ram_00000000026d3c68 = 0;
    g_026d3c70 = 0;
    ram_00000000026d3c78 = 0;
    g_026d3c80 = 0;
    ram_00000000026d3c88 = 0;
    g_026d3c90 = 0;
    ram_00000000026d3c98 = 0;
    g_026d3ca0 = 0;
    ram_00000000026d3ca8 = 0;
    g_026d3cb0 = 0;
    ram_00000000026d3cb8 = 0;
    g_026d3cc0 = 0;
    ram_00000000026d3cc8 = 0;
    g_026d3cd0 = 0;
    ram_00000000026d3cd8 = 0;
    g_026d3ce0 = 0;
    ___cxa_guard_release();
  }
  if (plVar7 == (int64_t *)0x0) {
LAB_01d272d0:
    plVar7 = &g_02802688;
  }
  else {
    (**(code **)(*plVar7 + 0x360))();
    cVar3 = FUN_00e85ea0();
    plVar7 = arg1;
    if (cVar3 == '\0') goto LAB_01d272d0;
  }
  local_40 = *plVar7;
  local_31 = (char)plVar7[1];
  if ((local_31 == '\0') || (local_40 == 0)) {
    if (local_40 == 0) {
      lVar6 = *(int64_t *)(this_ptr + 0x20);
      if (*(int *)(lVar6 + 0xc) < 1) {
        return;
      }
      lVar8 = 0;
      do {
        lVar6 = *(int64_t *)(*(int64_t *)(lVar6 + 0x10) + lVar8 * 8);
        local_48 = 0;
        if (lVar6 != 0) {
          FUN_00d50b00();
        }
        local_48 = '\x01';
        local_50 = lVar6;
        uVar4 = FUN_00d237a0();
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        local_b8 = *arg1;
        local_b0 = 0;
        local_a8 = *local_78;
        local_a0 = 0;
        FUN_01d27780(uVar4,&local_a8);
        lVar8 = lVar8 + 1;
        lVar6 = *(int64_t *)(this_ptr + 0x20);
      } while (lVar8 < *(int *)(lVar6 + 0xc));
      bVar2 = true;
      goto joined_r0x01d27568;
    }
  }
  else {
    FUN_00d50b00();
  }
  FUN_00e987b0();
  iVar5 = *(int *)(local_70 + 0xc);
  iVar1 = *(int *)(*(int64_t *)(this_ptr + 0x20) + 0xc);
  if (local_68 != '\0') {
    FUN_00d50b20();
  }
  if ((iVar5 == iVar1) && (lVar6 = *(int64_t *)(this_ptr + 0x20), 0 < *(int *)(lVar6 + 0xc))) {
    lVar8 = 0;
    do {
      lVar6 = *(int64_t *)(*(int64_t *)(lVar6 + 0x10) + lVar8 * 8);
      local_58 = 0;
      if (lVar6 != 0) {
        FUN_00d50b00();
      }
      local_58 = '\x01';
      local_60 = lVar6;
      uVar4 = FUN_00d237a0();
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      FUN_00e987b0();
      lVar6 = *(int64_t *)(*(int64_t *)(local_70 + 0x10) + lVar8 * 8);
      if (lVar6 != 0) {
        FUN_00d50b00();
      }
      local_c8 = *local_78;
      local_c0 = 0;
      FUN_01d27780(uVar4,&local_c8);
      if (lVar6 != 0) {
        FUN_00d50b20();
      }
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      lVar8 = lVar8 + 1;
      lVar6 = *(int64_t *)(this_ptr + 0x20);
    } while (lVar8 < *(int *)(lVar6 + 0xc));
  }
  bVar2 = false;
joined_r0x01d27568:
  if ((local_31 != '\0') && (!bVar2)) {
    FUN_00d50b20();
  }
  return;
}

