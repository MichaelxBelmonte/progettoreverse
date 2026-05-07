// Function: FUN_01c6dc70
// Address: 01c6dc70
// Size: 1228 bytes
// Class: GNPopUpButton
// String references:
//   "GNPopUpButton"

uint64_t FUN_01c6dc70(uint64_t param_1,int param_2)

{
  int64_t lVar1;
  int64_t *plVar2;
  int64_t *plVar3;
  char cVar4;
  ushort uVar5;
  void* pVar6;
  int iVar7;
  void *pvVar8;
  int64_t **pplVar9;
  int64_t this_ptr;
  uint32_t uVar10;
  int64_t *local_d8;
  uint8_t local_d0;
  int64_t *local_c8;
  uint8_t local_c0;
  int64_t local_b8;
  uint8_t local_b0;
  int64_t *local_a8;
  uint8_t local_a0;
  uint8_t local_98 [8];
  uint8_t local_90;
  int64_t local_88;
  char local_80;
  int64_t *local_78;
  char local_70;
  int64_t *local_68;
  char local_60;
  int64_t *local_58;
  int64_t *local_50;
  int64_t *local_48;
  int64_t *local_40;
  char local_38;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar5 = FUN_01caea40();
  pVar6 = (void*)uVar5;
  FUN_01c41970();
  if (*(int64_t *)(this_ptr + 0x200) != 0) {
    FUN_00d50b00();
  }
  FUN_01c82aa0();
  local_48 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != (int64_t *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
       (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  uVar10 = FUN_00d50b20();
  local_d8 = local_48;
  local_d0 = 0;
  FUN_01c45890(uVar10,&local_d8);
  local_58 = local_40;
  if ((local_38 == '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  pplVar9 = &local_40;
  FUN_01caeb00();
  plVar2 = local_40;
  if ((g_027f94e0 == '\0') && (iVar7 = ___cxa_guard_acquire(), iVar7 != 0)) {
    g_026efe08 = FUN_000f5df0();
    g_026efdf0 = "GNPopUpButton";
    g_026efdf8 = 0x240;
    pVar6 = 0x1e3bf0;
    g_026efe00 = FUN_001e3bf0;
    g_026efe10 = 0;
    ram_00000000026efe18 = 0;
    g_026efe20 = 0;
    ram_00000000026efe28 = 0;
    g_026efe30 = 0;
    ram_00000000026efe38 = 0;
    g_026efe40 = 0;
    ram_00000000026efe48 = 0;
    g_026efe50 = 0;
    ram_00000000026efe58 = 0;
    g_026efe60 = 0;
    ram_00000000026efe68 = 0;
    g_026efe70 = 0;
    ram_00000000026efe78 = 0;
    g_026efe80 = 0;
    ram_00000000026efe88 = 0;
    g_026efe90 = 0;
    ram_00000000026efe98 = 0;
    g_026efea0 = 0;
    ram_00000000026efea8 = 0;
    g_026efeb0 = 0;
    ___cxa_guard_release();
  }
  if (plVar2 != (int64_t *)0x0) {
    (**(code **)(*plVar2 + 0x360))();
    cVar4 = FUN_00e85ea0();
    if (cVar4 != '\0') goto LAB_01c6dd77;
  }
  pplVar9 = (int64_t **)&g_02802688;
LAB_01c6dd77:
  local_50 = *pplVar9;
  if (*(char *)(pplVar9 + 1) == '\0') {
    if (local_50 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar9 + 1) = 0;
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  lVar1 = *(int64_t *)(this_ptr + 0x188);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  local_80 = '\x01';
  local_88 = lVar1;
  FUN_016cbba0();
  plVar2 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != (int64_t *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
       (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  lVar1 = *(int64_t *)(this_ptr + 0x188);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  pvVar8 = _pthread_getspecific(pVar6);
  if (pvVar8 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_78 = local_58;
  local_70 = '\0';
  local_68 = local_48;
  local_60 = '\0';
  pVar6 = FUN_01d70da0();
  FUN_016fac40(pVar6,&local_68);
  if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  local_c8 = plVar2;
  local_c0 = 0;
  lVar1 = *(int64_t *)(this_ptr + 0x188);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  local_b0 = 1;
  local_b8 = lVar1;
  uVar10 = FUN_01c44d20();
  plVar3 = local_40;
  if (local_38 == '\0') {
    if (local_40 != (int64_t *)0x0) {
      uVar10 = FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  local_90 = 1;
  FUN_01c44700(uVar10,local_98);
  if (plVar3 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  local_a8 = plVar2;
  local_a0 = 0;
  FUN_01c62c70();
  if (*(int64_t *)(this_ptr + 0x188) != 0) {
    FUN_00d50b00();
    pvVar8 = _pthread_getspecific(pVar6);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_016c1150();
    FUN_00d50b20();
  }
  FUN_01c6e400();
  if (plVar2 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (local_50 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (local_58 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (local_48 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return 1;
}

