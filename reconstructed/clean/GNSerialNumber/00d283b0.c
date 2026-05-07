// Function: FUN_00d283b0
// Address: 00d283b0
// Size: 648 bytes
// Class: GNSerialNumber
// String references:
//   "GNSerialNumber"

uint64_t FUN_00d283b0(void)

{
  int64_t *plVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int64_t *arg1;
  int64_t *this_ptr;
  uint64_t unaff_R12;
  uint64_t uVar5;
  int64_t local_a8;
  char local_a0;
  int64_t local_98;
  char local_90;
  int64_t local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  int64_t *local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  
  plVar1 = (int64_t *)*arg1;
  if (plVar1 == this_ptr) {
    uVar5 = CONCAT71((int7)((uint64_t)unaff_R12 >> 8),1);
    goto LAB_00d28560;
  }
  if ((g_0270d5f8 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
    g_0270d548 = FUN_00d4fe50();
    g_0270d530 = "GNSerialNumber";
    g_0270d538 = 0x20;
    g_0270d540 = FUN_00568100;
    g_0270d550 = 0;
    ram_000000000270d558 = 0;
    g_0270d560 = 0;
    g_0270d5d8 = 0;
    ram_000000000270d5e0 = 0;
    g_0270d5e8 = 0;
    g_0270d5ea = 1;
    g_0270d568 = 0;
    ram_000000000270d570 = 0;
    g_0270d578 = 0;
    ram_000000000270d580 = 0;
    g_0270d588 = 0;
    ram_000000000270d590 = 0;
    g_0270d598 = 0;
    ram_000000000270d5a0 = 0;
    g_0270d5a8 = 0;
    ram_000000000270d5b0 = 0;
    g_0270d5b8 = 0;
    ram_000000000270d5c0 = 0;
    g_0270d5c8 = 0;
    ram_000000000270d5d0 = 0;
    g_0270d5f3 = 0;
    g_0270d5eb = 0;
    ___cxa_guard_release();
  }
  if (plVar1 == (int64_t *)0x0) {
LAB_00d28405:
    arg1 = &g_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar2 = FUN_00e85ea0();
    if (cVar2 == '\0') goto LAB_00d28405;
  }
  if (*arg1 == 0) {
    uVar5 = 0;
  }
  else {
    FUN_00d25b40();
    FUN_00d25b40();
    if (local_58 == local_98) {
      uVar5 = CONCAT71((int7)((uint64_t)this_ptr >> 8),1);
    }
    else {
      FUN_00d25b40();
      if (local_88 == 0) {
        uVar5 = 0;
      }
      else {
        FUN_00d25b40();
        if (local_78 == 0) {
          uVar5 = 0;
        }
        else {
          FUN_00d25b40();
          FUN_00d25b40();
          if ((local_a0 == '\0') && (local_a8 != 0)) {
            FUN_00d50b00();
          }
          uVar3 = (**(code **)(*local_68 + 0x50))();
          uVar5 = (uint64_t)uVar3;
          if (local_a8 != 0) {
            FUN_00d50b20();
          }
          if (local_60 != '\0') {
            FUN_00d50b20();
          }
          if (local_70 != '\0') {
            FUN_00d50b20();
          }
        }
        if (local_80 != '\0') {
          FUN_00d50b20();
        }
      }
    }
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
  }
LAB_00d28560:
  return uVar5 & 0xffffffff;
}

