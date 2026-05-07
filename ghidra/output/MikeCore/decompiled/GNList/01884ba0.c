// Function: FUN_01884ba0
// Address: 01884ba0
// Size: 504 bytes
// Class: GNList


void FUN_01884ba0(pthread_key_t param_1)

{
  int iVar1;
  char cVar2;
  void *pvVar3;
  longlong lVar4;
  longlong lVar5;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  
  lVar5 = *(longlong *)(unaff_RSI + 0xb8);
  if ((lVar5 != 0) || (lVar5 = *(longlong *)(unaff_RSI + 0xb0), lVar5 != 0)) {
    FUN_00d50b00();
  }
  if (lVar5 == 0) {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
  }
  else {
    FUN_00d50b20();
    cVar2 = FUN_01891770();
    if (cVar2 != '\0') {
      lVar5 = *(longlong *)(unaff_RSI + 0xb8);
      if ((lVar5 != 0) || (lVar5 = *(longlong *)(unaff_RSI + 0xb0), lVar5 != 0)) {
        FUN_00d50b00();
      }
      pvVar3 = _pthread_getspecific(param_1);
      if ((pvVar3 == (void *)0x0) || (lVar4 = FUN_00e8b990(), lVar4 == 0)) {
        iVar1 = *(int *)(*(longlong *)(lVar5 + 0x58) + 0xc);
      }
      else {
        iVar1 = *(int *)(*(longlong *)
                          (*(longlong *)
                            (lVar5 + 0x20 + (ulonglong)(*(uint *)(lVar4 + 0x154) & 1) * 8) + 0x58) +
                        0xc);
      }
      if (lVar5 != 0) {
        FUN_00d50b20();
      }
      if (iVar1 != 0) {
        lVar5 = *(longlong *)(unaff_RSI + 0xb8);
        if ((lVar5 != 0) || (lVar5 = *(longlong *)(unaff_RSI + 0xb0), lVar5 != 0)) {
          FUN_00d50b00();
        }
        pvVar3 = _pthread_getspecific(param_1);
        if ((pvVar3 == (void *)0x0) || (lVar4 = FUN_00e8b990(), lVar4 == 0)) {
          *(undefined1 *)(unaff_RDI + 1) = 0;
          lVar4 = *(longlong *)(lVar5 + 0x58);
        }
        else {
          lVar4 = *(longlong *)(lVar5 + 0x20 + (ulonglong)(*(uint *)(lVar4 + 0x154) & 1) * 8);
          *(undefined1 *)(unaff_RDI + 1) = 0;
          lVar4 = *(longlong *)(lVar4 + 0x58);
        }
        if (lVar4 != 0) {
          FUN_00d50b00();
        }
        *unaff_RDI = lVar4;
        *(undefined1 *)(unaff_RDI + 1) = 1;
        if (lVar5 == 0) {
          return;
        }
        FUN_00d50b20();
        return;
      }
    }
    lVar5 = *(longlong *)(unaff_RSI + 0xb8);
    if ((lVar5 != 0) || (lVar5 = *(longlong *)(unaff_RSI + 0xb0), lVar5 != 0)) {
      FUN_00d50b00();
    }
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01524ad0();
    if (lVar5 != 0) {
      FUN_00d50b20();
    }
  }
  return;
}


