// Function: FUN_01508bf0
// Address: 01508bf0
// Size: 708 bytes
// Class: MUPart
// === MUPart properties ===
//   bool            _didRequestCacheValidation
//   bool            _isVoicingValid


uint64_t FUN_01508bf0(void* param_1)

{
  uint64_t uVar1;
  char cVar2;
  void *pvVar3;
  int extraout_var;
  int extraout_var_00;
  uint64_t uVar4;
  void* pVar5;
  int64_t this_ptr;
  uint64_t local_58;
  int iStack_4c;
  int64_t local_40;
  char local_38;
  
  local_58 = *(uint64_t *)(this_ptr + 0x38);
  uVar1 = *(void*)(this_ptr + 0x40);
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0150ff70();
  if ((local_38 == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
  }
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_016caaa0();
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_016caaa0();
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  pVar5 = 0;
  FUN_016c4630(0,1);
  pvVar3 = _pthread_getspecific(pVar5);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  pVar5 = 0;
  FUN_016c4630();
  FUN_00e7c260();
  iStack_4c = (int)((uint64_t)uVar1 >> 0x20);
  if (((((iStack_4c != 0) && (local_58 >> 0x20 != 0)) && (cVar2 = FUN_00e7c020(), cVar2 == '\0')) &&
      ((extraout_var_00 != 0 && (extraout_var != 0)))) && (cVar2 = FUN_00e7c020(), cVar2 != '\0')) {
    pvVar3 = _pthread_getspecific(pVar5);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar4 = FUN_016c4760();
    FUN_00e7b970();
    if ((uVar4 >> 0x20 != 0) && (cVar2 = FUN_00e7c6b0(), cVar2 == '\0')) {
      pvVar3 = _pthread_getspecific(pVar5);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_58 = FUN_016c4760();
    }
  }
  if (local_40 != 0) {
    FUN_00d50b20();
  }
  return local_58;
}

