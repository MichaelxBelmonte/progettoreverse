// Function: FUN_0152eef0
// Address: 0152eef0
// Size: 885 bytes
// Class: GNFraction


void FUN_0152eef0(void)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  void *pvVar5;
  longlong lVar6;
  longlong lVar7;
  pthread_key_t pVar8;
  longlong lVar9;
  longlong *unaff_RDI;
  longlong lVar10;
  longlong lVar11;
  double dVar12;
  longlong local_58;
  char local_50;
  longlong local_38;
  
  lVar6 = *unaff_RDI;
  if (0 < *(int *)(lVar6 + 0xc)) {
    lVar10 = 0;
    local_38 = 0;
    bVar2 = false;
    lVar9 = 0;
    bVar3 = false;
    lVar7 = 0;
    do {
      pVar8 = (pthread_key_t)lVar9;
      lVar6 = *(longlong *)(*(longlong *)(lVar6 + 0x10) + lVar10 * 8);
      if (local_38 == lVar6) {
        if ((!bVar2) && (local_38 != 0)) {
          bVar2 = true;
          FUN_00d50b00();
        }
      }
      else {
        if (lVar6 != 0) {
          FUN_00d50b00();
        }
        if ((bVar2) && (local_38 != 0)) {
          FUN_00d50b20();
          bVar2 = true;
          local_38 = lVar6;
        }
        else {
          bVar2 = true;
          local_38 = lVar6;
        }
      }
      pvVar5 = _pthread_getspecific(pVar8);
      if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
        pVar8 = (pthread_key_t)local_38;
      }
      FUN_0125e930();
      if (local_58 == lVar7) {
        lVar11 = lVar7;
        bVar4 = bVar3;
        if ((!bVar3) && (local_58 != 0)) {
          if (local_50 != '\0') goto LAB_0152f054;
          FUN_00d50b00();
          bVar4 = true;
        }
LAB_0152f0a9:
        if ((local_50 != '\0') && (local_58 != 0)) {
          FUN_00d50b20();
        }
        if (lVar11 == 0) goto LAB_0152ef30;
LAB_0152f0cc:
        pvVar5 = _pthread_getspecific(pVar8);
        lVar6 = lVar11;
        if ((pvVar5 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
          lVar6 = *(longlong *)(lVar11 + 0x20 + (ulonglong)(*(uint *)(lVar7 + 0x154) & 1) * 8);
        }
        pvVar5 = _pthread_getspecific(pVar8);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar12 = (double)FUN_01259650();
        if ((*(double *)(lVar6 + 0x38) != dVar12) || (NAN(*(double *)(lVar6 + 0x38)) || NAN(dVar12))
           ) {
          FUN_00d64850();
          *(double *)(lVar6 + 0x38) = dVar12;
          FUN_00d64910();
        }
        pvVar5 = _pthread_getspecific(pVar8);
        if ((pvVar5 == (void *)0x0) || (lVar6 = FUN_00e8b990(), lVar6 == 0)) {
          lVar6 = lVar11;
          if ((*(double *)(lVar11 + 0x40) != DAT_02390448) ||
             (NAN(*(double *)(lVar11 + 0x40)) || NAN(DAT_02390448))) goto LAB_0152f1d4;
        }
        else {
          lVar6 = *(longlong *)(lVar11 + 0x20 + (ulonglong)(*(uint *)(lVar6 + 0x154) & 1) * 8);
          if ((*(double *)(lVar6 + 0x40) != DAT_02390448) ||
             (NAN(*(double *)(lVar6 + 0x40)) || NAN(DAT_02390448))) {
LAB_0152f1d4:
            FUN_00d64850();
            *(undefined8 *)(lVar6 + 0x40) = 0;
            FUN_00d64910();
          }
        }
        pvVar5 = _pthread_getspecific(pVar8);
        if ((pvVar5 == (void *)0x0) || (lVar6 = FUN_00e8b990(), lVar6 == 0)) {
          cVar1 = *(char *)(lVar11 + 0x51);
          lVar6 = lVar11;
        }
        else {
          lVar6 = *(longlong *)(lVar11 + 0x20 + (ulonglong)(*(uint *)(lVar6 + 0x154) & 1) * 8);
          cVar1 = *(char *)(lVar6 + 0x51);
        }
        bVar3 = bVar4;
        if (cVar1 != '\0') {
          FUN_00d64850();
          *(undefined1 *)(lVar6 + 0x51) = 0;
          FUN_00d64910();
        }
      }
      else {
        lVar11 = local_58;
        if (local_50 == '\0') {
          if (local_58 != 0) {
            FUN_00d50b00();
          }
          bVar4 = true;
          if ((bVar3) && (lVar7 != 0)) {
            FUN_00d50b20();
          }
          goto LAB_0152f0a9;
        }
        if ((bVar3) && (lVar7 != 0)) {
          FUN_00d50b20();
        }
LAB_0152f054:
        bVar4 = true;
        if (lVar11 != 0) goto LAB_0152f0cc;
LAB_0152ef30:
        lVar11 = 0;
        bVar3 = bVar4;
      }
      lVar10 = lVar10 + 1;
      lVar6 = *unaff_RDI;
      lVar9 = (longlong)*(int *)(lVar6 + 0xc);
      lVar7 = lVar11;
    } while (lVar10 < lVar9);
    if ((bVar3) && (lVar11 != 0)) {
      FUN_00d50b20();
    }
    if ((bVar2) && (local_38 != 0)) {
      FUN_00d50b20();
    }
  }
  return;
}


