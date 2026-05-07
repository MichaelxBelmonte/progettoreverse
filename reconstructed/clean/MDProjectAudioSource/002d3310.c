// Function: FUN_002d3310
// Address: 002d3310
// Size: 774 bytes
// Class: MDProjectAudioSource
// String references:
//   "MDProjectAudioSource"
//   "GNString"
// === MDProjectAudioSource properties ===
//   MDProjectAudioSourceLocation _location
//   MDProjectAudioSourceStatus _status


uint32_t FUN_002d3310(uint32_t param_1,int64_t *param_2,int64_t *param_3)

{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t lVar3;
  char cVar4;
  uint32_t uVar5;
  int iVar6;
  uint32_t extraout_XMM0_Da;
  uint32_t extraout_XMM0_Da_00;
  uint32_t extraout_XMM0_Da_01;
  uint32_t extraout_XMM0_Da_02;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  char local_40;
  char local_31;
  
  plVar1 = (int64_t *)*param_2;
  if ((g_026fd0a8 == '\0') &&
     (iVar6 = ___cxa_guard_acquire(), param_1 = extraout_XMM0_Da_01, iVar6 != 0)) {
    g_026fcff8 = FUN_00d4fe50();
    g_026fcfe0 = "MDProjectAudioSource";
    g_026fcfe8 = 0x28;
    g_026fcff0 = FUN_002d5b80;
    g_026fd000 = 0;
    ram_00000000026fd008 = 0;
    g_026fd010 = 0;
    g_026fd088 = 0;
    ram_00000000026fd090 = 0;
    g_026fd098 = 0;
    g_026fd09a = 1;
    g_026fd018 = 0;
    ram_00000000026fd020 = 0;
    g_026fd028 = 0;
    ram_00000000026fd030 = 0;
    g_026fd038 = 0;
    ram_00000000026fd040 = 0;
    g_026fd048 = 0;
    ram_00000000026fd050 = 0;
    g_026fd058 = 0;
    ram_00000000026fd060 = 0;
    g_026fd068 = 0;
    ram_00000000026fd070 = 0;
    g_026fd078 = 0;
    ram_00000000026fd080 = 0;
    g_026fd0a3 = 0;
    g_026fd09b = 0;
    param_1 = ___cxa_guard_release();
  }
  if (plVar1 == (int64_t *)0x0) {
LAB_002d335c:
    param_2 = &g_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar4 = FUN_00e85ea0();
    param_1 = extraout_XMM0_Da;
    if (cVar4 == '\0') goto LAB_002d335c;
  }
  local_31 = (char)param_2[1];
  if ((local_31 == '\0') || (*param_2 == 0)) {
    if (*param_2 == 0) {
      return 0;
    }
  }
  else {
    param_1 = FUN_00d50b00();
  }
  plVar1 = (int64_t *)*param_3;
  if ((g_026fd0c0 == '\0') &&
     (iVar6 = ___cxa_guard_acquire(), param_1 = extraout_XMM0_Da_02, iVar6 != 0)) {
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
    param_1 = ___cxa_guard_release();
  }
  if (plVar1 == (int64_t *)0x0) {
LAB_002d33be:
    param_3 = &g_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar4 = FUN_00e85ea0();
    param_1 = extraout_XMM0_Da_00;
    if (cVar4 == '\0') goto LAB_002d33be;
  }
  lVar2 = *param_3;
  lVar3 = param_3[1];
  if (((char)lVar3 == '\0') || (lVar2 == 0)) {
    if (lVar2 == 0) {
      uVar5 = 0;
      goto joined_r0x002d3492;
    }
  }
  else {
    param_1 = FUN_00d50b00();
  }
  local_50 = '\0';
  local_58 = lVar2;
  FUN_002d2d30(param_1,&local_58);
  lVar2 = local_48;
  if (local_40 == '\0') {
    if (((local_48 != 0) && (FUN_00d50b00(), local_40 != '\0')) && (local_48 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_40 = '\0';
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  uVar5 = FUN_00ce6e30();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if ((char)lVar3 != '\0') {
    FUN_00d50b20();
  }
joined_r0x002d3492:
  if (local_31 != '\0') {
    FUN_00d50b20();
  }
  return uVar5;
}

