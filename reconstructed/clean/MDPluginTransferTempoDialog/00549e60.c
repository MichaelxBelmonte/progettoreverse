// Function: FUN_00549e60
// Address: 00549e60
// Size: 824 bytes
// Class: MDPluginTransferTempoDialog

void FUN_00549e60(uint64_t param_1)

{
  int64_t lVar1;
  int iVar2;
  int unaff_ESI;
  int64_t this_ptr;
  int64_t local_a0;
  char local_98;
  int64_t local_80;
  char local_78;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  lVar1 = *(int64_t *)(this_ptr + 0xb8);
  if ((lVar1 != 0) && (FUN_00d50b00(), unaff_ESI == 1)) {
    FUN_00536630();
    do {
      FUN_00536640();
      FUN_0052f680();
      if ((local_78 != '\0') && (local_80 != 0)) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
    } while (local_80 != 0);
  }
  if (*(int64_t *)(this_ptr + 0xe0) == 0) {
    FUN_01f27fe0();
    (**(code **)(*(int64_t *)(this_ptr + 0x70) + 0x10))();
    FUN_00d50b00();
    FUN_01f474f0();
    if ((int64_t *)(this_ptr + 0x70) != (int64_t *)0x0) {
      (**(code **)(*(int64_t *)(this_ptr + 0x70) + 0x10))();
      FUN_00d50b20();
    }
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
  }
  if (*(int64_t *)(this_ptr + 0xb0) != 0) {
    *(void*)(this_ptr + 0xb0) = 0;
    FUN_00d50b20();
  }
  if (*(int64_t *)(this_ptr + 0xb8) != 0) {
    *(void*)(this_ptr + 0xb8) = 0;
    FUN_00d50b20();
  }
  if (*(int64_t *)(this_ptr + 0xc0) != 0) {
    *(void*)(this_ptr + 0xc0) = 0;
    FUN_00d50b20();
  }
  FUN_01f27fe0();
  FUN_00521db0();
  local_38 = 0;
  if (local_98 == '\0') {
    if (local_a0 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_98 = '\0';
  }
  local_38 = '\x01';
  local_40 = local_a0;
  FUN_000c4290(param_1,&local_40);
  if ((local_78 == '\0') && (local_80 != 0)) {
    FUN_00d50b00();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if (local_80 != 0) {
    for (iVar2 = 0; iVar2 < *(int *)(local_80 + 0xc); iVar2 = iVar2 + 1) {
      FUN_0051b610();
      FUN_0053abf0();
    }
    FUN_0015ee90();
    FUN_00d50b20();
  }
  if (*(int64_t *)(this_ptr + 0xe0) != 0) {
    *(void*)(this_ptr + 0xe0) = 0;
    FUN_00d50b20();
  }
  if (*(int64_t *)(this_ptr + 0xa8) != 0) {
    *(void*)(this_ptr + 0xa8) = 0;
    FUN_00d50b20();
  }
  FUN_01e57e90();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  return;
}

