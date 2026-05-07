// Function: FUN_00759cf0
// Address: 00759cf0
// Size: 683 bytes
// Class: MUAudioIOSlot

void FUN_00759cf0(void)

{
  bool bVar1;
  char cVar2;
  int64_t *plVar3;
  int64_t arg1;
  void*this_ptr;
  int64_t local_70;
  char local_68;
  int64_t *local_40;
  char local_38;
  
  plVar3 = (int64_t *)FUN_00e8fc40();
  FUN_000161a0();
  *plVar3 = (int64_t)&g_0250ac78;
  plVar3[0xe] = (int64_t)&g_0250b2f8;
  plVar3[0xf] = (int64_t)&g_0250b330;
  plVar3[0x10] = (int64_t)&g_0250b3a8;
  plVar3[0x11] = 0;
  plVar3[0x12] = 0;
  plVar3[0x13] = 0;
  plVar3[0x14] = 0;
  *(void*)((int64_t)plVar3 + 0xa4) = 0;
  *(void*)((int64_t)plVar3 + 0xac) = 0;
  plVar3[0x17] = 0;
  plVar3[0x18] = 0;
  plVar3[0x19] = 0;
  plVar3[0x1a] = 0;
  plVar3[0x1b] = 0;
  plVar3[0x1c] = 0;
  plVar3[0x1d] = 0;
  plVar3[0x1e] = 0;
  plVar3[0x1f] = 0;
  (*g_0250ac90)();
  FUN_00758620();
  FUN_01f27fe0();
  cVar2 = (**(code **)(*local_40 + 0x450))();
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar2 == '\0') {
    FUN_0062abf0();
    if (local_68 == '\0') {
      if (local_70 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_68 = '\0';
    }
    FUN_00453a40();
    if (local_40 == (int64_t *)0x0) {
      bVar1 = false;
    }
    else if (local_38 == '\0') {
      FUN_00d50b00();
      bVar1 = true;
    }
    else {
      local_38 = '\0';
      bVar1 = true;
    }
    if (local_70 != 0) {
      FUN_00d50b20();
    }
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    if (arg1 != 0) {
      FUN_00d50b00();
    }
    FUN_003193e0();
    if (local_40 == (int64_t *)0x0) {
      bVar1 = false;
    }
    else if (local_38 == '\0') {
      FUN_00d50b00();
      bVar1 = true;
    }
    else {
      local_38 = '\0';
      bVar1 = true;
    }
    if (arg1 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_007105f0();
  FUN_01e53c20();
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (local_40 == (int64_t *)0x0) {
    (**(code **)(*plVar3 + 0x4c0))();
  }
  *this_ptr = plVar3;
  *(void*)(this_ptr + 1) = 1;
  if ((bVar1) && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  return;
}

