// Function: FUN_00707250
// Address: 00707250
// Size: 1354 bytes
// Class: MDMetaWindowController

uint64_t FUN_00707250(uint64_t param_1,char param_2)

{
  void*puVar1;
  void*puVar2;
  int64_t lVar3;
  char cVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  int64_t lVar7;
  int64_t *this_ptr;
  void*local_110 [2];
  uint8_t local_100;
  void*local_f8;
  char local_f0;
  void*local_e8;
  char local_e0;
  void*local_d8;
  char local_d0;
  int64_t local_c8;
  char local_c0;
  int64_t local_b8;
  char local_b0;
  void*local_a8;
  int64_t local_90;
  char local_88;
  void*local_80;
  void*local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  char local_40;
  uint32_t local_34;
  
  uVar5 = (**(code **)(*this_ptr + 0x5d8))();
  local_a8 = local_78;
  if (local_70 == '\0') {
    if (local_78 == (void*)0x0) goto LAB_0070732b;
    FUN_00d50b00();
    if ((local_70 != '\0') && (local_78 != (void*)0x0)) {
      FUN_00d50b20();
    }
LAB_007072c0:
    FUN_0063f230();
    puVar2 = local_78;
    if ((local_70 != '\0') && (local_78 != (void*)0x0)) {
      FUN_00d50b20();
    }
    if (puVar2 != (void*)0x0) {
      FUN_0063f230();
      cVar4 = FUN_00212c70();
      if ((local_70 != '\0') && (local_78 != (void*)0x0)) {
        FUN_00d50b20();
      }
      local_34 = 0;
      uVar6 = 0;
      if (cVar4 != '\0') goto LAB_00707774;
      goto LAB_00707330;
    }
    local_34 = 0;
    lVar7 = this_ptr[2];
  }
  else {
    if (local_78 != (void*)0x0) goto LAB_007072c0;
LAB_0070732b:
    local_34 = (uint32_t)CONCAT71((int7)((uint64_t)uVar5 >> 8),1);
LAB_00707330:
    lVar7 = this_ptr[2];
  }
  if (lVar7 != 0) {
    FUN_00d50b00();
  }
  FUN_01beead0();
  lVar3 = local_48;
  if (local_40 == '\0') {
    if (local_48 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_40 = '\0';
  }
  local_100 = 1;
  FUN_007035b0();
  puVar2 = local_78;
  if ((local_70 == '\0') && (local_78 != (void*)0x0)) {
    FUN_00d50b00();
  }
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if (lVar7 != 0) {
    FUN_00d50b20();
  }
  if (puVar2 == (void*)0x0) {
    uVar6 = 0;
    goto LAB_00707774;
  }
  if (*(int *)((int64_t)puVar2 + 0xc) == 0) {
    uVar6 = 0;
  }
  else {
    local_f8 = puVar2;
    local_f0 = '\0';
    FUN_019c5150();
    puVar2 = local_78;
    if (local_70 == '\0') {
      if (((local_78 != (void*)0x0) && (FUN_00d50b00(), local_70 != '\0')) &&
         (local_78 != (void*)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_70 = '\0';
    }
    if ((local_f0 != '\0') && (local_f8 != (void*)0x0)) {
      FUN_00d50b20();
    }
    if (((param_2 != '\0') && (puVar2 != (void*)0x0)) &&
       (*(int *)((int64_t)puVar2 + 0xc) != 0)) {
      FUN_006f3f00();
      if (local_78 != (void*)0x0) {
        local_80 = local_78;
        FUN_006f3f00();
        lVar7 = local_48;
        local_e8 = puVar2;
        local_e0 = '\0';
        cVar4 = FUN_00793a50();
        if ((local_e0 != '\0') && (local_e8 != (void*)0x0)) {
          FUN_00d50b20();
        }
        if ((local_40 != '\0') && (lVar7 != 0)) {
          FUN_00d50b20();
        }
        if (local_70 != '\0') {
          FUN_00d50b20();
        }
        if (cVar4 == '\0') goto LAB_0070775d;
      }
      local_d8 = puVar2;
      local_d0 = '\0';
      FUN_019c5bf0();
      if ((local_d0 != '\0') && (local_d8 != (void*)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d403d0();
      local_c8 = g_026de568;
      if (g_026de568 != 0) {
        FUN_00d50b00();
      }
      local_c0 = '\x01';
      FUN_00d50b00();
      local_110[0] = g_026de560;
      if (g_026de560 != (void*)0x0) {
        FUN_00d50b00();
      }
      local_80 = local_110[0];
      FUN_00083ea0(2,local_110);
      FUN_000b4da0();
      local_90 = local_b8;
      local_88 = 0;
      if (local_b0 == '\0') {
        if (local_b8 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_b0 = '\0';
      }
      puVar1 = local_80;
      local_88 = '\x01';
      FUN_00d40470(&local_90,&stack0xffffffffffffff60,1,0);
      if ((local_88 != '\0') && (local_90 != 0)) {
        FUN_00d50b20();
      }
      if ((local_b0 != '\0') && (local_b8 != 0)) {
        FUN_00d50b20();
      }
      local_78 = (void*)&g_0253d630;
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      local_78 = &g_024c5048;
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      if (puVar1 != (void*)0x0) {
        FUN_00d50b20();
      }
      if (this_ptr != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if ((local_c0 != '\0') && (local_c8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      lVar7 = this_ptr[2];
      if (lVar7 != 0) {
        FUN_00d50b00();
      }
      FUN_002eab40();
      if (lVar7 != 0) {
        FUN_00d50b20();
      }
    }
LAB_0070775d:
    uVar6 = CONCAT71((int7)((uint64_t)lVar7 >> 8),1);
    if (puVar2 != (void*)0x0) {
      FUN_00d50b20();
    }
  }
  FUN_00d50b20();
LAB_00707774:
  if ((char)local_34 == '\0') {
    FUN_00d50b20();
  }
  return uVar6 & 0xffffffff;
}

