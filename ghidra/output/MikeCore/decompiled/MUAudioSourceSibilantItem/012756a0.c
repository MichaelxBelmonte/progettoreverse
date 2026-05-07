// Function: FUN_012756a0
// Address: 012756a0
// Size: 513 bytes
// Class: MUAudioSourceSibilantItem


/* WARNING: Removing unreachable block (ram,0x01275806) */
/* WARNING: Removing unreachable block (ram,0x0127580f) */

void FUN_012756a0(double param_1)

{
  double dVar1;
  char cVar2;
  void *pvVar3;
  pthread_key_t in_ECX;
  char unaff_SIL;
  longlong unaff_RDI;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  longlong local_38;
  char local_30;
  
  dVar6 = *(double *)(unaff_RDI + 0xb8);
  dVar7 = *(double *)(unaff_RDI + 0xc0);
  dVar1 = *(double *)(unaff_RDI + 0xf0);
  param_1 = param_1 + dVar1;
  dVar4 = dVar1 - dVar6;
  dVar5 = (dVar7 - dVar6) / dVar4;
  if ((dVar1 != param_1) || (NAN(dVar1) || NAN(param_1))) {
    FUN_00d64850();
    *(double *)(unaff_RDI + 0xf0) = param_1;
    FUN_00d64910();
    dVar6 = *(double *)(unaff_RDI + 0xb8);
    dVar7 = *(double *)(unaff_RDI + 0xc0);
    dVar4 = *(double *)(unaff_RDI + 0xf0) - dVar6;
  }
  dVar6 = dVar5 * dVar4 + dVar6;
  if ((dVar7 != dVar6) || (NAN(dVar7) || NAN(dVar6))) {
    FUN_00d64850();
    *(double *)(unaff_RDI + 0xc0) = dVar6;
    FUN_00d64910();
  }
  if ((unaff_SIL != '\0') && (*(longlong *)(unaff_RDI + 0xa0) != 0)) {
    pvVar3 = _pthread_getspecific(in_ECX);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012dff00();
    if (local_30 == '\0') {
      if (local_38 == 0) goto LAB_01275889;
      FUN_00d50b00();
    }
    else if (local_38 == 0) goto LAB_01275889;
    pvVar3 = _pthread_getspecific(in_ECX);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    cVar2 = FUN_0126ee50();
    if (cVar2 == '\0') {
      pvVar3 = _pthread_getspecific(in_ECX);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0125a5f0();
    }
    FUN_00d50b20();
  }
LAB_01275889:
  FUN_0125a5f0();
  return;
}


