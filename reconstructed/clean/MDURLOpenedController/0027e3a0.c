// Function: FUN_0027e3a0
// Address: 0027e3a0
// Size: 843 bytes
// Class: MDURLOpenedController

uint64_t FUN_0027e3a0(uint64_t param_1,uint32_t param_2)

{
  int64_t *plVar1;
  int iVar2;
  uint64_t uVar3;
  void*arg1;
  int64_t local_80;
  char local_78;
  int64_t *local_40;
  char local_38;
  
  FUN_01f51ef0();
  if ((local_38 == '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  (**(code **)(*local_40 + 0x388))();
  FUN_01edd760();
  if (local_78 == '\0') {
    if (local_80 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_78 = '\0';
  }
  FUN_001220c0();
  if (local_38 == '\0') {
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  (**(code **)(*local_40 + 0x368))();
  if (local_40 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (local_80 != 0) {
    FUN_00d50b20();
  }
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  iVar2 = (**(code **)(*local_40 + 0x390))();
  uVar3 = CONCAT71((int7)((uint64_t)local_40 >> 8),1);
  if ((iVar2 == 0) && ((**(code **)(*local_40 + 0x380))(), local_40 != (int64_t *)0x0)) {
    if (local_38 == '\0') {
      FUN_00d50b00();
    }
    FUN_01f15680(param_2);
    if ((local_38 == '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b00();
    }
    FUN_01f15be0(g_02390d2c);
    FUN_01f15740();
    FUN_01f15bb0();
    (**(code **)(*local_40 + 0x370))
              ((uint)param_1 ^ g_023945e0,(uint)((uint64_t)param_1 >> 0x20) ^ g_023945e0);
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    plVar1 = (int64_t *)*arg1;
    FUN_01f15bb0();
    if (local_38 == '\0') {
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    (**(code **)(*plVar1 + 0x610))((uint)param_1,param_2);
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_01f15a80();
    FUN_01f15b80();
    FUN_00c91c80();
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    uVar3 = 0;
  }
  FUN_00d50b20();
  if ((char)uVar3 == '\0') {
    FUN_00d50b20();
  }
  return (uVar3 ^ 1) & 0xffffffff;
}

