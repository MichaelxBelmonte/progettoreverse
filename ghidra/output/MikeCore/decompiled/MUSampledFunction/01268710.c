// Function: FUN_01268710
// Address: 01268710
// Size: 1247 bytes
// Class: MUSampledFunction


/* WARNING: Removing unreachable block (ram,0x01268b62) */
/* WARNING: Removing unreachable block (ram,0x01268860) */
/* WARNING: Removing unreachable block (ram,0x01268875) */
/* WARNING: Removing unreachable block (ram,0x0126887a) */
/* WARNING: Removing unreachable block (ram,0x01268882) */
/* WARNING: Removing unreachable block (ram,0x01268866) */
/* WARNING: Removing unreachable block (ram,0x01268a86) */
/* WARNING: Removing unreachable block (ram,0x01268a90) */
/* WARNING: Removing unreachable block (ram,0x01268a99) */
/* WARNING: Removing unreachable block (ram,0x01268805) */
/* WARNING: Removing unreachable block (ram,0x0126880e) */
/* WARNING: Removing unreachable block (ram,0x0126879d) */
/* WARNING: Removing unreachable block (ram,0x012687a6) */
/* WARNING: Removing unreachable block (ram,0x01268929) */
/* WARNING: Removing unreachable block (ram,0x01268932) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_01268710(pthread_key_t param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  bool bVar4;
  bool bVar5;
  void *pvVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  pthread_key_t pVar10;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  longlong lVar11;
  longlong lVar12;
  longlong local_40;
  char local_38;
  
  if (*(longlong *)(unaff_RSI + 0x100) == 0) {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
    return unaff_RDI;
  }
  pvVar6 = _pthread_getspecific(param_1);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e5ae0();
  if (local_40 == 0) {
    bVar5 = true;
    lVar11 = 0;
  }
  else {
    lVar11 = local_40;
    if (local_38 == '\0') {
      FUN_00d50b00();
      bVar5 = false;
    }
    else {
      bVar5 = false;
    }
  }
  FUN_0125e7c0();
  if (local_40 != 0) {
    if (local_38 == '\0') {
      FUN_00d50b00();
    }
    pvVar6 = _pthread_getspecific(param_1);
    if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
      param_1 = (pthread_key_t)local_40;
    }
    FUN_013e5de0();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (local_40 != 0) {
      if (*(longlong *)(unaff_RSI + 0xa8) == 0) {
LAB_01268986:
        if (*(int *)(lVar11 + 0xc) < 1) {
          lVar7 = 0;
          bVar4 = false;
        }
        else {
          lVar7 = 0;
          bVar4 = false;
          lVar12 = 0;
          do {
            lVar9 = *(longlong *)(*(longlong *)(lVar11 + 0x10) + lVar12 * 8);
            lVar8 = lVar11;
            if (lVar7 == lVar9) {
              if ((!bVar4) && (lVar7 != 0)) {
                bVar4 = true;
                FUN_00d50b00();
              }
            }
            else {
              if (lVar9 != 0) {
                FUN_00d50b00();
              }
              if ((bVar4) && (lVar7 != 0)) {
                FUN_00d50b20();
                bVar4 = true;
                lVar7 = lVar9;
              }
              else {
                bVar4 = true;
                lVar7 = lVar9;
              }
            }
            pVar10 = (pthread_key_t)lVar8;
            pvVar6 = _pthread_getspecific(pVar10);
            if (pvVar6 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0125e7c0();
            pvVar6 = _pthread_getspecific(pVar10);
            lVar9 = lVar7;
            if ((pvVar6 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
              lVar9 = *(longlong *)(lVar7 + 0x20 + (ulonglong)(*(uint *)(lVar8 + 0x154) & 1) * 8);
            }
            dVar1 = *(double *)(lVar9 + 0xe8);
            dVar2 = *(double *)(lVar9 + 0xf0);
            dVar3 = *(double *)(unaff_RSI + 0xe8);
            if ((local_38 != '\0') && (local_40 != 0)) {
              FUN_00d50b20();
            }
            if ((double)((ulonglong)((dVar1 + dVar2) - dVar3) & _DAT_023908f0) < _DAT_02391038) {
              *(undefined1 *)(unaff_RDI + 1) = 0;
              local_40 = lVar7;
              if (bVar4) {
                *unaff_RDI = lVar7;
                *(undefined1 *)(unaff_RDI + 1) = 1;
                bVar4 = false;
              }
              else {
                if (lVar7 != 0) {
                  FUN_00d50b00();
                }
                *unaff_RDI = lVar7;
                *(undefined1 *)(unaff_RDI + 1) = 1;
                bVar4 = false;
              }
              goto LAB_01268b86;
            }
            lVar12 = lVar12 + 1;
          } while (lVar12 < *(int *)(lVar11 + 0xc));
        }
        *(undefined1 *)(unaff_RDI + 1) = 0;
        *unaff_RDI = 0;
        local_40 = lVar7;
      }
      else {
        pvVar6 = _pthread_getspecific(param_1);
        lVar7 = unaff_RSI;
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        pVar10 = (pthread_key_t)lVar7;
        FUN_012dff70();
        if (local_40 == 0) goto LAB_01268986;
        if (local_38 == '\0') {
          FUN_00d50b00();
        }
        pvVar6 = _pthread_getspecific(pVar10);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0125e7c0();
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        *unaff_RDI = local_40;
        *(undefined1 *)(unaff_RDI + 1) = 1;
        bVar4 = false;
      }
LAB_01268b86:
      FUN_00d50b20();
      if ((bVar4) && (local_40 != 0)) {
        FUN_00d50b20();
      }
      goto LAB_01268ba5;
    }
  }
  *(undefined1 *)(unaff_RDI + 1) = 0;
  *unaff_RDI = 0;
LAB_01268ba5:
  if (!bVar5 && lVar11 != 0) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}


