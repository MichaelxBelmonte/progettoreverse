// Function: FUN_017d58d0
// Address: 017d58d0
// Size: 597 bytes
// Class: GNString


void FUN_017d58d0(longlong *param_1)

{
  longlong lVar1;
  char cVar2;
  void *pvVar3;
  longlong unaff_RDI;
  int iVar4;
  longlong local_98;
  char local_90;
  longlong local_60;
  char local_58;
  
  cVar2 = FUN_00d59e50();
  if ((((cVar2 != '\0') || (cVar2 = FUN_00d59e50(), cVar2 != '\0')) ||
      (cVar2 = FUN_00d59e50(), cVar2 != '\0')) || (cVar2 = FUN_00d59e50(), cVar2 != '\0')) {
    FUN_00d403d0();
    lVar1 = DAT_027d3938;
    if (DAT_027d3938 != 0) {
      FUN_00d50b00();
    }
    if (unaff_RDI != 0) {
      FUN_00d50b00();
    }
    local_60 = 0;
    local_58 = '\0';
    param_1 = &local_60;
    FUN_00d40470(param_1,&stack0xffffffffffffffb0,1,3);
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if (unaff_RDI != 0) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
  }
  cVar2 = FUN_00d59e50();
  if ((cVar2 != '\0') && (lVar1 = *(longlong *)(unaff_RDI + 0x68), lVar1 != 0)) {
    if (0 < *(int *)(lVar1 + 0xc)) {
      iVar4 = 0;
      do {
        pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_00d50b00();
        FUN_018bb110();
        if (unaff_RDI != 0) {
          FUN_00d50b20();
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < *(int *)(lVar1 + 0xc));
    }
    FUN_018bc370();
  }
  FUN_00d654d0();
  return;
}


