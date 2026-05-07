// Function: FUN_01b99bc0
// Address: 01b99bc0
// Size: 1187 bytes
// Class: GNValue
// String references:
//   "GNValue"

uint8_t FUN_01b99bc0(uint64_t param_1,uint32_t param_2)

{
  int64_t *plVar1;
  char cVar2;
  int iVar3;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t **pplVar4;
  uint32_t extraout_XMM0_Da;
  uint32_t uVar5;
  uint32_t extraout_XMM0_Da_00;
  uint64_t local_a8;
  uint64_t local_a0;
  int64_t local_98;
  char local_90;
  int64_t local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  uint32_t local_64;
  int64_t local_60;
  char local_58;
  int64_t *local_50;
  int64_t *local_48;
  int64_t *local_40;
  char local_38;
  
  cVar2 = (**(code **)(*this_ptr + 0xa78))();
  if (cVar2 == '\0') {
    return 0;
  }
  if (*(char *)((int64_t)this_ptr + 0x215) == '\0') {
    return 0;
  }
  local_a8 = FUN_00e7bdb0();
  local_a0 = FUN_00e7bdb0();
  FUN_01caeae0();
  plVar1 = local_40;
  uVar5 = extraout_XMM0_Da;
  if (local_38 == '\0') {
    if (local_40 == (int64_t *)0x0) goto LAB_01b99e94;
    FUN_00d50b00();
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else if (local_40 == (int64_t *)0x0) goto LAB_01b99e94;
  local_50 = plVar1;
  uVar5 = FUN_01d66da0();
  local_98 = g_027e2690;
  local_64 = param_2;
  if (g_027e2690 != 0) {
    uVar5 = FUN_00d50b00();
  }
  local_90 = '\x01';
  pplVar4 = &local_40;
  FUN_000175c0(uVar5,&local_98);
  plVar1 = local_40;
  if ((g_0270c850 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
    g_026d4348 = FUN_00d4fe50();
    g_026d4330 = "GNValue";
    g_026d4338 = 0x18;
    g_026d4340 = FUN_00053cb0;
    g_026d4350 = 0;
    ram_00000000026d4358 = 0;
    g_026d4360 = 0;
    ram_00000000026d4368 = 0;
    g_026d4370 = 0;
    ram_00000000026d4378 = 0;
    g_026d4380 = 0;
    ram_00000000026d4388 = 0;
    g_026d4390 = 0;
    ram_00000000026d4398 = 0;
    g_026d43a0 = 0;
    ram_00000000026d43a8 = 0;
    g_026d43b0 = 0;
    ram_00000000026d43b8 = 0;
    g_026d43c0 = 0;
    ram_00000000026d43c8 = 0;
    g_026d43d0 = 0;
    ram_00000000026d43d8 = 0;
    g_026d43e0 = 0;
    ram_00000000026d43e8 = 0;
    g_026d43f0 = 0;
    ___cxa_guard_release();
  }
  if (plVar1 == (int64_t *)0x0) {
LAB_01b99ce5:
    pplVar4 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar2 = FUN_00e85ea0();
    if (cVar2 == '\0') goto LAB_01b99ce5;
  }
  local_48 = *pplVar4;
  if (*(char *)(pplVar4 + 1) == '\0') {
    if (local_48 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar4 + 1) = 0;
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_90 != '\0') && (local_98 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  uVar5 = FUN_01d66da0();
  local_88 = g_027652e0;
  if (g_027652e0 != 0) {
    uVar5 = FUN_00d50b00();
  }
  local_80 = '\x01';
  pplVar4 = &local_40;
  FUN_000175c0(uVar5,&local_88);
  plVar1 = local_40;
  if ((g_0270c850 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
    g_026d4348 = FUN_00d4fe50();
    g_026d4330 = "GNValue";
    g_026d4338 = 0x18;
    g_026d4340 = FUN_00053cb0;
    g_026d4350 = 0;
    ram_00000000026d4358 = 0;
    g_026d4360 = 0;
    ram_00000000026d4368 = 0;
    g_026d4370 = 0;
    ram_00000000026d4378 = 0;
    g_026d4380 = 0;
    ram_00000000026d4388 = 0;
    g_026d4390 = 0;
    ram_00000000026d4398 = 0;
    g_026d43a0 = 0;
    ram_00000000026d43a8 = 0;
    g_026d43b0 = 0;
    ram_00000000026d43b8 = 0;
    g_026d43c0 = 0;
    ram_00000000026d43c8 = 0;
    g_026d43d0 = 0;
    ram_00000000026d43d8 = 0;
    g_026d43e0 = 0;
    ram_00000000026d43e8 = 0;
    g_026d43f0 = 0;
    ___cxa_guard_release();
  }
  if (plVar1 == (int64_t *)0x0) {
LAB_01b99dd2:
    pplVar4 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar2 = FUN_00e85ea0();
    if (cVar2 == '\0') goto LAB_01b99dd2;
  }
  param_2 = local_64;
  plVar1 = *pplVar4;
  if (*(char *)(pplVar4 + 1) == '\0') {
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar4 + 1) = 0;
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if ((local_48 != (int64_t *)0x0) && (plVar1 != (int64_t *)0x0)) {
    local_a8 = FUN_00dd6320();
    local_a0 = FUN_00dd6320();
  }
  if (plVar1 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (local_48 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  uVar5 = extraout_XMM0_Da_00;
LAB_01b99e94:
  if (local_a8 >> 0x20 != 0) {
    return 0;
  }
  if (local_a0 >> 0x20 == 0) {
    if ((char)param_2 != '\0') {
      *(void*)(this_ptr + 0x43) = 0xffffffff;
      local_78 = *arg1;
      local_70 = '\0';
      (**(code **)(*this_ptr + 0xb18))(uVar5,1);
      if ((local_70 != '\0') && (local_78 != 0)) {
        FUN_00d50b20();
      }
      *(void*)(this_ptr + 0x43) = 0;
      return 1;
    }
    return 1;
  }
  return 0;
}

