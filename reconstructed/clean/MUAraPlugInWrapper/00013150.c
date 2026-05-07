// Function: FUN_00013150
// Address: 00013150
// Size: 1063 bytes
// Class: MUAraPlugInWrapper

void FUN_00013150(void)

{
  code *pcVar1;
  int iVar2;
  void*puVar3;
  void*this_ptr;
  
  FUN_00d4ff40();
  *(void*)((int64_t)this_ptr + 0x7c) = 0;
  *(void*)((int64_t)this_ptr + 0x84) = 0;
  *(void*)((int64_t)this_ptr + 0x6c) = 0;
  *(void*)((int64_t)this_ptr + 0x74) = 0;
  *(void*)((int64_t)this_ptr + 0x5c) = 0;
  *(void*)((int64_t)this_ptr + 100) = 0;
  *(void*)((int64_t)this_ptr + 0x4c) = 0;
  *(void*)((int64_t)this_ptr + 0x54) = 0;
  *(void*)((int64_t)this_ptr + 0x3c) = 0;
  *(void*)((int64_t)this_ptr + 0x44) = 0;
  *(void*)((int64_t)this_ptr + 0x2c) = 0;
  *(void*)((int64_t)this_ptr + 0x34) = 0;
  *(void*)((int64_t)this_ptr + 0x1c) = 0;
  *(void*)((int64_t)this_ptr + 0x24) = 0;
  *(void*)((int64_t)this_ptr + 0xc) = 0;
  *(void*)((int64_t)this_ptr + 0x14) = 0;
  *(void*)((int64_t)this_ptr + 0x8c) = 0;
  *this_ptr = &g_02501518;
  this_ptr[0x12] = &g_02501b50;
  this_ptr[0x13] = &g_02501b80;
  *(void*)(this_ptr + 0x14) = 0;
  this_ptr[0x15] = 0;
  this_ptr[0x16] = 0;
  this_ptr[0x17] = 0;
  iVar2 = g_02802630;
  if (g_02802630 < 2) {
    this_ptr[0x18] = 0;
    this_ptr[0x19] = 0;
LAB_00013314:
    this_ptr[0x1a] = 0;
    this_ptr[0x1b] = 0;
  }
  else {
    puVar3 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar3 = &g_02572358;
    pcVar1 = g_02572370;
    (*g_02572370)();
    this_ptr[0x17] = puVar3;
    iVar2 = g_02802630;
    this_ptr[0x18] = 0;
    this_ptr[0x19] = 0;
    if (iVar2 < 2) goto LAB_00013314;
    puVar3 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar3 = &g_02572358;
    (*pcVar1)();
    this_ptr[0x19] = puVar3;
    iVar2 = g_02802630;
    this_ptr[0x1a] = 0;
    this_ptr[0x1b] = 0;
    if (1 < iVar2) {
      puVar3 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar3 = &g_02572358;
      (*pcVar1)();
      this_ptr[0x1b] = puVar3;
      iVar2 = g_02802630;
      this_ptr[0x1c] = 0;
      if (1 < iVar2) {
        puVar3 = (void*)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar3 = &g_02572358;
        (*pcVar1)();
        this_ptr[0x1c] = puVar3;
        iVar2 = g_02802630;
      }
      goto LAB_0001333f;
    }
  }
  this_ptr[0x1c] = 0;
LAB_0001333f:
  *(void*)(this_ptr + 0x47) = 0;
  this_ptr[0x53] = 0;
  *(void*)(this_ptr + 0x54) = 0;
  this_ptr[0x5d] = 0;
  this_ptr[0x1d] = 0;
  this_ptr[0x1e] = 0;
  this_ptr[0x1f] = 0;
  this_ptr[0x20] = 0;
  this_ptr[0x21] = 0;
  this_ptr[0x22] = 0;
  this_ptr[0x48] = 0;
  this_ptr[0x49] = 0;
  this_ptr[0x4a] = 0;
  this_ptr[0x4b] = 0;
  this_ptr[0x4c] = 0;
  this_ptr[0x4d] = 0;
  this_ptr[0x4e] = 0;
  this_ptr[0x4f] = 0;
  this_ptr[0x50] = 0;
  this_ptr[0x51] = 0;
  *(void*)(this_ptr + 0x52) = 0;
  this_ptr[0x55] = 0;
  this_ptr[0x56] = 0;
  *(void*)((int64_t)this_ptr + 0x2b4) = 0;
  *(void*)((int64_t)this_ptr + 700) = 0;
  this_ptr[0x59] = 0;
  *(void*)((int64_t)this_ptr + 0x2cf) = 0;
  *(void*)((int64_t)this_ptr + 0x2df) = 0;
  this_ptr[0x5b] = 0;
  if (1 < iVar2) {
    puVar3 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar3 = &g_02572358;
    (*g_02572370)();
    this_ptr[0x5d] = puVar3;
  }
  this_ptr[0x60] = 0;
  this_ptr[0x61] = 0;
  this_ptr[0x5e] = 0;
  this_ptr[0x5f] = 0;
  this_ptr[0x62] = 0;
  if (g_02802630 < 2) {
    this_ptr[99] = 0;
    this_ptr[100] = 0;
  }
  else {
    puVar3 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar3 = &g_02572358;
    pcVar1 = g_02572370;
    (*g_02572370)();
    this_ptr[0x62] = puVar3;
    iVar2 = g_02802630;
    this_ptr[99] = 0;
    if (iVar2 < 2) {
      this_ptr[100] = 0;
    }
    else {
      puVar3 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar3 = &g_02572358;
      (*pcVar1)();
      this_ptr[99] = puVar3;
      iVar2 = g_02802630;
      this_ptr[100] = 0;
      if (1 < iVar2) {
        puVar3 = (void*)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar3 = &g_02572358;
        (*g_02572370)();
        this_ptr[100] = puVar3;
      }
    }
  }
  this_ptr[0x69] = 0;
  this_ptr[0x6a] = 0;
  this_ptr[0x67] = 0;
  this_ptr[0x68] = 0;
  this_ptr[0x65] = 0;
  this_ptr[0x66] = 0;
  *(void*)((int64_t)this_ptr + 0x357) = 0;
  this_ptr[0x6c] = 0;
  this_ptr[0x6d] = 0;
  *(void*)(this_ptr + 0x6e) = 0;
  this_ptr[0x6f] = 0;
  this_ptr[0x70] = 0;
  this_ptr[0x71] = 0;
  this_ptr[0x72] = 0;
  this_ptr[0x73] = 0;
  this_ptr[0x74] = 0;
  this_ptr[0x75] = 0;
  return;
}

