// Function: FUN_00b5d1a0
// Address: 00b5d1a0
// Size: 622 bytes
// Class: GNMidiFileTrack

void FUN_00b5d1a0(double param_1)

{
  int64_t lVar1;
  int64_t lVar2;
  void*puVar3;
  void*puVar4;
  int64_t lVar5;
  int64_t this_ptr;
  double dVar6;
  int64_t local_68;
  char local_60;
  int64_t local_40;
  char local_38;
  
  lVar1 = *(int64_t *)(this_ptr + 0x10);
  if (lVar1 == 0) {
    puVar4 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar4 = &g_02572358;
    (*g_02572370)();
    puVar3 = *(void**)(this_ptr + 0x10);
    if (puVar3 == puVar4) {
      FUN_00d50b20();
    }
    else {
      *(void**)(this_ptr + 0x10) = puVar4;
      if (puVar3 != (void*)0x0) {
        FUN_00d50b20();
      }
    }
    FUN_00b5a6a0(param_1);
    if (local_60 == '\0') {
      if (local_68 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_60 = '\0';
    }
    FUN_00d21140();
    if (local_68 != 0) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    if (0 < *(int *)(lVar1 + 0xc)) {
      lVar5 = 0;
      while( true ) {
        lVar2 = *(int64_t *)(*(int64_t *)(lVar1 + 0x10) + lVar5 * 8);
        dVar6 = (double)FUN_00b5beb0();
        if ((dVar6 == param_1) && (!NAN(dVar6) && !NAN(param_1))) break;
        if ((param_1 <= dVar6) || (lVar5 = lVar5 + 1, *(int *)(lVar1 + 0xc) <= lVar5))
        goto LAB_00b5d365;
      }
      if (lVar2 != 0) {
        FUN_00d50b00();
        FUN_00b5be00();
        FUN_00d50b20();
        return;
      }
    }
LAB_00b5d365:
    FUN_00b5a6a0(param_1);
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    FUN_00b5d580();
    if (local_40 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  return;
}

