// Function: FUN_01c62da0
// Address: 01c62da0
// Size: 738 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


uint64_t FUN_01c62da0(uint32_t param_1)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t *plVar3;
  char cVar4;
  int iVar5;
  void *pvVar6;
  uint64_t uVar7;
  void* in_ECX;
  int64_t this_ptr;
  int64_t local_78;
  char local_70;
  
  lVar1 = *(int64_t *)PTR____stack_chk_guard_024a9898;
  if ((((*(int *)(this_ptr + 0x1c8) == 1) && (iVar5 = FUN_01d3a5a0(), iVar5 == 1)) &&
      (iVar5 = FUN_01d3b620(), iVar5 == 2)) &&
     ((iVar5 = FUN_01d3b630(), iVar5 == 1 && (cVar4 = FUN_01c619e0(param_1), cVar4 == '\0')))) {
    FUN_00d50b00();
    FUN_01c427d0();
    lVar2 = *(int64_t *)(this_ptr + 0x188);
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    FUN_016cbba0();
    if ((local_70 == '\0') && (local_78 != 0)) {
      FUN_00d50b00();
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    lVar2 = *(int64_t *)(this_ptr + 0x188);
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    pvVar6 = _pthread_getspecific(in_ECX);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    plVar3 = *(int64_t **)(this_ptr + 0x170);
    if (plVar3 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    (**(code **)(*plVar3 + 0x388))(param_1);
    cVar4 = FUN_016fdd30();
    FUN_00d50b20();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    if (cVar4 != '\0') {
      FUN_01c4df60();
      FUN_01c62c70();
      if (*(int64_t *)(this_ptr + 0x188) != 0) {
        FUN_00d50b00();
        pvVar6 = _pthread_getspecific(in_ECX);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_016c1150();
        FUN_00d50b20();
      }
      if (local_78 != 0) {
        FUN_00d50b20();
      }
      FUN_01c429a0();
      FUN_00d50b20();
      uVar7 = 1;
      lVar2 = *(int64_t *)PTR____stack_chk_guard_024a9898;
      goto joined_r0x01c63077;
    }
    if (local_78 != 0) {
      FUN_00d50b20();
    }
    FUN_01c429a0();
    FUN_00d50b20();
  }
  uVar7 = 0;
  lVar2 = *(int64_t *)PTR____stack_chk_guard_024a9898;
joined_r0x01c63077:
  if (lVar2 != lVar1) {
                        ___stack_chk_fail();
  }
  return uVar7;
}

