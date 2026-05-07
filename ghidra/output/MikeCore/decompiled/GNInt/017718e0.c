// Function: FUN_017718e0
// Address: 017718e0
// Size: 785 bytes
// Class: GNInt


float FUN_017718e0(float param_1,undefined4 param_2)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  void *pvVar4;
  char *pcVar5;
  pthread_key_t pVar6;
  int unaff_ESI;
  longlong unaff_RDI;
  char *pcVar7;
  float fVar8;
  float local_64;
  float local_60;
  float local_5c;
  longlong local_58;
  char local_50 [8];
  float local_48;
  float local_44;
  char local_40 [8];
  char local_38 [8];
  
  local_48 = 0.0;
  if (-1 < unaff_ESI) {
    iVar1 = *(int *)(*(longlong *)(unaff_RDI + 0x50) + 0xc);
    if (((*(char *)(unaff_RDI + 0x38) != '\0') || (unaff_ESI < iVar1)) &&
       ((*(char *)(unaff_RDI + 0x38) == '\0' || (unaff_ESI < iVar1 + -1)))) {
      pVar6 = (pthread_key_t)&local_60;
      local_44 = param_1;
      cVar3 = FUN_017715d0(param_2,&local_64);
      local_48 = 0.0;
      if (cVar3 != '\0') {
        local_5c = (float)FUN_017708f0();
        pvVar4 = _pthread_getspecific(pVar6);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        fVar8 = (float)FUN_01779ec0();
        fVar8 = fVar8 + local_44;
        local_44 = local_60;
        if (fVar8 <= local_60) {
          local_44 = fVar8;
        }
        local_48 = local_64;
        pvVar4 = _pthread_getspecific(pVar6);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        if (local_48 <= local_44) {
          local_48 = local_44;
        }
        local_44 = (float)FUN_01779ec0();
        pvVar4 = _pthread_getspecific(pVar6);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_48 = local_48 - local_44;
        pvVar4 = _pthread_getspecific(pVar6);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        fVar8 = (float)FUN_01779ec0();
        FUN_01779ed0(fVar8 + local_48);
        if (*(char *)(unaff_RDI + 0x38) != '\0') {
          FUN_00d23340();
          lVar2 = local_58;
          local_40[0] = local_50[0];
          pcVar5 = local_40;
          if (local_50[0] != '\0') {
            pcVar5 = local_50;
          }
          *pcVar5 = '\0';
          if ((local_50[0] != '\0') && (local_58 != 0)) {
            FUN_00d50b20();
          }
          pvVar4 = _pthread_getspecific(pVar6);
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_00d23310();
          pcVar5 = local_38;
          pcVar7 = local_50;
          if (local_50[0] == '\0') {
            pcVar7 = pcVar5;
          }
          local_38[0] = local_50[0];
          *pcVar7 = '\0';
          if ((local_50[0] != '\0') && (local_58 != 0)) {
            FUN_00d50b20();
          }
          pvVar4 = _pthread_getspecific((pthread_key_t)pcVar5);
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          fVar8 = (float)FUN_01779ec0();
          FUN_01779ed0(local_5c + fVar8);
          if ((local_38[0] != '\0') && (local_58 != 0)) {
            FUN_00d50b20();
          }
          if ((local_40[0] != '\0') && (lVar2 != 0)) {
            FUN_00d50b20();
          }
        }
      }
    }
  }
  return local_48;
}


