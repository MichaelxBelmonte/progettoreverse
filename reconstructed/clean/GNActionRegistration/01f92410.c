// Function: FUN_01f92410
// Address: 01f92410
// Size: 683 bytes
// Class: GNActionRegistration
// String references:
//   "GNActionRegistration"

void FUN_01f92410(float param_1)

{
  char cVar1;
  int iVar2;
  uint64_t in_RCX;
  void*this_ptr;
  int64_t **pplVar3;
  float fVar4;
  uint32_t extraout_XMM0_Da;
  int64_t *local_60;
  char local_58;
  int64_t *local_40;
  char local_38;
  
  pplVar3 = &local_40;
  FUN_01dcc290(in_RCX,0);
  if (local_38 == '\0') {
    if (local_40 == (int64_t *)0x0) goto LAB_01f92561;
    FUN_00d50b00();
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else if (local_40 == (int64_t *)0x0) {
LAB_01f92561:
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
    return;
  }
  fVar4 = (float)FUN_01db9a50();
  if ((fVar4 < param_1) || (iVar2 = FUN_01dcea90(param_1), iVar2 < 0)) {
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
    goto LAB_01f92557;
  }
  FUN_01ed2e60(extraout_XMM0_Da,iVar2);
  if (local_58 == '\0') {
    if (local_60 != (int64_t *)0x0) {
      FUN_00d50b00();
      goto LAB_01f924be;
    }
    local_40 = (int64_t *)0x0;
    local_38 = '\x01';
LAB_01f925e2:
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
  }
  else {
LAB_01f924be:
    local_38 = '\x01';
    local_40 = local_60;
    if ((local_60 == (int64_t *)0x0) || (iVar2 = FUN_01ed4e60(), iVar2 < 1)) goto LAB_01f925e2;
    if ((g_026e7b78 == '\0') && (iVar2 = ___cxa_guard_acquire(), iVar2 != 0)) {
      g_026e7ac8 = FUN_00d4fe50();
      g_026e7ab0 = "GNActionRegistration";
      g_026e7ab8 = 0x38;
      g_026e7ac0 = FUN_001a8af0;
      g_026e7ad0 = 0;
      ram_00000000026e7ad8 = 0;
      g_026e7ae0 = 0;
      ram_00000000026e7ae8 = 0;
      g_026e7af0 = 0;
      ram_00000000026e7af8 = 0;
      g_026e7b00 = 0;
      ram_00000000026e7b08 = 0;
      g_026e7b10 = 0;
      ram_00000000026e7b18 = 0;
      g_026e7b20 = 0;
      ram_00000000026e7b28 = 0;
      g_026e7b30 = 0;
      ram_00000000026e7b38 = 0;
      g_026e7b40 = 0;
      ram_00000000026e7b48 = 0;
      g_026e7b50 = 0;
      ram_00000000026e7b58 = 0;
      g_026e7b60 = 0;
      ram_00000000026e7b68 = 0;
      g_026e7b70 = 0;
      ___cxa_guard_release();
    }
    (**(code **)(*local_60 + 0x360))();
    cVar1 = FUN_00e85ea0();
    if (cVar1 == '\0') {
      pplVar3 = (int64_t **)&g_02802688;
    }
    cVar1 = *(char *)(pplVar3 + 1);
    if ((cVar1 == '\0') || (*pplVar3 == (int64_t *)0x0)) {
      if (*pplVar3 == (int64_t *)0x0) goto LAB_01f925e2;
    }
    else {
      FUN_00d50b00();
    }
    FUN_01caf440();
    if (cVar1 != '\0') {
      FUN_00d50b20();
    }
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
LAB_01f92557:
  FUN_00d50b20();
  return;
}

