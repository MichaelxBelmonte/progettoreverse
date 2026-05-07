// Function: FUN_01b91500
// Address: 01b91500
// Size: 641 bytes
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


int64_t * FUN_01b91500(uint64_t param_1,int64_t *param_2)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  char cVar4;
  void *pvVar5;
  uint64_t uVar6;
  int64_t arg1;
  int64_t *this_ptr;
  int64_t local_68;
  char local_60;
  int64_t local_40;
  char local_38;
  
  if (*(int64_t *)(arg1 + 0x1f8) == 0) {
LAB_01b916e8:
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
    return this_ptr;
  }
  FUN_00d50b00();
  FUN_00d50b20();
  lVar1 = *(int64_t *)(arg1 + 0x1f8);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  pvVar5 = _pthread_getspecific((void*)param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01510d50();
  lVar2 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  local_38 = '\0';
  local_40 = 0;
  do {
    do {
      pvVar5 = _pthread_getspecific((void*)param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar6 = FUN_00e7bdb0();
      param_1 = FUN_00e7bdb0();
      cVar4 = FUN_01252960(param_1,uVar6,&local_40,0);
      if (cVar4 == '\0') {
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        goto LAB_01b916e8;
      }
    } while (local_40 == 0);
    pvVar5 = _pthread_getspecific((void*)param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0173b6f0();
    lVar1 = *param_2;
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    lVar3 = local_40;
  } while (local_68 != lVar1);
  *(void*)(this_ptr + 1) = 0;
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
      *this_ptr = lVar3;
      *(void*)(this_ptr + 1) = 1;
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      goto LAB_01b91721;
    }
    *this_ptr = 0;
  }
  else {
    *this_ptr = local_40;
  }
  *(void*)(this_ptr + 1) = 1;
LAB_01b91721:
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  return this_ptr;
}

