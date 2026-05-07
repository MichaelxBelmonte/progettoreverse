// Function: FUN_01a8bff0
// Address: 01a8bff0
// Size: 625 bytes
// Class: GNList


undefined1 * FUN_01a8bff0(pthread_key_t param_1,undefined8 param_2)

{
  longlong lVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  void *pvVar5;
  pthread_key_t pVar6;
  ulonglong uVar7;
  undefined1 *puVar8;
  int unaff_ESI;
  longlong *unaff_RDI;
  uint uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  longlong local_88;
  char local_80;
  
  if ((DAT_028b3060 == 0.0) && (!NAN(DAT_028b3060))) {
    (**(code **)(*unaff_RDI + 0x388))();
    lVar1 = DAT_027e2a68;
    if (DAT_027e2a68 != 0) {
      FUN_00d50b00();
    }
    fVar10 = (float)FUN_01d43d10();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    DAT_028b3060 = fVar10 / DAT_023908ec;
  }
  fVar10 = DAT_028b3060;
  lVar1 = unaff_RDI[6];
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_016caec0();
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar7 = 0;
  FUN_016c46a0(0,param_2);
  fVar11 = (float)(**(code **)(*unaff_RDI + 0x3c0))();
  fVar10 = fVar10 * DAT_0241c3ec;
  uVar9 = 1;
  while( true ) {
    pVar6 = (pthread_key_t)uVar7;
    pvVar5 = _pthread_getspecific(pVar6);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_016caec0();
    pvVar5 = _pthread_getspecific(pVar6);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_016c46a0(0,param_2);
    fVar12 = (float)(**(code **)(*unaff_RDI + 0x3c0))();
    puVar8 = &DAT_02802501;
    if (fVar10 <= fVar12 - fVar11) goto joined_r0x01a8c264;
    uVar3 = uVar9 * 2;
    uVar7 = (ulonglong)uVar3;
    uVar4 = uVar9 * -2;
    if (0 < (int)uVar3) {
      uVar4 = uVar3;
    }
    if ((unaff_ESI % (int)uVar3 >> 0x1f & uVar4) + unaff_ESI % (int)uVar3 != 0) break;
    bVar2 = 0xfa < (int)uVar9;
    uVar9 = uVar3;
    if (bVar2) {
joined_r0x01a8c264:
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      return puVar8;
    }
  }
  puVar8 = (undefined1 *)0x0;
  goto joined_r0x01a8c264;
}


