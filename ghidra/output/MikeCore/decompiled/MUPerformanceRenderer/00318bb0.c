// Function: FUN_00318bb0
// Address: 00318bb0
// Size: 850 bytes
// Class: MUPerformanceRenderer


/* WARNING: Removing unreachable block (ram,0x00318c06) */
/* WARNING: Removing unreachable block (ram,0x00318c0f) */

void FUN_00318bb0(pthread_key_t param_1)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  void *pvVar4;
  longlong lVar5;
  longlong *unaff_RDI;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  longlong local_58;
  char local_50;
  
  if (unaff_RDI[0xd] == 0) {
    return;
  }
  FUN_003187b0();
  if (local_50 == '\0') {
    if (local_58 == 0) goto LAB_00318ce5;
    FUN_00d50b00();
  }
  else if (local_58 == 0) {
LAB_00318ce5:
    bVar2 = true;
    bVar1 = true;
    lVar5 = unaff_RDI[0xd];
    goto joined_r0x00318cef;
  }
  pvVar4 = _pthread_getspecific(param_1);
  if ((pvVar4 == (void *)0x0) || (lVar5 = FUN_00e8b990(), lVar5 == 0)) {
    lVar5 = unaff_RDI[0xd];
  }
  else {
    lVar5 = unaff_RDI[0xd];
  }
  if (lVar5 != 0) {
    FUN_00d50b00();
  }
  cVar3 = FUN_016ccf50();
  if (lVar5 != 0) {
    FUN_00d50b20();
  }
  if (cVar3 == '\0') {
    dVar6 = (double)(**(code **)(*unaff_RDI + 0x3b0))();
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_016c25f0(dVar6);
    dVar7 = (double)FUN_016c26c0();
    dVar8 = (double)(**(code **)(*unaff_RDI + 0x408))();
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_016c25f0(dVar8);
    dVar9 = (double)FUN_016c26c0();
    dVar10 = (double)(**(code **)(*unaff_RDI + 0x418))();
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_016c25f0(dVar10);
    dVar11 = (double)FUN_016c26c0();
    if ((dVar6 != dVar7) || (NAN(dVar6) || NAN(dVar7))) {
      (**(code **)(*unaff_RDI + 0x3a8))(dVar7);
    }
    if ((dVar8 == dVar9) && (!NAN(dVar8) && !NAN(dVar9))) {
      if ((dVar10 == dVar11) && (!NAN(dVar10) && !NAN(dVar11))) goto LAB_00318ecd;
    }
    (**(code **)(*unaff_RDI + 0x428))(dVar9,dVar11);
  }
LAB_00318ecd:
  bVar2 = false;
  bVar1 = false;
  lVar5 = unaff_RDI[0xd];
joined_r0x00318cef:
  if (lVar5 != 0) {
    unaff_RDI[0xd] = 0;
    FUN_00d50b20();
    bVar1 = bVar2;
  }
  if (!bVar1) {
    FUN_00d50b20();
  }
  return;
}


