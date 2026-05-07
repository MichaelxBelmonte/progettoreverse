// Function: FUN_0053a050
// Address: 0053a050
// Size: 759 bytes
// Class: MUAudioFileSource


/* WARNING: Removing unreachable block (ram,0x0053a1fe) */
/* WARNING: Removing unreachable block (ram,0x0053a20b) */
/* WARNING: Removing unreachable block (ram,0x0053a25a) */
/* WARNING: Removing unreachable block (ram,0x0053a2aa) */
/* WARNING: Removing unreachable block (ram,0x0053a34c) */
/* WARNING: Removing unreachable block (ram,0x0053a2be) */
/* WARNING: Removing unreachable block (ram,0x0053a264) */
/* WARNING: Removing unreachable block (ram,0x0053a26a) */
/* WARNING: Removing unreachable block (ram,0x0053a272) */
/* WARNING: Removing unreachable block (ram,0x0053a282) */
/* WARNING: Removing unreachable block (ram,0x0053a2cf) */
/* WARNING: Removing unreachable block (ram,0x0053a2a8) */
/* WARNING: Removing unreachable block (ram,0x0053a2d7) */
/* WARNING: Removing unreachable block (ram,0x0053a2dc) */
/* WARNING: Removing unreachable block (ram,0x0053a2de) */
/* WARNING: Removing unreachable block (ram,0x0053a2ea) */
/* WARNING: Removing unreachable block (ram,0x0053a18f) */
/* WARNING: Removing unreachable block (ram,0x0053a1a5) */
/* WARNING: Removing unreachable block (ram,0x0053a1b9) */
/* WARNING: Removing unreachable block (ram,0x0053a1c2) */
/* WARNING: Removing unreachable block (ram,0x0053a195) */
/* WARNING: Removing unreachable block (ram,0x0053a2ef) */
/* WARNING: Removing unreachable block (ram,0x0053a32c) */
/* WARNING: Removing unreachable block (ram,0x0053a331) */

longlong * FUN_0053a050(pthread_key_t param_1)

{
  longlong lVar1;
  longlong lVar2;
  void *pvVar3;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  longlong lVar4;
  longlong lVar5;
  longlong local_48;
  char local_40;
  
  lVar4 = *(longlong *)(unaff_RSI + 0x338);
  if (lVar4 == 0) {
    *(undefined1 *)(unaff_RDI + 1) = 0;
  }
  else {
    if (0 < *(int *)(lVar4 + 0xc)) {
      lVar5 = 0;
      do {
        lVar1 = *(longlong *)(*(longlong *)(lVar4 + 0x10) + lVar5 * 8);
        pvVar3 = _pthread_getspecific(param_1);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01657380();
        if ((local_40 != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
        if (local_48 == 0) {
          lVar2 = *(longlong *)(unaff_RSI + 0x338);
          if (lVar2 != 0) {
            FUN_00d50b00();
          }
          FUN_00539f40();
          if (lVar2 != 0) {
            FUN_00d50b20();
          }
          local_40 = '\0';
          FUN_00d23d90();
          local_48 = lVar1;
        }
        lVar5 = lVar5 + 1;
      } while ((int)lVar5 < *(int *)(lVar4 + 0xc));
    }
    FUN_00277f20();
    lVar4 = *(longlong *)(unaff_RSI + 0x338);
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if (lVar4 != 0) {
      FUN_00d50b00();
      goto LAB_0053a31b;
    }
  }
  lVar4 = 0;
LAB_0053a31b:
  *unaff_RDI = lVar4;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return unaff_RDI;
}


