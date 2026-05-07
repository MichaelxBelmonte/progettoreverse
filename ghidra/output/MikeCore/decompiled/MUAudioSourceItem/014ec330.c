// Function: FUN_014ec330
// Address: 014ec330
// Size: 844 bytes
// Class: MUAudioSourceItem


undefined8 FUN_014ec330(undefined4 *param_1,undefined4 *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  void *pvVar5;
  longlong lVar6;
  pthread_key_t pVar7;
  longlong *plVar8;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  
  pVar7 = (pthread_key_t)param_1;
  plVar8 = (longlong *)*unaff_RSI;
  pvVar5 = _pthread_getspecific(pVar7);
  if (pvVar5 != (void *)0x0) {
    plVar8 = (longlong *)*unaff_RSI;
    lVar6 = FUN_00e8b990();
    if (lVar6 != 0) {
      plVar8 = (longlong *)plVar8[(ulonglong)(*(uint *)(lVar6 + 0x154) & 1) + 4];
    }
  }
  cVar1 = (**(code **)(*plVar8 + 1000))();
  iVar3 = -1;
  if ((cVar1 != '\0') && (lVar6 = **(longlong **)(plVar8[0x21] + 0x10), lVar6 != 0)) {
    FUN_00d50b00();
    iVar3 = *(int *)(lVar6 + 0xc);
    FUN_00d50b20();
  }
  iVar2 = FUN_014c2f80();
  if (iVar3 <= iVar2) {
    pvVar5 = _pthread_getspecific(pVar7);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    iVar2 = FUN_014c2f80();
    cVar1 = (**(code **)(*unaff_RDI + 1000))();
    iVar3 = -1;
    if ((cVar1 != '\0') && (lVar6 = **(longlong **)(unaff_RDI[0x21] + 0x10), lVar6 != 0)) {
      FUN_00d50b00();
      iVar3 = *(int *)(lVar6 + 0xc);
      FUN_00d50b20();
    }
    if (iVar3 <= iVar2) {
      plVar8 = (longlong *)*unaff_RSI;
      pvVar5 = _pthread_getspecific(pVar7);
      if (pvVar5 != (void *)0x0) {
        plVar8 = (longlong *)*unaff_RSI;
        lVar6 = FUN_00e8b990();
        if (lVar6 != 0) {
          plVar8 = (longlong *)plVar8[(ulonglong)(*(uint *)(lVar6 + 0x154) & 1) + 4];
        }
      }
      cVar1 = (**(code **)(*plVar8 + 1000))();
      iVar2 = -1;
      iVar3 = -1;
      if (cVar1 != '\0') {
        lVar6 = **(longlong **)(plVar8[0x21] + 0x10);
        iVar3 = -1;
        if (lVar6 != 0) {
          FUN_00d50b00();
          iVar3 = *(int *)(lVar6 + 0xc);
          FUN_00d50b20();
        }
      }
      cVar1 = (**(code **)(*unaff_RDI + 1000))();
      if ((cVar1 != '\0') && (lVar6 = **(longlong **)(unaff_RDI[0x21] + 0x10), lVar6 != 0)) {
        FUN_00d50b00();
        iVar2 = *(int *)(lVar6 + 0xc);
        FUN_00d50b20();
      }
      if (iVar2 < iVar3) {
        plVar8 = (longlong *)*unaff_RSI;
        pvVar5 = _pthread_getspecific(pVar7);
        if (pvVar5 != (void *)0x0) {
          plVar8 = (longlong *)*unaff_RSI;
          lVar6 = FUN_00e8b990();
          if (lVar6 != 0) {
            plVar8 = (longlong *)plVar8[(ulonglong)(*(uint *)(lVar6 + 0x154) & 1) + 4];
          }
        }
        cVar1 = (**(code **)(*plVar8 + 1000))();
        uVar4 = 0xffffffff;
        if ((cVar1 != '\0') && (lVar6 = **(longlong **)(plVar8[0x21] + 0x10), lVar6 != 0)) {
          FUN_00d50b00();
          uVar4 = *(undefined4 *)(lVar6 + 0xc);
          FUN_00d50b20();
        }
      }
      else {
        cVar1 = (**(code **)(*unaff_RDI + 1000))();
        uVar4 = 0xffffffff;
        if ((cVar1 != '\0') && (lVar6 = **(longlong **)(unaff_RDI[0x21] + 0x10), lVar6 != 0)) {
          FUN_00d50b00();
          uVar4 = *(undefined4 *)(lVar6 + 0xc);
          FUN_00d50b20();
        }
      }
      *param_2 = uVar4;
      pvVar5 = _pthread_getspecific(pVar7);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      iVar3 = FUN_014c2f80();
      iVar2 = FUN_014c2f80();
      if ((iVar3 < iVar2) && (pvVar5 = _pthread_getspecific(pVar7), pvVar5 != (void *)0x0)) {
        FUN_00e8b990();
      }
      uVar4 = FUN_014c2f80();
      *param_1 = uVar4;
      return 1;
    }
  }
  return 0;
}


