// Function: FUN_00c1ffc0
// Address: 00c1ffc0
// Size: 2479 bytes
// Class: GNOverloudConvolverIR
// String references:
//   "_title"
//   "_samples"
//   "_sampleRate"
//   "_updateIR"
//   "_changeCount"
//   "GNOverloudConvolverIR"
//   "vI"

void FUN_00c1ffc0(float param_1,uint64_t param_2,int param_3,int64_t *param_4)

{
  int *piVar1;
  int64_t lVar2;
  int64_t *plVar3;
  void*puVar4;
  int iVar5;
  int64_t lVar6;
  int64_t *arg1;
  int64_t this_ptr;
  int64_t lVar7;
  uint32_t uVar8;
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
  uint32_t extraout_XMM0_Da_09;
  uint32_t extraout_XMM0_Da_10;
  int64_t local_128;
  char local_120;
  void*local_118;
  char local_110;
  int64_t local_108;
  char local_100;
  int64_t local_f8;
  char local_f0;
  int64_t local_e8;
  char local_e0;
  void*local_80;
  uint32_t local_78;
  int local_74;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  uVar8 = FUN_00d470c0(SUB84((double)param_1,0));
  puVar4 = local_80;
  if (((char)local_78 == '\0') && (local_80 != (void*)0x0)) {
    uVar8 = FUN_00d50b00();
    if (((char)local_78 != '\0') && (local_80 != (void*)0x0)) {
      uVar8 = FUN_00d50b20();
    }
  }
  if (*param_4 == 0) goto LAB_00c204d2;
  if (this_ptr != 0) {
    FUN_00d50b00();
  }
  local_78 = 1;
  local_80 = &g_024cc6f0;
  local_74 = param_3;
  uVar8 = FUN_00db2930("vI","_updateIR",&local_80);
  if (this_ptr != 0) {
    uVar8 = FUN_00d50b20();
  }
  lVar7 = (int64_t)param_3;
  lVar2 = *(int64_t *)(*(int64_t *)(*(int64_t *)(this_ptr + 200) + 0x10) + lVar7 * 8);
  if (lVar2 != 0) {
    uVar8 = FUN_00d50b00();
  }
  if ((g_0276df80 == '\0') &&
     (iVar5 = ___cxa_guard_acquire(), uVar8 = extraout_XMM0_Da_07, iVar5 != 0)) {
    g_0276ded0 = FUN_00d4fe50();
    g_0276deb8 = "GNOverloudConvolverIR";
    g_0276dec0 = 0x38;
    g_0276dec8 = FUN_00c40fb0;
    g_0276ded8 = 0;
    ram_000000000276dee0 = 0;
    g_0276dee8 = 0;
    ram_000000000276def0 = 0;
    g_0276def8 = 0;
    ram_000000000276df00 = 0;
    g_0276df08 = 0;
    ram_000000000276df10 = 0;
    g_0276df18 = 0;
    ram_000000000276df20 = 0;
    g_0276df28 = 0;
    ram_000000000276df30 = 0;
    g_0276df38 = 0;
    ram_000000000276df40 = 0;
    g_0276df48 = 0;
    ram_000000000276df50 = 0;
    g_0276df58 = 0;
    ram_000000000276df60 = 0;
    g_0276df68 = 0;
    ram_000000000276df70 = 0;
    g_0276df78 = 0;
    uVar8 = ___cxa_guard_release();
  }
  lVar6 = FUN_00e85ef0(uVar8,1);
  if (lVar6 == 0) {
    lVar6 = FUN_00e858c0(extraout_XMM0_Da,1);
    uVar8 = extraout_XMM0_Da_00;
    if ((lVar6 == 0) || (lVar6 = *(int64_t *)(lVar6 + 0x28), lVar6 == 0)) goto LAB_00c20159;
LAB_00c2014b:
    local_68 = 0;
    uVar8 = FUN_00d50b00();
  }
  else {
    lVar6 = *(int64_t *)(lVar6 + 0x30);
    uVar8 = extraout_XMM0_Da;
    if (lVar6 != 0) goto LAB_00c2014b;
LAB_00c20159:
    lVar6 = 0;
  }
  local_68 = '\x01';
  local_70 = lVar6;
  uVar8 = FUN_00db2960(uVar8,&local_70);
  if ((local_68 != '\0') && (local_70 != 0)) {
    uVar8 = FUN_00d50b20();
  }
  if (lVar2 != 0) {
    uVar8 = FUN_00d50b20();
  }
  lVar2 = *(int64_t *)(*(int64_t *)(*(int64_t *)(this_ptr + 200) + 0x10) + lVar7 * 8);
  if (lVar2 != 0) {
    uVar8 = FUN_00d50b00();
  }
  if ((g_0276df80 == '\0') &&
     (iVar5 = ___cxa_guard_acquire(), uVar8 = extraout_XMM0_Da_08, iVar5 != 0)) {
    g_0276ded0 = FUN_00d4fe50();
    g_0276deb8 = "GNOverloudConvolverIR";
    g_0276dec0 = 0x38;
    g_0276dec8 = FUN_00c40fb0;
    g_0276ded8 = 0;
    ram_000000000276dee0 = 0;
    g_0276dee8 = 0;
    ram_000000000276def0 = 0;
    g_0276def8 = 0;
    ram_000000000276df00 = 0;
    g_0276df08 = 0;
    ram_000000000276df10 = 0;
    g_0276df18 = 0;
    ram_000000000276df20 = 0;
    g_0276df28 = 0;
    ram_000000000276df30 = 0;
    g_0276df38 = 0;
    ram_000000000276df40 = 0;
    g_0276df48 = 0;
    ram_000000000276df50 = 0;
    g_0276df58 = 0;
    ram_000000000276df60 = 0;
    g_0276df68 = 0;
    ram_000000000276df70 = 0;
    g_0276df78 = 0;
    uVar8 = ___cxa_guard_release();
  }
  lVar6 = FUN_00e85ef0(uVar8,1);
  if (lVar6 == 0) {
    lVar6 = FUN_00e858c0(extraout_XMM0_Da_01,1);
    uVar8 = extraout_XMM0_Da_02;
    if ((lVar6 == 0) || (lVar6 = *(int64_t *)(lVar6 + 0x28), lVar6 == 0)) goto LAB_00c2024b;
LAB_00c2023d:
    local_58 = 0;
    uVar8 = FUN_00d50b00();
  }
  else {
    lVar6 = *(int64_t *)(lVar6 + 0x30);
    uVar8 = extraout_XMM0_Da_01;
    if (lVar6 != 0) goto LAB_00c2023d;
LAB_00c2024b:
    lVar6 = 0;
  }
  local_58 = '\x01';
  local_60 = lVar6;
  uVar8 = FUN_00db2960(uVar8,&local_60);
  if ((local_58 != '\0') && (local_60 != 0)) {
    uVar8 = FUN_00d50b20();
  }
  if (lVar2 != 0) {
    uVar8 = FUN_00d50b20();
  }
  lVar2 = *(int64_t *)(*(int64_t *)(*(int64_t *)(this_ptr + 200) + 0x10) + lVar7 * 8);
  if (lVar2 != 0) {
    uVar8 = FUN_00d50b00();
  }
  if ((g_0276df80 == '\0') &&
     (iVar5 = ___cxa_guard_acquire(), uVar8 = extraout_XMM0_Da_09, iVar5 != 0)) {
    g_0276ded0 = FUN_00d4fe50();
    g_0276deb8 = "GNOverloudConvolverIR";
    g_0276dec0 = 0x38;
    g_0276dec8 = FUN_00c40fb0;
    g_0276ded8 = 0;
    ram_000000000276dee0 = 0;
    g_0276dee8 = 0;
    ram_000000000276def0 = 0;
    g_0276def8 = 0;
    ram_000000000276df00 = 0;
    g_0276df08 = 0;
    ram_000000000276df10 = 0;
    g_0276df18 = 0;
    ram_000000000276df20 = 0;
    g_0276df28 = 0;
    ram_000000000276df30 = 0;
    g_0276df38 = 0;
    ram_000000000276df40 = 0;
    g_0276df48 = 0;
    ram_000000000276df50 = 0;
    g_0276df58 = 0;
    ram_000000000276df60 = 0;
    g_0276df68 = 0;
    ram_000000000276df70 = 0;
    g_0276df78 = 0;
    uVar8 = ___cxa_guard_release();
  }
  lVar6 = FUN_00e85ef0(uVar8,1);
  if (lVar6 == 0) {
    lVar6 = FUN_00e858c0(extraout_XMM0_Da_03,1);
    uVar8 = extraout_XMM0_Da_04;
    if ((lVar6 == 0) || (lVar6 = *(int64_t *)(lVar6 + 0x28), lVar6 == 0)) goto LAB_00c2033d;
LAB_00c2032f:
    local_48 = 0;
    uVar8 = FUN_00d50b00();
  }
  else {
    lVar6 = *(int64_t *)(lVar6 + 0x30);
    uVar8 = extraout_XMM0_Da_03;
    if (lVar6 != 0) goto LAB_00c2032f;
LAB_00c2033d:
    lVar6 = 0;
  }
  local_48 = '\x01';
  local_50 = lVar6;
  uVar8 = FUN_00db2960(uVar8,&local_50);
  if ((local_48 != '\0') && (local_50 != 0)) {
    uVar8 = FUN_00d50b20();
  }
  if (lVar2 != 0) {
    uVar8 = FUN_00d50b20();
  }
  lVar2 = *(int64_t *)(*(int64_t *)(*(int64_t *)(this_ptr + 200) + 0x10) + lVar7 * 8);
  if (lVar2 != 0) {
    uVar8 = FUN_00d50b00();
  }
  if ((g_0276df80 == '\0') &&
     (iVar5 = ___cxa_guard_acquire(), uVar8 = extraout_XMM0_Da_10, iVar5 != 0)) {
    g_0276ded0 = FUN_00d4fe50();
    g_0276deb8 = "GNOverloudConvolverIR";
    g_0276dec0 = 0x38;
    g_0276dec8 = FUN_00c40fb0;
    g_0276ded8 = 0;
    ram_000000000276dee0 = 0;
    g_0276dee8 = 0;
    ram_000000000276def0 = 0;
    g_0276def8 = 0;
    ram_000000000276df00 = 0;
    g_0276df08 = 0;
    ram_000000000276df10 = 0;
    g_0276df18 = 0;
    ram_000000000276df20 = 0;
    g_0276df28 = 0;
    ram_000000000276df30 = 0;
    g_0276df38 = 0;
    ram_000000000276df40 = 0;
    g_0276df48 = 0;
    ram_000000000276df50 = 0;
    g_0276df58 = 0;
    ram_000000000276df60 = 0;
    g_0276df68 = 0;
    ram_000000000276df70 = 0;
    g_0276df78 = 0;
    uVar8 = ___cxa_guard_release();
  }
  lVar7 = FUN_00e85ef0(uVar8,1);
  if (lVar7 == 0) {
    lVar7 = FUN_00e858c0(extraout_XMM0_Da_05,1);
    uVar8 = extraout_XMM0_Da_06;
    if ((lVar7 == 0) || (lVar7 = *(int64_t *)(lVar7 + 0x28), lVar7 == 0)) goto LAB_00c2042f;
LAB_00c20421:
    local_38 = 0;
    uVar8 = FUN_00d50b00();
  }
  else {
    lVar7 = *(int64_t *)(lVar7 + 0x30);
    uVar8 = extraout_XMM0_Da_05;
    if (lVar7 != 0) goto LAB_00c20421;
LAB_00c2042f:
    lVar7 = 0;
  }
  local_38 = '\x01';
  local_40 = lVar7;
  FUN_00db2960(uVar8,&local_40);
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  lVar2 = g_0276c9f8;
  if (g_0276c9f8 != 0) {
    FUN_00d50b00();
  }
  FUN_00db3140();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  uVar8 = FUN_00db32a0();
LAB_00c204d2:
  lVar2 = g_027feca0;
  lVar7 = (int64_t)param_3;
  plVar3 = *(int64_t **)(*(int64_t *)(*(int64_t *)(this_ptr + 200) + 0x10) + lVar7 * 8);
  if (g_027feca0 != 0) {
    uVar8 = FUN_00d50b00();
  }
  local_128 = lVar2;
  local_120 = '\x01';
  uVar8 = (**(code **)(*plVar3 + 0x80))(uVar8,&local_128);
  if ((local_120 != '\0') && (local_128 != 0)) {
    uVar8 = FUN_00d50b20();
  }
  lVar2 = g_027c76d0;
  plVar3 = *(int64_t **)(*(int64_t *)(*(int64_t *)(this_ptr + 200) + 0x10) + lVar7 * 8);
  local_118 = puVar4;
  local_110 = '\0';
  if (g_027c76d0 != 0) {
    uVar8 = FUN_00d50b00();
  }
  local_108 = lVar2;
  local_100 = '\x01';
  uVar8 = (**(code **)(*plVar3 + 0x80))(uVar8,&local_108);
  if ((local_100 != '\0') && (local_108 != 0)) {
    uVar8 = FUN_00d50b20();
  }
  if ((local_110 != '\0') && (local_118 != (void*)0x0)) {
    uVar8 = FUN_00d50b20();
  }
  lVar2 = g_0276ca00;
  plVar3 = *(int64_t **)(*(int64_t *)(*(int64_t *)(this_ptr + 200) + 0x10) + lVar7 * 8);
  local_f8 = *arg1;
  local_f0 = '\0';
  if (g_0276ca00 != 0) {
    uVar8 = FUN_00d50b00();
  }
  local_e8 = lVar2;
  local_e0 = '\x01';
  (**(code **)(*plVar3 + 0x80))(uVar8,&local_e8);
  if ((local_e0 != '\0') && (local_e8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_f0 != '\0') && (local_f8 != 0)) {
    FUN_00d50b20();
  }
  piVar1 = (int *)(*(int64_t *)(*(int64_t *)(*(int64_t *)(this_ptr + 200) + 0x10) + lVar7 * 8) +
                  0x2c);
  *piVar1 = *piVar1 + 1;
  if (puVar4 != (void*)0x0) {
    FUN_00d50b20();
  }
  return;
}

