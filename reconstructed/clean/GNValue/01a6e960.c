// Function: FUN_01a6e960
// Address: 01a6e960
// Size: 1609 bytes
// Class: GNValue
// String references:
//   "GNValue"

uint64_t FUN_01a6e960(uint64_t param_1,byte param_2)

{
  int64_t *plVar1;
  int64_t *plVar2;
  int64_t lVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  int64_t *this_ptr;
  int64_t **pplVar9;
  uint32_t uVar10;
  int64_t local_d0;
  char local_c8;
  int64_t local_b0;
  char local_a8;
  int64_t local_a0;
  char local_98;
  int64_t local_90;
  char local_88;
  uint64_t local_80;
  int64_t *local_50;
  char local_48;
  int64_t *local_40;
  char local_38;
  
  cVar4 = (**(code **)(*this_ptr + 0xa78))();
  if ((cVar4 == '\0') || (cVar4 = (**(code **)(*this_ptr + 0xa20))(), cVar4 == '\0')) {
    uVar8 = 0;
    goto LAB_01a6e9c8;
  }
  (**(code **)(*this_ptr + 0x978))();
  plVar1 = local_40;
  if (local_38 == '\0') {
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  uVar5 = FUN_01b71a90();
  uVar8 = (uint64_t)uVar5;
  if (plVar1 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (((byte)uVar5 & param_2) == 0) goto LAB_01a6e9c8;
  FUN_00d403d0();
  lVar3 = g_027e2678;
  if (g_027e2678 != 0) {
    FUN_00d50b00();
  }
  FUN_00d50b00();
  local_b0 = 0;
  local_a8 = '\0';
  FUN_00d40470(&local_b0,&stack0xffffffffffffff88,3,3);
  if ((local_a8 != '\0') && (local_b0 != 0)) {
    FUN_00d50b20();
  }
  if (this_ptr != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  uVar7 = FUN_00e7bdb0();
  local_80 = FUN_00e7bdb0();
  uVar10 = FUN_01caeae0();
  if (local_38 == '\0') {
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b00();
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_01a6eb5e;
    }
  }
  else if (local_40 != (int64_t *)0x0) {
LAB_01a6eb5e:
    uVar10 = FUN_01d66da0();
    local_a0 = g_027e2690;
    if (g_027e2690 != 0) {
      uVar10 = FUN_00d50b00();
    }
    local_98 = '\x01';
    pplVar9 = &local_40;
    FUN_000175c0(uVar10,&local_a0);
    plVar1 = local_40;
    if ((g_0270c850 == '\0') && (iVar6 = ___cxa_guard_acquire(), iVar6 != 0)) {
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
LAB_01a6ebe7:
      pplVar9 = (int64_t **)&g_02802688;
    }
    else {
      (**(code **)(*plVar1 + 0x360))();
      cVar4 = FUN_00e85ea0();
      if (cVar4 == '\0') goto LAB_01a6ebe7;
    }
    plVar1 = *pplVar9;
    if (*(char *)(pplVar9 + 1) == '\0') {
      if (plVar1 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      *(void*)(pplVar9 + 1) = 0;
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_98 != '\0') && (local_a0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    uVar10 = FUN_01d66da0();
    local_90 = g_027652e0;
    if (g_027652e0 != 0) {
      uVar10 = FUN_00d50b00();
    }
    local_88 = '\x01';
    pplVar9 = &local_40;
    FUN_000175c0(uVar10,&local_90);
    plVar2 = local_40;
    if ((g_0270c850 == '\0') && (iVar6 = ___cxa_guard_acquire(), iVar6 != 0)) {
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
    if (plVar2 == (int64_t *)0x0) {
LAB_01a6eccc:
      pplVar9 = (int64_t **)&g_02802688;
    }
    else {
      (**(code **)(*plVar2 + 0x360))();
      cVar4 = FUN_00e85ea0();
      if (cVar4 == '\0') goto LAB_01a6eccc;
    }
    plVar2 = *pplVar9;
    if (*(char *)(pplVar9 + 1) == '\0') {
      if (plVar2 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      *(void*)(pplVar9 + 1) = 0;
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((plVar1 == (int64_t *)0x0) || (plVar2 == (int64_t *)0x0)) {
      FUN_01e42030();
      if (local_40 == (int64_t *)0x0) {
        cVar4 = '\0';
      }
      else {
        FUN_01e42030();
        FUN_01d8b200();
        if (local_50 == this_ptr) {
          cVar4 = (**(code **)(*this_ptr + 0x9d0))();
        }
        else {
          cVar4 = '\0';
        }
        if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_c8 != '\0') && (local_d0 != 0)) {
          FUN_00d50b20();
        }
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (cVar4 != '\0') {
        uVar7 = (**(code **)(*this_ptr + 0x9d8))();
        local_80 = (**(code **)(*this_ptr + 0x9e0))();
      }
    }
    else {
      uVar7 = FUN_00dd6320();
      local_80 = FUN_00dd6320();
    }
    if (plVar2 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    uVar10 = FUN_00d50b20();
  }
  FUN_01a6e330(uVar10,local_80);
  uVar8 = CONCAT71((int7)((uint64_t)uVar7 >> 8),1);
LAB_01a6e9c8:
  return uVar8 & 0xffffffff;
}

