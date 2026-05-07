// Function: FUN_012976e0
// Address: 012976e0
// Size: 1035 bytes
// Class: MUAudioSourcePrincipalItem


/* WARNING: Removing unreachable block (ram,0x0129772b) */
/* WARNING: Removing unreachable block (ram,0x01297734) */
/* WARNING: Removing unreachable block (ram,0x01297804) */
/* WARNING: Removing unreachable block (ram,0x0129780d) */

longlong * FUN_012976e0(pthread_key_t param_1)

{
  double dVar1;
  double dVar2;
  longlong lVar3;
  bool bVar4;
  longlong lVar5;
  bool bVar6;
  char cVar7;
  void *pvVar8;
  longlong lVar9;
  longlong lVar10;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  longlong lVar11;
  longlong local_a0;
  char local_98;
  longlong local_78;
  char local_70;
  longlong local_38;
  
  FUN_012972e0();
  if (local_70 == '\0') {
    if (local_78 == 0) goto LAB_012977d8;
    FUN_00d50b00();
  }
  else if (local_78 == 0) {
LAB_012977d8:
    *unaff_RDI = 0;
    *(undefined1 *)(unaff_RDI + 1) = 1;
    return unaff_RDI;
  }
  pvVar8 = _pthread_getspecific(param_1);
  if (pvVar8 != (void *)0x0) {
    FUN_00e8b990();
  }
  cVar7 = FUN_013c8d70();
  if (cVar7 == '\0') {
LAB_01297a77:
    *unaff_RDI = 0;
  }
  else {
    pvVar8 = _pthread_getspecific(param_1);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e5ae0();
    if (local_70 == '\0') {
      if (local_78 == 0) goto LAB_01297a77;
      FUN_00d50b00();
    }
    else if (local_78 == 0) goto LAB_01297a77;
    if (*(int *)(local_78 + 0xc) < 1) {
      bVar4 = false;
      local_38 = 0;
    }
    else {
      lVar11 = 0;
      local_38 = 0;
      bVar4 = false;
      do {
        lVar3 = *(longlong *)(*(longlong *)(local_78 + 0x10) + lVar11 * 8);
        pvVar8 = _pthread_getspecific(param_1);
        lVar5 = local_38;
        bVar6 = bVar4;
        if ((pvVar8 == (void *)0x0) || (lVar9 = FUN_00e8b990(), lVar9 == 0)) {
          if (*(double *)(unaff_RSI + 0xe8) <= *(double *)(lVar3 + 0xe8) &&
              *(double *)(lVar3 + 0xe8) != *(double *)(unaff_RSI + 0xe8)) goto LAB_01297909;
        }
        else {
          dVar1 = *(double *)
                   (*(longlong *)(lVar3 + 0x20 + (ulonglong)(*(uint *)(lVar9 + 0x154) & 1) * 8) +
                   0xe8);
          if (*(double *)(unaff_RSI + 0xe8) <= dVar1 && dVar1 != *(double *)(unaff_RSI + 0xe8)) {
LAB_01297909:
            pvVar8 = _pthread_getspecific(param_1);
            if (pvVar8 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_012972e0();
            if ((local_98 != '\0') && (local_a0 != 0)) {
              FUN_00d50b20();
            }
            if (local_a0 == local_78) {
              if (local_38 != 0) {
                pvVar8 = _pthread_getspecific(param_1);
                lVar9 = lVar3;
                if ((pvVar8 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
                  lVar9 = *(longlong *)
                           (lVar3 + 0x20 + (ulonglong)(*(uint *)(lVar10 + 0x154) & 1) * 8);
                }
                dVar1 = *(double *)(lVar9 + 0xe8);
                pvVar8 = _pthread_getspecific(param_1);
                if ((pvVar8 == (void *)0x0) || (lVar9 = FUN_00e8b990(), lVar9 == 0)) {
                  dVar2 = *(double *)(local_38 + 0xe8);
                }
                else {
                  dVar2 = *(double *)
                           (*(longlong *)
                             (local_38 + 0x20 + (ulonglong)(*(uint *)(lVar9 + 0x154) & 1) * 8) +
                           0xe8);
                }
                if (dVar2 <= dVar1) goto LAB_0129787b;
              }
              if (lVar3 == local_38) {
                if ((!bVar4) && (lVar3 != 0)) {
                  FUN_00d50b00();
                  bVar6 = true;
                }
              }
              else {
                if (lVar3 != 0) {
                  FUN_00d50b00();
                }
                bVar6 = true;
                lVar5 = lVar3;
                if ((bVar4) && (local_38 != 0)) {
                  FUN_00d50b20();
                }
              }
            }
          }
        }
LAB_0129787b:
        bVar4 = bVar6;
        local_38 = lVar5;
        lVar11 = lVar11 + 1;
      } while ((int)lVar11 < *(int *)(local_78 + 0xc));
    }
    FUN_001159b0();
    FUN_00d50b20();
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if (bVar4) {
      *unaff_RDI = local_38;
    }
    else {
      if (local_38 == 0) {
        local_38 = 0;
      }
      else {
        FUN_00d50b00();
      }
      *unaff_RDI = local_38;
    }
  }
  *(undefined1 *)(unaff_RDI + 1) = 1;
  FUN_00d50b20();
  return unaff_RDI;
}


