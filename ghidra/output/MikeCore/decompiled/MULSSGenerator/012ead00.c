// Function: FUN_012ead00
// Address: 012ead00
// Size: 983 bytes
// Class: MULSSGenerator


/* WARNING: Removing unreachable block (ram,0x012eaf54) */
/* WARNING: Removing unreachable block (ram,0x012eaf61) */
/* WARNING: Removing unreachable block (ram,0x012eafa7) */
/* WARNING: Removing unreachable block (ram,0x012eafb0) */

undefined8 * FUN_012ead00(double param_1,double param_2)

{
  bool bVar1;
  bool bVar2;
  code *pcVar3;
  char cVar4;
  void *pvVar5;
  longlong lVar6;
  undefined8 *puVar7;
  pthread_key_t in_ECX;
  pthread_key_t pVar8;
  code *pcVar9;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  int iVar10;
  longlong lVar11;
  uint uVar12;
  undefined8 uVar13;
  double dVar14;
  longlong local_40;
  char local_38;
  
  if ((char)unaff_RSI[0x28] != '\0') {
    (**(code **)(*unaff_RSI + 0x1a0))();
  }
  lVar11 = unaff_RSI[0x27];
  if (lVar11 == 0) {
LAB_012eae20:
    pcVar3 = DAT_02572370;
    lVar11 = unaff_RSI[0x16];
    if (lVar11 == 0) {
      *(undefined1 *)(unaff_RDI + 1) = 0;
      puVar7 = (undefined8 *)0x0;
      goto LAB_012eb0cc;
    }
    if (*(int *)(lVar11 + 0xc) < 1) {
      bVar2 = false;
      puVar7 = (undefined8 *)0x0;
    }
    else {
      iVar10 = 0;
      puVar7 = (undefined8 *)0x0;
      bVar2 = false;
      pcVar9 = DAT_02572370;
      do {
        pvVar5 = _pthread_getspecific((pthread_key_t)pcVar9);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        cVar4 = FUN_01275560(param_1,param_2);
        if (cVar4 != '\0') {
          if (puVar7 == (undefined8 *)0x0) {
            puVar7 = (undefined8 *)FUN_00e8fc40();
            FUN_00d4ff40();
            *puVar7 = &DAT_02572358;
            (*pcVar3)();
            bVar2 = true;
          }
          pcVar9 = (code *)0x0;
          FUN_00d24b60(0,FUN_012e8c90,0);
        }
        iVar10 = iVar10 + 1;
      } while (iVar10 < *(int *)(lVar11 + 0xc));
    }
    FUN_001159b0();
    if (puVar7 != (undefined8 *)0x0) goto LAB_012eaffd;
    bVar1 = true;
    puVar7 = (undefined8 *)0x0;
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if (bVar2) goto LAB_012eb0cc;
  }
  else {
    pvVar5 = _pthread_getspecific(in_ECX);
    if (pvVar5 != (void *)0x0) {
      lVar11 = unaff_RSI[0x27];
      lVar6 = FUN_00e8b990();
      if (lVar6 != 0) {
        lVar11 = *(longlong *)(lVar11 + 0x20 + (ulonglong)(*(uint *)(lVar6 + 0x154) & 1) * 8);
      }
    }
    if (*(char *)(lVar11 + 0x38) == '\0') goto LAB_012eae20;
    puVar7 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    pVar8 = 0x2572358;
    *puVar7 = &DAT_02572358;
    (*DAT_02572370)();
    pvVar5 = _pthread_getspecific(pVar8);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar13 = FUN_015298a0(param_1,param_2);
    if (local_38 == '\0') {
      if (local_40 != 0) {
        uVar13 = FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    FUN_00d214d0(uVar13,*(undefined4 *)((longlong)puVar7 + 0xc));
    if (local_40 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    bVar2 = true;
LAB_012eaffd:
    uVar12 = *(uint *)((longlong)puVar7 + 0xc);
    if ((int)uVar12 < 1) {
      *(undefined1 *)(unaff_RDI + 1) = 0;
    }
    else {
      lVar11 = (ulonglong)uVar12 + 1;
      do {
        uVar12 = uVar12 - 1;
        pvVar5 = _pthread_getspecific(uVar12);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar14 = (double)FUN_01259520();
        if (param_1 + param_2 < dVar14) {
          FUN_00d23620();
        }
        lVar11 = lVar11 + -1;
      } while (1 < lVar11);
      *(undefined1 *)(unaff_RDI + 1) = 0;
    }
    bVar1 = false;
    if (bVar2) goto LAB_012eb0cc;
  }
  if (!bVar1) {
    FUN_00d50b00();
  }
LAB_012eb0cc:
  *unaff_RDI = puVar7;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return unaff_RDI;
}


