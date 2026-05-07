// Function: FUN_0173f250
// Address: 0173f250
// Size: 833 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x0173f546) */
/* WARNING: Removing unreachable block (ram,0x0173f553) */

undefined4 FUN_0173f250(pthread_key_t param_1)

{
  char cVar1;
  undefined4 uVar2;
  void *pvVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  pthread_key_t pVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong unaff_RDI;
  longlong local_88;
  char local_80;
  longlong local_68;
  char local_60;
  longlong local_40;
  char local_38;
  
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01738240();
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  if (local_68 != 0) {
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01738240();
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0124aba0();
    if ((local_60 == '\0') && (local_68 != 0)) {
      FUN_00d50b00();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (local_68 != 0) {
      if (0 < *(int *)(local_68 + 0xc)) {
        uVar8 = 0;
        do {
          local_38 = '\0';
          local_40 = 0;
          uVar5 = uVar8;
          while( true ) {
            pVar6 = (pthread_key_t)uVar5;
            pvVar3 = _pthread_getspecific(pVar6);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_01510d50();
            pvVar3 = _pthread_getspecific(pVar6);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            uVar4 = FUN_00e7bdb0();
            uVar5 = FUN_00e7bdb0();
            cVar1 = FUN_01252960(uVar5,uVar4,&local_40,0);
            if ((local_80 != '\0') && (local_88 != 0)) {
              FUN_00d50b20();
            }
            if (cVar1 == '\0') break;
            if (local_40 != unaff_RDI) {
              pvVar3 = _pthread_getspecific((pthread_key_t)uVar5);
              if (pvVar3 != (void *)0x0) {
                FUN_00e8b990();
              }
              cVar1 = FUN_0173f680();
              if (cVar1 == '\0') {
                if ((local_38 != '\0') && (local_40 != 0)) {
                  FUN_00d50b20();
                }
                FUN_0131c770();
                FUN_00d50b20();
                return 0;
              }
            }
          }
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
          uVar7 = (int)uVar8 + 1;
          uVar8 = (ulonglong)uVar7;
        } while ((int)uVar7 < *(int *)(local_68 + 0xc));
      }
      FUN_0131c770();
      FUN_00d50b20();
    }
  }
  uVar2 = FUN_0173f680();
  return uVar2;
}


