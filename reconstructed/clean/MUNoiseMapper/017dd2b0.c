// Function: FUN_017dd2b0
// Address: 017dd2b0
// Size: 616 bytes
// Class: MUNoiseMapper
// === MUNoiseMapper properties ===
//                   _realizations
//                   _pitchIndex
//                   _notes
//                   _noteMappingCache


uint64_t FUN_017dd2b0(void)

{
  uint uVar1;
  int64_t lVar2;
  uint uVar3;
  uint64_t uVar4;
  int64_t lVar5;
  void*arg1;
  int64_t *this_ptr;
  uint64_t extraout_XMM0_Qa;
  uint8_t in_XMM0 [16];
  uint64_t extraout_XMM0_Qb;
  uint8_t auVar6 [16];
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  
  if (arg1 != (void*)0x0) {
    uVar4 = FUN_00e7bcc0();
    in_XMM0._8_8_ = extraout_XMM0_Qb;
    in_XMM0._0_8_ = extraout_XMM0_Qa;
    *arg1 = uVar4;
  }
  lVar2 = *this_ptr;
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
        lVar2 = *(int64_t *)(lVar2 + 0x10);
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
            dVar7 = (double)((uint64_t)dVar9 & g_023908f0) +
                    (double)((uint64_t)dVar10 & g_023908f0) + dVar7;
            lVar5 = lVar5 + 2;
          } while (((int)uVar3 >> 2 & 0xfffffffeU) != (uint)lVar5);
        }
        if (((int)uVar3 >> 2 & 1U) != 0) {
          dVar9 = (double)*(int *)(lVar2 + lVar5 * 4);
          dVar7 = dVar7 + (double)(g_023908f0 & (uint64_t)dVar9);
          dVar8 = dVar8 + dVar9;
        }
      }
      uVar1 = *(uint *)(*this_ptr + 0x18);
      uVar3 = uVar1 + 3;
      if (-1 < (int)uVar1) {
        uVar3 = uVar1;
      }
      uVar3 = (int)uVar3 >> 2;
      auVar6._0_8_ = (double)(g_023945b0 & (uint64_t)(dVar8 / (double)(int)uVar3) |
                             g_023945c0) + dVar8 / (double)(int)uVar3;
      auVar6._8_8_ = _UNK_023945c8;
      auVar6 = roundsd(in_XMM0,auVar6,0xb);
      dVar8 = auVar6._0_8_;
      if (3 < (int)uVar1) {
        lVar2 = *(int64_t *)(*this_ptr + 0x10);
        if ((uVar1 & 0xfffffffc) == 4) {
          dVar11 = 0.0;
          lVar5 = 0;
        }
        else {
          dVar11 = 0.0;
          lVar5 = 0;
          do {
            dVar11 = (double)((uint64_t)((double)*(int *)(lVar2 + 4 + lVar5 * 4) - dVar8) &
                             g_023908f0) +
                     (double)((uint64_t)((double)*(int *)(lVar2 + lVar5 * 4) - dVar8) &
                             g_023908f0) + dVar11;
            lVar5 = lVar5 + 2;
          } while ((uVar3 & 0xfffffffe) != (uint)lVar5);
        }
        if ((uVar3 & 1) != 0) {
          dVar11 = dVar11 + (double)((uint64_t)((double)*(int *)(lVar2 + lVar5 * 4) - dVar8) &
                                    g_023908f0);
        }
      }
      if ((arg1 != (void*)0x0) && (((dVar7 != 0.0 || (NAN(dVar7))) && (dVar11 < dVar7)))
         ) {
        if ((double)(g_023908f0 & (uint64_t)dVar8) < (double)g_028af490) {
          dVar9 = g_0238fee8 -
                  (g_0238fee8 - (double)(g_023908f0 & (uint64_t)dVar8) / (double)g_028af490
                  ) * (double)g_028af494;
          dVar8 = g_0238fee8 - dVar9;
          FUN_00e7bcc0();
          uVar4 = FUN_00e7cd00(dVar8 * (dVar11 / dVar7) + dVar9);
          *arg1 = uVar4;
        }
      }
      uVar4 = FUN_00e7d850();
      return uVar4;
    }
  }
  return 0;
}

