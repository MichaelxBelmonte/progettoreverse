// Function: FUN_01274c40
// Address: 01274c40
// Size: 1476 bytes
// Class: MUAudioSourceSibilantItem


/* WARNING: Removing unreachable block (ram,0x012750b2) */
/* WARNING: Removing unreachable block (ram,0x01274d8f) */
/* WARNING: Removing unreachable block (ram,0x01274da4) */
/* WARNING: Removing unreachable block (ram,0x01274da9) */
/* WARNING: Removing unreachable block (ram,0x01274db1) */
/* WARNING: Removing unreachable block (ram,0x01274d95) */
/* WARNING: Removing unreachable block (ram,0x012751a4) */
/* WARNING: Removing unreachable block (ram,0x012751ac) */
/* WARNING: Removing unreachable block (ram,0x012751b5) */
/* WARNING: Removing unreachable block (ram,0x012750ee) */
/* WARNING: Removing unreachable block (ram,0x01275121) */
/* WARNING: Removing unreachable block (ram,0x01275126) */
/* WARNING: Removing unreachable block (ram,0x01274e58) */
/* WARNING: Removing unreachable block (ram,0x01274e61) */
/* WARNING: Removing unreachable block (ram,0x01274cd2) */
/* WARNING: Removing unreachable block (ram,0x01274cdb) */
/* WARNING: Removing unreachable block (ram,0x01274d34) */
/* WARNING: Removing unreachable block (ram,0x01274d3d) */
/* WARNING: Removing unreachable block (ram,0x01274fd6) */
/* WARNING: Removing unreachable block (ram,0x01274fe0) */
/* WARNING: Removing unreachable block (ram,0x01274fe9) */
/* WARNING: Removing unreachable block (ram,0x01275143) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_01274c40(double param_1)

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
  pthread_key_t in_ECX;
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
  pvVar6 = _pthread_getspecific(in_ECX);
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
    pvVar6 = _pthread_getspecific(in_ECX);
    if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
      in_ECX = (pthread_key_t)local_40;
    }
    FUN_013e61a0();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (local_40 != 0) {
      if (*(longlong *)(unaff_RSI + 0xa0) == 0) {
LAB_01274eb3:
        if (*(int *)(lVar11 + 0xc) < 1) {
          lVar7 = 0;
          bVar4 = false;
        }
        else {
          lVar7 = 0;
          bVar4 = false;
          lVar12 = 0;
          if (NAN(param_1)) {
            lVar7 = 0;
            bVar4 = false;
            lVar12 = **(longlong **)(lVar11 + 0x10);
            lVar9 = lVar11;
            if (lVar12 != 0) {
              if (lVar12 != 0) {
                FUN_00d50b00();
              }
              bVar4 = true;
              lVar7 = lVar12;
            }
            pvVar6 = _pthread_getspecific((pthread_key_t)lVar9);
            if (pvVar6 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0125e7c0();
            if (local_38 != '\0') {
              FUN_00d50b20();
            }
LAB_012751cc:
            *(undefined1 *)(unaff_RDI + 1) = 0;
            if ((!bVar4) && (lVar7 != 0)) {
              FUN_00d50b00();
            }
            *unaff_RDI = lVar7;
            *(undefined1 *)(unaff_RDI + 1) = 1;
            local_40 = lVar7;
            goto LAB_012751f5;
          }
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
            dVar2 = *(double *)(unaff_RSI + 0xe8);
            dVar3 = *(double *)(unaff_RSI + 0xf0);
            if ((local_38 != '\0') && (local_40 != 0)) {
              FUN_00d50b20();
            }
            if ((double)((ulonglong)(dVar1 - (dVar2 + dVar3)) & _DAT_023908f0) < param_1)
            goto LAB_012751cc;
            lVar12 = lVar12 + 1;
          } while (lVar12 < *(int *)(lVar11 + 0xc));
        }
        *(undefined1 *)(unaff_RDI + 1) = 0;
        *unaff_RDI = 0;
        local_40 = lVar7;
      }
      else {
        pvVar6 = _pthread_getspecific(in_ECX);
        lVar7 = unaff_RSI;
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        pVar10 = (pthread_key_t)lVar7;
        FUN_012dff00();
        if (local_40 == 0) goto LAB_01274eb3;
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
LAB_012751f5:
        bVar4 = false;
      }
      FUN_00d50b20();
      if ((bVar4) && (local_40 != 0)) {
        FUN_00d50b20();
      }
      goto LAB_01275217;
    }
  }
  *(undefined1 *)(unaff_RDI + 1) = 0;
  *unaff_RDI = 0;
LAB_01275217:
  if (!bVar5 && lVar11 != 0) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}


