// ===================================================================
// MUChordSequence — Complete reconstructed pseudocode
// 2 functions
// ===================================================================


// ============================================================
// 0124f820
// ============================================================
// Function: FUN_0124f820
// Address: 0124f820
// Size: 793 bytes
// Class: MUChordSequence

void FUN_0124f820(void)

{
  int64_t lVar1;
  void*puVar2;
  bool bVar3;
  uint64_t uVar4;
  int64_t lVar5;
  void*puVar6;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t local_60;
  char local_58;
  int local_48;
  
  FUN_00e7bdb0();
  uVar4 = FUN_00e7bdb0();
  FUN_0124f500(0,uVar4);
  lVar1 = this_ptr[7];
  if (lVar1 == 0) {
    bVar3 = true;
  }
  else {
    local_58 = '\0';
    local_60 = 0;
    local_48 = -1;
    bVar3 = true;
    while( true ) {
      lVar5 = (int64_t)local_48;
      local_48 = local_48 + 1;
      if (*(int *)(lVar1 + 0xc) <= local_48) break;
      local_60 = *(int64_t *)(*(int64_t *)(lVar1 + 0x10) + 8 + lVar5 * 8);
      if (local_60 == *arg1) {
        bVar3 = false;
      }
      else {
        (**(code **)(*this_ptr + 0x378))();
      }
    }
    FUN_00083b20();
  }
  FUN_00c8e710();
  if ((local_58 == '\0') && (local_60 != 0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  FUN_00d64850();
  lVar1 = this_ptr[9];
  if (lVar1 != local_60) {
    if (local_60 != 0) {
      FUN_00d50b00();
    }
    this_ptr[9] = local_60;
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_00d64910();
  if (local_60 != 0) {
    FUN_00d50b20();
  }
  puVar6 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar6 = &g_02572358;
  (*g_02572370)();
  FUN_00d227e0();
  FUN_00d22760();
  FUN_00d227d0();
  FUN_00d21370();
  FUN_00d21140();
  FUN_00d64850();
  puVar2 = (void*)this_ptr[10];
  if (puVar2 != puVar6) {
    FUN_00d50b00();
    this_ptr[10] = (int64_t)puVar6;
    if (puVar2 != (void*)0x0) {
      FUN_00d50b20();
    }
  }
  FUN_00d64910();
  FUN_00d64850();
  FUN_00d216c0();
  if (*arg1 != 0) {
    FUN_00d21140();
  }
  FUN_00d64910();
  FUN_00d64850();
  *(void*)(this_ptr + 8) = 0;
  FUN_00d64910();
  if ((*arg1 != 0) && (bVar3)) {
    (**(code **)(*this_ptr + 0x370))();
  }
  FUN_00e7bdb0();
  uVar4 = FUN_00e7bdb0();
  FUN_0124f660(0,uVar4,0);
  FUN_00d50b20();
  return;
}



// ============================================================
// 0124f2e0
// ============================================================
// Function: FUN_0124f2e0
// Address: 0124f2e0
// Size: 523 bytes
// Class: MUChordSequence
// String references:
//   "MUChordSequence"
//   "MUSequence"
//   "_willChangeInRange"
//   "_didChangeInRange"
//   "vqqii"

void FUN_0124f2e0(void)

{
  int iVar1;
  
  FUN_010ec850();
  FUN_00e87cb0();
  // [STATIC_INIT: property registration]
  FUN_010ec850();
  FUN_00e87cc0();
  // [STATIC_INIT: property registration]
  FUN_010ec850();
  FUN_00e87cc0();
  // [STATIC_INIT: property registration]
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
  FUN_00e87c70();
  return;
}

