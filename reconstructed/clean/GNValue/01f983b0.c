// Function: FUN_01f983b0
// Address: 01f983b0
// Size: 1120 bytes
// Class: GNValue
// String references:
//   "GNValue"
//   "GNColor"

void FUN_01f983b0(void)

{
  int64_t lVar1;
  int64_t *plVar2;
  char cVar3;
  uint8_t uVar4;
  int iVar5;
  code *pcVar6;
  int64_t arg1;
  int64_t *this_ptr;
  double dVar7;
  uint64_t uVar8;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  char local_40;
  int64_t local_38;
  char local_30;
  
  dVar7 = (double)FUN_00e7d6f0();
  dVar7 = dVar7 - *(double *)(arg1 + 0x60);
  if (dVar7 < *(double *)(arg1 + 0x30)) {
    dVar7 = dVar7 / *(double *)(arg1 + 0x30);
    iVar5 = *(int *)(arg1 + 0x18);
    if (iVar5 == 1) goto LAB_01f9841e;
LAB_01f983eb:
    if (iVar5 == 3) {
      dVar7 = (SQRT(dVar7) - dVar7 * dVar7) * dVar7 + dVar7 * dVar7;
    }
    else if (iVar5 == 2) {
      dVar7 = SQRT(dVar7);
    }
  }
  else {
    iVar5 = *(int *)(arg1 + 0x18);
    dVar7 = g_0238fee8;
    if (iVar5 != 1) goto LAB_01f983eb;
LAB_01f9841e:
    dVar7 = dVar7 * dVar7;
  }
  if ((dVar7 == 0.0) && (!NAN(dVar7))) {
    *(void*)(this_ptr + 1) = 0;
    lVar1 = *(int64_t *)(arg1 + 0x20);
joined_r0x01f98486:
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    *this_ptr = lVar1;
    *(void*)(this_ptr + 1) = 1;
    return;
  }
  if ((dVar7 == g_0238fee8) && (!NAN(dVar7) && !NAN(g_0238fee8))) {
    *(void*)(this_ptr + 1) = 0;
    lVar1 = *(int64_t *)(arg1 + 0x28);
    goto joined_r0x01f98486;
  }
  if (*(int64_t *)(arg1 + 0x48) != 0) goto LAB_01f9859c;
  uVar8 = FUN_00d4efa0();
  local_30 = 0;
  local_38 = *(int64_t *)(arg1 + 0x38);
  if (local_38 != 0) {
    uVar8 = FUN_00d50b00();
  }
  local_30 = '\x01';
  FUN_00c837f0(uVar8,&local_38);
  if ((local_40 == '\0') && (local_48 != 0)) {
    FUN_00d50b00();
  }
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  plVar2 = *(int64_t **)(arg1 + 0x20);
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
  if (plVar2 == (int64_t *)0x0) {
LAB_01f9856b:
    if (g_02802688 == 0) goto LAB_01f98602;
LAB_01f9857c:
    pcVar6 = FUN_01f98990;
    goto switchD_01f98680_caseD_66;
  }
  (**(code **)(*plVar2 + 0x360))();
  cVar3 = FUN_00e85ea0();
  if (cVar3 == '\0') goto LAB_01f9856b;
  if (*(int64_t *)(arg1 + 0x20) != 0) goto LAB_01f9857c;
LAB_01f98602:
  if (local_48 == 0) {
    plVar2 = *(int64_t **)(arg1 + 0x28);
    if (plVar2 == (int64_t *)0x0) goto LAB_01f9859c;
    if ((g_0270c850 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
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
    (**(code **)(*plVar2 + 0x360))();
    FUN_00e85ea0();
    uVar4 = FUN_00dd6e50();
  }
  else {
    uVar4 = *(void*)(*(int64_t *)(local_48 + 0x60) + 0x19);
  }
  pcVar6 = FUN_01f98d30;
  switch(uVar4) {
  case 0x45:
    pcVar6 = FUN_01f98fe0;
    break;
  default:
    goto switchD_01f98680_caseD_46;
  case 0x52:
    pcVar6 = FUN_01f98ee0;
    break;
  case 100:
    pcVar6 = FUN_01f98e10;
    break;
  case 0x66:
    break;
  }
switchD_01f98680_caseD_66:
  *(code **)(arg1 + 0x48) = pcVar6;
  *(void*)(arg1 + 0x50) = 0;
switchD_01f98680_caseD_46:
  if (local_48 != 0) {
    FUN_00d50b20();
  }
LAB_01f9859c:
  pcVar6 = *(code **)(arg1 + 0x48);
  if (((uint64_t)pcVar6 & 1) != 0) {
    pcVar6 = *(code **)(pcVar6 + *(int64_t *)(arg1 + *(int64_t *)(arg1 + 0x50)) + -1);
  }
  (*pcVar6)(dVar7);
  return;
}

