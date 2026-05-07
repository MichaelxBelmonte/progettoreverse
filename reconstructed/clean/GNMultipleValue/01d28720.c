// Function: FUN_01d28720
// Address: 01d28720
// Size: 1014 bytes
// Class: GNMultipleValue
// String references:
//   "GNMultipleValue"

uint64_t FUN_01d28720(uint64_t param_1,void*param_2)

{
  uint uVar1;
  int64_t lVar2;
  bool bVar3;
  char cVar4;
  uint32_t uVar5;
  uint uVar6;
  int iVar7;
  int64_t lVar8;
  int64_t *plVar9;
  uint64_t unaff_RBX;
  uint64_t uVar10;
  int64_t *arg1;
  int64_t this_ptr;
  int64_t lVar11;
  uint64_t local_d0;
  uint8_t local_c8;
  int64_t local_c0;
  uint8_t local_b8;
  uint64_t local_b0;
  uint8_t local_a8;
  int64_t local_a0;
  uint8_t local_98;
  uint64_t local_90;
  uint8_t local_88;
  uint64_t local_80;
  void*local_78;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_31;
  
  local_80 = param_1;
  local_78 = param_2;
  if (*(int *)(*(int64_t *)(this_ptr + 0x20) + 0xc) < 2) {
    iVar7 = FUN_01d26e20();
    if (iVar7 != -1) {
      local_a0 = *arg1;
      local_98 = 0;
      local_90 = *local_78;
      local_88 = 0;
      uVar6 = FUN_01d28c90(iVar7,&local_90,local_80);
      uVar10 = (uint64_t)uVar6;
      goto LAB_01d28a58;
    }
LAB_01d28a2b:
    uVar10 = CONCAT71((int7)((uint64_t)unaff_RBX >> 8),1);
    goto LAB_01d28a58;
  }
  plVar9 = (int64_t *)*arg1;
  // [STATIC_INIT: property registration]
  if (plVar9 == (int64_t *)0x0) {
LAB_01d28785:
    plVar9 = &g_02802688;
  }
  else {
    (**(code **)(*plVar9 + 0x360))();
    cVar4 = FUN_00e85ea0();
    plVar9 = arg1;
    if (cVar4 == '\0') goto LAB_01d28785;
  }
  lVar2 = *plVar9;
  local_31 = (char)plVar9[1];
  if ((local_31 == '\0') || (lVar2 == 0)) {
    if (lVar2 != 0) goto LAB_01d28809;
    lVar8 = *(int64_t *)(this_ptr + 0x20);
    if (*(int *)(lVar8 + 0xc) < 1) goto LAB_01d28a2b;
    lVar11 = 0;
    local_40 = lVar2;
    do {
      lVar2 = *(int64_t *)(*(int64_t *)(lVar8 + 0x10) + lVar11 * 8);
      local_48 = 0;
      if (lVar2 != 0) {
        FUN_00d50b00();
      }
      local_48 = '\x01';
      local_50 = lVar2;
      uVar6 = FUN_00d237a0();
      uVar10 = (uint64_t)uVar6;
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      local_c0 = *arg1;
      local_b8 = 0;
      local_b0 = *local_78;
      local_a8 = 0;
      cVar4 = FUN_01d28c90(uVar10,&local_b0,local_80);
      if (cVar4 == '\0') goto LAB_01d28a56;
      lVar11 = lVar11 + 1;
      lVar8 = *(int64_t *)(this_ptr + 0x20);
    } while (lVar11 < *(int *)(lVar8 + 0xc));
    bVar3 = true;
  }
  else {
    FUN_00d50b00();
LAB_01d28809:
    FUN_00e987b0();
    uVar6 = *(uint *)(local_70 + 0xc);
    uVar1 = *(uint *)(*(int64_t *)(this_ptr + 0x20) + 0xc);
    uVar10 = (uint64_t)uVar1;
    if (local_68 != '\0') {
      FUN_00d50b20();
    }
    if (uVar6 != uVar1) {
      if (local_31 != '\0') {
        FUN_00d50b20();
      }
LAB_01d28a56:
      uVar10 = 0;
      goto LAB_01d28a58;
    }
    lVar8 = *(int64_t *)(this_ptr + 0x20);
    if (*(int *)(lVar8 + 0xc) < 1) {
      bVar3 = false;
    }
    else {
      lVar11 = 0;
      local_40 = lVar2;
      do {
        lVar2 = *(int64_t *)(*(int64_t *)(lVar8 + 0x10) + lVar11 * 8);
        local_58 = 0;
        if (lVar2 != 0) {
          FUN_00d50b00();
        }
        local_58 = '\x01';
        local_60 = lVar2;
        uVar5 = FUN_00d237a0();
        if ((local_58 != '\0') && (local_60 != 0)) {
          FUN_00d50b20();
        }
        FUN_00e987b0();
        lVar2 = *(int64_t *)(*(int64_t *)(local_70 + 0x10) + lVar11 * 8);
        if (lVar2 != 0) {
          FUN_00d50b00();
        }
        local_d0 = *local_78;
        local_c8 = 0;
        uVar6 = FUN_01d28c90(uVar5,&local_d0,local_80);
        uVar10 = (uint64_t)uVar6;
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        if ((local_68 != '\0') && (local_70 != 0)) {
          FUN_00d50b20();
        }
        if ((char)uVar6 == '\0') {
          if (local_31 != '\0') {
            FUN_00d50b20();
          }
          goto LAB_01d28a56;
        }
        lVar11 = lVar11 + 1;
        lVar8 = *(int64_t *)(this_ptr + 0x20);
      } while (lVar11 < *(int *)(lVar8 + 0xc));
      bVar3 = false;
    }
  }
  uVar10 = CONCAT71((int7)(uVar10 >> 8),1);
  if ((local_31 != '\0') && (!bVar3)) {
    FUN_00d50b20();
  }
LAB_01d28a58:
  return uVar10 & 0xffffffff;
}

