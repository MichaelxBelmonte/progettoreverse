// Function: FUN_0054f510
// Address: 0054f510
// Size: 534 bytes
// Class: MDURLOpenedController


undefined8 FUN_0054f510(double param_1,longlong *param_2,longlong param_3)

{
  double dVar1;
  longlong lVar2;
  void *pvVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong in_RCX;
  longlong lVar7;
  longlong lVar8;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  longlong lVar9;
  longlong lVar10;
  double dVar11;
  double dVar12;
  longlong local_38;
  
  if ((in_RCX < param_3) && (lVar2 = *(longlong *)(unaff_RDI + 0x38), lVar2 != 0)) {
    if (*(int *)(lVar2 + 0xc) < 1) {
      local_38 = 0;
      lVar8 = 0;
    }
    else {
      lVar9 = 0;
      local_38 = 0;
      lVar7 = in_RCX;
      lVar10 = 0;
      do {
        lVar8 = *(longlong *)(*(longlong *)(lVar2 + 0x10) + lVar9 * 8);
        pvVar3 = _pthread_getspecific((pthread_key_t)lVar7);
        if ((pvVar3 == (void *)0x0) || (lVar4 = FUN_00e8b990(), lVar4 == 0)) {
          dVar11 = *(double *)(lVar8 + 0x38);
          dVar12 = *(double *)(lVar8 + 0x48);
          lVar4 = lVar8;
          if (dVar11 < *(double *)(lVar8 + 0x40)) goto LAB_0054f614;
LAB_0054f625:
          dVar11 = dVar12;
        }
        else {
          lVar4 = *(longlong *)(lVar8 + 0x20 + (ulonglong)(*(uint *)(lVar4 + 0x154) & 1) * 8);
          dVar11 = *(double *)(lVar4 + 0x38);
          dVar12 = *(double *)(lVar4 + 0x48);
          if (*(double *)(lVar4 + 0x40) <= dVar11) goto LAB_0054f625;
LAB_0054f614:
          if ((dVar12 < *(double *)(lVar4 + 0x50)) && (dVar12 < dVar11)) goto LAB_0054f625;
        }
        lVar4 = FUN_00e7dae0(dVar11 * param_1);
        pvVar3 = _pthread_getspecific((pthread_key_t)lVar7);
        if ((pvVar3 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
          lVar8 = *(longlong *)(lVar8 + 0x20 + (ulonglong)(*(uint *)(lVar5 + 0x154) & 1) * 8);
        }
        dVar11 = *(double *)(lVar8 + 0x40);
        if (dVar11 <= *(double *)(lVar8 + 0x38)) {
          dVar12 = *(double *)(lVar8 + 0x50);
        }
        else {
          dVar1 = *(double *)(lVar8 + 0x50);
          dVar12 = dVar11;
          if ((*(double *)(lVar8 + 0x48) <= dVar1 && dVar1 != *(double *)(lVar8 + 0x48)) &&
             (dVar12 = dVar1, dVar1 <= dVar11)) {
            dVar12 = dVar11;
          }
        }
        lVar6 = FUN_00e7dae0(dVar12 * param_1);
        lVar8 = lVar10;
        lVar5 = local_38;
        if (((lVar4 < lVar6) &&
            (((in_RCX <= lVar4 && (lVar4 < param_3)) || ((in_RCX < lVar6 && (lVar4 <= param_3))))))
           && (lVar7 = local_38, lVar8 = lVar4, lVar5 = lVar6, lVar10 < local_38)) {
          if (lVar4 < lVar10) {
            lVar10 = lVar4;
          }
          lVar8 = lVar10;
          lVar5 = local_38;
          if (local_38 < lVar6) {
            lVar7 = lVar6;
            lVar5 = lVar6;
          }
        }
        local_38 = lVar5;
        lVar9 = lVar9 + 1;
        lVar10 = lVar8;
      } while ((int)lVar9 < *(int *)(lVar2 + 0xc));
    }
    FUN_0032bfd0();
    if (lVar8 < local_38) {
      *unaff_RSI = lVar8;
      *param_2 = local_38;
      return 1;
    }
  }
  return 0;
}


