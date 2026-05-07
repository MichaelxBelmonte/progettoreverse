// Function: FUN_017dd2b0
// Address: 017dd2b0
// Size: 616 bytes
// Class: MUNoiseMapper


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_017dd2b0(void)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *unaff_RSI;
  longlong *unaff_RDI;
  undefined8 extraout_XMM0_Qa;
  undefined1 in_XMM0 [16];
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar6 [16];
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  
  if (unaff_RSI != (undefined8 *)0x0) {
    uVar4 = FUN_00e7bcc0();
    in_XMM0._8_8_ = extraout_XMM0_Qb;
    in_XMM0._0_8_ = extraout_XMM0_Qa;
    *unaff_RSI = uVar4;
  }
  lVar2 = *unaff_RDI;
  if (lVar2 != 0) {
    uVar1 = *(uint *)(lVar2 + 0x18);
    if (6 < uVar1 + 3) {
      uVar3 = uVar1 + 3;
      if (-1 < (int)uVar1) {
        uVar3 = uVar1;
      }
      dVar11 = 0.0;
      dVar7 = 0.0;
      dVar8 = 0.0;
      if (3 < (int)uVar1) {
        lVar2 = *(longlong *)(lVar2 + 0x10);
        if ((uVar1 & 0xfffffffc) == 4) {
          dVar8 = 0.0;
          lVar5 = 0;
          dVar7 = 0.0;
        }
        else {
          dVar8 = 0.0;
          lVar5 = 0;
          dVar7 = 0.0;
          do {
            dVar10 = (double)*(int *)(lVar2 + lVar5 * 4);
            dVar9 = (double)*(int *)(lVar2 + 4 + lVar5 * 4);
            dVar8 = dVar8 + dVar10 + dVar9;
            dVar7 = (double)((ulonglong)dVar9 & _DAT_023908f0) +
                    (double)((ulonglong)dVar10 & _DAT_023908f0) + dVar7;
            lVar5 = lVar5 + 2;
          } while (((int)uVar3 >> 2 & 0xfffffffeU) != (uint)lVar5);
        }
        if (((int)uVar3 >> 2 & 1U) != 0) {
          dVar9 = (double)*(int *)(lVar2 + lVar5 * 4);
          dVar7 = dVar7 + (double)(_DAT_023908f0 & (ulonglong)dVar9);
          dVar8 = dVar8 + dVar9;
        }
      }
      uVar1 = *(uint *)(*unaff_RDI + 0x18);
      uVar3 = uVar1 + 3;
      if (-1 < (int)uVar1) {
        uVar3 = uVar1;
      }
      uVar3 = (int)uVar3 >> 2;
      auVar6._0_8_ = (double)(_DAT_023945b0 & (ulonglong)(dVar8 / (double)(int)uVar3) |
                             _DAT_023945c0) + dVar8 / (double)(int)uVar3;
      auVar6._8_8_ = _UNK_023945c8;
      auVar6 = roundsd(in_XMM0,auVar6,0xb);
      dVar8 = auVar6._0_8_;
      if (3 < (int)uVar1) {
        lVar2 = *(longlong *)(*unaff_RDI + 0x10);
        if ((uVar1 & 0xfffffffc) == 4) {
          dVar11 = 0.0;
          lVar5 = 0;
        }
        else {
          dVar11 = 0.0;
          lVar5 = 0;
          do {
            dVar11 = (double)((ulonglong)((double)*(int *)(lVar2 + 4 + lVar5 * 4) - dVar8) &
                             _DAT_023908f0) +
                     (double)((ulonglong)((double)*(int *)(lVar2 + lVar5 * 4) - dVar8) &
                             _DAT_023908f0) + dVar11;
            lVar5 = lVar5 + 2;
          } while ((uVar3 & 0xfffffffe) != (uint)lVar5);
        }
        if ((uVar3 & 1) != 0) {
          dVar11 = dVar11 + (double)((ulonglong)((double)*(int *)(lVar2 + lVar5 * 4) - dVar8) &
                                    _DAT_023908f0);
        }
      }
      if ((unaff_RSI != (undefined8 *)0x0) && (((dVar7 != 0.0 || (NAN(dVar7))) && (dVar11 < dVar7)))
         ) {
        if ((double)(_DAT_023908f0 & (ulonglong)dVar8) < (double)_DAT_028af490) {
          dVar9 = DAT_0238fee8 -
                  (DAT_0238fee8 - (double)(_DAT_023908f0 & (ulonglong)dVar8) / (double)_DAT_028af490
                  ) * (double)DAT_028af494;
          dVar8 = DAT_0238fee8 - dVar9;
          FUN_00e7bcc0();
          uVar4 = FUN_00e7cd00(dVar8 * (dVar11 / dVar7) + dVar9);
          *unaff_RSI = uVar4;
        }
      }
      uVar4 = FUN_00e7d850();
      return uVar4;
    }
  }
  return 0;
}


