// Function: FUN_0190f4e0
// Address: 0190f4e0
// Size: 1524 bytes
// Class: GNString


/* WARNING: Removing unreachable block (ram,0x0190f74e) */
/* WARNING: Removing unreachable block (ram,0x0190f75a) */
/* WARNING: Removing unreachable block (ram,0x0190f885) */
/* WARNING: Removing unreachable block (ram,0x0190f891) */
/* WARNING: Removing unreachable block (ram,0x0190f656) */
/* WARNING: Removing unreachable block (ram,0x0190f65f) */
/* WARNING: Removing unreachable block (ram,0x0190f5fe) */
/* WARNING: Removing unreachable block (ram,0x0190f60b) */
/* WARNING: Removing unreachable block (ram,0x0190fa9b) */
/* WARNING: Removing unreachable block (ram,0x0190faa8) */

ulonglong FUN_0190f4e0(pthread_key_t param_1)

{
  undefined8 uVar1;
  double *pdVar2;
  longlong lVar3;
  bool bVar4;
  double dVar5;
  double dVar6;
  void *pvVar7;
  ulonglong uVar8;
  pthread_key_t pVar9;
  ulonglong uVar10;
  longlong unaff_RDI;
  longlong lVar11;
  ulonglong uVar12;
  int iVar13;
  undefined4 uVar14;
  double dVar15;
  double dVar16;
  double local_b8;
  double dStack_b0;
  longlong local_80;
  char local_78;
  longlong local_70;
  char local_68;
  undefined4 local_5c;
  ulonglong local_40;
  char local_38;
  
  if (*(longlong *)(unaff_RDI + 0x80) != 0) {
    pvVar7 = _pthread_getspecific(param_1);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_00d50130();
    if (*(longlong *)(unaff_RDI + 0x80) != 0) {
      *(undefined8 *)(unaff_RDI + 0x80) = 0;
      FUN_00d50b20();
    }
  }
  iVar13 = *(int *)(*(longlong *)(unaff_RDI + 0x78) + 0x18);
  uVar10 = (ulonglong)iVar13;
  if ((longlong)uVar10 < 0x30) {
    uVar12 = 0;
    goto LAB_0190facf;
  }
  if (iVar13 - 0x30U < 0x18) {
    pdVar2 = *(double **)(*(longlong *)(unaff_RDI + 0x78) + 0x10);
    uVar12 = 0;
    if ((pdVar2[3] - *pdVar2 <= 0.0) || (pdVar2[4] - pdVar2[1] <= 0.0)) goto LAB_0190facf;
    uVar14 = FUN_01907d60();
    if (local_40 == 0) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
      if (local_38 == '\0') {
        uVar14 = FUN_00d50b00();
      }
    }
LAB_0190f7bf:
    lVar11 = 0;
    local_80 = 0;
    local_78 = '\0';
    FUN_016c2780(uVar14,&local_80);
    uVar12 = *(ulonglong *)(unaff_RDI + 0x80);
    uVar8 = uVar12;
    if (uVar12 != local_40) {
      uVar8 = local_40;
      if (local_38 == '\0') {
        if (local_40 == 0) {
          uVar8 = 0;
          goto LAB_0190f80d;
        }
        FUN_00d50b00();
        uVar10 = *(ulonglong *)(unaff_RDI + 0x80);
        *(ulonglong *)(unaff_RDI + 0x80) = local_40;
      }
      else {
        local_38 = '\0';
LAB_0190f80d:
        *(ulonglong *)(unaff_RDI + 0x80) = uVar8;
        uVar10 = uVar12;
      }
      if (uVar10 != 0) {
        FUN_00d50b20();
        uVar8 = local_40;
      }
    }
    if ((local_38 != '\0') && (uVar8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    local_5c = 0xffffffff;
    lVar3 = *(longlong *)(unaff_RDI + 0x78);
    if ((lVar3 != 0) && (0x17 < *(int *)(lVar3 + 0x18))) {
      iVar13 = 0;
      lVar11 = 0x10;
      do {
        pVar9 = (pthread_key_t)uVar10;
        if (*(char *)(*(longlong *)(lVar3 + 0x10) + lVar11) != '\0') {
          uVar1 = *(undefined8 *)(*(longlong *)(lVar3 + 0x10) + -0x10 + lVar11);
          pvVar7 = _pthread_getspecific(pVar9);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_017049c0();
          pvVar7 = _pthread_getspecific(pVar9);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_018ffe40((int)uVar1,&local_5c);
          if (local_38 == '\0') {
            if (local_40 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_38 = '\0';
          }
          if ((local_68 != '\0') && (local_70 != 0)) {
            FUN_00d50b20();
          }
          pvVar7 = _pthread_getspecific(pVar9);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          pvVar7 = _pthread_getspecific(pVar9);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_019079b0();
          FUN_016cc400();
          if (local_40 != 0) {
            FUN_00d50b20();
          }
        }
        iVar13 = iVar13 + 1;
        uVar10 = (ulonglong)(longlong)*(int *)(lVar3 + 0x18) >> 0x3f;
        lVar11 = lVar11 + 0x18;
      } while (iVar13 < *(int *)(lVar3 + 0x18) / 0x18);
    }
    uVar12 = CONCAT71((int7)((ulonglong)lVar11 >> 8),1);
  }
  else {
    FUN_01908400();
    if (local_40 == 0) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
      if (local_38 == '\0') {
        FUN_00d50b00();
      }
    }
    pdVar2 = *(double **)(*(longlong *)(unaff_RDI + 0x78) + 0x10);
    uVar8 = 2;
    if (2 < iVar13 / 0x18) {
      uVar8 = (ulonglong)(uint)(iVar13 / 0x18);
    }
    uVar12 = 0;
    if ((0.0 < pdVar2[3] - *pdVar2) && (0.0 < pdVar2[4] - pdVar2[1])) {
      uVar12 = 0;
      lVar11 = 0;
      dVar5 = pdVar2[3];
      dVar6 = pdVar2[4];
      local_b8 = *pdVar2;
      dStack_b0 = pdVar2[1];
      do {
        dVar16 = dVar6;
        dVar15 = dVar5;
        uVar14 = FUN_01908480(SUB84(local_b8,0),dStack_b0);
        if (uVar8 * 0x18 + -0x18 == lVar11 + 0x18) goto LAB_0190f7bf;
        uVar10 = *(ulonglong *)(*(longlong *)(unaff_RDI + 0x78) + 0x10);
        pdVar2 = (double *)(uVar10 + 0x30 + lVar11);
        dVar5 = *pdVar2;
        dVar6 = pdVar2[1];
      } while ((0.0 < dVar5 - dVar15) &&
              (lVar11 = lVar11 + 0x18, local_b8 = dVar15, dStack_b0 = dVar16, 0.0 < dVar6 - dVar16))
      ;
    }
  }
  if ((bVar4) && (local_40 != 0)) {
    FUN_00d50b20();
  }
LAB_0190facf:
  return uVar12 & 0xffffffff;
}


