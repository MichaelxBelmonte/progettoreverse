// ===================================================================
// GNPlugInControllerWrapper — Complete reconstructed pseudocode
// 3 functions
// ===================================================================


// ============================================================
// 00005710
// ============================================================
// Function: FUN_00005710
// Address: 00005710
// Size: 511 bytes
// Class: GNPlugInControllerWrapper

void FUN_00005710(void)

{
  int iVar1;
  void*puVar2;
  void*this_ptr;
  
  FUN_00d4ff40();
  *(void*)((int64_t)this_ptr + 0xc) = 0;
  *this_ptr = &g_026b98e8;
  this_ptr[2] = &g_026ba010;
  this_ptr[3] = 0;
  if (1 < g_02802630) {
    puVar2 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar2 = &g_02572358;
    (*g_02572370)();
    this_ptr[3] = puVar2;
  }
  iVar1 = g_02802630;
  *(void*)(this_ptr + 4) = 0;
  this_ptr[5] = 0;
  this_ptr[6] = 0;
  this_ptr[7] = 0;
  if (1 < iVar1) {
    puVar2 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar2 = &g_02572358;
    (*g_02572370)();
    this_ptr[7] = puVar2;
    iVar1 = g_02802630;
  }
  this_ptr[0xc] = 0;
  this_ptr[0xd] = 0;
  this_ptr[10] = 0;
  this_ptr[0xb] = 0;
  this_ptr[8] = 0;
  this_ptr[9] = 0;
  if (1 < iVar1) {
    puVar2 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar2 = &g_02572358;
    (*g_02572370)();
    this_ptr[0xd] = puVar2;
    iVar1 = g_02802630;
  }
  this_ptr[0xe] = 0;
  *(void*)(this_ptr + 0xf) = 0;
  *(void*)((int64_t)this_ptr + 0x7c) = 0;
  this_ptr[0x10] = 0;
  if (1 < iVar1) {
    puVar2 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar2 = &g_02572358;
    (*g_02572370)();
    this_ptr[0x10] = puVar2;
    iVar1 = g_02802630;
  }
  this_ptr[0x13] = 0;
  this_ptr[0x14] = 0;
  this_ptr[0x11] = 0;
  this_ptr[0x12] = 0;
  if (1 < iVar1) {
    puVar2 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar2 = &g_02572358;
    (*g_02572370)();
    this_ptr[0x14] = puVar2;
  }
  this_ptr[0x17] = 0;
  this_ptr[0x18] = 0;
  this_ptr[0x15] = 0;
  this_ptr[0x16] = 0;
  *(void*)((int64_t)this_ptr + 199) = 0;
  *(void*)((int64_t)this_ptr + 0xdc) = 0;
  *(void*)((int64_t)this_ptr + 0xe4) = 0;
  this_ptr[0x1d] = 0;
  this_ptr[0x1e] = 0;
  *(void*)((int64_t)this_ptr + 0xf6) = 0;
  return;
}



// ============================================================
// 000030f0
// ============================================================
// Function: FUN_000030f0
// Address: 000030f0
// Size: 612 bytes
// Class: GNPlugInControllerWrapper

void FUN_000030f0(void)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t *plVar3;
  uint64_t uVar4;
  int64_t *local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  char local_40;
  uint32_t local_34;
  
  FUN_01f282c0();
  plVar3 = (int64_t *)FUN_00e8fc40();
  FUN_00005410();
  (**(code **)(*plVar3 + 0x18))();
  uVar4 = (**(code **)(*plVar3 + 0x4c8))();
  if (local_40 == '\0') {
    if (local_48 != 0) {
      FUN_00d50b00();
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      goto LAB_00003168;
    }
  }
  else if (local_48 != 0) {
LAB_00003168:
    FUN_00d6f2a0();
    local_34 = 0;
    goto LAB_000031b1;
  }
  local_34 = (uint32_t)CONCAT71((int7)((uint64_t)uVar4 >> 8),1);
LAB_000031b1:
  FUN_00d6f370();
  lVar2 = local_48;
  if ((((local_40 == '\0') && (local_48 != 0)) && (FUN_00d50b00(), local_40 != '\0')) &&
     (local_48 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d32c80();
  FUN_00df2e00();
  FUN_00e36330();
  FUN_00e36840();
  FUN_00e36990();
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(*plVar3 + 0x460))();
  FUN_00d403d0();
  lVar1 = g_026cb120;
  if (g_026cb120 != 0) {
    FUN_00d50b00();
  }
  local_60 = '\0';
  local_58 = 0;
  local_50 = '\0';
  local_68 = plVar3;
  FUN_00d40470(&local_58,&local_68,1,3);
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if ((char)local_34 == '\0') {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}



// ============================================================
// 00003ae0
// ============================================================
// Function: FUN_00003ae0
// Address: 00003ae0
// Size: 534 bytes
// Class: GNPlugInControllerWrapper
// String references:
//   "GNPlugInControllerWrapper"

void FUN_00003ae0(void)

{
  int iVar1;
  uint32_t uVar2;
  int64_t local_38;
  int64_t local_30;
  
  if ((g_026cc3d0 == '\0') && (iVar1 = ___cxa_guard_acquire(), iVar1 != 0)) {
    g_026cc320 = FUN_00d4fe50();
    g_026cc308 = "GNPlugInControllerWrapper";
    g_026cc310 = 0x38;
    g_026cc318 = FUN_0000e470;
    g_026cc328 = 0;
    ram_00000000026cc330 = 0;
    g_026cc338 = 0;
    g_026cc3b0 = 0;
    ram_00000000026cc3b8 = 0;
    g_026cc3c0 = 0;
    g_026cc3c2 = 1;
    g_026cc340 = 0;
    ram_00000000026cc348 = 0;
    g_026cc350 = 0;
    ram_00000000026cc358 = 0;
    g_026cc360 = 0;
    ram_00000000026cc368 = 0;
    g_026cc370 = 0;
    ram_00000000026cc378 = 0;
    g_026cc380 = 0;
    ram_00000000026cc388 = 0;
    g_026cc390 = 0;
    ram_00000000026cc398 = 0;
    g_026cc3a0 = 0;
    ram_00000000026cc3a8 = 0;
    g_026cc3cb = 0;
    g_026cc3c3 = 0;
    ___cxa_guard_release();
  }
  if (g_026cc3c3 == '\0') {
    FUN_000064f0();
    FUN_00e87760();
    FUN_00d4ff40();
    FUN_00d50c00();
    FUN_00d4ff80();
    FUN_0000e4c0();
    FUN_0000e7e0();
    FUN_0000eb10();
    FUN_00d50c00();
    uVar2 = FUN_00e87770();
    FUN_00e87920(uVar2,0);
    if (local_30 != 0) {
      FUN_00d50b20();
    }
    if (local_38 != 0) {
      FUN_00d50b20();
    }
    FUN_00d4ffa0();
    FUN_00d4ffa0();
  }
  return;
}

