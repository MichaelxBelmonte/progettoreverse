// Function: FUN_002a9ff0
// Address: 002a9ff0
// Size: 634 bytes
// Class: MDMetaWindowController
// String references:
//   "MDMetaWindowController"

void* FUN_002a9ff0(void)

{
  int64_t *plVar1;
  char cVar2;
  int iVar3;
  void*puVar4;
  int64_t lVar5;
  int64_t **pplVar6;
  int64_t *arg1;
  void*this_ptr;
  uint32_t uVar7;
  uint32_t extraout_XMM0_Da;
  uint32_t extraout_XMM0_Da_00;
  int64_t *local_58;
  char local_50;
  int64_t *local_48;
  int local_40;
  int iStack_3c;
  int local_38;
  
  puVar4 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar4 = &g_02572358;
  (*g_02572370)();
  uVar7 = (**(code **)(*arg1 + 0x4a0))();
  plVar1 = local_58;
  if (local_50 == '\0') {
    if (local_58 == (int64_t *)0x0) goto LAB_002aa269;
    uVar7 = FUN_00d50b00();
    if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
      uVar7 = FUN_00d50b20();
    }
  }
  else if (local_58 == (int64_t *)0x0) goto LAB_002aa269;
  local_50 = 0;
  local_58 = (int64_t *)0x0;
  local_48 = plVar1;
  local_40 = -1;
  iStack_3c = 0;
  local_38 = 0;
  while( true ) {
    iVar3 = iStack_3c;
    if (iStack_3c != 0) {
      if (iStack_3c < 1) {
        iStack_3c = -iStack_3c;
      }
      else {
        local_40 = local_40 - iStack_3c;
        uVar7 = FUN_00d23690(uVar7,iStack_3c);
        local_38 = local_38 + iVar3;
        iStack_3c = 0;
      }
    }
    lVar5 = (int64_t)local_40;
    local_40 = local_40 + 1;
    if (*(int *)((int64_t)local_48 + 0xc) <= local_40) break;
    plVar1 = *(int64_t **)(local_48[2] + 8 + lVar5 * 8);
    local_58 = plVar1;
    if ((g_026fddb0 == '\0') &&
       (iVar3 = ___cxa_guard_acquire(), uVar7 = extraout_XMM0_Da_00, iVar3 != 0)) {
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
      uVar7 = ___cxa_guard_release();
    }
    pplVar6 = (int64_t **)&g_02802688;
    if (plVar1 != (int64_t *)0x0) {
      (**(code **)(*plVar1 + 0x360))();
      cVar2 = FUN_00e85ea0();
      pplVar6 = &local_58;
      uVar7 = extraout_XMM0_Da;
      if (cVar2 == '\0') {
        pplVar6 = (int64_t **)&g_02802688;
      }
    }
    if (*pplVar6 != (int64_t *)0x0) {
      uVar7 = FUN_00d21140();
    }
  }
  FUN_000ad7a0();
  FUN_00d50b20();
LAB_002aa269:
  *this_ptr = puVar4;
  *(void*)(this_ptr + 1) = 1;
  return this_ptr;
}

