// Function: FUN_0052cc40
// Address: 0052cc40
// Size: 544 bytes
// Class: Unknown


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0052cc40(undefined8 param_1)

{
  void *pvVar1;
  longlong lVar2;
  pthread_key_t in_ECX;
  float *pfVar3;
  int unaff_ESI;
  longlong unaff_RDI;
  float fVar5;
  uint in_XMM0_Dc;
  uint in_XMM0_Dd;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  longlong lVar4;
  
  fVar5 = (float)param_1 / DAT_023b4df0;
  auVar7._0_4_ = _DAT_023945e0 & (uint)fVar5;
  auVar7._4_4_ = _UNK_023945e4 & (uint)((ulonglong)param_1 >> 0x20);
  auVar7._8_4_ = _UNK_023945e8 & in_XMM0_Dc;
  auVar7._12_4_ = _UNK_023945ec & in_XMM0_Dd;
  auVar8._4_12_ = SUB1612(auVar7 | _DAT_023945f0,4);
  auVar8._0_4_ = SUB164(auVar7 | _DAT_023945f0,0) + fVar5;
  auVar6._0_12_ = ZEXT812(0);
  auVar6._12_4_ = 0;
  auVar6 = roundss(auVar6,auVar8,0xb);
  fVar5 = auVar6._0_4_ * DAT_023b4df0;
  if (unaff_ESI == 2) {
    lVar4 = *(longlong *)(unaff_RDI + 0x110);
    pvVar1 = _pthread_getspecific(in_ECX);
    if (pvVar1 != (void *)0x0) {
      lVar4 = *(longlong *)(unaff_RDI + 0x110);
      lVar2 = FUN_00e8b990();
      if (lVar2 != 0) {
        lVar4 = *(longlong *)(lVar4 + 0x20 + (ulonglong)(*(uint *)(lVar2 + 0x154) & 1) * 8);
      }
    }
    if ((*(float *)(lVar4 + 0x50) != fVar5) || (NAN(*(float *)(lVar4 + 0x50)) || NAN(fVar5))) {
      lVar4 = *(longlong *)(unaff_RDI + 0x110);
      pvVar1 = _pthread_getspecific(in_ECX);
      if (pvVar1 != (void *)0x0) {
        lVar4 = *(longlong *)(unaff_RDI + 0x110);
        lVar2 = FUN_00e8b990();
        if (lVar2 != 0) {
          lVar4 = *(longlong *)(lVar4 + 0x20 + (ulonglong)(*(uint *)(lVar2 + 0x154) & 1) * 8);
        }
      }
      pfVar3 = (float *)(lVar4 + 0x50);
LAB_0052ce38:
      *pfVar3 = fVar5;
      FUN_00b32040();
      return;
    }
  }
  else if (unaff_ESI == 1) {
    lVar4 = *(longlong *)(unaff_RDI + 0x110);
    pvVar1 = _pthread_getspecific(in_ECX);
    if (pvVar1 != (void *)0x0) {
      lVar4 = *(longlong *)(unaff_RDI + 0x110);
      lVar2 = FUN_00e8b990();
      if (lVar2 != 0) {
        lVar4 = *(longlong *)(lVar4 + 0x20 + (ulonglong)(*(uint *)(lVar2 + 0x154) & 1) * 8);
      }
    }
    if ((*(float *)(lVar4 + 0x5c) != fVar5) || (NAN(*(float *)(lVar4 + 0x5c)) || NAN(fVar5))) {
      lVar4 = *(longlong *)(unaff_RDI + 0x110);
      pvVar1 = _pthread_getspecific(in_ECX);
      if (pvVar1 != (void *)0x0) {
        lVar4 = *(longlong *)(unaff_RDI + 0x110);
        lVar2 = FUN_00e8b990();
        if (lVar2 != 0) {
          lVar4 = *(longlong *)(lVar4 + 0x20 + (ulonglong)(*(uint *)(lVar2 + 0x154) & 1) * 8);
        }
      }
      pfVar3 = (float *)(lVar4 + 0x5c);
      goto LAB_0052ce38;
    }
  }
  else if (unaff_ESI == 0) {
    lVar4 = *(longlong *)(unaff_RDI + 0x110);
    pvVar1 = _pthread_getspecific(in_ECX);
    if (pvVar1 != (void *)0x0) {
      lVar4 = *(longlong *)(unaff_RDI + 0x110);
      lVar2 = FUN_00e8b990();
      if (lVar2 != 0) {
        lVar4 = *(longlong *)(lVar4 + 0x20 + (ulonglong)(*(uint *)(lVar2 + 0x154) & 1) * 8);
      }
    }
    if ((*(float *)(lVar4 + 0x54) != fVar5) || (NAN(*(float *)(lVar4 + 0x54)) || NAN(fVar5))) {
      lVar4 = *(longlong *)(unaff_RDI + 0x110);
      pvVar1 = _pthread_getspecific(in_ECX);
      if (pvVar1 != (void *)0x0) {
        lVar4 = *(longlong *)(unaff_RDI + 0x110);
        lVar2 = FUN_00e8b990();
        if (lVar2 != 0) {
          lVar4 = *(longlong *)(lVar4 + 0x20 + (ulonglong)(*(uint *)(lVar2 + 0x154) & 1) * 8);
        }
      }
      pfVar3 = (float *)(lVar4 + 0x54);
      goto LAB_0052ce38;
    }
  }
  return;
}


