// Function: FUN_0152f790
// Address: 0152f790
// Size: 1386 bytes
// Class: GNFraction


void FUN_0152f790(pthread_key_t param_1)

{
  longlong lVar1;
  void *pvVar2;
  char *pcVar3;
  longlong lVar4;
  undefined8 uVar5;
  double dVar6;
  pthread_key_t pVar7;
  double dVar8;
  char cVar9;
  longlong unaff_RDI;
  double local_70;
  char local_68 [8];
  longlong local_60;
  double local_58;
  double local_50;
  char local_48 [8];
  char local_40 [8];
  char local_38 [8];
  
  if (*(longlong *)(unaff_RDI + 0x60) == 0) {
    return;
  }
  if (*(longlong *)(unaff_RDI + 0x68) == 0) {
    return;
  }
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01274b60();
  local_48[0] = local_68[0];
  pcVar3 = local_48;
  if (local_68[0] != '\0') {
    pcVar3 = local_68;
  }
  *pcVar3 = '\0';
  if ((local_68[0] != '\0') && (local_70 != 0.0)) {
    FUN_00d50b20();
  }
  if (local_70 == 0.0) {
    return;
  }
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0125e930();
  local_40[0] = local_68[0];
  pcVar3 = local_40;
  if (local_68[0] != '\0') {
    pcVar3 = local_68;
  }
  *pcVar3 = '\0';
  if ((local_68[0] != '\0') && (local_70 != 0.0)) {
    FUN_00d50b20();
  }
  if (local_70 == 0.0) goto LAB_0152fcdd;
  pvVar2 = _pthread_getspecific(param_1);
  if ((pvVar2 == (void *)0x0) || (lVar4 = FUN_00e8b990(), lVar4 == 0)) {
    lVar1 = *(longlong *)((longlong)local_70 + 0x68);
    lVar4 = local_60;
  }
  else {
    lVar1 = *(longlong *)
             (*(longlong *)
               ((longlong)local_70 + 0x20 + (ulonglong)(*(uint *)(lVar4 + 0x154) & 1) * 8) + 0x68);
    lVar4 = local_60;
  }
  local_60 = lVar1;
  if (local_60 != 0) {
    FUN_00d50b00();
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01266fe0();
    pcVar3 = local_68;
    if (local_68[0] == '\0') {
      pcVar3 = local_38;
    }
    local_38[0] = local_68[0];
    *pcVar3 = '\0';
    local_50 = local_70;
    if ((local_68[0] != '\0') && (local_70 != 0.0)) {
      FUN_00d50b20();
    }
    if (local_50 != 0.0) {
      dVar8 = local_50;
      pvVar2 = _pthread_getspecific(SUB84(local_50,0));
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      pvVar2 = _pthread_getspecific(SUB84(dVar8,0));
      local_58 = local_50;
      if ((pvVar2 != (void *)0x0) && (lVar4 = FUN_00e8b990(), local_58 = local_50, lVar4 != 0)) {
        local_58 = *(double *)
                    ((longlong)local_50 + 0x20 + (ulonglong)(*(uint *)(lVar4 + 0x154) & 1) * 8);
        dVar8 = local_50;
      }
      pvVar2 = _pthread_getspecific(SUB84(dVar8,0));
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01507970();
      uVar5 = FUN_012f92d0();
      dVar8 = 1.97626258336499e-323;
      FUN_012f92f0(4,uVar5);
      FUN_015084d0();
      pvVar2 = _pthread_getspecific(SUB84(dVar8,0));
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      pvVar2 = _pthread_getspecific(SUB84(dVar8,0));
      dVar6 = local_50;
      if ((pvVar2 != (void *)0x0) && (lVar4 = FUN_00e8b990(), dVar6 = local_50, lVar4 != 0)) {
        dVar6 = *(double *)
                 ((longlong)local_50 + 0x20 + (ulonglong)(*(uint *)(lVar4 + 0x154) & 1) * 8);
        dVar8 = local_50;
      }
      local_58 = dVar6;
      pvVar2 = _pthread_getspecific(SUB84(dVar8,0));
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01508610();
      uVar5 = FUN_012f92d0();
      pVar7 = 4;
      FUN_012f92f0(4,uVar5);
      FUN_015085a0();
      pvVar2 = _pthread_getspecific(pVar7);
      if ((pvVar2 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
        pVar7 = local_50._0_4_;
      }
      pvVar2 = _pthread_getspecific(pVar7);
      dVar8 = local_70;
      if ((pvVar2 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
        dVar8 = *(double *)
                 ((longlong)local_70 + 0x20 + (ulonglong)(*(uint *)(lVar4 + 0x154) & 1) * 8);
      }
      dVar8 = (double)FUN_012f8ad0(*(undefined8 *)((longlong)dVar8 + 0x38));
      if ((*(double *)(unaff_RDI + 0x38) != dVar8) ||
         (NAN(*(double *)(unaff_RDI + 0x38)) || NAN(dVar8))) {
        local_58 = dVar8;
        FUN_00d64850();
        *(double *)(unaff_RDI + 0x38) = local_58;
        FUN_00d64910();
      }
      pvVar2 = _pthread_getspecific(pVar7);
      dVar8 = local_70;
      if ((pvVar2 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
        dVar8 = *(double *)
                 ((longlong)local_70 + 0x20 + (ulonglong)(*(uint *)(lVar4 + 0x154) & 1) * 8);
      }
      dVar8 = *(double *)((longlong)dVar8 + 0x40);
      if ((*(double *)(unaff_RDI + 0x40) != dVar8) ||
         (NAN(*(double *)(unaff_RDI + 0x40)) || NAN(dVar8))) {
        local_58 = dVar8;
        FUN_00d64850();
        *(double *)(unaff_RDI + 0x40) = local_58;
        FUN_00d64910();
      }
      pvVar2 = _pthread_getspecific(pVar7);
      if ((pvVar2 == (void *)0x0) || (lVar4 = FUN_00e8b990(), lVar4 == 0)) {
        cVar9 = *(char *)((longlong)local_70 + 0x51);
        if (*(char *)(unaff_RDI + 0x51) != cVar9) goto LAB_0152fc99;
      }
      else {
        cVar9 = *(char *)(*(longlong *)
                           ((longlong)local_70 + 0x20 +
                           (ulonglong)(*(uint *)(lVar4 + 0x154) & 1) * 8) + 0x51);
        if (*(char *)(unaff_RDI + 0x51) != cVar9) {
LAB_0152fc99:
          FUN_00d64850();
          *(char *)(unaff_RDI + 0x51) = cVar9;
          FUN_00d64910();
        }
      }
      if (local_38[0] != '\0') {
        FUN_00d50b20();
      }
    }
    FUN_00d50b20();
    lVar4 = local_60;
  }
  local_60 = lVar4;
  if (local_40[0] != '\0') {
    FUN_00d50b20();
  }
LAB_0152fcdd:
  if (local_48[0] != '\0') {
    FUN_00d50b20();
  }
  return;
}


