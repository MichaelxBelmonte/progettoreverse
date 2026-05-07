// Function: FUN_016ba6a0
// Address: 016ba6a0
// Size: 658 bytes
// Class: MUAraContentReader
// String references:
//   "provided object ref is invalid"
//   "call required from document main thread"
//   "audioSource->getDocumentController() == documentController"


/* WARNING: Removing unreachable block (ram,0x016ba8f1) */
/* WARNING: Removing unreachable block (ram,0x016ba8fa) */
/* WARNING: Removing unreachable block (ram,0x016ba87f) */
/* WARNING: Removing unreachable block (ram,0x016ba888) */

int FUN_016ba6a0(pthread_key_t param_1)

{
  longlong lVar1;
  char cVar2;
  void *pvVar3;
  longlong unaff_RSI;
  longlong unaff_RDI;
  int iVar4;
  longlong lVar5;
  longlong local_60;
  char local_58;
  
  FUN_00da7190();
  if ((unaff_RDI == 0) || (cVar2 = FUN_0168a120(), cVar2 == '\0')) {
    iVar4 = 0;
    if ((DAT_02802f60 != (undefined8 *)0x0) && (iVar4 = 0, (code *)*DAT_02802f60 != (code *)0x0)) {
      (*(code *)*DAT_02802f60)();
    }
  }
  else {
    cVar2 = FUN_0168a0d0();
    if (cVar2 == '\0') {
      iVar4 = 0;
      if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
        (*(code *)*DAT_02802f60)();
        iVar4 = 0;
      }
    }
    else if ((unaff_RSI == 0) || (cVar2 = FUN_0166db10(), cVar2 == '\0')) {
      iVar4 = 0;
      if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
        (*(code *)*DAT_02802f60)();
      }
    }
    else {
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01660830();
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      if (local_60 == unaff_RDI) {
        pvVar3 = _pthread_getspecific(param_1);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01662650();
        if ((local_58 == '\0') && (local_60 != 0)) {
          FUN_00d50b00();
        }
        lVar1 = DAT_028ad890;
        if (DAT_028ad890 == 0) {
LAB_016ba90a:
          iVar4 = 0;
        }
        else {
          lVar5 = 0;
          do {
            if (*(int *)(lVar1 + 0xc) <= (int)lVar5) {
              FUN_00018280();
              goto LAB_016ba90a;
            }
            cVar2 = (**(code **)(**(longlong **)(*(longlong *)(lVar1 + 0x10) + lVar5 * 8) + 0x50))()
            ;
            lVar5 = lVar5 + 1;
          } while (cVar2 == '\0');
          FUN_00018280();
          iVar4 = (int)lVar5 + -1;
        }
        if (local_60 != 0) {
          FUN_00d50b20();
        }
      }
      else {
        iVar4 = 0;
        if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
          (*(code *)*DAT_02802f60)();
        }
      }
    }
  }
  FUN_00da71b0();
  return iVar4;
}


