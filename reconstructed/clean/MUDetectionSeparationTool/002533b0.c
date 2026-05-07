// Function: FUN_002533b0
// Address: 002533b0
// Size: 923 bytes
// Class: MUDetectionSeparationTool

void FUN_002533b0(void)

{
  int64_t *plVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  void*puVar5;
  int64_t lVar6;
  char *pcVar7;
  int64_t arg1;
  void*this_ptr;
  int64_t local_90;
  char local_88;
  int64_t *local_78;
  char local_70;
  int local_60;
  int64_t local_48;
  char local_40 [8];
  char local_38 [8];
  
  plVar1 = local_78;
  FUN_01f27fe0();
  cVar2 = (**(code **)(*local_78 + 0x450))();
  if (cVar2 == '\0') {
    if (*(int64_t *)(arg1 + 0x1c0) == 0) {
      local_40[0] = '\0';
      local_48 = 0;
    }
    else {
      FUN_006f3f00();
    }
    bVar3 = FUN_00751ba0();
    if ((local_40[0] != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    bVar3 = bVar3 ^ 1;
  }
  else {
    bVar3 = 0;
  }
  if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((bVar3 == 0) || (*(int64_t *)(arg1 + 0xb8) == 0)) {
LAB_002534e5:
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
    return;
  }
  FUN_004405c0();
  if (local_70 == '\0') {
    if (local_78 == (int64_t *)0x0) goto LAB_002534e5;
    FUN_00d50b00();
  }
  else if (local_78 == (int64_t *)0x0) goto LAB_002534e5;
  puVar5 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar5 = &g_02572358;
  (*g_02572370)();
  FUN_004b5af0();
  if (local_70 == '\0') {
    if (local_78 == (int64_t *)0x0) goto LAB_002536e7;
    FUN_00d50b00();
  }
  else if (local_78 == (int64_t *)0x0) goto LAB_002536e7;
  local_70 = '\0';
  local_78 = (int64_t *)0x0;
  local_60 = -1;
  while( true ) {
    lVar6 = (int64_t)local_60;
    local_60 = local_60 + 1;
    if (*(int *)((int64_t)plVar1 + 0xc) <= local_60) break;
    local_78 = *(int64_t **)(plVar1[2] + 8 + lVar6 * 8);
    iVar4 = FUN_003b7980();
    if (iVar4 == 2) {
      if (*(int64_t *)(arg1 + 0x1c0) == 0) {
        local_88 = '\0';
        local_90 = 0;
      }
      else {
        FUN_006f3f00();
      }
      FUN_0078bc40();
      local_38[0] = local_40[0];
      pcVar7 = local_40;
      if (local_40[0] == '\0') {
        pcVar7 = local_38;
      }
      *pcVar7 = '\0';
      if ((local_40[0] != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if ((local_88 != '\0') && (local_90 != 0)) {
        FUN_00d50b20();
      }
      if (local_48 != 0) {
        local_40[0] = '\0';
        FUN_00d21140();
        if ((local_40[0] != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
        if (local_38[0] != '\0') {
          FUN_00d50b20();
        }
      }
    }
  }
  FUN_00274d30();
  FUN_00d50b20();
LAB_002536e7:
  FUN_01f27fe0();
  FUN_000c3e50();
  if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (puVar5 != (void*)0x0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}

