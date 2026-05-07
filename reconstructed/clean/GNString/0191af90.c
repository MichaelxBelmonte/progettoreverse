// Function: FUN_0191af90
// Address: 0191af90
// Size: 928 bytes
// Class: GNString
// String references:
//   "GNString"
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


uint64_t FUN_0191af90(uint64_t param_1,int param_2)

{
  int64_t *plVar1;
  int64_t *plVar2;
  char cVar3;
  uint32_t uVar4;
  int iVar5;
  int64_t this_ptr;
  int64_t *plVar6;
  int64_t **pplVar7;
  int64_t lVar8;
  uint32_t extraout_XMM0_Da;
  int64_t local_a8;
  char local_a0;
  int64_t *local_98;
  char local_90;
  int64_t *local_88;
  char local_80;
  int64_t *local_78;
  char local_70;
  int64_t *local_68;
  int64_t *local_60;
  char local_58;
  int64_t *local_50;
  uint64_t local_48;
  uint32_t local_40;
  int64_t *local_38;
  
  if (param_2 == 0) {
    return 1;
  }
  FUN_01caeb00();
  plVar1 = local_60;
  plVar6 = *(int64_t **)(this_ptr + 0x70);
  if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 != plVar6) {
    return 1;
  }
  uVar4 = FUN_01d70da0();
  FUN_01d701d0(extraout_XMM0_Da,uVar4);
  plVar6 = local_60;
  if ((((local_58 == '\0') && (local_60 != (int64_t *)0x0)) && (FUN_00d50b00(), local_58 != '\0'))
     && (local_60 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  uVar4 = FUN_01d66da0();
  local_a8 = g_027092b8;
  if (g_027092b8 != 0) {
    uVar4 = FUN_00d50b00();
  }
  local_a0 = '\x01';
  pplVar7 = &local_60;
  FUN_000175c0(uVar4,&local_a8);
  plVar1 = local_60;
  if ((g_026fd0c0 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
    local_38 = plVar6;
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
    plVar6 = local_38;
  }
  if (plVar1 == (int64_t *)0x0) {
LAB_0191b09f:
    pplVar7 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') goto LAB_0191b09f;
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
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 == (int64_t *)0x0) goto LAB_0191b262;
  FUN_0177eb20();
  plVar2 = local_60;
  if (local_58 == '\0') {
    if (local_60 != (int64_t *)0x0) {
      FUN_00d50b00();
      if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_0191b151;
    }
  }
  else if (local_60 != (int64_t *)0x0) {
LAB_0191b151:
    local_58 = '\0';
    local_60 = (int64_t *)0x0;
    local_50 = plVar2;
    local_40 = 0;
    local_48 = 0;
    local_68 = plVar1;
    local_38 = plVar6;
    if (0 < *(int *)((int64_t)plVar2 + 0xc)) {
      lVar8 = 0;
      do {
        plVar6 = *(int64_t **)(plVar2[2] + lVar8 * 8);
        local_60 = plVar6;
        FUN_0177efe0();
        local_98 = local_68;
        local_90 = '\0';
        cVar3 = (**(code **)(*local_78 + 0x50))();
        if ((local_90 != '\0') && (local_98 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (cVar3 != '\0') {
          local_80 = '\0';
          local_88 = plVar6;
          FUN_0177ec80();
          if ((local_80 != '\0') && (local_88 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        lVar8 = lVar8 + 1;
        local_48 = CONCAT44(local_48._4_4_,(int)lVar8);
      } while ((int)lVar8 < *(int *)((int64_t)plVar2 + 0xc));
    }
    FUN_01781450();
    FUN_00d50b20();
    plVar6 = local_38;
  }
  FUN_00d50b20();
LAB_0191b262:
  if (plVar6 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return 1;
}

