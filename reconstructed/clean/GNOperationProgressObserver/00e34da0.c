// Function: FUN_00e34da0
// Address: 00e34da0
// Size: 523 bytes
// Class: GNOperationProgressObserver
// String references:
//   " [low cpu]"
//   " [heavy cpu]"
//   " progress:"
//   "%g"
//   " COMPLEX!"
//   " PREPARING"
//   " RUNNING"
//   " FINISHED"
//   " (with JobCenter %p)"
//   " (SHOULD cancel)"
//   ", is CANCELLED"

void FUN_00e34da0(void)

{
  int iVar1;
  char cVar2;
  void*puVar3;
  int64_t *arg1;
  void*this_ptr;
  void*local_50;
  uint local_48;
  float local_44;
  int64_t local_40;
  void*local_38;
  char local_30;
  
  puVar3 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar3 = &g_025795a8;
  (*g_025795c0)();
  FUN_00d4fff0();
  local_38 = local_50;
  local_30 = 0;
  if ((char)local_48 == '\0') {
    if (local_50 != (void*)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_48 = local_48 & 0xffffff00;
  }
  local_30 = '\x01';
  FUN_00d8dbf0();
  if ((local_30 != '\0') && (local_38 != (void*)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_48 != '\0') && (local_50 != (void*)0x0)) {
    FUN_00d50b20();
  }
  if ((char)arg1[0xb] == '\0') {
    FUN_00d8db40();
  }
  else {
    FUN_00d8db40();
  }
  FUN_00d8db40();
  local_44 = *(float *)(arg1 + 10) * g_023908e0;
  local_48 = 1;
  local_50 = &g_024d0b28;
  FUN_00d94d80(local_44,&local_50);
  FUN_00d8db40();
  cVar2 = (**(code **)(*arg1 + 0x378))();
  if (cVar2 != '\0') {
    FUN_00d8db40();
  }
  iVar1 = (int)arg1[7];
  if (iVar1 == 1) {
    FUN_00d8db40();
  }
  else if (iVar1 == 0) {
    FUN_00d8db40();
  }
  else if (iVar1 == -1) {
    FUN_00d8db40();
  }
  if (arg1[4] != 0) {
    local_48 = 1;
    local_50 = (void*)&g_02576920;
    local_40 = arg1[4];
    FUN_00d94d80(&g_02576920,&local_50);
  }
  if (*(char *)((int64_t)arg1 + 0x3c) != '\0') {
    FUN_00d8db40();
  }
  if (*(char *)((int64_t)arg1 + 0x3d) != '\0') {
    FUN_00d8db40();
  }
  *this_ptr = puVar3;
  *(void*)(this_ptr + 1) = 1;
  return;
}

