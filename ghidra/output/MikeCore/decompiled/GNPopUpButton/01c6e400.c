// Function: FUN_01c6e400
// Address: 01c6e400
// Size: 506 bytes
// Class: GNPopUpButton


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01c6e400(pthread_key_t param_1)

{
  double dVar1;
  longlong lVar2;
  void *pvVar3;
  longlong *unaff_RDI;
  ulonglong uVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  dVar5 = DAT_02395720;
  if (unaff_RDI[0x31] != 0) {
    FUN_00d50b00();
    FUN_00d50b20();
    lVar2 = unaff_RDI[0x31];
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar5 = (double)FUN_016cd860();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  dVar1 = (double)unaff_RDI[0x38];
  dVar6 = SQRT((double)unaff_RDI[0x37] / dVar1);
  dVar7 = dVar5 / dVar6;
  dVar5 = dVar5 * dVar6;
  dVar6 = _DAT_0241eeb8;
  if (_DAT_0241eeb8 <= dVar7) {
    dVar6 = dVar7;
  }
  dVar7 = DAT_0241ea58;
  if (dVar5 <= DAT_0241ea58) {
    dVar7 = dVar5;
  }
  if ((dVar1 != dVar6) || (NAN(dVar1) || NAN(dVar6))) {
    unaff_RDI[0x38] = (longlong)dVar6;
    dVar5 = (double)_log((double)unaff_RDI[0x37] /
                         (double)(~-(ulonglong)(dVar6 == 0.0) & (ulonglong)dVar6 |
                                 DAT_0238fee8 & -(ulonglong)(dVar6 == 0.0)));
    *(float *)(unaff_RDI + 0x55) = (float)dVar5;
    (**(code **)(*unaff_RDI + 0x620))();
    *(undefined1 *)(unaff_RDI + 0x3a) = 1;
    if ((longlong *)unaff_RDI[0x46] != (longlong *)0x0) {
      (**(code **)(*(longlong *)unaff_RDI[0x46] + 0x40))();
    }
  }
  if (((double)unaff_RDI[0x37] != dVar7) || (NAN((double)unaff_RDI[0x37]) || NAN(dVar7))) {
    unaff_RDI[0x37] = (longlong)dVar7;
    uVar4 = -(ulonglong)((double)unaff_RDI[0x38] == 0.0);
    dVar5 = (double)_log(dVar7 / (double)(~uVar4 & unaff_RDI[0x38] | DAT_0238fee8 & uVar4));
    *(float *)(unaff_RDI + 0x55) = (float)dVar5;
    (**(code **)(*unaff_RDI + 0x620))();
    *(undefined1 *)(unaff_RDI + 0x3a) = 1;
    if ((longlong *)unaff_RDI[0x46] != (longlong *)0x0) {
      (**(code **)(*(longlong *)unaff_RDI[0x46] + 0x40))();
    }
  }
  if ((longlong *)unaff_RDI[0x36] == (longlong *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x01c6e5e9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)unaff_RDI[0x36] + 0x620))();
  return;
}


