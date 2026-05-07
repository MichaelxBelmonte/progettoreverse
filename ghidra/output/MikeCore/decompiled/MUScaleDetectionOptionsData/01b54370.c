// Function: FUN_01b54370
// Address: 01b54370
// Size: 2009 bytes
// Class: MUScaleDetectionOptionsData
// String references:
//   "MUScaleDetectionOptionsData"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b54370(undefined8 *param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  longlong lVar6;
  longlong lVar7;
  char cVar8;
  int iVar9;
  undefined4 uVar10;
  void *pvVar11;
  pthread_key_t pVar12;
  undefined8 *puVar13;
  longlong unaff_RDI;
  float fVar14;
  float fVar15;
  
  lVar3 = DAT_027e4848;
  plVar1 = (longlong *)*param_1;
  puVar13 = param_1;
  if (DAT_027e4848 != 0) {
    FUN_00d50b00();
  }
  pVar12 = (pthread_key_t)puVar13;
  cVar8 = (**(code **)(*plVar1 + 0x50))();
  if (cVar8 == '\0') {
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
  }
  else {
    lVar2 = *(longlong *)(unaff_RDI + 0xa8);
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    if (lVar2 != 0) {
      lVar3 = *(longlong *)(unaff_RDI + 0xa8);
      if (lVar3 != 0) {
        FUN_00d50b00();
      }
      FUN_01ab3680();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
    }
  }
  lVar3 = DAT_027e4850;
  plVar1 = (longlong *)*param_1;
  if (DAT_027e4850 != 0) {
    FUN_00d50b00();
  }
  cVar8 = (**(code **)(*plVar1 + 0x50))();
  if (cVar8 == '\0') {
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
  }
  else {
    lVar2 = *(longlong *)(unaff_RDI + 0xb0);
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    if (lVar2 != 0) {
      lVar3 = *(longlong *)(unaff_RDI + 0xb0);
      if (lVar3 != 0) {
        FUN_00d50b00();
      }
      FUN_01ab3680();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
    }
  }
  plVar1 = (longlong *)*param_2;
  if ((DAT_02738388 == '\0') && (iVar9 = ___cxa_guard_acquire(), iVar9 != 0)) {
    _DAT_027382d8 = FUN_00e8b690();
    _DAT_027382c0 = "MUScaleDetectionOptionsData";
    _DAT_027382c8 = 0x48;
    pVar12 = 0x845ac0;
    _DAT_027382d0 = FUN_00845ac0;
    _DAT_027382e0 = 0;
    uRam00000000027382e8 = 0;
    _DAT_027382f0 = 0;
    uRam00000000027382f8 = 0;
    _DAT_02738300 = 0;
    uRam0000000002738308 = 0;
    _DAT_02738310 = 0;
    uRam0000000002738318 = 0;
    _DAT_02738320 = 0;
    uRam0000000002738328 = 0;
    _DAT_02738330 = 0;
    uRam0000000002738338 = 0;
    _DAT_02738340 = 0;
    uRam0000000002738348 = 0;
    _DAT_02738350 = 0;
    uRam0000000002738358 = 0;
    _DAT_02738360 = 0;
    uRam0000000002738368 = 0;
    _DAT_02738370 = 0;
    uRam0000000002738378 = 0;
    _DAT_02738380 = 0;
    ___cxa_guard_release();
  }
  if (plVar1 == (longlong *)0x0) {
LAB_01b5454e:
    param_2 = &DAT_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar8 = FUN_00e85ea0();
    if (cVar8 == '\0') goto LAB_01b5454e;
  }
  lVar3 = *param_2;
  lVar2 = param_2[1];
  if (((char)lVar2 != '\0') && (lVar3 != 0)) {
    FUN_00d50b00();
  }
  plVar1 = (longlong *)*param_3;
  FUN_00053ac0();
  if (plVar1 == (longlong *)0x0) {
LAB_01b5459b:
    param_3 = &DAT_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar8 = FUN_00e85ea0();
    if (cVar8 == '\0') goto LAB_01b5459b;
  }
  lVar4 = *param_3;
  lVar6 = param_3[1];
  if (((char)lVar6 != '\0') && (lVar4 != 0)) {
    FUN_00d50b00();
  }
  lVar7 = DAT_027e1470;
  plVar1 = (longlong *)*param_1;
  if (DAT_027e1470 != 0) {
    FUN_00d50b00();
  }
  cVar8 = (**(code **)(*plVar1 + 0x50))();
  if (cVar8 == '\0') {
    if (lVar7 != 0) {
      FUN_00d50b20();
    }
  }
  else if (lVar3 == 0) {
    if (lVar7 != 0) {
      FUN_00d50b20();
    }
  }
  else {
    if (lVar7 != 0) {
      FUN_00d50b20();
    }
    if (lVar4 != 0) {
      iVar9 = FUN_00d45870();
      fVar14 = (float)_logf((float)iVar9 * DAT_02394204);
      pvVar11 = _pthread_getspecific(pVar12);
      if (pvVar11 != (void *)0x0) {
        FUN_00e8b990();
      }
      iVar9 = FUN_01b56dd0();
      fVar14 = fVar14 * DAT_02394208;
      fVar15 = (float)_logf((float)iVar9 * DAT_02394204);
      if (fVar15 * DAT_02394208 + DAT_0241b664 < fVar14) {
        pvVar11 = _pthread_getspecific(pVar12);
        if (pvVar11 != (void *)0x0) {
          FUN_00e8b990();
        }
        iVar9 = FUN_00d45870();
        fVar14 = (float)_logf((float)iVar9 * DAT_02394204);
        fVar14 = (float)_exp2f((fVar14 * DAT_02394208 + DAT_023908e0) * DAT_023941f4);
        FUN_01b56de0(fVar14 * DAT_023941f8);
      }
    }
  }
  lVar7 = DAT_027e1478;
  plVar1 = (longlong *)*param_1;
  if (DAT_027e1478 != 0) {
    FUN_00d50b00();
  }
  cVar8 = (**(code **)(*plVar1 + 0x50))();
  if (cVar8 == '\0') {
    if (lVar7 != 0) {
      FUN_00d50b20();
    }
    if (lVar3 == 0) {
      bVar5 = true;
      goto LAB_01b54a6a;
    }
  }
  else {
    if (lVar3 == 0) {
      bVar5 = true;
      if (lVar7 != 0) {
        FUN_00d50b20();
      }
      goto LAB_01b54a6a;
    }
    if (lVar7 != 0) {
      FUN_00d50b20();
    }
    if (lVar4 != 0) {
      iVar9 = FUN_00d45870();
      fVar14 = (float)_logf((float)iVar9 * DAT_02394204);
      pvVar11 = _pthread_getspecific(pVar12);
      if (pvVar11 != (void *)0x0) {
        FUN_00e8b990();
      }
      iVar9 = FUN_01b56d70();
      fVar14 = fVar14 * DAT_02394208;
      fVar15 = (float)_logf((float)iVar9 * DAT_02394204);
      if (fVar14 < fVar15 * DAT_02394208 + DAT_023908e0) {
        pvVar11 = _pthread_getspecific(pVar12);
        if (pvVar11 != (void *)0x0) {
          FUN_00e8b990();
        }
        iVar9 = FUN_00d45870();
        fVar14 = (float)_logf((float)iVar9 * DAT_02394204);
        fVar14 = (float)_exp2f((fVar14 * DAT_02394208 + DAT_0241b664) * DAT_023941f4);
        FUN_01b56d80(fVar14 * DAT_023941f8);
      }
    }
  }
  pvVar11 = _pthread_getspecific(pVar12);
  if (pvVar11 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01b56e30();
  pvVar11 = _pthread_getspecific(pVar12);
  if (pvVar11 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar10 = FUN_01b56d10();
  pvVar11 = _pthread_getspecific(pVar12);
  if (pvVar11 != (void *)0x0) {
    FUN_00e8b990();
  }
  iVar9 = FUN_01b56d70();
  fVar14 = (float)_logf((float)iVar9 * DAT_02394204);
  pvVar11 = _pthread_getspecific(pVar12);
  if (pvVar11 != (void *)0x0) {
    FUN_00e8b990();
  }
  iVar9 = FUN_01b56dd0();
  fVar14 = fVar14 * DAT_02394208;
  fVar15 = (float)_logf((float)iVar9 * DAT_02394204);
  FUN_01b17000((int)fVar14,uVar10,(int)(fVar15 * DAT_02394208));
  bVar5 = false;
LAB_01b54a6a:
  if (((char)lVar6 != '\0') && (lVar4 != 0)) {
    FUN_00d50b20();
  }
  if ((char)lVar2 != '\0' && !bVar5) {
    FUN_00d50b20();
  }
  return;
}


