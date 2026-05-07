// Function: FUN_001381c0
// Address: 001381c0
// Size: 998 bytes
// Class: MDMetaWindowController
// String references:
//   "MDMetaWindowController"

void FUN_001381c0(void)

{
  int64_t lVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  int64_t *plVar5;
  int64_t *this_ptr;
  byte bVar6;
  int64_t *plVar7;
  char local_50;
  int64_t *local_48;
  char local_40 [8];
  char local_38 [8];
  
  FUN_003baf40();
  FUN_003ba620();
  if (local_40[0] == '\0') {
    if (local_48 == (int64_t *)0x0) goto LAB_00138402;
    FUN_00d50b00();
    if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else if (local_48 == (int64_t *)0x0) {
LAB_00138402:
    bVar6 = 0;
    lVar1 = this_ptr[0x17];
    goto joined_r0x001384c1;
  }
  if (this_ptr != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  local_38[0] = '\0';
  plVar7 = this_ptr;
  do {
    (**(code **)(*plVar7 + 0x370))();
    if (local_48 == plVar7) {
      if (((local_38[0] == '\0') && (local_48 != (int64_t *)0x0)) && (local_40[0] != '\0')) {
        local_38[0] = '\x01';
        goto LAB_001382a7;
      }
    }
    else {
      plVar7 = local_48;
      if (local_40[0] == '\0') {
        if (local_38[0] == '\0') {
          pcVar4 = local_38;
        }
        else {
          FUN_00d50b20();
          pcVar4 = local_38;
        }
      }
      else {
        if (local_38[0] != '\0') {
          FUN_00d50b20();
        }
        local_38[0] = '\x01';
LAB_001382a7:
        local_38[0] = '\x01';
        pcVar4 = local_40;
      }
      *pcVar4 = '\0';
    }
    if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((g_026fddb0 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
      g_026e0ab8 = FUN_00015ff0();
      g_026e0aa0 = "MDMetaWindowController";
      g_026e0aa8 = 0x198;
      g_026e0ab0 = FUN_0006dea0;
      g_026e0ac0 = 0;
      ram_00000000026e0ac8 = 0;
      g_026e0ad0 = 0;
      g_026e0b48 = 0;
      ram_00000000026e0b50 = 0;
      g_026e0b58 = 0;
      g_026e0b5a = 1;
      g_026e0ad8 = 0;
      ram_00000000026e0ae0 = 0;
      g_026e0ae8 = 0;
      ram_00000000026e0af0 = 0;
      g_026e0af8 = 0;
      ram_00000000026e0b00 = 0;
      g_026e0b08 = 0;
      ram_00000000026e0b10 = 0;
      g_026e0b18 = 0;
      ram_00000000026e0b20 = 0;
      g_026e0b28 = 0;
      ram_00000000026e0b30 = 0;
      g_026e0b38 = 0;
      ram_00000000026e0b40 = 0;
      g_026e0b63 = 0;
      g_026e0b5b = 0;
      ___cxa_guard_release();
    }
    plVar5 = &g_02802688;
    if (plVar7 != (int64_t *)0x0) {
      (**(code **)(*plVar7 + 0x360))();
      cVar2 = FUN_00e85ea0();
      plVar5 = (int64_t *)&stack0xffffffffffffffa8;
      if (cVar2 == '\0') {
        plVar5 = &g_02802688;
      }
    }
    if (*plVar5 != 0) {
      plVar5 = plVar7;
      if ((local_38[0] == '\0') && (plVar7 != (int64_t *)0x0)) {
        FUN_00d50b00();
      }
      goto joined_r0x00138438;
    }
  } while (plVar7 != (int64_t *)0x0);
  plVar5 = (int64_t *)0x0;
joined_r0x00138438:
  if (this_ptr != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (plVar5 == (int64_t *)0x0) {
    bVar6 = 0;
  }
  else {
    FUN_0062abf0();
    FUN_0051be00();
    bVar6 = 1;
    if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (plVar7 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  FUN_00d50b20();
  lVar1 = this_ptr[0x17];
joined_r0x001384c1:
  if (lVar1 != 0) {
    FUN_01e40eb0();
    if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((bool)(local_48 != (int64_t *)0x0 & (bVar6 ^ 1))) {
      (**(code **)(*(int64_t *)this_ptr[0x17] + 0x478))();
    }
    else {
      FUN_01e40eb0();
      if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((bool)(local_48 == (int64_t *)0x0 & bVar6)) {
        FUN_01e53c20();
        lVar1 = this_ptr[0x17];
        if (lVar1 != 0) {
          FUN_00d50b00();
        }
        (**(code **)(*local_48 + 0x450))();
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
        if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
  }
  return;
}

