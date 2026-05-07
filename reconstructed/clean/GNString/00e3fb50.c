// Function: FUN_00e3fb50
// Address: 00e3fb50
// Size: 3770 bytes
// Class: GNString
// String references:
//   "%@.%I"
//   "%@%@"
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_00e3fb50(int64_t *param_1,void*param_2)

{
  char cVar1;
  int iVar2;
  void*puVar3;
  uint64_t uVar4;
  void*puVar5;
  int64_t *arg1;
  int64_t this_ptr;
  int64_t *plVar6;
  void*puVar7;
  void*puVar8;
  undefined7 uVar10;
  uint64_t uVar9;
  uint7 uVar11;
  bool bVar12;
  void*local_1b8;
  void*local_e8;
  char local_e0;
  int64_t local_d8;
  char local_d0;
  void*local_c8;
  void*local_c0;
  char local_b8;
  void*local_b0;
  char local_a8;
  void*local_a0;
  uint64_t local_98;
  void*local_90;
  char local_88;
  void*local_80;
  uint local_78;
  void*local_70;
  char local_68;
  int local_60;
  uint32_t uStack_5c;
  char local_58;
  void*local_50;
  uint64_t local_48;
  void*local_40;
  char local_31;
  
  if (*(int64_t *)(this_ptr + 0x10) == 0) {
    local_40 = (void*)*param_2;
    if (local_40 == (void*)0x0) {
      local_48 = 0;
      local_40 = (void*)0x0;
      plVar6 = (int64_t *)*arg1;
    }
    else {
      local_48 = CONCAT71((int7)((uint64_t)local_40 >> 8),*(char *)(param_2 + 1));
      if (*(char *)(param_2 + 1) == '\0') goto LAB_00e3fc9d;
      FUN_00d50b00();
      plVar6 = (int64_t *)*arg1;
    }
    if (plVar6 != (int64_t *)0x0) goto LAB_00e3fca9;
LAB_00e3fc1c:
    local_31 = (char)arg1[1] != '\0';
    puVar3 = (void*)0x0;
  }
  else {
    local_e8 = (void*)*param_2;
    local_c0 = (void*)*(int64_t *)(this_ptr + 0x10);
    FUN_00083ea0(2,&local_e8);
    FUN_00d8cb40();
    local_40 = local_90;
    if (local_90 == (void*)0x0) {
      local_40 = (void*)0x0;
      local_48 = 0;
    }
    else if (local_88 == '\0') {
      uVar4 = FUN_00d50b00();
      local_48 = CONCAT71((int7)((uint64_t)uVar4 >> 8),1);
      if ((local_88 != '\0') && (local_90 != (void*)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_88 = '\0';
      local_48 = CONCAT71((int7)((uint64_t)local_90 >> 8),1);
    }
    local_80 = (void*)&g_0253d630;
    if ((local_58 != '\0') && (CONCAT44(uStack_5c,local_60) != 0)) {
      FUN_00d50b20();
    }
    local_80 = &g_024c5048;
    if ((local_68 != '\0') && (local_70 != (void*)0x0)) {
      FUN_00d50b20();
    }
LAB_00e3fc9d:
    plVar6 = (int64_t *)*arg1;
    if (plVar6 == (int64_t *)0x0) goto LAB_00e3fc1c;
LAB_00e3fca9:
    puVar3 = (void*)(**(code **)(*plVar6 + 0x10))();
    local_31 = (char)arg1[1] != '\0';
    if (((bool)local_31) && (puVar3 != (void*)0x0)) {
      FUN_00d50b00();
      local_31 = true;
    }
  }
  local_e8 = local_40;
  local_c8 = puVar3;
  local_c0 = puVar3;
  FUN_00083ea0(2,&local_e8);
  FUN_019f9540();
  puVar5 = local_90;
  if (local_88 == '\0') {
    if (((local_90 != (void*)0x0) && (FUN_00d50b00(), local_88 != '\0')) &&
       (local_90 != (void*)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_88 = '\0';
  }
  local_a0 = puVar5;
  local_80 = (void*)&g_0253d630;
  if ((local_58 != '\0') && (CONCAT44(uStack_5c,local_60) != 0)) {
    FUN_00d50b20();
  }
  local_80 = &g_024c5048;
  if ((local_68 != '\0') && (local_70 != (void*)0x0)) {
    FUN_00d50b20();
  }
  FUN_00e41440();
  puVar5 = local_80;
  if (((char)local_78 != '\0') && (local_80 != (void*)0x0)) {
    FUN_00d50b20();
  }
  if (puVar5 == (void*)0x0) {
    local_80 = local_40;
    local_78 = local_78 & 0xffffff00;
    cVar1 = FUN_00c9ff50();
    if (((char)local_78 != '\0') && (local_80 != (void*)0x0)) {
      FUN_00d50b20();
    }
    if (cVar1 == '\0') {
      local_80 = local_40;
      local_78 = local_78 & 0xffffff00;
      cVar1 = FUN_00c9ff50();
      if (((char)local_78 != '\0') && (local_80 != (void*)0x0)) {
        FUN_00d50b20();
      }
      puVar3 = local_40;
      if (cVar1 == '\0') {
        local_98 = 0;
        puVar3 = (void*)0x0;
        cVar1 = local_31;
        goto LAB_00e4010e;
      }
      FUN_000175c0();
      local_90 = local_e8;
      local_1b8 = puVar3;
      FUN_00083ea0(2,&local_1b8);
      FUN_019f9540();
      puVar5 = local_c0;
      if (local_b8 == '\0') {
        if (local_c0 != (void*)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_b8 = '\0';
      }
      local_90 = puVar5;
      local_88 = '\0';
      FUN_00ca0840();
      if ((local_88 != '\0') && (local_90 != (void*)0x0)) {
        FUN_00d50b20();
      }
      if (puVar5 != (void*)0x0) {
        FUN_00d50b20();
      }
      if ((local_b8 != '\0') && (local_c0 != (void*)0x0)) {
        FUN_00d50b20();
      }
      local_80 = (void*)&g_0253d630;
      if ((local_58 != '\0') && (CONCAT44(uStack_5c,local_60) != 0)) {
        FUN_00d50b20();
      }
      local_80 = &g_024c5048;
      if ((local_68 != '\0') && (local_70 != (void*)0x0)) {
        FUN_00d50b20();
      }
      if ((local_e0 != '\0') && (local_e8 != (void*)0x0)) {
        FUN_00d50b20();
      }
      puVar3 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar3 = &g_02575d80;
      uVar4 = (*g_02575d98)();
      local_98 = CONCAT71((int7)((uint64_t)uVar4 >> 8),1);
      FUN_00d46080();
      local_80 = local_40;
      local_78 = local_78 & 0xffffff00;
      FUN_00ca0840();
      if (((char)local_78 != '\0') && (local_80 != (void*)0x0)) {
        FUN_00d50b20();
      }
      puVar8 = local_40;
      local_78 = 2;
      local_80 = &g_024c5048;
      local_68 = 0;
      if (local_40 != (void*)0x0) {
        FUN_00d50b00();
      }
      local_70 = puVar8;
      local_68 = '\x01';
      local_80 = (void*)&g_025df2a0;
      local_60 = 2;
      FUN_00d8cb40();
      puVar7 = local_90;
      uVar10 = (undefined7)((uint64_t)puVar5 >> 8);
      if (local_90 == puVar8) {
        if (((char)local_48 == '\0') && (local_40 != (void*)0x0)) {
          puVar7 = local_40;
          if (local_88 != '\0') goto LAB_00e406ba;
          uVar9 = CONCAT71(uVar10,1);
          FUN_00d50b00();
        }
        else {
          uVar9 = local_48 & 0xffffffff;
        }
LAB_00e40948:
        cVar1 = local_31;
        if ((local_88 != '\0') && (local_90 != (void*)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        if (local_88 == '\0') {
          if (local_90 != (void*)0x0) {
            FUN_00d50b00();
          }
          uVar9 = CONCAT71(uVar10,1);
          if (((char)local_48 == '\0') || (local_40 == (void*)0x0)) {
            local_40 = puVar7;
          }
          else {
            local_40 = puVar7;
            FUN_00d50b20();
          }
          goto LAB_00e40948;
        }
        if (((char)local_48 != '\0') && (local_40 != (void*)0x0)) {
          local_40 = local_90;
          FUN_00d50b20();
        }
LAB_00e406ba:
        local_88 = '\0';
        uVar9 = CONCAT71(uVar10,1);
        cVar1 = local_31;
        local_40 = puVar7;
      }
      local_80 = &g_024c5048;
      if ((local_68 != '\0') && (local_70 != (void*)0x0)) {
        FUN_00d50b20();
      }
      local_80 = local_a0;
      local_78 = local_78 & 0xffffff00;
      uVar4 = FUN_00ca0840();
      if (((char)local_78 != '\0') && (local_80 != (void*)0x0)) {
        uVar4 = FUN_00d50b20();
      }
      local_98 = CONCAT71((int7)((uint64_t)uVar4 >> 8),1);
    }
    else {
      uVar4 = FUN_000175c0();
      puVar5 = local_80;
      if (local_80 == (void*)0x0) {
        local_98 = 0;
        local_50 = (void*)0x0;
        bVar12 = false;
joined_r0x00e400ae:
        if (((char)local_78 != '\0') &&
           (bVar12 = puVar5 != (void*)0x0, local_80 != (void*)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        if ((char)local_78 == '\0') {
          uVar4 = FUN_00d50b00();
          local_98 = CONCAT71((int7)((uint64_t)uVar4 >> 8),1);
          bVar12 = puVar5 != (void*)0x0;
          local_50 = puVar5;
          goto joined_r0x00e400ae;
        }
        local_78 = local_78 & 0xffffff00;
        local_98 = CONCAT71((int7)((uint64_t)uVar4 >> 8),1);
        local_50 = local_80;
        bVar12 = true;
      }
      iVar2 = FUN_00d45870();
      puVar3 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar3 = &g_02575d80;
      uVar4 = (*g_02575d98)();
      uVar10 = (undefined7)((uint64_t)uVar4 >> 8);
      if (puVar3 == local_50) {
        if (puVar5 == (void*)0x0) {
          local_98 = CONCAT71(uVar10,1);
          puVar3 = local_50;
        }
        else {
          FUN_00d50b20();
          puVar3 = local_50;
        }
      }
      else {
        local_98 = CONCAT71(uVar10,1);
        if ((bool)(bVar12 & local_50 != (void*)0x0)) {
          FUN_00d50b20();
        }
      }
      FUN_00d46080();
      local_80 = local_40;
      local_78 = local_78 & 0xffffff00;
      FUN_00ca0840();
      if (((char)local_78 != '\0') && (local_80 != (void*)0x0)) {
        FUN_00d50b20();
      }
      puVar5 = local_40;
      local_78 = 2;
      local_80 = &g_024c5048;
      local_68 = 0;
      if (local_40 != (void*)0x0) {
        FUN_00d50b00();
      }
      local_70 = puVar5;
      local_68 = '\x01';
      local_80 = (void*)&g_025df2a0;
      local_60 = iVar2 + 1;
      FUN_00d8cb40();
      puVar8 = local_90;
      uVar11 = (uint7)(uint3)((uint)(iVar2 + 1) >> 8);
      if (local_90 == puVar5) {
        if (((char)local_48 == '\0') && (local_40 != (void*)0x0)) {
          puVar8 = local_40;
          if (local_88 != '\0') goto LAB_00e407e7;
          uVar9 = CONCAT71(uVar11,1);
          FUN_00d50b00();
        }
        else {
          uVar9 = local_48 & 0xffffffff;
        }
LAB_00e40881:
        cVar1 = local_31;
        if ((local_88 != '\0') && (local_90 != (void*)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        if (local_88 == '\0') {
          if (local_90 != (void*)0x0) {
            FUN_00d50b00();
          }
          uVar9 = CONCAT71(uVar11,1);
          if (((char)local_48 == '\0') || (local_40 == (void*)0x0)) {
            local_40 = puVar8;
          }
          else {
            local_40 = puVar8;
            FUN_00d50b20();
          }
          goto LAB_00e40881;
        }
        if (((char)local_48 != '\0') && (local_40 != (void*)0x0)) {
          local_40 = local_90;
          FUN_00d50b20();
        }
LAB_00e407e7:
        local_88 = '\0';
        uVar9 = CONCAT71(uVar11,1);
        cVar1 = local_31;
        local_40 = puVar8;
      }
      local_80 = &g_024c5048;
      if ((local_68 != '\0') && (local_70 != (void*)0x0)) {
        FUN_00d50b20();
      }
      local_80 = local_a0;
      local_78 = local_78 & 0xffffff00;
      FUN_00ca0840();
      if (((char)local_78 != '\0') && (local_80 != (void*)0x0)) {
        FUN_00d50b20();
      }
    }
    local_48 = uVar9 & 0xffffffff;
    goto LAB_00e4010e;
  }
  uVar4 = FUN_00e41440();
  cVar1 = local_31;
  puVar5 = local_80;
  uVar10 = (undefined7)((uint64_t)puVar3 >> 8);
  if (local_80 == local_40) {
    if (((char)local_48 == '\0') && (local_80 != (void*)0x0)) {
      puVar5 = local_40;
      if ((char)local_78 != '\0') goto LAB_00e3ff36;
      uVar9 = CONCAT71(uVar10,1);
      FUN_00d50b00();
    }
    else {
      uVar9 = local_48 & 0xffffffff;
    }
LAB_00e400c5:
    if (((char)local_78 == '\0') || (local_80 == (void*)0x0)) {
      local_48 = uVar9 & 0xffffffff;
    }
    else {
      FUN_00d50b20();
      local_48 = uVar9 & 0xffffffff;
    }
  }
  else {
    if ((char)local_78 == '\0') {
      if (local_80 != (void*)0x0) {
        FUN_00d50b00();
      }
      uVar9 = CONCAT71(uVar10,1);
      if (((char)local_48 == '\0') || (local_40 == (void*)0x0)) {
        local_40 = puVar5;
      }
      else {
        local_40 = puVar5;
        FUN_00d50b20();
      }
      goto LAB_00e400c5;
    }
    if (((char)local_48 != '\0') && (local_40 != (void*)0x0)) {
      local_40 = local_80;
      uVar4 = FUN_00d50b20();
    }
LAB_00e3ff36:
    local_78 = local_78 & 0xffffff00;
    local_48 = CONCAT71((int7)((uint64_t)uVar4 >> 8),1);
    local_40 = puVar5;
  }
  local_98 = 0;
  puVar3 = (void*)0x0;
LAB_00e4010e:
  local_d0 = 0;
  if ((int64_t *)*arg1 == (int64_t *)0x0) {
    local_d8 = 0;
  }
  else {
    local_d8 = (**(code **)(*(int64_t *)*arg1 + 0x10))();
  }
  local_d0 = '\0';
  local_80 = local_40;
  local_78 = local_78 & 0xffffff00;
  FUN_00ca0840();
  if (((char)local_78 != '\0') && (local_80 != (void*)0x0)) {
    FUN_00d50b20();
  }
  if ((local_d0 != '\0') && (local_d8 != 0)) {
    FUN_00d50b20();
  }
  if (*param_1 == 0) {
    FUN_00d8ede0();
    local_b0 = local_90;
    local_a8 = 0;
    if (local_88 == '\0') {
      if (local_90 != (void*)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_88 = '\0';
    }
    local_a8 = '\x01';
    local_80 = local_40;
    local_78 = local_78 & 0xffffff00;
    FUN_00ca0840();
    puVar5 = local_c8;
    if (((char)local_78 != '\0') && (local_80 != (void*)0x0)) {
      FUN_00d50b20();
    }
    if ((local_a8 != '\0') && (local_b0 != (void*)0x0)) {
      FUN_00d50b20();
    }
    if ((local_88 != '\0') && (local_90 != (void*)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_80 = local_40;
    local_78 = local_78 & 0xffffff00;
    FUN_00ca0840();
    puVar5 = local_c8;
    if (((char)local_78 != '\0') && (local_80 != (void*)0x0)) {
      FUN_00d50b20();
    }
  }
  local_80 = local_40;
  local_78 = local_78 & 0xffffff00;
  FUN_00ca0840();
  if (((char)local_78 != '\0') && (local_80 != (void*)0x0)) {
    FUN_00d50b20();
  }
  if (local_a0 != (void*)0x0) {
    FUN_00d50b20();
  }
  if ((cVar1 != '\0') && (puVar5 != (void*)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_98 != '\0') && (puVar3 != (void*)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_48 != '\0') && (local_40 != (void*)0x0)) {
    FUN_00d50b20();
  }
  return;
}

