// Function: FUN_00455a20
// Address: 00455a20
// Size: 558 bytes
// Class: GNString


/* WARNING: Removing unreachable block (ram,0x00455b4b) */
/* WARNING: Removing unreachable block (ram,0x00455b54) */

void FUN_00455a20(pthread_key_t param_1)

{
  char cVar1;
  void *pvVar2;
  longlong lVar3;
  longlong unaff_RDI;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong local_70;
  char local_68;
  longlong *local_60;
  char local_58;
  
  lVar5 = *(longlong *)(unaff_RDI + 0x60);
  if ((lVar5 != 0) || (lVar5 = *(longlong *)(unaff_RDI + 0x30), lVar5 != 0)) {
    FUN_00d50b00();
  }
  if (*(int *)(unaff_RDI + 0x70) == 2) {
    lVar3 = *(longlong *)(unaff_RDI + 0x60);
    if (lVar3 == 0) {
      lVar3 = *(longlong *)(unaff_RDI + 0x30);
      if (lVar3 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      FUN_00d50b00();
    }
    lVar3 = *(longlong *)(lVar3 + 0x308);
    FUN_00d50b20();
    if (lVar3 == 0) goto LAB_00455a94;
  }
  else {
LAB_00455a94:
    FUN_00b34cb0();
    cVar1 = (**(code **)(*local_60 + 0x38))();
    if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
      (**(code **)(*local_60 + 0x10))();
      FUN_00d50b20();
    }
    if (cVar1 != '\0') {
      FUN_00b34cb0();
      (**(code **)(*local_60 + 0x48))();
      if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
        (**(code **)(*local_60 + 0x10))();
        FUN_00d50b20();
      }
      uVar6 = FUN_00e7d6f0();
      *(undefined8 *)(unaff_RDI + 0x78) = uVar6;
      goto LAB_00455c3b;
    }
  }
  FUN_00453670();
  if (local_58 == '\0') {
    if (local_60 != (longlong *)0x0) {
      FUN_00d50b00();
      goto LAB_00455b59;
    }
  }
  else if (local_60 != (longlong *)0x0) {
LAB_00455b59:
    if (0 < *(int *)((longlong)local_60 + 0xc)) {
      iVar4 = 0;
      do {
        FUN_0053a8d0();
        pvVar2 = _pthread_getspecific(param_1);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_002dcf40();
        if ((local_68 != '\0') && (local_70 != 0)) {
          FUN_00d50b20();
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < *(int *)((longlong)local_60 + 0xc));
    }
    FUN_0015ee90();
    FUN_00d50b20();
  }
  FUN_00324d40();
LAB_00455c3b:
  if (lVar5 != 0) {
    FUN_00d50b20();
  }
  return;
}


