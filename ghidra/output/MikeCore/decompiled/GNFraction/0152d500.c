// Function: FUN_0152d500
// Address: 0152d500
// Size: 981 bytes
// Class: GNFraction


float FUN_0152d500(pthread_key_t param_1)

{
  void *pvVar1;
  longlong lVar2;
  pthread_key_t pVar3;
  longlong unaff_RDI;
  longlong *plVar4;
  longlong *plVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  longlong *local_48;
  char local_40;
  float local_34;
  
  if (*(longlong *)(unaff_RDI + 0x68) == 0) {
    return 0.0;
  }
  pvVar1 = _pthread_getspecific(param_1);
  if (pvVar1 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01507e40();
  if (local_48 == (longlong *)0x0) {
    plVar5 = (longlong *)0x0;
  }
  else {
    plVar5 = local_48;
    if (local_40 != '\0') goto LAB_0152d5a9;
    FUN_00d50b00();
  }
  if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar5 == (longlong *)0x0) {
    return 0.0;
  }
LAB_0152d5a9:
  pvVar1 = _pthread_getspecific(param_1);
  plVar4 = plVar5;
  if ((pvVar1 != (void *)0x0) && (lVar2 = FUN_00e8b990(), lVar2 != 0)) {
    plVar4 = (longlong *)plVar5[(ulonglong)(*(uint *)(lVar2 + 0x154) & 1) + 4];
  }
  pvVar1 = _pthread_getspecific(param_1);
  if (pvVar1 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01507f00();
  lVar2 = *plVar4;
  fVar6 = (float)(**(code **)(lVar2 + 0x3a0))();
  pVar3 = (pthread_key_t)lVar2;
  pvVar1 = _pthread_getspecific(pVar3);
  if (pvVar1 != (void *)0x0) {
    FUN_00e8b990();
  }
  fVar7 = (float)FUN_0125a2c0();
  if (fVar7 <= fVar6) {
    pvVar1 = _pthread_getspecific(pVar3);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    fVar7 = (float)FUN_0125a2c0();
    local_34 = 0.0;
    if (fVar7 < fVar6) {
      pvVar1 = _pthread_getspecific(pVar3);
      if ((pvVar1 != (void *)0x0) && (lVar2 = FUN_00e8b990(), lVar2 != 0)) {
        plVar5 = (longlong *)plVar5[(ulonglong)(*(uint *)(lVar2 + 0x154) & 1) + 4];
      }
      pvVar1 = _pthread_getspecific(pVar3);
      if (pvVar1 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01507f00();
      lVar2 = *plVar5;
      fVar7 = (float)(**(code **)(lVar2 + 0x3a0))();
      pvVar1 = _pthread_getspecific((pthread_key_t)lVar2);
      if (pvVar1 != (void *)0x0) {
        FUN_00e8b990();
      }
      fVar8 = (float)FUN_0125a2c0();
      local_34 = ((fVar8 - fVar6) / (fVar7 - fVar6)) * DAT_023b1608;
    }
  }
  else {
    pvVar1 = _pthread_getspecific(pVar3);
    if ((pvVar1 != (void *)0x0) && (lVar2 = FUN_00e8b990(), lVar2 != 0)) {
      plVar5 = (longlong *)plVar5[(ulonglong)(*(uint *)(lVar2 + 0x154) & 1) + 4];
    }
    pvVar1 = _pthread_getspecific(pVar3);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01507f00();
    lVar2 = *plVar5;
    fVar7 = (float)(**(code **)(lVar2 + 0x3a0))();
    pvVar1 = _pthread_getspecific((pthread_key_t)lVar2);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    fVar8 = (float)FUN_0125a2c0();
    local_34 = (fVar8 - fVar6) / (fVar7 - fVar6);
    local_34 = local_34 + local_34;
  }
  if (local_48 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return local_34;
}


