// Function: FUN_017c3c30
// Address: 017c3c30
// Size: 502 bytes
// Class: GNFraction


void FUN_017c3c30(pthread_key_t param_1,undefined8 param_2)

{
  char cVar1;
  longlong *plVar2;
  void *pvVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong unaff_RSI;
  undefined8 *unaff_RDI;
  longlong *plVar6;
  int iStack_54;
  int iStack_4c;
  int iVar7;
  char local_38;
  
  plVar2 = (longlong *)FUN_0114f240();
  (**(code **)(*plVar2 + 0x18))();
  pvVar3 = _pthread_getspecific(param_1);
  plVar6 = plVar2;
  if (pvVar3 == (void *)0x0) {
    iVar7 = *(int *)((longlong)plVar2 + 0x3c);
  }
  else {
    lVar4 = FUN_00e8b990();
    if (lVar4 != 0) {
      plVar6 = (longlong *)plVar2[(ulonglong)(*(uint *)(lVar4 + 0x154) & 1) + 4];
    }
    iVar7 = *(int *)((longlong)plVar6 + 0x3c);
  }
  if (((iVar7 == 0) || (unaff_RSI >> 0x20 == 0)) || (cVar1 = FUN_00e7c000(), cVar1 == '\0')) {
    FUN_00d64850();
    plVar6[7] = unaff_RSI;
    FUN_00d64910();
  }
  uVar5 = FUN_00e7bcc0();
  if ((uVar5 >> 0x20 != 0) && (iVar7 = (int)(unaff_RSI >> 0x20), iVar7 != 0)) {
    while (cVar1 = FUN_00e7c020(), cVar1 != '\0') {
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_017c3180(0);
      if (local_38 == '\0') {
        if (unaff_RSI != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      FUN_017c3eb0();
      if (unaff_RSI != 0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (unaff_RSI != 0)) {
        FUN_00d50b20();
      }
      iStack_54 = (int)((ulonglong)param_2 >> 0x20);
      if (iStack_54 == 0) break;
      unaff_RSI = unaff_RSI & 0xffffffff00000000;
      cVar1 = FUN_00e7c630();
      if (cVar1 != '\0') break;
      FUN_00e7b820();
      iStack_4c = (int)(uVar5 >> 0x20);
      if ((iStack_4c == 0) || (iVar7 == 0)) break;
    }
  }
  *unaff_RDI = plVar2;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}


