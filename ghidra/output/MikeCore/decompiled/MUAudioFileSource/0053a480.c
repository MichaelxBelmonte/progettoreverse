// Function: FUN_0053a480
// Address: 0053a480
// Size: 759 bytes
// Class: MUAudioFileSource


/* WARNING: Removing unreachable block (ram,0x0053a62e) */
/* WARNING: Removing unreachable block (ram,0x0053a63b) */
/* WARNING: Removing unreachable block (ram,0x0053a68a) */
/* WARNING: Removing unreachable block (ram,0x0053a6da) */
/* WARNING: Removing unreachable block (ram,0x0053a77c) */
/* WARNING: Removing unreachable block (ram,0x0053a6ee) */
/* WARNING: Removing unreachable block (ram,0x0053a694) */
/* WARNING: Removing unreachable block (ram,0x0053a69a) */
/* WARNING: Removing unreachable block (ram,0x0053a6a2) */
/* WARNING: Removing unreachable block (ram,0x0053a6b2) */
/* WARNING: Removing unreachable block (ram,0x0053a6ff) */
/* WARNING: Removing unreachable block (ram,0x0053a6d8) */
/* WARNING: Removing unreachable block (ram,0x0053a707) */
/* WARNING: Removing unreachable block (ram,0x0053a70c) */
/* WARNING: Removing unreachable block (ram,0x0053a70e) */
/* WARNING: Removing unreachable block (ram,0x0053a71a) */
/* WARNING: Removing unreachable block (ram,0x0053a5bf) */
/* WARNING: Removing unreachable block (ram,0x0053a5d5) */
/* WARNING: Removing unreachable block (ram,0x0053a5e9) */
/* WARNING: Removing unreachable block (ram,0x0053a5f2) */
/* WARNING: Removing unreachable block (ram,0x0053a5c5) */
/* WARNING: Removing unreachable block (ram,0x0053a71f) */
/* WARNING: Removing unreachable block (ram,0x0053a75c) */
/* WARNING: Removing unreachable block (ram,0x0053a761) */

longlong * FUN_0053a480(pthread_key_t param_1)

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
  
  lVar4 = *(longlong *)(unaff_RSI + 0x340);
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
        FUN_012e6a50();
        if ((local_40 != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
        if (local_48 == 0) {
          lVar2 = *(longlong *)(unaff_RSI + 0x340);
          if (lVar2 != 0) {
            FUN_00d50b00();
          }
          FUN_003231a0();
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
    FUN_000be170();
    lVar4 = *(longlong *)(unaff_RSI + 0x340);
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if (lVar4 != 0) {
      FUN_00d50b00();
      goto LAB_0053a74b;
    }
  }
  lVar4 = 0;
LAB_0053a74b:
  *unaff_RDI = lVar4;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return unaff_RDI;
}


