// Function: FUN_004a5a00
// Address: 004a5a00
// Size: 588 bytes
// Class: MUAudioFileSource


byte FUN_004a5a00(pthread_key_t param_1)

{
  longlong lVar1;
  byte bVar2;
  byte bVar3;
  void *pvVar4;
  longlong unaff_RDI;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  lVar1 = *(longlong *)(unaff_RDI + 0x38);
  if (lVar1 == 0) {
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01713990();
  }
  else {
    FUN_00d50b00();
    local_38 = '\x01';
    local_40 = lVar1;
  }
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  bVar2 = FUN_0131ae60();
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  lVar1 = *(longlong *)(unaff_RDI + 0x38);
  if (lVar1 == 0) {
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01713990();
  }
  else {
    FUN_00d50b00();
    local_48 = '\x01';
    local_50 = lVar1;
  }
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01313ad0();
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012cb110();
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  bVar3 = FUN_004a0530();
  if (local_40 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  return bVar2 & bVar3;
}


