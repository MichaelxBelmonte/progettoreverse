// Function: FUN_0031a860
// Address: 0031a860
// Size: 1584 bytes
// Class: GNString


/* WARNING: Removing unreachable block (ram,0x0031abdc) */
/* WARNING: Removing unreachable block (ram,0x0031abe9) */
/* WARNING: Removing unreachable block (ram,0x0031a8a1) */
/* WARNING: Removing unreachable block (ram,0x0031a8aa) */
/* WARNING: Removing unreachable block (ram,0x0031adfd) */
/* WARNING: Removing unreachable block (ram,0x0031ae0a) */
/* WARNING: Removing unreachable block (ram,0x0031aa19) */
/* WARNING: Removing unreachable block (ram,0x0031aa40) */
/* WARNING: Removing unreachable block (ram,0x0031aa1b) */
/* WARNING: Removing unreachable block (ram,0x0031aa42) */

void FUN_0031a860(pthread_key_t param_1)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  longlong *plVar4;
  char cVar5;
  void *pvVar6;
  pthread_key_t pVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *unaff_RDI;
  longlong lVar10;
  double dVar11;
  undefined8 uVar12;
  double dVar13;
  double dVar14;
  longlong local_98;
  char local_90;
  double local_88;
  longlong local_70;
  char local_68;
  longlong *local_60;
  char local_58;
  int local_48;
  
  plVar4 = local_60;
  (**(code **)(*unaff_RDI + 0x438))();
  if ((local_58 == '\0') && (local_60 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  cVar5 = (**(code **)(*unaff_RDI + 0x398))();
  if (cVar5 != '\0') {
    lVar10 = (**(code **)(*local_60 + 0x5e0))();
    unaff_RDI[6] = lVar10;
    FUN_0141cb10();
    if (local_58 == '\0') {
      if (local_60 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_58 = '\0';
    }
    (**(code **)(*local_60 + 0x690))();
    if (local_60 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    (**(code **)(*local_60 + 0x698))();
    (**(code **)(*local_60 + 0x5e0))();
    unaff_RDI[6] = unaff_RDI[7];
    (**(code **)(*unaff_RDI + 0x450))();
    (**(code **)(*unaff_RDI + 0x460))();
    goto LAB_0031ae91;
  }
  (**(code **)(*unaff_RDI + 0x438))();
  FUN_012d25b0();
  pvVar6 = _pthread_getspecific(param_1);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012cb1b0();
  if (local_58 == '\0') {
    if (local_60 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_58 = '\0';
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if ((local_90 != '\0') && (local_98 != 0)) {
    FUN_00d50b20();
  }
  if (local_60 == (longlong *)0x0) {
    local_88 = DAT_023b2568;
  }
  else {
    local_58 = '\0';
    local_60 = (longlong *)0x0;
    local_48 = -1;
    local_88 = DAT_023b2568;
    dVar11 = local_88;
    while( true ) {
      local_88 = dVar11;
      lVar10 = (longlong)local_48;
      local_48 = local_48 + 1;
      if (*(int *)((longlong)plVar4 + 0xc) <= local_48) break;
      lVar8 = plVar4[2];
      local_60 = *(longlong **)(lVar8 + 8 + lVar10 * 8);
      pvVar6 = _pthread_getspecific((pthread_key_t)lVar8);
      pVar7 = (pthread_key_t)lVar8;
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012e5ae0();
      iVar1 = *(int *)(local_70 + 0xc);
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      dVar11 = local_88;
      if (iVar1 != 0) {
        pvVar6 = _pthread_getspecific(pVar7);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar11 = (double)FUN_012ebfe0();
        if (local_88 <= dVar11) {
          dVar11 = local_88;
        }
      }
    }
    plVar9 = plVar4;
    FUN_000be170();
    param_1 = (pthread_key_t)plVar9;
    FUN_00d50b20();
  }
  (**(code **)(*unaff_RDI + 0x438))();
  FUN_012d25b0();
  pvVar6 = _pthread_getspecific(param_1);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012caf10();
  if ((local_58 == '\0') && (local_60 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if ((local_90 != '\0') && (local_98 != 0)) {
    FUN_00d50b20();
  }
  pvVar6 = _pthread_getspecific(param_1);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar12 = FUN_016cb850(~-(ulonglong)(DAT_023b2568 == local_88) & (ulonglong)local_88,0);
  pvVar6 = _pthread_getspecific(param_1);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_016cb280(uVar12,0);
  pvVar6 = _pthread_getspecific(param_1);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  dVar13 = (double)FUN_016c98e0();
  cVar5 = (**(code **)(*unaff_RDI + 0x3f8))();
  dVar11 = (double)unaff_RDI[6];
  dVar14 = (double)unaff_RDI[7];
  if (cVar5 == '\0') {
    if ((dVar11 == dVar14) && (!NAN(dVar11) && !NAN(dVar14))) goto LAB_0031ae5d;
  }
  else {
    if ((dVar11 != dVar14) || (NAN(dVar11) || NAN(dVar14))) {
      dVar14 = (double)(**(code **)(*unaff_RDI + 0x408))();
      bVar2 = NAN(dVar11);
      bVar3 = dVar11 != dVar14;
      dVar11 = (double)unaff_RDI[6];
      if ((bVar3) || (bVar2 || NAN(dVar14))) {
        if ((dVar11 != dVar13) || (NAN(dVar11) || NAN(dVar13))) {
          dVar14 = (double)unaff_RDI[7];
          goto LAB_0031ae69;
        }
      }
    }
    if ((dVar11 == (double)unaff_RDI[7]) && (!NAN(dVar11) && !NAN((double)unaff_RDI[7]))) {
      dVar14 = (double)(**(code **)(*unaff_RDI + 0x408))();
      if ((dVar11 != dVar14) || (NAN(dVar11) || NAN(dVar14))) {
        if (((double)unaff_RDI[6] != dVar13) || (NAN((double)unaff_RDI[6]) || NAN(dVar13))) {
          dVar14 = (double)(**(code **)(*unaff_RDI + 0x408))();
          goto LAB_0031ae69;
        }
      }
    }
LAB_0031ae5d:
    unaff_RDI[7] = (longlong)dVar13;
    dVar14 = dVar13;
  }
LAB_0031ae69:
  unaff_RDI[6] = (longlong)dVar14;
  (**(code **)(*unaff_RDI + 0x460))();
  if (local_60 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (plVar4 == (longlong *)0x0) {
    return;
  }
LAB_0031ae91:
  FUN_00d50b20();
  return;
}


