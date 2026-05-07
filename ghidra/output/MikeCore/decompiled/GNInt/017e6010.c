// Function: FUN_017e6010
// Address: 017e6010
// Size: 529 bytes
// Class: GNInt


/* WARNING: Removing unreachable block (ram,0x017e6094) */
/* WARNING: Removing unreachable block (ram,0x017e609d) */
/* WARNING: Removing unreachable block (ram,0x017e6143) */
/* WARNING: Removing unreachable block (ram,0x017e614c) */

void FUN_017e6010(pthread_key_t param_1)

{
  longlong *plVar1;
  void *pvVar2;
  char *pcVar3;
  pthread_key_t pVar4;
  char *pcVar5;
  longlong unaff_RDI;
  longlong local_58;
  char local_50 [8];
  longlong local_48;
  char local_40;
  char local_38 [8];
  
  plVar1 = (longlong *)FUN_00e8fc40();
  FUN_0117ae00();
  (**(code **)(*plVar1 + 0x18))();
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_017dd940();
  FUN_017e5510();
  if (*(int *)(*(longlong *)(unaff_RDI + 0x50) + 0xc) != 0) {
    FUN_00d23310();
    local_38[0] = local_50[0];
    pcVar5 = local_38;
    pcVar3 = local_50;
    if (local_50[0] == '\0') {
      pcVar3 = pcVar5;
    }
    *pcVar3 = '\0';
    if ((local_50[0] != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    pVar4 = (pthread_key_t)pcVar5;
    pvVar2 = _pthread_getspecific(pVar4);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_017dfee0();
    if ((local_38[0] != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    pvVar2 = _pthread_getspecific(pVar4);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_00d23310();
    pcVar5 = local_50;
    if (local_50[0] == '\0') {
      pcVar5 = local_38;
    }
    local_38[0] = local_50[0];
    *pcVar5 = '\0';
    if ((local_50[0] != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    local_40 = 0;
    if ((local_38[0] == '\0') && (local_58 != 0)) {
      FUN_00d50b00();
    }
    local_48 = local_58;
    local_40 = '\x01';
    FUN_017ddad0();
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
  }
  FUN_00d50b20();
  return;
}


