// Function: FUN_01d0b670
// Address: 01d0b670
// Size: 1276 bytes
// Class: GNMultipleValue

void* FUN_01d0b670(void)

{
  int64_t lVar1;
  uint64_t uVar2;
  void*puVar3;
  int64_t arg1;
  void*this_ptr;
  bool bVar4;
  undefined7 uVar6;
  int64_t lVar5;
  int64_t lVar7;
  int64_t lVar8;
  char cVar9;
  uint32_t uVar10;
  uint64_t unaff_R15;
  bool bVar11;
  int64_t local_b0;
  char local_a8;
  uint64_t local_a0;
  int64_t local_98;
  int64_t local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  void*local_70;
  int64_t local_68;
  char local_60;
  int64_t local_58;
  uint32_t local_50;
  uint32_t local_4c;
  int64_t local_48;
  char local_40;
  int64_t local_38;
  
  lVar5 = *(int64_t *)(arg1 + 600);
  if (lVar5 != 0) {
    FUN_00d50b00();
  }
  FUN_00d95590();
  local_90 = local_68;
  local_88 = 0;
  if (local_60 == '\0') {
    if (local_68 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_60 = '\0';
  }
  local_88 = '\x01';
  FUN_00d97f20();
  lVar8 = local_48;
  if (local_48 == 0) {
    uVar10 = (uint32_t)CONCAT71((int7)((uint64_t)unaff_R15 >> 8),1);
  }
  else {
    if (local_40 == '\0') {
      FUN_00d50b00();
      uVar10 = 0;
      if ((local_40 == '\0') || (local_48 == 0)) goto LAB_01d0b734;
      FUN_00d50b20();
    }
    else {
      local_40 = '\0';
    }
    uVar10 = 0;
  }
LAB_01d0b734:
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  if (lVar5 != 0) {
    FUN_00d50b20();
  }
  local_b0 = lVar8;
  local_a8 = '\0';
  local_98 = lVar8;
  uVar2 = FUN_00d91000(1,&local_b0);
  lVar8 = local_48;
  if (local_48 == 0) {
    local_50 = (uint32_t)CONCAT71((int7)((uint64_t)uVar2 >> 8),1);
    lVar8 = 0;
    uVar2 = 0;
  }
  else {
    uVar6 = (undefined7)((uint64_t)lVar5 >> 8);
    if (local_40 == '\0') {
      FUN_00d50b00();
      local_50 = 0;
      uVar2 = CONCAT71(uVar6,1);
      if ((local_40 == '\0') || (local_48 == 0)) goto LAB_01d0b7eb;
      FUN_00d50b20();
    }
    else {
      local_40 = '\0';
    }
    uVar2 = CONCAT71(uVar6,1);
    local_50 = 0;
  }
LAB_01d0b7eb:
  if ((local_a8 != '\0') && (local_b0 != 0)) {
    FUN_00d50b20();
  }
  puVar3 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar3 = &g_02572358;
  (*g_02572370)();
  if (*(int *)(lVar8 + 0xc) < 1) {
    *this_ptr = puVar3;
    *(void*)(this_ptr + 1) = 1;
    local_38 = 0;
    bVar4 = false;
    if ((char)uVar10 != '\0' || local_98 == 0) goto LAB_01d0bb70;
  }
  else {
    lVar7 = 0;
    local_38 = 0;
    bVar4 = false;
    lVar5 = 0;
    local_a0 = uVar2;
    local_70 = puVar3;
    local_58 = lVar8;
    local_4c = uVar10;
    do {
      lVar8 = *(int64_t *)(*(int64_t *)(local_58 + 0x10) + lVar7 * 8);
      if (lVar5 != lVar8) {
        if (lVar8 != 0) {
          FUN_00d50b00();
        }
        bVar11 = lVar5 != 0;
        lVar5 = lVar8;
        if (bVar11) {
          FUN_00d50b20();
        }
      }
      FUN_00d95590();
      local_80 = local_68;
      local_78 = 0;
      if (local_60 == '\0') {
        if (local_68 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_60 = '\0';
      }
      local_78 = '\x01';
      FUN_00d97f20();
      lVar8 = local_48;
      if (local_48 == lVar5) {
LAB_01d0b96a:
        if ((local_40 != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        if (local_40 == '\0') {
          if (local_48 != 0) {
            FUN_00d50b00();
          }
          bVar11 = lVar5 != 0;
          lVar5 = lVar8;
          if (bVar11) {
            FUN_00d50b20();
          }
          goto LAB_01d0b96a;
        }
        if (lVar5 != 0) {
          FUN_00d50b20();
        }
        local_40 = '\0';
        lVar5 = lVar8;
      }
      if ((local_78 != '\0') && (local_80 != 0)) {
        FUN_00d50b20();
      }
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      FUN_01d09e90();
      lVar8 = local_48;
      if (local_48 == local_38) {
        lVar1 = local_48;
        if ((bVar4) || (local_48 == 0)) {
          lVar8 = local_38;
          bVar11 = bVar4;
          if ((local_40 != '\0') && (lVar8 = local_38, local_48 != 0)) {
            FUN_00d50b20();
            lVar1 = local_48;
            lVar8 = local_38;
          }
        }
        else {
          lVar8 = local_38;
          bVar11 = true;
          if (local_40 == '\0') {
            FUN_00d50b00();
            lVar1 = local_48;
            lVar8 = local_38;
          }
        }
      }
      else if (local_40 == '\0') {
        if (local_48 != 0) {
          FUN_00d50b00();
        }
        lVar1 = local_48;
        bVar11 = true;
        if (bVar4) {
          if (local_38 == 0) goto LAB_01d0ba50;
          FUN_00d50b20();
          lVar1 = local_48;
          bVar11 = true;
        }
      }
      else if ((bVar4) && (local_38 != 0)) {
        FUN_00d50b20();
        lVar1 = local_48;
        bVar11 = true;
      }
      else {
LAB_01d0ba50:
        lVar1 = local_48;
        bVar11 = true;
      }
      bVar4 = bVar11;
      local_48 = lVar8;
      local_38 = local_48;
      if (local_48 != 0) {
        local_40 = '\0';
        FUN_00d21140();
        lVar1 = local_48;
        if ((local_40 != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
          lVar1 = local_48;
        }
      }
      local_48 = lVar1;
      lVar8 = local_98;
      lVar7 = lVar7 + 1;
    } while (lVar7 < *(int *)(local_58 + 0xc));
    *this_ptr = local_70;
    *(void*)(this_ptr + 1) = 1;
    cVar9 = (char)local_4c;
    if (lVar5 == 0) {
      if (cVar9 != '\0' || local_98 == 0) goto LAB_01d0bb70;
    }
    else {
      FUN_00d50b20();
      if (cVar9 != '\0' || lVar8 == 0) goto LAB_01d0bb70;
    }
  }
  FUN_00d50b20();
LAB_01d0bb70:
  if ((bVar4) && (local_38 != 0)) {
    FUN_00d50b20();
  }
  if ((char)local_50 == '\0') {
    FUN_00d50b20();
  }
  return this_ptr;
}

