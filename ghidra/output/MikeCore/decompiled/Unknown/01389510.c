// Function: FUN_01389510
// Address: 01389510
// Size: 1104 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x013898d4) */
/* WARNING: Removing unreachable block (ram,0x013898dd) */
/* WARNING: Removing unreachable block (ram,0x013895ab) */
/* WARNING: Removing unreachable block (ram,0x013895b4) */
/* WARNING: Removing unreachable block (ram,0x0138962c) */
/* WARNING: Removing unreachable block (ram,0x01389635) */

void FUN_01389510(longlong *param_1,int param_2)

{
  pthread_key_t pVar1;
  undefined8 *puVar2;
  char cVar3;
  void *pvVar4;
  longlong lVar5;
  undefined8 *puVar6;
  pthread_key_t pVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong unaff_RDI;
  longlong *plVar10;
  longlong *local_50;
  char local_48;
  
  plVar8 = param_1;
  cVar3 = FUN_01334f30();
  if (cVar3 == '\0') {
    return;
  }
  pvVar4 = _pthread_getspecific((pthread_key_t)plVar8);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0125e7c0();
  if (local_48 == '\0') {
    if (local_50 == (longlong *)0x0) {
      return;
    }
    FUN_00d50b00();
  }
  else if (local_50 == (longlong *)0x0) {
    return;
  }
  pvVar4 = _pthread_getspecific((pthread_key_t)plVar8);
  if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
    plVar8 = local_50;
  }
  FUN_013de560();
  if (local_48 == '\0') {
    if (local_50 == (longlong *)0x0) goto LAB_013898ea;
    FUN_00d50b00();
  }
  else if (local_50 == (longlong *)0x0) goto LAB_013898ea;
  plVar10 = (longlong *)0x0;
  if (-1 < (longlong)param_1) {
    plVar10 = param_1;
  }
  pvVar4 = _pthread_getspecific((pthread_key_t)plVar8);
  plVar9 = local_50;
  if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
    plVar8 = local_50;
    plVar9 = (longlong *)local_50[(ulonglong)(*(uint *)(lVar5 + 0x154) & 1) + 4];
  }
  lVar5 = (**(code **)(*plVar9 + 0x388))();
  pVar7 = (pthread_key_t)plVar8;
  plVar9 = (longlong *)0x7fffffffffffffff;
  if ((longlong)plVar10 < lVar5) {
    plVar9 = plVar10;
  }
  pVar1 = (pthread_key_t)local_50;
  if (param_2 == 2) {
    pvVar4 = _pthread_getspecific(pVar7);
    if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
      plVar8 = local_50;
      local_50 = (longlong *)local_50[(ulonglong)(*(uint *)(lVar5 + 0x154) & 1) + 4];
    }
    pVar7 = (pthread_key_t)plVar8;
    lVar5 = (**(code **)(*local_50 + 0x3b0))();
    if ((longlong)plVar9 <= lVar5) {
      pvVar4 = _pthread_getspecific(pVar7);
      if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
        pVar7 = pVar1;
      }
      FUN_014bd0d0();
    }
    pvVar4 = _pthread_getspecific(pVar7);
    if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
      pVar7 = pVar1;
    }
    FUN_014bd130();
  }
  else if (param_2 == 1) {
    pvVar4 = _pthread_getspecific(pVar7);
    if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
      plVar8 = local_50;
      local_50 = (longlong *)local_50[(ulonglong)(*(uint *)(lVar5 + 0x154) & 1) + 4];
    }
    pVar7 = (pthread_key_t)plVar8;
    lVar5 = (**(code **)(*local_50 + 0x3b8))();
    if (lVar5 <= (longlong)plVar9) {
      pvVar4 = _pthread_getspecific(pVar7);
      if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
        pVar7 = pVar1;
      }
      FUN_014bd130();
    }
    pvVar4 = _pthread_getspecific(pVar7);
    if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
      pVar7 = pVar1;
    }
    FUN_014bd0d0();
  }
  pvVar4 = _pthread_getspecific(pVar7);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013dfef0();
  if (*(longlong *)(unaff_RDI + 0x1c0) == 0) {
    puVar6 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar6 = &DAT_02572358;
    (*DAT_02572370)();
    puVar2 = *(undefined8 **)(unaff_RDI + 0x1c0);
    if (puVar2 == puVar6) {
      FUN_00d50b20();
    }
    else {
      *(undefined8 **)(unaff_RDI + 0x1c0) = puVar6;
      if (puVar2 != (undefined8 *)0x0) {
        FUN_00d50b20();
      }
    }
  }
  FUN_00d235a0();
  FUN_00d50b20();
LAB_013898ea:
  FUN_00d50b20();
  return;
}


