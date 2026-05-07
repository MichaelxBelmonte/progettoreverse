// Function: FUN_013f63e0
// Address: 013f63e0
// Size: 689 bytes
// Class: MUDataPointFunction


void FUN_013f63e0(longlong *param_1)

{
  bool bVar1;
  char cVar2;
  longlong *plVar3;
  void *pvVar4;
  longlong lVar5;
  pthread_key_t pVar6;
  longlong *plVar7;
  longlong *unaff_RDI;
  longlong lVar8;
  longlong lVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  longlong local_58;
  char local_50;
  
  if ((unaff_RDI[0xb] == 0) && (cVar2 = (**(code **)(*unaff_RDI + 0x370))(), cVar2 != '\0')) {
    plVar3 = (longlong *)FUN_000bea40();
    (**(code **)(*plVar3 + 0x18))();
    pvVar4 = _pthread_getspecific((pthread_key_t)param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013eb6d0();
    pvVar4 = _pthread_getspecific((pthread_key_t)param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013eb720();
    lVar5 = unaff_RDI[9];
    if (*(int *)(lVar5 + 0xc) < 1) {
      lVar8 = 0;
      bVar1 = false;
    }
    else {
      lVar9 = 0;
      bVar1 = false;
      lVar8 = 0;
      do {
        lVar5 = *(longlong *)(*(longlong *)(lVar5 + 0x10) + lVar9 * 8);
        if (lVar8 == lVar5) {
          if ((!bVar1) && (lVar8 != 0)) {
            bVar1 = true;
            FUN_00d50b00();
          }
        }
        else {
          if (lVar5 != 0) {
            FUN_00d50b00();
          }
          if ((bVar1) && (lVar8 != 0)) {
            FUN_00d50b20();
            bVar1 = true;
            lVar8 = lVar5;
          }
          else {
            bVar1 = true;
            lVar8 = lVar5;
          }
        }
        pvVar4 = _pthread_getspecific((pthread_key_t)param_1);
        plVar7 = plVar3;
        if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
          param_1 = plVar3;
          plVar7 = (longlong *)plVar3[(ulonglong)(*(uint *)(lVar5 + 0x154) & 1) + 4];
        }
        pVar6 = (pthread_key_t)param_1;
        pvVar4 = _pthread_getspecific(pVar6);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar11 = FUN_013faf20();
        pvVar4 = _pthread_getspecific(pVar6);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar10 = FUN_013faed0();
        (**(code **)(*plVar7 + 0x418))(uVar11,uVar10);
        if ((local_50 != '\0') && (local_58 != 0)) {
          FUN_00d50b20();
        }
        lVar9 = lVar9 + 1;
        lVar5 = unaff_RDI[9];
        param_1 = (longlong *)(longlong)*(int *)(lVar5 + 0xc);
      } while (lVar9 < (longlong)param_1);
    }
    FUN_00d64850();
    plVar7 = (longlong *)unaff_RDI[0xb];
    if (plVar7 != plVar3) {
      if (plVar3 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      unaff_RDI[0xb] = (longlong)plVar3;
      if (plVar7 != (longlong *)0x0) {
        FUN_00d50b20();
      }
    }
    FUN_00d64910();
    if ((bVar1) && (lVar8 != 0)) {
      FUN_00d50b20();
    }
    if (plVar3 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  return;
}


