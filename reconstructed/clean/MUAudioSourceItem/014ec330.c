// Function: FUN_014ec330
// Address: 014ec330
// Size: 844 bytes
// Class: MUAudioSourceItem
// === MUAudioSourceItem properties ===
//   bool            _suggestsSeparateComponentRenderers
//                   _feedbackActivationQualityLimit
//                   _feebackUpperPitchLimit
//                   _feebackLowerPitchLimit
//                   _timeOffset


uint64_t FUN_014ec330(void*param_1,void*param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint32_t uVar4;
  void *pvVar5;
  int64_t lVar6;
  void* pVar7;
  int64_t *plVar8;
  int64_t *arg1;
  int64_t *this_ptr;
  
  pVar7 = (void*)param_1;
  plVar8 = (int64_t *)*arg1;
  pvVar5 = _pthread_getspecific(pVar7);
  if (pvVar5 != (void *)0x0) {
    plVar8 = (int64_t *)*arg1;
    lVar6 = FUN_00e8b990();
    if (lVar6 != 0) {
      plVar8 = (int64_t *)plVar8[(uint64_t)(*(uint *)(lVar6 + 0x154) & 1) + 4];
    }
  }
  cVar1 = (**(code **)(*plVar8 + 1000))();
  iVar3 = -1;
  if ((cVar1 != '\0') && (lVar6 = **(int64_t **)(plVar8[0x21] + 0x10), lVar6 != 0)) {
    FUN_00d50b00();
    iVar3 = *(int *)(lVar6 + 0xc);
    FUN_00d50b20();
  }
  iVar2 = FUN_014c2f80();
  if (iVar3 <= iVar2) {
    pvVar5 = _pthread_getspecific(pVar7);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    iVar2 = FUN_014c2f80();
    cVar1 = (**(code **)(*this_ptr + 1000))();
    iVar3 = -1;
    if ((cVar1 != '\0') && (lVar6 = **(int64_t **)(this_ptr[0x21] + 0x10), lVar6 != 0)) {
      FUN_00d50b00();
      iVar3 = *(int *)(lVar6 + 0xc);
      FUN_00d50b20();
    }
    if (iVar3 <= iVar2) {
      plVar8 = (int64_t *)*arg1;
      pvVar5 = _pthread_getspecific(pVar7);
      if (pvVar5 != (void *)0x0) {
        plVar8 = (int64_t *)*arg1;
        lVar6 = FUN_00e8b990();
        if (lVar6 != 0) {
          plVar8 = (int64_t *)plVar8[(uint64_t)(*(uint *)(lVar6 + 0x154) & 1) + 4];
        }
      }
      cVar1 = (**(code **)(*plVar8 + 1000))();
      iVar2 = -1;
      iVar3 = -1;
      if (cVar1 != '\0') {
        lVar6 = **(int64_t **)(plVar8[0x21] + 0x10);
        iVar3 = -1;
        if (lVar6 != 0) {
          FUN_00d50b00();
          iVar3 = *(int *)(lVar6 + 0xc);
          FUN_00d50b20();
        }
      }
      cVar1 = (**(code **)(*this_ptr + 1000))();
      if ((cVar1 != '\0') && (lVar6 = **(int64_t **)(this_ptr[0x21] + 0x10), lVar6 != 0)) {
        FUN_00d50b00();
        iVar2 = *(int *)(lVar6 + 0xc);
        FUN_00d50b20();
      }
      if (iVar2 < iVar3) {
        plVar8 = (int64_t *)*arg1;
        pvVar5 = _pthread_getspecific(pVar7);
        if (pvVar5 != (void *)0x0) {
          plVar8 = (int64_t *)*arg1;
          lVar6 = FUN_00e8b990();
          if (lVar6 != 0) {
            plVar8 = (int64_t *)plVar8[(uint64_t)(*(uint *)(lVar6 + 0x154) & 1) + 4];
          }
        }
        cVar1 = (**(code **)(*plVar8 + 1000))();
        uVar4 = 0xffffffff;
        if ((cVar1 != '\0') && (lVar6 = **(int64_t **)(plVar8[0x21] + 0x10), lVar6 != 0)) {
          FUN_00d50b00();
          uVar4 = *(void*)(lVar6 + 0xc);
          FUN_00d50b20();
        }
      }
      else {
        cVar1 = (**(code **)(*this_ptr + 1000))();
        uVar4 = 0xffffffff;
        if ((cVar1 != '\0') && (lVar6 = **(int64_t **)(this_ptr[0x21] + 0x10), lVar6 != 0)) {
          FUN_00d50b00();
          uVar4 = *(void*)(lVar6 + 0xc);
          FUN_00d50b20();
        }
      }
      *param_2 = uVar4;
      pvVar5 = _pthread_getspecific(pVar7);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      iVar3 = FUN_014c2f80();
      iVar2 = FUN_014c2f80();
      if ((iVar3 < iVar2) && (pvVar5 = _pthread_getspecific(pVar7), pvVar5 != (void *)0x0)) {
        FUN_00e8b990();
      }
      uVar4 = FUN_014c2f80();
      *param_1 = uVar4;
      return 1;
    }
  }
  return 0;
}

