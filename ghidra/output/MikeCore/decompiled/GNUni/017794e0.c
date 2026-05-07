// Function: FUN_017794e0
// Address: 017794e0
// Size: 553 bytes
// Class: GNUni


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float FUN_017794e0(float param_1)

{
  void *pvVar1;
  longlong lVar2;
  pthread_key_t in_ECX;
  longlong *unaff_RDI;
  longlong *plVar3;
  float fVar4;
  double dVar5;
  float fVar6;
  
  if ((((char)unaff_RDI[0xc] != '\0') && (unaff_RDI[8] != 0)) && (unaff_RDI[10] == 0)) {
    (**(code **)(*unaff_RDI + 0x1a0))();
  }
  plVar3 = (longlong *)unaff_RDI[10];
  if (plVar3 != (longlong *)0x0) {
    if (*(float *)(unaff_RDI + 0xb) <= param_1) {
      fVar4 = *(float *)((longlong)unaff_RDI + 0x5c);
      pvVar1 = _pthread_getspecific(in_ECX);
      if (param_1 <= fVar4) {
        if (pvVar1 != (void *)0x0) {
          plVar3 = (longlong *)unaff_RDI[10];
          lVar2 = FUN_00e8b990();
          if (lVar2 != 0) {
            plVar3 = (longlong *)plVar3[(ulonglong)(*(uint *)(lVar2 + 0x154) & 1) + 4];
          }
        }
        dVar5 = (double)(**(code **)(*plVar3 + 0x380))((double)param_1);
        return (float)dVar5;
      }
      if (pvVar1 != (void *)0x0) {
        plVar3 = (longlong *)unaff_RDI[10];
        lVar2 = FUN_00e8b990();
        if (lVar2 != 0) {
          plVar3 = (longlong *)plVar3[(ulonglong)(*(uint *)(lVar2 + 0x154) & 1) + 4];
        }
      }
      dVar5 = (double)(**(code **)(*plVar3 + 0x380))(DAT_02412068);
      fVar4 = (float)dVar5;
      plVar3 = (longlong *)unaff_RDI[10];
      pvVar1 = _pthread_getspecific(in_ECX);
      if (pvVar1 != (void *)0x0) {
        plVar3 = (longlong *)unaff_RDI[10];
        lVar2 = FUN_00e8b990();
        if (lVar2 != 0) {
          plVar3 = (longlong *)plVar3[(ulonglong)(*(uint *)(lVar2 + 0x154) & 1) + 4];
        }
      }
      dVar5 = (double)(**(code **)(*plVar3 + 0x380))(DAT_024120e0);
      fVar6 = fVar4 - (float)dVar5;
      param_1 = param_1 + _DAT_024120f4;
    }
    else {
      pvVar1 = _pthread_getspecific(in_ECX);
      if (pvVar1 != (void *)0x0) {
        plVar3 = (longlong *)unaff_RDI[10];
        lVar2 = FUN_00e8b990();
        if (lVar2 != 0) {
          plVar3 = (longlong *)plVar3[(ulonglong)(*(uint *)(lVar2 + 0x154) & 1) + 4];
        }
      }
      dVar5 = (double)(**(code **)(*plVar3 + 0x380))(DAT_024179c8);
      fVar4 = (float)dVar5;
      plVar3 = (longlong *)unaff_RDI[10];
      pvVar1 = _pthread_getspecific(in_ECX);
      if (pvVar1 != (void *)0x0) {
        plVar3 = (longlong *)unaff_RDI[10];
        lVar2 = FUN_00e8b990();
        if (lVar2 != 0) {
          plVar3 = (longlong *)plVar3[(ulonglong)(*(uint *)(lVar2 + 0x154) & 1) + 4];
        }
      }
      dVar5 = (double)(**(code **)(*plVar3 + 0x380))(DAT_024120e8);
      fVar6 = fVar4 - (float)dVar5;
      param_1 = DAT_0239394c - param_1;
    }
    param_1 = param_1 * fVar6 + fVar4;
  }
  return param_1;
}


