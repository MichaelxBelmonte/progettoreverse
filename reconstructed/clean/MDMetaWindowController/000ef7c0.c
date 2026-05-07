// Function: FUN_000ef7c0
// Address: 000ef7c0
// Size: 800 bytes
// Class: MDMetaWindowController

void FUN_000ef7c0(void)

{
  int64_t lVar1;
  byte bVar2;
  uint64_t uVar3;
  int64_t this_ptr;
  int64_t *plVar4;
  double dVar5;
  uint64_t uVar6;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t *local_40;
  char local_38;
  
  lVar1 = g_026e1800;
  if (g_026e1800 != 0) {
    FUN_00d50b00();
  }
  dVar5 = (double)FUN_00e7d6f0();
  uVar3 = (uint64_t)(dVar5 * g_023907c0);
  dVar5 = dVar5 * g_023907c0 - g_023907c8;
  uVar6 = FUN_0071a120();
  if ((local_38 == '\0') && (local_40 != (int64_t *)0x0)) {
    uVar6 = FUN_00d50b00();
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      uVar6 = FUN_00d50b20();
    }
  }
  bVar2 = (byte)(((int64_t)dVar5 & (int64_t)uVar3 >> 0x3f | uVar3) / 3);
  local_70 = lVar1;
  local_68 = '\0';
  FUN_000175c0(uVar6,&local_70);
  plVar4 = local_40;
  if (local_38 == '\0') {
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b00();
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if (plVar4 != (int64_t *)0x0) {
    local_38 = '\0';
    local_40 = plVar4;
    bVar2 = FUN_00c70bc0();
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  FUN_00d50b20();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if ((plVar4 != (int64_t *)0x0 & bVar2) == 0) {
    FUN_01e40eb0();
    plVar4 = local_40;
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar4 == (int64_t *)0x0) {
      FUN_01e53c20();
      plVar4 = local_40;
      local_48 = 0;
      local_50 = *(int64_t *)(this_ptr + 0x78);
      if (local_50 != 0) {
        FUN_00d50b00();
      }
      local_48 = '\x01';
      (**(code **)(*plVar4 + 0x450))();
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    FUN_01e40eb0();
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (local_40 == (int64_t *)0x0) goto LAB_000ef9e5;
    plVar4 = *(int64_t **)(this_ptr + 0x70);
  }
  else {
    FUN_01e40eb0();
    plVar4 = local_40;
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar4 == (int64_t *)0x0) {
      FUN_01e53c20();
      plVar4 = local_40;
      local_58 = 0;
      local_60 = *(int64_t *)(this_ptr + 0x70);
      if (local_60 != 0) {
        FUN_00d50b00();
      }
      local_58 = '\x01';
      (**(code **)(*plVar4 + 0x450))();
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    FUN_01e40eb0();
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (local_40 == (int64_t *)0x0) goto LAB_000ef9e5;
    plVar4 = *(int64_t **)(this_ptr + 0x78);
  }
  (**(code **)(*plVar4 + 0x478))();
LAB_000ef9e5:
  FUN_000ee8f0();
  return;
}

