// Function: FUN_00e67a40
// Address: 00e67a40
// Size: 3570 bytes
// Class: GNString
// String references:
//   "%I"
//   "%@"
//   "0X%llX"
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_00e67a40(uint64_t param_1,char param_2)

{
  int64_t lVar1;
  int64_t *plVar2;
  bool bVar3;
  bool bVar4;
  void*puVar5;
  void*puVar6;
  void*puVar7;
  void*puVar8;
  char cVar9;
  int64_t *plVar10;
  int64_t arg1;
  void*this_ptr;
  int64_t local_178;
  char local_170;
  void*local_70;
  uint local_68;
  uint32_t local_64;
  void*local_60;
  char local_58;
  void*local_50;
  uint local_48;
  int64_t local_40;
  char local_38;
  
  plVar10 = (int64_t *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar10 + 0x18))();
  if (*(int64_t **)(arg1 + 0x20) != (int64_t *)0x0) {
    (**(code **)(**(int64_t **)(arg1 + 0x20) + 0x370))();
    local_48 = 1;
    local_50 = &g_024c5048;
    local_38 = 0;
    if (local_178 != 0) {
      FUN_00d50b00();
    }
    local_40 = local_178;
    local_38 = '\x01';
    FUN_00d8cb40();
    puVar6 = local_70;
    puVar5 = g_027878d0;
    if ((char)local_68 == '\0') {
      if (local_70 != (void*)0x0) {
        FUN_00d50b00();
        puVar5 = g_027878d0;
      }
    }
    else {
      local_68 = local_68 & 0xffffff00;
    }
    g_027878d0 = puVar5;
    if (puVar5 != (void*)0x0) {
      FUN_00d50b00();
    }
    local_58 = '\0';
    local_60 = puVar5;
    FUN_00ca0840();
    if ((local_58 != '\0') && (local_60 != (void*)0x0)) {
      FUN_00d50b20();
    }
    if (puVar5 != (void*)0x0) {
      FUN_00d50b20();
    }
    if (puVar6 != (void*)0x0) {
      FUN_00d50b20();
    }
    if (((char)local_68 != '\0') && (local_70 != (void*)0x0)) {
      FUN_00d50b20();
    }
    local_50 = &g_024c5048;
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((local_170 != '\0') && (local_178 != 0)) {
      FUN_00d50b20();
    }
    local_64 = (**(code **)(**(int64_t **)(arg1 + 0x20) + 0x378))();
    local_68 = 1;
    local_70 = &g_024cc6f0;
    FUN_00d8cb40(&g_024cc6f0,&local_70);
    puVar8 = local_60;
    puVar5 = g_02784ab0;
    if (local_58 == '\0') {
      if (local_60 != (void*)0x0) {
        FUN_00d50b00();
        puVar5 = g_02784ab0;
      }
    }
    else {
      local_58 = '\0';
    }
    g_02784ab0 = puVar5;
    if (puVar5 != (void*)0x0) {
      FUN_00d50b00();
    }
    local_48 = local_48 & 0xffffff00;
    local_50 = (void*)puVar5;
    FUN_00ca0840();
    if (((char)local_48 != '\0') && (local_50 != (void*)0x0)) {
      FUN_00d50b20();
    }
    if (puVar5 != (void*)0x0) {
      FUN_00d50b20();
    }
    if (puVar8 != (void*)0x0) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != (void*)0x0)) {
      FUN_00d50b20();
    }
  }
  puVar5 = g_02784ab0;
  if (param_2 == '\0') {
    if (g_02784ab0 != (void*)0x0) {
      FUN_00d50b00();
    }
    FUN_00e61ae0();
    puVar6 = local_50;
    if (((char)local_48 == '\0') && (local_50 != (void*)0x0)) {
      FUN_00d50b00();
    }
    if (puVar5 != (void*)0x0) {
      FUN_00d50b20();
    }
    puVar5 = g_02784ab0;
    if (puVar6 != (void*)0x0) {
      if (g_02784ab0 != (void*)0x0) {
        FUN_00d50b00();
      }
      local_50 = (void*)puVar5;
      local_48 = local_48 & 0xffffff00;
      FUN_00ca0840();
      if (((char)local_48 != '\0') && (local_50 != (void*)0x0)) {
        FUN_00d50b20();
      }
      if (puVar5 != (void*)0x0) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    puVar5 = g_02787870;
    if (g_02787870 != (void*)0x0) {
      FUN_00d50b00();
    }
    FUN_00e61ae0();
    puVar6 = local_50;
    if (((char)local_48 == '\0') && (local_50 != (void*)0x0)) {
      FUN_00d50b00();
    }
    if (puVar5 != (void*)0x0) {
      FUN_00d50b20();
    }
    puVar5 = g_02787870;
    if (puVar6 != (void*)0x0) {
      if (g_02787870 != (void*)0x0) {
        FUN_00d50b00();
      }
      local_50 = (void*)puVar5;
      local_48 = local_48 & 0xffffff00;
      FUN_00ca0840();
      if (((char)local_48 != '\0') && (local_50 != (void*)0x0)) {
        FUN_00d50b20();
      }
      if (puVar5 != (void*)0x0) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    puVar5 = g_027878e0;
    if (g_027878e0 != (void*)0x0) {
      FUN_00d50b00();
    }
    FUN_00e61ae0();
    puVar6 = local_50;
    if (((char)local_48 == '\0') && (local_50 != (void*)0x0)) {
      FUN_00d50b00();
    }
    if (puVar5 != (void*)0x0) {
      FUN_00d50b20();
    }
    puVar5 = g_027878e0;
    if (puVar6 != (void*)0x0) {
      if (g_027878e0 != (void*)0x0) {
        FUN_00d50b00();
      }
      local_50 = (void*)puVar5;
      local_48 = local_48 & 0xffffff00;
      FUN_00ca0840();
      if (((char)local_48 != '\0') && (local_50 != (void*)0x0)) {
        FUN_00d50b20();
      }
      if (puVar5 != (void*)0x0) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    puVar5 = g_027878e8;
    if (g_027878e8 != (void*)0x0) {
      FUN_00d50b00();
    }
    FUN_00e61ae0();
    puVar6 = local_50;
    if (((char)local_48 == '\0') && (local_50 != (void*)0x0)) {
      FUN_00d50b00();
    }
    if (puVar5 != (void*)0x0) {
      FUN_00d50b20();
    }
    puVar5 = g_027878e8;
    if (puVar6 != (void*)0x0) {
      if (g_027878e8 != (void*)0x0) {
        FUN_00d50b00();
      }
      local_50 = (void*)puVar5;
      local_48 = local_48 & 0xffffff00;
      FUN_00ca0840();
      if (((char)local_48 != '\0') && (local_50 != (void*)0x0)) {
        FUN_00d50b20();
      }
      if (puVar5 != (void*)0x0) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
  }
  else {
    FUN_00e7e010();
    puVar5 = local_60;
    if (local_58 == '\0') {
      if (local_60 != (void*)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_58 = '\0';
    }
    local_50 = (void*)puVar5;
    local_48 = local_48 & 0xffffff00;
    FUN_00ca1b70();
    if (((char)local_48 != '\0') && (local_50 != (void*)0x0)) {
      FUN_00d50b20();
    }
    if (puVar5 != (void*)0x0) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != (void*)0x0)) {
      FUN_00d50b20();
    }
  }
  lVar1 = *(int64_t *)(arg1 + 0x28);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  local_48 = local_48 & 0xffffff00;
  local_50 = (void*)lVar1;
  FUN_00ca1b70();
  if (((char)local_48 != '\0') && (local_50 != (void*)0x0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  FUN_00dfd1c0();
  puVar5 = local_60;
  lVar1 = g_027855c0;
  if (local_58 == '\0') {
    if (local_60 != (void*)0x0) {
      FUN_00d50b00();
      lVar1 = g_027855c0;
    }
  }
  else {
    local_58 = '\0';
  }
  g_027855c0 = lVar1;
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  local_48 = local_48 & 0xffffff00;
  local_50 = (void*)lVar1;
  FUN_00ca0840();
  if (((char)local_48 != '\0') && (local_50 != (void*)0x0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if (puVar5 != (void*)0x0) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != (void*)0x0)) {
    FUN_00d50b20();
  }
  lVar1 = g_027878f0;
  if (g_027878f0 != 0) {
    FUN_00d50b00();
  }
  puVar5 = g_027855a0;
  if (g_027855a0 != (void*)0x0) {
    FUN_00d50b00();
  }
  local_50 = (void*)puVar5;
  local_48 = local_48 & 0xffffff00;
  FUN_00ca0840();
  if (((char)local_48 != '\0') && (local_50 != (void*)0x0)) {
    FUN_00d50b20();
  }
  if (puVar5 != (void*)0x0) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  bVar4 = true;
  bVar3 = true;
  if ((*(int64_t *)(arg1 + 0x20) != 0) &&
     (FUN_00e00960(), puVar6 = local_50, local_50 != (void*)0x0)) {
    if ((char)local_48 == '\0') {
      FUN_00d50b00();
      if (((char)local_48 != '\0') && (local_50 != (void*)0x0)) {
        FUN_00d50b20();
      }
    }
    lVar1 = *(int64_t *)((int64_t)puVar6 + 0x10);
    if (lVar1 != 0) {
      FUN_00d50b00();
      FUN_00d25fa0();
      puVar7 = local_50;
      if ((char)local_48 == '\0') {
        if (local_50 != (void*)0x0) {
          FUN_00d50b00();
          if (((char)local_48 != '\0') && (local_50 != (void*)0x0)) {
            FUN_00d50b20();
          }
        }
      }
      else {
        local_48 = local_48 & 0xffffff00;
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      if (puVar7 != (void*)0x0) {
        plVar2 = *(int64_t **)(arg1 + 0x20);
        FUN_00d28390();
        cVar9 = (**(code **)(*plVar2 + 0x380))();
        lVar1 = g_02787900;
        if (cVar9 == '\0') {
          lVar1 = *(int64_t *)((int64_t)puVar6 + 0x10);
          if (lVar1 != 0) {
            FUN_00d50b00();
          }
          puVar5 = g_02787870;
          if (g_02787870 != (void*)0x0) {
            FUN_00d50b00();
          }
          local_50 = (void*)puVar5;
          local_48 = local_48 & 0xffffff00;
          FUN_00ca0840();
          if (((char)local_48 != '\0') && (local_50 != (void*)0x0)) {
            FUN_00d50b20();
          }
          if (puVar5 != (void*)0x0) {
            FUN_00d50b20();
          }
          if (lVar1 != 0) {
            FUN_00d50b20();
          }
        }
        else {
          if (g_02787900 != 0) {
            FUN_00d50b00();
          }
          puVar5 = g_027855a0;
          if (g_027855a0 != (void*)0x0) {
            FUN_00d50b00();
          }
          local_50 = (void*)puVar5;
          local_48 = local_48 & 0xffffff00;
          FUN_00ca0840();
          if (((char)local_48 != '\0') && (local_50 != (void*)0x0)) {
            FUN_00d50b20();
          }
          if (puVar5 != (void*)0x0) {
            FUN_00d50b20();
          }
          if (lVar1 != 0) {
            FUN_00d50b20();
          }
          lVar1 = *(int64_t *)((int64_t)puVar6 + 0x10);
          if (lVar1 != 0) {
            FUN_00d50b00();
          }
          puVar5 = g_027855b8;
          if (g_027855b8 != (void*)0x0) {
            FUN_00d50b00();
          }
          local_50 = (void*)puVar5;
          local_48 = local_48 & 0xffffff00;
          FUN_00ca0840();
          if (((char)local_48 != '\0') && (local_50 != (void*)0x0)) {
            FUN_00d50b20();
          }
          if (puVar5 != (void*)0x0) {
            FUN_00d50b20();
          }
          if (lVar1 != 0) {
            FUN_00d50b20();
          }
        }
        FUN_00d50b20();
      }
    }
    lVar1 = g_02787908;
    if (*(int64_t *)((int64_t)puVar6 + 0x18) != 0) {
      if (g_02787908 != 0) {
        FUN_00d50b00();
      }
      puVar5 = g_027855a0;
      if (g_027855a0 != (void*)0x0) {
        FUN_00d50b00();
      }
      local_50 = (void*)puVar5;
      local_48 = local_48 & 0xffffff00;
      FUN_00ca0840();
      if (((char)local_48 != '\0') && (local_50 != (void*)0x0)) {
        FUN_00d50b20();
      }
      if (puVar5 != (void*)0x0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      local_48 = 1;
      local_50 = (void*)&g_024da828;
      local_40 = *(int64_t *)((int64_t)puVar6 + 0x18);
      FUN_00d8cb40();
      puVar7 = local_70;
      puVar5 = g_02787910;
      if ((char)local_68 == '\0') {
        if (local_70 != (void*)0x0) {
          FUN_00d50b00();
          puVar5 = g_02787910;
        }
      }
      else {
        local_68 = local_68 & 0xffffff00;
      }
      g_02787910 = puVar5;
      if (puVar5 != (void*)0x0) {
        FUN_00d50b00();
      }
      local_58 = '\0';
      local_60 = puVar5;
      FUN_00ca0840();
      if ((local_58 != '\0') && (local_60 != (void*)0x0)) {
        FUN_00d50b20();
      }
      if (puVar5 != (void*)0x0) {
        FUN_00d50b20();
      }
      if (puVar7 != (void*)0x0) {
        FUN_00d50b20();
      }
      if (((char)local_68 != '\0') && (local_70 != (void*)0x0)) {
        FUN_00d50b20();
      }
    }
    if (*(int *)((int64_t)puVar6 + 0xc) != 0) {
      local_64 = FUN_00d2c950();
      local_68 = 1;
      local_70 = &g_024cc6f0;
      FUN_00d8cb40(&g_024cc6f0,&local_70);
      puVar8 = local_60;
      puVar5 = g_02784ab0;
      if (local_58 == '\0') {
        if (local_60 != (void*)0x0) {
          FUN_00d50b00();
          puVar5 = g_02784ab0;
        }
      }
      else {
        local_58 = '\0';
      }
      g_02784ab0 = puVar5;
      if (puVar5 != (void*)0x0) {
        FUN_00d50b00();
      }
      local_48 = local_48 & 0xffffff00;
      local_50 = (void*)puVar5;
      FUN_00ca0840();
      if (((char)local_48 != '\0') && (local_50 != (void*)0x0)) {
        FUN_00d50b20();
      }
      if (puVar5 != (void*)0x0) {
        FUN_00d50b20();
      }
      if (puVar8 != (void*)0x0) {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (local_60 != (void*)0x0)) {
        FUN_00d50b20();
      }
    }
    bVar4 = false;
    bVar3 = false;
  }
  if (param_2 == '\0') {
    FUN_00e6f320();
    bVar3 = bVar4;
  }
  *this_ptr = plVar10;
  *(void*)(this_ptr + 1) = 1;
  if (!bVar3) {
    FUN_00d50b20();
  }
  return;
}

