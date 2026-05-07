// Function: FUN_000fdf90
// Address: 000fdf90
// Size: 589 bytes
// Class: MDToolbarQuantizeMacrosCtrl

void FUN_000fdf90(void)

{
  code *pcVar1;
  int iVar2;
  void*puVar3;
  void*this_ptr;
  
  FUN_00d4ff40();
  *(void*)((int64_t)this_ptr + 0x2f) = 0;
  *(void*)((int64_t)this_ptr + 0x37) = 0;
  this_ptr[4] = 0;
  this_ptr[5] = 0;
  this_ptr[8] = 0;
  this_ptr[9] = 0;
  *(void*)((int64_t)this_ptr + 0x49) = 0;
  *(void*)((int64_t)this_ptr + 0x51) = 0;
  this_ptr[0xe] = 0;
  this_ptr[0xf] = 0;
  this_ptr[0xc] = 0;
  this_ptr[0xd] = 0;
  *this_ptr = &g_025e4fa0;
  this_ptr[2] = &g_025e5360;
  this_ptr[3] = &g_025e5398;
  if (1 < g_02802630) {
    puVar3 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar3 = &g_02572358;
    (*g_02572370)();
    this_ptr[0xf] = puVar3;
  }
  iVar2 = g_02802630;
  *(void*)(this_ptr + 0x10) = 0;
  this_ptr[0x1b] = 0;
  *(void*)(this_ptr + 0x1c) = 0;
  this_ptr[0x11] = 0;
  this_ptr[0x12] = 0;
  this_ptr[0x13] = 0;
  this_ptr[0x14] = 0;
  *(void*)((int64_t)this_ptr + 0xa5) = 0;
  this_ptr[0x16] = 0;
  this_ptr[0x17] = 0;
  *(void*)(this_ptr + 0x18) = 0;
  *(void*)((int64_t)this_ptr + 0xc4) = 0;
  *(void*)((int64_t)this_ptr + 0xcc) = 0;
  *(void*)((int64_t)this_ptr + 0xd4) = 0;
  this_ptr[0x1d] = 0;
  this_ptr[0x1e] = 0;
  *(void*)((int64_t)this_ptr + 0xf4) = 0;
  *(void*)((int64_t)this_ptr + 0xfc) = 0;
  this_ptr[0x21] = 0;
  this_ptr[0x22] = 0;
  this_ptr[0x23] = 0;
  this_ptr[0x24] = 0;
  this_ptr[0x25] = 0;
  this_ptr[0x26] = 0;
  this_ptr[0x27] = 0;
  this_ptr[0x28] = 0;
  this_ptr[0x29] = 0;
  if (iVar2 < 2) {
    this_ptr[0x2a] = 0;
    this_ptr[0x2b] = 0;
  }
  else {
    puVar3 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar3 = &g_02572358;
    pcVar1 = g_02572370;
    (*g_02572370)();
    this_ptr[0x29] = puVar3;
    iVar2 = g_02802630;
    this_ptr[0x2a] = 0;
    if (iVar2 < 2) {
      this_ptr[0x2b] = 0;
      this_ptr[0x2c] = 0;
      goto LAB_000fe1b9;
    }
    puVar3 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar3 = &g_02572358;
    (*pcVar1)();
    this_ptr[0x2a] = puVar3;
    iVar2 = g_02802630;
    this_ptr[0x2b] = 0;
    if (1 < iVar2) {
      puVar3 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar3 = &g_02572358;
      (*pcVar1)();
      this_ptr[0x2b] = puVar3;
      iVar2 = g_02802630;
      this_ptr[0x2c] = 0;
      if (1 < iVar2) {
        puVar3 = (void*)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar3 = &g_02572358;
        (*pcVar1)();
        this_ptr[0x2c] = puVar3;
      }
      goto LAB_000fe1b9;
    }
  }
  this_ptr[0x2c] = 0;
LAB_000fe1b9:
  this_ptr[0x2d] = 0;
  this_ptr[0x2e] = 0;
  this_ptr[0x2f] = 0;
  return;
}

