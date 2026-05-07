// Function: FUN_01510b20
// Address: 01510b20
// Size: 529 bytes
// Class: MUPercussivePitchSystem


void FUN_01510b20(undefined8 param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  void *pvVar1;
  longlong lVar2;
  undefined8 uVar3;
  char *pcVar4;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  longlong local_48;
  char local_40 [8];
  char local_38 [8];
  
  uVar3 = param_1;
  do {
    lVar2 = unaff_RSI;
    if ((*(longlong *)(lVar2 + 0x80) != 0) && (*(longlong *)(lVar2 + 0x78) != 0)) {
      if ((*(char *)(lVar2 + 0xa1) == '\0') &&
         (pvVar1 = _pthread_getspecific((pthread_key_t)uVar3), pvVar1 == (void *)0x0)) {
        FUN_015104e0();
      }
      if (*(longlong *)(lVar2 + 0x90) != 0) {
        if (param_2 >> 0x20 == 0) {
          pvVar1 = _pthread_getspecific((pthread_key_t)uVar3);
          if (pvVar1 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01252670(param_1,0,param_3,param_4);
          pcVar4 = local_38;
          if (local_40[0] != '\0') {
            pcVar4 = local_40;
          }
          local_38[0] = local_40[0];
          *pcVar4 = '\0';
          if ((local_40[0] != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          pvVar1 = _pthread_getspecific((pthread_key_t)uVar3);
          if (pvVar1 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012521f0(param_2,0,param_1,param_3);
          pcVar4 = local_38;
          if (local_40[0] != '\0') {
            pcVar4 = local_40;
          }
          local_38[0] = local_40[0];
          *pcVar4 = '\0';
          if ((local_40[0] != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
        }
        *(undefined1 *)(unaff_RDI + 1) = 0;
        if ((local_38[0] == '\0') && (local_48 != 0)) {
          FUN_00d50b00();
        }
        *unaff_RDI = local_48;
        *(undefined1 *)(unaff_RDI + 1) = 1;
        return;
      }
    }
    unaff_RSI = *(longlong *)(lVar2 + 0x50);
    if (unaff_RSI == 0) {
      *(undefined1 *)(unaff_RDI + 1) = 0;
      *unaff_RDI = 0;
      return;
    }
    pvVar1 = _pthread_getspecific((pthread_key_t)uVar3);
    if (pvVar1 != (void *)0x0) {
      unaff_RSI = *(longlong *)(lVar2 + 0x50);
      lVar2 = FUN_00e8b990();
      if (lVar2 != 0) {
        unaff_RSI = *(longlong *)(unaff_RSI + 0x20 + (ulonglong)(*(uint *)(lVar2 + 0x154) & 1) * 8);
      }
    }
  } while( true );
}


