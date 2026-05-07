// Function: FUN_01a30260
// Address: 01a30260
// Size: 1727 bytes
// Class: MUScalePitchSystem
// === MUScalePitchSystem properties ===
//   bool            _tuningIsSuggestedRelevant
//   bool            _modeIsSuggestedRelevant
//   bool            _tuningPitchAnchorIsSuggestedRelevant
//   bool            _modeFundamentalOffsetIsSuggestedRelevant
//   bool            _stretchingIsSuggestedRelevant
//   double          _startPulse
//   double          _startTime
//   double          _width
//   double          _scope


uint64_t FUN_01a30260(uint64_t param_1,byte param_2)

{
  int64_t *plVar1;
  int64_t *plVar2;
  uint uVar3;
  char *pcVar4;
  void *pvVar5;
  int64_t lVar6;
  void* pVar7;
  uint64_t uVar8;
  int64_t *this_ptr;
  int64_t *plVar9;
  bool bVar10;
  uint32_t uVar11;
  uint8_t local_f8 [8];
  uint8_t local_f0;
  uint8_t local_e0;
  int64_t *local_d8;
  char local_d0;
  int64_t local_c8;
  char local_c0;
  int64_t local_b8;
  char local_b0;
  int64_t local_a8;
  char local_a0;
  int64_t *local_98;
  char local_90;
  int64_t *local_88;
  char local_80;
  int64_t *local_78;
  char local_70;
  char local_68;
  undefined7 uStack_67;
  char local_60;
  char local_58;
  undefined7 uStack_57;
  char local_50;
  int64_t *local_48;
  char local_40;
  int64_t *local_38;
  char local_30 [8];
  
  FUN_01a58e40();
  if (local_38 == (int64_t *)0x0) {
    bVar10 = true;
  }
  else {
    FUN_01a58e40();
    bVar10 = *(int *)((int64_t)local_48 + 0xc) == 0;
    if (local_40 != '\0') {
      FUN_00d50b20();
    }
  }
  if ((local_30[0] != '\0') && (local_38 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (bVar10) {
    uVar8 = 0;
  }
  else {
    FUN_01a58e40();
    local_88 = local_38;
    local_80 = 0;
    if (local_30[0] == '\0') {
      if (local_38 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_30[0] = '\0';
    }
    local_80 = '\x01';
    uVar3 = (**(code **)(*this_ptr + 0x488))();
    uVar8 = (uint64_t)uVar3;
    if ((local_80 != '\0') && (local_88 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_30[0] != '\0') && (local_38 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (((byte)uVar3 & param_2) != 0) {
      uVar11 = FUN_01caec40();
      local_c8 = g_027e1e88;
      if (g_027e1e88 != 0) {
        uVar11 = FUN_00d50b00();
      }
      local_c0 = '\x01';
      FUN_000175c0(uVar11,&local_c8);
      plVar2 = local_38;
      if ((local_30[0] != '\0') && (local_38 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_c0 != '\0') && (local_c8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar2 == (int64_t *)0x0) {
        FUN_01a58dc0();
        plVar2 = local_38;
        if (local_30[0] == '\0') {
          if (local_38 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_30[0] = '\0';
        }
        local_e0 = 1;
        FUN_01a58dc0();
        (**(code **)(*(int64_t *)CONCAT71(uStack_57,local_58) + 0xa00))();
        plVar9 = local_48;
        if (local_40 == '\0') {
          if (local_48 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_40 = '\0';
        }
        FUN_01a58e40();
        local_a8 = CONCAT71(uStack_67,local_68);
        if (local_60 == '\0') {
          if (local_a8 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_60 = '\0';
        }
        local_a0 = '\x01';
        FUN_01a58dc0();
        uVar11 = (**(code **)(*local_78 + 0xd08))();
        pVar7 = 1;
        FUN_01a29bc0(1,&local_a8,uVar11,0);
        if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_a0 != '\0') && (local_a8 != 0)) {
          FUN_00d50b20();
        }
        if ((local_60 != '\0') && (CONCAT71(uStack_67,local_68) != 0)) {
          FUN_00d50b20();
        }
        if (plVar9 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_50 != '\0') && (CONCAT71(uStack_57,local_58) != 0)) {
          FUN_00d50b20();
        }
        if (plVar2 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        if ((local_30[0] != '\0') && (local_38 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        FUN_01a58dc0();
        plVar2 = local_38;
        if (local_30[0] == '\0') {
          if (local_38 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_30[0] = '\0';
        }
        FUN_01a58dc0();
        (**(code **)(*(int64_t *)CONCAT71(uStack_57,local_58) + 0xa00))();
        plVar9 = local_48;
        if (local_40 == '\0') {
          if (local_48 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_40 = '\0';
        }
        FUN_01a58e40();
        local_b8 = CONCAT71(uStack_67,local_68);
        if (local_60 == '\0') {
          if (local_b8 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_60 = '\0';
        }
        local_b0 = '\x01';
        FUN_01a58dc0();
        (**(code **)(*local_d8 + 0xe58))();
        plVar1 = local_78;
        if (local_70 == '\0') {
          if (local_78 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_70 = '\0';
        }
        local_f0 = 1;
        pVar7 = 0;
        FUN_01a26560(g_02390124,&local_b8,local_f8,0);
        if (plVar1 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_d0 != '\0') && (local_d8 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_b0 != '\0') && (local_b8 != 0)) {
          FUN_00d50b20();
        }
        if ((local_60 != '\0') && (CONCAT71(uStack_67,local_68) != 0)) {
          FUN_00d50b20();
        }
        if (plVar9 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_50 != '\0') && (CONCAT71(uStack_57,local_58) != 0)) {
          FUN_00d50b20();
        }
        if (plVar2 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        if ((local_30[0] != '\0') && (local_38 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      FUN_01a58f00();
      FUN_00d23310();
      plVar2 = local_38;
      local_58 = local_30[0];
      pcVar4 = &local_58;
      if (local_30[0] != '\0') {
        pcVar4 = local_30;
      }
      *pcVar4 = '\0';
      if ((local_30[0] != '\0') && (plVar2 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      pvVar5 = _pthread_getspecific(pVar7);
      plVar9 = plVar2;
      if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
        plVar9 = (int64_t *)plVar2[(uint64_t)(*(uint *)(lVar6 + 0x154) & 1) + 4];
      }
      (**(code **)(*plVar9 + 0x1a0))();
      if ((local_58 != '\0') && (plVar2 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_01a58dc0();
      plVar2 = local_48;
      FUN_01a58f00();
      FUN_00d23310();
      pcVar4 = local_30;
      if (local_30[0] == '\0') {
        pcVar4 = &local_68;
      }
      local_68 = local_30[0];
      *pcVar4 = '\0';
      if ((local_30[0] != '\0') && (local_38 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      local_90 = 0;
      if ((local_68 == '\0') && (local_38 != (int64_t *)0x0)) {
        FUN_00d50b00();
      }
      local_98 = local_38;
      local_90 = '\x01';
      (**(code **)("/usr/lib/libobjc.A.dylib" + *plVar2 + 8))();
      if ((local_90 != '\0') && (local_98 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (CONCAT71(uStack_57,local_58) != 0)) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      uVar8 = CONCAT71((int7)((uint64_t)local_38 >> 8),1);
    }
  }
  return uVar8 & 0xffffffff;
}

