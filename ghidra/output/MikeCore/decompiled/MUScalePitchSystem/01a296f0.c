// Function: FUN_01a296f0
// Address: 01a296f0
// Size: 924 bytes
// Class: MUScalePitchSystem


/* WARNING: Removing unreachable block (ram,0x01a2982f) */
/* WARNING: Removing unreachable block (ram,0x01a29838) */

void FUN_01a296f0(undefined8 param_1,char param_2)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  void *pvVar4;
  longlong lVar5;
  pthread_key_t pVar6;
  char *pcVar7;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong local_58;
  char local_50 [8];
  longlong local_48;
  longlong local_40;
  char local_38 [8];
  
  if ((*unaff_RDI != 0) && (*unaff_RSI != 0)) {
    FUN_00d23310();
    pVar6 = (pthread_key_t)CONCAT71((int7)((ulonglong)param_1 >> 8),local_50[0]);
    pcVar7 = local_38;
    if (local_50[0] != '\0') {
      pcVar7 = local_50;
    }
    local_38[0] = local_50[0];
    *pcVar7 = '\0';
    if ((local_50[0] != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if (local_38[0] == '\0') {
      if (local_58 == 0) {
        return;
      }
      FUN_00d50b00();
    }
    else if (local_58 == 0) {
      return;
    }
    pvVar4 = _pthread_getspecific(pVar6);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    cVar1 = FUN_0129a390();
    if (cVar1 != '\0') {
      pvVar4 = _pthread_getspecific(pVar6);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      cVar1 = FUN_0129a470();
      if (cVar1 != '\0') {
        (**(code **)(*(longlong *)*unaff_RDI + 0xe48))();
        local_48 = local_58;
        if (local_50[0] == '\0') {
          if (((local_58 != 0) && (FUN_00d50b00(), local_50[0] != '\0')) && (local_58 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_50[0] = '\0';
        }
        pvVar4 = _pthread_getspecific(pVar6);
        if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
          pVar6 = (pthread_key_t)local_48;
        }
        cVar1 = FUN_0129a3a0();
        if (cVar1 != '\0') {
          pvVar4 = _pthread_getspecific(pVar6);
          if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
            pVar6 = (pthread_key_t)local_48;
          }
          FUN_01266fe0();
          local_40 = local_58;
          if ((((local_50[0] == '\0') && (local_58 != 0)) && (FUN_00d50b00(), local_50[0] != '\0'))
             && (local_58 != 0)) {
            FUN_00d50b20();
          }
          pvVar4 = _pthread_getspecific(pVar6);
          if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
            pVar6 = (pthread_key_t)local_40;
          }
          FUN_00e7bdb0();
          FUN_00e7bdb0();
          bVar2 = FUN_012fa750();
          pvVar4 = _pthread_getspecific(pVar6);
          if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
            pVar6 = (pthread_key_t)local_40;
          }
          FUN_00e7bdb0();
          FUN_00e7bdb0();
          bVar3 = FUN_012fb890();
          if ((param_2 != '\0') && ((bVar2 | bVar3) == 1)) {
            pvVar4 = _pthread_getspecific(pVar6);
            if (pvVar4 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_00e8b990();
            FUN_00cb1f10();
            FUN_00db32a0();
            if ((local_50[0] != '\0') && (local_58 != 0)) {
              FUN_00d50b20();
            }
          }
          if (local_40 != 0) {
            FUN_00d50b20();
          }
        }
        if (local_48 != 0) {
          FUN_00d50b20();
        }
      }
    }
    FUN_00d50b20();
  }
  return;
}


