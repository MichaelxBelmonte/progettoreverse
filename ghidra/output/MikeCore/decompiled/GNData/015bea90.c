// Function: FUN_015bea90
// Address: 015bea90
// Size: 2158 bytes
// Class: GNData


/* WARNING: Removing unreachable block (ram,0x015bebb3) */
/* WARNING: Removing unreachable block (ram,0x015bebbc) */
/* WARNING: Removing unreachable block (ram,0x015bf26d) */
/* WARNING: Removing unreachable block (ram,0x015bf276) */

void FUN_015bea90(undefined8 param_1,undefined8 param_2,size_t param_3)

{
  longlong *plVar1;
  void *pvVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  pthread_key_t pVar8;
  undefined4 uVar9;
  longlong lVar10;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  float fVar11;
  float fVar12;
  float fVar13;
  longlong local_60;
  char local_58;
  
  uVar9 = (undefined4)((ulonglong)param_1 >> 0x20);
  pVar8 = (pthread_key_t)param_1;
  lVar10 = *unaff_RSI;
  pvVar2 = _pthread_getspecific(pVar8);
  if (pvVar2 != (void *)0x0) {
    lVar10 = *unaff_RSI;
    lVar3 = FUN_00e8b990();
    if (lVar3 != 0) {
      lVar10 = *(longlong *)(lVar10 + 0x20 + (ulonglong)(*(uint *)(lVar3 + 0x154) & 1) * 8);
    }
  }
  lVar10 = *(longlong *)(lVar10 + 0x58);
  if (lVar10 != 0) {
    FUN_00d50b00();
  }
  lVar3 = *unaff_RSI;
  pvVar2 = _pthread_getspecific(pVar8);
  if (pvVar2 != (void *)0x0) {
    lVar3 = *unaff_RSI;
    lVar4 = FUN_00e8b990();
    if (lVar4 != 0) {
      lVar3 = *(longlong *)(lVar3 + 0x20 + (ulonglong)(*(uint *)(lVar4 + 0x154) & 1) * 8);
    }
  }
  lVar3 = *(longlong *)(lVar3 + 0x50);
  if (lVar3 != 0) {
    FUN_00d50b00();
  }
  lVar4 = *unaff_RSI;
  pvVar2 = _pthread_getspecific(pVar8);
  if (pvVar2 != (void *)0x0) {
    lVar4 = *unaff_RSI;
    lVar5 = FUN_00e8b990();
    if (lVar5 != 0) {
      lVar4 = *(longlong *)(lVar4 + 0x20 + (ulonglong)(*(uint *)(lVar5 + 0x154) & 1) * 8);
    }
  }
  lVar4 = *(longlong *)(lVar4 + 0x60);
  if (lVar4 != 0) {
    FUN_00d50b00();
  }
  FUN_00c8e690();
  if ((local_58 == '\0') && (local_60 != 0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  lVar5 = *unaff_RSI;
  pvVar2 = _pthread_getspecific(pVar8);
  if (pvVar2 != (void *)0x0) {
    lVar5 = *unaff_RSI;
    lVar6 = FUN_00e8b990();
    if (lVar6 != 0) {
      lVar5 = *(longlong *)(lVar5 + 0x20 + (ulonglong)(*(uint *)(lVar6 + 0x154) & 1) * 8);
    }
  }
  if (*(char *)(lVar5 + 0x9c) == '\0') {
    FUN_015bc030();
    *(undefined1 *)(lVar5 + 0x9c) = 1;
  }
  lVar5 = *unaff_RSI;
  pvVar2 = _pthread_getspecific(pVar8);
  if (pvVar2 != (void *)0x0) {
    lVar5 = *unaff_RSI;
    lVar6 = FUN_00e8b990();
    if (lVar6 != 0) {
      lVar5 = *(longlong *)(lVar5 + 0x20 + (ulonglong)(*(uint *)(lVar6 + 0x154) & 1) * 8);
    }
  }
  if (0 < *(int *)(unaff_RDI + 0x44)) {
    fVar13 = *(float *)(lVar5 + 0x94) + DAT_02390124;
    fVar13 = (float)(-(uint)(fVar13 < DAT_02390124) & (uint)(fVar13 + fVar13 + DAT_02390d00) |
                    ~-(uint)(fVar13 < DAT_02390124) & (uint)fVar13);
    plVar1 = (longlong *)(lVar10 + 0x10);
    if (fVar13 <= DAT_02390124) {
      lVar5 = 0;
      fVar12 = DAT_0240d16c;
      if (DAT_02390124 < fVar13) {
        do {
          fVar13 = *(float *)(*(longlong *)(lVar3 + 0x10) + lVar5 * 4);
          if (fVar12 <= fVar13) {
            fVar12 = fVar13;
          }
          pvVar2 = _pthread_getspecific(pVar8);
          if (pvVar2 != (void *)0x0) {
            FUN_00e8b990();
          }
          fVar13 = (float)FUN_015b8f00(fVar12,0);
          fVar12 = DAT_0240d16c;
          plVar7 = plVar1;
          if (lVar5 == 0) {
            plVar7 = (longlong *)(*(longlong *)(unaff_RDI + 0x58) + 0x10);
          }
          fVar13 = fVar13 * *(float *)(*plVar7 + lVar5 * 4);
          fVar11 = DAT_0240d16c;
          if (DAT_0240d16c <= fVar13) {
            fVar11 = fVar13;
          }
          *(float *)(*(longlong *)(local_60 + 0x10) + lVar5 * 4) = fVar11;
          lVar5 = lVar5 + 1;
        } while (lVar5 < *(int *)(unaff_RDI + 0x44));
      }
      else {
        do {
          fVar13 = *(float *)(*(longlong *)(lVar3 + 0x10) + lVar5 * 4);
          if (fVar12 <= fVar13) {
            fVar12 = fVar13;
          }
          pvVar2 = _pthread_getspecific(pVar8);
          if (pvVar2 != (void *)0x0) {
            FUN_00e8b990();
          }
          fVar13 = (float)FUN_015b8f00(fVar12,0);
          fVar12 = DAT_0240d16c;
          plVar7 = plVar1;
          if (lVar5 == 0) {
            plVar7 = (longlong *)(*(longlong *)(unaff_RDI + 0x58) + 0x10);
          }
          fVar11 = fVar13 * *(float *)(*(longlong *)(lVar4 + 0x10) + lVar5 * 4) *
                   *(float *)(*plVar7 + lVar5 * 4);
          fVar13 = DAT_0240d16c;
          if (DAT_0240d16c <= fVar11) {
            fVar13 = fVar11;
          }
          *(float *)(*(longlong *)(local_60 + 0x10) + lVar5 * 4) = fVar13;
          lVar5 = lVar5 + 1;
        } while (lVar5 < *(int *)(unaff_RDI + 0x44));
      }
    }
    else if (fVar13 <= DAT_02390124) {
      lVar5 = 0;
      do {
        fVar13 = *(float *)(*(longlong *)(lVar3 + 0x10) + lVar5 * 4) *
                 *(float *)(*(longlong *)(lVar4 + 0x10) + lVar5 * 4);
        pvVar2 = _pthread_getspecific(pVar8);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        fVar12 = DAT_0240d16c;
        if (DAT_0240d16c <= fVar13) {
          fVar12 = fVar13;
        }
        fVar13 = (float)FUN_015b8f00(fVar12,0);
        plVar7 = plVar1;
        if (lVar5 == 0) {
          plVar7 = (longlong *)(*(longlong *)(unaff_RDI + 0x58) + 0x10);
        }
        fVar12 = fVar13 * *(float *)(*(longlong *)(lVar4 + 0x10) + lVar5 * 4) *
                 *(float *)(*plVar7 + lVar5 * 4);
        fVar13 = DAT_0240d16c;
        if (DAT_0240d16c <= fVar12) {
          fVar13 = fVar12;
        }
        *(float *)(*(longlong *)(local_60 + 0x10) + lVar5 * 4) = fVar13;
        lVar5 = lVar5 + 1;
      } while (lVar5 < *(int *)(unaff_RDI + 0x44));
    }
    else {
      lVar5 = 0;
      do {
        fVar13 = *(float *)(*(longlong *)(lVar3 + 0x10) + lVar5 * 4) *
                 *(float *)(*(longlong *)(lVar4 + 0x10) + lVar5 * 4);
        pvVar2 = _pthread_getspecific(pVar8);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        fVar12 = DAT_0240d16c;
        if (DAT_0240d16c <= fVar13) {
          fVar12 = fVar13;
        }
        fVar13 = (float)FUN_015b8f00(fVar12,0);
        plVar7 = plVar1;
        if (lVar5 == 0) {
          plVar7 = (longlong *)(*(longlong *)(unaff_RDI + 0x58) + 0x10);
        }
        fVar13 = fVar13 * *(float *)(*plVar7 + lVar5 * 4);
        fVar12 = DAT_0240d16c;
        if (DAT_0240d16c <= fVar13) {
          fVar12 = fVar13;
        }
        *(float *)(*(longlong *)(local_60 + 0x10) + lVar5 * 4) = fVar12;
        lVar5 = lVar5 + 1;
      } while (lVar5 < *(int *)(unaff_RDI + 0x44));
    }
  }
  if ((*(float *)(unaff_RDI + 0x94) != 0.0) || (NAN(*(float *)(unaff_RDI + 0x94)))) {
    FUN_00d64850();
    *(undefined4 *)(unaff_RDI + 0x94) = 0;
    FUN_00d64910();
  }
  lVar5 = *unaff_RSI;
  pvVar2 = _pthread_getspecific(pVar8);
  if (pvVar2 != (void *)0x0) {
    lVar5 = *unaff_RSI;
    lVar6 = FUN_00e8b990();
    if (lVar6 != 0) {
      lVar5 = *(longlong *)(lVar5 + 0x20 + (ulonglong)(*(uint *)(lVar6 + 0x154) & 1) * 8);
    }
  }
  fVar13 = *(float *)(lVar5 + 0x90);
  if ((*(float *)(unaff_RDI + 0x90) != fVar13) || (NAN(*(float *)(unaff_RDI + 0x90)) || NAN(fVar13))
     ) {
    FUN_00d64850();
    *(float *)(unaff_RDI + 0x90) = fVar13;
    FUN_00d64910();
  }
  lVar5 = *unaff_RSI;
  pvVar2 = _pthread_getspecific(pVar8);
  if (pvVar2 != (void *)0x0) {
    lVar5 = *unaff_RSI;
    lVar6 = FUN_00e8b990();
    if (lVar6 != 0) {
      lVar5 = *(longlong *)(lVar5 + 0x20 + (ulonglong)(*(uint *)(lVar6 + 0x154) & 1) * 8);
    }
  }
  fVar13 = *(float *)(lVar5 + 0xa4);
  if ((*(float *)(unaff_RDI + 0xa4) != fVar13) || (NAN(*(float *)(unaff_RDI + 0xa4)) || NAN(fVar13))
     ) {
    FUN_00d64850();
    *(float *)(unaff_RDI + 0xa4) = fVar13;
    FUN_00d64910();
  }
  lVar5 = *unaff_RSI;
  pvVar2 = _pthread_getspecific(pVar8);
  if (pvVar2 != (void *)0x0) {
    lVar5 = *unaff_RSI;
    lVar6 = FUN_00e8b990();
    if (lVar6 != 0) {
      lVar5 = *(longlong *)(lVar5 + 0x20 + (ulonglong)(*(uint *)(lVar6 + 0x154) & 1) * 8);
    }
  }
  fVar13 = *(float *)(lVar5 + 0xa0);
  if ((*(float *)(unaff_RDI + 0xa0) != fVar13) || (NAN(*(float *)(unaff_RDI + 0xa0)) || NAN(fVar13))
     ) {
    FUN_00d64850();
    *(float *)(unaff_RDI + 0xa0) = fVar13;
    FUN_00d64910();
  }
  lVar5 = *unaff_RSI;
  pvVar2 = _pthread_getspecific(pVar8);
  if (pvVar2 != (void *)0x0) {
    lVar5 = *unaff_RSI;
    lVar6 = FUN_00e8b990();
    if (lVar6 != 0) {
      lVar5 = *(longlong *)(lVar5 + 0x20 + (ulonglong)(*(uint *)(lVar6 + 0x154) & 1) * 8);
    }
  }
  fVar13 = *(float *)(lVar5 + 0xa8);
  if ((*(float *)(unaff_RDI + 0xa8) != fVar13) || (NAN(*(float *)(unaff_RDI + 0xa8)) || NAN(fVar13))
     ) {
    FUN_00d64850();
    *(float *)(unaff_RDI + 0xa8) = fVar13;
    FUN_00d64910();
  }
  FUN_015b7cb0();
  FUN_00c8e690();
  if ((local_58 == '\0') && (local_60 != 0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  if (3 < (int)*(uint *)(local_60 + 0x18)) {
    _memset_pattern16((void *)CONCAT44(uVar9,pVar8),
                      (void *)((ulonglong)((*(uint *)(local_60 + 0x18) >> 2) - 1) * 4 + 4),param_3);
  }
  FUN_015b92d0();
  FUN_00d50b20();
  if (local_60 != 0) {
    FUN_00d50b20();
  }
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  if (lVar10 != 0) {
    FUN_00d50b20();
  }
  return;
}


