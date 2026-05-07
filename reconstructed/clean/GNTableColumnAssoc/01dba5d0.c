// Function: FUN_01dba5d0
// Address: 01dba5d0
// Size: 860 bytes
// Class: GNTableColumnAssoc

void FUN_01dba5d0(void)

{
  int64_t lVar1;
  int64_t *plVar2;
  uint64_t uVar3;
  int64_t arg1;
  void*this_ptr;
  uint32_t extraout_XMM0_Da;
  uint32_t uVar4;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  char local_40;
  uint32_t local_34;
  
  plVar2 = (int64_t *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar2 + 0x18))();
  uVar3 = FUN_01dba1f0();
  if (local_40 == '\0') {
    if (local_48 == 0) goto LAB_01dba6bf;
    uVar4 = FUN_00d50b00();
  }
  else {
    uVar4 = extraout_XMM0_Da;
    if (local_48 == 0) {
LAB_01dba6bf:
      local_34 = (uint32_t)CONCAT71((int7)((uint64_t)uVar3 >> 8),1);
      goto LAB_01dba6c4;
    }
  }
  lVar1 = g_027092b8;
  if (g_027092b8 != 0) {
    uVar4 = FUN_00d50b00();
  }
  local_48 = lVar1;
  local_40 = '\0';
  FUN_00ca0840(uVar4,&local_48);
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  local_34 = 0;
LAB_01dba6c4:
  uVar4 = FUN_00d46dc0(*(void*)(arg1 + 0x28));
  lVar1 = g_027f2350;
  if ((local_50 == '\0') && (local_58 != 0)) {
    uVar4 = FUN_00d50b00();
    lVar1 = g_027f2350;
  }
  g_027f2350 = lVar1;
  if (lVar1 != 0) {
    uVar4 = FUN_00d50b00();
  }
  local_40 = '\0';
  local_48 = lVar1;
  FUN_00ca0840(uVar4,&local_48);
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if (local_58 != 0) {
    FUN_00d50b20();
  }
  uVar4 = FUN_00d46530();
  if (local_58 != 0) {
    uVar4 = FUN_00d50b00();
  }
  lVar1 = g_027f2358;
  if (g_027f2358 != 0) {
    uVar4 = FUN_00d50b00();
  }
  local_40 = '\0';
  local_48 = lVar1;
  FUN_00ca0840(uVar4,&local_48);
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if (local_58 != 0) {
    FUN_00d50b20();
  }
  uVar4 = FUN_00d46530();
  if (local_58 != 0) {
    uVar4 = FUN_00d50b00();
  }
  lVar1 = g_027f2360;
  if (g_027f2360 != 0) {
    uVar4 = FUN_00d50b00();
  }
  local_40 = '\0';
  local_48 = lVar1;
  FUN_00ca0840(uVar4,&local_48);
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if (local_58 != 0) {
    FUN_00d50b20();
  }
  *this_ptr = plVar2;
  *(void*)(this_ptr + 1) = 1;
  if ((char)local_34 == '\0') {
    FUN_00d50b20();
  }
  return;
}

