// Function: FUN_01e2a220
// Address: 01e2a220
// Size: 1275 bytes
// Class: GNUIDesignerDoc
// String references:
//   "%@.gnui"
// === GNUIDesignerDoc properties ===
//                   _localizer
//                   _connections
//                   _objectNames
//                   _objectCustomClassNames
//                   _objectsToRename
//                   _objectCustomAttributes


void FUN_01e2a220(uint64_t param_1,int64_t *param_2)

{
  int64_t lVar1;
  char cVar2;
  char cVar3;
  uint64_t uVar4;
  undefined7 uVar5;
  undefined7 extraout_var;
  uint32_t uVar6;
  int64_t *plVar7;
  int64_t *arg1;
  void*this_ptr;
  int64_t *plVar8;
  undefined7 uVar11;
  int64_t *plVar9;
  uint64_t uVar10;
  bool bVar12;
  int64_t local_e8;
  char local_e0;
  int64_t local_d8;
  char local_d0;
  int64_t local_c8;
  char local_c0;
  int64_t local_b8;
  char local_b0;
  int64_t local_a8;
  char local_a0;
  uint32_t local_94;
  int64_t local_90;
  char local_88;
  int64_t *local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  int64_t *local_60;
  uint local_58;
  int64_t local_50;
  char local_48;
  int64_t *local_40;
  uint64_t local_38;
  
  lVar1 = g_027f3810;
  local_e8 = *arg1;
  if ((local_e8 == 0) || (plVar8 = (int64_t *)*param_2, plVar8 == (int64_t *)0x0))
  goto LAB_01e2a6dd;
  local_e0 = '\0';
  if (g_027f3810 != 0) {
    FUN_00d50b00();
  }
  local_d8 = lVar1;
  local_d0 = '\x01';
  uVar4 = (**(code **)(*plVar8 + 0x4f0))(&local_d8,&local_e8);
  plVar8 = local_60;
  if (local_60 == (int64_t *)0x0) {
    uVar6 = (uint32_t)CONCAT71((int7)((uint64_t)param_2 >> 8),1);
    plVar8 = (int64_t *)0x0;
    local_38 = 0;
  }
  else {
    if ((char)local_58 == '\0') {
      uVar4 = FUN_00d50b00();
      uVar6 = 0;
      local_38 = CONCAT71((int7)((uint64_t)uVar4 >> 8),1);
      if (((char)local_58 == '\0') || (local_60 == (int64_t *)0x0)) goto LAB_01e2a2f9;
      uVar4 = FUN_00d50b20();
    }
    else {
      local_58 = local_58 & 0xffffff00;
    }
    local_38 = CONCAT71((int7)((uint64_t)uVar4 >> 8),1);
    uVar6 = 0;
  }
LAB_01e2a2f9:
  if ((local_d0 != '\0') && (local_d8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_e0 != '\0') && (local_e8 != 0)) {
    FUN_00d50b20();
  }
  if ((plVar8 == (int64_t *)0x0) || (cVar2 = (**(code **)(*plVar8 + 0x398))(), cVar2 == '\0')) {
    plVar9 = (int64_t *)*param_2;
    lVar1 = *arg1;
    local_58 = 1;
    local_60 = &g_024c5048;
    local_48 = 0;
    local_94 = uVar6;
    local_40 = plVar8;
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    local_48 = '\x01';
    local_50 = lVar1;
    FUN_00d8cb40();
    local_70 = local_90;
    local_68 = 0;
    if (local_88 == '\0') {
      if (local_90 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_88 = '\0';
    }
    plVar7 = local_40;
    local_68 = '\x01';
    local_c0 = '\0';
    local_c8 = 0;
    uVar4 = (**(code **)(*plVar9 + 0x4f0))(&local_c8,&local_70);
    plVar8 = local_80;
    uVar5 = (undefined7)((uint64_t)uVar4 >> 8);
    uVar11 = (undefined7)((uint64_t)plVar9 >> 8);
    if (local_80 == plVar7) {
      plVar8 = plVar7;
      if (((byte)local_94 & local_80 != (int64_t *)0x0) == 1) {
        if (local_78 != '\0') goto LAB_01e2a469;
        plVar9 = (int64_t *)CONCAT71(uVar11,1);
        FUN_00d50b00();
      }
      else {
        plVar9 = (int64_t *)(local_38 & 0xffffffff);
      }
LAB_01e2a4cb:
      plVar7 = plVar8;
      if ((local_78 == '\0') || (local_80 == (int64_t *)0x0)) {
        local_38 = (uint64_t)plVar9 & 0xffffffff;
      }
      else {
        FUN_00d50b20();
        local_38 = (uint64_t)plVar9 & 0xffffffff;
      }
    }
    else {
      if (local_78 == '\0') {
        if (local_80 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        plVar9 = (int64_t *)CONCAT71(uVar11,1);
        if (((byte)local_38 & plVar7 != (int64_t *)0x0) == 1) {
          FUN_00d50b20();
        }
        goto LAB_01e2a4cb;
      }
      bVar12 = plVar7 != (int64_t *)0x0;
      plVar7 = local_80;
      if (((byte)local_38 & bVar12) == 1) {
        FUN_00d50b20();
        uVar5 = extraout_var;
      }
LAB_01e2a469:
      local_78 = '\0';
      local_38 = CONCAT71(uVar5,1);
    }
    if ((local_c0 != '\0') && (local_c8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
    local_60 = &g_024c5048;
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((plVar7 == (int64_t *)0x0) || (cVar2 = (**(code **)(*plVar7 + 0x398))(), cVar2 == '\0')) {
      local_b8 = *arg1;
      local_b0 = '\0';
      local_a8 = 0;
      local_a0 = '\0';
      (**(code **)(*(int64_t *)*param_2 + 0x4f0))(&local_a8,&local_b8);
      plVar8 = local_60;
      uVar5 = (undefined7)((uint64_t)plVar9 >> 8);
      if (local_60 == plVar7) {
        if (((char)local_38 == '\0') && (local_60 != (int64_t *)0x0)) {
          plVar8 = plVar7;
          if ((char)local_58 != '\0') goto LAB_01e2a5ff;
          uVar10 = CONCAT71(uVar5,1);
          FUN_00d50b00();
        }
        else {
          uVar10 = local_38 & 0xffffffff;
          plVar8 = plVar7;
        }
LAB_01e2a665:
        if (((char)local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        if ((char)local_58 == '\0') {
          if (local_60 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
          uVar10 = CONCAT71(uVar5,1);
          if (((char)local_38 != '\0') && (plVar7 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          goto LAB_01e2a665;
        }
        if (((char)local_38 != '\0') && (plVar7 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
LAB_01e2a5ff:
        local_58 = local_58 & 0xffffff00;
        uVar10 = CONCAT71(uVar5,1);
      }
      if ((local_a0 != '\0') && (local_a8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_b0 != '\0') && (local_b8 != 0)) {
        FUN_00d50b20();
      }
      if (plVar8 == (int64_t *)0x0) {
LAB_01e2a6dd:
        *(void*)(this_ptr + 1) = 0;
        *this_ptr = 0;
        return;
      }
      local_38 = uVar10 & 0xffffffff;
      cVar3 = (**(code **)(*plVar8 + 0x398))();
      cVar2 = (char)uVar10;
      if (cVar3 == '\0') {
        *(void*)(this_ptr + 1) = 0;
        *this_ptr = 0;
        if (cVar2 == '\0') {
          return;
        }
        FUN_00d50b20();
        return;
      }
      *(void*)(this_ptr + 1) = 0;
    }
    else {
      *(void*)(this_ptr + 1) = 0;
      plVar8 = plVar7;
      cVar2 = (char)local_38;
    }
    if (cVar2 != '\0') goto LAB_01e2a354;
  }
  else {
    *(void*)(this_ptr + 1) = 0;
    if ((char)uVar6 == '\0') goto LAB_01e2a354;
  }
  FUN_00d50b00();
LAB_01e2a354:
  *this_ptr = plVar8;
  *(void*)(this_ptr + 1) = 1;
  return;
}

