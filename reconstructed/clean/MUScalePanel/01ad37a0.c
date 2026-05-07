// Function: FUN_01ad37a0
// Address: 01ad37a0
// Size: 1150 bytes
// Class: MUScalePanel
// === MUScalePanel properties ===
//                   _scaleRulerView
//                   _cycleSizeField
//                   _degreesDistanceField
//                   _scaleNameField


void FUN_01ad37a0(void* param_1)

{
  int64_t *plVar1;
  int64_t *plVar2;
  int64_t lVar3;
  char cVar4;
  int iVar5;
  void *pvVar6;
  int64_t *this_ptr;
  int64_t **pplVar7;
  bool bVar8;
  float fVar9;
  uint32_t uVar10;
  int64_t *local_48;
  char local_40;
  float local_38;
  float local_34;
  
  if ((int64_t *)this_ptr[0x44] != (int64_t *)0x0) {
    if ((int)this_ptr[0x32] == -1000000) {
      (**(code **)(*(int64_t *)this_ptr[0x44] + 0x928))(0);
      FUN_01b2fee0(0);
      FUN_01b2fef0(0);
      FUN_01b2fea0();
    }
    else {
      FUN_01ad3cb0();
      plVar2 = local_48;
      if ((local_40 == '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b00();
      }
      pvVar6 = _pthread_getspecific(param_1);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_38 = (float)FUN_01742280();
      pvVar6 = _pthread_getspecific(param_1);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_34 = (float)FUN_01742280();
      plVar1 = (int64_t *)this_ptr[0x44];
      _exp2f((local_38 - local_34) * g_023941f4);
      (**(code **)(*plVar1 + 0x928))();
      pvVar6 = _pthread_getspecific(param_1);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      fVar9 = (float)FUN_01742280();
      _exp2f(((fVar9 + g_02394248) - local_34) * g_023941f4);
      FUN_01b2fef0();
      pvVar6 = _pthread_getspecific(param_1);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      fVar9 = (float)FUN_01742280();
      _exp2f(((fVar9 + g_023908ec) - local_34) * g_023941f4);
      FUN_01b2fee0();
      FUN_01b2fea0();
      lVar3 = this_ptr[0x32];
      pvVar6 = _pthread_getspecific(param_1);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      iVar5 = FUN_01743090(local_38);
      if ((int)lVar3 == iVar5) {
        FUN_01b2fec0();
        pvVar6 = _pthread_getspecific(param_1);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        fVar9 = (float)FUN_01742280();
        _exp2f(((fVar9 + g_02394248) - local_34) * g_023941f4);
        FUN_01b2ff00();
        pvVar6 = _pthread_getspecific(param_1);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        fVar9 = (float)FUN_01742280();
        _exp2f(((fVar9 + g_02394248) - local_34) * g_023941f4);
        FUN_01b2ff10();
      }
      else {
        FUN_01b2fec0();
      }
      uVar10 = FUN_01b2fe70();
      *(void*)(this_ptr + 0x50) = uVar10;
      if (plVar2 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
    }
    (**(code **)(*(int64_t *)this_ptr[0x44] + 0x998))();
  }
  if ((int)this_ptr[0x32] == -1000000) {
    bVar8 = false;
  }
  else {
    bVar8 = (int)this_ptr[0x32] != *(int *)((int64_t)this_ptr + 0x184);
  }
  pplVar7 = &local_48;
  (**(code **)(*this_ptr + 0x7b8))();
  plVar2 = local_48;
  FUN_00074a70();
  if (plVar2 != (int64_t *)0x0) {
    (**(code **)(*plVar2 + 0x360))();
    cVar4 = FUN_00e85ea0();
    if (cVar4 != '\0') goto LAB_01ad3bb4;
  }
  pplVar7 = (int64_t **)&g_02802688;
LAB_01ad3bb4:
  plVar2 = *pplVar7;
  if (*(char *)(pplVar7 + 1) == '\0') {
    if (plVar2 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar7 + 1) = 0;
  }
  if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar2 != (int64_t *)0x0) {
    if (bVar8) {
      (**(code **)(*plVar2 + 0x960))();
    }
    else {
      (**(code **)(*plVar2 + 0x968))();
    }
    FUN_00d50b20();
  }
  return;
}

