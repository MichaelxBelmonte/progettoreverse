// Function: FUN_01c92050
// Address: 01c92050
// Size: 619 bytes
// Class: MUSignatureEditorRulerView


/* WARNING: Removing unreachable block (ram,0x01c92089) */
/* WARNING: Removing unreachable block (ram,0x01c92092) */
/* WARNING: Removing unreachable block (ram,0x01c9223a) */
/* WARNING: Removing unreachable block (ram,0x01c92243) */
/* WARNING: Removing unreachable block (ram,0x01c92273) */
/* WARNING: Removing unreachable block (ram,0x01c9227c) */

void FUN_01c92050(pthread_key_t param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  void *pvVar3;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  int iVar4;
  longlong local_58;
  char local_50;
  longlong local_40;
  char local_38;
  
  FUN_00d243f0();
  lVar1 = *unaff_RSI;
  if (lVar1 != 0) {
    if (0 < *(int *)(lVar1 + 0xc)) {
      iVar4 = 0;
      do {
        pvVar3 = _pthread_getspecific(param_1);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0125e930();
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if (local_40 != 0) {
          pvVar3 = _pthread_getspecific(param_1);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0125e930();
          pvVar3 = _pthread_getspecific(param_1);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0152ebe0();
          if ((local_38 == '\0') && (local_40 != 0)) {
            FUN_00d50b00();
          }
          if ((local_50 != '\0') && (local_58 != 0)) {
            FUN_00d50b20();
          }
          local_38 = '\0';
          FUN_00d21140();
          if (local_40 != 0) {
            FUN_00d50b20();
          }
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < *(int *)(lVar1 + 0xc));
    }
    FUN_001159b0();
  }
  lVar1 = *param_2;
  lVar2 = *(longlong *)(unaff_RDI + 0x28);
  if (lVar2 != lVar1) {
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    *(longlong *)(unaff_RDI + 0x28) = lVar1;
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  return;
}


