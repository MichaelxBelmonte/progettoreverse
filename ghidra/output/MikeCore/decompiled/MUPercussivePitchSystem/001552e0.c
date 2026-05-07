// Function: FUN_001552e0
// Address: 001552e0
// Size: 2627 bytes
// Class: MUPercussivePitchSystem


/* WARNING: Removing unreachable block (ram,0x00155c5a) */
/* WARNING: Removing unreachable block (ram,0x00155c5f) */
/* WARNING: Removing unreachable block (ram,0x00155c12) */
/* WARNING: Removing unreachable block (ram,0x00155b8d) */
/* WARNING: Removing unreachable block (ram,0x00155afc) */
/* WARNING: Removing unreachable block (ram,0x001559ba) */
/* WARNING: Removing unreachable block (ram,0x001559c6) */
/* WARNING: Removing unreachable block (ram,0x00155d0c) */
/* WARNING: Removing unreachable block (ram,0x00155d19) */
/* WARNING: Removing unreachable block (ram,0x001558d0) */
/* WARNING: Removing unreachable block (ram,0x0015580d) */
/* WARNING: Removing unreachable block (ram,0x00155741) */
/* WARNING: Removing unreachable block (ram,0x001556c8) */
/* WARNING: Removing unreachable block (ram,0x001556d1) */
/* WARNING: Removing unreachable block (ram,0x00155630) */
/* WARNING: Removing unreachable block (ram,0x00155635) */
/* WARNING: Removing unreachable block (ram,0x001554ed) */
/* WARNING: Removing unreachable block (ram,0x001553ea) */
/* WARNING: Removing unreachable block (ram,0x001553f3) */
/* WARNING: Removing unreachable block (ram,0x0015557d) */
/* WARNING: Removing unreachable block (ram,0x00155586) */
/* WARNING: Removing unreachable block (ram,0x0015568f) */
/* WARNING: Removing unreachable block (ram,0x00155694) */
/* WARNING: Removing unreachable block (ram,0x00155787) */
/* WARNING: Removing unreachable block (ram,0x00155790) */
/* WARNING: Removing unreachable block (ram,0x00155836) */
/* WARNING: Removing unreachable block (ram,0x0015583f) */
/* WARNING: Removing unreachable block (ram,0x001558c4) */
/* WARNING: Removing unreachable block (ram,0x00155955) */
/* WARNING: Removing unreachable block (ram,0x00155961) */
/* WARNING: Removing unreachable block (ram,0x001559ad) */
/* WARNING: Removing unreachable block (ram,0x00155a6b) */
/* WARNING: Removing unreachable block (ram,0x00155a77) */
/* WARNING: Removing unreachable block (ram,0x00155b08) */
/* WARNING: Removing unreachable block (ram,0x00155b99) */
/* WARNING: Removing unreachable block (ram,0x00155c1b) */
/* WARNING: Removing unreachable block (ram,0x00155c90) */
/* WARNING: Removing unreachable block (ram,0x00155c99) */

longlong * FUN_001552e0(pthread_key_t param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  void *pvVar3;
  longlong lVar4;
  longlong lVar5;
  pthread_key_t pVar6;
  longlong lVar7;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  bool bVar8;
  bool bVar9;
  longlong local_f8;
  char local_f0;
  longlong local_70;
  char local_68;
  longlong local_50;
  
  FUN_00154c40();
  lVar5 = *(longlong *)(unaff_RSI + 0x88);
  if (lVar5 != 0) {
    FUN_00d50b00();
  }
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e6a50();
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e6160();
  lVar1 = *(longlong *)(unaff_RSI + 0x88);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  uVar2 = FUN_00d237a0();
  *(undefined4 *)(unaff_RSI + 0xb0) = uVar2;
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if ((local_f0 != '\0') && (local_f8 != 0)) {
    FUN_00d50b20();
  }
  if (lVar5 != 0) {
    FUN_00d50b20();
  }
  lVar5 = *(longlong *)(unaff_RSI + 0x88);
  if (lVar5 != 0) {
    FUN_00d50b00();
  }
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e8920();
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012caf10();
  if (lVar1 == 0) {
    if (*(longlong *)(unaff_RSI + 0xa0) == 0) goto LAB_0015558b;
    *(undefined8 *)(unaff_RSI + 0xa0) = 0;
LAB_00155554:
    FUN_00d50b20();
  }
  else {
    FUN_00d50b00();
    lVar4 = *(longlong *)(unaff_RSI + 0xa0);
    if (lVar4 != lVar1) {
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      *(longlong *)(unaff_RSI + 0xa0) = lVar1;
      if (lVar4 != 0) goto LAB_00155554;
    }
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
LAB_0015558b:
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if (lVar5 != 0) {
    FUN_00d50b20();
  }
  lVar5 = *(longlong *)(unaff_RSI + 0x90);
  if ((lVar5 == 0) || (FUN_00d50b00(), *(longlong *)(unaff_RSI + 0x90) == 0)) {
    bVar8 = true;
  }
  else {
    FUN_00d50b00();
    bVar8 = false;
  }
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0150fe30();
  if (!bVar8) {
    FUN_00d50b20();
  }
  if (lVar5 != 0) {
    FUN_00d50b20();
  }
  if (lVar5 == lVar1) {
    bVar8 = false;
    bVar9 = false;
    local_50 = 0;
  }
  else {
    lVar4 = FUN_00e8b990();
    if (lVar4 != 0) {
      FUN_00e8b990();
      FUN_00cb1f10();
      if (lVar1 != 0) {
        FUN_00e8b990();
        FUN_00cb1f10();
        FUN_00db3260();
      }
    }
    lVar4 = *(longlong *)(unaff_RSI + 0x90);
    if (lVar4 != 0) {
      FUN_00d50b00();
    }
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0150fe30();
    bVar8 = lVar1 != 0;
    lVar7 = lVar1;
    if (bVar8) {
      FUN_00d50b00();
    }
    pVar6 = (pthread_key_t)lVar7;
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
    lVar4 = *(longlong *)(unaff_RSI + 0x90);
    if (lVar4 != 0) {
      FUN_00d50b00();
    }
    pvVar3 = _pthread_getspecific(pVar6);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0150fe10();
    bVar9 = lVar1 != 0;
    lVar7 = lVar1;
    if (bVar9) {
      FUN_00d50b00();
    }
    param_1 = (pthread_key_t)lVar7;
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
    lVar4 = *(longlong *)(unaff_RSI + 0x90);
    if (lVar4 != 0) {
      FUN_00d50b00();
    }
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0150ce10();
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
    lVar4 = *(longlong *)(unaff_RSI + 0x90);
    if (lVar4 != 0) {
      FUN_00d50b00();
    }
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_015127c0();
    local_50 = lVar1;
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_002dc990();
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  FUN_00155070();
  if (*(longlong *)(unaff_RSI + 0xa0) != 0) {
    *(longlong *)(unaff_RSI + 0xa0) = 0;
    FUN_00d50b20();
  }
  if (lVar5 != lVar1) {
    lVar5 = *(longlong *)(unaff_RSI + 0x90);
    if (lVar5 != 0) {
      FUN_00d50b00();
    }
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0150ce10();
    if (lVar5 != 0) {
      FUN_00d50b20();
    }
    lVar5 = *(longlong *)(unaff_RSI + 0x90);
    if (lVar5 != 0) {
      FUN_00d50b00();
    }
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0150ceb0();
    if (lVar5 != 0) {
      FUN_00d50b20();
    }
    lVar5 = *(longlong *)(unaff_RSI + 0x90);
    if (lVar5 != 0) {
      FUN_00d50b00();
    }
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0150c7f0();
    if (lVar5 != 0) {
      FUN_00d50b20();
    }
    lVar5 = *(longlong *)(unaff_RSI + 0x90);
    if (lVar5 != 0) {
      FUN_00d50b00();
    }
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0150d0b0();
    if (lVar5 != 0) {
      FUN_00d50b20();
    }
    lVar5 = FUN_00e8b990();
    if (lVar5 != 0) {
      FUN_00e8b990();
      FUN_00cb1f10();
      if (lVar1 != 0) {
        FUN_00e8b990();
        FUN_00cb1f10();
        FUN_00db3270();
      }
    }
  }
  *unaff_RDI = lVar1;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  if ((bVar8) && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((bVar9) && (local_50 != 0)) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}


