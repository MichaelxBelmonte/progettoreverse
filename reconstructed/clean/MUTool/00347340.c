// Function: FUN_00347340
// Address: 00347340
// Size: 1208 bytes
// Class: MUTool
// String references:
//   "MUTool"

void FUN_00347340(uint64_t param_1,int64_t *param_2)

{
  int64_t lVar1;
  char cVar2;
  int iVar3;
  int64_t *plVar4;
  char *pcVar5;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t **pplVar6;
  uint32_t uVar7;
  uint32_t extraout_XMM0_Da;
  uint32_t extraout_XMM0_Da_00;
  int64_t *local_110;
  char local_108;
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
  int64_t *local_80;
  char local_78;
  int64_t local_48;
  char local_40 [8];
  char local_38 [8];
  
  local_d0 = this_ptr[0xa7];
  local_c0 = *param_2;
  if (local_d0 == local_c0) {
    return;
  }
  if (local_d0 != *arg1) {
    return;
  }
  local_c8 = '\0';
  local_b8 = '\0';
  FUN_01950bb0(local_d0,&local_c0);
  if ((local_b8 != '\0') && (local_c0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_c8 != '\0') && (local_d0 != 0)) {
    FUN_00d50b20();
  }
  FUN_019f0ee0();
  FUN_01e1f270();
  FUN_00d23310();
  pcVar5 = local_38;
  if (local_40[0] != '\0') {
    pcVar5 = local_40;
  }
  local_38[0] = local_40[0];
  *pcVar5 = '\0';
  if ((local_40[0] != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  uVar7 = FUN_01e26150();
  local_b0 = g_026f6e60;
  if (g_026f6e60 != 0) {
    uVar7 = FUN_00d50b00();
  }
  local_a8 = '\x01';
  pplVar6 = &local_110;
  uVar7 = FUN_000175c0(uVar7,&local_b0);
  plVar4 = local_110;
  if ((g_0272ffd0 == '\0') &&
     (iVar3 = ___cxa_guard_acquire(), uVar7 = extraout_XMM0_Da_00, iVar3 != 0)) {
    g_026f8f48 = FUN_00d4fe50();
    g_026f8f30 = "MUTool";
    g_026f8f38 = 0x38;
    g_026f8f40 = FUN_00274e70;
    g_026f8f50 = 0;
    ram_00000000026f8f58 = 0;
    g_026f8f60 = 0;
    g_026f8fd8 = 0;
    ram_00000000026f8fe0 = 0;
    g_026f8fe8 = 0;
    g_026f8fea = 1;
    g_026f8f68 = 0;
    ram_00000000026f8f70 = 0;
    g_026f8f78 = 0;
    ram_00000000026f8f80 = 0;
    g_026f8f88 = 0;
    ram_00000000026f8f90 = 0;
    g_026f8f98 = 0;
    ram_00000000026f8fa0 = 0;
    g_026f8fa8 = 0;
    ram_00000000026f8fb0 = 0;
    g_026f8fb8 = 0;
    ram_00000000026f8fc0 = 0;
    g_026f8fc8 = 0;
    ram_00000000026f8fd0 = 0;
    g_026f8ff3 = 0;
    g_026f8feb = 0;
    uVar7 = ___cxa_guard_release();
  }
  if (plVar4 != (int64_t *)0x0) {
    (**(code **)(*plVar4 + 0x360))();
    cVar2 = FUN_00e85ea0();
    uVar7 = extraout_XMM0_Da;
    if (cVar2 != '\0') goto LAB_003474cf;
  }
  pplVar6 = (int64_t **)&g_02802688;
LAB_003474cf:
  plVar4 = *pplVar6;
  if (*(char *)(pplVar6 + 1) == '\0') {
    if (plVar4 != (int64_t *)0x0) {
      uVar7 = FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar6 + 1) = 0;
  }
  (**(code **)(*this_ptr + 0xec8))(uVar7,0);
  if (plVar4 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_108 != '\0') && (local_110 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_a8 != '\0') && (local_b0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_f8 != '\0') && (local_100 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38[0] != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if ((local_e8 != '\0') && (local_f0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_d8 != '\0') && (local_e0 != 0)) {
    FUN_00d50b20();
  }
  plVar4 = (int64_t *)FUN_00e8fc40();
  FUN_00022d50();
  uVar7 = (**(code **)(*plVar4 + 0x18))();
  lVar1 = g_026f6de8;
  local_a0 = *param_2;
  local_98 = '\0';
  if (g_026f6de8 != 0) {
    uVar7 = FUN_00d50b00();
  }
  local_48 = lVar1;
  local_40[0] = '\0';
  FUN_00ca0840(uVar7,&local_48);
  if ((local_40[0] != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d403d0();
  local_90 = g_026f6d80;
  if (g_026f6d80 != 0) {
    FUN_00d50b00();
  }
  local_88 = '\x01';
  FUN_00d50b00();
  local_78 = '\0';
  local_80 = plVar4;
  FUN_00d40470(&local_80,&stack0xffffffffffffff90,3,3);
  if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (this_ptr != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  if ((local_40[0] != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}

