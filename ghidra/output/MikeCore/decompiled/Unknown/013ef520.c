// Function: FUN_013ef520
// Address: 013ef520
// Size: 1332 bytes
// Class: Unknown


void FUN_013ef520(longlong *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong *plVar3;
  void *pvVar4;
  longlong lVar5;
  longlong lVar6;
  pthread_key_t pVar7;
  longlong *plVar8;
  longlong unaff_RDI;
  undefined4 uVar9;
  undefined8 uVar10;
  longlong local_100;
  char local_f8;
  longlong local_e0;
  char local_d8;
  
  if (*(longlong *)(unaff_RDI + 0x60) == 0) {
    plVar3 = (longlong *)FUN_000bea40();
    (**(code **)(*plVar3 + 0x18))();
    pvVar4 = _pthread_getspecific((pthread_key_t)param_1);
    if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
      param_1 = plVar3;
    }
    FUN_013eb6d0();
    pvVar4 = _pthread_getspecific((pthread_key_t)param_1);
    if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
      param_1 = plVar3;
    }
    FUN_013eb720();
    pvVar4 = _pthread_getspecific((pthread_key_t)param_1);
    plVar8 = plVar3;
    if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
      param_1 = plVar3;
      plVar8 = (longlong *)plVar3[(ulonglong)(*(uint *)(lVar5 + 0x154) & 1) + 4];
    }
    pvVar4 = _pthread_getspecific((pthread_key_t)param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar9 = FUN_013faed0();
    pvVar4 = _pthread_getspecific((pthread_key_t)param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar10 = FUN_013faf20();
    (**(code **)(*plVar8 + 0x418))(uVar9,uVar10);
    if ((local_f8 != '\0') && (local_100 != 0)) {
      FUN_00d50b20();
    }
    if (1 < *(int *)(*(longlong *)(unaff_RDI + 0x48) + 0xc)) {
      lVar5 = 1;
      do {
        pvVar4 = _pthread_getspecific((pthread_key_t)param_1);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar9 = FUN_013faed0();
        pvVar4 = _pthread_getspecific((pthread_key_t)param_1);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar10 = FUN_013faf20();
        pvVar4 = _pthread_getspecific((pthread_key_t)param_1);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar1 = FUN_0142c990();
        pvVar4 = _pthread_getspecific((pthread_key_t)param_1);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar2 = FUN_0142c9a0();
        pvVar4 = _pthread_getspecific((pthread_key_t)param_1);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0142c970();
        pvVar4 = _pthread_getspecific((pthread_key_t)param_1);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0142c980();
        pvVar4 = _pthread_getspecific((pthread_key_t)param_1);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_013faed0();
        pvVar4 = _pthread_getspecific((pthread_key_t)param_1);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_013faf20();
        FUN_013f07a0(uVar9,uVar10,uVar1,uVar2);
        pvVar4 = _pthread_getspecific((pthread_key_t)param_1);
        plVar8 = plVar3;
        if ((pvVar4 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
          param_1 = plVar3;
          plVar8 = (longlong *)plVar3[(ulonglong)(*(uint *)(lVar6 + 0x154) & 1) + 4];
        }
        pVar7 = (pthread_key_t)param_1;
        pvVar4 = _pthread_getspecific(pVar7);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar9 = FUN_013faed0();
        pvVar4 = _pthread_getspecific(pVar7);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar10 = FUN_013faf20();
        (**(code **)(*plVar8 + 0x418))(uVar9,uVar10);
        if ((local_d8 != '\0') && (local_e0 != 0)) {
          FUN_00d50b20();
        }
        lVar5 = lVar5 + 1;
        param_1 = (longlong *)(longlong)*(int *)(*(longlong *)(unaff_RDI + 0x48) + 0xc);
      } while (lVar5 < (longlong)param_1);
    }
    FUN_00d64850();
    plVar8 = *(longlong **)(unaff_RDI + 0x60);
    if (plVar8 != plVar3) {
      if (plVar3 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      *(longlong **)(unaff_RDI + 0x60) = plVar3;
      if (plVar8 != (longlong *)0x0) {
        FUN_00d50b20();
      }
    }
    FUN_00d64910();
    if (plVar3 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  return;
}


