// Function: FUN_01a6e330
// Address: 01a6e330
// Size: 970 bytes
// Class: MUChord
// === MUChord properties ===
//                   _tonic
//                   _tuning
//                   _scale
//                   _pitchClasses
//                   _audioSource
//                   _parameterSet


void FUN_01a6e330(void* param_1,uint64_t param_2)

{
  int64_t *plVar1;
  void *pvVar2;
  uint64_t arg1;
  int64_t *this_ptr;
  int64_t local_70;
  char local_68;
  int64_t local_50;
  char local_48;
  int64_t *local_40;
  char local_38;
  
  plVar1 = local_40;
  (**(code **)(*this_ptr + 0x988))();
  if (local_38 == '\0') {
    if (local_40 == (int64_t *)0x0) {
      return;
    }
    FUN_00d50b00();
  }
  else if (local_40 == (int64_t *)0x0) {
    return;
  }
  if (*(int *)((int64_t)local_40 + 0xc) != 0) {
    FUN_01787610();
    if ((local_38 == '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b00();
    }
    (**(code **)(*local_40 + 0x370))();
    FUN_017879e0();
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01a6cc80();
    FUN_017873f0();
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_017879e0();
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01a6cd50();
    FUN_01787450();
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_017879e0();
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01a6ce30();
    FUN_01787510();
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    (**(code **)(*this_ptr + 0xa48))();
    if ((arg1 >> 0x20 == 0) && (param_2 >> 0x20 == 0)) {
      FUN_01a66e80();
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_38 = '\0';
      local_40 = (int64_t *)0x0;
      FUN_0124f820();
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
    }
    FUN_01a66e80();
    if ((local_38 == '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b00();
    }
    local_70 = 0;
    local_68 = '\0';
    (**(code **)(*plVar1 + 0x390))(param_2,arg1,&local_70,0);
    if (local_48 == '\0') {
      if (local_50 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_48 = '\0';
    }
    FUN_01a6e170(param_2,arg1);
    if (local_50 != 0) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    (**(code **)(*this_ptr + 0xa50))();
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}

