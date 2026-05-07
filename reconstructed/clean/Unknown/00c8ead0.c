// Function: FUN_00c8ead0
// Address: 00c8ead0
// Size: 525 bytes
// Class: Unknown

void FUN_00c8ead0(void)

{
  bool bVar1;
  bool bVar2;
  int64_t lVar3;
  uint64_t uVar4;
  int64_t *plVar5;
  int64_t *arg1;
  int64_t this_ptr;
  int64_t *plVar6;
  int64_t local_78;
  char local_70;
  uint32_t local_44;
  int64_t *local_40;
  char local_38;
  
  if ((int64_t *)*arg1 == (int64_t *)0x0) {
    bVar2 = false;
  }
  else {
    (**(code **)(*(int64_t *)*arg1 + 0x4d8))();
    plVar6 = local_40;
    if (local_40 == (int64_t *)0x0) {
      bVar2 = false;
      plVar6 = (int64_t *)0x0;
    }
    else {
      if (local_38 != '\0') {
        bVar2 = true;
        goto LAB_00c8eb83;
      }
      FUN_00d50b00();
      bVar2 = true;
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar6 != (int64_t *)0x0) goto LAB_00c8eb83;
  }
  lVar3 = g_027726e0;
  if (g_027726e0 != 0) {
    FUN_00d50b00();
  }
  FUN_00cc78b0();
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  plVar6 = (int64_t *)0x0;
LAB_00c8eb83:
  uVar4 = (**(code **)(*(int64_t *)*arg1 + 0x3a8))();
  lVar3 = g_027816e8;
  if (uVar4 == 0) {
    bVar1 = false;
    plVar5 = (int64_t *)0x0;
  }
  else if ((uVar4 & 0xffffffff80000000) == 0) {
    local_44 = (uint32_t)uVar4;
    FUN_00c8e340();
    (**(code **)(*plVar6 + 0x380))(&local_44,*(void*)(this_ptr + 0x10));
    plVar5 = local_40;
    if (local_40 == (int64_t *)0x0) {
      plVar5 = (int64_t *)0x0;
      bVar1 = false;
    }
    else {
      bVar1 = true;
      if (((local_38 == '\0') && (FUN_00d50b00(), local_38 != '\0')) &&
         (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    if (g_027816e8 != 0) {
      FUN_00d50b00();
    }
    FUN_00cc7970();
    plVar5 = local_40;
    if (local_40 == (int64_t *)0x0) {
      plVar5 = (int64_t *)0x0;
      bVar1 = false;
    }
    else if (local_38 == '\0') {
      FUN_00d50b00();
      bVar1 = true;
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
      bVar1 = true;
    }
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
  }
  (**(code **)(*plVar6 + 0x368))();
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  if ((plVar5 != (int64_t *)0x0) && (FUN_00cc76c0(), bVar1)) {
    FUN_00d50b20();
  }
  if (bVar2) {
    FUN_00d50b20();
  }
  return;
}

