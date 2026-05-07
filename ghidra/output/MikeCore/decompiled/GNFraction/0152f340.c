// Function: FUN_0152f340
// Address: 0152f340
// Size: 852 bytes
// Class: GNFraction


void FUN_0152f340(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  void *pvVar3;
  longlong lVar4;
  pthread_key_t pVar5;
  longlong *unaff_RDI;
  longlong lVar6;
  longlong lVar7;
  float fVar8;
  longlong local_40;
  char local_38;
  
  lVar2 = *unaff_RDI;
  if (0 < *(int *)(lVar2 + 0xc)) {
    lVar7 = 0;
    lVar6 = 0;
    bVar1 = false;
    do {
      pVar5 = (pthread_key_t)param_1;
      lVar2 = *(longlong *)(*(longlong *)(lVar2 + 0x10) + lVar7 * 8);
      if (lVar6 == lVar2) {
        if ((!bVar1) && (lVar6 != 0)) {
          bVar1 = true;
          FUN_00d50b00();
        }
      }
      else {
        if (lVar2 != 0) {
          FUN_00d50b00();
        }
        if ((bVar1) && (lVar6 != 0)) {
          FUN_00d50b20();
          bVar1 = true;
          lVar6 = lVar2;
        }
        else {
          bVar1 = true;
          lVar6 = lVar2;
        }
      }
      pvVar3 = _pthread_getspecific(pVar5);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0125e930();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (local_40 != 0) {
        pvVar3 = _pthread_getspecific(pVar5);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0125e930();
        pvVar3 = _pthread_getspecific(pVar5);
        lVar2 = local_40;
        if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
          lVar2 = *(longlong *)(local_40 + 0x20 + (ulonglong)(*(uint *)(lVar4 + 0x154) & 1) * 8);
        }
        fVar8 = (float)FUN_0152d500();
        if ((*(float *)(lVar2 + 0x48) != fVar8) || (NAN(*(float *)(lVar2 + 0x48)) || NAN(fVar8))) {
          FUN_00d64850();
          *(float *)(lVar2 + 0x48) = fVar8;
          FUN_00d64910();
        }
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        pvVar3 = _pthread_getspecific(pVar5);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0125e930();
        pvVar3 = _pthread_getspecific(pVar5);
        lVar2 = local_40;
        if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
          lVar2 = *(longlong *)(local_40 + 0x20 + (ulonglong)(*(uint *)(lVar4 + 0x154) & 1) * 8);
        }
        if ((*(float *)(lVar2 + 0x4c) != DAT_0239424c) ||
           (NAN(*(float *)(lVar2 + 0x4c)) || NAN(DAT_0239424c))) {
          FUN_00d64850();
          *(undefined4 *)(lVar2 + 0x4c) = 0;
          FUN_00d64910();
        }
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        pvVar3 = _pthread_getspecific(pVar5);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0125e930();
        pvVar3 = _pthread_getspecific(pVar5);
        lVar2 = local_40;
        if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
          lVar2 = *(longlong *)(local_40 + 0x20 + (ulonglong)(*(uint *)(lVar4 + 0x154) & 1) * 8);
        }
        if (*(char *)(lVar2 + 0x50) != '\0') {
          FUN_00d64850();
          *(undefined1 *)(lVar2 + 0x50) = 0;
          FUN_00d64910();
        }
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
      }
      lVar7 = lVar7 + 1;
      lVar2 = *unaff_RDI;
      param_1 = (longlong)*(int *)(lVar2 + 0xc);
    } while (lVar7 < param_1);
    if ((bVar1) && (lVar6 != 0)) {
      FUN_00d50b20();
    }
  }
  return;
}


