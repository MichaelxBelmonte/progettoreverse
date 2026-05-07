// Function: FUN_01417540
// Address: 01417540
// Size: 778 bytes
// Class: MUAmplitudeAnalyzer


/* WARNING: Removing unreachable block (ram,0x014175d2) */
/* WARNING: Removing unreachable block (ram,0x014175db) */
/* WARNING: Removing unreachable block (ram,0x01417664) */
/* WARNING: Removing unreachable block (ram,0x0141766d) */

void FUN_01417540(pthread_key_t param_1)

{
  char cVar1;
  void *pvVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong unaff_RDI;
  double dVar5;
  double dVar6;
  double local_40;
  longlong local_38;
  char local_30;
  
  plVar4 = *(longlong **)(unaff_RDI + 0x60);
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    plVar4 = *(longlong **)(unaff_RDI + 0x60);
    lVar3 = FUN_00e8b990();
    if (lVar3 != 0) {
      plVar4 = (longlong *)plVar4[(ulonglong)(*(uint *)(lVar3 + 0x154) & 1) + 4];
    }
  }
  dVar5 = (double)(**(code **)(*plVar4 + 0x370))();
  *(double *)(unaff_RDI + 0x88) = dVar5 / DAT_023934d0;
  FUN_00c8e690();
  if ((local_30 == '\0') && (local_38 != 0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  ___bzero();
  lVar3 = *(longlong *)(unaff_RDI + 0x80);
  if (lVar3 == local_38) {
    FUN_00d50b20();
  }
  else {
    *(longlong *)(unaff_RDI + 0x80) = local_38;
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_00c8e690();
  if ((local_30 == '\0') && (local_38 != 0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  lVar3 = *(longlong *)(unaff_RDI + 0x78);
  if (lVar3 == local_38) {
    if (local_38 != 0) {
      FUN_00d50b20();
    }
  }
  else {
    *(longlong *)(unaff_RDI + 0x78) = local_38;
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
  }
  plVar4 = *(longlong **)(unaff_RDI + 0x60);
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    plVar4 = *(longlong **)(unaff_RDI + 0x60);
    lVar3 = FUN_00e8b990();
    if (lVar3 != 0) {
      plVar4 = (longlong *)plVar4[(ulonglong)(*(uint *)(lVar3 + 0x154) & 1) + 4];
    }
  }
  dVar6 = (double)(**(code **)(*plVar4 + 0x398))();
  dVar5 = 0.0;
  do {
    local_40 = dVar6;
    FUN_014178f0(dVar5);
    while( true ) {
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      cVar1 = FUN_0124c5d0();
      if ((cVar1 == '\0') || (cVar1 = FUN_00e34a50(), cVar1 != '\0')) {
        cVar1 = FUN_00e34a50();
        if (cVar1 == '\0') {
          plVar4 = *(longlong **)(unaff_RDI + 0x60);
          pvVar2 = _pthread_getspecific(param_1);
          if (pvVar2 != (void *)0x0) {
            plVar4 = *(longlong **)(unaff_RDI + 0x60);
            lVar3 = FUN_00e8b990();
            if (lVar3 != 0) {
              plVar4 = (longlong *)plVar4[(ulonglong)(*(uint *)(lVar3 + 0x154) & 1) + 4];
            }
          }
          dVar5 = (double)(**(code **)(*plVar4 + 0x398))();
          if (local_40 < dVar5) {
            FUN_014178f0(local_40,dVar5 - local_40);
          }
        }
        else {
          FUN_00e34a60();
        }
        return;
      }
      plVar4 = *(longlong **)(unaff_RDI + 0x60);
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        plVar4 = *(longlong **)(unaff_RDI + 0x60);
        lVar3 = FUN_00e8b990();
        if (lVar3 != 0) {
          plVar4 = (longlong *)plVar4[(ulonglong)(*(uint *)(lVar3 + 0x154) & 1) + 4];
        }
      }
      dVar6 = (double)(**(code **)(*plVar4 + 0x398))();
      if ((local_40 < dVar6) && (dVar5 = local_40, DAT_023934c8 < dVar6 - local_40)) break;
      FUN_00da68a0(DAT_023934c8);
    }
  } while( true );
}


