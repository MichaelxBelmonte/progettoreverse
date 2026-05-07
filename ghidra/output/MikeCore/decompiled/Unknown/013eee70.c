// Function: FUN_013eee70
// Address: 013eee70
// Size: 1226 bytes
// Class: Unknown


void FUN_013eee70(double param_1,int param_2)

{
  bool bVar1;
  void *pvVar2;
  longlong lVar3;
  pthread_key_t pVar4;
  undefined8 in_RCX;
  longlong lVar5;
  longlong *plVar6;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  longlong lVar7;
  longlong lVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  
  dVar9 = (double)_pow(in_RCX,DAT_02420c40);
  lVar3 = *(longlong *)(unaff_RDI + 0x48);
  if (0 < *(int *)(lVar3 + 0xc)) {
    lVar7 = 0;
    lVar8 = 0;
    lVar5 = 0;
    bVar1 = false;
    do {
      pVar4 = (pthread_key_t)lVar5;
      lVar3 = *(longlong *)(*(longlong *)(lVar3 + 0x10) + lVar7 * 8);
      if (lVar8 == lVar3) {
        if ((!bVar1) && (lVar8 != 0)) {
          bVar1 = true;
          FUN_00d50b00();
        }
      }
      else {
        if (lVar3 != 0) {
          FUN_00d50b00();
        }
        if ((bVar1) && (lVar8 != 0)) {
          FUN_00d50b20();
          bVar1 = true;
          lVar8 = lVar3;
        }
        else {
          bVar1 = true;
          lVar8 = lVar3;
        }
      }
      pvVar2 = _pthread_getspecific(pVar4);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      pvVar2 = _pthread_getspecific(pVar4);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar10 = (double)FUN_013faf20();
      plVar6 = (longlong *)*unaff_RSI;
      pvVar2 = _pthread_getspecific(pVar4);
      if (pvVar2 != (void *)0x0) {
        plVar6 = (longlong *)*unaff_RSI;
        lVar3 = FUN_00e8b990();
        if (lVar3 != 0) {
          plVar6 = (longlong *)plVar6[(ulonglong)(*(uint *)(lVar3 + 0x154) & 1) + 4];
        }
      }
      pvVar2 = _pthread_getspecific(pVar4);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013faed0();
      dVar11 = (double)(**(code **)(*plVar6 + 0x380))();
      FUN_0142cc30((dVar10 - dVar11) * param_1 + dVar11);
      pvVar2 = _pthread_getspecific(pVar4);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      pvVar2 = _pthread_getspecific(pVar4);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar10 = (double)FUN_0142c980();
      plVar6 = (longlong *)*unaff_RSI;
      pvVar2 = _pthread_getspecific(pVar4);
      if (pvVar2 != (void *)0x0) {
        plVar6 = (longlong *)*unaff_RSI;
        lVar3 = FUN_00e8b990();
        if (lVar3 != 0) {
          plVar6 = (longlong *)plVar6[(ulonglong)(*(uint *)(lVar3 + 0x154) & 1) + 4];
        }
      }
      pvVar2 = _pthread_getspecific(pVar4);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0142c970();
      dVar11 = (double)(**(code **)(*plVar6 + 0x380))();
      FUN_0142ca30((dVar10 - dVar11) * param_1 + dVar11);
      pvVar2 = _pthread_getspecific(pVar4);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      pvVar2 = _pthread_getspecific(pVar4);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar10 = (double)FUN_0142c9a0();
      plVar6 = (longlong *)*unaff_RSI;
      pvVar2 = _pthread_getspecific(pVar4);
      if (pvVar2 != (void *)0x0) {
        plVar6 = (longlong *)*unaff_RSI;
        lVar3 = FUN_00e8b990();
        if (lVar3 != 0) {
          plVar6 = (longlong *)plVar6[(ulonglong)(*(uint *)(lVar3 + 0x154) & 1) + 4];
        }
      }
      pvVar2 = _pthread_getspecific(pVar4);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0142c990();
      dVar11 = (double)(**(code **)(*plVar6 + 0x380))();
      FUN_0142ca80((dVar10 - dVar11) * param_1 + dVar11);
      if (param_2 == 1) {
        pvVar2 = _pthread_getspecific(pVar4);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        pvVar2 = _pthread_getspecific(pVar4);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar10 = (double)FUN_0142c870();
        FUN_0142c830(dVar10 * dVar9);
        pvVar2 = _pthread_getspecific(pVar4);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        pvVar2 = _pthread_getspecific(pVar4);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar10 = (double)FUN_0142c910();
        FUN_0142c8d0(dVar10 * dVar9);
      }
      lVar7 = lVar7 + 1;
      lVar3 = *(longlong *)(unaff_RDI + 0x48);
      lVar5 = (longlong)*(int *)(lVar3 + 0xc);
    } while (lVar7 < lVar5);
    if ((bVar1) && (lVar8 != 0)) {
      FUN_00d50b20();
    }
  }
  return;
}


