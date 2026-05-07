// Function: FUN_014d1e00
// Address: 014d1e00
// Size: 598 bytes
// Class: MUAudioSourcePrincipalItem


void FUN_014d1e00(pthread_key_t param_1)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  void *pvVar4;
  char *pcVar5;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong *local_50;
  longlong local_48;
  char local_40 [8];
  char local_38 [8];
  
  cVar3 = (**(code **)(*unaff_RDI + 1000))();
  if (cVar3 == '\0') {
    return;
  }
  (**(code **)(*unaff_RDI + 0x378))();
  if ((local_40[0] != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if (local_48 == 0) goto LAB_014d1f09;
  (**(code **)(*unaff_RDI + 0x378))();
  lVar1 = *unaff_RSI;
  if (lVar1 == local_48) {
    if (((char)unaff_RSI[1] != '\0') || (local_48 == 0)) goto LAB_014d1ef5;
    if (local_40[0] == '\0') {
      FUN_00d50b00();
      goto LAB_014d1eee;
    }
  }
  else {
    lVar2 = unaff_RSI[1];
    if (local_40[0] == '\0') {
      if (local_48 != 0) {
        FUN_00d50b00();
      }
      *unaff_RSI = local_48;
      if (((char)lVar2 != '\0') && (lVar1 != 0)) {
        FUN_00d50b20();
      }
LAB_014d1eee:
      local_50 = unaff_RSI + 1;
      *(undefined1 *)local_50 = 1;
LAB_014d1ef5:
      if ((local_40[0] != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      goto LAB_014d1f09;
    }
    *unaff_RSI = local_48;
    if (((char)lVar2 != '\0') && (lVar1 != 0)) {
      FUN_00d50b20();
    }
  }
  local_50 = unaff_RSI + 1;
  *(undefined1 *)local_50 = 1;
LAB_014d1f09:
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  (**(code **)(*unaff_RDI + 1000))();
  FUN_00d50b00();
  FUN_0134c2c0();
  FUN_00d50b20();
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  cVar3 = (**(code **)(*unaff_RDI + 1000))();
  FUN_00d23340();
  pcVar5 = local_38;
  if (local_40[0] != '\0') {
    pcVar5 = local_40;
  }
  local_38[0] = local_40[0];
  *pcVar5 = '\0';
  if ((local_40[0] != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38[0] == '\0') && (local_48 != 0)) {
    FUN_00d50b00();
  }
  FUN_0134c2c0();
  if (cVar3 != '\0') {
    FUN_00d50b20();
  }
  FUN_014bb250();
  FUN_014bb2b0();
  return;
}


