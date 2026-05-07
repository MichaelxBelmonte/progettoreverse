// Function: FUN_01353c30
// Address: 01353c30
// Size: 697 bytes
// Class: MUAudioSourceDescription


/* WARNING: Removing unreachable block (ram,0x01353eb9) */
/* WARNING: Removing unreachable block (ram,0x01353ec2) */
/* WARNING: Removing unreachable block (ram,0x01353d1d) */
/* WARNING: Removing unreachable block (ram,0x01353d26) */

uint FUN_01353c30(undefined8 param_1,char param_2)

{
  int iVar1;
  uint uVar2;
  void *pvVar3;
  pthread_key_t pVar4;
  pthread_key_t pVar5;
  longlong unaff_RDI;
  longlong local_58;
  char local_50;
  
  if (((*(longlong *)(unaff_RDI + 0x1f8) == 0) && (*(longlong *)(unaff_RDI + 0x200) == 0)) &&
     (*(longlong *)(unaff_RDI + 0x148) != 0)) {
    pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    iVar1 = FUN_0141bab0();
    if (iVar1 == 3) {
      pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013de560();
      if (local_58 == 0) {
        pVar4 = (pthread_key_t)CONCAT71((int7)((ulonglong)param_1 >> 8),1);
        local_58 = 0;
      }
      else if (local_50 == '\0') {
        FUN_00d50b00();
        pVar4 = 0;
      }
      else {
        pVar4 = 0;
      }
      pVar5 = pVar4;
      pvVar3 = _pthread_getspecific(pVar4);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar2 = FUN_014bc070();
      if ((char)uVar2 == '\0') {
        FUN_0134c610();
        FUN_01327e70();
        FUN_01327a80();
        FUN_01328e30();
        if (param_2 != '\0') {
          FUN_013293f0();
        }
        pvVar3 = _pthread_getspecific(pVar5);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_014d20e0();
        pvVar3 = _pthread_getspecific(pVar5);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_014d23d0();
        pvVar3 = _pthread_getspecific(pVar5);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_014bbe30();
      }
      if ((char)pVar4 != '\0' || local_58 == 0) {
        return uVar2 ^ 1;
      }
      FUN_00d50b20();
      return uVar2 ^ 1;
    }
  }
  return 0;
}


