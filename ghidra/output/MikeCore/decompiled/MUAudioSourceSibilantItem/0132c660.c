// Function: FUN_0132c660
// Address: 0132c660
// Size: 547 bytes
// Class: MUAudioSourceSibilantItem


/* WARNING: Removing unreachable block (ram,0x0132c80e) */
/* WARNING: Removing unreachable block (ram,0x0132c817) */

void FUN_0132c660(pthread_key_t param_1)

{
  void *pvVar1;
  pthread_key_t pVar2;
  char *pcVar3;
  longlong *unaff_RDI;
  longlong local_78;
  char local_70;
  longlong local_68;
  char local_60;
  longlong local_48;
  char local_40 [8];
  char local_38 [8];
  
  FUN_012c9e50(param_1,0);
  if ((((local_40[0] == '\0') && (local_48 != 0)) && (FUN_00d50b00(), local_40[0] != '\0')) &&
     (local_48 != 0)) {
    FUN_00d50b20();
  }
  pvVar1 = _pthread_getspecific(param_1);
  if (pvVar1 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012cb110();
  pvVar1 = _pthread_getspecific(param_1);
  if (pvVar1 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e6160();
  FUN_00d23310();
  pVar2 = CONCAT31((int3)(param_1 >> 8),local_40[0]);
  pcVar3 = local_38;
  if (local_40[0] != '\0') {
    pcVar3 = local_40;
  }
  local_38[0] = local_40[0];
  *pcVar3 = '\0';
  if ((local_40[0] != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38[0] == '\0') && (local_48 != 0)) {
    FUN_00d50b00();
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  FUN_0132b1c0(0);
  if ((local_40[0] == '\0') && (local_48 != 0)) {
    FUN_00d50b00();
  }
  pvVar1 = _pthread_getspecific(pVar2);
  if (pvVar1 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e6c30();
  pvVar1 = _pthread_getspecific(pVar2);
  if (pvVar1 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012f49a0();
  *unaff_RDI = local_48;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  if (local_48 != 0) {
    FUN_00d50b20();
    FUN_00d50b20();
  }
  return;
}


