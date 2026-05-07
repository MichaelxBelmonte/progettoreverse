// Function: FUN_01366cc0
// Address: 01366cc0
// Size: 848 bytes
// Class: MUAudioSourceDescription


undefined8 FUN_01366cc0(pthread_key_t param_1)

{
  char cVar1;
  void *pvVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  double dVar7;
  double dVar8;
  double local_68;
  longlong local_60;
  char local_58;
  double local_48;
  double local_40;
  
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_48 = (double)FUN_013de8d0();
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_40 = (double)FUN_013de9b0();
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  cVar1 = FUN_013dee00();
  if (cVar1 == '\0') {
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    cVar1 = FUN_013dee60();
    if (cVar1 != '\0') {
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      lVar3 = FUN_013ded30();
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      lVar4 = FUN_013de790();
      if (DAT_023942d0 < (double)lVar3 / (double)lVar4) {
        return 0;
      }
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013df480();
      pvVar2 = _pthread_getspecific(param_1);
      lVar3 = local_60;
      if ((pvVar2 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
        lVar3 = *(longlong *)(local_60 + 0x20 + (ulonglong)(*(uint *)(lVar4 + 0x154) & 1) * 8);
      }
      plVar6 = *(longlong **)(lVar3 + 0x38);
      if (plVar6 == (longlong *)0x0) {
        local_68 = 0.0;
      }
      else {
        pvVar2 = _pthread_getspecific(param_1);
        if (pvVar2 != (void *)0x0) {
          plVar6 = *(longlong **)(lVar3 + 0x38);
          lVar3 = FUN_00e8b990();
          if (lVar3 != 0) {
            plVar6 = (longlong *)plVar6[(ulonglong)(*(uint *)(lVar3 + 0x154) & 1) + 4];
          }
        }
        local_68 = (double)(**(code **)(*plVar6 + 0x370))();
      }
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      lVar3 = FUN_013ded30();
      dVar7 = (double)lVar3 / local_68 + DAT_0240d3e0;
      dVar8 = 0.0;
      if (0.0 <= dVar7) {
        dVar8 = dVar7;
      }
      local_48 = local_48 + dVar8;
      local_40 = local_40 - dVar8;
    }
  }
  uVar5 = FUN_013676b0(local_48,local_40);
  return uVar5;
}


