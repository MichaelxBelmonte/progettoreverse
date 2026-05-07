// Function: FUN_012b9080
// Address: 012b9080
// Size: 863 bytes
// Class: MULSSComponentRenderer
// === MULSSComponentRenderer properties ===
//                   _currentComponent
//                   _components
//                   _lastRightAdjacentItem
//                   _sourceSamplePosition


void FUN_012b9080(uint64_t param_1,uint32_t param_2)

{
  int64_t *plVar1;
  int64_t *plVar2;
  void*this_ptr;
  int64_t *plVar3;
  int64_t *local_b0;
  char local_a8;
  int64_t *local_a0;
  char local_98;
  int64_t *local_90;
  char local_88;
  int64_t *local_80;
  char local_78;
  int64_t *local_70;
  char local_68;
  int64_t *local_60;
  uint32_t local_54;
  int64_t local_50;
  char local_48;
  int64_t *local_40;
  char local_38;
  
  local_54 = param_2;
  FUN_00da5ad0();
  plVar2 = local_40;
  if ((((local_38 == '\0') && (local_40 != (int64_t *)0x0)) && (FUN_00d50b00(), local_38 != '\0'))
     && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  local_60 = plVar2;
  FUN_00da6c20();
  local_b0 = g_027bec88;
  if (g_027bec88 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  local_a8 = '\x01';
  FUN_000175c0(param_1,&local_b0);
  plVar2 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != (int64_t *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
       (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_a8 != '\0') && (local_b0 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if (plVar2 == (int64_t *)0x0) {
    plVar2 = (int64_t *)FUN_00e8fc40();
    FUN_00022d50();
    (**(code **)(*plVar2 + 0x18))();
    FUN_00da6c20();
    plVar1 = g_027bec88;
    local_98 = '\0';
    local_a0 = plVar2;
    if (g_027bec88 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    local_40 = plVar1;
    local_38 = '\0';
    FUN_00ca0840(param_1,&local_40);
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((local_98 != '\0') && (local_a0 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
  }
  FUN_00d46530();
  plVar1 = local_40;
  if ((((local_38 == '\0') && (local_40 != (int64_t *)0x0)) && (FUN_00d50b00(), local_38 != '\0'))
     && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  local_90 = plVar1;
  local_88 = '\0';
  FUN_012c20e0(param_1,&local_90);
  plVar3 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != (int64_t *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
       (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar3 == (int64_t *)0x0) {
    GNFastFourierTransformer_create();
    if ((((local_40 != (int64_t *)0x0) && (plVar3 = local_40, local_38 == '\0')) &&
        (FUN_00d50b00(), local_38 != '\0')) && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    local_78 = '\0';
    local_70 = plVar1;
    local_68 = '\0';
    local_80 = plVar3;
    FUN_012c2030(param_1,&local_70);
    if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  *this_ptr = plVar3;
  *(void*)(this_ptr + 1) = 1;
  if (plVar1 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  plVar1 = local_60;
  if (plVar2 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (plVar1 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}

