// Function: FUN_01691640
// Address: 01691640
// Size: 726 bytes
// Class: MUAraPlugInWrapperDelegate
// String references:
//   "regionSequence->getDocumentController() == plugInWrapper->_documentController"
//   "regionSequenceRefs != NULL"
//   "provided object ref is invalid"
//   "call required from document main thread"
// === MUAraPlugInWrapperDelegate properties ===
//                   _cacheWarmUpDoWarmUp
//                   _cacheWarmUpLastStartTime
//                   _hostPlaybackParamsLastStartTime
//                   _cachedLastStartTimeRanges


void FUN_01691640(void* param_1,int64_t param_2)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t lVar4;
  char cVar5;
  void *pvVar6;
  int64_t arg1;
  int64_t this_ptr;
  int64_t lVar7;
  int64_t local_70;
  char local_68;
  int64_t local_48;
  char local_40;
  
  lVar3 = local_48;
  FUN_00da7190();
  if ((this_ptr == 0) || (*(int64_t *)(this_ptr + 0x28) == 0)) {
    FUN_016aea20();
    goto LAB_0169190c;
  }
  FUN_00d50b00();
  cVar5 = FUN_0168a0d0();
  if (cVar5 == '\0') {
    FUN_016aea20();
  }
  else {
    FUN_00323290();
    if ((local_40 == '\0') && (local_48 != 0)) {
      FUN_00d50b00();
    }
    if (arg1 == 0) {
LAB_01691888:
      FUN_01691a70();
    }
    else {
      if (param_2 != 0) {
        lVar7 = 0;
        do {
          lVar4 = local_48;
          if ((*(int64_t *)(param_2 + lVar7 * 8) == 0) || (cVar5 = FUN_012c91b0(), cVar5 == '\0'))
          {
            FUN_016aea20();
            goto LAB_016918f7;
          }
          lVar1 = *(int64_t *)(param_2 + lVar7 * 8);
          if (lVar1 != 0) {
            FUN_00d50b00();
          }
          pvVar6 = _pthread_getspecific(param_1);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012c89b0();
          lVar2 = *(int64_t *)(this_ptr + 0x98);
          if ((local_40 != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
          if (local_48 == lVar2) {
            pvVar6 = _pthread_getspecific(param_1);
            if (pvVar6 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_012c8f20();
            if (local_68 == '\0') {
              if (local_70 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_68 = '\0';
            }
            local_48 = local_70;
            local_40 = '\0';
            FUN_00d21140();
            if (local_70 != 0) {
              FUN_00d50b20();
            }
            if ((local_68 != '\0') && (local_70 != 0)) {
              FUN_00d50b20();
            }
          }
          else {
            FUN_016aea20();
          }
          if (lVar1 != 0) {
            FUN_00d50b20();
          }
          if (lVar4 != lVar2) goto LAB_016918f7;
          lVar7 = lVar7 + 1;
        } while (arg1 != lVar7);
        goto LAB_01691888;
      }
      FUN_016aea20();
    }
LAB_016918f7:
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_00d50b20();
LAB_0169190c:
  FUN_00da71b0();
  return;
}

