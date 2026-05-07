// Function: FUN_0152d930
// Address: 0152d930
// Size: 747 bytes
// Class: GNFraction


/* WARNING: Removing unreachable block (ram,0x0152d9dc) */

ulonglong FUN_0152d930(float param_1)

{
  bool bVar1;
  void *pvVar2;
  longlong lVar3;
  pthread_key_t in_ECX;
  pthread_key_t pVar4;
  longlong unaff_RDI;
  longlong *plVar5;
  float fVar6;
  ulonglong uVar7;
  longlong *local_50;
  char local_48;
  float local_34;
  
  if (*(longlong *)(unaff_RDI + 0x68) == 0) goto LAB_0152da11;
  pvVar2 = _pthread_getspecific(in_ECX);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01507e40();
  if (local_50 == (longlong *)0x0) {
    bVar1 = false;
    local_50 = (longlong *)0x0;
    if (local_48 != '\0') {
      bVar1 = false;
      local_50 = (longlong *)0x0;
    }
LAB_0152d9e1:
    if (local_50 == (longlong *)0x0) {
LAB_0152da11:
      pvVar2 = _pthread_getspecific(in_ECX);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar7 = FUN_0125a2c0();
      return uVar7;
    }
  }
  else {
    if (local_48 == '\0') {
      FUN_00d50b00();
      bVar1 = true;
      goto LAB_0152d9e1;
    }
    bVar1 = true;
  }
  pvVar2 = _pthread_getspecific(in_ECX);
  plVar5 = local_50;
  if ((pvVar2 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
    plVar5 = (longlong *)local_50[(ulonglong)(*(uint *)(lVar3 + 0x154) & 1) + 4];
  }
  pvVar2 = _pthread_getspecific(in_ECX);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01507f00();
  lVar3 = *plVar5;
  local_34 = (float)(**(code **)(lVar3 + 0x3a0))();
  pVar4 = (pthread_key_t)lVar3;
  if (param_1 <= 0.0) {
    if (0.0 <= param_1) goto LAB_0152dbed;
    pvVar2 = _pthread_getspecific(pVar4);
    plVar5 = local_50;
    if ((pvVar2 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
      plVar5 = (longlong *)local_50[(ulonglong)(*(uint *)(lVar3 + 0x154) & 1) + 4];
    }
    pvVar2 = _pthread_getspecific(pVar4);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01507f00();
    fVar6 = (float)(**(code **)(*plVar5 + 0x3a0))();
    fVar6 = (fVar6 - local_34) * param_1 * DAT_02390118;
  }
  else {
    pvVar2 = _pthread_getspecific(pVar4);
    plVar5 = local_50;
    if ((pvVar2 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
      plVar5 = (longlong *)local_50[(ulonglong)(*(uint *)(lVar3 + 0x154) & 1) + 4];
    }
    pvVar2 = _pthread_getspecific(pVar4);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01507f00();
    fVar6 = (float)(**(code **)(*plVar5 + 0x3a0))();
    fVar6 = (fVar6 - local_34) * param_1 * DAT_0239011c;
  }
  local_34 = local_34 + fVar6;
LAB_0152dbed:
  if ((bVar1) && (local_50 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  return (ulonglong)(uint)local_34;
}


