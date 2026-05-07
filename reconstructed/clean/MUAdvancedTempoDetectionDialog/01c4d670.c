// Function: FUN_01c4d670
// Address: 01c4d670
// Size: 1225 bytes
// Class: MUAdvancedTempoDetectionDialog
// === MUAdvancedTempoDetectionDialog properties ===
//                   _highlightedBeatValuePoint
//                   _setCursorTimeDisabled
//                   _zoomToFitAverageTempoDisabled
//                   _skipZoomToFitAverageTempo


void FUN_01c4d670(uint32_t param_1,uint32_t param_2)

{
  int64_t *plVar1;
  uint64_t uVar2;
  int64_t *plVar3;
  uint64_t uVar4;
  int64_t lVar5;
  char *pcVar6;
  int64_t lVar7;
  int64_t this_ptr;
  uint64_t uVar8;
  uint32_t uVar9;
  uint64_t local_d0;
  uint8_t local_c8;
  uint64_t local_c0;
  uint64_t local_b8;
  int64_t *local_b0;
  char local_a8;
  int64_t local_98;
  char local_90;
  int64_t *local_88;
  char local_80;
  uint64_t local_78;
  int64_t *local_70;
  char local_68 [8];
  int64_t *local_60;
  int local_58;
  uint64_t local_54;
  char local_48;
  undefined7 uStack_47;
  char local_40;
  int64_t local_38;
  
  if (*(int *)(this_ptr + 0x1c8) == 1) {
    lVar7 = *(int64_t *)(this_ptr + 0x1d8);
    if (lVar7 == 0) {
      local_78 = 0;
      lVar7 = 0;
    }
    else {
      local_78 = 0;
      uVar2 = FUN_00d50b00();
      local_78 = CONCAT71((int7)((uint64_t)uVar2 >> 8),1);
    }
    plVar3 = (int64_t *)FUN_00e8fc40();
    FUN_00022d50();
    (**(code **)(*plVar3 + 0x18))();
    lVar5 = *(int64_t *)(this_ptr + 0x1d8);
    *(int64_t **)(this_ptr + 0x1d8) = plVar3;
    if (lVar5 != 0) {
      FUN_00d50b20();
    }
    lVar5 = *(int64_t *)(this_ptr + 0x200);
    uVar4 = (uint64_t)*(uint *)(lVar5 + 0xc);
    local_38 = lVar7;
    if (0 < (int)*(uint *)(lVar5 + 0xc)) {
      uVar8 = 0;
      do {
        local_c0 = uVar8 + 1;
        if ((int64_t)local_c0 < (int64_t)(int)uVar4) {
          local_b8 = *(void*)(*(int64_t *)(lVar5 + 0x10) + 8 + uVar8 * 8);
        }
        else {
          local_b8 = 0;
        }
        uVar9 = FUN_01c82aa0();
        local_90 = 0;
        local_98 = CONCAT71(uStack_47,local_48);
        if (local_40 == '\0') {
          if (local_98 != 0) {
            uVar9 = FUN_00d50b00();
          }
        }
        else {
          local_40 = '\0';
        }
        local_90 = '\x01';
        FUN_01c4de00(uVar9,&local_98);
        plVar3 = local_70;
        if (local_68[0] == '\0') {
          if (((local_70 != (int64_t *)0x0) && (FUN_00d50b00(), local_68[0] != '\0')) &&
             (local_70 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_68[0] = '\0';
        }
        if ((local_90 != '\0') && (local_98 != 0)) {
          FUN_00d50b20();
        }
        if ((local_40 != '\0') && (CONCAT71(uStack_47,local_48) != 0)) {
          FUN_00d50b20();
        }
        if (plVar3 == (int64_t *)0x0) {
          plVar3 = (int64_t *)FUN_00e8fc40();
          FUN_0006daf0();
          *plVar3 = (int64_t)&g_0266d110;
          plVar3[2] = (int64_t)&g_0266da38;
          FUN_00d500e0();
        }
        else {
          FUN_01c82aa0();
          plVar1 = (int64_t *)CONCAT71(uStack_47,local_48);
          if (local_40 == '\0') {
            if (plVar1 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_40 = '\0';
          }
          local_68[0] = '\0';
          local_70 = plVar1;
          FUN_00ca13a0();
          if ((local_68[0] != '\0') && (local_70 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (plVar1 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
          if ((local_40 != '\0') && (CONCAT71(uStack_47,local_48) != 0)) {
            FUN_00d50b20();
          }
        }
        local_d0 = local_b8;
        local_c8 = 0;
        FUN_01c4c1c0(param_1,param_2,&local_d0,uVar8 & 0xffffffff);
        local_a8 = '\0';
        local_b0 = plVar3;
        uVar9 = FUN_01c82aa0();
        local_88 = local_70;
        local_80 = 0;
        if (local_68[0] == '\0') {
          if (local_70 != (int64_t *)0x0) {
            uVar9 = FUN_00d50b00();
          }
        }
        else {
          local_68[0] = '\0';
        }
        local_80 = '\x01';
        FUN_01c4deb0(uVar9,&local_88);
        if ((local_80 != '\0') && (local_88 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_68[0] != '\0') && (local_70 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_a8 != '\0') && (local_b0 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar3 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        lVar5 = *(int64_t *)(this_ptr + 0x200);
        uVar4 = (uint64_t)*(int *)(lVar5 + 0xc);
        uVar8 = local_c0;
      } while ((int64_t)local_c0 < (int64_t)uVar4);
    }
    lVar7 = local_38;
    FUN_01c464b0();
  }
  else {
    lVar7 = *(int64_t *)(this_ptr + 0x1d8);
    if (lVar7 == 0) {
      return;
    }
    local_78 = 0;
    uVar2 = FUN_00d50b00();
    local_78 = CONCAT71((int7)((uint64_t)uVar2 >> 8),1);
  }
  if (lVar7 == 0) {
    return;
  }
  FUN_00ca1380();
  plVar3 = local_70;
  pcVar6 = &local_48;
  if (local_68[0] != '\0') {
    pcVar6 = local_68;
  }
  local_48 = local_68[0];
  *pcVar6 = '\0';
  if ((local_68[0] != '\0') && (local_70 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (local_48 == '\0') {
    if (plVar3 == (int64_t *)0x0) goto LAB_01c4db45;
    FUN_00d50b00();
  }
  else if (plVar3 == (int64_t *)0x0) goto LAB_01c4db45;
  local_68[0] = '\0';
  local_70 = (int64_t *)0x0;
  local_60 = plVar3;
  local_54 = 0;
  for (lVar7 = 0; local_58 = (int)lVar7, local_58 < *(int *)((int64_t)plVar3 + 0xc);
      lVar7 = lVar7 + 1) {
    local_70 = *(int64_t **)(plVar3[2] + lVar7 * 8);
    (**(code **)(*local_70 + 0x478))();
  }
  FUN_000a9680();
  FUN_00d50b20();
LAB_01c4db45:
  FUN_00ca1340();
  if ((char)local_78 != '\0') {
    FUN_00d50b20();
  }
  return;
}

