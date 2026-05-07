// Function: FUN_01e2f200
// Address: 01e2f200
// Size: 833 bytes
// Class: GNClassDescription
// === GNClassDescription properties ===
//                   _potentialValues
//                   _derivationSources
//                   _derivationDestinations
//                   _documentation


void FUN_01e2f200(uint64_t param_1,void*param_2)

{
  int64_t *plVar1;
  int64_t lVar2;
  byte bVar3;
  char cVar4;
  int64_t this_ptr;
  int64_t *local_80;
  char local_78;
  int64_t *local_48;
  
  FUN_00d21140();
  lVar2 = g_028b9590;
  if (g_028b9590 != 0) {
    FUN_00d50b00();
  }
  FUN_000175c0();
  if (local_80 == (int64_t *)0x0) {
    local_48 = (int64_t *)0x0;
    bVar3 = 0;
  }
  else {
    if (local_78 == '\0') {
      FUN_00d50b00();
    }
    else {
      local_78 = '\0';
    }
    bVar3 = FUN_00c9ff50();
    bVar3 = bVar3 ^ 1;
    local_48 = local_80;
  }
  if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if ((bVar3 != 0) && (FUN_00ca0840(), lVar2 = g_027f3818, *(char *)(this_ptr + 0x38) != '\0')) {
    if (g_027f3818 != 0) {
      FUN_00d50b00();
    }
    cVar4 = (**(code **)(*local_48 + 0x50))();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    if (cVar4 != '\0') {
      plVar1 = (int64_t *)*param_2;
      FUN_00d46300();
      if (local_48 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      lVar2 = g_027f3848;
      if (g_027f3848 != 0) {
        FUN_00d50b00();
      }
      (**(code **)(*plVar1 + 0x80))();
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      if (local_48 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
    }
  }
  if (*(int64_t *)(this_ptr + 0x30) != 0) {
    FUN_00d50b00();
    FUN_00ca0e70();
    FUN_00d50b20();
    if (*(int64_t *)(this_ptr + 0x30) != 0) {
      *(void*)(this_ptr + 0x30) = 0;
      FUN_00d50b20();
    }
  }
  if (local_80 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}

