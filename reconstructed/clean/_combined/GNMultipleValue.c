// ===================================================================
// GNMultipleValue — Complete reconstructed pseudocode
// 117 functions
// ===================================================================


// ============================================================
// 01ee0e80
// ============================================================
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



// ============================================================
// 01f0dcf0
// ============================================================
// Function: FUN_01f0dcf0
// Address: 01f0dcf0
// Size: 6819 bytes
// Class: GNMultipleValue
// String references:
//   "%@%@"

void FUN_01f0dcf0(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t uVar1;
  uint64_t uVar2;
  int64_t lVar3;
  int64_t *plVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint32_t uVar9;
  uint64_t uVar10;
  int64_t lVar11;
  int64_t *plVar12;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t *plVar13;
  uint uVar14;
  int64_t *unaff_R15;
  undefined7 uVar15;
  bool bVar16;
  bool bVar17;
  bool bVar18;
  uint64_t uVar19;
  uint64_t uVar20;
  double dVar21;
  uint64_t uVar22;
  uint64_t extraout_XMM0_Qb;
  uint32_t local_1f8;
  int64_t local_158;
  char local_150;
  int64_t local_148;
  char local_140;
  int64_t *local_b8;
  char local_b0;
  double local_a8;
  double local_a0;
  int64_t *local_98;
  char local_90;
  uint64_t local_88;
  int64_t *local_80;
  int64_t *local_78;
  char local_70;
  int64_t *local_68;
  char local_60;
  int64_t *local_58;
  uint64_t local_50;
  int local_48;
  uint32_t uStack_44;
  char local_40;
  
  if (*arg1 == 0) {
    lVar11 = this_ptr[0x30];
    if ((lVar11 != 0) && (7 < *(int *)(lVar11 + 0x18))) {
      uVar22 = FUN_01d5b240(param_1,**(void**)(lVar11 + 0x10));
      plVar13 = local_68;
      if (local_60 == '\0') {
        if (local_68 != (int64_t *)0x0) {
          uVar22 = FUN_00d50b00();
        }
      }
      else {
        local_60 = '\0';
      }
      FUN_01f10600(uVar22,*(void*)(*(int64_t *)(this_ptr[0x30] + 0x10) + 4));
      if (plVar13 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if (local_60 == '\0') {
        return;
      }
      if (local_68 == (int64_t *)0x0) {
        return;
      }
      FUN_00d50b20();
      return;
    }
LAB_01f0dd8c:
    FUN_01d3a560();
    if (local_68 == (int64_t *)0x0) {
      bVar16 = false;
    }
    else {
      FUN_01d3a560();
      iVar6 = FUN_01d3a5a0();
      bVar16 = iVar6 == 1;
      if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    local_a0 = 0.0;
    if (bVar16) {
LAB_01f0ddf6:
      local_a0 = (double)FUN_00e7d6f0();
    }
  }
  else {
    iVar6 = FUN_01d3a5a0();
    if (iVar6 == 1) goto LAB_01f0ddf6;
    local_a0 = 0.0;
    if (*arg1 == 0) goto LAB_01f0dd8c;
  }
  if (this_ptr[0x2d] == 0) {
    (**(code **)(*this_ptr + 0x930))();
    if (*arg1 != 0) goto LAB_01f0de20;
LAB_01f0f2f2:
    (**(code **)(*this_ptr + 0x658))();
    plVar12 = local_68;
    plVar13 = (int64_t *)*arg1;
    if (plVar13 == local_68) {
      if (((char)arg1[1] == '\0') && (local_68 != (int64_t *)0x0)) {
        if (local_60 != '\0') goto LAB_01f0f35d;
        FUN_00d50b00();
        goto LAB_01f0f3fd;
      }
LAB_01f0f401:
      if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      lVar11 = arg1[1];
      if (local_60 == '\0') {
        if (local_68 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        *arg1 = (int64_t)plVar12;
        if (((char)lVar11 != '\0') && (plVar13 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
LAB_01f0f3fd:
        unaff_R15 = arg1 + 1;
        *(void*)unaff_R15 = 1;
        goto LAB_01f0f401;
      }
      *arg1 = (int64_t)local_68;
      if (((char)lVar11 != '\0') && (plVar13 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
LAB_01f0f35d:
      unaff_R15 = arg1 + 1;
      *(void*)unaff_R15 = 1;
    }
    if (*arg1 != 0) goto LAB_01f0de2e;
LAB_01f0f427:
    local_88 = 0;
    local_80 = (int64_t *)0x0;
  }
  else {
    if (*arg1 == 0) goto LAB_01f0f2f2;
LAB_01f0de20:
    if (*arg1 == 0) goto LAB_01f0f427;
LAB_01f0de2e:
    local_80 = (int64_t *)0x0;
    local_a8 = 0.0;
    local_88 = 0;
LAB_01f0de6a:
    do {
      cVar5 = (**(code **)(*this_ptr + 0x958))();
      if (cVar5 != '\0') goto LAB_01f0f676;
      uVar7 = FUN_01d3a5a0();
      if ((uVar7 & 0xfffffffb) == 1) {
        FUN_01d3abf0();
        uVar19 = FUN_01e466c0();
        uVar22 = extraout_XMM0_Qb;
        FUN_01d5e2b0();
        plVar13 = local_68;
        if (local_60 == '\0') {
          if (local_68 != (int64_t *)0x0) {
            FUN_00d50b00();
            if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            goto LAB_01f0dfe0;
          }
        }
        else if (local_68 != (int64_t *)0x0) {
LAB_01f0dfe0:
          local_60 = '\0';
          local_68 = (int64_t *)0x0;
          local_58 = plVar13;
          local_50 = 0xffffffff;
          local_48 = 0;
          while( true ) {
            lVar11 = (int64_t)(int)local_50;
            iVar6 = (int)local_50 + 1;
            local_50 = CONCAT44(local_50._4_4_,iVar6);
            if (*(int *)((int64_t)local_58 + 0xc) <= iVar6) break;
            local_68 = *(int64_t **)(local_58[2] + 8 + lVar11 * 8);
            unaff_R15 = (int64_t *)((int64_t)iVar6 + (int64_t)local_48);
            lVar11 = (int64_t)unaff_R15 * 0x10;
            uVar1 = *(void*)(*(int64_t *)(this_ptr[0x2d] + 0x10) + lVar11);
            uVar2 = *(void*)(*(int64_t *)(this_ptr[0x2d] + 0x10) + 8 + lVar11);
            uVar20 = (**(code **)(*this_ptr + 0x950))(uVar19);
            local_1f8 = (uint32_t)uVar2;
            cVar5 = FUN_00d05410(uVar20,uVar1,local_1f8,param_4,uVar19,uVar22);
            if (cVar5 != '\0') {
              uVar7 = *(uint *)(this_ptr + 0x28);
              uVar14 = (uint)unaff_R15;
              if (uVar14 == uVar7) {
                cVar5 = FUN_01d64c70();
                bVar16 = true;
                if ((cVar5 == '\0') || (this_ptr[0x29] != 0)) goto LAB_01f0e1f0;
                uVar7 = *(uint *)(this_ptr + 0x28);
              }
              if (-1 < (int)uVar7) {
                iVar6 = *(int *)(this_ptr[0x2d] + 0x18);
                iVar8 = iVar6 + 0xf;
                if (-1 < iVar6) {
                  iVar8 = iVar6;
                }
                if ((int)uVar7 < iVar8 >> 4) {
                  lVar3 = *(int64_t *)(this_ptr[0x2d] + 0x10);
                  (**(code **)(*this_ptr + 0x618))
                            (*(void*)(lVar3 + (uint64_t)uVar7 * 0x10),
                             *(void*)(lVar3 + 8 + (uint64_t)uVar7 * 0x10));
                }
              }
              *(uint *)(this_ptr + 0x28) = uVar14;
              if (uVar14 != 0xffffffff) {
                (**(code **)(*this_ptr + 0x618))
                          (*(void*)(*(int64_t *)(this_ptr[0x2d] + 0x10) + lVar11),
                           *(void*)(*(int64_t *)(this_ptr[0x2d] + 0x10) + 8 + lVar11));
              }
              cVar5 = FUN_01d64c70();
              bVar16 = true;
              if (cVar5 == '\0') goto LAB_01f0e1f0;
              FUN_01d64cb0();
              uVar7 = FUN_01d5b230();
              unaff_R15 = (int64_t *)(uint64_t)uVar7;
              if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              if (uVar7 == 0) goto LAB_01f0e1f0;
              if (this_ptr[0x29] != 0) {
                FUN_01d64cb0();
                if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                goto LAB_01f0e1f0;
              }
              if ((char)this_ptr[0x31] != '\0') {
                FUN_01d64cb0();
                unaff_R15 = local_78;
                if (local_70 == '\0') {
                  if (local_78 != (int64_t *)0x0) {
                    FUN_00d50b00();
                  }
                }
                else {
                  local_70 = '\0';
                }
                FUN_01f11410();
                if (unaff_R15 != (int64_t *)0x0) {
                  FUN_00d50b20();
                }
                if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
              }
              FUN_01f10600();
              FUN_002a0a30();
              bVar17 = false;
              bVar16 = false;
              goto LAB_01f0e1fb;
            }
            if (local_50._4_4_ != 0) {
              if (local_50._4_4_ < 1) {
                iVar6 = -local_50._4_4_;
              }
              else {
                local_50 = CONCAT44(local_50._4_4_,(int)local_50 - local_50._4_4_);
                FUN_00d23690();
                local_48 = local_48 + local_50._4_4_;
                iVar6 = 0;
              }
              local_50 = CONCAT44(iVar6,(int)local_50);
            }
          }
          bVar16 = false;
LAB_01f0e1f0:
          FUN_002a0a30();
          bVar17 = true;
LAB_01f0e1fb:
          FUN_00d50b20();
          if (!bVar17) goto LAB_01f0f676;
          if (bVar16) goto LAB_01f0f1e0;
        }
        if ((int)this_ptr[0x28] != -1) {
          *(void*)(this_ptr + 0x28) = 0xffffffff;
          (**(code **)(*this_ptr + 0x620))();
        }
        plVar13 = (int64_t *)this_ptr[0x2a];
        if (plVar13 == (int64_t *)0x0) goto LAB_01f0f1e0;
        FUN_01d3abf0();
        (**(code **)(*plVar13 + 0x940))();
        plVar13 = local_68;
        if ((((local_60 == '\0') && (local_68 != (int64_t *)0x0)) &&
            (FUN_00d50b00(), local_60 != '\0')) && (local_68 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        unaff_R15 = (int64_t *)this_ptr[0x2a];
        plVar12 = plVar13;
        if (unaff_R15 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        while (plVar12 == (int64_t *)0x0) {
          plVar12 = (int64_t *)unaff_R15[0x2a];
          if (plVar12 == (int64_t *)0x0) goto LAB_01f0e722;
          if (plVar12 != unaff_R15) {
            FUN_00d50b00();
            FUN_00d50b20();
            unaff_R15 = plVar12;
          }
          FUN_01d3abf0();
          (**(code **)(*unaff_R15 + 0x940))();
          plVar12 = local_68;
          if (local_68 == plVar13) {
LAB_01f0e42d:
            plVar12 = plVar13;
            if (local_60 != '\0') {
LAB_01f0e437:
              if (local_68 != (int64_t *)0x0) {
                FUN_00d50b20();
              }
            }
          }
          else {
            if (local_60 == '\0') {
              if (local_68 != (int64_t *)0x0) {
                FUN_00d50b00();
              }
              if (plVar13 != (int64_t *)0x0) {
                FUN_00d50b20();
                plVar13 = plVar12;
                goto LAB_01f0e42d;
              }
              if (local_60 == '\0') goto LAB_01f0e390;
              goto LAB_01f0e437;
            }
            if (plVar13 != (int64_t *)0x0) {
              FUN_00d50b20();
            }
          }
LAB_01f0e390:
          plVar13 = (int64_t *)0x0;
        }
        FUN_01d64cb0();
        plVar4 = local_68;
        plVar13 = (int64_t *)this_ptr[0x27];
        if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar4 != plVar13) {
          plVar13 = (int64_t *)this_ptr[0x2a];
          plVar12 = unaff_R15;
          if (plVar13 != unaff_R15) {
            if (plVar13 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
            plVar12 = plVar13;
            if (unaff_R15 != (int64_t *)0x0) {
              FUN_00d50b20();
            }
          }
          (**(code **)(*this_ptr + 0x938))();
          plVar12[0x29] = 0;
          FUN_01f0dcf0();
          FUN_00d50b20();
          FUN_00d50b20();
          goto LAB_01f0f676;
        }
        plVar13 = plVar12;
        if (unaff_R15 != (int64_t *)0x0) {
LAB_01f0e722:
          FUN_00d50b20();
          plVar12 = plVar13;
        }
        if (plVar12 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
      }
      else if (uVar7 == 8) {
LAB_01f0df27:
        FUN_01d3b5d0();
        if (local_68 == (int64_t *)0x0) {
          bVar16 = false;
        }
        else {
          FUN_01d3b5d0();
          iVar6 = FUN_00d8c7a0();
          if (iVar6 == 0) {
            bVar16 = false;
          }
          else {
            FUN_01d3b5d0();
            cVar5 = FUN_00d8ca70();
            bVar16 = cVar5 == '\x1b';
            if ((local_90 != '\0') && (local_98 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
          if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (bVar16) goto LAB_01f0f43d;
        if ((char)this_ptr[0x31] == '\0') {
LAB_01f0e4bb:
          uVar10 = FUN_01d3b590();
          if ((uVar10 & 0x200) != 0) {
LAB_01f0e663:
            lVar11 = this_ptr[0x27];
            if (lVar11 != 0) {
              FUN_00d50b00();
            }
            uVar9 = FUN_01f11570();
            *(void*)(this_ptr + 0x28) = uVar9;
            if (lVar11 != 0) {
              FUN_00d50b20();
            }
            (**(code **)(*this_ptr + 0x620))();
            goto LAB_01f0f1e0;
          }
          if ((char)this_ptr[0x31] != '\0') goto LAB_01f0e4dd;
LAB_01f0e4ff:
          uVar10 = FUN_01d3b590();
          if ((uVar10 & 0x100) != 0) {
LAB_01f0e6c1:
            lVar11 = this_ptr[0x27];
            if (lVar11 != 0) {
              FUN_00d50b00();
            }
            uVar9 = FUN_01f116d0();
            *(void*)(this_ptr + 0x28) = uVar9;
            if (lVar11 != 0) {
              FUN_00d50b20();
            }
            (**(code **)(*this_ptr + 0x620))();
            goto LAB_01f0f1e0;
          }
        }
        else {
          uVar10 = FUN_01d3b590();
          if ((uVar10 & 0x800) != 0) goto LAB_01f0e663;
          if ((char)this_ptr[0x31] == '\0') goto LAB_01f0e4bb;
LAB_01f0e4dd:
          uVar10 = FUN_01d3b590();
          if ((uVar10 & 0x400) != 0) goto LAB_01f0e6c1;
          if ((char)this_ptr[0x31] == '\0') goto LAB_01f0e4ff;
        }
        if (this_ptr[0x2a] == 0) {
LAB_01f0e565:
          if ((char)this_ptr[0x31] != '\0') goto LAB_01f0e570;
LAB_01f0e592:
          uVar10 = FUN_01d3b590();
          if ((uVar10 & 0x800) == 0) {
LAB_01f0e5a9:
            FUN_01d3b5d0();
            iVar6 = FUN_00d8c7a0();
            if (iVar6 == 0) {
LAB_01f0e5f4:
              FUN_01d3b5d0();
              iVar8 = FUN_00d8c7a0();
              if (iVar8 == 0) {
                bVar16 = false;
              }
              else {
                FUN_01d3b5d0();
                cVar5 = FUN_00d8ca70();
                bVar16 = cVar5 == ' ';
                if ((local_90 != '\0') && (local_98 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
              }
              if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              if (iVar6 != 0) goto LAB_01f0e964;
            }
            else {
              FUN_01d3b5d0();
              cVar5 = FUN_00d8ca70();
              bVar16 = true;
              if (cVar5 != '\r') goto LAB_01f0e5f4;
LAB_01f0e964:
              if ((local_150 != '\0') && (local_158 != 0)) {
                FUN_00d50b20();
              }
            }
            if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if (!bVar16) {
              FUN_01d3b5d0();
              plVar13 = local_68;
              if (local_60 == '\0') {
                if (local_68 != (int64_t *)0x0) {
                  FUN_00d50b00();
                  if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
                    FUN_00d50b20();
                  }
                  goto LAB_01f0eb60;
                }
              }
              else if (local_68 != (int64_t *)0x0) {
LAB_01f0eb60:
                iVar6 = FUN_00d8c7a0();
                if (iVar6 == 1) {
                  uVar15 = (undefined7)((uint64_t)unaff_R15 >> 8);
                  if ((local_a8 != g_02390448) || (NAN(local_a8) || NAN(g_02390448))) {
                    dVar21 = (double)FUN_00e7d6f0();
                    if ((dVar21 - local_a8 <= g_023942d0) || (local_80 == (int64_t *)0x0)) {
                      if (local_80 != (int64_t *)0x0) {
                        local_98 = local_80;
                        local_b8 = plVar13;
                        FUN_00083ea0(2,&local_b8);
                        FUN_00d8cb40();
                        plVar12 = local_78;
                        if (local_70 == '\0') {
                          if (((local_78 != (int64_t *)0x0) && (FUN_00d50b00(), local_70 != '\0'))
                             && (local_78 != (int64_t *)0x0)) {
                            FUN_00d50b20();
                          }
                        }
                        else {
                          local_70 = '\0';
                        }
                        local_68 = (int64_t *)&g_0253d630;
                        if ((local_40 != '\0') && (CONCAT44(uStack_44,local_48) != 0)) {
                          FUN_00d50b20();
                        }
                        local_68 = &g_024c5048;
                        if (((char)local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
                          FUN_00d50b20();
                        }
                        if (plVar12 == local_80) {
                          if (((char)local_88 != '\0') || (plVar12 == (int64_t *)0x0)) {
                            unaff_R15 = (int64_t *)(local_88 & 0xffffffff);
                            goto LAB_01f0ef7a;
                          }
                          unaff_R15 = (int64_t *)CONCAT71(uVar15,1);
                          local_88 = 0;
                          FUN_00d50b00();
                        }
                        else {
                          if (plVar12 != (int64_t *)0x0) {
                            FUN_00d50b00();
                          }
                          unaff_R15 = (int64_t *)CONCAT71(uVar15,1);
                          if ((char)local_88 == '\0') {
                            local_80 = plVar12;
                          }
                          else {
                            FUN_00d50b20();
                            local_80 = plVar12;
                          }
LAB_01f0ef7a:
                          plVar13 = local_80;
                          if (plVar12 == (int64_t *)0x0) goto LAB_01f0ef8b;
                        }
                        plVar13 = local_80;
                        FUN_00d50b20();
                        goto LAB_01f0ef8b;
                      }
                    }
                    else {
                      if ((char)local_88 != '\0') {
                        FUN_00d50b20();
                      }
                      local_88 = 0;
                    }
                    FUN_00d50b00();
                    unaff_R15 = (int64_t *)CONCAT71(uVar15,1);
                  }
                  else if (plVar13 == local_80) {
                    if ((char)local_88 == '\0') {
                      unaff_R15 = (int64_t *)CONCAT71(uVar15,1);
                      FUN_00d50b00();
                      plVar13 = local_80;
                    }
                    else {
                      unaff_R15 = (int64_t *)(local_88 & 0xffffffff);
                      plVar13 = local_80;
                    }
                  }
                  else {
                    FUN_00d50b00();
                    unaff_R15 = (int64_t *)CONCAT71(uVar15,1);
                    if (((char)local_88 != '\0') && (local_80 != (int64_t *)0x0)) {
                      FUN_00d50b20();
                    }
                  }
LAB_01f0ef8b:
                  local_80 = plVar13;
                  if (plVar13 != (int64_t *)0x0) {
                    FUN_01d5e2b0();
                    plVar13 = local_68;
                    if (local_60 == '\0') {
                      if (local_68 != (int64_t *)0x0) {
                        FUN_00d50b00();
                        if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
                          FUN_00d50b20();
                        }
                        goto LAB_01f0efe5;
                      }
                    }
                    else if (local_68 != (int64_t *)0x0) {
LAB_01f0efe5:
                      local_60 = '\0';
                      local_68 = (int64_t *)0x0;
                      local_58 = plVar13;
                      local_50 = 0xffffffff;
                      local_48 = 0;
                      while( true ) {
                        lVar11 = (int64_t)(int)local_50;
                        iVar6 = (int)local_50 + 1;
                        local_50 = CONCAT44(local_50._4_4_,iVar6);
                        if (*(int *)((int64_t)local_58 + 0xc) <= iVar6) break;
                        local_68 = *(int64_t **)(local_58[2] + 8 + lVar11 * 8);
                        FUN_01d65230();
                        if (local_78 == (int64_t *)0x0) {
                          cVar5 = '\0';
                        }
                        else {
                          FUN_01d65230();
                          iVar6 = FUN_00d8c7a0();
                          iVar8 = FUN_00d8c7a0();
                          if (iVar6 < iVar8) {
                            cVar5 = '\0';
                          }
                          else {
                            FUN_01d65230();
                            FUN_00d8c7a0();
                            FUN_00e7b4e0();
                            FUN_00d8e3d0();
                            cVar5 = (**(code **)(*local_b8 + 0x318))();
                            if ((local_b0 != '\0') && (local_b8 != (int64_t *)0x0)) {
                              FUN_00d50b20();
                            }
                            if ((local_140 != '\0') && (local_148 != 0)) {
                              FUN_00d50b20();
                            }
                          }
                          if ((local_90 != '\0') && (local_98 != (int64_t *)0x0)) {
                            FUN_00d50b20();
                          }
                        }
                        if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
                          FUN_00d50b20();
                        }
                        if (cVar5 != '\0') {
                          *(int *)(this_ptr + 0x28) = local_48 + (int)local_50;
                          (**(code **)(*this_ptr + 0x620))();
                          break;
                        }
                        if (local_50._4_4_ != 0) {
                          if (local_50._4_4_ < 1) {
                            iVar6 = -local_50._4_4_;
                          }
                          else {
                            local_50 = CONCAT44(local_50._4_4_,(int)local_50 - local_50._4_4_);
                            FUN_00d23690();
                            local_48 = local_48 + local_50._4_4_;
                            iVar6 = 0;
                          }
                          local_50 = CONCAT44(iVar6,(int)local_50);
                        }
                      }
                      FUN_002a0a30();
                      FUN_00d50b20();
                    }
                  }
                  local_a8 = (double)FUN_00e7d6f0();
                  local_88 = (uint64_t)unaff_R15 & 0xffffffff;
                }
                FUN_00d50b20();
              }
              goto LAB_01f0f1e0;
            }
          }
        }
        else {
          if ((char)this_ptr[0x31] == '\0') {
LAB_01f0e54e:
            uVar10 = FUN_01d3b590();
            if ((uVar10 & 0x400) == 0) goto LAB_01f0e565;
LAB_01f0f746:
            plVar13 = (int64_t *)this_ptr[0x2a];
            if (plVar13 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
            (**(code **)(*this_ptr + 0x938))();
            plVar13[0x29] = 0;
            (**(code **)(*plVar13 + 0x3c0))();
            FUN_00d50b20();
            goto LAB_01f0f676;
          }
          uVar10 = FUN_01d3b590();
          if ((uVar10 & 0x100) != 0) goto LAB_01f0f746;
          if ((char)this_ptr[0x31] == '\0') goto LAB_01f0e54e;
LAB_01f0e570:
          uVar10 = FUN_01d3b590();
          if ((uVar10 & 0x200) == 0) {
            if ((char)this_ptr[0x31] == '\0') goto LAB_01f0e592;
            goto LAB_01f0e5a9;
          }
        }
        if ((int)this_ptr[0x28] == -1) {
          bVar16 = false;
          plVar13 = (int64_t *)0x0;
LAB_01f0eb05:
          uVar10 = FUN_01d3b590();
          bVar18 = (uVar10 & 0xa00) == 0;
          bVar17 = !bVar18;
          unaff_R15 = (int64_t *)(uint64_t)((uint)bVar18 * 2);
          if (bVar16) {
LAB_01f0edb5:
            if (plVar13 != (int64_t *)0x0) {
              FUN_00d50b20();
            }
          }
        }
        else {
          FUN_01d5b240();
          plVar13 = local_68;
          if (local_68 == (int64_t *)0x0) {
            plVar13 = (int64_t *)0x0;
            bVar16 = false;
LAB_01f0ea50:
            bVar17 = false;
          }
          else {
            if (local_60 == '\0') {
              FUN_00d50b00();
            }
            else {
              local_60 = '\0';
            }
            cVar5 = FUN_01d64c70();
            bVar16 = true;
            if (cVar5 == '\0') goto LAB_01f0ea50;
            FUN_01d64cb0();
            iVar6 = FUN_01d5b230();
            bVar17 = iVar6 != 0;
            if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
          if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (!bVar17) goto LAB_01f0eb05;
          cVar5 = FUN_01d66e40();
          if (cVar5 == '\0') {
LAB_01f0ec86:
            FUN_01d64cb0();
            plVar12 = local_68;
            if (local_60 == '\0') {
              if (local_68 != (int64_t *)0x0) {
                FUN_00d50b00();
              }
            }
            else {
              local_60 = '\0';
            }
            iVar6 = FUN_01f11410();
            if (plVar12 != (int64_t *)0x0) {
              FUN_00d50b20();
            }
            if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if (iVar6 == -1) {
              uVar22 = FUN_01d64cb0();
              plVar12 = local_68;
              if (local_60 == '\0') {
                if (local_68 != (int64_t *)0x0) {
                  uVar22 = FUN_00d50b00();
                }
              }
              else {
                local_60 = '\0';
              }
              FUN_01f11570(uVar22,0xffffffff);
              if (plVar12 != (int64_t *)0x0) {
                FUN_00d50b20();
              }
              if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
            }
            FUN_01f10600();
            unaff_R15 = (int64_t *)((int64_t)&MACH_HEADER.magic + 1);
          }
          else {
            FUN_01d65460();
            if (local_68 == (int64_t *)0x0) {
              bVar17 = false;
            }
            else {
              FUN_01d3b5d0();
              iVar6 = FUN_00d8c7a0();
              if (iVar6 == 0) {
                bVar17 = false;
              }
              else {
                FUN_01d3b5d0();
                cVar5 = FUN_00d8ca70();
                bVar17 = cVar5 == '\r';
                if ((local_90 != '\0') && (local_98 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
              }
              if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
            }
            if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if (!bVar17) goto LAB_01f0ec86;
            unaff_R15 = (int64_t *)((int64_t)&MACH_HEADER.magic + 2);
          }
          bVar17 = false;
          if (bVar16) goto LAB_01f0edb5;
        }
        if (!bVar17) {
LAB_01f0e931:
          iVar6 = (int)unaff_R15;
          if ((iVar6 != 0) && (iVar6 != 3)) {
            if (iVar6 == 2) goto LAB_01f0f43d;
            goto LAB_01f0f676;
          }
        }
      }
      else if (uVar7 == 6) {
        if (((local_a0 == g_02390448) && (!NAN(local_a0) && !NAN(g_02390448))) ||
           (dVar21 = (double)FUN_00e7d6f0(), g_023b3490 <= dVar21 - local_a0)) {
          plVar13 = (int64_t *)this_ptr[0x2a];
          if (plVar13 != (int64_t *)0x0) {
            FUN_01d3abf0();
            (**(code **)(*plVar13 + 0x940))();
            if (local_60 == '\0') {
              if (local_68 == (int64_t *)0x0) goto LAB_01f0f43d;
              FUN_00d50b00();
              if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
            }
            else if (local_68 == (int64_t *)0x0) goto LAB_01f0f43d;
            cVar5 = FUN_01d64c70();
            bVar16 = true;
            unaff_R15 = (int64_t *)0x0;
            if (cVar5 != '\0') {
              FUN_01d64cb0();
              plVar12 = local_68;
              plVar13 = (int64_t *)this_ptr[0x27];
              if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              if (plVar12 == plVar13) {
                cVar5 = FUN_01d66e40();
                bVar16 = true;
                if (cVar5 == '\0') {
                  unaff_R15 = (int64_t *)((int64_t)&MACH_HEADER.magic + 3);
                  bVar16 = false;
                }
                else {
                  cVar5 = FUN_01d65320();
                  plVar13 = (int64_t *)0x0;
                  unaff_R15 = (int64_t *)0x0;
                  if (cVar5 != '\0') {
                    FUN_01d65460();
                    plVar12 = local_68;
                    if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
                      FUN_00d50b20();
                    }
                    unaff_R15 = plVar13;
                    if (plVar12 != (int64_t *)0x0) {
                      FUN_01d66680();
                      FUN_01d65ea0();
                      FUN_01d610b0();
                      if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
                        FUN_00d50b20();
                      }
                      FUN_01d65ea0();
                      cVar5 = FUN_01d5e5d0();
                      if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
                        FUN_00d50b20();
                      }
                      if (cVar5 == '\0') {
                        FUN_01d661f0();
                      }
                      else {
                        FUN_01d66740();
                      }
                    }
                  }
                }
              }
              else {
                bVar16 = true;
              }
            }
            FUN_00d50b20();
            if (!bVar16) goto LAB_01f0e931;
          }
          goto LAB_01f0f43d;
        }
      }
      else if (uVar7 == 2) goto LAB_01f0df27;
LAB_01f0f1e0:
      (**(code **)(*this_ptr + 0x658))();
      plVar12 = local_68;
      plVar13 = (int64_t *)*arg1;
      if (plVar13 == local_68) {
        if (((char)arg1[1] == '\0') && (local_68 != (int64_t *)0x0)) {
          plVar12 = plVar13;
          if (local_60 != '\0') goto LAB_01f0de50;
          FUN_00d50b00();
          goto LAB_01f0f296;
        }
LAB_01f0f29e:
        lVar11 = *arg1;
        if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (lVar11 == 0) goto LAB_01f0f43d;
        if (*arg1 == 0) break;
        goto LAB_01f0de6a;
      }
      cVar5 = (char)arg1[1];
      unaff_R15 = (int64_t *)CONCAT71((int7)((uint64_t)unaff_R15 >> 8),cVar5);
      if (local_60 == '\0') {
        if (local_68 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        *arg1 = (int64_t)plVar12;
        if ((cVar5 != '\0') && (plVar13 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
LAB_01f0f296:
        *(void*)(arg1 + 1) = 1;
        goto LAB_01f0f29e;
      }
      *arg1 = (int64_t)local_68;
      if ((cVar5 != '\0') && (plVar13 != (int64_t *)0x0)) {
        FUN_00d50b20();
        plVar12 = (int64_t *)*arg1;
      }
LAB_01f0de50:
      *(void*)(arg1 + 1) = 1;
      if (plVar12 == (int64_t *)0x0) goto LAB_01f0f43d;
    } while (plVar12 != (int64_t *)0x0);
  }
  *(void*)(this_ptr + 0x28) = 0xffffffff;
LAB_01f0f43d:
  (**(code **)(*this_ptr + 0x938))();
  if ((*arg1 != 0) && (iVar6 = FUN_01d3a5a0(), iVar6 == 2)) {
    FUN_01d3b5d0();
    if (local_68 == (int64_t *)0x0) {
      bVar16 = false;
    }
    else {
      FUN_01d3b5d0();
      iVar6 = FUN_00d8c7a0();
      if (iVar6 == 0) {
        bVar16 = false;
      }
      else {
        FUN_01d3b5d0();
        cVar5 = FUN_00d8ca70();
        bVar16 = cVar5 == '\x1b';
        if ((local_90 != '\0') && (local_98 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (bVar16) goto LAB_01f0f676;
  }
  lVar11 = this_ptr[0x28];
  if ((int)lVar11 != -1) {
    uVar22 = FUN_01d5e2b0();
    iVar6 = *(int *)((int64_t)local_68 + 0xc);
    if (local_60 != '\0') {
      uVar22 = FUN_00d50b20();
    }
    if ((int)lVar11 < iVar6) {
      FUN_01d5b240(uVar22,(int)this_ptr[0x28]);
      plVar13 = local_68;
      if ((((local_60 == '\0') && (local_68 != (int64_t *)0x0)) &&
          (FUN_00d50b00(), local_60 != '\0')) && (local_68 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      cVar5 = FUN_01d65320();
      if (cVar5 != '\0') {
        FUN_01d66680();
        FUN_01d610b0();
        FUN_01d65ea0();
        cVar5 = FUN_01d5e5d0();
        if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (cVar5 == '\0') {
          FUN_01d661f0();
        }
        else {
          FUN_01d66740();
        }
      }
      if (plVar13 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
    }
  }
LAB_01f0f676:
  if (((char)local_88 != '\0') && (local_80 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 01d5f100
// ============================================================
// Function: FUN_01d5f100
// Address: 01d5f100
// Size: 5334 bytes
// Class: GNMultipleValue

void FUN_01d5f100(uint64_t param_1,uint64_t param_2,int64_t *param_3,uint32_t param_4,
                 int64_t *param_5)

{
  uint8_t auVar1 [16];
  uint8_t auVar2 [16];
  bool bVar3;
  int64_t *plVar4;
  uint8_t auVar5 [8];
  int64_t *plVar6;
  char cVar7;
  int iVar8;
  uint uVar9;
  undefined7 uVar13;
  int64_t lVar10;
  int64_t *plVar11;
  void*puVar12;
  int64_t *in_RCX;
  int64_t lVar14;
  int64_t *arg1;
  int64_t this_ptr;
  uint64_t uVar15;
  int64_t *unaff_R15;
  uint32_t extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  uint64_t in_XMM0_Qb;
  uint64_t extraout_XMM0_Qb;
  uint64_t extraout_XMM0_Qb_00;
  uint64_t extraout_XMM0_Qb_01;
  uint8_t auVar17 [16];
  uint32_t extraout_XMM0_Db;
  uint64_t extraout_XMM0_Qb_02;
  uint64_t extraout_XMM0_Qb_03;
  uint8_t auVar18 [16];
  uint64_t uVar16;
  float extraout_XMM0_Db_00;
  uint64_t extraout_XMM0_Qb_04;
  uint32_t extraout_XMM0_Dd;
  uint8_t auVar19 [16];
  uint8_t auVar20 [16];
  uint64_t extraout_XMM0_Qb_05;
  uint64_t extraout_XMM0_Qb_06;
  uint8_t auVar21 [16];
  uint8_t auVar22 [16];
  uint8_t in_XMM1 [16];
  uint8_t auVar23 [16];
  uint8_t auVar24 [16];
  uint8_t auVar25 [16];
  uint8_t auVar26 [16];
  uint32_t uVar27;
  float fVar28;
  uint8_t auVar29 [16];
  uint8_t auVar30 [16];
  uint8_t auVar31 [16];
  uint8_t auVar32 [16];
  float fVar33;
  float fVar34;
  float fVar35;
  uint8_t auVar36 [16];
  int64_t *local_res8;
  int local_res10;
  int64_t *local_res18;
  void*local_res20;
  int64_t local_298;
  char local_290;
  int64_t *local_288;
  char local_280;
  int64_t local_278;
  char local_270;
  int64_t local_268;
  char local_260;
  int64_t local_258;
  char local_250;
  int64_t *local_248;
  char local_240;
  int64_t *local_238;
  char local_230;
  int64_t *local_228;
  char local_220;
  int64_t local_218;
  char local_210;
  int64_t local_208;
  char local_200;
  int64_t local_1f8;
  char local_1f0;
  int64_t local_1e8;
  char local_1e0;
  int64_t local_1d8;
  char local_1d0;
  int64_t local_1c8;
  char local_1c0;
  int64_t local_1b8;
  char local_1b0;
  int64_t local_1a8;
  char local_1a0;
  int64_t local_198;
  char local_190;
  int64_t local_188;
  char local_180;
  int64_t *local_178;
  char local_170;
  int64_t local_168;
  char local_160;
  float local_154;
  float local_150;
  float local_14c;
  uint64_t local_148;
  float fStack_140;
  float fStack_13c;
  uint8_t local_138 [16];
  int64_t local_128;
  char local_120;
  int64_t local_118;
  char local_110;
  int64_t *local_e0;
  char local_d8;
  uint64_t local_d0;
  uint8_t local_c8 [8];
  uint64_t uStack_c0;
  uint8_t local_b8 [8];
  uint64_t uStack_b0;
  uint32_t local_9c;
  uint8_t local_98 [8];
  uint64_t uStack_90;
  uint8_t local_88 [8];
  uint64_t uStack_80;
  int64_t *local_68;
  int64_t *local_58;
  char local_50;
  int local_40;
  uint64_t extraout_XMM0_Qb_07;
  uint64_t extraout_XMM0_Qb_08;
  
  plVar6 = local_58;
  uStack_80 = (double)in_XMM0_Qb;
  local_88 = (uint8_t  [8])param_1;
  if (*(int *)(*(int64_t *)(this_ptr + 0x18) + 0xc) == 0) {
    return;
  }
  uVar13 = (undefined7)((uint64_t)local_58 >> 8);
  uVar15 = param_2;
  auVar23 = in_XMM1;
  local_148 = param_3;
  if (*arg1 == 0) {
    FUN_01f50d20();
    local_68 = local_58;
    if (local_58 == (int64_t *)0x0) {
      return;
    }
    local_d0 = CONCAT71(uVar13,1);
    if (local_50 == '\0') {
      FUN_00d50b00();
    }
  }
  else {
    FUN_01e49570();
    local_68 = local_58;
    if (local_58 == (int64_t *)0x0) {
      local_68 = (int64_t *)0x0;
      local_d0 = 0;
    }
    else {
      local_d0 = CONCAT71(uVar13,1);
      if (local_50 == '\0') {
        FUN_00d50b00();
      }
    }
    local_88 = (uint8_t  [8])FUN_01e46ed0();
    uStack_80 = (double)extraout_XMM0_Qb;
  }
  if (local_68 == (int64_t *)0x0) {
    return;
  }
  lVar10 = *param_5;
  if (lVar10 == 0) {
    FUN_01d3a560();
    local_98 = (uint8_t  [8])local_58;
    if (local_50 == '\0') {
      if (local_58 == (int64_t *)0x0) goto LAB_01d5f2d9;
      FUN_00d50b00();
LAB_01d5f294:
      iVar8 = FUN_01d3a5a0();
      if (((iVar8 != 6) && (iVar8 = FUN_01d3a5a0(), iVar8 != 1)) &&
         (iVar8 = FUN_01d3a5a0(), iVar8 != 5)) {
        bVar3 = false;
        goto LAB_01d5f2de;
      }
      local_b8 = (uint8_t  [8])FUN_01d3abf0();
      bVar3 = false;
      uStack_b0 = extraout_XMM0_Qb_00;
    }
    else {
      if (local_58 != (int64_t *)0x0) goto LAB_01d5f294;
LAB_01d5f2d9:
      bVar3 = true;
LAB_01d5f2de:
      local_b8 = local_88;
      uStack_b0 = (uint64_t)uStack_80;
    }
    FUN_01f514b0();
    if ((local_50 == '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b00();
    }
    local_c8 = (uint8_t  [8])FUN_01f51370();
    uStack_c0 = extraout_XMM0_Qb_01;
    auVar17._4_4_ = local_b8._4_4_;
    auVar17._0_4_ = local_b8._4_4_;
    auVar17._8_4_ = uStack_b0._4_4_;
    auVar17._12_4_ = uStack_b0._4_4_;
    auVar36._4_12_ = auVar17._4_12_;
    auVar36._0_4_ = (float)local_b8._4_4_ + g_023b1d84;
    auVar17 = insertps(_local_c8,auVar36,0x10);
    auVar23 = blendps(auVar23,g_023b27d0,0xe);
    uVar15 = 0;
    FUN_01ede930(auVar17._0_8_,5);
    plVar11 = (int64_t *)*param_5;
    if (plVar11 == local_58) {
      if (((char)param_5[1] == '\0') && (local_58 != (int64_t *)0x0)) {
        local_c8._0_4_ = param_4;
        if (local_50 != '\0') goto LAB_01d5f430;
        FUN_00d50b00();
        goto LAB_01d5f47e;
      }
LAB_01d5f48a:
      if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_c8._0_4_ = param_4;
      lVar10 = param_5[1];
      if (local_50 == '\0') {
        if (local_58 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        *param_5 = (int64_t)local_58;
        if (((char)lVar10 != '\0') && (plVar11 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
LAB_01d5f47e:
        *(void*)(param_5 + 1) = 1;
        param_4 = local_c8._0_4_;
        goto LAB_01d5f48a;
      }
      *param_5 = (int64_t)local_58;
      if (((char)lVar10 != '\0') && (plVar11 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
LAB_01d5f430:
      *(void*)(param_5 + 1) = 1;
      local_50 = '\0';
      param_4 = local_c8._0_4_;
    }
    if (local_58 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if (!bVar3) {
      FUN_00d50b20();
    }
    lVar10 = *param_5;
    unaff_R15 = local_58;
    if (lVar10 != 0) goto LAB_01d5f501;
  }
  else {
LAB_01d5f501:
    if (*(int *)(lVar10 + 0xc) != 0) {
      FUN_01ede400();
      local_b8._4_4_ = extraout_XMM0_Db;
      local_b8._0_4_ = extraout_XMM0_Da;
      uStack_b0._0_4_ = (float)(int)extraout_XMM0_Qb_02;
      uStack_b0._4_4_ = (float)(int)((uint64_t)extraout_XMM0_Qb_02 >> 0x20);
      _local_98 = auVar23;
      cVar7 = FUN_00d05410();
      if (cVar7 == '\0') {
        auVar23 = _local_b8;
        if (local_b8._0_4_ <= local_88._0_4_) {
          auVar23 = _local_88;
        }
        auVar17 = blendps(_local_88,auVar23,0xd);
        fVar33 = (float)local_98._0_4_ + local_b8._0_4_;
        fVar34 = (float)local_98._4_4_ + local_b8._4_4_;
        fVar35 = uStack_90._4_4_ + local_b8._12_4_;
        auVar29._4_4_ = fVar34;
        auVar29._0_4_ = fVar33;
        auVar29._8_4_ = (float)uStack_90 + local_b8._8_4_;
        auVar29._12_4_ = fVar35;
        auVar30._4_12_ = auVar29._4_12_;
        auVar30._0_4_ = fVar33 + g_02390d00;
        if (auVar30._0_4_ < auVar23._0_4_) {
          auVar17 = blendps(auVar17,auVar30,1);
        }
        auVar36 = maxps(_local_b8,auVar17);
        _local_88 = blendps(auVar17,auVar36,2);
        auVar23._4_4_ = fVar34;
        auVar23._0_4_ = fVar34;
        auVar23._8_4_ = fVar35;
        auVar23._12_4_ = fVar35;
        auVar24._4_12_ = auVar23._4_12_;
        auVar24._0_4_ = fVar34 + g_02390d00;
        if (auVar24._0_4_ < auVar36._4_4_) {
          _local_88 = insertps(_local_88,auVar24,0x10);
        }
      }
    }
  }
  FUN_00d50b00();
  *(void*)(this_ptr + 0x23) = 1;
  if (*(char *)(this_ptr + 0x20) != '\0') {
    FUN_01d5e350();
  }
  if (*(int64_t *)(this_ptr + 0x40) != 0) {
    *(void*)(this_ptr + 0x40) = 0;
    FUN_00d50b20();
  }
  FUN_01cb4790();
  if ((local_50 == '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  if (*local_148 == 0) {
    (**(code **)(*local_58 + 0x370))();
    plVar4 = local_148;
    plVar11 = (int64_t *)*local_148;
    if (plVar11 == local_58) {
      if (((char)local_148[1] != '\0') || (local_58 == (int64_t *)0x0)) goto LAB_01d5f6c1;
      if (local_50 == '\0') {
        FUN_00d50b00();
        goto LAB_01d5f6bd;
      }
    }
    else {
      lVar10 = local_148[1];
      if (local_50 == '\0') {
        if (local_58 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        *local_148 = (int64_t)local_58;
        if (((char)lVar10 != '\0') && (plVar11 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
LAB_01d5f6bd:
        unaff_R15 = plVar4 + 1;
        *(void*)unaff_R15 = 1;
LAB_01d5f6c1:
        if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        goto LAB_01d5f6d5;
      }
      *local_148 = (int64_t)local_58;
      if (((char)lVar10 != '\0') && (plVar11 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    unaff_R15 = plVar4 + 1;
    *(void*)unaff_R15 = 1;
  }
LAB_01d5f6d5:
  _local_b8 = blendps(ZEXT816(0),in_XMM1,0xd);
  _local_98 = roundps(_local_b8,_local_88,9);
  lVar10 = *(int64_t *)(this_ptr + 0x18);
  if (*(int *)(lVar10 + 0xc) < 1) {
    local_9c = 0;
  }
  else {
    lVar14 = 0;
    do {
      lVar10 = *(int64_t *)(*(int64_t *)(lVar10 + 0x10) + lVar14 * 8);
      if (lVar10 != 0) {
        FUN_00d50b00();
      }
      uVar9 = FUN_01d65e30();
      unaff_R15 = (int64_t *)(uint64_t)uVar9;
      if (lVar10 != 0) {
        FUN_00d50b20();
      }
      lVar10 = *(int64_t *)(this_ptr + 0x18);
      if ((byte)uVar9 != 0) {
        local_9c = (uint32_t)CONCAT71((int7)(uVar15 >> 8),1);
        goto joined_r0x01d5f783;
      }
      lVar14 = lVar14 + 1;
    } while (lVar14 < *(int *)(lVar10 + 0xc));
    local_9c = 0;
joined_r0x01d5f783:
    if (0 < *(int *)(lVar10 + 0xc)) {
      local_c8._0_4_ = param_4;
      uVar15 = 0;
      unaff_R15 = (int64_t *)(uint64_t)(byte)uVar9;
      do {
        lVar10 = *(int64_t *)(*(int64_t *)(lVar10 + 0x10) + uVar15 * 8);
        if (lVar10 != 0) {
          FUN_00d50b00();
        }
        FUN_01d65230();
        if (local_50 == '\0') {
          if (local_58 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_50 = '\0';
        }
        local_298 = *local_148;
        local_290 = '\0';
        local_88 = (uint8_t  [8])(**(code **)(*local_58 + 0x5d0))(unaff_R15,&local_298);
        uStack_80 = (double)extraout_XMM0_Qb_03;
        if ((local_290 != '\0') && (local_298 != 0)) {
          FUN_00d50b20();
        }
        if (local_58 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (lVar10 != 0) {
          FUN_00d50b20();
        }
        auVar18._0_4_ = (float)(int)((double)local_88._0_4_ + g_0240f108);
        auVar18._4_4_ = (float)(int)uStack_80;
        auVar18._8_8_ = 0;
        if (local_b8._0_4_ < auVar18._0_4_) {
          _local_b8 = blendps(_local_b8,auVar18,1);
        }
        auVar26 = _local_98;
        if ((param_2 & 0xffffffff) == uVar15) {
          auVar26._0_4_ = local_98._0_4_ - local_b8._0_4_;
          auVar26._4_4_ = local_98._4_4_ - local_b8._4_4_;
          auVar26._8_4_ = local_98._8_4_ - local_b8._8_4_;
          auVar26._12_4_ = local_98._12_4_ - local_b8._12_4_;
        }
        _local_98 = blendps(_local_98,auVar26,2);
        auVar25._0_4_ = local_88._0_4_ + local_b8._0_4_;
        auVar25._4_4_ = (float)local_88._4_4_ + local_b8._4_4_;
        auVar25._8_4_ = (float)uStack_80 + local_b8._8_4_;
        auVar25._12_4_ = uStack_80._4_4_ + local_b8._12_4_;
        _local_b8 = blendps(auVar25,_local_b8,0xd);
        uVar15 = uVar15 + 1;
        lVar10 = *(int64_t *)(this_ptr + 0x18);
      } while ((int64_t)uVar15 < (int64_t)*(int *)(lVar10 + 0xc));
      param_4 = local_c8._0_4_;
    }
  }
  if (local_res10 == 0) {
    local_c8._4_4_ = (float)local_98._4_4_ - (float)local_b8._4_4_;
    local_c8._0_4_ = (float)local_98._0_4_ - (float)local_b8._0_4_;
    uStack_c0._0_4_ = (uint)((float)uStack_90 - (float)uStack_b0);
    uStack_c0._4_4_ = (uint)(uStack_90._4_4_ - uStack_b0._4_4_);
    lVar10 = *in_RCX;
  }
  else {
    lVar10 = *in_RCX;
    _local_c8 = _local_98;
  }
  if (lVar10 == 0) {
    _local_c8 = _local_98;
  }
  local_138._0_8_ = (**(code **)(*local_58 + 0x3c8))();
  local_138._8_8_ = extraout_XMM0_Qb_04;
  uVar16 = (**(code **)(*local_58 + 0x3c8))(local_138._0_8_,2);
  local_154 = (float)uVar16;
  local_150 = (float)(**(code **)(*local_58 + 0x3c8))(uVar16,1);
  (**(code **)(*local_58 + 0x3c8))();
  lVar10 = *param_5;
  _local_88 = ZEXT416(g_02411dec);
  local_14c = extraout_XMM0_Da_00;
  if ((lVar10 != 0) && (*(int *)(lVar10 + 0xc) != 0)) {
    local_50 = '\0';
    local_58 = (int64_t *)0x0;
    local_40 = -1;
    _local_88 = ZEXT416(g_02411dec);
    fVar33 = extraout_XMM0_Db_00;
    uVar27 = extraout_XMM0_Dd;
    while( true ) {
      lVar14 = (int64_t)local_40;
      local_40 = local_40 + 1;
      if (*(int *)(lVar10 + 0xc) <= local_40) break;
      local_58 = *(int64_t **)(*(int64_t *)(lVar10 + 0x10) + 8 + lVar14 * 8);
      FUN_01ede400();
      if ((float)local_88._0_4_ < fVar33) {
        FUN_01ede400();
        local_88._4_4_ = fVar33;
        local_88._0_4_ = fVar33;
        uStack_80._0_4_ = (float)uVar27;
        uStack_80._4_4_ = (float)uVar27;
      }
    }
    FUN_01edf7b0();
  }
  auVar23 = maxps(in_XMM1,_local_b8);
  local_138._0_4_ = local_138._0_4_ + local_154 + local_b8._0_4_;
  auVar19._4_4_ = auVar23._4_4_;
  auVar19._0_4_ = auVar19._4_4_;
  auVar19._12_4_ = auVar23._12_4_;
  auVar19._8_4_ = auVar19._12_4_;
  auVar20._4_12_ = auVar19._4_12_;
  auVar20._0_4_ = auVar19._4_4_ + local_150 + local_14c;
  auVar23 = insertps(local_138,auVar20,0x10);
  if (auVar20._0_4_ <= (float)local_88._0_4_) {
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uStack_b0;
    _local_b8 = auVar1 << 0x40;
    plVar11 = (int64_t *)*local_res20;
    local_138 = auVar23;
    if (plVar11 == (int64_t *)0x0) goto LAB_01d5fb89;
LAB_01d5fc49:
    cVar7 = *(char *)(local_res20 + 1);
    if (cVar7 != '\0') {
      auVar2._8_8_ = 0;
      auVar2._0_8_ = uStack_80;
      _local_88 = auVar2 << 0x40;
      FUN_00d50b00();
    }
    local_88 = (uint8_t  [8])(CONCAT71((int7)((uint64_t)unaff_R15 >> 8),cVar7) & 0xffffffff);
    lVar10 = plVar11[0x27];
  }
  else {
    plVar11 = (int64_t *)FUN_00e8fc40();
    FUN_00074c30();
    (**(code **)(*plVar11 + 0x18))();
    insertps(local_138,local_88._0_4_,0x10);
    local_b8 = (uint8_t  [8])plVar11;
    (**(code **)(*plVar11 + 0x4d0))();
    local_138 = insertps(auVar23,local_88._0_4_,0x10);
    plVar11 = (int64_t *)*local_res20;
    if (plVar11 != (int64_t *)0x0) goto LAB_01d5fc49;
LAB_01d5fb89:
    plVar11 = (int64_t *)FUN_00e8fc40();
    FUN_0006daf0();
    *plVar11 = (int64_t)&g_026b4ed8;
    plVar11[2] = (int64_t)&g_026b5850;
    plVar11[0x27] = 0;
    *(void*)(plVar11 + 0x28) = 0;
    *(void*)((int64_t)plVar11 + 0x17c) = 0;
    plVar11[0x30] = 0;
    *(void*)(plVar11 + 0x31) = 0;
    plVar11[0x29] = 0;
    plVar11[0x2a] = 0;
    *(void*)((int64_t)plVar11 + 0x154) = 0;
    *(void*)((int64_t)plVar11 + 0x15c) = 0;
    plVar11[0x2d] = 0;
    plVar11[0x2e] = 0;
    *(void*)(plVar11 + 0x2f) = 0;
    uVar16 = (*g_026b4ef0)();
    auVar23 = _local_88;
    local_88._1_7_ = (int7)((uint64_t)uVar16 >> 8);
    local_88[0] = 1;
    uStack_80 = auVar23._8_8_;
    lVar10 = plVar11[0x27];
  }
  if (lVar10 != this_ptr) {
    FUN_00d50b00();
    plVar11[0x27] = this_ptr;
    if (lVar10 != 0) {
      FUN_00d50b20();
    }
  }
  *(int *)(plVar11 + 0x28) = (int)param_2;
  plVar11[0x2b] = *local_148;
  plVar11[0x2e] = *local_res8;
  *(int *)((int64_t)plVar11 + 0x17c) = local_res10;
  *(void*)(plVar11 + 0x2c) = param_4;
  plVar11[0x2a] = *in_RCX;
  *(char *)(plVar11 + 0x2f) = (char)local_9c;
  (**(code **)(*plVar11 + 0x4d0))();
  lVar10 = *local_res18;
  lVar14 = plVar11[0x30];
  if (lVar14 != lVar10) {
    if (lVar10 != 0) {
      FUN_00d50b00();
    }
    plVar11[0x30] = lVar10;
    if (lVar14 != 0) {
      FUN_00d50b20();
    }
  }
  puVar12 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *(void*)((int64_t)puVar12 + 0xc) = 0;
  *puVar12 = &g_026a3350;
  puVar12[2] = &g_026a37c8;
  puVar12[3] = 0;
  puVar12[4] = 0;
  *(void*)(puVar12 + 5) = 0;
  puVar12[6] = 0;
  *(void*)((int64_t)puVar12 + 0x37) = 0;
  *(void*)((int64_t)puVar12 + 0x3c) = 0;
  *(void*)((int64_t)puVar12 + 0x44) = 0;
  *(void*)((int64_t)puVar12 + 0x4c) = 0;
  *(void*)((int64_t)puVar12 + 0x54) = 0;
  *(void*)((int64_t)puVar12 + 0x5c) = 0;
  *(void*)((int64_t)puVar12 + 100) = 0;
  *(void*)((int64_t)puVar12 + 0x69) = 0;
  puVar12[0xf] = 0;
  *(void*)((int64_t)puVar12 + 0x7f) = 0;
  *(void*)((int64_t)puVar12 + 0x84) = 0;
  *(void*)((int64_t)puVar12 + 0x8c) = 0;
  *(void*)((int64_t)puVar12 + 0x94) = 0;
  uVar16 = (*g_026a3368)();
  if (*arg1 != 0) {
    uVar16 = FUN_01e42030();
    if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
      uVar16 = FUN_00d50b20();
    }
    if (local_58 != (int64_t *)0x0) {
      uVar16 = FUN_01e42030();
      local_d8 = 0;
      if (local_50 == '\0') {
        if (local_58 != (int64_t *)0x0) {
          uVar16 = FUN_00d50b00();
        }
      }
      else {
        local_50 = '\0';
      }
      local_d8 = '\x01';
      local_e0 = local_58;
      FUN_01e5b6f0(uVar16,&local_e0);
      if ((local_d8 != '\0') && (local_e0 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_01d5fedb;
    }
  }
  local_288 = local_68;
  local_280 = '\0';
  FUN_01e5b850(uVar16,&local_288);
  if ((local_280 != '\0') && (local_288 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
LAB_01d5fedb:
  lVar10 = g_026fce30;
  if (g_026fce30 != 0) {
    FUN_00d50b00();
  }
  local_278 = lVar10;
  local_270 = '\x01';
  FUN_01e5a050();
  auVar5 = local_b8;
  if ((local_270 != '\0') && (local_278 != 0)) {
    FUN_00d50b20();
  }
  _local_c8 = blendps(_local_c8,_local_98,2);
  local_260 = '\0';
  local_268 = 0;
  FUN_01e5ba50();
  if ((local_260 != '\0') && (local_268 != 0)) {
    FUN_00d50b20();
  }
  if (auVar5 == (uint8_t  [8])0x0) {
    local_230 = '\0';
    local_238 = plVar11;
    FUN_01e5c8b0();
    if ((local_230 != '\0') && (local_238 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_258 = (int64_t)auVar5;
    local_250 = '\0';
    FUN_01e5c8b0();
    if ((local_250 != '\0') && (local_258 != 0)) {
      FUN_00d50b20();
    }
    local_240 = '\0';
    local_248 = plVar11;
    FUN_01d978b0();
    if ((local_240 != '\0') && (local_248 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  FUN_00d403d0();
  local_218 = g_027f0960;
  local_220 = '\0';
  local_228 = plVar11;
  if (g_027f0960 != 0) {
    FUN_00d50b00();
  }
  local_210 = '\x01';
  local_120 = 0;
  if (this_ptr != 0) {
    FUN_00d50b00();
  }
  local_120 = '\x01';
  local_128 = this_ptr;
  FUN_00d41430(&local_128,&local_218);
  if ((local_120 != '\0') && (local_128 != 0)) {
    FUN_00d50b20();
  }
  if ((local_210 != '\0') && (local_218 != 0)) {
    FUN_00d50b20();
  }
  if ((local_220 != '\0') && (local_228 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((*param_5 != 0) && (*(int *)(*param_5 + 0xc) != 0)) {
    FUN_01e5b880();
    local_208 = *param_5;
    local_200 = '\0';
    FUN_01edf3b0();
    local_1f0 = '\0';
    local_1f8 = 0;
    FUN_01e5ba50();
    if ((local_1f0 != '\0') && (local_1f8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_200 != '\0') && (local_208 != 0)) {
      FUN_00d50b20();
    }
  }
  FUN_01e5d9c0();
  if (*in_RCX != 0) {
    fVar33 = (float)FUN_01e5b880();
    fVar33 = (float)((uint)((float)local_c8._0_4_ - fVar33) & g_02390140);
    fVar34 = (float)(local_c8._4_4_ & _UNK_02390144);
    fVar35 = (float)((uint)uStack_c0 & _UNK_02390148);
    fVar28 = (float)(uStack_c0._4_4_ & _UNK_0239014c);
    if (g_023908d8 < fVar33) {
      local_98 = (uint8_t  [8])(**(code **)(*(int64_t *)*in_RCX + 0x948))();
      uStack_90 = extraout_XMM0_Qb_05;
      local_148 = (int64_t *)CONCAT44(fVar34,fVar33);
      fStack_140 = fVar35;
      fStack_13c = fVar28;
      FUN_01e42030();
      if ((local_50 == '\0') && (local_58 != (int64_t *)0x0)) {
        FUN_00d50b00();
      }
      uVar16 = FUN_01e46ed0();
      if (local_res10 == 0) {
        uStack_90 = extraout_XMM0_Qb_06;
        local_98 = (uint8_t  [8])uVar16;
        *(void*)((int64_t)plVar11 + 0x17c) = 2;
        auVar22._0_8_ = FUN_01e5b880();
        auVar22._8_8_ = extraout_XMM0_Qb_08;
        local_1b0 = '\0';
        local_1b8 = 0;
        auVar32._0_4_ = (float)local_148 + (float)local_98._0_4_;
        auVar32._4_4_ = local_148._4_4_ + (float)local_98._4_4_;
        auVar32._8_4_ = fStack_140 + (float)uStack_90;
        auVar32._12_4_ = fStack_13c + uStack_90._4_4_;
        blendps(auVar32,auVar22,2);
        FUN_01e5ba50();
        if ((local_1b0 != '\0') && (local_1b8 != 0)) {
          FUN_00d50b20();
        }
        FUN_01e5b880();
        local_1a8 = *param_5;
        local_1a0 = '\0';
        FUN_01edf3b0();
        local_190 = '\0';
        local_198 = 0;
        FUN_01e5ba50();
        if ((local_190 != '\0') && (local_198 != 0)) {
          FUN_00d50b20();
        }
        if ((local_1a0 != '\0') && (local_1a8 != 0)) {
          FUN_00d50b20();
        }
      }
      else if (local_res10 == 2) {
        uStack_90 = extraout_XMM0_Qb_06;
        local_98 = (uint8_t  [8])uVar16;
        *(void*)((int64_t)plVar11 + 0x17c) = 0;
        auVar21._0_8_ = FUN_01e5b880();
        auVar21._8_8_ = extraout_XMM0_Qb_07;
        local_1e0 = '\0';
        local_1e8 = 0;
        auVar31._0_4_ = (float)local_98._0_4_ - fVar33;
        auVar31._4_4_ = (float)local_98._4_4_ - fVar34;
        auVar31._8_4_ = (float)uStack_90 - fVar35;
        auVar31._12_4_ = uStack_90._4_4_ - fVar28;
        blendps(auVar31,auVar21,2);
        FUN_01e5ba50();
        if ((local_1e0 != '\0') && (local_1e8 != 0)) {
          FUN_00d50b20();
        }
        FUN_01e5b880();
        local_1d8 = *param_5;
        local_1d0 = '\0';
        FUN_01edf3b0();
        local_1c0 = '\0';
        local_1c8 = 0;
        FUN_01e5ba50();
        if ((local_1c0 != '\0') && (local_1c8 != 0)) {
          FUN_00d50b20();
        }
        if ((local_1d0 != '\0') && (local_1d8 != 0)) {
          FUN_00d50b20();
        }
      }
      if (local_58 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
    }
  }
  local_180 = '\0';
  local_188 = 0;
  (**(code **)(*plVar11 + 0x3c0))();
  if ((local_180 != '\0') && (local_188 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d403d0();
  local_168 = g_027f0960;
  local_170 = '\0';
  local_178 = plVar11;
  if (g_027f0960 != 0) {
    FUN_00d50b00();
  }
  local_160 = '\x01';
  local_110 = 0;
  if (this_ptr != 0) {
    FUN_00d50b00();
  }
  local_110 = '\x01';
  local_118 = this_ptr;
  FUN_00d41040(&local_118,&local_168);
  auVar5 = local_b8;
  if ((local_110 != '\0') && (local_118 != 0)) {
    FUN_00d50b20();
  }
  if ((local_160 != '\0') && (local_168 != 0)) {
    FUN_00d50b20();
  }
  if ((local_170 != '\0') && (local_178 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  *(void*)(this_ptr + 0x23) = 0;
  FUN_00d50b20();
  if (local_88[0] != '\0') {
    FUN_00d50b20();
  }
  if (auVar5 != (uint8_t  [8])0x0) {
    FUN_00d50b20();
  }
  if (plVar6 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  if ((char)local_d0 != '\0') {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 00b1e0d0
// ============================================================
// Function: FUN_00b1e0d0
// Address: 00b1e0d0
// Size: 6657 bytes
// Class: GNMultipleValue
// String references:
//   "%I kHz"
//   "%I Hz"
//   "+ %I dB"
//   "- %I dB"

void FUN_00b1e0d0(uint64_t param_1,float param_2)

{
  int64_t *plVar1;
  uint8_t auVar2 [16];
  uint8_t auVar3 [16];
  uint8_t auVar4 [16];
  char cVar5;
  uint64_t uVar6;
  undefined7 uVar7;
  int64_t lVar8;
  void*arg1;
  int64_t *this_ptr;
  byte bVar9;
  int64_t lVar10;
  int64_t lVar11;
  uint8_t auVar12 [8];
  int iVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  uint64_t extraout_XMM0_Qb;
  uint8_t auVar19 [16];
  uint8_t auVar20 [16];
  uint8_t auVar21 [16];
  uint8_t auVar22 [16];
  uint64_t uVar18;
  uint8_t auVar23 [16];
  uint8_t auVar24 [16];
  uint8_t auVar25 [16];
  uint8_t auVar26 [16];
  uint8_t auVar27 [16];
  uint64_t extraout_XMM0_Qb_03;
  uint8_t auVar28 [16];
  uint8_t auVar29 [16];
  uint64_t extraout_XMM0_Qb_04;
  uint8_t auVar30 [16];
  float fVar31;
  uint32_t uVar32;
  uint32_t uVar33;
  uint32_t uVar34;
  uint32_t uStack_f0;
  uint32_t uStack_ec;
  int64_t *local_d8;
  uint32_t local_d0;
  int local_cc;
  float local_c8;
  float fStack_c4;
  uint32_t uStack_c0;
  uint32_t uStack_bc;
  uint64_t local_b0;
  float local_a8;
  float fStack_a4;
  uint32_t uStack_a0;
  uint32_t uStack_9c;
  int64_t local_90;
  uint8_t local_88 [8];
  uint32_t uStack_80;
  uint32_t uStack_7c;
  uint8_t local_68 [16];
  int64_t local_40;
  char local_38;
  uint64_t extraout_XMM0_Qb_00;
  uint64_t extraout_XMM0_Qb_01;
  uint64_t extraout_XMM0_Qb_02;
  
  FUN_00b1d5b0();
  if ((local_38 == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
  }
  uVar18 = *arg1;
  (**(code **)(*this_ptr + 0xac0))();
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  FUN_01d488d0();
  if (local_40 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  plVar1 = (int64_t *)*arg1;
  local_b0 = 0;
  local_90 = 0;
  FUN_01e3f820();
  local_b0 = 0;
  local_90 = 0;
  (**(code **)(*plVar1 + 0x3b0))();
  FUN_01cb4790();
  (**(code **)(*local_d8 + 0x380))();
  local_90 = local_40;
  if (local_40 == 0) {
    bVar9 = 1;
    local_90 = 0;
    uVar18 = 0;
  }
  else {
    uVar7 = (undefined7)((uint64_t)uVar18 >> 8);
    if (local_38 == '\0') {
      FUN_00d50b00();
      bVar9 = 0;
      uVar18 = CONCAT71(uVar7,1);
    }
    else {
      local_38 = '\0';
      uVar18 = CONCAT71(uVar7,1);
      bVar9 = 0;
    }
  }
  if (((char)local_d0 != '\0') && (local_d8 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  lVar8 = local_90;
  uVar6 = FUN_01d44d80();
  uVar7 = (undefined7)((uint64_t)uVar6 >> 8);
  if (local_40 == lVar8) {
    local_b0 = uVar18;
    if ((bool)(bVar9 & local_40 != 0)) {
      local_b0 = CONCAT71(uVar7,1);
      if (local_38 != '\0') goto LAB_00b1e3a4;
      local_b0 = CONCAT71(uVar7,1);
      FUN_00d50b00();
    }
  }
  else {
    if (local_38 != '\0') {
      local_b0 = CONCAT71(uVar7,1);
      if (((byte)uVar18 & local_90 != 0) == 1) {
        local_90 = local_40;
        FUN_00d50b20();
      }
      else {
        local_90 = local_40;
      }
      goto LAB_00b1e3a4;
    }
    if (local_40 != 0) {
      uVar6 = FUN_00d50b00();
    }
    local_b0 = CONCAT71((int7)((uint64_t)uVar6 >> 8),1);
    if (((byte)uVar18 & local_90 != 0) != 1) {
      local_90 = local_40;
      goto LAB_00b1e3a4;
    }
    local_90 = local_40;
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
LAB_00b1e3a4:
  FUN_01d48a10();
  FUN_01e3f820();
  (**(code **)(*this_ptr + 0xac8))();
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  FUN_01d488d0();
  if (local_40 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  FUN_01d48b40();
  (**(code **)(*(int64_t *)*arg1 + 0x550))();
  if (0.0 < param_2) {
    local_c8 = 0.0;
    do {
      fVar31 = local_c8;
      FUN_01e3f820();
      fVar14 = (float)_logf();
      local_88._0_4_ = fVar14 / g_0241c6f0;
      auVar29._0_8_ = _logf();
      auVar29._8_8_ = extraout_XMM0_Qb;
      auVar19._4_12_ = auVar29._4_12_;
      fVar14 = 0.0;
      uVar32 = 0;
      auVar19._0_4_ =
           ((float)auVar29._0_8_ / g_0241c6f0 - (float)local_88._0_4_) * (local_c8 / fVar31) +
           (float)local_88._0_4_;
      local_88._0_4_ = _exp2f(auVar19._0_8_);
      plVar1 = (int64_t *)*arg1;
      if ((local_c8 != g_0239424c) || (NAN(local_c8) || NAN(g_0239424c))) {
        FUN_01e3f820();
        local_a8 = fVar14 * g_0239011c;
        fStack_a4 = fVar14;
        uStack_a0 = uVar32;
        uStack_9c = uVar32;
        if (0 < *(int *)(this_ptr[0x39] + 0xc)) {
          lVar8 = 0;
          do {
            FUN_00b398f0();
            lVar8 = lVar8 + 1;
          } while (lVar8 < *(int *)(this_ptr[0x39] + 0xc));
        }
        FUN_01e3f820();
        (**(code **)(*plVar1 + 0x4e8))();
      }
      else {
        FUN_01e3f820();
        local_a8 = fVar14 * g_0239011c;
        fStack_a4 = fVar14;
        uStack_a0 = uVar32;
        uStack_9c = uVar32;
        if (0 < *(int *)(this_ptr[0x39] + 0xc)) {
          lVar8 = 0;
          do {
            FUN_00b398f0();
            lVar8 = lVar8 + 1;
          } while (lVar8 < *(int *)(this_ptr[0x39] + 0xc));
        }
        FUN_01e3f820();
        (**(code **)(*plVar1 + 0x4d8))();
      }
      local_c8 = local_c8 + g_02390124;
    } while (local_c8 < param_2);
  }
  plVar1 = (int64_t *)*arg1;
  FUN_01e3f820();
  (**(code **)(*plVar1 + 0x4e8))();
  plVar1 = (int64_t *)*arg1;
  FUN_01e3f820();
  FUN_01e3f820();
  (**(code **)(*plVar1 + 0x4e8))();
  (**(code **)(*(int64_t *)*arg1 + 0x558))();
  (**(code **)(*(int64_t *)*arg1 + 0x518))();
  (**(code **)(*(int64_t *)*arg1 + 0x560))();
  cVar5 = (**(code **)(*this_ptr + 0xab8))();
  if (cVar5 != '\0') {
    (**(code **)(*this_ptr + 0xad0))();
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    FUN_01d488d0();
    if (local_40 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    FUN_01d48b40();
    if (0.0 < param_2) {
      local_c8 = g_0240e350 + param_2;
      local_68._0_4_ = 0.0;
      do {
        uVar34 = 0;
        uVar33 = 0;
        uVar32 = 0;
        fVar31 = (float)local_68._0_4_;
        FUN_01e3f820();
        local_88._4_4_ = uVar32;
        local_88._0_4_ = fVar31;
        uStack_80 = uVar33;
        uStack_7c = uVar34;
        local_a8 = (float)_logf();
        local_a8 = local_a8 / g_0241c6f0;
        auVar20._0_8_ = _logf();
        auVar20._8_8_ = extraout_XMM0_Qb_00;
        auVar21._4_12_ = auVar20._4_12_;
        auVar21._0_4_ =
             ((float)auVar20._0_8_ / g_0241c6f0 - local_a8) *
             ((float)local_68._0_4_ / (float)local_88._0_4_) + local_a8;
        uVar32 = _exp2f(auVar21._0_8_);
        if (((int)(float)local_68._0_4_ * -0x11111111 + 0x8888888U >> 2 |
            (int)(float)local_68._0_4_ * -0x40000000) < 0x4444445) {
          local_88._0_4_ = uVar32;
          plVar1 = (int64_t *)*arg1;
          FUN_01e3f820();
          (**(code **)(*plVar1 + 0x3e0))();
          fVar31 = 0.0;
          if ((float)local_68._0_4_ < local_c8) {
            plVar1 = (int64_t *)*arg1;
            if ((float)local_88._0_4_ <= g_02394264) {
              local_cc = (int)(float)local_88._0_4_;
              local_d0 = 1;
              local_d8 = &g_024cc6f0;
              FUN_00d8cb40();
              if (local_38 == '\0') {
                if (local_40 != 0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_38 = '\0';
              }
              FUN_01e3f820();
              (**(code **)(*plVar1 + 0x3f0))
                        ((float)local_68._0_4_ + g_02390d34,fVar31 + g_023b1608);
              if (local_40 != 0) {
                FUN_00d50b20();
              }
              if ((local_38 != '\0') && (local_40 != 0)) {
                FUN_00d50b20();
              }
            }
            else {
              local_cc = (int)((float)local_88._0_4_ / g_02393944);
              local_d0 = 1;
              local_d8 = &g_024cc6f0;
              FUN_00d8cb40((float)local_88._0_4_ / g_02393944,&local_d8);
              if (local_38 == '\0') {
                if (local_40 != 0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_38 = '\0';
              }
              FUN_01e3f820();
              (**(code **)(*plVar1 + 0x3f0))
                        ((float)local_68._0_4_ + g_02390d34,fVar31 + g_023b1608);
              if (local_40 != 0) {
                FUN_00d50b20();
              }
              if ((local_38 != '\0') && (local_40 != 0)) {
                FUN_00d50b20();
              }
            }
          }
        }
        local_68._0_4_ = (float)local_68._0_4_ + g_02390124;
      } while ((float)local_68._0_4_ < param_2);
    }
    if (g_0239424c < g_028a0e30) {
      iVar13 = 0;
      local_68._0_4_ = 0.0;
      do {
        fVar31 = 0.0;
        FUN_01e3f820();
        fVar14 = 0.0;
        uVar32 = 0;
        uVar33 = 0;
        fVar31 = (((float)local_68._0_4_ * fVar31) / g_028a0e30) * g_0239011c;
        plVar1 = (int64_t *)*arg1;
        if (iVar13 == 0) {
          FUN_01e3f820();
          FUN_01e3f820();
          local_88._4_4_ = fVar14;
          local_88._0_4_ = fVar31;
          uStack_80 = uVar32;
          uStack_7c = uVar33;
          FUN_01e3f820();
          (**(code **)(*plVar1 + 0x3e0))();
        }
        else {
          fVar15 = fVar31;
          FUN_01e3f820();
          auVar22._4_4_ = fVar14;
          auVar22._0_4_ = fVar14;
          auVar22._8_4_ = uVar33;
          auVar22._12_4_ = uVar33;
          register0x00001204 = auVar22._4_12_;
          local_88._0_4_ = fVar14 * g_0239011c;
          FUN_01e3f820();
          local_a8 = fVar15;
          fStack_a4 = fVar14;
          uStack_a0 = uVar32;
          uStack_9c = uVar33;
          FUN_01e3f820();
          fVar14 = (float)local_88._4_4_;
          uVar32 = uStack_7c;
          uVar18 = (**(code **)(*plVar1 + 0x3e0))();
          plVar1 = (int64_t *)*arg1;
          local_d0 = 1;
          local_d8 = &g_024cc6f0;
          local_cc = iVar13;
          FUN_00d8cb40(uVar18,&local_d8);
          if (local_38 == '\0') {
            if (local_40 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_38 = '\0';
          }
          FUN_01e3f820();
          fVar31 = (fVar14 * g_0239011c - fVar31) + g_02390d28;
          uVar33 = uVar32;
          (**(code **)(*plVar1 + 0x3f0))();
          if (local_40 != 0) {
            FUN_00d50b20();
          }
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
          plVar1 = (int64_t *)*arg1;
          FUN_01e3f820();
          auVar23._4_4_ = fVar14;
          auVar23._0_4_ = fVar14;
          auVar23._8_4_ = uVar33;
          auVar23._12_4_ = uVar33;
          register0x00001204 = auVar23._4_12_;
          local_88._0_4_ = fVar14 * g_0239011c;
          FUN_01e3f820();
          local_a8 = fVar31;
          fStack_a4 = fVar14;
          uStack_a0 = uVar32;
          uStack_9c = uVar33;
          FUN_01e3f820();
          uVar18 = (**(code **)(*plVar1 + 0x3e0))();
          plVar1 = (int64_t *)*arg1;
          local_d0 = 1;
          local_d8 = &g_024cc6f0;
          local_cc = iVar13;
          FUN_00d8cb40(uVar18,&local_d8);
          if (local_38 == '\0') {
            if (local_40 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_38 = '\0';
          }
          FUN_01e3f820();
          (**(code **)(*plVar1 + 0x3f0))();
          if (local_40 != 0) {
            FUN_00d50b20();
          }
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
        }
        iVar13 = iVar13 + 6;
        local_68._0_4_ = (uint32_t)iVar13;
      } while ((float)local_68._0_4_ < g_028a0e30);
    }
  }
  (**(code **)(*this_ptr + 0xad8))();
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  FUN_01d488d0();
  if (local_40 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  FUN_01d48b40();
  local_68._0_4_ = 0.0;
  if (0.0 < param_2) {
    local_c8 = 0.0;
    do {
      fVar31 = local_c8;
      FUN_01e3f820();
      fVar14 = (float)_logf();
      local_88._0_4_ = fVar14 / g_0241c6f0;
      auVar24._0_8_ = _logf();
      auVar24._8_8_ = extraout_XMM0_Qb_01;
      auVar25._4_12_ = auVar24._4_12_;
      fVar14 = 0.0;
      uVar32 = 0;
      auVar25._0_4_ =
           ((float)auVar24._0_8_ / g_0241c6f0 - (float)local_88._0_4_) * (local_c8 / fVar31) +
           (float)local_88._0_4_;
      local_88._0_4_ = _exp2f(auVar25._0_8_);
      plVar1 = (int64_t *)*arg1;
      if ((local_c8 != g_0239424c) || (NAN(local_c8) || NAN(g_0239424c))) {
        FUN_01e3f820();
        local_a8 = fVar14 * g_0239011c;
        fStack_a4 = fVar14;
        uStack_a0 = uVar32;
        uStack_9c = uVar32;
        if (0 < *(int *)(this_ptr[0x39] + 0xc)) {
          lVar8 = 0;
          do {
            FUN_00b398f0();
            lVar8 = lVar8 + 1;
          } while (lVar8 < *(int *)(this_ptr[0x39] + 0xc));
        }
        FUN_01e3f820();
        (**(code **)(*plVar1 + 0x4e8))();
      }
      else {
        FUN_01e3f820();
        local_a8 = fVar14 * g_0239011c;
        fStack_a4 = fVar14;
        uStack_a0 = uVar32;
        uStack_9c = uVar32;
        if (0 < *(int *)(this_ptr[0x39] + 0xc)) {
          lVar8 = 0;
          do {
            FUN_00b398f0();
            lVar8 = lVar8 + 1;
          } while (lVar8 < *(int *)(this_ptr[0x39] + 0xc));
        }
        FUN_01e3f820();
        (**(code **)(*plVar1 + 0x4d8))();
      }
      local_68._0_4_ = local_c8 + g_02390124;
      local_c8 = (float)local_68._0_4_;
    } while ((float)local_68._0_4_ < param_2);
  }
  uVar33 = 0;
  uVar32 = 0;
  fVar31 = 0.0;
  (**(code **)(*(int64_t *)*arg1 + 0x520))();
  if (local_40 != 0) {
    (**(code **)(*this_ptr + 0xae0))();
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    FUN_01d488d0();
    if (local_40 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    FUN_01d48b40();
    local_68._0_4_ = 0.0;
    if (0.0 < param_2) {
      local_68._0_4_ = 0.0;
      do {
        uVar34 = 0;
        uVar33 = 0;
        uVar32 = 0;
        fVar31 = (float)local_68._0_4_;
        FUN_01e3f820();
        local_88._4_4_ = uVar32;
        local_88._0_4_ = fVar31;
        uStack_80 = uVar33;
        uStack_7c = uVar34;
        local_a8 = (float)_logf();
        local_a8 = local_a8 / g_0241c6f0;
        auVar26._0_8_ = _logf();
        auVar26._8_8_ = extraout_XMM0_Qb_02;
        auVar27._4_12_ = auVar26._4_12_;
        fVar14 = 0.0;
        uVar33 = 0;
        uVar34 = 0;
        fVar31 = (float)local_68._0_4_ / (float)local_88._0_4_;
        auVar27._0_4_ = ((float)auVar26._0_8_ / g_0241c6f0 - local_a8) * fVar31 + local_a8;
        uVar32 = _exp2f(auVar27._0_8_);
        plVar1 = (int64_t *)*arg1;
        local_88._0_4_ = uVar32;
        if (((float)local_68._0_4_ != g_0239424c) ||
           (NAN((float)local_68._0_4_) || NAN(g_0239424c))) {
          FUN_01e3f820();
          local_a8 = fVar31;
          fStack_a4 = fVar14;
          uStack_a0 = uVar33;
          uStack_9c = uVar34;
          local_88._0_4_ = FUN_00b398f0();
          local_c8 = g_028a0e30;
          FUN_01e3f820();
          (**(code **)(*plVar1 + 0x4e8))();
        }
        else {
          FUN_01e3f820();
          local_a8 = fVar31;
          fStack_a4 = fVar14;
          uStack_a0 = uVar33;
          uStack_9c = uVar34;
          local_88._0_4_ = FUN_00b398f0();
          local_c8 = g_028a0e30;
          FUN_01e3f820();
          (**(code **)(*plVar1 + 0x4d8))();
        }
        local_68._0_4_ = (float)local_68._0_4_ + g_02390124;
      } while ((float)local_68._0_4_ < param_2);
    }
    uVar33 = 0;
    uVar32 = 0;
    fVar31 = 0.0;
    (**(code **)(*(int64_t *)*arg1 + 0x520))();
  }
  (**(code **)(*this_ptr + 0xad8))();
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  FUN_01d488d0();
  if (local_40 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  lVar8 = this_ptr[0x39];
  if (*(int *)(lVar8 + 0xc) < 1) {
    auVar12 = (uint8_t  [8])0x0;
    lVar11 = 0;
  }
  else {
    lVar10 = 0;
    lVar11 = 0;
    auVar12 = (uint8_t  [8])0x0;
    do {
      lVar8 = *(int64_t *)(*(int64_t *)(lVar8 + 0x10) + lVar10 * 8);
      cVar5 = SUB81(auVar12,0);
      if (lVar11 == lVar8) {
        lVar8 = lVar11;
        if ((cVar5 == '\0') && (lVar11 != 0)) {
          auVar12 = (uint8_t  [8])0x1;
          FUN_00d50b00();
        }
      }
      else {
        if (lVar8 != 0) {
          FUN_00d50b00();
        }
        auVar12 = (uint8_t  [8])0x1;
        if ((cVar5 != '\0') && (lVar11 != 0)) {
          FUN_00d50b20();
        }
      }
      lVar11 = lVar8;
      FUN_00b39c60();
      FUN_01e3f820();
      local_c8 = (float)local_68._0_4_;
      fStack_c4 = fVar31;
      uStack_c0 = uVar32;
      uStack_bc = uVar33;
      fVar14 = (float)_logf();
      fVar15 = (float)_logf();
      uVar18 = _logf();
      uStack_f0 = (uint32_t)extraout_XMM0_Qb_03;
      uStack_ec = (uint32_t)((uint64_t)extraout_XMM0_Qb_03 >> 0x20);
      uVar32 = FUN_00b39c60();
      local_88._0_4_ = uVar32;
      FUN_01e3f820();
      local_a8 = fVar31 * g_0239011c;
      fStack_a4 = fVar31;
      uStack_a0 = uVar33;
      uStack_9c = uVar33;
      if (*(int *)(this_ptr[0x39] + 0xc) < 1) {
        local_68 = ZEXT816(0);
      }
      else {
        local_68 = ZEXT816(0);
        lVar8 = 0;
        do {
          fVar16 = (float)FUN_00b398f0();
          fVar31 = 0.0;
          local_68._4_4_ = 0;
          local_68._0_4_ = (float)local_68._0_4_ - (fVar16 / g_028a0e30) * local_a8;
          lVar8 = lVar8 + 1;
        } while (lVar8 < *(int *)(this_ptr[0x39] + 0xc));
      }
      FUN_01e3f820();
      auVar4._8_4_ = uStack_f0;
      auVar4._0_8_ = uVar18;
      auVar4._12_4_ = uStack_ec;
      auVar28._4_12_ = auVar4._4_12_;
      auVar28._0_4_ =
           (((float)uVar18 / g_0241c6f0 - fVar14 / g_0241c6f0) * local_c8) /
           (fVar15 / g_0241c6f0 - fVar14 / g_0241c6f0);
      auVar2._4_4_ = 0;
      auVar2._0_4_ = (float)local_68._0_4_ + fVar31 * g_0239011c;
      auVar2._8_4_ = local_68._8_4_;
      auVar2._12_4_ = local_68._12_4_;
      auVar29 = insertps(auVar28,auVar2,0x10);
      fVar31 = 0.0;
      uVar32 = 0;
      uVar33 = 0;
      local_68._0_4_ = g_02390d2c;
      (**(code **)(*(int64_t *)*arg1 + 0x3c0))(auVar29._0_8_);
      lVar10 = lVar10 + 1;
      lVar8 = this_ptr[0x39];
    } while (lVar10 < *(int *)(lVar8 + 0xc));
  }
  if (local_40 != 0) {
    FUN_00b39c60();
    FUN_01e3f820();
    local_c8 = (float)local_68._0_4_;
    fStack_c4 = fVar31;
    uStack_c0 = uVar32;
    uStack_bc = uVar33;
    fVar16 = (float)_logf();
    fVar17 = (float)_logf();
    local_68._0_8_ = _logf();
    local_68._8_8_ = extraout_XMM0_Qb_04;
    local_a8 = (float)FUN_00b39c60();
    local_88 = auVar12;
    FUN_01e3f820();
    fVar15 = fVar31;
    local_a8 = (float)FUN_00b398f0();
    fVar14 = g_028a0e30;
    FUN_01e3f820();
    (**(code **)(*this_ptr + 0xae0))();
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    FUN_01d488d0();
    if (local_40 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    auVar30._4_12_ = local_68._4_12_;
    auVar30._0_4_ =
         (((float)local_68._0_8_ / g_0241c6f0 - fVar16 / g_0241c6f0) * local_c8) /
         (fVar17 / g_0241c6f0 - fVar16 / g_0241c6f0);
    auVar3._4_4_ = fVar15;
    auVar3._0_4_ = fVar15 * g_0239011c + (0.0 - (local_a8 / fVar14) * fVar31 * g_0239011c);
    auVar3._8_4_ = uVar33;
    auVar3._12_4_ = uVar33;
    auVar29 = insertps(auVar30,auVar3,0x10);
    (**(code **)(*(int64_t *)*arg1 + 0x3c0))(auVar29._0_8_,g_02390d2c);
    (**(code **)(*this_ptr + 0xac0))();
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    FUN_01d488d0();
    if (local_40 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    auVar12 = local_88;
    (**(code **)(*(int64_t *)*arg1 + 0x3c0))();
  }
  if ((SUB81(auVar12,0) != '\0') && (lVar11 != 0)) {
    FUN_00d50b20();
  }
  lVar8 = local_90;
  if (local_40 != 0) {
    FUN_00d50b20();
  }
  if (((char)local_b0 != '\0') && (lVar8 != 0)) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 01ec2d30
// ============================================================
// Function: FUN_01ec2d30
// Address: 01ec2d30
// Size: 4995 bytes
// Class: GNMultipleValue
// String references:
//   "GNMultipleValue"
//   "GNControl"
//   "value%I"

void FUN_01ec2d30(void)

{
  int64_t *plVar1;
  void*puVar2;
  bool bVar3;
  bool bVar4;
  int64_t lVar5;
  char cVar6;
  int iVar7;
  void*puVar8;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  undefined7 extraout_var_01;
  undefined7 extraout_var_02;
  undefined7 extraout_var_03;
  undefined7 uVar9;
  int64_t *plVar10;
  int64_t *plVar11;
  int64_t lVar12;
  int64_t *plVar13;
  int64_t *plVar14;
  int64_t *this_ptr;
  void**ppuVar15;
  int64_t **pplVar16;
  uint32_t uVar17;
  uint32_t extraout_XMM0_Da;
  int64_t *local_2c8;
  uint8_t local_2c0;
  int64_t *local_2b8;
  char local_2b0;
  int64_t local_2a8;
  char local_2a0;
  void*local_298;
  char local_290;
  void*local_288;
  char local_280;
  int64_t local_278;
  int64_t local_270;
  int64_t *local_268;
  int64_t local_260;
  char local_258;
  int64_t local_250;
  char local_248;
  int64_t local_240;
  char local_238;
  int64_t local_230;
  char local_228;
  int64_t local_220;
  char local_218;
  int64_t local_210;
  char local_208;
  int64_t local_200;
  char local_1f8;
  int64_t local_1f0;
  void*local_1e8;
  uint32_t local_1e0;
  uint32_t local_1dc;
  void*local_1d8;
  int64_t local_1d0;
  uint64_t local_1c8;
  int64_t *local_1c0;
  uint local_1b8;
  void*local_1b0;
  char local_1a8;
  int64_t local_1a0;
  char local_198;
  int64_t local_190;
  char local_188;
  int64_t local_170;
  char local_168;
  int64_t *local_160;
  int64_t *local_158;
  void*local_138;
  char local_130 [8];
  int64_t local_128;
  char local_120;
  int64_t local_118;
  char local_110;
  int64_t local_108;
  char local_100;
  int64_t local_f8;
  char local_f0;
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
  int64_t local_98;
  char local_90;
  int64_t local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  char local_40;
  int64_t local_38;
  
  local_38 = *(int64_t *)PTR____stack_chk_guard_024a9898;
  local_130[0] = '\0';
  local_138 = (void*)0x0;
  local_128 = 0;
  local_120 = '\0';
  local_118 = 0;
  local_110 = '\0';
  local_108 = 0;
  local_100 = '\0';
  local_f8 = 0;
  local_f0 = '\0';
  local_e8 = 0;
  local_e0 = '\0';
  local_d8 = 0;
  local_d0 = '\0';
  local_c0 = '\0';
  local_c8 = 0;
  local_b0 = '\0';
  local_b8 = 0;
  local_a0 = '\0';
  local_a8 = 0;
  local_90 = '\0';
  local_98 = 0;
  local_80 = '\0';
  local_88 = 0;
  local_70 = '\0';
  local_78 = 0;
  local_60 = '\0';
  local_68 = 0;
  local_50 = '\0';
  local_58 = 0;
  local_40 = '\0';
  local_48 = 0;
  puVar8 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar8 = &g_025795a8;
  (*g_025795c0)();
  local_270 = 0;
  local_1c8 = 0;
  bVar3 = false;
  local_158 = (int64_t *)0x0;
  plVar11 = (int64_t *)0x0;
  local_1d8 = puVar8;
LAB_01ec2eb2:
  do {
    plVar14 = plVar11;
    plVar11 = (int64_t *)(local_130 + local_270 * 0x10 + -8);
    do {
      plVar13 = plVar11;
      lVar12 = local_270;
      iVar7 = FUN_01cc9c20();
      puVar8 = local_1d8;
      if (iVar7 < lVar12) {
        ppuVar15 = &local_138;
        lVar12 = -1;
        goto LAB_01ec3680;
      }
      local_270 = lVar12 + 1;
      local_1e0 = 1;
      local_1e8 = &g_024cc6f0;
      local_1dc = (uint32_t)local_270;
      uVar17 = FUN_00d8cb40(local_270,&local_1e8);
      plVar11 = local_1c0;
      local_160 = (int64_t *)lVar12;
      if (local_158 == local_1c0) {
        plVar11 = local_158;
        if (bVar3) {
          bVar4 = true;
        }
        else if (local_158 == (int64_t *)0x0) {
          bVar4 = false;
        }
        else {
          bVar3 = true;
          if ((char)local_1b8 != '\0') goto LAB_01ec30cd;
          bVar4 = true;
          uVar17 = FUN_00d50b00();
        }
LAB_01ec3090:
        bVar3 = bVar4;
        if (((char)local_1b8 != '\0') && (local_1c0 != (int64_t *)0x0)) {
          uVar17 = FUN_00d50b20();
        }
      }
      else {
        if ((char)local_1b8 == '\0') {
          if (local_1c0 != (int64_t *)0x0) {
            uVar17 = FUN_00d50b00();
          }
          bVar4 = true;
          if ((bVar3) && (local_158 != (int64_t *)0x0)) {
            uVar17 = FUN_00d50b20();
          }
          goto LAB_01ec3090;
        }
        if ((bVar3) && (local_158 != (int64_t *)0x0)) {
          uVar17 = FUN_00d50b20();
          bVar3 = true;
        }
        else {
          bVar3 = true;
        }
      }
LAB_01ec30cd:
      local_2b0 = '\0';
      local_2b8 = plVar11;
      local_158 = plVar11;
      (**(code **)(*this_ptr + 0x4c8))(uVar17,&local_2b8);
      plVar1 = local_1c0;
      plVar11 = (int64_t *)*plVar13;
      if (plVar11 == local_1c0) {
        if (((char)plVar13[1] == '\0') && (local_1c0 != (int64_t *)0x0)) {
          plVar10 = (int64_t *)(local_130 + (int64_t)local_160 * 0x10);
          if ((char)local_1b8 != '\0') goto LAB_01ec3177;
          FUN_00d50b00();
          goto LAB_01ec31bd;
        }
LAB_01ec31c8:
        plVar11 = local_160;
        if (((char)local_1b8 != '\0') && (local_1c0 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        plVar10 = plVar13 + 1;
        lVar12 = plVar13[1];
        if ((char)local_1b8 == '\0') {
          if (local_1c0 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
          *plVar13 = (int64_t)plVar1;
          if (((char)lVar12 != '\0') && (plVar11 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
LAB_01ec31bd:
          *(void*)plVar10 = 1;
          goto LAB_01ec31c8;
        }
        *plVar13 = (int64_t)local_1c0;
        if (((char)lVar12 != '\0') && (plVar11 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
LAB_01ec3177:
        *(void*)plVar10 = 1;
        local_1b8 = local_1b8 & 0xffffff00;
        plVar11 = local_160;
      }
      if ((local_2b0 != '\0') && (local_2b8 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      plVar1 = (int64_t *)*plVar13;
      if ((g_0277a3a0 == '\0') && (iVar7 = ___cxa_guard_acquire(), iVar7 != 0)) {
        g_026d3c38 = FUN_00d4fe50();
        g_026d3c20 = "GNMultipleValue";
        g_026d3c28 = 0x18;
        g_026d3c30 = FUN_00050c70;
        g_026d3c40 = 0;
        ram_00000000026d3c48 = 0;
        g_026d3c50 = 0;
        ram_00000000026d3c58 = 0;
        g_026d3c60 = 0;
        ram_00000000026d3c68 = 0;
        g_026d3c70 = 0;
        ram_00000000026d3c78 = 0;
        g_026d3c80 = 0;
        ram_00000000026d3c88 = 0;
        g_026d3c90 = 0;
        ram_00000000026d3c98 = 0;
        g_026d3ca0 = 0;
        ram_00000000026d3ca8 = 0;
        g_026d3cb0 = 0;
        ram_00000000026d3cb8 = 0;
        g_026d3cc0 = 0;
        ram_00000000026d3cc8 = 0;
        g_026d3cd0 = 0;
        ram_00000000026d3cd8 = 0;
        g_026d3ce0 = 0;
        ___cxa_guard_release();
        plVar11 = local_160;
      }
      plVar10 = &g_02802688;
      if (plVar1 != (int64_t *)0x0) {
        (**(code **)(*plVar1 + 0x360))();
        cVar6 = FUN_00e85ea0();
        plVar10 = plVar13;
        if (cVar6 == '\0') {
          plVar10 = &g_02802688;
        }
      }
      local_160 = (int64_t *)CONCAT71(local_160._1_7_,(char)plVar10[1]);
      if (((char)plVar10[1] == '\0') || (*plVar10 == 0)) {
        if (*plVar10 != 0) goto LAB_01ec3279;
      }
      else {
        FUN_00d50b00();
LAB_01ec3279:
        FUN_00e987e0();
        plVar10 = local_1c0;
        plVar1 = (int64_t *)*plVar13;
        if (plVar1 == local_1c0) {
          if (((char)plVar13[1] == '\0') && (local_1c0 != (int64_t *)0x0)) {
            local_268 = (int64_t *)(local_130 + (int64_t)plVar11 * 0x10);
            if ((char)local_1b8 != '\0') goto LAB_01ec32fa;
            FUN_00d50b00();
            goto LAB_01ec3333;
          }
LAB_01ec333d:
          if (((char)local_1b8 != '\0') && (local_1c0 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_268 = plVar13 + 1;
          lVar12 = plVar13[1];
          if ((char)local_1b8 == '\0') {
            if (local_1c0 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
            *plVar13 = (int64_t)plVar10;
            if (((char)lVar12 != '\0') && (plVar1 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
LAB_01ec3333:
            *(void*)local_268 = 1;
            goto LAB_01ec333d;
          }
          *plVar13 = (int64_t)local_1c0;
          if (((char)lVar12 != '\0') && (plVar1 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
LAB_01ec32fa:
          *(void*)local_268 = 1;
        }
        if ((char)local_160 != '\0') {
          FUN_00d50b20();
        }
      }
      plVar11 = plVar13 + 2;
    } while (*plVar13 == 0);
    local_2c8 = local_158;
    local_2c0 = 0;
    uVar17 = FUN_01ec2c30(local_270,&local_2c8);
    plVar11 = local_1c0;
    uVar9 = extraout_var;
    if (local_1c0 != plVar14) {
      if ((char)local_1b8 == '\0') {
        if (local_1c0 != (int64_t *)0x0) {
          uVar17 = FUN_00d50b00();
          uVar9 = extraout_var_01;
        }
        if (((char)local_1c8 != '\0') && (plVar14 != (int64_t *)0x0)) {
          uVar17 = FUN_00d50b20();
          uVar9 = extraout_var_02;
        }
      }
      else if (((char)local_1c8 != '\0') && (plVar14 != (int64_t *)0x0)) {
        uVar17 = FUN_00d50b20();
        uVar9 = extraout_var_00;
      }
LAB_01ec3527:
      plVar14 = plVar11;
      local_1c8 = CONCAT71(uVar9,1);
      plVar11 = (int64_t *)0x0;
      if (plVar14 != (int64_t *)0x0) break;
      goto LAB_01ec2eb2;
    }
    if (((char)local_1c8 == '\0') && (local_1c0 != (int64_t *)0x0)) {
      plVar11 = plVar14;
      if ((char)local_1b8 == '\0') {
        uVar17 = FUN_00d50b00();
        uVar9 = extraout_var_03;
      }
      goto LAB_01ec3527;
    }
    if (((char)local_1b8 != '\0') && (local_1c0 != (int64_t *)0x0)) {
      uVar17 = FUN_00d50b20();
    }
    plVar11 = (int64_t *)0x0;
  } while (plVar14 == (int64_t *)0x0);
  local_2a8 = *plVar13;
  local_2a0 = '\0';
  (**(code **)(*plVar14 + 0x388))(uVar17,&local_2a8);
  plVar1 = local_1c0;
  plVar11 = (int64_t *)*plVar13;
  if (plVar11 == local_1c0) {
    if (((char)plVar13[1] != '\0') || (local_1c0 == (int64_t *)0x0)) goto LAB_01ec361d;
    if ((char)local_1b8 == '\0') {
      FUN_00d50b00();
      goto LAB_01ec3618;
    }
  }
  else {
    local_160 = plVar13;
    lVar12 = plVar13[1];
    if ((char)local_1b8 == '\0') {
      if (local_1c0 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      *local_160 = (int64_t)plVar1;
      if (((char)lVar12 != '\0') && (plVar11 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
LAB_01ec3618:
      *(void*)(plVar13 + 1) = 1;
LAB_01ec361d:
      if (((char)local_1b8 != '\0') && (local_1c0 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_01ec3637;
    }
    *plVar13 = (int64_t)local_1c0;
    if (((char)lVar12 != '\0') && (plVar11 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  *(void*)(plVar13 + 1) = 1;
  local_1b8 = local_1b8 & 0xffffff00;
LAB_01ec3637:
  plVar11 = plVar14;
  if ((local_2a0 != '\0') && (local_2a8 != 0)) {
    FUN_00d50b20();
  }
  goto LAB_01ec2eb2;
  while (puVar2 = *ppuVar15, ppuVar15 = ppuVar15 + 2, puVar2 == (void*)0x0) {
LAB_01ec3680:
    iVar7 = FUN_01cc9c20();
    lVar12 = lVar12 + 1;
    if (iVar7 <= lVar12) {
      lVar12 = this_ptr[0xb];
      if (lVar12 != 0) {
        local_258 = 0;
        uVar17 = FUN_00d50b00();
        local_258 = '\x01';
        local_260 = lVar12;
        FUN_00d93870(uVar17,g_025908a0);
        if ((local_258 != '\0') && (local_260 != 0)) {
          FUN_00d50b20();
        }
      }
      goto switchD_01ec36ca_default;
    }
  }
  uVar17 = FUN_01cc9c20();
  switch(uVar17) {
  case 0:
    local_248 = 0;
    lVar12 = this_ptr[10];
    uVar17 = extraout_XMM0_Da;
    if (lVar12 != 0) {
      uVar17 = FUN_00d50b00();
    }
    local_248 = '\x01';
    local_250 = lVar12;
    FUN_00d93870(uVar17,g_025908a0);
    if ((local_248 != '\0') && (local_250 != 0)) {
      FUN_00d50b20();
    }
    break;
  case 1:
    local_238 = 0;
    lVar12 = this_ptr[10];
    uVar17 = extraout_XMM0_Da;
    if (lVar12 != 0) {
      uVar17 = FUN_00d50b00();
    }
    puVar2 = local_138;
    local_238 = '\x01';
    local_1b8 = 1;
    local_1c0 = &g_024c5048;
    local_1a8 = 0;
    local_240 = lVar12;
    if (local_138 != (void*)0x0) {
      uVar17 = FUN_00d50b00();
    }
    local_1b0 = puVar2;
    local_1a8 = '\x01';
    FUN_00d93870(uVar17,&local_1c0);
    local_1c0 = &g_024c5048;
    if ((local_1a8 != '\0') && (local_1b0 != (void*)0x0)) {
      FUN_00d50b20();
    }
    if ((local_238 != '\0') && (local_240 != 0)) {
      FUN_00d50b20();
    }
    break;
  case 2:
    local_228 = 0;
    lVar12 = this_ptr[10];
    if (lVar12 != 0) {
      FUN_00d50b00();
    }
    local_228 = '\x01';
    local_1e8 = local_138;
    local_1d0 = local_128;
    local_230 = lVar12;
    uVar17 = FUN_00083ea0(2,&local_1d0);
    FUN_00d93870(uVar17,&local_1c0);
    local_1c0 = (int64_t *)&g_0253d630;
    if ((local_198 != '\0') && (local_1a0 != 0)) {
      FUN_00d50b20();
    }
    local_1c0 = &g_024c5048;
    if ((local_1a8 != '\0') && (local_1b0 != (void*)0x0)) {
      FUN_00d50b20();
    }
    if ((local_228 != '\0') && (local_230 != 0)) {
      FUN_00d50b20();
    }
    break;
  case 3:
    local_218 = 0;
    lVar12 = this_ptr[10];
    if (lVar12 != 0) {
      FUN_00d50b00();
    }
    local_218 = '\x01';
    local_1e8 = local_138;
    local_1d0 = local_128;
    local_1f0 = local_118;
    local_220 = lVar12;
    uVar17 = FUN_002bd7b0(&local_1f0,&local_1d0,3);
    FUN_00d93870(uVar17,&local_1c0);
    local_1c0 = (int64_t *)&g_025df260;
    if ((local_188 != '\0') && (local_190 != 0)) {
      FUN_00d50b20();
    }
    local_1c0 = (int64_t *)&g_0253d630;
    if ((local_198 != '\0') && (local_1a0 != 0)) {
      FUN_00d50b20();
    }
    local_1c0 = &g_024c5048;
    if ((local_1a8 != '\0') && (local_1b0 != (void*)0x0)) {
      FUN_00d50b20();
    }
    if ((local_218 != '\0') && (local_220 != 0)) {
      FUN_00d50b20();
    }
    break;
  case 4:
    local_208 = 0;
    lVar12 = this_ptr[10];
    if (lVar12 != 0) {
      FUN_00d50b00();
    }
    local_208 = '\x01';
    local_1e8 = local_138;
    local_1d0 = local_128;
    local_1f0 = local_118;
    local_278 = local_108;
    local_210 = lVar12;
    uVar17 = FUN_00b8f440(&local_1f0,&local_1d0,&local_278,4);
    FUN_00d93870(uVar17,&local_1c0);
    FUN_007f76c0();
    if ((local_208 != '\0') && (local_210 != 0)) {
      FUN_00d50b20();
    }
    break;
  case 5:
    local_1f8 = 0;
    lVar12 = this_ptr[10];
    if (lVar12 != 0) {
      FUN_00d50b00();
    }
    lVar5 = local_f8;
    local_1f8 = '\x01';
    local_1e8 = local_138;
    local_1d0 = local_128;
    local_1f0 = local_118;
    local_278 = local_108;
    local_200 = lVar12;
    uVar17 = FUN_00b8f440(&local_1f0,&local_1d0,&local_278,5);
    local_1c0 = &g_02511780;
    local_168 = 0;
    if (lVar5 != 0) {
      uVar17 = FUN_00d50b00();
    }
    local_170 = lVar5;
    local_168 = '\x01';
    FUN_00d93870(uVar17,&local_1c0);
    local_1c0 = &g_02511780;
    if ((local_168 != '\0') && (local_170 != 0)) {
      FUN_00d50b20();
    }
    FUN_007f76c0();
    if ((local_1f8 != '\0') && (local_200 != 0)) {
      FUN_00d50b20();
    }
  }
switchD_01ec36ca_default:
  FUN_00d8c7d0();
  pplVar16 = &local_1c0;
  FUN_01ccad60();
  plVar11 = local_1c0;
  FUN_0020e360();
  if (plVar11 == (int64_t *)0x0) {
LAB_01ec37db:
    pplVar16 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar11 + 0x360))();
    cVar6 = FUN_00e85ea0();
    if (cVar6 == '\0') goto LAB_01ec37db;
  }
  plVar11 = *pplVar16;
  if (((char)local_1b8 != '\0') && (local_1c0 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  plVar13 = local_158;
  if (plVar11 != (int64_t *)0x0) {
    FUN_01ccad60();
    local_298 = puVar8;
    local_290 = '\0';
    FUN_01e5a050();
    if ((local_290 != '\0') && (local_298 != (void*)0x0)) {
      FUN_00d50b20();
    }
    if (((char)local_1b8 != '\0') && (local_1c0 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    goto LAB_01ec396b;
  }
  pplVar16 = &local_1c0;
  FUN_01ccad60();
  plVar11 = local_1c0;
  if ((g_026e43b0 == '\0') && (iVar7 = ___cxa_guard_acquire(), iVar7 != 0)) {
    g_026df898 = FUN_0006d940();
    g_026df880 = "GNControl";
    g_026df888 = 0x1c8;
    g_026df890 = FUN_000858d0;
    g_026df8a0 = 0;
    ram_00000000026df8a8 = 0;
    g_026df8b0 = 0;
    ram_00000000026df8b8 = 0;
    g_026df8c0 = 0;
    ram_00000000026df8c8 = 0;
    g_026df8d0 = 0;
    ram_00000000026df8d8 = 0;
    g_026df8e0 = 0;
    ram_00000000026df8e8 = 0;
    g_026df8f0 = 0;
    ram_00000000026df8f8 = 0;
    g_026df900 = 0;
    ram_00000000026df908 = 0;
    g_026df910 = 0;
    ram_00000000026df918 = 0;
    g_026df920 = 0;
    ram_00000000026df928 = 0;
    g_026df930 = 0;
    ram_00000000026df938 = 0;
    g_026df940 = 0;
    ___cxa_guard_release();
    puVar8 = local_1d8;
  }
  if (plVar11 == (int64_t *)0x0) {
LAB_01ec38cf:
    pplVar16 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar11 + 0x360))();
    cVar6 = FUN_00e85ea0();
    if (cVar6 == '\0') goto LAB_01ec38cf;
  }
  plVar11 = *pplVar16;
  if (((char)local_1b8 != '\0') && (local_1c0 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  plVar13 = local_158;
  if (plVar11 != (int64_t *)0x0) {
    FUN_01ccad60();
    local_280 = '\0';
    local_288 = puVar8;
    (**(code **)(*local_1c0 + 0x958))();
    if ((local_280 != '\0') && (local_288 != (void*)0x0)) {
      FUN_00d50b20();
    }
    if (((char)local_1b8 != '\0') && (local_1c0 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
LAB_01ec396b:
  if (((char)local_1c8 != '\0') && (plVar14 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  if ((local_90 != '\0') && (local_98 != 0)) {
    FUN_00d50b20();
  }
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_b0 != '\0') && (local_b8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_c0 != '\0') && (local_c8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_d0 != '\0') && (local_d8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_e0 != '\0') && (local_e8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_f0 != '\0') && (local_f8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_100 != '\0') && (local_108 != 0)) {
    FUN_00d50b20();
  }
  if ((local_110 != '\0') && (local_118 != 0)) {
    FUN_00d50b20();
  }
  if ((local_120 != '\0') && (local_128 != 0)) {
    FUN_00d50b20();
  }
  if ((local_130[0] != '\0') && (local_138 != (void*)0x0)) {
    FUN_00d50b20();
  }
  if ((bVar3) && (plVar13 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (puVar8 != (void*)0x0) {
    FUN_00d50b20();
  }
  if (*(int64_t *)PTR____stack_chk_guard_024a9898 != local_38) {
                        ___stack_chk_fail();
  }
  return;
}



// ============================================================
// 01ccad90
// ============================================================
// Function: FUN_01ccad90
// Address: 01ccad90
// Size: 2497 bytes
// Class: GNMultipleValue
// String references:
//   "GNMultipleValue"

void FUN_01ccad90(uint64_t param_1,void*param_2)

{
  int64_t *plVar1;
  int64_t *plVar2;
  int64_t *plVar3;
  char cVar4;
  uint64_t uVar5;
  undefined7 uVar7;
  int64_t lVar6;
  int iVar8;
  void*this_ptr;
  int64_t *plVar9;
  uint32_t uVar10;
  uint32_t extraout_XMM0_Da;
  uint32_t extraout_XMM0_Da_00;
  uint32_t extraout_XMM0_Da_01;
  uint64_t local_110;
  uint8_t local_108;
  uint64_t local_100;
  uint8_t local_f8;
  uint64_t local_f0;
  uint8_t local_e8;
  int64_t *local_e0;
  char local_d8;
  int64_t *local_d0;
  char local_c8;
  int64_t *local_c0;
  char local_b8;
  int64_t local_b0;
  int64_t local_a8;
  char local_a0;
  int64_t *local_98;
  int64_t *local_90;
  char local_88;
  int64_t *local_80;
  int64_t *local_78;
  char local_70;
  int64_t *local_68;
  char local_60;
  int64_t *local_58;
  uint64_t local_50;
  int local_48;
  int64_t *local_40;
  uint32_t local_38;
  uint32_t local_34;
  
  local_40 = (int64_t *)0x0;
  local_110 = *param_2;
  local_108 = 0;
  uVar10 = FUN_01ccab60(param_1,&local_110);
  local_98 = local_68;
  if ((local_60 == '\0') && (local_68 != (int64_t *)0x0)) {
    uVar10 = FUN_00d50b00();
  }
  local_78 = (int64_t *)*param_2;
  local_70 = '\0';
  FUN_01cc98b0(uVar10,&local_78);
  plVar9 = local_68;
  if (local_60 == '\0') {
    if (local_68 != (int64_t *)0x0) {
      FUN_00d50b00();
      goto LAB_01ccae2d;
    }
  }
  else if (local_68 != (int64_t *)0x0) {
LAB_01ccae2d:
    lVar6 = plVar9[5];
    FUN_00d50b20();
    if (lVar6 != 0) {
      uVar10 = FUN_00d50b00();
      local_b0 = lVar6;
      if (local_98 == (int64_t *)0x0) {
        uVar5 = FUN_01d836c0();
        plVar9 = local_68;
        uVar7 = (undefined7)((uint64_t)uVar5 >> 8);
        if (local_68 == local_40) {
          if (local_68 == (int64_t *)0x0) {
            local_34 = 0;
          }
          else {
            local_34 = (uint32_t)CONCAT71(uVar7,1);
            if (local_60 != '\0') goto LAB_01ccafa0;
            local_34 = (uint32_t)CONCAT71(uVar7,1);
            FUN_00d50b00();
          }
joined_r0x01ccaf90:
          if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          if (local_60 == '\0') {
            if (local_68 != (int64_t *)0x0) {
              uVar5 = FUN_00d50b00();
            }
            local_34 = (uint32_t)CONCAT71((int7)((uint64_t)uVar5 >> 8),1);
            local_40 = plVar9;
            goto joined_r0x01ccaf90;
          }
          local_40 = local_68;
          local_34 = (uint32_t)CONCAT71(uVar7,1);
        }
      }
      else {
        local_e0 = local_98;
        local_d8 = '\0';
        uVar5 = FUN_01d26620(uVar10,&local_e0);
        plVar9 = local_68;
        uVar7 = (undefined7)((uint64_t)uVar5 >> 8);
        if (local_68 == local_40) {
          if (local_68 == (int64_t *)0x0) {
            local_34 = 0;
          }
          else {
            if (local_60 != '\0') goto LAB_01ccaee1;
            local_34 = (uint32_t)CONCAT71(uVar7,1);
            FUN_00d50b00();
          }
LAB_01ccaf55:
          if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          if (local_60 == '\0') {
            if (local_68 != (int64_t *)0x0) {
              uVar5 = FUN_00d50b00();
            }
            local_40 = plVar9;
            local_34 = (uint32_t)CONCAT71((int7)((uint64_t)uVar5 >> 8),1);
            goto LAB_01ccaf55;
          }
          local_40 = local_68;
LAB_01ccaee1:
          local_60 = '\0';
          local_34 = (uint32_t)CONCAT71(uVar7,1);
        }
        if ((local_d8 != '\0') && (local_e0 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
LAB_01ccafa0:
      lVar6 = g_027057d0;
      plVar9 = (int64_t *)*param_2;
      if (g_027057d0 != 0) {
        FUN_00d50b00();
      }
      local_a8 = lVar6;
      local_a0 = '\x01';
      cVar4 = (**(code **)(*plVar9 + 0x50))();
      plVar9 = local_40;
      uVar10 = extraout_XMM0_Da;
      if (cVar4 == '\0') {
        if ((local_a0 != '\0') && (local_a8 != 0)) {
          uVar10 = FUN_00d50b20();
        }
LAB_01ccb106:
        local_f0 = *param_2;
        local_e8 = 0;
        uVar10 = FUN_01ccac20(uVar10,&local_f0);
        plVar9 = local_68;
        if (local_60 == '\0') {
          if (local_68 == (int64_t *)0x0) goto LAB_01ccb19d;
          uVar10 = FUN_00d50b00();
LAB_01ccb148:
          local_c0 = local_40;
          local_b8 = '\0';
          (**(code **)(*plVar9 + 0x370))(uVar10,&local_c0);
          plVar1 = local_40;
          plVar9 = local_68;
          if (local_68 == local_40) {
            uVar10 = local_34;
            if (((char)local_34 == '\0') && (local_68 != (int64_t *)0x0)) {
              if (local_60 != '\0') goto LAB_01ccb1c1;
              FUN_00d50b00();
              uVar10 = 1;
            }
LAB_01ccb595:
            cVar4 = (char)uVar10;
            if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            if (local_60 == '\0') {
              if (local_68 != (int64_t *)0x0) {
                FUN_00d50b00();
              }
              local_40 = plVar9;
              uVar10 = 1;
              if (((char)local_34 != '\0') && (plVar1 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              goto LAB_01ccb595;
            }
            local_40 = local_68;
            if (((char)local_34 != '\0') && (plVar1 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
LAB_01ccb1c1:
            local_60 = '\0';
            cVar4 = '\x01';
          }
          if ((local_b8 != '\0') && (local_c0 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          FUN_00d50b20();
        }
        else {
          if (local_68 != (int64_t *)0x0) goto LAB_01ccb148;
LAB_01ccb19d:
          cVar4 = (char)local_34;
        }
        plVar9 = local_40;
        *(void*)(this_ptr + 1) = 0;
        if ((cVar4 == '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b00();
        }
        *this_ptr = plVar9;
        *(void*)(this_ptr + 1) = 1;
      }
      else {
        if ((g_0277a3a0 == '\0') &&
           (iVar8 = ___cxa_guard_acquire(), uVar10 = extraout_XMM0_Da_01, iVar8 != 0)) {
          g_026d3c38 = FUN_00d4fe50();
          g_026d3c20 = "GNMultipleValue";
          g_026d3c28 = 0x18;
          g_026d3c30 = FUN_00050c70;
          g_026d3c40 = 0;
          ram_00000000026d3c48 = 0;
          g_026d3c50 = 0;
          ram_00000000026d3c58 = 0;
          g_026d3c60 = 0;
          ram_00000000026d3c68 = 0;
          g_026d3c70 = 0;
          ram_00000000026d3c78 = 0;
          g_026d3c80 = 0;
          ram_00000000026d3c88 = 0;
          g_026d3c90 = 0;
          ram_00000000026d3c98 = 0;
          g_026d3ca0 = 0;
          ram_00000000026d3ca8 = 0;
          g_026d3cb0 = 0;
          ram_00000000026d3cb8 = 0;
          g_026d3cc0 = 0;
          ram_00000000026d3cc8 = 0;
          g_026d3cd0 = 0;
          ram_00000000026d3cd8 = 0;
          g_026d3ce0 = 0;
          uVar10 = ___cxa_guard_release();
        }
        plVar1 = g_02802688;
        if (plVar9 != (int64_t *)0x0) {
          (**(code **)(*plVar9 + 0x360))();
          cVar4 = FUN_00e85ea0();
          uVar10 = extraout_XMM0_Da_00;
          plVar1 = g_02802688;
          if (cVar4 != '\0') {
            plVar1 = local_40;
          }
        }
        if ((local_a0 != '\0') && (local_a8 != 0)) {
          uVar10 = FUN_00d50b20();
        }
        if (plVar1 == (int64_t *)0x0) goto LAB_01ccb106;
        FUN_00e987b0();
        local_80 = local_68;
        if ((((local_60 == '\0') && (local_68 != (int64_t *)0x0)) &&
            (FUN_00d50b00(), local_60 != '\0')) && (local_68 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        uVar5 = FUN_00d46300();
        plVar1 = local_40;
        plVar9 = local_68;
        uVar7 = (undefined7)((uint64_t)uVar5 >> 8);
        if (local_68 == local_40) {
          if (((char)local_34 == '\0') && (local_68 != (int64_t *)0x0)) {
            local_38 = (uint32_t)CONCAT71(uVar7,1);
            if (local_60 != '\0') goto LAB_01ccb282;
            local_38 = (uint32_t)CONCAT71(uVar7,1);
            FUN_00d50b00();
          }
          else {
            local_38 = local_34;
          }
LAB_01ccb26e:
          if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          if (local_60 == '\0') {
            if (local_68 != (int64_t *)0x0) {
              uVar5 = FUN_00d50b00();
            }
            local_40 = plVar9;
            local_38 = (uint32_t)CONCAT71((int7)((uint64_t)uVar5 >> 8),1);
            if (((char)local_34 != '\0') && (plVar1 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            goto LAB_01ccb26e;
          }
          local_40 = local_68;
          local_38 = (uint32_t)CONCAT71(uVar7,1);
          if (((char)local_34 != '\0') && (plVar1 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
LAB_01ccb282:
        local_100 = *param_2;
        local_f8 = 0;
        FUN_01ccac20();
        uVar10 = local_38;
        plVar1 = local_68;
        plVar9 = local_80;
        if ((local_60 == '\0') && (local_68 != (int64_t *)0x0)) {
          FUN_00d50b00();
        }
        if (plVar9 != (int64_t *)0x0) {
          local_60 = '\0';
          local_68 = (int64_t *)0x0;
          local_58 = plVar9;
          local_50 = 0xffffffff;
          local_48 = 0;
          if (plVar1 == (int64_t *)0x0) {
            iVar8 = 0;
            while( true ) {
              if (iVar8 != 0) {
                if (iVar8 < 1) {
                  iVar8 = -iVar8;
                }
                else {
                  local_50 = CONCAT44(local_50._4_4_,(int)local_50 - iVar8);
                  FUN_00d23690(iVar8,iVar8);
                  local_48 = local_48 + local_50._4_4_;
                  iVar8 = 0;
                }
                local_50 = CONCAT44(iVar8,(int)local_50);
              }
              lVar6 = (int64_t)(int)local_50;
              iVar8 = (int)local_50 + 1;
              local_50 = CONCAT44(local_50._4_4_,iVar8);
              uVar10 = local_38;
              if (*(int *)((int64_t)local_58 + 0xc) <= iVar8) goto LAB_01ccb64d;
              plVar9 = *(int64_t **)(local_58[2] + 8 + lVar6 * 8);
              local_70 = '\0';
              local_68 = plVar9;
              if (local_60 == '\0') {
                if (plVar9 != (int64_t *)0x0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_60 = '\0';
              }
              local_88 = '\0';
              local_90 = plVar9;
              local_78 = plVar9;
              cVar4 = FUN_00c70bc0();
              if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              if (cVar4 == '\0') break;
              if (plVar9 != (int64_t *)0x0) {
                FUN_00d50b20();
              }
              iVar8 = local_50._4_4_;
            }
          }
          else {
            local_50._4_4_ = 0;
            while( true ) {
              if (local_50._4_4_ != 0) {
                if (local_50._4_4_ < 1) {
                  iVar8 = -local_50._4_4_;
                }
                else {
                  iVar8 = (int)local_50 - local_50._4_4_;
                  local_50 = CONCAT44(local_50._4_4_,iVar8);
                  FUN_00d23690();
                  local_48 = local_48 + local_50._4_4_;
                  iVar8 = 0;
                }
                local_50 = CONCAT44(iVar8,(int)local_50);
              }
              lVar6 = (int64_t)(int)local_50;
              iVar8 = (int)local_50 + 1;
              local_50 = CONCAT44(local_50._4_4_,iVar8);
              uVar10 = local_38;
              if (*(int *)((int64_t)local_58 + 0xc) <= iVar8) goto LAB_01ccb64d;
              local_d0 = *(int64_t **)(local_58[2] + 8 + lVar6 * 8);
              local_c8 = '\0';
              local_68 = local_d0;
              (**(code **)(*plVar1 + 0x370))(local_58[2],&local_d0);
              plVar9 = local_78;
              if (local_70 == '\0') {
                if (local_78 == (int64_t *)0x0) {
                  plVar9 = (int64_t *)0x0;
                }
                else {
                  FUN_00d50b00();
                  if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
                    FUN_00d50b20();
                  }
                }
              }
              else {
                local_70 = '\0';
              }
              if ((local_c8 != '\0') && (local_d0 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              local_88 = '\0';
              local_90 = plVar9;
              cVar4 = FUN_00c70bc0();
              if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              if (cVar4 == '\0') break;
              if (plVar9 != (int64_t *)0x0) {
                FUN_00d50b20();
              }
            }
          }
          FUN_00d46300();
          plVar3 = local_40;
          plVar2 = local_78;
          if (local_78 == local_40) {
            uVar10 = local_38;
            if (((char)local_38 == '\0') && (local_78 != (int64_t *)0x0)) {
              uVar10 = 1;
              if (local_70 != '\0') goto LAB_01ccb640;
              FUN_00d50b00();
              uVar10 = 1;
            }
LAB_01ccb62c:
            if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            if (local_70 == '\0') {
              if (local_78 != (int64_t *)0x0) {
                FUN_00d50b00();
              }
              local_40 = plVar2;
              uVar10 = 1;
              if (((char)local_38 != '\0') && (plVar3 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              goto LAB_01ccb62c;
            }
            local_40 = local_78;
            uVar10 = 1;
            if (((char)local_38 != '\0') && (plVar3 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
LAB_01ccb640:
          if (plVar9 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
LAB_01ccb64d:
          FUN_00083b20();
          plVar9 = local_80;
        }
        plVar2 = local_40;
        *(void*)(this_ptr + 1) = 0;
        if (((char)uVar10 == '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b00();
        }
        *this_ptr = plVar2;
        *(void*)(this_ptr + 1) = 1;
        if (plVar1 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        if (plVar9 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
      }
      FUN_00d50b20();
      goto LAB_01ccb6a9;
    }
  }
  *(void*)(this_ptr + 1) = 0;
  *this_ptr = 0;
LAB_01ccb6a9:
  if (local_98 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 01f0cb10
// ============================================================
// Function: FUN_01f0cb10
// Address: 01f0cb10
// Size: 3008 bytes
// Class: GNMultipleValue

void FUN_01f0cb10(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint32_t param_4)

{
  int64_t lVar1;
  uint8_t auVar2 [16];
  bool bVar3;
  bool bVar4;
  char cVar5;
  uint32_t uVar6;
  int iVar7;
  uint64_t in_RCX;
  uint64_t in_RDX;
  int64_t *plVar8;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t lVar9;
  uint64_t uVar10;
  bool bVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  uint64_t extraout_XMM0_Qa;
  uint64_t uVar16;
  uint64_t extraout_XMM0_Qb;
  uint64_t extraout_XMM0_Qb_00;
  uint64_t extraout_XMM0_Qb_01;
  uint8_t auVar17 [16];
  uint64_t extraout_XMM0_Qb_03;
  uint8_t auVar18 [16];
  uint64_t extraout_XMM0_Qb_05;
  uint64_t extraout_XMM0_Qb_06;
  uint8_t auVar19 [16];
  uint8_t auVar20 [16];
  uint64_t extraout_XMM0_Qb_07;
  uint64_t extraout_XMM0_Qb_08;
  uint8_t auVar21 [16];
  uint64_t extraout_XMM0_Qb_09;
  uint64_t extraout_XMM0_Qb_10;
  uint8_t auVar22 [16];
  uint8_t auVar23 [16];
  uint8_t auVar24 [16];
  uint8_t auVar25 [16];
  uint8_t auVar26 [16];
  uint8_t auVar27 [16];
  int64_t *local_1a8;
  char local_1a0;
  int64_t *local_150;
  char local_148;
  int64_t *local_140;
  char local_138;
  int64_t local_130;
  char local_128;
  int64_t local_120;
  char local_118;
  int64_t local_110;
  char local_108;
  int64_t local_100;
  char local_f8;
  int64_t *local_f0;
  int64_t *local_e8;
  char local_e0;
  int64_t *local_d8;
  char local_d0;
  int64_t *local_c8;
  char local_c0;
  int64_t *local_b8;
  char local_b0;
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  uint8_t local_98 [8];
  uint64_t uStack_90;
  int64_t *local_88;
  int64_t *local_68;
  int64_t *local_40;
  char local_38;
  uint64_t extraout_XMM0_Qb_02;
  uint64_t extraout_XMM0_Qb_04;
  
  (**(code **)(*this_ptr + 0x640))(in_RCX,in_RDX,param_3,param_4,param_1);
  if ((local_38 == '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  local_f0 = local_40;
  FUN_01d48370();
  (**(code **)(*(int64_t *)*arg1 + 0x390))();
  if (this_ptr[0x2d] == 0) {
    (**(code **)(*this_ptr + 0x930))();
  }
  FUN_01e3f820();
  local_88 = (int64_t *)param_2;
  uVar6 = FUN_01d5b230();
  (**(code **)(*local_40 + 0x5d8))(*local_40,uVar6);
  lVar9 = 8;
  uVar10 = 0;
  local_88 = (int64_t *)0x0;
  bVar3 = false;
  local_68 = (int64_t *)0x0;
  bVar11 = false;
  do {
    iVar7 = FUN_01d5b230();
    if ((int64_t)iVar7 <= (int64_t)uVar10) {
      FUN_01e40eb0();
      plVar8 = local_88;
      (**(code **)(*this_ptr + 0x7b0))();
      if ((local_1a0 != '\0') && (local_1a8 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (local_40 == local_1a8) {
        local_98 = (uint8_t  [8])FUN_01e436c0();
        uStack_90 = extraout_XMM0_Qb;
        uVar16 = FUN_01e3f820();
        fVar12 = (float)-(uint)((float)local_98._0_4_ != (float)uVar16);
        fVar13 = (float)-(uint)((float)local_98._4_4_ != (float)((uint64_t)uVar16 >> 0x20));
        fVar14 = (float)-(uint)((float)uStack_90 != (float)extraout_XMM0_Qb_00);
        fVar15 = (float)-(uint)(uStack_90._4_4_ != (float)((uint64_t)extraout_XMM0_Qb_00 >> 0x20));
        if (((uint)fVar13 & 1) != 0) {
          (**(code **)(*local_f0 + 0x4c8))();
          local_e0 = 0;
          if (local_38 == '\0') {
            if (local_40 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_38 = '\0';
          }
          local_e0 = '\x01';
          local_e8 = local_40;
          FUN_01d488d0();
          if ((local_e0 != '\0') && (local_e8 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          local_130 = *arg1;
          local_128 = '\0';
          uVar16 = FUN_01e3f820();
          local_a8 = (float)uVar16;
          fStack_a4 = (float)((uint64_t)uVar16 >> 0x20);
          fStack_a0 = (float)extraout_XMM0_Qb_01;
          fStack_9c = (float)((uint64_t)extraout_XMM0_Qb_01 >> 0x20);
          local_98._4_4_ = fVar13;
          local_98._0_4_ = fVar12;
          uStack_90._0_4_ = fVar14;
          uStack_90._4_4_ = fVar15;
          auVar17._0_8_ = FUN_01e436c0();
          auVar17._8_8_ = extraout_XMM0_Qb_02;
          auVar23._4_12_ = local_98._4_12_;
          auVar23._0_4_ = local_98._0_4_ * g_0239011c;
          auVar20._4_4_ = fStack_a4;
          auVar20._0_4_ = local_a8;
          auVar20._8_4_ = fStack_a0;
          auVar20._12_4_ = fStack_9c;
          blendps(auVar20,auVar17,2);
          blendps(auVar23,g_023907b0,0xe);
          auVar20 = ZEXT416((uint)g_023b36b0);
          FUN_01cb3a60();
          if ((local_128 != '\0') && (local_130 != 0)) {
            FUN_00d50b20();
          }
          (**(code **)(*local_f0 + 0x4d0))();
          local_d0 = 0;
          if (local_38 == '\0') {
            if (local_40 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_38 = '\0';
          }
          local_d0 = '\x01';
          local_d8 = local_40;
          FUN_01d488d0();
          if ((local_d0 != '\0') && (local_d8 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          local_120 = *arg1;
          local_118 = '\0';
          uVar16 = FUN_01e3f820();
          local_a8 = (float)uVar16;
          fStack_a4 = (float)((uint64_t)uVar16 >> 0x20);
          fStack_a0 = (float)extraout_XMM0_Qb_03;
          fStack_9c = (float)((uint64_t)extraout_XMM0_Qb_03 >> 0x20);
          _local_98 = auVar20;
          auVar18._0_8_ = FUN_01e436c0();
          auVar18._8_8_ = extraout_XMM0_Qb_04;
          auVar24._4_12_ = local_98._4_12_;
          auVar24._0_4_ = local_98._0_4_ * g_0239011c;
          auVar2._4_4_ = fStack_a4;
          auVar2._0_4_ = local_a8;
          auVar2._8_4_ = fStack_a0;
          auVar2._12_4_ = fStack_9c;
          blendps(auVar2,auVar18,2);
          blendps(auVar24,g_023907b0,0xe);
          fVar13 = 0.0;
          fVar14 = 0.0;
          fVar15 = 0.0;
          fVar12 = g_02390d30;
          FUN_01cb3a60();
          if ((local_118 != '\0') && (local_120 != 0)) {
            FUN_00d50b20();
          }
        }
        local_98 = (uint8_t  [8])FUN_01e436c0();
        uStack_90 = extraout_XMM0_Qb_05;
        local_a8 = fVar12;
        fStack_a4 = fVar13;
        fStack_a0 = fVar14;
        fStack_9c = fVar15;
        uVar16 = FUN_01e3f820();
        auVar25._0_4_ = (float)local_98._0_4_ + local_a8;
        auVar25._4_4_ = (float)local_98._4_4_ + fStack_a4;
        auVar25._8_4_ = (float)uStack_90 + fStack_a0;
        auVar25._12_4_ = uStack_90._4_4_ + fStack_9c;
        auVar19._0_4_ = (float)uVar16 + fVar12;
        auVar19._4_4_ = (float)((uint64_t)uVar16 >> 0x20) + fVar13;
        auVar19._8_4_ = (float)extraout_XMM0_Qb_06 + fVar14;
        auVar19._12_4_ = (float)((uint64_t)extraout_XMM0_Qb_06 >> 0x20) + fVar15;
        auVar20 = insertps(auVar19,auVar25,0x4c);
        fVar12 = auVar20._0_4_ + g_023b5de0;
        fVar13 = auVar20._4_4_ + _UNK_023b5de4;
        fVar14 = auVar20._12_4_ + _UNK_023b5dec;
        if ((fVar12 != fVar13) || (NAN(fVar12) || NAN(fVar13))) {
          fVar12 = fVar13;
          fVar15 = fVar14;
          (**(code **)(*local_f0 + 0x4c8))();
          local_c0 = 0;
          if (local_38 == '\0') {
            if (local_40 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_38 = '\0';
          }
          local_c0 = '\x01';
          local_c8 = local_40;
          FUN_01d488d0();
          if ((local_c0 != '\0') && (local_c8 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          local_110 = *arg1;
          local_108 = '\0';
          local_98 = (uint8_t  [8])FUN_01e3f820();
          uStack_90 = extraout_XMM0_Qb_07;
          local_a8 = fVar13;
          fStack_a4 = fVar12;
          fStack_a0 = fVar14;
          fStack_9c = fVar15;
          uVar16 = FUN_01e436c0();
          auVar26._0_4_ = local_a8 * g_0239011c;
          auVar26._4_4_ = fStack_a4 * 0.0;
          auVar26._8_4_ = fStack_a0 * 0.0;
          auVar26._12_4_ = fStack_9c * 0.0;
          auVar21._0_4_ = (float)uVar16 + fVar13 + g_0241c730;
          auVar21._4_4_ = (float)((uint64_t)uVar16 >> 0x20) + fVar12 + _UNK_0241c734;
          auVar21._8_4_ = (float)extraout_XMM0_Qb_08 + fVar14 + _UNK_0241c738;
          auVar21._12_4_ = (float)((uint64_t)extraout_XMM0_Qb_08 >> 0x20) + fVar15 + _UNK_0241c73c;
          blendps(auVar21,auVar26,0xd);
          insertps(_local_98,g_02394248,0x10);
          fVar13 = 0.0;
          fVar14 = 0.0;
          fVar15 = 0.0;
          fVar12 = g_023b36b0;
          FUN_01cb3a60();
          if ((local_108 != '\0') && (local_110 != 0)) {
            FUN_00d50b20();
          }
          (**(code **)(*local_f0 + 0x4d0))();
          local_b0 = 0;
          if (local_38 == '\0') {
            if (local_40 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_38 = '\0';
          }
          local_b0 = '\x01';
          local_b8 = local_40;
          FUN_01d488d0();
          if ((local_b0 != '\0') && (local_b8 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          local_100 = *arg1;
          local_f8 = '\0';
          local_98 = (uint8_t  [8])FUN_01e3f820();
          uStack_90 = extraout_XMM0_Qb_09;
          local_a8 = fVar12;
          fStack_a4 = fVar13;
          fStack_a0 = fVar14;
          fStack_9c = fVar15;
          uVar16 = FUN_01e436c0();
          auVar27._0_4_ = local_a8 * g_0239011c;
          auVar27._4_4_ = fStack_a4 * 0.0;
          auVar27._8_4_ = fStack_a0 * 0.0;
          auVar27._12_4_ = fStack_9c * 0.0;
          auVar22._0_4_ = (float)uVar16 + fVar12 + g_0241c730;
          auVar22._4_4_ = (float)((uint64_t)uVar16 >> 0x20) + fVar13 + _UNK_0241c734;
          auVar22._8_4_ = (float)extraout_XMM0_Qb_10 + fVar14 + _UNK_0241c738;
          auVar22._12_4_ = (float)((uint64_t)extraout_XMM0_Qb_10 >> 0x20) + fVar15 + _UNK_0241c73c;
          blendps(auVar22,auVar27,0xd);
          insertps(_local_98,g_02394248,0x10);
          FUN_01cb3a60();
          if ((local_f8 != '\0') && (local_100 != 0)) {
            FUN_00d50b20();
          }
        }
      }
      FUN_01d48390();
      if ((bVar11) && (local_68 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((bVar3) && (plVar8 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (local_f0 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      return;
    }
    FUN_01d5b240(extraout_XMM0_Qa,uVar10 & 0xffffffff);
    plVar8 = local_88;
    if (local_88 == local_40) {
      if ((bVar3) || (local_88 == (int64_t *)0x0)) goto joined_r0x01f0cdb1;
      bVar3 = true;
      if (local_38 == '\0') {
        FUN_00d50b00();
        goto LAB_01f0cd96;
      }
    }
    else if (local_38 == '\0') {
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      plVar8 = local_40;
      if ((bVar3) && (local_88 != (int64_t *)0x0)) {
        local_88 = local_40;
        FUN_00d50b20();
      }
LAB_01f0cd96:
      bVar3 = true;
joined_r0x01f0cdb1:
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else if ((bVar3) && (local_88 != (int64_t *)0x0)) {
      local_88 = local_40;
      FUN_00d50b20();
      bVar3 = true;
      plVar8 = local_88;
    }
    else {
      bVar3 = true;
      plVar8 = local_40;
    }
    local_88 = plVar8;
    plVar8 = (int64_t *)this_ptr[0x2b];
    uStack_90 = 0;
    local_98 = (uint8_t  [8])*(uint64_t *)(*(int64_t *)(this_ptr[0x2d] + 0x10) + -8 + lVar9);
    uVar16 = *(void*)(*(int64_t *)(this_ptr[0x2d] + 0x10) + lVar9);
    local_a8 = (float)uVar16;
    fStack_a4 = (float)((uint64_t)uVar16 >> 0x20);
    fStack_a0 = 0.0;
    fStack_9c = 0.0;
    if (plVar8 == local_68) {
      bVar4 = bVar11;
      if ((!bVar11) && (plVar8 != (int64_t *)0x0)) {
        bVar4 = true;
        uVar16 = FUN_00d50b00();
      }
LAB_01f0ce70:
      lVar1 = this_ptr[0x30];
    }
    else {
      if (plVar8 != (int64_t *)0x0) {
        uVar16 = FUN_00d50b00();
      }
      bVar4 = true;
      if (bVar11) {
        bVar11 = local_68 != (int64_t *)0x0;
        local_68 = plVar8;
        if (bVar11) {
          uVar16 = FUN_00d50b20();
        }
        goto LAB_01f0ce70;
      }
      lVar1 = this_ptr[0x30];
      local_68 = plVar8;
    }
    plVar8 = local_68;
    bVar11 = bVar4;
    if (((lVar1 != 0) && (6 < *(int *)(lVar1 + 0x18) + 3U)) && (uVar10 == **(uint **)(lVar1 + 0x10))
       ) {
      if (local_68 == (int64_t *)0x0) {
        uVar16 = (**(code **)(*local_f0 + 0x370))();
        local_68 = local_40;
        if (local_40 == (int64_t *)0x0) {
          local_68 = (int64_t *)0x0;
        }
        else {
          bVar4 = true;
          if (local_38 == '\0') {
            uVar16 = FUN_00d50b00();
          }
        }
      }
      FUN_01d44a40(uVar16,1);
      if (local_40 == local_68) {
        plVar8 = local_68;
        bVar11 = bVar4;
        if ((!bVar4) && (local_40 != (int64_t *)0x0)) {
          bVar11 = true;
          if (local_38 != '\0') goto LAB_01f0d000;
          FUN_00d50b00();
          bVar11 = true;
        }
      }
      else {
        if (local_38 != '\0') {
          bVar11 = true;
          plVar8 = local_40;
          if ((bVar4) && (plVar8 = local_40, local_68 != (int64_t *)0x0)) {
            FUN_00d50b20();
            plVar8 = local_40;
          }
          goto LAB_01f0d000;
        }
        if (local_40 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        bVar11 = true;
        plVar8 = local_40;
        if ((bVar4) && (local_68 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
LAB_01f0d000:
    local_68 = plVar8;
    cVar5 = FUN_00d054a0();
    if (cVar5 != '\0') {
      local_150 = local_68;
      local_148 = '\0';
      local_140 = local_88;
      local_138 = '\0';
      (**(code **)(*this_ptr + 0x928))(&local_140,&local_150,uVar10 & 0xffffffff);
      if ((local_138 != '\0') && (local_140 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_148 != '\0') && (local_150 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    uVar10 = uVar10 + 1;
    lVar9 = lVar9 + 0x10;
  } while( true );
}



// ============================================================
// 01d5b760
// ============================================================
// Function: FUN_01d5b760
// Address: 01d5b760
// Size: 4052 bytes
// Class: GNMultipleValue
// String references:
//   "orderFrontStandardAboutPanel:"
//   "orderFrontPreferencesPanel:"
//   "hideOtherApplications:"
//   "unhideAllApplications:"
//   "terminate:"
//   "hide:"

void FUN_01d5b760(void)

{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t lVar4;
  char cVar5;
  uint64_t uVar6;
  int64_t *local_240;
  char local_238;
  int64_t local_220;
  char local_218;
  int64_t *local_210;
  char local_208;
  int64_t local_200;
  char local_1f8;
  int64_t local_1f0;
  char local_1e8;
  int64_t local_1e0;
  char local_1d8;
  int64_t *local_1d0;
  char local_1c8;
  int64_t local_1c0;
  char local_1b8;
  int64_t local_1b0;
  char local_1a8;
  int64_t local_1a0;
  char local_198;
  int64_t *local_190;
  char local_188;
  int64_t local_180;
  char local_178;
  int64_t local_170;
  char local_168;
  int64_t local_160;
  char local_158;
  int64_t *local_150;
  char local_148;
  int64_t local_140;
  char local_138;
  int64_t local_130;
  char local_128;
  int64_t local_120;
  char local_118;
  int64_t *local_110;
  char local_108;
  int64_t local_100;
  char local_f8;
  int64_t local_f0;
  char local_e8;
  int64_t local_e0;
  char local_d8;
  int64_t *local_d0;
  char local_c8;
  int64_t local_c0;
  char local_b8;
  int64_t local_b0;
  char local_a8;
  int64_t local_a0;
  char local_98;
  int64_t *local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t *local_50;
  int64_t local_48;
  char local_40;
  uint64_t local_38;
  
  _objc_alloc();
  (*PTR__objc_msgSend_024a9998)();
  plVar1 = (int64_t *)FUN_00e8fc40();
  FUN_00022d50();
  local_50 = plVar1;
  (**(code **)(*plVar1 + 0x18))();
  FUN_01f27fe0();
  (**(code **)(*local_240 + 0x458))();
  local_60 = local_70;
  local_58 = 0;
  lVar4 = g_027f0918;
  if (local_68 == '\0') {
    if (local_70 != 0) {
      FUN_00d50b00();
      lVar4 = g_027f0918;
    }
  }
  else {
    local_68 = '\0';
  }
  local_58 = '\x01';
  g_027f0918 = lVar4;
  if (lVar4 != 0) {
    local_58 = '\x01';
    FUN_00d50b00();
  }
  local_40 = '\0';
  local_48 = lVar4;
  FUN_00ca0840();
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if ((local_238 != '\0') && (local_240 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  (*PTR__objc_msgSend_024a9998)();
  (*PTR__objc_msgSend_024a9998)();
  (*PTR__objc_msgSend_024a9998)();
  lVar2 = (*PTR__objc_msgSend_024a9998)
                    (PTR_s_orderFrontStandardAboutPanel__026c97a8,*(void*)PTR__NSApp_0249c0f8
                    );
  lVar4 = g_027f0920;
  if (lVar2 == -1) {
    uVar6 = 0;
    lVar2 = 0;
  }
  else {
    if (g_027f0920 != 0) {
      FUN_00d50b00();
    }
    lVar2 = g_027f0928;
    if (g_027f0928 != 0) {
      FUN_00d50b00();
    }
    local_220 = lVar2;
    local_218 = '\x01';
    local_210 = local_50;
    local_208 = '\0';
    FUN_00d31230(&local_210,&local_220);
    lVar2 = local_48;
    if (local_48 == 0) {
      uVar6 = 0;
    }
    else if (local_40 == '\0') {
      FUN_00d50b00();
      uVar6 = 1;
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_40 = '\0';
      uVar6 = 1;
    }
    if ((local_208 != '\0') && (local_210 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_218 != '\0') && (local_220 != 0)) {
      FUN_00d50b20();
    }
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
    (*PTR__objc_msgSend_024a9998)();
    local_200 = lVar2;
    local_1f8 = '\0';
    FUN_00e1cfc0();
    (*PTR__objc_msgSend_024a9998)();
    if ((local_1f8 != '\0') && (local_200 != 0)) {
      FUN_00d50b20();
    }
  }
  lVar3 = (*PTR__objc_msgSend_024a9998)
                    (PTR_s_orderFrontPreferencesPanel__026c97b8,*(void*)PTR__NSApp_0249c0f8);
  lVar4 = g_027f0920;
  if (lVar3 != -1) {
    if (g_027f0920 != 0) {
      FUN_00d50b00();
    }
    lVar3 = g_027f0930;
    local_1f0 = lVar4;
    local_1e8 = '\x01';
    if (g_027f0930 != 0) {
      FUN_00d50b00();
    }
    local_1e0 = lVar3;
    local_1d8 = '\x01';
    local_1d0 = local_50;
    local_1c8 = '\0';
    FUN_00d31230(&local_1d0,&local_1e0);
    lVar4 = local_48;
    if (lVar2 == local_48) {
      lVar4 = lVar2;
      if (((char)uVar6 == '\0') && (lVar2 != 0)) {
        if (local_40 != '\0') goto LAB_01d5bb70;
        local_38 = uVar6;
        FUN_00d50b00();
        uVar6 = 1;
      }
LAB_01d5bbc8:
      lVar2 = lVar4;
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      if (local_40 == '\0') {
        local_38 = uVar6;
        if (local_48 != 0) {
          FUN_00d50b00();
        }
        uVar6 = 1;
        if (((char)local_38 != '\0') && (lVar2 != 0)) {
          FUN_00d50b20();
        }
        goto LAB_01d5bbc8;
      }
      if (((char)uVar6 != '\0') && (lVar2 != 0)) {
        local_38 = uVar6;
        FUN_00d50b20();
      }
LAB_01d5bb70:
      local_40 = '\0';
      uVar6 = 1;
      lVar2 = lVar4;
    }
    if ((local_1c8 != '\0') && (local_1d0 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_1d8 != '\0') && (local_1e0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_1e8 != '\0') && (local_1f0 != 0)) {
      FUN_00d50b20();
    }
    (*PTR__objc_msgSend_024a9998)();
    local_1b8 = '\0';
    local_1c0 = lVar2;
    FUN_00e1cfc0();
    (*PTR__objc_msgSend_024a9998)();
    if ((local_1b8 != '\0') && (local_1c0 != 0)) {
      FUN_00d50b20();
    }
  }
  lVar3 = (*PTR__objc_msgSend_024a9998)
                    (PTR_s_hide__026ca0e0,*(void*)PTR__NSApp_0249c0f8);
  lVar4 = g_027f0920;
  if (lVar3 != -1) {
    if (g_027f0920 != 0) {
      FUN_00d50b00();
    }
    lVar3 = g_027f0938;
    local_1b0 = lVar4;
    local_1a8 = '\x01';
    if (g_027f0938 != 0) {
      FUN_00d50b00();
    }
    local_1a0 = lVar3;
    local_198 = '\x01';
    local_190 = local_50;
    local_188 = '\0';
    FUN_00d31230(&local_190,&local_1a0);
    lVar4 = local_48;
    if (lVar2 == local_48) {
      lVar4 = lVar2;
      if (((char)uVar6 == '\0') && (lVar2 != 0)) {
        if (local_40 != '\0') goto LAB_01d5bd71;
        local_38 = uVar6;
        FUN_00d50b00();
        uVar6 = 1;
      }
LAB_01d5bde5:
      lVar2 = lVar4;
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      if (local_40 == '\0') {
        local_38 = uVar6;
        if (local_48 != 0) {
          FUN_00d50b00();
        }
        uVar6 = 1;
        if (((char)local_38 != '\0') && (lVar2 != 0)) {
          FUN_00d50b20();
        }
        goto LAB_01d5bde5;
      }
      if (((char)uVar6 != '\0') && (lVar2 != 0)) {
        local_38 = uVar6;
        FUN_00d50b20();
      }
LAB_01d5bd71:
      local_40 = '\0';
      uVar6 = 1;
      lVar2 = lVar4;
    }
    if ((local_188 != '\0') && (local_190 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_198 != '\0') && (local_1a0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_1a8 != '\0') && (local_1b0 != 0)) {
      FUN_00d50b20();
    }
    (*PTR__objc_msgSend_024a9998)();
    local_178 = '\0';
    local_180 = lVar2;
    FUN_00e1cfc0();
    (*PTR__objc_msgSend_024a9998)();
    if ((local_178 != '\0') && (local_180 != 0)) {
      FUN_00d50b20();
    }
  }
  lVar3 = (*PTR__objc_msgSend_024a9998)
                    (PTR_s_hideOtherApplications__026c97c0,*(void*)PTR__NSApp_0249c0f8);
  lVar4 = g_027f0920;
  if (lVar3 != -1) {
    if (g_027f0920 != 0) {
      FUN_00d50b00();
    }
    lVar3 = g_027f0940;
    local_170 = lVar4;
    local_168 = '\x01';
    if (g_027f0940 != 0) {
      FUN_00d50b00();
    }
    local_160 = lVar3;
    local_158 = '\x01';
    local_150 = local_50;
    local_148 = '\0';
    FUN_00d31230(&local_150,&local_160);
    lVar4 = local_48;
    if (lVar2 == local_48) {
      lVar4 = lVar2;
      if (((char)uVar6 == '\0') && (lVar2 != 0)) {
        if (local_40 != '\0') goto LAB_01d5bf8e;
        local_38 = uVar6;
        FUN_00d50b00();
        uVar6 = 1;
      }
LAB_01d5c002:
      lVar2 = lVar4;
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      if (local_40 == '\0') {
        local_38 = uVar6;
        if (local_48 != 0) {
          FUN_00d50b00();
        }
        uVar6 = 1;
        if (((char)local_38 != '\0') && (lVar2 != 0)) {
          FUN_00d50b20();
        }
        goto LAB_01d5c002;
      }
      if (((char)uVar6 != '\0') && (lVar2 != 0)) {
        local_38 = uVar6;
        FUN_00d50b20();
      }
LAB_01d5bf8e:
      local_40 = '\0';
      uVar6 = 1;
      lVar2 = lVar4;
    }
    if ((local_148 != '\0') && (local_150 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_158 != '\0') && (local_160 != 0)) {
      FUN_00d50b20();
    }
    if ((local_168 != '\0') && (local_170 != 0)) {
      FUN_00d50b20();
    }
    (*PTR__objc_msgSend_024a9998)();
    local_138 = '\0';
    local_140 = lVar2;
    FUN_00e1cfc0();
    (*PTR__objc_msgSend_024a9998)();
    if ((local_138 != '\0') && (local_140 != 0)) {
      FUN_00d50b20();
    }
  }
  lVar3 = (*PTR__objc_msgSend_024a9998)
                    (PTR_s_unhideAllApplications__026c97c8,*(void*)PTR__NSApp_0249c0f8);
  lVar4 = g_027f0920;
  if (lVar3 != -1) {
    if (g_027f0920 != 0) {
      FUN_00d50b00();
    }
    lVar3 = g_027f0948;
    local_130 = lVar4;
    local_128 = '\x01';
    if (g_027f0948 != 0) {
      FUN_00d50b00();
    }
    local_120 = lVar3;
    local_118 = '\x01';
    local_110 = local_50;
    local_108 = '\0';
    FUN_00d31230(&local_110,&local_120);
    lVar4 = local_48;
    if (lVar2 == local_48) {
      lVar4 = lVar2;
      if (((char)uVar6 == '\0') && (lVar2 != 0)) {
        if (local_40 != '\0') goto LAB_01d5c1ab;
        local_38 = uVar6;
        FUN_00d50b00();
        uVar6 = 1;
      }
LAB_01d5c21f:
      lVar2 = lVar4;
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      if (local_40 == '\0') {
        local_38 = uVar6;
        if (local_48 != 0) {
          FUN_00d50b00();
        }
        uVar6 = 1;
        if (((char)local_38 != '\0') && (lVar2 != 0)) {
          FUN_00d50b20();
        }
        goto LAB_01d5c21f;
      }
      if (((char)uVar6 != '\0') && (lVar2 != 0)) {
        local_38 = uVar6;
        FUN_00d50b20();
      }
LAB_01d5c1ab:
      local_40 = '\0';
      uVar6 = 1;
      lVar2 = lVar4;
    }
    if ((local_108 != '\0') && (local_110 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_118 != '\0') && (local_120 != 0)) {
      FUN_00d50b20();
    }
    if ((local_128 != '\0') && (local_130 != 0)) {
      FUN_00d50b20();
    }
    (*PTR__objc_msgSend_024a9998)();
    local_f8 = '\0';
    local_100 = lVar2;
    FUN_00e1cfc0();
    (*PTR__objc_msgSend_024a9998)();
    if ((local_f8 != '\0') && (local_100 != 0)) {
      FUN_00d50b20();
    }
  }
  lVar3 = (*PTR__objc_msgSend_024a9998)
                    (PTR_s_terminate__026c97d0,*(void*)PTR__NSApp_0249c0f8);
  lVar4 = g_027f0920;
  if (lVar3 != -1) {
    if (g_027f0920 != 0) {
      FUN_00d50b00();
    }
    lVar3 = g_027f0950;
    local_f0 = lVar4;
    local_e8 = '\x01';
    if (g_027f0950 != 0) {
      FUN_00d50b00();
    }
    local_e0 = lVar3;
    local_d8 = '\x01';
    local_d0 = local_50;
    local_c8 = '\0';
    FUN_00d31230(&local_d0,&local_e0);
    lVar4 = local_48;
    if (lVar2 == local_48) {
      lVar4 = lVar2;
      if (((char)uVar6 == '\0') && (lVar2 != 0)) {
        if (local_40 != '\0') goto LAB_01d5c3c8;
        local_38 = uVar6;
        FUN_00d50b00();
        uVar6 = 1;
      }
LAB_01d5c43c:
      lVar2 = lVar4;
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      if (local_40 == '\0') {
        local_38 = uVar6;
        if (local_48 != 0) {
          FUN_00d50b00();
        }
        uVar6 = 1;
        if (((char)local_38 != '\0') && (lVar2 != 0)) {
          FUN_00d50b20();
        }
        goto LAB_01d5c43c;
      }
      if (((char)uVar6 != '\0') && (lVar2 != 0)) {
        local_38 = uVar6;
        FUN_00d50b20();
      }
LAB_01d5c3c8:
      local_40 = '\0';
      uVar6 = 1;
      lVar2 = lVar4;
    }
    if ((local_c8 != '\0') && (local_d0 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_d8 != '\0') && (local_e0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_e8 != '\0') && (local_f0 != 0)) {
      FUN_00d50b20();
    }
    (*PTR__objc_msgSend_024a9998)();
    local_b8 = '\0';
    local_c0 = lVar2;
    FUN_00e1cfc0();
    (*PTR__objc_msgSend_024a9998)();
    if ((local_b8 != '\0') && (local_c0 != 0)) {
      FUN_00d50b20();
    }
  }
  lVar4 = g_027f0920;
  if (g_027f0920 != 0) {
    FUN_00d50b00();
  }
  lVar3 = g_027f0958;
  local_b0 = lVar4;
  local_a8 = '\x01';
  if (g_027f0958 != 0) {
    FUN_00d50b00();
  }
  local_a0 = lVar3;
  local_98 = '\x01';
  local_90 = local_50;
  local_88 = '\0';
  FUN_00d31230(&local_90,&local_a0);
  lVar4 = local_48;
  if (lVar2 == local_48) {
    if (((char)uVar6 == '\0') && (lVar2 != 0)) {
      lVar4 = lVar2;
      if (local_40 != '\0') goto LAB_01d5c5b8;
      local_38 = uVar6;
      FUN_00d50b00();
      goto LAB_01d5c5f4;
    }
  }
  else {
    if (local_40 != '\0') {
      if (((char)uVar6 != '\0') && (lVar2 != 0)) {
        local_38 = uVar6;
        FUN_00d50b20();
      }
LAB_01d5c5b8:
      local_40 = '\0';
      cVar5 = '\x01';
      lVar2 = lVar4;
      goto joined_r0x01d5c625;
    }
    local_38 = uVar6;
    if (local_48 != 0) {
      FUN_00d50b00();
    }
    if (((char)local_38 != '\0') && (lVar2 != 0)) {
      FUN_00d50b20();
    }
LAB_01d5c5f4:
    uVar6 = 1;
    lVar2 = lVar4;
  }
  cVar5 = (char)uVar6;
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
joined_r0x01d5c625:
  if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_a8 != '\0') && (local_b0 != 0)) {
    FUN_00d50b20();
  }
  (*PTR__objc_msgSend_024a9998)();
  local_78 = '\0';
  local_80 = lVar2;
  FUN_00e1cfc0();
  (*PTR__objc_msgSend_024a9998)();
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  (*PTR__objc_release_024a99a0)();
  if ((cVar5 != '\0') && (lVar2 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}



// ============================================================
// 01a0fff0
// ============================================================
// Function: FUN_01a0fff0
// Address: 01a0fff0
// Size: 2575 bytes
// Class: GNMultipleValue

void FUN_01a0fff0(void)

{
  int64_t *plVar1;
  float fVar2;
  uint8_t auVar4 [16];
  uint8_t auVar5 [16];
  int64_t lVar6;
  float fVar7;
  char cVar8;
  char cVar9;
  int iVar10;
  int64_t *arg1;
  int64_t *this_ptr;
  float fVar11;
  float extraout_XMM0_Da;
  uint64_t uVar12;
  float extraout_XMM0_Db;
  double dVar13;
  double dVar14;
  float extraout_XMM0_Dc;
  uint64_t extraout_XMM0_Qb;
  uint64_t extraout_XMM0_Qb_00;
  uint64_t extraout_XMM0_Qb_01;
  float extraout_XMM0_Dd;
  uint8_t auVar15 [16];
  uint8_t auVar16 [16];
  uint8_t auVar17 [16];
  float fVar18;
  float fVar19;
  float fVar23;
  float fVar26;
  uint8_t in_XMM1 [16];
  float fVar24;
  float fVar25;
  float fVar27;
  float fVar28;
  uint8_t auVar20 [16];
  uint8_t auVar21 [16];
  uint8_t auVar22 [16];
  uint8_t auVar29 [16];
  uint8_t auVar30 [16];
  uint8_t auVar31 [16];
  float local_198;
  int64_t *local_188;
  char local_180;
  int64_t local_168;
  char local_160;
  int64_t local_158;
  char local_150;
  int64_t local_148;
  char local_140;
  int64_t local_138;
  char local_130;
  int64_t local_128;
  char local_120;
  int64_t local_118;
  char local_110;
  int64_t local_108;
  char local_100;
  int64_t local_f8;
  char local_f0;
  float local_e8;
  float fStack_e4;
  uint64_t uStack_e0;
  uint8_t local_d8 [16];
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float local_54;
  int64_t *local_50;
  int64_t *local_48;
  char local_40;
  float fVar3;
  
  plVar1 = (int64_t *)this_ptr[0x48];
  local_50 = plVar1;
  if (plVar1 == (int64_t *)0x0) {
    FUN_01a18460();
    if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (local_48 != (int64_t *)0x0) {
      FUN_01a18460();
      (**(code **)(*local_188 + 0x958))();
      local_50 = local_48;
      if (local_48 != (int64_t *)0x0) {
        plVar1 = local_50;
        if (local_40 == '\0') {
          FUN_00d50b00();
        }
        else {
          local_40 = '\0';
        }
      }
      local_50 = plVar1;
      if ((local_180 != '\0') && (local_188 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    FUN_00d50b00();
  }
  uVar12 = (**(code **)(*this_ptr + 0xaf8))();
  local_e8 = (float)uVar12;
  fStack_e4 = (float)((uint64_t)uVar12 >> 0x20);
  uStack_e0 = extraout_XMM0_Qb;
  local_d8 = in_XMM1;
  fVar11 = (float)(**(code **)(*this_ptr + 0xb00))();
  auVar17 = in_XMM1;
  FUN_01d3abf0();
  uVar12 = FUN_01e466c0();
  local_c8 = (float)uVar12;
  fStack_c4 = (float)((uint64_t)uVar12 >> 0x20);
  fStack_c0 = (float)extraout_XMM0_Qb_00;
  fStack_bc = (float)((uint64_t)extraout_XMM0_Qb_00 >> 0x20);
  uVar12 = (**(code **)(*this_ptr + 0xaf8))();
  fVar23 = auVar17._4_4_;
  auVar22._4_4_ = fVar23;
  auVar22._0_4_ = fVar23;
  auVar22._8_4_ = auVar17._12_4_;
  auVar22._12_4_ = auVar17._12_4_;
  if (auVar17._0_4_ < fVar23 + fVar23) {
    auVar29._4_12_ = auVar22._4_12_;
    auVar29._0_4_ = fVar23 * g_0239426c;
    blendps(auVar29,auVar17,0xe);
  }
  auVar17._8_4_ = (int)extraout_XMM0_Qb_01;
  auVar17._0_8_ = uVar12;
  auVar17._12_4_ = (int)((uint64_t)extraout_XMM0_Qb_01 >> 0x20);
  cVar8 = FUN_00d05410();
  if (cVar8 == '\0') {
    (**(code **)(*this_ptr + 0xaf8))();
    fVar23 = auVar17._4_4_;
    if (auVar17._0_4_ < fVar23 + fVar23) {
      blendps(ZEXT416((uint)(g_0239426c * fVar23)),auVar17,0xe);
    }
    cVar9 = FUN_00d05410();
    if (cVar9 == '\0') {
      FUN_00d403d0();
      lVar6 = g_027e7c30;
      if (g_027e7c30 != 0) {
        FUN_00d50b00();
      }
      FUN_00d50b00();
      local_168 = 0;
      local_160 = '\0';
      FUN_00d40470(&local_168,&stack0xffffffffffffff48,3,3);
      if ((local_160 != '\0') && (local_168 != 0)) {
        FUN_00d50b20();
      }
      if (this_ptr != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if (lVar6 != 0) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      local_158 = *arg1;
      local_150 = '\0';
      FUN_01d924f0();
      if ((local_150 != '\0') && (local_158 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d403d0();
      local_148 = g_027e7c38;
      if (g_027e7c38 != 0) {
        FUN_00d50b00();
      }
      local_140 = '\x01';
      FUN_00d50b00();
      local_138 = 0;
      local_130 = '\0';
      FUN_00d40470(&local_138,&stack0xffffffffffffff58,3,3);
      if ((local_130 != '\0') && (local_138 != 0)) {
        FUN_00d50b20();
      }
      if (this_ptr != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if ((local_140 != '\0') && (local_148 != 0)) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_01a1099f;
    }
    local_54 = 0.0;
    if (0.0 <= g_023941fc + (float)local_d8._0_4_) {
      local_54 = g_023941fc + (float)local_d8._0_4_;
    }
    local_198 = in_XMM1._0_4_;
    fVar11 = (fVar11 + local_198 + g_02390d00) - (local_e8 + (float)local_d8._0_4_ + g_02390d00)
    ;
  }
  else {
    local_54 = 0.0;
    if (0.0 <= local_e8 - fVar11) {
      local_54 = local_e8 - fVar11;
    }
    fVar11 = g_023941fc + (float)local_d8._0_4_;
  }
  FUN_00d403d0();
  local_128 = g_027e7c30;
  if (g_027e7c30 != 0) {
    FUN_00d50b00();
  }
  local_120 = '\x01';
  FUN_00d50b00();
  local_118 = 0;
  local_110 = '\0';
  FUN_00d40470(&local_118,&stack0xffffffffffffff68,3,3);
  if ((local_110 != '\0') && (local_118 != 0)) {
    FUN_00d50b20();
  }
  if (this_ptr != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_120 != '\0') && (local_128 != 0)) {
    FUN_00d50b20();
  }
  if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  fVar23 = 0.0;
  fVar7 = local_c8;
  if (0.0 <= fVar11) {
    fVar23 = fVar11;
  }
LAB_01a10320:
  fVar11 = fVar7;
  (**(code **)(*this_ptr + 0x658))();
  plVar1 = (int64_t *)*arg1;
  if (plVar1 == local_48) {
    if (((char)arg1[1] != '\0') || (local_48 == (int64_t *)0x0)) goto LAB_01a1037b;
    if (local_40 != '\0') goto LAB_01a10372;
    FUN_00d50b00();
LAB_01a103bc:
    *(void*)(arg1 + 1) = 1;
    lVar6 = *arg1;
  }
  else {
    lVar6 = arg1[1];
    if (local_40 == '\0') {
      if (local_48 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      *arg1 = (int64_t)local_48;
      if (((char)lVar6 != '\0') && (plVar1 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_01a103bc;
    }
    *arg1 = (int64_t)local_48;
    if (((char)lVar6 != '\0') && (plVar1 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
LAB_01a10372:
    *(void*)(arg1 + 1) = 1;
    local_40 = '\0';
LAB_01a1037b:
    lVar6 = *arg1;
  }
  if (lVar6 != 0) {
    iVar10 = FUN_01d3a5a0();
    if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (iVar10 == 6) goto LAB_01a106a6;
    iVar10 = FUN_01d3a5a0();
    fVar7 = fVar11;
    if (iVar10 == 5) {
      FUN_01d3abf0();
      FUN_01e466c0();
      if ((extraout_XMM0_Da != fVar11) || (NAN(extraout_XMM0_Da) || NAN(fVar11))) {
        fVar2 = (float)((uint64_t)uStack_e0 >> 0x20);
        fVar18 = local_d8._0_4_;
        fVar24 = local_d8._4_4_;
        fVar26 = local_d8._8_4_;
        fVar3 = local_d8._12_4_;
        if (local_c8 <= extraout_XMM0_Da) {
          fVar7 = extraout_XMM0_Da;
          if (local_c8 < extraout_XMM0_Da) {
            fVar19 = extraout_XMM0_Da - local_c8;
            fVar25 = extraout_XMM0_Db - fStack_c4;
            fVar27 = extraout_XMM0_Dc - fStack_c0;
            fVar28 = extraout_XMM0_Dd - fStack_bc;
            if (cVar8 == '\0') {
              if (fVar19 <= fVar23) {
                fVar7 = extraout_XMM0_Da;
                if (fVar19 <= fVar23) {
                  auVar31._0_4_ = fVar19 + fVar18;
                  auVar31._4_4_ = fVar25 + fVar24;
                  auVar31._8_4_ = fVar27 + fVar26;
                  auVar31._12_4_ = fVar28 + fVar3;
                  blendps(auVar31,local_d8,2);
                  FUN_01a12270();
                  fVar7 = extraout_XMM0_Da;
                }
              }
              else {
                dVar13 = (double)(**(code **)(*local_50 + 0x378))();
                (**(code **)(*local_50 + 0x380))
                          ((double)(fVar19 - (fVar11 - local_c8)) * g_023934c8 + dVar13);
                FUN_01a18180();
                (**(code **)(*this_ptr + 0xaf8))();
                FUN_01a12270();
                fVar7 = extraout_XMM0_Da;
              }
            }
            else {
              fVar7 = extraout_XMM0_Da;
              if (fVar19 < fVar23) {
                auVar4._4_4_ = fStack_e4;
                auVar4._0_4_ = local_e8;
                auVar4._8_8_ = uStack_e0;
                auVar15._0_4_ = local_e8 + fVar19;
                auVar15._4_4_ = fStack_e4 + fVar25;
                auVar15._8_4_ = (float)uStack_e0 + fVar27;
                auVar15._12_4_ = fVar2 + fVar28;
                auVar17 = blendps(auVar15,auVar4,2);
                auVar20._0_4_ = fVar18 - fVar19;
                auVar20._4_4_ = fVar24 - fVar25;
                auVar20._8_4_ = fVar26 - fVar27;
                auVar20._12_4_ = fVar3 - fVar28;
                auVar22 = blendps(auVar20,local_d8,2);
                FUN_01a12270(auVar17._0_8_,auVar22._0_8_);
                fVar7 = extraout_XMM0_Da;
              }
            }
          }
        }
        else {
          fVar19 = local_c8 - extraout_XMM0_Da;
          fVar25 = fStack_c4 - extraout_XMM0_Db;
          fVar27 = fStack_c0 - extraout_XMM0_Dc;
          fVar28 = fStack_bc - extraout_XMM0_Dd;
          if (cVar8 == '\0') {
            fVar7 = extraout_XMM0_Da;
            if (fVar19 < local_54) {
              auVar30._0_4_ = fVar18 - fVar19;
              auVar30._4_4_ = fVar24 - fVar25;
              auVar30._8_4_ = fVar26 - fVar27;
              auVar30._12_4_ = fVar3 - fVar28;
              blendps(auVar30,local_d8,2);
              FUN_01a12270();
              fVar7 = extraout_XMM0_Da;
            }
          }
          else if (fVar19 <= local_54) {
            fVar7 = extraout_XMM0_Da;
            if (fVar19 <= local_54) {
              auVar5._4_4_ = fStack_e4;
              auVar5._0_4_ = local_e8;
              auVar5._8_8_ = uStack_e0;
              auVar16._0_4_ = local_e8 - fVar19;
              auVar16._4_4_ = fStack_e4 - fVar25;
              auVar16._8_4_ = (float)uStack_e0 - fVar27;
              auVar16._12_4_ = fVar2 - fVar28;
              auVar17 = blendps(auVar16,auVar5,2);
              auVar21._0_4_ = fVar19 + fVar18;
              auVar21._4_4_ = fVar25 + fVar24;
              auVar21._8_4_ = fVar27 + fVar26;
              auVar21._12_4_ = fVar28 + fVar3;
              auVar22 = blendps(auVar21,local_d8,2);
              FUN_01a12270(auVar17._0_8_,auVar22._0_8_);
              fVar7 = extraout_XMM0_Da;
            }
          }
          else {
            dVar13 = (double)(fVar19 - (local_c8 - fVar11)) * g_023934c8;
            dVar14 = (double)(**(code **)(*local_50 + 0x368))();
            (**(code **)(*local_50 + 0x370))(dVar14 - dVar13);
            dVar14 = (double)(**(code **)(*local_50 + 0x378))();
            (**(code **)(*local_50 + 0x380))(dVar13 + dVar14);
            FUN_01a18180();
            (**(code **)(*this_ptr + 0xaf8))();
            FUN_01a12270();
            fVar7 = extraout_XMM0_Da;
          }
        }
      }
    }
    goto LAB_01a10320;
  }
  if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
LAB_01a106a6:
  FUN_00d403d0();
  local_108 = g_027e7c38;
  if (g_027e7c38 != 0) {
    FUN_00d50b00();
  }
  local_100 = '\x01';
  FUN_00d50b00();
  local_f8 = 0;
  local_f0 = '\0';
  FUN_00d40470(&local_f8,&stack0xffffffffffffff78,3,3);
  if ((local_f0 != '\0') && (local_f8 != 0)) {
    FUN_00d50b20();
  }
  if (this_ptr != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_100 != '\0') && (local_108 != 0)) {
    FUN_00d50b20();
  }
  if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
LAB_01a1099f:
  if (local_50 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 01cef520
// ============================================================
// Function: FUN_01cef520
// Address: 01cef520
// Size: 3152 bytes
// Class: GNMultipleValue

void FUN_01cef520(uint64_t param_1,uint8_t param_2 [8])

{
  uint32_t uVar1;
  uint32_t uVar2;
  uint8_t auVar3 [16];
  uint8_t auVar4 [16];
  int64_t lVar5;
  int64_t *plVar6;
  char cVar7;
  uint8_t uVar8;
  uint uVar9;
  int iVar10;
  int64_t lVar11;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t *plVar12;
  bool bVar13;
  float fVar14;
  uint64_t uVar15;
  double dVar16;
  uint64_t extraout_XMM0_Qb;
  uint8_t auVar18 [16];
  uint8_t auVar19 [16];
  uint64_t uVar17;
  uint64_t extraout_XMM0_Qb_00;
  uint8_t auVar20 [16];
  uint8_t auVar21 [16];
  uint64_t in_XMM1_Qb;
  uint8_t auVar22 [16];
  uint8_t auVar23 [16];
  uint8_t local_1f8 [16];
  float local_1c8;
  float fStack_1c4;
  uint32_t uStack_1c0;
  uint32_t uStack_1bc;
  int64_t *local_1b8;
  char local_1b0;
  int64_t *local_168;
  char local_160;
  int64_t local_158;
  char local_150;
  int64_t local_148;
  char local_140;
  int64_t *local_138;
  char local_130;
  int64_t local_128;
  char local_120;
  int64_t local_118;
  char local_110;
  int64_t *local_108;
  char local_100;
  int64_t local_f8;
  char local_f0;
  int64_t local_e8;
  char local_e0;
  int64_t *local_d8;
  char local_d0;
  int64_t local_c8;
  char local_c0;
  uint8_t local_b8 [8];
  uint64_t uStack_b0;
  int64_t local_a8;
  char local_a0;
  int64_t *local_78;
  char local_70;
  int64_t *local_68;
  char local_60;
  uint32_t local_54;
  uint local_50;
  uint32_t local_4c;
  int64_t *local_48;
  int64_t *local_40;
  char local_38;
  
  cVar7 = FUN_01e420b0();
  if (cVar7 == '\0') {
    uVar9 = 0;
  }
  else {
    uVar9 = (**(code **)(*this_ptr + 0x878))();
  }
  uVar1 = *(void*)((int64_t)this_ptr + 0x18c);
  (**(code **)(*this_ptr + 0x640))();
  local_48 = local_40;
  if ((((local_38 == '\0') && (local_40 != (int64_t *)0x0)) && (FUN_00d50b00(), local_38 != '\0'))
     && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  iVar10 = (**(code **)(*this_ptr + 0x920))();
  (**(code **)(*this_ptr + 0xa18))();
  if (local_40 == (int64_t *)0x0) {
    bVar13 = false;
  }
  else {
    (**(code **)(*this_ptr + 0xa18))();
    lVar11 = g_027f3d60;
    if (g_027f3d60 != 0) {
      FUN_00d50b00();
    }
    cVar7 = (**(code **)(*local_1b8 + 0x50))();
    if (cVar7 == '\0') {
      bVar13 = false;
    }
    else {
      bVar13 = *(int *)((int64_t)this_ptr + 500) == 0;
    }
    if (lVar11 != 0) {
      FUN_00d50b20();
    }
    if ((local_1b0 != '\0') && (local_1b8 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (bVar13) {
    uVar1 = 0x2c;
  }
  local_50 = uVar9 & 0xff;
  if ((char)this_ptr[0x3e] != '\0') {
    if (iVar10 == 0) {
      param_2 = (uint8_t  [8])0x0;
      in_XMM1_Qb = 0;
      if (((double)this_ptr[0x43] != 0.0) || (NAN((double)this_ptr[0x43]))) {
        dVar16 = (double)FUN_00e7d6f0();
        auVar20._0_8_ = dVar16 - (double)this_ptr[0x43];
        auVar20._8_8_ = extraout_XMM0_Qb;
        auVar18._4_12_ = auVar20._4_12_;
        auVar18._0_4_ = (float)auVar20._0_8_ * g_0239011c;
        auVar20 = roundss(ZEXT816(0),auVar18,9);
        fVar14 = (auVar18._0_4_ - auVar20._0_4_) * g_02410f88;
        auVar19._0_4_ = fVar14 + fVar14;
        auVar19._4_12_ = auVar18._4_12_;
        fVar14 = (float)_cosf(auVar19._0_8_);
        auVar20 = ZEXT416((uint)((g_02390124 - fVar14) * g_0239011c));
        FUN_01cc5880();
        FUN_01e3f820();
        uVar2 = *(void*)((int64_t)this_ptr + 0x1fc);
        _local_b8 = auVar20;
        uVar8 = (**(code **)(*this_ptr + 0x9a0))();
        (**(code **)(*this_ptr + 0xa70))();
        param_2 = local_b8;
        in_XMM1_Qb = uStack_b0;
        (**(code **)(*local_48 + 0x3f0))(uVar2,uVar1,0,uVar8);
        FUN_01cc5880();
        goto LAB_01cef887;
      }
    }
    uVar15 = FUN_01e3f820();
    uStack_b0 = in_XMM1_Qb;
    local_b8 = param_2;
    uVar8 = (**(code **)(*this_ptr + 0x9a0))();
    (**(code **)(*this_ptr + 0xa70))();
    param_2 = local_b8;
    in_XMM1_Qb = uStack_b0;
    (**(code **)(*local_48 + 0x3f0))(uVar15,uVar1,iVar10,uVar8);
  }
LAB_01cef887:
  lVar11 = this_ptr[0x40];
  if (lVar11 != 0) {
    local_a0 = 0;
    FUN_00d50b00();
    local_a0 = '\x01';
    local_a8 = lVar11;
    FUN_01cc48f0();
    if ((local_a0 != '\0') && (local_a8 != 0)) {
      FUN_00d50b20();
    }
  }
  local_54 = uVar1;
  if (this_ptr[0x3a] == 0) {
    (**(code **)(*this_ptr + 0x960))();
    plVar12 = local_40;
    if ((((local_38 == '\0') && (local_40 != (int64_t *)0x0)) && (FUN_00d50b00(), local_38 != '\0')
        ) && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    local_168 = plVar12;
    local_160 = '\0';
    local_158 = *arg1;
    local_150 = '\0';
    FUN_01e3f820();
    (**(code **)(*local_48 + 0x548))();
    (**(code **)(*this_ptr + 0xa00))(param_2,&local_168);
    plVar6 = local_40;
    if (plVar12 == local_40) {
LAB_01cefa75:
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      if (local_38 == '\0') {
        if (local_40 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        bVar13 = plVar12 != (int64_t *)0x0;
        plVar12 = plVar6;
        if (bVar13) {
          FUN_00d50b20();
        }
        goto LAB_01cefa75;
      }
      if (plVar12 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      local_38 = '\0';
      plVar12 = plVar6;
    }
    if ((local_150 != '\0') && (local_158 != 0)) {
      FUN_00d50b20();
    }
    if ((local_160 != '\0') && (local_168 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    local_148 = *arg1;
    local_140 = '\0';
    uVar15 = FUN_01e3f820();
    local_130 = '\0';
    local_138 = plVar12;
    (**(code **)(*this_ptr + 0x9e0))();
    local_78 = local_40;
    local_70 = 0;
    if (local_38 == '\0') {
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_70 = '\x01';
    uVar1 = *(void*)((int64_t)this_ptr + 0x174);
    (**(code **)(*this_ptr + 0x9a0))();
    (**(code **)(*this_ptr + 0xa70))();
    (**(code **)(*local_48 + 0x400))(uVar15,param_2,&local_78,uVar1);
    if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_130 != '\0') && (local_138 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_140 != '\0') && (local_148 != 0)) {
      FUN_00d50b20();
    }
    if (plVar12 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    goto LAB_01cf010f;
  }
  uVar15 = (**(code **)(*this_ptr + 0x9a0))();
  if (((char)uVar15 == '\0') && (lVar11 = this_ptr[0x3c], lVar11 != 0)) {
    FUN_00d50b00();
LAB_01cefc22:
    local_4c = 0;
  }
  else {
    if (((int)this_ptr[0x29] != 0) &&
       ((lVar11 = this_ptr[0x3b], lVar11 != 0 && (*(int *)((int64_t)this_ptr + 500) == 1)))) {
      FUN_00d50b00();
      goto LAB_01cefc22;
    }
    if ((((char)this_ptr[0x31] != '\0') && (lVar11 = this_ptr[0x3b], lVar11 != 0)) &&
       (*(int *)((int64_t)this_ptr + 500) != 1)) {
      FUN_00d50b00();
      goto LAB_01cefc22;
    }
    lVar11 = this_ptr[0x3a];
    if (lVar11 != 0) {
      FUN_00d50b00();
      goto LAB_01cefc22;
    }
    local_4c = (uint32_t)CONCAT71((int7)((uint64_t)uVar15 >> 8),1);
    lVar11 = 0;
  }
  uVar17 = FUN_01e3f820();
  local_1c8 = (float)uVar17;
  fStack_1c4 = (float)((uint64_t)uVar17 >> 0x20);
  uStack_1c0 = (uint32_t)extraout_XMM0_Qb_00;
  uStack_1bc = (uint32_t)((uint64_t)extraout_XMM0_Qb_00 >> 0x20);
  local_1f8._8_8_ = in_XMM1_Qb;
  local_1f8._0_8_ = param_2;
  uStack_b0 = 0;
  local_b8 = (uint8_t  [8])g_023dccf4;
  uVar15 = param_2;
  FUN_01d530c0();
  (**(code **)(*this_ptr + 0x640))();
  fVar14 = (float)(**(code **)(*local_40 + 0x630))();
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((int)this_ptr[0x42] == 0) {
    FUN_00d05560();
  }
  else if ((int)this_ptr[0x42] == 1) {
    auVar22._4_4_ = fStack_1c4;
    auVar22._0_4_ = fStack_1c4;
    auVar22._8_4_ = uStack_1bc;
    auVar22._12_4_ = uStack_1bc;
    auVar23._4_12_ = auVar22._4_12_;
    auVar23._0_4_ = fStack_1c4 + g_02390d00;
    auVar20 = insertps(ZEXT416((uint)(g_02390d34 + fVar14 + local_1c8)),auVar23,0x10);
    FUN_00d05560(auVar20._0_8_,this_ptr[0x41]);
    auVar3._8_8_ = in_XMM1_Qb;
    auVar3._0_8_ = uVar15;
    fVar14 = fVar14 + (float)uVar15 + g_02394298;
    blendps(auVar3,local_1f8,2);
    auVar4._8_4_ = uStack_1c0;
    auVar4._0_8_ = uVar17;
    auVar4._12_4_ = uStack_1bc;
    auVar21._4_12_ = auVar4._4_12_;
    auVar21._0_4_ = local_1c8 + fVar14;
    blendps(auVar4,auVar21,1);
    register0x00001244 = local_1f8._4_12_;
    local_b8._0_4_ = SUB84(param_2,0) - fVar14;
  }
  else {
    FUN_00d05560();
  }
  local_128 = *arg1;
  local_120 = '\0';
  lVar5 = this_ptr[0x3e];
  local_110 = '\0';
  uVar1 = *(void*)((int64_t)this_ptr + 0x174);
  local_118 = lVar11;
  (**(code **)(*this_ptr + 0x9a0))();
  (**(code **)(*this_ptr + 0xa70))();
  (**(code **)(*local_48 + 0x408))((char)lVar5,local_54,&local_118,uVar1);
  if ((local_110 != '\0') && (local_118 != 0)) {
    FUN_00d50b20();
  }
  if ((local_120 != '\0') && (local_128 != 0)) {
    FUN_00d50b20();
  }
  if ((0.0 < (float)local_b8._0_4_) && (0.0 < (float)local_b8._4_4_)) {
    (**(code **)(*this_ptr + 0x960))();
    plVar12 = local_40;
    if ((local_38 == '\0') &&
       (((local_40 != (int64_t *)0x0 && (FUN_00d50b00(), local_38 != '\0')) &&
        (local_40 != (int64_t *)0x0)))) {
      FUN_00d50b20();
    }
    local_108 = plVar12;
    local_100 = '\0';
    local_f8 = *arg1;
    local_f0 = '\0';
    (**(code **)(*local_48 + 0x548))();
    (**(code **)(*this_ptr + 0xa00))(&local_f8,&local_108);
    plVar6 = local_40;
    if (plVar12 == local_40) {
LAB_01ceff74:
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      if (local_38 == '\0') {
        if (local_40 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        bVar13 = plVar12 != (int64_t *)0x0;
        plVar12 = plVar6;
        if (bVar13) {
          FUN_00d50b20();
        }
        goto LAB_01ceff74;
      }
      if (plVar12 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      local_38 = '\0';
      plVar12 = plVar6;
    }
    if ((local_f0 != '\0') && (local_f8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_100 != '\0') && (local_108 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    local_e8 = *arg1;
    local_e0 = '\0';
    local_d0 = '\0';
    local_d8 = plVar12;
    (**(code **)(*this_ptr + 0x9e0))();
    local_68 = local_40;
    local_60 = 0;
    if (local_38 == '\0') {
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_60 = '\x01';
    uVar1 = *(void*)((int64_t)this_ptr + 0x174);
    (**(code **)(*this_ptr + 0x9a0))();
    (**(code **)(*this_ptr + 0xa70))();
    (**(code **)(*local_48 + 0x400))(&local_d8,local_54,&local_68,uVar1);
    if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_d0 != '\0') && (local_d8 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_e0 != '\0') && (local_e8 != 0)) {
      FUN_00d50b20();
    }
    if (plVar12 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  if ((char)local_4c == '\0' && lVar11 != 0) {
    FUN_00d50b20();
  }
LAB_01cf010f:
  if (this_ptr[0x40] != 0) {
    local_c0 = '\0';
    local_c8 = 0;
    FUN_01cc48f0();
    if ((local_c0 != '\0') && (local_c8 != 0)) {
      FUN_00d50b20();
    }
  }
  FUN_00d50b20();
  return;
}



// ============================================================
// 01bcb5f0
// ============================================================
// Function: FUN_01bcb5f0
// Address: 01bcb5f0
// Size: 2380 bytes
// Class: GNMultipleValue

void FUN_01bcb5f0(void)

{
  int64_t *plVar1;
  bool bVar2;
  int64_t *plVar3;
  int64_t *plVar4;
  char cVar5;
  int64_t lVar6;
  int64_t **pplVar7;
  int iVar8;
  int64_t *this_ptr;
  int64_t lVar9;
  int64_t *plVar10;
  float fVar11;
  float extraout_XMM0_Db;
  double dVar12;
  double dVar13;
  uint64_t uVar14;
  uint64_t extraout_XMM0_Qb;
  uint8_t auVar15 [16];
  uint8_t auVar16 [16];
  uint8_t auVar17 [16];
  uint8_t auVar18 [16];
  uint8_t auVar19 [16];
  uint8_t auVar20 [16];
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  uint8_t local_a8 [16];
  int64_t *local_70;
  int64_t *local_68;
  int64_t *local_60;
  uint64_t local_58;
  int local_50;
  int64_t *local_48;
  char local_40;
  char local_38 [8];
  uint64_t extraout_XMM0_Qb_00;
  
  plVar3 = local_70;
  plVar1 = (int64_t *)this_ptr[0x2a];
  if (plVar1 == (int64_t *)0x0) {
    while( true ) {
      FUN_00d50b00();
      (**(code **)(*this_ptr + 0x4a0))();
      iVar8 = *(int *)((int64_t)local_70 + 0xc);
      if (((char)local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
      if (iVar8 == 0) break;
      FUN_00d50b00();
      (**(code **)(*this_ptr + 0x4a0))();
      FUN_00d23340();
      local_38[0] = (char)local_68;
      pplVar7 = &local_68;
      if ((char)local_68 == '\0') {
        pplVar7 = (int64_t **)local_38;
      }
      *(char *)pplVar7 = '\0';
      if (((char)local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      (**(code **)(*local_70 + 0x478))();
      if (local_38[0] != '\0') {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
  }
  else {
    FUN_00d50b00();
    if (this_ptr[0x28] == 0) goto LAB_01bcbf7a;
    (**(code **)(*plVar1 + 0x9a0))();
    FUN_01dce580();
    if (((char)local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    (**(code **)(*(int64_t *)this_ptr[0x28] + 0x3f8))();
    if ((char)local_68 == '\0') {
      if (local_70 == (int64_t *)0x0) goto LAB_01bcb85a;
      FUN_00d50b00();
      if (((char)local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
LAB_01bcb7b6:
      local_68._0_1_ = '\0';
      local_60 = local_70;
      local_58 = 0xffffffff;
      local_50 = 0;
      while( true ) {
        lVar6 = (int64_t)(int)local_58;
        iVar8 = (int)local_58 + 1;
        local_58 = CONCAT44(local_58._4_4_,iVar8);
        if (*(int *)((int64_t)local_60 + 0xc) <= iVar8) break;
        (**(code **)(**(int64_t **)(local_60[2] + 8 + lVar6 * 8) + 0x380))();
        if (local_58._4_4_ != 0) {
          if (local_58 < 0) {
            iVar8 = -local_58._4_4_;
          }
          else {
            local_58 = CONCAT44(local_58._4_4_,(int)local_58 - local_58._4_4_);
            FUN_00d23690();
            local_50 = local_50 + local_58._4_4_;
            iVar8 = 0;
          }
          local_58 = CONCAT44(iVar8,(int)local_58);
        }
      }
      FUN_002e0650();
      bVar2 = false;
      plVar4 = (int64_t *)this_ptr[0x27];
      plVar10 = local_60;
    }
    else {
      if (local_70 != (int64_t *)0x0) goto LAB_01bcb7b6;
LAB_01bcb85a:
      bVar2 = true;
      plVar4 = (int64_t *)this_ptr[0x27];
      plVar10 = local_60;
    }
    local_60 = plVar4;
    if (local_60 != (int64_t *)0x0) {
      local_68._0_1_ = '\0';
      local_58 = 0xffffffff;
      local_50 = 0;
      local_58._4_4_ = 0;
      while( true ) {
        if (local_58._4_4_ != 0) {
          if (local_58._4_4_ < 1) {
            iVar8 = -local_58._4_4_;
          }
          else {
            iVar8 = (int)local_58 - local_58._4_4_;
            local_58 = CONCAT44(local_58._4_4_,iVar8);
            FUN_00d23690();
            local_50 = local_50 + local_58._4_4_;
            iVar8 = 0;
          }
          local_58 = CONCAT44(iVar8,(int)local_58);
        }
        lVar6 = (int64_t)(int)local_58;
        iVar8 = (int)local_58 + 1;
        local_58 = CONCAT44(local_58._4_4_,iVar8);
        if (*(int *)((int64_t)local_60 + 0xc) <= iVar8) break;
        plVar10 = *(int64_t **)(local_60[2] + 8 + lVar6 * 8);
        local_40 = '\0';
        local_48 = plVar10;
        cVar5 = FUN_00d23d70();
        if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (cVar5 == '\0') {
          (**(code **)(*plVar10 + 0x380))();
        }
      }
      FUN_002e0650();
      plVar10 = local_60;
    }
    local_60 = plVar10;
    FUN_00d216c0();
    local_68._0_1_ = '\0';
    FUN_00d214d0();
    if (((char)local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d50b00();
    (**(code **)(*this_ptr + 0x4a0))();
    plVar10 = local_48;
    if (local_40 == '\0') {
      if (local_48 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_40 = '\0';
    }
    FUN_01dcb110();
    if ((char)local_68 == '\0') {
      if (((local_70 != (int64_t *)0x0) && (FUN_00d50b00(), (char)local_68 != '\0')) &&
         (local_70 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_68._0_1_ = '\0';
    }
    if (plVar10 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
    FUN_01be80e0();
    if ((((char)local_68 == '\0') && (local_70 != (int64_t *)0x0)) &&
       ((FUN_00d50b00(), (char)local_68 != '\0' && (local_70 != (int64_t *)0x0)))) {
      FUN_00d50b20();
    }
    dVar12 = (double)(**(code **)(*local_70 + 0x378))();
    dVar13 = (double)(**(code **)(*local_70 + 0x368))();
    uVar14 = (**(code **)(*local_70 + 0x390))(dVar12 + dVar13);
    (**(code **)(*local_70 + 0x368))();
    fVar11 = (float)(**(code **)(*local_70 + 0x390))();
    FUN_01beead0();
    local_a8._0_4_ = (uint32_t)uVar14;
    local_a8._4_4_ = (uint32_t)((uint64_t)uVar14 >> 0x20);
    local_a8._8_4_ = (uint32_t)extraout_XMM0_Qb;
    local_a8._12_4_ = (uint32_t)((uint64_t)extraout_XMM0_Qb >> 0x20);
    auVar16._0_4_ = g_023945e0 & (uint)((float)local_a8._0_4_ - fVar11);
    auVar16._4_4_ = _UNK_023945e4 & local_a8._4_4_;
    auVar16._8_4_ = _UNK_023945e8 & local_a8._8_4_;
    auVar16._12_4_ = _UNK_023945ec & local_a8._12_4_;
    auVar15._4_12_ = SUB1612(auVar16 | g_023945f0,4);
    auVar15._0_4_ = SUB164(auVar16 | g_023945f0,0) + ((float)local_a8._0_4_ - fVar11);
    auVar16 = roundss(auVar15,auVar15,0xb);
    auVar19._0_12_ = ZEXT812(0);
    auVar19._12_4_ = 0;
    local_a8 = blendps(auVar19,auVar16,1);
    if ((char)local_68 == '\0') {
      if (local_70 != (int64_t *)0x0) {
        FUN_00d50b00();
        if (((char)local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        goto LAB_01bcbb90;
      }
    }
    else if (local_70 != (int64_t *)0x0) {
LAB_01bcbb90:
      local_68._0_1_ = '\0';
      local_70 = (int64_t *)0x0;
      local_60 = plVar3;
      local_58 = 0xffffffff;
      local_50 = 0;
      while( true ) {
        lVar6 = (int64_t)(int)local_58;
        iVar8 = (int)local_58 + 1;
        local_58 = CONCAT44(local_58._4_4_,iVar8);
        if (*(int *)((int64_t)local_60 + 0xc) <= iVar8) break;
        local_70 = *(int64_t **)(local_60[2] + 8 + lVar6 * 8);
        FUN_01bc0650();
        plVar10 = local_48;
        if (local_40 == '\0') {
          if (local_48 == (int64_t *)0x0) goto LAB_01bcbc40;
          FUN_00d50b00();
          if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        else if (local_48 == (int64_t *)0x0) {
LAB_01bcbc40:
          FUN_01bc0730();
          if ((((local_48 != (int64_t *)0x0) && (plVar10 = local_48, local_40 == '\0')) &&
              (FUN_00d50b00(), local_40 != '\0')) && (local_48 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        auVar17._0_8_ = FUN_01bbf250();
        auVar17._8_8_ = extraout_XMM0_Qb_00;
        auVar18._4_12_ = auVar17._4_12_;
        auVar18._0_4_ = (float)auVar17._0_8_ + extraout_XMM0_Db;
        blendps(ZEXT816(0),local_a8,2);
        auVar16 = insertps(local_a8,auVar18,0x10);
        (**(code **)(*plVar10 + 0x4d0))();
        (**(code **)(*plVar10 + 0x918))();
        local_40 = '\0';
        local_48 = plVar10;
        iVar8 = FUN_00d237a0();
        if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (iVar8 < 0) {
          FUN_00d50b00();
          (**(code **)(*this_ptr + 0x450))();
          FUN_00d50b20();
        }
        else {
          FUN_00d23620();
        }
        (**(code **)(*plVar10 + 0x4d8))();
        FUN_01bc1260();
        (**(code **)(*local_48 + 0x5c0))();
        if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
        local_f8 = auVar16._0_4_;
        fStack_f4 = auVar16._4_4_;
        fStack_f0 = auVar16._8_4_;
        fStack_ec = auVar16._12_4_;
        auVar20._0_4_ = local_f8 + local_a8._0_4_;
        auVar20._4_4_ = fStack_f4 + local_a8._4_4_;
        auVar20._8_4_ = fStack_f0 + local_a8._8_4_;
        auVar20._12_4_ = fStack_ec + local_a8._12_4_;
        local_a8 = blendps(local_a8,auVar20,2);
        if (local_58._4_4_ != 0) {
          if (local_58 < 0) {
            iVar8 = -local_58._4_4_;
          }
          else {
            local_58 = CONCAT44(local_58._4_4_,(int)local_58 - local_58._4_4_);
            FUN_00d23690();
            local_50 = local_50 + local_58._4_4_;
            iVar8 = 0;
          }
          local_58 = CONCAT44(iVar8,(int)local_58);
        }
      }
      FUN_002e0650();
      FUN_00d50b20();
    }
    FUN_00d50b00();
    (**(code **)(*this_ptr + 0x4e8))();
    FUN_00d50b20();
    if (*(int *)((int64_t)plVar3 + 0xc) != 0) {
      do {
        FUN_00d23340();
        local_48 = (int64_t *)CONCAT71(local_48._1_7_,(char)local_68);
        pplVar7 = &local_68;
        if ((char)local_68 == '\0') {
          pplVar7 = &local_48;
        }
        *(void*)pplVar7 = 0;
        if (((char)local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (((char)local_48 == '\0') && (local_70 != (int64_t *)0x0)) {
          FUN_00d50b00();
        }
        (**(code **)(*local_70 + 0x480))();
        FUN_01e40eb0();
        if (((char)local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (local_70 != (int64_t *)0x0) {
          (**(code **)(*local_70 + 0x478))();
        }
        lVar6 = local_70[0x27];
        lVar9 = 0;
        if (lVar6 == 0) {
LAB_01bcbf1b:
          if (lVar9 != 0) goto LAB_01bcbf20;
        }
        else {
          if (*(int64_t *)(lVar6 + 0x40) != 0) {
            *(void*)(lVar6 + 0x40) = 0;
            FUN_00d50b20();
            lVar9 = local_70[0x27];
            goto LAB_01bcbf1b;
          }
LAB_01bcbf20:
          local_70[0x27] = 0;
          FUN_00d50b20();
        }
        FUN_00d23740();
        FUN_00d50b20();
      } while (*(int *)((int64_t)plVar3 + 0xc) != 0);
    }
    if (plVar3 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
    if (!bVar2) {
      FUN_00d50b20();
    }
  }
  if (plVar1 == (int64_t *)0x0) {
    return;
  }
LAB_01bcbf7a:
  FUN_00d50b20();
  return;
}



// ============================================================
// 01daee00
// ============================================================
// Function: FUN_01daee00
// Address: 01daee00
// Size: 2774 bytes
// Class: GNMultipleValue

void FUN_01daee00(uint64_t param_1,uint64_t param_2)

{
  uint8_t auVar1 [12];
  bool bVar2;
  int64_t lVar3;
  uint uVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  int64_t lVar8;
  int64_t *arg1;
  int64_t *this_ptr;
  bool bVar9;
  float fVar10;
  uint64_t uVar11;
  float fVar16;
  uint64_t uVar12;
  uint64_t uVar13;
  float extraout_XMM0_Db;
  uint64_t uVar14;
  uint64_t extraout_XMM0_Qb;
  uint8_t auVar15 [16];
  float fVar17;
  float fVar18;
  float fStack_114;
  float local_e8;
  float fStack_e4;
  uint8_t local_d8 [16];
  float local_c8;
  float fStack_c4;
  float local_a8;
  float fStack_a4;
  float local_98;
  float local_78;
  float fStack_74;
  uint32_t uStack_70;
  uint32_t uStack_6c;
  int64_t local_50;
  char local_48;
  float local_34;
  
  *(void*)(this_ptr + 0x3b) = 0;
  iVar6 = FUN_01d3a5a0();
  if ((iVar6 == 7) && (iVar6 = FUN_01d3b650(), iVar6 == 0)) {
    cVar5 = (**(code **)(*this_ptr + 0x9a0))();
    if (cVar5 == '\0') {
      return;
    }
    (**(code **)(*this_ptr + 0xb10))();
    FUN_01d3b640();
    if (this_ptr[0x39] != 0) {
      FUN_01d0d420();
    }
    (**(code **)(*this_ptr + 0xb08))();
    (**(code **)(*this_ptr + 0x620))();
                                            (**(code **)(*this_ptr + 0xa50))();
    return;
  }
  iVar6 = FUN_01d3a5a0();
  if ((iVar6 != 1) || (iVar6 = FUN_01d3b630(), iVar6 != 1)) {
    FUN_01d122b0();
    return;
  }
  cVar5 = (**(code **)(*this_ptr + 0x9a0))();
  if (cVar5 == '\0') {
    return;
  }
  uVar7 = FUN_01d3b590();
  if (g_028b89b4 == 0) {
    g_028b89b4 = 8;
    uVar7 = ~uVar7 & 8;
  }
  else {
    uVar7 = g_028b89b4 & ~uVar7;
  }
  if (uVar7 == 0) {
    (**(code **)(*this_ptr + 0x990))();
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if (local_50 != 0) {
      (**(code **)(*this_ptr + 0x990))();
      if (local_48 == '\0') {
        if (local_50 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_48 = '\0';
      }
      (**(code **)(*this_ptr + 0x978))();
      if (local_50 != 0) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      goto LAB_01daf8bf;
    }
  }
  *(void*)(this_ptr + 0x31) = 1;
  (**(code **)(*this_ptr + 0x620))();
  FUN_01d3abf0();
  uVar11 = FUN_01e466c0();
  fVar16 = (float)((uint64_t)uVar11 >> 0x20);
  uVar12 = (**(code **)(*this_ptr + 0xaf8))();
  local_78 = (float)uVar12;
  fStack_74 = (float)((uint64_t)uVar12 >> 0x20);
  uStack_70 = (uint32_t)extraout_XMM0_Qb;
  uStack_6c = (uint32_t)((uint64_t)extraout_XMM0_Qb >> 0x20);
  uVar14 = param_2;
  uVar13 = (**(code **)(*this_ptr + 0xb00))();
  local_e8 = (float)uVar14;
  fStack_e4 = (float)((uint64_t)uVar14 >> 0x20);
  cVar5 = FUN_00d05410();
  local_98 = (float)uVar11;
  local_a8 = (float)param_2;
  fStack_a4 = (float)((uint64_t)param_2 >> 0x20);
  if (cVar5 != '\0') {
    local_34 = 0.0;
LAB_01daf3d0:
    local_d8._0_4_ = local_98;
    bVar2 = false;
    local_78 = 1.4013e-45;
    fVar18 = fVar16;
    do {
      (**(code **)(*this_ptr + 0xaa8))();
      (**(code **)(*this_ptr + 0x658))();
      lVar8 = *arg1;
      if (lVar8 == local_50) {
        if (((char)arg1[1] != '\0') || (local_50 == 0)) goto LAB_01daf50b;
        if (local_48 == '\0') {
          FUN_00d50b00();
          goto LAB_01daf506;
        }
LAB_01daf4d2:
        *(void*)(arg1 + 1) = 1;
      }
      else {
        lVar3 = arg1[1];
        if (local_48 != '\0') {
          *arg1 = local_50;
          if (((char)lVar3 != '\0') && (lVar8 != 0)) {
            FUN_00d50b20();
          }
          goto LAB_01daf4d2;
        }
        if (local_50 != 0) {
          FUN_00d50b00();
        }
        *arg1 = local_50;
        if (((char)lVar3 != '\0') && (lVar8 != 0)) {
          FUN_00d50b20();
        }
LAB_01daf506:
        *(void*)(arg1 + 1) = 1;
LAB_01daf50b:
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
      }
      if ((*arg1 == 0) || (iVar6 = FUN_01d3a5a0(), iVar6 == 6)) goto LAB_01daf882;
      uVar7 = FUN_01d3b590();
      if (g_028b89b0 == 0) {
        g_028b89b0 = 4;
      }
      bVar9 = (g_028b89b0 & ~uVar7) == 0;
      if (bVar9) {
        bVar2 = true;
      }
      *(bool *)(this_ptr + 0x3b) = bVar9;
      iVar6 = FUN_01d3a5a0();
      if (iVar6 == 5) {
        FUN_01d3abf0();
        uVar14 = FUN_01e466c0();
        cVar5 = (**(code **)(*this_ptr + 0xae0))();
        fStack_c4 = (float)((uint64_t)uVar14 >> 0x20);
        local_c8 = (float)uVar14;
        if (cVar5 == '\0') {
          if (bVar2) {
            cVar5 = (**(code **)(*this_ptr + 0xaf0))();
            if (cVar5 == '\0') {
              fVar18 = fStack_c4 - fVar18;
            }
            else {
              fVar18 = fVar18 - fStack_c4;
            }
            fVar18 = fVar18 / (fStack_e4 - fStack_a4);
            if ((char)this_ptr[0x3b] != '\0') {
              fVar18 = fVar18 * g_02391090;
            }
            fVar10 = (float)(**(code **)(*this_ptr + 0xb10))();
            fVar17 = g_02390124;
            if (fVar10 + fVar18 <= g_02390124) {
              fVar17 = fVar10 + fVar18;
            }
            local_34 = 0.0;
            if (0.0 <= fVar17) {
              local_34 = fVar17;
            }
            if (this_ptr[0x39] != 0) {
              cVar5 = (char)this_ptr[0x3b];
              goto joined_r0x01daf811;
            }
          }
          else {
            fStack_114 = (float)((uint64_t)uVar13 >> 0x20);
            fStack_114 = (fStack_c4 - (fVar16 - fStack_74)) - fStack_114;
            fVar18 = 0.0;
            if (0.0 <= fStack_114) {
              fVar18 = fStack_114;
            }
            uVar7 = -(uint)(fStack_e4 < fStack_a4 + fVar18);
            fVar18 = (float)(uVar7 & (uint)(fStack_e4 - fStack_a4) | ~uVar7 & (uint)fVar18) /
                     (fStack_e4 - fStack_a4);
            cVar5 = (**(code **)(*this_ptr + 0xaf0))();
            if (cVar5 != '\0') {
              fVar18 = g_02390124 - fVar18;
            }
            fVar17 = g_02390124;
            if (fVar18 <= g_02390124) {
              fVar17 = fVar18;
            }
            local_34 = 0.0;
            if (0.0 <= fVar17) {
              local_34 = fVar17;
            }
            if (this_ptr[0x39] != 0) {
              cVar5 = (char)this_ptr[0x3b];
joined_r0x01daf811:
              if (cVar5 == '\0') {
                local_34 = (float)FUN_01d0d420();
              }
            }
          }
        }
        else if (bVar2) {
          fVar18 = (local_c8 - (float)local_d8._0_4_) / (local_e8 - local_a8);
          if ((char)this_ptr[0x3b] != '\0') {
            fVar18 = fVar18 * g_02391090;
          }
          fVar10 = (float)(**(code **)(*this_ptr + 0xb10))();
          fVar17 = g_02390124;
          if (fVar10 + fVar18 <= g_02390124) {
            fVar17 = fVar10 + fVar18;
          }
          local_34 = 0.0;
          if (0.0 <= fVar17) {
            local_34 = fVar17;
          }
          if (this_ptr[0x39] != 0) {
            cVar5 = (char)this_ptr[0x3b];
            goto joined_r0x01daf811;
          }
        }
        else {
          fVar18 = g_02390124;
          if (local_34 <= g_02390124) {
            fVar18 = local_34;
          }
          local_34 = 0.0;
          if (0.0 <= fVar18) {
            local_34 = fVar18;
          }
          if ((this_ptr[0x39] != 0) && ((char)this_ptr[0x3b] == '\0')) {
            local_d8 = ZEXT416(0);
            local_34 = (float)FUN_01d0d420();
          }
        }
        (**(code **)(*this_ptr + 0xb08))();
        cVar5 = (**(code **)(*this_ptr + 0xa38))();
        if (cVar5 != '\0') {
          (**(code **)(*this_ptr + 0xa50))();
          local_78 = 2.8026e-45;
        }
        local_d8._0_4_ = local_c8;
        fVar18 = fStack_c4;
      }
    } while( true );
  }
  uVar7 = FUN_01d3b590();
  if (g_028b89b0 == 0) {
    g_028b89b0 = 4;
  }
  uVar4 = g_028b89b0;
  cVar5 = (**(code **)(*this_ptr + 0xae0))();
  if ((uVar4 & ~uVar7) != 0) {
    if (cVar5 == '\0') {
      auVar15 = roundss(ZEXT416((uint)(g_0239011c * fStack_a4)),
                        ZEXT416((uint)(g_0239011c * fStack_a4)),9);
      fVar18 = fVar16 - auVar15._0_4_;
      local_a8 = 0.0;
      if (0.0 <= fVar18) {
        local_a8 = fVar18;
      }
      uVar7 = -(uint)(fStack_e4 < fStack_a4 + local_a8);
      fVar17 = (float)(~uVar7 & (uint)local_a8 | uVar7 & (uint)(fStack_e4 - fStack_a4)) /
               (fStack_e4 - fStack_a4);
      fVar18 = g_02390124;
      if (fVar17 <= g_02390124) {
        fVar18 = fVar17;
      }
      local_34 = 0.0;
      if (0.0 <= fVar18) {
        local_34 = fVar18;
      }
      fStack_a4 = 0.0;
      cVar5 = (**(code **)(*this_ptr + 0xaf0))();
      if (cVar5 != '\0') {
        local_34 = g_02390124 - local_34;
      }
    }
    else {
      auVar15 = roundss(ZEXT416((uint)(g_0239011c * local_a8)),
                        ZEXT416((uint)(g_0239011c * local_a8)),9);
      fVar17 = local_98 - auVar15._0_4_;
      fVar18 = 0.0;
      if (0.0 <= fVar17) {
        fVar18 = fVar17;
      }
      uVar7 = -(uint)(local_e8 < local_a8 + fVar18);
      fVar18 = (float)(~uVar7 & (uint)fVar18 | uVar7 & (uint)(local_e8 - local_a8)) /
               (local_e8 - local_a8);
      local_a8 = g_02390124;
      if (fVar18 <= g_02390124) {
        local_a8 = fVar18;
      }
      fStack_a4 = 0.0;
      local_34 = 0.0;
      if (0.0 <= local_a8) {
        local_34 = local_a8;
      }
    }
    (**(code **)(*this_ptr + 0xb08))();
    (**(code **)(*this_ptr + 0xaf8))();
    fStack_74 = extraout_XMM0_Db;
    goto LAB_01daf3d0;
  }
  auVar15._8_4_ = uStack_70;
  auVar15._0_8_ = uVar12;
  auVar15._12_4_ = uStack_6c;
  if (cVar5 == '\0') {
    if (fStack_a4 + fStack_74 + g_02390d00 < fVar16) {
      (**(code **)(*this_ptr + 0xaf0))();
      (**(code **)(*this_ptr + 0xb10))();
      (**(code **)(*this_ptr + 0xb18))();
      auVar15 = ZEXT416(0);
      (**(code **)(*this_ptr + 0xb08))();
      auVar1._4_8_ = auVar15._8_8_;
      auVar1._0_4_ = fStack_74;
      auVar15._0_8_ = auVar1._0_8_ << 0x20;
    }
    if (fVar16 < auVar15._4_4_) {
      (**(code **)(*this_ptr + 0xaf0))();
      (**(code **)(*this_ptr + 0xb10))();
      (**(code **)(*this_ptr + 0xb18))();
      goto LAB_01daf303;
    }
  }
  else {
    if (local_a8 + local_78 + g_02390d00 < local_98) {
      (**(code **)(*this_ptr + 0xb10))();
      (**(code **)(*this_ptr + 0xb18))();
      (**(code **)(*this_ptr + 0xb08))();
    }
    if (local_98 < auVar15._0_4_) {
      (**(code **)(*this_ptr + 0xb10))();
      (**(code **)(*this_ptr + 0xb18))();
LAB_01daf303:
      (**(code **)(*this_ptr + 0xb08))();
    }
  }
LAB_01daf8bf:
  lVar8 = *this_ptr;
LAB_01daf8c7:
  (**(code **)(lVar8 + 0xa50))();
  return;
LAB_01daf882:
  (**(code **)(*this_ptr + 0x6e0))();
  *(void*)(this_ptr + 0x3b) = 0;
  *(void*)(this_ptr + 0x31) = 0;
  (**(code **)(*this_ptr + 0x620))();
  if (local_78 == 2.8026e-45) {
    lVar8 = *this_ptr;
    goto LAB_01daf8c7;
  }
  goto LAB_01daf8bf;
}



// ============================================================
// 01d77a60
// ============================================================
// Function: FUN_01d77a60
// Address: 01d77a60
// Size: 2956 bytes
// Class: GNMultipleValue

void FUN_01d77a60(uint64_t param_1)

{
  uint32_t uVar1;
  uint8_t auVar2 [16];
  int64_t lVar3;
  char cVar4;
  uint8_t uVar5;
  uint32_t uVar6;
  uint32_t uVar7;
  int64_t lVar8;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t **pplVar9;
  int64_t *plVar10;
  bool bVar11;
  float fVar12;
  double dVar13;
  uint64_t extraout_XMM0_Qb;
  uint8_t auVar15 [16];
  uint8_t auVar16 [16];
  uint64_t uVar14;
  uint64_t extraout_XMM0_Qb_00;
  uint64_t extraout_XMM0_Qb_01;
  uint8_t auVar17 [16];
  float fVar18;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  uint8_t in_XMM1 [16];
  uint8_t auVar19 [16];
  float fVar24;
  float fVar25;
  int64_t local_148;
  char local_140;
  int64_t local_138;
  char local_130;
  uint64_t local_128;
  uint64_t uStack_120;
  uint32_t local_10c;
  int64_t local_108;
  char local_100;
  uint64_t local_f8;
  uint64_t uStack_f0;
  int64_t local_e8;
  char local_e0;
  int64_t local_d8;
  char local_d0;
  int64_t local_c8;
  char local_c0;
  int64_t local_b8;
  char local_b0;
  uint64_t local_88;
  uint64_t uStack_80;
  int64_t local_68;
  char local_60;
  uint8_t local_58 [16];
  uint32_t local_44;
  int64_t *local_40;
  char local_38;
  
  pplVar9 = &local_40;
  local_58 = in_XMM1;
  (**(code **)(*this_ptr + 0x640))();
  plVar10 = local_40;
  FUN_01d74c10();
  if (plVar10 == (int64_t *)0x0) {
LAB_01d77ac5:
    pplVar9 = &g_02802688;
  }
  else {
    (**(code **)(*plVar10 + 0x360))();
    cVar4 = FUN_00e85ea0();
    if (cVar4 == '\0') goto LAB_01d77ac5;
  }
  plVar10 = *pplVar9;
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar10 != (int64_t *)0x0) {
    FUN_01cef520(param_1);
    return;
  }
  cVar4 = FUN_01e420b0();
  if (cVar4 == '\0') {
    uVar6 = 0;
  }
  else {
    uVar6 = (**(code **)(*this_ptr + 0x878))();
  }
  (**(code **)(*this_ptr + 0x640))();
  local_58._0_8_ = local_40;
  if ((((local_38 == '\0') && (local_40 != (int64_t *)0x0)) && (FUN_00d50b00(), local_38 != '\0'))
     && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  uVar7 = *(void*)((int64_t)this_ptr + 0x1fc);
  cVar4 = FUN_01cef4b0();
  if (cVar4 == '\0') {
    FUN_01cef410();
    bVar11 = local_40 != (int64_t *)0x0;
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    uVar7 = 0;
  }
  else {
    bVar11 = false;
  }
  uVar1 = *(void*)((int64_t)this_ptr + 0x18c);
  cVar4 = FUN_01cf0800();
  local_128 = CONCAT44(local_128._4_4_,uVar6) & 0xffffffff000000ff;
  if (cVar4 == '\0') {
    local_f8 = FUN_01e3f820();
    uVar6 = (**(code **)(*this_ptr + 0x920))();
    uVar5 = (**(code **)(*this_ptr + 0x9a0))();
    (**(code **)(*this_ptr + 0xa70))();
    local_88 = in_XMM1._0_8_;
    uStack_80 = in_XMM1._8_8_;
    (**(code **)(*(int64_t *)local_58._0_8_ + 0x3f0))(local_f8,uVar1,uVar6,uVar5);
  }
  else {
    dVar13 = (double)FUN_00e7d6f0();
    auVar19._0_8_ = dVar13 - (double)this_ptr[0x43];
    auVar19._8_8_ = extraout_XMM0_Qb;
    auVar15._4_12_ = auVar19._4_12_;
    auVar15._0_4_ = (float)auVar19._0_8_ * g_0239011c;
    auVar19 = roundss(in_XMM1,auVar15,9);
    fVar12 = (auVar15._0_4_ - auVar19._0_4_) * g_02410f88;
    auVar16._0_4_ = fVar12 + fVar12;
    auVar16._4_12_ = auVar15._4_12_;
    fVar12 = (float)_cosf(auVar16._0_8_);
    auVar19 = ZEXT416((uint)((g_02390124 - fVar12) * g_0239011c));
    FUN_01cc5880();
    local_f8 = FUN_01e3f820();
    uVar6 = (**(code **)(*this_ptr + 0x920))();
    uVar5 = (**(code **)(*this_ptr + 0x9a0))();
    (**(code **)(*this_ptr + 0xa70))();
    local_88 = auVar19._0_8_;
    uStack_80 = auVar19._8_8_;
    (**(code **)(*(int64_t *)local_58._0_8_ + 0x3f0))(uVar7,uVar1,uVar6,uVar5);
    FUN_01cc5880();
  }
  uVar14 = FUN_01e3f820();
  local_f8 = local_88;
  uStack_f0 = uStack_80;
  FUN_01cef410();
  plVar10 = local_40;
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar10 == (int64_t *)0x0) {
    uVar14 = FUN_01e3f820();
    (**(code **)(*this_ptr + 0x960))();
    plVar10 = local_40;
    if (local_38 == '\0') {
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    (**(code **)(*this_ptr + 0x9e0))();
    local_68 = local_108;
    local_60 = 0;
    if (local_100 == '\0') {
      if (local_108 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_100 = '\0';
    }
    local_60 = '\x01';
    uVar6 = *(void*)((int64_t)this_ptr + 0x174);
    (**(code **)(*this_ptr + 0x9a0))();
    (**(code **)(*this_ptr + 0xa70))();
    (**(code **)(*(int64_t *)local_58._0_8_ + 0x400))(uVar14,5,&local_68,uVar6);
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if ((local_100 != '\0') && (local_108 != 0)) {
      FUN_00d50b20();
    }
    if (plVar10 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    pplVar9 = &local_40;
    (**(code **)(*this_ptr + 0x640))();
    plVar10 = local_40;
    FUN_00209700();
    if (plVar10 == (int64_t *)0x0) {
LAB_01d780ae:
      pplVar9 = &g_02802688;
    }
    else {
      (**(code **)(*plVar10 + 0x360))();
      cVar4 = FUN_00e85ea0();
      if (cVar4 == '\0') goto LAB_01d780ae;
    }
    plVar10 = *pplVar9;
    if (*(char *)(pplVar9 + 1) == '\0') {
      if (plVar10 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      *(void*)(pplVar9 + 1) = 0;
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar10 != (int64_t *)0x0) {
      if ((char)this_ptr[0x4a] != '\0') {
        cVar4 = (**(code **)(*this_ptr + 0x9a0))();
        if (cVar4 == '\0') {
          local_d0 = 0;
          lVar8 = plVar10[0x12];
          if (lVar8 != 0) {
            FUN_00d50b00();
          }
          local_d0 = '\x01';
          local_d8 = lVar8;
          FUN_01d488d0();
          if ((local_d0 != '\0') && (local_d8 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_e0 = 0;
          lVar8 = plVar10[0x11];
          if (lVar8 != 0) {
            FUN_00d50b00();
          }
          local_e0 = '\x01';
          local_e8 = lVar8;
          FUN_01d488d0();
          if ((local_e0 != '\0') && (local_e8 != 0)) {
            FUN_00d50b20();
          }
        }
        (**(code **)(*this_ptr + 0x640))();
        FUN_01cb3a60();
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      FUN_00d50b20();
    }
    goto LAB_01d785d1;
  }
  FUN_01d48370();
  (**(code **)(*(int64_t *)*arg1 + 0x390))(uVar14);
  uVar14 = (**(code **)(*this_ptr + 0x9a0))();
  if (((char)uVar14 == '\0') && (lVar8 = this_ptr[0x3c], lVar8 != 0)) {
    FUN_00d50b00();
LAB_01d78264:
    local_44 = 0;
  }
  else {
    if (((int)this_ptr[0x29] != 0) &&
       ((lVar8 = this_ptr[0x3b], lVar8 != 0 && (*(int *)((int64_t)this_ptr + 500) == 1)))) {
      FUN_00d50b00();
      goto LAB_01d78264;
    }
    if ((((char)this_ptr[0x31] != '\0') && (lVar8 = this_ptr[0x3b], lVar8 != 0)) &&
       (*(int *)((int64_t)this_ptr + 500) != 1)) {
      FUN_00d50b00();
      goto LAB_01d78264;
    }
    lVar8 = this_ptr[0x3a];
    if (lVar8 != 0) {
      FUN_00d50b00();
      goto LAB_01d78264;
    }
    local_44 = (uint32_t)CONCAT71((int7)((uint64_t)uVar14 >> 8),1);
    lVar8 = 0;
  }
  FUN_00d05560();
  local_10c = *(void*)((int64_t)this_ptr + 0x18c);
  lVar3 = this_ptr[0x3e];
  local_140 = '\0';
  local_148 = lVar8;
  (**(code **)(*this_ptr + 0x920))();
  (**(code **)(*this_ptr + 0x9a0))();
  (**(code **)(*this_ptr + 0xa70))();
  fVar12 = (float)local_f8;
  fVar20 = local_f8._4_4_;
  fVar22 = (float)uStack_f0;
  fVar24 = uStack_f0._4_4_;
  (**(code **)(*(int64_t *)local_58._0_8_ + 0x408))((char)lVar3,local_10c,&local_148,2);
  if ((local_140 != '\0') && (local_148 != 0)) {
    FUN_00d50b20();
  }
  pplVar9 = &local_40;
  (**(code **)(*this_ptr + 0x640))();
  plVar10 = local_40;
  FUN_00209700();
  if (plVar10 == (int64_t *)0x0) {
    pplVar9 = &g_02802688;
    plVar10 = g_02802688;
    if (g_02802690 == '\0') goto LAB_01d783e8;
LAB_01d783c9:
    *(void*)(pplVar9 + 1) = 0;
  }
  else {
    (**(code **)(*plVar10 + 0x360))();
    cVar4 = FUN_00e85ea0();
    if (cVar4 == '\0') {
      pplVar9 = &g_02802688;
    }
    plVar10 = *pplVar9;
    if (*(char *)(pplVar9 + 1) != '\0') goto LAB_01d783c9;
LAB_01d783e8:
    if (plVar10 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((bVar11) && (plVar10 != (int64_t *)0x0)) {
    cVar4 = (**(code **)(*this_ptr + 0x9a0))();
    if (cVar4 == '\0') {
      local_b0 = 0;
      lVar3 = plVar10[0x12];
      if (lVar3 != 0) {
        FUN_00d50b00();
      }
      local_b0 = '\x01';
      local_b8 = lVar3;
      FUN_01d488d0();
      if ((local_b0 != '\0') && (local_b8 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_c0 = 0;
      lVar3 = plVar10[0x11];
      if (lVar3 != 0) {
        FUN_00d50b00();
      }
      local_c0 = '\x01';
      local_c8 = lVar3;
      FUN_01d488d0();
      if ((local_c0 != '\0') && (local_c8 != 0)) {
        FUN_00d50b20();
      }
    }
    (**(code **)(*this_ptr + 0x640))();
    local_138 = *arg1;
    local_130 = '\0';
    local_128 = FUN_01e3f820();
    fVar18 = fVar12;
    fVar21 = fVar20;
    fVar23 = fVar22;
    fVar25 = fVar24;
    uStack_120 = extraout_XMM0_Qb_00;
    uVar14 = FUN_01e3f820();
    auVar17._0_4_ = (float)uVar14 + fVar18;
    auVar17._4_4_ = (float)((uint64_t)uVar14 >> 0x20) + fVar21;
    auVar17._8_4_ = (float)extraout_XMM0_Qb_01 + fVar23;
    auVar17._12_4_ = (float)((uint64_t)extraout_XMM0_Qb_01 >> 0x20) + fVar25;
    auVar2._4_4_ = local_128._4_4_ + fVar20;
    auVar2._0_4_ = (float)local_128 + fVar12;
    auVar2._8_4_ = (float)uStack_120 + fVar22;
    auVar2._12_4_ = uStack_120._4_4_ + fVar24;
    blendps(auVar17,auVar2,0xd);
    FUN_01cb3a60();
    if ((local_130 != '\0') && (local_138 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  FUN_01d48390();
  if (plVar10 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((char)local_44 == '\0' && lVar8 != 0) {
    FUN_00d50b20();
  }
LAB_01d785d1:
  FUN_00d50b20();
  return;
}



// ============================================================
// 01e08aa0
// ============================================================
// Function: FUN_01e08aa0
// Address: 01e08aa0
// Size: 3479 bytes
// Class: GNMultipleValue

void FUN_01e08aa0(void)

{
  int64_t *plVar1;
  int64_t lVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  void*puVar7;
  int64_t *plVar8;
  int64_t *plVar9;
  int64_t *arg1;
  int64_t *this_ptr;
  uint32_t uVar10;
  uint64_t uVar11;
  uint64_t extraout_XMM0_Qb;
  uint8_t auVar12 [16];
  uint8_t auVar13 [16];
  float fVar15;
  uint8_t auVar14 [16];
  int64_t local_1b0;
  char local_1a8;
  int64_t local_1a0;
  char local_198;
  int64_t local_190;
  char local_188;
  int64_t local_180;
  char local_178;
  int64_t *local_170;
  char local_168;
  void*local_160;
  char local_158;
  int64_t *local_150;
  char local_148;
  int64_t *local_140;
  char local_138;
  int64_t local_130;
  char local_128;
  float local_11c;
  int64_t *local_78;
  int64_t local_60;
  char local_58;
  int64_t *local_48;
  int64_t *local_40;
  char local_38;
  
  (**(code **)(*this_ptr + 0x640))();
  if ((local_38 == '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  FUN_01e42030();
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (((local_40 == (int64_t *)0x0) || (cVar5 = (**(code **)(*this_ptr + 0x9a0))(), cVar5 == '\0')
      ) || ((*(char *)((int64_t)this_ptr + 0x1e3) == '\0' &&
            (*(char *)((int64_t)this_ptr + 0x221) == '\0')))) {
    if (local_40 == (int64_t *)0x0) {
      return;
    }
    bVar3 = true;
    plVar8 = (int64_t *)0x0;
    goto LAB_01e097da;
  }
  FUN_01e42030();
  FUN_01d8ce80();
  plVar1 = this_ptr + 0x40;
  plVar8 = (int64_t *)this_ptr[0x40];
  plVar9 = plVar8;
  if (plVar8 != local_40) {
    plVar9 = local_40;
    if (local_38 == '\0') {
      if (local_40 == (int64_t *)0x0) {
        plVar9 = (int64_t *)0x0;
        goto LAB_01e08b96;
      }
      FUN_00d50b00();
      plVar8 = (int64_t *)*plVar1;
      *plVar1 = (int64_t)local_40;
    }
    else {
      local_38 = '\0';
LAB_01e08b96:
      *plVar1 = (int64_t)plVar9;
    }
    if (plVar8 != (int64_t *)0x0) {
      FUN_00d50b20();
      plVar9 = local_40;
    }
  }
  if ((local_38 != '\0') && (plVar9 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  FUN_01e1cd20();
  FUN_01e1cd10();
  cVar5 = (**(code **)(*(int64_t *)*plVar1 + 0x950))();
  if (cVar5 != '\0') {
    (**(code **)(*(int64_t *)*plVar1 + 0x948))();
  }
  FUN_00d403d0();
  FUN_00d50b00();
  local_1b0 = g_027f32f0;
  if (g_027f32f0 != 0) {
    FUN_00d50b00();
  }
  local_1a8 = '\x01';
  local_1a0 = 0;
  local_198 = '\0';
  FUN_00d41430(&local_1a0,&local_1b0);
  if ((local_198 != '\0') && (local_1a0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_1a8 != '\0') && (local_1b0 != 0)) {
    FUN_00d50b20();
  }
  if (this_ptr != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d403d0();
  FUN_00d50b00();
  local_190 = g_027f32f8;
  if (g_027f32f8 != 0) {
    FUN_00d50b00();
  }
  local_188 = '\x01';
  local_180 = 0;
  local_178 = '\0';
  FUN_00d41430(&local_180,&local_190);
  if ((local_178 != '\0') && (local_180 != 0)) {
    FUN_00d50b20();
  }
  if ((local_188 != '\0') && (local_190 != 0)) {
    FUN_00d50b20();
  }
  if (this_ptr != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01e42030();
  FUN_01d8ce80();
  plVar8 = (int64_t *)*plVar1;
  plVar9 = plVar8;
  if (plVar8 != local_40) {
    plVar9 = local_40;
    if (local_38 == '\0') {
      if (local_40 == (int64_t *)0x0) {
        plVar9 = (int64_t *)0x0;
        goto LAB_01e08e6f;
      }
      FUN_00d50b00();
      plVar8 = (int64_t *)*plVar1;
      *plVar1 = (int64_t)local_40;
    }
    else {
      local_38 = '\0';
LAB_01e08e6f:
      *plVar1 = (int64_t)plVar9;
    }
    if (plVar8 != (int64_t *)0x0) {
      FUN_00d50b20();
      plVar9 = local_40;
    }
  }
  if ((local_38 != '\0') && (plVar9 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  iVar6 = (**(code **)(*this_ptr + 0x9d0))();
  if (iVar6 == 0xff) {
    iVar6 = (**(code **)(*local_40 + 0x5c0))();
  }
  (**(code **)(*this_ptr + 0x9e0))();
  local_48 = local_40;
  if (local_40 == (int64_t *)0x0) {
    (**(code **)(MACH_HEADER._0_8_ + 0x370))();
    local_48 = (int64_t *)0x0;
    bVar4 = false;
  }
  else {
    if (local_38 == '\0') {
      FUN_00d50b00();
    }
    bVar4 = true;
  }
  local_170 = local_48;
  local_168 = '\0';
  FUN_01e12b60();
  if ((local_168 != '\0') && (local_170 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  auVar13 = ZEXT416(g_02390124);
  FUN_01cfbee0();
  if (local_38 == '\0') {
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  FUN_01e11fd0();
  if (local_40 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(*local_40 + 0x490))(1,0x11,0);
  if (local_38 == '\0') {
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  FUN_01e11400();
  if (local_40 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  lVar2 = this_ptr[0x42];
  if (lVar2 != 0) {
    FUN_00d50b00();
    FUN_01e11400();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_01e12e00();
  FUN_01e11330();
  lVar2 = this_ptr[0x2b];
  if (lVar2 == 0) {
    puVar7 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar7 = &g_025795a8;
    (*g_025795c0)();
    local_158 = '\x01';
    local_160 = puVar7;
    FUN_01e125e0();
    if ((local_158 != '\0') && (local_160 != (void*)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    FUN_00d50b00();
    FUN_00d8dab0();
    if (local_38 == '\0') {
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    FUN_01e125e0();
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_01e15af0();
  FUN_01e15aa0();
  FUN_01e10580();
  (**(code **)(this_ptr[0x39] + 0x10))();
  FUN_00d50b00();
  FUN_01e13680();
  if (this_ptr + 0x39 != (int64_t *)0x0) {
    (**(code **)(this_ptr[0x39] + 0x10))();
    FUN_00d50b20();
  }
  plVar8 = (int64_t *)FUN_00e8fc40();
  FUN_0006daf0();
  *plVar8 = (int64_t)&g_02678958;
  plVar8[2] = (int64_t)&g_02679280;
  plVar8[0x27] = 0;
  *(void*)(plVar8 + 0x28) = 0;
  plVar8[0x29] = 0;
  plVar8[0x2a] = 0;
  plVar8[0x2b] = 0;
  plVar8[0x2c] = 0;
  *(void*)((int64_t)plVar8 + 0x164) = 0;
  *(void*)((int64_t)plVar8 + 0x16c) = 0;
  (*g_02678970)();
  uVar11 = FUN_01e3f820();
  local_150 = local_48;
  local_148 = '\0';
  uVar11 = (**(code **)(*this_ptr + 0xb40))(uVar11,iVar6);
  if ((local_148 != '\0') && (local_150 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01e10550();
  if (local_38 == '\0') {
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  uVar10 = FUN_01e089e0();
  if (local_40 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01e125a0();
  FUN_01ea9910();
  local_11c = (float)(**(code **)(*local_40 + 0x390))();
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  fVar15 = auVar13._4_4_;
  auVar14._4_4_ = fVar15;
  auVar14._0_4_ = fVar15;
  auVar14._8_4_ = auVar13._12_4_;
  auVar14._12_4_ = auVar13._12_4_;
  auVar12._4_12_ = auVar14._4_12_;
  auVar12._0_4_ = fVar15 + local_11c + local_11c;
  auVar14 = insertps(auVar13,auVar12,0x10);
  auVar13._8_8_ = extraout_XMM0_Qb;
  auVar13._0_8_ = uVar11;
  auVar13 = insertps(auVar13,uVar10,0x10);
  (**(code **)(*plVar8 + 0x4d0))(auVar13._0_8_,auVar14._0_8_);
  lVar2 = *plVar1;
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  FUN_01cf5bb0();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  cVar5 = FUN_01e12e20();
  if (cVar5 == '\0') {
    local_38 = '\0';
    local_40 = (int64_t *)0x0;
LAB_01e0960f:
    local_78 = (int64_t *)0x0;
  }
  else {
    FUN_01e12dc0();
    if (local_38 == '\0') {
      if (local_40 == (int64_t *)0x0) goto LAB_01e0960f;
      FUN_00d50b00();
      local_78 = local_40;
    }
    else {
      local_78 = local_40;
      local_38 = '\0';
    }
  }
  FUN_01cf3e00();
  if (local_78 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01cf3f20();
  local_138 = '\0';
  local_140 = plVar8;
  (**(code **)(*this_ptr + 0x450))();
  if ((local_138 != '\0') && (local_140 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(*(int64_t *)*plVar1 + 0x540))();
  (**(code **)(*(int64_t *)*plVar1 + 0x938))();
  plVar9 = (int64_t *)this_ptr[0x40];
  (**(code **)(*this_ptr + 0xad8))();
  if (local_38 == '\0') {
    if (local_40 != (int64_t *)0x0) {
      (**(code **)(*local_40 + 0x10))();
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  (**(code **)(*plVar9 + 0x970))();
  if (local_40 != (int64_t *)0x0) {
    (**(code **)(*local_40 + 0x10))();
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    (**(code **)(*local_40 + 0x10))();
    FUN_00d50b20();
  }
  plVar9 = (int64_t *)this_ptr[0x40];
  (**(code **)(*this_ptr + 0x3a8))();
  (**(code **)(*plVar9 + 0x3a0))();
  (**(code **)(*this_ptr + 0x620))();
  local_130 = *arg1;
  local_128 = '\0';
  (**(code **)(*(int64_t *)*plVar1 + 0x940))();
  if ((local_128 != '\0') && (local_130 != 0)) {
    FUN_00d50b20();
  }
  bVar3 = false;
  if ((bVar4) && (bVar3 = false, local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
    bVar3 = false;
  }
LAB_01e097da:
  FUN_00d50b20();
  if (!bVar3 && plVar8 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 01a0f430
// ============================================================
// Function: FUN_01a0f430
// Address: 01a0f430
// Size: 2297 bytes
// Class: GNMultipleValue

void FUN_01a0f430(void)

{
  int64_t *plVar1;
  uint8_t auVar2 [16];
  int64_t lVar3;
  char cVar4;
  byte bVar5;
  int iVar6;
  int64_t *arg1;
  int64_t *this_ptr;
  bool bVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  uint64_t uVar11;
  double dVar12;
  double dVar13;
  uint64_t extraout_XMM0_Qb;
  uint64_t extraout_XMM0_Qb_00;
  uint32_t uVar20;
  uint8_t auVar14 [16];
  uint8_t auVar15 [16];
  uint8_t auVar16 [16];
  uint8_t auVar17 [16];
  uint8_t auVar18 [16];
  uint8_t auVar19 [16];
  double dVar21;
  uint8_t in_XMM1 [16];
  uint8_t auVar22 [16];
  uint8_t auVar23 [16];
  uint8_t auVar24 [16];
  uint8_t auVar25 [16];
  uint8_t auVar26 [16];
  uint8_t auVar27 [16];
  double dVar28;
  int64_t local_148;
  char local_140;
  int64_t *local_120;
  char local_118;
  int64_t local_f0;
  char local_e8;
  int64_t local_e0;
  char local_d8;
  int64_t local_d0;
  char local_c8;
  int64_t local_c0;
  char local_b8;
  uint local_ac;
  uint64_t local_a8;
  float local_88;
  float local_60;
  float local_58;
  float local_54;
  int64_t *local_48;
  char local_40;
  uint64_t extraout_XMM0_Qb_01;
  uint64_t extraout_XMM0_Qb_02;
  uint64_t extraout_XMM0_Qb_03;
  uint64_t extraout_XMM0_Qb_04;
  
  iVar6 = FUN_01d3a5a0();
  if ((iVar6 == 1) && (iVar6 = FUN_01d3b620(), iVar6 == 2)) {
    FUN_01d3abf0();
    local_a8 = FUN_01e466c0();
    (**(code **)(*this_ptr + 0xaf8))();
    cVar4 = FUN_00d05410();
    if (cVar4 == '\0') {
      return;
    }
    FUN_00d403d0();
    lVar3 = g_026fe3e0;
    if (g_026fe3e0 != 0) {
      FUN_00d50b00();
    }
    FUN_00d50b00();
    local_f0 = 0;
    local_e8 = '\0';
    FUN_00d40470(&local_f0,&stack0xffffffffffffff68,1,3);
    if ((local_e8 != '\0') && (local_f0 != 0)) {
      FUN_00d50b20();
    }
    if (this_ptr != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    if (local_40 == '\0') {
      return;
    }
    if (local_48 == (int64_t *)0x0) {
      return;
    }
    FUN_00d50b20();
    return;
  }
  iVar6 = FUN_01d3a5a0();
  if (iVar6 != 1) {
    local_c0 = *arg1;
    local_b8 = '\0';
    FUN_01d924f0();
    if (local_b8 == '\0') {
      return;
    }
    if (local_c0 == 0) {
      return;
    }
    FUN_00d50b20();
    return;
  }
  if (this_ptr[0x48] == 0) {
    if ((char)this_ptr[0x47] != '\0') {
      FUN_01a18460();
      if (local_48 == (int64_t *)0x0) {
        bVar7 = false;
      }
      else {
        FUN_01a18460();
        (**(code **)(*local_120 + 0x958))();
        bVar7 = local_148 != 0;
        if ((local_140 != '\0') && (local_148 != 0)) {
          FUN_00d50b20();
        }
        if ((local_118 != '\0') && (local_120 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (bVar7) goto LAB_01a0f5d5;
    }
    FUN_01d3abf0();
    fVar8 = (float)FUN_01e466c0();
    fVar9 = (float)(**(code **)(*this_ptr + 0xb48))();
    uVar11 = (**(code **)(*this_ptr + 0xaf8))();
    fVar10 = in_XMM1._4_4_;
    auVar14._4_4_ = fVar10;
    auVar14._0_4_ = fVar10;
    auVar14._8_4_ = in_XMM1._12_4_;
    auVar14._12_4_ = in_XMM1._12_4_;
    if (in_XMM1._0_4_ < fVar10 + fVar10) {
      auVar16._4_12_ = auVar14._4_12_;
      auVar16._0_4_ = fVar10 * g_0239426c;
      blendps(auVar16,in_XMM1,0xe);
    }
    auVar22._8_4_ = (int)extraout_XMM0_Qb;
    auVar22._0_8_ = uVar11;
    auVar22._12_4_ = (int)((uint64_t)extraout_XMM0_Qb >> 0x20);
    bVar5 = FUN_00d05410();
    uVar11 = (**(code **)(*this_ptr + 0xaf8))();
    uVar20 = (uint32_t)((uint64_t)extraout_XMM0_Qb_00 >> 0x20);
    if (bVar5 == 0) {
      fVar10 = auVar22._4_4_;
      if (auVar22._0_4_ < fVar10 + fVar10) {
        fVar10 = g_0239426c * fVar10;
        blendps(ZEXT416((uint)fVar10),auVar22,0xe);
      }
      auVar25._4_4_ = (int)((uint64_t)uVar11 >> 0x20);
      auVar25._0_4_ = (float)uVar11 + (auVar22._0_4_ - fVar10);
      auVar25._8_4_ = (int)extraout_XMM0_Qb_00;
      auVar25._12_4_ = uVar20;
      cVar4 = FUN_00d05410();
      if (cVar4 == '\0') {
        local_d0 = *arg1;
        local_c8 = '\0';
        FUN_01d924f0();
        if (local_c8 == '\0') {
          return;
        }
        if (local_d0 == 0) {
          return;
        }
        FUN_00d50b20();
        return;
      }
      fVar10 = (float)(**(code **)(*this_ptr + 0xaf8))();
      auVar26._4_12_ = auVar25._4_12_;
      auVar26._0_4_ = auVar25._0_4_ + fVar10 + g_02390d00;
      auVar14 = roundss(ZEXT816(0),auVar26,9);
      local_a8 = CONCAT44(local_a8._4_4_,auVar14._0_4_);
      auVar18._0_8_ = (**(code **)(*this_ptr + 0xaf8))();
      auVar18._8_8_ = extraout_XMM0_Qb_03;
      auVar14 = roundss(auVar18,auVar18,9);
      auVar16 = ZEXT416((uint)(fVar9 + auVar14._0_4_));
      auVar14 = roundss(ZEXT816(0),auVar16,9);
      fVar9 = (float)(**(code **)(*this_ptr + 0xb00))();
      auVar27._4_12_ = auVar16._4_12_;
      auVar27._0_4_ = auVar16._0_4_ + fVar9 + g_02390d00;
      auVar16 = roundss(ZEXT816(0),auVar27,9);
      local_60 = auVar16._0_4_;
      local_88 = (float)local_a8;
      if (auVar14._0_4_ <= (float)local_a8) {
        local_88 = auVar14._0_4_;
      }
      auVar19._0_8_ = (**(code **)(*this_ptr + 0xb00))();
      auVar19._8_8_ = extraout_XMM0_Qb_04;
      roundss(ZEXT816(0),auVar19,9);
    }
    else {
      auVar2._8_4_ = (int)extraout_XMM0_Qb_00;
      auVar2._0_8_ = uVar11;
      auVar2._12_4_ = uVar20;
      auVar14 = roundss(ZEXT816(0),auVar2,9);
      local_a8 = CONCAT44(local_a8._4_4_,auVar14._0_4_);
      fVar10 = (float)(**(code **)(*this_ptr + 0xaf8))();
      auVar23._4_12_ = auVar22._4_12_;
      auVar23._0_4_ = auVar22._0_4_ + fVar10 + g_02390d00;
      auVar14 = roundss(ZEXT816(0),auVar23,9);
      auVar15._0_8_ = (**(code **)(*this_ptr + 0xb00))();
      auVar15._8_8_ = extraout_XMM0_Qb_01;
      auVar16 = roundss(auVar15,auVar15,9);
      local_88 = auVar16._0_4_;
      auVar14 = ZEXT416((uint)(auVar14._0_4_ - fVar9));
      auVar14 = roundss(auVar14,auVar14,9);
      local_60 = (float)local_a8;
      if ((float)local_a8 <= auVar14._0_4_) {
        local_60 = auVar14._0_4_;
      }
      auVar14 = ZEXT416((uint)local_60);
      auVar17._0_8_ = (**(code **)(*this_ptr + 0xb00))();
      auVar17._8_8_ = extraout_XMM0_Qb_02;
      roundss(auVar17,auVar17,9);
      fVar9 = (float)(**(code **)(*this_ptr + 0xb00))();
      auVar24._4_12_ = auVar14._4_12_;
      auVar24._0_4_ = auVar14._0_4_ + fVar9 + g_02390d00;
      roundss(ZEXT816(0),auVar24,9);
    }
    FUN_01a18460();
    if ((local_40 == '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b00();
    }
    dVar12 = (double)(**(code **)(*local_48 + 0x918))();
    dVar13 = (double)(**(code **)(*local_48 + 0x940))();
    local_a8 = CONCAT44(local_a8._4_4_,(float)local_a8 - fVar8);
    local_ac = (uint)(bVar5 ^ 1);
    local_54 = 0.0;
    dVar21 = 0.0;
LAB_01a0fa00:
    (**(code **)(*this_ptr + 0x658))();
    plVar1 = (int64_t *)*arg1;
    if (plVar1 == local_48) {
      if (((char)arg1[1] == '\0') && (local_48 != (int64_t *)0x0)) {
        if (local_40 == '\0') {
          FUN_00d50b00();
          goto LAB_01a0fa9c;
        }
        goto LAB_01a0fa52;
      }
LAB_01a0fa5b:
      lVar3 = *arg1;
    }
    else {
      lVar3 = arg1[1];
      if (local_40 != '\0') {
        *arg1 = (int64_t)local_48;
        if (((char)lVar3 != '\0') && (plVar1 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
LAB_01a0fa52:
        *(void*)(arg1 + 1) = 1;
        local_40 = '\0';
        goto LAB_01a0fa5b;
      }
      if (local_48 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      *arg1 = (int64_t)local_48;
      if (((char)lVar3 != '\0') && (plVar1 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
LAB_01a0fa9c:
      *(void*)(arg1 + 1) = 1;
      lVar3 = *arg1;
    }
    if (lVar3 != 0) {
      iVar6 = FUN_01d3a5a0();
      if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (iVar6 == 6) goto LAB_01a0fcd2;
      iVar6 = FUN_01d3a5a0();
      if (iVar6 == 5) {
        FUN_01d3abf0();
        fVar8 = (float)FUN_01e466c0();
        fVar9 = (float)local_a8 + fVar8;
        if (local_88 <= fVar9) {
          local_58 = 0.0;
          if (local_60 < fVar9) {
            local_58 = fVar9 - local_60;
          }
        }
        else {
          local_58 = local_88 - fVar9;
        }
        if (bVar5 == 0) {
          fVar9 = local_58;
          fVar10 = (float)(**(code **)(*this_ptr + 0xb00))();
          if (fVar8 < fVar10 + fVar9 + g_02390d00) {
            local_58 = 0.0;
          }
        }
        else {
          fVar9 = (float)(**(code **)(*this_ptr + 0xb00))();
          if (fVar9 < fVar8) {
            local_58 = 0.0;
          }
        }
        (**(code **)(*local_48 + 0xc68))();
        if ((local_58 != g_0239424c) || (NAN(local_58) || NAN(g_0239424c))) {
          dVar28 = dVar21 + g_0238fee8;
          if (local_58 <= local_54) {
            dVar28 = dVar21;
          }
          if (bVar5 != 0) {
            (**(code **)(*local_48 + 0x948))(dVar13 - dVar28);
          }
          (**(code **)(*local_48 + 0x920))(dVar12 + dVar28);
          local_54 = local_58;
          dVar21 = dVar28;
        }
        else {
          local_54 = local_58;
          if (g_02390448 < dVar21) {
            dVar21 = dVar21 + g_023b19a0;
            if (bVar5 != 0) {
              (**(code **)(*local_48 + 0x948))(dVar13 - dVar21);
            }
            (**(code **)(*local_48 + 0x920))(dVar12 + dVar21);
          }
        }
      }
      goto LAB_01a0fa00;
    }
    if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
LAB_01a0fcd2:
    if (local_48 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  else {
    FUN_00d50b00();
    FUN_00d50b20();
LAB_01a0f5d5:
    local_e0 = *arg1;
    local_d8 = '\0';
    FUN_01a0fff0();
    if ((local_d8 != '\0') && (local_e0 != 0)) {
      FUN_00d50b20();
    }
  }
  return;
}



// ============================================================
// 01e07690
// ============================================================
// Function: FUN_01e07690
// Address: 01e07690
// Size: 2637 bytes
// Class: GNMultipleValue

void FUN_01e07690(uint64_t param_1,uint64_t param_2)

{
  uint32_t uVar1;
  int64_t lVar2;
  uint8_t auVar3 [16];
  uint8_t auVar4 [16];
  byte bVar5;
  char cVar6;
  uint8_t uVar7;
  int iVar8;
  int64_t *plVar9;
  uint64_t uVar10;
  int64_t *arg1;
  int64_t *this_ptr;
  byte bVar11;
  bool bVar12;
  bool bVar13;
  float extraout_XMM0_Db;
  uint64_t extraout_XMM0_Qb;
  uint64_t extraout_XMM0_Qb_00;
  float extraout_XMM0_Dd;
  uint8_t auVar14 [16];
  uint8_t auVar15 [16];
  uint8_t auVar16 [16];
  uint64_t extraout_XMM0_Qb_01;
  uint8_t auVar17 [16];
  float fVar18;
  float fVar19;
  float in_XMM1_Dc;
  float in_XMM1_Dd;
  uint8_t auVar20 [16];
  uint8_t auVar21 [16];
  uint8_t auVar22 [16];
  int64_t local_170;
  char local_168;
  int64_t *local_138;
  char local_130;
  int64_t local_128;
  char local_120;
  int64_t local_118;
  char local_110;
  int64_t *local_108;
  char local_100;
  int64_t local_f8;
  char local_f0;
  int64_t local_e8;
  char local_e0;
  uint64_t local_d8;
  uint64_t uStack_d0;
  int64_t *local_c8;
  char local_c0;
  int64_t local_b8;
  char local_b0;
  int64_t local_a8;
  char local_a0;
  int64_t *local_98;
  char local_90;
  uint64_t local_88;
  float fStack_80;
  float fStack_7c;
  int64_t *local_58;
  int64_t *local_40;
  char local_38;
  
  fVar19 = (float)((uint64_t)param_2 >> 0x20);
  fVar18 = (float)param_2;
  cVar6 = (**(code **)(*this_ptr + 0xac8))();
  if (cVar6 != '\0') {
    (**(code **)(*this_ptr + 0x878))();
  }
  (**(code **)(*this_ptr + 0x640))();
  if ((local_38 == '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  if ((char)this_ptr[0x41] != '\0') {
    uVar1 = *(void*)((int64_t)this_ptr + 0x18c);
    FUN_01e3f820();
    local_88 = CONCAT44(fVar19,fVar18);
    cVar6 = *(char *)((int64_t)this_ptr + 0x1e3);
    fStack_80 = in_XMM1_Dc;
    fStack_7c = in_XMM1_Dd;
    uVar7 = (**(code **)(*this_ptr + 0x9a0))();
    uVar10 = 8;
    if (cVar6 == '\0') {
      uVar10 = 0x12;
    }
    fVar18 = (float)local_88;
    fVar19 = local_88._4_4_;
    (**(code **)(*local_40 + 0x3f0))(uVar10,uVar1,0,uVar7);
    in_XMM1_Dc = fStack_80;
    in_XMM1_Dd = fStack_7c;
  }
  local_d8 = FUN_01e3f820();
  local_88 = CONCAT44(fVar19,fVar18);
  uStack_d0 = extraout_XMM0_Qb;
  fStack_80 = in_XMM1_Dc;
  fStack_7c = in_XMM1_Dd;
  uVar10 = FUN_01e3f820();
  cVar6 = (**(code **)(*this_ptr + 0xb30))();
  if (cVar6 != '\0') {
    local_88 = CONCAT44(local_88._4_4_,(float)local_88 - fVar19);
  }
  cVar6 = (**(code **)(*this_ptr + 0xac8))();
  if (cVar6 != '\0') {
    bVar12 = false;
    local_58 = (int64_t *)0x0;
    cVar6 = (char)this_ptr[0x34];
    goto joined_r0x01e07db4;
  }
  lVar2 = this_ptr[0x42];
  if (lVar2 != 0) {
    local_b0 = 0;
    FUN_00d50b00();
    local_b0 = '\x01';
    local_b8 = lVar2;
    FUN_01cc48f0();
    if ((local_b0 != '\0') && (local_b8 != 0)) {
      FUN_00d50b20();
    }
  }
  (**(code **)(*this_ptr + 0x960))();
  if (local_40 == (int64_t *)0x0) {
    bVar5 = 1;
    bVar11 = 0;
    bVar12 = false;
    local_58 = (int64_t *)0x0;
  }
  else {
    if (local_38 == '\0') {
      FUN_00d50b00();
    }
    local_58 = local_40;
    if (*(char *)((int64_t)this_ptr + 0x222) != '\0') {
      plVar9 = (int64_t *)FUN_00e8fc40();
      FUN_00d4ff40();
      *plVar9 = (int64_t)&g_025795a8;
      (*g_025795c0)();
      iVar8 = FUN_00d8c7a0();
      if (0 < iVar8) {
        iVar8 = iVar8 + 1;
        do {
          lVar2 = g_02726ce0;
          if (g_02726ce0 != 0) {
            FUN_00d50b00();
          }
          FUN_00d8dbf0();
          if (lVar2 != 0) {
            FUN_00d50b20();
          }
          iVar8 = iVar8 + -1;
        } while (1 < iVar8);
      }
      if (plVar9 != local_40) {
        if (plVar9 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        FUN_00d50b20();
        local_58 = plVar9;
      }
      if (plVar9 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
    }
    bVar11 = 1;
    bVar5 = 0;
    bVar12 = true;
  }
  (**(code **)(*local_40 + 0x548))();
  local_138 = local_58;
  local_130 = '\0';
  local_128 = *arg1;
  local_120 = '\0';
  (**(code **)(*this_ptr + 0xa00))(&local_128,&local_138);
  if (local_40 == local_58) {
    if ((bool)(bVar5 & local_58 != (int64_t *)0x0)) {
      if (local_38 != '\0') goto LAB_01e07ab0;
      bVar12 = true;
      FUN_00d50b00();
    }
LAB_01e07b12:
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    if (local_38 == '\0') {
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      if ((bool)(bVar11 & local_58 != (int64_t *)0x0)) {
        local_58 = local_40;
        FUN_00d50b20();
        bVar12 = true;
      }
      else {
        local_58 = local_40;
        bVar12 = true;
      }
      goto LAB_01e07b12;
    }
    bVar12 = local_58 != (int64_t *)0x0;
    local_58 = local_40;
    if ((bool)(bVar11 & bVar12)) {
      FUN_00d50b20();
    }
LAB_01e07ab0:
    local_38 = '\0';
    bVar12 = true;
  }
  if ((local_120 != '\0') && (local_128 != 0)) {
    FUN_00d50b20();
  }
  if ((local_130 != '\0') && (local_138 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(*this_ptr + 0x9e0))();
  if (local_40 == (int64_t *)0x0) {
    if ((local_88._4_4_ == g_02421584) && (!NAN(local_88._4_4_) && !NAN(g_02421584))) {
      (**(code **)(*(int64_t *)*arg1 + 0x370))();
    }
  }
  else if (local_38 != '\0') {
    FUN_00d50b20();
  }
  local_118 = *arg1;
  local_110 = '\0';
  local_100 = '\0';
  local_108 = local_58;
  (**(code **)(*this_ptr + 0x9e0))();
  local_90 = 0;
  if ((local_38 == '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  local_38 = '\0';
  local_90 = '\x01';
  local_98 = local_40;
  uVar1 = *(void*)((int64_t)this_ptr + 0x174);
  (**(code **)(*this_ptr + 0x9a0))();
  (**(code **)(*local_40 + 0x400))(&local_108,(float)local_88,&local_98,uVar1);
  if ((local_90 != '\0') && (local_98 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_100 != '\0') && (local_108 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_110 != '\0') && (local_118 != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(*this_ptr + 0x9e0))();
  if (local_40 == (int64_t *)0x0) {
    if ((local_88._4_4_ == g_02421584) && (!NAN(local_88._4_4_) && !NAN(g_02421584))) {
      (**(code **)(*(int64_t *)*arg1 + 0x370))();
    }
  }
  if (this_ptr[0x42] == 0) {
    cVar6 = (char)this_ptr[0x34];
  }
  else {
    local_f0 = '\0';
    local_f8 = 0;
    FUN_01cc48f0();
    if ((local_f0 != '\0') && (local_f8 != 0)) {
      FUN_00d50b20();
    }
    cVar6 = (char)this_ptr[0x34];
  }
joined_r0x01e07db4:
  if (cVar6 != '\0') {
    local_e8 = *arg1;
    local_e0 = '\0';
    (**(code **)(*local_40 + 0x518))();
    if ((local_e0 != '\0') && (local_e8 != 0)) {
      FUN_00d50b20();
    }
  }
  (**(code **)(*this_ptr + 0x970))();
  if (local_40 == (int64_t *)0x0) {
    bVar13 = this_ptr[0x45] != 0;
  }
  else {
    (**(code **)(*this_ptr + 0x970))();
    iVar8 = FUN_00d8c7a0();
    if (iVar8 == 0) {
      bVar13 = this_ptr[0x45] != 0;
    }
    else {
      bVar13 = false;
    }
    if ((local_168 != '\0') && (local_170 != 0)) {
      FUN_00d50b20();
    }
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (bVar13) {
    local_d8 = g_023dccec;
    uStack_d0 = 0;
    FUN_01d526f0();
    plVar9 = (int64_t *)*arg1;
    local_a0 = 0;
    local_a8 = this_ptr[0x45];
    if (local_a8 != 0) {
      FUN_00d50b00();
    }
    auVar15._4_4_ = local_88._4_4_ - extraout_XMM0_Db;
    auVar15._12_4_ = fStack_7c - extraout_XMM0_Dd;
    auVar15._0_4_ = auVar15._4_4_;
    auVar15._8_4_ = auVar15._12_4_;
    auVar14._4_12_ = auVar15._4_12_;
    auVar14._0_4_ = auVar15._4_4_ * g_0239011c;
    auVar15 = roundss(auVar14,auVar14,10);
    auVar16._4_12_ = auVar15._4_12_;
    auVar16._0_4_ = auVar15._0_4_ + g_02390d34;
    insertps(g_024215a0,auVar16,0x10);
    local_a0 = '\x01';
    (**(code **)(*plVar9 + 0x408))();
    if ((local_a0 != '\0') && (local_a8 != 0)) {
      FUN_00d50b20();
    }
  }
  cVar6 = (**(code **)(*this_ptr + 0xb30))();
  if (cVar6 != '\0') {
    local_88 = g_023dccec;
    fStack_80 = 0.0;
    fStack_7c = 0.0;
    FUN_01e08690();
    local_d8 = FUN_01d526f0();
    uStack_d0 = extraout_XMM0_Qb_01;
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    plVar9 = (int64_t *)*arg1;
    FUN_01e08690();
    local_c0 = 0;
    if ((local_38 == '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b00();
    }
    local_c8 = local_40;
    auVar20._0_4_ = fVar18 - fVar19;
    auVar20._4_4_ = fVar19 - fVar19;
    auVar20._8_4_ = in_XMM1_Dc - in_XMM1_Dd;
    auVar20._12_4_ = in_XMM1_Dd - in_XMM1_Dd;
    auVar4._4_4_ = fVar19;
    auVar4._0_4_ = fVar19;
    auVar4._8_4_ = in_XMM1_Dd;
    auVar4._12_4_ = in_XMM1_Dd;
    auVar17._4_12_ = auVar4._4_12_;
    auVar17._0_4_ = fVar19 - (float)local_d8;
    auVar21._0_4_ = fVar18 - (float)local_d8;
    auVar21._4_4_ = fVar19 - local_d8._4_4_;
    auVar21._8_4_ = in_XMM1_Dc - (float)uStack_d0;
    auVar21._12_4_ = in_XMM1_Dd - uStack_d0._4_4_;
    auVar15 = blendps(auVar21,auVar17,1);
    auVar22._0_4_ = auVar15._0_4_ * g_023945d0;
    auVar22._4_4_ = auVar15._4_4_ * _UNK_023945d4;
    auVar22._8_4_ = auVar15._8_4_ * _UNK_023945d8;
    auVar22._12_4_ = auVar15._12_4_ * _UNK_023945dc;
    roundps(auVar17,auVar22,10);
    auVar3._8_8_ = extraout_XMM0_Qb_00;
    auVar3._0_8_ = uVar10;
    blendps(auVar20,auVar3,2);
    local_c0 = '\x01';
    (**(code **)(*plVar9 + 0x408))();
    if ((local_c0 != '\0') && (local_c8 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  if (local_40 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((bVar12) && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 01e0a450
// ============================================================
// Function: FUN_01e0a450
// Address: 01e0a450
// Size: 2569 bytes
// Class: GNMultipleValue

void FUN_01e0a450(uint64_t param_1,char param_2)

{
  int64_t lVar1;
  bool bVar2;
  bool bVar3;
  byte bVar4;
  char cVar5;
  int iVar6;
  int64_t *plVar7;
  char unaff_SIL;
  int64_t *this_ptr;
  int64_t *plVar8;
  bool bVar9;
  uint32_t uVar10;
  uint32_t extraout_XMM0_Da;
  uint32_t extraout_XMM0_Da_00;
  uint32_t extraout_XMM0_Da_01;
  uint32_t extraout_XMM0_Da_02;
  float fVar11;
  int64_t local_178;
  char local_170;
  int64_t local_168;
  char local_160;
  int64_t local_158;
  char local_150;
  int64_t local_148;
  char local_140;
  int64_t local_138;
  char local_130;
  int64_t *local_128;
  char local_120;
  int64_t local_118;
  char local_110;
  int64_t local_108;
  char local_100;
  int64_t *local_f8;
  char local_f0;
  int64_t *local_e8;
  char local_e0;
  int64_t local_d8;
  char local_d0;
  float local_c4;
  int64_t local_c0;
  char local_b8;
  int64_t *local_60;
  int64_t *local_48;
  char local_40;
  char local_31;
  
  if (*(char *)((int64_t)this_ptr + 0x20c) != '\0') {
    return;
  }
  FUN_00d403d0();
  FUN_00d50b00();
  local_178 = g_027f32f0;
  if (g_027f32f0 != 0) {
    FUN_00d50b00();
  }
  local_170 = '\x01';
  local_168 = 0;
  local_160 = '\0';
  FUN_00d41040(&local_168,&local_178);
  if ((local_160 != '\0') && (local_168 != 0)) {
    FUN_00d50b20();
  }
  if ((local_170 != '\0') && (local_178 != 0)) {
    FUN_00d50b20();
  }
  if (this_ptr != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d403d0();
  FUN_00d50b00();
  local_158 = g_027f32f8;
  if (g_027f32f8 != 0) {
    FUN_00d50b00();
  }
  local_150 = '\x01';
  local_148 = 0;
  local_140 = '\0';
  FUN_00d41040(&local_148,&local_158);
  if ((local_140 != '\0') && (local_148 != 0)) {
    FUN_00d50b20();
  }
  if ((local_150 != '\0') && (local_158 != 0)) {
    FUN_00d50b20();
  }
  if (this_ptr != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01d3a560();
  local_60 = local_48;
  if (local_48 == (int64_t *)0x0) {
    bVar3 = true;
    local_60 = (int64_t *)0x0;
  }
  else if (local_40 == '\0') {
    FUN_00d50b00();
    bVar3 = false;
  }
  else {
    bVar3 = false;
  }
  FUN_00d50b00();
  *(void*)((int64_t)this_ptr + 0x20c) = 1;
  local_31 = '\x01';
  if (unaff_SIL == '\0') {
    local_31 = (**(code **)(*this_ptr + 0x3a8))();
  }
  (**(code **)(*this_ptr + 0x960))();
  lVar1 = local_c0;
  if (local_b8 == '\0') {
    if (local_c0 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_b8 = '\0';
  }
  uVar10 = FUN_00d8dab0();
  plVar8 = local_48;
  if (local_48 == (int64_t *)0x0) {
    bVar4 = 1;
    plVar8 = (int64_t *)0x0;
    bVar2 = false;
  }
  else if (local_40 == '\0') {
    uVar10 = FUN_00d50b00();
    bVar4 = 0;
    bVar2 = true;
  }
  else {
    local_40 = '\0';
    bVar2 = true;
    bVar4 = 0;
  }
  if (lVar1 != 0) {
    uVar10 = FUN_00d50b20();
  }
  if ((local_b8 != '\0') && (local_c0 != 0)) {
    uVar10 = FUN_00d50b20();
  }
  if (this_ptr[0x40] != 0) {
    FUN_01e40eb0();
    if (local_48 == (int64_t *)0x0) {
      plVar7 = (int64_t *)0x0;
      if (local_40 != '\0') {
        plVar7 = (int64_t *)0x0;
      }
    }
    else {
      plVar7 = local_48;
      if (local_40 == '\0') {
        FUN_00d50b00();
      }
    }
    local_138 = 0;
    local_130 = '\0';
    FUN_01cf5bb0();
    if ((local_130 != '\0') && (local_138 != 0)) {
      FUN_00d50b20();
    }
    (**(code **)(*plVar7 + 0x478))();
    local_120 = '\0';
    local_128 = (int64_t *)0x0;
    FUN_01e13680();
    if ((local_120 != '\0') && (local_128 != (int64_t *)0x0)) {
      (**(code **)(*local_128 + 0x10))();
      FUN_00d50b20();
    }
    if (this_ptr[0x40] != 0) {
      this_ptr[0x40] = 0;
      FUN_00d50b20();
    }
    uVar10 = (**(code **)(*this_ptr + 0x620))();
    if (local_48 != (int64_t *)0x0) {
      uVar10 = FUN_00d50b20();
    }
  }
  if (param_2 != '\0') {
LAB_01e0a8c5:
    if (local_31 != '\0') {
      FUN_01d11e80();
    }
    (**(code **)(*this_ptr + 0x620))();
    goto LAB_01e0addc;
  }
  if ((local_60 != (int64_t *)0x0) &&
     (iVar6 = FUN_01d3a5a0(), uVar10 = extraout_XMM0_Da, iVar6 == 2)) {
    FUN_01d3b5d0();
    cVar5 = FUN_00d8ca50();
    uVar10 = extraout_XMM0_Da_00;
    if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
      uVar10 = FUN_00d50b20();
    }
    if (cVar5 != '\0') goto LAB_01e0a8c5;
  }
  lVar1 = g_0276bc70;
  if (*(char *)((int64_t)this_ptr + 0x20b) == '\0') {
    if ((char)this_ptr[0x44] != '\0') {
      if (g_0276bc70 != 0) {
        FUN_00d50b00();
      }
      local_118 = lVar1;
      local_110 = '\x01';
      cVar5 = FUN_00d8f400();
      uVar10 = extraout_XMM0_Da_01;
      if ((local_110 != '\0') && (local_118 != 0)) {
        uVar10 = FUN_00d50b20();
      }
      if (cVar5 != '\0') goto LAB_01e0a9ca;
    }
    uVar10 = (**(code **)(*this_ptr + 0xb28))();
    if ((char)this_ptr[0x34] != '\0') {
      if (local_31 != '\0') {
        FUN_01d11e80();
      }
      uVar10 = (**(code **)(*this_ptr + 0x620))();
    }
  }
LAB_01e0a9ca:
  lVar1 = g_0276bc70;
  plVar7 = (int64_t *)this_ptr[0x3a];
  if (plVar7 == (int64_t *)0x0) goto joined_r0x01e0ac88;
  if ((char)this_ptr[0x44] == '\0') {
LAB_01e0ab0c:
    local_f0 = '\0';
    local_f8 = plVar8;
    (**(code **)(*plVar7 + 0x398))(uVar10,&local_f8);
    if (local_48 == plVar8) {
      if ((bool)(bVar4 & plVar8 != (int64_t *)0x0)) {
        if (local_40 != '\0') goto LAB_01e0ab7b;
        bVar2 = true;
        FUN_00d50b00();
      }
LAB_01e0ac49:
      if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      if (local_40 == '\0') {
        if (local_48 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        bVar9 = (bool)(bVar2 & plVar8 != (int64_t *)0x0);
        bVar2 = true;
        plVar8 = local_48;
        if (bVar9) {
          FUN_00d50b20();
        }
        goto LAB_01e0ac49;
      }
      bVar9 = plVar8 != (int64_t *)0x0;
      plVar8 = local_48;
      if ((bool)(bVar2 & bVar9)) {
        FUN_00d50b20();
      }
LAB_01e0ab7b:
      local_40 = '\0';
      bVar2 = true;
    }
    if ((local_f0 != '\0') && (local_f8 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    if (g_0276bc70 != 0) {
      FUN_00d50b00();
    }
    local_108 = lVar1;
    local_100 = '\x01';
    cVar5 = FUN_00d8f400();
    uVar10 = extraout_XMM0_Da_02;
    if ((local_100 != '\0') && (local_108 != 0)) {
      uVar10 = FUN_00d50b20();
    }
    plVar7 = (int64_t *)this_ptr[0x3a];
    if (cVar5 == '\0') goto LAB_01e0ab0c;
    lVar1 = this_ptr[0x2b];
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    local_c4 = (float)(**(code **)(*plVar7 + 0x380))();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    fVar11 = (float)FUN_00d8d7b0();
    (**(code **)(*(int64_t *)this_ptr[0x3a] + 0x378))(local_c4 * (fVar11 / g_023908e0));
    if (local_48 == plVar8) {
      if ((bool)(bVar4 & local_48 != (int64_t *)0x0)) {
        bVar2 = true;
        if (local_40 != '\0') goto joined_r0x01e0ac88;
        bVar2 = true;
        FUN_00d50b00();
      }
LAB_01e0acef:
      if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      if (local_40 == '\0') {
        if (local_48 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        bVar9 = (bool)(bVar2 & plVar8 != (int64_t *)0x0);
        bVar2 = true;
        plVar8 = local_48;
        if (bVar9) {
          FUN_00d50b20();
        }
        goto LAB_01e0acef;
      }
      bVar9 = (bool)(bVar2 & plVar8 != (int64_t *)0x0);
      bVar2 = true;
      plVar8 = local_48;
      if (bVar9) {
        FUN_00d50b20();
      }
    }
  }
joined_r0x01e0ac88:
  if (plVar8 != (int64_t *)0x0) {
    lVar1 = this_ptr[0x2b];
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    cVar5 = (**(code **)(*plVar8 + 0x50))();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if (cVar5 != '\0') {
      if (local_31 != '\0') {
        FUN_01d11e80();
      }
      goto LAB_01e0addc;
    }
  }
  local_e0 = '\0';
  local_e8 = plVar8;
  uVar10 = FUN_00d8dab0();
  if ((local_40 == '\0') && (local_48 != (int64_t *)0x0)) {
    uVar10 = FUN_00d50b00();
  }
  if ((local_e0 != '\0') && (local_e8 != (int64_t *)0x0)) {
    uVar10 = FUN_00d50b20();
  }
  plVar7 = (int64_t *)this_ptr[0x2b];
  if (plVar7 != local_48) {
    if (local_48 != (int64_t *)0x0) {
      uVar10 = FUN_00d50b00();
    }
    this_ptr[0x2b] = (int64_t)local_48;
    if (plVar7 != (int64_t *)0x0) {
      uVar10 = FUN_00d50b20();
    }
  }
  local_d0 = '\0';
  local_d8 = 0;
  (**(code **)(*this_ptr + 0xa90))(uVar10,&local_d8);
  if ((local_d0 != '\0') && (local_d8 != 0)) {
    FUN_00d50b20();
  }
  FUN_01d11e80();
  if (local_48 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
LAB_01e0addc:
  *(void*)((int64_t)this_ptr + 0x20c) = 0;
  FUN_00d50b20();
  if (!bVar3 && local_60 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((bVar2) && (plVar8 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 01d05320
// ============================================================
// Function: FUN_01d05320
// Address: 01d05320
// Size: 1972 bytes
// Class: GNMultipleValue

uint64_t FUN_01d05320(uint64_t param_1,char param_2)

{
  int64_t *plVar1;
  int64_t lVar2;
  bool bVar3;
  char cVar4;
  uint32_t uVar5;
  int iVar6;
  uint uVar7;
  int64_t *plVar8;
  int64_t lVar9;
  int64_t *arg1;
  int64_t *this_ptr;
  uint64_t uVar10;
  uint32_t extraout_XMM0_Da;
  uint32_t uVar11;
  uint32_t extraout_XMM0_Da_00;
  int64_t local_140;
  int64_t local_138;
  char local_130;
  int64_t local_128;
  char local_120;
  int64_t local_118;
  char local_110;
  int64_t local_108;
  char local_100;
  int64_t local_f8;
  char local_f0;
  int64_t local_e8;
  char local_e0;
  int64_t local_d8;
  char local_d0;
  int64_t local_c8;
  char local_c0;
  uint32_t local_b4;
  int64_t local_b0;
  char local_a8;
  int64_t local_a0;
  char local_98;
  int64_t local_90;
  char local_88;
  int64_t *local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  int64_t local_58;
  char local_50;
  uint32_t local_48;
  int64_t local_40;
  char local_38;
  
  FUN_01cae990();
  plVar1 = local_80;
  local_118 = g_027ef4d0;
  if (g_027ef4d0 != 0) {
    FUN_00d50b00();
  }
  local_110 = '\x01';
  cVar4 = (**(code **)(*plVar1 + 0x50))();
  if ((local_110 != '\0') && (local_118 != 0)) {
    FUN_00d50b20();
  }
  if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar4 == '\0') {
    FUN_01cae990();
    plVar1 = local_80;
    local_108 = g_027ef498;
    if (g_027ef498 != 0) {
      FUN_00d50b00();
    }
    local_100 = '\x01';
    cVar4 = (**(code **)(*plVar1 + 0x50))();
    if ((local_100 != '\0') && (local_108 != 0)) {
      FUN_00d50b20();
    }
    if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (cVar4 == '\0') {
      FUN_01cae990();
      plVar1 = local_80;
      local_f8 = g_027ef470;
      if (g_027ef470 != 0) {
        FUN_00d50b00();
      }
      local_f0 = '\x01';
      cVar4 = (**(code **)(*plVar1 + 0x50))();
      if ((local_f0 != '\0') && (local_f8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (cVar4 == '\0') {
        FUN_01cae990();
        plVar1 = local_80;
        local_d8 = g_027ef4d8;
        if (g_027ef4d8 != 0) {
          FUN_00d50b00();
        }
        local_d0 = '\x01';
        cVar4 = (**(code **)(*plVar1 + 0x50))();
        uVar11 = extraout_XMM0_Da_00;
        if ((local_d0 != '\0') && (local_d8 != 0)) {
          uVar11 = FUN_00d50b20();
        }
        if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
          uVar11 = FUN_00d50b20();
        }
        if (cVar4 == '\0') {
          local_c8 = *arg1;
          local_c0 = '\0';
          uVar7 = FUN_01d123e0(uVar11,param_2);
          uVar10 = (uint64_t)uVar7;
          if ((local_c0 != '\0') && (local_c8 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          uVar10 = CONCAT71((int7)((uint64_t)plVar1 >> 8),1);
          if (param_2 != '\0') {
            FUN_01cfbee0(0,0,0);
            plVar1 = local_80;
            if ((local_78 == '\0') && (local_80 != (int64_t *)0x0)) {
              FUN_00d50b00();
              if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
            }
            iVar6 = FUN_01caea00();
            if (iVar6 == 0) {
              FUN_01d03810();
            }
            else {
              FUN_01d03810();
            }
            FUN_01d11e80();
            if (plVar1 != (int64_t *)0x0) {
              FUN_00d50b20();
            }
          }
        }
      }
      else {
        uVar10 = CONCAT71((int7)((uint64_t)plVar1 >> 8),1);
        if (param_2 != '\0') {
          FUN_01caeb00();
          plVar1 = local_80;
          if ((local_78 == '\0') && (local_80 != (int64_t *)0x0)) {
            FUN_00d50b00();
            if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
          FUN_00d4efa0();
          FUN_00c811e0();
          plVar8 = local_80;
          if (local_78 == '\0') {
            if (local_80 != (int64_t *)0x0) {
              FUN_00d50b00();
              if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
            }
          }
          else {
            local_78 = '\0';
          }
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
          (**(code **)(*plVar8 + 0x18))();
          local_88 = 0;
          local_90 = this_ptr[0x39];
          if (local_90 != 0) {
            FUN_00d50b00();
          }
          local_88 = '\x01';
          FUN_01f7bcc0();
          if ((local_88 != '\0') && (local_90 != 0)) {
            FUN_00d50b20();
          }
          lVar2 = plVar1[0x39];
          if (lVar2 != 0) {
            FUN_00d50b00();
          }
          local_e0 = '\x01';
          local_e8 = lVar2;
          (**(code **)(*this_ptr + 0x4a0))();
          local_78 = '\0';
          local_80 = plVar1;
          uVar5 = FUN_00d237a0();
          uVar11 = extraout_XMM0_Da;
          if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
            uVar11 = FUN_00d50b20();
          }
          FUN_01f7c700(uVar11,uVar5);
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
          if ((local_e0 != '\0') && (local_e8 != 0)) {
            FUN_00d50b20();
          }
          FUN_01d03810();
          FUN_01d11e80();
          FUN_00d50b20();
          FUN_00d50b20();
        }
      }
    }
    else {
      uVar10 = CONCAT71((int7)((uint64_t)plVar1 >> 8),1);
      if (param_2 != '\0') {
        FUN_01d03810();
        FUN_01d11e80();
      }
    }
    goto LAB_01d05a87;
  }
  uVar10 = CONCAT71((int7)((uint64_t)plVar1 >> 8),1);
  if (param_2 == '\0') goto LAB_01d05a87;
  plVar1 = this_ptr + 0x39;
  plVar8 = (int64_t *)this_ptr[0x39];
  FUN_001b9d20();
  if (plVar8 == (int64_t *)0x0) {
LAB_01d053f8:
    plVar8 = &g_02802688;
  }
  else {
    (**(code **)(*plVar8 + 0x360))();
    cVar4 = FUN_00e85ea0();
    plVar8 = plVar1;
    if (cVar4 == '\0') goto LAB_01d053f8;
  }
  lVar2 = *plVar8;
  if (lVar2 == 0) {
    local_a8 = 0;
    lVar9 = *plVar1;
    if (lVar9 != 0) {
      FUN_00d50b00();
    }
    local_a8 = '\x01';
    local_b0 = lVar9;
    FUN_01cfd130();
    local_b4 = 0;
    local_98 = 0;
    local_a0 = *plVar1;
    if (local_a0 != 0) {
      FUN_00d50b00();
    }
    local_98 = '\x01';
    FUN_01cfd130();
    local_140 = local_128;
    FUN_0049c630(&local_140,&local_b4,4);
    local_80 = (int64_t *)&g_02647118;
    local_48 = 0x3f800000;
    FUN_01f7b9d0(g_023b5d7c,&local_80);
    lVar9 = local_40;
    if (local_40 == 0) {
      bVar3 = false;
    }
    else if (local_38 == '\0') {
      FUN_00d50b00();
      bVar3 = true;
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
      bVar3 = true;
    }
    local_80 = (int64_t *)&g_024f9300;
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    local_80 = &g_024c5048;
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    if ((local_120 != '\0') && (local_128 != 0)) {
      FUN_00d50b20();
    }
    if ((local_98 != '\0') && (local_a0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_130 != '\0') && (local_138 != 0)) {
      FUN_00d50b20();
    }
    if ((local_a8 != '\0') && (local_b0 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    FUN_00d50b00();
    bVar3 = false;
    lVar9 = 0;
  }
  FUN_01d03810();
  FUN_01d11e80();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if ((bVar3) && (lVar9 != 0)) {
    FUN_00d50b20();
  }
LAB_01d05a87:
  return uVar10 & 0xffffffff;
}



// ============================================================
// 01d27890
// ============================================================
// Function: FUN_01d27890
// Address: 01d27890
// Size: 2002 bytes
// Class: GNMultipleValue

void FUN_01d27890(int64_t *param_1,int64_t *param_2)

{
  int64_t *plVar1;
  bool bVar2;
  int64_t lVar3;
  char cVar4;
  char *pcVar5;
  int64_t *arg1;
  int64_t this_ptr;
  int64_t *plVar6;
  int64_t *plVar7;
  int64_t *plVar8;
  int64_t local_190;
  char local_188;
  int64_t *local_180;
  char local_178;
  int64_t local_170;
  char local_168;
  int64_t local_160;
  char local_158;
  int64_t local_150;
  char local_148;
  int64_t local_140;
  char local_138;
  int64_t *local_130;
  char local_128;
  int64_t *local_120;
  char local_118;
  int64_t *local_110;
  char local_108;
  int64_t local_100;
  char local_f8;
  int64_t *local_f0;
  char local_e8;
  int64_t local_e0;
  char local_d8;
  int64_t local_d0;
  char local_c8;
  int64_t local_c0;
  char local_b8;
  char local_5c;
  int64_t *local_58;
  int64_t *local_48;
  char local_40 [8];
  char local_38 [7];
  char local_31;
  
  FUN_01d28610();
  if ((((local_40[0] == '\0') && (local_48 != (int64_t *)0x0)) &&
      (FUN_00d50b00(), local_40[0] != '\0')) && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  cVar4 = FUN_00d8ca50();
  lVar3 = g_02774da0;
  if (cVar4 == '\0') {
    local_58 = (int64_t *)*param_1;
    if (local_58 == (int64_t *)0x0) {
      local_31 = '\x01';
      local_58 = (int64_t *)0x0;
    }
    else {
      local_31 = (char)param_1[1];
      if (local_31 != '\0') {
        FUN_00d50b00();
      }
    }
    bVar2 = false;
    plVar8 = (int64_t *)0x0;
    plVar6 = (int64_t *)0x0;
  }
  else {
    if (g_02774da0 != 0) {
      FUN_00d50b00();
    }
    local_190 = lVar3;
    local_188 = '\x01';
    FUN_00d91000(1,&local_190);
    if (local_48 == (int64_t *)0x0) {
      plVar8 = (int64_t *)0x0;
      bVar2 = false;
    }
    else {
      plVar8 = local_48;
      if (local_40[0] == '\0') {
        FUN_00d50b00();
        bVar2 = true;
        if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_40[0] = '\0';
        bVar2 = true;
      }
    }
    if ((local_188 != '\0') && (local_190 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d23340();
    pcVar5 = local_38;
    if (local_40[0] != '\0') {
      pcVar5 = local_40;
    }
    local_38[0] = local_40[0];
    *pcVar5 = '\0';
    if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    local_58 = local_48;
    if (local_48 == (int64_t *)0x0) {
      local_58 = (int64_t *)0x0;
    }
    else if (local_38[0] == '\0') {
      FUN_00d50b00();
    }
    FUN_00d23740();
    local_170 = g_02774da0;
    local_178 = '\0';
    local_180 = plVar8;
    if (g_02774da0 != 0) {
      FUN_00d50b00();
    }
    local_168 = '\x01';
    FUN_00d95130();
    if (local_48 == (int64_t *)0x0) {
      plVar6 = (int64_t *)0x0;
    }
    else {
      plVar6 = local_48;
      if (local_40[0] == '\0') {
        FUN_00d50b00();
        if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_40[0] = '\0';
      }
    }
    if ((local_168 != '\0') && (local_170 != 0)) {
      FUN_00d50b20();
    }
    if ((local_178 != '\0') && (local_180 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    local_31 = '\x01';
  }
  plVar7 = *(int64_t **)(this_ptr + 0x40);
  if (plVar7 == (int64_t *)0x0) {
LAB_01d27c27:
    if (plVar6 == (int64_t *)0x0) {
      plVar7 = (int64_t *)*param_2;
      if (plVar7 == (int64_t *)0x0) goto LAB_01d27c9d;
      cVar4 = (char)param_2[1];
      if (cVar4 != '\0') {
        FUN_00d50b00();
      }
    }
    else {
      local_128 = '\0';
      local_130 = plVar6;
      (**(code **)(*(int64_t *)*param_2 + 0x98))();
      if (local_48 == (int64_t *)0x0) {
        plVar7 = (int64_t *)0x0;
        cVar4 = '\0';
      }
      else {
        plVar7 = local_48;
        if (local_40[0] == '\0') {
          FUN_00d50b00();
          cVar4 = '\x01';
          if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_40[0] = '\0';
          cVar4 = '\x01';
        }
      }
      if ((local_128 != '\0') && (local_130 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    if (plVar7 == (int64_t *)0x0) {
      plVar7 = (int64_t *)0x0;
    }
    else {
      if (*(int64_t *)(this_ptr + 0x40) == 0) {
        local_120 = local_58;
        local_118 = '\0';
        (**(code **)(*plVar7 + 0x88))();
        if (local_40[0] == '\0') {
          if (((local_48 != (int64_t *)0x0) && (FUN_00d50b00(), local_40[0] != '\0')) &&
             (local_48 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_40[0] = '\0';
        }
        if ((local_118 != '\0') && (local_120 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        plVar1 = (int64_t *)*arg1;
        if (local_48 == (int64_t *)0x0) {
          if (plVar1 == (int64_t *)0x0) goto joined_r0x01d27fa1;
        }
        else {
          if (plVar1 == (int64_t *)0x0) {
            local_5c = '\0';
          }
          else {
            local_110 = local_48;
            local_108 = '\0';
            local_5c = (**(code **)(*plVar1 + 0x50))();
            if ((local_108 != '\0') && (local_110 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
          FUN_00d50b20();
          if (local_5c != '\0') goto joined_r0x01d27fa1;
        }
      }
      local_100 = *arg1;
      local_f8 = '\0';
      local_f0 = local_58;
      local_e8 = '\0';
      (**(code **)(*plVar7 + 0x80))();
      if ((local_e8 != '\0') && (local_f0 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_f8 != '\0') && (local_100 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    FUN_00d50b00();
    local_160 = *param_2;
    local_158 = '\0';
    local_150 = *param_1;
    local_148 = '\0';
    local_140 = *arg1;
    local_138 = '\0';
    cVar4 = (**(code **)(*plVar7 + 0x20))(&local_150,&local_160,&local_140);
    if ((local_138 != '\0') && (local_140 != 0)) {
      FUN_00d50b20();
    }
    if ((local_148 != '\0') && (local_150 != 0)) {
      FUN_00d50b20();
    }
    if ((local_158 != '\0') && (local_160 != 0)) {
      FUN_00d50b20();
    }
    if (this_ptr != 0) {
      FUN_00d50b20();
    }
    if (cVar4 == '\0') goto LAB_01d27c27;
LAB_01d27c9d:
    cVar4 = '\0';
    plVar7 = (int64_t *)0x0;
  }
  if (local_48 == (int64_t *)0x0) {
    if (*param_1 == 0) {
      FUN_01d2b270();
    }
    else {
      local_40[0] = '\0';
      FUN_01d2e5e0();
    }
  }
  plVar1 = *(int64_t **)(this_ptr + 0x40);
  if (plVar1 != (int64_t *)0x0) {
    FUN_00d50b00();
    local_e0 = *param_2;
    local_d8 = '\0';
    local_d0 = *param_1;
    local_c8 = '\0';
    local_c0 = *arg1;
    local_b8 = '\0';
    (**(code **)(*plVar1 + 0x48))(&local_d0,&local_e0,&local_c0);
    if ((local_b8 != '\0') && (local_c0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_c8 != '\0') && (local_d0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_d8 != '\0') && (local_e0 != 0)) {
      FUN_00d50b20();
    }
    if (this_ptr != 0) {
      FUN_00d50b20();
    }
  }
joined_r0x01d27fa1:
  if (local_48 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((bVar2) && (plVar8 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_31 != '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar6 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((cVar4 != '\0') && (plVar7 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 01ec9e00
// ============================================================
// Function: FUN_01ec9e00
// Address: 01ec9e00
// Size: 1403 bytes
// Class: GNMultipleValue
// String references:
//   "GNMultipleValue"

void FUN_01ec9e00(void)

{
  int64_t lVar1;
  int64_t *plVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  int64_t *plVar6;
  int64_t *this_ptr;
  int64_t **pplVar7;
  uint32_t uVar8;
  int64_t local_a8;
  char local_a0;
  int64_t local_98;
  char local_90;
  int64_t *local_88;
  char local_80;
  int64_t *local_78;
  int64_t *local_70;
  int64_t *local_68;
  char local_60;
  int64_t *local_58;
  int64_t *local_50;
  char local_48;
  int64_t *local_40;
  char local_38;
  
  uVar8 = FUN_01ccad60();
  local_58 = local_40;
  if ((((local_38 == '\0') && (local_40 != (int64_t *)0x0)) &&
      (uVar8 = FUN_00d50b00(), local_38 != '\0')) && (local_40 != (int64_t *)0x0)) {
    uVar8 = FUN_00d50b20();
  }
  if ((this_ptr[0xc] == 0) || (*(char *)((int64_t)this_ptr + 0x71) != '\0')) {
    local_38 = '\0';
    local_40 = (int64_t *)0x0;
    local_48 = '\0';
    local_50 = (int64_t *)0x0;
    uVar8 = FUN_01ccd250(uVar8,&local_50);
    plVar2 = local_40;
    plVar6 = (int64_t *)this_ptr[0xc];
    if (plVar6 != local_40) {
      if (local_40 != (int64_t *)0x0) {
        uVar8 = FUN_00d50b00();
      }
      this_ptr[0xc] = (int64_t)plVar2;
      if (plVar6 != (int64_t *)0x0) {
        uVar8 = FUN_00d50b20();
      }
    }
    plVar2 = local_50;
    plVar6 = (int64_t *)this_ptr[0xd];
    if (plVar6 != local_50) {
      if (local_50 != (int64_t *)0x0) {
        uVar8 = FUN_00d50b00();
      }
      this_ptr[0xd] = (int64_t)plVar2;
      if (plVar6 != (int64_t *)0x0) {
        uVar8 = FUN_00d50b20();
      }
    }
    if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
      uVar8 = FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      uVar8 = FUN_00d50b20();
    }
  }
  if ((*(char *)((int64_t)this_ptr + 0x72) == '\0') ||
     (*(char *)((int64_t)this_ptr + 0x71) != '\0')) {
    FUN_01d6f8d0();
    FUN_00d8ede0();
    local_68 = local_40;
    local_60 = 0;
    if (local_38 == '\0') {
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_60 = '\x01';
    (**(code **)(*local_58 + 0x958))();
    if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d216c0();
    uVar8 = (**(code **)(*this_ptr + 0x518))();
  }
  lVar1 = g_027edfd0;
  if (g_027edfd0 != 0) {
    uVar8 = FUN_00d50b00();
  }
  local_a8 = lVar1;
  local_a0 = '\x01';
  FUN_01ccaae0(uVar8,&local_a8);
  local_78 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != (int64_t *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
       (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    FUN_00d50b20();
  }
  if (local_78 == (int64_t *)0x0) goto LAB_01eca2b4;
  pplVar7 = &local_40;
  uVar8 = (**(code **)(*this_ptr + 0x520))();
  if (local_38 == '\0') {
    if (local_40 != (int64_t *)0x0) {
      local_70 = local_40;
      uVar8 = FUN_00d50b00();
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        uVar8 = FUN_00d50b20();
      }
      goto LAB_01eca08e;
    }
  }
  else {
    local_70 = local_40;
    if (local_40 != (int64_t *)0x0) {
LAB_01eca08e:
      lVar1 = g_027e7c20;
      if (g_027e7c20 != 0) {
        uVar8 = FUN_00d50b00();
      }
      local_98 = lVar1;
      local_90 = '\x01';
      (**(code **)(*this_ptr + 0x4c8))(uVar8,&local_98);
      plVar6 = local_50;
      if (local_48 == '\0') {
        if (local_50 == (int64_t *)0x0) {
          local_40 = (int64_t *)0x0;
          local_38 = '\x01';
          plVar6 = (int64_t *)0x0;
        }
        else {
          FUN_00d50b00();
          local_40 = plVar6;
          local_38 = '\x01';
          if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
      }
      else {
        local_40 = local_50;
        local_38 = '\x01';
        local_48 = '\0';
      }
      if ((local_90 != '\0') && (local_98 != 0)) {
        FUN_00d50b20();
      }
      if ((g_0277a3a0 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
        g_026d3c38 = FUN_00d4fe50();
        g_026d3c20 = "GNMultipleValue";
        g_026d3c28 = 0x18;
        g_026d3c30 = FUN_00050c70;
        g_026d3c40 = 0;
        ram_00000000026d3c48 = 0;
        g_026d3c50 = 0;
        ram_00000000026d3c58 = 0;
        g_026d3c60 = 0;
        ram_00000000026d3c68 = 0;
        g_026d3c70 = 0;
        ram_00000000026d3c78 = 0;
        g_026d3c80 = 0;
        ram_00000000026d3c88 = 0;
        g_026d3c90 = 0;
        ram_00000000026d3c98 = 0;
        g_026d3ca0 = 0;
        ram_00000000026d3ca8 = 0;
        g_026d3cb0 = 0;
        ram_00000000026d3cb8 = 0;
        g_026d3cc0 = 0;
        ram_00000000026d3cc8 = 0;
        g_026d3cd0 = 0;
        ram_00000000026d3cd8 = 0;
        g_026d3ce0 = 0;
        ___cxa_guard_release();
      }
      if (plVar6 == (int64_t *)0x0) {
LAB_01eca12d:
        pplVar7 = (int64_t **)&g_02802688;
      }
      else {
        (**(code **)(*plVar6 + 0x360))();
        cVar4 = FUN_00e85ea0();
        if (cVar4 == '\0') goto LAB_01eca12d;
      }
      cVar4 = *(char *)(pplVar7 + 1);
      if ((cVar4 == '\0') || (*pplVar7 == (int64_t *)0x0)) {
        if (*pplVar7 != (int64_t *)0x0) goto LAB_01eca159;
      }
      else {
        FUN_00d50b00();
LAB_01eca159:
        FUN_00e987e0();
        cVar3 = local_38;
        plVar2 = local_40;
        plVar6 = local_50;
        if (local_40 == local_50) {
          if ((local_38 == '\0') && (local_50 != (int64_t *)0x0)) {
            if (local_48 != '\0') goto LAB_01eca1db;
            FUN_00d50b00();
            goto LAB_01eca221;
          }
LAB_01eca225:
          if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          if (local_48 == '\0') {
            if (local_50 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
            local_40 = plVar6;
            if ((cVar3 != '\0') && (plVar2 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
LAB_01eca221:
            local_38 = '\x01';
            goto LAB_01eca225;
          }
          local_40 = local_50;
          if ((local_38 != '\0') && (plVar2 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
LAB_01eca1db:
          local_38 = '\x01';
        }
        if (cVar4 != '\0') {
          FUN_00d50b20();
        }
      }
      plVar6 = local_40;
      if (local_40 != (int64_t *)0x0) {
        local_88 = local_40;
        local_80 = '\0';
        FUN_00d237a0();
        if ((local_80 != '\0') && (local_88 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      FUN_01d6ed40();
      if ((local_38 != '\0') && (plVar6 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
  }
  FUN_00d50b20();
LAB_01eca2b4:
  if (local_58 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 01d713c0
// ============================================================
// Function: FUN_01d713c0
// Address: 01d713c0
// Size: 2097 bytes
// Class: GNMultipleValue

void FUN_01d713c0(uint64_t param_1,uint64_t param_2)

{
  int64_t lVar1;
  int64_t *plVar2;
  uint8_t auVar3 [16];
  uint8_t auVar4 [16];
  uint8_t auVar5 [16];
  int64_t *plVar6;
  char cVar7;
  uint8_t uVar8;
  uint32_t uVar9;
  void*arg1;
  int64_t *this_ptr;
  uint64_t uVar10;
  uint64_t uVar11;
  float extraout_XMM0_Db;
  float extraout_XMM0_Db_01;
  uint64_t extraout_XMM0_Qb;
  uint64_t extraout_XMM0_Qb_00;
  float extraout_XMM0_Dd;
  uint8_t auVar12 [16];
  uint8_t auVar13 [16];
  float extraout_XMM0_Db_00;
  uint64_t extraout_XMM0_Qb_01;
  uint8_t auVar14 [16];
  uint8_t auVar15 [16];
  float fVar16;
  uint32_t in_XMM1_Dc;
  float in_XMM1_Dd;
  uint32_t uVar17;
  uint32_t uVar18;
  float local_c8;
  uint32_t uStack_c4;
  uint32_t uStack_c0;
  uint32_t uStack_bc;
  int64_t *local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  int64_t *local_48;
  int64_t *local_40;
  char local_38;
  
  fVar16 = (float)((uint64_t)param_2 >> 0x20);
  uVar18 = (uint32_t)param_2;
  (**(code **)(*this_ptr + 0x640))();
  local_48 = local_40;
  if ((((local_38 == '\0') && (local_40 != (int64_t *)0x0)) && (FUN_00d50b00(), local_38 != '\0'))
     && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  cVar7 = FUN_01e420b0();
  if (cVar7 != '\0') {
    (**(code **)(*this_ptr + 0x878))();
  }
  cVar7 = FUN_01cef4b0();
  if (cVar7 == '\0') {
    uVar8 = (**(code **)(*this_ptr + 0x9a0))();
    (**(code **)(*this_ptr + 0xa70))();
    fVar16 = 0.0;
    uVar17 = 0;
    (**(code **)(*local_48 + 0x3f0))(0,0,0,uVar8);
    uVar18 = *(void*)((int64_t)this_ptr + 0x18c);
    lVar1 = this_ptr[0x2d];
    uVar9 = (**(code **)(*this_ptr + 0xa70))();
    (**(code **)(*local_48 + 0x490))((char)lVar1,uVar18,uVar9);
    plVar2 = local_40;
    if (local_38 == '\0') {
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    FUN_01d488d0();
    if (plVar2 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    (**(code **)(*local_48 + 0x370))();
    plVar2 = local_40;
    if (local_38 == '\0') {
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    FUN_01d48a10();
    if (plVar2 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    plVar2 = (int64_t *)*arg1;
    (**(code **)(*this_ptr + 0x960))();
    plVar6 = local_40;
    if (local_38 == '\0') {
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    uVar11 = FUN_01e3f820();
    (**(code **)(*plVar2 + 0x3f8))(uVar11,0);
    if (plVar6 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    (**(code **)(*local_48 + 0x370))();
    (**(code **)(*this_ptr + 0x960))();
    lVar1 = local_58;
    if (local_50 == '\0') {
      if (local_58 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_50 = '\0';
    }
    uVar11 = FUN_01d43d10();
    local_c8 = (float)uVar11;
    uStack_c4 = (uint32_t)((uint64_t)uVar11 >> 0x20);
    uStack_c0 = (uint32_t)extraout_XMM0_Qb_01;
    uStack_bc = (uint32_t)((uint64_t)extraout_XMM0_Qb_01 >> 0x20);
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_01e3f820();
    local_c8 = local_c8 + g_023908d8;
    auVar14._4_4_ = uStack_c4;
    auVar14._0_4_ = local_c8;
    auVar14._8_4_ = uStack_c0;
    auVar14._12_4_ = uStack_bc;
    auVar15._4_4_ = fVar16;
    auVar15._0_4_ = fVar16 * g_0239011c + extraout_XMM0_Db_00 + g_02390d00;
    auVar15._8_4_ = uVar17;
    auVar15._12_4_ = uVar17;
    auVar15 = insertps(auVar14,auVar15,0x10);
    fVar16 = 0.0;
    uVar18 = 0;
    FUN_01cb3a60(auVar15._0_8_,g_02394298);
    FUN_01e3f820();
    auVar5._4_4_ = uStack_c4;
    auVar5._0_4_ = local_c8;
    auVar5._8_4_ = uStack_c0;
    auVar5._12_4_ = uStack_bc;
    auVar3._4_4_ = fVar16;
    auVar3._0_4_ = fVar16 * g_0239011c + extraout_XMM0_Db_01 + g_02390124;
    auVar3._8_4_ = uVar18;
    auVar3._12_4_ = uVar18;
    auVar15 = insertps(auVar5,auVar3,0x10);
    FUN_01cb3a60(auVar15._0_8_,g_02394298);
  }
  else {
    uVar9 = *(void*)((int64_t)this_ptr + 0x18c);
    uVar10 = FUN_01e3f820();
    uVar17 = *(void*)((int64_t)this_ptr + 0x1fc);
    uVar11 = extraout_XMM0_Qb;
    uVar8 = (**(code **)(*this_ptr + 0x9a0))();
    (**(code **)(*this_ptr + 0xa70))();
    (**(code **)(*local_48 + 0x3f0))(uVar17,uVar9,0,uVar8,uVar18,in_XMM1_Dc,uVar10,uVar11);
    if (*(int *)(this_ptr[0x46] + 0xc) == 0) {
      FUN_01e3f820();
      (**(code **)(*this_ptr + 0x960))();
      local_78 = local_40;
      local_70 = 0;
      if (local_38 == '\0') {
        if (local_40 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      local_70 = '\x01';
      (**(code **)(*this_ptr + 0x9e0))();
      local_68 = local_58;
      local_60 = 0;
      if (local_50 == '\0') {
        if (local_58 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_50 = '\0';
      }
      local_60 = '\x01';
      uVar9 = *(void*)((int64_t)this_ptr + 0x174);
      (**(code **)(*this_ptr + 0x9a0))();
      (**(code **)(*this_ptr + 0xa70))();
      (**(code **)(*local_48 + 0x400))(&local_78,uVar18,&local_68,uVar9);
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else if ((int64_t)(int)this_ptr[0x45] != -1) {
      lVar1 = *(int64_t *)
               (*(int64_t *)(this_ptr[0x46] + 0x10) + (int64_t)(int)this_ptr[0x45] * 8);
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      FUN_01e3f820();
      uVar11 = (**(code **)(*local_48 + 0x548))();
      uStack_c0 = (uint32_t)extraout_XMM0_Qb_00;
      uStack_bc = (uint32_t)((uint64_t)extraout_XMM0_Qb_00 >> 0x20);
      FUN_01d526f0();
      auVar4._8_4_ = uStack_c0;
      auVar4._0_8_ = uVar11;
      auVar4._12_4_ = uStack_bc;
      fVar16 = fVar16 - extraout_XMM0_Db;
      auVar12._4_4_ = fVar16;
      auVar12._0_4_ = fVar16;
      auVar12._8_4_ = in_XMM1_Dd - extraout_XMM0_Dd;
      auVar12._12_4_ = in_XMM1_Dd - extraout_XMM0_Dd;
      auVar13._4_12_ = auVar12._4_12_;
      auVar13._0_4_ = fVar16 * g_0239011c + g_02390124 + (float)((uint64_t)uVar11 >> 0x20);
      insertps(auVar4,auVar13,0x10);
      FUN_01d49110();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
    }
  }
  FUN_00d50b20();
  return;
}



// ============================================================
// 01d79730
// ============================================================
// Function: FUN_01d79730
// Address: 01d79730
// Size: 2062 bytes
// Class: GNMultipleValue

void FUN_01d79730(uint64_t param_1,uint32_t param_2)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  int64_t lVar4;
  char cVar5;
  char cVar6;
  int iVar7;
  uint64_t uVar8;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t lVar9;
  int64_t lVar10;
  bool bVar11;
  uint32_t uVar12;
  uint32_t uVar13;
  uint32_t local_c8;
  int64_t *local_b0;
  char local_a8;
  int64_t local_60;
  char local_58;
  char local_31;
  
  iVar7 = FUN_01d3a5a0();
  if (iVar7 != 1) goto LAB_01d79d9c;
  iVar7 = FUN_01d3b630();
  if (iVar7 != 1) {
    iVar7 = FUN_01d3b630();
    if (iVar7 != 2) goto LAB_01d79d9c;
    (**(code **)(*this_ptr + 0x6f0))();
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if (local_60 != 0) goto LAB_01d79d9c;
  }
  cVar5 = (**(code **)(*this_ptr + 0x9a0))();
  if (cVar5 == '\0') {
    return;
  }
  bVar2 = true;
  if ((char)this_ptr[0x4a] == '\0') {
LAB_01d797b7:
    cVar5 = (char)this_ptr[0x45];
  }
  else {
    if (this_ptr[0x44] != 0) {
      FUN_00d50b00();
      FUN_00d50b20();
      goto LAB_01d797b7;
    }
    bVar2 = false;
    cVar5 = (char)this_ptr[0x45];
  }
  if ((cVar5 != '\0') && (iVar7 = FUN_01d3b630(), iVar7 == 1)) {
    FUN_01d3abf0();
    local_c8 = FUN_01e466c0();
    FUN_00d50b00();
    if (*(int *)((int64_t)this_ptr + 500) == 2) {
      *(void*)(this_ptr + 0x31) = 1;
      *(void*)(this_ptr + 0x29) = 1;
      FUN_01d11e80();
    }
    bVar1 = 0;
    bVar3 = false;
    lVar9 = 0;
    cVar5 = '\0';
LAB_01d79850:
    if (*arg1 != 0) {
      FUN_01d3abf0();
      local_c8 = FUN_01e466c0();
    }
    if (bVar3) {
      bVar3 = true;
      bVar11 = false;
      uVar12 = param_2;
    }
    else {
      uVar12 = FUN_01e3f820();
      cVar6 = FUN_00d05410(local_c8,uVar12,param_2);
      bVar11 = true;
      if (cVar6 == '\0') {
        bVar11 = *(int *)((int64_t)this_ptr + 500) == 2;
      }
    }
    *(bool *)(this_ptr + 0x31) = bVar11;
    if ((bool)(bVar1 & 1) != bVar11) {
      if (*(char *)((int64_t)this_ptr + 0x16b) != '\0') {
        *(uint *)(this_ptr + 0x29) = (uint)((int)this_ptr[0x29] == 0);
      }
      (**(code **)(*this_ptr + 0x620))();
      bVar1 = *(byte *)(this_ptr + 0x31);
    }
    if (bVar3) {
      bVar2 = false;
      goto LAB_01d79ce4;
    }
    lVar10 = *arg1;
    local_31 = (char)arg1[1];
    if (lVar9 == lVar10) {
      lVar10 = lVar9;
      if (((local_31 != '\0') && (cVar5 == '\0')) && (lVar9 != 0)) {
        local_31 = '\x01';
        FUN_00d50b00();
        goto LAB_01d79986;
      }
      uVar13 = (uint32_t)g_023908d0;
      param_2 = uVar12;
    }
    else {
      if ((local_31 != '\0') && (lVar10 != 0)) {
        FUN_00d50b00();
      }
      if ((cVar5 != '\0') && (lVar9 != 0)) {
        FUN_00d50b20();
      }
LAB_01d79986:
      uVar13 = (uint32_t)g_023908d0;
      param_2 = uVar12;
      cVar5 = local_31;
    }
    if (!bVar2) {
      uVar13 = (uint32_t)g_023b19a0;
    }
    (**(code **)(*this_ptr + 0x660))(uVar13,0);
    lVar9 = *arg1;
    if (lVar9 == local_60) {
      if (((char)arg1[1] != '\0') || (local_60 == 0)) goto LAB_01d79a8f;
      if (local_58 == '\0') {
        FUN_00d50b00();
        goto LAB_01d79a89;
      }
LAB_01d79a33:
      *(void*)(arg1 + 1) = 1;
    }
    else {
      lVar4 = arg1[1];
      if (local_58 != '\0') {
        *arg1 = local_60;
        if (((char)lVar4 != '\0') && (lVar9 != 0)) {
          FUN_00d50b20();
        }
        goto LAB_01d79a33;
      }
      if (local_60 != 0) {
        FUN_00d50b00();
      }
      *arg1 = local_60;
      if (((char)lVar4 != '\0') && (lVar9 != 0)) {
        FUN_00d50b20();
      }
LAB_01d79a89:
      *(void*)(arg1 + 1) = 1;
LAB_01d79a8f:
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
    }
    if (*arg1 == 0) {
      if (!bVar2) goto LAB_01d79cd7;
      if (lVar10 == 0) {
        if (cVar5 == '\0') {
          bVar3 = true;
          goto LAB_01d79ac4;
        }
        bVar3 = true;
        cVar6 = (char)arg1[1];
      }
      else {
        if ((cVar5 != '\0') && (lVar10 != 0)) {
          FUN_00d50b00();
        }
        *arg1 = lVar10;
        *(char *)(arg1 + 1) = cVar5;
        bVar3 = true;
        cVar6 = cVar5;
      }
    }
    else {
      iVar7 = FUN_01d3a5a0();
      if (iVar7 == 6) goto LAB_01d79cd7;
LAB_01d79ac4:
      cVar6 = (char)arg1[1];
    }
    lVar9 = *arg1;
    if (lVar10 == lVar9) {
      bVar2 = false;
      lVar9 = lVar10;
      if (((cVar6 != '\0') && (bVar2 = false, cVar5 == '\0')) && (cVar5 = '\0', lVar10 != 0)) {
        cVar5 = '\x01';
        FUN_00d50b00();
        bVar2 = false;
      }
    }
    else {
      if ((cVar6 != '\0') && (lVar9 != 0)) {
        FUN_00d50b00();
      }
      bVar2 = false;
      bVar11 = cVar5 != '\0';
      cVar5 = cVar6;
      if ((bVar11) && (lVar10 != 0)) {
        bVar2 = false;
        FUN_00d50b20();
      }
    }
    goto LAB_01d79850;
  }
  cVar5 = '\0';
  lVar9 = 0;
  lVar10 = this_ptr[0x44];
  goto joined_r0x01d79d58;
LAB_01d79cd7:
  bVar2 = true;
  lVar9 = lVar10;
LAB_01d79ce4:
  if ((char)this_ptr[0x31] != '\0') {
    if (*(int *)((int64_t)this_ptr + 500) == 2) {
      *(void*)(this_ptr + 0x29) = 0;
    }
    FUN_01d11e80();
  }
  *(void*)(this_ptr + 0x31) = 0;
  (**(code **)(*this_ptr + 0x620))();
  FUN_00d50b20();
  if (bVar2) {
    if (cVar5 == '\0') {
      return;
    }
    if (lVar9 == 0) {
      return;
    }
    FUN_00d50b20();
    return;
  }
  lVar10 = this_ptr[0x44];
joined_r0x01d79d58:
  if (lVar10 == 0) {
    if (this_ptr[0x46] != 0) {
      FUN_01d7a120();
    }
  }
  else {
    (**(code **)(*this_ptr + 0xac8))();
  }
  if ((cVar5 != '\0') && (lVar9 != 0)) {
    FUN_00d50b20();
  }
LAB_01d79d9c:
  if (*arg1 != 0) {
    iVar7 = FUN_01d3a5a0();
    if ((iVar7 == 2) && (uVar8 = FUN_01d3b590(), (uVar8 & 0xc00) != 0)) {
      if (this_ptr[0x44] == 0) {
        if (this_ptr[0x46] != 0) {
          FUN_01d7a120();
        }
      }
      else {
        (**(code **)(*this_ptr + 0xac8))();
      }
    }
    else if (*arg1 != 0) {
      iVar7 = FUN_01d3a5a0();
      if (iVar7 == 2) {
        FUN_01d3b5d0();
        if (local_60 == 0) {
          cVar5 = '\0';
        }
        else {
          FUN_01d3b5d0();
          lVar9 = g_027f3310;
          if (g_027f3310 != 0) {
            FUN_00d50b00();
          }
          cVar5 = (**(code **)(*local_b0 + 0x50))();
          if (lVar9 != 0) {
            FUN_00d50b20();
          }
          if ((local_a8 != '\0') && (local_b0 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        if ((local_58 != '\0') && (local_60 != 0)) {
          FUN_00d50b20();
        }
        if (cVar5 != '\0') {
          FUN_01cf0820();
          return;
        }
      }
      if ((*arg1 != 0) && (iVar7 = FUN_01d3a5a0(), iVar7 == 7)) {
        FUN_01cf0820();
      }
    }
  }
  return;
}



// ============================================================
// 01cf1420
// ============================================================
// Function: FUN_01cf1420
// Address: 01cf1420
// Size: 1794 bytes
// Class: GNMultipleValue
// String references:
//   "%@.%@"

void FUN_01cf1420(void)

{
  int64_t lVar1;
  void*puVar2;
  char cVar3;
  int iVar4;
  int64_t *this_ptr;
  int64_t local_180;
  int64_t local_178;
  char local_170;
  int64_t local_168;
  char local_160;
  int64_t local_158;
  char local_150;
  int64_t local_148;
  char local_140;
  int64_t *local_138;
  char local_130;
  int64_t local_128;
  char local_120;
  int64_t local_118;
  char local_110;
  int64_t *local_108;
  char local_100;
  int64_t local_f8;
  char local_f0;
  int64_t local_e8;
  char local_e0;
  int64_t local_d8;
  char local_d0;
  int64_t *local_c8;
  char local_c0;
  int64_t *local_b8;
  char local_b0;
  int64_t local_a8;
  char local_a0;
  void*local_98;
  char local_90;
  void*local_88;
  char local_80;
  void*local_78;
  char local_70;
  void*local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  char local_40;
  int64_t local_38;
  char local_30;
  
  (**(code **)(*this_ptr + 0xa18))();
  puVar2 = local_68;
  if ((local_60 != '\0') && (local_68 != (void*)0x0)) {
    FUN_00d50b20();
  }
  if (puVar2 == (void*)0x0) {
    FUN_00d4efa0();
    FUN_00c82bb0();
    local_88 = local_68;
    local_80 = 0;
    if (local_60 == '\0') {
      if (local_68 != (void*)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_60 = '\0';
    }
    local_80 = '\x01';
    FUN_00e3f850();
    if ((local_80 != '\0') && (local_88 != (void*)0x0)) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != (void*)0x0)) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    cVar3 = FUN_01d10140();
    if (cVar3 != '\0') {
      local_b0 = 0;
      (**(code **)(this_ptr[2] + 0x10))();
      FUN_00d50b00();
      local_118 = g_027f2f40;
      local_b0 = '\x01';
      local_b8 = this_ptr + 2;
      if (g_027f2f40 != 0) {
        FUN_00d50b00();
      }
      local_110 = '\x01';
      (**(code **)(*this_ptr + 0x960))();
      local_78 = local_68;
      local_70 = 0;
      if (local_60 == '\0') {
        if (local_68 != (void*)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_60 = '\0';
      }
      local_70 = '\x01';
      FUN_00e3fb50(&local_78,&local_118);
      if ((local_70 != '\0') && (local_78 != (void*)0x0)) {
        FUN_00d50b20();
      }
      if ((local_60 != '\0') && (local_68 != (void*)0x0)) {
        FUN_00d50b20();
      }
      if ((local_110 != '\0') && (local_118 != 0)) {
        FUN_00d50b20();
      }
      if ((local_b0 != '\0') && (local_b8 != (int64_t *)0x0)) {
        (**(code **)(*local_b8 + 0x10))();
        FUN_00d50b20();
      }
    }
    if ((this_ptr[10] != 0) && (iVar4 = FUN_00d8c7a0(), iVar4 != 0)) {
      (**(code **)(this_ptr[2] + 0x10))();
      FUN_00d50b00();
      local_f8 = g_027f0e20;
      local_100 = '\x01';
      local_108 = this_ptr + 2;
      if (g_027f0e20 != 0) {
        FUN_00d50b00();
      }
      local_f0 = '\x01';
      local_d0 = 0;
      lVar1 = this_ptr[10];
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      local_d0 = '\x01';
      local_d8 = lVar1;
      FUN_00e3fb50(&local_d8,&local_f8);
      if ((local_d0 != '\0') && (local_d8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_f0 != '\0') && (local_f8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_100 != '\0') && (local_108 != (int64_t *)0x0)) {
        (**(code **)(*local_108 + 0x10))();
        FUN_00d50b20();
      }
    }
  }
  else {
    FUN_00d4efa0();
    FUN_00c82bb0();
    (**(code **)(*this_ptr + 0xa18))();
    local_180 = local_158;
    FUN_00083ea0(2,&local_180);
    FUN_00d8cb40();
    local_a8 = local_38;
    local_a0 = 0;
    if (local_30 == '\0') {
      if (local_38 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_30 = '\0';
    }
    local_a0 = '\x01';
    FUN_00e3f850();
    if ((local_a0 != '\0') && (local_a8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    local_68 = (void*)&g_0253d630;
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    local_68 = &g_024c5048;
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if ((local_150 != '\0') && (local_158 != 0)) {
      FUN_00d50b20();
    }
    if ((local_170 != '\0') && (local_178 != 0)) {
      FUN_00d50b20();
    }
    if ((local_160 != '\0') && (local_168 != 0)) {
      FUN_00d50b20();
    }
    cVar3 = FUN_01d10140();
    if (cVar3 != '\0') {
      local_c0 = 0;
      (**(code **)(this_ptr[2] + 0x10))();
      FUN_00d50b00();
      local_148 = g_027f2f40;
      local_c0 = '\x01';
      local_c8 = this_ptr + 2;
      if (g_027f2f40 != 0) {
        FUN_00d50b00();
      }
      local_140 = '\x01';
      (**(code **)(*this_ptr + 0x960))();
      local_98 = local_68;
      local_90 = 0;
      if (local_60 == '\0') {
        if (local_68 != (void*)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_60 = '\0';
      }
      local_90 = '\x01';
      FUN_00e3fb50(&local_98,&local_148);
      if ((local_90 != '\0') && (local_98 != (void*)0x0)) {
        FUN_00d50b20();
      }
      if ((local_60 != '\0') && (local_68 != (void*)0x0)) {
        FUN_00d50b20();
      }
      if ((local_140 != '\0') && (local_148 != 0)) {
        FUN_00d50b20();
      }
      if ((local_c0 != '\0') && (local_c8 != (int64_t *)0x0)) {
        (**(code **)(*local_c8 + 0x10))();
        FUN_00d50b20();
      }
    }
    if ((this_ptr[10] != 0) && (iVar4 = FUN_00d8c7a0(), iVar4 != 0)) {
      (**(code **)(this_ptr[2] + 0x10))();
      FUN_00d50b00();
      local_128 = g_027f0e20;
      local_130 = '\x01';
      local_138 = this_ptr + 2;
      if (g_027f0e20 != 0) {
        FUN_00d50b00();
      }
      local_120 = '\x01';
      local_e0 = 0;
      lVar1 = this_ptr[10];
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      local_e0 = '\x01';
      local_e8 = lVar1;
      FUN_00e3fb50(&local_e8,&local_128);
      if ((local_e0 != '\0') && (local_e8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_120 != '\0') && (local_128 != 0)) {
        FUN_00d50b20();
      }
      if ((local_130 != '\0') && (local_138 != (int64_t *)0x0)) {
        (**(code **)(*local_138 + 0x10))();
        FUN_00d50b20();
      }
    }
  }
  FUN_00e3faa0();
  return;
}



// ============================================================
// 01e064a0
// ============================================================
// Function: FUN_01e064a0
// Address: 01e064a0
// Size: 1547 bytes
// Class: GNMultipleValue
// String references:
//   "GNMultipleValue"
//   "GNString"

void FUN_01e064a0(uint32_t param_1)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  char cVar4;
  int iVar5;
  int64_t *plVar6;
  int64_t *arg1;
  int64_t *this_ptr;
  uint32_t extraout_XMM0_Da;
  uint32_t extraout_XMM0_Da_00;
  int64_t local_d0;
  char local_c8;
  int64_t *local_c0;
  char local_b8;
  int64_t local_b0;
  char local_a8;
  int64_t local_a0;
  char local_98;
  int64_t local_90;
  char local_88;
  int64_t *local_80;
  char local_78;
  int64_t *local_70;
  char local_68;
  int64_t *local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t *local_40;
  char local_38;
  
  plVar6 = (int64_t *)*arg1;
  if ((g_0277a3a0 == '\0') &&
     (iVar5 = ___cxa_guard_acquire(), param_1 = extraout_XMM0_Da_00, iVar5 != 0)) {
    g_026d3c38 = FUN_00d4fe50();
    g_026d3c20 = "GNMultipleValue";
    g_026d3c28 = 0x18;
    g_026d3c30 = FUN_00050c70;
    g_026d3c40 = 0;
    ram_00000000026d3c48 = 0;
    g_026d3c50 = 0;
    ram_00000000026d3c58 = 0;
    g_026d3c60 = 0;
    ram_00000000026d3c68 = 0;
    g_026d3c70 = 0;
    ram_00000000026d3c78 = 0;
    g_026d3c80 = 0;
    ram_00000000026d3c88 = 0;
    g_026d3c90 = 0;
    ram_00000000026d3c98 = 0;
    g_026d3ca0 = 0;
    ram_00000000026d3ca8 = 0;
    g_026d3cb0 = 0;
    ram_00000000026d3cb8 = 0;
    g_026d3cc0 = 0;
    ram_00000000026d3cc8 = 0;
    g_026d3cd0 = 0;
    ram_00000000026d3cd8 = 0;
    g_026d3ce0 = 0;
    param_1 = ___cxa_guard_release();
  }
  if (plVar6 == (int64_t *)0x0) {
LAB_01e064f2:
    plVar6 = &g_02802688;
  }
  else {
    (**(code **)(*plVar6 + 0x360))();
    cVar4 = FUN_00e85ea0();
    plVar6 = arg1;
    param_1 = extraout_XMM0_Da;
    if (cVar4 == '\0') goto LAB_01e064f2;
  }
  lVar1 = *plVar6;
  lVar3 = plVar6[1];
  if (((char)lVar3 != '\0') && (lVar1 != 0)) {
    FUN_00d50b00();
LAB_01e0651d:
    plVar6 = (int64_t *)this_ptr[0x3b];
    if (plVar6 == (int64_t *)0x0) {
      FUN_00e99c70();
      if ((((local_40 != (int64_t *)0x0) && (plVar6 = local_40, local_38 == '\0')) &&
          (FUN_00d50b00(), local_38 != '\0')) && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      FUN_00d50b00();
    }
    local_c8 = '\0';
    local_88 = 0;
    lVar2 = this_ptr[0x3a];
    local_d0 = lVar1;
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    local_88 = '\x01';
    local_90 = lVar2;
    FUN_00d8ede0();
    local_50 = local_a0;
    local_48 = 0;
    if (local_98 == '\0') {
      if (local_a0 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_98 = '\0';
    }
    local_48 = '\x01';
    (**(code **)(*plVar6 + 0x368))(&local_90,&local_d0,&local_50);
    local_60 = local_40;
    local_58 = 0;
    if (local_38 == '\0') {
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_58 = '\x01';
    (**(code **)(*this_ptr + 0x968))();
    if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_98 != '\0') && (local_a0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
    if ((local_c8 != '\0') && (local_d0 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
    if ((char)lVar3 != '\0') {
      FUN_00d50b20();
    }
    return;
  }
  if (lVar1 != 0) goto LAB_01e0651d;
  plVar6 = (int64_t *)*arg1;
  if (plVar6 == (int64_t *)0x0) {
    FUN_00d8ede0();
    local_80 = local_40;
    local_78 = 0;
    if (local_38 == '\0') {
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_78 = '\x01';
    (**(code **)(*this_ptr + 0x968))();
    if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (local_38 == '\0') {
      return;
    }
    if (local_40 == (int64_t *)0x0) {
      return;
    }
    FUN_00d50b20();
    return;
  }
  if ((int64_t *)this_ptr[0x3a] != (int64_t *)0x0) {
    local_b8 = '\0';
    local_c0 = plVar6;
    (**(code **)(*(int64_t *)this_ptr[0x3a] + 0x388))(param_1,&local_c0);
    local_70 = local_40;
    local_68 = 0;
    if (local_38 == '\0') {
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_68 = '\x01';
    (**(code **)(*this_ptr + 0x958))();
    if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (local_b8 == '\0') {
      return;
    }
    if (local_c0 == (int64_t *)0x0) {
      return;
    }
    FUN_00d50b20();
    return;
  }
  if ((g_026fd0c0 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
    g_026d5e58 = FUN_00d4fe50();
    g_026d5e40 = "GNString";
    g_026d5e48 = 0x40;
    g_026d5e50 = FUN_0005d920;
    g_026d5e60 = 0;
    ram_00000000026d5e68 = 0;
    g_026d5e70 = 0;
    ram_00000000026d5e78 = 0;
    g_026d5e80 = 0;
    ram_00000000026d5e88 = 0;
    g_026d5e90 = 0;
    ram_00000000026d5e98 = 0;
    g_026d5ea0 = 0;
    ram_00000000026d5ea8 = 0;
    g_026d5eb0 = 0;
    ram_00000000026d5eb8 = 0;
    g_026d5ec0 = 0;
    ram_00000000026d5ec8 = 0;
    g_026d5ed0 = 0;
    ram_00000000026d5ed8 = 0;
    g_026d5ee0 = 0;
    ram_00000000026d5ee8 = 0;
    g_026d5ef0 = 0;
    ram_00000000026d5ef8 = 0;
    g_026d5f00 = 0;
    ___cxa_guard_release();
  }
  (**(code **)(*plVar6 + 0x360))();
  cVar4 = FUN_00e85ea0();
  plVar6 = arg1;
  if (cVar4 == '\0') {
    plVar6 = &g_02802688;
  }
  if (*plVar6 != 0) {
    local_b0 = *arg1;
    local_a8 = '\0';
    (**(code **)(*this_ptr + 0x968))();
    if (local_a8 == '\0') {
      return;
    }
    if (local_b0 == 0) {
      return;
    }
    FUN_00d50b20();
    return;
  }
  plVar6 = (int64_t *)*arg1;
  FUN_00053ac0();
  if (plVar6 != (int64_t *)0x0) {
    (**(code **)(*plVar6 + 0x360))();
    cVar4 = FUN_00e85ea0();
    if (cVar4 != '\0') goto LAB_01e06924;
  }
  arg1 = &g_02802688;
LAB_01e06924:
  if (*arg1 == 0) {
    return;
  }
  FUN_00d459e0();
                                          (**(code **)(*this_ptr + 0x928))();
  return;
}



// ============================================================
// 01ede930
// ============================================================
// Function: FUN_01ede930
// Address: 01ede930
// Size: 1516 bytes
// Class: GNMultipleValue

void* FUN_01ede930(uint64_t param_1,uint64_t param_2)

{
  int64_t lVar1;
  uint8_t auVar2 [16];
  int64_t lVar3;
  char cVar4;
  void*puVar5;
  void*puVar6;
  int64_t *in_RCX;
  int in_EDX;
  void*this_ptr;
  uint32_t uVar7;
  uint64_t uVar8;
  uint64_t uVar9;
  uint64_t in_XMM0_Qb;
  uint64_t extraout_XMM0_Qb;
  uint8_t auVar10 [16];
  uint8_t auVar11 [16];
  float fVar12;
  uint64_t uVar13;
  uint64_t in_XMM1_Qb;
  uint64_t uVar17;
  uint8_t auVar14 [16];
  uint8_t auVar15 [16];
  uint8_t auVar16 [16];
  float fVar18;
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  int64_t local_f8;
  char local_f0;
  uint64_t local_e8;
  float fStack_e0;
  float fStack_dc;
  float local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float local_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  int64_t local_40;
  char local_38;
  
  uVar9 = param_2;
  uVar17 = in_XMM1_Qb;
  puVar5 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar5 = &g_02572358;
  (*g_02572370)();
  if (*in_RCX == 0) {
    FUN_01d3a560();
    FUN_01d3abf0();
    FUN_01f514b0();
    lVar1 = *in_RCX;
    if (lVar1 == local_40) {
      if (((char)in_RCX[1] == '\0') && (local_40 != 0)) {
        if (local_38 != '\0') goto LAB_01edeea1;
        FUN_00d50b00();
        goto LAB_01edeeda;
      }
LAB_01edeee1:
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      lVar3 = in_RCX[1];
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
        *in_RCX = local_40;
        if (((char)lVar3 != '\0') && (lVar1 != 0)) {
          FUN_00d50b20();
        }
LAB_01edeeda:
        *(void*)(in_RCX + 1) = 1;
        goto LAB_01edeee1;
      }
      *in_RCX = local_40;
      if (((char)lVar3 != '\0') && (lVar1 != 0)) {
        FUN_00d50b20();
      }
LAB_01edeea1:
      *(void*)(in_RCX + 1) = 1;
    }
    if ((local_f0 != '\0') && (local_f8 != 0)) {
      FUN_00d50b20();
    }
  }
  if (in_EDX != 5) {
    if (in_EDX == 4) {
      uVar8 = FUN_01f51370();
      uVar13 = uVar9;
      puVar6 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar6 = &g_026b0a08;
      *(void*)((int64_t)puVar6 + 0xc) = 0;
      *(void*)((int64_t)puVar6 + 0x14) = 0;
      *(void*)((int64_t)puVar6 + 0x1c) = 0;
      FUN_00d500e0();
      *(void*)((int64_t)puVar6 + 0xc) = uVar8;
      *(void*)((int64_t)puVar6 + 0x14) = uVar9;
      *(void*)((int64_t)puVar6 + 0x1c) = 0;
      FUN_00d21140();
      FUN_00d50b20();
      goto LAB_01edebb8;
    }
    uVar13 = uVar9;
    if (in_EDX != 3) goto LAB_01edebb8;
  }
  uVar8 = FUN_01f51370();
  uVar13 = uVar9;
  puVar6 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar6 = &g_026b0a08;
  *(void*)((int64_t)puVar6 + 0xc) = 0;
  *(void*)((int64_t)puVar6 + 0x14) = 0;
  *(void*)((int64_t)puVar6 + 0x1c) = 0;
  FUN_00d500e0();
  *(void*)((int64_t)puVar6 + 0xc) = uVar8;
  *(void*)((int64_t)puVar6 + 0x14) = uVar9;
  *(void*)((int64_t)puVar6 + 0x1c) = 1;
  FUN_00d21140();
  FUN_00d50b20();
LAB_01edebb8:
  uVar9 = FUN_01f51370();
  local_88 = (float)uVar9;
  fStack_84 = (float)((uint64_t)uVar9 >> 0x20);
  fStack_80 = (float)extraout_XMM0_Qb;
  fStack_7c = (float)((uint64_t)extraout_XMM0_Qb >> 0x20);
  local_58 = (float)uVar13;
  fStack_54 = (float)((uint64_t)uVar13 >> 0x20);
  fStack_50 = (float)uVar17;
  fStack_4c = (float)((uint64_t)uVar17 >> 0x20);
  local_e8._0_4_ = (float)param_2;
  fVar12 = (float)local_e8;
  cVar4 = FUN_00d054a0();
  if (cVar4 != '\0') {
    uVar7 = FUN_01f51370();
    auVar11._8_4_ = fStack_80;
    auVar11._0_8_ = uVar9;
    auVar11._12_4_ = fStack_7c;
    fStack_54 = fStack_54 + fStack_84;
    fStack_4c = fStack_4c + fStack_7c;
    local_e8._4_4_ = (float)((uint64_t)param_2 >> 0x20);
    fStack_e0 = (float)in_XMM1_Qb;
    fStack_dc = (float)((uint64_t)in_XMM1_Qb >> 0x20);
    local_108 = (float)param_1;
    fStack_104 = (float)((uint64_t)param_1 >> 0x20);
    fStack_100 = (float)in_XMM0_Qb;
    fStack_fc = (float)((uint64_t)in_XMM0_Qb >> 0x20);
    auVar10._0_4_ = (float)local_e8 + local_108;
    auVar10._4_4_ = local_e8._4_4_ + fStack_104;
    auVar10._8_4_ = fStack_e0 + fStack_100;
    auVar10._12_4_ = fStack_dc + fStack_fc;
    fVar18 = (local_58 + local_88 + g_02390d00) - local_88;
    auVar11 = blendps(auVar10,auVar11,0xd);
    auVar14._4_4_ = fStack_54;
    auVar14._0_4_ = fVar18;
    auVar14._8_4_ = fStack_50 + fStack_80;
    auVar14._12_4_ = fStack_4c;
    auVar15._4_4_ = fStack_54;
    auVar15._0_4_ = (fStack_54 + g_02390d00) - auVar10._4_4_;
    auVar15._8_4_ = fStack_4c;
    auVar15._12_4_ = fStack_4c;
    auVar15 = insertps(auVar14,auVar15,0x10);
    uVar9 = FUN_00d05360(auVar11._0_8_,auVar15._0_8_,uVar7,fVar12);
    local_e8._0_4_ = auVar15._0_4_;
    local_e8._4_4_ = auVar15._4_4_;
    if ((0.0 < (float)local_e8) && (0.0 < local_e8._4_4_)) {
      puVar6 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar6 = &g_026b0a08;
      *(void*)((int64_t)puVar6 + 0xc) = 0;
      *(void*)((int64_t)puVar6 + 0x14) = 0;
      *(void*)((int64_t)puVar6 + 0x1c) = 0;
      FUN_00d500e0();
      local_e8 = auVar15._0_8_;
      *(void*)((int64_t)puVar6 + 0xc) = uVar9;
      *(void*)((int64_t)puVar6 + 0x14) = local_e8;
      *(void*)((int64_t)puVar6 + 0x1c) = 0x101;
      FUN_00d21140();
      FUN_00d50b20();
    }
    FUN_01f51370();
    auVar16._0_4_ = local_108 - local_88;
    auVar16._4_4_ = fStack_104 - fStack_84;
    auVar16._8_4_ = fStack_100 - fStack_80;
    auVar16._12_4_ = fStack_fc - fStack_7c;
    auVar2._4_4_ = fStack_54;
    auVar2._0_4_ = fVar18;
    auVar2._8_4_ = fStack_50 + fStack_80;
    auVar2._12_4_ = fStack_4c;
    auVar15 = blendps(auVar16,auVar2,1);
    uVar9 = FUN_00d05360();
    if ((0.0 < auVar15._0_4_) && (0.0 < auVar15._4_4_)) {
      puVar6 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar6 = &g_026b0a08;
      *(void*)((int64_t)puVar6 + 0xc) = 0;
      *(void*)((int64_t)puVar6 + 0x14) = 0;
      *(void*)((int64_t)puVar6 + 0x1c) = 0;
      FUN_00d500e0();
      *(void*)((int64_t)puVar6 + 0xc) = uVar9;
      *(int64_t *)((int64_t)puVar6 + 0x14) = auVar15._0_8_;
      *(void*)((int64_t)puVar6 + 0x1c) = 0x101;
      FUN_00d21140();
      FUN_00d50b20();
    }
  }
  *this_ptr = puVar5;
  *(void*)(this_ptr + 1) = 1;
  return this_ptr;
}



// ============================================================
// 01d59670
// ============================================================
// Function: FUN_01d59670
// Address: 01d59670
// Size: 1443 bytes
// Class: GNMultipleValue
// String references:
//   "GNMultipleValue"
//   "GNString"

void FUN_01d59670(uint32_t param_1)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  char cVar4;
  int iVar5;
  int64_t *plVar6;
  int64_t *arg1;
  int64_t *this_ptr;
  uint32_t extraout_XMM0_Da;
  uint32_t extraout_XMM0_Da_00;
  int64_t local_d0;
  char local_c8;
  int64_t *local_c0;
  char local_b8;
  int64_t local_b0;
  char local_a8;
  int64_t local_a0;
  char local_98;
  int64_t local_90;
  char local_88;
  int64_t *local_80;
  char local_78;
  int64_t *local_70;
  char local_68;
  int64_t *local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t *local_40;
  char local_38;
  
  plVar6 = (int64_t *)*arg1;
  if ((g_0277a3a0 == '\0') &&
     (iVar5 = ___cxa_guard_acquire(), param_1 = extraout_XMM0_Da_00, iVar5 != 0)) {
    g_026d3c38 = FUN_00d4fe50();
    g_026d3c20 = "GNMultipleValue";
    g_026d3c28 = 0x18;
    g_026d3c30 = FUN_00050c70;
    g_026d3c40 = 0;
    ram_00000000026d3c48 = 0;
    g_026d3c50 = 0;
    ram_00000000026d3c58 = 0;
    g_026d3c60 = 0;
    ram_00000000026d3c68 = 0;
    g_026d3c70 = 0;
    ram_00000000026d3c78 = 0;
    g_026d3c80 = 0;
    ram_00000000026d3c88 = 0;
    g_026d3c90 = 0;
    ram_00000000026d3c98 = 0;
    g_026d3ca0 = 0;
    ram_00000000026d3ca8 = 0;
    g_026d3cb0 = 0;
    ram_00000000026d3cb8 = 0;
    g_026d3cc0 = 0;
    ram_00000000026d3cc8 = 0;
    g_026d3cd0 = 0;
    ram_00000000026d3cd8 = 0;
    g_026d3ce0 = 0;
    param_1 = ___cxa_guard_release();
  }
  if (plVar6 != (int64_t *)0x0) {
    (**(code **)(*plVar6 + 0x360))();
    cVar4 = FUN_00e85ea0();
    plVar6 = arg1;
    param_1 = extraout_XMM0_Da;
    if (cVar4 != '\0') goto LAB_01d596c9;
  }
  plVar6 = &g_02802688;
LAB_01d596c9:
  lVar1 = *plVar6;
  lVar3 = plVar6[1];
  if (((char)lVar3 == '\0') || (lVar1 == 0)) {
    if (lVar1 == 0) {
      plVar6 = (int64_t *)*arg1;
      if (plVar6 == (int64_t *)0x0) {
        FUN_00d8ede0();
        local_80 = local_40;
        local_78 = 0;
        if (local_38 == '\0') {
          if (local_40 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        local_78 = '\x01';
        (**(code **)(*this_ptr + 0x958))();
        if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (local_38 == '\0') {
          return;
        }
        if (local_40 == (int64_t *)0x0) {
          return;
        }
        FUN_00d50b20();
        return;
      }
      if ((int64_t *)this_ptr[0x39] != (int64_t *)0x0) {
        local_b8 = '\0';
        local_c0 = plVar6;
        (**(code **)(*(int64_t *)this_ptr[0x39] + 0x388))(param_1,&local_c0);
        local_70 = local_40;
        local_68 = 0;
        if (local_38 == '\0') {
          if (local_40 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        local_68 = '\x01';
        (**(code **)(*this_ptr + 0x958))();
        if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (local_b8 == '\0') {
          return;
        }
        if (local_c0 == (int64_t *)0x0) {
          return;
        }
        FUN_00d50b20();
        return;
      }
      if ((g_026fd0c0 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
        g_026d5e58 = FUN_00d4fe50();
        g_026d5e40 = "GNString";
        g_026d5e48 = 0x40;
        g_026d5e50 = FUN_0005d920;
        g_026d5e60 = 0;
        ram_00000000026d5e68 = 0;
        g_026d5e70 = 0;
        ram_00000000026d5e78 = 0;
        g_026d5e80 = 0;
        ram_00000000026d5e88 = 0;
        g_026d5e90 = 0;
        ram_00000000026d5e98 = 0;
        g_026d5ea0 = 0;
        ram_00000000026d5ea8 = 0;
        g_026d5eb0 = 0;
        ram_00000000026d5eb8 = 0;
        g_026d5ec0 = 0;
        ram_00000000026d5ec8 = 0;
        g_026d5ed0 = 0;
        ram_00000000026d5ed8 = 0;
        g_026d5ee0 = 0;
        ram_00000000026d5ee8 = 0;
        g_026d5ef0 = 0;
        ram_00000000026d5ef8 = 0;
        g_026d5f00 = 0;
        ___cxa_guard_release();
      }
      (**(code **)(*plVar6 + 0x360))();
      cVar4 = FUN_00e85ea0();
      plVar6 = arg1;
      if (cVar4 == '\0') {
        plVar6 = &g_02802688;
      }
      if (*plVar6 == 0) {
        return;
      }
      local_b0 = *arg1;
      local_a8 = '\0';
      (**(code **)(*this_ptr + 0x968))();
      if (local_a8 == '\0') {
        return;
      }
      if (local_b0 == 0) {
        return;
      }
      FUN_00d50b20();
      return;
    }
  }
  else {
    FUN_00d50b00();
  }
  plVar6 = (int64_t *)this_ptr[0x3a];
  if (plVar6 == (int64_t *)0x0) {
    FUN_00e99c70();
    if ((((local_40 != (int64_t *)0x0) && (plVar6 = local_40, local_38 == '\0')) &&
        (FUN_00d50b00(), local_38 != '\0')) && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    FUN_00d50b00();
  }
  local_c8 = '\0';
  local_88 = 0;
  lVar2 = this_ptr[0x39];
  local_d0 = lVar1;
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  local_88 = '\x01';
  local_90 = lVar2;
  FUN_00d8ede0();
  local_50 = local_a0;
  local_48 = 0;
  if (local_98 == '\0') {
    if (local_a0 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_98 = '\0';
  }
  local_48 = '\x01';
  (**(code **)(*plVar6 + 0x368))(&local_90,&local_d0,&local_50);
  local_60 = local_40;
  local_58 = 0;
  if (local_38 == '\0') {
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  local_58 = '\x01';
  (**(code **)(*this_ptr + 0x968))();
  if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  if ((local_c8 != '\0') && (local_d0 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  if ((char)lVar3 != '\0') {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 01d72130
// ============================================================
// Function: FUN_01d72130
// Address: 01d72130
// Size: 2148 bytes
// Class: GNMultipleValue

void FUN_01d72130(uint64_t param_1,uint64_t param_2)

{
  bool bVar1;
  int64_t lVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int64_t *this_ptr;
  int64_t lVar6;
  int64_t lVar7;
  int iVar8;
  uint64_t uVar9;
  uint8_t auVar10 [16];
  uint64_t extraout_XMM0_Qb;
  uint64_t uVar11;
  uint64_t in_XMM1_Qb;
  uint8_t auVar12 [16];
  uint8_t local_168 [16];
  int64_t local_140;
  char local_138;
  int64_t local_130;
  char local_128;
  int64_t local_120;
  char local_118;
  int64_t local_110;
  char local_108;
  int64_t local_100;
  char local_f8;
  int64_t local_f0;
  char local_e8;
  int64_t local_e0;
  int64_t local_98;
  char local_90;
  float local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  uint64_t local_78;
  float fStack_6c;
  int64_t local_58;
  char local_50;
  
  lVar2 = local_58;
  if (this_ptr[0x44] == 0) {
    return;
  }
  FUN_00d403d0();
  lVar6 = g_027f0ae0;
  if (g_027f0ae0 != 0) {
    FUN_00d50b00();
  }
  FUN_00d50b00();
  local_140 = 0;
  local_138 = '\0';
  FUN_00d40470(&local_140,&stack0xffffffffffffff28,3,3);
  if ((local_138 != '\0') && (local_140 != 0)) {
    FUN_00d50b20();
  }
  if (this_ptr != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (lVar6 != 0) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  bVar1 = false;
  lVar6 = 0;
  for (iVar8 = 0; iVar5 = FUN_01d5b230(), iVar8 < iVar5; iVar8 = iVar8 + 1) {
    FUN_01d5b240();
    if (local_58 == lVar6) {
      if ((bVar1) || (local_58 == 0)) {
joined_r0x01d72318:
        lVar7 = lVar6;
        bVar3 = bVar1;
        if ((local_50 != '\0') && (local_58 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        lVar7 = lVar6;
        bVar3 = true;
        if (local_50 == '\0') {
          FUN_00d50b00();
          goto LAB_01d72304;
        }
      }
    }
    else {
      lVar7 = local_58;
      if (local_50 == '\0') {
        if (local_58 != 0) {
          FUN_00d50b00();
        }
        bVar3 = true;
        if ((bVar1) && (lVar6 != 0)) {
          FUN_00d50b20();
          lVar6 = local_58;
LAB_01d72304:
          bVar1 = true;
          goto joined_r0x01d72318;
        }
      }
      else {
        bVar3 = true;
        if ((bVar1) && (lVar6 != 0)) {
          FUN_00d50b20();
        }
      }
    }
    bVar1 = bVar3;
    cVar4 = FUN_01d65330();
    lVar6 = g_027f0ad8;
    if (cVar4 == '\0') {
      if (g_027f0ad8 != 0) {
        FUN_00d50b00();
      }
      local_130 = lVar6;
      local_128 = '\x01';
      FUN_01d65120();
      if ((local_128 != '\0') && (local_130 != 0)) {
        FUN_00d50b20();
      }
    }
    lVar6 = lVar7;
  }
  if (this_ptr[0x44] == 0) goto LAB_01d72931;
  local_e0 = this_ptr[0x44];
  FUN_00d50b00();
  FUN_01d5e2b0();
  if (local_50 == '\0') {
    if (local_58 == 0) goto LAB_01d724b7;
    FUN_00d50b00();
LAB_01d72413:
    local_50 = '\0';
    local_58 = 0;
    iVar5 = -1;
    iVar8 = -1;
    while (iVar5 = iVar5 + 1, iVar5 < *(int *)(lVar2 + 0xc)) {
      local_58 = *(int64_t *)(*(int64_t *)(lVar2 + 0x10) + (int64_t)iVar5 * 8);
      cVar4 = FUN_01d65e30();
      if (cVar4 != '\0') {
        iVar8 = iVar5;
      }
    }
    FUN_002a0a30();
    FUN_00d50b20();
  }
  else {
    if (local_58 != 0) goto LAB_01d72413;
LAB_01d724b7:
    iVar8 = -1;
  }
  FUN_01e3f820();
  uVar11 = param_2;
  uVar9 = in_XMM1_Qb;
  FUN_01e3f820();
  local_168._0_8_ = uVar11;
  local_168._8_8_ = uVar9;
  FUN_01e3f820();
  cVar4 = FUN_01d5e5e0();
  local_78._4_4_ = (float)((uint64_t)uVar11 >> 0x20);
  fStack_6c = (float)((uint64_t)uVar9 >> 0x20);
  local_88 = (float)param_2;
  fStack_84 = (float)((uint64_t)param_2 >> 0x20);
  fStack_80 = (float)in_XMM1_Qb;
  fStack_7c = (float)((uint64_t)in_XMM1_Qb >> 0x20);
  auVar12._4_4_ = fStack_84 - local_78._4_4_;
  auVar12._0_4_ = local_88 - local_78._4_4_;
  auVar12._8_4_ = fStack_80 - fStack_6c;
  auVar12._12_4_ = fStack_7c - fStack_6c;
  auVar12 = blendps(local_168,auVar12,0xd);
  if (cVar4 != '\0') {
    auVar10._4_4_ = fStack_84 - local_78._4_4_;
    auVar10._0_4_ = (local_88 - local_78._4_4_) * g_0239011c;
    auVar10._8_4_ = fStack_80 - fStack_6c;
    auVar10._12_4_ = fStack_7c - fStack_6c;
    auVar10 = roundss(ZEXT816(0),auVar10,9);
    blendps(auVar12,auVar10,1);
  }
  FUN_01d3a560();
  if ((local_50 == '\0') && (local_58 != 0)) {
    FUN_00d50b00();
  }
  FUN_01e49570();
  FUN_01e3f820();
  FUN_01e46ed0();
  FUN_01f514b0();
  local_78 = local_58;
  if (local_50 == '\0') {
    if (local_58 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_50 = '\0';
  }
  if ((local_90 != '\0') && (local_98 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58 != 0) &&
     (((iVar5 = FUN_01d3a5a0(), iVar5 == 6 || (iVar5 = FUN_01d3a5a0(), iVar5 == 1)) ||
      (iVar5 = FUN_01d3a5a0(), iVar5 == 5)))) {
    FUN_01e49570();
    FUN_01d3abf0();
    FUN_01f514b0();
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
  }
  FUN_00d50b00();
  local_120 = local_78;
  local_118 = '\0';
  FUN_01edf1a0(&local_120,3);
  if ((local_50 == '\0') && (local_58 != 0)) {
    FUN_00d50b00();
  }
  if ((local_118 != '\0') && (local_120 != 0)) {
    FUN_00d50b20();
  }
  if (this_ptr != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  FUN_01e3f820();
  uVar9 = (**(code **)(*this_ptr + 0xad0))();
  uVar11 = extraout_XMM0_Qb;
  FUN_00d50b00();
  local_110 = 0;
  local_108 = '\0';
  local_100 = 0;
  local_f8 = '\0';
  FUN_00d50b00();
  local_f0 = local_58;
  local_e8 = '\0';
  FUN_01d5efd0(&local_110,iVar8,&local_100,0,uVar9,uVar11);
  if ((local_e8 != '\0') && (local_f0 != 0)) {
    FUN_00d50b20();
  }
  if (this_ptr != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_f8 != '\0') && (local_100 != 0)) {
    FUN_00d50b20();
  }
  if ((local_108 != '\0') && (local_110 != 0)) {
    FUN_00d50b20();
  }
  if (this_ptr != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (local_58 != 0) {
    FUN_00d50b20();
  }
  if (local_78 != 0) {
    FUN_00d50b20();
  }
  if (local_58 != 0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
LAB_01d72931:
  if ((bVar1) && (lVar6 != 0)) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 01dd3d20
// ============================================================
// Function: FUN_01dd3d20
// Address: 01dd3d20
// Size: 906 bytes
// Class: GNMultipleValue

void FUN_01dd3d20(uint64_t param_1,uint64_t param_2,size_t param_3)

{
  uint uVar1;
  int iVar2;
  uint8_t auVar3 [16];
  uint8_t auVar4 [16];
  uint uVar5;
  uint8_t auVar6 [16];
  void *pvVar7;
  char in_DL;
  int iVar8;
  char *pcVar9;
  int64_t lVar10;
  int64_t lVar11;
  int64_t lVar12;
  int unaff_ESI;
  int64_t *this_ptr;
  uint32_t uVar13;
  float fVar14;
  uint64_t uVar15;
  uint64_t uVar16;
  uint32_t extraout_XMM0_Dc;
  uint32_t extraout_XMM0_Dc_00;
  uint32_t extraout_XMM0_Dd;
  uint32_t extraout_XMM0_Dd_00;
  uint32_t in_XMM1_Dc;
  uint32_t in_XMM1_Dd;
  uint32_t uVar17;
  uint8_t auVar18 [16];
  int64_t local_68;
  char local_60 [8];
  uint64_t local_58;
  uint32_t uStack_50;
  uint32_t uStack_4c;
  uint64_t local_48;
  uint32_t uStack_40;
  uint32_t uStack_3c;
  char local_38 [8];
  
  uVar17 = (uint32_t)((uint64_t)param_2 >> 0x20);
  fVar14 = (float)param_2;
  if (*(char *)((int64_t)this_ptr + 0x1b4) == '\0') {
    return;
  }
  uVar13 = FUN_00d23340();
  pvVar7 = (void *)CONCAT71((int7)((uint64_t)param_1 >> 8),local_60[0]);
  pcVar9 = local_38;
  if (local_60[0] != '\0') {
    pcVar9 = local_60;
  }
  local_38[0] = local_60[0];
  *pcVar9 = '\0';
  if ((local_60[0] != '\0') && (local_68 != 0)) {
    uVar13 = FUN_00d50b20();
  }
  if ((local_38[0] == '\0') && (local_68 != 0)) {
    uVar13 = FUN_00d50b00();
  }
  if (local_68 != 0) {
    FUN_00d50b20();
    uVar13 = FUN_01dd48a0();
  }
  if (unaff_ESI != -1) {
    lVar12 = this_ptr[0x34];
    if ((int)this_ptr[0x36] == unaff_ESI) {
LAB_01dd3dc6:
      if (lVar12 == 0) {
        return;
      }
      if ((*(uint *)(lVar12 + 0x18) & 0xfffffffc) == 4) {
        return;
      }
    }
    else if (lVar12 != 0) {
      uVar1 = *(uint *)(lVar12 + 0x18);
      pvVar7 = (void *)(uint64_t)uVar1;
      uVar5 = uVar1 + 3;
      if (-1 < (int)uVar1) {
        uVar5 = uVar1;
      }
      if (3 < (int)uVar1) {
        pvVar7 = *(void **)(lVar12 + 0x10);
        lVar11 = 0;
        do {
          if (*(int *)((int64_t)pvVar7 + lVar11 * 4) == unaff_ESI) goto LAB_01dd3dc6;
          lVar11 = lVar11 + 1;
        } while ((int)uVar5 >> 2 != (int)lVar11);
      }
    }
  }
  if ((int)this_ptr[0x36] != -1) {
    FUN_01dcf710();
    uVar13 = (**(code **)(*this_ptr + 0x618))();
  }
  *(int *)(this_ptr + 0x36) = unaff_ESI;
  if (unaff_ESI != -1) {
    FUN_01dcf710();
    uVar13 = (**(code **)(*this_ptr + 0x618))();
  }
  lVar12 = this_ptr[0x34];
  if (lVar12 == 0) goto LAB_01dd4016;
  if (in_DL == '\0') {
    if (6 < *(int *)(lVar12 + 0x18) + 3U) {
      uVar15 = FUN_01dcf710();
      local_58._0_4_ = fVar14;
      local_58._4_4_ = uVar17;
      uStack_50 = in_XMM1_Dc;
      uStack_4c = in_XMM1_Dd;
      if (7 < *(int *)(this_ptr[0x34] + 0x18)) {
        lVar12 = 1;
        do {
          local_48 = uVar15;
          FUN_01dcf710();
          uVar15 = FUN_00d052e0((float)local_48);
          lVar12 = lVar12 + 1;
          iVar2 = *(int *)(this_ptr[0x34] + 0x18);
          iVar8 = iVar2 + 3;
          if (-1 < iVar2) {
            iVar8 = iVar2;
          }
          pvVar7 = (void *)(int64_t)(iVar8 >> 2);
        } while (lVar12 < (int64_t)pvVar7);
      }
      local_48 = uVar15;
      FUN_01e436c0();
      uStack_40 = uStack_50;
      uStack_3c = uStack_4c;
      uVar15 = FUN_00d05360((float)local_48);
      local_48._0_4_ = (float)local_58;
      local_48._4_4_ = local_58._4_4_;
      local_58 = uVar15;
      FUN_00c8e340((int)uVar15,0);
      fVar14 = (float)local_48;
      uVar17 = local_48._4_4_;
      in_XMM1_Dc = uStack_40;
      in_XMM1_Dd = uStack_3c;
      uVar13 = (**(code **)(*this_ptr + 0x618))((float)local_58);
    }
    if (unaff_ESI != -1) {
      lVar12 = this_ptr[0x34];
      iVar2 = *(int *)(lVar12 + 0x18);
      FUN_00c8e340(uVar13,1);
      *(int *)(*(int64_t *)(lVar12 + 0x10) + (int64_t)iVar2) = unaff_ESI;
      goto LAB_01dd3fbd;
    }
  }
  else if (unaff_ESI != -1) {
    uVar1 = *(uint *)(lVar12 + 0x18);
    lVar11 = (int64_t)(int)uVar1;
    uVar5 = uVar1 + 3;
    if (-1 < lVar11) {
      uVar5 = uVar1;
    }
    pvVar7 = (void *)(uint64_t)uVar5;
    if (3 < lVar11) {
      pvVar7 = (void *)(uint64_t)(uint)((int)uVar5 >> 2);
      lVar10 = 0;
      do {
        if (*(int *)(*(int64_t *)(lVar12 + 0x10) + lVar10 * 4) == unaff_ESI) goto LAB_01dd3fd5;
        lVar10 = lVar10 + 1;
      } while ((int)uVar5 >> 2 != (uint)lVar10);
    }
    FUN_00c8e340(pvVar7,1);
    *(int *)(*(int64_t *)(lVar12 + 0x10) + lVar11) = unaff_ESI;
LAB_01dd3fbd:
    FUN_01dcf710();
    uVar13 = (**(code **)(*this_ptr + 0x618))();
  }
LAB_01dd3fd5:
  lVar12 = this_ptr[0x34];
  if (lVar12 != 0) {
    uVar13 = FUN_00d50b00();
  }
  FUN_00c8e340(uVar13,0);
  _memcpy(pvVar7,(void *)(int64_t)*(int *)(lVar12 + 0x18),param_3);
  FUN_00d50b20();
LAB_01dd4016:
  if (unaff_ESI != -1) {
    local_48 = FUN_01dcf710();
    local_58._0_4_ = fVar14;
    local_58._4_4_ = uVar17;
    uStack_50 = in_XMM1_Dc;
    uStack_4c = in_XMM1_Dd;
    uStack_40 = extraout_XMM0_Dc;
    uStack_3c = extraout_XMM0_Dd;
    uVar16 = FUN_01e436c0();
    auVar18._8_4_ = uStack_40;
    auVar18._0_8_ = local_48;
    auVar18._12_4_ = uStack_3c;
    uVar17 = extraout_XMM0_Dc_00;
    uVar13 = extraout_XMM0_Dd_00;
    uVar15 = uVar16;
    if ((float)uVar16 <= (float)local_48) {
      uVar17 = uStack_40;
      uVar13 = uStack_3c;
      uVar15 = local_48;
    }
    auVar4._8_4_ = uVar17;
    auVar4._0_8_ = uVar15;
    auVar4._12_4_ = uVar13;
    auVar18 = blendps(auVar18,auVar4,0xd);
    fVar14 = (float)uVar16 + fVar14 + g_02390d00;
    auVar6._4_4_ = local_58._4_4_;
    auVar6._0_4_ = (float)local_58;
    auVar6._8_4_ = uStack_50;
    auVar6._12_4_ = uStack_4c;
    if (fVar14 < (float)local_58 + (float)uVar15 + g_02390d00) {
      auVar3._4_4_ = (int)((uint64_t)uVar16 >> 0x20);
      auVar3._0_4_ = (fVar14 - (float)uVar15) + g_02390d00;
      auVar3._8_4_ = extraout_XMM0_Dc_00;
      auVar3._12_4_ = extraout_XMM0_Dd_00;
      blendps(auVar6,auVar3,1);
    }
    (**(code **)(*this_ptr + 0x518))(auVar18._0_4_);
  }
  (**(code **)(*this_ptr + 0x400))();
  return;
}



// ============================================================
// 01d0b670
// ============================================================
// Function: FUN_01d0b670
// Address: 01d0b670
// Size: 1276 bytes
// Class: GNMultipleValue

void* FUN_01d0b670(void)

{
  int64_t lVar1;
  uint64_t uVar2;
  void*puVar3;
  int64_t arg1;
  void*this_ptr;
  bool bVar4;
  undefined7 uVar6;
  int64_t lVar5;
  int64_t lVar7;
  int64_t lVar8;
  char cVar9;
  uint32_t uVar10;
  uint64_t unaff_R15;
  bool bVar11;
  int64_t local_b0;
  char local_a8;
  uint64_t local_a0;
  int64_t local_98;
  int64_t local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  void*local_70;
  int64_t local_68;
  char local_60;
  int64_t local_58;
  uint32_t local_50;
  uint32_t local_4c;
  int64_t local_48;
  char local_40;
  int64_t local_38;
  
  lVar5 = *(int64_t *)(arg1 + 600);
  if (lVar5 != 0) {
    FUN_00d50b00();
  }
  FUN_00d95590();
  local_90 = local_68;
  local_88 = 0;
  if (local_60 == '\0') {
    if (local_68 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_60 = '\0';
  }
  local_88 = '\x01';
  FUN_00d97f20();
  lVar8 = local_48;
  if (local_48 == 0) {
    uVar10 = (uint32_t)CONCAT71((int7)((uint64_t)unaff_R15 >> 8),1);
  }
  else {
    if (local_40 == '\0') {
      FUN_00d50b00();
      uVar10 = 0;
      if ((local_40 == '\0') || (local_48 == 0)) goto LAB_01d0b734;
      FUN_00d50b20();
    }
    else {
      local_40 = '\0';
    }
    uVar10 = 0;
  }
LAB_01d0b734:
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  if (lVar5 != 0) {
    FUN_00d50b20();
  }
  local_b0 = lVar8;
  local_a8 = '\0';
  local_98 = lVar8;
  uVar2 = FUN_00d91000(1,&local_b0);
  lVar8 = local_48;
  if (local_48 == 0) {
    local_50 = (uint32_t)CONCAT71((int7)((uint64_t)uVar2 >> 8),1);
    lVar8 = 0;
    uVar2 = 0;
  }
  else {
    uVar6 = (undefined7)((uint64_t)lVar5 >> 8);
    if (local_40 == '\0') {
      FUN_00d50b00();
      local_50 = 0;
      uVar2 = CONCAT71(uVar6,1);
      if ((local_40 == '\0') || (local_48 == 0)) goto LAB_01d0b7eb;
      FUN_00d50b20();
    }
    else {
      local_40 = '\0';
    }
    uVar2 = CONCAT71(uVar6,1);
    local_50 = 0;
  }
LAB_01d0b7eb:
  if ((local_a8 != '\0') && (local_b0 != 0)) {
    FUN_00d50b20();
  }
  puVar3 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar3 = &g_02572358;
  (*g_02572370)();
  if (*(int *)(lVar8 + 0xc) < 1) {
    *this_ptr = puVar3;
    *(void*)(this_ptr + 1) = 1;
    local_38 = 0;
    bVar4 = false;
    if ((char)uVar10 != '\0' || local_98 == 0) goto LAB_01d0bb70;
  }
  else {
    lVar7 = 0;
    local_38 = 0;
    bVar4 = false;
    lVar5 = 0;
    local_a0 = uVar2;
    local_70 = puVar3;
    local_58 = lVar8;
    local_4c = uVar10;
    do {
      lVar8 = *(int64_t *)(*(int64_t *)(local_58 + 0x10) + lVar7 * 8);
      if (lVar5 != lVar8) {
        if (lVar8 != 0) {
          FUN_00d50b00();
        }
        bVar11 = lVar5 != 0;
        lVar5 = lVar8;
        if (bVar11) {
          FUN_00d50b20();
        }
      }
      FUN_00d95590();
      local_80 = local_68;
      local_78 = 0;
      if (local_60 == '\0') {
        if (local_68 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_60 = '\0';
      }
      local_78 = '\x01';
      FUN_00d97f20();
      lVar8 = local_48;
      if (local_48 == lVar5) {
LAB_01d0b96a:
        if ((local_40 != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        if (local_40 == '\0') {
          if (local_48 != 0) {
            FUN_00d50b00();
          }
          bVar11 = lVar5 != 0;
          lVar5 = lVar8;
          if (bVar11) {
            FUN_00d50b20();
          }
          goto LAB_01d0b96a;
        }
        if (lVar5 != 0) {
          FUN_00d50b20();
        }
        local_40 = '\0';
        lVar5 = lVar8;
      }
      if ((local_78 != '\0') && (local_80 != 0)) {
        FUN_00d50b20();
      }
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      FUN_01d09e90();
      lVar8 = local_48;
      if (local_48 == local_38) {
        lVar1 = local_48;
        if ((bVar4) || (local_48 == 0)) {
          lVar8 = local_38;
          bVar11 = bVar4;
          if ((local_40 != '\0') && (lVar8 = local_38, local_48 != 0)) {
            FUN_00d50b20();
            lVar1 = local_48;
            lVar8 = local_38;
          }
        }
        else {
          lVar8 = local_38;
          bVar11 = true;
          if (local_40 == '\0') {
            FUN_00d50b00();
            lVar1 = local_48;
            lVar8 = local_38;
          }
        }
      }
      else if (local_40 == '\0') {
        if (local_48 != 0) {
          FUN_00d50b00();
        }
        lVar1 = local_48;
        bVar11 = true;
        if (bVar4) {
          if (local_38 == 0) goto LAB_01d0ba50;
          FUN_00d50b20();
          lVar1 = local_48;
          bVar11 = true;
        }
      }
      else if ((bVar4) && (local_38 != 0)) {
        FUN_00d50b20();
        lVar1 = local_48;
        bVar11 = true;
      }
      else {
LAB_01d0ba50:
        lVar1 = local_48;
        bVar11 = true;
      }
      bVar4 = bVar11;
      local_48 = lVar8;
      local_38 = local_48;
      if (local_48 != 0) {
        local_40 = '\0';
        FUN_00d21140();
        lVar1 = local_48;
        if ((local_40 != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
          lVar1 = local_48;
        }
      }
      local_48 = lVar1;
      lVar8 = local_98;
      lVar7 = lVar7 + 1;
    } while (lVar7 < *(int *)(local_58 + 0xc));
    *this_ptr = local_70;
    *(void*)(this_ptr + 1) = 1;
    cVar9 = (char)local_4c;
    if (lVar5 == 0) {
      if (cVar9 != '\0' || local_98 == 0) goto LAB_01d0bb70;
    }
    else {
      FUN_00d50b20();
      if (cVar9 != '\0' || lVar8 == 0) goto LAB_01d0bb70;
    }
  }
  FUN_00d50b20();
LAB_01d0bb70:
  if ((bVar4) && (local_38 != 0)) {
    FUN_00d50b20();
  }
  if ((char)local_50 == '\0') {
    FUN_00d50b20();
  }
  return this_ptr;
}



// ============================================================
// 01edcd90
// ============================================================
// Function: FUN_01edcd90
// Address: 01edcd90
// Size: 1199 bytes
// Class: GNMultipleValue
// String references:
//   "GNMultipleValue"
//   "GNImage"

void FUN_01edcd90(uint32_t param_1)

{
  int64_t lVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  int64_t *plVar5;
  int64_t *this_ptr;
  int64_t *plVar6;
  int64_t local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  int64_t *local_60;
  char local_58;
  int64_t *local_50;
  char local_48;
  int64_t *local_40;
  char local_38;
  
  lVar1 = g_027e7c20;
  if (g_027e7c20 != 0) {
    param_1 = FUN_00d50b00();
  }
  local_80 = lVar1;
  local_78 = '\x01';
  (**(code **)(*this_ptr + 0x4c8))(param_1,&local_80);
  plVar5 = local_40;
  local_50 = local_40;
  if (local_38 == '\0') {
    if (local_40 == (int64_t *)0x0) {
      local_50 = (int64_t *)0x0;
      local_48 = '\x01';
      plVar5 = (int64_t *)0x0;
    }
    else {
      FUN_00d50b00();
      local_48 = '\x01';
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    local_48 = '\x01';
    local_38 = '\0';
  }
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  if ((g_0277a3a0 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
    g_026d3c38 = FUN_00d4fe50();
    g_026d3c20 = "GNMultipleValue";
    g_026d3c28 = 0x18;
    g_026d3c30 = FUN_00050c70;
    g_026d3c40 = 0;
    ram_00000000026d3c48 = 0;
    g_026d3c50 = 0;
    ram_00000000026d3c58 = 0;
    g_026d3c60 = 0;
    ram_00000000026d3c68 = 0;
    g_026d3c70 = 0;
    ram_00000000026d3c78 = 0;
    g_026d3c80 = 0;
    ram_00000000026d3c88 = 0;
    g_026d3c90 = 0;
    ram_00000000026d3c98 = 0;
    g_026d3ca0 = 0;
    ram_00000000026d3ca8 = 0;
    g_026d3cb0 = 0;
    ram_00000000026d3cb8 = 0;
    g_026d3cc0 = 0;
    ram_00000000026d3cc8 = 0;
    g_026d3cd0 = 0;
    ram_00000000026d3cd8 = 0;
    g_026d3ce0 = 0;
    ___cxa_guard_release();
  }
  if (plVar5 == (int64_t *)0x0) {
LAB_01edce32:
    plVar5 = g_02802688;
    plVar6 = g_02802688;
    cVar3 = g_02802690;
    if (g_02802690 == '\0') goto LAB_01edce9c;
LAB_01edce8d:
    plVar6 = (int64_t *)0x0;
    if (plVar5 == (int64_t *)0x0) goto LAB_01edce9c;
    FUN_00d50b00();
LAB_01edcea5:
    FUN_00e987e0();
    plVar6 = local_40;
    cVar2 = local_48;
    plVar5 = local_50;
    if (local_50 == local_40) {
      if ((local_48 == '\0') && (local_40 != (int64_t *)0x0)) {
        if (local_38 != '\0') goto LAB_01edcef1;
        FUN_00d50b00();
        goto LAB_01edcf37;
      }
LAB_01edcf3b:
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      if (local_38 == '\0') {
        if (local_40 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        local_50 = plVar6;
        if ((cVar2 != '\0') && (plVar5 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
LAB_01edcf37:
        local_48 = '\x01';
        goto LAB_01edcf3b;
      }
      local_50 = local_40;
      if ((local_48 != '\0') && (plVar5 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
LAB_01edcef1:
      local_48 = '\x01';
    }
    if (cVar3 != '\0') {
      FUN_00d50b20();
    }
  }
  else {
    (**(code **)(*plVar5 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') goto LAB_01edce32;
    plVar5 = local_50;
    plVar6 = local_50;
    cVar3 = local_48;
    if (local_48 != '\0') goto LAB_01edce8d;
LAB_01edce9c:
    if (plVar6 != (int64_t *)0x0) goto LAB_01edcea5;
  }
  FUN_01ccad60();
  plVar5 = local_40;
  if ((((local_38 == '\0') && (local_40 != (int64_t *)0x0)) && (FUN_00d50b00(), local_38 != '\0'))
     && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  plVar6 = local_50;
  if ((g_026ed470 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
    g_027f7318 = FUN_00d4fe50();
    g_027f7300 = "GNImage";
    g_027f7308 = 0x68;
    g_027f7310 = FUN_001cdcc0;
    g_027f7320 = 0;
    ram_00000000027f7328 = 0;
    g_027f7330 = 0;
    ram_00000000027f7338 = 0;
    g_027f7340 = 0;
    ram_00000000027f7348 = 0;
    g_027f7350 = 0;
    ram_00000000027f7358 = 0;
    g_027f7360 = 0;
    ram_00000000027f7368 = 0;
    g_027f7370 = 0;
    ram_00000000027f7378 = 0;
    g_027f7380 = 0;
    ram_00000000027f7388 = 0;
    g_027f7390 = 0;
    ram_00000000027f7398 = 0;
    g_027f73a0 = 0;
    ram_00000000027f73a8 = 0;
    g_027f73b0 = 0;
    ram_00000000027f73b8 = 0;
    g_027f73c0 = 0;
    ___cxa_guard_release();
  }
  if (plVar6 == (int64_t *)0x0) {
LAB_01edcfca:
    plVar6 = g_02802688;
    cVar3 = g_02802690;
    if (g_02802690 == '\0') goto LAB_01edcffe;
LAB_01edcfef:
    if (plVar6 == (int64_t *)0x0) goto LAB_01edcffe;
    FUN_00d50b00();
  }
  else {
    (**(code **)(*plVar6 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') goto LAB_01edcfca;
    plVar6 = local_50;
    cVar3 = local_48;
    if (local_48 != '\0') goto LAB_01edcfef;
LAB_01edcffe:
    if (plVar6 == (int64_t *)0x0) {
      local_68 = '\0';
      local_70 = 0;
      (**(code **)(*plVar5 + 0x958))();
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      goto LAB_01edd08e;
    }
  }
  (**(code **)(*plVar6 + 0x148))();
  local_60 = local_40;
  local_58 = 0;
  if (local_38 == '\0') {
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  local_58 = '\x01';
  (**(code **)(*plVar5 + 0x958))();
  if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar3 != '\0') {
    FUN_00d50b20();
  }
LAB_01edd08e:
  FUN_00d50b20();
  if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 01ec0ac0
// ============================================================
// Function: FUN_01ec0ac0
// Address: 01ec0ac0
// Size: 1570 bytes
// Class: GNMultipleValue
// String references:
//   "GNMultipleValue"

void FUN_01ec0ac0(uint32_t param_1)

{
  bool bVar1;
  int64_t lVar2;
  int64_t lVar3;
  char cVar4;
  int iVar5;
  int64_t *this_ptr;
  int64_t *plVar6;
  int64_t *plVar7;
  int64_t *plVar8;
  uint32_t uVar9;
  int64_t *local_f0;
  char local_e8;
  int64_t local_e0;
  char local_d8;
  int64_t local_d0;
  char local_c8;
  int64_t local_c0;
  char local_b8;
  int64_t *local_b0;
  char local_a8;
  int64_t *local_a0;
  char local_98;
  int64_t local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  int64_t *local_60;
  char local_58;
  int64_t *local_40;
  char local_38;
  
  lVar2 = g_027e7c20;
  local_58 = '\0';
  local_60 = (int64_t *)0x0;
  if (g_027e7c20 != 0) {
    param_1 = FUN_00d50b00();
  }
  local_e0 = lVar2;
  local_d8 = '\x01';
  uVar9 = FUN_01ccab60(param_1,&local_e0);
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    uVar9 = FUN_00d50b20();
  }
  if ((local_d8 != '\0') && (local_e0 != 0)) {
    uVar9 = FUN_00d50b20();
  }
  lVar3 = g_02800140;
  lVar2 = g_027e7c20;
  if (local_40 == (int64_t *)0x0) {
    if (g_02800140 != 0) {
      uVar9 = FUN_00d50b00();
    }
    local_c0 = lVar3;
    local_b8 = '\x01';
    FUN_01ccaae0(uVar9,&local_c0);
    if ((local_b8 != '\0') && (local_c0 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    if (g_027e7c20 != 0) {
      uVar9 = FUN_00d50b00();
    }
    local_d0 = lVar2;
    local_c8 = '\x01';
    (**(code **)(*this_ptr + 0x4c8))(uVar9,&local_d0);
    if (local_40 != (int64_t *)0x0) {
      if (local_38 == '\0') {
        FUN_00d50b00();
        local_60 = local_40;
        local_58 = '\x01';
      }
      else {
        local_60 = local_40;
        local_58 = '\x01';
        local_38 = '\0';
      }
    }
    if ((local_c8 != '\0') && (local_d0 != 0)) {
      FUN_00d50b20();
    }
  }
  plVar6 = local_60;
  if ((g_0277a3a0 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
    g_026d3c38 = FUN_00d4fe50();
    g_026d3c20 = "GNMultipleValue";
    g_026d3c28 = 0x18;
    g_026d3c30 = FUN_00050c70;
    g_026d3c40 = 0;
    ram_00000000026d3c48 = 0;
    g_026d3c50 = 0;
    ram_00000000026d3c58 = 0;
    g_026d3c60 = 0;
    ram_00000000026d3c68 = 0;
    g_026d3c70 = 0;
    ram_00000000026d3c78 = 0;
    g_026d3c80 = 0;
    ram_00000000026d3c88 = 0;
    g_026d3c90 = 0;
    ram_00000000026d3c98 = 0;
    g_026d3ca0 = 0;
    ram_00000000026d3ca8 = 0;
    g_026d3cb0 = 0;
    ram_00000000026d3cb8 = 0;
    g_026d3cc0 = 0;
    ram_00000000026d3cc8 = 0;
    g_026d3cd0 = 0;
    ram_00000000026d3cd8 = 0;
    g_026d3ce0 = 0;
    ___cxa_guard_release();
  }
  if (local_60 == (int64_t *)0x0) {
LAB_01ec0d0b:
    plVar7 = g_02802688;
    plVar8 = g_02802688;
    cVar4 = g_02802690;
    if (g_02802690 == '\0') goto LAB_01ec0d3f;
LAB_01ec0d30:
    plVar8 = (int64_t *)0x0;
    if (plVar7 == (int64_t *)0x0) goto LAB_01ec0d3f;
    FUN_00d50b00();
  }
  else {
    (**(code **)(*local_60 + 0x360))();
    cVar4 = FUN_00e85ea0();
    if (cVar4 == '\0') goto LAB_01ec0d0b;
    plVar7 = local_60;
    plVar8 = local_60;
    cVar4 = local_58;
    if (local_58 != '\0') goto LAB_01ec0d30;
LAB_01ec0d3f:
    if (plVar8 == (int64_t *)0x0) goto LAB_01ec0dec;
  }
  FUN_00e987e0();
  if (local_60 == local_40) {
    if ((local_58 == '\0') && (local_40 != (int64_t *)0x0)) {
      if (local_38 != '\0') goto LAB_01ec0d94;
      FUN_00d50b00();
      goto LAB_01ec0dc7;
    }
LAB_01ec0dcb:
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    if (local_38 == '\0') {
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      local_60 = local_40;
      if ((local_58 != '\0') && (plVar6 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
LAB_01ec0dc7:
      local_58 = '\x01';
      goto LAB_01ec0dcb;
    }
    local_60 = local_40;
    if ((local_58 != '\0') && (plVar6 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
LAB_01ec0d94:
    local_58 = '\x01';
  }
  if (cVar4 != '\0') {
    FUN_00d50b20();
  }
LAB_01ec0dec:
  if (local_60 == (int64_t *)0x0) {
    FUN_01ebf950();
    local_90 = 0;
    local_88 = '\0';
    FUN_01ea4ac0();
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    FUN_01f27fe0();
    local_b0 = local_60;
    local_a8 = '\0';
    (**(code **)(*local_f0 + 0x6d0))((int)g_023dcce4,&local_b0);
    if (local_40 == (int64_t *)0x0) {
      bVar1 = true;
      plVar6 = (int64_t *)0x0;
    }
    else {
      plVar6 = local_40;
      if (local_38 == '\0') {
        FUN_00d50b00();
        bVar1 = false;
      }
      else {
        local_38 = '\0';
        bVar1 = false;
      }
    }
    if ((local_a8 != '\0') && (local_b0 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_e8 != '\0') && (local_f0 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    local_98 = '\0';
    local_a0 = plVar6;
    FUN_01ea4500();
    if ((local_98 != '\0') && (local_a0 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_01ebf950();
    local_78 = 0;
    local_80 = this_ptr[10];
    if (local_80 != 0) {
      FUN_00d50b00();
    }
    local_78 = '\x01';
    FUN_01ea4ac0();
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (local_58 != '\0') {
      FUN_00d50b20();
    }
    if (!bVar1 && plVar6 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  return;
}



// ============================================================
// 01d29010
// ============================================================
// Function: FUN_01d29010
// Address: 01d29010
// Size: 1313 bytes
// Class: GNMultipleValue

uint64_t FUN_01d29010(uint64_t param_1,int64_t *param_2)

{
  int64_t lVar1;
  int64_t lVar2;
  char cVar3;
  uint uVar4;
  int64_t *plVar5;
  char *pcVar6;
  uint64_t uVar7;
  int64_t *arg1;
  int64_t this_ptr;
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
  char local_70;
  undefined7 uStack_6f;
  char local_68;
  int64_t *local_50;
  int64_t local_48;
  char local_40 [15];
  char local_31;
  
  plVar5 = *(int64_t **)(this_ptr + 0x40);
  if (plVar5 == (int64_t *)0x0) {
LAB_01d290e6:
    cVar3 = FUN_00d8ca50();
    lVar1 = g_02774da0;
    if (cVar3 != '\0') {
      if (g_02774da0 != 0) {
        FUN_00d50b00();
      }
      local_d0 = lVar1;
      local_c8 = '\x01';
      FUN_00d91000(1,&local_d0);
      if (local_40[0] == '\0') {
        if (((local_48 != 0) && (FUN_00d50b00(), local_40[0] != '\0')) && (local_48 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_40[0] = '\0';
      }
      if ((local_c8 != '\0') && (local_d0 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d23340();
      pcVar6 = &local_70;
      if (local_40[0] != '\0') {
        pcVar6 = local_40;
      }
      local_70 = local_40[0];
      *pcVar6 = '\0';
      if ((local_40[0] != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      lVar1 = *param_2;
      if (lVar1 == local_48) {
        if (((char)param_2[1] == '\0') && (local_48 != 0)) {
          if (local_70 == '\0') {
            FUN_00d50b00();
          }
          goto LAB_01d2926a;
        }
        if ((local_70 != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        lVar2 = param_2[1];
        if (local_70 == '\0') {
          if (local_48 != 0) {
            FUN_00d50b00();
          }
          *param_2 = local_48;
          if (((char)lVar2 != '\0') && (lVar1 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          *param_2 = local_48;
          if (((char)lVar2 != '\0') && (lVar1 != 0)) {
            FUN_00d50b20();
          }
        }
LAB_01d2926a:
        local_50 = param_2 + 1;
        *(void*)local_50 = 1;
      }
      FUN_00d23740();
      if (*(int *)(local_48 + 0xc) != 0) {
        local_c0 = local_48;
        local_b8 = '\0';
        (**(code **)(*(int64_t *)*arg1 + 0xa0))();
        lVar1 = *arg1;
        if (lVar1 == local_48) {
          if (((char)arg1[1] == '\0') && (local_48 != 0)) {
            if (local_40[0] != '\0') goto LAB_01d29390;
            FUN_00d50b00();
            goto LAB_01d2936f;
          }
LAB_01d29373:
          if ((local_40[0] != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          cVar3 = (char)arg1[1];
          if (local_40[0] == '\0') {
            local_31 = cVar3;
            if (local_48 != 0) {
              FUN_00d50b00();
            }
            *arg1 = local_48;
            if ((local_31 != '\0') && (lVar1 != 0)) {
              FUN_00d50b20();
            }
LAB_01d2936f:
            *(void*)(arg1 + 1) = 1;
            goto LAB_01d29373;
          }
          *arg1 = local_48;
          if ((cVar3 != '\0') && (lVar1 != 0)) {
            FUN_00d50b20();
          }
LAB_01d29390:
          *(void*)(arg1 + 1) = 1;
          local_40[0] = '\0';
        }
        if ((local_b8 != '\0') && (local_c0 != 0)) {
          FUN_00d50b20();
        }
      }
      FUN_00d50b20();
    }
    if (*arg1 != 0) {
      FUN_00d4efa0();
      local_b0 = *param_2;
      local_a8 = '\0';
      FUN_00c841b0();
      if (local_40[0] == '\0') {
        if (((local_48 != 0) && (FUN_00d50b00(), local_40[0] != '\0')) && (local_48 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_40[0] = '\0';
      }
      if ((local_a8 != '\0') && (local_b0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_68 != '\0') && (CONCAT71(uStack_6f,local_70) != 0)) {
        FUN_00d50b20();
      }
      plVar5 = *(int64_t **)(this_ptr + 0x60);
      if (plVar5 == (int64_t *)0x0) {
        plVar5 = (int64_t *)FUN_00cafdf0();
        if (plVar5 != (int64_t *)0x0) {
          FUN_00d50b00();
          goto LAB_01d29496;
        }
        uVar7 = CONCAT71((int7)((uint64_t)arg1 >> 8),1);
      }
      else {
        FUN_00d50b00();
LAB_01d29496:
        local_a0 = *arg1;
        local_98 = '\0';
        local_90 = local_48;
        local_88 = '\0';
        uVar4 = (**(code **)(*plVar5 + 0x438))();
        uVar7 = (uint64_t)uVar4;
        if ((local_88 != '\0') && (local_90 != 0)) {
          FUN_00d50b20();
        }
        if ((local_98 != '\0') && (local_a0 != 0)) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
      }
      if (local_48 != 0) {
        FUN_00d50b20();
      }
      goto LAB_01d29514;
    }
  }
  else {
    FUN_00d50b00();
    local_f0 = *arg1;
    local_e8 = '\0';
    local_e0 = *param_2;
    local_d8 = '\0';
    cVar3 = (**(code **)(*plVar5 + 0x90))(&local_e0,&local_f0);
    if ((local_d8 != '\0') && (local_e0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_e8 != '\0') && (local_f0 != 0)) {
      FUN_00d50b20();
    }
    if (this_ptr != 0) {
      FUN_00d50b20();
    }
    if (cVar3 != '\0') goto LAB_01d290e6;
  }
  uVar7 = 0;
LAB_01d29514:
  return uVar7 & 0xffffffff;
}



// ============================================================
// 01f0b230
// ============================================================
// Function: FUN_01f0b230
// Address: 01f0b230
// Size: 1142 bytes
// Class: GNMultipleValue
// String references:
//   "GNMultipleValue"

void FUN_01f0b230(void)

{
  int64_t lVar1;
  int64_t *plVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  int64_t *plVar6;
  int64_t **pplVar7;
  int64_t *this_ptr;
  byte bVar8;
  int64_t *plVar9;
  byte bVar10;
  byte bVar11;
  uint32_t uVar12;
  int64_t local_98;
  char local_90;
  int64_t *local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  int64_t *local_68;
  char local_60;
  int64_t *local_58;
  int64_t *local_50;
  char local_48;
  int64_t *local_40;
  char local_38;
  
  uVar12 = FUN_01ccad60();
  local_58 = local_40;
  if ((((local_38 == '\0') && (local_40 != (int64_t *)0x0)) &&
      (uVar12 = FUN_00d50b00(), local_38 != '\0')) && (local_40 != (int64_t *)0x0)) {
    uVar12 = FUN_00d50b20();
  }
  lVar1 = g_027057d0;
  local_38 = '\0';
  local_40 = (int64_t *)0x0;
  if (g_027057d0 != 0) {
    uVar12 = FUN_00d50b00();
  }
  local_98 = lVar1;
  local_90 = '\x01';
  uVar12 = (**(code **)(*this_ptr + 0x4c8))(uVar12,&local_98);
  plVar2 = local_50;
  if (local_50 == (int64_t *)0x0) {
    bVar8 = 1;
    bVar10 = 0;
    bVar11 = 0;
    plVar9 = (int64_t *)0x0;
  }
  else {
    if (local_48 == '\0') {
      uVar12 = FUN_00d50b00();
      local_40 = plVar2;
      local_38 = '\x01';
      if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
        uVar12 = FUN_00d50b20();
      }
    }
    else {
      local_40 = local_50;
      local_38 = '\x01';
      local_48 = '\0';
    }
    bVar8 = 0;
    bVar10 = 1;
    bVar11 = 1;
    plVar9 = plVar2;
  }
  if ((local_90 != '\0') && (bVar11 = bVar10, local_98 != 0)) {
    uVar12 = FUN_00d50b20();
  }
  if (plVar9 != (int64_t *)0x0) {
    local_88 = plVar2;
    local_80 = '\0';
    FUN_00c70bc0();
    uVar12 = FUN_01d65260();
    if ((local_80 != '\0') && (local_88 != (int64_t *)0x0)) {
      uVar12 = FUN_00d50b20();
    }
  }
  lVar1 = g_027e7c20;
  if (g_027e7c20 != 0) {
    uVar12 = FUN_00d50b00();
  }
  local_78 = lVar1;
  local_70 = '\x01';
  (**(code **)(*this_ptr + 0x4c8))(uVar12,&local_78);
  plVar6 = local_50;
  if (plVar2 == local_50) {
    plVar6 = plVar2;
    if ((bool)(bVar8 & plVar2 != (int64_t *)0x0)) {
      if (local_48 != '\0') goto LAB_01f0b433;
      FUN_00d50b00();
      goto LAB_01f0b45f;
    }
joined_r0x01f0b44b:
    if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    plVar9 = plVar6;
    if (local_48 == '\0') {
      if (local_50 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      local_40 = plVar6;
      if ((bool)(bVar11 & plVar2 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
LAB_01f0b45f:
      local_38 = '\x01';
      goto joined_r0x01f0b44b;
    }
    local_40 = local_50;
    if ((bool)(bVar11 & plVar2 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
LAB_01f0b433:
    local_38 = '\x01';
    local_48 = '\0';
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  if (plVar9 == (int64_t *)0x0) goto LAB_01f0b5cc;
  if ((g_0277a3a0 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
    g_026d3c38 = FUN_00d4fe50();
    g_026d3c20 = "GNMultipleValue";
    g_026d3c28 = 0x18;
    g_026d3c30 = FUN_00050c70;
    g_026d3c40 = 0;
    ram_00000000026d3c48 = 0;
    g_026d3c50 = 0;
    ram_00000000026d3c58 = 0;
    g_026d3c60 = 0;
    ram_00000000026d3c68 = 0;
    g_026d3c70 = 0;
    ram_00000000026d3c78 = 0;
    g_026d3c80 = 0;
    ram_00000000026d3c88 = 0;
    g_026d3c90 = 0;
    ram_00000000026d3c98 = 0;
    g_026d3ca0 = 0;
    ram_00000000026d3ca8 = 0;
    g_026d3cb0 = 0;
    ram_00000000026d3cb8 = 0;
    g_026d3cc0 = 0;
    ram_00000000026d3cc8 = 0;
    g_026d3cd0 = 0;
    ram_00000000026d3cd8 = 0;
    g_026d3ce0 = 0;
    ___cxa_guard_release();
  }
  (**(code **)(*plVar9 + 0x360))();
  pplVar7 = &local_40;
  cVar4 = FUN_00e85ea0();
  if (cVar4 == '\0') {
    pplVar7 = (int64_t **)&g_02802688;
  }
  cVar4 = *(char *)(pplVar7 + 1);
  if ((cVar4 == '\0') || (*pplVar7 == (int64_t *)0x0)) {
    if (*pplVar7 != (int64_t *)0x0) goto LAB_01f0b4f3;
  }
  else {
    FUN_00d50b00();
LAB_01f0b4f3:
    FUN_00e987e0();
    cVar3 = local_38;
    plVar9 = local_40;
    plVar2 = local_50;
    if (local_40 == local_50) {
      if ((local_38 == '\0') && (local_50 != (int64_t *)0x0)) {
        if (local_48 != '\0') goto LAB_01f0b53f;
        FUN_00d50b00();
        goto LAB_01f0b572;
      }
LAB_01f0b576:
      if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      if (local_48 == '\0') {
        if (local_50 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        local_40 = plVar2;
        if ((cVar3 != '\0') && (plVar9 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
LAB_01f0b572:
        local_38 = '\x01';
        goto LAB_01f0b576;
      }
      local_40 = local_50;
      if ((local_38 != '\0') && (plVar9 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
LAB_01f0b53f:
      local_38 = '\x01';
    }
    if (cVar4 != '\0') {
      FUN_00d50b20();
    }
  }
  plVar6 = local_40;
  local_68 = local_40;
  local_60 = '\0';
  FUN_00c70bc0();
  FUN_01d66ab0();
  if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
LAB_01f0b5cc:
  if ((local_38 != '\0') && (plVar6 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (local_58 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 01e0b690
// ============================================================
// Function: FUN_01e0b690
// Address: 01e0b690
// Size: 1296 bytes
// Class: GNMultipleValue

void FUN_01e0b690(void)

{
  int64_t *plVar1;
  uint8_t auVar2 [16];
  uint64_t uVar3;
  bool bVar4;
  bool bVar5;
  int64_t lVar6;
  char cVar7;
  int iVar8;
  int64_t *arg1;
  int64_t *this_ptr;
  uint32_t uVar9;
  float extraout_XMM0_Db;
  float extraout_XMM0_Db_00;
  uint32_t extraout_XMM0_Dc;
  uint32_t extraout_XMM0_Dd;
  float fVar11;
  uint8_t in_XMM1 [16];
  float fVar12;
  uint8_t auVar10 [16];
  int64_t local_88;
  char local_80;
  int64_t *local_40;
  char local_38;
  
  if (((*arg1 != 0) && (iVar8 = FUN_01d3a5a0(), iVar8 == 1)) &&
     (iVar8 = FUN_01d3b630(), iVar8 == 1)) {
    cVar7 = (**(code **)(*this_ptr + 0x9a0))();
    if (cVar7 == '\0') {
      return;
    }
    cVar7 = (**(code **)(*this_ptr + 0xb30))();
    if ((cVar7 != '\0') && (iVar8 = FUN_01d3b620(), iVar8 == 1)) {
      FUN_01d3abf0();
      uVar9 = FUN_01e466c0();
      cVar7 = (**(code **)(*this_ptr + 0xb30))();
      if (cVar7 != '\0') {
        uVar3 = FUN_01e3f820();
        fVar11 = in_XMM1._4_4_;
        fVar12 = in_XMM1._12_4_;
        auVar10._0_4_ = in_XMM1._0_4_ - fVar11;
        auVar10._4_4_ = fVar11 - fVar11;
        auVar10._8_4_ = in_XMM1._8_4_ - fVar12;
        auVar10._12_4_ = fVar12 - fVar12;
        auVar2._8_4_ = extraout_XMM0_Dc;
        auVar2._0_8_ = uVar3;
        auVar2._12_4_ = extraout_XMM0_Dd;
        blendps(auVar10,auVar2,2);
        cVar7 = FUN_00d05410(uVar9);
        if (cVar7 != '\0') {
                                                  (**(code **)(*this_ptr + 0xb38))();
          return;
        }
      }
    }
    if (((*(char *)((int64_t)this_ptr + 0x1e3) != '\0') && ((char)this_ptr[0x3c] != '\0')) &&
       (iVar8 = FUN_01d3b620(), iVar8 == 1)) {
      *(void*)((int64_t)this_ptr + 0x1e1) = 1;
      FUN_01d3abf0();
      FUN_01e466c0();
      (**(code **)(*this_ptr + 0x960))();
      if (local_80 == '\0') {
        if (local_88 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_80 = '\0';
      }
      FUN_00d8dab0();
      if (local_40 == (int64_t *)0x0) {
        bVar5 = true;
      }
      else if (local_38 == '\0') {
        FUN_00d50b00();
        bVar5 = false;
      }
      else {
        local_38 = '\0';
        bVar5 = false;
      }
      if (local_88 != 0) {
        FUN_00d50b20();
      }
      if ((local_80 != '\0') && (local_88 != 0)) {
        FUN_00d50b20();
      }
      bVar4 = false;
      do {
        (**(code **)(*this_ptr + 0x658))();
        plVar1 = (int64_t *)*arg1;
        if (plVar1 == local_40) {
          if (((char)arg1[1] == '\0') && (local_40 != (int64_t *)0x0)) {
            if (local_38 == '\0') {
              FUN_00d50b00();
              goto LAB_01e0ba90;
            }
LAB_01e0ba4f:
            *(void*)(arg1 + 1) = 1;
            local_38 = '\0';
          }
          lVar6 = *arg1;
        }
        else {
          lVar6 = arg1[1];
          if (local_38 != '\0') {
            *arg1 = (int64_t)local_40;
            if (((char)lVar6 != '\0') && (plVar1 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            goto LAB_01e0ba4f;
          }
          if (local_40 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
          *arg1 = (int64_t)local_40;
          if (((char)lVar6 != '\0') && (plVar1 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
LAB_01e0ba90:
          *(void*)(arg1 + 1) = 1;
          lVar6 = *arg1;
        }
        if (lVar6 == 0) {
          if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
LAB_01e0bb61:
          *(void*)((int64_t)this_ptr + 0x1e1) = 0;
          if (bVar4) {
            FUN_01d11e80();
          }
          if (bVar5 || local_40 == (int64_t *)0x0) {
            return;
          }
          FUN_00d50b20();
          return;
        }
        iVar8 = FUN_01d3a5a0();
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (iVar8 == 6) goto LAB_01e0bb61;
        FUN_01d3abf0();
        FUN_01e466c0();
        *(void*)((int64_t)this_ptr + 0x1e1) = 0;
        FUN_01e07060(extraout_XMM0_Db - extraout_XMM0_Db_00,
                     (int)(extraout_XMM0_Db - extraout_XMM0_Db_00));
        *(void*)((int64_t)this_ptr + 0x1e1) = 1;
        (**(code **)(*this_ptr + 0x620))();
        cVar7 = (**(code **)(*this_ptr + 0xa38))();
        bVar4 = true;
        if (cVar7 != '\0') {
          FUN_01d11e80();
          bVar4 = true;
        }
      } while( true );
    }
    FUN_01e42030();
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (local_40 != (int64_t *)0x0) {
      (**(code **)(*this_ptr + 0x640))();
      FUN_01e3f820();
      (**(code **)(*local_40 + 0x548))();
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_01d3abf0();
      FUN_01e466c0();
      cVar7 = FUN_00d05410();
      if (cVar7 != '\0') {
        if (this_ptr[0x40] != 0) {
          return;
        }
        cVar7 = FUN_01e42250();
        if (cVar7 == '\0') {
          return;
        }
        (**(code **)(*this_ptr + 0xac0))();
        return;
      }
    }
  }
  FUN_01d122b0();
  return;
}



// ============================================================
// 01d044d0
// ============================================================
// Function: FUN_01d044d0
// Address: 01d044d0
// Size: 1955 bytes
// Class: GNMultipleValue

void FUN_01d044d0(uint64_t param_1,uint32_t param_2)

{
  int64_t lVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  uint8_t uVar5;
  void*puVar6;
  int64_t *plVar7;
  void*arg1;
  int64_t *this_ptr;
  bool bVar8;
  uint32_t uVar9;
  uint32_t uVar10;
  uint32_t uVar11;
  int64_t local_70;
  char local_68;
  int64_t *local_60;
  char local_58;
  
  (**(code **)(*this_ptr + 0x640))();
  FUN_01e3f820();
  uVar9 = (**(code **)(*local_60 + 0x548))();
  uVar11 = param_2;
  if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(*this_ptr + 0x640))();
  uVar10 = FUN_01e3f820();
  uVar5 = (**(code **)(*this_ptr + 0x9a0))();
  (**(code **)(*local_60 + 0x3f0))(uVar10,uVar11,0,uVar5);
  if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((g_028b7ba8 == (int64_t *)0x0) || (g_028b7bb1 == '\0')) {
    FUN_00e8cb50();
    if (g_028b7ba8 == (int64_t *)0x0) {
      FUN_01cfc6a0(0);
      plVar7 = g_028b7ba8;
      if (g_028b7ba8 != local_60) {
        if (local_58 == '\0') {
          if (local_60 == (int64_t *)0x0) {
            plVar7 = (int64_t *)0x0;
          }
          else {
            FUN_00d50b00();
            plVar7 = local_60;
          }
        }
        else {
          local_58 = '\0';
          plVar7 = local_60;
        }
        bVar4 = g_028b7ba8 != (int64_t *)0x0;
        g_028b7ba8 = plVar7;
        if (bVar4) {
          FUN_00d50b20();
          plVar7 = local_60;
        }
      }
      if ((plVar7 != (int64_t *)0x0) && (g_028b7bb0 == '\0')) {
        g_028b7bb0 = '\x01';
        FUN_00e8cb90();
        plVar7 = local_60;
      }
      if ((local_58 != '\0') && (plVar7 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      g_028b7bb1 = '\x01';
      FUN_00e8cb70();
    }
    else {
      g_028b7bb1 = '\x01';
      FUN_00e8cb70();
    }
  }
  if ((g_028b7bb8 == (int64_t *)0x0) || (g_028b7bc1 == '\0')) {
    FUN_00e8cb50();
    if (g_028b7bb8 == (int64_t *)0x0) {
      FUN_01cfc6a0(g_02390124);
      plVar7 = g_028b7bb8;
      if (g_028b7bb8 != local_60) {
        if (local_58 == '\0') {
          if (local_60 == (int64_t *)0x0) {
            plVar7 = (int64_t *)0x0;
          }
          else {
            FUN_00d50b00();
            plVar7 = local_60;
          }
        }
        else {
          local_58 = '\0';
          plVar7 = local_60;
        }
        bVar4 = g_028b7bb8 != (int64_t *)0x0;
        g_028b7bb8 = plVar7;
        if (bVar4) {
          FUN_00d50b20();
          plVar7 = local_60;
        }
      }
      if ((plVar7 != (int64_t *)0x0) && (g_028b7bc0 == '\0')) {
        g_028b7bc0 = '\x01';
        FUN_00e8cb90();
        plVar7 = local_60;
      }
      if ((local_58 != '\0') && (plVar7 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      g_028b7bc1 = '\x01';
      FUN_00e8cb70();
    }
    else {
      g_028b7bc1 = '\x01';
      FUN_00e8cb70();
    }
  }
  FUN_01d39410();
  if (local_70 == 0) {
    bVar4 = true;
  }
  else if (local_68 == '\0') {
    FUN_00d50b00();
    bVar4 = false;
  }
  else {
    bVar4 = false;
  }
  bVar2 = true;
  FUN_01d39410();
  if (local_70 == 0) {
    bVar3 = true;
  }
  else if (local_68 == '\0') {
    FUN_00d50b00();
    bVar3 = false;
  }
  else {
    bVar3 = false;
  }
  plVar7 = g_028b7ba8;
  if (g_028b7ba8 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  FUN_01d488d0();
  if (plVar7 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  (**(code **)(*(int64_t *)*arg1 + 0x3a0))();
  plVar7 = g_028b7bb8;
  if (g_028b7bb8 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  FUN_01d488d0();
  if (plVar7 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  (**(code **)(*(int64_t *)*arg1 + 0x3a0))();
  lVar1 = this_ptr[0x39];
  if (lVar1 != 0) {
    FUN_00d50b00();
    FUN_01d488d0();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    goto LAB_01d04c0b;
  }
  if ((g_028b7bc8 == (void*)0x0) || (g_028b7bd1 == '\0')) {
    FUN_00e8cb50();
    if (g_028b7bc8 == (void*)0x0) {
      FUN_01cfc9f0(g_02390124,0);
      puVar6 = g_028b7bc8;
      if (g_028b7bc8 != &g_0267a730) {
        bVar2 = false;
        puVar6 = &g_0267a730;
        bVar8 = g_028b7bc8 != (void*)0x0;
        g_028b7bc8 = puVar6;
        if (bVar8) {
          bVar2 = false;
          g_028b7bc8 = &g_0267a730;
          FUN_00d50b20();
          puVar6 = &g_0267a730;
        }
      }
      if ((puVar6 != (void*)0x0) && (g_028b7bd0 == '\0')) {
        g_028b7bd0 = '\x01';
        FUN_00e8cb90();
        puVar6 = &g_0267a730;
      }
      if ((bVar2) && (puVar6 != (void*)0x0)) {
        FUN_00d50b20();
      }
      g_028b7bd1 = '\x01';
      FUN_00e8cb70();
    }
    else {
      g_028b7bd1 = '\x01';
      FUN_00e8cb70();
    }
    if (g_028b7bc8 != (void*)0x0) goto LAB_01d04bdb;
    puVar6 = (void*)0x0;
  }
  else {
LAB_01d04bdb:
    puVar6 = g_028b7bc8;
    FUN_00d50b00();
  }
  FUN_01d488d0();
  if (puVar6 != (void*)0x0) {
    FUN_00d50b20();
  }
LAB_01d04c0b:
  (**(code **)(*(int64_t *)*arg1 + 0x3b0))(uVar9,param_2);
  if (!bVar3 && local_70 != 0) {
    FUN_00d50b20();
  }
  if (!bVar4 && local_70 != 0) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 01d73760
// ============================================================
// Function: FUN_01d73760
// Address: 01d73760
// Size: 1464 bytes
// Class: GNMultipleValue
// String references:
//   ".%@"
//   "%@%I"

void FUN_01d73760(void)

{
  int64_t lVar1;
  void*puVar2;
  char cVar3;
  int iVar4;
  int64_t *plVar5;
  int64_t *this_ptr;
  int64_t local_110;
  char local_108;
  int local_100;
  int local_fc;
  int64_t local_f8;
  int64_t *local_f0;
  char local_e8;
  int64_t local_e0;
  char local_d8;
  int64_t *local_d0;
  char local_c8;
  void*local_c0;
  char local_b8;
  int64_t local_b0;
  char local_a8;
  int64_t local_a0;
  char local_98;
  int64_t local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  void*local_70;
  uint local_68;
  int64_t local_60;
  char local_58;
  int local_50;
  int64_t local_48;
  char local_40;
  
  FUN_00d4efa0();
  FUN_00c82bb0();
  local_c0 = local_70;
  local_b8 = 0;
  if ((char)local_68 == '\0') {
    if (local_70 != (void*)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_68 = local_68 & 0xffffff00;
  }
  local_b8 = '\x01';
  FUN_00e3f850();
  if ((local_b8 != '\0') && (local_c0 != (void*)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_68 != '\0') && (local_70 != (void*)0x0)) {
    FUN_00d50b20();
  }
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(*this_ptr + 0xa18))();
  puVar2 = local_70;
  if (((char)local_68 != '\0') && (local_70 != (void*)0x0)) {
    FUN_00d50b20();
  }
  if (puVar2 != (void*)0x0) {
    (**(code **)(*this_ptr + 0xa18))();
    local_60 = local_80;
    local_68 = 1;
    local_70 = &g_024c5048;
    local_58 = 0;
    if (local_80 != 0) {
      FUN_00d50b00();
    }
    local_58 = '\x01';
    FUN_00d8cb40();
    local_b0 = local_48;
    local_a8 = 0;
    if (local_40 == '\0') {
      if (local_48 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_40 = '\0';
    }
    local_a8 = '\x01';
    FUN_00e3f850();
    if ((local_a8 != '\0') && (local_b0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    local_70 = &g_024c5048;
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
  }
  if ((this_ptr[10] != 0) && (iVar4 = FUN_00d8c7a0(), iVar4 != 0)) {
    local_e8 = 0;
    (**(code **)(this_ptr[2] + 0x10))();
    FUN_00d50b00();
    local_110 = g_027f0e20;
    local_e8 = '\x01';
    local_f0 = this_ptr + 2;
    if (g_027f0e20 != 0) {
      FUN_00d50b00();
    }
    local_108 = '\x01';
    local_d8 = 0;
    lVar1 = this_ptr[10];
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    local_d8 = '\x01';
    local_e0 = lVar1;
    FUN_00e3fb50(&local_e0,&local_110);
    if ((local_d8 != '\0') && (local_e0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_108 != '\0') && (local_110 != 0)) {
      FUN_00d50b20();
    }
    if ((local_e8 != '\0') && (local_f0 != (int64_t *)0x0)) {
      (**(code **)(*local_f0 + 0x10))();
      FUN_00d50b20();
    }
  }
  cVar3 = FUN_01d10140();
  if ((cVar3 != '\0') && (local_fc = FUN_01d6fde0(), 0 < local_fc)) {
    plVar5 = this_ptr + 2;
    iVar4 = 0;
    do {
      local_c8 = 0;
      (**(code **)(*plVar5 + 0x10))();
      FUN_00d50b00();
      lVar1 = g_027f0ae8;
      local_c8 = '\x01';
      local_f8 = g_027f0ae8;
      local_d0 = plVar5;
      if (g_027f0ae8 == 0) {
        local_68 = 2;
      }
      else {
        FUN_00d50b00();
        local_68 = 2;
        local_70 = &g_024c5048;
        local_58 = 0;
        FUN_00d50b00();
      }
      local_100 = iVar4 + 1;
      local_60 = lVar1;
      local_58 = '\x01';
      local_70 = (void*)&g_025df2a0;
      local_50 = local_100;
      FUN_00d8cb40(local_100,&local_70);
      local_a0 = local_48;
      local_98 = 0;
      if (local_40 == '\0') {
        if (local_48 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_40 = '\0';
      }
      local_98 = '\x01';
      FUN_01d70140();
      local_90 = local_80;
      local_88 = 0;
      if (local_78 == '\0') {
        if (local_80 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_78 = '\0';
      }
      lVar1 = local_f8;
      local_88 = '\x01';
      FUN_00e3fb50(&local_90,&local_a0);
      if ((local_88 != '\0') && (local_90 != 0)) {
        FUN_00d50b20();
      }
      if ((local_78 != '\0') && (local_80 != 0)) {
        FUN_00d50b20();
      }
      if ((local_98 != '\0') && (local_a0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      local_70 = &g_024c5048;
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      if ((local_c8 != '\0') && (local_d0 != (int64_t *)0x0)) {
        (**(code **)(*local_d0 + 0x10))();
        FUN_00d50b20();
      }
      iVar4 = local_100;
    } while (local_fc != local_100);
  }
  (**(code **)(*this_ptr + 0xa18))();
  puVar2 = local_70;
  if (((char)local_68 != '\0') && (local_70 != (void*)0x0)) {
    FUN_00d50b20();
  }
  if (puVar2 != (void*)0x0) {
    FUN_00e3faa0();
  }
  FUN_00e3faa0();
  return;
}



// ============================================================
// 01cf0cb0
// ============================================================
// Function: FUN_01cf0cb0
// Address: 01cf0cb0
// Size: 1257 bytes
// Class: GNMultipleValue
// String references:
//   "GNMultipleValue"
//   "GNString"

void FUN_01cf0cb0(void)

{
  int64_t lVar1;
  int64_t lVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  int64_t *plVar6;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t *local_90;
  char local_88;
  int64_t *local_48;
  char local_40;
  
  plVar6 = (int64_t *)*arg1;
  if ((g_0277a3a0 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
    g_026d3c38 = FUN_00d4fe50();
    g_026d3c20 = "GNMultipleValue";
    g_026d3c28 = 0x18;
    g_026d3c30 = FUN_00050c70;
    g_026d3c40 = 0;
    ram_00000000026d3c48 = 0;
    g_026d3c50 = 0;
    ram_00000000026d3c58 = 0;
    g_026d3c60 = 0;
    ram_00000000026d3c68 = 0;
    g_026d3c70 = 0;
    ram_00000000026d3c78 = 0;
    g_026d3c80 = 0;
    ram_00000000026d3c88 = 0;
    g_026d3c90 = 0;
    ram_00000000026d3c98 = 0;
    g_026d3ca0 = 0;
    ram_00000000026d3ca8 = 0;
    g_026d3cb0 = 0;
    ram_00000000026d3cb8 = 0;
    g_026d3cc0 = 0;
    ram_00000000026d3cc8 = 0;
    g_026d3cd0 = 0;
    ram_00000000026d3cd8 = 0;
    g_026d3ce0 = 0;
    ___cxa_guard_release();
  }
  if (plVar6 == (int64_t *)0x0) {
LAB_01cf0d00:
    plVar6 = &g_02802688;
  }
  else {
    (**(code **)(*plVar6 + 0x360))();
    cVar3 = FUN_00e85ea0();
    plVar6 = arg1;
    if (cVar3 == '\0') goto LAB_01cf0d00;
  }
  cVar3 = (char)plVar6[1];
  if ((cVar3 == '\0') || (*plVar6 == 0)) {
    if (*plVar6 != 0) goto LAB_01cf0d2c;
  }
  else {
    FUN_00d50b00();
LAB_01cf0d2c:
    FUN_00e987e0();
    if (local_40 == '\0') {
      if (local_48 == (int64_t *)0x0) goto LAB_01cf0d98;
      FUN_00d50b00();
    }
    else if (local_48 == (int64_t *)0x0) {
LAB_01cf0d98:
      FUN_00d46530();
      if (local_40 == '\0') {
        if (local_48 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_40 = '\0';
      }
      cVar4 = FUN_00e98920();
      if (local_48 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (cVar4 == '\0') {
        (**(code **)(*this_ptr + 0x918))();
      }
      else {
        (**(code **)(*this_ptr + 0x918))();
      }
      if (cVar3 == '\0') {
        return;
      }
      FUN_00d50b20();
      return;
    }
    plVar6 = (int64_t *)*arg1;
    lVar1 = arg1[1];
    if (plVar6 == local_48) {
      if ((char)lVar1 == '\0') {
        FUN_00d50b00();
        goto LAB_01cf0dd3;
      }
    }
    else {
      FUN_00d50b00();
      *arg1 = (int64_t)local_48;
      if (((char)lVar1 != '\0') && (plVar6 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
LAB_01cf0dd3:
      *(void*)(arg1 + 1) = 1;
    }
    FUN_00d50b20();
    if (cVar3 != '\0') {
      FUN_00d50b20();
    }
  }
  plVar6 = (int64_t *)*arg1;
  if (plVar6 == (int64_t *)0x0) {
    (**(code **)(*this_ptr + 0x918))();
    return;
  }
  FUN_00053ac0();
  (**(code **)(*plVar6 + 0x360))();
  cVar3 = FUN_00e85ea0();
  plVar6 = arg1;
  if (cVar3 == '\0') {
    plVar6 = &g_02802688;
  }
  if (*plVar6 != 0) {
    FUN_00d45870();
    (**(code **)(*this_ptr + 0x918))();
    return;
  }
  plVar6 = (int64_t *)*arg1;
  if ((g_026fd0c0 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
    g_026d5e58 = FUN_00d4fe50();
    g_026d5e40 = "GNString";
    g_026d5e48 = 0x40;
    g_026d5e50 = FUN_0005d920;
    g_026d5e60 = 0;
    ram_00000000026d5e68 = 0;
    g_026d5e70 = 0;
    ram_00000000026d5e78 = 0;
    g_026d5e80 = 0;
    ram_00000000026d5e88 = 0;
    g_026d5e90 = 0;
    ram_00000000026d5e98 = 0;
    g_026d5ea0 = 0;
    ram_00000000026d5ea8 = 0;
    g_026d5eb0 = 0;
    ram_00000000026d5eb8 = 0;
    g_026d5ec0 = 0;
    ram_00000000026d5ec8 = 0;
    g_026d5ed0 = 0;
    ram_00000000026d5ed8 = 0;
    g_026d5ee0 = 0;
    ram_00000000026d5ee8 = 0;
    g_026d5ef0 = 0;
    ram_00000000026d5ef8 = 0;
    g_026d5f00 = 0;
    ___cxa_guard_release();
  }
  if (plVar6 != (int64_t *)0x0) {
    (**(code **)(*plVar6 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 != '\0') goto LAB_01cf0e9f;
  }
  arg1 = &g_02802688;
LAB_01cf0e9f:
  if (*arg1 == 0) {
    (**(code **)(*this_ptr + 0x918))();
  }
  else {
    FUN_00d99d60();
    lVar1 = g_0277ddb8;
    if (g_0277ddb8 != 0) {
      FUN_00d50b00();
    }
    cVar3 = (**(code **)(*local_48 + 0x50))();
    if (cVar3 == '\0') {
      FUN_00d99d60();
      lVar2 = g_027eeee8;
      if (g_027eeee8 != 0) {
        FUN_00d50b00();
      }
      (**(code **)(*local_90 + 0x50))();
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    (**(code **)(*this_ptr + 0x918))();
  }
  return;
}



// ============================================================
// 01d75c30
// ============================================================
// Function: FUN_01d75c30
// Address: 01d75c30
// Size: 1275 bytes
// Class: GNMultipleValue

void FUN_01d75c30(uint64_t param_1)

{
  void*puVar1;
  code *pcVar2;
  int64_t lVar3;
  void*puVar4;
  int64_t *plVar5;
  int64_t this_ptr;
  uint8_t auVar6 [16];
  int64_t local_a0;
  char local_98;
  int64_t local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  int64_t *local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  local_98 = '\0';
  local_a0 = 0;
  FUN_01e56280(param_1,&local_a0);
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  auVar6 = insertps(g_024209f0,
                    *(void*)
                     (&g_02420a40 + (uint64_t)(*(char *)(this_ptr + 0x94) == '\0') * 4),0x10);
  FUN_01e5bc80(auVar6._0_8_);
  FUN_01e5c680();
  FUN_01e5c730();
  local_88 = '\0';
  local_90 = 0;
  FUN_01e5bfa0();
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  puVar4 = (void*)FUN_00e8fc40();
  FUN_0006daf0();
  *(void*)(puVar4 + 0x27) = 0;
  puVar4[0x2e] = 0;
  *(void*)(puVar4 + 0x2f) = 0;
  puVar4[0x30] = 0;
  *(void*)(puVar4 + 0x31) = 0;
  puVar4[0x28] = 0;
  puVar4[0x29] = 0;
  *(void*)(puVar4 + 0x2a) = 0;
  puVar4[0x2b] = 0;
  puVar4[0x2c] = 0;
  *(void*)((int64_t)puVar4 + 0x165) = 0;
  *(void*)((int64_t)puVar4 + 0x18c) = 0;
  *(void*)((int64_t)puVar4 + 0x194) = 0;
  *(void*)((int64_t)puVar4 + 0x199) = 0;
  puVar4[0x35] = 0;
  puVar4[0x36] = 0;
  puVar4[0x37] = 0;
  puVar4[0x38] = 0;
  *puVar4 = &g_02683800;
  puVar4[2] = &g_026842c8;
  puVar4[0x39] = 0;
  puVar4[0x3a] = 0;
  pcVar2 = g_02683818;
  (*g_02683818)();
  puVar1 = *(void**)(this_ptr + 0x70);
  if (puVar1 == puVar4) {
    FUN_00d50b20();
  }
  else {
    *(void**)(this_ptr + 0x70) = puVar4;
    if (puVar1 != (void*)0x0) {
      FUN_00d50b20();
    }
  }
  (**(code **)(**(int64_t **)(this_ptr + 0x70) + 0x4d0))();
  (**(code **)(**(int64_t **)(this_ptr + 0x70) + 0x9c8))();
  local_38 = 0;
  local_40 = *(int64_t *)(this_ptr + 0x70);
  if (local_40 != 0) {
    FUN_00d50b00();
  }
  local_38 = '\x01';
  FUN_01e5c8b0();
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  lVar3 = g_027f0cf8;
  plVar5 = *(int64_t **)(this_ptr + 0x70);
  if (g_027f0cf8 != 0) {
    FUN_00d50b00();
  }
  local_80 = lVar3;
  local_78 = '\x01';
  (**(code **)(*plVar5 + 0x958))();
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  plVar5 = (int64_t *)FUN_00e8fc40();
  FUN_0006daf0();
  *(void*)(plVar5 + 0x27) = 0;
  plVar5[0x2e] = 0;
  *(void*)(plVar5 + 0x2f) = 0;
  plVar5[0x30] = 0;
  *(void*)(plVar5 + 0x31) = 0;
  plVar5[0x28] = 0;
  plVar5[0x29] = 0;
  *(void*)(plVar5 + 0x2a) = 0;
  plVar5[0x2b] = 0;
  plVar5[0x2c] = 0;
  *(void*)((int64_t)plVar5 + 0x165) = 0;
  *(void*)((int64_t)plVar5 + 0x18c) = 0;
  *(void*)((int64_t)plVar5 + 0x194) = 0;
  *(void*)((int64_t)plVar5 + 0x199) = 0;
  plVar5[0x35] = 0;
  plVar5[0x36] = 0;
  plVar5[0x37] = 0;
  plVar5[0x38] = 0;
  *plVar5 = (int64_t)&g_02683800;
  plVar5[2] = (int64_t)&g_026842c8;
  plVar5[0x39] = 0;
  plVar5[0x3a] = 0;
  (*pcVar2)();
  (**(code **)(*plVar5 + 0x4d0))();
  local_68 = '\0';
  local_70 = plVar5;
  FUN_01e5c8b0();
  if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  lVar3 = g_027f0d00;
  if (g_027f0d00 != 0) {
    FUN_00d50b00();
  }
  local_60 = lVar3;
  local_58 = '\x01';
  (**(code **)(*plVar5 + 0x958))();
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  puVar4 = (void*)FUN_00e8fc40();
  FUN_0006daf0();
  *(void*)(puVar4 + 0x27) = 0;
  puVar4[0x2e] = 0;
  *(void*)(puVar4 + 0x2f) = 0;
  puVar4[0x30] = 0;
  *(void*)(puVar4 + 0x31) = 0;
  puVar4[0x28] = 0;
  puVar4[0x29] = 0;
  *(void*)(puVar4 + 0x2a) = 0;
  puVar4[0x2b] = 0;
  puVar4[0x2c] = 0;
  *(void*)((int64_t)puVar4 + 0x165) = 0;
  *(void*)((int64_t)puVar4 + 0x18c) = 0;
  *(void*)((int64_t)puVar4 + 0x194) = 0;
  *(void*)((int64_t)puVar4 + 0x199) = 0;
  puVar4[0x35] = 0;
  puVar4[0x36] = 0;
  puVar4[0x37] = 0;
  puVar4[0x38] = 0;
  *puVar4 = &g_02686ea8;
  puVar4[2] = &g_02687970;
  *(void*)(puVar4 + 0x39) = 0;
  (*g_02686ec0)();
  puVar1 = *(void**)(this_ptr + 0x78);
  if (puVar1 == puVar4) {
    FUN_00d50b20();
  }
  else {
    *(void**)(this_ptr + 0x78) = puVar4;
    if (puVar1 != (void*)0x0) {
      FUN_00d50b20();
    }
  }
  (**(code **)(**(int64_t **)(this_ptr + 0x78) + 0x4d0))();
  local_48 = 0;
  local_50 = *(int64_t *)(this_ptr + 0x78);
  if (local_50 != 0) {
    FUN_00d50b00();
  }
  local_48 = '\x01';
  FUN_01e5c8b0();
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(**(int64_t **)(this_ptr + 0x78) + 0x938))();
  (**(code **)(**(int64_t **)(this_ptr + 0x78) + 0x948))();
  (**(code **)(**(int64_t **)(this_ptr + 0x78) + 0x918))();
  FUN_00d50b20();
  return;
}



// ============================================================
// 01d78c50
// ============================================================
// Function: FUN_01d78c50
// Address: 01d78c50
// Size: 1520 bytes
// Class: GNMultipleValue

void FUN_01d78c50(uint64_t param_1,uint64_t param_2)

{
  int64_t lVar1;
  int64_t lVar2;
  int iVar3;
  int64_t *this_ptr;
  int64_t lVar4;
  bool bVar5;
  uint64_t extraout_XMM0_Qb;
  float fVar6;
  float fVar8;
  float in_XMM1_Dc;
  float in_XMM1_Dd;
  uint8_t auVar7 [16];
  uint8_t local_118 [16];
  int64_t local_f8;
  char local_f0;
  int64_t local_e8;
  char local_e0;
  int64_t local_d8;
  char local_d0;
  int64_t local_c8;
  char local_c0;
  int64_t local_b8;
  char local_b0;
  int64_t local_a8;
  int64_t local_60;
  char local_58;
  int64_t *local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  fVar8 = (float)((uint64_t)param_2 >> 0x20);
  fVar6 = (float)param_2;
  FUN_00d403d0();
  lVar1 = g_027f0e10;
  if (g_027f0e10 != 0) {
    FUN_00d50b00();
  }
  if (this_ptr != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  local_f8 = 0;
  local_f0 = '\0';
  FUN_00d40470(&local_f8,&stack0xffffffffffffff60,3,3);
  if ((local_f0 != '\0') && (local_f8 != 0)) {
    FUN_00d50b20();
  }
  if (this_ptr != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  lVar1 = this_ptr[0x2c];
  if ((lVar1 != 0) && (this_ptr[0x44] != 0)) {
    FUN_00d50b00();
    FUN_01d62b10();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  if (this_ptr[0x44] == 0) goto LAB_01d79201;
  local_118._0_8_ = FUN_01e3f820();
  local_118._8_8_ = extraout_XMM0_Qb;
  FUN_01e3f820();
  auVar7._0_4_ = fVar6 + (float)local_118._0_8_;
  auVar7._4_4_ = fVar8 + (float)((uint64_t)local_118._0_8_ >> 0x20);
  auVar7._8_4_ = in_XMM1_Dc + (float)extraout_XMM0_Qb;
  auVar7._12_4_ = in_XMM1_Dd + (float)((uint64_t)extraout_XMM0_Qb >> 0x20);
  blendps(auVar7,local_118,0xd);
  FUN_01e46ed0();
  FUN_01d3a560();
  lVar1 = local_40;
  if ((((local_38 == '\0') && (local_40 != 0)) && (FUN_00d50b00(), local_38 != '\0')) &&
     (local_40 != 0)) {
    FUN_00d50b20();
  }
  local_a8 = lVar1;
  FUN_01e49570();
  FUN_01f514b0();
  lVar4 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((lVar1 != 0) &&
     (((iVar3 = FUN_01d3a5a0(), iVar3 == 6 || (iVar3 = FUN_01d3a5a0(), iVar3 == 1)) ||
      (iVar3 = FUN_01d3a5a0(), iVar3 == 5)))) {
    FUN_01e49570();
    FUN_01d3abf0();
    FUN_01f514b0();
    lVar1 = local_40;
    if (lVar4 == local_40) {
LAB_01d78f56:
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
        bVar5 = lVar4 != 0;
        lVar4 = lVar1;
        if (bVar5) {
          FUN_00d50b20();
        }
        goto LAB_01d78f56;
      }
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      local_38 = '\0';
      lVar4 = lVar1;
    }
    if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  FUN_00d50b00();
  local_e0 = '\0';
  local_e8 = lVar4;
  FUN_01edf1a0(&local_e8,2);
  lVar1 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_e0 != '\0') && (local_e8 != 0)) {
    FUN_00d50b20();
  }
  if (this_ptr != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  FUN_00d50b00();
  FUN_01e3f820();
  local_d0 = '\0';
  local_d8 = 0;
  (**(code **)(*this_ptr + 0x640))();
  (**(code **)(*local_50 + 0x370))();
  local_60 = local_40;
  local_58 = 0;
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  local_58 = '\x01';
  auVar7 = blendps(local_118,ZEXT816(0),2);
  local_c0 = '\0';
  local_c8 = 0;
  local_b8 = lVar1;
  local_b0 = '\0';
  FUN_01d5efd0(&local_d8,auVar7._0_8_,&local_60,0xff);
  lVar2 = local_a8;
  if ((local_b0 != '\0') && (local_b8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_c0 != '\0') && (local_c8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_d0 != '\0') && (local_d8 != 0)) {
    FUN_00d50b20();
  }
  if (this_ptr != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
LAB_01d79201:
  if ((this_ptr[0x2c] != 0) && (this_ptr[0x44] != 0)) {
    FUN_01d62b80();
  }
  return;
}



// ============================================================
// 01edf8c0
// ============================================================
// Function: FUN_01edf8c0
// Address: 01edf8c0
// Size: 1223 bytes
// Class: GNMultipleValue

uint64_t FUN_01edf8c0(uint64_t param_1,char param_2)

{
  uint3 uVar1;
  int64_t lVar2;
  char cVar3;
  uint32_t uVar4;
  int iVar5;
  int iVar6;
  uint32_t uVar7;
  uint uVar8;
  void*puVar9;
  uint64_t uVar10;
  int64_t *this_ptr;
  uint32_t extraout_XMM0_Da;
  int64_t *local_40;
  char local_38;
  
  FUN_01cae990();
  lVar2 = g_027fea38;
  if (g_027fea38 != 0) {
    FUN_00d50b00();
  }
  uVar4 = (**(code **)(*local_40 + 0x50))();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((char)uVar4 != '\0') {
    uVar10 = CONCAT71((uint7)(uint3)((uint)uVar4 >> 8),1);
    if (param_2 != '\0') {
      uVar4 = FUN_01caea00();
      *(void*)(this_ptr + 0x29) = uVar4;
      (**(code **)(*this_ptr + 0x620))();
    }
    goto LAB_01edfb0c;
  }
  FUN_01cae990();
  lVar2 = g_027fea40;
  if (g_027fea40 != 0) {
    FUN_00d50b00();
  }
  cVar3 = (**(code **)(*local_40 + 0x50))();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar3 == '\0') {
    FUN_01cae990();
    lVar2 = g_027fea48;
    if (g_027fea48 != 0) {
      FUN_00d50b00();
    }
    uVar4 = (**(code **)(*local_40 + 0x50))();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((char)uVar4 == '\0') {
      FUN_01cae990();
      lVar2 = g_027fea50;
      if (g_027fea50 != 0) {
        FUN_00d50b00();
      }
      uVar4 = (**(code **)(*local_40 + 0x50))();
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((char)uVar4 == '\0') {
        FUN_01cae990();
        lVar2 = g_027fea58;
        if (g_027fea58 != 0) {
          FUN_00d50b00();
        }
        uVar7 = (**(code **)(*local_40 + 0x50))();
        uVar4 = extraout_XMM0_Da;
        if (lVar2 != 0) {
          uVar4 = FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          uVar4 = FUN_00d50b20();
        }
        if ((char)uVar7 == '\0') {
          uVar8 = FUN_01e47f50(uVar4,param_2);
          uVar10 = (uint64_t)uVar8;
        }
        else {
          uVar10 = CONCAT71((uint7)(uint3)((uint)uVar7 >> 8),1);
          if (param_2 != '\0') {
            puVar9 = (void*)FUN_00e8fc40();
            FUN_00d4ff40();
            *puVar9 = &g_026a45b0;
            puVar9[3] = 0;
            puVar9[4] = 0;
            *(void*)((int64_t)puVar9 + 0x24) = 0;
            *(void*)((int64_t)puVar9 + 0x2c) = 0;
            (*g_026a45c8)();
            FUN_01e6a310();
            FUN_00d50b20();
          }
        }
      }
      else {
        uVar10 = (uint64_t)CONCAT31((int3)((uint)uVar4 >> 8),this_ptr[0x27] != 0);
        if ((this_ptr[0x27] != 0) && (param_2 != '\0')) {
          lVar2 = this_ptr[0x28];
          puVar9 = (void*)FUN_00e8fc40();
          FUN_00d4ff40();
          *puVar9 = &g_026a45b0;
          puVar9[3] = 0;
          puVar9[4] = 0;
          *(void*)((int64_t)puVar9 + 0x24) = 0;
          *(void*)((int64_t)puVar9 + 0x2c) = 0;
          (*g_026a45c8)();
          FUN_01e6a2b0();
          (**(code **)(*this_ptr + 0x708))();
          FUN_01e69de0();
          if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          iVar6 = FUN_01e6a390();
          if (iVar6 == 0) {
            FUN_00d50b00();
            FUN_01e6a4a0();
            if (this_ptr != (int64_t *)0x0) {
              FUN_00d50b20();
            }
          }
          *(int *)(this_ptr + 0x28) = (int)lVar2;
          uVar10 = CONCAT71((int7)((uint64_t)local_40 >> 8),1);
          FUN_00d50b20();
        }
      }
      goto LAB_01edfb0c;
    }
    if (this_ptr[0x27] != 0) {
      uVar1 = (uint3)((uint)uVar4 >> 8);
      uVar10 = (uint64_t)CONCAT31(uVar1,0 < (int)this_ptr[0x28]);
      if ((0 < (int)this_ptr[0x28]) && (param_2 != '\0')) {
        FUN_01ee0160();
        uVar10 = CONCAT71((uint7)uVar1,1);
      }
      goto LAB_01edfb0c;
    }
  }
  else if (this_ptr[0x27] != 0) {
    iVar6 = (int)this_ptr[0x28];
    iVar5 = FUN_01eddbf0();
    uVar1 = (uint3)((uint)iVar6 >> 8);
    uVar10 = (uint64_t)CONCAT31(uVar1,iVar6 < iVar5 + -1);
    if ((((iVar6 < iVar5 + -1) && (param_2 != '\0')) &&
        (uVar10 = CONCAT71((uint7)uVar1,1), this_ptr[0x27] != 0)) &&
       (lVar2 = this_ptr[0x28], iVar6 = FUN_01eddbf0(), (int)lVar2 < iVar6 + -1)) {
      FUN_01ee0160();
    }
    goto LAB_01edfb0c;
  }
  uVar10 = 0;
LAB_01edfb0c:
  return uVar10 & 0xffffffff;
}



// ============================================================
// 01d7b1b0
// ============================================================
// Function: FUN_01d7b1b0
// Address: 01d7b1b0
// Size: 1272 bytes
// Class: GNMultipleValue
// String references:
//   ".%@"

void FUN_01d7b1b0(void)

{
  int64_t lVar1;
  void*puVar2;
  char cVar3;
  int iVar4;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t local_110;
  char local_108;
  int64_t local_100;
  char local_f8;
  int64_t local_f0;
  char local_e8;
  int64_t local_e0;
  char local_d8;
  int64_t local_d0;
  char local_c8;
  int64_t *local_c0;
  char local_b8;
  int64_t local_b0;
  char local_a8;
  int64_t *local_a0;
  char local_98;
  void*local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  void*local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  void*local_50;
  uint local_48;
  int64_t local_40;
  char local_38;
  
  FUN_00d4efa0();
  FUN_00c82bb0();
  local_90 = local_50;
  local_88 = 0;
  if ((char)local_48 == '\0') {
    if (local_50 != (void*)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_48 = local_48 & 0xffffff00;
  }
  local_88 = '\x01';
  FUN_00e3f850();
  if ((local_88 != '\0') && (local_90 != (void*)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_48 != '\0') && (local_50 != (void*)0x0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(*this_ptr + 0xa18))();
  puVar2 = local_50;
  if (((char)local_48 != '\0') && (local_50 != (void*)0x0)) {
    FUN_00d50b20();
  }
  if (puVar2 != (void*)0x0) {
    (**(code **)(*this_ptr + 0xa18))();
    local_48 = 1;
    local_50 = &g_024c5048;
    local_38 = 0;
    if (local_110 != 0) {
      FUN_00d50b00();
    }
    local_40 = local_110;
    local_38 = '\x01';
    FUN_00d8cb40();
    local_80 = local_60;
    local_78 = 0;
    if (local_58 == '\0') {
      if (local_60 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_58 = '\0';
    }
    local_78 = '\x01';
    FUN_00e3f850();
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    local_50 = &g_024c5048;
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((local_108 != '\0') && (local_110 != 0)) {
      FUN_00d50b20();
    }
  }
  if ((this_ptr[10] != 0) && (iVar4 = FUN_00d8c7a0(), iVar4 != 0)) {
    local_b8 = 0;
    (**(code **)(this_ptr[2] + 0x10))();
    FUN_00d50b00();
    local_100 = g_027f0e20;
    local_b8 = '\x01';
    local_c0 = this_ptr + 2;
    if (g_027f0e20 != 0) {
      FUN_00d50b00();
    }
    local_f8 = '\x01';
    local_a8 = 0;
    lVar1 = this_ptr[10];
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    local_a8 = '\x01';
    local_b0 = lVar1;
    FUN_00e3fb50(&local_b0,&local_100);
    if ((local_a8 != '\0') && (local_b0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_f8 != '\0') && (local_100 != 0)) {
      FUN_00d50b20();
    }
    if ((local_b8 != '\0') && (local_c0 != (int64_t *)0x0)) {
      (**(code **)(*local_c0 + 0x10))();
      FUN_00d50b20();
    }
  }
  cVar3 = FUN_01d10140();
  if (cVar3 != '\0') {
    local_98 = 0;
    (**(code **)(this_ptr[2] + 0x10))();
    FUN_00d50b00();
    local_f0 = g_027f2f40;
    local_98 = '\x01';
    local_a0 = this_ptr + 2;
    if (g_027f2f40 != 0) {
      FUN_00d50b00();
    }
    local_e8 = '\x01';
    (**(code **)(*this_ptr + 0x960))();
    local_70 = local_50;
    local_68 = 0;
    if ((char)local_48 == '\0') {
      if (local_50 != (void*)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_48 = local_48 & 0xffffff00;
    }
    local_68 = '\x01';
    FUN_00e3fb50(&local_70,&local_f0);
    if ((local_68 != '\0') && (local_70 != (void*)0x0)) {
      FUN_00d50b20();
    }
    if (((char)local_48 != '\0') && (local_50 != (void*)0x0)) {
      FUN_00d50b20();
    }
    if ((local_e8 != '\0') && (local_f0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_98 != '\0') && (local_a0 != (int64_t *)0x0)) {
      (**(code **)(*local_a0 + 0x10))();
      FUN_00d50b20();
    }
  }
  lVar1 = g_02774da0;
  if (g_02774da0 != 0) {
    FUN_00d50b00();
  }
  local_e0 = lVar1;
  local_d8 = '\x01';
  FUN_00e3f850();
  if ((local_d8 != '\0') && (local_e0 != 0)) {
    FUN_00d50b20();
  }
  if ((int64_t *)this_ptr[0x44] != (int64_t *)0x0) {
    local_d0 = *arg1;
    local_c8 = '\0';
    (**(code **)(*(int64_t *)this_ptr[0x44] + 0x370))();
    if ((local_c8 != '\0') && (local_d0 != 0)) {
      FUN_00d50b20();
    }
  }
  FUN_00e3faa0();
  (**(code **)(*this_ptr + 0xa18))();
  puVar2 = local_50;
  if (((char)local_48 != '\0') && (local_50 != (void*)0x0)) {
    FUN_00d50b20();
  }
  if (puVar2 != (void*)0x0) {
    FUN_00e3faa0();
  }
  FUN_00e3faa0();
  return;
}



// ============================================================
// 009074a2
// ============================================================
// Function: FUN_009074a2
// Address: 009074a2
// Size: 1363 bytes
// Class: GNMultipleValue
// String references:
//   "productList"
//   "flattenedBlindDemoLicense"
//   "flattenedFailoverLicense"
//   "flattenedIlok2BlindDemos"
//   "releaseDate"
//   "validLocations"
//   "wrapperVersion"
//   "wrapperRevision"
//   "WrapperPublicData"
//   "noActivationCode"
//   "skipFloatingLicenseSetup"
//   "dlcFusion"
//   "defaultExpirationWarningRules"
//   "registeredDemoActivationCode"

int FUN_009074a2(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int64_t *plVar16;
  int64_t lVar17;
  int64_t *arg1;
  int64_t this_ptr;
  
  FUN_0088bf90();
  iVar1 = (**(code **)(*arg1 + 0x20))();
  iVar2 = (**(code **)(*arg1 + 0x30))(10,2);
  iVar3 = (**(code **)(*arg1 + 0x78))();
  iVar4 = (**(code **)(*arg1 + 0x38))();
  iVar5 = (**(code **)(*arg1 + 0x30))(0xb,2);
  iVar6 = (**(code **)(*arg1 + 0x78))();
  iVar7 = (**(code **)(*arg1 + 0x38))();
  iVar8 = (**(code **)(*arg1 + 0x30))(0xc,2);
  iVar9 = (**(code **)(*arg1 + 0x78))();
  iVar10 = (**(code **)(*arg1 + 0x38))();
  iVar11 = (**(code **)(*arg1 + 0x30))(0x14,8);
  iVar12 = (**(code **)(*arg1 + 0x90))();
  iVar13 = (**(code **)(*arg1 + 0x38))();
  iVar14 = (**(code **)(*arg1 + 0x30))(0x1e,0xf);
  iVar15 = (**(code **)(*arg1 + 0x58))();
  iVar15 = iVar2 + iVar1 + iVar3 + iVar4 + iVar5 + iVar6 + iVar7 + iVar8 + iVar9 + iVar10 + iVar11 +
           iVar12 + iVar13 + iVar14 + iVar15;
  for (plVar16 = *(int64_t **)(this_ptr + 0x10); plVar16 != *(int64_t **)(this_ptr + 0x18);
      plVar16 = plVar16 + 7) {
    iVar1 = (**(code **)(*plVar16 + 0x18))();
    iVar15 = iVar15 + iVar1;
  }
  iVar1 = (**(code **)(*arg1 + 0x60))();
  iVar2 = (**(code **)(*arg1 + 0x38))();
  iVar3 = (**(code **)(*arg1 + 0x30))(0x23,0xc);
  iVar4 = FUN_008fb112();
  iVar5 = (**(code **)(*arg1 + 0x38))();
  iVar5 = iVar1 + iVar15 + iVar2 + iVar3 + iVar4 + iVar5;
  if (*(char *)(this_ptr + 0x236) != '\0') {
    iVar1 = (**(code **)(*arg1 + 0x30))(0x28,0xf);
    iVar2 = (**(code **)(*arg1 + 0x58))();
    iVar2 = iVar1 + iVar5 + iVar2;
    for (lVar17 = *(int64_t *)(this_ptr + 0x180); lVar17 != *(int64_t *)(this_ptr + 0x188);
        lVar17 = lVar17 + 1) {
      iVar1 = (**(code **)(*arg1 + 0x80))();
      iVar2 = iVar2 + iVar1;
    }
    iVar1 = (**(code **)(*arg1 + 0x60))();
    iVar5 = (**(code **)(*arg1 + 0x38))();
    iVar5 = iVar1 + iVar2 + iVar5;
  }
  if (*(char *)(this_ptr + 0x237) != '\0') {
    iVar1 = (**(code **)(*arg1 + 0x30))(0x32,0xf);
    iVar2 = (**(code **)(*arg1 + 0x58))();
    iVar2 = iVar1 + iVar5 + iVar2;
    for (lVar17 = *(int64_t *)(this_ptr + 0x198); lVar17 != *(int64_t *)(this_ptr + 0x1a0);
        lVar17 = lVar17 + 1) {
      iVar1 = (**(code **)(*arg1 + 0x80))();
      iVar2 = iVar2 + iVar1;
    }
    iVar1 = (**(code **)(*arg1 + 0x60))();
    iVar5 = (**(code **)(*arg1 + 0x38))();
    iVar5 = iVar1 + iVar2 + iVar5;
  }
  if (*(char *)(this_ptr + 0x238) != '\0') {
    iVar1 = (**(code **)(*arg1 + 0x30))(0x3c,0xf);
    iVar2 = (**(code **)(*arg1 + 0x58))();
    iVar2 = iVar1 + iVar5 + iVar2;
    for (lVar17 = *(int64_t *)(this_ptr + 0x1b0); lVar17 != *(int64_t *)(this_ptr + 0x1b8);
        lVar17 = lVar17 + 1) {
      iVar1 = (**(code **)(*arg1 + 0x80))();
      iVar2 = iVar2 + iVar1;
    }
    iVar1 = (**(code **)(*arg1 + 0x60))();
    iVar5 = (**(code **)(*arg1 + 0x38))();
    iVar5 = iVar1 + iVar2 + iVar5;
  }
  if (*(char *)(this_ptr + 0x239) != '\0') {
    iVar1 = (**(code **)(*arg1 + 0x30))(0x46,0xc);
    iVar2 = FUN_00901a4a();
    iVar3 = (**(code **)(*arg1 + 0x38))();
    iVar5 = iVar1 + iVar5 + iVar2 + iVar3;
  }
  if (*(char *)(this_ptr + 0x23a) != '\0') {
    iVar1 = (**(code **)(*arg1 + 0x30))(0x4b,10);
    iVar2 = (**(code **)(*arg1 + 0x98))();
    iVar3 = (**(code **)(*arg1 + 0x38))();
    iVar5 = iVar1 + iVar5 + iVar2 + iVar3;
  }
  if (*(char *)(this_ptr + 0x23b) != '\0') {
    iVar1 = (**(code **)(*arg1 + 0x30))(0x50,0xb);
    iVar2 = (**(code **)(*arg1 + 0xa8))();
    iVar3 = (**(code **)(*arg1 + 0x38))();
    iVar5 = iVar1 + iVar5 + iVar2 + iVar3;
  }
  if (*(char *)(this_ptr + 0x23c) != '\0') {
    iVar1 = (**(code **)(*arg1 + 0x30))(0x51,0xb);
    iVar2 = (**(code **)(*arg1 + 0xa8))();
    iVar3 = (**(code **)(*arg1 + 0x38))();
    iVar5 = iVar1 + iVar5 + iVar2 + iVar3;
  }
  iVar1 = (**(code **)(*arg1 + 0x40))();
  iVar2 = (**(code **)(*arg1 + 0x28))();
  *(int *)((int64_t)arg1 + 0x1c) = *(int *)((int64_t)arg1 + 0x1c) + -1;
  return iVar1 + iVar5 + iVar2;
}



// ============================================================
// 01d7a120
// ============================================================
// Function: FUN_01d7a120
// Address: 01d7a120
// Size: 1554 bytes
// Class: GNMultipleValue

void FUN_01d7a120(uint64_t param_1,uint64_t param_2)

{
  int64_t lVar1;
  uint8_t auVar2 [16];
  int64_t *plVar3;
  int64_t *plVar4;
  int64_t *arg1;
  int64_t *this_ptr;
  uint64_t uVar5;
  float extraout_XMM0_Db;
  uint64_t extraout_XMM0_Qb;
  float extraout_XMM0_Dd;
  uint8_t auVar6 [16];
  float fVar7;
  float in_XMM1_Dd;
  int64_t local_c8;
  char local_c0;
  int64_t local_b8;
  char local_b0;
  int64_t local_a8;
  char local_a0;
  int64_t *local_98;
  char local_90;
  int64_t *local_88;
  int64_t *local_40;
  char local_38;
  
  fVar7 = (float)((uint64_t)param_2 >> 0x20);
  if (this_ptr[0x48] != 0) {
    FUN_01d7c320();
    return;
  }
  (**(code **)(*this_ptr + 0xad0))();
  (**(code **)(*this_ptr + 0x3a0))();
  FUN_01e42250();
  FUN_00d403d0();
  FUN_00d3fc60();
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  lVar1 = this_ptr[0x46];
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  FUN_01e53c20();
  FUN_01e3f820();
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  uVar5 = FUN_01e3f820();
  FUN_01e3f820();
  auVar2._8_8_ = extraout_XMM0_Qb;
  auVar2._0_8_ = uVar5;
  auVar6._4_4_ = fVar7 + extraout_XMM0_Db;
  auVar6._0_4_ = fVar7 + extraout_XMM0_Db + g_02390d00;
  auVar6._8_4_ = in_XMM1_Dd + extraout_XMM0_Dd;
  auVar6._12_4_ = in_XMM1_Dd + extraout_XMM0_Dd;
  auVar6 = insertps(auVar2,auVar6,0x10);
  FUN_01e46ed0(auVar6._0_8_);
  FUN_00d50b00();
  FUN_01d7c6e0();
  plVar3 = (int64_t *)this_ptr[0x48];
  plVar4 = plVar3;
  if (plVar3 == local_40) goto LAB_01d7a2c8;
  plVar4 = local_40;
  if (local_38 == '\0') {
    if (local_40 == (int64_t *)0x0) {
      plVar4 = (int64_t *)0x0;
      goto LAB_01d7a27d;
    }
    FUN_00d50b00();
    plVar3 = (int64_t *)this_ptr[0x48];
    this_ptr[0x48] = (int64_t)local_40;
  }
  else {
    local_38 = '\0';
LAB_01d7a27d:
    this_ptr[0x48] = (int64_t)plVar4;
  }
  if (plVar3 != (int64_t *)0x0) {
    FUN_00d50b20();
    plVar4 = local_40;
  }
LAB_01d7a2c8:
  if ((local_38 != '\0') && (plVar4 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (this_ptr != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  FUN_01e56750();
  if ((local_38 == '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  local_88 = local_40;
  FUN_01e5ba50();
  plVar3 = (int64_t *)FUN_00e8fc40();
  FUN_0006daf0();
  *plVar3 = (int64_t)&g_026890a8;
  plVar3[2] = (int64_t)&g_026899d0;
  FUN_00d500e0();
  (**(code **)(*plVar3 + 0x4d0))();
  FUN_01e5ca90();
  (**(code **)(*local_40 + 0x450))();
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  plVar4 = (int64_t *)this_ptr[0x46];
  if (plVar4 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  FUN_01e5ca90();
  if (local_38 == '\0') {
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  (**(code **)(*plVar3 + 0x4d8))();
  FUN_00d05530();
  (**(code **)(*plVar4 + 0x4c8))();
  if (local_40 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  FUN_00d403d0();
  lVar1 = g_026fc520;
  if (g_026fc520 != 0) {
    FUN_00d50b00();
  }
  FUN_00d50b00();
  local_c8 = 0;
  local_c0 = '\0';
  FUN_00d40470(&local_c8,&stack0xffffffffffffff90,3,3);
  if ((local_c0 != '\0') && (local_c8 != 0)) {
    FUN_00d50b20();
  }
  if (this_ptr != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01d7bb00();
  (**(code **)(*this_ptr + 0x6b0))();
  if ((local_38 == '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  local_b8 = 0;
  local_b0 = '\0';
  (**(code **)(*this_ptr + 0x6a8))();
  if ((local_b0 != '\0') && (local_b8 != 0)) {
    FUN_00d50b20();
  }
  plVar3 = (int64_t *)this_ptr[0x46];
  if (plVar3 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  uVar5 = FUN_00d50b00();
  local_a8 = *arg1;
  local_a0 = '\0';
  (**(code **)(*plVar3 + 0x5a8))(uVar5,&local_a8);
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    FUN_00d50b20();
  }
  if (this_ptr != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  local_98 = local_40;
  local_90 = '\0';
  (**(code **)(*this_ptr + 0x6a8))();
  if ((local_90 != '\0') && (local_98 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (local_40 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  if (local_88 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 01edf3b0
// ============================================================
// Function: FUN_01edf3b0
// Address: 01edf3b0
// Size: 534 bytes
// Class: GNMultipleValue

void FUN_01edf3b0(uint64_t param_1,uint64_t param_2)

{
  uint64_t uVar1;
  uint64_t uVar2;
  int64_t lVar3;
  int64_t lVar4;
  uint8_t auVar5 [16];
  uint8_t auVar6 [16];
  uint8_t auVar7 [16];
  uint8_t auVar8 [16];
  uint8_t auVar9 [16];
  int64_t lVar10;
  int64_t *this_ptr;
  float fVar11;
  uint64_t uVar12;
  uint64_t uVar13;
  uint64_t in_XMM0_Qb;
  uint8_t auVar14 [16];
  float fVar15;
  uint64_t in_XMM1_Qb;
  uint8_t auVar16 [16];
  uint8_t auVar17 [16];
  float fVar18;
  float fVar19;
  float fVar20;
  uint8_t auVar21 [16];
  float fVar22;
  float local_78;
  float fStack_74;
  float local_38;
  float fStack_34;
  uint32_t uStack_30;
  uint32_t uStack_2c;
  float local_28;
  float fStack_24;
  uint32_t uStack_20;
  uint32_t uStack_1c;
  
  local_28 = (float)param_1;
  fStack_24 = (float)((uint64_t)param_1 >> 0x20);
  uStack_20 = (uint32_t)in_XMM0_Qb;
  uStack_1c = (uint32_t)((uint64_t)in_XMM0_Qb >> 0x20);
  lVar3 = *this_ptr;
  if (lVar3 != 0) {
    local_38 = (float)param_2;
    fStack_34 = (float)((uint64_t)param_2 >> 0x20);
    uStack_30 = (uint32_t)in_XMM1_Qb;
    uStack_2c = (uint32_t)((uint64_t)in_XMM1_Qb >> 0x20);
    if (0 < *(int *)(lVar3 + 0xc)) {
      fVar11 = local_28 + local_38 + g_02390d00;
      fVar18 = fStack_24 + fStack_34 + g_02390d00;
      lVar10 = 0;
      do {
        lVar4 = *(int64_t *)(*(int64_t *)(lVar3 + 0x10) + lVar10 * 8);
        uVar1 = *(uint64_t *)(lVar4 + 0xc);
        fVar19 = (float)(uVar1 >> 0x20);
        uVar2 = *(uint64_t *)(lVar4 + 0x14);
        fVar22 = (float)(uVar2 >> 0x20);
        auVar14._8_4_ = uStack_30;
        auVar14._0_8_ = param_2;
        auVar14._12_4_ = uStack_2c;
        auVar21 = auVar14;
        if (local_38 <= (float)uVar2) {
LAB_01edf476:
          if (fVar22 < auVar14._4_4_) {
            if (*(char *)(lVar4 + 0x1f) == '\0') goto LAB_01edf430;
            auVar7._8_8_ = 0;
            auVar7._0_8_ = uVar2;
            auVar21 = blendps(auVar21,auVar7,2);
          }
          fVar22 = fVar19 + fVar22;
          fVar15 = (float)uVar1 + (float)uVar2 + g_02390d00;
          auVar17._8_4_ = uStack_20;
          auVar17._0_8_ = param_1;
          auVar17._12_4_ = uStack_1c;
          fVar20 = auVar21._0_4_;
          if (fVar15 < fVar11) {
            if (*(char *)(lVar4 + 0x1c) == '\0') goto LAB_01edf430;
            auVar16._0_4_ = fVar15 - fVar20;
            auVar16._4_4_ = fVar22;
            auVar16._8_8_ = 0;
            auVar9._8_4_ = uStack_20;
            auVar9._0_8_ = param_1;
            auVar9._12_4_ = uStack_1c;
            auVar17 = blendps(auVar16,auVar9,0xe);
          }
          fVar15 = auVar21._4_4_;
          if (fVar22 + g_02390d00 < fVar18) {
            if (*(char *)(lVar4 + 0x1d) == '\0') goto LAB_01edf430;
            auVar8._4_4_ = fVar22;
            auVar8._0_4_ = (fVar22 + g_02390d00) - fVar15;
            auVar8._8_8_ = 0;
            auVar17 = insertps(auVar17,auVar8,0x10);
          }
          if (local_28 < (float)uVar1) {
            if (*(char *)(lVar4 + 0x1c) == '\0') goto LAB_01edf430;
            auVar5._8_8_ = 0;
            auVar5._0_8_ = uVar1;
            auVar17 = blendps(auVar17,auVar5,0xd);
          }
          uVar12 = auVar17._0_8_;
          if (fStack_24 < fVar19) {
            if (*(char *)(lVar4 + 0x1d) == '\0') goto LAB_01edf430;
            auVar6._8_8_ = 0;
            auVar6._0_8_ = uVar1;
            auVar14 = blendps(auVar17,auVar6,2);
            uVar12 = auVar14._0_8_;
          }
          uVar13 = FUN_00d05360();
          local_78 = (float)uVar12;
          fStack_74 = (float)((uint64_t)uVar12 >> 0x20);
          if ((((float)uVar13 == local_78) && (!NAN((float)uVar13) && !NAN(local_78))) &&
             ((float)((uint64_t)uVar13 >> 0x20) == fStack_74)) {
            if (((auVar21._0_4_ == fVar20) && (!NAN(auVar21._0_4_) && !NAN(fVar20))) &&
               (auVar21._4_4_ == fVar15)) {
              FUN_01edf7b0();
              return;
            }
          }
        }
        else if (*(char *)(lVar4 + 0x1e) != '\0') {
          auVar21._8_8_ = 0;
          auVar21._0_8_ = uVar2;
          auVar21 = blendps(auVar21,auVar14,2);
          goto LAB_01edf476;
        }
LAB_01edf430:
        lVar10 = lVar10 + 1;
      } while ((int)lVar10 < *(int *)(lVar3 + 0xc));
    }
    FUN_01edf7b0();
  }
  return;
}



// ============================================================
// 01d28720
// ============================================================
// Function: FUN_01d28720
// Address: 01d28720
// Size: 1014 bytes
// Class: GNMultipleValue
// String references:
//   "GNMultipleValue"

uint64_t FUN_01d28720(uint64_t param_1,void*param_2)

{
  uint uVar1;
  int64_t lVar2;
  bool bVar3;
  char cVar4;
  uint32_t uVar5;
  uint uVar6;
  int iVar7;
  int64_t lVar8;
  int64_t *plVar9;
  uint64_t unaff_RBX;
  uint64_t uVar10;
  int64_t *arg1;
  int64_t this_ptr;
  int64_t lVar11;
  uint64_t local_d0;
  uint8_t local_c8;
  int64_t local_c0;
  uint8_t local_b8;
  uint64_t local_b0;
  uint8_t local_a8;
  int64_t local_a0;
  uint8_t local_98;
  uint64_t local_90;
  uint8_t local_88;
  uint64_t local_80;
  void*local_78;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_31;
  
  local_80 = param_1;
  local_78 = param_2;
  if (*(int *)(*(int64_t *)(this_ptr + 0x20) + 0xc) < 2) {
    iVar7 = FUN_01d26e20();
    if (iVar7 != -1) {
      local_a0 = *arg1;
      local_98 = 0;
      local_90 = *local_78;
      local_88 = 0;
      uVar6 = FUN_01d28c90(iVar7,&local_90,local_80);
      uVar10 = (uint64_t)uVar6;
      goto LAB_01d28a58;
    }
LAB_01d28a2b:
    uVar10 = CONCAT71((int7)((uint64_t)unaff_RBX >> 8),1);
    goto LAB_01d28a58;
  }
  plVar9 = (int64_t *)*arg1;
  // [STATIC_INIT: property registration]
  if (plVar9 == (int64_t *)0x0) {
LAB_01d28785:
    plVar9 = &g_02802688;
  }
  else {
    (**(code **)(*plVar9 + 0x360))();
    cVar4 = FUN_00e85ea0();
    plVar9 = arg1;
    if (cVar4 == '\0') goto LAB_01d28785;
  }
  lVar2 = *plVar9;
  local_31 = (char)plVar9[1];
  if ((local_31 == '\0') || (lVar2 == 0)) {
    if (lVar2 != 0) goto LAB_01d28809;
    lVar8 = *(int64_t *)(this_ptr + 0x20);
    if (*(int *)(lVar8 + 0xc) < 1) goto LAB_01d28a2b;
    lVar11 = 0;
    local_40 = lVar2;
    do {
      lVar2 = *(int64_t *)(*(int64_t *)(lVar8 + 0x10) + lVar11 * 8);
      local_48 = 0;
      if (lVar2 != 0) {
        FUN_00d50b00();
      }
      local_48 = '\x01';
      local_50 = lVar2;
      uVar6 = FUN_00d237a0();
      uVar10 = (uint64_t)uVar6;
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      local_c0 = *arg1;
      local_b8 = 0;
      local_b0 = *local_78;
      local_a8 = 0;
      cVar4 = FUN_01d28c90(uVar10,&local_b0,local_80);
      if (cVar4 == '\0') goto LAB_01d28a56;
      lVar11 = lVar11 + 1;
      lVar8 = *(int64_t *)(this_ptr + 0x20);
    } while (lVar11 < *(int *)(lVar8 + 0xc));
    bVar3 = true;
  }
  else {
    FUN_00d50b00();
LAB_01d28809:
    FUN_00e987b0();
    uVar6 = *(uint *)(local_70 + 0xc);
    uVar1 = *(uint *)(*(int64_t *)(this_ptr + 0x20) + 0xc);
    uVar10 = (uint64_t)uVar1;
    if (local_68 != '\0') {
      FUN_00d50b20();
    }
    if (uVar6 != uVar1) {
      if (local_31 != '\0') {
        FUN_00d50b20();
      }
LAB_01d28a56:
      uVar10 = 0;
      goto LAB_01d28a58;
    }
    lVar8 = *(int64_t *)(this_ptr + 0x20);
    if (*(int *)(lVar8 + 0xc) < 1) {
      bVar3 = false;
    }
    else {
      lVar11 = 0;
      local_40 = lVar2;
      do {
        lVar2 = *(int64_t *)(*(int64_t *)(lVar8 + 0x10) + lVar11 * 8);
        local_58 = 0;
        if (lVar2 != 0) {
          FUN_00d50b00();
        }
        local_58 = '\x01';
        local_60 = lVar2;
        uVar5 = FUN_00d237a0();
        if ((local_58 != '\0') && (local_60 != 0)) {
          FUN_00d50b20();
        }
        FUN_00e987b0();
        lVar2 = *(int64_t *)(*(int64_t *)(local_70 + 0x10) + lVar11 * 8);
        if (lVar2 != 0) {
          FUN_00d50b00();
        }
        local_d0 = *local_78;
        local_c8 = 0;
        uVar6 = FUN_01d28c90(uVar5,&local_d0,local_80);
        uVar10 = (uint64_t)uVar6;
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        if ((local_68 != '\0') && (local_70 != 0)) {
          FUN_00d50b20();
        }
        if ((char)uVar6 == '\0') {
          if (local_31 != '\0') {
            FUN_00d50b20();
          }
          goto LAB_01d28a56;
        }
        lVar11 = lVar11 + 1;
        lVar8 = *(int64_t *)(this_ptr + 0x20);
      } while (lVar11 < *(int *)(lVar8 + 0xc));
      bVar3 = false;
    }
  }
  uVar10 = CONCAT71((int7)(uVar10 >> 8),1);
  if ((local_31 != '\0') && (!bVar3)) {
    FUN_00d50b20();
  }
LAB_01d28a58:
  return uVar10 & 0xffffffff;
}



// ============================================================
// 01f0c0c0
// ============================================================
// Function: FUN_01f0c0c0
// Address: 01f0c0c0
// Size: 790 bytes
// Class: GNMultipleValue

void FUN_01f0c0c0(uint64_t param_1,uint64_t param_2)

{
  void*puVar1;
  int64_t lVar2;
  uint8_t auVar3 [16];
  int iVar4;
  void*puVar5;
  int64_t this_ptr;
  int64_t *plVar6;
  int iVar7;
  uint32_t uVar8;
  uint32_t uVar9;
  uint64_t uVar10;
  uint64_t extraout_XMM0_Qa;
  uint64_t uVar11;
  uint64_t extraout_XMM0_Qb;
  uint64_t extraout_XMM0_Qb_00;
  uint64_t in_XMM1_Qb;
  uint8_t auVar12 [16];
  uint8_t auVar13 [16];
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  uint8_t local_98 [16];
  uint8_t local_88 [16];
  int64_t local_70;
  char local_68;
  int64_t *local_60;
  int64_t *local_58;
  char local_50;
  int64_t *local_48;
  int64_t *local_40;
  char local_38;
  
  uVar10 = FUN_01cb4790();
  plVar6 = local_40;
  if ((((local_38 == '\0') && (local_40 != (int64_t *)0x0)) &&
      (uVar10 = FUN_00d50b00(), local_38 != '\0')) && (local_40 != (int64_t *)0x0)) {
    uVar10 = FUN_00d50b20();
  }
  local_60 = plVar6;
  local_88._0_8_ = (**(code **)(*plVar6 + 0x3c8))(uVar10,0);
  local_88._8_8_ = extraout_XMM0_Qb;
  uVar8 = (**(code **)(*plVar6 + 0x3c8))(local_88._0_8_,1);
  uVar10 = FUN_01e3f820();
  local_98._8_8_ = in_XMM1_Qb;
  local_98._0_8_ = param_2;
  uVar9 = (**(code **)(*plVar6 + 0x3c8))(uVar10,2);
  local_48 = (int64_t *)CONCAT44(local_48._4_4_,uVar9);
  puVar5 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar5 = &g_025683c0;
  (*g_025683d8)();
  FUN_00c92170();
  FUN_00c92160();
  puVar1 = *(void**)(this_ptr + 0x168);
  if (puVar1 == puVar5) {
    FUN_00d50b20();
  }
  else {
    *(void**)(this_ptr + 0x168) = puVar5;
    if (puVar1 != (void*)0x0) {
      FUN_00d50b20();
    }
  }
  if (*(int64_t *)(this_ptr + 0x138) != 0) {
    auVar12._4_12_ = local_98._4_12_;
    auVar12._0_4_ = ((float)param_2 - local_48._0_4_) - (float)local_88._0_8_;
    local_88 = insertps(local_88,uVar8,0x10);
    local_98 = blendps(auVar12,g_023b1620,0xe);
    iVar7 = 0;
    do {
      iVar4 = FUN_01d5b230();
      if (iVar4 <= iVar7) {
        if (plVar6 == (int64_t *)0x0) {
          return;
        }
        break;
      }
      FUN_01d5b240(extraout_XMM0_Qa,iVar7);
      plVar6 = local_40;
      if (((local_38 == '\0') && (local_40 != (int64_t *)0x0)) &&
         ((FUN_00d50b00(), local_38 != '\0' && (local_40 != (int64_t *)0x0)))) {
        FUN_00d50b20();
      }
      local_48 = plVar6;
      FUN_01d65230();
      local_58 = local_40;
      local_50 = 0;
      if (local_38 == '\0') {
        if (local_40 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      local_50 = '\x01';
      local_70 = *(int64_t *)(this_ptr + 0x158);
      local_68 = '\0';
      uVar11 = (**(code **)(*local_60 + 0x5d0))(*(void*)(this_ptr + 0x178),&local_70);
      local_a8 = (float)uVar11;
      fStack_a4 = (float)((uint64_t)uVar11 >> 0x20);
      fStack_a0 = (float)extraout_XMM0_Qb_00;
      fStack_9c = (float)((uint64_t)extraout_XMM0_Qb_00 >> 0x20);
      uVar10 = uVar11;
      if ((local_68 != '\0') && (local_70 != 0)) {
        uVar10 = FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
        uVar10 = FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        uVar10 = FUN_00d50b20();
      }
      lVar2 = *(int64_t *)(this_ptr + 0x168);
      iVar4 = *(int *)(lVar2 + 0x18);
      FUN_00c8e340(uVar10,1);
      auVar3._8_4_ = fStack_a0;
      auVar3._0_8_ = uVar11;
      auVar3._12_4_ = fStack_9c;
      local_98 = blendps(local_98,auVar3,2);
      puVar1 = (void*)(*(int64_t *)(lVar2 + 0x10) + (int64_t)iVar4);
      *puVar1 = local_88._0_8_;
      puVar1[1] = local_98._0_8_;
      if (local_48 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      auVar13._0_4_ = local_a8 + local_88._0_4_;
      auVar13._4_4_ = fStack_a4 + local_88._4_4_;
      auVar13._8_4_ = fStack_a0 + local_88._8_4_;
      auVar13._12_4_ = fStack_9c + local_88._12_4_;
      local_88 = blendps(local_88,auVar13,2);
      iVar7 = iVar7 + 1;
      plVar6 = local_60;
    } while (*(int64_t *)(this_ptr + 0x138) != 0);
  }
  FUN_00d50b20();
  return;
}



// ============================================================
// 01d585e0
// ============================================================
// Function: FUN_01d585e0
// Address: 01d585e0
// Size: 929 bytes
// Class: GNMultipleValue

uint64_t FUN_01d585e0(uint64_t param_1)

{
  char cVar1;
  uint uVar2;
  int64_t lVar3;
  int64_t lVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  int64_t lVar7;
  uint64_t uVar8;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t local_b0;
  char local_a8;
  int64_t local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  uint64_t local_50;
  int64_t local_48;
  char local_40;
  char local_31;
  
  if (*(char *)((int64_t)this_ptr + 0x1f1) == '\0') {
LAB_01d5892a:
    local_60 = *arg1;
    local_58 = '\0';
    uVar2 = FUN_01d83480();
    uVar8 = (uint64_t)uVar2;
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    FUN_01d384d0();
    lVar4 = g_027f07c8;
    if (g_027f07c8 != 0) {
      FUN_00d50b00();
    }
    lVar3 = FUN_01cac500();
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if (lVar3 == 0) {
      local_50 = 0;
      lVar4 = 0;
    }
    else {
      FUN_01d384d0();
      lVar3 = g_027f07c8;
      if (g_027f07c8 != 0) {
        FUN_00d50b00();
      }
      lVar4 = FUN_01cac500();
      if (lVar4 == 0) {
        local_50 = 0;
      }
      else {
        local_50 = CONCAT71((int7)((uint64_t)lVar4 >> 8),1);
        FUN_00d50b00();
      }
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
    }
    FUN_01d384d0();
    local_80 = g_026fcec0;
    if (g_026fcec0 != 0) {
      FUN_00d50b00();
    }
    local_78 = '\x01';
    FUN_01cacbe0(param_1,&local_80);
    lVar3 = local_48;
    if (local_40 == '\0') {
      if (((local_48 != 0) && (FUN_00d50b00(), local_40 != '\0')) && (local_48 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_40 = '\0';
    }
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    if ((local_a8 != '\0') && (local_b0 != 0)) {
      FUN_00d50b20();
    }
    if (lVar3 == 0) {
      if (lVar4 == 0) goto LAB_01d5892a;
    }
    else {
      local_70 = lVar3;
      local_68 = '\0';
      uVar5 = FUN_01d4f320();
      lVar7 = local_48;
      if (local_48 == lVar4) {
        uVar6 = local_50;
        lVar7 = lVar4;
        cVar1 = (char)local_50;
        if (((char)local_50 == '\0') && (cVar1 = (char)local_50, local_48 != 0)) {
          if (local_40 != '\0') goto LAB_01d58825;
          local_31 = '\x01';
          uVar6 = FUN_00d50b00();
          cVar1 = local_31;
        }
LAB_01d5887d:
        local_31 = cVar1;
        lVar4 = lVar7;
        if ((local_40 == '\0') || (local_48 == 0)) {
          local_50 = CONCAT71((int7)((uint64_t)uVar6 >> 8),local_31);
        }
        else {
          uVar5 = FUN_00d50b20();
          local_50 = CONCAT71((int7)((uint64_t)uVar5 >> 8),local_31);
        }
      }
      else {
        if (local_40 == '\0') {
          uVar6 = uVar5;
          if (local_48 != 0) {
            uVar6 = FUN_00d50b00();
          }
          local_31 = '\x01';
          cVar1 = local_31;
          if (((char)local_50 != '\0') && (lVar4 != 0)) {
            uVar6 = FUN_00d50b20();
            cVar1 = local_31;
          }
          goto LAB_01d5887d;
        }
        if (((char)local_50 != '\0') && (lVar4 != 0)) {
          uVar5 = FUN_00d50b20();
        }
LAB_01d58825:
        local_40 = '\0';
        local_50 = CONCAT71((int7)((uint64_t)uVar5 >> 8),1);
        lVar4 = lVar7;
      }
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      if (lVar4 == 0) {
        FUN_00d50b20();
        goto LAB_01d5892a;
      }
    }
    lVar7 = this_ptr[0x39];
    if (lVar7 != lVar4) {
      FUN_00d50b00();
      this_ptr[0x39] = lVar4;
      if (lVar7 != 0) {
        FUN_00d50b20();
      }
      (**(code **)(*this_ptr + 0x620))();
    }
    (**(code **)(*this_ptr + 0x620))();
    FUN_01d11e80();
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    uVar8 = CONCAT71((int7)((uint64_t)lVar7 >> 8),1);
    if ((char)local_50 != '\0') {
      FUN_00d50b20();
    }
  }
  return uVar8 & 0xffffffff;
}



// ============================================================
// 01d27270
// ============================================================
// Function: FUN_01d27270
// Address: 01d27270
// Size: 941 bytes
// Class: GNMultipleValue
// String references:
//   "GNMultipleValue"

void FUN_01d27270(uint64_t param_1,void*param_2)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  uint32_t uVar4;
  int iVar5;
  int64_t lVar6;
  int64_t *plVar7;
  int64_t *arg1;
  int64_t this_ptr;
  int64_t lVar8;
  uint64_t local_c8;
  uint8_t local_c0;
  int64_t local_b8;
  uint8_t local_b0;
  uint64_t local_a8;
  uint8_t local_a0;
  int64_t local_98;
  uint8_t local_90;
  uint64_t local_88;
  uint8_t local_80;
  void*local_78;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_31;
  
  local_78 = param_2;
  if (*(int *)(*(int64_t *)(this_ptr + 0x20) + 0xc) < 2) {
    iVar5 = FUN_01d26e20();
    if (iVar5 == -1) {
      return;
    }
    local_98 = *arg1;
    local_90 = 0;
    local_88 = *local_78;
    local_80 = 0;
    FUN_01d27780(iVar5,&local_88);
    return;
  }
  plVar7 = (int64_t *)*arg1;
  if ((g_0277a3a0 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
    g_026d3c38 = FUN_00d4fe50();
    g_026d3c20 = "GNMultipleValue";
    g_026d3c28 = 0x18;
    g_026d3c30 = FUN_00050c70;
    g_026d3c40 = 0;
    ram_00000000026d3c48 = 0;
    g_026d3c50 = 0;
    ram_00000000026d3c58 = 0;
    g_026d3c60 = 0;
    ram_00000000026d3c68 = 0;
    g_026d3c70 = 0;
    ram_00000000026d3c78 = 0;
    g_026d3c80 = 0;
    ram_00000000026d3c88 = 0;
    g_026d3c90 = 0;
    ram_00000000026d3c98 = 0;
    g_026d3ca0 = 0;
    ram_00000000026d3ca8 = 0;
    g_026d3cb0 = 0;
    ram_00000000026d3cb8 = 0;
    g_026d3cc0 = 0;
    ram_00000000026d3cc8 = 0;
    g_026d3cd0 = 0;
    ram_00000000026d3cd8 = 0;
    g_026d3ce0 = 0;
    ___cxa_guard_release();
  }
  if (plVar7 == (int64_t *)0x0) {
LAB_01d272d0:
    plVar7 = &g_02802688;
  }
  else {
    (**(code **)(*plVar7 + 0x360))();
    cVar3 = FUN_00e85ea0();
    plVar7 = arg1;
    if (cVar3 == '\0') goto LAB_01d272d0;
  }
  local_40 = *plVar7;
  local_31 = (char)plVar7[1];
  if ((local_31 == '\0') || (local_40 == 0)) {
    if (local_40 == 0) {
      lVar6 = *(int64_t *)(this_ptr + 0x20);
      if (*(int *)(lVar6 + 0xc) < 1) {
        return;
      }
      lVar8 = 0;
      do {
        lVar6 = *(int64_t *)(*(int64_t *)(lVar6 + 0x10) + lVar8 * 8);
        local_48 = 0;
        if (lVar6 != 0) {
          FUN_00d50b00();
        }
        local_48 = '\x01';
        local_50 = lVar6;
        uVar4 = FUN_00d237a0();
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        local_b8 = *arg1;
        local_b0 = 0;
        local_a8 = *local_78;
        local_a0 = 0;
        FUN_01d27780(uVar4,&local_a8);
        lVar8 = lVar8 + 1;
        lVar6 = *(int64_t *)(this_ptr + 0x20);
      } while (lVar8 < *(int *)(lVar6 + 0xc));
      bVar2 = true;
      goto joined_r0x01d27568;
    }
  }
  else {
    FUN_00d50b00();
  }
  FUN_00e987b0();
  iVar5 = *(int *)(local_70 + 0xc);
  iVar1 = *(int *)(*(int64_t *)(this_ptr + 0x20) + 0xc);
  if (local_68 != '\0') {
    FUN_00d50b20();
  }
  if ((iVar5 == iVar1) && (lVar6 = *(int64_t *)(this_ptr + 0x20), 0 < *(int *)(lVar6 + 0xc))) {
    lVar8 = 0;
    do {
      lVar6 = *(int64_t *)(*(int64_t *)(lVar6 + 0x10) + lVar8 * 8);
      local_58 = 0;
      if (lVar6 != 0) {
        FUN_00d50b00();
      }
      local_58 = '\x01';
      local_60 = lVar6;
      uVar4 = FUN_00d237a0();
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      FUN_00e987b0();
      lVar6 = *(int64_t *)(*(int64_t *)(local_70 + 0x10) + lVar8 * 8);
      if (lVar6 != 0) {
        FUN_00d50b00();
      }
      local_c8 = *local_78;
      local_c0 = 0;
      FUN_01d27780(uVar4,&local_c8);
      if (lVar6 != 0) {
        FUN_00d50b20();
      }
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      lVar8 = lVar8 + 1;
      lVar6 = *(int64_t *)(this_ptr + 0x20);
    } while (lVar8 < *(int *)(lVar6 + 0xc));
  }
  bVar2 = false;
joined_r0x01d27568:
  if ((local_31 != '\0') && (!bVar2)) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 01ceed10
// ============================================================
// Function: FUN_01ceed10
// Address: 01ceed10
// Size: 1015 bytes
// Class: GNMultipleValue

void FUN_01ceed10(void)

{
  int64_t lVar1;
  int64_t *this_ptr;
  int64_t local_48;
  char local_40;
  int64_t local_38;
  char local_30;
  
  if ((int64_t *)this_ptr[0x3a] != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)this_ptr[0x3a] + 0x148))();
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    if (local_38 != 0) {
      (**(code **)(*(int64_t *)this_ptr[0x3a] + 0x148))();
      if (local_40 == '\0') {
        if (local_48 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_40 = '\0';
      }
      FUN_01d51a40();
      if (local_30 == '\0') {
        if (local_38 != 0) {
          FUN_00d50b00();
          goto LAB_01ceedce;
        }
        if (this_ptr[0x3a] != 0) {
          this_ptr[0x3a] = 0;
          goto LAB_01ceee0f;
        }
      }
      else {
        local_30 = '\0';
LAB_01ceedce:
        lVar1 = this_ptr[0x3a];
        if (local_38 != lVar1) {
          if (local_38 != 0) {
            FUN_00d50b00();
          }
          this_ptr[0x3a] = local_38;
          if (lVar1 != 0) {
LAB_01ceee0f:
            FUN_00d50b20();
          }
          (**(code **)(*this_ptr + 0x620))();
        }
        if (local_38 != 0) {
          FUN_00d50b20();
        }
      }
      if ((local_30 != '\0') && (local_38 != 0)) {
        FUN_00d50b20();
      }
      if (local_48 != 0) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  if ((int64_t *)this_ptr[0x3b] != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)this_ptr[0x3b] + 0x148))();
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    if (local_38 != 0) {
      (**(code **)(*(int64_t *)this_ptr[0x3b] + 0x148))();
      if (local_40 == '\0') {
        if (local_48 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_40 = '\0';
      }
      FUN_01d51a40();
      if (local_30 == '\0') {
        if (local_38 != 0) {
          FUN_00d50b00();
          goto LAB_01ceef18;
        }
        if (this_ptr[0x3b] != 0) {
          this_ptr[0x3b] = 0;
          goto LAB_01ceef52;
        }
      }
      else {
        local_30 = '\0';
LAB_01ceef18:
        lVar1 = this_ptr[0x3b];
        if (lVar1 != local_38) {
          if (local_38 != 0) {
            FUN_00d50b00();
          }
          this_ptr[0x3b] = local_38;
          if (lVar1 != 0) {
LAB_01ceef52:
            FUN_00d50b20();
          }
        }
      }
      (**(code **)(*this_ptr + 0x620))();
      if (local_38 != 0) {
        FUN_00d50b20();
      }
      if ((local_30 != '\0') && (local_38 != 0)) {
        FUN_00d50b20();
      }
      if (local_48 != 0) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  if ((int64_t *)this_ptr[0x3c] == (int64_t *)0x0) goto LAB_01cef0f2;
  (**(code **)(*(int64_t *)this_ptr[0x3c] + 0x148))();
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  if (local_38 == 0) goto LAB_01cef0f2;
  (**(code **)(*(int64_t *)this_ptr[0x3c] + 0x148))();
  if (local_40 == '\0') {
    if (local_48 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_40 = '\0';
  }
  FUN_01d51a40();
  if (local_30 == '\0') {
    if (local_38 != 0) {
      FUN_00d50b00();
      goto LAB_01cef05b;
    }
    if (this_ptr[0x3c] != 0) {
      this_ptr[0x3c] = 0;
      goto LAB_01cef095;
    }
  }
  else {
    local_30 = '\0';
LAB_01cef05b:
    lVar1 = this_ptr[0x3c];
    if (lVar1 != local_38) {
      if (local_38 != 0) {
        FUN_00d50b00();
      }
      this_ptr[0x3c] = local_38;
      if (lVar1 != 0) {
LAB_01cef095:
        FUN_00d50b20();
      }
    }
  }
  (**(code **)(*this_ptr + 0x620))();
  if (local_38 != 0) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  if (local_48 != 0) {
    FUN_00d50b20();
  }
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
LAB_01cef0f2:
  FUN_01e47520();
  return;
}



// ============================================================
// 01d59f70
// ============================================================
// Function: FUN_01d59f70
// Address: 01d59f70
// Size: 1026 bytes
// Class: GNMultipleValue

void FUN_01d59f70(uint64_t param_1,uint64_t param_2)

{
  int64_t lVar1;
  int64_t *plVar2;
  int iVar3;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t *plVar4;
  int64_t *plVar5;
  uint32_t uVar6;
  uint32_t uVar7;
  uint32_t extraout_XMM0_Dc;
  uint32_t uVar8;
  uint32_t uVar9;
  int64_t local_b8;
  char local_b0;
  int64_t *local_a8;
  char local_a0;
  int64_t local_98;
  char local_90;
  int64_t local_88;
  char local_80;
  int64_t *local_78;
  char local_70;
  uint64_t local_68;
  int64_t *local_50;
  char local_48;
  int64_t *local_40;
  char local_38;
  
  uVar9 = (uint32_t)((uint64_t)param_2 >> 0x20);
  uVar8 = (uint32_t)param_2;
  plVar5 = (int64_t *)this_ptr[0x2b];
  if (plVar5 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  (**(code **)(*this_ptr + 0x640))();
  plVar2 = local_40;
  if ((((local_38 == '\0') && (local_40 != (int64_t *)0x0)) && (FUN_00d50b00(), local_38 != '\0'))
     && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  iVar3 = (**(code **)(*this_ptr + 0x9f8))();
  if ((iVar3 == 0) || (plVar5 == (int64_t *)0x0)) goto LAB_01d5a21f;
  FUN_01e3f820();
  (**(code **)(*plVar2 + 0x548))();
  uVar7 = uVar8;
  uVar6 = FUN_00d92190();
  plVar4 = local_40;
  if (((local_38 == '\0') &&
      ((local_40 != (int64_t *)0x0 && (uVar6 = FUN_00d50b00(), local_38 != '\0')))) &&
     (local_40 != (int64_t *)0x0)) {
    uVar6 = FUN_00d50b20();
  }
  lVar1 = g_027259e0;
  local_68 = plVar4;
  if (g_027259e0 != 0) {
    uVar6 = FUN_00d50b00();
  }
  local_b8 = lVar1;
  local_b0 = '\x01';
  FUN_00d95130(uVar6,&local_b8);
  plVar4 = plVar5;
  if (plVar5 == local_40) {
LAB_01d5a0d4:
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    plVar4 = local_40;
    if (local_38 == '\0') {
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      FUN_00d50b20();
      goto LAB_01d5a0d4;
    }
    FUN_00d50b20();
    local_38 = '\0';
  }
  if ((local_b0 != '\0') && (local_b8 != 0)) {
    FUN_00d50b20();
  }
  local_a0 = '\0';
  local_98 = *arg1;
  local_90 = '\0';
  local_a8 = plVar4;
  (**(code **)(*this_ptr + 0xa00))(uVar7,&local_a8);
  plVar5 = plVar4;
  if (local_40 == plVar4) {
joined_r0x01d5a1ac:
    plVar4 = local_68;
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
      plVar4 = local_68;
    }
  }
  else {
    plVar5 = local_40;
    if (local_38 == '\0') {
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      if (plVar4 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      goto joined_r0x01d5a1ac;
    }
    if (plVar4 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    local_38 = '\0';
    plVar4 = local_68;
  }
  local_68 = plVar4;
  if ((local_90 != '\0') && (local_98 != 0)) {
    FUN_00d50b20();
  }
  if ((local_a0 != '\0') && (local_a8 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar4 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
LAB_01d5a21f:
  FUN_01d48370();
  plVar4 = (int64_t *)*arg1;
  FUN_01e3f820();
  (**(code **)(*plVar4 + 0x390))();
  local_88 = *arg1;
  local_80 = '\0';
  uVar7 = FUN_01e3f820();
  local_68 = (int64_t *)CONCAT44(uVar9,uVar8);
  local_70 = '\0';
  uVar8 = extraout_XMM0_Dc;
  local_78 = plVar5;
  (**(code **)(*this_ptr + 0x9e0))();
  local_50 = local_40;
  local_48 = 0;
  if (local_38 == '\0') {
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  local_48 = '\x01';
  (**(code **)(*plVar2 + 0x400))
            (uVar7,(uint32_t)local_68,&local_50,*(void*)((int64_t)this_ptr + 0x174),uVar7
             ,uVar8);
  if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  FUN_01d48390();
  FUN_00d50b20();
  if (plVar5 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 01e0dfc0
// ============================================================
// Function: FUN_01e0dfc0
// Address: 01e0dfc0
// Size: 1054 bytes
// Class: GNMultipleValue

void FUN_01e0dfc0(uint64_t param_1,uint32_t param_2)

{
  bool bVar1;
  int64_t lVar2;
  char cVar3;
  int64_t *this_ptr;
  uint64_t uVar4;
  float extraout_XMM0_Db;
  float fVar5;
  float fVar6;
  int64_t local_40;
  char local_38;
  
  fVar5 = (float)((uint64_t)param_1 >> 0x20);
  if ((int64_t *)this_ptr[0x27] == (int64_t *)0x0) {
    return;
  }
  cVar3 = (**(code **)(*(int64_t *)this_ptr[0x27] + 0x9a0))();
  if (cVar3 == '\0') {
    return;
  }
  uVar4 = FUN_01e3f820();
  fVar6 = (float)((uint64_t)uVar4 >> 0x20);
  cVar3 = FUN_00d05410((int)param_1,(int)uVar4,param_2);
  if (cVar3 != '\0') {
    FUN_01e3f820();
    if (fVar6 * g_0239011c <= fVar5) {
      if ((int)this_ptr[0x28] < 0) {
        g_028b90d1 = 1;
        return;
      }
      (**(code **)(*(int64_t *)this_ptr[0x27] + 0x960))();
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
          goto LAB_01e0e138;
        }
        if (g_028b90a0 != 0) goto LAB_01e0e311;
      }
      else {
LAB_01e0e138:
        lVar2 = g_028b90a0;
        if (g_028b90a0 != local_40) {
          if (local_40 != 0) {
            FUN_00d50b00();
          }
          g_028b90a0 = local_40;
          if (lVar2 != 0) {
LAB_01e0e311:
            g_028b90a0 = local_40;
            FUN_00d50b20();
          }
        }
        if (local_40 != 0) {
          if (g_028b90a8 == '\0') {
            g_028b90a8 = '\x01';
            FUN_00e8cb90();
          }
          bVar1 = false;
          goto LAB_01e0e340;
        }
      }
      bVar1 = true;
LAB_01e0e340:
      (**(code **)(*this_ptr + 0x620))();
      *(void*)(this_ptr + 0x28) = 0xffffffff;
      if (bVar1) {
        g_028b90d1 = 1;
        return;
      }
      FUN_00d50b20();
      g_028b90d1 = 1;
      return;
    }
    if (0 < (int)this_ptr[0x28]) {
      g_028b90d1 = 1;
      return;
    }
    (**(code **)(*(int64_t *)this_ptr[0x27] + 0x960))();
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
        goto LAB_01e0e07b;
      }
      if (g_028b90a0 != 0) goto LAB_01e0e381;
    }
    else {
LAB_01e0e07b:
      lVar2 = g_028b90a0;
      if (g_028b90a0 != local_40) {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
        g_028b90a0 = local_40;
        if (lVar2 != 0) {
LAB_01e0e381:
          g_028b90a0 = local_40;
          FUN_00d50b20();
        }
      }
      if (local_40 != 0) {
        if (g_028b90a8 == '\0') {
          g_028b90a8 = '\x01';
          FUN_00e8cb90();
        }
        bVar1 = false;
        goto LAB_01e0e3b0;
      }
    }
    bVar1 = true;
LAB_01e0e3b0:
    (**(code **)(*this_ptr + 0x620))();
    *(void*)(this_ptr + 0x28) = 1;
    if (bVar1) {
      g_028b90d1 = 1;
      return;
    }
    FUN_00d50b20();
    g_028b90d1 = 1;
    return;
  }
  if ((int)this_ptr[0x28] == 0) goto LAB_01e0e229;
  (**(code **)(*(int64_t *)this_ptr[0x27] + 0x960))();
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
      goto LAB_01e0e0df;
    }
    if (g_028b90a0 != 0) goto LAB_01e0e1d5;
LAB_01e0e202:
    bVar1 = true;
  }
  else {
LAB_01e0e0df:
    lVar2 = g_028b90a0;
    if (g_028b90a0 != local_40) {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
      g_028b90a0 = local_40;
      if (lVar2 != 0) {
LAB_01e0e1d5:
        g_028b90a0 = local_40;
        FUN_00d50b20();
      }
    }
    if (local_40 == 0) goto LAB_01e0e202;
    if (g_028b90a8 == '\0') {
      g_028b90a8 = '\x01';
      FUN_00e8cb90();
    }
    bVar1 = false;
  }
  (**(code **)(*this_ptr + 0x620))();
  *(void*)(this_ptr + 0x28) = 0;
  if (!bVar1) {
    FUN_00d50b20();
  }
LAB_01e0e229:
  lVar2 = g_028b90a0;
  if (g_028b90a0 != 0) {
    FUN_00d50b00();
  }
  FUN_01e47f30();
  fVar5 = extraout_XMM0_Db - fVar5;
  FUN_01e07060(fVar5,(int)fVar5);
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  g_028b90d0 = 1;
  cVar3 = (**(code **)(*(int64_t *)this_ptr[0x27] + 0xa38))();
  if (cVar3 != '\0') {
    (**(code **)(*(int64_t *)this_ptr[0x27] + 0xaf0))();
  }
  g_028b90d1 = 0;
  return;
}



// ============================================================
// 01d06f70
// ============================================================
// Function: FUN_01d06f70
// Address: 01d06f70
// Size: 938 bytes
// Class: GNMultipleValue

uint64_t FUN_01d06f70(uint64_t param_1,char param_2)

{
  int64_t *plVar1;
  int64_t *plVar2;
  int64_t lVar3;
  char cVar4;
  int iVar5;
  int64_t **pplVar6;
  undefined7 uVar8;
  uint64_t uVar7;
  int64_t this_ptr;
  int64_t *plVar9;
  int64_t local_118;
  int64_t local_110 [2];
  uint8_t local_100;
  int64_t *local_f8;
  char local_f0;
  uint32_t local_a8;
  int64_t local_a0;
  uint8_t local_98;
  uint32_t local_90;
  int64_t local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  uint32_t local_48;
  uint32_t local_44;
  int64_t local_40;
  char local_38;
  
  plVar1 = *(int64_t **)(this_ptr + 0x1c8);
  if (plVar1 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  local_f0 = '\x01';
  local_f8 = plVar1;
  FUN_001b9d20();
  if (plVar1 == (int64_t *)0x0) {
LAB_01d06fd4:
    pplVar6 = &g_02802688;
    plVar9 = g_02802688;
    if (g_02802690 != '\0') goto LAB_01d06fe4;
LAB_01d07001:
    cVar4 = '\x01';
    if (plVar9 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar4 = FUN_00e85ea0();
    if (cVar4 == '\0') goto LAB_01d06fd4;
    pplVar6 = &local_f8;
    plVar9 = local_f8;
    if (local_f0 == '\0') goto LAB_01d07001;
LAB_01d06fe4:
    *(void*)(pplVar6 + 1) = 0;
    cVar4 = local_f0;
  }
  if ((cVar4 != '\0') && (plVar1 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  uVar8 = (undefined7)((uint64_t)plVar1 >> 8);
  if (plVar9 == (int64_t *)0x0) {
    uVar7 = CONCAT71(uVar8,1);
    if (param_2 == '\0') goto LAB_01d07306;
LAB_01d07051:
    FUN_01cfc6a0(g_02390124);
    plVar1 = local_f8;
    if ((local_f0 == '\0') &&
       (((local_f8 != (int64_t *)0x0 && (FUN_00d50b00(), local_f0 != '\0')) &&
        (local_f8 != (int64_t *)0x0)))) {
      FUN_00d50b20();
    }
    FUN_01cfc6a0(0);
    plVar2 = local_f8;
    if (((local_f0 == '\0') && (local_f8 != (int64_t *)0x0)) &&
       ((FUN_00d50b00(), local_f0 != '\0' && (local_f8 != (int64_t *)0x0)))) {
      FUN_00d50b20();
    }
    FUN_01cfbee0(g_02390120,g_02390120,g_02390120);
    local_48 = 0;
    FUN_01cfbee0(g_0239109c,g_0239109c,g_0239109c);
    local_44 = 0x3f000000;
    FUN_01cfbee0(g_02390128,g_02390128,g_02390128);
    FUN_01cfbee0(g_02390120,g_02390120,g_02390120);
    lVar3 = local_58;
    local_118 = local_78;
    local_110[0] = local_68;
    FUN_01a01f50(&local_118,&local_48,&local_44,local_110);
    local_a8 = 0x3f000000;
    local_f8 = (int64_t *)&g_02628b00;
    local_98 = 0;
    if (lVar3 != 0) {
      FUN_00d50b00();
    }
    local_a0 = lVar3;
    local_98 = 1;
    local_f8 = (int64_t *)&g_02645f38;
    local_90 = 0x3f800000;
    FUN_01f7b9d0(g_023b5d7c,&local_f8);
    lVar3 = local_40;
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_100 = 1;
    FUN_01d03810();
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    FUN_019fe220();
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    FUN_01d11e80();
    if (plVar2 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    uVar7 = CONCAT71((int7)((uint64_t)lVar3 >> 8),1);
    if (plVar9 == (int64_t *)0x0) goto LAB_01d07306;
  }
  else {
    iVar5 = FUN_01f7c6f0();
    uVar7 = CONCAT71(uVar8,iVar5 != 4);
    if ((iVar5 != 4) && (param_2 != '\0')) goto LAB_01d07051;
  }
  FUN_00d50b20();
LAB_01d07306:
  return uVar7 & 0xffffffff;
}



// ============================================================
// 01d5eb20
// ============================================================
// Function: FUN_01d5eb20
// Address: 01d5eb20
// Size: 784 bytes
// Class: GNMultipleValue

int64_t * FUN_01d5eb20(int param_1,int64_t *param_2)

{
  int64_t *plVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int64_t lVar6;
  uint uVar7;
  int64_t arg1;
  int64_t *this_ptr;
  int64_t lVar8;
  uint64_t uVar9;
  int64_t local_a0;
  uint8_t local_98;
  int64_t local_88;
  char local_80;
  int64_t local_48;
  char local_40;
  
  if (*param_2 != 0) {
    lVar6 = *(int64_t *)(arg1 + 0x18);
    uVar7 = *(uint *)(lVar6 + 0xc);
    uVar9 = (uint64_t)uVar7;
    if (0 < (int)uVar7) {
      lVar8 = 0;
      bVar2 = false;
      do {
        uVar7 = uVar7 - 1;
        lVar6 = *(int64_t *)(*(int64_t *)(lVar6 + 0x10) + (uint64_t)uVar7 * 8);
        if (lVar8 == lVar6) {
          lVar6 = lVar8;
          bVar3 = bVar2;
          if ((!bVar2) && (lVar8 != 0)) {
            FUN_00d50b00();
            bVar3 = true;
          }
        }
        else {
          if (lVar6 != 0) {
            FUN_00d50b00();
          }
          bVar3 = true;
          if ((bVar2) && (lVar8 != 0)) {
            FUN_00d50b20();
          }
        }
        iVar5 = FUN_01d654a0();
        if (iVar5 == param_1) {
          plVar1 = (int64_t *)*param_2;
          FUN_01d65460();
          if (local_40 == '\0') {
            if (local_48 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_40 = '\0';
          }
          cVar4 = (**(code **)(*plVar1 + 0x50))();
          if (local_48 != 0) {
            FUN_00d50b20();
          }
          if ((local_40 != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
          if (cVar4 != '\0') {
            *(void*)(this_ptr + 1) = 0;
            if ((!bVar3) && (lVar6 != 0)) {
              FUN_00d50b00();
            }
            goto LAB_01d5ee26;
          }
        }
        cVar4 = FUN_01d64c70();
        lVar8 = lVar6;
        bVar2 = bVar3;
        if (cVar4 != '\0') {
          FUN_01d64cb0();
          local_a0 = *param_2;
          local_98 = 0;
          FUN_01d5eb20(param_1,&local_a0);
          if (local_48 == lVar6) {
            if ((bVar3) || (local_48 == 0)) {
              if ((local_40 != '\0') && (local_48 != 0)) {
                FUN_00d50b20();
              }
            }
            else {
              bVar3 = true;
              if (local_40 == '\0') {
                FUN_00d50b00();
              }
            }
          }
          else if (local_40 == '\0') {
            if (local_48 != 0) {
              FUN_00d50b00();
            }
            if ((!bVar3) || (lVar6 == 0)) goto LAB_01d5ed5f;
            FUN_00d50b20();
            lVar6 = local_48;
            bVar3 = true;
          }
          else if ((bVar3) && (lVar6 != 0)) {
            FUN_00d50b20();
            lVar6 = local_48;
            bVar3 = true;
          }
          else {
LAB_01d5ed5f:
            lVar6 = local_48;
            bVar3 = true;
          }
          if ((local_80 != '\0') && (local_88 != 0)) {
            FUN_00d50b20();
          }
          if (lVar6 != 0) {
            *(void*)(this_ptr + 1) = 0;
            if (!bVar3) {
              FUN_00d50b00();
            }
LAB_01d5ee26:
            *this_ptr = lVar6;
            *(void*)(this_ptr + 1) = 1;
            return this_ptr;
          }
          lVar8 = 0;
          bVar2 = bVar3;
        }
        if ((int64_t)uVar9 < 2) {
          *(void*)(this_ptr + 1) = 0;
          *this_ptr = 0;
          if (!bVar2) {
            return this_ptr;
          }
          if (lVar8 == 0) {
            return this_ptr;
          }
          FUN_00d50b20();
          return this_ptr;
        }
        uVar9 = uVar9 - 1;
        lVar6 = *(int64_t *)(arg1 + 0x18);
      } while( true );
    }
  }
  *(void*)(this_ptr + 1) = 0;
  *this_ptr = 0;
  return this_ptr;
}



// ============================================================
// 01d57aa0
// ============================================================
// Function: FUN_01d57aa0
// Address: 01d57aa0
// Size: 835 bytes
// Class: GNMultipleValue
// String references:
//   "GNMultipleValue"
//   "GNImage"

void FUN_01d57aa0(void)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  char cVar4;
  int iVar5;
  int64_t *plVar6;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t local_50;
  char local_48;
  int64_t *local_40;
  
  plVar6 = (int64_t *)*arg1;
  if ((g_0277a3a0 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
    g_026d3c38 = FUN_00d4fe50();
    g_026d3c20 = "GNMultipleValue";
    g_026d3c28 = 0x18;
    g_026d3c30 = FUN_00050c70;
    g_026d3c40 = 0;
    ram_00000000026d3c48 = 0;
    g_026d3c50 = 0;
    ram_00000000026d3c58 = 0;
    g_026d3c60 = 0;
    ram_00000000026d3c68 = 0;
    g_026d3c70 = 0;
    ram_00000000026d3c78 = 0;
    g_026d3c80 = 0;
    ram_00000000026d3c88 = 0;
    g_026d3c90 = 0;
    ram_00000000026d3c98 = 0;
    g_026d3ca0 = 0;
    ram_00000000026d3ca8 = 0;
    g_026d3cb0 = 0;
    ram_00000000026d3cb8 = 0;
    g_026d3cc0 = 0;
    ram_00000000026d3cc8 = 0;
    g_026d3cd0 = 0;
    ram_00000000026d3cd8 = 0;
    g_026d3ce0 = 0;
    ___cxa_guard_release();
  }
  if (plVar6 == (int64_t *)0x0) {
LAB_01d57af0:
    plVar6 = &g_02802688;
  }
  else {
    (**(code **)(*plVar6 + 0x360))();
    cVar4 = FUN_00e85ea0();
    plVar6 = arg1;
    if (cVar4 == '\0') goto LAB_01d57af0;
  }
  lVar2 = plVar6[1];
  if (((char)lVar2 == '\0') || (*plVar6 == 0)) {
    if (*plVar6 != 0) goto LAB_01d57b1c;
  }
  else {
    FUN_00d50b00();
LAB_01d57b1c:
    FUN_00e987e0();
    lVar1 = *arg1;
    if (lVar1 == local_50) {
      if (((char)arg1[1] != '\0') || (local_50 == 0)) goto LAB_01d57bba;
      if (local_48 == '\0') {
        FUN_00d50b00();
        goto LAB_01d57bb3;
      }
LAB_01d57b7d:
      local_40 = arg1 + 1;
      *(void*)local_40 = 1;
    }
    else {
      lVar3 = arg1[1];
      if (local_48 != '\0') {
        *arg1 = local_50;
        if (((char)lVar3 != '\0') && (lVar1 != 0)) {
          FUN_00d50b20();
        }
        goto LAB_01d57b7d;
      }
      if (local_50 != 0) {
        FUN_00d50b00();
      }
      *arg1 = local_50;
      if (((char)lVar3 != '\0') && (lVar1 != 0)) {
        FUN_00d50b20();
      }
LAB_01d57bb3:
      local_40 = arg1 + 1;
      *(void*)local_40 = 1;
LAB_01d57bba:
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
    }
    if ((char)lVar2 != '\0') {
      FUN_00d50b20();
    }
  }
  plVar6 = (int64_t *)*arg1;
  if ((g_026ed470 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
    g_027f7318 = FUN_00d4fe50();
    g_027f7300 = "GNImage";
    g_027f7308 = 0x68;
    g_027f7310 = FUN_001cdcc0;
    g_027f7320 = 0;
    ram_00000000027f7328 = 0;
    g_027f7330 = 0;
    ram_00000000027f7338 = 0;
    g_027f7340 = 0;
    ram_00000000027f7348 = 0;
    g_027f7350 = 0;
    ram_00000000027f7358 = 0;
    g_027f7360 = 0;
    ram_00000000027f7368 = 0;
    g_027f7370 = 0;
    ram_00000000027f7378 = 0;
    g_027f7380 = 0;
    ram_00000000027f7388 = 0;
    g_027f7390 = 0;
    ram_00000000027f7398 = 0;
    g_027f73a0 = 0;
    ram_00000000027f73a8 = 0;
    g_027f73b0 = 0;
    ram_00000000027f73b8 = 0;
    g_027f73c0 = 0;
    ___cxa_guard_release();
  }
  if (plVar6 == (int64_t *)0x0) {
LAB_01d57c15:
    plVar6 = &g_02802688;
  }
  else {
    (**(code **)(*plVar6 + 0x360))();
    cVar4 = FUN_00e85ea0();
    plVar6 = arg1;
    if (cVar4 == '\0') goto LAB_01d57c15;
  }
  if (*plVar6 == 0) {
    if (this_ptr[0x39] == 0) {
      return;
    }
    this_ptr[0x39] = 0;
  }
  else {
    lVar2 = *arg1;
    lVar1 = this_ptr[0x39];
    if (lVar2 == lVar1) {
      return;
    }
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    this_ptr[0x39] = lVar2;
    if (lVar1 == 0) goto LAB_01d57c74;
  }
  FUN_00d50b20();
LAB_01d57c74:
  (**(code **)(*this_ptr + 0x620))();
  return;
}



// ============================================================
// 01d069b0
// ============================================================
// Function: FUN_01d069b0
// Address: 01d069b0
// Size: 846 bytes
// Class: GNMultipleValue

uint64_t FUN_01d069b0(uint64_t param_1,char param_2)

{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t *plVar3;
  char cVar4;
  int iVar5;
  int64_t **pplVar6;
  undefined7 uVar8;
  uint64_t uVar7;
  int64_t this_ptr;
  int64_t *plVar9;
  int64_t local_e0 [2];
  uint8_t local_d0;
  int64_t local_c8;
  char local_c0;
  int64_t local_b8;
  char local_b0;
  int64_t *local_a8;
  char local_a0;
  int64_t *local_98;
  char local_90;
  uint32_t local_84;
  int64_t local_80;
  char local_78;
  int64_t *local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t local_48;
  char local_40;
  uint32_t local_38;
  
  plVar1 = *(int64_t **)(this_ptr + 0x1c8);
  if (plVar1 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  local_68 = '\x01';
  local_70 = plVar1;
  FUN_001b9d20();
  if (plVar1 == (int64_t *)0x0) {
LAB_01d06a0e:
    pplVar6 = &g_02802688;
    plVar9 = g_02802688;
    if (g_02802690 != '\0') goto LAB_01d06a1e;
LAB_01d06a35:
    cVar4 = '\x01';
    if (plVar9 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar4 = FUN_00e85ea0();
    if (cVar4 == '\0') goto LAB_01d06a0e;
    pplVar6 = &local_70;
    plVar9 = local_70;
    if (local_68 == '\0') goto LAB_01d06a35;
LAB_01d06a1e:
    *(void*)(pplVar6 + 1) = 0;
    cVar4 = local_68;
  }
  if ((cVar4 != '\0') && (plVar1 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  uVar8 = (undefined7)((uint64_t)plVar1 >> 8);
  if (plVar9 == (int64_t *)0x0) {
    uVar7 = CONCAT71(uVar8,1);
    if (param_2 == '\0') goto LAB_01d06cea;
LAB_01d06a85:
    FUN_01cfc6a0(g_02390124);
    plVar1 = local_70;
    if ((local_68 == '\0') &&
       (((local_70 != (int64_t *)0x0 && (FUN_00d50b00(), local_68 != '\0')) &&
        (local_70 != (int64_t *)0x0)))) {
      FUN_00d50b20();
    }
    FUN_01cfc6a0(0);
    plVar3 = local_70;
    if (((local_68 == '\0') && (local_70 != (int64_t *)0x0)) &&
       ((FUN_00d50b00(), local_68 != '\0' && (local_70 != (int64_t *)0x0)))) {
      FUN_00d50b20();
    }
    local_a8 = plVar1;
    local_a0 = '\0';
    FUN_01cfd130();
    local_84 = 0;
    local_98 = plVar3;
    local_90 = '\0';
    FUN_01cfd130();
    local_e0[0] = local_b8;
    FUN_0049c630(local_e0,&local_84,4);
    local_70 = (int64_t *)&g_02647118;
    local_38 = 0x3f800000;
    FUN_01f7b9d0(g_023b5d7c,&local_70);
    lVar2 = local_80;
    if (local_78 == '\0') {
      if (local_80 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_78 = '\0';
    }
    local_d0 = 1;
    FUN_01d03810();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    local_70 = (int64_t *)&g_024f9300;
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    local_70 = &g_024c5048;
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if ((local_b0 != '\0') && (local_b8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_90 != '\0') && (local_98 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_c0 != '\0') && (local_c8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_a0 != '\0') && (local_a8 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_01d11e80();
    if (plVar3 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    uVar7 = CONCAT71((int7)((uint64_t)lVar2 >> 8),1);
    if (plVar9 == (int64_t *)0x0) goto LAB_01d06cea;
  }
  else {
    iVar5 = FUN_01f7c6f0();
    uVar7 = CONCAT71(uVar8,iVar5 != 2);
    if ((iVar5 != 2) && (param_2 != '\0')) goto LAB_01d06a85;
  }
  FUN_00d50b20();
LAB_01d06cea:
  return uVar7 & 0xffffffff;
}



// ============================================================
// 01d73110
// ============================================================
// Function: FUN_01d73110
// Address: 01d73110
// Size: 592 bytes
// Class: GNMultipleValue

uint64_t FUN_01d73110(void)

{
  uint8_t auVar1 [16];
  uint8_t auVar2 [16];
  uint64_t uVar3;
  char cVar4;
  int iVar5;
  int64_t **pplVar6;
  int64_t *this_ptr;
  int64_t *plVar7;
  int64_t *plVar8;
  int iVar9;
  uint32_t extraout_XMM0_Da;
  uint64_t uVar10;
  float extraout_XMM0_Dc;
  float extraout_XMM0_Dd;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  uint8_t auVar15 [16];
  uint8_t local_88 [16];
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t *local_40;
  char local_38;
  
  local_88 = ZEXT816(0);
  iVar9 = 0;
  plVar7 = (int64_t *)0x0;
  do {
    iVar5 = FUN_01d6fde0();
    if (iVar5 <= iVar9) {
      if (plVar7 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      return local_88._0_8_;
    }
    FUN_01d70140(extraout_XMM0_Da,iVar9);
    plVar8 = local_40;
    if (local_40 == plVar7) {
LAB_01d731c1:
      plVar8 = plVar7;
      if (local_38 != '\0') {
LAB_01d731c7:
        if (local_40 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
      }
    }
    else {
      if (local_38 == '\0') {
        if (local_40 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        if (plVar7 != (int64_t *)0x0) {
          FUN_00d50b20();
          plVar7 = plVar8;
          goto LAB_01d731c1;
        }
        if (local_38 == '\0') goto LAB_01d731e0;
        goto LAB_01d731c7;
      }
      if (plVar7 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
    }
LAB_01d731e0:
    (**(code **)(*this_ptr + 0x640))();
    plVar7 = local_40;
    (**(code **)(*this_ptr + 0x9e8))();
    local_48 = 0;
    if (local_58 == '\0') {
      if (local_60 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_58 = '\0';
    }
    local_48 = '\x01';
    local_50 = local_60;
    uVar10 = (**(code **)(*plVar7 + 0x5d0))(0,&local_50);
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    (**(code **)(*this_ptr + 0x640))();
    plVar7 = local_40;
    FUN_01d74c10();
    pplVar6 = (int64_t **)&g_02802688;
    if (plVar7 != (int64_t *)0x0) {
      (**(code **)(*plVar7 + 0x360))();
      cVar4 = FUN_00e85ea0();
      pplVar6 = &local_40;
      if (cVar4 == '\0') {
        pplVar6 = (int64_t **)&g_02802688;
      }
    }
    plVar7 = *pplVar6;
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    fVar11 = extraout_XMM0_Dc + _UNK_023b18f8;
    fVar12 = extraout_XMM0_Dd + _UNK_023b18fc;
    uVar3 = CONCAT44((float)((uint64_t)uVar10 >> 0x20) + _UNK_023b18f4,
                     (float)uVar10 + g_023b18f0);
    if (plVar7 != (int64_t *)0x0) {
      fVar11 = extraout_XMM0_Dc;
      fVar12 = extraout_XMM0_Dd;
      uVar3 = uVar10;
    }
    fVar13 = fVar11;
    fVar14 = fVar12;
    uVar10 = uVar3;
    if ((float)uVar3 <= local_88._0_4_) {
      fVar13 = local_88._8_4_;
      fVar14 = local_88._12_4_;
      uVar10 = local_88._0_8_;
    }
    auVar15._4_4_ = -(uint)(local_88._4_4_ < (float)((uint64_t)uVar3 >> 0x20));
    auVar15._0_4_ = -(uint)(local_88._0_4_ < (float)uVar3);
    auVar15._8_4_ = -(uint)(local_88._8_4_ < fVar11);
    auVar15._12_4_ = -(uint)(local_88._12_4_ < fVar12);
    auVar1._8_4_ = fVar11;
    auVar1._0_8_ = uVar3;
    auVar1._12_4_ = fVar12;
    auVar15 = blendvps(local_88,auVar1,auVar15);
    auVar2._8_4_ = fVar13;
    auVar2._0_8_ = uVar10;
    auVar2._12_4_ = fVar14;
    local_88 = blendps(auVar15,auVar2,0xd);
    iVar9 = iVar9 + 1;
    plVar7 = plVar8;
  } while( true );
}



// ============================================================
// 01ccbbc0
// ============================================================
// Function: FUN_01ccbbc0
// Address: 01ccbbc0
// Size: 641 bytes
// Class: GNMultipleValue

uint64_t FUN_01ccbbc0(uint64_t param_1,void*param_2)

{
  int64_t lVar1;
  int64_t *plVar2;
  int64_t *plVar3;
  uint uVar4;
  uint64_t unaff_RBX;
  uint64_t uVar5;
  int64_t *arg1;
  uint64_t local_b0;
  uint8_t local_a8;
  uint64_t local_a0;
  uint8_t local_98;
  uint64_t local_90;
  int64_t local_88;
  int64_t local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  int64_t *local_60;
  char local_58;
  int64_t *local_50;
  int64_t *local_48;
  int64_t *local_40;
  char local_38;
  
  local_b0 = *param_2;
  local_a8 = 0;
  local_90 = param_1;
  FUN_01ccab60(param_1,&local_b0);
  if (local_38 == '\0') {
    if (local_40 != (int64_t *)0x0) {
      local_48 = local_40;
      FUN_00d50b00();
      goto LAB_01ccbc2b;
    }
  }
  else {
    local_48 = local_40;
    if (local_40 != (int64_t *)0x0) {
LAB_01ccbc2b:
      FUN_01cc98b0();
      plVar2 = local_40;
      if (local_38 == '\0') {
        if (local_40 != (int64_t *)0x0) {
          FUN_00d50b00();
          goto LAB_01ccbc74;
        }
LAB_01ccbcc9:
        uVar5 = CONCAT71((int7)((uint64_t)plVar2 >> 8),1);
      }
      else {
        if (local_40 == (int64_t *)0x0) goto LAB_01ccbcc9;
LAB_01ccbc74:
        lVar1 = plVar2[5];
        FUN_00d50b20();
        if (lVar1 == 0) goto LAB_01ccbcc9;
        local_88 = lVar1;
        FUN_00d50b00();
        local_a0 = *param_2;
        local_98 = 0;
        FUN_01ccac20();
        plVar2 = local_40;
        if (local_38 == '\0') {
          if (local_40 != (int64_t *)0x0) {
            FUN_00d50b00();
            goto LAB_01ccbce1;
          }
        }
        else if (local_40 != (int64_t *)0x0) {
LAB_01ccbce1:
          local_80 = *arg1;
          local_78 = '\0';
          (**(code **)(*plVar2 + 0x378))();
          plVar3 = local_40;
          plVar2 = (int64_t *)*arg1;
          if (plVar2 == local_40) {
            if (((char)arg1[1] == '\0') && (local_40 != (int64_t *)0x0)) {
              local_50 = arg1 + 1;
              if (local_38 != '\0') goto LAB_01ccbd50;
              FUN_00d50b00();
              goto LAB_01ccbd89;
            }
LAB_01ccbd90:
            if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            local_50 = arg1 + 1;
            lVar1 = arg1[1];
            if (local_38 == '\0') {
              if (local_40 != (int64_t *)0x0) {
                FUN_00d50b00();
              }
              *arg1 = (int64_t)plVar3;
              if (((char)lVar1 != '\0') && (plVar2 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
LAB_01ccbd89:
              *(void*)local_50 = 1;
              goto LAB_01ccbd90;
            }
            *arg1 = (int64_t)local_40;
            if (((char)lVar1 != '\0') && (plVar2 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
LAB_01ccbd50:
            *(void*)local_50 = 1;
            local_38 = '\0';
          }
          if ((local_78 != '\0') && (local_80 != 0)) {
            FUN_00d50b20();
          }
          FUN_00d50b20();
        }
        local_70 = *arg1;
        local_68 = '\0';
        local_60 = local_48;
        local_58 = '\0';
        uVar4 = FUN_01d28720(local_90,&local_60);
        uVar5 = (uint64_t)uVar4;
        if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_68 != '\0') && (local_70 != 0)) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
      }
      FUN_00d50b20();
      goto LAB_01ccbe2d;
    }
  }
  uVar5 = CONCAT71((int7)((uint64_t)unaff_RBX >> 8),1);
LAB_01ccbe2d:
  return uVar5 & 0xffffffff;
}



// ============================================================
// 01cf0820
// ============================================================
// Function: FUN_01cf0820
// Address: 01cf0820
// Size: 913 bytes
// Class: GNMultipleValue

void FUN_01cf0820(uint64_t param_1,uint32_t param_2)

{
  byte bVar1;
  int64_t lVar2;
  int64_t lVar3;
  char cVar4;
  int iVar5;
  bool bVar6;
  int64_t *arg1;
  int64_t *this_ptr;
  uint32_t uVar7;
  uint32_t uVar8;
  int64_t local_48;
  char local_40;
  
  iVar5 = FUN_01d3a5a0();
  if ((iVar5 == 1) && (iVar5 = FUN_01d3b630(), iVar5 == 1)) {
    cVar4 = (**(code **)(*this_ptr + 0x9a0))();
    if (cVar4 != '\0') {
      cVar4 = (**(code **)(*this_ptr + 0x878))();
      if ((cVar4 != '\0') && (cVar4 = FUN_01e420b0(), cVar4 == '\0')) {
        FUN_01e42250();
      }
      FUN_00d50b00();
      if (*(int *)((int64_t)this_ptr + 500) == 2) {
        *(void*)(this_ptr + 0x31) = 1;
        *(void*)(this_ptr + 0x29) = 1;
        FUN_01d11e80();
      }
      bVar1 = 0;
      do {
        FUN_01d3abf0();
        uVar7 = FUN_01e466c0();
        uVar8 = FUN_01e3f820();
        cVar4 = FUN_00d05410(uVar7,uVar8,param_2);
        bVar6 = true;
        if (cVar4 == '\0') {
          bVar6 = *(int *)((int64_t)this_ptr + 500) == 2;
        }
        *(bool *)(this_ptr + 0x31) = bVar6;
        param_2 = uVar8;
        if ((bool)(bVar1 & 1) != bVar6) {
          if (*(char *)((int64_t)this_ptr + 0x16b) != '\0') {
            *(uint *)(this_ptr + 0x29) = (uint)((int)this_ptr[0x29] < 1);
          }
          (**(code **)(*this_ptr + 0x620))();
          bVar1 = *(byte *)(this_ptr + 0x31);
          param_2 = uVar8;
        }
        (**(code **)(*this_ptr + 0x658))();
        lVar2 = *arg1;
        if (lVar2 == local_48) {
          if (((char)arg1[1] != '\0') || (local_48 == 0)) goto LAB_01cf09f1;
          if (local_40 == '\0') {
            FUN_00d50b00();
            goto LAB_01cf09ec;
          }
LAB_01cf09b2:
          *(void*)(arg1 + 1) = 1;
        }
        else {
          lVar3 = arg1[1];
          if (local_40 != '\0') {
            *arg1 = local_48;
            if (((char)lVar3 != '\0') && (lVar2 != 0)) {
              FUN_00d50b20();
            }
            goto LAB_01cf09b2;
          }
          if (local_48 != 0) {
            FUN_00d50b00();
          }
          *arg1 = local_48;
          if (((char)lVar3 != '\0') && (lVar2 != 0)) {
            FUN_00d50b20();
          }
LAB_01cf09ec:
          *(void*)(arg1 + 1) = 1;
LAB_01cf09f1:
          if ((local_40 != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
        }
      } while ((*arg1 != 0) && (iVar5 = FUN_01d3a5a0(), iVar5 != 6));
      if ((char)this_ptr[0x31] != '\0') {
        if (*(int *)((int64_t)this_ptr + 500) == 2) {
          *(void*)(this_ptr + 0x29) = 0;
        }
        FUN_01d11e80();
      }
      *(void*)(this_ptr + 0x31) = 0;
      (**(code **)(*this_ptr + 0x620))();
      FUN_00d50b20();
    }
  }
  else {
    iVar5 = FUN_01d3a5a0();
    if ((iVar5 == 2) && (cVar4 = (**(code **)(*this_ptr + 0xa98))(), cVar4 != '\0')) {
      cVar4 = (**(code **)(*this_ptr + 0x9a0))();
      if (cVar4 == '\0') {
        return;
      }
      (**(code **)(*this_ptr + 0xa58))();
      if (*(char *)((int64_t)this_ptr + 0x16b) != '\0') {
        (**(code **)(*this_ptr + 0x918))();
      }
    }
    else {
      iVar5 = FUN_01d3a5a0();
      if ((iVar5 == 9) && (cVar4 = (**(code **)(*this_ptr + 0xa98))(), cVar4 != '\0')) {
        cVar4 = (**(code **)(*this_ptr + 0x9a0))();
        if (cVar4 == '\0') {
          return;
        }
        cVar4 = (**(code **)(*this_ptr + 0xa78))();
        if (cVar4 == '\0') {
          return;
        }
        (**(code **)(*this_ptr + 0xa58))();
        FUN_01d11e80();
        return;
      }
    }
    FUN_01d122b0();
  }
  return;
}



// ============================================================
// 01d7ad50
// ============================================================
// Function: FUN_01d7ad50
// Address: 01d7ad50
// Size: 872 bytes
// Class: GNMultipleValue
// String references:
//   "GNMultipleValue"
//   "GNString"

void FUN_01d7ad50(void)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  char cVar4;
  int iVar5;
  int64_t *plVar6;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t local_50;
  char local_48;
  int64_t *local_40;
  
  plVar6 = (int64_t *)*arg1;
  if ((g_0277a3a0 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
    g_026d3c38 = FUN_00d4fe50();
    g_026d3c20 = "GNMultipleValue";
    g_026d3c28 = 0x18;
    g_026d3c30 = FUN_00050c70;
    g_026d3c40 = 0;
    ram_00000000026d3c48 = 0;
    g_026d3c50 = 0;
    ram_00000000026d3c58 = 0;
    g_026d3c60 = 0;
    ram_00000000026d3c68 = 0;
    g_026d3c70 = 0;
    ram_00000000026d3c78 = 0;
    g_026d3c80 = 0;
    ram_00000000026d3c88 = 0;
    g_026d3c90 = 0;
    ram_00000000026d3c98 = 0;
    g_026d3ca0 = 0;
    ram_00000000026d3ca8 = 0;
    g_026d3cb0 = 0;
    ram_00000000026d3cb8 = 0;
    g_026d3cc0 = 0;
    ram_00000000026d3cc8 = 0;
    g_026d3cd0 = 0;
    ram_00000000026d3cd8 = 0;
    g_026d3ce0 = 0;
    ___cxa_guard_release();
  }
  if (plVar6 == (int64_t *)0x0) {
LAB_01d7ada0:
    plVar6 = &g_02802688;
  }
  else {
    (**(code **)(*plVar6 + 0x360))();
    cVar4 = FUN_00e85ea0();
    plVar6 = arg1;
    if (cVar4 == '\0') goto LAB_01d7ada0;
  }
  lVar2 = plVar6[1];
  if (((char)lVar2 == '\0') || (*plVar6 == 0)) {
    if (*plVar6 != 0) goto LAB_01d7adcc;
  }
  else {
    FUN_00d50b00();
LAB_01d7adcc:
    FUN_00e987e0();
    lVar1 = *arg1;
    if (lVar1 == local_50) {
      if (((char)arg1[1] != '\0') || (local_50 == 0)) goto LAB_01d7ae6a;
      if (local_48 == '\0') {
        FUN_00d50b00();
        goto LAB_01d7ae63;
      }
LAB_01d7ae2d:
      local_40 = arg1 + 1;
      *(void*)local_40 = 1;
    }
    else {
      lVar3 = arg1[1];
      if (local_48 != '\0') {
        *arg1 = local_50;
        if (((char)lVar3 != '\0') && (lVar1 != 0)) {
          FUN_00d50b20();
        }
        goto LAB_01d7ae2d;
      }
      if (local_50 != 0) {
        FUN_00d50b00();
      }
      *arg1 = local_50;
      if (((char)lVar3 != '\0') && (lVar1 != 0)) {
        FUN_00d50b20();
      }
LAB_01d7ae63:
      local_40 = arg1 + 1;
      *(void*)local_40 = 1;
LAB_01d7ae6a:
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
    }
    if ((char)lVar2 != '\0') {
      FUN_00d50b20();
    }
  }
  plVar6 = (int64_t *)*arg1;
  if ((g_026fd0c0 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
    g_026d5e58 = FUN_00d4fe50();
    g_026d5e40 = "GNString";
    g_026d5e48 = 0x40;
    g_026d5e50 = FUN_0005d920;
    g_026d5e60 = 0;
    ram_00000000026d5e68 = 0;
    g_026d5e70 = 0;
    ram_00000000026d5e78 = 0;
    g_026d5e80 = 0;
    ram_00000000026d5e88 = 0;
    g_026d5e90 = 0;
    ram_00000000026d5e98 = 0;
    g_026d5ea0 = 0;
    ram_00000000026d5ea8 = 0;
    g_026d5eb0 = 0;
    ram_00000000026d5eb8 = 0;
    g_026d5ec0 = 0;
    ram_00000000026d5ec8 = 0;
    g_026d5ed0 = 0;
    ram_00000000026d5ed8 = 0;
    g_026d5ee0 = 0;
    ram_00000000026d5ee8 = 0;
    g_026d5ef0 = 0;
    ram_00000000026d5ef8 = 0;
    g_026d5f00 = 0;
    ___cxa_guard_release();
  }
  if (plVar6 != (int64_t *)0x0) {
    (**(code **)(*plVar6 + 0x360))();
    cVar4 = FUN_00e85ea0();
    if (cVar4 != '\0') goto LAB_01d7aecc;
  }
  arg1 = &g_02802688;
LAB_01d7aecc:
  lVar2 = arg1[1];
  if (((char)lVar2 == '\0') || (*arg1 == 0)) {
    if (*arg1 == 0) {
      FUN_01cf0cb0();
      return;
    }
  }
  else {
    FUN_00d50b00();
  }
  (**(code **)(*this_ptr + 0x968))();
  if ((char)lVar2 != '\0') {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 01d70eb0
// ============================================================
// Function: FUN_01d70eb0
// Address: 01d70eb0
// Size: 914 bytes
// Class: GNMultipleValue
// String references:
//   "GNMultipleValue"
//   "GNString"

void FUN_01d70eb0(void)

{
  int64_t lVar1;
  int64_t lVar2;
  char cVar3;
  int iVar4;
  int64_t *plVar5;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t local_60;
  char local_58;
  
  plVar5 = (int64_t *)*arg1;
  if (plVar5 == (int64_t *)0x0) {
                                            (**(code **)(*this_ptr + 0x918))();
    return;
  }
  if ((g_0277a3a0 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
    g_026d3c38 = FUN_00d4fe50();
    g_026d3c20 = "GNMultipleValue";
    g_026d3c28 = 0x18;
    g_026d3c30 = FUN_00050c70;
    g_026d3c40 = 0;
    ram_00000000026d3c48 = 0;
    g_026d3c50 = 0;
    ram_00000000026d3c58 = 0;
    g_026d3c60 = 0;
    ram_00000000026d3c68 = 0;
    g_026d3c70 = 0;
    ram_00000000026d3c78 = 0;
    g_026d3c80 = 0;
    ram_00000000026d3c88 = 0;
    g_026d3c90 = 0;
    ram_00000000026d3c98 = 0;
    g_026d3ca0 = 0;
    ram_00000000026d3ca8 = 0;
    g_026d3cb0 = 0;
    ram_00000000026d3cb8 = 0;
    g_026d3cc0 = 0;
    ram_00000000026d3cc8 = 0;
    g_026d3cd0 = 0;
    ram_00000000026d3cd8 = 0;
    g_026d3ce0 = 0;
    ___cxa_guard_release();
  }
  (**(code **)(*plVar5 + 0x360))();
  cVar3 = FUN_00e85ea0();
  plVar5 = arg1;
  if (cVar3 == '\0') {
    plVar5 = &g_02802688;
  }
  cVar3 = (char)plVar5[1];
  if ((cVar3 == '\0') || (*plVar5 == 0)) {
    if (*plVar5 != 0) goto LAB_01d70f4b;
  }
  else {
    FUN_00d50b00();
LAB_01d70f4b:
    FUN_00e987e0();
    if (local_58 == '\0') {
      if (local_60 == 0) goto LAB_01d70fb7;
      FUN_00d50b00();
    }
    else if (local_60 == 0) {
LAB_01d70fb7:
      (**(code **)(*this_ptr + 0x918))();
      if (cVar3 == '\0') {
        return;
      }
      FUN_00d50b20();
      return;
    }
    lVar1 = *arg1;
    lVar2 = arg1[1];
    if (lVar1 == local_60) {
      if ((char)lVar2 == '\0') {
        FUN_00d50b00();
        goto LAB_01d70fed;
      }
    }
    else {
      FUN_00d50b00();
      *arg1 = local_60;
      if (((char)lVar2 != '\0') && (lVar1 != 0)) {
        FUN_00d50b20();
      }
LAB_01d70fed:
      *(void*)(arg1 + 1) = 1;
    }
    FUN_00d50b20();
    if (cVar3 != '\0') {
      FUN_00d50b20();
    }
  }
  plVar5 = (int64_t *)*arg1;
  FUN_00053ac0();
  if (plVar5 == (int64_t *)0x0) {
LAB_01d71038:
    plVar5 = &g_02802688;
  }
  else {
    (**(code **)(*plVar5 + 0x360))();
    cVar3 = FUN_00e85ea0();
    plVar5 = arg1;
    if (cVar3 == '\0') goto LAB_01d71038;
  }
  if (*plVar5 != 0) {
    FUN_00d45870();
    (**(code **)(*this_ptr + 0x918))();
    return;
  }
  plVar5 = (int64_t *)*arg1;
  if ((g_026fd0c0 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
    g_026d5e58 = FUN_00d4fe50();
    g_026d5e40 = "GNString";
    g_026d5e48 = 0x40;
    g_026d5e50 = FUN_0005d920;
    g_026d5e60 = 0;
    ram_00000000026d5e68 = 0;
    g_026d5e70 = 0;
    ram_00000000026d5e78 = 0;
    g_026d5e80 = 0;
    ram_00000000026d5e88 = 0;
    g_026d5e90 = 0;
    ram_00000000026d5e98 = 0;
    g_026d5ea0 = 0;
    ram_00000000026d5ea8 = 0;
    g_026d5eb0 = 0;
    ram_00000000026d5eb8 = 0;
    g_026d5ec0 = 0;
    ram_00000000026d5ec8 = 0;
    g_026d5ed0 = 0;
    ram_00000000026d5ed8 = 0;
    g_026d5ee0 = 0;
    ram_00000000026d5ee8 = 0;
    g_026d5ef0 = 0;
    ram_00000000026d5ef8 = 0;
    g_026d5f00 = 0;
    ___cxa_guard_release();
  }
  if (plVar5 != (int64_t *)0x0) {
    (**(code **)(*plVar5 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 != '\0') goto LAB_01d710af;
  }
  arg1 = &g_02802688;
LAB_01d710af:
  if (*arg1 != 0) {
    (**(code **)(*this_ptr + 0x968))();
  }
  return;
}



// ============================================================
// 01dae3c0
// ============================================================
// Function: FUN_01dae3c0
// Address: 01dae3c0
// Size: 866 bytes
// Class: GNMultipleValue
// String references:
//   "GNMultipleValue"
//   "GNString"

void FUN_01dae3c0(void)

{
  int64_t lVar1;
  char cVar2;
  int iVar3;
  int64_t *plVar4;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t local_38;
  char local_30;
  
  plVar4 = (int64_t *)*arg1;
  if ((g_0277a3a0 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
    g_026d3c38 = FUN_00d4fe50();
    g_026d3c20 = "GNMultipleValue";
    g_026d3c28 = 0x18;
    g_026d3c30 = FUN_00050c70;
    g_026d3c40 = 0;
    ram_00000000026d3c48 = 0;
    g_026d3c50 = 0;
    ram_00000000026d3c58 = 0;
    g_026d3c60 = 0;
    ram_00000000026d3c68 = 0;
    g_026d3c70 = 0;
    ram_00000000026d3c78 = 0;
    g_026d3c80 = 0;
    ram_00000000026d3c88 = 0;
    g_026d3c90 = 0;
    ram_00000000026d3c98 = 0;
    g_026d3ca0 = 0;
    ram_00000000026d3ca8 = 0;
    g_026d3cb0 = 0;
    ram_00000000026d3cb8 = 0;
    g_026d3cc0 = 0;
    ram_00000000026d3cc8 = 0;
    g_026d3cd0 = 0;
    ram_00000000026d3cd8 = 0;
    g_026d3ce0 = 0;
    ___cxa_guard_release();
  }
  if (plVar4 == (int64_t *)0x0) {
LAB_01dae40d:
    plVar4 = &g_02802688;
  }
  else {
    (**(code **)(*plVar4 + 0x360))();
    cVar2 = FUN_00e85ea0();
    plVar4 = arg1;
    if (cVar2 == '\0') goto LAB_01dae40d;
  }
  lVar1 = plVar4[1];
  if (((char)lVar1 != '\0') && (*plVar4 != 0)) {
    FUN_00d50b00();
LAB_01dae434:
    FUN_00e991a0();
    (**(code **)(*this_ptr + 0x928))();
    if ((char)lVar1 != '\0') {
      FUN_00d50b20();
    }
    return;
  }
  if (*plVar4 != 0) goto LAB_01dae434;
  plVar4 = (int64_t *)*arg1;
  FUN_00053ac0();
  if (plVar4 == (int64_t *)0x0) {
LAB_01dae48c:
    plVar4 = &g_02802688;
  }
  else {
    (**(code **)(*plVar4 + 0x360))();
    cVar2 = FUN_00e85ea0();
    plVar4 = arg1;
    if (cVar2 == '\0') goto LAB_01dae48c;
  }
  if (*plVar4 != 0) {
    FUN_00d459e0();
    goto LAB_01dae4f0;
  }
  plVar4 = (int64_t *)*arg1;
  if ((g_026fd0c0 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
    g_026d5e58 = FUN_00d4fe50();
    g_026d5e40 = "GNString";
    g_026d5e48 = 0x40;
    g_026d5e50 = FUN_0005d920;
    g_026d5e60 = 0;
    ram_00000000026d5e68 = 0;
    g_026d5e70 = 0;
    ram_00000000026d5e78 = 0;
    g_026d5e80 = 0;
    ram_00000000026d5e88 = 0;
    g_026d5e90 = 0;
    ram_00000000026d5e98 = 0;
    g_026d5ea0 = 0;
    ram_00000000026d5ea8 = 0;
    g_026d5eb0 = 0;
    ram_00000000026d5eb8 = 0;
    g_026d5ec0 = 0;
    ram_00000000026d5ec8 = 0;
    g_026d5ed0 = 0;
    ram_00000000026d5ed8 = 0;
    g_026d5ee0 = 0;
    ram_00000000026d5ee8 = 0;
    g_026d5ef0 = 0;
    ram_00000000026d5ef8 = 0;
    g_026d5f00 = 0;
    ___cxa_guard_release();
  }
  if (plVar4 == (int64_t *)0x0) {
LAB_01dae4db:
    arg1 = &g_02802688;
  }
  else {
    (**(code **)(*plVar4 + 0x360))();
    cVar2 = FUN_00e85ea0();
    if (cVar2 == '\0') goto LAB_01dae4db;
  }
  if (*arg1 == 0) {
    (**(code **)(*this_ptr + 0x990))();
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    if (local_38 != 0) {
      (**(code **)(*this_ptr + 0x990))();
      if (local_30 == '\0') {
        if (local_38 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_30 = '\0';
      }
      FUN_00c71d60();
      (**(code **)(*this_ptr + 0x928))();
      if (local_38 != 0) {
        FUN_00d50b20();
      }
      if (local_30 == '\0') {
        return;
      }
      if (local_38 == 0) {
        return;
      }
      FUN_00d50b20();
      return;
    }
    (**(code **)(*this_ptr + 0xac0))();
  }
  else {
    FUN_00d8d7b0();
  }
LAB_01dae4f0:
  (**(code **)(*this_ptr + 0x928))();
  return;
}



// ============================================================
// 01d5e6e0
// ============================================================
// Function: FUN_01d5e6e0
// Address: 01d5e6e0
// Size: 769 bytes
// Class: GNMultipleValue

int64_t * FUN_01d5e6e0(uint64_t param_1,int64_t *param_2)

{
  int64_t *plVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  int64_t lVar5;
  int64_t arg1;
  int64_t *this_ptr;
  int64_t lVar6;
  uint uVar7;
  int64_t local_80;
  char local_78;
  uint64_t local_70;
  int64_t local_48;
  char local_40;
  
  if (*param_2 != 0) {
    lVar5 = *(int64_t *)(arg1 + 0x18);
    uVar7 = *(uint *)(lVar5 + 0xc);
    local_70 = (uint64_t)uVar7;
    if (0 < (int)uVar7) {
      lVar6 = 0;
      bVar2 = false;
      do {
        uVar7 = uVar7 - 1;
        lVar5 = *(int64_t *)(*(int64_t *)(lVar5 + 0x10) + (uint64_t)uVar7 * 8);
        if (lVar6 == lVar5) {
          lVar5 = lVar6;
          bVar3 = bVar2;
          if ((!bVar2) && (lVar6 != 0)) {
            FUN_00d50b00();
            bVar3 = true;
          }
        }
        else {
          if (lVar5 != 0) {
            FUN_00d50b00();
          }
          bVar3 = true;
          if ((bVar2) && (lVar6 != 0)) {
            FUN_00d50b20();
          }
        }
        plVar1 = (int64_t *)*param_2;
        FUN_01d65460();
        if (local_40 == '\0') {
          if (local_48 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_40 = '\0';
        }
        cVar4 = (**(code **)(*plVar1 + 0x50))();
        if (local_48 != 0) {
          FUN_00d50b20();
        }
        if ((local_40 != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
        if (cVar4 != '\0') {
          *(void*)(this_ptr + 1) = 0;
          if ((!bVar3) && (lVar5 != 0)) {
            FUN_00d50b00();
          }
          goto LAB_01d5e9e7;
        }
        cVar4 = FUN_01d64c70();
        lVar6 = lVar5;
        bVar2 = bVar3;
        if (cVar4 != '\0') {
          FUN_01d64cb0();
          FUN_01d5e6e0();
          if (local_48 == lVar5) {
            if ((bVar3) || (local_48 == 0)) {
              if ((local_40 != '\0') && (local_48 != 0)) {
                FUN_00d50b20();
              }
            }
            else {
              bVar3 = true;
              if (local_40 == '\0') {
                FUN_00d50b00();
              }
            }
          }
          else if (local_40 == '\0') {
            if (local_48 != 0) {
              FUN_00d50b00();
            }
            if ((!bVar3) || (lVar5 == 0)) goto LAB_01d5e918;
            FUN_00d50b20();
            lVar5 = local_48;
            bVar3 = true;
          }
          else if ((bVar3) && (lVar5 != 0)) {
            FUN_00d50b20();
            lVar5 = local_48;
            bVar3 = true;
          }
          else {
LAB_01d5e918:
            lVar5 = local_48;
            bVar3 = true;
          }
          if ((local_78 != '\0') && (local_80 != 0)) {
            FUN_00d50b20();
          }
          if (lVar5 != 0) {
            *(void*)(this_ptr + 1) = 0;
            if (!bVar3) {
              FUN_00d50b00();
            }
LAB_01d5e9e7:
            *this_ptr = lVar5;
            *(void*)(this_ptr + 1) = 1;
            return this_ptr;
          }
          lVar6 = 0;
          bVar2 = bVar3;
        }
        if ((int64_t)local_70 < 2) {
          *(void*)(this_ptr + 1) = 0;
          *this_ptr = 0;
          if (!bVar2) {
            return this_ptr;
          }
          if (lVar6 == 0) {
            return this_ptr;
          }
          FUN_00d50b20();
          return this_ptr;
        }
        local_70 = local_70 - 1;
        lVar5 = *(int64_t *)(arg1 + 0x18);
      } while( true );
    }
  }
  *(void*)(this_ptr + 1) = 0;
  *this_ptr = 0;
  return this_ptr;
}



// ============================================================
// 01ebfd60
// ============================================================
// Function: FUN_01ebfd60
// Address: 01ebfd60
// Size: 734 bytes
// Class: GNMultipleValue

void FUN_01ebfd60(uint64_t param_1)

{
  bool bVar1;
  int64_t lVar2;
  int64_t lVar3;
  uint64_t uVar4;
  char cVar5;
  undefined7 uVar6;
  void*this_ptr;
  int64_t lVar7;
  int64_t local_98;
  char local_90;
  int64_t local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  uint64_t local_48;
  int64_t local_40;
  char local_38;
  
  lVar7 = g_027e7c20;
  if (g_027e7c20 != 0) {
    FUN_00d50b00();
  }
  local_98 = lVar7;
  local_90 = '\x01';
  FUN_01ccab60(param_1,&local_98);
  lVar7 = local_40;
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_90 != '\0') && (local_98 != 0)) {
    FUN_00d50b20();
  }
  lVar3 = g_02800140;
  lVar2 = g_027e7c20;
  if (lVar7 == 0) {
    if (g_02800140 != 0) {
      FUN_00d50b00();
    }
    local_68 = lVar3;
    local_60 = '\x01';
    uVar4 = FUN_01ccaae0(param_1,&local_68);
    lVar7 = local_40;
    if (local_40 == 0) {
      bVar1 = true;
      lVar7 = 0;
      local_48 = 0;
    }
    else {
      if (local_38 == '\0') {
        uVar4 = FUN_00d50b00();
        bVar1 = false;
        local_48 = CONCAT71((int7)((uint64_t)uVar4 >> 8),1);
        if ((local_38 == '\0') || (local_40 == 0)) goto LAB_01ebffe2;
        FUN_00d50b20();
      }
      else {
        local_38 = '\0';
        local_48 = CONCAT71((int7)((uint64_t)uVar4 >> 8),1);
      }
      bVar1 = false;
    }
LAB_01ebffe2:
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    uVar4 = local_48;
    if (!bVar1) {
      cVar5 = (char)local_48;
      FUN_01d25f70();
      goto LAB_01ec001b;
    }
  }
  else {
    if (g_027e7c20 != 0) {
      FUN_00d50b00();
    }
    local_88 = lVar2;
    local_80 = '\x01';
    FUN_01ccaae0(param_1,&local_88);
    lVar7 = local_40;
    if (local_40 == 0) {
      lVar7 = 0;
      uVar4 = 0;
    }
    else {
      uVar6 = (undefined7)((uint64_t)lVar2 >> 8);
      if (local_38 == '\0') {
        FUN_00d50b00();
        uVar4 = CONCAT71(uVar6,1);
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_38 = '\0';
        uVar4 = CONCAT71(uVar6,1);
      }
    }
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    FUN_01d25f70();
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        goto LAB_01ebfef5;
      }
    }
    else if (local_40 != 0) {
LAB_01ebfef5:
      lVar2 = g_027e7c20;
      local_48 = uVar4;
      if (g_027e7c20 != 0) {
        FUN_00d50b00();
      }
      local_78 = lVar2;
      local_70 = '\x01';
      FUN_01ccab60(param_1,&local_78);
      local_58 = local_40;
      local_50 = 0;
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      local_50 = '\x01';
      cVar5 = (char)local_48;
      FUN_00c85450(param_1,&local_58);
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if ((local_70 != '\0') && (local_78 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
      goto LAB_01ec001b;
    }
  }
  cVar5 = (char)uVar4;
  *(void*)(this_ptr + 1) = 0;
  *this_ptr = 0;
LAB_01ec001b:
  if ((cVar5 != '\0') && (lVar7 != 0)) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 01ec81d0
// ============================================================
// Function: FUN_01ec81d0
// Address: 01ec81d0
// Size: 1517 bytes
// Class: GNMultipleValue

uint64_t FUN_01ec81d0(uint64_t param_1,char param_2)

{
  int64_t lVar1;
  char cVar2;
  uint32_t uVar3;
  int iVar4;
  uint uVar5;
  int64_t lVar6;
  int64_t *this_ptr;
  uint64_t uVar7;
  int64_t *plVar8;
  bool bVar9;
  int64_t local_118;
  char local_110;
  int64_t *local_40;
  char local_38;
  
  FUN_01ccad60();
  if (local_40 == (int64_t *)0x0) {
    plVar8 = (int64_t *)0x0;
    if (local_38 != '\0') {
      plVar8 = (int64_t *)0x0;
    }
  }
  else {
    plVar8 = local_40;
    if (local_38 == '\0') {
      FUN_00d50b00();
    }
  }
  if (plVar8 != (int64_t *)0x0) {
    FUN_01cae990();
    lVar6 = g_027fe668;
    if (g_027fe668 != 0) {
      FUN_00d50b00();
    }
    uVar3 = (**(code **)(*local_40 + 0x50))();
    if (lVar6 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((char)uVar3 != '\0') {
      uVar7 = CONCAT71((uint7)(uint3)((uint)uVar3 >> 8),1);
      if (param_2 != '\0') {
        FUN_01e42030();
        FUN_01d8b200();
        if (local_38 == '\0') {
          if (local_40 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        if ((local_110 != '\0') && (local_118 != 0)) {
          FUN_00d50b20();
        }
        FUN_01e42030();
        FUN_01d88f70();
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (local_40 != (int64_t *)0x0) {
          FUN_01e42030();
          FUN_01d8c820();
          if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        lVar6 = g_027edfd0;
        if (g_027edfd0 != 0) {
          FUN_00d50b00();
        }
        FUN_01ccaae0();
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (lVar6 != 0) {
          FUN_00d50b20();
        }
        lVar6 = g_027edfe0;
        if (local_40 == (int64_t *)0x0) {
          if (g_027edfe0 != 0) {
            FUN_00d50b00();
          }
          FUN_01ccaae0();
          if (lVar6 != 0) {
            FUN_00d50b20();
          }
          FUN_01d70da0();
          FUN_00d46530();
          lVar6 = g_027e7c20;
          if (g_027e7c20 != 0) {
            FUN_00d50b00();
          }
          (**(code **)(*this_ptr + 0x4d0))();
          if (lVar6 != 0) {
            FUN_00d50b20();
          }
        }
        else {
          iVar4 = FUN_01d70da0();
          if ((iVar4 == -1) ||
             (((cVar2 = (**(code **)(*this_ptr + 0x508))(), cVar2 != '\0' &&
               (bVar9 = iVar4 == 0, iVar4 = iVar4 + -1, bVar9)) ||
              (lVar6 = *(int64_t *)(*(int64_t *)(this_ptr[9] + 0x10) + (int64_t)iVar4 * 8),
              lVar6 == 0)))) {
            lVar6 = 0;
          }
          else {
            FUN_00d50b00();
          }
          lVar1 = g_027e7c20;
          if (g_027e7c20 != 0) {
            FUN_00d50b00();
          }
          (**(code **)(*this_ptr + 0x4d0))();
          if (lVar1 != 0) {
            FUN_00d50b20();
          }
          if (lVar6 != 0) {
            FUN_00d50b20();
          }
        }
        if (local_40 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
      }
      goto LAB_01ec8791;
    }
  }
  uVar5 = FUN_01d827c0();
  uVar7 = (uint64_t)uVar5;
LAB_01ec8791:
  if ((local_40 != (int64_t *)0x0) && (plVar8 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  return uVar7;
}



// ============================================================
// 01e0e6f0
// ============================================================
// Function: FUN_01e0e6f0
// Address: 01e0e6f0
// Size: 1355 bytes
// Class: GNMultipleValue

void FUN_01e0e6f0(void)

{
  int64_t *plVar1;
  uint8_t auVar2 [16];
  bool bVar3;
  bool bVar4;
  uint64_t uVar5;
  int64_t lVar6;
  char cVar7;
  int64_t *plVar8;
  uint8_t uVar9;
  void*arg1;
  int64_t *this_ptr;
  uint64_t uVar10;
  uint64_t extraout_XMM0_Qb;
  uint8_t auVar11 [16];
  uint8_t auVar12 [16];
  uint8_t in_XMM1 [16];
  float local_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  int64_t *local_40;
  char local_38;
  
  uVar5 = g_023dccdc;
  FUN_01e3f820();
  auVar12._0_4_ = (float)(int)(in_XMM1._4_4_ * g_0239011c);
  auVar12._4_4_ = (float)(int)in_XMM1._4_4_;
  auVar12._8_4_ = (float)(int)in_XMM1._12_4_;
  auVar12._12_4_ = (float)(int)in_XMM1._12_4_;
  insertps(in_XMM1,auVar12,0x10);
  plVar8 = (int64_t *)FUN_00e8fc40();
  FUN_00152930();
  (**(code **)(*plVar8 + 0x18))();
  FUN_01d4ed60();
  FUN_01d52700();
  lVar6 = g_027f30f8;
  if (g_027f30f8 != 0) {
    FUN_00d50b00();
  }
  FUN_01d51a40();
  if (local_40 == (int64_t *)0x0) {
    bVar4 = true;
    plVar8 = (int64_t *)0x0;
  }
  else {
    plVar8 = local_40;
    if (local_38 == '\0') {
      FUN_00d50b00();
      bVar4 = false;
    }
    else {
      local_38 = '\0';
      bVar4 = false;
    }
  }
  if (lVar6 != 0) {
    FUN_00d50b20();
  }
  lVar6 = g_027f3100;
  if (g_027f3100 != 0) {
    FUN_00d50b00();
  }
  FUN_01d51a40();
  if (local_40 == (int64_t *)0x0) {
    bVar3 = true;
  }
  else if (local_38 == '\0') {
    FUN_00d50b00();
    bVar3 = false;
  }
  else {
    local_38 = '\0';
    bVar3 = false;
  }
  if (lVar6 != 0) {
    FUN_00d50b20();
  }
  (**(code **)(*this_ptr + 0x640))();
  if ((int64_t *)this_ptr[0x27] == (int64_t *)0x0) {
LAB_01e0e931:
    uVar9 = 0;
  }
  else {
    cVar7 = (**(code **)(*(int64_t *)this_ptr[0x27] + 0x9a0))();
    uVar9 = 1;
    if (cVar7 == '\0') goto LAB_01e0e931;
  }
  (**(code **)(*local_40 + 0x3f0))(4,1,0,uVar9);
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01d52740();
  (**(code **)(*local_40 + 0x400))();
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01d52770();
  plVar1 = (int64_t *)*arg1;
  FUN_01e3f820();
  (**(code **)(*plVar1 + 0x548))();
  (**(code **)(*(int64_t *)*arg1 + 0x400))();
  uVar10 = FUN_01d526f0();
  FUN_01d52700();
  (**(code **)(*this_ptr + 0x640))();
  if ((int64_t *)this_ptr[0x27] != (int64_t *)0x0) {
    cVar7 = (**(code **)(*(int64_t *)this_ptr[0x27] + 0x9a0))();
    uVar9 = 1;
    if (cVar7 != '\0') goto LAB_01e0eace;
  }
  uVar9 = 0;
LAB_01e0eace:
  (**(code **)(*local_40 + 0x3f0))(4,1,0,uVar9);
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01d52740();
  (**(code **)(*local_40 + 0x400))();
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01d52770();
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar5;
  local_138 = (float)uVar10;
  fStack_134 = (float)((uint64_t)uVar10 >> 0x20);
  fStack_130 = (float)extraout_XMM0_Qb;
  fStack_12c = (float)((uint64_t)extraout_XMM0_Qb >> 0x20);
  auVar11._0_4_ = local_138 + (float)uVar5;
  auVar11._4_4_ = fStack_134 + (float)(uVar5 >> 0x20);
  auVar11._8_4_ = fStack_130 + 0.0;
  auVar11._12_4_ = fStack_12c + 0.0;
  auVar12 = blendps(auVar11,auVar2,0xd);
  (**(code **)(*(int64_t *)*arg1 + 0x400))(auVar12._0_8_);
  FUN_00d50b20();
  if (!bVar3 && local_40 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (!bVar4 && plVar8 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 01ec9880
// ============================================================
// Function: FUN_01ec9880
// Address: 01ec9880
// Size: 776 bytes
// Class: GNMultipleValue

void FUN_01ec9880(uint64_t param_1)

{
  int64_t *plVar1;
  bool bVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t lVar5;
  int64_t *this_ptr;
  int64_t lVar6;
  int64_t local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  int64_t local_70;
  int64_t local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  int64_t local_40;
  char local_38;
  
  if (this_ptr[0xc] == 0) {
    local_38 = '\0';
    local_40 = 0;
    local_78 = '\0';
    local_80 = 0;
    FUN_01ccd250(param_1,&local_80);
    lVar5 = local_40;
    lVar6 = this_ptr[0xc];
    if (lVar6 != local_40) {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
      this_ptr[0xc] = lVar5;
      if (lVar6 != 0) {
        FUN_00d50b20();
      }
    }
    lVar5 = local_80;
    lVar6 = this_ptr[0xd];
    if (lVar6 != local_80) {
      if (local_80 != 0) {
        FUN_00d50b00();
      }
      this_ptr[0xd] = lVar5;
      if (lVar6 != 0) {
        FUN_00d50b20();
      }
    }
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  lVar6 = g_027edfd0;
  if (g_027edfd0 != 0) {
    FUN_00d50b00();
  }
  local_90 = lVar6;
  local_88 = '\x01';
  FUN_01ccab60(param_1,&local_90);
  lVar6 = local_40;
  if (local_40 == 0) {
    bVar2 = true;
    lVar6 = 0;
  }
  else {
    if (local_38 == '\0') {
      FUN_00d50b00();
      bVar2 = false;
      if ((local_38 == '\0') || (local_40 == 0)) goto LAB_01ec99b7;
      FUN_00d50b20();
    }
    else {
      local_38 = '\0';
    }
    bVar2 = false;
  }
LAB_01ec99b7:
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  if (bVar2) goto LAB_01ec9b7d;
  FUN_01ccad60();
  lVar5 = local_40;
  if (local_40 == 0) {
    lVar5 = 0;
joined_r0x01ec9a07:
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else if (local_38 == '\0') {
    FUN_00d50b00();
    goto joined_r0x01ec9a07;
  }
  local_70 = lVar5;
  FUN_01d6f8d0();
  (**(code **)(*this_ptr + 0x520))();
  lVar3 = local_40;
  if (local_40 != 0) {
    local_48 = lVar6;
    if (((local_38 == '\0') && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (0 < *(int *)(lVar3 + 0xc)) {
      lVar6 = 0;
      do {
        plVar1 = *(int64_t **)(*(int64_t *)(lVar3 + 0x10) + lVar6 * 8);
        local_60 = 0;
        lVar5 = this_ptr[0xd];
        if (lVar5 != 0) {
          FUN_00d50b00();
        }
        local_60 = '\x01';
        local_68 = lVar5;
        (**(code **)(*plVar1 + 0x98))(param_1,&local_68);
        lVar4 = local_40;
        local_50 = 0;
        if (local_38 == '\0') {
          if (local_40 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        lVar5 = local_70;
        local_50 = '\x01';
        local_58 = lVar4;
        FUN_01d6f990();
        if ((local_50 != '\0') && (local_58 != 0)) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if ((local_60 != '\0') && (local_68 != 0)) {
          FUN_00d50b20();
        }
        lVar6 = lVar6 + 1;
      } while (lVar6 < *(int *)(lVar3 + 0xc));
    }
    *(void*)((int64_t)this_ptr + 0x72) = 1;
    FUN_00d50b20();
    lVar6 = local_48;
  }
  if (lVar5 != 0) {
    FUN_00d50b20();
  }
LAB_01ec9b7d:
  if (lVar6 != 0) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 01ec1b70
// ============================================================
// Function: FUN_01ec1b70
// Address: 01ec1b70
// Size: 891 bytes
// Class: GNMultipleValue

uint64_t FUN_01ec1b70(void)

{
  bool bVar1;
  bool bVar2;
  int64_t lVar3;
  char *pcVar4;
  uint64_t uVar5;
  int64_t *this_ptr;
  int64_t lVar6;
  int64_t local_90;
  char local_88;
  char local_80;
  undefined7 uStack_7f;
  char local_78;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38 [8];
  
  FUN_01ebf9f0();
  local_68 = 0;
  local_70 = CONCAT71(uStack_7f,local_80);
  if (local_78 == '\0') {
    if (local_70 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_78 = '\0';
  }
  local_68 = '\x01';
  FUN_01ebfd60();
  local_58 = 0;
  if (local_88 == '\0') {
    if (local_90 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_88 = '\0';
  }
  local_58 = '\x01';
  local_60 = local_90;
  FUN_01caaf60(&local_60,&local_70);
  lVar6 = local_40;
  if (local_40 == 0) {
    bVar1 = true;
    lVar6 = 0;
  }
  else {
    if (local_38[0] == '\0') {
      FUN_00d50b00();
      bVar1 = false;
      if ((local_38[0] == '\0') || (local_40 == 0)) goto LAB_01ec1c60;
      FUN_00d50b20();
    }
    else {
      local_38[0] = '\0';
    }
    bVar1 = false;
  }
LAB_01ec1c60:
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if ((local_78 != '\0') && (CONCAT71(uStack_7f,local_80) != 0)) {
    FUN_00d50b20();
  }
  lVar3 = g_027e7c20;
  if (lVar6 == 0) {
    uVar5 = 0;
    goto LAB_01ec1ed7;
  }
  if (*(int *)(lVar6 + 0xc) == 1) {
    if (g_027e7c20 != 0) {
      FUN_00d50b00();
    }
    FUN_01ccab60();
    lVar6 = local_40;
    if ((local_38[0] != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    lVar3 = g_02800140;
    if (lVar6 == 0) {
      if (g_02800140 != 0) {
        FUN_00d50b00();
      }
      FUN_01ccaae0();
      lVar6 = local_40;
      if (local_40 == 0) {
        bVar2 = true;
        lVar6 = 0;
      }
      else {
        if (local_38[0] == '\0') {
          FUN_00d50b00();
          bVar2 = false;
          if ((local_38[0] == '\0') || (local_40 == 0)) goto LAB_01ec1e9c;
          FUN_00d50b20();
        }
        else {
          local_38[0] = '\0';
        }
        bVar2 = false;
      }
LAB_01ec1e9c:
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      if (!bVar2 && lVar6 != 0) {
        FUN_00d50b20();
      }
      goto LAB_01ec1ec8;
    }
    FUN_00d23340();
    pcVar4 = local_38;
    if (local_38[0] == '\0') {
      pcVar4 = &local_80;
    }
    local_80 = local_38[0];
    *pcVar4 = '\0';
    if ((local_38[0] != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    local_48 = 0;
    lVar6 = g_027e7c20;
    if (local_80 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
        lVar6 = g_027e7c20;
      }
    }
    else {
      local_80 = '\0';
    }
    local_48 = '\x01';
    local_50 = local_40;
    g_027e7c20 = lVar6;
    if (lVar6 != 0) {
      local_48 = '\x01';
      FUN_00d50b00();
    }
    (**(code **)(*this_ptr + 0x4d0))();
    if (lVar6 != 0) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    uVar5 = CONCAT71((int7)((uint64_t)lVar6 >> 8),1);
  }
  else {
LAB_01ec1ec8:
    uVar5 = 0;
  }
  if (!bVar1) {
    FUN_00d50b20();
  }
LAB_01ec1ed7:
  return uVar5 & 0xffffffff;
}



// ============================================================
// 01ea01c0
// ============================================================
// Function: FUN_01ea01c0
// Address: 01ea01c0
// Size: 1152 bytes
// Class: GNMultipleValue

void FUN_01ea01c0(void)

{
  bool bVar1;
  bool bVar2;
  void*puVar3;
  void*this_ptr;
  bool bVar4;
  int64_t local_40;
  char local_38;
  
  puVar3 = g_028ba1e0;
  if ((g_028ba1e0 == (void*)0x0) || (g_028ba1e9 == '\0')) {
    FUN_00e8cb50();
    if (g_028ba1e0 == (void*)0x0) {
      puVar3 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar3 = &g_02572358;
      (*g_02572370)();
      if (g_028ba1e0 == puVar3) {
        bVar2 = false;
        bVar1 = false;
      }
      else {
        bVar2 = true;
        bVar1 = true;
        bVar4 = g_028ba1e0 != (void*)0x0;
        g_028ba1e0 = puVar3;
        if (bVar4) {
          FUN_00d50b20();
        }
      }
      if (g_028ba1e8 == '\0') {
        g_028ba1e8 = '\x01';
        FUN_00e8cb90();
        bVar1 = bVar2;
      }
      if (!bVar1) {
        FUN_00d50b20();
      }
      FUN_01ea09a0();
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      FUN_00d21140();
      if (local_40 != 0) {
        FUN_00d50b20();
      }
      FUN_01ea0e40();
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      FUN_00d21140();
      if (local_40 != 0) {
        FUN_00d50b20();
      }
      FUN_01ea1460();
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      FUN_00d21140();
      if (local_40 != 0) {
        FUN_00d50b20();
      }
      FUN_01ea1a80();
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      FUN_00d21140();
      if (local_40 != 0) {
        FUN_00d50b20();
      }
      FUN_01ea20a0();
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      FUN_00d21140();
      if (local_40 != 0) {
        FUN_00d50b20();
      }
      FUN_01ea2540();
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      FUN_00d21140();
      if (local_40 != 0) {
        FUN_00d50b20();
      }
      FUN_01ea1770();
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      FUN_00d21140();
      if (local_40 != 0) {
        FUN_00d50b20();
      }
      FUN_01ea1d90();
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      FUN_00d21140();
      if (local_40 != 0) {
        FUN_00d50b20();
      }
      FUN_01ea1150();
      if ((local_38 == '\0') && (local_40 != 0)) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (local_40 != 0) {
        FUN_00d50b20();
      }
      g_028ba1e9 = '\x01';
      FUN_00e8cb70();
    }
    else {
      g_028ba1e9 = '\x01';
      FUN_00e8cb70();
    }
    puVar3 = g_028ba1e0;
    *(void*)(this_ptr + 1) = 0;
    if (puVar3 == (void*)0x0) {
      puVar3 = (void*)0x0;
      goto LAB_01ea0626;
    }
  }
  else {
    *(void*)(this_ptr + 1) = 0;
  }
  FUN_00d50b00();
LAB_01ea0626:
  *this_ptr = puVar3;
  *(void*)(this_ptr + 1) = 1;
  return;
}



// ============================================================
// 01e9eb30
// ============================================================
// Function: FUN_01e9eb30
// Address: 01e9eb30
// Size: 809 bytes
// Class: GNMultipleValue
// String references:
//   "GNMultipleValue"
//   "GNFont"

void FUN_01e9eb30(void)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  char cVar4;
  int iVar5;
  int64_t *plVar6;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t local_50;
  char local_48;
  int64_t *local_40;
  
  plVar6 = (int64_t *)*arg1;
  if ((g_0277a3a0 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
    g_026d3c38 = FUN_00d4fe50();
    g_026d3c20 = "GNMultipleValue";
    g_026d3c28 = 0x18;
    g_026d3c30 = FUN_00050c70;
    g_026d3c40 = 0;
    ram_00000000026d3c48 = 0;
    g_026d3c50 = 0;
    ram_00000000026d3c58 = 0;
    g_026d3c60 = 0;
    ram_00000000026d3c68 = 0;
    g_026d3c70 = 0;
    ram_00000000026d3c78 = 0;
    g_026d3c80 = 0;
    ram_00000000026d3c88 = 0;
    g_026d3c90 = 0;
    ram_00000000026d3c98 = 0;
    g_026d3ca0 = 0;
    ram_00000000026d3ca8 = 0;
    g_026d3cb0 = 0;
    ram_00000000026d3cb8 = 0;
    g_026d3cc0 = 0;
    ram_00000000026d3cc8 = 0;
    g_026d3cd0 = 0;
    ram_00000000026d3cd8 = 0;
    g_026d3ce0 = 0;
    ___cxa_guard_release();
  }
  if (plVar6 == (int64_t *)0x0) {
LAB_01e9eb80:
    plVar6 = &g_02802688;
  }
  else {
    (**(code **)(*plVar6 + 0x360))();
    cVar4 = FUN_00e85ea0();
    plVar6 = arg1;
    if (cVar4 == '\0') goto LAB_01e9eb80;
  }
  lVar2 = plVar6[1];
  if (((char)lVar2 == '\0') || (*plVar6 == 0)) {
    if (*plVar6 == 0) goto LAB_01e9ec6c;
  }
  else {
    FUN_00d50b00();
  }
  FUN_00e987e0();
  lVar1 = *arg1;
  if (lVar1 == local_50) {
    if (((char)arg1[1] != '\0') || (local_50 == 0)) goto LAB_01e9ec4a;
    if (local_48 == '\0') {
      FUN_00d50b00();
      goto LAB_01e9ec43;
    }
LAB_01e9ec0d:
    local_40 = arg1 + 1;
    *(void*)local_40 = 1;
  }
  else {
    lVar3 = arg1[1];
    if (local_48 != '\0') {
      *arg1 = local_50;
      if (((char)lVar3 != '\0') && (lVar1 != 0)) {
        FUN_00d50b20();
      }
      goto LAB_01e9ec0d;
    }
    if (local_50 != 0) {
      FUN_00d50b00();
    }
    *arg1 = local_50;
    if (((char)lVar3 != '\0') && (lVar1 != 0)) {
      FUN_00d50b20();
    }
LAB_01e9ec43:
    local_40 = arg1 + 1;
    *(void*)local_40 = 1;
LAB_01e9ec4a:
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
  }
  if ((char)lVar2 != '\0') {
    FUN_00d50b20();
  }
LAB_01e9ec6c:
  plVar6 = (int64_t *)*arg1;
  if ((g_026ecc58 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
    g_026ecba8 = FUN_00d4fe50();
    g_026ecb90 = "GNFont";
    g_026ecb98 = 0x48;
    g_026ecba0 = FUN_001c9760;
    g_026ecbb0 = 0;
    ram_00000000026ecbb8 = 0;
    g_026ecbc0 = 0;
    g_026ecc38 = 0;
    ram_00000000026ecc40 = 0;
    g_026ecc48 = 0;
    g_026ecc4a = 1;
    g_026ecbc8 = 0;
    ram_00000000026ecbd0 = 0;
    g_026ecbd8 = 0;
    ram_00000000026ecbe0 = 0;
    g_026ecbe8 = 0;
    ram_00000000026ecbf0 = 0;
    g_026ecbf8 = 0;
    ram_00000000026ecc00 = 0;
    g_026ecc08 = 0;
    ram_00000000026ecc10 = 0;
    g_026ecc18 = 0;
    ram_00000000026ecc20 = 0;
    g_026ecc28 = 0;
    ram_00000000026ecc30 = 0;
    g_026ecc53 = 0;
    g_026ecc4b = 0;
    ___cxa_guard_release();
  }
  if (plVar6 != (int64_t *)0x0) {
    (**(code **)(*plVar6 + 0x360))();
    FUN_00e85ea0();
  }
  (**(code **)(*this_ptr + 0xab8))();
  return;
}



// ============================================================
// 01ec1500
// ============================================================
// Function: FUN_01ec1500
// Address: 01ec1500
// Size: 650 bytes
// Class: GNMultipleValue

uint64_t FUN_01ec1500(uint64_t param_1)

{
  int64_t lVar1;
  int64_t *plVar2;
  uint64_t uVar3;
  int64_t *plVar4;
  int64_t local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  int64_t *local_70;
  char local_68;
  int64_t *local_60;
  char local_58;
  int64_t *local_50;
  char local_48;
  int64_t *local_40;
  char local_38;
  
  lVar1 = g_027e7c20;
  if (g_027e7c20 != 0) {
    FUN_00d50b00();
  }
  local_90 = lVar1;
  local_88 = '\x01';
  FUN_01ccaae0(param_1,&local_90);
  plVar4 = local_40;
  if (local_40 == (int64_t *)0x0) {
    plVar2 = (int64_t *)CONCAT71((int7)((uint64_t)lVar1 >> 8),1);
    plVar4 = (int64_t *)0x0;
  }
  else {
    if (local_38 == '\0') {
      FUN_00d50b00();
      plVar2 = (int64_t *)0x0;
      if ((local_38 == '\0') || (local_40 == (int64_t *)0x0)) goto LAB_01ec1585;
      FUN_00d50b20();
    }
    else {
      local_38 = '\0';
    }
    plVar2 = (int64_t *)0x0;
  }
LAB_01ec1585:
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  lVar1 = g_02800140;
  if ((char)plVar2 == '\0') goto LAB_01ec1641;
  if (g_02800140 != 0) {
    FUN_00d50b00();
  }
  local_80 = lVar1;
  local_78 = '\x01';
  FUN_01ccaae0(param_1,&local_80);
  plVar2 = local_40;
  if (local_40 == plVar4) {
LAB_01ec1619:
    if (local_38 != '\0') {
LAB_01ec161f:
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
    }
  }
  else {
    if (local_38 == '\0') {
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      if (plVar4 != (int64_t *)0x0) {
        FUN_00d50b20();
        plVar4 = plVar2;
        goto LAB_01ec1619;
      }
      plVar4 = plVar2;
      if (local_38 == '\0') goto LAB_01ec162d;
      goto LAB_01ec161f;
    }
    if (plVar4 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    local_38 = '\0';
    plVar4 = plVar2;
  }
LAB_01ec162d:
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
LAB_01ec1641:
  if (plVar4 == (int64_t *)0x0) {
    uVar3 = 0;
  }
  else {
    (**(code **)(*plVar4 + 0x3f8))();
    plVar4 = local_40;
    if (local_40 != (int64_t *)0x0) {
      if (((local_38 == '\0') && (FUN_00d50b00(), local_38 != '\0')) &&
         (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_01ca5d90();
      local_70 = plVar4;
      local_68 = '\0';
      FUN_01d28610();
      plVar2 = local_40;
      local_48 = 0;
      if (local_38 == '\0') {
        if (local_40 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      local_48 = '\x01';
      local_50 = plVar2;
      FUN_01ca97a0(param_1,&local_50);
      if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      local_60 = plVar4;
      local_58 = '\0';
      FUN_01ca86b0();
      if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    uVar3 = CONCAT71((int7)((uint64_t)plVar2 >> 8),plVar4 != (int64_t *)0x0);
    FUN_00d50b20();
  }
  return uVar3 & 0xffffffff;
}



// ============================================================
// 01d095c0
// ============================================================
// Function: FUN_01d095c0
// Address: 01d095c0
// Size: 1260 bytes
// Class: GNMultipleValue

uint64_t FUN_01d095c0(uint64_t param_1,char param_2)

{
  int64_t lVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  int64_t *this_ptr;
  uint64_t uVar5;
  int64_t local_70;
  char local_68;
  int64_t local_50;
  char local_48;
  int64_t *local_40;
  char local_38;
  
  FUN_01cae990();
  lVar1 = g_027ef538;
  if (g_027ef538 != 0) {
    FUN_00d50b00();
  }
  cVar3 = (**(code **)(*local_40 + 0x50))();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar3 == '\0') {
    uVar4 = FUN_01d123e0();
    uVar5 = (uint64_t)uVar4;
    goto LAB_01d09945;
  }
  uVar5 = CONCAT71((int7)((uint64_t)local_40 >> 8),1);
  if (param_2 == '\0') goto LAB_01d09945;
  cVar3 = (**(code **)(*this_ptr + 0xac8))();
  if (cVar3 != '\0') {
    FUN_01e057f0();
  }
  if ((int)this_ptr[0x4a] - 1U < 2) {
    FUN_01caeae0();
    FUN_01d65230();
    if (local_48 == '\0') {
      if (local_50 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_48 = '\0';
    }
    FUN_01d09e90();
    if ((local_38 == '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b00();
    }
    FUN_01d0a320();
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if (local_50 != 0) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
LAB_01d09927:
    bVar2 = false;
    local_40 = (int64_t *)0x0;
  }
  else {
    if ((int)this_ptr[0x4a] != 3) {
      FUN_01caeae0();
      FUN_01d65230();
      if (local_38 == '\0') {
        if (local_40 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      (**(code **)(*this_ptr + 0x968))();
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      goto LAB_01d09927;
    }
    FUN_01caeae0();
    FUN_01d65230();
    if (local_48 == '\0') {
      if (local_50 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_48 = '\0';
    }
    FUN_01d09e90();
    if (local_40 == (int64_t *)0x0) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
      if (local_38 == '\0') {
        FUN_00d50b00();
      }
    }
    if (local_50 != 0) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    cVar3 = FUN_00d23d70();
    if (cVar3 == '\0') {
      FUN_00d21140();
    }
    else {
      FUN_00d23f50();
    }
    lVar1 = this_ptr[0x49];
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    FUN_01d09fc0();
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    FUN_01d10370();
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_01d11e80();
  if ((bVar2) && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
LAB_01d09945:
  return uVar5 & 0xffffffff;
}



// ============================================================
// 01d04130
// ============================================================
// Function: FUN_01d04130
// Address: 01d04130
// Size: 757 bytes
// Class: GNMultipleValue
// String references:
//   "GNMultipleValue"
//   "GNColor"

void FUN_01d04130(void)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  char cVar4;
  int iVar5;
  int64_t *plVar6;
  int64_t *arg1;
  int64_t local_50;
  char local_48;
  int64_t *local_40;
  
  plVar6 = (int64_t *)*arg1;
  if ((g_0277a3a0 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
    g_026d3c38 = FUN_00d4fe50();
    g_026d3c20 = "GNMultipleValue";
    g_026d3c28 = 0x18;
    g_026d3c30 = FUN_00050c70;
    g_026d3c40 = 0;
    ram_00000000026d3c48 = 0;
    g_026d3c50 = 0;
    ram_00000000026d3c58 = 0;
    g_026d3c60 = 0;
    ram_00000000026d3c68 = 0;
    g_026d3c70 = 0;
    ram_00000000026d3c78 = 0;
    g_026d3c80 = 0;
    ram_00000000026d3c88 = 0;
    g_026d3c90 = 0;
    ram_00000000026d3c98 = 0;
    g_026d3ca0 = 0;
    ram_00000000026d3ca8 = 0;
    g_026d3cb0 = 0;
    ram_00000000026d3cb8 = 0;
    g_026d3cc0 = 0;
    ram_00000000026d3cc8 = 0;
    g_026d3cd0 = 0;
    ram_00000000026d3cd8 = 0;
    g_026d3ce0 = 0;
    ___cxa_guard_release();
  }
  if (plVar6 == (int64_t *)0x0) {
LAB_01d04180:
    plVar6 = &g_02802688;
  }
  else {
    (**(code **)(*plVar6 + 0x360))();
    cVar4 = FUN_00e85ea0();
    plVar6 = arg1;
    if (cVar4 == '\0') goto LAB_01d04180;
  }
  lVar2 = plVar6[1];
  if (((char)lVar2 == '\0') || (*plVar6 == 0)) {
    if (*plVar6 == 0) goto LAB_01d0426c;
  }
  else {
    FUN_00d50b00();
  }
  FUN_00e987e0();
  lVar1 = *arg1;
  if (lVar1 == local_50) {
    if (((char)arg1[1] == '\0') && (local_50 != 0)) {
      if (local_48 != '\0') goto LAB_01d0420d;
      FUN_00d50b00();
      goto LAB_01d04243;
    }
LAB_01d0424a:
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    lVar3 = arg1[1];
    if (local_48 == '\0') {
      if (local_50 != 0) {
        FUN_00d50b00();
      }
      *arg1 = local_50;
      if (((char)lVar3 != '\0') && (lVar1 != 0)) {
        FUN_00d50b20();
      }
LAB_01d04243:
      local_40 = arg1 + 1;
      *(void*)local_40 = 1;
      goto LAB_01d0424a;
    }
    *arg1 = local_50;
    if (((char)lVar3 != '\0') && (lVar1 != 0)) {
      FUN_00d50b20();
    }
LAB_01d0420d:
    local_40 = arg1 + 1;
    *(void*)local_40 = 1;
  }
  if ((char)lVar2 != '\0') {
    FUN_00d50b20();
  }
LAB_01d0426c:
  plVar6 = (int64_t *)*arg1;
  if ((g_026e9ce0 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
    g_026fd0e8 = FUN_00d4fe50();
    g_026fd0d0 = "GNColor";
    g_026fd0d8 = 0x30;
    g_026fd0e0 = FUN_001b8c30;
    g_026fd0f0 = 0;
    ram_00000000026fd0f8 = 0;
    g_026fd100 = 0;
    ram_00000000026fd108 = 0;
    g_026fd110 = 0;
    ram_00000000026fd118 = 0;
    g_026fd120 = 0;
    ram_00000000026fd128 = 0;
    g_026fd130 = 0;
    ram_00000000026fd138 = 0;
    g_026fd140 = 0;
    ram_00000000026fd148 = 0;
    g_026fd150 = 0;
    ram_00000000026fd158 = 0;
    g_026fd160 = 0;
    ram_00000000026fd168 = 0;
    g_026fd170 = 0;
    ram_00000000026fd178 = 0;
    g_026fd180 = 0;
    ram_00000000026fd188 = 0;
    g_026fd190 = 0;
    ___cxa_guard_release();
  }
  if (plVar6 != (int64_t *)0x0) {
    (**(code **)(*plVar6 + 0x360))();
    FUN_00e85ea0();
  }
  FUN_01d03810();
  return;
}



// ============================================================
// 01ea09a0
// ============================================================
// Function: FUN_01ea09a0
// Address: 01ea09a0
// Size: 722 bytes
// Class: GNMultipleValue

void FUN_01ea09a0(uint64_t param_1)

{
  bool bVar1;
  bool bVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t *plVar5;
  void*this_ptr;
  bool bVar6;
  int64_t local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  int64_t local_30;
  char local_28;
  
  plVar5 = g_028ba150;
  if ((g_028ba150 == (int64_t *)0x0) || (g_028ba159 == '\0')) {
    FUN_00e8cb50();
    if (g_028ba150 == (int64_t *)0x0) {
      plVar5 = (int64_t *)FUN_00e8fc40();
      FUN_000422b0();
      (**(code **)(*plVar5 + 0x18))();
      if (g_028ba150 == plVar5) {
        bVar2 = false;
        bVar1 = false;
      }
      else {
        bVar2 = true;
        bVar1 = true;
        bVar6 = g_028ba150 != (int64_t *)0x0;
        g_028ba150 = plVar5;
        if (bVar6) {
          FUN_00d50b20();
        }
      }
      if (g_028ba158 == '\0') {
        g_028ba158 = '\x01';
        FUN_00e8cb90();
        bVar1 = bVar2;
      }
      if (!bVar1) {
        FUN_00d50b20();
      }
      lVar3 = g_027fe1e0;
      if (g_027fe1e0 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_027fe1e8;
      if (g_027fe1e8 != 0) {
        FUN_00d50b00();
      }
      local_80 = lVar4;
      local_78 = '\x01';
      FUN_00df16f0(param_1,&local_80);
      if ((local_78 != '\0') && (local_80 != 0)) {
        FUN_00d50b20();
      }
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = g_027fe1f0;
      if (g_027fe1f0 != 0) {
        FUN_00d50b00();
      }
      local_70 = lVar3;
      local_68 = '\x01';
      FUN_00df1690();
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      lVar3 = g_027fe1f8;
      if (g_027fe1f8 != 0) {
        FUN_00d50b00();
      }
      local_60 = lVar3;
      local_58 = '\x01';
      FUN_00df1570();
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      lVar3 = g_027fe200;
      if (g_027fe200 != 0) {
        FUN_00d50b00();
      }
      local_50 = lVar3;
      local_48 = '\x01';
      FUN_00df1570();
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      lVar3 = g_027fe208;
      if (g_027fe208 != 0) {
        FUN_00d50b00();
      }
      local_40 = lVar3;
      local_38 = '\x01';
      FUN_00df1600();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      lVar3 = g_027fe200;
      if (g_027fe200 != 0) {
        FUN_00d50b00();
      }
      local_30 = lVar3;
      local_28 = '\x01';
      FUN_00df1600();
      if ((local_28 != '\0') && (local_30 != 0)) {
        FUN_00d50b20();
      }
      g_028ba159 = '\x01';
      FUN_00e8cb70();
    }
    else {
      g_028ba159 = '\x01';
      FUN_00e8cb70();
    }
    plVar5 = g_028ba150;
    *(void*)(this_ptr + 1) = 0;
    if (plVar5 == (int64_t *)0x0) {
      plVar5 = (int64_t *)0x0;
      goto LAB_01ea0c58;
    }
  }
  else {
    *(void*)(this_ptr + 1) = 0;
  }
  FUN_00d50b00();
LAB_01ea0c58:
  *this_ptr = plVar5;
  *(void*)(this_ptr + 1) = 1;
  return;
}



// ============================================================
// 01ea20a0
// ============================================================
// Function: FUN_01ea20a0
// Address: 01ea20a0
// Size: 722 bytes
// Class: GNMultipleValue

void FUN_01ea20a0(uint64_t param_1)

{
  bool bVar1;
  bool bVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t *plVar5;
  void*this_ptr;
  bool bVar6;
  int64_t local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  int64_t local_30;
  char local_28;
  
  plVar5 = g_028ba1c0;
  if ((g_028ba1c0 == (int64_t *)0x0) || (g_028ba1c9 == '\0')) {
    FUN_00e8cb50();
    if (g_028ba1c0 == (int64_t *)0x0) {
      plVar5 = (int64_t *)FUN_00e8fc40();
      FUN_000422b0();
      (**(code **)(*plVar5 + 0x18))();
      if (g_028ba1c0 == plVar5) {
        bVar2 = false;
        bVar1 = false;
      }
      else {
        bVar2 = true;
        bVar1 = true;
        bVar6 = g_028ba1c0 != (int64_t *)0x0;
        g_028ba1c0 = plVar5;
        if (bVar6) {
          FUN_00d50b20();
        }
      }
      if (g_028ba1c8 == '\0') {
        g_028ba1c8 = '\x01';
        FUN_00e8cb90();
        bVar1 = bVar2;
      }
      if (!bVar1) {
        FUN_00d50b20();
      }
      lVar3 = g_027fe1e0;
      if (g_027fe1e0 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_027fe2a0;
      if (g_027fe2a0 != 0) {
        FUN_00d50b00();
      }
      local_80 = lVar4;
      local_78 = '\x01';
      FUN_00df16f0(param_1,&local_80);
      if ((local_78 != '\0') && (local_80 != 0)) {
        FUN_00d50b20();
      }
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = g_027fe2a8;
      if (g_027fe2a8 != 0) {
        FUN_00d50b00();
      }
      local_70 = lVar3;
      local_68 = '\x01';
      FUN_00df1690();
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      lVar3 = g_027fe2b0;
      if (g_027fe2b0 != 0) {
        FUN_00d50b00();
      }
      local_60 = lVar3;
      local_58 = '\x01';
      FUN_00df1570();
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      lVar3 = g_027fe2b8;
      if (g_027fe2b8 != 0) {
        FUN_00d50b00();
      }
      local_50 = lVar3;
      local_48 = '\x01';
      FUN_00df1570();
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      lVar3 = g_027fe2c0;
      if (g_027fe2c0 != 0) {
        FUN_00d50b00();
      }
      local_40 = lVar3;
      local_38 = '\x01';
      FUN_00df1570();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      lVar3 = g_027fe2c8;
      if (g_027fe2c8 != 0) {
        FUN_00d50b00();
      }
      local_30 = lVar3;
      local_28 = '\x01';
      FUN_00df1600();
      if ((local_28 != '\0') && (local_30 != 0)) {
        FUN_00d50b20();
      }
      g_028ba1c9 = '\x01';
      FUN_00e8cb70();
    }
    else {
      g_028ba1c9 = '\x01';
      FUN_00e8cb70();
    }
    plVar5 = g_028ba1c0;
    *(void*)(this_ptr + 1) = 0;
    if (plVar5 == (int64_t *)0x0) {
      plVar5 = (int64_t *)0x0;
      goto LAB_01ea2358;
    }
  }
  else {
    *(void*)(this_ptr + 1) = 0;
  }
  FUN_00d50b00();
LAB_01ea2358:
  *this_ptr = plVar5;
  *(void*)(this_ptr + 1) = 1;
  return;
}



// ============================================================
// 01e9efa0
// ============================================================
// Function: FUN_01e9efa0
// Address: 01e9efa0
// Size: 807 bytes
// Class: GNMultipleValue

void FUN_01e9efa0(void)

{
  int64_t lVar1;
  int64_t lVar2;
  void*puVar3;
  int64_t *arg1;
  int64_t *this_ptr;
  uint32_t uVar4;
  int64_t local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  int64_t *local_58;
  char local_50;
  int64_t local_48;
  char local_40;
  int64_t local_38;
  char local_30;
  
  puVar3 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar3 = &g_02572358;
  (*g_02572370)();
  (**(code **)(*arg1 + 0xac0))();
  lVar2 = local_48;
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  lVar1 = g_027fdd90;
  if (lVar2 == 0) {
    *(void*)(this_ptr + 1) = 0;
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    *this_ptr = lVar1;
    *(void*)(this_ptr + 1) = 1;
  }
  else {
    (**(code **)(*arg1 + 0xac0))();
    FUN_01d448b0();
    lVar2 = local_38;
    if (local_30 == '\0') {
      if (local_38 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_30 = '\0';
    }
    local_48 = lVar2;
    local_40 = '\0';
    FUN_00d21140();
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    (**(code **)(*arg1 + 0xac0))();
    FUN_01d43b70();
    FUN_00d46530();
    (**(code **)(*local_58 + 400))();
    lVar2 = local_38;
    if (local_30 == '\0') {
      if (local_38 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_30 = '\0';
    }
    local_48 = lVar2;
    local_40 = '\0';
    FUN_00d21140();
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    (**(code **)(*arg1 + 0xac0))();
    FUN_01d449a0();
    FUN_00d46530();
    (**(code **)(*local_58 + 400))();
    lVar2 = local_38;
    if (local_30 == '\0') {
      if (local_38 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_30 = '\0';
    }
    local_48 = lVar2;
    local_40 = '\0';
    uVar4 = FUN_00d21140();
    if ((local_40 != '\0') && (local_48 != 0)) {
      uVar4 = FUN_00d50b20();
    }
    if (lVar2 != 0) {
      uVar4 = FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != 0)) {
      uVar4 = FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
      uVar4 = FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      uVar4 = FUN_00d50b20();
    }
    lVar2 = g_027fdd98;
    if (g_027fdd98 != 0) {
      uVar4 = FUN_00d50b00();
    }
    local_78 = lVar2;
    local_70 = '\x01';
    FUN_00d95130(uVar4,&local_78);
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
  }
  FUN_00d50b20();
  return;
}



// ============================================================
// 01d75460
// ============================================================
// Function: FUN_01d75460
// Address: 01d75460
// Size: 791 bytes
// Class: GNMultipleValue

void FUN_01d75460(void)

{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t *plVar3;
  char cVar4;
  int64_t *arg1;
  int64_t *this_ptr;
  uint32_t uVar5;
  float fVar6;
  int64_t local_98;
  char local_90;
  int64_t local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  int64_t *local_58;
  char local_50;
  float local_44;
  int64_t *local_40;
  char local_38;
  
  FUN_00d3ecc0();
  plVar3 = local_40;
  lVar2 = g_027fff38;
  if (g_027fff38 != 0) {
    FUN_00d50b00();
  }
  cVar4 = (**(code **)(*plVar3 + 0x50))();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar4 == '\0') {
    local_78 = *arg1;
    local_70 = '\0';
    FUN_00d530a0();
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    uVar5 = FUN_00d3ed20();
    local_98 = g_027295d8;
    if (g_027295d8 != 0) {
      uVar5 = FUN_00d50b00();
    }
    local_90 = '\x01';
    FUN_000175c0(uVar5,&local_98);
    plVar3 = local_40;
    if (local_38 == '\0') {
      if (((local_40 != (int64_t *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
         (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
    }
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    plVar1 = (int64_t *)this_ptr[0xe];
    uVar5 = FUN_00d3ed20();
    local_88 = g_027092c0;
    if (g_027092c0 != 0) {
      uVar5 = FUN_00d50b00();
    }
    local_80 = '\x01';
    FUN_000175c0(uVar5,&local_88);
    local_58 = local_40;
    local_50 = 0;
    if (local_38 == '\0') {
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_50 = '\x01';
    (**(code **)(*plVar1 + 0x968))();
    if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if (plVar3 != (int64_t *)0x0) {
      fVar6 = (float)FUN_00d459e0();
      if (this_ptr[3] == 0) {
        local_44 = fVar6;
        (**(code **)(*this_ptr + 0x448))();
        fVar6 = local_44;
      }
      g_028b84f0 = 0;
      if ((((double)this_ptr[0x11] == 0.0) && (!NAN((double)this_ptr[0x11]))) &&
         (g_023b2ef0 <
          (double)(float)((uint)(*(float *)(this_ptr + 0x12) - fVar6) & g_02390140))) {
        local_44 = fVar6;
        (**(code **)(*(int64_t *)this_ptr[0xf] + 0x928))();
        *(float *)(this_ptr + 0x12) = local_44;
        g_028b84f0 = 1;
      }
      FUN_01d759a0();
    }
    FUN_01d759a0();
    if (plVar3 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  return;
}



// ============================================================
// 01e9de00
// ============================================================
// Function: FUN_01e9de00
// Address: 01e9de00
// Size: 704 bytes
// Class: GNMultipleValue

void FUN_01e9de00(void)

{
  uint32_t uVar1;
  int64_t lVar2;
  int64_t arg1;
  void*this_ptr;
  int64_t *plVar3;
  uint32_t uVar4;
  int64_t local_90;
  char local_88;
  int64_t local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  int64_t *local_48;
  int64_t *local_40;
  char local_38;
  
  if (*(int64_t *)(arg1 + 0x28) != 0) goto LAB_01e9dfbe;
  FUN_01cb4790();
  local_48 = local_40;
  if (local_38 == '\0') {
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b00();
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_01e9de3d;
    }
    if (*(int64_t *)(arg1 + 0x20) != 0) goto LAB_01e9dfbe;
LAB_01e9def8:
    lVar2 = *(int64_t *)(arg1 + 0x10);
    if (lVar2 == 0) {
      local_58 = 0;
    }
    else {
      FUN_00d50b00();
      local_58 = *(int64_t *)(arg1 + 0x20);
    }
    uVar1 = *(void*)(arg1 + 0x1c);
    uVar4 = *(void*)(arg1 + 0x18);
    local_50 = 0;
    if (local_58 != 0) {
      FUN_00d50b00();
    }
    local_50 = '\x01';
    FUN_01d43f00(uVar4,uVar1);
    plVar3 = local_40;
    if (local_38 == '\0') {
      if (((local_40 != (int64_t *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
         (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    if (plVar3 == (int64_t *)0x0) {
      (**(code **)(*local_48 + 0x370))();
      FUN_01d44d80(*(void*)(arg1 + 0x18));
      if (local_40 != (int64_t *)0x0) {
        plVar3 = local_40;
        if (local_38 == '\0') {
          FUN_00d50b00();
          if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_38 = '\0';
        }
      }
      if ((local_88 != '\0') && (local_90 != 0)) {
        FUN_00d50b20();
      }
    }
    *(int64_t **)(arg1 + 0x28) = plVar3;
    if (plVar3 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if (local_48 == (int64_t *)0x0) goto LAB_01e9dfbe;
  }
  else {
LAB_01e9de3d:
    lVar2 = *(int64_t *)(arg1 + 0x20);
    if (lVar2 == 0) goto LAB_01e9def8;
    if (local_48 == (int64_t *)0x0) goto LAB_01e9dfbe;
    local_60 = 0;
    uVar4 = FUN_00d50b00();
    local_60 = '\x01';
    local_68 = lVar2;
    (**(code **)(*local_48 + 0x388))(uVar4,&local_68);
    plVar3 = local_40;
    if (local_38 == '\0') {
      if (((local_40 != (int64_t *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
         (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    *(int64_t **)(arg1 + 0x28) = plVar3;
    if (plVar3 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  FUN_00d50b20();
LAB_01e9dfbe:
  *this_ptr = *(void*)(arg1 + 0x28);
  *(void*)(this_ptr + 1) = 0;
  return;
}



// ============================================================
// 01d58c00
// ============================================================
// Function: FUN_01d58c00
// Address: 01d58c00
// Size: 745 bytes
// Class: GNMultipleValue

void FUN_01d58c00(uint64_t param_1,uint32_t param_2)

{
  int64_t lVar1;
  int64_t *plVar2;
  int64_t *plVar3;
  char cVar4;
  int64_t *plVar5;
  int64_t *this_ptr;
  uint32_t uVar6;
  uint32_t uVar7;
  int64_t local_a8;
  char local_a0;
  int64_t *local_98;
  char local_90;
  int64_t local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  int64_t *local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  int64_t *local_48;
  char local_40;
  int64_t *local_38;
  char local_30;
  
  if (((char)this_ptr[0x3e] == '\0') || (this_ptr[0x39] == 0)) {
    FUN_01f27fe0();
    cVar4 = (**(code **)(*local_38 + 0x6c0))();
    if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (cVar4 == '\0') {
      return;
    }
  }
  uVar6 = FUN_01e3f820();
  plVar5 = (int64_t *)FUN_00e8fc40();
  FUN_00152930();
  (**(code **)(*plVar5 + 0x18))();
  FUN_01e3f820();
  FUN_01d4ed60(param_2);
  FUN_01d52700();
  FUN_01d52740();
  local_48 = local_38;
  local_40 = 0;
  if (local_30 == '\0') {
    if (local_38 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_30 = '\0';
  }
  local_40 = '\x01';
  FUN_01e3f820();
  (**(code **)(*this_ptr + 0x608))();
  if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01d52770();
  FUN_01ca6a90();
  plVar2 = local_38;
  if ((((local_30 == '\0') && (local_38 != (int64_t *)0x0)) && (FUN_00d50b00(), local_30 != '\0'))
     && (local_38 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01ca5d90();
  lVar1 = this_ptr[0x39];
  if (lVar1 != 0) {
    local_50 = 0;
    uVar7 = FUN_00d50b00();
    local_a8 = g_027f07c8;
    local_50 = '\x01';
    local_58 = lVar1;
    if (g_027f07c8 != 0) {
      uVar7 = FUN_00d50b00();
    }
    local_a0 = '\x01';
    FUN_01caa390(uVar7,&local_a8);
    if ((local_a0 != '\0') && (local_a8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
  }
  FUN_01e42030();
  plVar3 = local_38;
  local_90 = '\0';
  local_88 = 0;
  local_80 = '\0';
  local_98 = plVar5;
  FUN_01e48f80(uVar6);
  local_70 = '\0';
  local_78 = 0;
  local_68 = plVar2;
  local_60 = '\0';
  (**(code **)(*plVar3 + 0x738))(&local_68,&local_78,4);
  if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  if ((local_90 != '\0') && (local_98 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar2 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}



// ============================================================
// 01d08b50
// ============================================================
// Function: FUN_01d08b50
// Address: 01d08b50
// Size: 865 bytes
// Class: GNMultipleValue

void* FUN_01d08b50(void)

{
  int64_t lVar1;
  int64_t *plVar2;
  int64_t lVar3;
  int64_t arg1;
  void*this_ptr;
  int64_t lVar4;
  int64_t local_d0;
  char local_c8;
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
  int64_t local_40;
  char local_38;
  
  FUN_00d403d0();
  lVar3 = g_027ef530;
  if (g_027ef530 != 0) {
    FUN_00d50b00();
  }
  local_68 = 0;
  if (arg1 != 0) {
    FUN_00d50b00();
  }
  local_68 = '\x01';
  local_b0 = 0;
  local_a8 = '\0';
  local_70 = arg1;
  FUN_00d40470(&local_b0,&local_70,3,3);
  if ((local_a8 != '\0') && (local_b0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  plVar2 = (int64_t *)FUN_00e8fc40();
  FUN_001d7da0();
  (**(code **)(*plVar2 + 0x18))();
  FUN_01d5e5a0();
  lVar3 = *(int64_t *)(arg1 + 0x240);
  if (0 < *(int *)(lVar3 + 0xc)) {
    lVar4 = 0;
    do {
      lVar3 = *(int64_t *)(*(int64_t *)(*(int64_t *)(lVar3 + 0x10) + lVar4 * 8) + 0x10);
      if (lVar3 != 0) {
        FUN_00d50b00();
      }
      lVar1 = g_027ef538;
      local_98 = '\x01';
      local_a0 = lVar3;
      if (g_027ef538 != 0) {
        FUN_00d50b00();
      }
      local_90 = lVar1;
      local_88 = '\x01';
      local_80 = 0;
      local_78 = '\0';
      local_58 = 0;
      FUN_00d50b00();
      local_58 = '\x01';
      local_60 = arg1;
      FUN_01d5da60(&local_80,&local_90,&local_60);
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      if ((local_78 != '\0') && (local_80 != 0)) {
        FUN_00d50b20();
      }
      if ((local_88 != '\0') && (local_90 != 0)) {
        FUN_00d50b20();
      }
      if ((local_98 != '\0') && (local_a0 != 0)) {
        FUN_00d50b20();
      }
      if (*(int *)(arg1 + 0x250) - 1U < 3) {
        FUN_01d5e230();
        local_40 = *(int64_t *)(*(int64_t *)(*(int64_t *)(arg1 + 0x240) + 0x10) + lVar4 * 8)
        ;
        if (local_40 != 0) {
          FUN_00d50b00();
        }
        local_38 = '\0';
        FUN_00d23d70();
        FUN_01d66ab0();
        if (local_40 != 0) {
          FUN_00d50b20();
        }
        if ((local_c8 != '\0') && (local_d0 != 0)) {
          FUN_00d50b20();
        }
      }
      FUN_01d5e230();
      FUN_01d65260();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      lVar4 = lVar4 + 1;
      lVar3 = *(int64_t *)(arg1 + 0x240);
    } while (lVar4 < *(int *)(lVar3 + 0xc));
  }
  *this_ptr = plVar2;
  *(void*)(this_ptr + 1) = 1;
  return this_ptr;
}



// ============================================================
// 01e9d4d0
// ============================================================
// Function: FUN_01e9d4d0
// Address: 01e9d4d0
// Size: 504 bytes
// Class: GNMultipleValue

void FUN_01e9d4d0(uint64_t param_1)

{
  int64_t *plVar1;
  int64_t lVar2;
  char cVar3;
  int iVar4;
  int64_t *arg1;
  int64_t this_ptr;
  int64_t lVar5;
  int64_t lVar6;
  int64_t **pplVar7;
  int64_t *local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  lVar6 = g_027fdcf0;
  plVar1 = (int64_t *)*arg1;
  if (g_027fdcf0 != 0) {
    FUN_00d50b00();
  }
  local_50 = lVar6;
  local_48 = '\x01';
  pplVar7 = &local_60;
  (**(code **)(*plVar1 + 0x578))(param_1,&local_50);
  plVar1 = local_60;
  FUN_00053ac0();
  if (plVar1 == (int64_t *)0x0) {
LAB_01e9d54a:
    pplVar7 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') goto LAB_01e9d54a;
  }
  plVar1 = *pplVar7;
  if (*(char *)(pplVar7 + 1) == '\0') {
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar7 + 1) = 0;
  }
  if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if (plVar1 == (int64_t *)0x0) goto LAB_01e9d68e;
  iVar4 = FUN_00d45870();
  lVar2 = g_027fecd0;
  lVar5 = g_027fecc0;
  lVar6 = g_027ede68;
  if (iVar4 == 1) {
    if (g_027fecc0 == 0) {
      lVar6 = *(int64_t *)(this_ptr + 0x20);
      if (lVar6 != 0) goto LAB_01e9d659;
    }
    else {
      FUN_00d50b00();
      lVar6 = *(int64_t *)(this_ptr + 0x20);
      if (lVar6 == lVar5) {
        FUN_00d50b20();
      }
      else {
LAB_01e9d659:
        *(int64_t *)(this_ptr + 0x20) = lVar5;
        if (lVar6 != 0) {
          FUN_00d50b20();
        }
      }
    }
  }
  else if (iVar4 == 2) {
    if (g_027fecd0 == 0) {
      lVar6 = *(int64_t *)(this_ptr + 0x20);
      if (lVar6 != 0) goto LAB_01e9d675;
    }
    else {
      FUN_00d50b00();
      lVar6 = *(int64_t *)(this_ptr + 0x20);
      if (lVar6 == lVar2) {
        FUN_00d50b20();
      }
      else {
LAB_01e9d675:
        *(int64_t *)(this_ptr + 0x20) = lVar2;
        if (lVar6 != 0) {
          FUN_00d50b20();
        }
      }
    }
  }
  else if (iVar4 == 3) {
    if (g_027ede68 == 0) {
      lVar5 = *(int64_t *)(this_ptr + 0x20);
      if (lVar5 != 0) goto LAB_01e9d63d;
    }
    else {
      FUN_00d50b00();
      lVar5 = *(int64_t *)(this_ptr + 0x20);
      if (lVar5 == lVar6) {
        FUN_00d50b20();
      }
      else {
LAB_01e9d63d:
        *(int64_t *)(this_ptr + 0x20) = lVar6;
        if (lVar5 != 0) {
          FUN_00d50b20();
        }
      }
    }
  }
  FUN_00d50b20();
LAB_01e9d68e:
  local_40 = *arg1;
  local_38 = '\0';
  FUN_00d61ea0();
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 01ede410
// ============================================================
// Function: FUN_01ede410
// Address: 01ede410
// Size: 701 bytes
// Class: GNMultipleValue
// String references:
//   "%@"
//   "%I %I %I %I"

void FUN_01ede410(void)

{
  int64_t lVar1;
  void*puVar2;
  int64_t arg1;
  uint64_t uVar3;
  int64_t local_a0;
  char local_98;
  int64_t local_80;
  char local_78;
  void*local_70;
  uint local_68;
  uint32_t local_64;
  void*local_60;
  uint local_58;
  int64_t local_50;
  char local_48;
  void*local_40;
  char local_38;
  
  puVar2 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar2 = &g_02572358;
  (*g_02572370)();
  FUN_00d4ffd0();
  puVar2 = local_40;
  if (local_38 == '\0') {
    if (local_40 != (void*)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  local_60 = puVar2;
  local_58 = local_58 & 0xffffff00;
  FUN_00d21140();
  if (((char)local_58 != '\0') && (local_60 != (void*)0x0)) {
    FUN_00d50b20();
  }
  if (puVar2 != (void*)0x0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (void*)0x0)) {
    FUN_00d50b20();
  }
  uVar3 = FUN_00d962d0(*(void*)(arg1 + 0xc),*(void*)(arg1 + 0x14));
  local_58 = 1;
  local_60 = &g_024c5048;
  local_48 = 0;
  if (local_a0 != 0) {
    uVar3 = FUN_00d50b00();
  }
  local_50 = local_a0;
  local_48 = '\x01';
  FUN_00d8cb40(uVar3,&local_60);
  puVar2 = local_70;
  if ((char)local_68 == '\0') {
    if (local_70 != (void*)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_68 = local_68 & 0xffffff00;
  }
  local_40 = puVar2;
  local_38 = '\0';
  uVar3 = FUN_00d21140();
  if ((local_38 != '\0') && (local_40 != (void*)0x0)) {
    uVar3 = FUN_00d50b20();
  }
  if (puVar2 != (void*)0x0) {
    uVar3 = FUN_00d50b20();
  }
  if (((char)local_68 != '\0') && (local_70 != (void*)0x0)) {
    uVar3 = FUN_00d50b20();
  }
  local_60 = &g_024c5048;
  if ((local_48 != '\0') && (local_50 != 0)) {
    uVar3 = FUN_00d50b20();
  }
  if ((local_98 != '\0') && (local_a0 != 0)) {
    uVar3 = FUN_00d50b20();
  }
  local_64 = *(void*)(arg1 + 0x1c);
  local_68 = 4;
  local_70 = (void*)&g_026b0d80;
  FUN_00d8cb40(uVar3,&local_70);
  puVar2 = local_40;
  if (local_38 == '\0') {
    if (local_40 != (void*)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  local_60 = puVar2;
  local_58 = local_58 & 0xffffff00;
  uVar3 = FUN_00d21140();
  if (((char)local_58 != '\0') && (local_60 != (void*)0x0)) {
    uVar3 = FUN_00d50b20();
  }
  if (puVar2 != (void*)0x0) {
    uVar3 = FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (void*)0x0)) {
    uVar3 = FUN_00d50b20();
  }
  lVar1 = g_027259e0;
  if (g_027259e0 != 0) {
    uVar3 = FUN_00d50b00();
  }
  local_80 = lVar1;
  local_78 = '\x01';
  FUN_00d95130(uVar3,&local_80);
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}



// ============================================================
// 01ccbf60
// ============================================================
// Function: FUN_01ccbf60
// Address: 01ccbf60
// Size: 631 bytes
// Class: GNMultipleValue

void FUN_01ccbf60(uint64_t param_1,void*param_2)

{
  int64_t lVar1;
  int64_t *plVar2;
  int64_t *arg1;
  uint64_t local_b8;
  uint8_t local_b0;
  uint64_t local_a8;
  uint8_t local_a0;
  uint64_t local_98;
  uint8_t local_90;
  int64_t local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  int64_t *local_60;
  char local_58;
  int64_t local_50;
  int64_t *local_40;
  char local_38;
  
  local_a8 = *param_2;
  local_a0 = 0;
  FUN_01ccab60(param_1,&local_a8);
  if (local_38 == '\0') {
    if (local_40 == (int64_t *)0x0) {
      return;
    }
    FUN_00d50b00();
  }
  else if (local_40 == (int64_t *)0x0) {
    return;
  }
  local_b8 = *param_2;
  local_b0 = 0;
  FUN_01cc98b0(param_1,&local_b8);
  if (local_38 == '\0') {
    if (local_40 == (int64_t *)0x0) goto LAB_01ccc1bd;
    FUN_00d50b00();
  }
  else if (local_40 == (int64_t *)0x0) goto LAB_01ccc1bd;
  lVar1 = local_40[5];
  FUN_00d50b20();
  if (lVar1 == 0) goto LAB_01ccc1bd;
  local_50 = lVar1;
  FUN_00d50b00();
  local_98 = *param_2;
  local_90 = 0;
  FUN_01ccac20(param_1,&local_98);
  if (local_38 == '\0') {
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b00();
      goto LAB_01ccc084;
    }
  }
  else if (local_40 != (int64_t *)0x0) {
LAB_01ccc084:
    local_80 = *arg1;
    local_78 = '\0';
    (**(code **)(*local_40 + 0x378))(param_1,&local_80);
    plVar2 = (int64_t *)*arg1;
    if (plVar2 == local_40) {
      if (((char)arg1[1] != '\0') || (local_40 == (int64_t *)0x0)) goto LAB_01ccc127;
      if (local_38 == '\0') {
        FUN_00d50b00();
        goto LAB_01ccc120;
      }
LAB_01ccc140:
      *(void*)(arg1 + 1) = 1;
    }
    else {
      lVar1 = arg1[1];
      if (local_38 != '\0') {
        *arg1 = (int64_t)local_40;
        if (((char)lVar1 != '\0') && (plVar2 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        goto LAB_01ccc140;
      }
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      *arg1 = (int64_t)local_40;
      if (((char)lVar1 != '\0') && (plVar2 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
LAB_01ccc120:
      *(void*)(arg1 + 1) = 1;
LAB_01ccc127:
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  local_70 = *arg1;
  local_68 = '\0';
  local_60 = local_40;
  local_58 = '\0';
  FUN_01d27270(param_1,&local_60);
  if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
LAB_01ccc1bd:
  FUN_00d50b20();
  return;
}



// ============================================================
// 01d09150
// ============================================================
// Function: FUN_01d09150
// Address: 01d09150
// Size: 692 bytes
// Class: GNMultipleValue

void FUN_01d09150(void)

{
  char cVar1;
  int iVar2;
  uint32_t uVar3;
  int64_t *arg1;
  int64_t *this_ptr;
  uint64_t uVar4;
  uint64_t extraout_XMM0_Qb;
  uint64_t extraout_XMM0_Qb_00;
  uint8_t auVar5 [16];
  uint8_t auVar6 [16];
  float fVar7;
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  int64_t local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  int64_t *local_38;
  char local_30;
  
  FUN_01d3abf0();
  FUN_01e466c0();
  (**(code **)(*this_ptr + 0x640))();
  FUN_01e3f820();
  uVar4 = (**(code **)(*local_38 + 0x548))();
  if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  cVar1 = (**(code **)(*this_ptr + 0x9a0))();
  if ((((cVar1 != '\0') && (cVar1 = FUN_01e05890(), cVar1 != '\0')) &&
      (iVar2 = FUN_01d3a5a0(), iVar2 == 1)) && (iVar2 = FUN_01d3b630(), iVar2 == 1)) {
    local_b8 = (float)uVar4;
    fStack_b4 = (float)((uint64_t)uVar4 >> 0x20);
    fStack_b0 = (float)extraout_XMM0_Qb;
    fStack_ac = (float)((uint64_t)extraout_XMM0_Qb >> 0x20);
    cVar1 = FUN_00d05410();
    if (cVar1 == '\0') {
      cVar1 = FUN_01e42250();
      if (cVar1 == '\0') {
        return;
      }
      (**(code **)(*this_ptr + 0xb50))();
      if ((local_30 == '\0') && (local_38 != (int64_t *)0x0)) {
        FUN_00d50b00();
      }
      uVar4 = FUN_01e3f820();
      FUN_01e3f820();
      fVar7 = local_b8;
      FUN_00d50b00();
      FUN_01e3f820();
      local_88 = 0;
      local_80 = '\0';
      uVar3 = (**(code **)(*this_ptr + 0x9d0))();
      FUN_00d50b00();
      auVar6._8_8_ = extraout_XMM0_Qb_00;
      auVar6._0_8_ = uVar4;
      auVar5._0_4_ = local_b8 + (float)uVar4;
      auVar5._4_4_ = fStack_b4 + (float)((uint64_t)uVar4 >> 0x20);
      auVar5._8_4_ = fStack_b0 + (float)extraout_XMM0_Qb_00;
      auVar5._12_4_ = fStack_ac + (float)((uint64_t)extraout_XMM0_Qb_00 >> 0x20);
      auVar6 = blendps(auVar5,auVar6,0xd);
      local_78 = 0;
      local_70 = '\0';
      FUN_01d5efd0(auVar6._0_8_,fVar7,&local_88,uVar3);
      if ((local_70 != '\0') && (local_78 != 0)) {
        FUN_00d50b20();
      }
      if (this_ptr != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if ((local_80 != '\0') && (local_88 != 0)) {
        FUN_00d50b20();
      }
      if (this_ptr != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if (local_38 == (int64_t *)0x0) {
        return;
      }
      FUN_00d50b20();
      return;
    }
  }
  local_68 = *arg1;
  local_60 = '\0';
  FUN_01e0b690();
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 01ee0360
// ============================================================
// Function: FUN_01ee0360
// Address: 01ee0360
// Size: 521 bytes
// Class: GNMultipleValue

void FUN_01ee0360(uint64_t param_1,uint64_t param_2)

{
  int64_t lVar1;
  int iVar2;
  int64_t *this_ptr;
  bool bVar3;
  float fVar4;
  uint64_t extraout_XMM0_Qa;
  float extraout_XMM0_Db;
  float extraout_XMM0_Db_00;
  uint8_t auVar5 [16];
  uint8_t auVar6 [16];
  uint32_t extraout_XMM0_Dd;
  uint64_t in_XMM1_Qb;
  uint8_t auVar7 [16];
  uint8_t auVar8 [16];
  uint8_t local_48 [8];
  uint64_t uStack_40;
  int64_t local_38;
  char local_30;
  uint64_t extraout_XMM0_Qb;
  
  if (this_ptr[6] == 0) {
    bVar3 = false;
    lVar1 = this_ptr[0x27];
  }
  else {
    (**(code **)(*this_ptr + 0x7b0))();
    bVar3 = this_ptr[6] == local_38;
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    lVar1 = this_ptr[0x27];
  }
  if ((((lVar1 == 0) || (lVar1 = this_ptr[0x28], (int)lVar1 < 0)) ||
      (iVar2 = FUN_01eddbf0(), iVar2 <= (int)lVar1)) ||
     (FUN_01eddbb0(extraout_XMM0_Qa,(int)this_ptr[0x28]), local_38 == 0)) {
    if (bVar3) {
      (**(code **)(*this_ptr + 0x7b0))();
      FUN_01e3f820();
      (**(code **)(*this_ptr + 0x4e8))();
      if ((local_30 != '\0') && (local_38 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    if (local_30 == '\0') {
      FUN_00d50b00();
    }
    if (bVar3) {
      (**(code **)(*this_ptr + 0x7b0))();
      FUN_01e3f820();
      uStack_40 = in_XMM1_Qb;
      local_48 = (uint8_t  [8])param_2;
      auVar7 = _local_48;
      if ((local_30 != '\0') && (local_38 != 0)) {
        FUN_00d50b20();
      }
      fVar4 = (float)FUN_01ede0b0();
      local_48._0_4_ = (uint32_t)param_2;
      bVar3 = (float)local_48._0_4_ < fVar4 * *(float *)((int64_t)this_ptr + 0x144);
      _local_48 = auVar7;
      if (bVar3) {
        auVar5._0_8_ = FUN_01ede0b0();
        auVar5._8_8_ = extraout_XMM0_Qb;
        auVar6._4_12_ = auVar5._4_12_;
        auVar6._0_4_ = (float)auVar5._0_8_ * *(float *)((int64_t)this_ptr + 0x144);
        _local_48 = blendps(auVar7,auVar6,1);
      }
      FUN_01ede0b0();
      if ((float)local_48._4_4_ < extraout_XMM0_Db * *(float *)((int64_t)this_ptr + 0x144)) {
        FUN_01ede0b0();
        auVar7._4_4_ = extraout_XMM0_Db_00;
        auVar7._0_4_ = extraout_XMM0_Db_00;
        auVar7._8_4_ = extraout_XMM0_Dd;
        auVar7._12_4_ = extraout_XMM0_Dd;
        auVar8._4_12_ = auVar7._4_12_;
        auVar8._0_4_ = extraout_XMM0_Db_00 * *(float *)((int64_t)this_ptr + 0x144);
        insertps(_local_48,auVar8,0x10);
      }
      (**(code **)(*this_ptr + 0x4e8))();
    }
    else {
      FUN_01ede0b0();
      (**(code **)(*this_ptr + 0x4e8))();
    }
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 01d7c790
// ============================================================
// Function: FUN_01d7c790
// Address: 01d7c790
// Size: 871 bytes
// Class: GNMultipleValue

void FUN_01d7c790(void)

{
  int64_t lVar1;
  int64_t lVar2;
  char cVar3;
  char cVar4;
  int64_t *this_ptr;
  int64_t *local_48;
  char local_40;
  int64_t *local_38;
  char local_30;
  
  FUN_00d3ecc0();
  lVar1 = g_027f1660;
  if (g_027f1660 != 0) {
    FUN_00d50b00();
  }
  cVar3 = (**(code **)(*local_38 + 0x50))();
  cVar4 = '\x01';
  if (cVar3 == '\0') {
    FUN_00d3ecc0();
    lVar2 = g_027f0e40;
    if (g_027f0e40 != 0) {
      FUN_00d50b00();
    }
    cVar4 = (**(code **)(*local_48 + 0x50))();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar4 == '\0') {
    FUN_00d3ecc0();
    lVar1 = g_027f0e30;
    if (g_027f0e30 != 0) {
      FUN_00d50b00();
    }
    cVar3 = (**(code **)(*local_38 + 0x50))();
    cVar4 = '\x01';
    if (cVar3 == '\0') {
      FUN_00d3ecc0();
      lVar2 = g_027f0e38;
      if (g_027f0e38 != 0) {
        FUN_00d50b00();
      }
      cVar4 = (**(code **)(*local_48 + 0x50))();
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((cVar4 == '\0') || (this_ptr[0x48] == 0)) goto LAB_01d7ca60;
    FUN_00d3ecf0();
    if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (local_38 == this_ptr) goto LAB_01d7ca60;
    FUN_00d3ecf0();
    if (local_30 == '\0') {
      if (local_38 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_30 = '\0';
    }
    cVar3 = FUN_01d7c190();
    if (local_38 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (cVar3 != '\0') goto LAB_01d7ca60;
  }
  else {
    if (this_ptr[0x48] == 0) goto LAB_01d7ca60;
    FUN_00d3ecf0();
    if (local_30 == '\0') {
      if (local_38 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_30 = '\0';
    }
    cVar3 = FUN_01d7c190();
    if (local_38 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (cVar3 == '\0') goto LAB_01d7ca60;
  }
  FUN_01d7c320();
LAB_01d7ca60:
  FUN_00d530a0();
  return;
}



// ============================================================
// 01e0c890
// ============================================================
// Function: FUN_01e0c890
// Address: 01e0c890
// Size: 706 bytes
// Class: GNMultipleValue

void FUN_01e0c890(void)

{
  int64_t lVar1;
  char cVar2;
  int iVar3;
  int64_t *this_ptr;
  int64_t local_b8;
  char local_b0;
  int64_t local_a8;
  char local_a0;
  int64_t *local_98;
  char local_90;
  int64_t local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  int64_t *local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  char local_40;
  int64_t local_38;
  char local_30;
  
  FUN_00d4efa0();
  FUN_00c82bb0();
  local_58 = local_38;
  local_50 = 0;
  if (local_30 == '\0') {
    if (local_38 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_30 = '\0';
  }
  local_50 = '\x01';
  FUN_00e3f850();
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  if ((local_b0 != '\0') && (local_b8 != 0)) {
    FUN_00d50b20();
  }
  cVar2 = FUN_01d10140();
  if (cVar2 != '\0') {
    local_60 = 0;
    (**(code **)(this_ptr[2] + 0x10))();
    FUN_00d50b00();
    local_a8 = g_027f2f40;
    local_60 = '\x01';
    local_68 = this_ptr + 2;
    if (g_027f2f40 != 0) {
      FUN_00d50b00();
    }
    local_a0 = '\x01';
    (**(code **)(*this_ptr + 0x960))();
    local_48 = local_38;
    local_40 = 0;
    if (local_30 == '\0') {
      if (local_38 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_30 = '\0';
    }
    local_40 = '\x01';
    FUN_00e3fb50(&local_48,&local_a8);
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    if ((local_a0 != '\0') && (local_a8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
      (**(code **)(*local_68 + 0x10))();
      FUN_00d50b20();
    }
  }
  if ((this_ptr[10] != 0) && (iVar3 = FUN_00d8c7a0(), iVar3 != 0)) {
    (**(code **)(this_ptr[2] + 0x10))();
    FUN_00d50b00();
    local_88 = g_027f0e20;
    local_90 = '\x01';
    local_98 = this_ptr + 2;
    if (g_027f0e20 != 0) {
      FUN_00d50b00();
    }
    local_80 = '\x01';
    local_70 = 0;
    lVar1 = this_ptr[10];
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    local_70 = '\x01';
    local_78 = lVar1;
    FUN_00e3fb50(&local_78,&local_88);
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    if ((local_90 != '\0') && (local_98 != (int64_t *)0x0)) {
      (**(code **)(*local_98 + 0x10))();
      FUN_00d50b20();
    }
  }
  FUN_00e3faa0();
  return;
}



// ============================================================
// 01ccc680
// ============================================================
// Function: FUN_01ccc680
// Address: 01ccc680
// Size: 645 bytes
// Class: GNMultipleValue

void FUN_01ccc680(uint64_t param_1,void*param_2)

{
  int64_t lVar1;
  int64_t *plVar2;
  int64_t *arg1;
  uint64_t local_b0;
  uint8_t local_a8;
  uint64_t local_a0;
  uint8_t local_98;
  int64_t local_90;
  int64_t local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  int64_t *local_60;
  char local_58;
  uint32_t local_4c;
  int64_t *local_40;
  char local_38;
  
  local_4c = (uint32_t)param_1;
  local_b0 = *param_2;
  local_a8 = 0;
  FUN_01ccab60(param_1,&local_b0);
  if (local_38 == '\0') {
    if (local_40 == (int64_t *)0x0) {
      return;
    }
    FUN_00d50b00();
  }
  else if (local_40 == (int64_t *)0x0) {
    return;
  }
  FUN_01cc98b0();
  if (local_38 == '\0') {
    if (local_40 == (int64_t *)0x0) goto LAB_01ccc8eb;
    FUN_00d50b00();
  }
  else if (local_40 == (int64_t *)0x0) goto LAB_01ccc8eb;
  lVar1 = local_40[5];
  FUN_00d50b20();
  if (lVar1 == 0) goto LAB_01ccc8eb;
  local_90 = lVar1;
  FUN_00d50b00();
  local_a0 = *param_2;
  local_98 = 0;
  FUN_01ccac20();
  if (local_38 == '\0') {
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b00();
      goto LAB_01ccc7aa;
    }
  }
  else if (local_40 != (int64_t *)0x0) {
LAB_01ccc7aa:
    local_80 = *arg1;
    local_78 = '\0';
    (**(code **)(*local_40 + 0x378))();
    plVar2 = (int64_t *)*arg1;
    if (plVar2 == local_40) {
      if (((char)arg1[1] != '\0') || (local_40 == (int64_t *)0x0)) goto LAB_01ccc84d;
      if (local_38 == '\0') {
        FUN_00d50b00();
        goto LAB_01ccc846;
      }
LAB_01ccc866:
      *(void*)(arg1 + 1) = 1;
    }
    else {
      lVar1 = arg1[1];
      if (local_38 != '\0') {
        *arg1 = (int64_t)local_40;
        if (((char)lVar1 != '\0') && (plVar2 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        goto LAB_01ccc866;
      }
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      *arg1 = (int64_t)local_40;
      if (((char)lVar1 != '\0') && (plVar2 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
LAB_01ccc846:
      *(void*)(arg1 + 1) = 1;
LAB_01ccc84d:
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  local_70 = *arg1;
  local_68 = '\0';
  local_60 = local_40;
  local_58 = '\0';
  FUN_01d27780(local_4c,&local_60);
  if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
LAB_01ccc8eb:
  FUN_00d50b20();
  return;
}



// ============================================================
// 01ea2f80
// ============================================================
// Function: FUN_01ea2f80
// Address: 01ea2f80
// Size: 960 bytes
// Class: GNMultipleValue
// String references:
//   "file format unknown"

void FUN_01ea2f80(uint64_t param_1,void*param_2)

{
  int64_t *plVar1;
  char cVar2;
  int64_t lVar3;
  int64_t *arg1;
  int64_t this_ptr;
  int64_t lVar4;
  int64_t *plVar5;
  int64_t local_60;
  char local_58;
  int64_t *local_40;
  char local_38;
  
  plVar5 = (int64_t *)*param_2;
  FUN_01ea1150();
  if ((local_38 == '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  cVar2 = (**(code **)(*plVar5 + 0x50))();
  if (local_40 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (cVar2 != '\0') {
    FUN_01d55700();
    if (local_58 == '\0') {
      if (local_60 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_58 = '\0';
    }
    FUN_00d21140();
    if (local_60 != 0) {
      FUN_00d50b20();
    }
    if (local_58 == '\0') {
      return;
    }
    if (local_60 == 0) {
      return;
    }
    FUN_00d50b20();
    return;
  }
  _CFDataCreate(param_1,(int64_t)*(int *)(*arg1 + 0x18));
  _CGImageSourceCreateWithData();
  lVar3 = _CGImageSourceGetCount();
  if (0 < lVar3) {
    lVar4 = 0;
    do {
      _CGImageSourceCreateImageAtIndex(param_1,0);
      local_40 = (int64_t *)FUN_00e8fc40();
      FUN_00152930();
      (**(code **)(*local_40 + 0x18))();
      FUN_01d521a0();
      local_38 = '\0';
      FUN_00d21140();
      _CGImageRelease();
      FUN_00d50b20();
      lVar4 = lVar4 + 1;
    } while (lVar3 != lVar4);
  }
  _CFRelease();
  _CFRelease();
  if (0 < *(int *)(*(int64_t *)(this_ptr + 0x18) + 0xc)) {
    return;
  }
  if ((*arg1 == 0) || (*(int *)(*arg1 + 0x18) < 1)) {
LAB_01ea32e4:
    lVar3 = g_027fe2e8;
    if (g_027fe2e8 != 0) {
      FUN_00d50b00();
    }
    FUN_00cc7b40(param_1,g_025908a0);
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
  }
  else {
    FUN_01f53c30();
    if (local_40 == (int64_t *)0x0) {
      plVar5 = (int64_t *)0x0;
    }
    else {
      plVar5 = local_40;
      if (local_38 == '\0') {
        FUN_00d50b00();
      }
      else {
        local_38 = '\0';
      }
    }
    if (plVar5 == (int64_t *)0x0) {
      FUN_01f54560();
      if (local_40 == (int64_t *)0x0) {
        local_40 = (int64_t *)0x0;
      }
      else if (local_38 == '\0') {
        FUN_00d50b00();
      }
      plVar5 = local_40;
      if (local_40 == (int64_t *)0x0) goto LAB_01ea32e4;
    }
    plVar1 = *(int64_t **)(this_ptr + 0x10);
    if (plVar1 != plVar5) {
      FUN_00d50b00();
      *(int64_t **)(this_ptr + 0x10) = plVar5;
      if (plVar1 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
    }
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 01d77040
// ============================================================
// Function: FUN_01d77040
// Address: 01d77040
// Size: 845 bytes
// Class: GNMultipleValue

void FUN_01d77040(void)

{
  int64_t this_ptr;
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
  int64_t local_30;
  char local_28;
  
  if (*(char *)(this_ptr + 0x238) != '\0') {
    FUN_00d403d0();
    FUN_00d50b00();
    local_f0 = g_027f1660;
    if (g_027f1660 != 0) {
      FUN_00d50b00();
    }
    local_e8 = '\x01';
    local_e0 = 0;
    local_d8 = '\0';
    FUN_00d41040(&local_e0,&local_f0);
    if ((local_d8 != '\0') && (local_e0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_e8 != '\0') && (local_f0 != 0)) {
      FUN_00d50b20();
    }
    if (this_ptr != 0) {
      FUN_00d50b20();
    }
    if ((local_28 != '\0') && (local_30 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d403d0();
    FUN_00d50b00();
    local_d0 = g_027f0e30;
    if (g_027f0e30 != 0) {
      FUN_00d50b00();
    }
    local_c8 = '\x01';
    local_c0 = 0;
    local_b8 = '\0';
    FUN_00d41040(&local_c0,&local_d0);
    if ((local_b8 != '\0') && (local_c0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_c8 != '\0') && (local_d0 != 0)) {
      FUN_00d50b20();
    }
    if (this_ptr != 0) {
      FUN_00d50b20();
    }
    if ((local_28 != '\0') && (local_30 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d403d0();
    FUN_00d50b00();
    local_b0 = g_027f0e38;
    if (g_027f0e38 != 0) {
      FUN_00d50b00();
    }
    local_a8 = '\x01';
    local_a0 = 0;
    local_98 = '\0';
    FUN_00d41040(&local_a0,&local_b0);
    if ((local_98 != '\0') && (local_a0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_a8 != '\0') && (local_b0 != 0)) {
      FUN_00d50b20();
    }
    if (this_ptr != 0) {
      FUN_00d50b20();
    }
    if ((local_28 != '\0') && (local_30 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d403d0();
    FUN_00d50b00();
    local_90 = g_027f0e40;
    if (g_027f0e40 != 0) {
      FUN_00d50b00();
    }
    local_88 = '\x01';
    local_80 = 0;
    local_78 = '\0';
    FUN_00d41040(&local_80,&local_90);
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
    if (this_ptr != 0) {
      FUN_00d50b20();
    }
    if ((local_28 != '\0') && (local_30 != 0)) {
      FUN_00d50b20();
    }
    *(void*)(this_ptr + 0x238) = 0;
  }
  return;
}



// ============================================================
// 01d7bb00
// ============================================================
// Function: FUN_01d7bb00
// Address: 01d7bb00
// Size: 845 bytes
// Class: GNMultipleValue

void FUN_01d7bb00(void)

{
  int64_t this_ptr;
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
  int64_t local_30;
  char local_28;
  
  if (*(char *)(this_ptr + 0x238) == '\0') {
    FUN_00d403d0();
    FUN_00d50b00();
    local_f0 = g_027f1660;
    if (g_027f1660 != 0) {
      FUN_00d50b00();
    }
    local_e8 = '\x01';
    local_e0 = 0;
    local_d8 = '\0';
    FUN_00d41430(&local_e0,&local_f0);
    if ((local_d8 != '\0') && (local_e0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_e8 != '\0') && (local_f0 != 0)) {
      FUN_00d50b20();
    }
    if (this_ptr != 0) {
      FUN_00d50b20();
    }
    if ((local_28 != '\0') && (local_30 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d403d0();
    FUN_00d50b00();
    local_d0 = g_027f0e30;
    if (g_027f0e30 != 0) {
      FUN_00d50b00();
    }
    local_c8 = '\x01';
    local_c0 = 0;
    local_b8 = '\0';
    FUN_00d41430(&local_c0,&local_d0);
    if ((local_b8 != '\0') && (local_c0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_c8 != '\0') && (local_d0 != 0)) {
      FUN_00d50b20();
    }
    if (this_ptr != 0) {
      FUN_00d50b20();
    }
    if ((local_28 != '\0') && (local_30 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d403d0();
    FUN_00d50b00();
    local_b0 = g_027f0e38;
    if (g_027f0e38 != 0) {
      FUN_00d50b00();
    }
    local_a8 = '\x01';
    local_a0 = 0;
    local_98 = '\0';
    FUN_00d41430(&local_a0,&local_b0);
    if ((local_98 != '\0') && (local_a0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_a8 != '\0') && (local_b0 != 0)) {
      FUN_00d50b20();
    }
    if (this_ptr != 0) {
      FUN_00d50b20();
    }
    if ((local_28 != '\0') && (local_30 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d403d0();
    FUN_00d50b00();
    local_90 = g_027f0e40;
    if (g_027f0e40 != 0) {
      FUN_00d50b00();
    }
    local_88 = '\x01';
    local_80 = 0;
    local_78 = '\0';
    FUN_00d41430(&local_80,&local_90);
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
    if (this_ptr != 0) {
      FUN_00d50b20();
    }
    if ((local_28 != '\0') && (local_30 != 0)) {
      FUN_00d50b20();
    }
    *(void*)(this_ptr + 0x238) = 1;
  }
  return;
}



// ============================================================
// 01d0b3b0
// ============================================================
// Function: FUN_01d0b3b0
// Address: 01d0b3b0
// Size: 545 bytes
// Class: GNMultipleValue

void FUN_01d0b3b0(void)

{
  int64_t lVar1;
  bool bVar2;
  int iVar3;
  char *pcVar4;
  int64_t *arg1;
  int64_t this_ptr;
  int64_t lVar5;
  int64_t local_b0;
  uint8_t local_a8;
  uint64_t local_a0;
  uint8_t local_98;
  int64_t local_90;
  uint8_t local_88;
  uint64_t local_80;
  uint8_t local_78;
  int64_t local_70;
  uint8_t local_68;
  int64_t local_60;
  uint8_t local_58;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38 [8];
  char local_30 [8];
  
  iVar3 = *(int *)(this_ptr + 0x250);
  if (1 < iVar3 - 1U) {
    if (iVar3 == 0) {
      local_50 = *arg1;
      local_48 = '\0';
      FUN_01d10370();
      if (local_48 == '\0') {
        return;
      }
      if (local_50 != 0) {
        FUN_00d50b20();
        return;
      }
      return;
    }
    if (iVar3 != 3) {
      return;
    }
    local_90 = *arg1;
    local_88 = 0;
    FUN_01d0b670(2,&local_90);
    if (local_40 == 0) {
      bVar2 = false;
      lVar1 = *arg1;
      lVar5 = 0;
    }
    else {
      bVar2 = true;
      if (local_38[0] == '\0') {
        FUN_00d50b00();
      }
      lVar1 = *arg1;
      lVar5 = local_40;
    }
    if ((lVar1 == 0) || (iVar3 = FUN_00d8c7a0(), iVar3 == 0)) {
      local_78 = 0;
      local_80 = 0;
      FUN_01d0aa90();
    }
    else {
      local_68 = 0;
      local_70 = lVar5;
      FUN_01d0aa90();
    }
    goto LAB_01d0b5af;
  }
  local_b0 = *arg1;
  local_a8 = 0;
  FUN_01d0b670(iVar3 - 1U,&local_b0);
  lVar5 = local_40;
  if (local_40 == 0) {
    lVar5 = 0;
    bVar2 = false;
    if (*arg1 != 0) goto LAB_01d0b4c5;
LAB_01d0b4ce:
    local_98 = 0;
    local_a0 = 0;
    FUN_01d0a320();
  }
  else {
    bVar2 = true;
    if (local_38[0] == '\0') {
      FUN_00d50b00();
    }
    if (*arg1 == 0) goto LAB_01d0b4ce;
LAB_01d0b4c5:
    iVar3 = FUN_00d8c7a0();
    if (iVar3 == 0) goto LAB_01d0b4ce;
  }
  if (*(int *)(lVar5 + 0xc) == 1) {
    FUN_00d23340();
    pcVar4 = local_30;
    if (local_38[0] != '\0') {
      pcVar4 = local_38;
    }
    local_30[0] = local_38[0];
    *pcVar4 = '\0';
    if ((local_38[0] != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((local_30[0] == '\0') && (local_40 != 0)) {
      FUN_00d50b00();
    }
    local_60 = local_40;
    local_58 = 1;
    FUN_01d0a320();
    if (local_40 != 0) {
      FUN_00d50b20();
    }
  }
LAB_01d0b5af:
  if ((bVar2) && (lVar5 != 0)) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 01d5cff0
// ============================================================
// Function: FUN_01d5cff0
// Address: 01d5cff0
// Size: 856 bytes
// Class: GNMultipleValue
// String references:
//   "removeItemAtIndex:"

void FUN_01d5cff0(void)

{
  void*puVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  int64_t lVar4;
  int64_t lVar5;
  int64_t this_ptr;
  int64_t local_b0;
  char local_a8;
  int64_t local_a0;
  char local_98;
  int64_t local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  int64_t local_40;
  char local_38;
  
  if (*(char *)(this_ptr + 0x21) != '\0') {
    FUN_00d403d0();
    FUN_00d50b00();
    local_b0 = 0;
    local_a8 = '\0';
    local_a0 = 0;
    local_98 = '\0';
    FUN_00d41040(&local_a0,&local_b0);
    if ((local_98 != '\0') && (local_a0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_a8 != '\0') && (local_b0 != 0)) {
      FUN_00d50b20();
    }
    if (this_ptr != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  *(void*)(this_ptr + 0x21) = 1;
  FUN_00d403d0();
  FUN_00d50b00();
  local_90 = g_026fce70;
  if (g_026fce70 != 0) {
    FUN_00d50b00();
  }
  local_88 = '\x01';
  local_80 = 0;
  local_78 = '\0';
  FUN_00d41430(&local_80,&local_90);
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  if (this_ptr != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  _objc_alloc();
  puVar1 = PTR__objc_msgSend_024a9998;
  (*PTR__objc_msgSend_024a9998)();
  (*PTR__objc_release_024a99a0)();
  (*puVar1)();
  uVar2 = (*PTR__objc_retain_024a99a8)();
  *(void*)(this_ptr + 0x48) = uVar2;
  (*puVar1)();
  (*puVar1)();
  uVar3 = (*puVar1)();
  while (1 < uVar3) {
    (*puVar1)();
    (*puVar1)();
    (*puVar1)();
    (*puVar1)();
    (*puVar1)();
    (*puVar1)();
    (*puVar1)();
    uVar3 = (*puVar1)();
  }
  (*PTR__objc_release_024a99a0)();
  lVar4 = *(int64_t *)(this_ptr + 0x18);
  if (0 < *(int *)(lVar4 + 0xc)) {
    lVar5 = 0;
    do {
      lVar4 = *(int64_t *)(*(int64_t *)(lVar4 + 0x10) + lVar5 * 8);
      if (lVar4 != 0) {
        FUN_00d50b00();
      }
      FUN_00d50b00();
      FUN_01d657b0();
      if (this_ptr != 0) {
        FUN_00d50b20();
      }
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      lVar5 = lVar5 + 1;
      lVar4 = *(int64_t *)(this_ptr + 0x18);
    } while (lVar5 < *(int *)(lVar4 + 0xc));
  }
  FUN_00d50b00();
  FUN_01d5b760();
  FUN_00d50b20();
  return;
}



// ============================================================
// 01e0dc40
// ============================================================
// Function: FUN_01e0dc40
// Address: 01e0dc40
// Size: 645 bytes
// Class: GNMultipleValue

void FUN_01e0dc40(uint64_t param_1,uint64_t param_2)

{
  bool bVar1;
  char cVar2;
  int64_t lVar3;
  int64_t *this_ptr;
  float fVar4;
  int64_t local_50;
  char local_48;
  int64_t local_30;
  char local_28;
  
  fVar4 = (float)((uint64_t)param_2 >> 0x20);
  FUN_01e47f00();
  if (((int64_t *)this_ptr[0x27] != (int64_t *)0x0) &&
     (cVar2 = (**(code **)(*(int64_t *)this_ptr[0x27] + 0x9a0))(), cVar2 != '\0')) {
    g_028b90d0 = 0;
    cVar2 = (**(code **)(*(int64_t *)this_ptr[0x27] + 0xac8))();
    if (cVar2 != '\0') {
      FUN_01e057f0();
    }
    (**(code **)(*(int64_t *)this_ptr[0x27] + 0x960))();
    if (local_48 == '\0') {
      if (local_50 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_48 = '\0';
    }
    FUN_00d8dab0();
    if (local_28 == '\0') {
      if (local_30 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_28 = '\0';
    }
    if (local_50 != 0) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    lVar3 = g_028b90a0;
    if (g_028b90a0 != local_30) {
      if (local_30 != 0) {
        FUN_00d50b00();
      }
      g_028b90a0 = local_30;
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
    }
    if ((local_30 != 0) && (g_028b90a8 == '\0')) {
      g_028b90a8 = '\x01';
      FUN_00e8cb90();
    }
    FUN_01e3f820();
    bVar1 = (float)((uint64_t)param_1 >> 0x20) < fVar4 * g_0239011c;
    *(uint *)(this_ptr + 0x28) = (bVar1 - 1) + (uint)bVar1;
    (**(code **)(*this_ptr + 0x620))();
    FUN_01e1eb80((int)g_023942d0);
    lVar3 = g_028b90c0;
    if (g_028b90c0 != local_30) {
      if (local_28 == '\0') {
        if (local_30 == 0) {
          lVar3 = 0;
        }
        else {
          FUN_00d50b00();
          lVar3 = local_30;
        }
      }
      else {
        local_28 = '\0';
        lVar3 = local_30;
      }
      bVar1 = g_028b90c0 != 0;
      g_028b90c0 = lVar3;
      if (bVar1) {
        FUN_00d50b20();
        lVar3 = local_30;
      }
    }
    if ((lVar3 != 0) && (g_028b90c8 == '\0')) {
      g_028b90c8 = '\x01';
      FUN_00e8cb90();
      lVar3 = local_30;
    }
    if ((local_28 != '\0') && (lVar3 != 0)) {
      FUN_00d50b20();
    }
    g_028b90d1 = 1;
    if (local_30 != 0) {
      FUN_00d50b20();
    }
  }
  return;
}



// ============================================================
// 01ea1150
// ============================================================
// Function: FUN_01ea1150
// Address: 01ea1150
// Size: 509 bytes
// Class: GNMultipleValue

void FUN_01ea1150(uint64_t param_1)

{
  bool bVar1;
  bool bVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t *plVar5;
  void*this_ptr;
  bool bVar6;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  int64_t local_30;
  char local_28;
  
  plVar5 = g_028ba170;
  if ((g_028ba170 == (int64_t *)0x0) || (g_028ba179 == '\0')) {
    FUN_00e8cb50();
    if (g_028ba170 == (int64_t *)0x0) {
      plVar5 = (int64_t *)FUN_00e8fc40();
      FUN_000422b0();
      (**(code **)(*plVar5 + 0x18))();
      if (g_028ba170 == plVar5) {
        bVar2 = false;
        bVar1 = false;
      }
      else {
        bVar2 = true;
        bVar1 = true;
        bVar6 = g_028ba170 != (int64_t *)0x0;
        g_028ba170 = plVar5;
        if (bVar6) {
          FUN_00d50b20();
        }
      }
      if (g_028ba178 == '\0') {
        g_028ba178 = '\x01';
        FUN_00e8cb90();
        bVar1 = bVar2;
      }
      if (!bVar1) {
        FUN_00d50b20();
      }
      lVar3 = g_027fe1e0;
      if (g_027fe1e0 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_027fe228;
      if (g_027fe228 != 0) {
        FUN_00d50b00();
      }
      local_50 = lVar4;
      local_48 = '\x01';
      FUN_00df16f0(param_1,&local_50);
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = g_027fe230;
      if (g_027fe230 != 0) {
        FUN_00d50b00();
      }
      local_40 = lVar3;
      local_38 = '\x01';
      FUN_00df1690();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      lVar3 = g_027fe238;
      if (g_027fe238 != 0) {
        FUN_00d50b00();
      }
      local_30 = lVar3;
      local_28 = '\x01';
      FUN_00df1570();
      if ((local_28 != '\0') && (local_30 != 0)) {
        FUN_00d50b20();
      }
      g_028ba179 = '\x01';
      FUN_00e8cb70();
    }
    else {
      g_028ba179 = '\x01';
      FUN_00e8cb70();
    }
    plVar5 = g_028ba170;
    *(void*)(this_ptr + 1) = 0;
    if (plVar5 == (int64_t *)0x0) {
      plVar5 = (int64_t *)0x0;
      goto LAB_01ea1333;
    }
  }
  else {
    *(void*)(this_ptr + 1) = 0;
  }
  FUN_00d50b00();
LAB_01ea1333:
  *this_ptr = plVar5;
  *(void*)(this_ptr + 1) = 1;
  return;
}



// ============================================================
// 01ea0e40
// ============================================================
// Function: FUN_01ea0e40
// Address: 01ea0e40
// Size: 509 bytes
// Class: GNMultipleValue

void FUN_01ea0e40(uint64_t param_1)

{
  bool bVar1;
  bool bVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t *plVar5;
  void*this_ptr;
  bool bVar6;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  int64_t local_30;
  char local_28;
  
  plVar5 = g_028ba160;
  if ((g_028ba160 == (int64_t *)0x0) || (g_028ba169 == '\0')) {
    FUN_00e8cb50();
    if (g_028ba160 == (int64_t *)0x0) {
      plVar5 = (int64_t *)FUN_00e8fc40();
      FUN_000422b0();
      (**(code **)(*plVar5 + 0x18))();
      if (g_028ba160 == plVar5) {
        bVar2 = false;
        bVar1 = false;
      }
      else {
        bVar2 = true;
        bVar1 = true;
        bVar6 = g_028ba160 != (int64_t *)0x0;
        g_028ba160 = plVar5;
        if (bVar6) {
          FUN_00d50b20();
        }
      }
      if (g_028ba168 == '\0') {
        g_028ba168 = '\x01';
        FUN_00e8cb90();
        bVar1 = bVar2;
      }
      if (!bVar1) {
        FUN_00d50b20();
      }
      lVar3 = g_027fe1e0;
      if (g_027fe1e0 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_027fe210;
      if (g_027fe210 != 0) {
        FUN_00d50b00();
      }
      local_50 = lVar4;
      local_48 = '\x01';
      FUN_00df16f0(param_1,&local_50);
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = g_027fe218;
      if (g_027fe218 != 0) {
        FUN_00d50b00();
      }
      local_40 = lVar3;
      local_38 = '\x01';
      FUN_00df1690();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      lVar3 = g_027fe220;
      if (g_027fe220 != 0) {
        FUN_00d50b00();
      }
      local_30 = lVar3;
      local_28 = '\x01';
      FUN_00df1570();
      if ((local_28 != '\0') && (local_30 != 0)) {
        FUN_00d50b20();
      }
      g_028ba169 = '\x01';
      FUN_00e8cb70();
    }
    else {
      g_028ba169 = '\x01';
      FUN_00e8cb70();
    }
    plVar5 = g_028ba160;
    *(void*)(this_ptr + 1) = 0;
    if (plVar5 == (int64_t *)0x0) {
      plVar5 = (int64_t *)0x0;
      goto LAB_01ea1023;
    }
  }
  else {
    *(void*)(this_ptr + 1) = 0;
  }
  FUN_00d50b00();
LAB_01ea1023:
  *this_ptr = plVar5;
  *(void*)(this_ptr + 1) = 1;
  return;
}



// ============================================================
// 01ea1a80
// ============================================================
// Function: FUN_01ea1a80
// Address: 01ea1a80
// Size: 509 bytes
// Class: GNMultipleValue

void FUN_01ea1a80(uint64_t param_1)

{
  bool bVar1;
  bool bVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t *plVar5;
  void*this_ptr;
  bool bVar6;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  int64_t local_30;
  char local_28;
  
  plVar5 = g_028ba1a0;
  if ((g_028ba1a0 == (int64_t *)0x0) || (g_028ba1a9 == '\0')) {
    FUN_00e8cb50();
    if (g_028ba1a0 == (int64_t *)0x0) {
      plVar5 = (int64_t *)FUN_00e8fc40();
      FUN_000422b0();
      (**(code **)(*plVar5 + 0x18))();
      if (g_028ba1a0 == plVar5) {
        bVar2 = false;
        bVar1 = false;
      }
      else {
        bVar2 = true;
        bVar1 = true;
        bVar6 = g_028ba1a0 != (int64_t *)0x0;
        g_028ba1a0 = plVar5;
        if (bVar6) {
          FUN_00d50b20();
        }
      }
      if (g_028ba1a8 == '\0') {
        g_028ba1a8 = '\x01';
        FUN_00e8cb90();
        bVar1 = bVar2;
      }
      if (!bVar1) {
        FUN_00d50b20();
      }
      lVar3 = g_027fe1e0;
      if (g_027fe1e0 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_027fe270;
      if (g_027fe270 != 0) {
        FUN_00d50b00();
      }
      local_50 = lVar4;
      local_48 = '\x01';
      FUN_00df16f0(param_1,&local_50);
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = g_027fe278;
      if (g_027fe278 != 0) {
        FUN_00d50b00();
      }
      local_40 = lVar3;
      local_38 = '\x01';
      FUN_00df1690();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      lVar3 = g_027fe280;
      if (g_027fe280 != 0) {
        FUN_00d50b00();
      }
      local_30 = lVar3;
      local_28 = '\x01';
      FUN_00df1570();
      if ((local_28 != '\0') && (local_30 != 0)) {
        FUN_00d50b20();
      }
      g_028ba1a9 = '\x01';
      FUN_00e8cb70();
    }
    else {
      g_028ba1a9 = '\x01';
      FUN_00e8cb70();
    }
    plVar5 = g_028ba1a0;
    *(void*)(this_ptr + 1) = 0;
    if (plVar5 == (int64_t *)0x0) {
      plVar5 = (int64_t *)0x0;
      goto LAB_01ea1c63;
    }
  }
  else {
    *(void*)(this_ptr + 1) = 0;
  }
  FUN_00d50b00();
LAB_01ea1c63:
  *this_ptr = plVar5;
  *(void*)(this_ptr + 1) = 1;
  return;
}



// ============================================================
// 01ea1d90
// ============================================================
// Function: FUN_01ea1d90
// Address: 01ea1d90
// Size: 509 bytes
// Class: GNMultipleValue

void FUN_01ea1d90(uint64_t param_1)

{
  bool bVar1;
  bool bVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t *plVar5;
  void*this_ptr;
  bool bVar6;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  int64_t local_30;
  char local_28;
  
  plVar5 = g_028ba1b0;
  if ((g_028ba1b0 == (int64_t *)0x0) || (g_028ba1b9 == '\0')) {
    FUN_00e8cb50();
    if (g_028ba1b0 == (int64_t *)0x0) {
      plVar5 = (int64_t *)FUN_00e8fc40();
      FUN_000422b0();
      (**(code **)(*plVar5 + 0x18))();
      if (g_028ba1b0 == plVar5) {
        bVar2 = false;
        bVar1 = false;
      }
      else {
        bVar2 = true;
        bVar1 = true;
        bVar6 = g_028ba1b0 != (int64_t *)0x0;
        g_028ba1b0 = plVar5;
        if (bVar6) {
          FUN_00d50b20();
        }
      }
      if (g_028ba1b8 == '\0') {
        g_028ba1b8 = '\x01';
        FUN_00e8cb90();
        bVar1 = bVar2;
      }
      if (!bVar1) {
        FUN_00d50b20();
      }
      lVar3 = g_027fe1e0;
      if (g_027fe1e0 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_027fe288;
      if (g_027fe288 != 0) {
        FUN_00d50b00();
      }
      local_50 = lVar4;
      local_48 = '\x01';
      FUN_00df16f0(param_1,&local_50);
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = g_027fe290;
      if (g_027fe290 != 0) {
        FUN_00d50b00();
      }
      local_40 = lVar3;
      local_38 = '\x01';
      FUN_00df1690();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      lVar3 = g_027fe298;
      if (g_027fe298 != 0) {
        FUN_00d50b00();
      }
      local_30 = lVar3;
      local_28 = '\x01';
      FUN_00df1570();
      if ((local_28 != '\0') && (local_30 != 0)) {
        FUN_00d50b20();
      }
      g_028ba1b9 = '\x01';
      FUN_00e8cb70();
    }
    else {
      g_028ba1b9 = '\x01';
      FUN_00e8cb70();
    }
    plVar5 = g_028ba1b0;
    *(void*)(this_ptr + 1) = 0;
    if (plVar5 == (int64_t *)0x0) {
      plVar5 = (int64_t *)0x0;
      goto LAB_01ea1f73;
    }
  }
  else {
    *(void*)(this_ptr + 1) = 0;
  }
  FUN_00d50b00();
LAB_01ea1f73:
  *this_ptr = plVar5;
  *(void*)(this_ptr + 1) = 1;
  return;
}



// ============================================================
// 01ea2540
// ============================================================
// Function: FUN_01ea2540
// Address: 01ea2540
// Size: 509 bytes
// Class: GNMultipleValue

void FUN_01ea2540(uint64_t param_1)

{
  bool bVar1;
  bool bVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t *plVar5;
  void*this_ptr;
  bool bVar6;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  int64_t local_30;
  char local_28;
  
  plVar5 = g_028ba1d0;
  if ((g_028ba1d0 == (int64_t *)0x0) || (g_028ba1d9 == '\0')) {
    FUN_00e8cb50();
    if (g_028ba1d0 == (int64_t *)0x0) {
      plVar5 = (int64_t *)FUN_00e8fc40();
      FUN_000422b0();
      (**(code **)(*plVar5 + 0x18))();
      if (g_028ba1d0 == plVar5) {
        bVar2 = false;
        bVar1 = false;
      }
      else {
        bVar2 = true;
        bVar1 = true;
        bVar6 = g_028ba1d0 != (int64_t *)0x0;
        g_028ba1d0 = plVar5;
        if (bVar6) {
          FUN_00d50b20();
        }
      }
      if (g_028ba1d8 == '\0') {
        g_028ba1d8 = '\x01';
        FUN_00e8cb90();
        bVar1 = bVar2;
      }
      if (!bVar1) {
        FUN_00d50b20();
      }
      lVar3 = g_027fe1e0;
      if (g_027fe1e0 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_027fe2d0;
      if (g_027fe2d0 != 0) {
        FUN_00d50b00();
      }
      local_50 = lVar4;
      local_48 = '\x01';
      FUN_00df16f0(param_1,&local_50);
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = g_027fe2d8;
      if (g_027fe2d8 != 0) {
        FUN_00d50b00();
      }
      local_40 = lVar3;
      local_38 = '\x01';
      FUN_00df1690();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      lVar3 = g_027fe2e0;
      if (g_027fe2e0 != 0) {
        FUN_00d50b00();
      }
      local_30 = lVar3;
      local_28 = '\x01';
      FUN_00df1570();
      if ((local_28 != '\0') && (local_30 != 0)) {
        FUN_00d50b20();
      }
      g_028ba1d9 = '\x01';
      FUN_00e8cb70();
    }
    else {
      g_028ba1d9 = '\x01';
      FUN_00e8cb70();
    }
    plVar5 = g_028ba1d0;
    *(void*)(this_ptr + 1) = 0;
    if (plVar5 == (int64_t *)0x0) {
      plVar5 = (int64_t *)0x0;
      goto LAB_01ea2723;
    }
  }
  else {
    *(void*)(this_ptr + 1) = 0;
  }
  FUN_00d50b00();
LAB_01ea2723:
  *this_ptr = plVar5;
  *(void*)(this_ptr + 1) = 1;
  return;
}



// ============================================================
// 01ea1770
// ============================================================
// Function: FUN_01ea1770
// Address: 01ea1770
// Size: 509 bytes
// Class: GNMultipleValue

void FUN_01ea1770(uint64_t param_1)

{
  bool bVar1;
  bool bVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t *plVar5;
  void*this_ptr;
  bool bVar6;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  int64_t local_30;
  char local_28;
  
  plVar5 = g_028ba190;
  if ((g_028ba190 == (int64_t *)0x0) || (g_028ba199 == '\0')) {
    FUN_00e8cb50();
    if (g_028ba190 == (int64_t *)0x0) {
      plVar5 = (int64_t *)FUN_00e8fc40();
      FUN_000422b0();
      (**(code **)(*plVar5 + 0x18))();
      if (g_028ba190 == plVar5) {
        bVar2 = false;
        bVar1 = false;
      }
      else {
        bVar2 = true;
        bVar1 = true;
        bVar6 = g_028ba190 != (int64_t *)0x0;
        g_028ba190 = plVar5;
        if (bVar6) {
          FUN_00d50b20();
        }
      }
      if (g_028ba198 == '\0') {
        g_028ba198 = '\x01';
        FUN_00e8cb90();
        bVar1 = bVar2;
      }
      if (!bVar1) {
        FUN_00d50b20();
      }
      lVar3 = g_027fe1e0;
      if (g_027fe1e0 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_027fe258;
      if (g_027fe258 != 0) {
        FUN_00d50b00();
      }
      local_50 = lVar4;
      local_48 = '\x01';
      FUN_00df16f0(param_1,&local_50);
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = g_027fe260;
      if (g_027fe260 != 0) {
        FUN_00d50b00();
      }
      local_40 = lVar3;
      local_38 = '\x01';
      FUN_00df1690();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      lVar3 = g_027fe268;
      if (g_027fe268 != 0) {
        FUN_00d50b00();
      }
      local_30 = lVar3;
      local_28 = '\x01';
      FUN_00df1570();
      if ((local_28 != '\0') && (local_30 != 0)) {
        FUN_00d50b20();
      }
      g_028ba199 = '\x01';
      FUN_00e8cb70();
    }
    else {
      g_028ba199 = '\x01';
      FUN_00e8cb70();
    }
    plVar5 = g_028ba190;
    *(void*)(this_ptr + 1) = 0;
    if (plVar5 == (int64_t *)0x0) {
      plVar5 = (int64_t *)0x0;
      goto LAB_01ea1953;
    }
  }
  else {
    *(void*)(this_ptr + 1) = 0;
  }
  FUN_00d50b00();
LAB_01ea1953:
  *this_ptr = plVar5;
  *(void*)(this_ptr + 1) = 1;
  return;
}



// ============================================================
// 01ea1460
// ============================================================
// Function: FUN_01ea1460
// Address: 01ea1460
// Size: 509 bytes
// Class: GNMultipleValue

void FUN_01ea1460(uint64_t param_1)

{
  bool bVar1;
  bool bVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t *plVar5;
  void*this_ptr;
  bool bVar6;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  int64_t local_30;
  char local_28;
  
  plVar5 = g_028ba180;
  if ((g_028ba180 == (int64_t *)0x0) || (g_028ba189 == '\0')) {
    FUN_00e8cb50();
    if (g_028ba180 == (int64_t *)0x0) {
      plVar5 = (int64_t *)FUN_00e8fc40();
      FUN_000422b0();
      (**(code **)(*plVar5 + 0x18))();
      if (g_028ba180 == plVar5) {
        bVar2 = false;
        bVar1 = false;
      }
      else {
        bVar2 = true;
        bVar1 = true;
        bVar6 = g_028ba180 != (int64_t *)0x0;
        g_028ba180 = plVar5;
        if (bVar6) {
          FUN_00d50b20();
        }
      }
      if (g_028ba188 == '\0') {
        g_028ba188 = '\x01';
        FUN_00e8cb90();
        bVar1 = bVar2;
      }
      if (!bVar1) {
        FUN_00d50b20();
      }
      lVar3 = g_027fe1e0;
      if (g_027fe1e0 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_027fe240;
      if (g_027fe240 != 0) {
        FUN_00d50b00();
      }
      local_50 = lVar4;
      local_48 = '\x01';
      FUN_00df16f0(param_1,&local_50);
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = g_027fe248;
      if (g_027fe248 != 0) {
        FUN_00d50b00();
      }
      local_40 = lVar3;
      local_38 = '\x01';
      FUN_00df1690();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      lVar3 = g_027fe250;
      if (g_027fe250 != 0) {
        FUN_00d50b00();
      }
      local_30 = lVar3;
      local_28 = '\x01';
      FUN_00df1570();
      if ((local_28 != '\0') && (local_30 != 0)) {
        FUN_00d50b20();
      }
      g_028ba189 = '\x01';
      FUN_00e8cb70();
    }
    else {
      g_028ba189 = '\x01';
      FUN_00e8cb70();
    }
    plVar5 = g_028ba180;
    *(void*)(this_ptr + 1) = 0;
    if (plVar5 == (int64_t *)0x0) {
      plVar5 = (int64_t *)0x0;
      goto LAB_01ea1643;
    }
  }
  else {
    *(void*)(this_ptr + 1) = 0;
  }
  FUN_00d50b00();
LAB_01ea1643:
  *this_ptr = plVar5;
  *(void*)(this_ptr + 1) = 1;
  return;
}



// ============================================================
// 01eca6c0
// ============================================================
// Function: FUN_01eca6c0
// Address: 01eca6c0
// Size: 735 bytes
// Class: GNMultipleValue

uint64_t FUN_01eca6c0(uint64_t param_1,char param_2)

{
  int64_t lVar1;
  int64_t lVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  uint64_t arg1;
  int64_t *this_ptr;
  uint64_t uVar6;
  int64_t *local_40;
  char local_38;
  undefined7 uVar7;
  
  FUN_01cae990();
  lVar1 = g_027fe668;
  if (g_027fe668 != 0) {
    FUN_00d50b00();
  }
  cVar3 = (**(code **)(*local_40 + 0x50))();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar3 == '\0') {
    uVar4 = FUN_01ec81d0();
    uVar6 = (uint64_t)uVar4;
    goto LAB_01eca98d;
  }
  (**(code **)(*this_ptr + 0x520))();
  if (local_38 == '\0') {
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b00();
      goto LAB_01eca7d5;
    }
  }
  else if (local_40 != (int64_t *)0x0) {
LAB_01eca7d5:
    FUN_01ccad60();
    if (local_38 == '\0') {
      if (local_40 == (int64_t *)0x0) goto LAB_01eca935;
      FUN_00d50b00();
LAB_01eca827:
      lVar1 = g_027e7c20;
      if (g_027e7c20 != 0) {
        FUN_00d50b00();
      }
      FUN_01ccaae0();
      if ((local_38 == '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b00();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      uVar7 = (undefined7)((uint64_t)arg1 >> 8);
      uVar6 = CONCAT71(uVar7,local_40 != (int64_t *)0x0);
      if (local_40 != (int64_t *)0x0) {
        if (param_2 != '\0') {
          iVar5 = FUN_01d70da0();
          lVar1 = *(int64_t *)(local_40[2] + (int64_t)iVar5 * 8);
          if (lVar1 != 0) {
            FUN_00d50b00();
          }
          lVar2 = g_027e7c20;
          if (g_027e7c20 != 0) {
            FUN_00d50b00();
          }
          (**(code **)(*this_ptr + 0x4d0))();
          if (lVar2 != 0) {
            FUN_00d50b20();
          }
          uVar6 = CONCAT71(uVar7,1);
          if (lVar1 != 0) {
            FUN_00d50b20();
          }
        }
        if (local_40 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
      }
      FUN_00d50b20();
    }
    else {
      if (local_40 != (int64_t *)0x0) goto LAB_01eca827;
LAB_01eca935:
      uVar6 = 0;
    }
    FUN_00d50b20();
    goto LAB_01eca98d;
  }
  uVar6 = 0;
LAB_01eca98d:
  return uVar6 & 0xffffffff;
}



// ============================================================
// 01d7cd60
// ============================================================
// Function: FUN_01d7cd60
// Address: 01d7cd60
// Size: 502 bytes
// Class: GNMultipleValue

void FUN_01d7cd60(void)

{
  char unaff_SIL;
  int64_t *this_ptr;
  int64_t local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  int64_t local_30;
  char local_28;
  
  if ((char)this_ptr[0x49] != unaff_SIL) {
    *(char *)(this_ptr + 0x49) = unaff_SIL;
    if (unaff_SIL == '\0') {
      FUN_00d46dc0(0);
      local_40 = local_30;
      local_38 = 0;
      local_60 = g_027f0f28;
      if (local_28 == '\0') {
        if (local_30 != 0) {
          FUN_00d50b00();
          local_60 = g_027f0f28;
        }
      }
      else {
        local_28 = '\0';
      }
      local_38 = '\x01';
      g_027f0f28 = local_60;
      if (local_60 != 0) {
        local_38 = '\x01';
        FUN_00d50b00();
      }
      local_58 = '\x01';
      (**(code **)(*this_ptr + 0x408))(&local_60,&local_40);
      if ((local_78 != '\0') && (local_80 != 0)) {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if ((local_28 != '\0') && (local_30 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      FUN_00d46dc0(g_0239011c);
      local_50 = local_30;
      local_48 = 0;
      local_70 = g_027f0f28;
      if (local_28 == '\0') {
        if (local_30 != 0) {
          FUN_00d50b00();
          local_70 = g_027f0f28;
        }
      }
      else {
        local_28 = '\0';
      }
      local_48 = '\x01';
      g_027f0f28 = local_70;
      if (local_70 != 0) {
        local_48 = '\x01';
        FUN_00d50b00();
      }
      local_68 = '\x01';
      (**(code **)(*this_ptr + 0x408))(&local_70,&local_50);
      if ((local_88 != '\0') && (local_90 != 0)) {
        FUN_00d50b20();
      }
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      if ((local_28 != '\0') && (local_30 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  return;
}



// ============================================================
// 01d086f0
// ============================================================
// Function: FUN_01d086f0
// Address: 01d086f0
// Size: 688 bytes
// Class: GNMultipleValue

void FUN_01d086f0(uint64_t param_1,uint32_t param_2)

{
  int64_t *plVar1;
  int64_t *plVar2;
  char cVar3;
  uint8_t uVar4;
  int64_t *this_ptr;
  uint32_t uVar5;
  uint32_t uVar6;
  uint32_t extraout_XMM0_Dc;
  int64_t local_68;
  char local_60;
  int64_t local_48;
  char local_40;
  int64_t *local_38;
  char local_30;
  
  cVar3 = (**(code **)(*this_ptr + 0xac8))();
  if (cVar3 != '\0') {
    (**(code **)(*this_ptr + 0x878))();
  }
  (**(code **)(*this_ptr + 0x640))();
  plVar1 = local_38;
  if ((((local_30 == '\0') && (local_38 != (int64_t *)0x0)) && (FUN_00d50b00(), local_30 != '\0'))
     && (local_38 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  cVar3 = FUN_01e07410();
  if (cVar3 != '\0') {
    uVar5 = FUN_01e3f820();
    uVar6 = extraout_XMM0_Dc;
    cVar3 = (**(code **)(*this_ptr + 0x9a0))();
    if (cVar3 == '\0') {
      uVar4 = 0;
    }
    else {
      uVar4 = FUN_01e05890();
    }
    (**(code **)(*plVar1 + 0x3f0))(uVar5,0x18,0,uVar4,uVar5,uVar6);
  }
  cVar3 = (**(code **)(*this_ptr + 0xac8))();
  if (cVar3 == '\0') {
    uVar6 = FUN_01e3f820();
    (**(code **)(*this_ptr + 0x960))();
    plVar2 = local_38;
    if (local_30 == '\0') {
      if (local_38 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_30 = '\0';
    }
    (**(code **)(*this_ptr + 0x9e0))();
    local_40 = 0;
    if (local_60 == '\0') {
      if (local_68 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_60 = '\0';
    }
    local_40 = '\x01';
    local_48 = local_68;
    uVar5 = *(void*)((int64_t)this_ptr + 0x174);
    (**(code **)(*this_ptr + 0x9a0))();
    (**(code **)(*plVar1 + 0x400))(uVar6,param_2,&local_48,uVar5);
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if (plVar2 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else if (plVar1 == (int64_t *)0x0) {
    return;
  }
  FUN_00d50b20();
  return;
}



// ============================================================
// 01ccc2f0
// ============================================================
// Function: FUN_01ccc2f0
// Address: 01ccc2f0
// Size: 596 bytes
// Class: GNMultipleValue

void* FUN_01ccc2f0(uint64_t param_1,void*param_2)

{
  int64_t lVar1;
  void*this_ptr;
  uint64_t local_90;
  uint8_t local_88;
  uint64_t local_80;
  uint8_t local_78;
  int64_t *local_70;
  char local_68;
  int64_t *local_60;
  char local_58;
  int64_t *local_40;
  char local_38;
  
  local_90 = *param_2;
  local_88 = 0;
  FUN_01ccab60(param_1,&local_90);
  if (local_38 == '\0') {
    if (local_40 == (int64_t *)0x0) goto LAB_01ccc387;
    FUN_00d50b00();
  }
  else if (local_40 == (int64_t *)0x0) {
LAB_01ccc387:
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
    return this_ptr;
  }
  FUN_01cc98b0();
  if (local_38 == '\0') {
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b00();
      goto LAB_01ccc3ac;
    }
  }
  else if (local_40 != (int64_t *)0x0) {
LAB_01ccc3ac:
    lVar1 = local_40[5];
    FUN_00d50b20();
    if (lVar1 != 0) {
      FUN_00d50b00();
      local_70 = local_40;
      local_68 = '\0';
      FUN_01d26d00(param_1 & 0xffffffff,&local_70);
      if (local_38 == '\0') {
        if (local_40 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      local_80 = *param_2;
      local_78 = 0;
      FUN_01ccac20();
      if (local_38 == '\0') {
        if (local_40 != (int64_t *)0x0) {
          FUN_00d50b00();
          goto LAB_01ccc47c;
        }
      }
      else if (local_40 != (int64_t *)0x0) {
LAB_01ccc47c:
        local_60 = local_40;
        local_58 = '\0';
        (**(code **)(*local_40 + 0x370))();
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
      }
      *this_ptr = local_40;
      *(void*)(this_ptr + 1) = 1;
      FUN_00d50b20();
      goto LAB_01ccc528;
    }
  }
  *(void*)(this_ptr + 1) = 0;
  *this_ptr = 0;
LAB_01ccc528:
  FUN_00d50b20();
  return this_ptr;
}



// ============================================================
// 01f0c590
// ============================================================
// Function: FUN_01f0c590
// Address: 01f0c590
// Size: 523 bytes
// Class: GNMultipleValue

int64_t * FUN_01f0c590(uint32_t param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  uint64_t uVar4;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t lVar5;
  int64_t lVar6;
  uint32_t uVar7;
  uint32_t extraout_XMM0_Da;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  
  if (arg1[0x2d] == 0) {
    (**(code **)(*arg1 + 0x930))();
  }
  FUN_01e466c0(param_1);
  uVar7 = (**(code **)(*arg1 + 0x950))();
  lVar6 = 8;
  uVar4 = 0;
  bVar1 = false;
  local_40 = 0;
  do {
    iVar3 = FUN_01d5b230();
    if ((int64_t)iVar3 <= (int64_t)uVar4) {
      *(void*)(this_ptr + 1) = 0;
      *this_ptr = 0;
      if (!bVar1) {
        return this_ptr;
      }
      if (local_40 == 0) {
        return this_ptr;
      }
      FUN_00d50b20();
      return this_ptr;
    }
    FUN_01d5b240(extraout_XMM0_Da,uVar4 & 0xffffffff);
    if (local_40 == local_50) {
      if ((bVar1) || (local_40 == 0)) goto joined_r0x01f0c6ed;
      bVar1 = true;
      if (local_48 == '\0') {
        FUN_00d50b00();
        lVar5 = local_40;
        goto LAB_01f0c6ce;
      }
    }
    else if (local_48 == '\0') {
      if (local_50 != 0) {
        FUN_00d50b00();
      }
      lVar5 = local_50;
      if ((bVar1) && (local_40 != 0)) {
        FUN_00d50b20();
      }
LAB_01f0c6ce:
      bVar1 = true;
      local_40 = lVar5;
joined_r0x01f0c6ed:
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
    }
    else if ((bVar1) && (local_40 != 0)) {
      local_40 = local_50;
      FUN_00d50b20();
      bVar1 = true;
    }
    else {
      local_40 = local_50;
      bVar1 = true;
    }
    cVar2 = FUN_00d05410(uVar7,*(void*)(*(int64_t *)(arg1[0x2d] + 0x10) + -8 + lVar6),
                         *(void*)(*(int64_t *)(arg1[0x2d] + 0x10) + lVar6));
    uVar4 = uVar4 + 1;
    lVar6 = lVar6 + 0x10;
    if (cVar2 != '\0') {
      *(void*)(this_ptr + 1) = 0;
      if ((!bVar1) && (local_40 != 0)) {
        FUN_00d50b00();
      }
      *this_ptr = local_40;
      *(void*)(this_ptr + 1) = 1;
      return this_ptr;
    }
  } while( true );
}



// ============================================================
// 01e0c230
// ============================================================
// Function: FUN_01e0c230
// Address: 01e0c230
// Size: 588 bytes
// Class: GNMultipleValue

void FUN_01e0c230(void)

{
  int64_t lVar1;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t local_c8;
  void*local_c0;
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
  int64_t local_40;
  char local_38;
  
  if ((int64_t *)this_ptr[0x43] != (int64_t *)0x0) {
    local_80 = *arg1;
    local_78 = '\0';
    (**(code **)(*(int64_t *)this_ptr[0x43] + 0x20))();
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
  }
  if ((*(char *)((int64_t)this_ptr + 0x20a) != '\0') && (this_ptr[0x3a] != 0)) {
    (**(code **)(*this_ptr + 0xb28))();
  }
  FUN_00d403d0();
  local_70 = g_027f30a8;
  if (g_027f30a8 != 0) {
    FUN_00d50b00();
  }
  local_68 = '\x01';
  FUN_00d50b00();
  lVar1 = g_027f30b0;
  if (g_027f30b0 != 0) {
    FUN_00d50b00();
  }
  local_c8 = lVar1;
  FUN_00083ea0(2,&local_c8);
  FUN_000b4da0();
  local_40 = local_60;
  local_38 = 0;
  if (local_58 == '\0') {
    if (local_60 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_58 = '\0';
  }
  local_38 = '\x01';
  FUN_00d40470(&local_40,&stack0xffffffffffffffb0,1,3);
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  local_c0 = (void*)&g_0253d630;
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  local_c0 = &g_024c5048;
  if ((local_a8 != '\0') && (local_b0 != 0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if (this_ptr != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  if (*(char *)((int64_t)this_ptr + 0x209) != '\0') {
    (**(code **)(*this_ptr + 0xa50))();
  }
  return;
}



// ============================================================
// 01d5a790
// ============================================================
// Function: FUN_01d5a790
// Address: 01d5a790
// Size: 501 bytes
// Class: GNMultipleValue

void FUN_01d5a790(void)

{
  char cVar1;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t local_98;
  char local_90;
  int64_t local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  int64_t *local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  char local_40;
  int64_t local_38;
  char local_30;
  
  cVar1 = FUN_01d10140();
  if (cVar1 != '\0') {
    FUN_00d4efa0();
    FUN_00c82bb0();
    local_58 = local_38;
    local_50 = 0;
    if (local_30 == '\0') {
      if (local_38 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_30 = '\0';
    }
    local_50 = '\x01';
    FUN_00e3f850();
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
    local_60 = 0;
    (**(code **)(this_ptr[2] + 0x10))();
    FUN_00d50b00();
    local_88 = g_027f2f40;
    local_60 = '\x01';
    local_68 = this_ptr + 2;
    if (g_027f2f40 != 0) {
      FUN_00d50b00();
    }
    local_80 = '\x01';
    (**(code **)(*this_ptr + 0x960))();
    local_48 = local_38;
    local_40 = 0;
    if (local_30 == '\0') {
      if (local_38 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_30 = '\0';
    }
    local_40 = '\x01';
    FUN_00e3fb50(&local_48,&local_88);
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
      (**(code **)(*local_68 + 0x10))();
      FUN_00d50b20();
    }
    FUN_00e3faa0();
  }
  local_78 = *arg1;
  local_70 = '\0';
  FUN_01e4d060();
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 01edd760
// ============================================================
// Function: FUN_01edd760
// Address: 01edd760
// Size: 524 bytes
// Class: GNMultipleValue

void FUN_01edd760(void)

{
  bool bVar1;
  bool bVar2;
  int64_t lVar3;
  int64_t *plVar4;
  void*this_ptr;
  bool bVar5;
  
  plVar4 = g_028ba5f0;
  if ((g_028ba5f0 == (int64_t *)0x0) || (g_028ba5f9 == '\0')) {
    FUN_00e8cb50();
    if (g_028ba5f0 == (int64_t *)0x0) {
      plVar4 = (int64_t *)FUN_00e8fc40();
      FUN_000422b0();
      (**(code **)(*plVar4 + 0x18))();
      if (g_028ba5f0 == plVar4) {
        bVar2 = false;
        bVar1 = false;
      }
      else {
        bVar2 = true;
        bVar1 = true;
        bVar5 = g_028ba5f0 != (int64_t *)0x0;
        g_028ba5f0 = plVar4;
        if (bVar5) {
          FUN_00d50b20();
        }
      }
      if (g_028ba5f8 == '\0') {
        g_028ba5f8 = '\x01';
        FUN_00e8cb90();
        bVar1 = bVar2;
      }
      if (!bVar1) {
        FUN_00d50b20();
      }
      lVar3 = g_027fe8b0;
      if (g_027fe8b0 != 0) {
        FUN_00d50b00();
      }
      FUN_00df1910();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = g_027fe8b8;
      if (g_027fe8b8 != 0) {
        FUN_00d50b00();
      }
      FUN_00df1690();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = g_027fe8c0;
      if (g_027fe8c0 != 0) {
        FUN_00d50b00();
      }
      FUN_00df1570();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = g_027fe8c8;
      if (g_027fe8c8 != 0) {
        FUN_00d50b00();
      }
      FUN_00df1600();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      g_028ba5f9 = '\x01';
      FUN_00e8cb70();
    }
    else {
      g_028ba5f9 = '\x01';
      FUN_00e8cb70();
    }
    plVar4 = g_028ba5f0;
    *(void*)(this_ptr + 1) = 0;
    if (plVar4 == (int64_t *)0x0) {
      plVar4 = (int64_t *)0x0;
      goto LAB_01edd952;
    }
  }
  else {
    *(void*)(this_ptr + 1) = 0;
  }
  FUN_00d50b00();
LAB_01edd952:
  *this_ptr = plVar4;
  *(void*)(this_ptr + 1) = 1;
  return;
}



// ============================================================
// 01e9e600
// ============================================================
// Function: FUN_01e9e600
// Address: 01e9e600
// Size: 561 bytes
// Class: GNMultipleValue

void FUN_01e9e600(void)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t *plVar3;
  int64_t *this_ptr;
  int64_t local_a0;
  char local_98;
  int64_t local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  int64_t *local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  
  FUN_01d0eb90();
  *(void*)((int64_t)this_ptr + 0x16c) = 0;
  plVar3 = (int64_t *)FUN_00e8fc40();
  FUN_001d7da0();
  (**(code **)(*plVar3 + 0x18))();
  lVar1 = g_027f3318;
  if (g_027f3318 != 0) {
    FUN_00d50b00();
  }
  lVar2 = g_027fdd80;
  if (g_027fdd80 != 0) {
    FUN_00d50b00();
  }
  local_a0 = lVar2;
  local_98 = '\x01';
  local_90 = 0;
  local_88 = '\0';
  FUN_00d31230(&local_90,&local_a0);
  lVar2 = local_50;
  local_80 = g_027fdd88;
  if (local_48 == '\0') {
    if (local_50 != 0) {
      FUN_00d50b00();
      local_80 = g_027fdd88;
    }
  }
  else {
    local_48 = '\0';
  }
  g_027fdd88 = local_80;
  if (local_80 != 0) {
    FUN_00d50b00();
  }
  local_78 = '\x01';
  local_70 = 0;
  local_68 = '\0';
  FUN_00d50b00();
  FUN_01d5da60(&local_70,&local_80,&stack0xffffffffffffffc0);
  if (this_ptr != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  local_58 = '\0';
  local_60 = plVar3;
  (**(code **)(*this_ptr + 0x6e8))();
  if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}



// ============================================================
// 01e9f5a0
// ============================================================
// Function: FUN_01e9f5a0
// Address: 01e9f5a0
// Size: 614 bytes
// Class: GNMultipleValue

void FUN_01e9f5a0(uint64_t param_1,uint32_t param_2)

{
  int64_t *plVar1;
  int64_t *plVar2;
  uint8_t uVar3;
  int64_t *this_ptr;
  uint32_t uVar4;
  uint32_t uVar5;
  uint32_t extraout_XMM0_Dc;
  int64_t local_68;
  char local_60;
  int64_t local_48;
  char local_40;
  int64_t *local_38;
  char local_30;
  
  (**(code **)(*this_ptr + 0x640))();
  plVar1 = local_38;
  if ((((local_30 == '\0') && (local_38 != (int64_t *)0x0)) && (FUN_00d50b00(), local_30 != '\0'))
     && (local_38 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  uVar4 = FUN_01e3f820();
  uVar5 = extraout_XMM0_Dc;
  uVar3 = (**(code **)(*this_ptr + 0x9a0))();
  (**(code **)(*this_ptr + 0xa70))();
  (**(code **)(*plVar1 + 0x3f0))(uVar4,0x11,0,uVar3,uVar4,uVar5);
  uVar5 = FUN_01e3f820();
  (**(code **)(*this_ptr + 0x960))();
  plVar2 = local_38;
  if (local_30 == '\0') {
    if (local_38 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_30 = '\0';
  }
  (**(code **)(*this_ptr + 0x9e0))();
  local_40 = 0;
  if (local_60 == '\0') {
    if (local_68 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_60 = '\0';
  }
  local_40 = '\x01';
  local_48 = local_68;
  uVar4 = *(void*)((int64_t)this_ptr + 0x174);
  (**(code **)(*this_ptr + 0x9a0))();
  (**(code **)(*this_ptr + 0xa70))();
  (**(code **)(*plVar1 + 0x400))(uVar5,param_2,&local_48,uVar4);
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  if (plVar2 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}



// ============================================================
// 019da0f0
// ============================================================
// Function: FUN_019da0f0
// Address: 019da0f0
// Size: 570 bytes
// Class: GNMultipleValue

void FUN_019da0f0(void)

{
  int64_t *plVar1;
  int64_t *plVar2;
  char cVar3;
  int64_t *this_ptr;
  int64_t local_68;
  char local_60;
  int64_t *local_30;
  char local_28;
  
  (**(code **)(*this_ptr + 0x978))();
  FUN_01a3c5a0();
  plVar1 = local_30;
  if (local_28 == '\0') {
    if (local_30 != (int64_t *)0x0) {
      (**(code **)(*local_30 + 0x10))();
      FUN_00d50b00();
      if ((local_28 != '\0') && (local_30 != (int64_t *)0x0)) {
        (**(code **)(*local_30 + 0x10))();
        FUN_00d50b20();
      }
    }
  }
  else {
    local_28 = '\0';
  }
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  if ((plVar1 != (int64_t *)0x0) && (cVar3 = (**(code **)(*plVar1 + 0xb0))(), cVar3 != '\0')) {
    (**(code **)(*plVar1 + 0xc0))();
    (**(code **)(*plVar1 + 0xd0))();
    local_30 = (int64_t *)(**(code **)(*this_ptr + 0xa98))();
    (**(code **)(*this_ptr + 0xce0))(g_023b3498,&local_30);
    goto LAB_019da30e;
  }
  (**(code **)(*this_ptr + 0x9e0))();
  plVar2 = local_30;
  if (local_28 == '\0') {
    if (local_30 != (int64_t *)0x0) {
      FUN_00d50b00();
      if ((local_28 != '\0') && (local_30 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_019da25b;
    }
  }
  else if (local_30 != (int64_t *)0x0) {
LAB_019da25b:
    if (*(int *)((int64_t)plVar2 + 0xc) != 0) {
      FUN_01266200();
      FUN_012664b0();
      local_30 = (int64_t *)(**(code **)(*this_ptr + 0xa98))();
      (**(code **)(*this_ptr + 0xce0))(g_023b3498,&local_30);
    }
    FUN_00d50b20();
  }
  if (plVar1 == (int64_t *)0x0) {
    return;
  }
LAB_019da30e:
  (**(code **)(*plVar1 + 0x10))();
  FUN_00d50b20();
  return;
}



// ============================================================
// 01d7c320
// ============================================================
// Function: FUN_01d7c320
// Address: 01d7c320
// Size: 523 bytes
// Class: GNMultipleValue

void FUN_01d7c320(void)

{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t *this_ptr;
  int64_t local_90;
  char local_88;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t local_40;
  char local_38;
  
  if (this_ptr[0x48] != 0) {
    (**(code **)(*this_ptr + 0x3a0))();
    FUN_00d403d0();
    lVar2 = g_027f0f20;
    if (g_027f0f20 != 0) {
      FUN_00d50b00();
    }
    FUN_00d50b00();
    local_70 = 0;
    local_68 = '\0';
    FUN_00d40470(&local_70,&stack0xffffffffffffffb0,1,3);
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    if (this_ptr != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    plVar1 = (int64_t *)this_ptr[0x46];
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    (**(code **)(*plVar1 + 0x4d0))();
    FUN_00d50b20();
    (**(code **)(*(int64_t *)this_ptr[0x48] + 0x4b8))();
    if (this_ptr[0x48] != 0) {
      this_ptr[0x48] = 0;
      FUN_00d50b20();
    }
    FUN_01e42030();
    FUN_01e42030();
    FUN_01d8b220();
    lVar2 = local_60;
    if (local_58 == '\0') {
      if (local_60 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_58 = '\0';
    }
    FUN_01d8c820();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    FUN_01d77040();
  }
  return;
}



// ============================================================
// 01d741d0
// ============================================================
// Function: FUN_01d741d0
// Address: 01d741d0
// Size: 603 bytes
// Class: GNMultipleValue

void FUN_01d741d0(int64_t *param_1,int64_t *param_2)

{
  int64_t lVar1;
  int64_t lVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int64_t *this_ptr;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  lVar1 = g_027f0ae8;
  local_60 = 0;
  if (*param_2 != 0) {
    if (g_027f0ae8 != 0) {
      FUN_00d50b00();
    }
    cVar3 = FUN_00d90870();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    lVar1 = g_027f0ae8;
    if (cVar3 != '\0') {
      if (g_027f0ae8 != 0) {
        FUN_00d50b00();
      }
      FUN_00d8c7a0();
      FUN_00d8f140();
      lVar2 = local_40;
      if (local_38 == '\0') {
        if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_38 = '\0';
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      if (lVar2 == 0) {
        return;
      }
      iVar4 = FUN_00d8d560();
      if ((0 < iVar4) && (iVar5 = FUN_01d6fde0(), iVar4 <= iVar5)) {
        FUN_01d701d0();
        FUN_01d64eb0();
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if (iVar4 + -1 == (int)this_ptr[0x45]) {
          (**(code **)(*this_ptr + 0x958))();
        }
      }
      FUN_00d50b20();
      return;
    }
    local_60 = *param_2;
  }
  local_58 = '\0';
  local_50 = *param_1;
  local_48 = '\0';
  FUN_01d12540(&local_50,&local_60);
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 01d09fc0
// ============================================================
// Function: FUN_01d09fc0
// Address: 01d09fc0
// Size: 521 bytes
// Class: GNMultipleValue

int64_t * FUN_01d09fc0(void)

{
  bool bVar1;
  char cVar2;
  void*puVar3;
  int64_t lVar4;
  int64_t arg1;
  int64_t *this_ptr;
  int64_t lVar5;
  int64_t local_40;
  char local_38;
  
  puVar3 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar3 = &g_02572358;
  (*g_02572370)();
  lVar4 = *(int64_t *)(arg1 + 0x240);
  if (0 < *(int *)(lVar4 + 0xc)) {
    lVar5 = 0;
    do {
      local_40 = *(int64_t *)(*(int64_t *)(lVar4 + 0x10) + lVar5 * 8);
      if (local_40 != 0) {
        FUN_00d50b00();
      }
      cVar2 = FUN_00d23d70();
      if (local_40 != 0) {
        FUN_00d50b20();
      }
      if (cVar2 != '\0') {
        local_40 = *(int64_t *)
                    (*(int64_t *)
                      (*(int64_t *)(*(int64_t *)(arg1 + 0x240) + 0x10) + lVar5 * 8) + 0x10);
        if (local_40 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (local_40 != 0) {
          FUN_00d50b20();
        }
      }
      local_38 = '\0';
      lVar5 = lVar5 + 1;
      lVar4 = *(int64_t *)(arg1 + 0x240);
    } while (lVar5 < *(int *)(lVar4 + 0xc));
  }
  lVar4 = *(int64_t *)(arg1 + 600);
  if (lVar4 != 0) {
    FUN_00d50b00();
  }
  FUN_00d95130();
  if (local_40 == 0) {
    bVar1 = false;
  }
  else if (local_38 == '\0') {
    FUN_00d50b00();
    bVar1 = true;
  }
  else {
    bVar1 = true;
  }
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  *(void*)(this_ptr + 1) = 0;
  if (!bVar1 && local_40 != 0) {
    FUN_00d50b00();
  }
  *this_ptr = local_40;
  *(void*)(this_ptr + 1) = 1;
  if (puVar3 != (void*)0x0) {
    FUN_00d50b20();
  }
  return this_ptr;
}



// ============================================================
// 01d05080
// ============================================================
// Function: FUN_01d05080
// Address: 01d05080
// Size: 537 bytes
// Class: GNMultipleValue
// String references:
//   "colorChanged:"

void FUN_01d05080(uint64_t param_1,uint32_t param_2)

{
  int64_t lVar1;
  void*puVar2;
  char cVar3;
  int iVar4;
  uint64_t uVar5;
  int64_t *this_ptr;
  uint32_t uVar6;
  uint32_t uVar7;
  uint32_t extraout_XMM0_Da;
  
  iVar4 = FUN_01d3a5a0();
  if ((iVar4 == 1) && (iVar4 = FUN_01d3b630(), iVar4 == 1)) {
    cVar3 = (**(code **)(*this_ptr + 0x878))();
    if ((cVar3 != '\0') && (cVar3 = FUN_01e420b0(), cVar3 == '\0')) {
      FUN_01e42250();
    }
    FUN_01d3abf0();
    uVar6 = FUN_01e466c0();
    _objc_alloc();
    (*PTR__objc_msgSend_024a9998)();
    if (g_028b7bd8 == 0) {
      _objc_alloc();
      g_028b7bd8 = (*PTR__objc_msgSend_024a9998)();
    }
    uVar7 = FUN_01e3f820();
    cVar3 = FUN_00d05410(uVar6,uVar7,param_2);
    if (cVar3 != '\0') {
      uVar6 = FUN_00d50b00();
      (*PTR__objc_msgSend_024a9998)(uVar6,&stack0xffffffffffffffb8);
      if (this_ptr != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      puVar2 = PTR__objc_msgSend_024a9998;
      uVar6 = (*PTR__objc_msgSend_024a9998)();
      uVar6 = (*puVar2)(uVar6,PTR_s_colorChanged__026c9710);
      uVar6 = (*puVar2)(uVar6,g_028b7bd8);
      (*puVar2)(uVar6,1);
      lVar1 = this_ptr[0x39];
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      uVar5 = FUN_01f25910();
      uVar6 = (*PTR__objc_msgSend_024a9998)(extraout_XMM0_Da,uVar5);
      if (lVar1 != 0) {
        uVar6 = FUN_00d50b20();
      }
      (*PTR__objc_msgSend_024a9998)(uVar6,0);
    }
    (*PTR__objc_release_024a99a0)();
  }
  else {
    FUN_01d122b0();
  }
  return;
}



// ============================================================
// 01dae920
// ============================================================
// Function: FUN_01dae920
// Address: 01dae920
// Size: 634 bytes
// Class: GNMultipleValue

void FUN_01dae920(uint64_t param_1,uint32_t param_2)

{
  int64_t lVar1;
  char cVar2;
  uint8_t uVar3;
  int64_t *this_ptr;
  uint32_t uVar4;
  float fVar5;
  uint32_t uVar6;
  uint32_t extraout_XMM0_Dc;
  uint32_t in_XMM1_Dc;
  float fVar7;
  int64_t *local_78;
  char local_70;
  float local_34;
  
  local_34 = (float)(**(code **)(*this_ptr + 0xb10))();
  cVar2 = (**(code **)(*this_ptr + 0xaf0))();
  if (cVar2 != '\0') {
    local_34 = g_02390124 - local_34;
  }
  (**(code **)(*this_ptr + 0x640))();
  if ((local_70 == '\0') && (local_78 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  uVar4 = FUN_01e3f820();
  uVar6 = extraout_XMM0_Dc;
  uVar3 = (**(code **)(*this_ptr + 0x9a0))();
  (**(code **)(*this_ptr + 0xa70))();
  (**(code **)(*local_78 + 0x3f0))(uVar4,param_2,0,uVar3,uVar4,uVar6,param_2,in_XMM1_Dc);
  fVar5 = local_34;
  if ((*(int *)((int64_t)this_ptr + 0x18c) == 0x10) &&
     (lVar1 = this_ptr[0x32], fVar5 = g_02390d00, lVar1 != 0)) {
    uVar6 = (uint32_t)this_ptr[0x2e];
    FUN_00d50b00();
    uVar4 = FUN_00c71d60();
    *(void*)(this_ptr + 0x2e) = uVar4;
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    fVar5 = (float)(**(code **)(*this_ptr + 0xb10))();
    cVar2 = (**(code **)(*this_ptr + 0xaf0))();
    if (cVar2 != '\0') {
      fVar5 = g_02390124 - fVar5;
    }
    *(void*)(this_ptr + 0x2e) = uVar6;
  }
  fVar7 = fVar5;
  uVar6 = FUN_01e3f820();
  (**(code **)(*this_ptr + 0x9a0))();
  (**(code **)(*this_ptr + 0xa70))();
  FUN_01cc0c20(uVar6,fVar5,local_34,fVar7);
  FUN_00d50b20();
  return;
}



// ============================================================
// 01ee0640
// ============================================================
// Function: FUN_01ee0640
// Address: 01ee0640
// Size: 550 bytes
// Class: GNMultipleValue

void FUN_01ee0640(void)

{
  int iVar1;
  int64_t *plVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  void*arg1;
  int64_t this_ptr;
  uint32_t extraout_XMM0_Da;
  int64_t local_40;
  char local_38;
  
  cVar4 = (**(code **)(*(int64_t *)*arg1 + 1000))();
  if (cVar4 == '\0') {
    _CGContextGetInterpolationQuality();
    _CGContextSetInterpolationQuality();
  }
  if ((((*(int64_t *)(this_ptr + 0x138) == 0) || (iVar1 = *(int *)(this_ptr + 0x140), iVar1 < 0))
      || (iVar5 = FUN_01eddbf0(), iVar5 <= iVar1)) ||
     (FUN_01eddbb0(extraout_XMM0_Da,*(void*)(this_ptr + 0x140)), local_40 == 0)) {
    bVar3 = true;
  }
  else {
    if (local_38 == '\0') {
      FUN_00d50b00();
    }
    FUN_01d48370();
    (**(code **)(*(int64_t *)*arg1 + 0x380))
              (*(void*)(this_ptr + 0x144),*(void*)(this_ptr + 0x144));
    FUN_01cfbee0(g_02390124,g_02390124,g_02390124);
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    FUN_01d488d0();
    if (local_40 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    plVar2 = (int64_t *)*arg1;
    FUN_01ede0c0();
    (**(code **)(*plVar2 + 0x3b0))();
    FUN_01ede0c0();
    FUN_01ede160();
    FUN_01d48390();
    bVar3 = false;
  }
  cVar4 = (**(code **)(*(int64_t *)*arg1 + 1000))();
  if (cVar4 == '\0') {
    _CGContextSetInterpolationQuality();
  }
  if (!bVar3) {
    FUN_00d50b20();
  }
  return;
}

