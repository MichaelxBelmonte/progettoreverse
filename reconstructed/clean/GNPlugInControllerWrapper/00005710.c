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

