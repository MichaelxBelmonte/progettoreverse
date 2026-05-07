// Function: FUN_016cc730
// Address: 016cc730
// Size: 1539 bytes
// Class: Unknown


void FUN_016cc730(pthread_key_t param_1)

{
  uint uVar1;
  longlong lVar2;
  char cVar3;
  bool bVar4;
  void *pvVar5;
  int extraout_var;
  ulonglong uVar6;
  int extraout_var_00;
  longlong lVar7;
  undefined8 uVar8;
  pthread_key_t pVar9;
  longlong lVar10;
  longlong unaff_RDI;
  ulonglong uVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined8 extraout_XMM0_Qa;
  double dVar16;
  
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  cVar3 = FUN_018fe5d0();
  if (cVar3 == '\0') {
    lVar7 = *(longlong *)(unaff_RDI + 0x60);
    uVar1 = *(uint *)(lVar7 + 0xc);
    uVar11 = (ulonglong)uVar1;
    if (1 < (int)uVar1) {
      bVar4 = false;
      while( true ) {
        lVar10 = *(longlong *)(lVar7 + 0x10);
        lVar7 = *(longlong *)(lVar10 + (ulonglong)(uVar1 - 1) * 8);
        if (lVar7 != 0) {
          FUN_00d50b00();
          lVar10 = *(longlong *)(*(longlong *)(unaff_RDI + 0x60) + 0x10);
        }
        lVar2 = *(longlong *)(lVar10 + (ulonglong)(uVar1 - 2) * 8);
        if (lVar2 != 0) {
          FUN_00d50b00();
          lVar10 = *(longlong *)(*(longlong *)(unaff_RDI + 0x60) + 0x10);
        }
        pVar9 = (pthread_key_t)lVar10;
        pvVar5 = _pthread_getspecific(pVar9);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01909dc0();
        pvVar5 = _pthread_getspecific(pVar9);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar12 = (double)FUN_018fcb10();
        FUN_00e7c260();
        pvVar5 = _pthread_getspecific(pVar9);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar13 = (double)FUN_018fcb10();
        FUN_00e7c280();
        pvVar5 = _pthread_getspecific(pVar9);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar14 = (double)FUN_018fcb10();
        FUN_00e7c280();
        pvVar5 = _pthread_getspecific(pVar9);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar15 = (double)FUN_018fcb10();
        dVar16 = (dVar13 - dVar12) / (dVar12 - dVar14);
        dVar12 = (dVar13 - dVar12) / (dVar14 - dVar15);
        if (dVar16 < DAT_0238fee8) {
          dVar16 = DAT_0238fee8 / dVar16;
        }
        if (dVar12 < DAT_0238fee8) {
          dVar12 = DAT_0238fee8 / dVar12;
        }
        pvVar5 = _pthread_getspecific(pVar9);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0190a000();
        uVar6 = FUN_00e7bcc0();
        if (((extraout_var != 0) && (uVar6 >> 0x20 != 0)) && (cVar3 = FUN_00e7c020(), cVar3 != '\0')
           ) {
          FUN_00e7bcc0();
        }
        dVar13 = (double)FUN_00e7c860();
        dVar13 = (DAT_0238fee8 / dVar13) * DAT_023942b8;
        pvVar5 = _pthread_getspecific(pVar9);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0190a000();
        pvVar5 = _pthread_getspecific(pVar9);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0190a000();
        FUN_00e7bdc0();
        uVar6 = FUN_00e7bcc0();
        if ((((((extraout_var_00 != 0) && (uVar6 >> 0x20 != 0)) &&
              (cVar3 = FUN_00e7c000(), cVar3 != '\0')) ||
             (((uVar6 = FUN_00e7bcc0(), extraout_var_00 != 0 && (uVar6 >> 0x20 != 0)) &&
              (cVar3 = FUN_00e7c000(), cVar3 != '\0')))) ||
            (((uVar6 = FUN_00e7bcc0(), extraout_var_00 != 0 && (uVar6 >> 0x20 != 0)) &&
             (cVar3 = FUN_00e7c000(), cVar3 != '\0')))) &&
           ((dVar16 < dVar13 + DAT_0238fee8 && (dVar12 < DAT_023b1e80)))) {
          bVar4 = true;
          FUN_016feca0(DAT_023b1e80,1);
        }
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        if (lVar7 != 0) {
          FUN_00d50b20();
        }
        if ((longlong)uVar11 < 3) break;
        uVar11 = uVar11 - 1;
        lVar7 = *(longlong *)(unaff_RDI + 0x60);
        uVar1 = uVar1 - 1;
      }
      if ((bVar4) && (lVar7 = *(longlong *)(unaff_RDI + 0x60), 0 < *(int *)(lVar7 + 0xc))) {
        lVar10 = 0;
        do {
          lVar7 = *(longlong *)(*(longlong *)(lVar7 + 0x10) + lVar10 * 8);
          if (lVar7 != 0) {
            FUN_00d50b00();
          }
          uVar8 = FUN_00e7bcc0();
          FUN_016f9740(extraout_XMM0_Qa,uVar8);
          if (lVar7 != 0) {
            FUN_00d50b20();
          }
          lVar10 = lVar10 + 1;
          lVar7 = *(longlong *)(unaff_RDI + 0x60);
        } while (lVar10 < *(int *)(lVar7 + 0xc));
      }
    }
  }
  return;
}


