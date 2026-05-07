// Function: FUN_0054ffb0
// Address: 0054ffb0
// Size: 1631 bytes
// Class: MDURLOpenedController


/* WARNING: Removing unreachable block (ram,0x00550049) */
/* WARNING: Removing unreachable block (ram,0x00550055) */
/* WARNING: Removing unreachable block (ram,0x00550028) */
/* WARNING: Removing unreachable block (ram,0x00550034) */
/* WARNING: Removing unreachable block (ram,0x00550491) */
/* WARNING: Removing unreachable block (ram,0x0055050d) */
/* WARNING: Removing unreachable block (ram,0x00550512) */
/* WARNING: Removing unreachable block (ram,0x0055051a) */
/* WARNING: Removing unreachable block (ram,0x00550497) */
/* WARNING: Removing unreachable block (ram,0x005505fb) */
/* WARNING: Removing unreachable block (ram,0x00550608) */
/* WARNING: Removing unreachable block (ram,0x005504c3) */
/* WARNING: Removing unreachable block (ram,0x005504d0) */
/* WARNING: Removing unreachable block (ram,0x00550132) */
/* WARNING: Removing unreachable block (ram,0x00550160) */
/* WARNING: Removing unreachable block (ram,0x00550134) */
/* WARNING: Removing unreachable block (ram,0x00550162) */
/* WARNING: Removing unreachable block (ram,0x00550542) */
/* WARNING: Removing unreachable block (ram,0x0055054e) */

void FUN_0054ffb0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  double dVar1;
  double dVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  longlong lVar6;
  bool bVar7;
  longlong lVar8;
  void *pvVar9;
  longlong lVar10;
  pthread_key_t pVar11;
  longlong unaff_RDI;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  longlong local_a0;
  char local_98;
  longlong local_70;
  char local_68;
  int local_58;
  longlong local_40;
  char local_38;
  
  dVar12 = (double)FUN_01266200(param_1,param_2,param_3,param_4,param_2);
  dVar13 = (double)FUN_012664b0();
  do {
    lVar6 = local_70;
    lVar8 = *(longlong *)(unaff_RDI + 0x38);
    if (lVar8 != 0) {
      FUN_00d50b00();
    }
    FUN_0054fec0();
    if (local_68 == '\0') {
      if (local_70 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_68 = '\0';
    }
    if (lVar8 != 0) {
      FUN_00d50b20();
    }
    if (local_70 == 0) {
      return;
    }
    iVar3 = *(int *)(local_70 + 0xc);
    if (iVar3 == 0) {
      bVar7 = false;
    }
    else {
      local_68 = '\0';
      local_70 = 0;
      local_58 = -1;
      bVar7 = false;
      do {
        do {
          lVar8 = (longlong)local_58;
          local_58 = local_58 + 1;
          if (*(int *)(lVar6 + 0xc) <= local_58) goto LAB_005505c0;
          lVar10 = *(longlong *)(lVar6 + 0x10);
          local_70 = *(longlong *)(lVar10 + 8 + lVar8 * 8);
          pvVar9 = _pthread_getspecific((pthread_key_t)lVar10);
          pVar11 = (pthread_key_t)lVar10;
          lVar8 = local_70;
          if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
            lVar8 = *(longlong *)(local_70 + 0x20 + (ulonglong)(*(uint *)(lVar10 + 0x154) & 1) * 8);
          }
          dVar15 = *(double *)(lVar8 + 0x38);
          dVar1 = *(double *)(lVar8 + 0x48);
          if ((*(double *)(lVar8 + 0x40) <= dVar15) ||
             ((dVar1 < *(double *)(lVar8 + 0x50) && (dVar1 < dVar15)))) {
            dVar15 = dVar1;
          }
          pvVar9 = _pthread_getspecific(pVar11);
          lVar8 = local_70;
          if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
            lVar8 = *(longlong *)(local_70 + 0x20 + (ulonglong)(*(uint *)(lVar10 + 0x154) & 1) * 8);
          }
          dVar1 = *(double *)(lVar8 + 0x40);
          if (dVar1 <= *(double *)(lVar8 + 0x38)) {
            dVar14 = *(double *)(lVar8 + 0x50);
          }
          else {
            dVar2 = *(double *)(lVar8 + 0x50);
            dVar14 = dVar1;
            if ((*(double *)(lVar8 + 0x48) <= dVar2 && dVar2 != *(double *)(lVar8 + 0x48)) &&
               (dVar14 = dVar2, dVar2 <= dVar1)) {
              dVar14 = dVar1;
            }
          }
        } while (((dVar13 <= dVar12) || (dVar14 <= dVar15)) ||
                (((dVar12 < dVar15 || (dVar14 <= dVar12)) &&
                 ((dVar13 <= dVar15 || (dVar14 < dVar12))))));
        pvVar9 = _pthread_getspecific(pVar11);
        if (pvVar9 != (void *)0x0) {
          FUN_00e8b990();
        }
        pvVar9 = _pthread_getspecific(pVar11);
        lVar8 = local_70;
        if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
          lVar8 = *(longlong *)(local_70 + 0x20 + (ulonglong)(*(uint *)(lVar10 + 0x154) & 1) * 8);
        }
        dVar15 = *(double *)(lVar8 + 0x38);
        dVar1 = *(double *)(lVar8 + 0x48);
        if ((*(double *)(lVar8 + 0x40) <= dVar15) ||
           ((dVar1 < *(double *)(lVar8 + 0x50) && (dVar1 < dVar15)))) {
          dVar15 = dVar1;
        }
        pvVar9 = _pthread_getspecific(pVar11);
        lVar8 = local_70;
        if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
          lVar8 = *(longlong *)(local_70 + 0x20 + (ulonglong)(*(uint *)(lVar10 + 0x154) & 1) * 8);
        }
        dVar1 = *(double *)(lVar8 + 0x40);
        if (dVar1 <= *(double *)(lVar8 + 0x38)) {
          dVar14 = *(double *)(lVar8 + 0x50);
        }
        else {
          dVar2 = *(double *)(lVar8 + 0x50);
          dVar14 = dVar1;
          if ((*(double *)(lVar8 + 0x48) <= dVar2 && dVar2 != *(double *)(lVar8 + 0x48)) &&
             (dVar14 = dVar2, dVar2 <= dVar1)) {
            dVar14 = dVar1;
          }
        }
        FUN_012e9900(dVar15,dVar14);
        if (local_98 == '\0') {
          if (local_a0 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_98 = '\0';
        }
        FUN_00243390();
        if (local_38 == '\0') {
          if (local_40 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        if (local_a0 != 0) {
          FUN_00d50b20();
        }
        if ((local_98 != '\0') && (local_a0 != 0)) {
          FUN_00d50b20();
        }
        if (local_40 == 0) {
LAB_00550553:
          if (local_40 != 0) goto LAB_00550558;
          bVar5 = true;
LAB_00550575:
          FUN_0054df20();
          bVar7 = true;
          bVar4 = false;
          if (!bVar5) goto LAB_005505aa;
        }
        else {
          if (*(int *)(local_40 + 0xc) != 0) {
            FUN_00550890();
            if ((local_38 != '\0') && (local_40 != 0)) {
              FUN_00d50b20();
            }
            goto LAB_00550553;
          }
LAB_00550558:
          bVar4 = true;
          bVar5 = false;
          if (*(int *)(local_40 + 0xc) == 0) goto LAB_00550575;
LAB_005505aa:
          FUN_00d50b20();
        }
      } while (bVar4);
LAB_005505c0:
      FUN_0032bfd0();
    }
    FUN_00d50b20();
    if (iVar3 == 0) {
      return;
    }
    if (!bVar7) {
      return;
    }
  } while( true );
}


