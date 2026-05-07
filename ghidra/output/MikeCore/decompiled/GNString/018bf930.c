// Function: FUN_018bf930
// Address: 018bf930
// Size: 695 bytes
// Class: GNString


undefined8 FUN_018bf930(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  void *pvVar2;
  longlong lVar3;
  longlong lVar4;
  pthread_key_t pVar5;
  longlong *plVar6;
  longlong unaff_RSI;
  undefined8 unaff_RDI;
  longlong local_78;
  char local_70;
  
  pVar5 = (pthread_key_t)param_1;
  if (*(longlong *)(unaff_RSI + 0x50) == 0) {
    lVar4 = *(longlong *)(unaff_RSI + 0x48);
    if (lVar4 != 0) {
      FUN_00d50b00();
      lVar3 = 0;
      while (pVar5 = (pthread_key_t)param_1, (int)lVar3 < *(int *)(lVar4 + 0xc)) {
        plVar6 = *(longlong **)(*(longlong *)(lVar4 + 0x10) + lVar3 * 8);
        pvVar2 = _pthread_getspecific(pVar5);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_018220f0();
        lVar1 = *param_2;
        if ((local_70 != '\0') && (local_78 != 0)) {
          FUN_00d50b20();
        }
        lVar3 = lVar3 + 1;
        if (local_78 == lVar1) {
          pvVar2 = _pthread_getspecific((pthread_key_t)param_1);
          if ((pvVar2 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
            plVar6 = (longlong *)plVar6[(ulonglong)(*(uint *)(lVar4 + 0x154) & 1) + 4];
          }
          (**(code **)(*plVar6 + 0x368))();
          FUN_01894d60();
          FUN_00d50b20();
          return unaff_RDI;
        }
      }
      FUN_01894d60();
      FUN_00d50b20();
    }
    plVar6 = (longlong *)*param_2;
    pvVar2 = _pthread_getspecific(pVar5);
  }
  else {
    lVar4 = *param_2;
    pvVar2 = _pthread_getspecific(pVar5);
    if (pvVar2 != (void *)0x0) {
      lVar4 = *param_2;
      lVar3 = FUN_00e8b990();
      if (lVar3 != 0) {
        lVar4 = *(longlong *)(lVar4 + 0x20 + (ulonglong)(*(uint *)(lVar3 + 0x154) & 1) * 8);
      }
    }
    lVar3 = *(longlong *)(*(longlong *)(unaff_RSI + 0x50) + 0x10);
    if (*(longlong *)(lVar3 + (longlong)*(int *)(lVar4 + 0x98) * 8) != 0) {
      lVar4 = *param_2;
      pvVar2 = _pthread_getspecific((pthread_key_t)lVar3);
      if (pvVar2 != (void *)0x0) {
        lVar4 = *param_2;
        lVar3 = FUN_00e8b990();
        if (lVar3 != 0) {
          lVar4 = *(longlong *)(lVar4 + 0x20 + (ulonglong)(*(uint *)(lVar3 + 0x154) & 1) * 8);
        }
      }
      lVar3 = *(longlong *)(*(longlong *)(unaff_RSI + 0x50) + 0x10);
      if (*(longlong *)(lVar3 + (longlong)*(int *)(lVar4 + 0x98) * 8) != 0) {
        lVar4 = *param_2;
        pvVar2 = _pthread_getspecific((pthread_key_t)lVar3);
        if (pvVar2 != (void *)0x0) {
          lVar4 = *param_2;
          lVar3 = FUN_00e8b990();
          if (lVar3 != 0) {
            lVar4 = *(longlong *)(lVar4 + 0x20 + (ulonglong)(*(uint *)(lVar3 + 0x154) & 1) * 8);
          }
        }
        (**(code **)(**(longlong **)
                       (*(longlong *)(*(longlong *)(unaff_RSI + 0x50) + 0x10) +
                       (longlong)*(int *)(lVar4 + 0x98) * 8) + 0x368))();
        return unaff_RDI;
      }
    }
    plVar6 = (longlong *)*param_2;
    pvVar2 = _pthread_getspecific((pthread_key_t)lVar3);
  }
  if (pvVar2 != (void *)0x0) {
    plVar6 = (longlong *)*param_2;
    lVar4 = FUN_00e8b990();
    if (lVar4 != 0) {
      plVar6 = (longlong *)plVar6[(ulonglong)(*(uint *)(lVar4 + 0x154) & 1) + 4];
    }
  }
  (**(code **)(*plVar6 + 0x388))();
  return unaff_RDI;
}


