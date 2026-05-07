// Function: FUN_015fec80
// Address: 015fec80
// Size: 523 bytes
// Class: MUTempoAnalyzerEvent


void FUN_015fec80(undefined4 param_1,pthread_key_t param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  void *pvVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  pthread_key_t pVar7;
  undefined8 in_RCX;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  longlong lVar8;
  
  puVar2 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar2 = &DAT_025f4940;
  puVar2[7] = 0;
  puVar2[8] = 0;
  puVar2[9] = 0;
  FUN_00d500e0();
  lVar8 = 0;
  do {
    lVar5 = *unaff_RSI;
    pvVar3 = _pthread_getspecific((pthread_key_t)in_RCX);
    if (pvVar3 != (void *)0x0) {
      lVar5 = *unaff_RSI;
      lVar4 = FUN_00e8b990();
      if (lVar4 != 0) {
        lVar5 = *(longlong *)(lVar5 + 0x20 + (ulonglong)(*(uint *)(lVar4 + 0x154) & 1) * 8);
      }
    }
    uVar1 = *(undefined4 *)(*(longlong *)(*(longlong *)(lVar5 + 0x38) + 0x10) + lVar8 * 4);
    pvVar3 = _pthread_getspecific((pthread_key_t)in_RCX);
    puVar6 = puVar2;
    if ((pvVar3 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
      puVar6 = (undefined8 *)puVar2[(ulonglong)(*(uint *)(lVar5 + 0x154) & 1) + 4];
    }
    pVar7 = (pthread_key_t)in_RCX;
    *(undefined4 *)(*(longlong *)(puVar6[7] + 0x10) + lVar8 * 4) = uVar1;
    lVar8 = lVar8 + 1;
  } while (lVar8 != 0x18);
  lVar8 = *unaff_RSI;
  pvVar3 = _pthread_getspecific(pVar7);
  if (pvVar3 != (void *)0x0) {
    lVar8 = *unaff_RSI;
    lVar5 = FUN_00e8b990();
    if (lVar5 != 0) {
      lVar8 = *(longlong *)(lVar8 + 0x20 + (ulonglong)(*(uint *)(lVar5 + 0x154) & 1) * 8);
    }
  }
  pvVar3 = _pthread_getspecific(pVar7);
  if ((pvVar3 == (void *)0x0) || (lVar5 = FUN_00e8b990(), lVar5 == 0)) {
    lVar8 = *(longlong *)(lVar8 + 0x40);
    lVar4 = puVar2[8];
    puVar6 = puVar2;
    if (lVar4 == lVar8) goto LAB_015fee11;
  }
  else {
    lVar8 = *(longlong *)(lVar8 + 0x40);
    lVar4 = ((undefined8 *)puVar2[(ulonglong)(*(uint *)(lVar5 + 0x154) & 1) + 4])[8];
    puVar6 = (undefined8 *)puVar2[(ulonglong)(*(uint *)(lVar5 + 0x154) & 1) + 4];
    if (lVar4 == lVar8) goto LAB_015fee11;
  }
  if (lVar8 != 0) {
    FUN_00d50b00();
  }
  puVar6[8] = lVar8;
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
LAB_015fee11:
  pvVar3 = _pthread_getspecific(pVar7);
  puVar6 = puVar2;
  if ((pvVar3 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
    puVar6 = (undefined8 *)puVar2[(ulonglong)(*(uint *)(lVar8 + 0x154) & 1) + 4];
  }
  *(pthread_key_t *)(puVar6 + 9) = param_2;
  pvVar3 = _pthread_getspecific(param_2);
  puVar6 = puVar2;
  if ((pvVar3 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
    puVar6 = (undefined8 *)puVar2[(ulonglong)(*(uint *)(lVar8 + 0x154) & 1) + 4];
  }
  *(undefined4 *)((longlong)puVar6 + 0x4c) = param_1;
  *unaff_RDI = puVar2;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}


