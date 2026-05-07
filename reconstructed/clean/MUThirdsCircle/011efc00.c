// Function: FUN_011efc00
// Address: 011efc00
// Size: 753 bytes
// Class: MUThirdsCircle
// === MUThirdsCircle properties ===
//                   _thirdsCircleValues
//                   _chordExtension
//                   _fundamentalPitchClass
//                   _matchQuality


void* FUN_011efc00(void* param_1)

{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t *plVar3;
  char cVar4;
  void *pvVar5;
  int64_t arg1;
  void*this_ptr;
  int64_t *plVar6;
  int64_t **pplVar7;
  int64_t local_a0;
  char local_98;
  int64_t *local_40;
  char local_38;
  
  plVar6 = *(int64_t **)(arg1 + 0x98);
  if (plVar6 == (int64_t *)0x0) {
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_00d4efa0();
    FUN_00c7e7b0();
    plVar6 = local_40;
    if (local_38 == '\0') {
      if (local_40 == (int64_t *)0x0) {
        plVar6 = (int64_t *)0x0;
      }
      else {
        FUN_00d50b00();
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    else {
      local_38 = '\0';
    }
    if ((local_98 != '\0') && (local_a0 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
    FUN_00d50b00();
  }
  FUN_01e51a60();
  plVar3 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != (int64_t *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
       (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  lVar2 = g_026d83d0;
  if (g_026d83d0 != 0) {
    FUN_00d50b00();
  }
  pplVar7 = &local_40;
  FUN_01e57490();
  plVar1 = local_40;
  FUN_00081d60();
  if (plVar1 == (int64_t *)0x0) {
    pplVar7 = &g_02802688;
    plVar1 = g_02802688;
    cVar4 = g_02802690;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar4 = FUN_00e85ea0();
    if (cVar4 == '\0') {
      pplVar7 = &g_02802688;
    }
    plVar1 = *pplVar7;
    cVar4 = *(char *)(pplVar7 + 1);
  }
  if (cVar4 == '\0') {
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar7 + 1) = 0;
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if (plVar1 == (int64_t *)0x0) {
    *this_ptr = plVar3;
    *(void*)(this_ptr + 1) = 1;
  }
  else {
    FUN_01d2a770();
    *this_ptr = plVar3;
    *(void*)(this_ptr + 1) = 1;
    FUN_00d50b20();
  }
  if (plVar6 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return this_ptr;
}

