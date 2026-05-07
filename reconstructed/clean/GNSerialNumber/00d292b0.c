// Function: FUN_00d292b0
// Address: 00d292b0
// Size: 2360 bytes
// Class: GNSerialNumber
// String references:
//   "%@"
//   "%@-"

void FUN_00d292b0(void)

{
  int64_t lVar1;
  int64_t lVar2;
  void*puVar3;
  int64_t *arg1;
  void*this_ptr;
  int64_t local_100;
  char local_f8;
  int64_t local_f0;
  char local_e8;
  int64_t local_e0;
  char local_d8;
  int64_t local_d0;
  char local_c8;
  int64_t local_c0;
  char local_b8;
  int64_t local_b0;
  char local_a8;
  int64_t local_a0;
  char local_98;
  int64_t local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  void*local_50;
  uint local_48;
  int64_t local_40;
  char local_38;
  
  lVar1 = g_026fce10;
  if (g_026fce10 != 0) {
    FUN_00d50b00();
  }
  local_100 = lVar1;
  local_f8 = '\x01';
  FUN_00d8ede0();
  local_70 = local_60;
  local_68 = 0;
  if (local_58 == '\0') {
    if (local_60 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_58 = '\0';
  }
  local_68 = '\x01';
  FUN_00d98db0(&local_70,&local_100,0);
  puVar3 = local_50;
  lVar1 = *arg1;
  if ((void*)lVar1 == local_50) {
    if (((char)arg1[1] == '\0') && (local_50 != (void*)0x0)) {
      if ((char)local_48 != '\0') goto LAB_00d29394;
      FUN_00d50b00();
      goto LAB_00d293cc;
    }
LAB_00d293d1:
    if (((char)local_48 != '\0') && (local_50 != (void*)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    lVar2 = arg1[1];
    if ((char)local_48 == '\0') {
      if (local_50 != (void*)0x0) {
        FUN_00d50b00();
      }
      *arg1 = (int64_t)puVar3;
      if (((char)lVar2 != '\0') && (lVar1 != 0)) {
        FUN_00d50b20();
      }
LAB_00d293cc:
      *(void*)(arg1 + 1) = 1;
      goto LAB_00d293d1;
    }
    *arg1 = (int64_t)local_50;
    if (((char)lVar2 != '\0') && (lVar1 != 0)) {
      FUN_00d50b20();
    }
LAB_00d29394:
    *(void*)(arg1 + 1) = 1;
    local_48 = local_48 & 0xffffff00;
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if ((local_f8 != '\0') && (local_100 != 0)) {
    FUN_00d50b20();
  }
  lVar1 = g_0276ce70;
  if (g_0276ce70 != 0) {
    FUN_00d50b00();
  }
  lVar2 = g_0277d260;
  local_f0 = lVar1;
  local_e8 = '\x01';
  if (g_0277d260 != 0) {
    FUN_00d50b00();
  }
  local_e0 = lVar2;
  local_d8 = '\x01';
  FUN_00d98db0(&local_e0,&local_f0,0);
  puVar3 = local_50;
  lVar1 = *arg1;
  if ((void*)lVar1 == local_50) {
    if (((char)arg1[1] == '\0') && (local_50 != (void*)0x0)) {
      if ((char)local_48 != '\0') goto LAB_00d294d9;
      FUN_00d50b00();
      goto LAB_00d29511;
    }
LAB_00d29516:
    if (((char)local_48 != '\0') && (local_50 != (void*)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    lVar2 = arg1[1];
    if ((char)local_48 == '\0') {
      if (local_50 != (void*)0x0) {
        FUN_00d50b00();
      }
      *arg1 = (int64_t)puVar3;
      if (((char)lVar2 != '\0') && (lVar1 != 0)) {
        FUN_00d50b20();
      }
LAB_00d29511:
      *(void*)(arg1 + 1) = 1;
      goto LAB_00d29516;
    }
    *arg1 = (int64_t)local_50;
    if (((char)lVar2 != '\0') && (lVar1 != 0)) {
      FUN_00d50b20();
    }
LAB_00d294d9:
    *(void*)(arg1 + 1) = 1;
    local_48 = local_48 & 0xffffff00;
  }
  if ((local_d8 != '\0') && (local_e0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_e8 != '\0') && (local_f0 != 0)) {
    FUN_00d50b20();
  }
  lVar1 = g_0276c080;
  if (g_0276c080 != 0) {
    FUN_00d50b00();
  }
  lVar2 = g_0277d268;
  local_d0 = lVar1;
  local_c8 = '\x01';
  if (g_0277d268 != 0) {
    FUN_00d50b00();
  }
  local_c0 = lVar2;
  local_b8 = '\x01';
  FUN_00d98db0(&local_c0,&local_d0,0);
  puVar3 = local_50;
  lVar1 = *arg1;
  if ((void*)lVar1 == local_50) {
    if (((char)arg1[1] == '\0') && (local_50 != (void*)0x0)) {
      if ((char)local_48 != '\0') goto LAB_00d29610;
      FUN_00d50b00();
      goto LAB_00d29648;
    }
LAB_00d2964d:
    if (((char)local_48 != '\0') && (local_50 != (void*)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    lVar2 = arg1[1];
    if ((char)local_48 == '\0') {
      if (local_50 != (void*)0x0) {
        FUN_00d50b00();
      }
      *arg1 = (int64_t)puVar3;
      if (((char)lVar2 != '\0') && (lVar1 != 0)) {
        FUN_00d50b20();
      }
LAB_00d29648:
      *(void*)(arg1 + 1) = 1;
      goto LAB_00d2964d;
    }
    *arg1 = (int64_t)local_50;
    if (((char)lVar2 != '\0') && (lVar1 != 0)) {
      FUN_00d50b20();
    }
LAB_00d29610:
    *(void*)(arg1 + 1) = 1;
    local_48 = local_48 & 0xffffff00;
  }
  if ((local_b8 != '\0') && (local_c0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_c8 != '\0') && (local_d0 != 0)) {
    FUN_00d50b20();
  }
  lVar1 = g_02781718;
  if (g_02781718 != 0) {
    FUN_00d50b00();
  }
  lVar2 = g_0277d270;
  local_b0 = lVar1;
  local_a8 = '\x01';
  if (g_0277d270 != 0) {
    FUN_00d50b00();
  }
  local_a0 = lVar2;
  local_98 = '\x01';
  FUN_00d98db0(&local_a0,&local_b0,0);
  puVar3 = local_50;
  lVar1 = *arg1;
  if ((void*)lVar1 == local_50) {
    if (((char)arg1[1] == '\0') && (local_50 != (void*)0x0)) {
      if ((char)local_48 != '\0') goto LAB_00d29747;
      FUN_00d50b00();
      goto LAB_00d2977f;
    }
LAB_00d29784:
    if (((char)local_48 != '\0') && (local_50 != (void*)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    lVar2 = arg1[1];
    if ((char)local_48 == '\0') {
      if (local_50 != (void*)0x0) {
        FUN_00d50b00();
      }
      *arg1 = (int64_t)puVar3;
      if (((char)lVar2 != '\0') && (lVar1 != 0)) {
        FUN_00d50b20();
      }
LAB_00d2977f:
      *(void*)(arg1 + 1) = 1;
      goto LAB_00d29784;
    }
    *arg1 = (int64_t)local_50;
    if (((char)lVar2 != '\0') && (lVar1 != 0)) {
      FUN_00d50b20();
    }
LAB_00d29747:
    *(void*)(arg1 + 1) = 1;
    local_48 = local_48 & 0xffffff00;
  }
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_a8 != '\0') && (local_b0 != 0)) {
    FUN_00d50b20();
  }
  lVar1 = g_0277d278;
  if (g_0277d278 != 0) {
    FUN_00d50b00();
  }
  lVar2 = g_0277d280;
  local_90 = lVar1;
  local_88 = '\x01';
  if (g_0277d280 != 0) {
    FUN_00d50b00();
  }
  local_80 = lVar2;
  local_78 = '\x01';
  FUN_00d98db0(&local_80,&local_90,0);
  puVar3 = local_50;
  lVar1 = *arg1;
  if ((void*)lVar1 == local_50) {
    if (((char)arg1[1] != '\0') || (local_50 == (void*)0x0)) goto LAB_00d298af;
    if ((char)local_48 == '\0') {
      FUN_00d50b00();
      goto LAB_00d298aa;
    }
  }
  else {
    lVar2 = arg1[1];
    if ((char)local_48 == '\0') {
      if (local_50 != (void*)0x0) {
        FUN_00d50b00();
      }
      *arg1 = (int64_t)puVar3;
      if (((char)lVar2 != '\0') && (lVar1 != 0)) {
        FUN_00d50b20();
      }
LAB_00d298aa:
      *(void*)(arg1 + 1) = 1;
LAB_00d298af:
      if (((char)local_48 != '\0') && (local_50 != (void*)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_00d298c3;
    }
    *arg1 = (int64_t)local_50;
    if (((char)lVar2 != '\0') && (lVar1 != 0)) {
      FUN_00d50b20();
    }
  }
  *(void*)(arg1 + 1) = 1;
  local_48 = local_48 & 0xffffff00;
LAB_00d298c3:
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  puVar3 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar3 = &g_025795a8;
  (*g_025795c0)();
  FUN_00e7b4e0();
  FUN_00d8e3d0();
  local_40 = local_60;
  local_48 = 1;
  local_50 = &g_024c5048;
  local_38 = 0;
  if (local_60 != 0) {
    FUN_00d50b00();
  }
  local_38 = '\x01';
  FUN_00d94d80();
  local_50 = &g_024c5048;
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  FUN_00e7b4e0();
  FUN_00d8e3d0();
  lVar1 = local_60;
  local_48 = 1;
  local_50 = &g_024c5048;
  local_38 = 0;
  if (local_60 != 0) {
    FUN_00d50b00();
  }
  local_40 = lVar1;
  local_38 = '\x01';
  FUN_00d94d80();
  local_50 = &g_024c5048;
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  FUN_00e7b4e0();
  FUN_00d8e3d0();
  lVar1 = local_60;
  local_48 = 1;
  local_50 = &g_024c5048;
  local_38 = 0;
  if (local_60 != 0) {
    FUN_00d50b00();
  }
  local_40 = lVar1;
  local_38 = '\x01';
  FUN_00d94d80();
  local_50 = &g_024c5048;
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  FUN_00e7b4e0();
  FUN_00d8e3d0();
  lVar1 = local_60;
  local_48 = 1;
  local_50 = &g_024c5048;
  local_38 = 0;
  if (local_60 != 0) {
    FUN_00d50b00();
  }
  local_40 = lVar1;
  local_38 = '\x01';
  FUN_00d94d80();
  local_50 = &g_024c5048;
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  FUN_00e7b4e0();
  FUN_00d8e3d0();
  lVar1 = local_60;
  local_48 = 1;
  local_50 = &g_024c5048;
  local_38 = 0;
  if (local_60 != 0) {
    FUN_00d50b00();
  }
  local_40 = lVar1;
  local_38 = '\x01';
  FUN_00d94d80();
  local_50 = &g_024c5048;
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  *this_ptr = puVar3;
  *(void*)(this_ptr + 1) = 1;
  return;
}

