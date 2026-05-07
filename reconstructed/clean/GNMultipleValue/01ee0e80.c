// Function: FUN_01ee0e80
// Address: 01ee0e80
// Size: 10653 bytes
// Class: GNMultipleValue

void FUN_01ee0e80(void)

{
  int64_t lVar1;
  uint64_t uVar2;
  int64_t *plVar3;
  int64_t *plVar4;
  int64_t lVar5;
  int64_t this_ptr;
  uint64_t local_128;
  uint32_t local_11c;
  uint64_t local_118;
  uint64_t local_110;
  uint64_t local_108;
  uint64_t local_100;
  char local_f8;
  int64_t *local_f0;
  char local_e8;
  int64_t local_e0;
  char local_d8;
  int64_t local_c8;
  char local_c0;
  uint32_t local_b8;
  int64_t local_b0;
  char local_a8;
  uint32_t local_a0;
  uint64_t local_80;
  char local_78;
  uint32_t local_6c;
  uint32_t local_68;
  uint32_t local_64;
  uint64_t local_60;
  char local_58;
  uint64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  FUN_01cb4330();
  lVar1 = g_027fec80;
  if (g_027fec80 == 0) {
    lVar5 = *(int64_t *)(this_ptr + 0x40);
    if (lVar5 != 0) goto LAB_01ee0ecc;
  }
  else {
    FUN_00d50b00();
    lVar5 = *(int64_t *)(this_ptr + 0x40);
    if (lVar5 == lVar1) {
      FUN_00d50b20();
    }
    else {
LAB_01ee0ecc:
      *(int64_t *)(this_ptr + 0x40) = lVar1;
      if (lVar5 != 0) {
        FUN_00d50b20();
      }
    }
  }
  FUN_01cfbee0(0,0,0);
  plVar4 = *(int64_t **)(this_ptr + 0x48);
  plVar3 = plVar4;
  if (plVar4 != local_f0) {
    if (local_e8 == '\0') {
      if (local_f0 == (int64_t *)0x0) {
        plVar3 = (int64_t *)0x0;
        goto LAB_01ee0f12;
      }
      FUN_00d50b00();
      plVar4 = *(int64_t **)(this_ptr + 0x48);
      *(int64_t **)(this_ptr + 0x48) = local_f0;
      plVar3 = local_f0;
    }
    else {
      local_e8 = '\0';
      plVar3 = local_f0;
LAB_01ee0f12:
      *(int64_t **)(this_ptr + 0x48) = plVar3;
    }
    if (plVar4 != (int64_t *)0x0) {
      FUN_00d50b20();
      plVar3 = local_f0;
    }
  }
  if ((local_e8 != '\0') && (plVar3 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01cfbee0(g_02390124,g_02390124,g_02390124);
  plVar4 = *(int64_t **)(this_ptr + 0x50);
  plVar3 = plVar4;
  if (plVar4 != local_f0) {
    if (local_e8 == '\0') {
      if (local_f0 == (int64_t *)0x0) {
        plVar3 = (int64_t *)0x0;
        goto LAB_01ee0fa7;
      }
      FUN_00d50b00();
      plVar4 = *(int64_t **)(this_ptr + 0x50);
      *(int64_t **)(this_ptr + 0x50) = local_f0;
      plVar3 = local_f0;
    }
    else {
      local_e8 = '\0';
      plVar3 = local_f0;
LAB_01ee0fa7:
      *(int64_t **)(this_ptr + 0x50) = plVar3;
    }
    if (plVar4 != (int64_t *)0x0) {
      FUN_00d50b20();
      plVar3 = local_f0;
    }
  }
  if ((local_e8 != '\0') && (plVar3 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01cfbee0(g_0239109c,g_0239109c,g_0239109c);
  plVar4 = *(int64_t **)(this_ptr + 0x58);
  plVar3 = plVar4;
  if (plVar4 != local_f0) {
    if (local_e8 == '\0') {
      if (local_f0 == (int64_t *)0x0) {
        plVar3 = (int64_t *)0x0;
        goto LAB_01ee103c;
      }
      FUN_00d50b00();
      plVar4 = *(int64_t **)(this_ptr + 0x58);
      *(int64_t **)(this_ptr + 0x58) = local_f0;
      plVar3 = local_f0;
    }
    else {
      local_e8 = '\0';
      plVar3 = local_f0;
LAB_01ee103c:
      *(int64_t **)(this_ptr + 0x58) = plVar3;
    }
    if (plVar4 != (int64_t *)0x0) {
      FUN_00d50b20();
      plVar3 = local_f0;
    }
  }
  if ((local_e8 != '\0') && (plVar3 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01cfbee0(g_02390120,g_02390120,g_02390120);
  plVar4 = *(int64_t **)(this_ptr + 0x60);
  plVar3 = plVar4;
  if (plVar4 != local_f0) {
    if (local_e8 == '\0') {
      if (local_f0 == (int64_t *)0x0) {
        plVar3 = (int64_t *)0x0;
        goto LAB_01ee10d1;
      }
      FUN_00d50b00();
      plVar4 = *(int64_t **)(this_ptr + 0x60);
      *(int64_t **)(this_ptr + 0x60) = local_f0;
      plVar3 = local_f0;
    }
    else {
      local_e8 = '\0';
      plVar3 = local_f0;
LAB_01ee10d1:
      *(int64_t **)(this_ptr + 0x60) = plVar3;
    }
    if (plVar4 != (int64_t *)0x0) {
      FUN_00d50b20();
      plVar3 = local_f0;
    }
  }
  if ((local_e8 != '\0') && (plVar3 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01cfbee0(g_0239109c,g_0239109c,g_0239109c);
  plVar4 = *(int64_t **)(this_ptr + 0x68);
  plVar3 = plVar4;
  if (plVar4 != local_f0) {
    if (local_e8 == '\0') {
      if (local_f0 == (int64_t *)0x0) {
        plVar3 = (int64_t *)0x0;
        goto LAB_01ee1166;
      }
      FUN_00d50b00();
      plVar4 = *(int64_t **)(this_ptr + 0x68);
      *(int64_t **)(this_ptr + 0x68) = local_f0;
      plVar3 = local_f0;
    }
    else {
      local_e8 = '\0';
      plVar3 = local_f0;
LAB_01ee1166:
      *(int64_t **)(this_ptr + 0x68) = plVar3;
    }
    if (plVar4 != (int64_t *)0x0) {
      FUN_00d50b20();
      plVar3 = local_f0;
    }
  }
  if ((local_e8 != '\0') && (plVar3 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01cfbee0(g_02390128,g_02390128,g_02390128);
  plVar4 = *(int64_t **)(this_ptr + 0xf8);
  plVar3 = plVar4;
  if (plVar4 != local_f0) {
    if (local_e8 == '\0') {
      if (local_f0 == (int64_t *)0x0) {
        plVar3 = (int64_t *)0x0;
        goto LAB_01ee11fe;
      }
      FUN_00d50b00();
      plVar4 = *(int64_t **)(this_ptr + 0xf8);
      *(int64_t **)(this_ptr + 0xf8) = local_f0;
      plVar3 = local_f0;
    }
    else {
      local_e8 = '\0';
      plVar3 = local_f0;
LAB_01ee11fe:
      *(int64_t **)(this_ptr + 0xf8) = plVar3;
    }
    if (plVar4 != (int64_t *)0x0) {
      FUN_00d50b20();
      plVar3 = local_f0;
    }
  }
  if ((local_e8 != '\0') && (plVar3 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01cfbee0(g_023b294c,g_023b294c,g_023b294c);
  plVar4 = *(int64_t **)(this_ptr + 0x78);
  plVar3 = plVar4;
  if (plVar4 != local_f0) {
    if (local_e8 == '\0') {
      if (local_f0 == (int64_t *)0x0) {
        plVar3 = (int64_t *)0x0;
        goto LAB_01ee129c;
      }
      FUN_00d50b00();
      plVar4 = *(int64_t **)(this_ptr + 0x78);
      *(int64_t **)(this_ptr + 0x78) = local_f0;
      plVar3 = local_f0;
    }
    else {
      local_e8 = '\0';
      plVar3 = local_f0;
LAB_01ee129c:
      *(int64_t **)(this_ptr + 0x78) = plVar3;
    }
    if (plVar4 != (int64_t *)0x0) {
      FUN_00d50b20();
      plVar3 = local_f0;
    }
  }
  if ((local_e8 != '\0') && (plVar3 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01cfbee0(g_02390120,g_02390120,g_02390120);
  plVar4 = *(int64_t **)(this_ptr + 0x80);
  plVar3 = plVar4;
  if (plVar4 != local_f0) {
    if (local_e8 == '\0') {
      if (local_f0 == (int64_t *)0x0) {
        plVar3 = (int64_t *)0x0;
        goto LAB_01ee1334;
      }
      FUN_00d50b00();
      plVar4 = *(int64_t **)(this_ptr + 0x80);
      *(int64_t **)(this_ptr + 0x80) = local_f0;
      plVar3 = local_f0;
    }
    else {
      local_e8 = '\0';
      plVar3 = local_f0;
LAB_01ee1334:
      *(int64_t **)(this_ptr + 0x80) = plVar3;
    }
    if (plVar4 != (int64_t *)0x0) {
      FUN_00d50b20();
      plVar3 = local_f0;
    }
  }
  if ((local_e8 != '\0') && (plVar3 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01cfbee0(g_02390124,g_02390124,g_02390124);
  plVar4 = *(int64_t **)(this_ptr + 0x70);
  plVar3 = plVar4;
  if (plVar4 != local_f0) {
    if (local_e8 == '\0') {
      if (local_f0 == (int64_t *)0x0) {
        plVar3 = (int64_t *)0x0;
        goto LAB_01ee13d2;
      }
      FUN_00d50b00();
      plVar4 = *(int64_t **)(this_ptr + 0x70);
      *(int64_t **)(this_ptr + 0x70) = local_f0;
      plVar3 = local_f0;
    }
    else {
      local_e8 = '\0';
      plVar3 = local_f0;
LAB_01ee13d2:
      *(int64_t **)(this_ptr + 0x70) = plVar3;
    }
    if (plVar4 != (int64_t *)0x0) {
      FUN_00d50b20();
      plVar3 = local_f0;
    }
  }
  if ((local_e8 != '\0') && (plVar3 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01cfbee0(g_0241f368,g_0241f368,g_0241f368);
  plVar4 = *(int64_t **)(this_ptr + 0x100);
  plVar3 = plVar4;
  if (plVar4 != local_f0) {
    if (local_e8 == '\0') {
      if (local_f0 == (int64_t *)0x0) {
        plVar3 = (int64_t *)0x0;
        goto LAB_01ee146a;
      }
      FUN_00d50b00();
      plVar4 = *(int64_t **)(this_ptr + 0x100);
      *(int64_t **)(this_ptr + 0x100) = local_f0;
      plVar3 = local_f0;
    }
    else {
      local_e8 = '\0';
      plVar3 = local_f0;
LAB_01ee146a:
      *(int64_t **)(this_ptr + 0x100) = plVar3;
    }
    if (plVar4 != (int64_t *)0x0) {
      FUN_00d50b20();
      plVar3 = local_f0;
    }
  }
  if ((local_e8 != '\0') && (plVar3 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01cfbee0(g_02391094,g_02391094,g_02391094);
  plVar4 = *(int64_t **)(this_ptr + 0x88);
  plVar3 = plVar4;
  if (plVar4 != local_f0) {
    if (local_e8 == '\0') {
      if (local_f0 == (int64_t *)0x0) {
        plVar3 = (int64_t *)0x0;
        goto LAB_01ee150b;
      }
      FUN_00d50b00();
      plVar4 = *(int64_t **)(this_ptr + 0x88);
      *(int64_t **)(this_ptr + 0x88) = local_f0;
      plVar3 = local_f0;
    }
    else {
      local_e8 = '\0';
      plVar3 = local_f0;
LAB_01ee150b:
      *(int64_t **)(this_ptr + 0x88) = plVar3;
    }
    if (plVar4 != (int64_t *)0x0) {
      FUN_00d50b20();
      plVar3 = local_f0;
    }
  }
  if ((local_e8 != '\0') && (plVar3 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01cfc6a0(g_02390124);
  plVar4 = *(int64_t **)(this_ptr + 0xa0);
  plVar3 = plVar4;
  if (plVar4 != local_f0) {
    if (local_e8 == '\0') {
      if (local_f0 == (int64_t *)0x0) {
        plVar3 = (int64_t *)0x0;
        goto LAB_01ee15a6;
      }
      FUN_00d50b00();
      plVar4 = *(int64_t **)(this_ptr + 0xa0);
      *(int64_t **)(this_ptr + 0xa0) = local_f0;
      plVar3 = local_f0;
    }
    else {
      local_e8 = '\0';
      plVar3 = local_f0;
LAB_01ee15a6:
      *(int64_t **)(this_ptr + 0xa0) = plVar3;
    }
    if (plVar4 != (int64_t *)0x0) {
      FUN_00d50b20();
      plVar3 = local_f0;
    }
  }
  if ((local_e8 != '\0') && (plVar3 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01cfbee0(g_0239011c,g_0239011c,g_0239011c);
  plVar4 = *(int64_t **)(this_ptr + 0x90);
  plVar3 = plVar4;
  if (plVar4 != local_f0) {
    if (local_e8 == '\0') {
      if (local_f0 == (int64_t *)0x0) {
        plVar3 = (int64_t *)0x0;
        goto LAB_01ee1647;
      }
      FUN_00d50b00();
      plVar4 = *(int64_t **)(this_ptr + 0x90);
      *(int64_t **)(this_ptr + 0x90) = local_f0;
      plVar3 = local_f0;
    }
    else {
      local_e8 = '\0';
      plVar3 = local_f0;
LAB_01ee1647:
      *(int64_t **)(this_ptr + 0x90) = plVar3;
    }
    if (plVar4 != (int64_t *)0x0) {
      FUN_00d50b20();
      plVar3 = local_f0;
    }
  }
  if ((local_e8 != '\0') && (plVar3 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01cfcdc0(g_02390124,g_02390124,g_02390124,g_02390124);
  plVar4 = *(int64_t **)(this_ptr + 0xa8);
  plVar3 = plVar4;
  if (plVar4 != local_f0) {
    if (local_e8 == '\0') {
      if (local_f0 == (int64_t *)0x0) {
        plVar3 = (int64_t *)0x0;
        goto LAB_01ee16eb;
      }
      FUN_00d50b00();
      plVar4 = *(int64_t **)(this_ptr + 0xa8);
      *(int64_t **)(this_ptr + 0xa8) = local_f0;
      plVar3 = local_f0;
    }
    else {
      local_e8 = '\0';
      plVar3 = local_f0;
LAB_01ee16eb:
      *(int64_t **)(this_ptr + 0xa8) = plVar3;
    }
    if (plVar4 != (int64_t *)0x0) {
      FUN_00d50b20();
      plVar3 = local_f0;
    }
  }
  if ((local_e8 != '\0') && (plVar3 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01cfcdc0(0,0,0,g_02390124);
  plVar4 = *(int64_t **)(this_ptr + 0xe0);
  plVar3 = plVar4;
  if (plVar4 != local_f0) {
    if (local_e8 == '\0') {
      if (local_f0 == (int64_t *)0x0) {
        plVar3 = (int64_t *)0x0;
        goto LAB_01ee178f;
      }
      FUN_00d50b00();
      plVar4 = *(int64_t **)(this_ptr + 0xe0);
      *(int64_t **)(this_ptr + 0xe0) = local_f0;
      plVar3 = local_f0;
    }
    else {
      local_e8 = '\0';
      plVar3 = local_f0;
LAB_01ee178f:
      *(int64_t **)(this_ptr + 0xe0) = plVar3;
    }
    if (plVar4 != (int64_t *)0x0) {
      FUN_00d50b20();
      plVar3 = local_f0;
    }
  }
  if ((local_e8 != '\0') && (plVar3 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01cfbee0(g_0241f370,g_0241f370,g_0241f370);
  plVar4 = *(int64_t **)(this_ptr + 0xd0);
  plVar3 = plVar4;
  if (plVar4 != local_f0) {
    if (local_e8 == '\0') {
      if (local_f0 == (int64_t *)0x0) {
        plVar3 = (int64_t *)0x0;
        goto LAB_01ee1830;
      }
      FUN_00d50b00();
      plVar4 = *(int64_t **)(this_ptr + 0xd0);
      *(int64_t **)(this_ptr + 0xd0) = local_f0;
      plVar3 = local_f0;
    }
    else {
      local_e8 = '\0';
      plVar3 = local_f0;
LAB_01ee1830:
      *(int64_t **)(this_ptr + 0xd0) = plVar3;
    }
    if (plVar4 != (int64_t *)0x0) {
      FUN_00d50b20();
      plVar3 = local_f0;
    }
  }
  if ((local_e8 != '\0') && (plVar3 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01cfbee0(0,0,0);
  plVar4 = *(int64_t **)(this_ptr + 0xd8);
  plVar3 = plVar4;
  if (plVar4 != local_f0) {
    if (local_e8 == '\0') {
      if (local_f0 == (int64_t *)0x0) {
        plVar3 = (int64_t *)0x0;
        goto LAB_01ee18cc;
      }
      FUN_00d50b00();
      plVar4 = *(int64_t **)(this_ptr + 0xd8);
      *(int64_t **)(this_ptr + 0xd8) = local_f0;
      plVar3 = local_f0;
    }
    else {
      local_e8 = '\0';
      plVar3 = local_f0;
LAB_01ee18cc:
      *(int64_t **)(this_ptr + 0xd8) = plVar3;
    }
    if (plVar4 != (int64_t *)0x0) {
      FUN_00d50b20();
      plVar3 = local_f0;
    }
  }
  if ((local_e8 != '\0') && (plVar3 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  *(void*)(this_ptr + 0x1b4) = 0x41200000;
  FUN_01cfbee0(g_02390124,g_02390124,g_02390124);
  plVar4 = *(int64_t **)(this_ptr + 0xe8);
  plVar3 = plVar4;
  if (plVar4 != local_f0) {
    if (local_e8 == '\0') {
      if (local_f0 == (int64_t *)0x0) {
        plVar3 = (int64_t *)0x0;
        goto LAB_01ee1978;
      }
      FUN_00d50b00();
      plVar4 = *(int64_t **)(this_ptr + 0xe8);
      *(int64_t **)(this_ptr + 0xe8) = local_f0;
      plVar3 = local_f0;
    }
    else {
      local_e8 = '\0';
      plVar3 = local_f0;
LAB_01ee1978:
      *(int64_t **)(this_ptr + 0xe8) = plVar3;
    }
    if (plVar4 != (int64_t *)0x0) {
      FUN_00d50b20();
      plVar3 = local_f0;
    }
  }
  if ((local_e8 != '\0') && (plVar3 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01cfbee0(g_02394214,g_02394214,g_02394214);
  local_110 = (uint64_t)local_110._4_4_ << 0x20;
  FUN_01cfbee0(g_02390128,g_02390128,g_02390128);
  local_128 = CONCAT44(local_128._4_4_,0x3e4ccccd);
  FUN_01cfbee0(g_02390120,g_02390120,g_02390120);
  local_100 = local_60;
  local_108 = local_50;
  local_118 = local_80;
  FUN_01a01f50(&local_108,&local_110,&local_128,&local_118);
  local_f0 = (int64_t *)&g_026b2470;
  local_a0 = 0x3f800000;
  FUN_01f7b9d0(g_02394294,&local_f0);
  lVar1 = *(int64_t *)(this_ptr + 0xb0);
  lVar5 = lVar1;
  if (lVar1 != local_40) {
    if (local_38 == '\0') {
      if (local_40 == 0) {
        lVar5 = 0;
        goto LAB_01ee1adb;
      }
      FUN_00d50b00();
      lVar1 = *(int64_t *)(this_ptr + 0xb0);
      *(int64_t *)(this_ptr + 0xb0) = local_40;
      lVar5 = local_40;
    }
    else {
      local_38 = '\0';
      lVar5 = local_40;
LAB_01ee1adb:
      *(int64_t *)(this_ptr + 0xb0) = lVar5;
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
      lVar5 = local_40;
    }
  }
  if ((local_38 != '\0') && (lVar5 != 0)) {
    FUN_00d50b20();
  }
  local_f0 = (int64_t *)&g_02628b38;
  if ((local_a8 != '\0') && (local_b0 != 0)) {
    FUN_00d50b20();
  }
  local_f0 = (int64_t *)&g_024f9300;
  if ((local_c0 != '\0') && (local_c8 != 0)) {
    FUN_00d50b20();
  }
  local_f0 = &g_024c5048;
  if ((local_d8 != '\0') && (local_e0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  FUN_01cfbee0(g_02394234,g_02394234,g_02394234);
  local_68 = 0;
  FUN_01cfbee0(g_02390124,g_02390124,g_02390124);
  local_64 = 0;
  FUN_01cfbee0(g_0239109c,g_0239109c,g_0239109c);
  local_6c = 0;
  FUN_01cfbee0(g_02394234,g_02394234,g_02394234);
  local_11c = 0;
  local_108 = local_60;
  local_118 = local_50;
  local_110 = local_80;
  local_128 = local_100;
  FUN_01efc9d0(&local_118,&local_68,&local_64,&local_110);
  FUN_01f7b9d0(0,&local_f0);
  lVar1 = *(int64_t *)(this_ptr + 0x108);
  lVar5 = lVar1;
  if (lVar1 != local_40) {
    if (local_38 == '\0') {
      if (local_40 == 0) {
        lVar5 = 0;
        goto LAB_01ee1d10;
      }
      FUN_00d50b00();
      lVar1 = *(int64_t *)(this_ptr + 0x108);
      *(int64_t *)(this_ptr + 0x108) = local_40;
      lVar5 = local_40;
    }
    else {
      local_38 = '\0';
      lVar5 = local_40;
LAB_01ee1d10:
      *(int64_t *)(this_ptr + 0x108) = lVar5;
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
      lVar5 = local_40;
    }
  }
  if ((local_38 != '\0') && (lVar5 != 0)) {
    FUN_00d50b20();
  }
  FUN_019fe220();
  if ((local_f8 != '\0') && (local_100 != 0)) {
    FUN_00d50b20();
  }
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  FUN_01cfbee0(g_02390124,g_02390124,g_02390124);
  local_68 = 0;
  FUN_01cfbee0(g_02390124,g_02390124,g_02390124);
  local_64 = 0;
  FUN_01cfbee0(g_02394234,g_02394234,g_02394234);
  local_6c = 0;
  FUN_01cfbee0(g_02390124,g_02390124,g_02390124);
  local_11c = 0;
  local_108 = local_60;
  local_118 = local_50;
  local_110 = local_80;
  local_128 = local_100;
  FUN_01efc9d0(&local_118,&local_68,&local_64,&local_110);
  FUN_01f7b9d0(0,&local_f0);
  lVar1 = *(int64_t *)(this_ptr + 0x118);
  lVar5 = lVar1;
  if (lVar1 != local_40) {
    if (local_38 == '\0') {
      if (local_40 == 0) {
        lVar5 = 0;
        goto LAB_01ee1eec;
      }
      FUN_00d50b00();
      lVar1 = *(int64_t *)(this_ptr + 0x118);
      *(int64_t *)(this_ptr + 0x118) = local_40;
      lVar5 = local_40;
    }
    else {
      local_38 = '\0';
      lVar5 = local_40;
LAB_01ee1eec:
      *(int64_t *)(this_ptr + 0x118) = lVar5;
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
      lVar5 = local_40;
    }
  }
  if ((local_38 != '\0') && (lVar5 != 0)) {
    FUN_00d50b20();
  }
  FUN_019fe220();
  if ((local_f8 != '\0') && (local_100 != 0)) {
    FUN_00d50b20();
  }
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  FUN_01cfbee0(g_02390120,g_02390120,g_02390120);
  local_68 = 0;
  FUN_01cfbee0(g_0239109c,g_0239109c,g_0239109c);
  local_64 = 0;
  FUN_01cfbee0(g_02390128,g_02390128,g_02390128);
  local_6c = 0;
  FUN_01cfbee0(g_02390120,g_02390120,g_02390120);
  local_11c = 0;
  local_108 = local_60;
  local_118 = local_50;
  local_110 = local_80;
  local_128 = local_100;
  FUN_01efc9d0(&local_118,&local_68,&local_64,&local_110);
  FUN_01f7b9d0(0,&local_f0);
  lVar1 = *(int64_t *)(this_ptr + 0x120);
  lVar5 = lVar1;
  if (lVar1 != local_40) {
    if (local_38 == '\0') {
      if (local_40 == 0) {
        lVar5 = 0;
        goto LAB_01ee20c8;
      }
      FUN_00d50b00();
      lVar1 = *(int64_t *)(this_ptr + 0x120);
      *(int64_t *)(this_ptr + 0x120) = local_40;
      lVar5 = local_40;
    }
    else {
      local_38 = '\0';
      lVar5 = local_40;
LAB_01ee20c8:
      *(int64_t *)(this_ptr + 0x120) = lVar5;
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
      lVar5 = local_40;
    }
  }
  if ((local_38 != '\0') && (lVar5 != 0)) {
    FUN_00d50b20();
  }
  FUN_019fe220();
  if ((local_f8 != '\0') && (local_100 != 0)) {
    FUN_00d50b20();
  }
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  FUN_01cfbee0(g_0239109c,g_0239109c,g_0239109c);
  local_68 = 0;
  FUN_01cfbee0(g_02390124,g_02390124,g_02390124);
  local_64 = 0;
  FUN_01cfbee0(g_0239109c,g_0239109c,g_0239109c);
  local_6c = 0;
  FUN_01cfbee0(g_02394234,g_02394234,g_02394234);
  local_11c = 0;
  local_108 = local_60;
  local_118 = local_50;
  local_110 = local_80;
  local_128 = local_100;
  FUN_01efc9d0(&local_118,&local_68,&local_64,&local_110);
  FUN_01f7b9d0(0,&local_f0);
  lVar1 = *(int64_t *)(this_ptr + 0x128);
  lVar5 = lVar1;
  if (lVar1 != local_40) {
    if (local_38 == '\0') {
      if (local_40 == 0) {
        lVar5 = 0;
        goto LAB_01ee22a4;
      }
      FUN_00d50b00();
      lVar1 = *(int64_t *)(this_ptr + 0x128);
      *(int64_t *)(this_ptr + 0x128) = local_40;
      lVar5 = local_40;
    }
    else {
      local_38 = '\0';
      lVar5 = local_40;
LAB_01ee22a4:
      *(int64_t *)(this_ptr + 0x128) = lVar5;
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
      lVar5 = local_40;
    }
  }
  if ((local_38 != '\0') && (lVar5 != 0)) {
    FUN_00d50b20();
  }
  FUN_019fe220();
  if ((local_f8 != '\0') && (local_100 != 0)) {
    FUN_00d50b20();
  }
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  FUN_01cfbee0(g_023b8bc0,g_023b8bc0,g_023b8bc0);
  local_108 = local_108 & 0xffffffff00000000;
  FUN_01cfbee0(g_02390124,g_02390124,g_02390124);
  local_80 = local_60;
  local_100 = local_50;
  FUN_0049c630(&local_100,&local_108,4);
  local_f0 = (int64_t *)&g_02647118;
  local_b8 = 0;
  FUN_01f7b9d0(0,&local_f0);
  lVar1 = *(int64_t *)(this_ptr + 0x130);
  lVar5 = lVar1;
  if (lVar1 != local_40) {
    if (local_38 == '\0') {
      if (local_40 == 0) {
        lVar5 = 0;
        goto LAB_01ee2417;
      }
      FUN_00d50b00();
      lVar1 = *(int64_t *)(this_ptr + 0x130);
      *(int64_t *)(this_ptr + 0x130) = local_40;
      lVar5 = local_40;
    }
    else {
      local_38 = '\0';
      lVar5 = local_40;
LAB_01ee2417:
      *(int64_t *)(this_ptr + 0x130) = lVar5;
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
      lVar5 = local_40;
    }
  }
  if ((local_38 != '\0') && (lVar5 != 0)) {
    FUN_00d50b20();
  }
  local_f0 = (int64_t *)&g_024f9300;
  if ((local_c0 != '\0') && (local_c8 != 0)) {
    FUN_00d50b20();
  }
  local_f0 = &g_024c5048;
  if ((local_d8 != '\0') && (local_e0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  FUN_01cfbee0(g_02394dc0,g_02394dc0,g_02394dc0);
  local_68 = 0;
  FUN_01cfbee0(g_0239109c,g_0239109c,g_0239109c);
  local_64 = 0;
  FUN_01cfbee0(g_0241f36c,g_0241f36c,g_0241f36c);
  local_6c = 0;
  FUN_01cfbee0(g_02390124,g_02390124,g_02390124);
  local_11c = 0;
  local_108 = local_60;
  local_118 = local_50;
  local_110 = local_80;
  local_128 = local_100;
  FUN_01efc9d0(&local_118,&local_68,&local_64,&local_110);
  FUN_01f7b9d0(0,&local_f0);
  lVar1 = *(int64_t *)(this_ptr + 0x138);
  lVar5 = lVar1;
  if (lVar1 != local_40) {
    if (local_38 == '\0') {
      if (local_40 == 0) {
        lVar5 = 0;
        goto LAB_01ee25fb;
      }
      FUN_00d50b00();
      lVar1 = *(int64_t *)(this_ptr + 0x138);
      *(int64_t *)(this_ptr + 0x138) = local_40;
      lVar5 = local_40;
    }
    else {
      local_38 = '\0';
      lVar5 = local_40;
LAB_01ee25fb:
      *(int64_t *)(this_ptr + 0x138) = lVar5;
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
      lVar5 = local_40;
    }
  }
  if ((local_38 != '\0') && (lVar5 != 0)) {
    FUN_00d50b20();
  }
  FUN_019fe220();
  if ((local_f8 != '\0') && (local_100 != 0)) {
    FUN_00d50b20();
  }
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  FUN_01cfbee0(g_02394dc0,g_02394dc0,g_02394dc0);
  local_68 = 0;
  FUN_01cfbee0(g_0239109c,g_0239109c,g_0239109c);
  local_64 = 0;
  FUN_01cfbee0(g_0239109c,g_0239109c,g_0239109c);
  local_6c = 0;
  FUN_01cfbee0(g_02390124,g_02390124,g_02390124);
  local_11c = 0;
  local_108 = local_60;
  local_118 = local_50;
  local_110 = local_80;
  local_128 = local_100;
  FUN_01efc9d0(&local_118,&local_68,&local_64,&local_110);
  FUN_01f7b9d0(0,&local_f0);
  lVar1 = *(int64_t *)(this_ptr + 0x140);
  lVar5 = lVar1;
  if (lVar1 != local_40) {
    if (local_38 == '\0') {
      if (local_40 == 0) {
        lVar5 = 0;
        goto LAB_01ee27e0;
      }
      FUN_00d50b00();
      lVar1 = *(int64_t *)(this_ptr + 0x140);
      *(int64_t *)(this_ptr + 0x140) = local_40;
      lVar5 = local_40;
    }
    else {
      local_38 = '\0';
      lVar5 = local_40;
LAB_01ee27e0:
      *(int64_t *)(this_ptr + 0x140) = lVar5;
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
      lVar5 = local_40;
    }
  }
  if ((local_38 != '\0') && (lVar5 != 0)) {
    FUN_00d50b20();
  }
  FUN_019fe220();
  if ((local_f8 != '\0') && (local_100 != 0)) {
    FUN_00d50b20();
  }
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  FUN_01cfbee0(g_02390124,g_02390124,g_02390124);
  local_110 = local_110 & 0xffffffff00000000;
  local_128 = local_128 & 0xffffffff00000000;
  local_68 = 0;
  FUN_01cfbee0(g_0239011c,g_0239011c,g_0239011c);
  local_64 = 0;
  local_80 = local_60;
  local_108 = *(uint64_t *)(this_ptr + 0x88);
  local_118 = local_50;
  local_100 = local_108;
  FUN_01efc9d0(&local_100,&local_110,&local_128,&local_108);
  FUN_01f7b9d0(0,&local_f0);
  lVar1 = *(int64_t *)(this_ptr + 0x148);
  lVar5 = lVar1;
  if (lVar1 != local_40) {
    if (local_38 == '\0') {
      if (local_40 == 0) {
        lVar5 = 0;
        goto LAB_01ee2986;
      }
      FUN_00d50b00();
      lVar1 = *(int64_t *)(this_ptr + 0x148);
      *(int64_t *)(this_ptr + 0x148) = local_40;
      lVar5 = local_40;
    }
    else {
      local_38 = '\0';
      lVar5 = local_40;
LAB_01ee2986:
      *(int64_t *)(this_ptr + 0x148) = lVar5;
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
      lVar5 = local_40;
    }
  }
  if ((local_38 != '\0') && (lVar5 != 0)) {
    FUN_00d50b20();
  }
  FUN_019fe220();
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  FUN_01cfbee0(g_02390124,g_02390124,g_02390124);
  local_110 = local_110 & 0xffffffff00000000;
  local_128 = local_128 & 0xffffffff00000000;
  local_68 = 0;
  FUN_01cfbee0(g_02390124,g_02390124,g_02390124);
  local_64 = 0;
  local_80 = local_60;
  local_108 = *(uint64_t *)(this_ptr + 0x90);
  local_118 = local_50;
  local_100 = local_108;
  FUN_01efc9d0(&local_100,&local_110,&local_128,&local_108);
  FUN_01f7b9d0(0,&local_f0);
  lVar1 = *(int64_t *)(this_ptr + 0x150);
  lVar5 = lVar1;
  if (lVar1 != local_40) {
    if (local_38 == '\0') {
      if (local_40 == 0) {
        lVar5 = 0;
        goto LAB_01ee2b08;
      }
      FUN_00d50b00();
      lVar1 = *(int64_t *)(this_ptr + 0x150);
      *(int64_t *)(this_ptr + 0x150) = local_40;
      lVar5 = local_40;
    }
    else {
      local_38 = '\0';
      lVar5 = local_40;
LAB_01ee2b08:
      *(int64_t *)(this_ptr + 0x150) = lVar5;
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
      lVar5 = local_40;
    }
  }
  if ((local_38 != '\0') && (lVar5 != 0)) {
    FUN_00d50b20();
  }
  FUN_019fe220();
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  FUN_01cfbee0(g_02390120,g_02390120,g_02390120);
  local_68 = 0;
  FUN_01cfbee0(g_02390124,g_02390124,g_02390124);
  local_64 = 0;
  FUN_01cfbee0(g_02390124,g_02390124,g_02390124);
  local_6c = 0;
  FUN_01cfbee0(g_0239109c,g_0239109c,g_0239109c);
  local_11c = 0;
  local_108 = local_60;
  local_118 = local_50;
  local_110 = local_80;
  local_128 = local_100;
  FUN_01efc9d0(&local_118,&local_68,&local_64,&local_110);
  FUN_01f7b9d0(0,&local_f0);
  lVar1 = *(int64_t *)(this_ptr + 0x158);
  lVar5 = lVar1;
  if (lVar1 != local_40) {
    if (local_38 == '\0') {
      if (local_40 == 0) {
        lVar5 = 0;
        goto LAB_01ee2cb6;
      }
      FUN_00d50b00();
      lVar1 = *(int64_t *)(this_ptr + 0x158);
      *(int64_t *)(this_ptr + 0x158) = local_40;
      lVar5 = local_40;
    }
    else {
      local_38 = '\0';
      lVar5 = local_40;
LAB_01ee2cb6:
      *(int64_t *)(this_ptr + 0x158) = lVar5;
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
      lVar5 = local_40;
    }
  }
  if ((local_38 != '\0') && (lVar5 != 0)) {
    FUN_00d50b20();
  }
  FUN_019fe220();
  if ((local_f8 != '\0') && (local_100 != 0)) {
    FUN_00d50b20();
  }
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  FUN_01cfc6a0(g_024229e8);
  plVar4 = *(int64_t **)(this_ptr + 0x160);
  plVar3 = plVar4;
  if (plVar4 != local_f0) {
    if (local_e8 == '\0') {
      if (local_f0 == (int64_t *)0x0) {
        plVar3 = (int64_t *)0x0;
        goto LAB_01ee2daa;
      }
      FUN_00d50b00();
      plVar4 = *(int64_t **)(this_ptr + 0x160);
      *(int64_t **)(this_ptr + 0x160) = local_f0;
      plVar3 = local_f0;
    }
    else {
      local_e8 = '\0';
      plVar3 = local_f0;
LAB_01ee2daa:
      *(int64_t **)(this_ptr + 0x160) = plVar3;
    }
    if (plVar4 != (int64_t *)0x0) {
      FUN_00d50b20();
      plVar3 = local_f0;
    }
  }
  if ((local_e8 != '\0') && (plVar3 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01cfc6a0(g_024112a0);
  plVar4 = *(int64_t **)(this_ptr + 0x168);
  plVar3 = plVar4;
  if (plVar4 != local_f0) {
    if (local_e8 == '\0') {
      if (local_f0 == (int64_t *)0x0) {
        plVar3 = (int64_t *)0x0;
        goto LAB_01ee2e45;
      }
      FUN_00d50b00();
      plVar4 = *(int64_t **)(this_ptr + 0x168);
      *(int64_t **)(this_ptr + 0x168) = local_f0;
      plVar3 = local_f0;
    }
    else {
      local_e8 = '\0';
      plVar3 = local_f0;
LAB_01ee2e45:
      *(int64_t **)(this_ptr + 0x168) = plVar3;
    }
    if (plVar4 != (int64_t *)0x0) {
      FUN_00d50b20();
      plVar3 = local_f0;
    }
  }
  if ((local_e8 != '\0') && (plVar3 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01cfbee0(g_02390124,g_02390128,0);
  plVar4 = *(int64_t **)(this_ptr + 0x170);
  plVar3 = plVar4;
  if (plVar4 != local_f0) {
    if (local_e8 == '\0') {
      if (local_f0 == (int64_t *)0x0) {
        plVar3 = (int64_t *)0x0;
        goto LAB_01ee2eeb;
      }
      FUN_00d50b00();
      plVar4 = *(int64_t **)(this_ptr + 0x170);
      *(int64_t **)(this_ptr + 0x170) = local_f0;
      plVar3 = local_f0;
    }
    else {
      local_e8 = '\0';
      plVar3 = local_f0;
LAB_01ee2eeb:
      *(int64_t **)(this_ptr + 0x170) = plVar3;
    }
    if (plVar4 != (int64_t *)0x0) {
      FUN_00d50b20();
      plVar3 = local_f0;
    }
  }
  if ((local_e8 != '\0') && (plVar3 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01cfbee0(g_02390124,g_02390128,0);
  plVar4 = *(int64_t **)(this_ptr + 0x178);
  plVar3 = plVar4;
  if (plVar4 != local_f0) {
    if (local_e8 == '\0') {
      if (local_f0 == (int64_t *)0x0) {
        plVar3 = (int64_t *)0x0;
        goto LAB_01ee2f91;
      }
      FUN_00d50b00();
      plVar4 = *(int64_t **)(this_ptr + 0x178);
      *(int64_t **)(this_ptr + 0x178) = local_f0;
      plVar3 = local_f0;
    }
    else {
      local_e8 = '\0';
      plVar3 = local_f0;
LAB_01ee2f91:
      *(int64_t **)(this_ptr + 0x178) = plVar3;
    }
    if (plVar4 != (int64_t *)0x0) {
      FUN_00d50b20();
      plVar3 = local_f0;
    }
  }
  if ((local_e8 != '\0') && (plVar3 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01cfbee0(g_023b294c,g_023b294c,g_023b294c);
  plVar4 = *(int64_t **)(this_ptr + 0xc0);
  plVar3 = plVar4;
  if (plVar4 != local_f0) {
    if (local_e8 == '\0') {
      if (local_f0 == (int64_t *)0x0) {
        plVar3 = (int64_t *)0x0;
        goto LAB_01ee3032;
      }
      FUN_00d50b00();
      plVar4 = *(int64_t **)(this_ptr + 0xc0);
      *(int64_t **)(this_ptr + 0xc0) = local_f0;
      plVar3 = local_f0;
    }
    else {
      local_e8 = '\0';
      plVar3 = local_f0;
LAB_01ee3032:
      *(int64_t **)(this_ptr + 0xc0) = plVar3;
    }
    if (plVar4 != (int64_t *)0x0) {
      FUN_00d50b20();
      plVar3 = local_f0;
    }
  }
  if ((local_e8 != '\0') && (plVar3 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01cfbee0(g_023b294c,g_023b294c,g_023b294c);
  plVar4 = *(int64_t **)(this_ptr + 200);
  plVar3 = plVar4;
  if (plVar4 != local_f0) {
    if (local_e8 == '\0') {
      if (local_f0 == (int64_t *)0x0) {
        plVar3 = (int64_t *)0x0;
        goto LAB_01ee30d3;
      }
      FUN_00d50b00();
      plVar4 = *(int64_t **)(this_ptr + 200);
      *(int64_t **)(this_ptr + 200) = local_f0;
      plVar3 = local_f0;
    }
    else {
      local_e8 = '\0';
      plVar3 = local_f0;
LAB_01ee30d3:
      *(int64_t **)(this_ptr + 200) = plVar3;
    }
    if (plVar4 != (int64_t *)0x0) {
      FUN_00d50b20();
      plVar3 = local_f0;
    }
  }
  if ((local_e8 != '\0') && (plVar3 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01cfcdc0(g_02390124,g_02390124,g_02390124,g_02391094);
  plVar4 = *(int64_t **)(this_ptr + 0xf0);
  plVar3 = plVar4;
  if (plVar4 != local_f0) {
    if (local_e8 == '\0') {
      if (local_f0 == (int64_t *)0x0) {
        plVar3 = (int64_t *)0x0;
        goto LAB_01ee317c;
      }
      FUN_00d50b00();
      plVar4 = *(int64_t **)(this_ptr + 0xf0);
      *(int64_t **)(this_ptr + 0xf0) = local_f0;
      plVar3 = local_f0;
    }
    else {
      local_e8 = '\0';
      plVar3 = local_f0;
LAB_01ee317c:
      *(int64_t **)(this_ptr + 0xf0) = plVar3;
    }
    if (plVar4 != (int64_t *)0x0) {
      FUN_00d50b20();
      plVar3 = local_f0;
    }
  }
  if ((local_e8 != '\0') && (plVar3 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  uVar2 = _UNK_02422a08;
  *(void*)(this_ptr + 400) = g_02422a00;
  *(void*)(this_ptr + 0x198) = uVar2;
  uVar2 = _UNK_02422a18;
  *(void*)(this_ptr + 0x1a0) = g_02422a10;
  *(void*)(this_ptr + 0x1a8) = uVar2;
  *(void*)(this_ptr + 0x1b0) = 0x40000000;
  *(void*)(this_ptr + 0x1c8) = 0x4180000041800000;
  *(void*)(this_ptr + 0x1d0) = 0x101;
  *(void*)(this_ptr + 0x1d2) = 1;
  FUN_01cfbee0(g_0239109c,g_0239109c,g_0241b654);
  plVar4 = *(int64_t **)(this_ptr + 0x180);
  plVar3 = plVar4;
  if (plVar4 != local_f0) {
    if (local_e8 == '\0') {
      if (local_f0 == (int64_t *)0x0) {
        plVar3 = (int64_t *)0x0;
        goto LAB_01ee326e;
      }
      FUN_00d50b00();
      plVar4 = *(int64_t **)(this_ptr + 0x180);
      *(int64_t **)(this_ptr + 0x180) = local_f0;
      plVar3 = local_f0;
    }
    else {
      local_e8 = '\0';
      plVar3 = local_f0;
LAB_01ee326e:
      *(int64_t **)(this_ptr + 0x180) = plVar3;
    }
    if (plVar4 != (int64_t *)0x0) {
      FUN_00d50b20();
      plVar3 = local_f0;
    }
  }
  if ((local_e8 != '\0') && (plVar3 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01cfbee0(g_02390124,g_02390124,g_02390124);
  plVar4 = *(int64_t **)(this_ptr + 0x188);
  plVar3 = plVar4;
  if (plVar4 != local_f0) {
    if (local_e8 == '\0') {
      if (local_f0 == (int64_t *)0x0) {
        plVar3 = (int64_t *)0x0;
        goto LAB_01ee330f;
      }
      FUN_00d50b00();
      plVar4 = *(int64_t **)(this_ptr + 0x188);
      *(int64_t **)(this_ptr + 0x188) = local_f0;
      plVar3 = local_f0;
    }
    else {
      local_e8 = '\0';
      plVar3 = local_f0;
LAB_01ee330f:
      *(int64_t **)(this_ptr + 0x188) = plVar3;
    }
    if (plVar4 != (int64_t *)0x0) {
      FUN_00d50b20();
      plVar3 = local_f0;
    }
  }
  if ((local_e8 != '\0') && (plVar3 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  plVar3 = (int64_t *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar3 + 0x18))();
  plVar4 = *(int64_t **)(this_ptr + 0x1b8);
  if (plVar4 == plVar3) {
    FUN_00d50b20();
  }
  else {
    *(int64_t **)(this_ptr + 0x1b8) = plVar3;
    if (plVar4 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  plVar4 = (int64_t *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar4 + 0x18))();
  local_e8 = '\0';
  local_f0 = plVar4;
  FUN_00d21140();
  if ((local_e8 != '\0') && (local_f0 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  plVar4 = (int64_t *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar4 + 0x18))();
  local_e8 = '\0';
  local_f0 = plVar4;
  FUN_00d21140();
  if ((local_e8 != '\0') && (local_f0 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  plVar4 = (int64_t *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar4 + 0x18))();
  local_e8 = '\0';
  local_f0 = plVar4;
  FUN_00d21140();
  if ((local_e8 != '\0') && (local_f0 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  plVar4 = (int64_t *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar4 + 0x18))();
  local_e8 = '\0';
  local_f0 = plVar4;
  FUN_00d21140();
  if ((local_e8 != '\0') && (local_f0 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  plVar4 = (int64_t *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar4 + 0x18))();
  local_e8 = '\0';
  local_f0 = plVar4;
  FUN_00d21140();
  if ((local_e8 != '\0') && (local_f0 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  FUN_01cfc9f0(g_02390124,g_02391090);
  plVar4 = *(int64_t **)(this_ptr + 0x1d8);
  plVar3 = plVar4;
  if (plVar4 != local_f0) {
    if (local_e8 == '\0') {
      if (local_f0 == (int64_t *)0x0) {
        plVar3 = (int64_t *)0x0;
        goto LAB_01ee35eb;
      }
      FUN_00d50b00();
      plVar4 = *(int64_t **)(this_ptr + 0x1d8);
      *(int64_t **)(this_ptr + 0x1d8) = local_f0;
      plVar3 = local_f0;
    }
    else {
      local_e8 = '\0';
      plVar3 = local_f0;
LAB_01ee35eb:
      *(int64_t **)(this_ptr + 0x1d8) = plVar3;
    }
    if (plVar4 != (int64_t *)0x0) {
      FUN_00d50b20();
      plVar3 = local_f0;
    }
  }
  if ((local_e8 != '\0') && (plVar3 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01cfc9f0(0,0);
  plVar4 = *(int64_t **)(this_ptr + 0x1e0);
  plVar3 = plVar4;
  if (plVar4 == local_f0) goto LAB_01ee36d5;
  if (local_e8 == '\0') {
    if (local_f0 == (int64_t *)0x0) {
      plVar3 = (int64_t *)0x0;
      goto LAB_01ee3684;
    }
    FUN_00d50b00();
    plVar4 = *(int64_t **)(this_ptr + 0x1e0);
    *(int64_t **)(this_ptr + 0x1e0) = local_f0;
    plVar3 = local_f0;
  }
  else {
    local_e8 = '\0';
    plVar3 = local_f0;
LAB_01ee3684:
    *(int64_t **)(this_ptr + 0x1e0) = plVar3;
  }
  if (plVar4 != (int64_t *)0x0) {
    FUN_00d50b20();
    plVar3 = local_f0;
  }
LAB_01ee36d5:
  if ((local_e8 != '\0') && (plVar3 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  *(void*)(this_ptr + 0x1e8) = 0x3f800000;
  return;
}

