// Function: FUN_01b90da0
// Address: 01b90da0
// Size: 1126 bytes
// Class: MUScaleModeSequence
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


void FUN_01b90da0(void* param_1,int64_t *param_2)

{
  int64_t *plVar1;
  int64_t lVar2;
  bool bVar3;
  int64_t lVar4;
  char cVar5;
  void *pvVar6;
  int64_t arg1;
  int64_t *this_ptr;
  int64_t lVar7;
  int64_t local_48;
  char local_40;
  
  plVar1 = (int64_t *)*param_2;
  FUN_0013de80();
  if (plVar1 == (int64_t *)0x0) {
LAB_01b90de8:
    param_2 = &g_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar5 = FUN_00e85ea0();
    if (cVar5 == '\0') goto LAB_01b90de8;
  }
  lVar2 = *param_2;
  lVar4 = param_2[1];
  if (((char)lVar4 != '\0') && (lVar2 != 0)) {
    FUN_00d50b00();
  }
  if (*(int64_t *)(arg1 + 0x1f8) == 0) {
LAB_01b90ece:
    bVar3 = false;
    lVar7 = 0;
  }
  else {
    FUN_00d50b00();
    FUN_00d50b20();
    lVar7 = *(int64_t *)(arg1 + 0x1f8);
    if (lVar7 != 0) {
      FUN_00d50b00();
    }
    pvVar6 = _pthread_getspecific(param_1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0150eb60();
    if (local_40 == '\0') {
      if (local_48 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_40 = '\0';
    }
    if (lVar7 != 0) {
      FUN_00d50b20();
    }
    if (local_48 == 0) goto LAB_01b90ece;
    pvVar6 = _pthread_getspecific(param_1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01822e80();
    if (local_48 == 0) {
      lVar7 = 0;
      bVar3 = false;
    }
    else {
      bVar3 = true;
      lVar7 = local_48;
      if (local_40 == '\0') {
        FUN_00d50b00();
      }
    }
    FUN_00d50b20();
  }
  FUN_01b91500();
  if (local_40 == '\0') {
    if (local_48 == 0) goto LAB_01b91091;
    FUN_00d50b00();
LAB_01b90f99:
    FUN_01246780();
    (**(code **)(**(int64_t **)(arg1 + 0x208) + 0x388))();
    if ((local_40 == '\0') && (local_48 != 0)) {
      FUN_00d50b00();
    }
    FUN_01246780();
    *this_ptr = local_48;
    *(void*)(this_ptr + 1) = 1;
    FUN_00d50b20();
  }
  else {
    if (local_48 != 0) goto LAB_01b90f99;
LAB_01b91091:
    if (lVar7 == 0) {
      *(void*)(this_ptr + 1) = 0;
      *this_ptr = 0;
      goto joined_r0x01b91165;
    }
    FUN_01246780();
    (**(code **)(**(int64_t **)(arg1 + 0x208) + 0x388))();
    if ((local_40 == '\0') && (local_48 != 0)) {
      FUN_00d50b00();
    }
    FUN_01246780();
    *this_ptr = local_48;
    *(void*)(this_ptr + 1) = 1;
  }
  if ((bVar3) && (lVar7 != 0)) {
    FUN_00d50b20();
  }
joined_r0x01b91165:
  if (((char)lVar4 != '\0') && (lVar2 != 0)) {
    FUN_00d50b20();
  }
  return;
}

