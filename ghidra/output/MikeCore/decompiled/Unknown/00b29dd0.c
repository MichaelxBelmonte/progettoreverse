// Function: FUN_00b29dd0
// Address: 00b29dd0
// Size: 732 bytes
// Class: Unknown


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * FUN_00b29dd0(void *param_1,size_t param_2)

{
  uint uVar1;
  double dVar2;
  uint *puVar3;
  void *pvVar4;
  void *pvVar5;
  void *pvVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  uint unaff_ESI;
  uint unaff_EDI;
  ulonglong uVar10;
  longlong lVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  
  uVar10 = (ulonglong)unaff_EDI;
  puVar3 = _calloc((size_t)param_1,param_2);
  if (puVar3 != (uint *)0x0) {
    puVar3[1] = 0x31;
    *puVar3 = unaff_EDI;
    puVar3[2] = unaff_ESI;
    uVar9 = (ulonglong)(unaff_EDI + 0x30) % (ulonglong)unaff_EDI;
    puVar3[3] = (unaff_EDI + 0x30) / unaff_EDI;
    pvVar4 = _calloc((size_t)param_1,(size_t)uVar9);
    *(void **)(puVar3 + 4) = pvVar4;
    if (pvVar4 != (void *)0x0) {
      if (unaff_EDI != 0) {
        lVar11 = 0;
        do {
          pvVar5 = _calloc((size_t)param_1,(size_t)uVar9);
          *(void **)((longlong)pvVar4 + lVar11 + 8) = pvVar5;
          pvVar6 = _calloc((size_t)param_1,(size_t)uVar9);
          *(void **)((longlong)pvVar4 + lVar11 + 0x10) = pvVar6;
          if ((pvVar5 == (void *)0x0) || (pvVar6 == (void *)0x0)) goto LAB_00b2a04a;
          lVar11 = lVar11 + 0x18;
        } while (uVar10 * 0x18 != lVar11);
      }
      pvVar5 = _calloc((size_t)param_1,(size_t)uVar9);
      *(void **)(puVar3 + 6) = pvVar5;
      if (pvVar5 != (void *)0x0) {
        if (unaff_ESI == 0) {
LAB_00b29f03:
          uVar7 = 0;
          dVar14 = 0.0;
          uVar9 = _DAT_023908f0;
          dVar12 = DAT_0238fee8;
          dVar15 = DAT_023d7d68;
          do {
            if (dVar15 < (double)((ulonglong)(dVar14 + _DAT_024111c8) & uVar9)) {
              dVar15 = ((dVar14 + _DAT_024111c8) * DAT_023d5998) / (double)uVar10;
              dVar12 = (double)_sin(dVar15);
              dVar12 = dVar12 / dVar15;
            }
            dVar13 = (double)_cos((dVar14 * DAT_02411080) / DAT_023b7c08);
            dVar15 = DAT_023d7d68;
            uVar9 = _DAT_023908f0;
            dVar2 = DAT_0238fee8;
            dVar12 = (DAT_0238fee8 - dVar13) * DAT_023942d0 * dVar12;
            if (DAT_023d7d68 < (double)((ulonglong)dVar12 & _DAT_023908f0)) {
              uVar8 = (ulonglong)uVar7 % uVar10;
              uVar1 = *(uint *)((longlong)pvVar4 + uVar8 * 0x18);
              *(uint *)((longlong)pvVar4 + uVar8 * 0x18) = uVar1 + 1;
              *(double *)
               (*(longlong *)((longlong)pvVar4 + uVar8 * 0x18 + 0x10) + (ulonglong)uVar1 * 8) =
                   dVar12;
              *(uint *)(*(longlong *)((longlong)pvVar4 + uVar8 * 0x18 + 8) + (ulonglong)uVar1 * 4) =
                   uVar7 / unaff_EDI;
            }
            dVar14 = dVar14 + dVar2;
            uVar7 = uVar7 + 1;
            dVar12 = dVar2;
          } while (uVar7 != 0x31);
          return puVar3;
        }
        uVar8 = 0;
LAB_00b29ee0:
        pvVar6 = _calloc((size_t)param_1,(size_t)uVar9);
        *(void **)((longlong)pvVar5 + uVar8 * 8) = pvVar6;
        if (pvVar6 != (void *)0x0) goto code_r0x00b29efa;
        uVar9 = 0;
        do {
          _free(param_1);
          uVar9 = uVar9 + 1;
        } while (unaff_ESI != uVar9);
        _free(param_1);
      }
LAB_00b2a04a:
      if (unaff_EDI != 0) {
        lVar11 = 0;
        do {
          _free(param_1);
          _free(param_1);
          lVar11 = lVar11 + 0x18;
        } while (uVar10 * 0x18 != lVar11);
      }
      _free(param_1);
    }
    _free(param_1);
  }
  return (uint *)0x0;
code_r0x00b29efa:
  uVar8 = uVar8 + 1;
  if (unaff_ESI == uVar8) goto LAB_00b29f03;
  goto LAB_00b29ee0;
}


