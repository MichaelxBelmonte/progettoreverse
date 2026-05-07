// Function: FUN_00b3d310
// Address: 00b3d310
// Size: 1369 bytes
// Class: GNAudioProcessor
// String references:
//   "%@:"

void FUN_00b3d310(uint64_t param_1)

{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t *plVar3;
  char cVar4;
  int64_t *this_ptr;
  uint64_t unaff_R13;
  uint64_t uVar5;
  int64_t *plVar6;
  int64_t local_110;
  char local_108;
  int64_t local_f0;
  char local_e8;
  int64_t *local_e0;
  char local_d8;
  int64_t local_d0;
  char local_c8;
  int64_t local_c0;
  char local_b8;
  int64_t *local_b0;
  int64_t local_a8;
  char local_a0;
  int64_t *local_58;
  uint local_50;
  int64_t local_48;
  char local_40;
  uint local_34;
  
  lVar2 = g_0275e910;
  if (g_0275e910 != 0) {
    FUN_00d50b00();
  }
  local_f0 = 0;
  local_e8 = '\0';
  (**(code **)(*this_ptr + 0x508))(param_1,&local_f0);
  if ((local_e8 != '\0') && (local_f0 != 0)) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  local_b0 = (int64_t *)0x0;
  (**(code **)(*(int64_t *)this_ptr[0xf] + 0x5d0))();
  plVar6 = local_58;
  if (local_58 == (int64_t *)0x0) {
    uVar5 = CONCAT71((int7)((uint64_t)unaff_R13 >> 8),1);
    plVar6 = (int64_t *)0x0;
  }
  else {
    if ((char)local_50 == '\0') {
      FUN_00d50b00();
      local_b0 = plVar6;
      uVar5 = 0;
      if (((char)local_50 == '\0') || (local_58 == (int64_t *)0x0)) goto LAB_00b3d410;
      FUN_00d50b20();
    }
    else {
      local_b0 = local_58;
    }
    uVar5 = 0;
  }
LAB_00b3d410:
  plVar1 = (int64_t *)this_ptr[0x10];
  if (plVar1 != (int64_t *)0x0) {
    local_34 = (uint)uVar5;
    (**(code **)(*plVar6 + 0x478))(param_1,(int)this_ptr[0xe]);
    local_50 = 1;
    local_58 = &g_024c5048;
    local_40 = 0;
    if (local_110 != 0) {
      FUN_00d50b00();
    }
    local_48 = local_110;
    local_40 = '\x01';
    FUN_00d8cb40(param_1,&local_58);
    lVar2 = local_a8;
    if (local_a0 == '\0') {
      if (local_a8 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_a0 = '\0';
    }
    (**(code **)(*plVar1 + 0x968))();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    if ((local_a0 != '\0') && (local_a8 != 0)) {
      FUN_00d50b20();
    }
    local_58 = &g_024c5048;
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    uVar5 = (uint64_t)local_34;
    if ((local_108 != '\0') && (local_110 != 0)) {
      FUN_00d50b20();
    }
  }
  plVar1 = (int64_t *)this_ptr[0x13];
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar6 + 0x4a0))(param_1,(int)this_ptr[0xe]);
    plVar3 = local_58;
    if ((char)local_50 == '\0') {
      if (local_58 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_50 = local_50 & 0xffffff00;
    }
    (**(code **)(*plVar1 + 0x968))();
    if (plVar3 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if (((char)local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  plVar1 = (int64_t *)this_ptr[0x11];
  if (plVar1 == (int64_t *)0x0) goto LAB_00b3d738;
  (**(code **)(*plVar6 + 0x460))();
  (**(code **)(*plVar1 + 0xab8))();
  plVar1 = (int64_t *)this_ptr[0x11];
  (**(code **)(*plVar6 + 0x468))();
  (**(code **)(*plVar1 + 0xac8))();
  (**(code **)(*plVar6 + 0x470))(param_1,(int)this_ptr[0xe]);
  plVar1 = local_58;
  if ((char)local_50 == '\0') {
    if (local_58 != (int64_t *)0x0) {
      FUN_00d50b00();
      if (((char)local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_00b3d659;
    }
  }
  else if (local_58 != (int64_t *)0x0) {
LAB_00b3d659:
    local_e0 = plVar1;
    local_d8 = '\0';
    (**(code **)(*(int64_t *)this_ptr[0x11] + 0x988))();
    if ((local_d8 != '\0') && (local_e0 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  plVar1 = (int64_t *)this_ptr[0x11];
  FUN_00d50b00();
  (**(code **)(*plVar1 + 0xa20))();
  if (this_ptr != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  lVar2 = g_0275e918;
  plVar1 = (int64_t *)this_ptr[0x11];
  if (g_0275e918 != 0) {
    FUN_00d50b00();
  }
  local_d0 = lVar2;
  local_c8 = '\x01';
  (**(code **)(*plVar1 + 0xa10))();
  if ((local_c8 != '\0') && (local_d0 != 0)) {
    FUN_00d50b20();
  }
LAB_00b3d738:
  if (this_ptr[0x12] != 0) {
    FUN_01e058a0();
    FUN_00b10020();
    plVar1 = g_02802688;
    if (plVar6 != (int64_t *)0x0) {
      (**(code **)(*plVar6 + 0x360))();
      cVar4 = FUN_00e85ea0();
      plVar1 = g_02802688;
      if (cVar4 != '\0') {
        plVar1 = local_b0;
      }
    }
    if (plVar1 != (int64_t *)0x0) {
      plVar1 = (int64_t *)this_ptr[0x12];
      FUN_00d50b00();
      (**(code **)(*plVar1 + 0xa20))();
      if (this_ptr != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      lVar2 = g_0275e920;
      plVar1 = (int64_t *)this_ptr[0x12];
      if (g_0275e920 != 0) {
        FUN_00d50b00();
      }
      local_c0 = lVar2;
      local_b8 = '\x01';
      (**(code **)(*plVar1 + 0xa10))();
      if ((local_b8 != '\0') && (local_c0 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  if ((char)uVar5 == '\0' && plVar6 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}

