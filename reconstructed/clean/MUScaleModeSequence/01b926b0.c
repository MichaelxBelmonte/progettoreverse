// Function: FUN_01b926b0
// Address: 01b926b0
// Size: 909 bytes
// Class: MUScaleModeSequence
// String references:
//   "_scaleModeSequence"
// === MUScaleModeSequence properties ===
//   bool            _isCyclic
//   GNInt           _fundamentalIndex
//   bool            _modeOffsetIsLocked
//   GNInt           _modeFundamentalOffset
//   GNInt           _modeFundamentalFifthsDirection
//   MUDescriptionGrade _descriptionGrade
//                   _scaleMode
//                   _endTime
//                   _startQuarter
//                   _endQuarter
//                   _doUpdate


void FUN_01b926b0(void* param_1)

{
  int64_t lVar1;
  int64_t lVar2;
  void *pvVar3;
  int64_t lVar4;
  void* pVar5;
  int64_t *arg1;
  int64_t this_ptr;
  int64_t local_88;
  char local_80;
  int64_t local_48;
  char local_40;
  int64_t local_38;
  char local_30;
  
  if (*(int64_t *)(this_ptr + 0x1f8) == *arg1) {
    return;
  }
  if (*(int64_t *)(this_ptr + 0x1f8) != 0) {
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    (**(code **)(*(int64_t *)(this_ptr + 0x138) + 0x10))();
    FUN_00d50b00();
    FUN_0013db50();
    lVar4 = FUN_00e85ef0();
    if (lVar4 == 0) {
      lVar4 = FUN_00e858c0();
      if ((lVar4 == 0) || (lVar4 = *(int64_t *)(lVar4 + 0x28), lVar4 == 0)) goto LAB_01b927a0;
LAB_01b92792:
      FUN_00d50b00();
    }
    else {
      lVar4 = *(int64_t *)(lVar4 + 0x30);
      if (lVar4 != 0) goto LAB_01b92792;
LAB_01b927a0:
      lVar4 = 0;
    }
    FUN_00e8b9a0();
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
    if ((int64_t *)(this_ptr + 0x138) != (int64_t *)0x0) {
      (**(code **)(*(int64_t *)(this_ptr + 0x138) + 0x10))();
      FUN_00d50b20();
    }
  }
  lVar4 = *arg1;
  lVar1 = *(int64_t *)(this_ptr + 0x1f8);
  lVar2 = lVar1;
  if (lVar1 != lVar4) {
    if (lVar4 != 0) {
      FUN_00d50b00();
    }
    *(int64_t *)(this_ptr + 0x1f8) = lVar4;
    lVar2 = lVar4;
    if (lVar1 != 0) {
      FUN_00d50b20();
      lVar2 = *(int64_t *)(this_ptr + 0x1f8);
    }
  }
  if (lVar2 == 0) {
    local_38 = 0;
    local_30 = '\0';
    FUN_01b6d800();
    if (local_30 == '\0') {
      return;
    }
    if (local_38 != 0) {
      FUN_00d50b20();
      return;
    }
    return;
  }
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  (**(code **)(*(int64_t *)(this_ptr + 0x138) + 0x10))();
  FUN_00d50b00();
  FUN_0013db50();
  lVar4 = FUN_00e85ef0();
  if (lVar4 == 0) {
    lVar4 = FUN_00e858c0();
    if (lVar4 != 0) {
      lVar4 = *(int64_t *)(lVar4 + 0x28);
      goto joined_r0x01b92927;
    }
  }
  else {
    lVar4 = *(int64_t *)(lVar4 + 0x30);
joined_r0x01b92927:
    if (lVar4 != 0) {
      local_40 = 0;
      FUN_00d50b00();
      goto LAB_01b92939;
    }
  }
  lVar4 = 0;
LAB_01b92939:
  local_40 = '\x01';
  pVar5 = 0x10;
  local_48 = lVar4;
  FUN_00e8b850(0x10,&local_48);
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if ((int64_t *)(this_ptr + 0x138) != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)(this_ptr + 0x138) + 0x10))();
    FUN_00d50b20();
  }
  pvVar3 = _pthread_getspecific(pVar5);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01510030();
  if (local_80 == '\0') {
    if (local_88 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_80 = '\0';
  }
  local_38 = local_88;
  local_30 = '\0';
  FUN_01b6d800();
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  if (local_88 != 0) {
    FUN_00d50b20();
  }
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  return;
}

