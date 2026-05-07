// Function: FUN_0172f600
// Address: 0172f600
// Size: 1609 bytes
// Class: GNString
// String references:
//   "(0 <= index) && (index < _elements->getCount())"


/* WARNING: Removing unreachable block (ram,0x0172fc00) */
/* WARNING: Removing unreachable block (ram,0x0172fc0d) */
/* WARNING: Removing unreachable block (ram,0x0172fc32) */
/* WARNING: Removing unreachable block (ram,0x0172fc3f) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_0172f600(undefined8 param_1)

{
  double dVar1;
  double dVar2;
  longlong *plVar3;
  char cVar4;
  undefined4 uVar5;
  int iVar6;
  void *pvVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong *plVar10;
  pthread_key_t unaff_ESI;
  longlong unaff_RDI;
  float fVar11;
  float fVar12;
  longlong local_58;
  char local_50;
  longlong *local_40;
  char local_38;
  
  if ((int)unaff_ESI < 0) {
    FUN_016aea20(param_1,"(0 <= index) && (index < _elements->getCount())");
    return 0;
  }
  lVar8 = *(longlong *)(unaff_RDI + 0x10);
  if (*(int *)(lVar8 + 0xc) <= (int)unaff_ESI) {
    FUN_016aea20(param_1,"(0 <= index) && (index < _elements->getCount())");
    lVar8 = *(longlong *)(unaff_RDI + 0x10);
  }
  if (*(int *)(lVar8 + 0xc) <= (int)unaff_ESI) {
    return 0;
  }
  pvVar7 = _pthread_getspecific(unaff_ESI);
  if ((pvVar7 == (void *)0x0) || (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
    cVar4 = FUN_0125a2d0();
    if (cVar4 == '\0') goto LAB_0172f6df;
LAB_0172f68d:
    pvVar7 = _pthread_getspecific(unaff_ESI);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    fVar11 = (float)FUN_0125a2c0();
    fVar12 = (float)_exp2f(DAT_023941f4 * fVar11);
    *(float *)(unaff_RDI + 0x18) = fVar12 * DAT_023941f8;
    pvVar7 = _pthread_getspecific(unaff_ESI);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0125e930();
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (local_40 != (longlong *)0x0) {
      pvVar7 = _pthread_getspecific(unaff_ESI);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0125e930();
      pvVar7 = _pthread_getspecific(unaff_ESI);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0152ebe0();
      if (local_38 == '\0') {
        if (local_40 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      pvVar7 = _pthread_getspecific(unaff_ESI);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar5 = FUN_01507f00();
      *(undefined4 *)(unaff_RDI + 0x1c) = uVar5;
      pvVar7 = _pthread_getspecific(unaff_ESI);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01508450();
      pvVar7 = _pthread_getspecific(unaff_ESI);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      pvVar7 = _pthread_getspecific(unaff_ESI);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar9 = FUN_01507970();
      unaff_ESI = 0;
      FUN_01510b20(0,uVar9,0,unaff_RDI + 0x44);
      if ((local_38 == '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b00();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if (local_40 != (longlong *)0x0) {
        pvVar7 = _pthread_getspecific(unaff_ESI);
        plVar10 = local_40;
        if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
          plVar10 = (longlong *)local_40[(ulonglong)(*(uint *)(lVar8 + 0x154) & 1) + 4];
        }
        uVar5 = (**(code **)(*plVar10 + 0x370))();
        *(undefined4 *)(unaff_RDI + 0x1c) = uVar5;
        FUN_00d50b20();
      }
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      goto LAB_0172f991;
    }
    iVar6 = (int)(fVar11 / DAT_023908e0 + DAT_0239011c);
  }
  else {
    cVar4 = FUN_0125a2d0();
    if (cVar4 != '\0') goto LAB_0172f68d;
LAB_0172f6df:
    *(undefined4 *)(unaff_RDI + 0x18) = 0;
    iVar6 = -0x80000000;
  }
  *(int *)(unaff_RDI + 0x1c) = iVar6;
LAB_0172f991:
  plVar10 = DAT_028adb48;
  pvVar7 = _pthread_getspecific(unaff_ESI);
  plVar3 = DAT_028adb48;
  if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), plVar10 = plVar3, lVar8 != 0)) {
    plVar10 = (longlong *)plVar3[(ulonglong)(*(uint *)(lVar8 + 0x154) & 1) + 4];
  }
  pvVar7 = _pthread_getspecific(unaff_ESI);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0126cd70();
  fVar12 = (float)(**(code **)(*plVar10 + 0x390))();
  fVar11 = DAT_02390124;
  if (fVar12 * _DAT_02411d6c <= DAT_02390124) {
    fVar11 = fVar12 * _DAT_02411d6c;
  }
  *(float *)(unaff_RDI + 0x20) = fVar11;
  pvVar7 = _pthread_getspecific(unaff_ESI);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar9 = FUN_0125a280();
  *(undefined8 *)(unaff_RDI + 0x24) = uVar9;
  pvVar7 = _pthread_getspecific(unaff_ESI);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  dVar1 = (double)FUN_0125a280();
  pvVar7 = _pthread_getspecific(unaff_ESI);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  dVar2 = (double)FUN_01264310();
  *(double *)(unaff_RDI + 0x2c) = (dVar1 + dVar2) - *(double *)(unaff_RDI + 0x24);
  pvVar7 = _pthread_getspecific(unaff_ESI);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  dVar1 = (double)FUN_0125a280();
  pvVar7 = _pthread_getspecific(unaff_ESI);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  dVar2 = (double)FUN_01264380();
  *(double *)(unaff_RDI + 0x34) = (dVar1 + dVar2) - *(double *)(unaff_RDI + 0x24);
  pvVar7 = _pthread_getspecific(unaff_ESI);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  dVar1 = (double)FUN_0125a280();
  pvVar7 = _pthread_getspecific(unaff_ESI);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  dVar2 = (double)FUN_01264170();
  *(double *)(unaff_RDI + 0x3c) = (dVar1 + dVar2) - *(double *)(unaff_RDI + 0x24);
  return unaff_RDI + 0x18;
}


