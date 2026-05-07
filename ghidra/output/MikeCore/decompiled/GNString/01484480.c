// Function: FUN_01484480
// Address: 01484480
// Size: 838 bytes
// Class: GNString


/* WARNING: Removing unreachable block (ram,0x01484741) */
/* WARNING: Removing unreachable block (ram,0x0148474e) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01484480(pthread_key_t param_1)

{
  char cVar1;
  undefined4 uVar2;
  void *pvVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  pthread_key_t pVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong unaff_RDI;
  int iVar10;
  double dVar11;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  
  FUN_013fb420();
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0132d790();
  if ((local_48 == '\0') && (local_50 != 0)) {
    FUN_00d50b00();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  dVar11 = (double)*(int *)(local_50 + 0x20) * *(double *)(local_50 + 0x18) + DAT_023942d0;
  uVar4 = FUN_00e83010();
  iVar10 = (int)dVar11 / 2;
  *(undefined8 *)(unaff_RDI + 0x90) = uVar4;
  ___bzero();
  *(longlong *)(unaff_RDI + 0x88) = (longlong)iVar10 * 4 + *(longlong *)(unaff_RDI + 0x90);
  plVar9 = *(longlong **)(unaff_RDI + 0x68);
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    plVar9 = *(longlong **)(unaff_RDI + 0x68);
    lVar5 = FUN_00e8b990();
    if (lVar5 != 0) {
      plVar9 = (longlong *)plVar9[(ulonglong)(*(uint *)(lVar5 + 0x154) & 1) + 4];
    }
  }
  plVar8 = *(longlong **)(unaff_RDI + 0x68);
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    plVar8 = *(longlong **)(unaff_RDI + 0x68);
    lVar5 = FUN_00e8b990();
    if (lVar5 != 0) {
      plVar8 = (longlong *)plVar8[(ulonglong)(*(uint *)(lVar5 + 0x154) & 1) + 4];
    }
  }
  uVar2 = (**(code **)(*plVar8 + 0x3a0))();
  lVar5 = (longlong)-iVar10;
  uVar4 = 0;
  cVar1 = (**(code **)(*plVar9 + 0x388))(0,DAT_0238fee8,uVar2,lVar5);
  if (cVar1 == '\0') {
    FUN_00e33860();
    while( true ) {
      plVar9 = *(longlong **)(unaff_RDI + 0x68);
      pVar7 = (pthread_key_t)uVar4;
      pvVar3 = _pthread_getspecific(pVar7);
      if (pvVar3 != (void *)0x0) {
        plVar9 = *(longlong **)(unaff_RDI + 0x68);
        lVar6 = FUN_00e8b990();
        if (lVar6 != 0) {
          plVar9 = (longlong *)plVar9[(ulonglong)(*(uint *)(lVar6 + 0x154) & 1) + 4];
        }
      }
      plVar8 = *(longlong **)(unaff_RDI + 0x68);
      pvVar3 = _pthread_getspecific(pVar7);
      if (pvVar3 != (void *)0x0) {
        plVar8 = *(longlong **)(unaff_RDI + 0x68);
        lVar6 = FUN_00e8b990();
        if (lVar6 != 0) {
          plVar8 = (longlong *)plVar8[(ulonglong)(*(uint *)(lVar6 + 0x154) & 1) + 4];
        }
      }
      uVar2 = (**(code **)(*plVar8 + 0x3a0))();
      uVar4 = 0;
      cVar1 = (**(code **)(*plVar9 + 0x388))(0,DAT_0238fee8,uVar2,lVar5);
      if (cVar1 != '\0') {
        FUN_00e33860();
        goto LAB_01484765;
      }
      if (*(char *)(unaff_RDI + 0x3c) != '\0') break;
      FUN_00da68a0(_DAT_023944e0);
    }
    FUN_00e34a60();
  }
  else {
LAB_01484765:
    FUN_015c2d90(DAT_0241c6e8,DAT_02390434,DAT_02390128,(float)*(double *)(unaff_RDI + 0xa8));
  }
  if (local_50 != 0) {
    FUN_00d50b20();
  }
  return;
}


