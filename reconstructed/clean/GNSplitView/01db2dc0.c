// Function: FUN_01db2dc0
// Address: 01db2dc0
// Size: 564 bytes
// Class: GNSplitView

void FUN_01db2dc0(float param_1,uint64_t param_2)

{
  int64_t lVar1;
  int64_t *plVar2;
  int64_t *arg1;
  int64_t this_ptr;
  int64_t lVar3;
  float fVar4;
  double dVar5;
  float fVar6;
  float fVar7;
  float local_34;
  
  fVar7 = (float)((uint64_t)param_2 >> 0x20);
  fVar6 = (float)param_2;
  if ((*arg1 != 0) && (*(int *)(*arg1 + 0xc) != 0)) {
    FUN_01e3f820();
    fVar4 = (float)FUN_01db1e30();
    lVar1 = *arg1;
    if (lVar1 != 0) {
      if (0 < *(int *)(lVar1 + 0xc)) {
        lVar3 = 0;
        local_34 = param_1;
        do {
          if ((local_34 != g_0239424c) || (NAN(local_34) || NAN(g_0239424c))) {
            plVar2 = *(int64_t **)(*(int64_t *)(*(int64_t *)(lVar1 + 0x10) + lVar3 * 8) + 0x20);
            if (plVar2 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
            (**(code **)(*plVar2 + 0x4d8))();
            FUN_00d50b20();
            if (*(char *)(this_ptr + 0x138) == '\0') {
              fVar6 = (fVar7 / fVar4) * param_1;
              if (g_0239424c < fVar6) goto LAB_01db2f0b;
LAB_01db2f18:
              if ((0.0 <= fVar6) || (fVar7 = g_02390d00, fVar6 <= g_02390d00)) {
                if (fVar6 <= 0.0) {
                  fVar7 = fVar6;
                  if (0.0 <= fVar6) goto LAB_01db2f70;
                  dVar5 = (double)fVar6 + g_02420fa8;
                }
                else {
                  dVar5 = (double)fVar6 + g_02420fb0;
                }
                fVar7 = (float)(int)dVar5;
              }
            }
            else {
              fVar6 = (fVar6 / fVar4) * param_1;
              if (fVar6 <= g_0239424c) goto LAB_01db2f18;
LAB_01db2f0b:
              fVar7 = g_02390124;
              if (g_02390124 <= fVar6) goto LAB_01db2f18;
            }
LAB_01db2f70:
            fVar6 = local_34;
            if (local_34 <= fVar7) {
              fVar6 = fVar7;
            }
            fVar6 = (float)(~-(uint)(fVar7 < g_0239424c) & (uint)fVar7 |
                           (uint)fVar6 & -(uint)(fVar7 < g_0239424c));
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

