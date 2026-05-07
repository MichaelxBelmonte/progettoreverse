// Function: FUN_01418260
// Address: 01418260
// Size: 631 bytes
// Class: MUAmplitudeAnalyzer


/* WARNING: Removing unreachable block (ram,0x014182f5) */
/* WARNING: Removing unreachable block (ram,0x014182fe) */

void FUN_01418260(pthread_key_t param_1,undefined8 param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  void *pvVar5;
  longlong lVar6;
  pthread_key_t pVar7;
  longlong unaff_RDI;
  int iVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined8 uVar11;
  undefined8 extraout_XMM0_Qa;
  longlong *local_58;
  char local_50;
  
  pVar7 = param_1;
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar11 = FUN_0124c6a0();
  if (local_50 == '\0') {
    if (local_58 != (longlong *)0x0) {
      uVar11 = FUN_00d50b00();
      goto LAB_01418303;
    }
LAB_014183a2:
    bVar1 = true;
  }
  else {
    if (local_58 == (longlong *)0x0) goto LAB_014183a2;
LAB_01418303:
    cVar2 = (**(code **)(*local_58 + 0x3c8))(uVar11,param_1);
    if (cVar2 != '\0') {
      FUN_00ae96c0(extraout_XMM0_Qa,param_1);
      iVar3 = FUN_013fbeb0();
      if (0 < iVar3) {
        iVar8 = 0;
        do {
          uVar11 = param_2;
          (**(code **)(*local_58 + 0x3d8))(param_2,iVar8,param_1);
          pVar7 = (pthread_key_t)uVar11;
          iVar8 = iVar8 + 1;
        } while (iVar3 != iVar8);
      }
      (**(code **)(DAT_02786500 + 0x20))(DAT_02390124 / (float)iVar3);
      bVar1 = false;
      goto LAB_01418473;
    }
    bVar1 = false;
  }
  plVar9 = *(longlong **)(unaff_RDI + 0x60);
  pvVar5 = _pthread_getspecific(pVar7);
  if (pvVar5 != (void *)0x0) {
    plVar9 = *(longlong **)(unaff_RDI + 0x60);
    lVar6 = FUN_00e8b990();
    if (lVar6 != 0) {
      plVar9 = (longlong *)plVar9[(ulonglong)(*(uint *)(lVar6 + 0x154) & 1) + 4];
    }
  }
  plVar10 = *(longlong **)(unaff_RDI + 0x60);
  pvVar5 = _pthread_getspecific(pVar7);
  if (pvVar5 != (void *)0x0) {
    plVar10 = *(longlong **)(unaff_RDI + 0x60);
    lVar6 = FUN_00e8b990();
    if (lVar6 != 0) {
      plVar10 = (longlong *)plVar10[(ulonglong)(*(uint *)(lVar6 + 0x154) & 1) + 4];
    }
  }
  uVar4 = (**(code **)(*plVar10 + 0x3a0))();
  pVar7 = 0;
  (**(code **)(*plVar9 + 0x388))(0,(int)DAT_0238fee8,uVar4,param_2);
LAB_01418473:
  pvVar5 = _pthread_getspecific(pVar7);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0124c620();
  if (!bVar1) {
    FUN_00d50b20();
  }
  return;
}


