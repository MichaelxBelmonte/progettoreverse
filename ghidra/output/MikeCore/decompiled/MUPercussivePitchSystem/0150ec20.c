// Function: FUN_0150ec20
// Address: 0150ec20
// Size: 649 bytes
// Class: MUPercussivePitchSystem


/* WARNING: Removing unreachable block (ram,0x0150ee1a) */
/* WARNING: Removing unreachable block (ram,0x0150ee23) */
/* WARNING: Removing unreachable block (ram,0x0150ed99) */
/* WARNING: Removing unreachable block (ram,0x0150eda2) */
/* WARNING: Removing unreachable block (ram,0x0150ed13) */
/* WARNING: Removing unreachable block (ram,0x0150ed1c) */
/* WARNING: Removing unreachable block (ram,0x0150ee75) */
/* WARNING: Removing unreachable block (ram,0x0150ee7e) */

void FUN_0150ec20(pthread_key_t param_1)

{
  longlong lVar1;
  void *pvVar2;
  longlong *unaff_RSI;
  int iVar3;
  longlong local_40;
  char local_38;
  
  lVar1 = *unaff_RSI;
  if (lVar1 != 0) {
    if (0 < *(int *)(lVar1 + 0xc)) {
      iVar3 = 0;
      do {
        pvVar2 = _pthread_getspecific(param_1);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0125e930();
        if (local_38 == '\0') {
          if (local_40 != 0) {
            FUN_00d50b00();
            goto LAB_0150ed30;
          }
        }
        else if (local_40 != 0) {
LAB_0150ed30:
          pvVar2 = _pthread_getspecific(param_1);
          if (pvVar2 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0152ebe0();
          if ((local_38 == '\0') && (local_40 != 0)) {
            FUN_00d50b00();
          }
          FUN_0150da40();
          pvVar2 = _pthread_getspecific(param_1);
          if (pvVar2 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01508a20();
          pvVar2 = _pthread_getspecific(param_1);
          if (pvVar2 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0128c470();
          FUN_0150d560();
          if (local_40 != 0) {
            FUN_00d50b20();
          }
          FUN_00d50b20();
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(lVar1 + 0xc));
    }
    FUN_001159b0();
  }
  return;
}


