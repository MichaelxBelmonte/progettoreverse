// Function: FUN_01774880
// Address: 01774880
// Size: 613 bytes
// Class: GNInt


void FUN_01774880(int *param_1,int param_2,size_t param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  void *pvVar6;
  pthread_key_t pVar7;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  float fVar8;
  float fVar9;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 uVar10;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  longlong local_68;
  char local_60;
  
  puVar5 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  pVar7 = 0x25683c0;
  *puVar5 = &DAT_025683c0;
  (*DAT_025683d8)();
  FUN_00c92170();
  FUN_00c92160();
  fVar8 = (float)FUN_01774c90();
  iVar2 = *(int *)(unaff_RSI + 100);
  FUN_0176fff0();
  pvVar6 = _pthread_getspecific(pVar7);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  fVar9 = (float)FUN_01774c90();
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  iVar2 = FUN_01774ef0(fVar8 + (float)iVar2 * DAT_0241b664 + fVar9,0);
  iVar3 = FUN_01774300();
  uVar10 = extraout_XMM0_Da;
  if (iVar3 == param_2) {
LAB_01774a06:
    iVar3 = -1000000;
    if (iVar2 != -1000000) {
      iVar3 = *(int *)(puVar5 + 3);
      FUN_00c8e340(uVar10,1);
      iVar4 = iVar2;
      while( true ) {
        pvVar6 = (void *)(longlong)iVar3;
        *(int *)(puVar5[2] + (longlong)pvVar6) = iVar4;
        iVar4 = iVar4 + 1;
        iVar3 = FUN_01774300();
        if (iVar3 != param_2) break;
        iVar3 = *(int *)(puVar5 + 3);
        FUN_00c8e340(extraout_XMM0_Da_02,1);
      }
      while( true ) {
        iVar2 = iVar2 + -1;
        iVar3 = FUN_01774300();
        if (iVar3 != param_2) break;
        iVar3 = *(int *)(puVar5 + 3);
        FUN_00c8e340(extraout_XMM0_Da_03,1);
        piVar1 = (int *)puVar5[2];
        _memmove(pvVar6,(void *)(longlong)iVar3,param_3);
        *piVar1 = iVar2;
      }
      iVar3 = *(int *)puVar5[2] + -1;
    }
  }
  else if (param_2 < iVar3) {
    do {
      iVar3 = iVar2 + -1;
      iVar4 = FUN_01774300();
      if (iVar4 == param_2) {
        iVar2 = iVar2 + -1;
        uVar10 = extraout_XMM0_Da_00;
        goto LAB_01774a06;
      }
      iVar2 = iVar3;
    } while (param_2 <= iVar4);
  }
  else {
    iVar3 = iVar2 + -1;
    do {
      iVar2 = iVar3 + 2;
      iVar4 = FUN_01774300();
      uVar10 = extraout_XMM0_Da_01;
      if (iVar4 == param_2) goto LAB_01774a06;
      iVar3 = iVar3 + 1;
    } while (iVar4 <= param_2);
  }
  if (param_1 != (int *)0x0) {
    *param_1 = iVar3;
  }
  *unaff_RDI = puVar5;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}


