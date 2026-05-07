// Function: FUN_01db2dc0
// Address: 01db2dc0
// Size: 564 bytes
// Class: GNSplitView


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01db2dc0(float param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  longlong lVar3;
  float fVar4;
  double dVar5;
  float fVar6;
  float fVar7;
  float local_34;
  
  fVar7 = (float)((ulonglong)param_2 >> 0x20);
  fVar6 = (float)param_2;
  if ((*unaff_RSI != 0) && (*(int *)(*unaff_RSI + 0xc) != 0)) {
    FUN_01e3f820();
    fVar4 = (float)FUN_01db1e30();
    lVar1 = *unaff_RSI;
    if (lVar1 != 0) {
      if (0 < *(int *)(lVar1 + 0xc)) {
        lVar3 = 0;
        local_34 = param_1;
        do {
          if ((local_34 != DAT_0239424c) || (NAN(local_34) || NAN(DAT_0239424c))) {
            plVar2 = *(longlong **)(*(longlong *)(*(longlong *)(lVar1 + 0x10) + lVar3 * 8) + 0x20);
            if (plVar2 != (longlong *)0x0) {
              FUN_00d50b00();
            }
            (**(code **)(*plVar2 + 0x4d8))();
            FUN_00d50b20();
            if (*(char *)(unaff_RDI + 0x138) == '\0') {
              fVar6 = (fVar7 / fVar4) * param_1;
              if (DAT_0239424c < fVar6) goto LAB_01db2f0b;
LAB_01db2f18:
              if ((0.0 <= fVar6) || (fVar7 = DAT_02390d00, fVar6 <= DAT_02390d00)) {
                if (fVar6 <= 0.0) {
                  fVar7 = fVar6;
                  if (0.0 <= fVar6) goto LAB_01db2f70;
                  dVar5 = (double)fVar6 + _DAT_02420fa8;
                }
                else {
                  dVar5 = (double)fVar6 + _DAT_02420fb0;
                }
                fVar7 = (float)(int)dVar5;
              }
            }
            else {
              fVar6 = (fVar6 / fVar4) * param_1;
              if (fVar6 <= DAT_0239424c) goto LAB_01db2f18;
LAB_01db2f0b:
              fVar7 = DAT_02390124;
              if (DAT_02390124 <= fVar6) goto LAB_01db2f18;
            }
LAB_01db2f70:
            fVar6 = local_34;
            if (local_34 <= fVar7) {
              fVar6 = fVar7;
            }
            fVar6 = (float)(~-(uint)(fVar7 < DAT_0239424c) & (uint)fVar7 |
                           (uint)fVar6 & -(uint)(fVar7 < DAT_0239424c));
            fVar7 = local_34;
            if (fVar6 <= local_34) {
              fVar7 = fVar6;
            }
            fVar6 = (float)FUN_01db3040(~-(uint)(0.0 < fVar6) & (uint)fVar6 |
                                        (uint)fVar7 & -(uint)(0.0 < fVar6));
            fVar7 = 0.0;
            fVar6 = local_34 - fVar6;
            local_34 = fVar6;
          }
          lVar3 = lVar3 + 1;
        } while ((int)lVar3 < *(int *)(lVar1 + 0xc));
      }
      FUN_01db88f0();
    }
  }
  return;
}


