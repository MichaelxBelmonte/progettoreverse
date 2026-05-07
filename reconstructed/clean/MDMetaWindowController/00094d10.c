// Function: FUN_00094d10
// Address: 00094d10
// Size: 763 bytes
// Class: MDMetaWindowController

void FUN_00094d10(void)

{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t this_ptr;
  bool bVar3;
  int64_t local_88;
  char local_80;
  int64_t local_68;
  char local_60;
  int64_t *local_58;
  char local_50;
  int local_40;
  
  plVar1 = local_58;
  FUN_00093070();
  if (local_50 == '\0') {
    if (local_58 == (int64_t *)0x0) {
      return;
    }
    FUN_00d50b00();
  }
  else if (local_58 == (int64_t *)0x0) {
    return;
  }
  (**(code **)(*local_58 + 0x5e8))();
  if (local_50 == '\0') {
    if (local_58 == (int64_t *)0x0) goto LAB_00094f28;
    FUN_00d50b00();
  }
  else if (local_58 == (int64_t *)0x0) goto LAB_00094f28;
  local_50 = '\0';
  local_58 = (int64_t *)0x0;
  local_40 = -1;
  while( true ) {
    lVar2 = (int64_t)local_40;
    local_40 = local_40 + 1;
    if (*(int *)((int64_t)plVar1 + 0xc) <= local_40) break;
    local_58 = *(int64_t **)(plVar1[2] + 8 + lVar2 * 8);
    if (local_58 != *(int64_t **)(this_ptr + 0x10)) {
      (**(code **)(*local_58 + 0x5e8))();
      if (local_60 == '\0') {
        if (local_68 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_60 = '\0';
      }
      FUN_00093e10();
      if ((local_80 == '\0') && (local_88 != 0)) {
        FUN_00d50b00();
      }
      if (local_68 != 0) {
        FUN_00d50b20();
      }
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      if (local_88 != 0) {
        FUN_00094580();
        if (local_58 == *(int64_t **)(this_ptr + 0x10)) {
          FUN_00d50b20();
          FUN_00097d00();
          FUN_00d50b20();
          FUN_00d50b20();
          return;
        }
        FUN_00d50b20();
      }
    }
  }
  FUN_00097d00();
  FUN_00d50b20();
LAB_00094f28:
  if (*(int64_t *)(this_ptr + 0x10) != 0) {
    FUN_01e561b0();
    if (local_58 == (int64_t *)0x0) {
      bVar3 = false;
    }
    else {
      FUN_01e561b0();
      FUN_01d8f0f0();
      bVar3 = local_88 != 0;
      if ((local_80 != '\0') && (local_88 != 0)) {
        FUN_00d50b20();
      }
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
    }
    if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (bVar3) {
      FUN_01e561b0();
      (**(code **)(*local_58 + 0x9b0))();
      if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  *(void*)(this_ptr + 0x10) = 0;
  FUN_00d50b20();
  return;
}

