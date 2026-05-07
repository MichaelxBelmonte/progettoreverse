// Function: FUN_00dfab50
// Address: 00dfab50
// Size: 571 bytes
// Class: GNFormatter
// === GNFormatter properties ===
//                   _name
//                   _cType
//                   _classname
//                   _enumName
//                   _maxLength
//                   _canCodeResourceNameCache


void FUN_00dfab50(void)

{
  int64_t lVar1;
  code *pcVar2;
  char cVar3;
  void*puVar4;
  int64_t this_ptr;
  int64_t local_38;
  char local_30;
  
  FUN_00d50100();
  puVar4 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar4 = &g_025683c0;
  pcVar2 = g_025683d8;
  (*g_025683d8)();
  FUN_00c92170();
  FUN_00c92160();
  lVar1 = *(int64_t *)(this_ptr + 0x10);
  *(void**)(this_ptr + 0x10) = puVar4;
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  puVar4 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar4 = &g_025683c0;
  (*pcVar2)();
  FUN_00c92170();
  FUN_00c92160();
  lVar1 = *(int64_t *)(this_ptr + 0x18);
  *(void**)(this_ptr + 0x18) = puVar4;
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  puVar4 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar4 = &g_025683c0;
  (*pcVar2)();
  FUN_00c92170();
  FUN_00c92160();
  lVar1 = *(int64_t *)(this_ptr + 0x20);
  *(void**)(this_ptr + 0x20) = puVar4;
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  *(void*)(this_ptr + 0x38) = 0xffffffff;
  lVar1 = g_02784a78;
  if (g_02784a78 != 0) {
    FUN_00d50b00();
  }
  FUN_00e61ae0();
  if ((local_30 == '\0') && (local_38 != 0)) {
    FUN_00d50b00();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if (local_38 != 0) {
    cVar3 = FUN_00c70bc0();
    *(char *)(this_ptr + 0x50) = cVar3;
    lVar1 = g_02784a78;
    if (cVar3 != '\0') {
      if (g_02784a78 != 0) {
        FUN_00d50b00();
      }
      FUN_00e62a80();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
    }
    FUN_00d50b20();
  }
  return;
}

