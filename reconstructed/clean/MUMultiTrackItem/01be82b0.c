// Function: FUN_01be82b0
// Address: 01be82b0
// Size: 1080 bytes
// Class: MUMultiTrackItem
// String references:
//   "MUMultiTrackItem"

void FUN_01be82b0(void)

{
  int64_t *plVar1;
  int iVar2;
  int64_t *plVar3;
  int64_t lVar4;
  int64_t *plVar5;
  int64_t *this_ptr;
  
  FUN_01e3b710();
  *(void*)((int64_t)this_ptr + 0x204) = 0x43480000;
  *(void*)((int64_t)this_ptr + 0x20c) = 1;
  (**(code **)(*this_ptr + 0x4d0))(0,g_0241e200);
  (**(code **)(*this_ptr + 0x570))();
  (**(code **)(*this_ptr + 0x558))();
  plVar3 = (int64_t *)FUN_00e8fc40();
  func_0x00081f40();
  (**(code **)(*plVar3 + 0x18))();
  plVar1 = (int64_t *)this_ptr[0x2a];
  if (plVar1 == plVar3) {
    FUN_00d50b20();
  }
  else {
    this_ptr[0x2a] = (int64_t)plVar3;
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  if ((g_026fe4e0 == '\0') && (iVar2 = ___cxa_guard_acquire(), iVar2 != 0)) {
    g_026d7a88 = FUN_00d4fe50();
    g_026d7a70 = "MUMultiTrackItem";
    g_026d7a78 = 0x60;
    g_026d7a80 = FUN_0006eae0;
    g_026d7a90 = 0;
    ram_00000000026d7a98 = 0;
    g_026d7aa0 = 0;
    g_026d7b18 = 0;
    ram_00000000026d7b20 = 0;
    g_026d7b28 = 0;
    g_026d7b2a = 1;
    g_026d7aa8 = 0;
    ram_00000000026d7ab0 = 0;
    g_026d7ab8 = 0;
    ram_00000000026d7ac0 = 0;
    g_026d7ac8 = 0;
    ram_00000000026d7ad0 = 0;
    g_026d7ad8 = 0;
    ram_00000000026d7ae0 = 0;
    g_026d7ae8 = 0;
    ram_00000000026d7af0 = 0;
    g_026d7af8 = 0;
    ram_00000000026d7b00 = 0;
    g_026d7b08 = 0;
    ram_00000000026d7b10 = 0;
    g_026d7b33 = 0;
    g_026d7b2b = 0;
    ___cxa_guard_release();
  }
  lVar4 = FUN_00e86210();
  if (lVar4 != 0) {
    FUN_00d50b00();
  }
  FUN_01d25f20();
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  FUN_01d2d3a0();
  FUN_01d2d390();
  plVar1 = this_ptr + 0x27;
  (**(code **)(this_ptr[0x27] + 0x10))();
  FUN_00d50b00();
  FUN_01d25fa0();
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x10))();
    FUN_00d50b20();
  }
  plVar5 = (int64_t *)FUN_00e8fc40();
  func_0x00081f40();
  (**(code **)(*plVar5 + 0x18))();
  plVar3 = (int64_t *)this_ptr[0x2b];
  if (plVar3 == plVar5) {
    FUN_00d50b20();
  }
  else {
    this_ptr[0x2b] = (int64_t)plVar5;
    if (plVar3 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  if ((g_026fe4e0 == '\0') && (iVar2 = ___cxa_guard_acquire(), iVar2 != 0)) {
    g_026d7a88 = FUN_00d4fe50();
    g_026d7a70 = "MUMultiTrackItem";
    g_026d7a78 = 0x60;
    g_026d7a80 = FUN_0006eae0;
    g_026d7a90 = 0;
    ram_00000000026d7a98 = 0;
    g_026d7aa0 = 0;
    g_026d7b18 = 0;
    ram_00000000026d7b20 = 0;
    g_026d7b28 = 0;
    g_026d7b2a = 1;
    g_026d7aa8 = 0;
    ram_00000000026d7ab0 = 0;
    g_026d7ab8 = 0;
    ram_00000000026d7ac0 = 0;
    g_026d7ac8 = 0;
    ram_00000000026d7ad0 = 0;
    g_026d7ad8 = 0;
    ram_00000000026d7ae0 = 0;
    g_026d7ae8 = 0;
    ram_00000000026d7af0 = 0;
    g_026d7af8 = 0;
    ram_00000000026d7b00 = 0;
    g_026d7b08 = 0;
    ram_00000000026d7b10 = 0;
    g_026d7b33 = 0;
    g_026d7b2b = 0;
    ___cxa_guard_release();
  }
  lVar4 = FUN_00e86210();
  if (lVar4 != 0) {
    FUN_00d50b00();
  }
  FUN_01d25f20();
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  FUN_01d2d3a0();
  FUN_01d2d390();
  (**(code **)(this_ptr[0x27] + 0x10))();
  FUN_00d50b00();
  FUN_01d25fa0();
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x10))();
    FUN_00d50b20();
  }
  *(void*)(this_ptr + 0x3d) = 1;
  return;
}

