// Function: FUN_013699d0
// Address: 013699d0
// Size: 575 bytes
// Class: MUAudioSourcePrincipalItem


/* WARNING: Removing unreachable block (ram,0x01369bde) */
/* WARNING: Removing unreachable block (ram,0x01369beb) */

undefined8 * FUN_013699d0(void)

{
  longlong lVar1;
  bool bVar2;
  undefined8 *puVar3;
  void *pvVar4;
  pthread_key_t pVar5;
  longlong lVar6;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  longlong lVar7;
  longlong lVar8;
  longlong local_48;
  char local_40;
  
  puVar3 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  pVar5 = 0x2572358;
  *puVar3 = &DAT_02572358;
  (*DAT_02572370)();
  pvVar4 = _pthread_getspecific(pVar5);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_014c2f20();
  pvVar4 = _pthread_getspecific(pVar5);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_014c2f80();
  lVar6 = *(longlong *)(unaff_RSI + 0xe8);
  if (*(int *)(lVar6 + 0xc) < 1) {
    bVar2 = false;
    lVar8 = 0;
  }
  else {
    lVar7 = 0;
    lVar8 = 0;
    bVar2 = false;
    do {
      lVar1 = *(longlong *)(*(longlong *)(lVar6 + 0x10) + lVar7 * 8);
      if (lVar8 == lVar1) {
        if ((!bVar2) && (lVar8 != 0)) {
          bVar2 = true;
          FUN_00d50b00();
        }
      }
      else {
        if (lVar1 != 0) {
          FUN_00d50b00();
        }
        if ((bVar2) && (lVar8 != 0)) {
          FUN_00d50b20();
          bVar2 = true;
          lVar8 = lVar1;
        }
        else {
          bVar2 = true;
          lVar8 = lVar1;
        }
      }
      pvVar4 = _pthread_getspecific((pthread_key_t)lVar6);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_014c34a0();
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if (local_48 != 0) {
        local_40 = '\0';
        FUN_00d21140();
        local_48 = lVar8;
      }
      lVar7 = lVar7 + 1;
      lVar6 = *(longlong *)(unaff_RSI + 0xe8);
    } while (lVar7 < *(int *)(lVar6 + 0xc));
  }
  *unaff_RDI = puVar3;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  if ((bVar2) && (lVar8 != 0)) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}


