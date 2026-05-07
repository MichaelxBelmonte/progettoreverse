// Function: FUN_01bf4a10
// Address: 01bf4a10
// Size: 946 bytes
// Class: MUMultiTrackView
// String references:
//   "MUMultiTrackView"
// === MUMultiTrackView properties ===
//   MUFollowCursorState _followCursorState
//   MUMultiTrackDisplayMode _displayMode


uint32_t FUN_01bf4a10(uint32_t param_1,int64_t *param_2,uint32_t param_3)

{
  int64_t *plVar1;
  int64_t lVar2;
  char cVar3;
  uint32_t uVar4;
  uint64_t uVar5;
  int64_t *plVar6;
  uint32_t in_ECX;
  int64_t **pplVar7;
  int64_t *arg1;
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
  uint32_t local_54;
  int64_t *local_50;
  uint32_t local_44;
  int64_t *local_40;
  char local_38;
  
  lVar2 = g_02800140;
  local_54 = param_3;
  if (g_02800140 != 0) {
    param_1 = FUN_00d50b00();
  }
  local_a8 = lVar2;
  local_a0 = '\x01';
  FUN_01ccaae0(param_1,&local_a8);
  local_50 = local_40;
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
  uVar5 = FUN_01d26010();
  if (local_40 == (int64_t *)0x0) {
    plVar6 = (int64_t *)0x0;
    uVar5 = CONCAT71((int7)((uint64_t)uVar5 >> 8),g_026fe4d0);
  }
  else {
    plVar6 = (int64_t *)(**(code **)(*local_40 + 0x10))();
    uVar5 = CONCAT71((int7)((uint64_t)plVar6 >> 8),g_026fe4d0);
  }
  if ((g_026fe4d0 == '\0') && (uVar5 = ___cxa_guard_acquire(), (int)uVar5 != 0)) {
    g_02726438 = FUN_0006d940();
    g_02726420 = "MUMultiTrackView";
    g_02726428 = 0x228;
    g_02726430 = FUN_00082de0;
    g_02726440 = 0;
    ram_0000000002726448 = 0;
    g_02726450 = 0;
    g_027264c8 = 0;
    ram_00000000027264d0 = 0;
    g_027264d8 = 0;
    g_027264da = 1;
    g_02726458 = 0;
    ram_0000000002726460 = 0;
    g_02726468 = 0;
    ram_0000000002726470 = 0;
    g_02726478 = 0;
    ram_0000000002726480 = 0;
    g_02726488 = 0;
    ram_0000000002726490 = 0;
    g_02726498 = 0;
    ram_00000000027264a0 = 0;
    g_027264a8 = 0;
    ram_00000000027264b0 = 0;
    g_027264b8 = 0;
    ram_00000000027264c0 = 0;
    g_027264e3 = 0;
    g_027264db = 0;
    uVar5 = ___cxa_guard_release();
  }
  local_44 = (uint32_t)CONCAT71((int7)((uint64_t)uVar5 >> 8),1);
  if (plVar6 == (int64_t *)0x0) {
LAB_01bf4b47:
    plVar6 = (int64_t *)0x0;
  }
  else {
    (**(code **)(*plVar6 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') goto LAB_01bf4b47;
    FUN_00d50b00();
    local_44 = 0;
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    (**(code **)(*local_40 + 0x10))();
    FUN_00d50b20();
  }
  pplVar7 = &local_40;
  FUN_01ccad60();
  plVar1 = local_40;
  FUN_00192f30();
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 != '\0') goto LAB_01bf4bac;
  }
  pplVar7 = (int64_t **)&g_02802688;
LAB_01bf4bac:
  plVar1 = *pplVar7;
  if (*(char *)(pplVar7 + 1) == '\0') {
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar7 + 1) = 0;
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((char)local_54 == '\0') {
    local_78 = *arg1;
    local_70 = '\0';
    local_68 = *param_2;
    local_60 = '\0';
    uVar4 = (**(code **)(*plVar6 + 0xa00))(in_ECX,&local_68);
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_98 = *arg1;
    local_90 = '\0';
    local_88 = *param_2;
    local_80 = '\0';
    uVar4 = (**(code **)(*plVar6 + 0x9f8))(in_ECX,&local_88);
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
  }
  if (plVar1 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((char)local_44 == '\0') {
    FUN_00d50b20();
  }
  if (local_50 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return uVar4;
}

