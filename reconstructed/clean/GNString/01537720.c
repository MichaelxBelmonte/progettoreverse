// Function: FUN_01537720
// Address: 01537720
// Size: 528 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_01537720(void)

{
  int64_t *plVar1;
  char cVar2;
  int64_t *plVar3;
  int64_t this_ptr;
  int64_t *local_30;
  char local_28;
  
  FUN_00003020();
  FUN_00d91a70();
  plVar1 = *(int64_t **)(this_ptr + 0x60);
  plVar3 = plVar1;
  if (plVar1 != local_30) {
    plVar3 = local_30;
    if (local_28 == '\0') {
      if (local_30 == (int64_t *)0x0) {
        plVar3 = (int64_t *)0x0;
        goto LAB_01537760;
      }
      FUN_00d50b00();
      plVar1 = *(int64_t **)(this_ptr + 0x60);
      *(int64_t **)(this_ptr + 0x60) = local_30;
    }
    else {
      local_28 = '\0';
LAB_01537760:
      *(int64_t **)(this_ptr + 0x60) = plVar3;
    }
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b20();
      plVar3 = local_30;
    }
  }
  if ((local_28 != '\0') && (plVar3 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00003060();
  FUN_00d91a70();
  plVar1 = *(int64_t **)(this_ptr + 0x68);
  plVar3 = plVar1;
  if (plVar1 != local_30) {
    plVar3 = local_30;
    if (local_28 == '\0') {
      if (local_30 == (int64_t *)0x0) {
        plVar3 = (int64_t *)0x0;
        goto LAB_015377df;
      }
      FUN_00d50b00();
      plVar1 = *(int64_t **)(this_ptr + 0x68);
      *(int64_t **)(this_ptr + 0x68) = local_30;
    }
    else {
      local_28 = '\0';
LAB_015377df:
      *(int64_t **)(this_ptr + 0x68) = plVar3;
    }
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b20();
      plVar3 = local_30;
    }
  }
  if ((local_28 != '\0') && (plVar3 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00003010();
  FUN_00d91a70();
  plVar1 = *(int64_t **)(this_ptr + 0x70);
  plVar3 = plVar1;
  if (plVar1 == local_30) goto LAB_015378a0;
  plVar3 = local_30;
  if (local_28 == '\0') {
    if (local_30 == (int64_t *)0x0) {
      plVar3 = (int64_t *)0x0;
      goto LAB_0153785e;
    }
    FUN_00d50b00();
    plVar1 = *(int64_t **)(this_ptr + 0x70);
    *(int64_t **)(this_ptr + 0x70) = local_30;
  }
  else {
    local_28 = '\0';
LAB_0153785e:
    *(int64_t **)(this_ptr + 0x70) = plVar3;
  }
  if (plVar1 != (int64_t *)0x0) {
    FUN_00d50b20();
    plVar3 = local_30;
  }
LAB_015378a0:
  if ((local_28 != '\0') && (plVar3 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01f27fe0();
  cVar2 = (**(code **)(*local_30 + 0x550))();
  if ((local_28 != '\0') && (local_30 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar2 != '\0') {
    *(void*)(this_ptr + 0x78) = 1;
  }
  FUN_00d630e0();
  return;
}

