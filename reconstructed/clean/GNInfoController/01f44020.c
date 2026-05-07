// Function: FUN_01f44020
// Address: 01f44020
// Size: 725 bytes
// Class: GNInfoController

void FUN_01f44020(void)

{
  uint uVar1;
  int64_t *plVar2;
  int iVar3;
  uint64_t uVar4;
  int64_t this_ptr;
  int64_t *plVar5;
  int64_t lVar6;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t *local_40;
  char local_38;
  
  *(void*)(this_ptr + 0xd8) = 1;
  FUN_01f2fbe0();
  plVar5 = local_40;
  if ((local_38 == '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  for (iVar3 = *(int *)((int64_t)plVar5 + 0xc); 0 < iVar3; iVar3 = iVar3 + -1) {
    FUN_01e5e340();
  }
  for (uVar4 = (uint64_t)*(uint *)(*(int64_t *)(this_ptr + 0x38) + 0xc); 0 < (int)uVar4;
      uVar4 = uVar4 - 1) {
    (**(code **)(**(int64_t **)
                   (*(int64_t *)(*(int64_t *)(this_ptr + 0x38) + 0x10) + -8 + uVar4 * 8) + 0x4f0)
    )();
  }
  FUN_01f2fbe0();
  plVar2 = local_40;
  if (plVar5 == local_40) {
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else if (local_38 == '\0') {
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    if (plVar5 == (int64_t *)0x0) {
      uVar1 = *(uint *)((int64_t)plVar2 + 0xc);
      goto joined_r0x01f441c2;
    }
    FUN_00d50b20();
    plVar5 = plVar2;
  }
  else {
    if (plVar5 == (int64_t *)0x0) {
      uVar1 = *(uint *)((int64_t)local_40 + 0xc);
      goto joined_r0x01f441c2;
    }
    FUN_00d50b20();
    plVar5 = plVar2;
  }
  uVar1 = *(uint *)((int64_t)plVar5 + 0xc);
joined_r0x01f441c2:
  if (0 < (int)uVar1) {
    lVar6 = (uint64_t)uVar1 + 1;
    do {
      FUN_01e5c650();
      plVar5 = local_40;
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar5 != (int64_t *)0x0) {
        FUN_01e5c650();
        (**(code **)(*local_40 + 0x5b0))();
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      lVar6 = lVar6 + -1;
    } while (1 < lVar6);
  }
  FUN_00d403d0();
  lVar6 = g_02800198;
  if (g_02800198 != 0) {
    FUN_00d50b00();
  }
  local_48 = 0;
  if (this_ptr != 0) {
    FUN_00d50b00();
  }
  local_48 = '\x01';
  local_60 = 0;
  local_58 = '\0';
  local_50 = this_ptr;
  FUN_00d40470(&local_60,&local_50,3,3);
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if (lVar6 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d6f370();
  plVar5 = local_40;
  if ((((local_38 == '\0') && (local_40 != (int64_t *)0x0)) && (FUN_00d50b00(), local_38 != '\0'))
     && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d71400();
  if (*(int64_t *)(this_ptr + 0x28) != 0) {
    *(void*)(this_ptr + 0x28) = 0;
    FUN_00d50b20();
  }
  if (plVar5 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}

