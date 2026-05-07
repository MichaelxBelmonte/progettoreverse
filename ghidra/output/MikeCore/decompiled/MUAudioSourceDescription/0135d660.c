// Function: FUN_0135d660
// Address: 0135d660
// Size: 556 bytes
// Class: MUAudioSourceDescription


/* WARNING: Removing unreachable block (ram,0x0135d7f7) */
/* WARNING: Removing unreachable block (ram,0x0135d72e) */
/* WARNING: Removing unreachable block (ram,0x0135d737) */
/* WARNING: Removing unreachable block (ram,0x0135d797) */
/* WARNING: Removing unreachable block (ram,0x0135d78e) */
/* WARNING: Removing unreachable block (ram,0x0135d7ee) */

void FUN_0135d660(longlong param_1)

{
  longlong lVar1;
  void *pvVar2;
  longlong lVar3;
  pthread_key_t pVar4;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  longlong *plVar5;
  longlong lVar6;
  undefined4 uVar7;
  
  FUN_0138f140();
  lVar1 = *unaff_RSI;
  if (0 < *(int *)(lVar1 + 0xc)) {
    lVar6 = 0;
    do {
      pVar4 = (pthread_key_t)param_1;
      lVar1 = *(longlong *)(*(longlong *)(lVar1 + 0x10) + lVar6 * 8);
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      pvVar2 = _pthread_getspecific(pVar4);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_014ce440();
      pvVar2 = _pthread_getspecific(pVar4);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_014ceed0();
      pvVar2 = _pthread_getspecific(pVar4);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_014cfcc0();
      pvVar2 = _pthread_getspecific(pVar4);
      if ((pvVar2 == (void *)0x0) || (lVar3 = FUN_00e8b990(), lVar3 == 0)) {
        plVar5 = *(longlong **)(unaff_RDI + 0x38);
        if (plVar5 != (longlong *)0x0) goto LAB_0135d850;
LAB_0135d831:
        uVar7 = 0;
      }
      else {
        plVar5 = *(longlong **)(unaff_RDI + 0x38);
        if (plVar5 == (longlong *)0x0) goto LAB_0135d831;
LAB_0135d850:
        pvVar2 = _pthread_getspecific(pVar4);
        if (pvVar2 != (void *)0x0) {
          plVar5 = *(longlong **)(unaff_RDI + 0x38);
          lVar3 = FUN_00e8b990();
          if (lVar3 != 0) {
            plVar5 = (longlong *)plVar5[(ulonglong)(*(uint *)(lVar3 + 0x154) & 1) + 4];
          }
        }
        uVar7 = (**(code **)(*plVar5 + 0x370))();
      }
      FUN_014bd640(uVar7);
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar6 = lVar6 + 1;
      lVar1 = *unaff_RSI;
      param_1 = (longlong)*(int *)(lVar1 + 0xc);
    } while (lVar6 < param_1);
  }
  return;
}


