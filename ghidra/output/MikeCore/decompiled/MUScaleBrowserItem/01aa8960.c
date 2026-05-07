// Function: FUN_01aa8960
// Address: 01aa8960
// Size: 908 bytes
// Class: MUScaleBrowserItem


/* WARNING: Removing unreachable block (ram,0x01aa8c3a) */
/* WARNING: Removing unreachable block (ram,0x01aa8c43) */
/* WARNING: Removing unreachable block (ram,0x01aa8bca) */
/* WARNING: Removing unreachable block (ram,0x01aa8bd6) */
/* WARNING: Removing unreachable block (ram,0x01aa8a41) */
/* WARNING: Removing unreachable block (ram,0x01aa8a4a) */
/* WARNING: Removing unreachable block (ram,0x01aa89d5) */
/* WARNING: Removing unreachable block (ram,0x01aa89de) */
/* WARNING: Removing unreachable block (ram,0x01aa8ab7) */
/* WARNING: Removing unreachable block (ram,0x01aa8ac0) */
/* WARNING: Removing unreachable block (ram,0x01aa8c91) */
/* WARNING: Removing unreachable block (ram,0x01aa8c9a) */

longlong * FUN_01aa8960(pthread_key_t param_1)

{
  longlong lVar1;
  void *pvVar2;
  longlong *unaff_RDI;
  longlong lVar3;
  longlong local_98;
  char local_90;
  longlong local_68;
  char local_60;
  
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_00d51d20();
  if ((local_60 == '\0') && (local_68 != 0)) {
    FUN_00d50b00();
  }
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01265b80();
  if ((local_60 == '\0') && (local_68 != 0)) {
    FUN_00d50b00();
  }
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01265b80();
  if (local_60 == '\0') {
    if (local_68 != 0) {
      FUN_00d50b00();
      goto LAB_01aa8ac5;
    }
  }
  else if (local_68 != 0) {
LAB_01aa8ac5:
    if (0 < *(int *)(local_68 + 0xc)) {
      lVar3 = 0;
      do {
        lVar1 = *(longlong *)(*(longlong *)(local_68 + 0x10) + lVar3 * 8);
        if (lVar1 != 0) {
          FUN_00d50b00();
        }
        pvVar2 = _pthread_getspecific(param_1);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_011ef460();
        if (local_90 == '\0') {
          if (local_98 != 0) {
            FUN_00d50b00();
            goto LAB_01aa8be0;
          }
        }
        else if (local_98 != 0) {
LAB_01aa8be0:
          pvVar2 = _pthread_getspecific(param_1);
          if (pvVar2 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_013dd9a0();
          pvVar2 = _pthread_getspecific(param_1);
          if (pvVar2 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_011ef3f0();
          FUN_00d50b20();
        }
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
        lVar3 = lVar3 + 1;
      } while ((int)lVar3 < *(int *)(local_68 + 0xc));
    }
    FUN_0015edf0();
    *unaff_RDI = local_68;
    *(undefined1 *)(unaff_RDI + 1) = 1;
    FUN_00d50b20();
    goto joined_r0x01aa8cfb;
  }
  *unaff_RDI = local_68;
  *(undefined1 *)(unaff_RDI + 1) = 1;
joined_r0x01aa8cfb:
  if (local_68 != 0) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}


