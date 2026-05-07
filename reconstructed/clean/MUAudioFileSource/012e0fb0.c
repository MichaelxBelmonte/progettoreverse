// Function: FUN_012e0fb0
// Address: 012e0fb0
// Size: 912 bytes
// Class: MUAudioFileSource

void FUN_012e0fb0(uint64_t param_1)

{
  int64_t *plVar1;
  char cVar2;
  int64_t *plVar3;
  void*this_ptr;
  int64_t local_40;
  char local_38;
  int64_t *local_30;
  char local_28;
  
  plVar3 = (int64_t *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar3 + 0x18))();
  FUN_00003020();
  FUN_00d91a70(param_1,1);
  plVar1 = g_0270b820;
  if ((local_38 == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
    plVar1 = g_0270b820;
  }
  g_0270b820 = plVar1;
  if (plVar1 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  local_28 = '\0';
  local_30 = plVar1;
  FUN_00ca0840(param_1,&local_30);
  if ((local_28 != '\0') && (local_30 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (local_40 != 0) {
    FUN_00d50b20();
  }
  FUN_00003060();
  FUN_00d91a70(param_1,1);
  if (local_40 != 0) {
    FUN_00d50b00();
  }
  plVar1 = g_0270b828;
  if (g_0270b828 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  local_28 = '\0';
  local_30 = plVar1;
  FUN_00ca0840(param_1,&local_30);
  if ((local_28 != '\0') && (local_30 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (local_40 != 0) {
    FUN_00d50b20();
  }
  FUN_00003010();
  FUN_00d91a70(param_1,1);
  if (local_40 != 0) {
    FUN_00d50b00();
  }
  plVar1 = g_0270b830;
  if (g_0270b830 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  local_28 = '\0';
  local_30 = plVar1;
  FUN_00ca0840(param_1,&local_30);
  if ((local_28 != '\0') && (local_30 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (local_40 != 0) {
    FUN_00d50b20();
  }
  FUN_01f27fe0();
  cVar2 = (**(code **)(*local_30 + 0x550))();
  if ((local_28 != '\0') && (local_30 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar2 != '\0') {
    FUN_00d46300();
    if (local_40 != 0) {
      FUN_00d50b00();
    }
    plVar1 = g_0270b838;
    if (g_0270b838 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    local_28 = '\0';
    local_30 = plVar1;
    FUN_00ca0840(param_1,&local_30);
    if ((local_28 != '\0') && (local_30 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if (local_40 != 0) {
      FUN_00d50b20();
    }
  }
  *this_ptr = plVar3;
  *(void*)(this_ptr + 1) = 1;
  return;
}

