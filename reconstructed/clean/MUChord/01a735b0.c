// Function: FUN_01a735b0
// Address: 01a735b0
// Size: 647 bytes
// Class: MUChord
// String references:
//   "MUChord"
// === MUChord properties ===
//                   _tonic
//                   _tuning
//                   _scale
//                   _pitchClasses
//                   _audioSource
//                   _parameterSet


void FUN_01a735b0(void* param_1,uint64_t param_2)

{
  int64_t *plVar1;
  int64_t lVar2;
  char cVar3;
  int iVar4;
  void *pvVar5;
  int64_t *arg1;
  int64_t this_ptr;
  uint32_t uVar6;
  uint32_t extraout_XMM0_Da;
  uint32_t extraout_XMM0_Da_00;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  uVar6 = FUN_01b7c2c0();
  if (*(char *)(this_ptr + 0x201) == '\0') {
    return;
  }
  plVar1 = (int64_t *)*arg1;
  if ((g_02794b40 == '\0') &&
     (iVar4 = ___cxa_guard_acquire(), uVar6 = extraout_XMM0_Da_00, iVar4 != 0)) {
    g_02794a90 = FUN_00d4fe50();
    g_02794a78 = "MUChord";
    g_02794a80 = 0x20;
    param_1 = 0x1113770;
    g_02794a88 = FUN_01113770;
    g_02794a98 = 0;
    ram_0000000002794aa0 = 0;
    g_02794aa8 = 0;
    g_02794b20 = 0;
    ram_0000000002794b28 = 0;
    g_02794b30 = 0;
    g_02794b32 = 2;
    g_02794ab0 = 0;
    ram_0000000002794ab8 = 0;
    g_02794ac0 = 0;
    ram_0000000002794ac8 = 0;
    g_02794ad0 = 0;
    ram_0000000002794ad8 = 0;
    g_02794ae0 = 0;
    ram_0000000002794ae8 = 0;
    g_02794af0 = 0;
    ram_0000000002794af8 = 0;
    g_02794b00 = 0;
    ram_0000000002794b08 = 0;
    g_02794b10 = 0;
    ram_0000000002794b18 = 0;
    g_02794b3b = 0;
    g_02794b33 = 0;
    uVar6 = ___cxa_guard_release();
  }
  if (plVar1 == (int64_t *)0x0) {
LAB_01a73636:
    arg1 = &g_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar3 = FUN_00e85ea0();
    uVar6 = extraout_XMM0_Da;
    if (cVar3 == '\0') goto LAB_01a73636;
  }
  lVar2 = arg1[1];
  if (((char)lVar2 == '\0') || (*arg1 == 0)) {
    if (*arg1 == 0) {
      return;
    }
  }
  else {
    uVar6 = FUN_00d50b00();
  }
  if (*(int64_t *)(this_ptr + 0x1f8) == 0) {
    local_48 = '\0';
    local_50 = 0;
  }
  else {
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar6 = FUN_01510b20(0,param_2,0,0);
    local_38 = 0;
    if (local_48 != '\0') {
      local_40 = local_50;
      local_48 = '\0';
      goto LAB_01a73709;
    }
    if (local_50 != 0) {
      uVar6 = FUN_00d50b00();
      local_40 = local_50;
      goto LAB_01a73709;
    }
  }
  local_40 = 0;
LAB_01a73709:
  local_38 = '\x01';
  FUN_01b82620(uVar6,&local_40);
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((char)lVar2 != '\0') {
    FUN_00d50b20();
  }
  return;
}

