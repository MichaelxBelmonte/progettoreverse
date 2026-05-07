// Function: FUN_00070b90
// Address: 00070b90
// Size: 1019 bytes
// Class: MDMetaWindowController

uint64_t FUN_00070b90(uint64_t param_1,int param_2)

{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t *plVar3;
  char cVar4;
  char cVar5;
  uint64_t uVar6;
  int64_t this_ptr;
  int64_t *plVar7;
  int64_t *plVar8;
  int64_t local_b0;
  char local_a8;
  int64_t *local_a0;
  char local_98;
  int64_t *local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  int64_t *local_70;
  char local_68;
  uint32_t local_5c;
  int64_t *local_58;
  uint32_t local_4c;
  int64_t *local_48;
  char local_40;
  char local_31;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar6 = FUN_00d30620();
  local_58 = local_48;
  if (local_40 == '\0') {
    if (local_48 != (int64_t *)0x0) {
      FUN_00d50b00();
      if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_00070bee;
    }
LAB_00070c3c:
    local_4c = (uint32_t)CONCAT71((int7)((uint64_t)uVar6 >> 8),1);
    cVar4 = '\0';
LAB_00070c93:
    plVar7 = g_026d7d28;
    if (g_026d7d28 == (int64_t *)0x0) {
      plVar7 = (int64_t *)0x0;
    }
    else {
      FUN_00d50b00();
      cVar4 = '\x01';
    }
  }
  else {
    if (local_48 == (int64_t *)0x0) goto LAB_00070c3c;
LAB_00070bee:
    lVar2 = g_026d7d20;
    if (g_026d7d20 != 0) {
      FUN_00d50b00();
    }
    local_b0 = lVar2;
    local_a8 = '\x01';
    FUN_00d30f20(param_1,&local_b0);
    plVar7 = local_48;
    if (local_48 == (int64_t *)0x0) {
      plVar7 = (int64_t *)0x0;
      cVar4 = '\0';
    }
    else if (local_40 == '\0') {
      FUN_00d50b00();
      cVar4 = '\x01';
      if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_40 = '\0';
      cVar4 = '\x01';
    }
    if ((local_a8 != '\0') && (local_b0 != 0)) {
      FUN_00d50b20();
    }
    local_4c = 0;
    if (plVar7 == (int64_t *)0x0) goto LAB_00070c93;
  }
  FUN_00d99300();
  plVar8 = local_48;
  if (local_48 == plVar7) {
    plVar8 = plVar7;
    local_31 = cVar4;
    if ((cVar4 == '\0') && (local_48 != (int64_t *)0x0)) {
      local_31 = '\x01';
      if (local_40 != '\0') goto LAB_00070d57;
      local_31 = '\x01';
      FUN_00d50b00();
    }
joined_r0x00070d47:
    if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    if (local_40 == '\0') {
      if (local_48 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      local_31 = '\x01';
      if ((cVar4 != '\0') && (plVar7 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      goto joined_r0x00070d47;
    }
    local_31 = '\x01';
    if ((cVar4 != '\0') && (plVar7 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
LAB_00070d57:
  FUN_01caea70();
  plVar7 = local_48;
  if (local_40 == '\0') {
    if (local_48 == (int64_t *)0x0) goto LAB_00070e03;
    FUN_00d50b00();
    if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else if (local_48 == (int64_t *)0x0) goto LAB_00070e03;
  FUN_00d99300();
  plVar3 = local_48;
  plVar1 = plVar7;
  if (plVar7 != local_48) {
    if (local_40 != '\0') {
      FUN_00d50b20();
      plVar7 = local_48;
      goto LAB_00070e03;
    }
    if (local_48 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    FUN_00d50b20();
    plVar7 = plVar3;
    plVar1 = local_48;
  }
  if ((local_40 != '\0') && (plVar1 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
LAB_00070e03:
  if (plVar7 != (int64_t *)0x0) {
    if (*(int64_t *)(this_ptr + 0x78) != 0) {
      local_98 = '\0';
      local_a0 = plVar8;
      cVar4 = FUN_00d90eb0();
      plVar1 = g_026d7d28;
      cVar5 = '\x01';
      if (cVar4 == '\0') {
        if (g_026d7d28 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        local_90 = plVar1;
        local_88 = '\x01';
        cVar4 = FUN_00d90eb0();
        lVar2 = g_026d7d98;
        cVar5 = '\x01';
        if (cVar4 == '\0') {
          if (g_026d7d98 != 0) {
            FUN_00d50b00();
          }
          local_80 = lVar2;
          local_78 = '\x01';
          cVar5 = (**(code **)(*plVar7 + 0x50))();
          if ((local_78 != '\0') && (local_80 != 0)) {
            FUN_00d50b20();
          }
        }
        if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      if ((local_98 != '\0') && (local_a0 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (cVar5 == '\0') {
        local_68 = '\0';
        local_70 = plVar7;
        cVar4 = FUN_007424c0(param_1,&local_5c);
        if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (cVar4 != '\0') {
          FUN_0010aad0(param_1,local_5c);
        }
      }
      else {
        FUN_0010a0e0();
      }
      FUN_000703d0();
    }
    FUN_00d50b20();
  }
  if ((char)local_4c == '\0') {
    FUN_00d50b20();
  }
  if ((local_31 != '\0') && (plVar8 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  return 1;
}

