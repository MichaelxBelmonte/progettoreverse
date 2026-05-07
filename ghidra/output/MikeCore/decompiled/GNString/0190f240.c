// Function: FUN_0190f240
// Address: 0190f240
// Size: 621 bytes
// Class: GNString


void FUN_0190f240(pthread_key_t param_1)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  void *pvVar5;
  longlong lVar6;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  
  *(undefined1 *)(unaff_RSI + 0x88) = 1;
  cVar3 = (**(code **)(**(longlong **)(unaff_RSI + 0x68) + 0xa0))();
  if (cVar3 == '\0') {
LAB_0190f3dc:
    if (*(longlong *)(unaff_RSI + 0x80) != 0) {
      pvVar5 = _pthread_getspecific(param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_00d50130();
      if (*(longlong *)(unaff_RSI + 0x80) != 0) {
        *(undefined8 *)(unaff_RSI + 0x80) = 0;
        FUN_00d50b20();
      }
    }
LAB_0190f442:
    bVar2 = false;
    lVar6 = 0;
  }
  else {
    if (*(longlong *)(unaff_RSI + 0x80) == 0) {
      cVar3 = FUN_0190f4e0();
      if (cVar3 == '\0') goto LAB_0190f3dc;
    }
    else {
      pvVar5 = _pthread_getspecific(param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      iVar4 = FUN_016c2ea0();
      if (iVar4 < 1) goto LAB_0190f3dc;
      pvVar5 = _pthread_getspecific(param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_016c30e0();
    }
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_016c3130();
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_016c1150();
    lVar6 = *(longlong *)(unaff_RSI + 0x80);
    if (lVar6 == 0) goto LAB_0190f442;
    FUN_00d50b00();
    if (*(longlong *)(unaff_RSI + 0x80) == 0) {
      bVar2 = true;
      lVar1 = *(longlong *)(unaff_RSI + 0x78);
      goto joined_r0x0190f44e;
    }
    *(undefined8 *)(unaff_RSI + 0x80) = 0;
    bVar2 = true;
    FUN_00d50b20();
  }
  lVar1 = *(longlong *)(unaff_RSI + 0x78);
joined_r0x0190f44e:
  if ((lVar1 != 0) && (FUN_00d50130(), *(longlong *)(unaff_RSI + 0x78) != 0)) {
    *(undefined8 *)(unaff_RSI + 0x78) = 0;
    FUN_00d50b20();
  }
  *(undefined1 *)(unaff_RSI + 0x88) = 0;
  *(undefined1 *)(unaff_RDI + 1) = 0;
  if (!bVar2 && lVar6 != 0) {
    FUN_00d50b00();
  }
  *unaff_RDI = lVar6;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}


