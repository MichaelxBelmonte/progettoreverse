// Function: FUN_01586cb0
// Address: 01586cb0
// Size: 3963 bytes
// Class: Unknown

void FUN_01586cb0(float param_1)

{
  void*puVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  void*puVar5;
  int64_t lVar6;
  int64_t *this_ptr;
  uint32_t extraout_XMM0_Da;
  uint32_t extraout_XMM0_Da_00;
  uint32_t extraout_XMM0_Da_01;
  uint32_t extraout_XMM0_Da_02;
  uint32_t extraout_XMM0_Da_03;
  uint32_t extraout_XMM0_Da_04;
  uint32_t extraout_XMM0_Da_05;
  uint32_t extraout_XMM0_Da_06;
  uint32_t extraout_XMM0_Da_07;
  uint32_t extraout_XMM0_Da_08;
  
  if ((param_1 == 0.0) && (!NAN(param_1))) {
    if ((g_027c6fc8 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
      g_027c6fc0 = '\0';
      g_027c6fc1 = '\0';
      ram_00000000027c6fc2 = 0;
      g_027c6fb8._0_7_ = 0;
      g_027c6fb8._7_1_ = 0;
      ___cxa_atexit(extraout_XMM0_Da,0);
      ___cxa_guard_release();
    }
    lVar6 = CONCAT17(g_027c6fb8._7_1_,(undefined7)g_027c6fb8);
    if ((lVar6 == 0) || (g_027c6fc1 == '\0')) {
      FUN_00e8cb50();
      if (CONCAT17(g_027c6fb8._7_1_,(undefined7)g_027c6fb8) == 0) {
        puVar5 = (void*)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar5 = &g_02575d80;
        (*g_02575d98)();
        puVar1 = (void*)CONCAT17(g_027c6fb8._7_1_,(undefined7)g_027c6fb8);
        if (puVar1 == puVar5) {
          bVar3 = false;
          bVar2 = false;
        }
        else {
          g_027c6fb8._0_7_ = SUB87(puVar5,0);
          g_027c6fb8._7_1_ = (uint8_t)((uint64_t)puVar5 >> 0x38);
          bVar3 = true;
          bVar2 = true;
          if (puVar1 != (void*)0x0) {
            FUN_00d50b20();
          }
        }
        if (g_027c6fc0 == '\0') {
          g_027c6fc0 = '\x01';
          FUN_00e8cb90();
          bVar2 = bVar3;
        }
        if (!bVar2) {
          FUN_00d50b20();
        }
        FUN_00d460a0(0);
        g_027c6fc1 = '\x01';
        FUN_00e8cb70();
      }
      else {
        g_027c6fc1 = '\x01';
        FUN_00e8cb70();
      }
      lVar6 = CONCAT17(g_027c6fb8._7_1_,(undefined7)g_027c6fb8);
      *(void*)(this_ptr + 1) = 0;
      if (lVar6 == 0) goto LAB_015878cd;
    }
    else {
      *(void*)(this_ptr + 1) = 0;
    }
    FUN_00d50b00();
    goto LAB_015878cf;
  }
  if ((param_1 == g_02390124) && (!NAN(param_1) && !NAN(g_02390124))) {
    if ((g_027c6fe0 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
      g_027c6fd8 = '\0';
      g_027c6fd9 = '\0';
      ram_00000000027c6fda = 0;
      g_027c6fd0._0_7_ = 0;
      g_027c6fd0._7_1_ = 0;
      ___cxa_atexit(extraout_XMM0_Da_00,0);
      ___cxa_guard_release();
    }
    lVar6 = CONCAT17(g_027c6fd0._7_1_,(undefined7)g_027c6fd0);
    if ((lVar6 == 0) || (g_027c6fd9 == '\0')) {
      FUN_00e8cb50();
      if (CONCAT17(g_027c6fd0._7_1_,(undefined7)g_027c6fd0) == 0) {
        puVar5 = (void*)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar5 = &g_02575d80;
        (*g_02575d98)();
        puVar1 = (void*)CONCAT17(g_027c6fd0._7_1_,(undefined7)g_027c6fd0);
        if (puVar1 == puVar5) {
          bVar2 = false;
        }
        else {
          g_027c6fd0._0_7_ = SUB87(puVar5,0);
          g_027c6fd0._7_1_ = (uint8_t)((uint64_t)puVar5 >> 0x38);
          bVar2 = true;
          if (puVar1 != (void*)0x0) {
            FUN_00d50b20();
          }
        }
        if (g_027c6fd8 == '\0') {
          g_027c6fd8 = '\x01';
          FUN_00e8cb90();
        }
        if (!bVar2) {
          FUN_00d50b20();
        }
        FUN_00d460a0(g_02390124);
        g_027c6fd9 = '\x01';
        FUN_00e8cb70();
      }
      else {
        g_027c6fd9 = '\x01';
        FUN_00e8cb70();
      }
      lVar6 = CONCAT17(g_027c6fd0._7_1_,(undefined7)g_027c6fd0);
      *(void*)(this_ptr + 1) = 0;
      if (lVar6 == 0) goto LAB_015878cd;
    }
    else {
      *(void*)(this_ptr + 1) = 0;
    }
    FUN_00d50b00();
    goto LAB_015878cf;
  }
  if ((param_1 == g_0239011c) && (!NAN(param_1) && !NAN(g_0239011c))) {
    if ((g_027c6ff8 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
      g_027c6ff0 = '\0';
      g_027c6ff1 = '\0';
      ram_00000000027c6ff2 = 0;
      g_027c6fe8._0_7_ = 0;
      g_027c6fe8._7_1_ = 0;
      ___cxa_atexit(extraout_XMM0_Da_01,0);
      ___cxa_guard_release();
    }
    lVar6 = CONCAT17(g_027c6fe8._7_1_,(undefined7)g_027c6fe8);
    if ((lVar6 == 0) || (g_027c6ff1 == '\0')) {
      FUN_00e8cb50();
      if (CONCAT17(g_027c6fe8._7_1_,(undefined7)g_027c6fe8) == 0) {
        puVar5 = (void*)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar5 = &g_02575d80;
        (*g_02575d98)();
        puVar1 = (void*)CONCAT17(g_027c6fe8._7_1_,(undefined7)g_027c6fe8);
        if (puVar1 == puVar5) {
          bVar2 = false;
        }
        else {
          g_027c6fe8._0_7_ = SUB87(puVar5,0);
          g_027c6fe8._7_1_ = (uint8_t)((uint64_t)puVar5 >> 0x38);
          bVar2 = true;
          if (puVar1 != (void*)0x0) {
            FUN_00d50b20();
          }
        }
        if (g_027c6ff0 == '\0') {
          g_027c6ff0 = '\x01';
          FUN_00e8cb90();
        }
        if (!bVar2) {
          FUN_00d50b20();
        }
        FUN_00d460a0(g_0239011c);
        g_027c6ff1 = '\x01';
        FUN_00e8cb70();
      }
      else {
        g_027c6ff1 = '\x01';
        FUN_00e8cb70();
      }
      lVar6 = CONCAT17(g_027c6fe8._7_1_,(undefined7)g_027c6fe8);
      *(void*)(this_ptr + 1) = 0;
      if (lVar6 == 0) goto LAB_015878cd;
    }
    else {
      *(void*)(this_ptr + 1) = 0;
    }
    FUN_00d50b00();
    goto LAB_015878cf;
  }
  if ((param_1 == g_02394288) && (!NAN(param_1) && !NAN(g_02394288))) {
    if ((g_027c7010 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
      g_027c7008 = '\0';
      g_027c7009 = '\0';
      ram_00000000027c700a = 0;
      g_027c7000._0_7_ = 0;
      g_027c7000._7_1_ = 0;
      ___cxa_atexit(extraout_XMM0_Da_02,0);
      ___cxa_guard_release();
    }
    lVar6 = CONCAT17(g_027c7000._7_1_,(undefined7)g_027c7000);
    if ((lVar6 == 0) || (g_027c7009 == '\0')) {
      FUN_00e8cb50();
      if (CONCAT17(g_027c7000._7_1_,(undefined7)g_027c7000) == 0) {
        puVar5 = (void*)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar5 = &g_02575d80;
        (*g_02575d98)();
        puVar1 = (void*)CONCAT17(g_027c7000._7_1_,(undefined7)g_027c7000);
        if (puVar1 == puVar5) {
          bVar2 = false;
        }
        else {
          g_027c7000._0_7_ = SUB87(puVar5,0);
          g_027c7000._7_1_ = (uint8_t)((uint64_t)puVar5 >> 0x38);
          bVar2 = true;
          if (puVar1 != (void*)0x0) {
            FUN_00d50b20();
          }
        }
        if (g_027c7008 == '\0') {
          g_027c7008 = '\x01';
          FUN_00e8cb90();
        }
        if (!bVar2) {
          FUN_00d50b20();
        }
        FUN_00d460a0(g_02394288);
        g_027c7009 = '\x01';
        FUN_00e8cb70();
      }
      else {
        g_027c7009 = '\x01';
        FUN_00e8cb70();
      }
      lVar6 = CONCAT17(g_027c7000._7_1_,(undefined7)g_027c7000);
      *(void*)(this_ptr + 1) = 0;
      if (lVar6 == 0) goto LAB_015878cd;
    }
    else {
      *(void*)(this_ptr + 1) = 0;
    }
    FUN_00d50b00();
    goto LAB_015878cf;
  }
  if ((param_1 == g_0240f128) && (!NAN(param_1) && !NAN(g_0240f128))) {
    if ((g_027c7028 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
      g_027c7020 = '\0';
      g_027c7021 = '\0';
      ram_00000000027c7022 = 0;
      g_027c7018._0_7_ = 0;
      g_027c7018._7_1_ = 0;
      ___cxa_atexit(extraout_XMM0_Da_03,0);
      ___cxa_guard_release();
    }
    lVar6 = CONCAT17(g_027c7018._7_1_,(undefined7)g_027c7018);
    if ((lVar6 == 0) || (g_027c7021 == '\0')) {
      FUN_00e8cb50();
      if (CONCAT17(g_027c7018._7_1_,(undefined7)g_027c7018) == 0) {
        puVar5 = (void*)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar5 = &g_02575d80;
        (*g_02575d98)();
        puVar1 = (void*)CONCAT17(g_027c7018._7_1_,(undefined7)g_027c7018);
        if (puVar1 == puVar5) {
          bVar2 = false;
        }
        else {
          g_027c7018._0_7_ = SUB87(puVar5,0);
          g_027c7018._7_1_ = (uint8_t)((uint64_t)puVar5 >> 0x38);
          bVar2 = true;
          if (puVar1 != (void*)0x0) {
            FUN_00d50b20();
          }
        }
        if (g_027c7020 == '\0') {
          g_027c7020 = '\x01';
          FUN_00e8cb90();
        }
        if (!bVar2) {
          FUN_00d50b20();
        }
        FUN_00d460a0(g_0240f128);
        g_027c7021 = '\x01';
        FUN_00e8cb70();
      }
      else {
        g_027c7021 = '\x01';
        FUN_00e8cb70();
      }
      lVar6 = CONCAT17(g_027c7018._7_1_,(undefined7)g_027c7018);
      *(void*)(this_ptr + 1) = 0;
      if (lVar6 == 0) goto LAB_015878cd;
    }
    else {
      *(void*)(this_ptr + 1) = 0;
    }
    FUN_00d50b00();
    goto LAB_015878cf;
  }
  if ((param_1 == g_02391094) && (!NAN(param_1) && !NAN(g_02391094))) {
    if ((g_027c7040 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
      g_027c7038 = '\0';
      g_027c7039 = '\0';
      ram_00000000027c703a = 0;
      g_027c7030._0_7_ = 0;
      g_027c7030._7_1_ = 0;
      ___cxa_atexit(extraout_XMM0_Da_04,0);
      ___cxa_guard_release();
    }
    lVar6 = CONCAT17(g_027c7030._7_1_,(undefined7)g_027c7030);
    if ((lVar6 == 0) || (g_027c7039 == '\0')) {
      FUN_00e8cb50();
      if (CONCAT17(g_027c7030._7_1_,(undefined7)g_027c7030) == 0) {
        puVar5 = (void*)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar5 = &g_02575d80;
        (*g_02575d98)();
        puVar1 = (void*)CONCAT17(g_027c7030._7_1_,(undefined7)g_027c7030);
        if (puVar1 == puVar5) {
          bVar2 = false;
        }
        else {
          g_027c7030._0_7_ = SUB87(puVar5,0);
          g_027c7030._7_1_ = (uint8_t)((uint64_t)puVar5 >> 0x38);
          bVar2 = true;
          if (puVar1 != (void*)0x0) {
            FUN_00d50b20();
          }
        }
        if (g_027c7038 == '\0') {
          g_027c7038 = '\x01';
          FUN_00e8cb90();
        }
        if (!bVar2) {
          FUN_00d50b20();
        }
        FUN_00d460a0(g_02391094);
        g_027c7039 = '\x01';
        FUN_00e8cb70();
      }
      else {
        g_027c7039 = '\x01';
        FUN_00e8cb70();
      }
      lVar6 = CONCAT17(g_027c7030._7_1_,(undefined7)g_027c7030);
      *(void*)(this_ptr + 1) = 0;
      if (lVar6 == 0) goto LAB_015878cd;
    }
    else {
      *(void*)(this_ptr + 1) = 0;
    }
    FUN_00d50b00();
    goto LAB_015878cf;
  }
  if ((param_1 == g_0240f12c) && (!NAN(param_1) && !NAN(g_0240f12c))) {
    if ((g_027c7058 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
      g_027c7050 = '\0';
      g_027c7051 = '\0';
      ram_00000000027c7052 = 0;
      g_027c7048._0_7_ = 0;
      g_027c7048._7_1_ = 0;
      ___cxa_atexit(extraout_XMM0_Da_05,0);
      ___cxa_guard_release();
    }
    lVar6 = CONCAT17(g_027c7048._7_1_,(undefined7)g_027c7048);
    if ((lVar6 == 0) || (g_027c7051 == '\0')) {
      FUN_00e8cb50();
      if (CONCAT17(g_027c7048._7_1_,(undefined7)g_027c7048) == 0) {
        puVar5 = (void*)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar5 = &g_02575d80;
        (*g_02575d98)();
        puVar1 = (void*)CONCAT17(g_027c7048._7_1_,(undefined7)g_027c7048);
        if (puVar1 == puVar5) {
          bVar2 = false;
        }
        else {
          g_027c7048._0_7_ = SUB87(puVar5,0);
          g_027c7048._7_1_ = (uint8_t)((uint64_t)puVar5 >> 0x38);
          bVar2 = true;
          if (puVar1 != (void*)0x0) {
            FUN_00d50b20();
          }
        }
        if (g_027c7050 == '\0') {
          g_027c7050 = '\x01';
          FUN_00e8cb90();
        }
        if (!bVar2) {
          FUN_00d50b20();
        }
        FUN_00d460a0(g_0240f12c);
        g_027c7051 = '\x01';
        FUN_00e8cb70();
      }
      else {
        g_027c7051 = '\x01';
        FUN_00e8cb70();
      }
      lVar6 = CONCAT17(g_027c7048._7_1_,(undefined7)g_027c7048);
      *(void*)(this_ptr + 1) = 0;
      if (lVar6 == 0) goto LAB_015878cd;
    }
    else {
      *(void*)(this_ptr + 1) = 0;
    }
    FUN_00d50b00();
    goto LAB_015878cf;
  }
  if ((param_1 == g_02421228) && (!NAN(param_1) && !NAN(g_02421228))) {
    if ((g_027c7070 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
      g_027c7068 = '\0';
      g_027c7069 = '\0';
      ram_00000000027c706a = 0;
      g_027c7060._0_7_ = 0;
      g_027c7060._7_1_ = 0;
      ___cxa_atexit(extraout_XMM0_Da_06,0);
      ___cxa_guard_release();
    }
    lVar6 = CONCAT17(g_027c7060._7_1_,(undefined7)g_027c7060);
    if ((lVar6 == 0) || (g_027c7069 == '\0')) {
      FUN_00e8cb50();
      if (CONCAT17(g_027c7060._7_1_,(undefined7)g_027c7060) == 0) {
        puVar5 = (void*)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar5 = &g_02575d80;
        (*g_02575d98)();
        puVar1 = (void*)CONCAT17(g_027c7060._7_1_,(undefined7)g_027c7060);
        if (puVar1 == puVar5) {
          bVar2 = false;
        }
        else {
          g_027c7060._0_7_ = SUB87(puVar5,0);
          g_027c7060._7_1_ = (uint8_t)((uint64_t)puVar5 >> 0x38);
          bVar2 = true;
          if (puVar1 != (void*)0x0) {
            FUN_00d50b20();
          }
        }
        if (g_027c7068 == '\0') {
          g_027c7068 = '\x01';
          FUN_00e8cb90();
        }
        if (!bVar2) {
          FUN_00d50b20();
        }
        FUN_00d460a0(g_02421228);
        g_027c7069 = '\x01';
        FUN_00e8cb70();
      }
      else {
        g_027c7069 = '\x01';
        FUN_00e8cb70();
      }
      lVar6 = CONCAT17(g_027c7060._7_1_,(undefined7)g_027c7060);
      *(void*)(this_ptr + 1) = 0;
      if (lVar6 == 0) goto LAB_015878cd;
    }
    else {
      *(void*)(this_ptr + 1) = 0;
    }
    FUN_00d50b00();
    goto LAB_015878cf;
  }
  if ((param_1 != g_023b4df0) || (NAN(param_1) || NAN(g_023b4df0))) {
    if ((param_1 != g_0240f124) || (NAN(param_1) || NAN(g_0240f124))) {
      FUN_00d46dc0();
      return;
    }
    if ((g_027c70a0 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
      g_027c7098 = '\0';
      g_027c7099 = '\0';
      ram_00000000027c709a = 0;
      g_027c7090._0_7_ = 0;
      g_027c7090._7_1_ = 0;
      ___cxa_atexit(extraout_XMM0_Da_08,0);
      ___cxa_guard_release();
    }
    lVar6 = CONCAT17(g_027c7090._7_1_,(undefined7)g_027c7090);
    if ((lVar6 == 0) || (g_027c7099 == '\0')) {
      FUN_00e8cb50();
      if (CONCAT17(g_027c7090._7_1_,(undefined7)g_027c7090) == 0) {
        puVar5 = (void*)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar5 = &g_02575d80;
        (*g_02575d98)();
        puVar1 = (void*)CONCAT17(g_027c7090._7_1_,(undefined7)g_027c7090);
        if (puVar1 == puVar5) {
          bVar2 = false;
        }
        else {
          g_027c7090._0_7_ = SUB87(puVar5,0);
          g_027c7090._7_1_ = (uint8_t)((uint64_t)puVar5 >> 0x38);
          bVar2 = true;
          if (puVar1 != (void*)0x0) {
            FUN_00d50b20();
          }
        }
        if (g_027c7098 == '\0') {
          g_027c7098 = '\x01';
          FUN_00e8cb90();
        }
        if (!bVar2) {
          FUN_00d50b20();
        }
        FUN_00d460a0(g_0240f124);
        g_027c7099 = '\x01';
        FUN_00e8cb70();
      }
      else {
        g_027c7099 = '\x01';
        FUN_00e8cb70();
      }
      lVar6 = CONCAT17(g_027c7090._7_1_,(undefined7)g_027c7090);
      *(void*)(this_ptr + 1) = 0;
      if (lVar6 == 0) goto LAB_015878cd;
    }
    else {
      *(void*)(this_ptr + 1) = 0;
    }
    FUN_00d50b00();
  }
  else {
    if ((g_027c7088 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
      g_027c7080 = '\0';
      g_027c7081 = '\0';
      ram_00000000027c7082 = 0;
      g_027c7078._0_7_ = 0;
      g_027c7078._7_1_ = 0;
      ___cxa_atexit(extraout_XMM0_Da_07,0);
      ___cxa_guard_release();
    }
    lVar6 = CONCAT17(g_027c7078._7_1_,(undefined7)g_027c7078);
    if ((lVar6 == 0) || (g_027c7081 == '\0')) {
      FUN_00e8cb50();
      if (CONCAT17(g_027c7078._7_1_,(undefined7)g_027c7078) == 0) {
        puVar5 = (void*)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar5 = &g_02575d80;
        (*g_02575d98)();
        puVar1 = (void*)CONCAT17(g_027c7078._7_1_,(undefined7)g_027c7078);
        if (puVar1 == puVar5) {
          bVar2 = false;
        }
        else {
          g_027c7078._0_7_ = SUB87(puVar5,0);
          g_027c7078._7_1_ = (uint8_t)((uint64_t)puVar5 >> 0x38);
          bVar2 = true;
          if (puVar1 != (void*)0x0) {
            FUN_00d50b20();
          }
        }
        if (g_027c7080 == '\0') {
          g_027c7080 = '\x01';
          FUN_00e8cb90();
        }
        if (!bVar2) {
          FUN_00d50b20();
        }
        FUN_00d460a0(g_023b4df0);
        g_027c7081 = '\x01';
        FUN_00e8cb70();
      }
      else {
        g_027c7081 = '\x01';
        FUN_00e8cb70();
      }
      lVar6 = CONCAT17(g_027c7078._7_1_,(undefined7)g_027c7078);
      *(void*)(this_ptr + 1) = 0;
      if (lVar6 == 0) {
LAB_015878cd:
        lVar6 = 0;
        goto LAB_015878cf;
      }
    }
    else {
      *(void*)(this_ptr + 1) = 0;
    }
    FUN_00d50b00();
  }
LAB_015878cf:
  *this_ptr = lVar6;
  *(void*)(this_ptr + 1) = 1;
  return;
}

