// Function: FUN_013e5700
// Address: 013e5700
// Size: 1455 bytes
// Class: Unknown


void FUN_013e5700(double param_1)

{
  longlong *plVar1;
  void *pvVar2;
  longlong lVar3;
  pthread_key_t in_ECX;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  double dVar4;
  ulonglong uVar5;
  longlong local_40;
  char local_38;
  
  plVar1 = (longlong *)FUN_00e8fc40();
  FUN_0006e3a0();
  (**(code **)(*plVar1 + 0x18))();
  pvVar2 = _pthread_getspecific(in_ECX);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  lVar3 = FUN_013de650();
  if (*(longlong *)(unaff_RSI + 0x60) == 0) {
    dVar4 = 0.0;
  }
  else {
    pvVar2 = _pthread_getspecific(in_ECX);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar4 = (double)FUN_013279f0();
  }
  FUN_012642b0((double)lVar3 * dVar4 + param_1);
  pvVar2 = _pthread_getspecific(in_ECX);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  lVar3 = FUN_013de790();
  if (*(longlong *)(unaff_RSI + 0x60) == 0) {
    dVar4 = 0.0;
  }
  else {
    pvVar2 = _pthread_getspecific(in_ECX);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar4 = (double)FUN_013279f0();
  }
  FUN_01259540((double)lVar3 * dVar4);
  pvVar2 = _pthread_getspecific(in_ECX);
  if ((pvVar2 == (void *)0x0) || (lVar3 = FUN_00e8b990(), lVar3 == 0)) {
    lVar3 = *(longlong *)(unaff_RSI + 0x48);
  }
  else {
    lVar3 = *(longlong *)(unaff_RSI + 0x48);
  }
  if (lVar3 == 0) {
    uVar5 = (ulonglong)DAT_023b26e8;
  }
  else {
    pvVar2 = _pthread_getspecific(in_ECX);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar5 = FUN_013ddd00();
  }
  FUN_012595a0(uVar5);
  pvVar2 = _pthread_getspecific(in_ECX);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  lVar3 = FUN_013deb20();
  if (*(longlong *)(unaff_RSI + 0x60) == 0) {
    dVar4 = 0.0;
  }
  else {
    pvVar2 = _pthread_getspecific(in_ECX);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar4 = (double)FUN_013279f0();
  }
  FUN_01264320((double)lVar3 * dVar4);
  pvVar2 = _pthread_getspecific(in_ECX);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  lVar3 = FUN_013debd0();
  if (*(longlong *)(unaff_RSI + 0x60) == 0) {
    dVar4 = 0.0;
  }
  else {
    pvVar2 = _pthread_getspecific(in_ECX);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar4 = (double)FUN_013279f0();
  }
  FUN_01264390((double)lVar3 * dVar4);
  if (0 < *(int *)(*(longlong *)(unaff_RSI + 0x40) + 0xc)) {
    lVar3 = 0;
    do {
      if (lVar3 == 0) {
        pvVar2 = _pthread_getspecific(in_ECX);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        pvVar2 = _pthread_getspecific(in_ECX);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_013ddd70();
        if (local_38 == '\0') {
          if (local_40 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        FUN_01265bc0();
        if (local_40 != 0) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        pvVar2 = _pthread_getspecific(in_ECX);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        pvVar2 = _pthread_getspecific(in_ECX);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_013ddd70();
        if (local_38 == '\0') {
          if (local_40 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        FUN_01265db0();
        if (local_40 != 0) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 < *(int *)(*(longlong *)(unaff_RSI + 0x40) + 0xc));
  }
  pvVar2 = _pthread_getspecific(in_ECX);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0125a5f0();
  *unaff_RDI = plVar1;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}


